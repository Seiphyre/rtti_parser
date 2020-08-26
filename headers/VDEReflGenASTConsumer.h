#ifndef VDE_REFL_GEN_AST_CONSUMER_H_
#define VDE_REFL_GEN_AST_CONSUMER_H_

//#include "clang/Driver/Options.h"
// #include "clang/AST/AST.h"
#include "clang/AST/ASTContext.h"
// #include "clang/AST/ASTConsumer.h"
//#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Frontend/ASTConsumers.h"
//#include "clang/Frontend/FrontendActions.h"
#include "clang/Frontend/CompilerInstance.h"
//#include "clang/Tooling/CommonOptionsParser.h"
//#include "clang/Tooling/Tooling.h"
#include "clang/Rewrite/Core/Rewriter.h"

#include "VDEReflGenVisitor.h"

using namespace clang;

class MyASTConsumer : public ASTConsumer
{
  private:
    MyVisitor * m_visitor;
    Rewriter *  m_rewriter;

  public:
    MyASTConsumer(CompilerInstance * compiler_instance, Rewriter * rewriter);

    virtual void HandleTranslationUnit(ASTContext & ast_context);
};

#endif /* VDE_REFL_GEN_AST_CONSUMER_H_ */