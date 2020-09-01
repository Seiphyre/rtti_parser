#include "CountDiagConsumer.h"

using namespace clang;

void CountDiagConsumer::HandleDiagnostic(DiagnosticsEngine::Level DiagLevel, const Diagnostic & Info)
{
    // std::cout << "error found" << std::endl;
    g_data[g_data_index]->is_valid = false;
}