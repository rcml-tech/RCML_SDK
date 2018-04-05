#ifndef __RCML_CActionMove_h
#define __RCML_CActionMove_h

#include <RCML_sdk.h>

#include <Actions/CAction.h>
#include <Coordinates/CPoints.h>
#include <Coordinates/CPoint.h>

namespace RCML {

  class RCML_SDK_API CActionMove : public CAction {
  public:
    CActionMove();
    CActionMove(CPoints::Inherited::CItemVector Vector);
    CActionMove(const CPoints& Points);
  protected:
    CPoints m_Points;
  };

}
#endif
