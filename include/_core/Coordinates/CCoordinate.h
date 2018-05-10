#ifndef __RCML_CCoordinate_h
#define __RCML_CCoordinate_h

#include <_core/RCML_sdk.h>

#include <memory>
#include <_core/DataTypes/BaseTypes.h>

namespace RCML {

  class CCoordinate;
  typedef std::shared_ptr<CCoordinate> CCoordinatePtr;
  
  class RCML_SDK_API CCoordinate : public std::enable_shared_from_this<CCoordinate> {    
  private:
    BaseTypes::IndexCoordinateGroup m_indexGroup = 0;

  protected:
    CCoordinate();
    CCoordinate(BaseTypes::IndexCoordinateGroup indexGroup);
    
  public:        
    virtual CCoordinatePtr getAsCoordinatePtr() = 0;
    
    BaseTypes::Index getIndex() const;
    
    BaseTypes::IndexCoordinateGroup getGroupIndex() const;
    void setGroupIndex(BaseTypes::IndexCoordinateGroup indexGroup);
    
  };
  
}
#endif