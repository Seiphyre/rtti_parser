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
// o Read Later
//      [Hot reload]
//      https://www.enkisoftware.com/devlogpost-20200202-1-Runtime-Compiled-C++-Dear-ImGui-and-DirectX11-Tutorial
//      [Use PasrseAST instead libtool]
//      https://eli.thegreenplace.net/2012/06/08/basic-source-to-source-transformation-with-clang
//      https://github.com/loarabia/Clang-tutorial/blob/master/CIrewriter.cpp
//
//**********************************************************************************************************//

// C++ Standard Lib
#include <iostream>
#include <fstream>
#include <string>

// Clang Libtooling Lib
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
#include "clang/Rewrite/Core/Rewriter.h"

// VDE_reflection_gen headers
#include "info_structs.h"
#include "string_templates.hpp"

#include "utils_functions.hpp"

#include "VDEReflGenASTFrontendAction.h"
#include "CountDiagConsumer.h"

// -------------------------------------

using namespace clang::tooling;
using namespace llvm;

int                       g_data_index = 0;
std::map<int, FileInfo *> g_data;
// Rewriter rewriter;

void setup_tool(ClangTool & tool)
{
    std::string clang_path   = "-I./libs/llvm10/lib/clang/10.0.0/include/";
    std::string libcpp_path1 = "-I/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/";
    std::string libcpp_path2 = "-I/Library/Developer/CommandLineTools/usr/include/c++/v1/";

    // add clang includes path
    tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(clang_path.c_str(), ArgumentInsertPosition::BEGIN));

    // add libc++ includes path (mandatory on osx catalina)
    // warning: path order matters. Error might append otherwise (i.e: cmath.h not found)
    tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(libcpp_path1.c_str(), ArgumentInsertPosition::BEGIN));
    tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(libcpp_path2.c_str(), ArgumentInsertPosition::BEGIN));

    // force c++ (So that ".h" files are not considered as C header anymore)
    tool.appendArgumentsAdjuster(getInsertArgumentAdjuster("-xc++", ArgumentInsertPosition::BEGIN));

    // disable Diagnotic tool. We don't want clang parse errors in the file.
    // tool.setDiagnosticConsumer(new CountDiagConsumer());
    // tool.setDiagnosticConsumer(new clang::IgnoringDiagConsumer());
}

// clang-format off
// ------------------------------ [ ClangTool ] --------------------------------
//                       clang/lib/Tooling/Tooling.cpp
//
// -------------------------- [ Compiler Instance ] ----------------------------
//                  clang/lib/Frontend/CompilerInstance.cpp
//
// --------------------------- [ Frontend Action ]------------------------------
//                   clang/lib/Frontend/FrontendAction.cpp
//
// ClangTool::run()
// |
// |---- [ Stuff related to "CommandLine" & "Files" ]
// |
// |---- ToolInvocation::run()
//       |
//       |---- [ Creation of "CompilerInstance" & "CompilerInvocation" & "DiagnosticsEngine"]
//       |
//       |---- ToolInvocation::runInvocation()
//             |
//             |---- ToolAction::runInvocation() == FrontendActionFactory::runInvocation()
//                   |
//                   |---- [ "CompilerInstance::createSourceManager()" & "CompilerInstance::createDiagnostics()"]
//                   |
//                   |---- CompilerInstance::ExecuteAction(FrontendActionFactory::create())
//                         |                                                                                                _
//                         |---- FrontendAction::PrepareToExecute() ------------------------------------------------------   |
//                         |                                                                                                 |
//                         |---- [Stuff related to Compiler::Target & Compiler::FrontendOpts & Compiler::LangOpts]           | F
//                         |                                                                                                 | R
//                         |---- FrontendAction::BeginSourceFile()                                                           | O
//                         |     |                                                                                           | N
//                         |     |---- FrontendAction::BeginInvocation() -------------------------------------------------   | T
//                         |     |                                                                                           | E
//                         |     |---- [ Choice between multilple scenarios ...]                                             | N
//                         |     |                                                                                           | D
//                         |     |---- FrontendAction::BeginSourceFileAction() -------------------------------------------   | 
//                         |     |                                                                                           | A
//                         |     |---- [CreateASTContext]                                                                    | C
//                         |     |                                                                                           | T
//                         |     |     if (! FrontendAction::usesPreprocessorOnly())                                         | I
//                         |     |---- FrontendAction::CreateWrappedASTConsumer()                                            | O
//                         |     |     |                                                                                     | N
//                         |     |     |---- FrontendAction::CreateASTConsumer() ------------------------------------------  |
//                         |     |                                                                                           |
//                         |     |---- [Stuff about PreprocessorOpts]                                                        |
//                         |                                                                                                 |
//                         |---- FrontendAction::Execute() ----------------------------------------------------------------  |    
//                         |     |                                                                                           |
//                         |     |---- FrontendAction::ExecuteAction() // ASTFrontendAction::ExecuteAction()                 |
//                         |           |                                                                                     |
//                         |           |---- clang::ParseAST // Parser::ParseTopLevelDecl                                    |
//                         |                 |                                                                               |
//                         |                 |     (Parsing en cour ...)                                                     |
//                         |                 |---- Parser::ParseTopLevelDecl                                                 |
//                         |                 |     |                                                                         |
//                         |                 |     |---- PPCallbacks                                                         | 
//                         |                 |                                                                               |     _
//                         |                 |---- ASTConsumer::HandleTopLevelDecl()                                         |      |
//                         |                 |                                                                               |      | AST CONSUMER
//                         |                 |     (Une fois le Parsing terminé)                                             |      |
//                         |                 |---- ASTConsumer::HandleTranslationUnit()                                      |     _|
//                         |                                                                                                 |      
//                         |---- FrontendAction::EndSourceFile() -------------------------------------------------------     |
//                               |                                                                                           |
//                               |---- FrontendAction::EndSourceFileAction()                                                _|
// clang-format on

int main(int argc, const char ** argv)
{
    // to generate random numbers with rand(), later.
    srand(time(NULL));

    // == parse the command-line args passed to the code ==========

    CommonOptionsParser opt_parser(argc, argv, cl::GeneralCategory);

    // == create, setup and run a new Clang Tool instance =========

    // Utility to run a FrontendAction over a set of files.
    ClangTool tool(opt_parser.getCompilations(), opt_parser.getSourcePathList());

    setup_tool(tool);

    int run_result = tool.run(newFrontendActionFactory<MyFrontendAction>().get());

    // if (run_result != 0)
    //     llvm::errs() << "\n";

    // // == use data to generate a new file ==========================
    // for (auto file_info = g_data.begin(); file_info != g_data.end(); file_info++)
    // {
    //     // file_info->second.dump();

    //     // generate_file(file_info->second);
    //     update_source_file(file_info->second);
    // }

    return run_result;
}