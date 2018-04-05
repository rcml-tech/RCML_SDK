#ifndef RCML_SDK_CJSON_H
#define RCML_SDK_CJSON_H

#include <RCML_sdk.h>
#include <External/mystring.h>
#include <External/json.hpp>

namespace RCML {
  namespace Types{
    using namespace nlohmann;
    typedef json CJson;
  }
}

#endif //RCML_SDK_CJSON_H
