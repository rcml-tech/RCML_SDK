#if !defined(__RCML_Classes_CArcMove_h)
#define __RCML_Classes_CArcMove_h

#include <RCML_sdk.h>
#include <Coordinates/CPoints.h>

namespace RCML{

  class RCML_SDK_API CArcMove
  {
  public:
    virtual void ArcMove(CPoints Points, bool Queue = false) = 0;

  protected:
  private:

  };

}

#endif