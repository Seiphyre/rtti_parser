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
//      https://stackoverflow.com/questions/38356485/how-do-i-put-clang-into-c-mode/38445919
//
// o Read Later
//      [Hot reload]
//      https://www.enkisoftware.com/devlogpost-20200202-1-Runtime-Compiled-C++-Dear-ImGui-and-DirectX11-Tutorial
//      [Use PasrseAST instead libtool]
//      https://eli.thegreenplace.net/2012/06/08/basic-source-to-source-transformation-with-clang
//      https://github.com/loarabia/Clang-tutorial/blob/master/CIrewriter.cpp
//
//**********************************************************************************************************//

// C++ Standard Lib
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>

// Clang Libtooling Lib
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"

// reflection_gen headers
#include "utils_functions.hpp"
#include "CustomASTFrontendAction.h"

// -------------------------------------

using namespace clang::tooling;
using namespace llvm;

void setup_tool(ClangTool & tool)
{
    std::string app_root_path = find_app_root_path();
    std::string clang_path    = "-I" + app_root_path + "libs/llvm10/lib/clang/10.0.0/include/";
    std::string libcpp_path1  = "-I/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/";
    std::string libcpp_path2  = "-I/Library/Developer/CommandLineTools/usr/include/c++/v1/";
    std::string opengl_path   = "-F/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/System/Library/Frameworks/";

    // add clang includes path
    tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(clang_path.c_str(), ArgumentInsertPosition::BEGIN));

    // add libc++ includes path (mandatory on osx catalina)
    // warning: path order matters. Error might append otherwise (i.e: cmath.h not found)
    tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(libcpp_path1.c_str(), ArgumentInsertPosition::BEGIN));
    tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(libcpp_path2.c_str(), ArgumentInsertPosition::BEGIN));

    // add opengl includes path
    tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(opengl_path.c_str(), ArgumentInsertPosition::BEGIN));

    // force c++ (So that ".h" files are not considered as C header anymore)
    tool.appendArgumentsAdjuster(getInsertArgumentAdjuster("-xc++", ArgumentInsertPosition::BEGIN));

    // remove all warnings (we only want to see errors)
    tool.appendArgumentsAdjuster(getInsertArgumentAdjuster("-Wno-everything", ArgumentInsertPosition::BEGIN));
}

int main(int argc, const char ** argv)
{
    // == parse the command-line args passed to the code ==========

    CommonOptionsParser opt_parser(argc, argv, cl::GeneralCategory);

    // == create, setup and run a new Clang Tool instance =========

    // Utility to run a FrontendAction over a set of files.
    ClangTool tool(opt_parser.getCompilations(), opt_parser.getSourcePathList());

    setup_tool(tool);

    int run_result = tool.run(newFrontendActionFactory<CustomASTFrontendAction>().get());

    // if (run_result != 0)
    //     llvm::errs() << "\n";

    return run_result;
}