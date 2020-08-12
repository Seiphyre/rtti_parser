#ifndef PARSING_FUNCTIONS_H_
#define PARSING_FUNCTIONS_H_

//#include "clang/Driver/Options.h"
// #include "clang/AST/AST.h"
// #include "clang/AST/ASTContext.h"
// #include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
//#include "clang/Frontend/ASTConsumers.h"
//#include "clang/Frontend/FrontendActions.h"
#include "clang/Frontend/CompilerInstance.h"
//#include "clang/Tooling/CommonOptionsParser.h"
//#include "clang/Tooling/Tooling.h"

#include "info_structs.h"

using namespace clang;

class MyVisitor : public RecursiveASTVisitor<MyVisitor>
{
  private:
    ASTContext *    ast_context;
    SourceManager * source_manager;

  public:
    explicit MyVisitor(CompilerInstance * compiler_instance);

    bool VisitCXXRecordDecl(clang::CXXRecordDecl * decl);
};

#endif /* PARSING_FUNCTIONS_H_ */