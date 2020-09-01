#ifndef VDE_REFL_GEN_AST_FRONTEND_ACTION_H_
#define VDE_REFL_GEN_AST_FRONTEND_ACTION_H_

#include "clang/Frontend/FrontendActions.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Rewrite/Core/Rewriter.h"

#include "VDEReflGenPPCallbacks.h"
#include "VDEReflGenASTConsumer.h"

#include "info_structs.h"
#include "string_templates.hpp"
#include "utils_functions.hpp"
#include "CountDiagConsumer.h"

#include <string>

class MyFrontendAction : public clang::ASTFrontendAction
{
  private:
    clang::Rewriter           m_rewriter;
    CountDiagConsumer *       m_diag_consumer;
    clang::CompilerInstance * m_compiler;

  public:
    virtual bool                                BeginInvocation(clang::CompilerInstance & CI);
    virtual bool                                PrepareToExecuteAction(clang::CompilerInstance & CI);
    virtual std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(clang::CompilerInstance & CI, clang::StringRef file);
    virtual void                                ExecuteAction();
    virtual void                                EndSourceFileAction();

  private:
    void WatchMetaHeader(const FileInfo & file_info);
    void WatchMetaFriendRegisterFunc(const FileInfo & file_info, const ClassInfo & class_info);
    void WatchMetaRegisterFunc(const FileInfo & file_info, const ClassInfo & class_info);
};

#endif /* VDE_REFL_GEN_AST_FRONTEND_ACTION_H_ */