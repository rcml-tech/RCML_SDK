#if !defined(__RCML_Classes_CMoveLineral_h)
#define __RCML_Classes_CMoveLineral_h

#include <RCML_sdk.h>

#include <Movement/CMoveCartesian.h>
#include <Coordinates/CPoints.h>

namespace RCML{

  class RCML_SDK_API CMoveLineral : public CMoveCartesian
  {
  public:
     virtual void MoveLineral(CPoints Points, bool Queue = false) = 0;
     virtual void MoveLineralRelative(CPoints Points, bool Queue = false) = 0;

  protected:
  private:

  };

}

#endif