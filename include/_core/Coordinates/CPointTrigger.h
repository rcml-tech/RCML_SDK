#ifndef __RCML_CPointTrigger_h
#define __RCML_CPointTrigger_h

#include <_core/Signals/CSignal.h>

namespace RCML {

  class RCML_SDK_API CPointTrigger {
  public:
    enum class Type {
      Time,
      Distance,
      UNKNOW
    };

    enum class Location {
      Start,
      End,
      UNKNOW
    };

  protected:
    Type m_triggerType = Type::UNKNOW;
    Location m_triggerLocation = Location::UNKNOW;

    double m_triggerValue = 0;
    BaseTypes::IndexSignal m_signalIndex = 0;
    CSignal::Value m_signalValue = CSignal::Value::UNKNOW;

    CPointTrigger();
    CPointTrigger(Type triggerType, Location triggerLocation, double triggerValue,
      BaseTypes::IndexSignal signalIndex, CSignal::Value signalValue);

  public:
    static void validateTriggerType(Type triggerType);
    static void validateTriggerLocation(Location triggerLocation);

    Type getTriggerType() const;
    void setTriggerType(Type triggerType);
    
    Location getTriggerLocation() const;
    void setTriggerLocation(CPointTrigger::Location triggerLocation);

    double getTriggerValue() const;
    void setTriggerValue(double triggerValue);

    BaseTypes::IndexSignal getSignalIndex() const;
    void setSignalIndex(BaseTypes::IndexSignal signalIndex);

    CSignal::Value getSignalValue() const;
    void setSignalValue(CSignal::Value signalValue);

  };

}

#endif