#if !defined(__RCML_Classes_CCoordinates_h)
#define __RCML_Classes_CCoordinates_h

#include <RCML_sdk.h>

#include <Coordinates/CCoordinate.h>
#include <DataTypes/BaseTypes.h>
#include <Utils/CMap.h>

namespace RCML{

  class RCML_SDK_API CCoordinates : public Utils::CPointersMap<CCoordinatePtr>
  {
    
  public:
    typedef Utils::CPointersMap<CCoordinatePtr> InheritedMap;
    
    CCoordinates();
    CCoordinates(CCoordinates& obj);
    CCoordinates(InheritedMap::CItemVector Vector);
    
  };

}

#endif