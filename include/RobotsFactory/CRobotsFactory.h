#ifndef CROBOTSFACTORY_H
#define CROBOTSFACTORY_H

#include <RCML_sdk.h>
#include <DataTypes/CJson.h>
#include <memory>

namespace RCML{
  class RCML_SDK_API CRobotsFactory{
  public:
    static CPromRobotPtr GetRobotFromJson(Types::CJson Settings);
    static CPromRobotPtr GetRobot(std::string SettingsPath = "Settings.json");
  };
  
}


#endif /* CROBOTSFACTORY_H */

