#if !defined(__RobotModules_CRobotModule_h)
#define __RobotModules_CRobotModule_h

#include <memory>
#include <DataTypes/CJson.h>
#include <BaseRobots/CRobot.h>

namespace RCML{

  typedef std::shared_ptr<CRobot> CRobotPtr;
  class CRobotModule
  {
  public:
    virtual void Init(Types::CJson Settings) = 0;
    virtual CRobotPtr GetRobotByName(std::string Name) = 0;
    virtual CRobotPtr GetRobotById(int Id) = 0;

  protected:
  private:
    Types::CJson m_Settings;
    CRobotPtr m_Robots;


  };

}

#endif