#ifndef __RCML_CCoordinates_h
#define __RCML_CCoordinates_h

#include <_core/RCML_sdk.h>
#include <_core/Coordinates/CCoordinate.h>
#include <_core/Utils/CMap.h>

namespace RCML {

  class RCML_SDK_API CCoordinates : public Utils::CPointersMap<CCoordinatePtr> {
    
  public:
    typedef Utils::CPointersMap<CCoordinatePtr> InheritedMap;
    
    CCoordinates();
    CCoordinates(const CCoordinates& obj);
    CCoordinates(InheritedMap::CItemVector vector);
    
  };

}

#endif