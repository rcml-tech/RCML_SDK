#ifndef __RCML_CActionSignalGetDO_h
#define __RCML_CActionSignalGetDO_h

#include <_core/Actions/CActionSignal.h>

namespace RCML {

  class RCML_SDK_API CActionSignalGetDO : public CActionSignal {
  public:
    CActionSignalGetDO(CRobotPtr robot, CSignal::Indexes signalIndexes);
    CSignals getSignals();

  protected:
    virtual void executeActionSignal() override;
    virtual void executeActionSignalGetDO();

  };

  typedef std::shared_ptr<CActionSignalGetDO> CActionSignalGetDOPtr;

}
#endif