#if !defined(__RCML_Classes_CCartesianCoordinate_h)
#define __RCML_Classes_CCartesianCoordinate_h

#include <RCML_sdk.h>
#include <memory>
#include <Coordinates/CCoordinate.h>

namespace RCML{
  
  class CCartesianCoordinate;
  typedef std::shared_ptr<CCartesianCoordinate> CCartesianCoordinatePtr;

  class RCML_SDK_API CCartesianCoordinate : public CCoordinate
  {
  private:
    BaseTypes::Cartesian m_X = 0;
    BaseTypes::Cartesian m_Y = 0;
    BaseTypes::Cartesian m_Z = 0;
    BaseTypes::Cartesian m_A = 0;
    BaseTypes::Cartesian m_B = 0;
    BaseTypes::Cartesian m_C = 0;
    
    CCartesianCoordinate();
    CCartesianCoordinate(BaseTypes::Cartesian X,
            BaseTypes::Cartesian Y, BaseTypes::Cartesian Z, BaseTypes::Angle C);
    CCartesianCoordinate(BaseTypes::Cartesian X, BaseTypes::Cartesian Y, 
            BaseTypes::Cartesian Z, BaseTypes::Angle A, BaseTypes::Angle B,
            BaseTypes::Angle C);
    
  public:
    
    static CCartesianCoordinatePtr Create();
    static CCartesianCoordinatePtr Create(BaseTypes::Cartesian X,
            BaseTypes::Cartesian Y, BaseTypes::Cartesian Z, BaseTypes::Angle C);
    static CCartesianCoordinatePtr Create(BaseTypes::Cartesian X, BaseTypes::Cartesian Y, 
            BaseTypes::Cartesian Z, BaseTypes::Angle A, BaseTypes::Angle B, 
            BaseTypes::Angle C);
    static CCartesianCoordinatePtr GetAs(CCoordinatePtr Coordinate);
     
    BaseTypes::Cartesian GetX();
    BaseTypes::Cartesian GetY();
    BaseTypes::Cartesian GetZ();
    BaseTypes::Angle GetA();
    BaseTypes::Angle GetB();
    BaseTypes::Angle GetC();

    void SetX(BaseTypes::Cartesian X);
    void SetY(BaseTypes::Cartesian Y);
    void SetZ(BaseTypes::Cartesian Z);
    void SetA(BaseTypes::Angle A);
    void SetB(BaseTypes::Angle B);
    void SetC(BaseTypes::Angle C);
    
    virtual CCoordinatePtr GetAs() override;

  };

}

#endif