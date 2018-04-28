#ifndef __RCML_CJoint_h
#define __RCML_CJoint_h

#include <_core/RCML_sdk.h>
#include <_core/DataTypes/BaseTypes.h>
#include <_core/Utils/CItem.h>

namespace RCML {

  class RCML_SDK_API CJoint : public Utils::CItem {
  private:
    BaseTypes::Angle m_angle = 0;
    
  public:
    CJoint(BaseTypes::IndexJoint index, BaseTypes::Angle angle);
    
    BaseTypes::Angle getAngle() const;
    void setAngle(BaseTypes::Angle angle);

  };

}

#endif