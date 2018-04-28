#ifndef _RCML_CPoints_h
#define _RCML_CPoints_h

#include <_core/RCML_sdk.h>
#include <_core/DataTypes/BaseTypes.h>
#include <_core/Coordinates/CPoint.h>
#include <_core/Utils/CVector.h>

namespace RCML{

  class RCML_SDK_API CPoints : public Utils::CVector<CPoint>
  {
  public:
    typedef Utils::CVector<CPoint> Inherited;
    typedef std::shared_ptr<CPoints> CPointsPtr;
    
    CPoints();
    CPoints(const CPoints& obj);
    CPoints(Inherited::CItemVector vector);

    void addByCartesianCoords(BaseTypes::Cartesian x, BaseTypes::Cartesian y, BaseTypes::Cartesian z, BaseTypes::Cartesian a, BaseTypes::Cartesian b, BaseTypes::Cartesian c);
    void addByCartesianCoords(BaseTypes::Cartesian x, BaseTypes::Cartesian y, BaseTypes::Cartesian z, BaseTypes::Cartesian c);
    void addByCartesianCoords(BaseTypes::Cartesian x, BaseTypes::Cartesian y, BaseTypes::Cartesian z);

    void addByJoint6Coords(BaseTypes::Cartesian a1, BaseTypes::Cartesian a2, BaseTypes::Cartesian a3, BaseTypes::Cartesian a4, BaseTypes::Cartesian a5, BaseTypes::Cartesian a6);
 
    static CPoints createFromCartesianCoords(BaseTypes::Cartesian x, BaseTypes::Cartesian y, BaseTypes::Cartesian z, BaseTypes::Cartesian a, BaseTypes::Cartesian b, BaseTypes::Cartesian c);
    static CPoints createFromCartesianCoords(BaseTypes::Cartesian x, BaseTypes::Cartesian y, BaseTypes::Cartesian z, BaseTypes::Cartesian c);
    static CPoints createFromCartesianCoords(BaseTypes::Cartesian x, BaseTypes::Cartesian y, BaseTypes::Cartesian z);
                   
    static CPoints createFromJoint6Coords(BaseTypes::Cartesian a1, BaseTypes::Cartesian a2, BaseTypes::Cartesian a3, BaseTypes::Cartesian a4, BaseTypes::Cartesian a5, BaseTypes::Cartesian a6);
  };
}


#endif