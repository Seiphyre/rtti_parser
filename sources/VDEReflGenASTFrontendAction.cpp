#include "VDEReflGenASTFrontendAction.h"

using namespace clang;

void MyFrontendAction::WatchMetaHeader(const FileInfo & file_info)
{
    if (!file_info.has_include_meta)
    {
        // int random = rand() % 100000 + 100000; // range 100 000 to 999 999

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
        std::cout << "I should OVERWRITE meta::registerMembers<>()" << std::endl;

        m_rewriter.ReplaceText((*it)->range_loc, register_class_tmpl_filled);
    }
}

std::unique_ptr<ASTConsumer> MyFrontendAction::CreateASTConsumer(CompilerInstance & CI, StringRef file)
{
    m_rewriter.setSourceMgr(CI.getSourceManager(), CI.getLangOpts());
    m_compiler = &CI;

    // processor callbacks: includes, pragma, ...
    CI.getPreprocessor().addPPCallbacks(std::make_unique<MyPPCallbacks>(CI));

    // add file to data
    g_data[g_data_index] = new FileInfo();

    std::string main_file_name;
    std::string main_file_dir_path;
    std::string main_file_ext;

    split_path(file.str(), main_file_dir_path, main_file_name, main_file_ext);

    g_data[g_data_index]->file_name_without_ext = main_file_name;
    g_data[g_data_index]->file_dir_path         = main_file_dir_path;
    g_data[g_data_index]->file_ext              = main_file_ext;

    // std::cout << "file_id: " << g_data[main_file_id].main_file_id.getHashValue() << std::endl;
    // std::cout << "--- " << g_data[data_index].file_name_without_ext << " ---" << std::endl;
    // std::cout << "file_dir: " << g_data[main_file_id].main_file_dir_path << std::endl;

    FileID main_file_id = CI.getSourceManager().getMainFileID();

    g_data[g_data_index]->end_of_file_loc   = CI.getSourceManager().getLocForEndOfFile(main_file_id);
    g_data[g_data_index]->start_of_file_loc = CI.getSourceManager().getLocForStartOfFile(main_file_id);

    // CI.getSourceManager().getLocForEndOfFile(main_file_id).dump(CI.getSourceManager());

    return std::make_unique<MyASTConsumer>(CI, m_rewriter); // pass CI pointer to ASTConsumer
}

void MyFrontendAction::EndSourceFileAction()
{
    // -- Update --

    FileInfo * file_info = g_data[g_data_index];
    std::cout << "--- " << file_info->get_file_name() << " ---" << std::endl;

    WatchMetaHeader(*file_info);

    for (int i = 0; i < file_info->classes.size(); i++)
    {
        ClassInfo * class_info = file_info->classes[i];

        WatchMetaFriendRegisterFunc(*file_info, *class_info);
        WatchMetaRegisterFunc(*file_info, *class_info);
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

    // -- update data index --
    g_data_index++;
}