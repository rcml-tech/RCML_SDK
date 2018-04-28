#ifndef __RCML_CJson_h
#define __RCML_CJson_h

#include <_core/RCML_sdk.h>
#include <_core/Utils/mystring.h>
#include <_core/Externals/nlohmann/json.hpp>

namespace RCML {
  namespace Types {
    using namespace nlohmann;
    typedef json CJson;
  }
}

#endif
