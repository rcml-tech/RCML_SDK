#if !defined(__RCML_Classes_CPoint_h)
#define __RCML_Classes_CPoint_h

#include <RCML_sdk.h>
#include <DataTypes/BaseTypes.h>
#include <Movement/CMoveControlDO.h>
#include <Coordinates/CCoordinates.h>

namespace RCML{

  class RCML_SDK_API CPoint
  {
  private:
    static BaseTypes::Speed m_DefSpeed;
    
    BaseTypes::Speed m_Speed = 0;
    BaseTypes::CNT m_CNT = 0;
    CMoveControlDO m_MoveContorl;
    CCoordinates m_Coordinates;
     
  public:
    CPoint();
    CPoint(const CPoint& obj);
    CPoint(CCoordinates Coordinates);
    CPoint(CCoordinates Coordinates, BaseTypes::Speed Speed);
    CPoint(CCoordinates Coordinates, BaseTypes::Speed Speed, BaseTypes::CNT CNT);
    
    static void SetDefSpeed(BaseTypes::Speed Value);
    static BaseTypes::Speed GetSDefSpeed();
    
    void SetSpeed(BaseTypes::Speed Speed);
    BaseTypes::Speed GetSpeed();
    
    void SetCNT(BaseTypes::CNT CNT);
    BaseTypes::CNT GetCNT();
    
    CCoordinates& Coordinates();
  };

}

#endif