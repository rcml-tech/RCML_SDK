#if !defined(__Communication_CCommunication_h)
#define __Communication_CCommunication_h

#include <RCML_sdk.h>
#include <Communication/CMessage.h>
#include <Extension/CEvent.h>

namespace RCML{

  class RCML_SDK_API CCommunication
  {
  public:
     void Connect(void);
     void Disconnect(void);
     //void SendMessage(SendMessage Message);
     CMessage ReciveMessage(void);

  protected:
  private:
     CEvent OnMessage;


  };

}

#endif