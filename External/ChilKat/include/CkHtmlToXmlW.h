// CkHtmlToXmlW.h: interface for the CkHtmlToXmlW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkHtmlToXmlW_H
#define _CkHtmlToXmlW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkByteData;
class CkBinDataW;
class CkStringBuilderW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkHtmlToXmlW
class CK_VISIBLE_PUBLIC CkHtmlToXmlW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkHtmlToXmlW(const CkHtmlToXmlW &);
	CkHtmlToXmlW &operator=(const CkHtmlToXmlW &);

    public:
	CkHtmlToXmlW(void);
	virtual ~CkHtmlToXmlW(void);

	

	static CkHtmlToXmlW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Controls whether tags that Chilkat does not recognize as standard HTML elements
	// are omitted from the generated XML.
	// When to use: Set this property to true when custom or application-specific
	// tags would add noise to the XML structure. Leave it false when those tags are
	// meaningful to the application and should remain represented in the converted
	// output.
	bool get_DropCustomTags(void);
	// Controls whether tags that Chilkat does not recognize as standard HTML elements
	// are omitted from the generated XML.
	// When to use: Set this property to true when custom or application-specific
	// tags would add noise to the XML structure. Leave it false when those tags are
	// meaningful to the application and should remain represented in the converted
	// output.
	void put_DropCustomTags(bool newVal);

	// The HTML source to be converted. Set this property to an HTML string, configure
	// any conversion options, and then call ToXml, Xml, or ToXmlSb.
	// 
	// Assigning this property replaces the current in-memory HTML source. For
	// file-to-file conversion, use ConvertFile. To load HTML from a file, BinData, or
	// StringBuilder, use the corresponding SetHtml* method.
	// 
	// HTML input does not need to already be valid XML. The converter is intended for
	// real-world HTML and repairs markup as needed to produce a well-formed XML
	// document. Chilkat examples show malformed HTML being normalized and ordinary
	// text represented in <text> elements to simplify programmatic extraction.
	void get_Html(CkString &str);
	// The HTML source to be converted. Set this property to an HTML string, configure
	// any conversion options, and then call ToXml, Xml, or ToXmlSb.
	// 
	// Assigning this property replaces the current in-memory HTML source. For
	// file-to-file conversion, use ConvertFile. To load HTML from a file, BinData, or
	// StringBuilder, use the corresponding SetHtml* method.
	// 
	// HTML input does not need to already be valid XML. The converter is intended for
	// real-world HTML and repairs markup as needed to produce a well-formed XML
	// document. Chilkat examples show malformed HTML being normalized and ordinary
	// text represented in <text> elements to simplify programmatic extraction.
	const wchar_t *html(void);
	// The HTML source to be converted. Set this property to an HTML string, configure
	// any conversion options, and then call ToXml, Xml, or ToXmlSb.
	// 
	// Assigning this property replaces the current in-memory HTML source. For
	// file-to-file conversion, use ConvertFile. To load HTML from a file, BinData, or
	// StringBuilder, use the corresponding SetHtml* method.
	// 
	// HTML input does not need to already be valid XML. The converter is intended for
	// real-world HTML and repairs markup as needed to produce a well-formed XML
	// document. Chilkat examples show malformed HTML being normalized and ordinary
	// text represented in <text> elements to simplify programmatic extraction.
	void put_Html(const wchar_t *newVal);

	// Controls how HTML non-breaking-space entities are handled during conversion. The
	// default value is 0.
	// 
	// +-------+--------------------------------------------------------+
	// | Value |                     Behavior for                       |
	// +=======+========================================================+
	// | 0     | Convert to a normal space character (U+0020).          |
	// +-------+--------------------------------------------------------+
	// | 1     | Convert to the numeric character reference   (U+00A0). |
	// +-------+--------------------------------------------------------+
	// | 2     | Drop the non-breaking-space entity.                    |
	// +-------+--------------------------------------------------------+
	// | 3     | Leave the   entity unconverted by this option.         |
	// +-------+--------------------------------------------------------+
	// 
	// This setting applies specifically to the HTML entity ; it does not define
	// general whitespace normalization.
	// 
	int get_Nbsp(void);
	// Controls how HTML non-breaking-space entities are handled during conversion. The
	// default value is 0.
	// 
	// +-------+--------------------------------------------------------+
	// | Value |                     Behavior for                       |
	// +=======+========================================================+
	// | 0     | Convert to a normal space character (U+0020).          |
	// +-------+--------------------------------------------------------+
	// | 1     | Convert to the numeric character reference   (U+00A0). |
	// +-------+--------------------------------------------------------+
	// | 2     | Drop the non-breaking-space entity.                    |
	// +-------+--------------------------------------------------------+
	// | 3     | Leave the   entity unconverted by this option.         |
	// +-------+--------------------------------------------------------+
	// 
	// This setting applies specifically to the HTML entity ; it does not define
	// general whitespace normalization.
	// 
	void put_Nbsp(int newVal);

	// Specifies the character encoding to identify for the generated XML, such as
	// utf-8 or iso-8859-1. If this property is empty, Chilkat uses the character
	// encoding of the HTML input. Otherwise, the converted XML uses the specified
	// charset.
	// String versus file output: A string returned by ToXml or Xml is a string in the
	// programming language's native string representation, while the XML declaration
	// reflects XmlCharset. When writing that string to a file, use the same charset so
	// the file bytes agree with the XML declaration. ConvertFile performs the file
	// conversion directly.
	void get_XmlCharset(CkString &str);
	// Specifies the character encoding to identify for the generated XML, such as
	// utf-8 or iso-8859-1. If this property is empty, Chilkat uses the character
	// encoding of the HTML input. Otherwise, the converted XML uses the specified
	// charset.
	// String versus file output: A string returned by ToXml or Xml is a string in the
	// programming language's native string representation, while the XML declaration
	// reflects XmlCharset. When writing that string to a file, use the same charset so
	// the file bytes agree with the XML declaration. ConvertFile performs the file
	// conversion directly.
	const wchar_t *xmlCharset(void);
	// Specifies the character encoding to identify for the generated XML, such as
	// utf-8 or iso-8859-1. If this property is empty, Chilkat uses the character
	// encoding of the HTML input. Otherwise, the converted XML uses the specified
	// charset.
	// String versus file output: A string returned by ToXml or Xml is a string in the
	// programming language's native string representation, while the XML declaration
	// reflects XmlCharset. When writing that string to a file, use the same charset so
	// the file bytes agree with the XML declaration. ConvertFile performs the file
	// conversion directly.
	void put_XmlCharset(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Converts the HTML file at inHtmlPath to a well-formed XML file at destXmlPath.
	// The output encoding is controlled by XmlCharset; if XmlCharset is empty, Chilkat
	// uses the HTML source encoding.
	// 
	// Returns true on success and false on failure.
	// 
	// Conversion behavior: The input is parsed as HTML rather than XML. Chilkat can
	// normalize malformed or incomplete HTML markup as part of producing a well-formed
	// XML document suitable for subsequent parsing and data extraction.
	bool ConvertFile(const wchar_t *inHtmlPath, const wchar_t *destXmlPath);

	// Marks the specified HTML tag type to be dropped from the generated XML. To drop
	// multiple tag types, call this method once for each tag name.
	// 
	// The setting remains in effect for subsequent conversions performed by this
	// HtmlToXml object. Use UndropTagType to reverse the setting for a particular tag
	// type.
	// 
	void DropTagType(const wchar_t *tagName);

	// Configures the converter to drop common text-formatting tags from the generated
	// XML. The affected tag names are:
	// 
	// b, font, i, u, br, center, em, strong, big, tt, s, small, strike, sub, and sup.
	// 
	// This is useful when the formatting markup is not relevant to later XML parsing
	// and the application wants a simpler structural representation. Call
	// UndropTextFormattingTags to keep these tags instead.
	// 
	void DropTextFormattingTags(void);

	// Reads the complete contents of path and returns the file data as bytes.
	// Deprecated: This convenience method is retained for compatibility with older
	// code. New code can use the application's normal file I/O or a Chilkat
	// binary-data class when binary file contents are needed.
	bool ReadFile(const wchar_t *path, CkByteData &outBytes);

	// Reads the complete text file at filename and decodes its bytes using srcCharset,
	// such as utf-8 or iso-8859-1. Returns the decoded text string.
	// Deprecated: This convenience method is retained for compatibility with older
	// code. It is separate from HTML-to-XML conversion; calling it does not set the
	// Html property or perform a conversion.
	bool ReadFileToString(const wchar_t *filename, const wchar_t *srcCharset, CkString &outStr);
	// Reads the complete text file at filename and decodes its bytes using srcCharset,
	// such as utf-8 or iso-8859-1. Returns the decoded text string.
	// Deprecated: This convenience method is retained for compatibility with older
	// code. It is separate from HTML-to-XML conversion; calling it does not set the
	// Html property or perform a conversion.
	const wchar_t *readFileToString(const wchar_t *filename, const wchar_t *srcCharset);

	// Replaces the current HTML source with the complete contents of bd.
	// 
	// The data is copied from the supplied BinData object and becomes the input for a
	// later call to ToXml, Xml, or ToXmlSb. Returns true on success and false on
	// failure.
	// 
	bool SetHtmlBd(CkBinDataW &bd);

	// Replaces the current HTML source with the contents of inData.
	// 
	// This method sets the input to be used by a later call to ToXml, Xml, or ToXmlSb;
	// it does not perform the conversion itself.
	// 
	void SetHtmlBytes(CkByteData &inData);

	// Loads HTML from filename and replaces the current Html input with the file
	// contents.
	// 
	// Returns true on success and false if the file cannot be read or the HTML
	// input cannot be loaded. Call ToXml, Xml, or ToXmlSb afterward to perform the
	// conversion.
	// 
	bool SetHtmlFromFile(const wchar_t *filename);

	// Replaces the current HTML source with the complete contents of sb.
	// 
	// The text is copied from the supplied StringBuilder and becomes the input for a
	// later call to ToXml, Xml, or ToXmlSb. Returns true on success and false on
	// failure.
	// 
	bool SetHtmlSb(CkStringBuilderW &sb);

	// Converts the current Html input to well-formed XML and returns the XML string.
	// The generated XML uses the conversion settings currently configured on this
	// object, including DropCustomTags, dropped tag types, Nbsp, and XmlCharset.
	// HTML normalization: The input is parsed as HTML, so it does not need to already
	// be well-formed XML. Chilkat can repair incomplete or malformed markup. The
	// generated document is wrapped in a root element, and Chilkat represents ordinary
	// text content in <text> elements to make extraction with XML tools
	// straightforward.
	bool ToXml(CkString &outStr);
	// Converts the current Html input to well-formed XML and returns the XML string.
	// The generated XML uses the conversion settings currently configured on this
	// object, including DropCustomTags, dropped tag types, Nbsp, and XmlCharset.
	// HTML normalization: The input is parsed as HTML, so it does not need to already
	// be well-formed XML. Chilkat can repair incomplete or malformed markup. The
	// generated document is wrapped in a root element, and Chilkat represents ordinary
	// text content in <text> elements to make extraction with XML tools
	// straightforward.
	const wchar_t *toXml(void);

	// Converts the current Html input to well-formed XML and appends the generated XML
	// to sb.
	// 
	// Returns true on success and false on failure. Because the result is
	// appended, clear the destination StringBuilder first when replacement rather than
	// concatenation is desired.
	// 
	bool ToXmlSb(CkStringBuilderW &sb);

	// Reverses a previous DropTagType setting for the specified tag name so that tag
	// type is no longer intentionally dropped from subsequent XML output.
	// 
	// This affects only the named tag type. Other tag types previously configured to
	// be dropped remain unchanged.
	// 
	void UndropTagType(const wchar_t *tagName);

	// Configures the converter to retain the common text-formatting tags that are
	// otherwise dropped by default:
	// 
	// b, font, i, u, br, center, em, strong, big, tt, s, small, strike, sub, and sup.
	// 
	// Call DropTextFormattingTags to return to dropping these formatting tags.
	// 
	void UndropTextFormattingTags(void);

	// Writes the bytes in fileData to path. Returns true on success and false on
	// failure.
	// Deprecated: This is a general file-writing convenience method and is retained
	// for compatibility with older code; it is not specific to HTML-to-XML conversion.
	bool WriteFile(const wchar_t *path, CkByteData &fileData);

	// Encodes stringToWrite using charset and writes the resulting text to filename.
	// Typical charset names include utf-8 and iso-8859-1.
	// 
	// Returns true on success and false on failure.
	// 
	// Deprecated: This convenience method is retained for compatibility with older
	// code. If it is used to save the string returned by ToXml, use a charset that
	// agrees with the XML declaration, normally the same value configured in
	// XmlCharset.
	bool WriteStringToFile(const wchar_t *stringToWrite, const wchar_t *filename, const wchar_t *charset);

	// Equivalent to ToXml. Converts the current Html input to well-formed XML and
	// returns the XML string using the object's current conversion settings.
	// 
	// This method is provided as an alternate name for ToXml; it does not perform a
	// different conversion.
	// 
	bool Xml(CkString &outStr);
	// Equivalent to ToXml. Converts the current Html input to well-formed XML and
	// returns the XML string using the object's current conversion settings.
	// 
	// This method is provided as an alternate name for ToXml; it does not perform a
	// different conversion.
	// 
	const wchar_t *xml(void);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
