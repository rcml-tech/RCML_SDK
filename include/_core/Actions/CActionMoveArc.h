#ifndef __RCML_CActionMoveArc_h
#define __RCML_CActionMoveArc_h

#include <_core/RCML_sdk.h>
#include <_core/Actions/CActionMove.h>

namespace RCML {
  
  class RCML_SDK_API CActionMoveArc : public CActionMove {
  public:
    CActionMoveArc(CRobotPtr robot, bool isRelative, CPoints::Inherited::CItemVector Vector);
    CActionMoveArc(CRobotPtr robot, bool isRelative, const CPoints& Points);

  protected:
    virtual void executeActionMove() override;
    virtual void executeActionMoveArc();

  };

  typedef std::shared_ptr<CActionMoveArc> CActionMoveArcPtr;

}

#endif