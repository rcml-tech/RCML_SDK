#if !defined(__RCML_Classes_CActionMoveArc_h)
#define __RCML_Classes_CActionMoveArc_h

#include <Coordinates/CPoint.h>
#include <Actions/CAction.h>


namespace RCML{
  
  class CActionMoveArc : public CAction, public CPoint
  {
  public:
    CActionMoveArc(const CCoordinates &Coordinates) : CPoint(Coordinates) {}

  public:
  protected:
  private:

  };
}

#endif