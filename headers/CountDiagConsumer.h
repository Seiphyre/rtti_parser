#ifndef VDENGINE_COUNT_DIAG_CONSUMER_H_
#define VDENGINE_COUNT_DIAG_CONSUMER_H_

#include "clang/Basic/Diagnostic.h"
#include "info_structs.h"

class CountDiagConsumer : public clang::DiagnosticConsumer
{
  public:
    virtual void HandleDiagnostic(clang::DiagnosticsEngine::Level DiagLevel, const clang::Diagnostic & Info) override;
};

#endif /* VDENGINE_COUNT_DIAG_CONSUMER_H_ */