#ifndef __RCML_CExceptionInternal_h
#define __RCML_CExceptionInternal_h

#include <_core/Exceptions/CException.h>

namespace RCML {

class RCML_SDK_API CExceptionInternal : public CException {
  private:
    static std::string generateMessage(std::string file, int line, const std::string &__arg);

  public:
    CExceptionInternal();
    CExceptionInternal(std::string file, int line, const std::string& __arg);
    CExceptionInternal(std::string file, int line, CExceptionPtr child, const std::string& __arg);
  };

  typedef std::shared_ptr<CExceptionInternal> CExceptionInternalPtr;
}

#endif
