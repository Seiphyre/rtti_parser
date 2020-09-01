#include "VDEReflGenASTConsumer.h"

using namespace clang;

MyASTConsumer::MyASTConsumer(CompilerInstance & CI, Rewriter & R) : ASTConsumer(), m_visitor(CI, R)
{
    m_rewriter = &R;
}

// This method is called when the ASTs for entire translation unit have been parsed.
// If HandleTopLevelDecl return false, this function is not call
void MyASTConsumer::HandleTranslationUnit(ASTContext & ast_context)
{
    if (g_data[g_data_index]->is_valid)
    {
        // std::cout << "Start Traverse" << std::endl;
        m_visitor.TraverseDecl(ast_context.getTranslationUnitDecl());
    }
}

bool MyASTConsumer::HandleTopLevelDecl(DeclGroupRef D)
{
    // return (g_data[g_data_index]->is_valid);
    return true;
}