#ifndef VDE_REFL_GEN_AST_CONSUMER_H_
#define VDE_REFL_GEN_AST_CONSUMER_H_

#include "clang/Frontend/ASTConsumers.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/AST/ASTContext.h"
#include "clang/Rewrite/Core/Rewriter.h"

#include "VDEReflGenVisitor.h"

class MyASTConsumer : public clang::ASTConsumer
{
  private:
    MyVisitor         m_visitor;
    clang::Rewriter * m_rewriter;

  public:
    MyASTConsumer(clang::CompilerInstance & compiler_instance, clang::Rewriter & rewriter);

    virtual void HandleTranslationUnit(clang::ASTContext & ast_context);
};

#endif /* VDE_REFL_GEN_AST_CONSUMER_H_ */