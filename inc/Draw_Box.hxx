// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_Box_HeaderFile
#define _Draw_Box_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Draw_Box.hxx>

#include <gp_Pnt.hxx>
#include <Draw_Color.hxx>
#include <Draw_Drawable3D.hxx>
class gp_Pnt;
class Draw_Color;
class Draw_Display;


//! a 3d box
class Draw_Box : public Draw_Drawable3D
{

public:

  
  Standard_EXPORT Draw_Box(const gp_Pnt& p1, const gp_Pnt& p2, const Draw_Color& col);
  
  Standard_EXPORT   void DrawOn (Draw_Display& dis)  const;
  
  Standard_EXPORT  const  gp_Pnt& First()  const;
  
  Standard_EXPORT   void First (const gp_Pnt& P) ;
  
  Standard_EXPORT  const  gp_Pnt& Last()  const;
  
  Standard_EXPORT   void Last (const gp_Pnt& P) ;




  DEFINE_STANDARD_RTTI(Draw_Box)

protected:




private: 


  gp_Pnt myFirst;
  gp_Pnt myLast;
  Draw_Color myColor;


};







#endif // _Draw_Box_HeaderFile
