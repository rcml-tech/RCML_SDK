#ifndef __RCML_CActionGetCoordinate_h
#define __RCML_CActionGetCoordinate_h

#include <_core/Actions/CAction.h>
#include <_core/Coordinates/CCoordinateCartesian.h>

namespace RCML {

  class RCML_SDK_API CActionGetCoordinate : public CAction {
  public:
    CActionGetCoordinate(CRobotPtr robot);
    CCoordinateCartesianPtr getResult() const;

  protected:
    virtual void executeAction() override;
    virtual void executeActionGetCoordinate();

    CCoordinateCartesianPtr result = nullptr;

  };

  typedef std::shared_ptr<CActionGetCoordinate> CActionGetCoordinatePtr;
}

#endif