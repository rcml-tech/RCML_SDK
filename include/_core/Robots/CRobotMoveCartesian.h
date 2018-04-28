#ifndef __RCML_CRobotMoveCartesian_h
#define __RCML_CRobotMoveCartesian_h

#include <_core/RCML_sdk.h>

#include <_core/Coordinates/CPoints.h>
#include <_core/Coordinates/CCoordinateCartesian.h>

#include <_core/Robots/CRobot.h>

#include <_core/Actions/CActionGetCoordinate.h>
#include <_core/Actions/CActionMoveCartesian.h>

namespace RCML{

  class RCML_SDK_API CRobotMoveCartesian : public virtual CRobot{
  public:
    virtual ~CRobotMoveCartesian();

    void moveCartesian(CPoints points, bool queue = false);
    void moveCartesianRelative(CPoints points, bool queue = false);
    CCoordinateCartesianPtr getCoordinate();

  protected:
    CRobotMoveCartesian();

    virtual void executeMoveCartesian(CPoints points) = 0;
    virtual void executeMoveCartesianRelative(CPoints points) = 0;
    virtual CCoordinateCartesianPtr executeGetCoordinate() = 0;

    friend CActionGetCoordinate;
    friend CActionMoveCartesian;

  };

  typedef std::shared_ptr<CRobotMoveCartesian> CRobotMoveCartesianPtr;

}

#endif