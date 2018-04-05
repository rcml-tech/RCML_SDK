#ifndef __RCML_Classes_CActionMoveLinear_h
#define __RCML_Classes_CActionMoveLinear_h

#include <RCML_sdk.h>
#include <Actions/CActionMove.h>


namespace RCML {

  class RCML_SDK_API CActionMoveLinear : public CActionMove {
  public:
    CActionMoveLinear();
    CActionMoveLinear(CPoints::Inherited::CItemVector Vector);
    CActionMoveLinear(const CPoints& Points);
  };
}
#endif
