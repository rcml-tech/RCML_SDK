#ifndef __RCML_CActionStartProgram_h
#define __RCML_CActionStartProgram_h

#include <string>
#include <_core/Actions/CAction.h>

namespace RCML {

  class RCML_SDK_API CActionStartProgram : public CAction {
  public:
    CActionStartProgram(CRobotPtr robot, std::string programName);

  protected:
    std::string m_programName;

    virtual void executeAction() override;
    virtual void executeActionStartProgram();
  };

  typedef std::shared_ptr<CActionStartProgram> CActionStartProgramPtr;

}

#endif