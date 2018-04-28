#ifndef __RCML_CActionMoveCartesian_h
#define __RCML_CActionMoveCartesian_h

#include <_core/RCML_sdk.h>
#include <_core/Actions/CActionMove.h>

namespace RCML {

  class RCML_SDK_API CActionMoveCartesian : public CActionMove {
  public:
    CActionMoveCartesian(CRobotPtr robot, bool isRelative, CPoints::Inherited::CItemVector Vector);
    CActionMoveCartesian(CRobotPtr robot, bool isRelative, const CPoints& Points);

  protected:
    virtual void executeActionMove() override;
    virtual void executeActionMoveCartesian();

  };
  
  typedef std::shared_ptr<CActionMoveCartesian> CActionMoveCartesianPtr;

}
#endif
