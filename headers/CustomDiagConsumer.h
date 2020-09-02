#ifndef CUSTOM_DIAG_CONSUMER_H_
#define CUSTOM_DIAG_CONSUMER_H_

#include "clang/Frontend/TextDiagnosticPrinter.h"

#include "info_structs.h"

class CustomDiagConsumer : public clang::TextDiagnosticPrinter
{
  public:
    CustomDiagConsumer(FileInfo & file_info);

    virtual void HandleDiagnostic(clang::DiagnosticsEngine::Level DiagLevel, const clang::Diagnostic & Info) override;

  private:
    bool       m_verbose;
    FileInfo * m_file_info;
};

#endif /* CUSTOM_DIAG_CONSUMER_H_ */