#if !defined(__RCML_Classes_CPromRobot_h)
#define __RCML_Classes_CPromRobot_h

#include <BaseRobots/CRobot.h>

#include <Singals/CSignalSwitch.h>
#include <Movement/CMoveJoints.h>
#include <Movement/CArcMove.h>
#include <Movement/CMoveLineral.h>
#include <DataTypes/BaseTypes.h>
#include <DataTypes/CVariantArray.h>
#include <BaseRobots/CRobotInternalError.h>

namespace RCML {

  class RCML_SDK_API CPromRobot : public CRobot, public CSignalSwitch, public CMoveJoints, public CArcMove, public CMoveLineral {
  public:

    virtual void SetTool(int Tool, bool Queue = false) = 0;
    virtual int GetTool() = 0;

    virtual void SetBase(int Base, bool Queue = false) = 0;
    virtual int GetBase() = 0;

    virtual void SetLoad(int Load, bool Queue = false) = 0;
    virtual int GetLoad() = 0;

    virtual void StartProgram(CVariantArray Params, bool Queue = false) = 0;
    
    virtual void EmergancyStop() = 0;
    virtual void ReturnToWork() = 0;

    virtual CRobotInternalError* GetInternalError() = 0;

  protected:
  private:
    int m_tool;
    int m_base;
    int m_load;
  };

  typedef std::shared_ptr<CPromRobot> CPromRobotPtr;
}
#endif