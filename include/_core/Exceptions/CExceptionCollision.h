#ifndef __RCML_CExceptionCollision_h
#define __RCML_CExceptionCollision_h

#include <_core/Exceptions/CException.h>

namespace RCML {

  class RCML_SDK_API CExceptionCollision : public CException {
  public:
    CExceptionCollision();
    CExceptionCollision(const std::string& __arg);
    CExceptionCollision(CExceptionPtr child, const std::string& __arg);
  };

  typedef std::shared_ptr<CExceptionCollision> CExceptionCollisionPtr;
}

#endif
