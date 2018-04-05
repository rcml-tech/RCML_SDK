#if !defined(__RCML_Classes_CMoveCartesian_h)
#define __RCML_Classes_CMoveCartesian_h

#include <RCML_sdk.h>
#include <Coordinates/CPoints.h>
#include <Coordinates/CCartesianCoordinate.h>

namespace RCML{

  class RCML_SDK_API CMoveCartesian
  {
  public:
     virtual void MoveCartesian(CPoints Points, bool Queue = false) = 0;
     virtual void MoveCartesianRelative(CPoints Points, bool Queue = false) = 0;
     virtual CCartesianCoordinatePtr GetCoordinate() = 0;

  protected:
  private:

  };

}

#endif