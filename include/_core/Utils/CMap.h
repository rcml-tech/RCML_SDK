#ifndef __RCML_Utils_CMap_h
#define __RCML_Utils_CMap_h

#include <_core/RCML_sdk.h>
#include <_core/DataTypes/BaseTypes.h>

#include <map>
#include <vector>

namespace RCML {
  namespace Utils {
    
    template<class TItem> class RCML_SDK_API CMap {
    public:
      typedef std::vector<TItem> CItemVector;
      typedef std::map<BaseTypes::Index, TItem> CItemMap;
      
    protected:
      CItemMap m_items;
      
      void setItems(CItemVector items) {
        for(auto item : items){
          add(item);
        }         
      }
    
    public:
      
      CMap() {};
      
      CMap(CItemVector items) {
        setItems(items);
      }
      
      CMap(CMap& map) {
        m_items = map.m_items;
      }
      
      CItemVector getItems() {
        CItemVector res;
        for(auto& it : m_items){
          res.emplace_back(it.second);
        }
        return res;
      }
      
      void add(TItem item){ 
        m_items.emplace(item.getIndex(), item); 
      }
      
      TItem get(BaseTypes::Index index){
        return m_items.at(index);
      }
      
      virtual void remove(TItem item){
        m_items.erase(item.getIndex());
      }
      
      virtual void clear() {
        m_items.clear();
      }
      
    };    
    
    template<class TItem> class RCML_SDK_API CPointersMap {
    public:
      typedef std::vector<TItem> CItemVector;
      typedef std::map<BaseTypes::Index, TItem> CItemMap;
      
    private:
      CItemMap m_items;
      
    protected:
      
      void setItems(CItemVector items){
        for(auto& item : items){
          add(item);
        }         
      }
    
    public:
      
      CPointersMap() {};

      CPointersMap(CItemVector items) {
        for (auto item : items) {
          add(item);
        }
      }

      CPointersMap(CPointersMap& map) {
        m_items = map.m_items;
      }
      
      CItemVector getItems() const {
        CItemVector r;
        for(auto& it : m_items){
          r.emplace_back(it.second);
        }
        
        return r;
      }
      
       void add(TItem item) { 
        m_items.emplace(item->getIndex(), item); 
      }
       
      TItem get(BaseTypes::Index index) {
        auto res = m_items.find(index);
        if(res == m_items.end()) {
          return nullptr;
        }
        
        return res->second;
      }
      
      virtual void remove(TItem item){
        m_items.erase(item->getIndex());
      }
      
      virtual void clear(){
        m_items.clear();
      }
    };  
  }
}

#endif

