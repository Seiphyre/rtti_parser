
// clang-format off
// -----------------------------------------------------------------------------
//                       Important function call stack diagram
// -----------------------------------------------------------------------------
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

#ifndef CUSTOM_AST_FRONTEND_ACTION_H_
#define CUSTOM_AST_FRONTEND_ACTION_H_

#include "clang/Frontend/FrontendActions.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Rewrite/Core/Rewriter.h"

#include "utils_functions.hpp"
#include "CustomPPCallbacks.h"
#include "CustomASTConsumer.h"
#include "CustomDiagConsumer.h"

#include "info_structs.h"
#include "string_templates.hpp"

#include <string>
#include <vector>

class CustomASTFrontendAction : public clang::ASTFrontendAction
{
  private:
    bool m_verbose;

    clang::Rewriter           m_rewriter;
    CustomDiagConsumer *      m_diag_consumer;
    clang::CompilerInstance * m_compiler;

    FileInfo m_current_file_info;

  public:
    virtual bool                                BeginInvocation(clang::CompilerInstance & CI);
    virtual bool                                BeginSourceFileAction(clang::CompilerInstance & CI);
    virtual std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(clang::CompilerInstance & CI, clang::StringRef file);
    virtual void                                EndSourceFileAction();
    // virtual void                             ExecuteAction();

  private:
    void WatchMetaHeader(const FileInfo & file_info);
    void WatchMetaFriendRegisterFunc(const FileInfo & file_info, const ClassInfo & class_info);
    void WatchMetaRegisterFunc(const FileInfo & file_info, const ClassInfo & class_info);
};

#endif /* CUSTOM_AST_FRONTEND_ACTION_H_ */