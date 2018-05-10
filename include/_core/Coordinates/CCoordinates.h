#ifndef __RCML_CCoordinates_h
#define __RCML_CCoordinates_h

#include <_core/RCML_sdk.h>
#include <_core/Coordinates/CCoordinate.h>
#include <_core/Utils/CMapPointers.h>

namespace RCML {

  class RCML_SDK_API CCoordinates : public Utils::CMapPointers<CCoordinate> {
    
  public:
    typedef Utils::CMapPointers<CCoordinate> InheritedMap;
    
    CCoordinates();
    CCoordinates(const CCoordinates& obj);
    CCoordinates(InheritedMap::CItemVector vector);
    
  };

}

#endif