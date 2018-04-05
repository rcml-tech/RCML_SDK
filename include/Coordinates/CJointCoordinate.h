#if !defined(__RCML_Classes_CJointCoordinate_h)
#define __RCML_Classes_CJointCoordinate_h

#include <RCML_sdk.h>

#include <Coordinates/CCoordinate.h>
#include <Coordinates/CJoint.h>

#include <Utils/CMap.h>


namespace RCML{
  
  class CJointCoordinate;
  typedef std::shared_ptr<CJointCoordinate> CJointCoordinatePtr;
  
  class RCML_SDK_API CJointCoordinate : public CCoordinate,
        public  Utils::CMap<CJoint>
  {
  private:
    CJointCoordinate(){};
  
  public:    
    typedef Utils::CMap<CJoint> InheritedMap;
    
    static CJointCoordinatePtr Create(InheritedMap::CItemVector Joints);
    static CJointCoordinatePtr Create();
    static CJointCoordinatePtr GetAs(CCoordinatePtr Coordinate);
     
    virtual CCoordinatePtr GetAs() override;
    
    
    
  };

}

#endif