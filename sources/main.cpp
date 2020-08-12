// https://eli.thegreenplace.net/2014/05/21/compilation-databases-for-clang-based-tools

#include "clang/Driver/Options.h"
#include "clang/AST/AST.h"
#include "clang/AST/ASTContext.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Frontend/ASTConsumers.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
//#include "clang/Rewrite/Core/Rewriter.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "info_structs.h"
#include "utils_functions.hpp"
#include "string_templates.hpp"
#include "VDEReflGenASTFrontendAction.h"
#include "file_gen_functions.h"

using namespace std;
using namespace clang;
using namespace clang::driver; // useless ?
using namespace clang::tooling;
using namespace llvm;

static cl::OptionCategory MyToolCategory("Custom options");
static cl::opt<string>    GenInclPath("gen-incl-path", cl::cat(MyToolCategory),
                                   cl::desc("Path to generated include directory."), cl::value_desc("string"));
static cl::extrahelp      CommonHelp(CommonOptionsParser::HelpMessage);
// static cl::extrahelp      MoreHelp("\nMore help text...\n");
// static cl::opt<bool> YourOwnOption(...);

int                     data_index = 0;
std::map<int, FileInfo> g_data;
// Rewriter rewriter;

// -------------------------------------

int main(int argc, const char ** argv)
{
    // parse the command-line args passed to your code
    CommonOptionsParser op(argc, argv, MyToolCategory);

    // create a new Clang Tool instance (a LibTooling environment)
    ClangTool Tool(op.getCompilations(), op.getSourcePathList());

    std::string clang_path   = "-I./libs/llvm10/lib/clang/10.0.0/include/";
    std::string libcpp_path1 = "-I/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/";
    std::string libcpp_path2 = "-I/Library/Developer/CommandLineTools/usr/include/c++/v1/";

    Tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(clang_path.c_str(), ArgumentInsertPosition::BEGIN));
    // order matters. Error might append otherwise (cmath.h)
    Tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(libcpp_path1.c_str(), ArgumentInsertPosition::BEGIN));
    Tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(libcpp_path2.c_str(), ArgumentInsertPosition::BEGIN));
    // force c++ (So that .h are not considered as C header)
    Tool.appendArgumentsAdjuster(getInsertArgumentAdjuster("-xc++", ArgumentInsertPosition::BEGIN));

    // Disable Diagnotic tool.
    Tool.setDiagnosticConsumer(new IgnoringDiagConsumer());

    // run the Clang Tool, creating a new FrontendAction (explained below)
    int result = Tool.run(newFrontendActionFactory<MyFrontendAction>().get());

    if (result != 0)
        llvm::errs() << "\n";

    for (auto file_info = g_data.begin(); file_info != g_data.end(); file_info++)
    {
        // file_info->second.dump();

        // Find generated file path -------------------------
        std::string generated_file_path = GenInclPath.getValue();

        if (generated_file_path.empty())
        {
            // std::cout << "empty file path" << std::endl;
            generated_file_path = file_info->second.main_file_dir_path;
        }
        else
        {
            if (generated_file_path.back() != '/')
                generated_file_path += "/";
        }

        // std::cout << generated_file_path << std::endl;

        // Find generated file name -------------------------
        std::string generated_file_name = file_info->second.main_file_name;

        const size_t period_idx = generated_file_name.rfind('.');
        if (std::string::npos != period_idx)
        {
            generated_file_name.erase(period_idx);
        }

        generated_file_name += ".generated.hpp";

        // std::cout << generated_file_name << std::endl;

        // Create the generated file content -----------------
        std::string generated_content = CreateFileContent(file_info->second);

        // std::cout << generated_content << std::endl;

        // Create / Open generated file ----------------------
        std::ofstream myfile;

        myfile.open(generated_file_path + generated_file_name, std::ofstream::out | std::ofstream::trunc);
        myfile << generated_content;
        myfile.close();

        std::cout << "file generated at " << (generated_file_path + generated_file_name) << std::endl;
    }

    return result;
}