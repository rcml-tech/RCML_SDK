#ifndef __RCML_CException_h
#define __RCML_CException_h

#include <stdexcept>
#include <memory>
#include <string>
#include <list>
#include <functional>
#include <cstdio>
#include <iterator>
#include <sstream>

#include <_core/RCML_sdk.h>
#include <_core/Utils/mystring.h>

namespace RCML {

  class CException;
  typedef std::shared_ptr<CException> CExceptionPtr;
  typedef std::shared_ptr<const CException> CExceptionPtrConst;

  class RCML_SDK_API CException : protected std::runtime_error, public std::enable_shared_from_this<CException> {
  private:
    using std::enable_shared_from_this<CException>::shared_from_this;

    const bool m_isEmpty = true;
    const CExceptionPtr m_child = nullptr;
    std::list<CExceptionPtr> m_neighbours;

  public:
    CException();
    CException(const std::string& __arg);
    CException(CExceptionPtr child, const std::string& __arg);

    bool isEmpty() const;
    void append(CExceptionPtr neighbour);

    void checkSelf();
    void throwThisPtr();

    using Action = std::function<void(CExceptionPtr /* error */, unsigned int /* level */)>;
    void forEach(Action action, unsigned int level = 0);

    std::string toString(unsigned int level = 0);

    template <typename T> std::list<std::shared_ptr<T>> getListByType(T wanted) {
      std::list<std::shared_ptr<T>> res;

      forEach([&res](CExceptionPtr feError, unsigned feLevel) {
        std::shared_ptr<T> tmpPtr = std::dynamic_pointer_cast<T>(feError);
        if (tmpPtr) {
          res.emplace_back(tmpPtr);
        }
      }, 0);

      return res;
    }

    template <typename T> bool isThereByType(T wanted) {
      std::list<std::shared_ptr<T>> le = getListByType(T());
      return !le.empty();
    }

  };

}

#endif
