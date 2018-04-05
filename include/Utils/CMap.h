#ifndef CMAP_H
#define CMAP_H

#include <RCML_sdk.h>

#include <DataTypes/BaseTypes.h>

#include <map>
#include <vector>

namespace RCML{
  namespace Utils{
    
    
    template<class TItem>
    class RCML_SDK_API CMap{      
    public:
      typedef std::vector<TItem> CItemVector;
      typedef std::map<BaseTypes::Index, TItem> CItemMap;
      
    protected:
      CItemMap m_Items;
      
      void SetItems(CItemVector Items){
        for(auto Item : Items){
          Add(Item);
        }         
      }
    
    public:
      
      CMap(){
      };
      
      CMap(CItemVector Items){
        SetItems(Items);
      }
      
      CMap(CMap& Map){
        m_Items = Map.m_Items;
      }
      
      CItemVector GetItems(){
        CItemVector R;
        for(auto& It : m_Items){
          R.emplace_back(It.second);
        }
        
        return R;
      }
      
      void Add(TItem Item){ 
        m_Items.emplace(Item.GetIndex(), Item); 
      }
      
      TItem Get(BaseTypes::Index Index){
        return m_Items.at(Index);
      }
      
      virtual void Remove(TItem Item){
        m_Items.erase(Item.GetIndex());
      }
      
      virtual void Clear(){
        m_Items.clear();
      }
      
    };    
    
    template<class TItem>
    class RCML_SDK_API CPointersMap{      
    public:
      typedef std::vector<TItem> CItemVector;
      typedef std::map<BaseTypes::Index, TItem> CItemMap;
      
    private:
      CItemMap m_Items;
      
    protected:
      
      void SetItems(CItemVector Items){
        for(auto& Item : Items){
          Add(Item);
        }         
      }
    
    public:
      
      CPointersMap(){
        
      };
      
      CItemVector GetItems(){
        CItemVector R;
        for(auto& It : m_Items){
          R.emplace_back(It.second);
        }
        
        return R;
      }
      
      CPointersMap(CItemVector Items){
        for(auto Item : Items){
          Add(Item);
        }    
      }
      
      CPointersMap(CPointersMap& Map){
        m_Items = Map.m_Items;
      }
      
       void Add(TItem Item){ 
        m_Items.emplace(Item->GetIndex(), Item); 
      }
       
      TItem Get(BaseTypes::Index Index){
        if(m_Items.find(Index) == m_Items.end()){
          return nullptr;
        }
        
        return m_Items.find(Index)->second;
      }
      
      virtual void Remove(TItem Item){
        m_Items.erase(Item->GetIndex());
      }
      
      virtual void Clear(){
        m_Items.clear();
      }
    };  
  }
}

#endif /* CMAP_H */

