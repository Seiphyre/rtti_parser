#ifndef VDE_REFL_GEN_PP_CALLBACKS_H_
#define VDE_REFL_GEN_PP_CALLBACKS_H_

//#include "clang/Driver/Options.h"
// #include "clang/AST/AST.h"
// #include "clang/AST/ASTContext.h"
// #include "clang/AST/ASTConsumer.h"
//#include "clang/AST/RecursiveASTVisitor.h"
//#include "clang/Frontend/ASTConsumers.h"
//#include "clang/Frontend/FrontendActions.h"
#include "clang/Lex/PPCallbacks.h"
#include "clang/Frontend/CompilerInstance.h"
//#include "clang/Tooling/CommonOptionsParser.h"
//#include "clang/Tooling/Tooling.h"

#include "info_structs.h"

using namespace clang;

// cf clang-tidy check (sorting header): https://clang.llvm.org/extra/doxygen/IncludeOrderCheck_8cpp_source.html
class MyPPCallbacks : public PPCallbacks
{
    SourceManager * m_source_manager;

  public:
    explicit MyPPCallbacks(CompilerInstance * compiler_instance);

    virtual void InclusionDirective(SourceLocation HashLoc, const Token & IncludeTok, StringRef FileName, bool IsAngled,
                                    CharSourceRange FilenameRange, const FileEntry * File, StringRef SearchPath,
                                    StringRef RelativePath, const clang::Module * Imported,
                                    SrcMgr::CharacteristicKind FileType);
};

#endif /* VDE_REFL_GEN_PP_CALLBACKS_H_ */