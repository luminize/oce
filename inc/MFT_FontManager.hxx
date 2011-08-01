// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MFT_FontManager_HeaderFile
#define _MFT_FontManager_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MFT_FontManager_HeaderFile
#include <Handle_MFT_FontManager.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _OSD_OpenMode_HeaderFile
#include <OSD_OpenMode.hxx>
#endif
#ifndef _MFT_FileHandle_HeaderFile
#include <MFT_FileHandle.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MFT_FileRecord_HeaderFile
#include <MFT_FileRecord.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Character_HeaderFile
#include <Standard_Character.hxx>
#endif
#ifndef _Standard_ExtCharacter_HeaderFile
#include <Standard_ExtCharacter.hxx>
#endif
#ifndef _MFT_TypeOfCommand_HeaderFile
#include <MFT_TypeOfCommand.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Quantity_Factor_HeaderFile
#include <Quantity_Factor.hxx>
#endif
#ifndef _Handle_MFT_TextManager_HeaderFile
#include <Handle_MFT_TextManager.hxx>
#endif
#ifndef _Standard_ExtString_HeaderFile
#include <Standard_ExtString.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _MFT_FilePosition_HeaderFile
#include <MFT_FilePosition.hxx>
#endif
#ifndef _MFT_CommandDescriptor_HeaderFile
#include <MFT_CommandDescriptor.hxx>
#endif
#ifndef _MFT_TypeOfValue_HeaderFile
#include <MFT_TypeOfValue.hxx>
#endif
class MFT_FontManagerDefinitionError;
class MFT_FontManagerError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_TypeMismatch;
class Aspect_FontStyle;
class MFT_TextManager;
class TCollection_AsciiString;


//! This class permits to manage MDTV fonts. <br>
//!  Warning: A FontManager is associated to a xxx.mft font file <br>
//! 	    The coordinates of the outline vectors of each character <br>
//! 	    must be given in the space defined by the font bounding box <br>
class MFT_FontManager : public MMgt_TShared {

public:

