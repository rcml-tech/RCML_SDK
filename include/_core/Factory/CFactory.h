#ifndef __RCML_CFactory_h
#define __RCML_CFactory_h

#include <_core/RCML_sdk.h>
#include <_core/DataTypes/CJson.h>
#include <_core/Robots/CRobotInd.h>


namespace RCML {
  class RCML_SDK_API CFactory {
  public:
    static CRobotIndPtr getRobotFromJson(Types::CJson settings);
    static CRobotIndPtr getRobot(std::string settingsPath = "Settings.json");
  };
}

#endif

