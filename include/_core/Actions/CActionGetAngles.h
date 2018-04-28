#ifndef __RCML_CActionGetAngles_h
#define __RCML_CActionGetAngles_h

#include <_core/Actions/CAction.h>
#include <_core/Coordinates/CCoordinateJoint.h>

namespace RCML {

  class RCML_SDK_API CActionGetAngles : public CAction {
  public:
    CActionGetAngles(CRobotPtr robot);
    CCoordinateJointPtr getResult() const;

  protected:
    virtual void executeAction() override;
    virtual void executeActionGetAngles();

    CCoordinateJointPtr result = nullptr;

  };

  typedef std::shared_ptr<CActionGetAngles> CActionGetAnglesPtr;
}

#endif