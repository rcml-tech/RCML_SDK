#ifndef __RCML_Utils_CVector_h
#define __RCML_Utils_CVector_h

#include <_core/RCML_sdk.h>
#include <_core/DataTypes/BaseTypes.h>

#include <vector>

namespace RCML {
  namespace Utils {

    template<class TItem> class RCML_SDK_API CVector {      
	  public:
		  typedef std::vector<TItem> CItemVector;
      
	  private:
		  CItemVector m_items;
    
	  public:
      CVector() {};
		  CVector(CItemVector items) {
        m_items = items;
      };
		  CVector(CVector& vector) {
        m_items = vector.m_items;
      };
      
		  void add(TItem item) {
        m_items.emplace(m_items.end(), item);
      };
		  TItem get(BaseTypes::Index index) {
        return m_items.at(index);
      };
		  void remove(BaseTypes::Index index) {
        m_items.erase(m_items.begin() + index);
      };
		  void clear() {
        m_items.clear();
      };
		  int getSize() {
        return m_items.size();
      };
	  };
    
  }
}

#endif

