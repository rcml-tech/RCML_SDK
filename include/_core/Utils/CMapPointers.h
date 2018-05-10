#ifndef __RCML_Utils_CMapPointers_h
#define __RCML_Utils_CMapPointers_h

#include <map>
#include <vector>
#include <memory>

#include <_core/RCML_sdk.h>
#include <_core/DataTypes/BaseTypes.h>
#include <_core/Exceptions/CException.h>

namespace RCML {
  namespace Utils {

    template<class TItem> class RCML_SDK_API CMapPointers {
    public:
      typedef std::shared_ptr<TItem> CItemPtr;
      typedef std::vector<CItemPtr> CItemVector;
      typedef std::map<BaseTypes::Index, CItemPtr> CItemMap;

    private:
      CItemMap m_items;

    protected:
      void setItems(CItemVector items) {
        for (auto item : items) {
          add(item);
        }
      }


    public:
      CMapPointers() {};

      CMapPointers(CItemVector items) {
        setItems(items);
      }

      CMapPointers(const CMapPointers& map) {
        m_items = map.m_items;
      }

      CItemVector getItems() const {
        CItemVector r;
        for (auto& it : m_items) {
          r.emplace_back(it.second);
        }
        return r;
      }

      void add(CItemPtr item) {
        BaseTypes::Index index = item->getIndex();
        std::pair<typename CItemMap::iterator, bool> res = m_items.emplace(index, item);

        if (!res.second) {
          throw CExceptionPtr(new CException("The item with id #" + std::to_string(index) + " is already in the pointer map"));
        }
      }

      CItemPtr get(BaseTypes::Index index) {
        auto res = m_items.find(index);
        if (res == m_items.end()) {
          throw CExceptionPtr(new CException("There isn't item with id #" + std::to_string(index) + " in the pointer map"));
        }

        return res->second;
      }

      void remove(BaseTypes::Index index) {
        m_items.erase(index);
      }

      void clear() {
        m_items.clear();
      }
    };
  }
}

#endif

