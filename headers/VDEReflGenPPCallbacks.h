#ifndef VDE_REFL_GEN_PP_CALLBACKS_H_
#define VDE_REFL_GEN_PP_CALLBACKS_H_

#include "clang/Lex/PPCallbacks.h"
#include "clang/Frontend/CompilerInstance.h"

#include "info_structs.h"

// cf clang-tidy check (sorting header): https://clang.llvm.org/extra/doxygen/IncludeOrderCheck_8cpp_source.html

class MyPPCallbacks : public clang::PPCallbacks
{
    clang::SourceManager * m_source_manager;

  public:
    MyPPCallbacks(clang::CompilerInstance & compiler_instance);

    virtual void InclusionDirective(clang::SourceLocation HashLoc, const clang::Token & IncludeTok,
                                    clang::StringRef FileName, bool IsAngled, clang::CharSourceRange FilenameRange,
                                    const clang::FileEntry * File, clang::StringRef SearchPath,
                                    clang::StringRef RelativePath, const clang::Module * Imported,
                                    clang::SrcMgr::CharacteristicKind FileType);
};

#endif /* VDE_REFL_GEN_PP_CALLBACKS_H_ */