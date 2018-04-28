#ifndef __RCML_CPoint_h
#define __RCML_CPoint_h

#include <_core/RCML_sdk.h>
#include <_core/DataTypes/BaseTypes.h>
#include <_core/Coordinates/CPointTrigger.h>
#include <_core/Coordinates/CCoordinates.h>

namespace RCML {

  class RCML_SDK_API CPoint : public CPointTrigger {
  private:
    static BaseTypes::Speed m_defaultSpeed;
    
    BaseTypes::Speed m_speed = 0;
    BaseTypes::CNT m_CNT = 0;
    CCoordinates m_coordinates;
     
  public:
    static void setDefaultSpeed(BaseTypes::Speed speedValue);
    static BaseTypes::Speed getDefaultSpeed();
    
    CPoint(const CPoint& obj);
    CPoint(CCoordinates coordinates);
    CPoint(CCoordinates coordinates, BaseTypes::Speed speed);
    CPoint(CCoordinates coordinates, BaseTypes::Speed speed, BaseTypes::CNT CNT);
    
    void setSpeed(BaseTypes::Speed speedValue);
    BaseTypes::Speed getSpeed() const;
    
    void setCNT(BaseTypes::CNT CNT);
    BaseTypes::CNT getCNT() const;
    
    CCoordinates& coordinates();
  };

}

#endif