#include "CountDiagConsumer.h"

using namespace clang;

CountDiagConsumer::CountDiagConsumer(FileInfo & file_info)
    : TextDiagnosticPrinter(llvm::outs(), new DiagnosticOptions())
{
    m_verbose   = false;
    m_file_info = &file_info;
}

void CountDiagConsumer::HandleDiagnostic(DiagnosticsEngine::Level DiagLevel, const Diagnostic & Info)
{
    if (m_verbose)
        TextDiagnosticPrinter::HandleDiagnostic(DiagLevel, Info);

    if (DiagLevel >= DiagnosticsEngine::Error)
    {
        std::cout << "Error found.\n";
        m_file_info->is_valid = false;
        //++NumErrors;
    }

    // if (DiagLevel == DiagnosticsEngine::Warning)
    //     ++NumWarnings;
}