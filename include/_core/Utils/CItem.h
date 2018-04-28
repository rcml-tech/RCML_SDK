#ifndef __RCML_Utils_CItem_h
#define __RCML_Utils_CItem_h

#include <_core/RCML_sdk.h>
#include <_core/DataTypes/BaseTypes.h>

namespace RCML {
  namespace Utils {
    
    class RCML_SDK_API CItem {
    private:
      RCML::BaseTypes::Index m_index = 0;
      
    public:
      CItem(BaseTypes::Index index);
      virtual RCML::BaseTypes::Index getIndex() const;
      virtual void setIndex(RCML::BaseTypes::Index index);
      
    };
    
  }
}

#endif

