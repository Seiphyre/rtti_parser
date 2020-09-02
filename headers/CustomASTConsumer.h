#ifndef CUSTOM_AST_CONSUMER_H_
#define CUSTOM_AST_CONSUMER_H_

#include "clang/Frontend/ASTConsumers.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/AST/ASTContext.h"
#include "clang/Rewrite/Core/Rewriter.h"

#include "CustomASTVisitor.h"

class CustomASTConsumer : public clang::ASTConsumer
{
  private:
    CustomASTVisitor  m_visitor;
    clang::Rewriter * m_rewriter;

    FileInfo * m_file_info;

  public:
    CustomASTConsumer(clang::CompilerInstance & compiler_instance, clang::Rewriter & rewriter, FileInfo & file_info);

    // This method is called when the ASTs for entire translation unit have been parsed.
    virtual void HandleTranslationUnit(clang::ASTContext & ast_context);

    virtual bool HandleTopLevelDecl(clang::DeclGroupRef D);
};

#endif /* CUSTOM_AST_CONSUMER_H_ */