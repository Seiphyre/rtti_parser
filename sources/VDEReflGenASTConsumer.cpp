#include "VDEReflGenASTConsumer.h"

using namespace clang;

MyASTConsumer::MyASTConsumer(CompilerInstance & CI, Rewriter & R) : ASTConsumer(), m_visitor(CI, R)
{
    m_rewriter = &R;
}

void MyASTConsumer::HandleTranslationUnit(ASTContext & ast_context)
{
    m_visitor.TraverseDecl(ast_context.getTranslationUnitDecl());
}