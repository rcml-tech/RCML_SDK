#ifndef __RCML_CRobotMoveLinear_h
#define __RCML_CRobotMoveLinear_h

#include <_core/RCML_sdk.h>
#include <_core/Robots/CRobotMoveCartesian.h>

#include <_core/Actions/CActionMoveLinear.h>

namespace RCML {

  class RCML_SDK_API CRobotMoveLinear : public virtual CRobotMoveCartesian {
  public:
    virtual ~CRobotMoveLinear();

    void moveLinear(CPoints points, bool queue = false);
    void moveLinearRelative(CPoints points, bool queue = false);

  protected:
    CRobotMoveLinear();

    virtual void executeMoveLinear(CPoints points) = 0;
    virtual void executeMoveLinearRelative(CPoints points) = 0;

    friend CActionMoveLinear;

  };

  typedef std::shared_ptr<CRobotMoveLinear> CRobotMoveLinearPtr;

}

#endif