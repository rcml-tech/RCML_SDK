#ifndef __RCML_CRobotSignalSwitch_h
#define __RCML_CRobotSignalSwitch_h

#include <_core/RCML_sdk.h>

#include <_core/Robots/CRobot.h>
#include <_core/Signals/CSignal.h>

#include <_core/Actions/CActionSignalGetDI.h>
#include <_core/Actions/CActionSignalGetDO.h>
#include <_core/Actions/CActionSignalSetDO.h>

namespace RCML {

  class RCML_SDK_API CRobotSignalSwitch : public virtual CRobot {
  public:
    virtual ~CRobotSignalSwitch();

    CSignals getDI(CSignal::Indexes signalIndexes);
    CSignals getDO(CSignal::Indexes signalIndexes);
    void setDO(const CSignals& obj, bool queue = false);

  protected:
    CRobotSignalSwitch(CSignal::Indexes indexesDO, CSignal::Indexes indexesDI);

    CSignal::Indexes m_indexesDO;
    CSignal::Indexes m_indexesDI;

    virtual CSignals executeGetDI(CSignals signals) = 0;
    virtual CSignals executeGetDO(CSignals signals) = 0;
    virtual void executeSetDO(CSignals obj) = 0;

    friend CActionSignalGetDI;
    friend CActionSignalGetDO;
    friend CActionSignalSetDO;

  };

  typedef std::shared_ptr<CRobotSignalSwitch> CRobotSignalSwitchPtr;

}

#endif