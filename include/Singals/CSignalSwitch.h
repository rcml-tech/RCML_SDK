#if !defined(__RCML_Classes_CSignalSwitch_h)
#define __RCML_Classes_CSignalSwitch_h

#include <RCML_sdk.h>
#include <Communication/CCommunication.h>

namespace RCML{

  class RCML_SDK_API CSignalSwitch
  {
  public:
     virtual void SetDI(int Value, int InputNumber, bool Queue = false) = 0;
	 virtual int GetDI(int InputNumber) = 0;
	 virtual int GetDO(int OutputNumber) = 0;

  private:
     CCommunication m_Communication;
  };

}

#endif