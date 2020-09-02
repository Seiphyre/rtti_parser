#include "CustomDiagConsumer.h"

using namespace clang;

CustomDiagConsumer::CustomDiagConsumer(FileInfo & file_info)
    : TextDiagnosticPrinter(llvm::outs(), new DiagnosticOptions())
{
    m_verbose   = true;
    m_file_info = &file_info;
}

void CustomDiagConsumer::HandleDiagnostic(DiagnosticsEngine::Level DiagLevel, const Diagnostic & Info)
{
    if (m_verbose)
        TextDiagnosticPrinter::HandleDiagnostic(DiagLevel, Info);

    if (DiagLevel >= DiagnosticsEngine::Error)
    {
        // std::cout << "Error found.\n";
        m_file_info->is_valid = false;
        //++NumErrors;
    }

    // if (DiagLevel == DiagnosticsEngine::Warning)
    //     ++NumWarnings;
}