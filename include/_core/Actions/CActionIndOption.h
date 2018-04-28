#ifndef __RCML_CActionIndOption_h
#define __RCML_CActionIndOption_h

#include <_core/Actions/CAction.h>

namespace RCML {

  class RCML_SDK_API CActionIndOption : public CAction {
  public:
    enum class Option {
      Base,
      Tool,
      Load,
      UNKNOW
    };

    enum class Action {
      Get,
      Set,
      UNKNOW
    };

    static const BaseTypes::Index MIN_INDEX_VALUE = 0;
    static const BaseTypes::Index MAX_INDEX_VALUE = 10;

    CActionIndOption(CRobotPtr robot);
    CActionIndOption(CRobotPtr robot, Option option);
    CActionIndOption(CRobotPtr robot, Option option, Action action, BaseTypes::Index index);

    Option getOption() const;
    void setOption(Option option);

    Action getAction() const;
    void setAction(Action action);

    BaseTypes::Index getIndex() const;
    void setIndex(BaseTypes::Index index);

    static void validateOption(Option option);
    static void validateAction(Action action);
    static void validateIndex(BaseTypes::Index index);

  protected:
    Option m_option = Option::UNKNOW;
    Action m_action = Action::UNKNOW;
    BaseTypes::Index m_index = -1;

    virtual void executeAction() override;
    virtual void executeActionIndOption();

  };

  typedef std::shared_ptr<CActionIndOption> CActionIndOptionPtr;

}

#endif