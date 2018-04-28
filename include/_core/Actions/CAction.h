#ifndef __RCML_CAction_h
#define __RCML_CAction_h

#include <memory>

#include <_core/RCML_sdk.h>

namespace RCML {
  class RCML_SDK_API CAction;
  typedef std::shared_ptr<CAction> CActionPtr;
}


#include <_core/DataTypes/BaseTypes.h>
#include <_core/Robots/CRobot.h>

namespace RCML {
  class RCML_SDK_API CAction {
  public:
    BaseTypes::Identifier getId() const;
    void execute();

  protected:
    CAction(CRobotPtr robot);
    virtual void executeAction() = 0;

    CRobotPtr m_robot = nullptr;
    
    static BaseTypes::Identifier generateId();

  private:
    BaseTypes::Identifier m_id = 0;
    
    static BaseTypes::Identifier m_idCounter;
  };
  
}

#endif