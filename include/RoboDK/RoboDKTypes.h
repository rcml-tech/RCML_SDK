#ifndef __RCML_RoboDKTypes_h
#define __RCML_RoboDKTypes_h

#include <memory>

namespace RoboDK_API {
  class RoboDK;
  class Item;
  class Mat;
  class tJoints;
}

namespace RCML {
  namespace RoboDKTypes {

    typedef std::shared_ptr<RoboDK_API::RoboDK> LinkPtr;
    typedef std::shared_ptr<RoboDK_API::Item> ItemPtr;

  };
};

#endif