  //! Gives access to the font <anAliasName> associated <br>
//!	    to the file $CSF_MDTVFontDirectory/<anAliasName>.mft <br>
//!	    in ReadOnly access mode. <br>
//!  Warning: If the symbol CSF_MDTVFontDirectory is not defined <br>
//!	    try to reads or writes in $PWD directory. <br>
//!  Example: myFontManager = new MFT_FontManager("Helvetica-Bold") <br>
//!	    permits to access to the file <br>
//!	    $CSF_MDTVFontDirectory/"helvetica-bold.mft" <br>
//!  Trigger: If the font file don't exist or if the file <br>
//!	    don't have an MFT signature. <br>
  Standard_EXPORT   MFT_FontManager(const Standard_CString anAliasName);
  //! Gives access to the font <aFont> associated <br>
//!	    to the file $CSF_MDTVFontDirectory/<aFont.AliasName()>.mft <br>
//!	    with the open mode <aFileMode> and the composite <br>
//!	    flag <isComposite>. <br>
//!  Example: The flag must be sets to TRUE for KANJI extended fonts. <br>
//!  Warning: If the symbol CSF_MDTVFontDirectory is not defined <br>
//!	    try to reads or writes in $PWD directory. <br>
//!  Trigger: If <aFileMode> is ReadOnly or ReadWrite and <br>
//!	    the font file don't exist or if the file <br>
//!	    don't have an MFT signature. <br>
  Standard_EXPORT   MFT_FontManager(const Aspect_FontStyle& aFont,const OSD_OpenMode aFileMode = OSD_ReadOnly,const Standard_Boolean isComposite = Standard_False);
  //! Save the font file when the open mode is <br>
//!	   Write or ReadWrite and Close it in all the case. <br>
  Standard_EXPORT     void Destroy() ;
~MFT_FontManager()
{
  Destroy();
}
  //! Updates the font name. <br>
//!  Trigger: If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
  Standard_EXPORT     void SetFont(const Aspect_FontStyle& aFont) ;
  //! Defines and Enable the char <aChar> for writing. <br>
//!  Trigger: If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
//!	    or the char is already defined. <br>
  Standard_EXPORT     void SetChar(const Standard_Character aChar) ;
  //! Defines and Enable the accent char <aChar> for writing. <br>
//!  Trigger: If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
//!	    or the char is already defined. <br>
  Standard_EXPORT     void SetAccentChar(const Standard_Character aChar) ;
  //! Defines and Enable the char <aChar> for writing. <br>
//!	    This char being current for adding command. <br>
//!  Warning: The char must have an UNICODE UCS2 encoding. <br>
//!  Trigger: If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
//!	    or if the font is not a composite font. <br>
  Standard_EXPORT     void SetChar(const Standard_ExtCharacter aChar) ;
  //! Changes the default encoding of the char position <br>
//!	   <aPosition>. <br>
//!  Example: SetEncoding(233,"eacute") <br>
//!	   change the default encoding of the char position 233 <br>
//!	   from "Oslash" to "eacute". <br>//!  Trigger  - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode. <br>
//!	    or if the char encoding is not defined. <br>
  Standard_EXPORT     void SetEncoding(const Standard_Integer aPosition,const Standard_CString anEncoding) ;
  //! Remove the definition of the char <aChar> <br>//!  Trigger  - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode. <br>
  Standard_EXPORT     void DelChar(const Standard_Character aChar) ;
  //! Remove the definition of the char <aChar> <br>
//!	    This char being current for adding command. <br>//!  Trigger  - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
//!	    or if the font is not a composite font. <br>
  Standard_EXPORT     void DelChar(const Standard_ExtCharacter aChar) ;
  //! Adds the command <aCommand> of <aNumberOfValues> <br>
//!	    to describe the current char. <br>
//!	    This command being current for adding parameters if any. <br>//!---Purpose  Trigger - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
//!	    or if a current char don't have being defined. <br>
//!  Warning: the last command of the char descriptor <br>
//!	   must have a type MFC_TOC_ENDCHAR. <br>
  Standard_EXPORT     void AddCommand(const MFT_TypeOfCommand aCommand) ;
  //! Adds the integer parameter <aValue> to fill <br>
//!	    the current command. <br>//!  Trigger - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
//!	    or if a current command don't have being defined, <br>
//!	    or if the number of values is > MaxCommandValues() <br>
  Standard_EXPORT     void AddValue(const Standard_Integer aValue) ;
  //! Adds the float parameter <aValue> to fill <br>
//!	    the current command. <br>//!  Trigger - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
//!	    or if a current command don't have being defined <br>
//!	    or if the number of values is > MaxCommandValues() <br>
  Standard_EXPORT     void AddValue(const Standard_Real aValue) ;
  //! Adds the string parameter <aValue> to fill <br>
//!	    the current command. <br>//!  Trigger - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
//!	    or if a current command don't have being defined, <br>
//!	    or if the number of values is > MaxCommandValues() <br>
//!  Warning: The max length of a string must be < MaxCommandValues()*4-1 <br>
  Standard_EXPORT     void AddValue(const Standard_CString aValue) ;
  //! Sets the bounding box of the font. <br>//!  Trigger - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
//!	    or if the bounding box has a wrong value. <br>
//!  Warning: The bounding box coordinates default are : <br>
//!	    0,0,1000,1000 <br>
  Standard_EXPORT     void SetBoundingBox(const Standard_Integer aMinX = 0,const Standard_Integer aMinY = 0,const Standard_Integer aMaxX = 1000,const Standard_Integer aMaxY = 1000) ;
  //! Sets the font matrix. <br>//!  Trigger - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
//!  Warning: The font matrix default are : <br>
//!	    0.001,0,0,0.001,0,0 <br>
  Standard_EXPORT     void SetFontMatrix(const Standard_Real M1 = 0.001,const Standard_Real M2 = 0.0,const Standard_Real M3 = 0.0,const Standard_Real M4 = 0.001,const Standard_Real M5 = 0.0,const Standard_Real M6 = 0.0) ;
  //! Sets the paint type of the font. <br>//!  Trigger - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
//!	    or if the value is not a Type 1 font value. <br>
//!  Warning: The paint type <aValue> must be one of Type 1 font <br>
//!	   value 0 for FILL , 1 for STROKE or 2 for OUTLINE. <br>
  Standard_EXPORT     void SetPaintType(const Standard_Integer aValue = 0) ;
  //! Sets the fixed pitch flag of the font <br>
//!  as TRUE if the font must have an fixed char width <br>
//!  or FALSE if the font must have a proportionnal char width. <br>//!  Trigger - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
  Standard_EXPORT     void SetFixedPitch(const Standard_Boolean aFlag = Standard_False) ;
  //! Sets the italic angle of the font given in RAD <br>
//!		clock-wise from vertical. <br>//!    Trigger - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode <br>
  Standard_EXPORT     void SetItalicAngle(const Quantity_PlaneAngle anAngle = 0.0) ;
  //! Computes the bounding box of the font from the <br>
//!	    min-max of all chars of the font. <br>
//!  Warning: this must be call after all characters has been defined. <br>//!  Trigger - If the font file is not opened <br>
//!	    in WriteOnly or ReadWrite mode. <br>
  Standard_EXPORT     void ComputeBoundingBox() ;
  //! Sets the current font attributes. <br>
//!  <aWidth> : the maximum width of one character. <br>
//!  <aHeight> : the maximum height of one character <br>
//!		according to the <aCapsHeight> parameter. <br>
//!  <aSlant> : the slant of one character given in RAD <br>
//!		clock-wise from vertical. <br>
//!  <aPrecision> : the relative interpolator precision is <br>
//!	the maximum flatness error deflection for the curves. <br>
//!  <aCapsHeight> : if TRUE the font height is apply only <br>
//!  	        on the ascent component of the characters; <br>
//!		    if FALSE the font height is apply both <br>
//!		on the ascent and descent  components of the characters. <br>
  Standard_EXPORT     void SetFontAttribs(const Quantity_Length aWidth,const Quantity_Length aHeight,const Quantity_PlaneAngle aSlant = 0.0,const Quantity_Factor aPrecision = 0.02,const Standard_Boolean aCapsHeight = Standard_False) ;
  //! Drawn an ANSI text <br>
//!  <aTextManager> : the draw manager to call for each vertex of the string. <br>
//!  <aString> : the string to interpret <br>
//!  <anX>,<anY> : the position of the text <br>
//!  <anOrientation> : the orientation angle in RAD from horizontal. <br>
  Standard_EXPORT     void DrawText(const Handle(MFT_TextManager)& aTextManager,const Standard_CString aString,const Quantity_Length anX,const Quantity_Length anY,const Quantity_PlaneAngle anOrientation = 0.0) ;
  //! Drawn an EXTENDED text <br>
//!  <aTextManager> : the draw manager to call for each vertex of the string. <br>
//!  <aString> : the string to interpret <br>
//!  <anX>,<anY> : the position of the text <br>
//!  <anOrientation> : the orientation angle in RAD from horizontal. <br>//!  Trigger - If the font is not a composite font and <br>
//!	   the string is not ASCII. <br>
  Standard_EXPORT     void DrawText(const Handle(MFT_TextManager)& aTextManager,const Standard_ExtString aString,const Quantity_Length anX,const Quantity_Length anY,const Quantity_PlaneAngle anOrientation = 0.0) ;
  //! Retrieves the bounding box of the font. <br>
  Standard_EXPORT     void BoundingBox(Standard_Integer& aMinX,Standard_Integer& aMinY,Standard_Integer& aMaxX,Standard_Integer& aMaxY) const;
  //! Retrieves the bounding box of a character. <br>//!  Trigger - If the position <aPosition> is < 0 or > MaxCharPosition(). <br>
  Standard_EXPORT     void CharBoundingBox(const Standard_Integer aPosition,Standard_Integer& aMinX,Standard_Integer& aMinY,Standard_Integer& aMaxX,Standard_Integer& aMaxY) ;
  //! Retrieves the paint type of the font. <br>
  Standard_EXPORT     Standard_Integer PaintType() const;
  //! Retrieves the fixed pitch flag of the font <br>
  Standard_EXPORT     Standard_Boolean FixedPitch() const;
  //! Retrieves the italic angle of the font <br>
  Standard_EXPORT     Quantity_PlaneAngle ItalicAngle() const;
  //! Runs the interpretor with the current attributes setting <br>
//!	   (font and text attributes) <br>
//!	   and returns : <br>
//!	   The max char width of the font CharSet <aWidth>. <br>
//!	   The max char height of the font CharSet <aHeight>. <br>
//!	   The max char descent value below the baseline <aDescent> <br>
//!	   The slant angle of the font <aSlant> <br>
//!	   The interpolator precision of the font <aPrecision> <br>
//!  	   The caps height flag <aCapsHeight> <br>
//!	   The FULL font name. <br>
  Standard_EXPORT     Standard_CString FontAttribs(Quantity_Length& aWidth,Quantity_Length& aHeight,Quantity_Length& aDescent,Quantity_PlaneAngle& aSlant,Quantity_Factor& aPrecision,Standard_Boolean& aCapsHeight) ;
  //! Runs the interpretor on the ASCII text <aString> <br>
//!	   with the current font attributes setting and returns : <br>
//!	   The string width <aWidth>. <br>
//!	   The string ascent <anAscent>. <br>
//!	   The string left bearing value from the origine <aLbearing> <br>
//!	   The string descent value below the baseline <aDescent> <br>
  Standard_EXPORT     void TextSize(const Standard_CString aString,Quantity_Length& aWidth,Quantity_Length& anAscent,Quantity_Length& aLbearing,Quantity_Length& aDescent) ;
  //! Runs the interpretor on the EXTENDED text <aString> <br>
//!	   with the current font attributes setting and returns : <br>
//!	   The string width <aWidth>. <br>
//!	   The string ascent <anAscent>. <br>
//!	   The string left bearing value from the origine <aLbearing> <br>
//!	   The string descent value below the baseline <aDescent> <br>//!  Trigger - If the font is not a composite font and <br>
//!	   the string is not ASCII. <br>
  Standard_EXPORT     void TextSize(const Standard_ExtString aString,Quantity_Length& aWidth,Quantity_Length& anAscent,Quantity_Length& aLbearing,Quantity_Length& aDescent) ;
  //! Runs the interpretor with the current attributes setting <br>
//!	   (font attributes) <br>
//!	   and returns : <br>
//!	   The char width <aWidth>. <br>
//!	   The char left bearing <aLbearing>. <br>
//!	   The char right bearing <aRbearing>. <br>
//!	   The char ascent <anAscent>. <br>
//!	   The char descent value below the baseline <aDescent> <br>
//!	And returns TRUE if the character is defined. <br>
  Standard_EXPORT     Standard_Boolean CharSize(const Standard_Character aChar,Quantity_Length& aWidth,Quantity_Length& aLbearing,Quantity_Length& aRbearing,Quantity_Length& anAscent,Quantity_Length& aDescent) ;
  //! Runs the interpretor with the current attributes setting <br>
//!	   (font attributes) <br>
//!	   and returns : <br>
//!	   The extended char width <aWidth>. <br>
//!	   The extended char left bearing <aLbearing>. <br>
//!	   The extended char right bearing <aRbearing>. <br>
//!	   The extended char ascent <anAscent>. <br>
//!	   The extended char descent value below the baseline <aDescent> <br>
//!	And returns TRUE if the character is defined. <br>//!  Trigger - If the font is not a composite font and <br>
//!	   the char is not ASCII. <br>
  Standard_EXPORT     Standard_Boolean CharSize(const Standard_ExtCharacter aChar,Quantity_Length& aWidth,Quantity_Length& aLbearing,Quantity_Length& aRbearing,Quantity_Length& anAscent,Quantity_Length& aDescent) ;
  //! Retrieves the font descriptor of this font <br>
  Standard_EXPORT     Aspect_FontStyle Font() const;
  //! Returns TRUE if the font is composite. <br>
//!  Example: KANJI fonts returns TRUE. <br>
  Standard_EXPORT     Standard_Boolean IsComposite() const;
  //! Returns TRUE if the font <br>
//!	    $CSF_MDTVFontDirectory/<anAliasName>.mft does exist. <br>
  Standard_EXPORT   static  Standard_Boolean IsKnown(const Standard_CString anAliasName) ;
  //! Retrieves the font descriptor from an existing font <br>//! Trigger - If the font does not exist. <br>
  Standard_EXPORT   static  Aspect_FontStyle Font(const Standard_CString anAliasName) ;
  //! Returns the MFT font number available <br>
//!	    in the directory $CSF_MDTVFontDirectory <br>
//!	    according to the filter : <br>
//! "-foundry-family-weight-slant-swidth-adstyl-pixelsize-pointsize- <br>
//!  resx-resy-spacing-avdWidth-registry-encoding" <br>
//!  Examples: number = MFT_FontMAnager::FontNumber("-euclid3"); <br>
//!	    returns only the euclid3 fonts. <br>
//!          number = MFT_FontMAnager::FontNumber( <br>
//!			"-*-*-*-*-*-*-*-*-*-*-*-*-japanese"); <br>
//!	    returns only the japanese fonts. <br>
  Standard_EXPORT   static  Standard_Integer FontNumber(const Standard_CString aFilter = "*") ;
  //! Retrieves the font descriptor of index <aRank> <br>
//!	   from the directory $CSF_MDTVFontDirectory <br>//!  Trigger - If the font rank <aRank> is < 1 or > FontNumber(). <br>
  Standard_EXPORT   static  Aspect_FontStyle Font(const Standard_Integer aRank) ;
  //! Returns the max values of any defined command <br>
  Standard_EXPORT   static  Standard_Integer MaxCommandValues() ;
  //! Returns the encoding of the char position <br>
//!	   <aPosition>. <br>//!  Trigger -  If the char is not defined <br>
  Standard_EXPORT     Standard_CString Encoding(const Standard_Integer aPosition) ;
  //! Returns the char position <br>
//!	   from the encoding <anEncoding>. <br>//!  Trigger - If the char is not defined <br>
  Standard_EXPORT     Standard_Integer Encoding(const Standard_CString anEncoding) ;
  //! Dumps the font descriptor of all characters. <br>
  Standard_EXPORT     void Dump() ;
  //! Dumps the font descriptor of the character <aChar>. <br>
  Standard_EXPORT     void Dump(const Standard_Character aChar) ;
  //! Dumps the font descriptor of the extended character <aChar>. <br>//!  Trigger - If the font is not a composite font. <br>
  Standard_EXPORT     void Dump(const Standard_ExtCharacter aChar) ;
  //! Saves the entire MFT font in an ASCII format <br>
//!	    readable by the Restore() method. <br>
//!	    to the file $CSF_MDTVFontDirectory/<anAliasName>.dat <br>
//!	    And returns TRUE if the file have been saves correctly. <br>
  Standard_EXPORT     Standard_Boolean Save() ;
  //! Restores the entire MFT font <br>
//!	    from the file $CSF_MDTVFontDirectory/<anAliasName>.dat <br>
//!	    And returns TRUE if the file have been restores correctly. <br>
  Standard_EXPORT   static  Standard_Boolean Restore(const Standard_CString anAliasName) ;
  //! Returns the Underline descent position from the origin <br>
//!	   of the text according to the current font attributes. <br>
  Standard_EXPORT     Quantity_Length UnderlinePosition() const;



