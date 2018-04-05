#ifndef RCML_SDK_CRCMLEXCEPTION_H
#define RCML_SDK_CRCMLEXCEPTION_H

#include <stdexcept>
#include <memory>
#include <RCML_sdk.h>

namespace RCML {
  class RCML_SDK_API CRCMLException : public std::runtime_error{
  public:
    CRCMLException(const std::string& __arg);
  };
  typedef  std::shared_ptr<CRCMLException> CRCMLExceptionPtr;

  class RCML_SDK_API CCollisionException : public CRCMLException {
  public:
    CCollisionException(const std::string& __arg);
  };
  typedef  std::shared_ptr<CCollisionException> CCollisionExceptionPtr;
}

#endif //RCML_SDK_CRCMLEXCEPTION_H
