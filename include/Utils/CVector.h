
#ifndef CVECTOR_H
#define CVECTOR_H

#include <RCML_sdk.h>

#include <DataTypes/BaseTypes.h>

#include <map>
#include <vector>

namespace RCML{
  namespace Utils{

template<class TItem>
    class RCML_SDK_API CVector{      
    public:
      typedef std::vector<TItem> CItemVector;
      
    private:
      CItemVector m_Items;
    
    public:
      
      CVector();
      CVector(CItemVector Items);
      CVector(CVector& Vector);
      
      void Add(TItem Item);
      TItem Get(BaseTypes::Index Index);
      void Remove(BaseTypes::Index Index);
      void Clear();
      int GetSize();
    };
    
  }
}

#endif /* CVECTOR_H */

