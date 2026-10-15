// CkStringBuilderW.h: interface for the CkStringBuilderW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkStringBuilderW_H
#define _CkStringBuilderW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkBinDataW;
class CkByteData;
class CkJsonObjectW;
class CkStringTableW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkStringBuilderW
class CK_VISIBLE_PUBLIC CkStringBuilderW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkStringBuilderW(const CkStringBuilderW &);
	CkStringBuilderW &operator=(const CkStringBuilderW &);

    public:
	CkStringBuilderW(void);
	virtual ~CkStringBuilderW(void);

	

	static CkStringBuilderW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns true if the content contains one or more emoji characters.
	bool get_HasEmojis(void);

	// Returns the content of the string converted to an integer.
	int get_IntValue(void);
	// Returns the content of the string converted to an integer.
	void put_IntValue(int newVal);

	// Returns true if the content contains only those characters allowed in the
	// base64 encoding. A base64 string is composed of characters 'A'..'Z', 'a'..'z',
	// '0'..'9', '+', '/' and it is often padded at the end with up to two '=', to make
	// the length a multiple of 4. Whitespace is ignored.
	bool get_IsBase64(void);

	// The number of characters of the string contained within this instance.
	int get_Length(void);



	// ----------------------
	// Methods
	// ----------------------
	// Appends a copy of the specified string to this instance.
	bool Append(const wchar_t *value);

	// Appends the contents of binData. The charset specifies the character encoding of the
	// bytes contained in binData. The charset can be any of the supported encodings listed
	// at Chilkat Supported Character Encodings[1]. To append the entire contents of
	// binData, set offset and numBytes equal to zero. To append a range of binData, set the offset
	// and numBytes to specify the range.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool AppendBd(CkBinDataW &binData, const wchar_t *charset, int offset, int numBytes);

	// Appends binary data using the encoding specified by encoding, such as base64, hex,
	// etc.
	bool AppendEncoded(CkByteData &binaryData, const wchar_t *encoding);

	// Appends the string representation of a specified 32-bit signed integer to this
	// instance.
	bool AppendInt(int value);

	// Appends the string representation of a specified 64-bit signed integer to this
	// instance.
	bool AppendInt64(__int64 value);

	// Appends the str followed by a CRLF or LF to the end of the curent StringBuilder
	// object. If crlf is true, then a CRLF line ending is used. Otherwise a LF line
	// ending is used.
	bool AppendLine(const wchar_t *str, bool crlf);

	// Appends the str followed by a CRLF to the end of this object. This method is
	// the same as AppendLine[1], except the line-ending is always CRLF.
	// 
	// References:
	// [1] #AppendLine
	bool AppendLn(const wchar_t *str);

	// Append numBytes random bytes encoded according to encoding. encoding can be hex, hex_lower,
	// base64, base64url, or any other encoding supported by Chilkat.
	bool AppendRandom(int numBytes, const wchar_t *encoding);

	// Appends the contents of another StringBuilder to this instance.
	bool AppendSb(CkStringBuilderW &sb);

	// Generates and appends a random GUID/UUID such as
	// 63c35f38-2b5f-4600-b3da-3ddee86d62b3. If lowerCase is true, then the hex values use
	// lowercase (a - f). If lowerCase is false then uppercase is used (A - F).
	// 
	// Note: This generates a version 4 UUID.
	// 
	bool AppendUuid(bool lowerCase);

	// Generates and appends a random version 7 UUID. If lowerCase is true, then the hex
	// values use lowercase (a - f). If lowerCase is false then uppercase is used (A - F).
	bool AppendUuid7(bool lowerCase);

	// Removes all characters from the current StringBuilder instance.
	void Clear(void);

	// Returns true if the str is contained within this object. For case sensitive
	// matching, set caseSensitive equal to true. For case-insensitive, set caseSensitive equal to
	// false.
	bool Contains(const wchar_t *str, bool caseSensitive);

	// Returns true if the word is contained within this object, but only if it is a
	// whole word. This method is limited to finding whole words in strings that only
	// contains characters in the Latin1 charset (i.e. iso-8859-1 or Windows-1252). A
	// whole word can only contain alphanumeric chars where the alpha chars are
	// restricted to those of the Latin1 alpha chars. (The underscore character is also
	// considered part of a word.)
	// 
	// For case sensitive matching, set caseSensitive equal to true. For case-insensitive, set
	// caseSensitive equal to false.
	// 
	bool ContainsWord(const wchar_t *word, bool caseSensitive);

	// Returns true if the contents of this object equals the str. Returns false
	// if unequal. For case insensitive equality, set caseSensitive equal to false.
	bool ContentsEqual(const wchar_t *str, bool caseSensitive);

	// Returns true if the contents of this object equals the sb. Returns false
	// if unequal. For case insensitive equality, set caseSensitive equal to false.
	bool ContentsEqualSb(CkStringBuilderW &sb, bool caseSensitive);

	// Decodes and replaces the contents with the decoded string. The encoding can be set
	// to any of the following strings: base64, hex, quoted-printable (or qp), url,
	// base32, Q, B, url_rc1738, url_rfc2396, url_rfc3986, url_oauth, uu, modBase64, or
	// html (for HTML entity encoding). The full up-to-date list of supported binary
	// encodings is available at the link entitled Supported Binary Encodings below.
	// 
	// Note: This method can only be called if the encoded content decodes to a string.
	// The charset indicates the charset to be used in intepreting the decoded bytes. For
	// example, the charset can be utf-8, utf-16, iso-8859-1, shift_JIS, etc.
	// 
	bool Decode(const wchar_t *encoding, const wchar_t *charset);

	// Decodes a binary encoded string, where the binary encoding (such as url, hex,
	// base64, etc.) is specified by encoding, and the underlying charset encoding (such as
	// utf-8, windows-1252, etc.) is specified by charset. The decoded string is appended
	// to this object.
	bool DecodeAndAppend(const wchar_t *value, const wchar_t *encoding, const wchar_t *charset);

	// Encodes to base64, hex, quoted-printable, URL encoding, etc. The encoding can be set
	// to any of the following strings: base64, hex, quoted-printable (or qp), url,
	// base32, Q, B, url_rc1738, url_rfc2396, url_rfc3986, url_oauth, uu, modBase64, or
	// html (for HTML entity encoding). The full up-to-date list of supported binary
	// encodings is available at the link entitled Supported Binary Encodings below.
	bool Encode(const wchar_t *encoding, const wchar_t *charset);

	// Returns true if the string ends with substr. Otherwise returns false. The
	// comparison is case sensitive if caseSensitive is true, and case insensitive if caseSensitive is
	// false.
	bool EndsWith(const wchar_t *substr, bool caseSensitive);

	// Decodes HTML entities. See HTML entities[1] for more information about HTML
	// entities.
	// 
	// References:
	// [1] https://duckduckgo.com/?q=html+entities&bext=wfp&ia=web
	bool EntityDecode(void);

	// Begin searching after the 1st occurrence of searchAfter is found, and then return the
	// substring found between the next occurrence of beginMark and the next occurrence of
	// endMark.
	bool GetAfterBetween(const wchar_t *searchAfter, const wchar_t *beginMark, const wchar_t *endMark, CkString &outStr);
	// Begin searching after the 1st occurrence of searchAfter is found, and then return the
	// substring found between the next occurrence of beginMark and the next occurrence of
	// endMark.
	const wchar_t *getAfterBetween(const wchar_t *searchAfter, const wchar_t *beginMark, const wchar_t *endMark);
	// Begin searching after the 1st occurrence of searchAfter is found, and then return the
	// substring found between the next occurrence of beginMark and the next occurrence of
	// endMark.
	const wchar_t *afterBetween(const wchar_t *searchAfter, const wchar_t *beginMark, const wchar_t *endMark);

	// Returns the substring found after the final occurrence of marker. If removeFlag is
	// true, the marker and the content that follows is removed from this content.
	// 
	// If the marker is not present, then the entire string is returned. In this case, if
	// removeFlag is true, this object is also cleared.
	// 
	bool GetAfterFinal(const wchar_t *marker, bool removeFlag, CkString &outStr);
	// Returns the substring found after the final occurrence of marker. If removeFlag is
	// true, the marker and the content that follows is removed from this content.
	// 
	// If the marker is not present, then the entire string is returned. In this case, if
	// removeFlag is true, this object is also cleared.
	// 
	const wchar_t *getAfterFinal(const wchar_t *marker, bool removeFlag);
	// Returns the substring found after the final occurrence of marker. If removeFlag is
	// true, the marker and the content that follows is removed from this content.
	// 
	// If the marker is not present, then the entire string is returned. In this case, if
	// removeFlag is true, this object is also cleared.
	// 
	const wchar_t *afterFinal(const wchar_t *marker, bool removeFlag);

	// Returns the contents as a string.
	bool GetAsString(CkString &outStr);
	// Returns the contents as a string.
	const wchar_t *getAsString(void);
	// Returns the contents as a string.
	const wchar_t *asString(void);

	// Returns the substring found before the 1st occurrence of marker. If removeFlag is
	// true, the content up to and including the marker is removed from this object's
	// contents.
	// 
	// If the marker is not present, then the entire string is returned. In this case, if
	// removeFlag is true, this object is also cleared.
	// 
	bool GetBefore(const wchar_t *marker, bool removeFlag, CkString &outStr);
	// Returns the substring found before the 1st occurrence of marker. If removeFlag is
	// true, the content up to and including the marker is removed from this object's
	// contents.
	// 
	// If the marker is not present, then the entire string is returned. In this case, if
	// removeFlag is true, this object is also cleared.
	// 
	const wchar_t *getBefore(const wchar_t *marker, bool removeFlag);
	// Returns the substring found before the 1st occurrence of marker. If removeFlag is
	// true, the content up to and including the marker is removed from this object's
	// contents.
	// 
	// If the marker is not present, then the entire string is returned. In this case, if
	// removeFlag is true, this object is also cleared.
	// 
	const wchar_t *before(const wchar_t *marker, bool removeFlag);

	// Returns the substring found between the 1st occurrence of beginMark and the next
	// occurrence of endMark.
	bool GetBetween(const wchar_t *beginMark, const wchar_t *endMark, CkString &outStr);
	// Returns the substring found between the 1st occurrence of beginMark and the next
	// occurrence of endMark.
	const wchar_t *getBetween(const wchar_t *beginMark, const wchar_t *endMark);
	// Returns the substring found between the 1st occurrence of beginMark and the next
	// occurrence of endMark.
	const wchar_t *between(const wchar_t *beginMark, const wchar_t *endMark);

	// Decodes and returns the decoded bytes. The encoding can be set to any of the
	// following strings: base64, hex, quoted-printable (or qp), url, base32, Q, B,
	// url_rc1738, url_rfc2396, url_rfc3986, url_oauth, uu, modBase64, or html (for
	// HTML entity encoding). The full up-to-date list of supported binary encodings is
	// available at the link entitled Supported Binary Encodings below.
	bool GetDecoded(const wchar_t *encoding, CkByteData &outBytes);

	// Returns the string contents encoded in an encoding such as base64, hex,
	// quoted-printable, or URL-encoding. The encoding can be set to any of the following
	// strings: base64, hex, quoted-printable (or qp), url, base32, Q, B, url_rc1738,
	// url_rfc2396, url_rfc3986, url_oauth, uu, modBase64, or html (for HTML entity
	// encoding). The full up-to-date list of supported binary encodings is available
	// at the link entitled Supported Binary Encodings below.
	// 
	// Note: The Encode method modifies the content of this object. The GetEncoded
	// method leaves this object's content unmodified.
	// 
	bool GetEncoded(const wchar_t *encoding, const wchar_t *charset, CkString &outStr);
	// Returns the string contents encoded in an encoding such as base64, hex,
	// quoted-printable, or URL-encoding. The encoding can be set to any of the following
	// strings: base64, hex, quoted-printable (or qp), url, base32, Q, B, url_rc1738,
	// url_rfc2396, url_rfc3986, url_oauth, uu, modBase64, or html (for HTML entity
	// encoding). The full up-to-date list of supported binary encodings is available
	// at the link entitled Supported Binary Encodings below.
	// 
	// Note: The Encode method modifies the content of this object. The GetEncoded
	// method leaves this object's content unmodified.
	// 
	const wchar_t *getEncoded(const wchar_t *encoding, const wchar_t *charset);
	// Returns the string contents encoded in an encoding such as base64, hex,
	// quoted-printable, or URL-encoding. The encoding can be set to any of the following
	// strings: base64, hex, quoted-printable (or qp), url, base32, Q, B, url_rc1738,
	// url_rfc2396, url_rfc3986, url_oauth, uu, modBase64, or html (for HTML entity
	// encoding). The full up-to-date list of supported binary encodings is available
	// at the link entitled Supported Binary Encodings below.
	// 
	// Note: The Encode method modifies the content of this object. The GetEncoded
	// method leaves this object's content unmodified.
	// 
	const wchar_t *encoded(const wchar_t *encoding, const wchar_t *charset);

	// Returns the hash of the contents of this object. The algorithm is the hash algorithm,
	// and can be sha1, sha256, sha384, sha512, sha3-224, sha3-256, sha3-384, sha3-512,
	// md2, md5, ripemd128, ripemd160, ripemd256, or ripemd320. The encoding can be base64,
	// modBase64, base64Url, base32, base58, qp (for quoted-printable), url (for
	// url-encoding), hex, hexLower, or any of the encodings found at Chilkat Binary
	// Encodings List[1].
	// 
	// The charset is the character encoding byte representation to hash. It is typically
	// utf-8. It can be any of the chacter encodings listed at Chilkat Character
	// Encodings List[2].
	// 
	// 
	// References:
	// [1] https://www.chilkatsoft.com/binary_encodings.asp
	// [2] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool GetHash(const wchar_t *algorithm, const wchar_t *encoding, const wchar_t *charset, CkString &outStr);
	// Returns the hash of the contents of this object. The algorithm is the hash algorithm,
	// and can be sha1, sha256, sha384, sha512, sha3-224, sha3-256, sha3-384, sha3-512,
	// md2, md5, ripemd128, ripemd160, ripemd256, or ripemd320. The encoding can be base64,
	// modBase64, base64Url, base32, base58, qp (for quoted-printable), url (for
	// url-encoding), hex, hexLower, or any of the encodings found at Chilkat Binary
	// Encodings List[1].
	// 
	// The charset is the character encoding byte representation to hash. It is typically
	// utf-8. It can be any of the chacter encodings listed at Chilkat Character
	// Encodings List[2].
	// 
	// 
	// References:
	// [1] https://www.chilkatsoft.com/binary_encodings.asp
	// [2] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	const wchar_t *getHash(const wchar_t *algorithm, const wchar_t *encoding, const wchar_t *charset);
	// Returns the hash of the contents of this object. The algorithm is the hash algorithm,
	// and can be sha1, sha256, sha384, sha512, sha3-224, sha3-256, sha3-384, sha3-512,
	// md2, md5, ripemd128, ripemd160, ripemd256, or ripemd320. The encoding can be base64,
	// modBase64, base64Url, base32, base58, qp (for quoted-printable), url (for
	// url-encoding), hex, hexLower, or any of the encodings found at Chilkat Binary
	// Encodings List[1].
	// 
	// The charset is the character encoding byte representation to hash. It is typically
	// utf-8. It can be any of the chacter encodings listed at Chilkat Character
	// Encodings List[2].
	// 
	// 
	// References:
	// [1] https://www.chilkatsoft.com/binary_encodings.asp
	// [2] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	const wchar_t *hash(const wchar_t *algorithm, const wchar_t *encoding, const wchar_t *charset);

	// Returns the Nth substring in string that is a list delimted by delimiterChar. The first
	// substring is at index 0. If exceptDoubleQuoted is true, then the delimiter char found
	// between double quotes is not treated as a delimiter. If exceptEscaped is true, then an
	// escaped (with a backslash) delimiter char is not treated as a delimiter.
	bool GetNth(int index, const wchar_t *delimiterChar, bool exceptDoubleQuoted, bool exceptEscaped, CkString &outStr);
	// Returns the Nth substring in string that is a list delimted by delimiterChar. The first
	// substring is at index 0. If exceptDoubleQuoted is true, then the delimiter char found
	// between double quotes is not treated as a delimiter. If exceptEscaped is true, then an
	// escaped (with a backslash) delimiter char is not treated as a delimiter.
	const wchar_t *getNth(int index, const wchar_t *delimiterChar, bool exceptDoubleQuoted, bool exceptEscaped);
	// Returns the Nth substring in string that is a list delimted by delimiterChar. The first
	// substring is at index 0. If exceptDoubleQuoted is true, then the delimiter char found
	// between double quotes is not treated as a delimiter. If exceptEscaped is true, then an
	// escaped (with a backslash) delimiter char is not treated as a delimiter.
	const wchar_t *nth(int index, const wchar_t *delimiterChar, bool exceptDoubleQuoted, bool exceptEscaped);

	// Returns a string containing the specified range of characters from this
	// instance. If removeFlag is true, then the range of chars is removed from this
	// instance.
	// 
	// Note: It was discovered that the range of chars was always removed regardless of
	// the value of removeFlag. This is fixed in v9.5.0.89.
	// 
	bool GetRange(int startIndex, int numChars, bool removeFlag, CkString &outStr);
	// Returns a string containing the specified range of characters from this
	// instance. If removeFlag is true, then the range of chars is removed from this
	// instance.
	// 
	// Note: It was discovered that the range of chars was always removed regardless of
	// the value of removeFlag. This is fixed in v9.5.0.89.
	// 
	const wchar_t *getRange(int startIndex, int numChars, bool removeFlag);
	// Returns a string containing the specified range of characters from this
	// instance. If removeFlag is true, then the range of chars is removed from this
	// instance.
	// 
	// Note: It was discovered that the range of chars was always removed regardless of
	// the value of removeFlag. This is fixed in v9.5.0.89.
	// 
	const wchar_t *range(int startIndex, int numChars, bool removeFlag);

	// Appends to startIndex the specified range of characters from this instance. If removeFlag is
	// true, then the range of chars is removed from this instance.
	bool GetRangeSb(int startIndex, int numChars, bool removeFlag, CkStringBuilderW &sb);

	// Returns true if the contents of this object are well-formed JSON or XML. format
	// selects which check to apply and must be json or xml (case insensitive). Returns
	// false if the contents do not conform, or if format is anything else.
	// 
	// Chilkat's JSON and XML parsers are deliberately tolerant. Given text that is not
	// well-formed they can still report success, leaving an empty or partially
	// populated document. This method answers the question those parsers do not, and
	// it does so without loading the text into a JsonObject or Xml object first. The
	// checks applied here are the same ones those classes apply when their Strict
	// property is set.
	// 
	// For xml this is a well-formedness check: element nesting and tag matching,
	// attribute syntax and duplicate attributes, entity and character references,
	// comments, processing instructions, CDATA sections, the XML declaration, the
	// DOCTYPE declaration, and that the bytes are valid UTF-8 containing only
	// characters XML permits. It is not a validating parse: no DTD or schema is read.
	// 
	// For json the full RFC 8259 grammar is checked.
	// 
	// Empty contents are not well-formed in either format, so false is returned.
	// 
	// Note: The contents of this object are never modified by this method.
	bool IsWellFormed(const wchar_t *format);

	// Returns the last N lines of the text. If fewer than numLines lines exists, then all
	// of the text is returned. If bCrlf is true, then the line endings of the
	// returned string are converted to CRLF, otherwise the line endings are converted
	// to LF-only.
	bool LastNLines(int numLines, bool bCrlf, CkString &outStr);
	// Returns the last N lines of the text. If fewer than numLines lines exists, then all
	// of the text is returned. If bCrlf is true, then the line endings of the
	// returned string are converted to CRLF, otherwise the line endings are converted
	// to LF-only.
	const wchar_t *lastNLines(int numLines, bool bCrlf);

	// Loads the contents of a file.
	bool LoadFile(const wchar_t *path, const wchar_t *charset);

	// This method converts the Markdown content of this object to HTML, storing the
	// result in sbHtml. It supports both streaming and full document conversion. options
	// specifies conversion options, including a key streaming option. In streaming
	// mode, generated HTML is appended to sbHtml. In non-streaming mode, sbHtml is fully
	// replaced by the generated HTML. For further details, see the examples linked
	// below.
	// 
	// In streaming mode, only complete markdown lines are converted to HTML and
	// removed from this object, leaving just the final partial line, if present. If
	// this object contains only a partial markdown line, no HTML is emitted.
	// --------------------------------------------------------------------------------
	// 
	// Starting in v11.3.0...
	// 
	//     * "emitJavascript": true can be included in options to emit Javascript function
	//     calls instead of HTML. This is used to update the response in an embedded
	//     browser in real-time. See Real-Time Streaming AI Responses to Embedded
	//     Browsers in Desktop Apps[1] 
	//     * "streamingShell": true is used to convert an empty string to an HTML shell
	//     to be used as the starting point before applying Javascript function calls.
	//     See Preparing the HTML Shell[2] 
	//     * "theme": "html_theme_name" can be included when creating the HTML shell to
	//     select a predefined theme or when converting Markdown to HTML in non-streaming
	//     mode. The available themes are:
	//         * ChatGPT - A style that is similar to the ChatGPT application.
	//         * cleanWin - A clean style for Windows applications.
	//         * cleanMac - A clean style for MacOS applications.
	//         * raw - No HTML styles, header, or body begin/end elements are emitted.
	//         Only the Markdown to HTML generated elements are emitted.
	// 
	//     If no theme is is included, then default HTML docType/root/body/header
	//     elements are emitted unless various parts are overridden by docType,
	//     rootElement, head, bodyStart, bodyEnd, and bodyExtra.
	// 
	//     * "usesPrism": true can be included when creating the HTML shell (or when
	//     converting Markdown to HTML in non-streaming mode) to include PRISM code
	//     highlighting[3].
	//     * "prism": { "theme": "prism_theme_name" } Is optional and can be used to
	//     specify the prism theme when usesPrism is true. Possible values are:
	//         * tomorrow
	//         * default
	//         * coy
	//         * dark
	//         * funky
	//         * okaidia
	//         * solarizedlight
	//         * twilight
	//     * "prism": { "version": "version_number" } Is optional can can be used to
	//     specify the prism version, such as "1.29.0" when usesPrism is true. If not
	//     specified, then "1.29.0" is used.
	//     * If no theme is specified, then any or all of the following HTML document
	//     parts can be explicitly specified:
	//         * "docType": "doctype_element" The DOCTYPE element. The default is
	//         "_LT_!DOCTYPE html>"
	//         * "rootElement": "root_element" The html element. The default is
	//         "_LT_html>"
	//         * "head": "head_section" The HTML fragment for the HTML head section.
	//         The default is "_LT_head>_LT_meta charset="utf-8" />_LT_/head>".
	//         Note: If usesPrism is true, then prism related links will be inserted
	//         just before the _LT_/head>.
	//         * "bodyStart": "html_fragment" The HTML fragment to begin the body
	//         section. The default is "_LT_body>_LT_div id="content">"
	//         * "bodyEnd": "html_fragment" The HTML fragment to end the body section.
	//         The default is "_LT_/div>_LT_!-- end-of-content-div -->_LT_/body>"
	//         * "noContentDiv": true If set, the default bodyStart and bodyEnd do not
	//         include the "_LT_div id="content">" and "_LT_/div>_LT_!--
	//         end-of-content-div -->"
	//     * "copyButton": true In non-streaming mode, can optionally be set to include
	//     HTML for adding a copy button. THe copy button is added by default in streaming
	//     mode.
	//     * "ChatGPT": { "max-width": "css_length"; } Is optional can can be used to
	//     specify the max width of the body text if the theme is ChatGPT. The
	//     css_length is a length using CSS length units, such as "72ch", "40em",
	//     "800px", etc.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/ai_real_time_ui_streaming.asp
	// [2] https://www.chilkatsoft.com/preparing_the_html_shell.asp
	// [3] https://prismjs.com/
	bool MarkdownToHtml(CkJsonObjectW &options, CkStringBuilderW &sbHtml);

	// This function masks the content inside single and/or double-quoted strings by
	// replacing it with a specified mask character (maskChar). The content of each masked
	// quoted string is saved to maskedStrings. The contents can be restored by calling
	// RestoreMaskedStrings.
	// 
	// quoteType determines which types of quoted strings are masked:
	//     0. Both single and double quoted.
	//     1. Only single quoted strings.
	//     2. Only double quoted strings.
	// 
	bool MaskQuotedStrings(const wchar_t *maskChar, int quoteType, CkStringTableW &maskedStrings);

	// Obfuscates the string. (The Unobfuscate method can be called to reverse the
	// obfuscation to restore the original string.)
	// 
	// The Chilkat string obfuscation algorithm works by taking the utf-8 bytes of the
	// string, base64 encoding it, and then scrambling the letters of the base64
	// encoded string. It is deterministic in that the same string will always
	// obfuscate to the same result. It is NOT a secure way of encrypting a string. It
	// is only meant to be a simple means of transforming a string into something
	// unintelligible.
	// 
	void Obfuscate(void);

	// Prepends a copy of the specified string to this instance.
	bool Prepend(const wchar_t *value);

	// In-place decodes the string from punycode.
	bool PunyDecode(void);

	// In-place encodes the string to punycode.
	bool PunyEncode(void);

	// Searches the content of this object for substrings that match a regular
	// expression pattern and returns the matches in json. Returns the number of
	// matches or -1 for failure. timeoutMs is the maximum number of milliseconds of
	// processing allowed before giving up. Pass 0 for an infinite amount of time.
	// Failure information is also returned in json.
	int RegexMatch(const wchar_t *pattern, CkJsonObjectW &json, int timeoutMs);

	// Replaces the substrings of capture groups found in a previous call to
	// RegexMatch.
	bool RegexReplace(CkJsonObjectW &json);

	// Removes the accents (diacritics) from European accented characters. This applies
	// only to the accented characters found in the Windows-1252 (Latin alphabet) and
	// Windows-1250 (Central European) charsets. Accent marks for characters in other
	// languages will not be removed.
	bool RemoveAccents(void);

	// Removes the substring found after the final occurrence of the marker. Also removes
	// the marker. Returns true if the marker was found and content was removed.
	// Otherwise returns false.
	bool RemoveAfterFinal(const wchar_t *marker);

	// Removes the substring found before the 1st occurrence of the marker. Also removes
	// the marker. Returns true if the marker was found and content was removed.
	// Otherwise returns false.
	bool RemoveBefore(const wchar_t *marker);

	// Removes the specified range of characters from this instance.
	bool RemoveCharsAt(int startIndex, int numChars);

	// Removes all emoji characters from the string.
	void RemoveEmojis(void);

	// Replaces all occurrences of a specified string in this instance with another
	// specified string. Returns the number of replacements.
	int Replace(const wchar_t *value, const wchar_t *replacement);

	// Replaces the content found after the final occurrence of marker with replacement.
	bool ReplaceAfterFinal(const wchar_t *marker, const wchar_t *replacement);

	// Replaces the first occurrence of ALL the content found between beginMark and endMark
	// with replacement. The beginMark and endMark are included in what is replaced if replaceMarks is true.
	bool ReplaceAllBetween(const wchar_t *beginMark, const wchar_t *endMark, const wchar_t *replacement, bool replaceMarks);

	// Replaces all occurrences of value with replacement, but only where value is found between
	// beginMark and endMark. Returns the number of replacements made.
	int ReplaceBetween(const wchar_t *beginMark, const wchar_t *endMark, const wchar_t *value, const wchar_t *replacement);

	// Replaces the first occurrence of a specified string in this instance with
	// another string. Returns true if the value was found and replaced. Otherwise
	// returns false.
	bool ReplaceFirst(const wchar_t *value, const wchar_t *replacement);

	// Replaces all occurrences of value with the decimal integer replacement. Returns the
	// number of replacements.
	int ReplaceI(const wchar_t *value, int replacement);

	// Replaces all occurrences of value with replacement (case insensitive). Returns the
	// number of replacements.
	int ReplaceNoCase(const wchar_t *value, const wchar_t *replacement);

	// Replaces all word occurrences of a specified string in this instance with
	// another specified string. Returns the number of replacements made.
	// 
	// Important: This method is limited to replacing whole words in strings that only
	// contains characters in the Latin1 charset (i.e. iso-8859-1 or Windows-1252). A
	// whole word can only contain alphanumeric chars where the alpha chars are
	// restricted to those of the Latin1 alpha chars. (The underscore character is also
	// considered part of a word.)
	// 
	int ReplaceWord(const wchar_t *value, const wchar_t *replacement);

	// Restores single and/or double-quoted strings previously masked by
	// MaskQuotedStrings.
	// 
	// quoteType determines which types of quoted strings are masked:
	//     0. Both single and double quoted.
	//     1. Only single quoted strings.
	//     2. Only double quoted strings.
	// 
	bool RestoreMaskedStrings(int quoteType, CkStringTableW &maskedStrings);

	// Removes all characters from the current StringBuilder instance, and write zero
	// bytes to the allocated memory before deallocating.
	void SecureClear(void);

	// Sets the Nth substring in string in a list delimted by delimiterChar. The first substring
	// is at index 0. If exceptDoubleQuoted is true, then the delimiter char found between double
	// quotes is not treated as a delimiter. If exceptEscaped is true, then an escaped (with a
	// backslash) delimiter char is not treated as a delimiter.
	bool SetNth(int index, const wchar_t *value, const wchar_t *delimiterChar, bool exceptDoubleQuoted, bool exceptEscaped);

	// Sets this instance to a copy of the specified string.
	bool SetString(const wchar_t *value);

	// Shortens the string by removing the last numChars chars.
	bool Shorten(int numChars);

	// Returns true if the string starts with substr. Otherwise returns false. The
	// comparison is case sensitive if caseSensitive is true, and case insensitive if caseSensitive is
	// false.
	bool StartsWith(const wchar_t *substr, bool caseSensitive);

	// Converts line endings to CRLF (Windows) format.
	bool ToCRLF(void);

	// Converts line endings to LF-only (UNIX) format.
	bool ToLF(void);

	// Converts the contents to lowercase.
	bool ToLowercase(void);

	// Converts the contents to uppercase.
	bool ToUppercase(void);

	// Trims whitespace from both ends of the string.
	bool Trim(void);

	// Replaces all tabs, CR's, and LF's, with SPACE chars, and removes extra SPACE's
	// so there are no occurances of more than one SPACE char in a row.
	bool TrimInsideSpaces(void);

	// Unobfuscates the string.
	// 
	// The Chilkat string obfuscation algorithm works by taking the utf-8 bytes of the
	// string, base64 encoding it, and then scrambling the letters of the base64
	// encoded string. It is deterministic in that the same string will always
	// obfuscate to the same result. It is not a secure way of encrypting a string. It
	// is only meant to be a simple means of transforming a string into something
	// unintelligible.
	// 
	void Unobfuscate(void);

	// Writes the contents to a file. If emitBom is true, then the BOM (also known as a
	// preamble), is emitted for charsets that define a BOM (such as utf-8, utf-16,
	// utf-32, etc.)
	bool WriteFile(const wchar_t *path, const wchar_t *charset, bool emitBom);

	// Writes the contents to a file, but only if it is a new file or if the contents
	// are different than the existing file. If emitBom is true, then the BOM (also
	// known as a preamble), is emitted for charsets that define a BOM (such as utf-8,
	// utf-16, utf-32, etc.)
	bool WriteFileIfModified(const wchar_t *path, const wchar_t *charset, bool emitBom);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
