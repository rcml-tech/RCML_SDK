#ifndef __RCML_CActionMoveJoint_h
#define __RCML_CActionMoveJoint_h

#include <Actions/CActionMove.h>

namespace RCML {
  class RCML_SDK_API CActionMoveJoint : public CActionMove {
  public:
    CActionMoveJoint();
    CActionMoveJoint(CPoints::Inherited::CItemVector Vector);
    CActionMoveJoint(const CPoints& Points);
  };
}
#endif
