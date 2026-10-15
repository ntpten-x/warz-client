// CkHtmlToTextW.h: interface for the CkHtmlToTextW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkHtmlToTextW_H
#define _CkHtmlToTextW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkStringBuilderW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkHtmlToTextW
class CK_VISIBLE_PUBLIC CkHtmlToTextW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkHtmlToTextW(const CkHtmlToTextW &);
	CkHtmlToTextW &operator=(const CkHtmlToTextW &);

    public:
	CkHtmlToTextW(void);
	virtual ~CkHtmlToTextW(void);

	

	static CkHtmlToTextW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Controls whether HTML character references are decoded when converting HTML to
	// plain text. The default value is true.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | true  | HTML entities and numeric character references are decoded to      |
	// |         | their corresponding characters. For example, _AMP_amp; becomes     |
	// |         | _AMP_ .                                                            |
	// +---------+--------------------------------------------------------------------+
	// | false | Character references are left encoded in the plain-text output.    |
	// +---------+--------------------------------------------------------------------+
	// 
	// Typical use: Leave this property set to true when the goal is human-readable
	// text. Set it to false when the original entity notation itself must be
	// preserved.
	bool get_DecodeHtmlEntities(void);
	// Controls whether HTML character references are decoded when converting HTML to
	// plain text. The default value is true.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | true  | HTML entities and numeric character references are decoded to      |
	// |         | their corresponding characters. For example, _AMP_amp; becomes     |
	// |         | _AMP_ .                                                            |
	// +---------+--------------------------------------------------------------------+
	// | false | Character references are left encoded in the plain-text output.    |
	// +---------+--------------------------------------------------------------------+
	// 
	// Typical use: Leave this property set to true when the goal is human-readable
	// text. Set it to false when the original entity notation itself must be
	// preserved.
	void put_DecodeHtmlEntities(bool newVal);

	// Controls line wrapping in the generated plain text. The default value is 80. As
	// a line approaches the configured margin, Chilkat attempts to wrap at a SPACE
	// character. Set this property to 0 to disable right-margin wrapping.
	// Soft margin: The right margin is a preferred wrapping point, not a guaranteed
	// maximum line length. A long sequence with no suitable SPACE character may extend
	// beyond the configured margin.
	int get_RightMargin(void);
	// Controls line wrapping in the generated plain text. The default value is 80. As
	// a line approaches the configured margin, Chilkat attempts to wrap at a SPACE
	// character. Set this property to 0 to disable right-margin wrapping.
	// Soft margin: The right margin is a preferred wrapping point, not a guaranteed
	// maximum line length. A long sequence with no suitable SPACE character may extend
	// beyond the configured margin.
	void put_RightMargin(int newVal);

	// Controls whether hyperlink destination URLs are included in the generated plain
	// text. The default value is true.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | true  | The visible anchor text is retained, but hyperlink destination     |
	// |         | URLs are omitted.                                                  |
	// +---------+--------------------------------------------------------------------+
	// | false | Hyperlink URLs are included. By default, they are collected in a   |
	// |         | References: section at the end of the plain text.                  |
	// +---------+--------------------------------------------------------------------+
	// 
	// For example, with SuppressLinks set to false, an HTML link whose visible text
	// is chilkat and whose URL is https://www.chilkatsoft.com/ produces the visible
	// text and a numbered reference at the end of the output.
	// Related options: When link URLs are enabled, UncommonOptions can be used to
	// suppress the trailing references list with NoReferencesList or emit URLs inline
	// with EmitUrls.
	bool get_SuppressLinks(void);
	// Controls whether hyperlink destination URLs are included in the generated plain
	// text. The default value is true.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | true  | The visible anchor text is retained, but hyperlink destination     |
	// |         | URLs are omitted.                                                  |
	// +---------+--------------------------------------------------------------------+
	// | false | Hyperlink URLs are included. By default, they are collected in a   |
	// |         | References: section at the end of the plain text.                  |
	// +---------+--------------------------------------------------------------------+
	// 
	// For example, with SuppressLinks set to false, an HTML link whose visible text
	// is chilkat and whose URL is https://www.chilkatsoft.com/ produces the visible
	// text and a numbered reference at the end of the output.
	// Related options: When link URLs are enabled, UncommonOptions can be used to
	// suppress the trailing references list with NoReferencesList or emit URLs inline
	// with EmitUrls.
	void put_SuppressLinks(bool newVal);

	// Specifies uncommon HTML-to-text conversion options as a comma-separated list of
	// keywords. The default is the empty string, which is appropriate for normal use.
	// 
	// +------------------+-----------------------------------------------------------+
	// |     Keyword      |                          Effect                           |
	// +==================+===========================================================+
	// | NoReferencesList | Does not generate the hyperlink-reference list at the end |
	// |                  | of the plain-text output.                                 |
	// +------------------+-----------------------------------------------------------+
	// | EmitUrls         | Emits hyperlink URLs inline in the plain-text output      |
	// |                  | instead of relying on the default trailing reference      |
	// |                  | list.                                                     |
	// +------------------+-----------------------------------------------------------+
	// 
	// Interaction with SuppressLinks: These options control the presentation of
	// hyperlink URLs when URL output is enabled. If SuppressLinks is true, hyperlink
	// URLs are suppressed.
	void get_UncommonOptions(CkString &str);
	// Specifies uncommon HTML-to-text conversion options as a comma-separated list of
	// keywords. The default is the empty string, which is appropriate for normal use.
	// 
	// +------------------+-----------------------------------------------------------+
	// |     Keyword      |                          Effect                           |
	// +==================+===========================================================+
	// | NoReferencesList | Does not generate the hyperlink-reference list at the end |
	// |                  | of the plain-text output.                                 |
	// +------------------+-----------------------------------------------------------+
	// | EmitUrls         | Emits hyperlink URLs inline in the plain-text output      |
	// |                  | instead of relying on the default trailing reference      |
	// |                  | list.                                                     |
	// +------------------+-----------------------------------------------------------+
	// 
	// Interaction with SuppressLinks: These options control the presentation of
	// hyperlink URLs when URL output is enabled. If SuppressLinks is true, hyperlink
	// URLs are suppressed.
	const wchar_t *uncommonOptions(void);
	// Specifies uncommon HTML-to-text conversion options as a comma-separated list of
	// keywords. The default is the empty string, which is appropriate for normal use.
	// 
	// +------------------+-----------------------------------------------------------+
	// |     Keyword      |                          Effect                           |
	// +==================+===========================================================+
	// | NoReferencesList | Does not generate the hyperlink-reference list at the end |
	// |                  | of the plain-text output.                                 |
	// +------------------+-----------------------------------------------------------+
	// | EmitUrls         | Emits hyperlink URLs inline in the plain-text output      |
	// |                  | instead of relying on the default trailing reference      |
	// |                  | list.                                                     |
	// +------------------+-----------------------------------------------------------+
	// 
	// Interaction with SuppressLinks: These options control the presentation of
	// hyperlink URLs when URL output is enabled. If SuppressLinks is true, hyperlink
	// URLs are suppressed.
	void put_UncommonOptions(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Reads an entire text file and returns its contents as a string. The srcCharset
	// argument specifies the character encoding used to decode the file bytes, such as
	// utf-8 or iso-8859-1.
	// Convenience method: This method only reads and decodes the file. It does not
	// perform HTML-to-text conversion. A typical workflow is to read the HTML with
	// ReadFileToString and pass the returned string to ToText.
	// See the List of Charsets[1] for supported charset names.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool ReadFileToString(const wchar_t *filename, const wchar_t *srcCharset, CkString &outStr);
	// Reads an entire text file and returns its contents as a string. The srcCharset
	// argument specifies the character encoding used to decode the file bytes, such as
	// utf-8 or iso-8859-1.
	// Convenience method: This method only reads and decodes the file. It does not
	// perform HTML-to-text conversion. A typical workflow is to read the HTML with
	// ReadFileToString and pass the returned string to ToText.
	// See the List of Charsets[1] for supported charset names.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	const wchar_t *readFileToString(const wchar_t *filename, const wchar_t *srcCharset);

	// Converts the HTML in html to readable plain text and returns the result. The
	// conversion honors DecodeHtmlEntities, RightMargin, SuppressLinks, and
	// UncommonOptions. HTML markup is interpreted to produce readable text rather than
	// simply being removed with a tag-stripping operation.
	// Plain-text conversion: The output is intended for reading, indexing, logging,
	// email text alternatives, and similar text-oriented uses. It is not intended to
	// preserve the original HTML markup or visual layout exactly.
	bool ToText(const wchar_t *html, CkString &outStr);
	// Converts the HTML in html to readable plain text and returns the result. The
	// conversion honors DecodeHtmlEntities, RightMargin, SuppressLinks, and
	// UncommonOptions. HTML markup is interpreted to produce readable text rather than
	// simply being removed with a tag-stripping operation.
	// Plain-text conversion: The output is intended for reading, indexing, logging,
	// email text alternatives, and similar text-oriented uses. It is not intended to
	// preserve the original HTML markup or visual layout exactly.
	const wchar_t *toText(const wchar_t *html);

	// Converts the HTML currently contained in sb to plain text in place. On success,
	// the same StringBuilder contains the converted plain-text result. The conversion
	// honors DecodeHtmlEntities, RightMargin, SuppressLinks, and UncommonOptions.
	// StringBuilder workflow: Use this method when the HTML is already held in a
	// StringBuilder and you want the conversion result returned through that same
	// object rather than as a separate string.
	bool ToTextSb(CkStringBuilderW &sb);

	// Writes stringToWrite to filename using the character encoding specified by
	// charset. The string is converted to that charset as it is written. Common values
	// include utf-8 and iso-8859-1.
	// Convenience method: This method performs file output only; it does not convert
	// HTML. To save converted text, first call ToText, then pass that result to
	// WriteStringToFile.
	// See the List of Charsets[1] for supported charset names.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool WriteStringToFile(const wchar_t *stringToWrite, const wchar_t *filename, const wchar_t *charset);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
