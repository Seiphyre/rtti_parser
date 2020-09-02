#include "CustomASTConsumer.h"

using namespace clang;

CustomASTConsumer::CustomASTConsumer(CompilerInstance & CI, Rewriter & R, FileInfo & file_info)
    : ASTConsumer(), m_visitor(CI, R, file_info)
{
    m_rewriter  = &R;
    m_file_info = &file_info;
}

// ----------------------------------------------------------------------------------------------

// This method is called when the ASTs is being parsed.
bool CustomASTConsumer::HandleTopLevelDecl(DeclGroupRef D)
{
    // return (m_file_info->is_valid);
    return true;
}

// ----------------------------------------------------------------------------------------------

// This method is called when the ASTs for entire translation unit have been parsed.
// If HandleTopLevelDecl return false, this function is not call
void CustomASTConsumer::HandleTranslationUnit(ASTContext & ast_context)
{
    if (m_file_info->is_valid)
    {
        // std::cout << "Start Traverse" << std::endl;
        m_visitor.TraverseDecl(ast_context.getTranslationUnitDecl());
    }
}