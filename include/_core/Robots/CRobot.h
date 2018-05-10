#ifndef __RCML_CRobot_h
#define __RCML_CRobot_h

#include <string>
#include <memory>

#include <_core/RCML_sdk.h>

namespace RCML {
  class RCML_SDK_API CRobot;
  
  //template class std::shared_ptr<CRobot>;
  typedef std::shared_ptr<CRobot> CRobotPtr;
}


#include <_core/DataTypes/BaseTypes.h>
#include <_core/DataTypes/CJson.h>
#include <_core/Actions/CActionsQueue.h>
#include <_core/Robots/CRobotFunctions.h>

namespace RCML {

  class RCML_SDK_API CRobot : public std::enable_shared_from_this<CRobot> {
  public:
    virtual ~CRobot();
    
    BaseTypes::Identifier getId() const;
    std::string getName() const;
    bool isSupportFunction(CRobotFunction function) const;

    void executeQueue();

  private:
    BaseTypes::Identifier m_id = 0;
    std::string m_name = "";
    CActionsQueueUniqPtr m_actionsQueue;

  protected:
    CRobotFunctions m_functions = {};
    Types::CJson m_settings;

    CRobot();
    CRobot(BaseTypes::Identifier m_id, std::string m_name, Types::CJson settings);
    void addAction(CActionPtr ptr, bool queue);
  };

}
#endif