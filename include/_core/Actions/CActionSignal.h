#ifndef __RCML_CActionSignal_h
#define __RCML_CActionSignal_h

#include <_core/Actions/CAction.h>
#include <_core/Signals/CSignal.h>

namespace RCML {

  class RCML_SDK_API CActionSignal : public CAction {
  protected:
    CActionSignal(CRobotPtr robot);
    CActionSignal(CRobotPtr robot, const CSignals& obj, CSignal::Type type);
    CActionSignal(CRobotPtr robot, CSignals::CItemVector signals, CSignal::Type type);

    CSignals m_signals;

    virtual void executeAction() override;
    virtual void executeActionSignal() = 0;

  private:
    void validateSignals(CSignal::Type type);
    
  };

}
#endif