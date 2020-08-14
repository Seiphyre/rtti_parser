#include "VDEReflGenASTFrontendAction.h"

std::unique_ptr<ASTConsumer> MyFrontendAction::CreateASTConsumer(CompilerInstance & CI, StringRef file)
{
    // processor callbacks: includes, pragma, ...
    CI.getPreprocessor().addPPCallbacks(std::make_unique<MyPPCallbacks>(&CI));

    // add file to data
    // FileID main_file_id  = CI.getSourceManager().getMainFileID();
    g_data[data_index] = FileInfo();

    std::string main_file_name;
    std::string main_file_dir_path;
    std::string main_file_ext;

    split_path(file.str(), main_file_dir_path, main_file_name, main_file_ext);

    g_data[data_index].file_name_without_ext = main_file_name;
    g_data[data_index].file_dir_path         = main_file_dir_path;
    g_data[data_index].file_ext              = main_file_ext;

    // std::cout << "file_id: " << g_data[main_file_id].main_file_id.getHashValue() << std::endl;
    // std::cout << "file_name: " << g_data[main_file_id].main_file_name << std::endl;
    // std::cout << "file_dir: " << g_data[main_file_id].main_file_dir_path << std::endl;

    return std::make_unique<MyASTConsumer>(&CI); // pass CI pointer to ASTConsumer
}

void MyFrontendAction::EndSourceFileAction()
{
    data_index++;
}