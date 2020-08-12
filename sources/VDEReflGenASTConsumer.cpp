#include "VDEReflGenASTConsumer.h"

// // override the constructor in order to pass CI
// explicit MyASTConsumer(CompilerInstance * CI) : visitor(new MyVisitor(CI)) // initialize the visitor
// {
// }

void MyASTConsumer::HandleTranslationUnit(ASTContext & ast_context)
{
    visitor->TraverseDecl(ast_context.getTranslationUnitDecl());
}