#if !defined(__RCML_Classes_CCoordinate_h)
#define __RCML_Classes_CCoordinate_h

#include <RCML_sdk.h>


#include <memory>
#include <DataTypes/BaseTypes.h>

namespace RCML{

  class CCoordinate;
  typedef std::shared_ptr<CCoordinate> CCoordinatePtr;
  
  class RCML_SDK_API CCoordinate : public
      std::enable_shared_from_this<CCoordinate>
  {    
  private:
    BaseTypes::CoordinateGorup m_Group = 0;
    
  protected:  
    CCoordinate(){};
    
  public:        
    virtual CCoordinatePtr GetAs() = 0;
    
    BaseTypes::CoordinateGorup GetIndex();
    
    BaseTypes::CoordinateGorup GetGroup();
    void SetGroup(BaseTypes::CoordinateGorup Group);
    
  };
  
}
#endif