#ifndef __RCML_CRobotMoveJoint_h
#define __RCML_CRobotMoveJoint_h

#include <_core/RCML_sdk.h>
#include <_core/DataTypes/BaseTypes.h>

#include <_core/Coordinates/CPoints.h>
#include <_core/Coordinates/CCoordinateJoint.h>

#include <_core/Robots/CRobot.h>

#include <_core/Actions/CActionGetAngles.h>
#include <_core/Actions/CActionMoveJoint.h>

namespace RCML {

  class RCML_SDK_API CRobotMoveJoint: public virtual CRobot {
  public:
    virtual ~CRobotMoveJoint();

    void moveJoint(CPoints points, bool queue = false);
    void moveJointRelative(CPoints points, bool queue = false);
    CCoordinateJointPtr getAngles();

  protected:
    int m_jointCount = 0;

    CRobotMoveJoint(BaseTypes::IndexJoint jointCount);

    virtual void executeMoveJoint(CPoints points) = 0;
    virtual void executeMoveJointRelative(CPoints points) = 0;
    virtual CCoordinateJointPtr executeGetAngles() = 0;

    friend CActionGetAngles;
    friend CActionMoveJoint;

  };

  typedef std::shared_ptr<CRobotMoveJoint> CRobotMoveJointPtr;

}

#endif