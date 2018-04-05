#if !defined(__RCML_Classes_CActionsQueue_h)
#define __RCML_Classes_CActionsQueue_h

#include <map>
#include <Actions/CAction.h>
#include <DataTypes/BaseTypes.h>

namespace RCML {

  class RCML_SDK_API CActionsQueue {
  public:
    void AddAction(CActionPtr Action);

    void RemoveAction(BaseTypes::Identifier ActionId);

    void ClearQueue();

    int Count();

    CActionPtr GetById(BaseTypes::Identifier ActionId);

    CActionPtr GetFromArchiveById(BaseTypes::Identifier ActionId);

    int CountInArchive();

    void Execute();

  private:
    typedef std::map<BaseTypes::Identifier, CActionPtr> ActionMap;
    
    ActionMap m_ActionQueue;
    ActionMap m_ActionArchive;
  };
}


#endif