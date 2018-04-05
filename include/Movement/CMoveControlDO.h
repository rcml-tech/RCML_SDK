#if !defined(__RCML_Classes_CMoveControlDO_h)
#define __RCML_Classes_CMoveControlDO_h
namespace RCML{

  enum class CTriggerType{
    ttTime = 0,
    ttDistance = 1
  };

  enum class CLocationType{
    ltStart = 0,
    ltEnd = 1
  };

  class CMoveControlDO
  {
  public:
     CTriggerType GetTriggerType();
     void SetTriggerType(CTriggerType TriggerType);

  protected:
  private:

     CTriggerType m_TriggerType;
     CLocationType m_OnStart;

     double m_TriggerValue;
     int m_Do;
     int m_Value;


  };

}

#endif