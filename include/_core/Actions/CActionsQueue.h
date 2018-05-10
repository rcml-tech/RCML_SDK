#ifndef __RCML_CActionsQueue_h
#define __RCML_CActionsQueue_h

#include <map>
#include <memory>

#include <_core/RCML_sdk.h>

namespace RCML {
  class RCML_SDK_API CActionsQueue;
  typedef std::unique_ptr<CActionsQueue> CActionsQueueUniqPtr;
}

#include <_core/DataTypes/BaseTypes.h>
#include <_core/Actions/CAction.h>

namespace RCML {

  //template class std::map<BaseTypes::Identifier, CActionPtr>;

  class RCML_SDK_API CActionsQueue {
  public:
    void addAction(CActionPtr action, bool queue = false);
    void executeAction(CActionPtr action);
    void removeAction(BaseTypes::Identifier actionId);
    void clear();
    void execute();
    
    std::size_t getSize() const;
    CActionPtr getById(BaseTypes::Identifier actionId) const;
    
    std::size_t getSizeArchive() const;
    CActionPtr getFromArchiveById(BaseTypes::Identifier actionId) const;

  private:
    typedef std::map<BaseTypes::Identifier, CActionPtr> ActionMap;
    
    ActionMap m_actionQueue;
    ActionMap m_actionArchive;
  };
  
}

#endif