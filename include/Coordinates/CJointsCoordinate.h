#if !defined(__RCML_Classes_CJointsCoordinate_h)
#define __RCML_Classes_CJointsCoordinate_h

#include <RCML_sdk.h>

#include <Coordinates/CCoordinate.h>
#include <Coordinates/CJoint.h>

#include <Utils/CMap.h>


namespace RCML{
  
  class CJointsCoordinate;
  typedef std::shared_ptr<CJointsCoordinate> CJointsCoordinatePtr;
  
  class RCML_SDK_API CJointsCoordinate : public CCoordinate,
        public  Utils::CMap<CJoint>
  {
  private:
    CJointsCoordinate(){};
  
  public:    
    typedef Utils::CMap<CJoint> InheritedMap;
    
    static CJointsCoordinatePtr Create(InheritedMap::CItemVector Joints);
    static CJointsCoordinatePtr Create();
    static CJointsCoordinatePtr GetAs(CCoordinatePtr Coordinate);
     
    virtual CCoordinatePtr GetAs() override;
    
    
    
  };

}

#endif