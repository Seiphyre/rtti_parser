#include "VDEReflGenASTFrontendAction.h"

using namespace clang;

void MyFrontendAction::WatchMetaHeader(const FileInfo & file_info)
{
    if (!file_info.has_include_meta)
    {
        // int random = rand() % 100000 + 100000; // range 100 000 to 999 999

        if (m_verbose)
            std::cout << "I should write meta.h" << std::endl;

        std::string incl_guard_token = "VDENGINE_META_HEADER"; //"META_HEADER_" + std::to_string(random) + "_";
        std::string meta_incl_path   = "metaStuff/Meta.h";

        std::string meta_include_tmpl_filled = string_format(meta_header_tmpl, meta_incl_path);

        std::string include_guard_tmpl_filled = string_format(include_guard_tmpl, incl_guard_token, incl_guard_token,
                                                              meta_include_tmpl_filled, incl_guard_token);

        // std::cout << std::endl << meta_include_template_filled << std::endl;

        m_rewriter.InsertText(file_info.start_of_file_loc, include_guard_tmpl_filled);
    }
}

void MyFrontendAction::WatchMetaFriendRegisterFunc(const FileInfo & file_info, const ClassInfo & class_info)
{
    if (!class_info.has_friend_register_member_func)
    {
        if (m_verbose)
            std::cout << "I should write friend meta::registerMembers<>()" << std::endl;

        std::string meta_friend_register_tmpl_filled = string_format(meta_friend_register_tmpl, class_info.type_str);

        m_rewriter.InsertTextAfterToken(class_info.class_brace_range.getBegin(), meta_friend_register_tmpl_filled);
    }
}

void MyFrontendAction::WatchMetaRegisterFunc(const FileInfo & file_info, const ClassInfo & class_info)
{
    // -- Members -------------------------------------------------------------------

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

    // -- Class ----------------------------------------------------------------------

    std::string register_class_tmpl_filled;

    std::string class_type = class_info.type_str;

    if (class_info.bases_type.size() > 0)
        register_class_tmpl_filled = string_format(meta_register_class_with_base_tmpl, class_type,
                                                   class_info.bases_type[0], register_members_tmpl_filled);
    else
        register_class_tmpl_filled = string_format(meta_register_class_tmpl, class_type, register_members_tmpl_filled);

    // -------------------------------------------------------------------------------

    std::vector<RegisterMemberFuncInfo *>::const_iterator it;
    it = std::find_if(
        file_info.register_member_funcs.begin(), file_info.register_member_funcs.end(),
        [&class_info](const RegisterMemberFuncInfo * func) { return func->templ_type == class_info.type; });

    if (it == file_info.register_member_funcs.end())
    {
        if (m_verbose)
            std::cout << "I should WRITE meta::registerMembers<>()" << std::endl;

        // -- Include Guard --------------------------------------------------------------

        std::string class_type_upper = convert_to_header_guard_format(class_type, "::");
        std::string incl_guard_token = "META_REGISTER_" + class_type_upper;

        std::string result = string_format(include_guard_tmpl, incl_guard_token, incl_guard_token,
                                           register_class_tmpl_filled, incl_guard_token);

        m_rewriter.InsertTextAfterToken(file_info.end_of_file_loc, result);
    }
    else
    {
        if (m_verbose)
            std::cout << "I should OVERWRITE meta::registerMembers<>()" << std::endl;

        m_rewriter.ReplaceText((*it)->range_loc, register_class_tmpl_filled);
    }
}

bool MyFrontendAction::PrepareToExecuteAction(clang::CompilerInstance & CI)
{
    // m_current_file_info = new FileInfo();
    m_verbose = true;

    m_diag_consumer = new CountDiagConsumer(m_current_file_info);

    if (!CI.hasDiagnostics())
    {
        CI.createDiagnostics(m_diag_consumer);
        // CI.createDiagnostics(new clang::IgnoringDiagConsumer());
        std::cout << "[Warning] [MyFrontendAction::PrepareToExecuteAction] new Diagnostics has been created."
                  << std::endl;
    }
    else
    {
        CI.getDiagnostics().setClient(m_diag_consumer);
        // CI.getDiagnostics().setClient(new clang::IgnoringDiagConsumer());
    }

    // CI.getDiagnostics().setErrorLimit(1);

    // LangOpts setting to enable C++
    //
    // langOpts.GNUMode = 1;
    // langOpts.CXXExceptions = 1;
    // langOpts.RTTI = 1;
    // langOpts.Bool = 1;
    // langOpts.CPlusPlus = 1;

    return true;
}

bool MyFrontendAction::BeginInvocation(CompilerInstance & CI)
{
    return true;
}

std::unique_ptr<ASTConsumer> MyFrontendAction::CreateASTConsumer(CompilerInstance & CI, StringRef file)
{
    m_rewriter.setSourceMgr(CI.getSourceManager(), CI.getLangOpts());
    m_compiler = &CI;

    // processor callbacks: includes, pragma, ...
    CI.getPreprocessor().addPPCallbacks(std::make_unique<MyPPCallbacks>(CI, m_current_file_info));

    // add file to data

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

    return std::make_unique<MyASTConsumer>(CI, m_rewriter, m_current_file_info);
}

void MyFrontendAction::ExecuteAction()
{
    ASTFrontendAction::ExecuteAction();
}

void MyFrontendAction::EndSourceFileAction()
{
    // -- Update --

    if (!m_current_file_info.is_valid)
    {
        if (m_verbose)
            std::cout << "Errors has been found. This file will be ignored.\n" << std::endl;
        return;
    }

    // std::cout << "nb errs: " << m_compiler->getDiagnosticClient().getNumErrors() << std::endl;
    // std::cout << std::boolalpha << "is_valid: " << m_current_file_info->is_valid << std::endl;

    WatchMetaHeader(m_current_file_info);

    for (int i = 0; i < m_current_file_info.classes.size(); i++)
    {
        ClassInfo * class_info = m_current_file_info.classes[i];

        WatchMetaFriendRegisterFunc(m_current_file_info, *class_info);
        WatchMetaRegisterFunc(m_current_file_info, *class_info);
    }

    // -- Write modifications --

    m_rewriter.overwriteChangedFiles();

    // FileID main_file_id = m_compiler->getSourceManager().getMainFileID();

    // const RewriteBuffer * rewrite_buffer = m_rewriter->getRewriteBufferFor(main_file_id);

    // if (rewrite_buffer != nullptr)
    // {
    //     // Write in the console
    //     rewrite_buffer->write(llvm::errs());

    //     // Write in a file
    //     std::error_code      error_code;
    //     llvm::raw_fd_ostream out_file("output.txt", error_code, llvm::sys::fs::F_None);

    //     rewrite_buffer->write(out_file); // --> this will write the result to outFile
    //     out_file.close();
    // }

    if (m_verbose)
        std::cout << std::endl;
}