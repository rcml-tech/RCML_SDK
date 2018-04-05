#ifndef CITEM_H
#define CITEM_H

#include <RCML_sdk.h>

namespace RCML{
  namespace Utils{
    
    class RCML_SDK_API CItem{
    private:
      RCML::BaseTypes::Index m_Index = 0;
      
    public:
      CItem(BaseTypes::Index Index);
      virtual RCML::BaseTypes::JointIndex GetIndex();
      virtual void SetIndex(RCML::BaseTypes::JointIndex Index);
      
    };
    
  }
}


#endif /* CITEM_H */

