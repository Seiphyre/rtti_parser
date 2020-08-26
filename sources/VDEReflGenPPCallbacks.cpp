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
        IncludeInfo * header_info = new IncludeInfo();

        header_info->name     = FileName.str();
        header_info->isAngled = IsAngled;

        g_data[g_data_index]->includes.push_back(header_info);

        // -- Check if there is the include Meta.h  --
        std::size_t found = FileName.str().find("Meta.h");
        if (found != std::string::npos)
        {
            g_data[g_data_index]->has_include_meta = true;
            // std::cout << "#include \"" << FileName.str() << "\"" << std::endl;
        }

        // // -- Check if there is the include of the generated file  --
        // found = FileName.str().find(g_data[data_index].file_name_without_ext + ".generated");
        // if (found != std::string::npos)
        // {
        //     g_data[data_index].has_include_meta_generated = true;
        //     // std::cout << "#include \"" << FileName.str() << "\"" << std::endl;
        // }

        // if (IsAngled)
        //     std::cout << "<" << FileName.str() << ">" << std::endl;
        // else
        //     std::cout << "\"" << FileName.str() << "\"" << std::endl;
    }
}