#ifndef __RCML_CSignal_h
#define __RCML_CSignal_h

#include <_core/RCML_sdk.h>
#include <_core/Utils/CItem.h>
#include <_core/Utils/CMap.h>
#include <vector>

namespace RCML {

  class CSignal;
  typedef Utils::CMap<CSignal> CSignals;

  class RCML_SDK_API CSignal : public Utils::CItem {
  public:
    typedef std::vector<BaseTypes::IndexSignal> Indexes;

    enum class Value {
      ON,
      OFF,
      UNKNOW
    };

    enum class Type {
      DI,
      DO,
      UNKNOW
    };

  private:
    Type m_type = Type::UNKNOW;
    Value m_value = Value::UNKNOW;

  public:
    static void validateType(CSignal::Type type);
    static void validateValue(CSignal::Value value);
    static CSignal::Indexes getIndexesFromSignals(CSignals& obj);

    CSignal(BaseTypes::IndexSignal index);
    CSignal(BaseTypes::IndexSignal index, CSignal::Type type);
    CSignal(BaseTypes::IndexSignal index, CSignal::Type type, CSignal::Value value);
    
    CSignal::Type getType() const;
    void setType(CSignal::Type type);

    CSignal::Value getValue() const;
    void setValue(CSignal::Value value);

  };

}

#endif