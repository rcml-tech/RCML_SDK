#include <vector>
#include <string>
#include <Actions/CActionsQueue.h>
#include <DataTypes/CJson.h>
#include <BaseRobots/SupportedFunction.h>

#if !defined(__RCML_Classes_CRobot_h)
#define __RCML_Classes_CRobot_h

#include <RCML_sdk.h>

namespace RCML {

  class RCML_SDK_API CRobot {
  public:
    virtual void Init(Types::CJson Settings) = 0;

  protected:
    int m_Id;
    std::string m_Name;
    Types::CJson m_Settings;
    CActionsQueue m_actionsQueue;
    std::vector<SupportedFunction> m_supportedFunctions;

  private:

  };
}
#endif