#ifndef __RCML_CCoordinateCartesian_h
#define __RCML_CCoordinateCartesian_h

#include <_core/RCML_sdk.h>
#include <_core/Coordinates/CCoordinate.h>

namespace RCML {
  
  class CCoordinateCartesian;
  typedef std::shared_ptr<CCoordinateCartesian> CCoordinateCartesianPtr;

  class RCML_SDK_API CCoordinateCartesian : public CCoordinate {
  private:
    BaseTypes::Cartesian m_x = 0;
    BaseTypes::Cartesian m_y = 0;
    BaseTypes::Cartesian m_z = 0;
    BaseTypes::Cartesian m_a = 0;
    BaseTypes::Cartesian m_b = 0;
    BaseTypes::Cartesian m_c = 0;
    
    CCoordinateCartesian();
    CCoordinateCartesian(BaseTypes::Cartesian x, BaseTypes::Cartesian y, 
      BaseTypes::Cartesian z, BaseTypes::Angle c);
    CCoordinateCartesian(BaseTypes::Cartesian x, BaseTypes::Cartesian y, 
      BaseTypes::Cartesian z, BaseTypes::Angle a, BaseTypes::Angle b,
      BaseTypes::Angle c);
    
  public:
    static CCoordinateCartesianPtr create();
    static CCoordinateCartesianPtr create(BaseTypes::Cartesian x,
            BaseTypes::Cartesian y, BaseTypes::Cartesian z, BaseTypes::Angle c);
    static CCoordinateCartesianPtr create(BaseTypes::Cartesian x, BaseTypes::Cartesian y, 
            BaseTypes::Cartesian z, BaseTypes::Angle a, BaseTypes::Angle b, 
            BaseTypes::Angle c);
    static CCoordinateCartesianPtr getAsCoordinateCartesian(CCoordinatePtr coordinate);
     
    BaseTypes::Cartesian getX() const;
    BaseTypes::Cartesian getY() const;
    BaseTypes::Cartesian getZ() const;
    BaseTypes::Angle getA() const;
    BaseTypes::Angle getB() const;
    BaseTypes::Angle getC() const;

    void setX(BaseTypes::Cartesian x);
    void setY(BaseTypes::Cartesian y);
    void setZ(BaseTypes::Cartesian z);
    void setA(BaseTypes::Angle a);
    void setB(BaseTypes::Angle b);
    void setC(BaseTypes::Angle c);
    
    virtual CCoordinatePtr getAsCoordinate() override;

  };

}

#endif