  DEFINE_STANDARD_RTTI(MFT_FontManager)

protected:




private: 

  //! Open the file ,load and verify the header <br>
//!	   and returns a file handle >= 0 <br>
  Standard_EXPORT   static  MFT_FileHandle Open(const TCollection_AsciiString& aFileName,const OSD_OpenMode aFileMode) ;
  //! Close the file. <br>
//!	   Returns TRUE if the file was successfully closed. <br>
  Standard_EXPORT   static  Standard_Boolean Close(const MFT_FileHandle& aFileHandle) ;
  //! Saves updated records and Close this file. <br>
//!	   Returns TRUE if the file was successfully closed. <br>
  Standard_EXPORT     Standard_Boolean Close() ;
  //! Reads a record from the file. <br>
//!	   Returns TRUE if the file was successfully read. <br>
  Standard_EXPORT   static  Standard_Boolean Read(MFT_FileRecord& aRecord) ;
  //! Writes a record to the file. <br>
//!	   Returns TRUE if the file was successfully written. <br>
  Standard_EXPORT   static  Standard_Boolean Write(MFT_FileRecord& aRecord) ;
  //! Locates an information from the file record. <br>
//!	   and returns the info address. <br>
//!  Warning: May read or write the current record <br>
//!	   from/to the file and reload an other record <br>
//!	   according the file position info. <br>
  Standard_EXPORT   static  Standard_Address Locate(MFT_FileRecord& aRecord,const MFT_FilePosition& aFilePosition) ;
  //! Computes the full path of the font file name <br>
//!	    $CSF_MDTVFontDirectory/<aFileName><anExtension> <br>
  Standard_EXPORT   static  Standard_CString Path(const TCollection_AsciiString& aFileName,const Standard_CString anExtension = ".mft") ;
  //! Returns the max position of any defined char <br>
//!	   in the header of the file according with the <br>
//!	   type of the font. <br>
  Standard_EXPORT     Standard_Integer MaxCharPosition() const;
  //! Sets the text attributes. <br>
//!  <aString> : the string to interpret <br>
//!  <anOrientation> : the orientation angle in RAD from horizontal. <br>
  Standard_EXPORT     void SetTextAttribs(const Standard_CString aString,const Quantity_PlaneAngle anOrientation = 0.0) ;
  //! Sets the extended text attributes. <br>
//!  <aString> : the string to interpret <br>
//!  <anOrientation> : the orientation angle in RAD from horizontal. <br>//!  Trigger - If the font is not a composite font and <br>
//!	   the string is not ASCII. <br>
  Standard_EXPORT     void SetTextAttribs(const Standard_ExtString aString,const Quantity_PlaneAngle anOrientation = 0.0) ;
  //! Returns TRUE if the char at position <aPosition> is defined <br>
//!	    in the header of the file. <br>//!  Trigger - If the position <aPosition> is < 0 or > MaxCharPosition(). <br>
  Standard_EXPORT     Standard_Boolean IsDefinedChar(const Standard_Integer aPosition) const;
  //! Returns the first defined char position <br>
//!	    in the header of the file.. <br>
  Standard_EXPORT     Standard_Integer FirstDefinedChar() const;
  //! Returns the last defined char position <br>
//!	    in the header of the file.. <br>
  Standard_EXPORT     Standard_Integer LastDefinedChar() const;
  //! Enable the char at position <aPosition> for reading. <br>
  Standard_EXPORT     void SetChar(const Standard_Integer aPosition) ;
  //! Drawn the char at position <aPosition> <br>
//!   with the draw manager <aTextManager>. <br>
//!   and returns FALSE if the drawing must be ended. <br>
  Standard_EXPORT     Standard_Boolean DrawChar(const Handle(MFT_TextManager)& aTextManager,const Standard_Integer aPosition) ;
  //! Computes the bounding box of the char position <aPosition>. <br>
  Standard_EXPORT     void ComputeBoundingBox(const Standard_Integer aPosition) ;
  //! Returns the next command descriptor <br>
//!	    from the current char (see SetChar()). <br>
//!  Warning: the last command of the char descriptor <br>
//!	   has a type MFC_TOC_ENDCHAR. <br>
  Standard_EXPORT   static  MFT_CommandDescriptor NextCommand(MFT_FileRecord& aRecord) ;
  //! Returns the value type at position <aRank> <br>
//!          from the descriptor command. <br>//!  Trigger - If the position <aRank> is < 1 or > the command length. <br>
  Standard_EXPORT   static  MFT_TypeOfValue Value(const MFT_CommandDescriptor& aDescriptor,const Standard_Integer aRank) ;
  //! Returns the integer parameter at position <aRank> <br>
//!	    of the current command. <br>//!  Trigger --If the position <aRank> is < 1 or > the command length. <br>
//!	    or if the value is not an INT value. <br>
  Standard_EXPORT   static  Standard_Integer IValue(MFT_FileRecord& aRecord,const Standard_Integer aRank) ;
  //! Returns the float parameter at position <aRank> <br>
//!	    of the current command. <br>//!  Trigger  - If the position <aRank> is < 1 or > the command length. <br>
//!	    or if the value is not a FLOAT value. <br>
  Standard_EXPORT   static  Standard_ShortReal FValue(MFT_FileRecord& aRecord,const Standard_Integer aRank) ;
  //! Returns the string parameter at position <aRank> <br>
//!	    of the current command. <br>//!  Trigger - If the position <aRank> is < 1 or > the command length. <br>
//!	    or if the value is not a STRING value. <br>
  Standard_EXPORT   static  Standard_CString SValue(MFT_FileRecord& aRecord,const Standard_Integer aRank) ;
  //! Dumps the font descriptor of the character at <br>
//!    	    position <aPosition>. <br>
  Standard_EXPORT     void Dump(const Standard_Integer aPosition) ;

TCollection_AsciiString myFileName;
OSD_OpenMode myFileMode;
MFT_FileHandle myFileHandle;
Standard_Boolean myIsComposite;
Standard_Boolean myIsFixedPitch;
Standard_ShortReal myItalicAngle;
Standard_Integer myPaintType;
Standard_ShortReal myCharWidth;
Standard_ShortReal myCharHeight;
Standard_ShortReal myCharSlant;
Standard_ShortReal myCharPrecision;
Standard_Boolean myCharCapsHeight;
MFT_FileRecord myFileHeader;
MFT_FileRecord myCharEntries;
MFT_FileRecord myCommandBuffer;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif