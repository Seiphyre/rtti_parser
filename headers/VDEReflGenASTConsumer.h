#ifndef VDE_REFL_GEN_AST_CONSUMER_H_
#define VDE_REFL_GEN_AST_CONSUMER_H_

#include "clang/Frontend/ASTConsumers.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/AST/ASTContext.h"
#include "clang/Rewrite/Core/Rewriter.h"

#include "VDEReflGenVisitor.h"
#include "CountDiagConsumer.h"

class MyASTConsumer : public clang::ASTConsumer
{
  private:
    MyVisitor         m_visitor;
    clang::Rewriter * m_rewriter;

    FileInfo * m_file_info;

  public:
    MyASTConsumer(clang::CompilerInstance & compiler_instance, clang::Rewriter & rewriter, FileInfo & file_info);

    // This method is called when the ASTs for entire translation unit have been parsed.
    virtual void HandleTranslationUnit(clang::ASTContext & ast_context);

    virtual bool HandleTopLevelDecl(clang::DeclGroupRef D);
};

#endif /* VDE_REFL_GEN_AST_CONSUMER_H_ */