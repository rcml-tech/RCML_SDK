#ifndef __RCML_CActionMoveLinear_h
#define __RCML_CActionMoveLinear_h

#include <_core/RCML_sdk.h>
#include <_core/Actions/CActionMove.h>

namespace RCML {

  class RCML_SDK_API CActionMoveLinear : public CActionMove {
  public:
    CActionMoveLinear(CRobotPtr robot, bool isRelative, CPoints::Inherited::CItemVector Vector);
    CActionMoveLinear(CRobotPtr robot, bool isRelative, const CPoints& Points);

  protected:
    virtual void executeActionMove() override;
    virtual void executeActionMoveLinear();

  };

  typedef std::shared_ptr<CActionMoveLinear> CActionMoveLinearPtr;
}
#endif
