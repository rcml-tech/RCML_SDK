#if !defined(__RCML_Classes_CMoveJoints_h)
#define __RCML_Classes_CMoveJoints_h

#include <RCML_sdk.h>
#include <Coordinates/CPoints.h>
#include <Coordinates/CJointCoordinate.h>

namespace RCML {

  class RCML_SDK_API CMoveJoints {
  public:
    virtual void MoveJoint(CPoints Points, bool Queue = false) = 0;

    virtual CJointCoordinatePtr GetAngles() = 0;

  protected:
    int m_JointsCount;

  private:

  };
}

#endif