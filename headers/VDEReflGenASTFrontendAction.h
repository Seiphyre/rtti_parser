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

#include <string>

class MyFrontendAction : public clang::ASTFrontendAction
{
  private:
    clang::Rewriter *         m_rewriter;
    clang::CompilerInstance * m_compiler;

  public:
    virtual std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(clang::CompilerInstance & CI, clang::StringRef file);

    virtual void EndSourceFileAction();

    void WatchMetaHeader(const FileInfo & file_info);
    void WatchMetaFriendRegisterFunc(const FileInfo & file_info, const ClassInfo & class_info);
    void WatchMetaRegisterFunc(const FileInfo & file_info, const ClassInfo & class_info);
};

#endif /* VDE_REFL_GEN_AST_FRONTEND_ACTION_H_ */