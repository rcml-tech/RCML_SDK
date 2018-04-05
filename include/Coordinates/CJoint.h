#if !defined(__RCML_Classes_CJoint_h)
#define __RCML_Classes_CJoint_h

#include <RCML_sdk.h>
#include <Utils/CMap.h>
#include <Utils/CItem.h>
#include <DataTypes/BaseTypes.h>

namespace RCML{

  class RCML_SDK_API CJoint : public Utils::CItem {
  private:
    BaseTypes::Angle m_Angle = 0;
    
  public:
      CJoint();
      CJoint(BaseTypes::JointIndex Index, BaseTypes::Angle Angle);
    BaseTypes::Angle GetAngle();
    virtual void SetAngle(BaseTypes::Angle Angle);
 

  };

}

#endif