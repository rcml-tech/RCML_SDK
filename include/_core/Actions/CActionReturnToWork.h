#ifndef __RCML_CActionReturnToWork_h
#define __RCML_CActionReturnToWork_h

#include <_core/Actions/CAction.h>

namespace RCML {

  class RCML_SDK_API CActionReturnToWork : public CAction {
  public:
    CActionReturnToWork(CRobotPtr robot);

  protected:
    virtual void executeAction() override;
    virtual void executeActionReturnToWork();

  };

  typedef std::shared_ptr<CActionReturnToWork> CActionReturnToWorkPtr;

}

#endif