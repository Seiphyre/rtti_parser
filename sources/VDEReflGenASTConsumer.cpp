#include "VDEReflGenASTConsumer.h"

using namespace clang;

MyASTConsumer::MyASTConsumer(CompilerInstance & CI, Rewriter & R, FileInfo & file_info)
    : ASTConsumer(), m_visitor(CI, R, file_info)
{
    m_rewriter  = &R;
    m_file_info = &file_info;
}

// This method is called when the ASTs for entire translation unit have been parsed.
// If HandleTopLevelDecl return false, this function is not call
void MyASTConsumer::HandleTranslationUnit(ASTContext & ast_context)
{
    if (m_file_info->is_valid)
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