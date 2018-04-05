#if !defined(__RCML_Classes_CExtension_h)
#define __RCML_Classes_CExtension_h

namespace RCML{

  class CExtension
  {
  public:
     CVariantArray CallFunction(std::string Name, CVariantArray Params);
     CVariantArray GetProperty(std::string Name);
     void SetProterty(std::string Name, CVariantArray Value);

  protected:
  private:
     std::map m_FunctionsMap;
     std::map m_PropertyMap;


  };

}

#endif