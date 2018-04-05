#if !defined(__RCML_Classes_CPoints_h)
#define __RCML_Classes_CPoints_h

#include <RCML_sdk.h>

#include <Coordinates/CPoint.h>
#include <DataTypes/BaseTypes.h>
#include <Utils/CVector.h>

namespace RCML{

  class RCML_SDK_API CPoints : public Utils::CVector<CPoint>
  {
  public:
    typedef Utils::CVector<CPoint> Inherited;
    typedef std::shared_ptr<CPoints> CPointsPtr;
    
    CPoints();
    CPoints(const CPoints& obj);
    CPoints(Inherited::CItemVector Vector);

    void AddCartesian(BaseTypes::Cartesian X, BaseTypes::Cartesian Y, BaseTypes::Cartesian Z, BaseTypes::Cartesian A, BaseTypes::Cartesian B, BaseTypes::Cartesian C);
    void AddCartesian(BaseTypes::Cartesian X, BaseTypes::Cartesian Y, BaseTypes::Cartesian Z, BaseTypes::Cartesian C);
    void AddCartesian(BaseTypes::Cartesian X, BaseTypes::Cartesian Y, BaseTypes::Cartesian Z);
 
    static CPoints CreateCartesian(BaseTypes::Cartesian X, BaseTypes::Cartesian Y, BaseTypes::Cartesian Z, BaseTypes::Cartesian A, BaseTypes::Cartesian B, BaseTypes::Cartesian C);
    static CPoints CreateCartesian(BaseTypes::Cartesian X, BaseTypes::Cartesian Y, BaseTypes::Cartesian Z, BaseTypes::Cartesian C);
    static CPoints CreateCartesian(BaseTypes::Cartesian X, BaseTypes::Cartesian Y, BaseTypes::Cartesian Z);

    static CPoints CreateJoint6(BaseTypes::Cartesian A1, BaseTypes::Cartesian A2, BaseTypes::Cartesian A3, BaseTypes::Cartesian A4, BaseTypes::Cartesian A5, BaseTypes::Cartesian A6);
  };
}


#endif