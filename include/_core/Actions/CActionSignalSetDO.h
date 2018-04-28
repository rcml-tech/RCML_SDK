#ifndef __RCML_CActionSignalSetDO_h
#define __RCML_CActionSignalSetDO_h

#include <_core/Actions/CActionSignal.h>

namespace RCML {

  class RCML_SDK_API CActionSignalSetDO : public CActionSignal {
  public:
    CActionSignalSetDO(CRobotPtr robot, const CSignals& obj);

  private:
    void validateValues();

  protected:
    virtual void executeActionSignal() override;
    virtual void executeActionSignalSetDO();

  };

  typedef std::shared_ptr<CActionSignalSetDO> CActionSignalSetDOPtr;

}
#endif