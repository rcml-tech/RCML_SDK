#ifndef __RCML_CRobotMoveArc_h
#define __RCML_CRobotMoveArc_h

#include <_core/RCML_sdk.h>
#include <_core/Robots/CRobotMoveCartesian.h>

#include <_core/Actions/CActionMoveArc.h>

namespace RCML {

  class RCML_SDK_API CRobotMoveArc : public virtual CRobotMoveCartesian {
  public:
    virtual ~CRobotMoveArc();

    void moveArc(CPoints points, bool queue = false);
    void moveArcRelative(CPoints points, bool queue = false);

    static void validatePoints(CPoints points);

  protected:
    CRobotMoveArc();
    
    virtual void executeMoveArc(CPoints points) = 0;
    virtual void executeMoveArcRelative(CPoints points) = 0;

    friend CActionMoveArc;

  };

  typedef std::shared_ptr<CRobotMoveArc> CRobotMoveArcPtr;

}

#endif