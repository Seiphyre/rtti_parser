#ifndef VDENGINE_COUNT_DIAG_CONSUMER_H_
#define VDENGINE_COUNT_DIAG_CONSUMER_H_

#include "clang/Basic/Diagnostic.h"
#include "clang/Frontend/TextDiagnosticPrinter.h"
#include "info_structs.h"

class CountDiagConsumer : public clang::TextDiagnosticPrinter
{
  public:
    CountDiagConsumer(FileInfo & file_info);

    virtual void HandleDiagnostic(clang::DiagnosticsEngine::Level DiagLevel, const clang::Diagnostic & Info) override;

  private:
    bool       m_verbose;
    FileInfo * m_file_info;
};

#endif /* VDENGINE_COUNT_DIAG_CONSUMER_H_ */