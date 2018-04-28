#ifndef __RCML_CRobotInd_h
#define __RCML_CRobotInd_h

#include <_core/RCML_sdk.h>
#include <_core/Robots/CRobot.h>

#include <_core/DataTypes/BaseTypes.h>

#include <_core/Robots/CRobotSignalSwitch.h>
#include <_core/Robots/CRobotMoveJoint.h>
#include <_core/Robots/CRobotMoveLinear.h>
#include <_core/Robots/CRobotMoveArc.h>

#include <_core/Actions/CActionEmergencyStop.h>
#include <_core/Actions/CActionIndOption.h>
#include <_core/Actions/CActionReturnToWork.h>
#include <_core/Actions/CActionStartProgram.h>

namespace RCML {

  class RCML_SDK_API CRobotInd : public virtual CRobot, public CRobotSignalSwitch, public CRobotMoveJoint, public CRobotMoveLinear, public CRobotMoveArc {
  public:
    virtual ~CRobotInd();

    void setTool(BaseTypes::IndexTool toolNum, bool queue = false);
    BaseTypes::IndexTool getTool();

    void setBase(BaseTypes::IndexBase baseNum, bool queue = false);
    BaseTypes::IndexBase getBase();

    void setLoad(BaseTypes::IndexLoad loadNum, bool queue = false);
    BaseTypes::IndexLoad getLoad();

    void startProgram(std::string programName, bool queue = false);
    
    void emergencyStop(bool queue = false);
    void returnToWork(bool queue = false);

  protected:
    CRobotInd(CSignal::Indexes indexesDO, CSignal::Indexes indexesDI);

    virtual void executeEmergencyStop() = 0;
    virtual BaseTypes::Index executeIndOption(CActionIndOption::Option option, CActionIndOption::Action action, BaseTypes::Index index) = 0;
	  virtual void executeReturnToWork() = 0;
    virtual void executeStartProgram(std::string programName) = 0;

    friend CActionEmergencyStop;
    friend CActionIndOption;
    friend CActionReturnToWork;
    friend CActionStartProgram;

  };

  typedef std::shared_ptr<CRobotInd> CRobotIndPtr;

}

#endif