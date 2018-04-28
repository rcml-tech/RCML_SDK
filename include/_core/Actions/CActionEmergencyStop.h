#ifndef __RCML_CActionEmergencyStop_h
#define __RCML_CActionEmergencyStop_h

#include <_core/Actions/CAction.h>

namespace RCML {

  class RCML_SDK_API CActionEmergencyStop : public CAction {
  public:
    CActionEmergencyStop(CRobotPtr robot);
  protected:
    virtual void executeAction() override;
    virtual void executeActionEmergencyStop();
  };

  typedef std::shared_ptr<CActionEmergencyStop> CActionEmergencyStopPtr;

}

#endif