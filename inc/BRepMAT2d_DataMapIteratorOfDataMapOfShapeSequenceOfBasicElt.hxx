// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt_HeaderFile
#define _BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt_HeaderFile
#include <Handle_BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt.hxx>
#endif
class Standard_NoSuchObject;
class TopoDS_Shape;
class BRepMAT2d_SequenceOfBasicElt;
class TopTools_ShapeMapHasher;
class BRepMAT2d_DataMapOfShapeSequenceOfBasicElt;
class BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt;



class BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt  : public TCollection_BasicMapIterator {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt();
  
  Standard_EXPORT   BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt(const BRepMAT2d_DataMapOfShapeSequenceOfBasicElt& aMap);
  
  Standard_EXPORT     void Initialize(const BRepMAT2d_DataMapOfShapeSequenceOfBasicElt& aMap) ;
  
  Standard_EXPORT    const TopoDS_Shape& Key() const;
  
  Standard_EXPORT    const BRepMAT2d_SequenceOfBasicElt& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif