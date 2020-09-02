#include "CustomASTFrontendAction.h"

using namespace clang;

bool CustomASTFrontendAction::BeginInvocation(clang::CompilerInstance & CI)
{
    // -- Set Diagnostic Consumer ----------
    m_diag_consumer = new CustomDiagConsumer(m_current_file_info);

    if (!CI.hasDiagnostics())
    {
        CI.createDiagnostics(m_diag_consumer);
        std::cout << "[Warning] [MyFrontendAction::PrepareToExecuteAction] new Diagnostics has been created."
                  << std::endl;
    }
    else
    {
        CI.getDiagnostics().setClient(m_diag_consumer);
    }

    // -- Set Compiler to "C++ mode" -------

    // LangOptions lang_opts = CI.getLangOpts(); // Or LangOptions & ?
    //
    // lang_opts.CPlusPlus     = 1;
    // lang_opts.GNUMode       = 1;
    // lang_opts.CXXExceptions = 1; // handle exceptions
    // lang_opts.RTTI          = 1;
    // lang_opts.Bool          = 1; // handle "true" / "false" keywords
    //
    // InputKind ik_cxx = InputKind(Language::CXX);
    //
    // CI.getInvocation().setLangDefaults(lang_opts, ik_cxx, CI.getTarget().getTriple(), CI.getPreprocessorOpts(),
    //                                    LangStandard::lang_cxx11);

    // -- Set Compiler header search paths -------

    // HeaderSearchOptions & header_search_opts = CI.getHeaderSearchOpts();
    //
    // header_search_opts.AddPath("/my/new/header/search/path", clang::frontend::Angled, false, false);
    // header_search_opts.AddPath("/my/new/header/search/path", clang::frontend::Quoted, false, false);

    return true;
}

// ----------------------------------------------------------------------------------------------

bool CustomASTFrontendAction::BeginSourceFileAction(CompilerInstance & CI)
{
    m_verbose = true;

    // -- Set Compiler ---------------------
    m_compiler = &CI;

    // -- Set Rewriter ---------------------
    m_rewriter.setSourceMgr(CI.getSourceManager(), CI.getLangOpts());

    // -- Set PP Callbacks -----------------
    CI.getPreprocessor().addPPCallbacks(std::make_unique<CustomPPCallbacks>(CI, m_current_file_info));

    return true;
}

// ----------------------------------------------------------------------------------------------

std::unique_ptr<ASTConsumer> CustomASTFrontendAction::CreateASTConsumer(CompilerInstance & CI, StringRef file)
{
    // -- Update basic file data: filename, path, eof location --

    std::string main_file_name;
    std::string main_file_dir_path;
    std::string main_file_ext;

    split_path(file.str(), main_file_dir_path, main_file_name, main_file_ext);

    m_current_file_info.file_name_without_ext = main_file_name;
    m_current_file_info.file_dir_path         = main_file_dir_path;
    m_current_file_info.file_ext              = main_file_ext;

    FileID main_file_id = CI.getSourceManager().getMainFileID();

    m_current_file_info.end_of_file_loc   = CI.getSourceManager().getLocForEndOfFile(main_file_id);
    m_current_file_info.start_of_file_loc = CI.getSourceManager().getLocForStartOfFile(main_file_id);

    if (m_verbose)
        std::cout << "----- " << m_current_file_info.get_file_name() << " -----\n" << std::endl;

    // -- Create the AST Consumer --

    return std::make_unique<CustomASTConsumer>(CI, m_rewriter, m_current_file_info);
}

// ----------------------------------------------------------------------------------------------

void CustomASTFrontendAction::EndSourceFileAction()
{
    // -- Handle errors --

    if (!m_current_file_info.is_valid)
    {
        if (m_verbose)
            std::cout << "Errors has been found. This file will be ignored.\n" << std::endl;
        return;
    }

    // -- Write modifications --

    WatchMetaHeader(m_current_file_info);

    for (int i = 0; i < m_current_file_info.classes.size(); i++)
    {
        ClassInfo * class_info = m_current_file_info.classes[i];

        WatchMetaFriendRegisterFunc(m_current_file_info, *class_info);
        WatchMetaRegisterFunc(m_current_file_info, *class_info);
    }

    m_rewriter.overwriteChangedFiles();

    // FileID main_file_id = m_compiler->getSourceManager().getMainFileID();
    //
    // const RewriteBuffer * rewrite_buffer = m_rewriter->getRewriteBufferFor(main_file_id);
    //
    // if (rewrite_buffer != nullptr)
    // {
    //     // Write in the console
    //     rewrite_buffer->write(llvm::errs());
    //
    //     // Write in a file
    //     std::error_code      error_code;
    //     llvm::raw_fd_ostream out_file("output.txt", error_code, llvm::sys::fs::F_None);
    //
    //     rewrite_buffer->write(out_file); // --> this will write the result to outFile
    //     out_file.close();
    // }

    if (m_verbose)
        std::cout << std::endl;
}

// ----------------------------------------------------------------------------------------------

void CustomASTFrontendAction::WatchMetaHeader(const FileInfo & file_info)
{
    if (!file_info.has_include_meta)
    {
        if (m_verbose)
            std::cout << "WRITE #include \"meta.h\"" << std::endl;

        std::string incl_guard_token = "VDENGINE_META_HEADER"; //"META_HEADER_" + std::to_string(random) + "_";
        std::string meta_incl_path   = "metaStuff/Meta.h";

        std::string meta_include_tmpl_filled = string_format(meta_header_tmpl, meta_incl_path);

        std::string include_guard_tmpl_filled = string_format(include_guard_tmpl, incl_guard_token, incl_guard_token,
                                                              meta_include_tmpl_filled, incl_guard_token);

        // std::cout << std::endl << meta_include_template_filled << std::endl;

        m_rewriter.InsertText(file_info.start_of_file_loc, include_guard_tmpl_filled);
    }
}

// ----------------------------------------------------------------------------------------------

void CustomASTFrontendAction::WatchMetaFriendRegisterFunc(const FileInfo & file_info, const ClassInfo & class_info)
{
    if (!class_info.has_friend_register_member_func)
    {
        if (m_verbose)
            std::cout << "WRITE friend function meta::registerMembers<>()" << std::endl;

        std::string meta_friend_register_tmpl_filled = string_format(meta_friend_register_tmpl, class_info.type_str);

        m_rewriter.InsertTextAfterToken(class_info.class_brace_range.getBegin(), meta_friend_register_tmpl_filled);
    }
}

// ----------------------------------------------------------------------------------------------

void CustomASTFrontendAction::WatchMetaRegisterFunc(const FileInfo & file_info, const ClassInfo & class_info)
{
    // -- Members --------------------------------

    std::string register_members_tmpl_filled = "";

    for (int j = 0; j < class_info.attributes.size(); j++)
    {
        std::string name = class_info.attributes[j]->name;
        std::string type = class_info.attributes[j]->full_name;

        // members_tmpl_filled += "        ";
        register_members_tmpl_filled += string_format(meta_register_member_tmpl, name, type);

        if (j + 1 < class_info.attributes.size())
            register_members_tmpl_filled += ",\n";
    }

    // -- Class -----------------------------------

    std::string register_class_tmpl_filled;

    std::string class_type = class_info.type_str;

    if (class_info.bases_type.size() > 0)
        register_class_tmpl_filled = string_format(meta_register_class_with_base_tmpl, class_type,
                                                   class_info.bases_type[0], register_members_tmpl_filled);
    else
        register_class_tmpl_filled = string_format(meta_register_class_tmpl, class_type, register_members_tmpl_filled);

    // ---------------------------------------------

    std::vector<RegisterMemberFuncInfo *>::const_iterator it;
    it = std::find_if(
        file_info.register_member_funcs.begin(), file_info.register_member_funcs.end(),
        [&class_info](const RegisterMemberFuncInfo * func) { return func->templ_type == class_info.type; });

    if (it == file_info.register_member_funcs.end())
    {
        if (m_verbose)
            std::cout << "WRITE meta::registerMembers<>()" << std::endl;

        // -- Include Guard -------------------------

        std::string class_type_upper = convert_to_header_guard_format(class_type, "::");
        std::string incl_guard_token = "META_REGISTER_" + class_type_upper;

        std::string result = string_format(include_guard_tmpl, incl_guard_token, incl_guard_token,
                                           register_class_tmpl_filled, incl_guard_token);

        m_rewriter.InsertTextAfterToken(file_info.end_of_file_loc, result);
    }
    else
    {
        if (m_verbose)
            std::cout << "OVERWRITE meta::registerMembers<>()" << std::endl;

        m_rewriter.ReplaceText((*it)->range_loc, register_class_tmpl_filled);
    }
}