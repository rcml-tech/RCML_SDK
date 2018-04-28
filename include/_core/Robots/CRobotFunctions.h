#ifndef __RCML_CRobotFunction_h
#define __RCML_CRobotFunction_h

#include <set>

namespace RCML {
  enum class CRobotFunction {
    LinearMove,
    JointMove,
    CartesianMove,
    ArcMove,
    DO,
    DI
  };

  typedef std::set<CRobotFunction> CRobotFunctions;
}

#endif
