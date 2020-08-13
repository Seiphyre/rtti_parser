//**********************************************************************************************************//
//
// Some useful info & links:
//
// o About database && clang compilation:
//      https://eli.thegreenplace.net/2014/05/21/compilation-databases-for-clang-based-tools
//
// o About command line options:
//      "--extra-args", "--extra-args-before" and "-p" are added by CommonOptionParser constructor.
//      https://stackoverflow.com/questions/34147464/how-to-avoid-llvms-support-commandline-leaking-library-arguments
//      https://stackoverflow.com/questions/56437013/how-to-overwrite-clang-libtooling-version-option-to-display-the-version-of-my-p
//      https://code.woboq.org/llvm/clang/lib/Tooling/CommonOptionsParser.cpp.html
//
//**********************************************************************************************************//

// C++ Standard Lib
#include <iostream>
#include <fstream>
#include <string>

// Clang Libtooling Lib
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"

// VDE_reflection_gen headers
#include "info_structs.h"

#include "utils_functions.hpp"
#include "file_gen_functions.h"

#include "VDEReflGenASTFrontendAction.h"

// -------------------------------------

using namespace clang::tooling;
using namespace llvm;

int                     data_index = 0;
std::map<int, FileInfo> g_data;
// Rewriter rewriter;

// static cl::OptionCategory   MyToolCategory("Custom options");
// static cl::extrahelp        CommonHelp(CommonOptionsParser::HelpMessage);
// static cl::extrahelp        MoreHelp("\nMore help text...\n");

int main(int argc, const char ** argv)
{
    // https://stackoverflow.com/questions/34147464/how-to-avoid-llvms-support-commandline-leaking-library-arguments

    // StringMap<cl::Option *> Map;
    // Map = cl::getRegisteredOptions();

    // for (StringMap<cl::Option *>::iterator it = Map.begin(); it != Map.end(); it++)
    // {
    //     std::cout << it->first().str() << std::endl;
    // }

    // Hide an option we don't want to see
    // assert(Map.count("-extra-arg") > 0);
    // Map["-extra-arg"]->setHiddenFlag(cl::Hidden);
    // assert(Map.count("-extra-arg-before") > 0);
    // Map["-extra-arg-before"]->setHiddenFlag(cl::Hidden);
    // assert(Map.count("p") > 0);
    // Map["p"]->setHiddenFlag(cl::Hidden);

    // Change --version to --show-version
    // assert(Map.count("version") > 0);
    // Map["version"]->setArgStr("show-version");

    // // Change --help description
    // assert(Map.count("help-list") > 0);
    // Map["help-list"]->setDescription(
    //     "Display list of available options without categories (--help-list-hidden for more)");

    cl::opt<std::string> GenInclPath("gen-incl-path", cl::cat(cl::GeneralCategory),
                                     cl::desc("Path to generated include directory."), cl::value_desc("string"));

    // parse the command-line args passed to your code
    CommonOptionsParser op(argc, argv, cl::GeneralCategory);

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