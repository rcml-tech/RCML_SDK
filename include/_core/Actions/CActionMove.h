#ifndef __RCML_CActionMove_h
#define __RCML_CActionMove_h

#include <_core/RCML_sdk.h>
#include <_core/Actions/CAction.h>
#include <_core/Coordinates/CPoints.h>
#include <_core/Coordinates/CPoint.h>

namespace RCML {

  class RCML_SDK_API CActionMove : public CAction {
  protected:
    CActionMove(CRobotPtr robot, bool isRelative, CPoints::Inherited::CItemVector Vector);
    CActionMove(CRobotPtr robot, bool isRelative, const CPoints& Points);
  
    CPoints m_Points;
    bool m_isRelative = false;

    virtual void executeAction() override;
    virtual void executeActionMove() = 0;
  };

}
#endif
