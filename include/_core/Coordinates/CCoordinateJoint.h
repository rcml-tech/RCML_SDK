#ifndef __RCML_CCoordinateJoint_h
#define __RCML_CCoordinateJoint_h

#include <_core/RCML_sdk.h>
#include <_core/Coordinates/CCoordinate.h>
#include <_core/Coordinates/CJoint.h>
#include <_core/Utils/CMap.h>


namespace RCML {
  
  class CCoordinateJoint;
  typedef std::shared_ptr<CCoordinateJoint> CCoordinateJointPtr;
  
  class RCML_SDK_API CCoordinateJoint : public CCoordinate, public Utils::CMap<CJoint> {
  private:
    CCoordinateJoint();
  
  public:    
    typedef Utils::CMap<CJoint> InheritedMap;
    
    static CCoordinateJointPtr create(InheritedMap::CItemVector joints);
    static CCoordinateJointPtr create();
    static CCoordinateJointPtr getAsCoordinateJoint(CCoordinatePtr coordinate);
     
    virtual CCoordinatePtr getAsCoordinate() override;
    
  };

}

#endif