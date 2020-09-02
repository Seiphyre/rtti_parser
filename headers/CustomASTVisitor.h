#ifndef CUSTOM_AST_VISITOR_H_
#define CUSTOM_AST_VISITOR_H_

#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Rewrite/Core/Rewriter.h"

#include "info_structs.h"

class CustomASTVisitor : public clang::RecursiveASTVisitor<CustomASTVisitor>
{
  private:
    clang::ASTContext *    m_ast_context;
    clang::SourceManager * m_source_manager;
    clang::Rewriter *      m_rewriter;

    FileInfo * m_file_info;

  public:
    CustomASTVisitor(clang::CompilerInstance & compiler_instance, clang::Rewriter & rewriter, FileInfo & file_info);

    virtual bool VisitCXXRecordDecl(clang::CXXRecordDecl * decl);
    virtual bool VisitFunctionDecl(clang::FunctionDecl * func);
};

#endif /* CUSTOM_AST_VISITOR_H_ */