#ifndef __RCML_CActionMoveJoint_h
#define __RCML_CActionMoveJoint_h

#include <_core/Actions/CActionMove.h>

namespace RCML {
  class RCML_SDK_API CActionMoveJoint : public CActionMove {
  public:
    CActionMoveJoint(CRobotPtr robot, bool isRelative, CPoints::Inherited::CItemVector Vector);
    CActionMoveJoint(CRobotPtr robot, bool isRelative, const CPoints& Points);

  protected:
    virtual void executeActionMove() override;
    virtual void executeActionMoveJoint();
  };

  typedef std::shared_ptr<CActionMoveJoint> CActionMoveJointPtr;
}
#endif
