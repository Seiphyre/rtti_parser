#include "VDEReflGenPPCallbacks.h"

// cf clang-tidy check (sorting header): https://clang.llvm.org/extra/doxygen/IncludeOrderCheck_8cpp_source.html

MyPPCallbacks::MyPPCallbacks(CompilerInstance * compiler_instance)
{
    m_source_manager = &(compiler_instance->getSourceManager());
}

void MyPPCallbacks::InclusionDirective(SourceLocation HashLoc, const Token & IncludeTok, StringRef FileName,
                                       bool IsAngled, CharSourceRange FilenameRange, const FileEntry * File,
                                       StringRef SearchPath, StringRef RelativePath, const clang::Module * Imported,
                                       SrcMgr::CharacteristicKind FileType)
{
    if (m_source_manager->getFileID(HashLoc) == m_source_manager->getMainFileID())
    {
        HeaderInfo * header_info = new HeaderInfo();

        header_info->name     = FileName.str();
        header_info->isAngled = IsAngled;

        g_data[data_index].headers.push_back(header_info);

        // if (IsAngled)
        //     std::cout << "<" << FileName.str() << ">" << std::endl;
        // else
        //     std::cout << "\"" << FileName.str() << "\"" << std::endl;
    }
}