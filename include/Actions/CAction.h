#if !defined(__RCML_Classes_CAction_h)
#define __RCML_Classes_CAction_h

#include <RCML_sdk.h>
#include <memory>
#include <DataTypes/BaseTypes.h>

namespace RCML{
  class RCML_SDK_API CAction
  {
  public:
    CAction();
    CAction(int answer);

    BaseTypes::Identifier GetId();

    virtual void DoAction() = 0;
    

  protected:
    static BaseTypes::Identifier GenerateId();
    
  private:
    BaseTypes::Identifier m_id;
    int m_answer;
     
    static BaseTypes::Identifier m_IdCounter;
  };
  
  typedef std::shared_ptr<CAction> CActionPtr;
}

#endif