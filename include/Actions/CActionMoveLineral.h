#if !defined(__RCML_Classes_CActionMoveLineral_h)
#define __RCML_Classes_CActionMoveLineral_h

#include <RCML_sdk.h>

#include <Actions/CAction.h>
#include <Coordinates/CPoints.h>
#include <Coordinates/CPoint.h>
#include <Actions/CAction.h>


namespace RCML {

  class RCML_SDK_API CActionMoveLineral : public CAction, public CPoints {
  public:
    CActionMoveLineral();
    CActionMoveLineral(Inherited::CItemVector Vector);
    CActionMoveLineral(const CPoints& Points);

  };
}
#endif
