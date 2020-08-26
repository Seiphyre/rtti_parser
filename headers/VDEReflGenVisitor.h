#ifndef PARSING_FUNCTIONS_H_
#define PARSING_FUNCTIONS_H_

#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Rewrite/Core/Rewriter.h"

#include "info_structs.h"

class MyVisitor : public clang::RecursiveASTVisitor<MyVisitor>
{
  private:
    clang::ASTContext *    ast_context;
    clang::SourceManager * source_manager;
    clang::Rewriter *      rewriter;

  public:
    MyVisitor(clang::CompilerInstance * compiler_instance, clang::Rewriter * rewriter);

    bool         VisitCXXRecordDecl(clang::CXXRecordDecl * decl);
    virtual bool VisitFunctionDecl(clang::FunctionDecl * func);
};

#endif /* PARSING_FUNCTIONS_H_ */