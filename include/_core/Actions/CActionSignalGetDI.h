#ifndef __RCML_CActionSignalGetDI_h
#define __RCML_CActionSignalGetDI_h

#include <_core/Actions/CActionSignal.h>

namespace RCML {

  class RCML_SDK_API CActionSignalGetDI : public CActionSignal {
  public:
    CActionSignalGetDI(CRobotPtr robot, CSignal::Indexes signalIndexes);
    CSignals getSignals();

  protected:
    virtual void executeActionSignal() override;
    virtual void executeActionSignalGetDI();

  };

  typedef std::shared_ptr<CActionSignalGetDI> CActionSignalGetDIPtr;

}
#endif