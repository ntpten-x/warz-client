// CkCharsetW.h: interface for the CkCharsetW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkCharsetW_H
#define _CkCharsetW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkByteData;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkCharsetW
class CK_VISIBLE_PUBLIC CkCharsetW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkCharsetW(const CkCharsetW &);
	CkCharsetW &operator=(const CkCharsetW &);

    public:
	CkCharsetW(void);
	virtual ~CkCharsetW(void);

	

	static CkCharsetW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Specifies the alternate destination character encoding used only when
	// ErrorAction[1] is 6.
	// 
	// If a decoded input character cannot be represented in ToCharset[2], Chilkat
	// attempts to encode that character using this alternate charset. If the alternate
	// conversion also fails, the character is omitted from the output.
	// 
	// Mixed-encoding output: The result can contain a mixture of byte encodings. Such
	// output is usually unsuitable for interchange unless the receiving format
	// explicitly supports this behavior.
	// 
	// References:
	// [1] #ErrorAction
	// [2] #ToCharset
	void get_AltToCharset(CkString &str);
	// Specifies the alternate destination character encoding used only when
	// ErrorAction[1] is 6.
	// 
	// If a decoded input character cannot be represented in ToCharset[2], Chilkat
	// attempts to encode that character using this alternate charset. If the alternate
	// conversion also fails, the character is omitted from the output.
	// 
	// Mixed-encoding output: The result can contain a mixture of byte encodings. Such
	// output is usually unsuitable for interchange unless the receiving format
	// explicitly supports this behavior.
	// 
	// References:
	// [1] #ErrorAction
	// [2] #ToCharset
	const wchar_t *altToCharset(void);
	// Specifies the alternate destination character encoding used only when
	// ErrorAction[1] is 6.
	// 
	// If a decoded input character cannot be represented in ToCharset[2], Chilkat
	// attempts to encode that character using this alternate charset. If the alternate
	// conversion also fails, the character is omitted from the output.
	// 
	// Mixed-encoding output: The result can contain a mixture of byte encodings. Such
	// output is usually unsuitable for interchange unless the receiving format
	// explicitly supports this behavior.
	// 
	// References:
	// [1] #ErrorAction
	// [2] #ToCharset
	void put_AltToCharset(const wchar_t *newVal);

	// Controls what happens when an input character has been decoded successfully but
	// cannot be represented in the destination charset.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                                Action                                |
	// +=======+======================================================================+
	// | 0     | Drop the unrepresentable character.                                  |
	// +-------+----------------------------------------------------------------------+
	// | 1     | Insert the replacement configured by SetErrorString[1] .             |
	// +-------+----------------------------------------------------------------------+
	// | 2     | Emit a hexadecimal numeric character reference such as € .           |
	// +-------+----------------------------------------------------------------------+
	// | 3 – 5 | Reserved. Do not use.                                                |
	// +-------+----------------------------------------------------------------------+
	// | 6     | Encode the character using AltToCharset[2] ; drop it if that also    |
	// |       | fails.                                                               |
	// +-------+----------------------------------------------------------------------+
	// | 7     | Pass the nonconvertible data through unchanged.                      |
	// +-------+----------------------------------------------------------------------+
	// 
	// Data-integrity warning: Values 0, 6, and 7 can silently lose data or produce
	// output that is not valid in the declared destination charset. For new code,
	// prefer an explicit failure or replacement policy in the replacement API.
	// 
	// References:
	// [1] #SetErrorString
	// [2] #AltToCharset
	int get_ErrorAction(void);
	// Controls what happens when an input character has been decoded successfully but
	// cannot be represented in the destination charset.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                                Action                                |
	// +=======+======================================================================+
	// | 0     | Drop the unrepresentable character.                                  |
	// +-------+----------------------------------------------------------------------+
	// | 1     | Insert the replacement configured by SetErrorString[1] .             |
	// +-------+----------------------------------------------------------------------+
	// | 2     | Emit a hexadecimal numeric character reference such as € .           |
	// +-------+----------------------------------------------------------------------+
	// | 3 – 5 | Reserved. Do not use.                                                |
	// +-------+----------------------------------------------------------------------+
	// | 6     | Encode the character using AltToCharset[2] ; drop it if that also    |
	// |       | fails.                                                               |
	// +-------+----------------------------------------------------------------------+
	// | 7     | Pass the nonconvertible data through unchanged.                      |
	// +-------+----------------------------------------------------------------------+
	// 
	// Data-integrity warning: Values 0, 6, and 7 can silently lose data or produce
	// output that is not valid in the declared destination charset. For new code,
	// prefer an explicit failure or replacement policy in the replacement API.
	// 
	// References:
	// [1] #SetErrorString
	// [2] #AltToCharset
	void put_ErrorAction(int newVal);

	// Specifies the character encoding of the input bytes for conversion operations.
	// Chilkat decodes the source bytes using this charset before encoding the
	// resulting Unicode text using ToCharset[1].
	// 
	// +--------------+---------------------------------------------------------------+
	// |    Family    |                       Recognized names                        |
	// +==============+===============================================================+
	// | Unicode and  | us-ascii , utf-7 , utf-8 , unicode / utf-16 / utf-16le ,      |
	// | ASCII        | unicodefffe / utf-16be , utf-32 , utf-32be                    |
	// +--------------+---------------------------------------------------------------+
	// | ISO and      | iso-8859-1 , -2 , -3 , -4 , -5 , -6 , -7 , -8 , -9 , -13 ,    |
	// | Windows      | -15 ; windows-874 , windows-1250 through windows-1258         |
	// +--------------+---------------------------------------------------------------+
	// | East Asian   | shift_jis , gb2312 , ks_c_5601-1987 , big5 , iso-2022-jp ,    |
	// |              | iso-2022-kr , euc-jp , euc-kr                                 |
	// +--------------+---------------------------------------------------------------+
	// | Macintosh    | macintosh , x-mac-japanese , x-mac-chinesetrad , x-mac-korean |
	// |              | , x-mac-arabic , x-mac-hebrew , x-mac-greek , x-mac-cyrillic  |
	// |              | , x-mac-chinesesimp , x-mac-romanian , x-mac-ukrainian ,      |
	// |              | x-mac-thai , x-mac-ce , x-mac-icelandic , x-mac-turkish ,     |
	// |              | x-mac-croatian                                                |
	// +--------------+---------------------------------------------------------------+
	// | DOS, IBM,    | ebcdic , asmo-708 , dos-720 , dos-862 , ibm01140 through      |
	// | and legacy   | ibm01149 , ibm037 , ibm437 , ibm500 , ibm737 , ibm775 ,       |
	// |              | ibm850 , ibm852 , ibm855 , ibm857 , ibm00858 , ibm860 ,       |
	// |              | ibm861 , ibm863 , ibm864 , ibm865 , cp866 , ibm869 , ibm870 , |
	// |              | cp875 , koi8-r , koi8-u                                       |
	// +--------------+---------------------------------------------------------------+
	// 
	// Source encoding: unicode, utf-16, and utf-16le identify little-endian UTF-16.
	// unicodefffe and utf-16be identify big-endian UTF-16. Except where a method
	// explicitly documents HTML metadata detection, set the source charset explicitly
	// rather than assuming automatic detection.
	// 
	// References:
	// [1] #ToCharset
	void get_FromCharset(CkString &str);
	// Specifies the character encoding of the input bytes for conversion operations.
	// Chilkat decodes the source bytes using this charset before encoding the
	// resulting Unicode text using ToCharset[1].
	// 
	// +--------------+---------------------------------------------------------------+
	// |    Family    |                       Recognized names                        |
	// +==============+===============================================================+
	// | Unicode and  | us-ascii , utf-7 , utf-8 , unicode / utf-16 / utf-16le ,      |
	// | ASCII        | unicodefffe / utf-16be , utf-32 , utf-32be                    |
	// +--------------+---------------------------------------------------------------+
	// | ISO and      | iso-8859-1 , -2 , -3 , -4 , -5 , -6 , -7 , -8 , -9 , -13 ,    |
	// | Windows      | -15 ; windows-874 , windows-1250 through windows-1258         |
	// +--------------+---------------------------------------------------------------+
	// | East Asian   | shift_jis , gb2312 , ks_c_5601-1987 , big5 , iso-2022-jp ,    |
	// |              | iso-2022-kr , euc-jp , euc-kr                                 |
	// +--------------+---------------------------------------------------------------+
	// | Macintosh    | macintosh , x-mac-japanese , x-mac-chinesetrad , x-mac-korean |
	// |              | , x-mac-arabic , x-mac-hebrew , x-mac-greek , x-mac-cyrillic  |
	// |              | , x-mac-chinesesimp , x-mac-romanian , x-mac-ukrainian ,      |
	// |              | x-mac-thai , x-mac-ce , x-mac-icelandic , x-mac-turkish ,     |
	// |              | x-mac-croatian                                                |
	// +--------------+---------------------------------------------------------------+
	// | DOS, IBM,    | ebcdic , asmo-708 , dos-720 , dos-862 , ibm01140 through      |
	// | and legacy   | ibm01149 , ibm037 , ibm437 , ibm500 , ibm737 , ibm775 ,       |
	// |              | ibm850 , ibm852 , ibm855 , ibm857 , ibm00858 , ibm860 ,       |
	// |              | ibm861 , ibm863 , ibm864 , ibm865 , cp866 , ibm869 , ibm870 , |
	// |              | cp875 , koi8-r , koi8-u                                       |
	// +--------------+---------------------------------------------------------------+
	// 
	// Source encoding: unicode, utf-16, and utf-16le identify little-endian UTF-16.
	// unicodefffe and utf-16be identify big-endian UTF-16. Except where a method
	// explicitly documents HTML metadata detection, set the source charset explicitly
	// rather than assuming automatic detection.
	// 
	// References:
	// [1] #ToCharset
	const wchar_t *fromCharset(void);
	// Specifies the character encoding of the input bytes for conversion operations.
	// Chilkat decodes the source bytes using this charset before encoding the
	// resulting Unicode text using ToCharset[1].
	// 
	// +--------------+---------------------------------------------------------------+
	// |    Family    |                       Recognized names                        |
	// +==============+===============================================================+
	// | Unicode and  | us-ascii , utf-7 , utf-8 , unicode / utf-16 / utf-16le ,      |
	// | ASCII        | unicodefffe / utf-16be , utf-32 , utf-32be                    |
	// +--------------+---------------------------------------------------------------+
	// | ISO and      | iso-8859-1 , -2 , -3 , -4 , -5 , -6 , -7 , -8 , -9 , -13 ,    |
	// | Windows      | -15 ; windows-874 , windows-1250 through windows-1258         |
	// +--------------+---------------------------------------------------------------+
	// | East Asian   | shift_jis , gb2312 , ks_c_5601-1987 , big5 , iso-2022-jp ,    |
	// |              | iso-2022-kr , euc-jp , euc-kr                                 |
	// +--------------+---------------------------------------------------------------+
	// | Macintosh    | macintosh , x-mac-japanese , x-mac-chinesetrad , x-mac-korean |
	// |              | , x-mac-arabic , x-mac-hebrew , x-mac-greek , x-mac-cyrillic  |
	// |              | , x-mac-chinesesimp , x-mac-romanian , x-mac-ukrainian ,      |
	// |              | x-mac-thai , x-mac-ce , x-mac-icelandic , x-mac-turkish ,     |
	// |              | x-mac-croatian                                                |
	// +--------------+---------------------------------------------------------------+
	// | DOS, IBM,    | ebcdic , asmo-708 , dos-720 , dos-862 , ibm01140 through      |
	// | and legacy   | ibm01149 , ibm037 , ibm437 , ibm500 , ibm737 , ibm775 ,       |
	// |              | ibm850 , ibm852 , ibm855 , ibm857 , ibm00858 , ibm860 ,       |
	// |              | ibm861 , ibm863 , ibm864 , ibm865 , cp866 , ibm869 , ibm870 , |
	// |              | cp875 , koi8-r , koi8-u                                       |
	// +--------------+---------------------------------------------------------------+
	// 
	// Source encoding: unicode, utf-16, and utf-16le identify little-endian UTF-16.
	// unicodefffe and utf-16be identify big-endian UTF-16. Except where a method
	// explicitly documents HTML metadata detection, set the source charset explicitly
	// rather than assuming automatic detection.
	// 
	// References:
	// [1] #ToCharset
	void put_FromCharset(const wchar_t *newVal);

	// Returns the input bytes captured for the most recent conversion performed while
	// SaveLast[1] was enabled, represented as hexadecimal text.
	// 
	// Diagnostic snapshot: This is a diagnostic representation of the raw bytes. It
	// does not perform another charset conversion, and the quoted-printable form is
	// intended to make otherwise nonprintable bytes easier to inspect.
	// 
	// References:
	// [1] #SaveLast
	void get_LastInputAsHex(CkString &str);
	// Returns the input bytes captured for the most recent conversion performed while
	// SaveLast[1] was enabled, represented as hexadecimal text.
	// 
	// Diagnostic snapshot: This is a diagnostic representation of the raw bytes. It
	// does not perform another charset conversion, and the quoted-printable form is
	// intended to make otherwise nonprintable bytes easier to inspect.
	// 
	// References:
	// [1] #SaveLast
	const wchar_t *lastInputAsHex(void);

	// Returns the input bytes captured for the most recent conversion performed while
	// SaveLast[1] was enabled, represented as quoted-printable text.
	// 
	// Diagnostic snapshot: This is a diagnostic representation of the raw bytes. It
	// does not perform another charset conversion, and the quoted-printable form is
	// intended to make otherwise nonprintable bytes easier to inspect.
	// 
	// References:
	// [1] #SaveLast
	void get_LastInputAsQP(CkString &str);
	// Returns the input bytes captured for the most recent conversion performed while
	// SaveLast[1] was enabled, represented as quoted-printable text.
	// 
	// Diagnostic snapshot: This is a diagnostic representation of the raw bytes. It
	// does not perform another charset conversion, and the quoted-printable form is
	// intended to make otherwise nonprintable bytes easier to inspect.
	// 
	// References:
	// [1] #SaveLast
	const wchar_t *lastInputAsQP(void);

	// Returns the output bytes captured for the most recent conversion performed while
	// SaveLast[1] was enabled, represented as hexadecimal text.
	// 
	// Diagnostic snapshot: This is a diagnostic representation of the raw bytes. It
	// does not perform another charset conversion, and the quoted-printable form is
	// intended to make otherwise nonprintable bytes easier to inspect.
	// 
	// References:
	// [1] #SaveLast
	void get_LastOutputAsHex(CkString &str);
	// Returns the output bytes captured for the most recent conversion performed while
	// SaveLast[1] was enabled, represented as hexadecimal text.
	// 
	// Diagnostic snapshot: This is a diagnostic representation of the raw bytes. It
	// does not perform another charset conversion, and the quoted-printable form is
	// intended to make otherwise nonprintable bytes easier to inspect.
	// 
	// References:
	// [1] #SaveLast
	const wchar_t *lastOutputAsHex(void);

	// Returns the output bytes captured for the most recent conversion performed while
	// SaveLast[1] was enabled, represented as quoted-printable text.
	// 
	// Diagnostic snapshot: This is a diagnostic representation of the raw bytes. It
	// does not perform another charset conversion, and the quoted-printable form is
	// intended to make otherwise nonprintable bytes easier to inspect.
	// 
	// References:
	// [1] #SaveLast
	void get_LastOutputAsQP(CkString &str);
	// Returns the output bytes captured for the most recent conversion performed while
	// SaveLast[1] was enabled, represented as quoted-printable text.
	// 
	// Diagnostic snapshot: This is a diagnostic representation of the raw bytes. It
	// does not perform another charset conversion, and the quoted-printable form is
	// intended to make otherwise nonprintable bytes easier to inspect.
	// 
	// References:
	// [1] #SaveLast
	const wchar_t *lastOutputAsQP(void);

	// When true, retains the input and output byte sequences from each conversion so
	// they can be inspected through LastInputAsHex[1], LastInputAsQP[2],
	// LastOutputAsHex[3], and LastOutputAsQP[4].
	// 
	// Debugging only: Enable this only while troubleshooting. Retaining both sides of
	// a large conversion increases memory use and may keep sensitive plaintext in
	// memory longer than necessary.
	// 
	// References:
	// [1] #LastInputAsHex
	// [2] #LastInputAsQP
	// [3] #LastOutputAsHex
	// [4] #LastOutputAsQP
	bool get_SaveLast(void);
	// When true, retains the input and output byte sequences from each conversion so
	// they can be inspected through LastInputAsHex[1], LastInputAsQP[2],
	// LastOutputAsHex[3], and LastOutputAsQP[4].
	// 
	// Debugging only: Enable this only while troubleshooting. Retaining both sides of
	// a large conversion increases memory use and may keep sensitive plaintext in
	// memory longer than necessary.
	// 
	// References:
	// [1] #LastInputAsHex
	// [2] #LastInputAsQP
	// [3] #LastOutputAsHex
	// [4] #LastOutputAsQP
	void put_SaveLast(bool newVal);

	// Specifies the destination character encoding for conversion operations. After
	// decoding the source bytes using FromCharset[1], Chilkat encodes the resulting
	// Unicode text in this charset.
	// 
	// +--------------+---------------------------------------------------------------+
	// |    Family    |                       Recognized names                        |
	// +==============+===============================================================+
	// | Unicode and  | us-ascii , utf-7 , utf-8 , unicode / utf-16 / utf-16le ,      |
	// | ASCII        | unicodefffe / utf-16be , utf-32 , utf-32be                    |
	// +--------------+---------------------------------------------------------------+
	// | ISO and      | iso-8859-1 , -2 , -3 , -4 , -5 , -6 , -7 , -8 , -9 , -13 ,    |
	// | Windows      | -15 ; windows-874 , windows-1250 through windows-1258         |
	// +--------------+---------------------------------------------------------------+
	// | East Asian   | shift_jis , gb2312 , ks_c_5601-1987 , big5 , iso-2022-jp ,    |
	// |              | iso-2022-kr , euc-jp , euc-kr                                 |
	// +--------------+---------------------------------------------------------------+
	// | Macintosh    | macintosh , x-mac-japanese , x-mac-chinesetrad , x-mac-korean |
	// |              | , x-mac-arabic , x-mac-hebrew , x-mac-greek , x-mac-cyrillic  |
	// |              | , x-mac-chinesesimp , x-mac-romanian , x-mac-ukrainian ,      |
	// |              | x-mac-thai , x-mac-ce , x-mac-icelandic , x-mac-turkish ,     |
	// |              | x-mac-croatian                                                |
	// +--------------+---------------------------------------------------------------+
	// | DOS, IBM,    | ebcdic , asmo-708 , dos-720 , dos-862 , ibm01140 through      |
	// | and legacy   | ibm01149 , ibm037 , ibm437 , ibm500 , ibm737 , ibm775 ,       |
	// |              | ibm850 , ibm852 , ibm855 , ibm857 , ibm00858 , ibm860 ,       |
	// |              | ibm861 , ibm863 , ibm864 , ibm865 , cp866 , ibm869 , ibm870 , |
	// |              | cp875 , koi8-r , koi8-u                                       |
	// +--------------+---------------------------------------------------------------+
	// 
	// Choosing an output encoding: For new text interchange, utf-8 is normally the
	// preferred destination. Legacy single-byte encodings cannot represent every
	// Unicode character; ErrorAction[2] controls how such conversion failures are
	// handled.
	// 
	// References:
	// [1] #FromCharset
	// [2] #ErrorAction
	void get_ToCharset(CkString &str);
	// Specifies the destination character encoding for conversion operations. After
	// decoding the source bytes using FromCharset[1], Chilkat encodes the resulting
	// Unicode text in this charset.
	// 
	// +--------------+---------------------------------------------------------------+
	// |    Family    |                       Recognized names                        |
	// +==============+===============================================================+
	// | Unicode and  | us-ascii , utf-7 , utf-8 , unicode / utf-16 / utf-16le ,      |
	// | ASCII        | unicodefffe / utf-16be , utf-32 , utf-32be                    |
	// +--------------+---------------------------------------------------------------+
	// | ISO and      | iso-8859-1 , -2 , -3 , -4 , -5 , -6 , -7 , -8 , -9 , -13 ,    |
	// | Windows      | -15 ; windows-874 , windows-1250 through windows-1258         |
	// +--------------+---------------------------------------------------------------+
	// | East Asian   | shift_jis , gb2312 , ks_c_5601-1987 , big5 , iso-2022-jp ,    |
	// |              | iso-2022-kr , euc-jp , euc-kr                                 |
	// +--------------+---------------------------------------------------------------+
	// | Macintosh    | macintosh , x-mac-japanese , x-mac-chinesetrad , x-mac-korean |
	// |              | , x-mac-arabic , x-mac-hebrew , x-mac-greek , x-mac-cyrillic  |
	// |              | , x-mac-chinesesimp , x-mac-romanian , x-mac-ukrainian ,      |
	// |              | x-mac-thai , x-mac-ce , x-mac-icelandic , x-mac-turkish ,     |
	// |              | x-mac-croatian                                                |
	// +--------------+---------------------------------------------------------------+
	// | DOS, IBM,    | ebcdic , asmo-708 , dos-720 , dos-862 , ibm01140 through      |
	// | and legacy   | ibm01149 , ibm037 , ibm437 , ibm500 , ibm737 , ibm775 ,       |
	// |              | ibm850 , ibm852 , ibm855 , ibm857 , ibm00858 , ibm860 ,       |
	// |              | ibm861 , ibm863 , ibm864 , ibm865 , cp866 , ibm869 , ibm870 , |
	// |              | cp875 , koi8-r , koi8-u                                       |
	// +--------------+---------------------------------------------------------------+
	// 
	// Choosing an output encoding: For new text interchange, utf-8 is normally the
	// preferred destination. Legacy single-byte encodings cannot represent every
	// Unicode character; ErrorAction[2] controls how such conversion failures are
	// handled.
	// 
	// References:
	// [1] #FromCharset
	// [2] #ErrorAction
	const wchar_t *toCharset(void);
	// Specifies the destination character encoding for conversion operations. After
	// decoding the source bytes using FromCharset[1], Chilkat encodes the resulting
	// Unicode text in this charset.
	// 
	// +--------------+---------------------------------------------------------------+
	// |    Family    |                       Recognized names                        |
	// +==============+===============================================================+
	// | Unicode and  | us-ascii , utf-7 , utf-8 , unicode / utf-16 / utf-16le ,      |
	// | ASCII        | unicodefffe / utf-16be , utf-32 , utf-32be                    |
	// +--------------+---------------------------------------------------------------+
	// | ISO and      | iso-8859-1 , -2 , -3 , -4 , -5 , -6 , -7 , -8 , -9 , -13 ,    |
	// | Windows      | -15 ; windows-874 , windows-1250 through windows-1258         |
	// +--------------+---------------------------------------------------------------+
	// | East Asian   | shift_jis , gb2312 , ks_c_5601-1987 , big5 , iso-2022-jp ,    |
	// |              | iso-2022-kr , euc-jp , euc-kr                                 |
	// +--------------+---------------------------------------------------------------+
	// | Macintosh    | macintosh , x-mac-japanese , x-mac-chinesetrad , x-mac-korean |
	// |              | , x-mac-arabic , x-mac-hebrew , x-mac-greek , x-mac-cyrillic  |
	// |              | , x-mac-chinesesimp , x-mac-romanian , x-mac-ukrainian ,      |
	// |              | x-mac-thai , x-mac-ce , x-mac-icelandic , x-mac-turkish ,     |
	// |              | x-mac-croatian                                                |
	// +--------------+---------------------------------------------------------------+
	// | DOS, IBM,    | ebcdic , asmo-708 , dos-720 , dos-862 , ibm01140 through      |
	// | and legacy   | ibm01149 , ibm037 , ibm437 , ibm500 , ibm737 , ibm775 ,       |
	// |              | ibm850 , ibm852 , ibm855 , ibm857 , ibm00858 , ibm860 ,       |
	// |              | ibm861 , ibm863 , ibm864 , ibm865 , cp866 , ibm869 , ibm870 , |
	// |              | cp875 , koi8-r , koi8-u                                       |
	// +--------------+---------------------------------------------------------------+
	// 
	// Choosing an output encoding: For new text interchange, utf-8 is normally the
	// preferred destination. Legacy single-byte encodings cannot represent every
	// Unicode character; ErrorAction[2] controls how such conversion failures are
	// handled.
	// 
	// References:
	// [1] #FromCharset
	// [2] #ErrorAction
	void put_ToCharset(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Returns the numeric Windows code-page identifier corresponding to charsetName. For
	// example, iso-8859-1 maps to 28591, and utf-8 maps to 65001.
	// 
	// Code pages: A code page number is a legacy Windows identifier for a character
	// encoding. Internet protocols and modern APIs normally use charset names such as
	// utf-8 rather than numeric code pages.
	int CharsetToCodePage(const wchar_t *charsetName);

	// Returns the charset name corresponding to the numeric code-page identifier in
	// codePage. For example, 65001 maps to utf-8. The operation fails when the code page
	// is not recognized.
	// 
	// Name normalization: Different aliases can identify the same encoding. The
	// returned value is Chilkat’s canonical name for the recognized code page, not
	// necessarily the alias originally used by another application.
	bool CodePageToCharset(int codePage, CkString &outCharset);
	// Returns the charset name corresponding to the numeric code-page identifier in
	// codePage. For example, 65001 maps to utf-8. The operation fails when the code page
	// is not recognized.
	// 
	// Name normalization: Different aliases can identify the same encoding. The
	// returned value is Chilkat’s canonical name for the recognized code page, not
	// necessarily the alias originally used by another application.
	const wchar_t *codePageToCharset(int codePage);

	// Converts the bytes in inData from FromCharset[1] to ToCharset[2] and returns the
	// converted bytes.
	// 
	// 
	// References:
	// [1] #FromCharset
	// [2] #ToCharset
	bool ConvertData(CkByteData &inData, CkByteData &outData);

	// Reads the file at inPath, converts its text from FromCharset[1] to ToCharset[2],
	// and writes the converted bytes to the file at destPath.
	// 
	// When the destination charset is utf-8 or utf-16, this method writes the
	// corresponding byte-order mark (BOM) at the beginning of the output. Use
	// ConvertFileNoPreamble[3] when the output must not contain a BOM.
	// 
	// BOM behavior: A BOM is a leading byte sequence that can identify a Unicode
	// encoding or byte order. UTF-8 does not require a BOM, and many modern formats
	// prefer UTF-8 without one.
	// 
	// References:
	// [1] #FromCharset
	// [2] #ToCharset
	// [3] #ConvertFileNoPreamble
	bool ConvertFile(const wchar_t *inPath, const wchar_t *destPath);

	// Reads the file at inPath, converts its text from FromCharset[1] to ToCharset[2],
	// and writes the converted bytes to destPath without adding a byte-order mark or other
	// encoding preamble.
	// 
	// UTF-8 output: This is generally the appropriate choice for UTF-8 files unless
	// the consuming system specifically requires a UTF-8 BOM.
	// 
	// References:
	// [1] #FromCharset
	// [2] #ToCharset
	bool ConvertFileNoPreamble(const wchar_t *inPath, const wchar_t *destPath);

	// Encodes the Unicode string in inData using ToCharset[1] and returns the resulting
	// bytes.
	// 
	// 
	// References:
	// [1] #ToCharset
	bool ConvertFromUnicode(const wchar_t *inData, CkByteData &outBytes);

	// Converts the UTF-16 byte sequence in uniData to the character encoding specified by
	// ToCharset[1] and returns the resulting bytes.
	// 
	// 
	// References:
	// [1] #ToCharset
	bool ConvertFromUtf16(CkByteData &uniData, CkByteData &outMbData);

	// Converts HTML bytes in inData from FromCharset[1] to ToCharset[2]. The returned
	// bytes contain the converted HTML, and Chilkat updates the HTML <meta> charset
	// declaration to identify the destination encoding.
	// 
	// HTML charset declarations: Updating a <meta charset> declaration does not change
	// HTTP response headers. When serving the converted file over HTTP, the server’s
	// Content-Type charset must agree with the actual bytes.
	// 
	// References:
	// [1] #FromCharset
	// [2] #ToCharset
	bool ConvertHtml(CkByteData &inData, CkByteData &outHtml);

	// Converts the HTML file at inPath to ToCharset[1] and writes the result to destPath.
	// Chilkat also updates the HTML <meta> charset declaration to identify the
	// destination encoding.
	// 
	// If FromCharset[2] is empty, Chilkat attempts to obtain the source charset from
	// an HTML <meta> declaration. Otherwise, the explicitly configured source charset
	// is used.
	// 
	// Detection limitation: A declared charset is metadata, not proof of the file’s
	// actual encoding. Incorrect or missing declarations can cause decoding errors;
	// use an explicit source charset when it is known.
	// 
	// References:
	// [1] #ToCharset
	// [2] #FromCharset
	bool ConvertHtmlFile(const wchar_t *inPath, const wchar_t *destPath);

	// Decodes the bytes in inData using FromCharset[1] and returns the resulting Unicode
	// string.
	// 
	// 
	// References:
	// [1] #FromCharset
	bool ConvertToUnicode(CkByteData &inData, CkString &outStr);
	// Decodes the bytes in inData using FromCharset[1] and returns the resulting Unicode
	// string.
	// 
	// 
	// References:
	// [1] #FromCharset
	const wchar_t *convertToUnicode(CkByteData &inData);

	// Decodes the bytes in mbData using FromCharset[1] and returns the text encoded as
	// UTF-16 bytes.
	// 
	// 
	// References:
	// [1] #FromCharset
	bool ConvertToUtf16(CkByteData &mbData, CkByteData &outUniData);

	// Returns str with each non-US-ASCII character replaced by a decimal HTML/XML
	// numeric character reference. For example, é becomes é.
	// 
	// Entity encoding: Numeric character references describe Unicode characters; they
	// are not a character-set conversion and do not make arbitrary binary data safe
	// for HTML.
	bool EntityEncodeDec(const wchar_t *str, CkString &outStr);
	// Returns str with each non-US-ASCII character replaced by a decimal HTML/XML
	// numeric character reference. For example, é becomes é.
	// 
	// Entity encoding: Numeric character references describe Unicode characters; they
	// are not a character-set conversion and do not make arbitrary binary data safe
	// for HTML.
	const wchar_t *entityEncodeDec(const wchar_t *str);

	// Returns str with each non-US-ASCII character replaced by a hexadecimal HTML/XML
	// numeric character reference. For example, é becomes é.
	// 
	// Entity encoding: Decimal and hexadecimal numeric references represent the same
	// Unicode character; only the textual notation differs.
	bool EntityEncodeHex(const wchar_t *str, CkString &outStr);
	// Returns str with each non-US-ASCII character replaced by a hexadecimal HTML/XML
	// numeric character reference. For example, é becomes é.
	// 
	// Entity encoding: Decimal and hexadecimal numeric references represent the same
	// Unicode character; only the textual notation differs.
	const wchar_t *entityEncodeHex(const wchar_t *str);

	// Examines the HTML bytes in inData and returns the charset name declared by an HTML
	// <meta> element, when present.
	// 
	// Metadata only: This reports the declaration found in the document. It does not
	// verify that the bytes actually use that encoding, and it does not inspect an
	// HTTP Content-Type header.
	bool GetHtmlCharset(CkByteData &inData, CkString &outCharset);
	// Examines the HTML bytes in inData and returns the charset name declared by an HTML
	// <meta> element, when present.
	// 
	// Metadata only: This reports the declaration found in the document. It does not
	// verify that the bytes actually use that encoding, and it does not inspect an
	// HTTP Content-Type header.
	const wchar_t *getHtmlCharset(CkByteData &inData);
	// Examines the HTML bytes in inData and returns the charset name declared by an HTML
	// <meta> element, when present.
	// 
	// Metadata only: This reports the declaration found in the document. It does not
	// verify that the bytes actually use that encoding, and it does not inspect an
	// HTTP Content-Type header.
	const wchar_t *htmlCharset(CkByteData &inData);

	// Examines the HTML file at htmlFilePath and returns the charset name declared by an HTML
	// <meta> element, when present.
	// 
	// Metadata only: The method reads document metadata only. A missing, stale, or
	// incorrect declaration does not reveal the file’s true encoding.
	bool GetHtmlFileCharset(const wchar_t *htmlFilePath, CkString &outCharset);
	// Examines the HTML file at htmlFilePath and returns the charset name declared by an HTML
	// <meta> element, when present.
	// 
	// Metadata only: The method reads document metadata only. A missing, stale, or
	// incorrect declaration does not reveal the file’s true encoding.
	const wchar_t *getHtmlFileCharset(const wchar_t *htmlFilePath);
	// Examines the HTML file at htmlFilePath and returns the charset name declared by an HTML
	// <meta> element, when present.
	// 
	// Metadata only: The method reads document metadata only. A missing, stale, or
	// incorrect declaration does not reveal the file’s true encoding.
	const wchar_t *htmlFileCharset(const wchar_t *htmlFilePath);

	// Decodes HTML named entities and numeric character references in inStr and returns
	// the resulting Unicode string. Examples include <, &, é, and é.
	// 
	// Security context: Entity decoding is a text transformation, not HTML parsing or
	// sanitization. Decoding untrusted text can reintroduce markup-significant
	// characters such as <, >, and &.
	bool HtmlDecodeToStr(const wchar_t *inStr, CkString &outStr);
	// Decodes HTML named entities and numeric character references in inStr and returns
	// the resulting Unicode string. Examples include <, &, é, and é.
	// 
	// Security context: Entity decoding is a text transformation, not HTML parsing or
	// sanitization. Decoding untrusted text can reintroduce markup-significant
	// characters such as <, >, and &.
	const wchar_t *htmlDecodeToStr(const wchar_t *inStr);

	// Decodes HTML entities and numeric character references in the byte data supplied
	// in inHtml and returns the resulting bytes.
	// 
	// Operation scope: Entity decoding is not a charset conversion and does not
	// sanitize HTML.
	bool HtmlEntityDecode(CkByteData &inHtml, CkByteData &outData);

	// Reads the file at inPath, decodes HTML named entities and numeric character
	// references, and writes the transformed content to destPath.
	// 
	// Content transformation: The output may contain literal markup-significant
	// characters that were previously escaped. This operation does not parse,
	// validate, or sanitize HTML.
	bool HtmlEntityDecodeFile(const wchar_t *inPath, const wchar_t *destPath);

	// Returns the lowercase form of inStr using Chilkat’s Unicode case conversion.
	// 
	// Unicode casing: Case conversion can change string length and is not the same
	// operation as locale-aware collation or case-insensitive comparison.
	bool LowerCase(const wchar_t *inStr, CkString &outStr);
	// Returns the lowercase form of inStr using Chilkat’s Unicode case conversion.
	// 
	// Unicode casing: Case conversion can change string length and is not the same
	// operation as locale-aware collation or case-insensitive comparison.
	const wchar_t *lowerCase(const wchar_t *inStr);

	// Reads the entire file at path and returns its raw bytes without performing
	// charset conversion.
	// 
	bool ReadFile(const wchar_t *path, CkByteData &outData);

	// Reads the text file at path, decodes its bytes using the charset named by charset,
	// and returns the resulting Unicode string.
	// 
	// Charset must match the file: The caller must supply the actual source encoding.
	// Choosing the wrong charset can produce replacement characters or silently
	// incorrect text even when the file can be decoded.
	bool ReadFileToString(const wchar_t *path, const wchar_t *charset, CkString &outStr);
	// Reads the text file at path, decodes its bytes using the charset named by charset,
	// and returns the resulting Unicode string.
	// 
	// Charset must match the file: The caller must supply the actual source encoding.
	// Choosing the wrong charset can produce replacement characters or silently
	// incorrect text even when the file can be decoded.
	const wchar_t *readFileToString(const wchar_t *path, const wchar_t *charset);

	// Configures the replacement used when ErrorAction[1] is 1. str is the
	// replacement text, and charset identifies the charset used to encode that
	// replacement into the conversion output.
	// 
	// Replacement behavior: Choose replacement text that is representable in the
	// specified charset. A common replacement is?, but explicit error handling is
	// safer when data loss is unacceptable.
	// 
	// References:
	// [1] #ErrorAction
	void SetErrorString(const wchar_t *str, const wchar_t *charset);

	// Returns the uppercase form of inStr using Chilkat’s Unicode case conversion.
	// 
	// Unicode casing: Case conversion can change string length and is not the same
	// operation as locale-aware collation or case-insensitive comparison.
	bool UpperCase(const wchar_t *inStr, CkString &outStr);
	// Returns the uppercase form of inStr using Chilkat’s Unicode case conversion.
	// 
	// Unicode casing: Case conversion can change string length and is not the same
	// operation as locale-aware collation or case-insensitive comparison.
	const wchar_t *upperCase(const wchar_t *inStr);

	// Percent-decodes inStr and interprets the resulting bytes using the platform’s
	// legacy ANSI character encoding.
	// 
	// For example, in a Western Windows code page,%C9 may decode as É. UTF-8 input
	// would encode the same character as%C3%89 and is therefore not handled correctly
	// by this legacy assumption.
	// 
	// Legacy ANSI behavior: Do not use this method for modern URLs or form data unless
	// the data is known to use the applicable ANSI code page. Use StringBuilder URL
	// decoding with an explicit charset, normally utf-8.
	bool UrlDecodeStr(const wchar_t *inStr, CkString &outStr);
	// Percent-decodes inStr and interprets the resulting bytes using the platform’s
	// legacy ANSI character encoding.
	// 
	// For example, in a Western Windows code page,%C9 may decode as É. UTF-8 input
	// would encode the same character as%C3%89 and is therefore not handled correctly
	// by this legacy assumption.
	// 
	// Legacy ANSI behavior: Do not use this method for modern URLs or form data unless
	// the data is known to use the applicable ANSI code page. Use StringBuilder URL
	// decoding with an explicit charset, normally utf-8.
	const wchar_t *urlDecodeStr(const wchar_t *inStr);

	// Returns true when the bytes in inData form a valid sequence for the charset
	// named by charset; otherwise returns false.
	// 
	// What validation means: This checks encoding validity only. It does not prove
	// that the selected charset is the intended one. For many single-byte encodings,
	// every possible byte value is valid.
	bool VerifyData(const wchar_t *charset, CkByteData &inData);

	// Returns true when the contents of the file at path form a valid byte sequence
	// for the charset named by charset; otherwise returns false.
	// 
	// Validation limitation: A successful result means only that the bytes are
	// structurally valid for that encoding. It does not identify the encoding or
	// confirm that the decoded text is semantically correct.
	bool VerifyFile(const wchar_t *charset, const wchar_t *path);

	// Writes all bytes from byteData to the file at path without performing charset
	// conversion.
	// 
	bool WriteFile(const wchar_t *path, CkByteData &byteData);

	// Encodes the Unicode text in textData using the charset named by charset and writes the
	// resulting bytes to the file at path.
	// 
	// Destination encoding: The charset argument is the third parameter. Select utf-8
	// for modern interchange unless a receiving system requires a specific legacy
	// encoding.
	bool WriteStringToFile(const wchar_t *textData, const wchar_t *path, const wchar_t *charset);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
