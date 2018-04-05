#ifndef __RCML_CActionMoveCartesian_h
#define __RCML_CActionMoveCartesian_h

#include <RCML_sdk.h>
#include <Actions/CActionMove.h>

namespace RCML {

  class RCML_SDK_API CActionMoveCartesian : public CActionMove {
  public:
    CActionMoveCartesian();
    CActionMoveCartesian(CPoints::Inherited::CItemVector Vector);
    CActionMoveCartesian(const CPoints& Points);
  };
}
#endif
