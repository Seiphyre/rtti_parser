#ifndef VDE_REFL_GEN_AST_FRONTEND_ACTION_H_
#define VDE_REFL_GEN_AST_FRONTEND_ACTION_H_

//#include "clang/Driver/Options.h"
// #include "clang/AST/AST.h"
// #include "clang/AST/ASTContext.h"
// #include "clang/AST/ASTConsumer.h"
// #include "clang/AST/RecursiveASTVisitor.h"
//#include "clang/Frontend/ASTConsumers.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Frontend/CompilerInstance.h"
//#include "clang/Tooling/CommonOptionsParser.h"
//#include "clang/Tooling/Tooling.h"
//#include "clang/Rewrite/Core/Rewriter.h"

#include "VDEReflGenPPCallbacks.h"
#include "VDEReflGenASTConsumer.h"
#include "info_structs.h"
#include "utils_functions.hpp"
#include <string>

using namespace clang;

class MyFrontendAction : public ASTFrontendAction
{
  public:
    virtual std::unique_ptr<ASTConsumer> CreateASTConsumer(CompilerInstance & CI, StringRef file);

    virtual void EndSourceFileAction();
};

#endif /* VDE_REFL_GEN_AST_FRONTEND_ACTION_H_ */