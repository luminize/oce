// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_SurfaceOfLinearExtrusion_HeaderFile
#define _PGeom_SurfaceOfLinearExtrusion_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom_SurfaceOfLinearExtrusion_HeaderFile
#include <Handle_PGeom_SurfaceOfLinearExtrusion.hxx>
#endif

#ifndef _PGeom_SweptSurface_HeaderFile
#include <PGeom_SweptSurface.hxx>
#endif
#ifndef _Handle_PGeom_Curve_HeaderFile
#include <Handle_PGeom_Curve.hxx>
#endif
class PGeom_Curve;
class gp_Dir;


class PGeom_SurfaceOfLinearExtrusion : public PGeom_SweptSurface {

public:

  //! Creates a SurfaceOfLinearExtrusion with default values. <br>
  Standard_EXPORT   PGeom_SurfaceOfLinearExtrusion();
  //! Creates a SurfaceOfLinearExtrusion with these values. <br>
  Standard_EXPORT   PGeom_SurfaceOfLinearExtrusion(const Handle(PGeom_Curve)& aBasisCurve,const gp_Dir& aDirection);

PGeom_SurfaceOfLinearExtrusion(const Storage_stCONSTclCOM& a) : PGeom_SweptSurface(a)
{
  
}



  DEFINE_STANDARD_RTTI(PGeom_SurfaceOfLinearExtrusion)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif