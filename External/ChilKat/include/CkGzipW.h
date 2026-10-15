// CkGzipW.h: interface for the CkGzipW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkGzipW_H
#define _CkGzipW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkBinDataW;
class CkTaskW;
class CkByteData;
class CkStringBuilderW;
class CkDateTimeW;
class CkJsonObjectW;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkGzipW
class CK_VISIBLE_PUBLIC CkGzipW  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkGzipW(const CkGzipW &);
	CkGzipW &operator=(const CkGzipW &);

    public:
	CkGzipW(void);
	virtual ~CkGzipW(void);

	

	static CkGzipW *createNew(void);
	

	CkGzipW(bool bCallbackOwned);
	static CkGzipW *createNew(bool bCallbackOwned);

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkBaseProgressW *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgressW *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Set this property to true to request that the currently running operation be
	// aborted. This is useful for long-running operations such as large file
	// compression or decompression. Methods that complete quickly are generally not
	// affected.
	// 
	// If no method is currently running, the property is automatically reset to
	// false when the next method begins. After an abort occurs, it is also reset to
	// false. Both synchronous and asynchronous operations can be aborted. For
	// synchronous calls, another thread must set this property.
	// 
	bool get_AbortCurrent(void);
	// Set this property to true to request that the currently running operation be
	// aborted. This is useful for long-running operations such as large file
	// compression or decompression. Methods that complete quickly are generally not
	// affected.
	// 
	// If no method is currently running, the property is automatically reset to
	// false when the next method begins. After an abort occurs, it is also reset to
	// false. Both synchronous and asynchronous operations can be aborted. For
	// synchronous calls, another thread must set this property.
	// 
	void put_AbortCurrent(bool newVal);

	// An optional comment to embed in the Gzip file when a Compress* method is called.
	// 
	void get_Comment(CkString &str);
	// An optional comment to embed in the Gzip file when a Compress* method is called.
	// 
	const wchar_t *comment(void);
	// An optional comment to embed in the Gzip file when a Compress* method is called.
	// 
	void put_Comment(const wchar_t *newVal);

	// Controls the compression level used when creating Gzip data. The value can range
	// from 0 to 9.
	// 
	//     * 0 = no compression
	//     * 9 = maximum compression
	// 
	// The default value is 6, which is a typical balance between compression size and
	// speed. Higher levels may take significantly more CPU time while producing only
	// slightly smaller output, depending on the data.
	// 
	int get_CompressionLevel(void);
	// Controls the compression level used when creating Gzip data. The value can range
	// from 0 to 9.
	// 
	//     * 0 = no compression
	//     * 9 = maximum compression
	// 
	// The default value is 6, which is a typical balance between compression size and
	// speed. Higher levels may take significantly more CPU time while producing only
	// slightly smaller output, depending on the data.
	// 
	void put_CompressionLevel(int newVal);

	// The filename to embed in the Gzip file when a Compress* method is called. Some
	// Gzip extraction tools use this embedded filename as the default output filename.
	// 
	void get_Filename(CkString &str);
	// The filename to embed in the Gzip file when a Compress* method is called. Some
	// Gzip extraction tools use this embedded filename as the default output filename.
	// 
	const wchar_t *filename(void);
	// The filename to embed in the Gzip file when a Compress* method is called. Some
	// Gzip extraction tools use this embedded filename as the default output filename.
	// 
	void put_Filename(const wchar_t *newVal);

	// Specifies the interval, in milliseconds, between AbortCheck event callbacks.
	// These callbacks allow an application to cancel certain long-running operations
	// before they finish.
	// 
	// The default value is 0, which means no AbortCheck callbacks are triggered.
	// 
	int get_HeartbeatMs(void);
	// Specifies the interval, in milliseconds, between AbortCheck event callbacks.
	// These callbacks allow an application to cancel certain long-running operations
	// before they finish.
	// 
	// The default value is 0, which means no AbortCheck callbacks are triggered.
	// 
	void put_HeartbeatMs(int newVal);

	// Specifies the last-modified date/time to embed in the Gzip file when a Compress*
	// method is called.
	// 
	// The value must be provided as an RFC 822 formatted date/time string.
	// 
	// Example:
	// 
	// Sun, 12 Apr 2026 12:45:26 GMT
	// 
	// If this property is not set, the current system date/time is used automatically.
	// 
	void get_LastModStr(CkString &str);
	// Specifies the last-modified date/time to embed in the Gzip file when a Compress*
	// method is called.
	// 
	// The value must be provided as an RFC 822 formatted date/time string.
	// 
	// Example:
	// 
	// Sun, 12 Apr 2026 12:45:26 GMT
	// 
	// If this property is not set, the current system date/time is used automatically.
	// 
	const wchar_t *lastModStr(void);
	// Specifies the last-modified date/time to embed in the Gzip file when a Compress*
	// method is called.
	// 
	// The value must be provided as an RFC 822 formatted date/time string.
	// 
	// Example:
	// 
	// Sun, 12 Apr 2026 12:45:26 GMT
	// 
	// If this property is not set, the current system date/time is used automatically.
	// 
	void put_LastModStr(const wchar_t *newVal);

	// Controls the last-modified date/time assigned to files created by Uncompress*
	// methods.
	// 
	// When set to true, the extracted file uses the current date/time instead of the
	// date/time stored in the Gzip data.
	// 
	bool get_UseCurrentDate(void);
	// Controls the last-modified date/time assigned to files created by Uncompress*
	// methods.
	// 
	// When set to true, the extracted file uses the current date/time instead of the
	// date/time stored in the Gzip data.
	// 
	void put_UseCurrentDate(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Compresses the contents of a BinData object in place, replacing the original
	// data with Gzip-compressed data.
	// 
	bool CompressBd(CkBinDataW &binDat);

	// Creates an asynchronous task to call the CompressBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressBdAsync(CkBinDataW &binDat);

	// Compresses a file and writes the result as a Gzip file, typically with a.gz
	// extension.
	// 
	bool CompressFile(const wchar_t *srcPath, const wchar_t *destPath);

	// Creates an asynchronous task to call the CompressFile method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressFileAsync(const wchar_t *srcPath, const wchar_t *destPath);

	// Compresses a file and writes the result as a Gzip file, while allowing a
	// different filename to be embedded inside the Gzip data.
	// 
	// The inFilename parameter is the actual file on disk. The srcPath parameter is the
	// filename stored in the Gzip header and may be used by extraction tools as the
	// output filename.
	// 
	bool CompressFile2(const wchar_t *srcPath, const wchar_t *embeddedFilename, const wchar_t *destPath);

	// Creates an asynchronous task to call the CompressFile2 method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressFile2Async(const wchar_t *srcPath, const wchar_t *embeddedFilename, const wchar_t *destPath);

	// Compresses a file and stores the resulting Gzip data in a BinData object.
	// 
	// The compressed output is held in memory. The maximum compressed size is 4 GB.
	// 
	bool CompressFileBd(const wchar_t *filePath, CkBinDataW &bd);

	// Creates an asynchronous task to call the CompressFileBd method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressFileBdAsync(const wchar_t *filePath, CkBinDataW &bd);

	// Compresses a file and returns the resulting Gzip data as a byte array.
	// 
	// The compressed output is held in memory and has a maximum size limit of 4 GB.
	// 
	bool CompressFileToMem(const wchar_t *inFilename, CkByteData &outData);

	// Creates an asynchronous task to call the CompressFileToMem method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressFileToMemAsync(const wchar_t *inFilename);

	// Compresses a byte array and returns the result as an in-memory Gzip image.
	// 
	// The uncompressed input data must not exceed 4 GB.
	// 
	bool CompressMemory(CkByteData &inData, CkByteData &outData);

	// Creates an asynchronous task to call the CompressMemory method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressMemoryAsync(CkByteData &inData);

	// Compresses a byte array and writes the resulting Gzip data to a file.
	// 
	bool CompressMemToFile(CkByteData &inData, const wchar_t *destPath);

	// Creates an asynchronous task to call the CompressMemToFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressMemToFileAsync(CkByteData &inData, const wchar_t *destPath);

	// Compresses the text contained in a StringBuilder and writes the Gzip-compressed
	// result to a BinData object.
	// 
	// Before compression, the string is converted to bytes using the specified
	// character set, such as utf-8, iso-8859-1, or shift_JIS.
	// 
	bool CompressSb(CkStringBuilderW &sb, const wchar_t *charset, CkBinDataW &bd);

	// Creates an asynchronous task to call the CompressSb method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressSbAsync(CkStringBuilderW &sb, const wchar_t *charset, CkBinDataW &bd);

	// Compresses a string and returns the Gzip-compressed data as a byte array.
	// 
	// The string is first converted to bytes using the character set specified by
	// destCharset. Common values include utf-8, iso-8859-1, and shift_JIS.
	// 
	bool CompressString(const wchar_t *inStr, const wchar_t *destCharset, CkByteData &outBytes);

	// Creates an asynchronous task to call the CompressString method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressStringAsync(const wchar_t *inStr, const wchar_t *destCharset);

	// Compresses a string and returns the Gzip-compressed data as an encoded string.
	// 
	// The input string is first converted to bytes using the specified character set.
	// The compressed binary data is then encoded using the requested encoding, such as
	// base64, hex, url, base32, or quoted-printable.
	// 
	bool CompressStringENC(const wchar_t *inStr, const wchar_t *charset, const wchar_t *encoding, CkString &outStr);
	// Compresses a string and returns the Gzip-compressed data as an encoded string.
	// 
	// The input string is first converted to bytes using the specified character set.
	// The compressed binary data is then encoded using the requested encoding, such as
	// base64, hex, url, base32, or quoted-printable.
	// 
	const wchar_t *compressStringENC(const wchar_t *inStr, const wchar_t *charset, const wchar_t *encoding);

	// Compresses a string and writes the resulting Gzip data to a file.
	// 
	// The string is first converted to bytes using the character set specified by
	// destCharset.
	// 
	bool CompressStringToFile(const wchar_t *inStr, const wchar_t *destCharset, const wchar_t *destPath);

	// Creates an asynchronous task to call the CompressStringToFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressStringToFileAsync(const wchar_t *inStr, const wchar_t *destCharset, const wchar_t *destPath);

	// Decodes an encoded string and returns the original data. The encoding mode is
	// determined by encoding. It may be base64, hex, quoted-printable, or url.
	bool Decode(const wchar_t *encodedStr, const wchar_t *encoding, CkByteData &outBytes);

	// Compresses a string using the raw deflate algorithm and returns the compressed
	// data as an encoded string.
	// 
	// The input string is first converted to bytes using the specified character set.
	// The compressed binary data is then encoded using the requested output encoding,
	// such as hex, base64, url, or quoted-printable.
	// 
	// Important: This method produces raw deflate-compressed data, not Gzip-format
	// data. Use the Compress* methods when Gzip format output is required.
	// 
	bool DeflateStringENC(const wchar_t *inString, const wchar_t *charsetName, const wchar_t *outputEncoding, CkString &outStr);
	// Compresses a string using the raw deflate algorithm and returns the compressed
	// data as an encoded string.
	// 
	// The input string is first converted to bytes using the specified character set.
	// The compressed binary data is then encoded using the requested output encoding,
	// such as hex, base64, url, or quoted-printable.
	// 
	// Important: This method produces raw deflate-compressed data, not Gzip-format
	// data. Use the Compress* methods when Gzip format output is required.
	// 
	const wchar_t *deflateStringENC(const wchar_t *inString, const wchar_t *charsetName, const wchar_t *outputEncoding);

	// Encodes binary data to a printable string. The encoding mode is determined by
	// encoding. It may be base64, hex, quoted-printable, or url.
	bool Encode(CkByteData &byteData, const wchar_t *encoding, CkString &outStr);
	// Encodes binary data to a printable string. The encoding mode is determined by
	// encoding. It may be base64, hex, quoted-printable, or url.
	const wchar_t *encode(CkByteData &byteData, const wchar_t *encoding);

	// Checks whether the specified file contains Gzip-formatted data.
	// 
	// Returns true if the file is in Gzip format, or false otherwise.
	// 
	bool ExamineFile(const wchar_t *filePath);

	// Checks whether the provided byte array contains Gzip-formatted data.
	// 
	// Returns true if the data is in Gzip format, or false otherwise.
	// 
	bool ExamineMemory(CkByteData &inGzData);

	// Applications should instead access the LastModStr property.
	// 
	// Gets the last-modification date/time to be embedded within the .gz.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkDateTimeW *GetDt(void);

	// Retrieves metadata stored in a Gzip file and returns the information in a
	// JsonObject.
	// 
	// The metadata is returned using the following JSON structure:
	// 
	// {
	//   "extraData": "AAECAw==",
	//   "filename": "example.txt",
	//   "comment": "This is the comment"
	// }
	//     * filename – the original filename embedded in the Gzip file (if present)
	//     * comment – an optional descriptive comment (if present)
	//     * extraData – optional additional binary data, returned as a Base64-encoded
	//     string
	// 
	// Any of these fields may be omitted if they were not included when the Gzip file
	// was created.
	// 
	bool GetGzipInfo(const wchar_t *filePath, CkJsonObjectW &json);

	// Retrieves metadata stored in Gzip data contained within a BinData object and
	// returns the information in a JsonObject.
	// 
	// The metadata is returned using the same JSON structure:
	// 
	// {
	//   "extraData": "AAECAw==",
	//   "filename": "example.txt",
	//   "comment": "This is the comment"
	// }
	//     * filename – the original filename embedded in the Gzip data (if present)
	//     * comment – an optional descriptive comment (if present)
	//     * extraData – optional additional binary data, returned as a Base64-encoded
	//     string
	// 
	// Any of these fields may be omitted if they were not included when the Gzip data
	// was created.
	// 
	bool GetGzipInfoBd(CkBinDataW &bd, CkJsonObjectW &json);

	// Decompresses data previously compressed with DeflateStringENC.
	// 
	// The input string is first decoded using the specified input encoding, such as
	// hex, base64, url, or quoted-printable. The resulting compressed bytes are then
	// inflated, and the final bytes are converted to a string using the specified
	// character set.
	// 
	bool InflateStringENC(const wchar_t *inString, const wchar_t *convertFromCharset, const wchar_t *inputEncoding, CkString &outStr);
	// Decompresses data previously compressed with DeflateStringENC.
	// 
	// The input string is first decoded using the specified input encoding, such as
	// hex, base64, url, or quoted-printable. The resulting compressed bytes are then
	// inflated, and the final bytes are converted to a string using the specified
	// character set.
	// 
	const wchar_t *inflateStringENC(const wchar_t *inString, const wchar_t *convertFromCharset, const wchar_t *inputEncoding);

	// Checks whether the data contained in a BinData object is in Gzip format.
	// 
	// Returns true if the data is Gzip-formatted, or false otherwise.
	// 
	bool IsGzip(CkBinDataW &bd);

	// Loads the caller of the task's async method.
	bool LoadTaskCaller(CkTaskW &task);

	// Reads a binary file into memory and returns the byte array. Note: This method
	// does not parse a Gzip, it is only a convenience method for reading a binary file
	// into memory.
	bool ReadFile(const wchar_t *path, CkByteData &outBytes);

	// Sets the last-modified date/time to embed in the Gzip file when a Compress*
	// method is called.
	// 
	// If no date/time is explicitly set, the current system date/time is used.
	// 
	bool SetDt(CkDateTimeW &dt);

	// Sets optional extra binary data to include in the Gzip header when a Compress*
	// method is called.
	// 
	// The data is passed as an encoded string. Supported encodings include base64,
	// hex, ascii, and many others.
	// 
	bool SetExtraData(const wchar_t *encodedData, const wchar_t *encoding);

	// Decompresses Gzip data contained in a BinData object in place, replacing the
	// compressed data with the uncompressed data.
	// 
	bool UncompressBd(CkBinDataW &binDat);

	// Creates an asynchronous task to call the UncompressBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressBdAsync(CkBinDataW &binDat);

	// Decompresses Gzip data stored in a BinData object and writes the result to a
	// file.
	// 
	bool UncompressBdToFile(CkBinDataW &bd, const wchar_t *filePath);

	// Creates an asynchronous task to call the UncompressBdToFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressBdToFileAsync(CkBinDataW &bd, const wchar_t *filePath);

	// Decompresses a Gzip file and writes the result to the specified output path.
	// 
	// The output filename is provided by the caller. The filename embedded in the Gzip
	// data is not used.
	// 
	bool UncompressFile(const wchar_t *srcPath, const wchar_t *destPath);

	// Creates an asynchronous task to call the UncompressFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressFileAsync(const wchar_t *srcPath, const wchar_t *destPath);

	// Decompresses a Gzip file and returns the uncompressed data as a byte array.
	// 
	// The uncompressed output is held in memory and must not exceed 4 GB.
	// 
	bool UncompressFileToMem(const wchar_t *srcPath, CkByteData &outData);

	// Creates an asynchronous task to call the UncompressFileToMem method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressFileToMemAsync(const wchar_t *srcPath);

	// Decompresses a Gzip file that contains text and returns the uncompressed text as
	// a string.
	// 
	// The charset parameter specifies the character encoding of the uncompressed text,
	// such as utf-8, iso-8859-1, windows-1252, shift_JIS, big5, etc.
	// 
	bool UncompressFileToString(const wchar_t *srcPath, const wchar_t *charset, CkString &outStr);
	// Decompresses a Gzip file that contains text and returns the uncompressed text as
	// a string.
	// 
	// The charset parameter specifies the character encoding of the uncompressed text,
	// such as utf-8, iso-8859-1, windows-1252, shift_JIS, big5, etc.
	// 
	const wchar_t *uncompressFileToString(const wchar_t *srcPath, const wchar_t *charset);

	// Creates an asynchronous task to call the UncompressFileToString method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressFileToStringAsync(const wchar_t *srcPath, const wchar_t *charset);

	// Decompresses an in-memory Gzip image and returns the uncompressed data as a byte
	// array.
	// 
	// The uncompressed output is held in memory and must not exceed 4 GB.
	// 
	bool UncompressMemory(CkByteData &inData, CkByteData &outData);

	// Creates an asynchronous task to call the UncompressMemory method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressMemoryAsync(CkByteData &inData);

	// Decompresses an in-memory Gzip image and writes the uncompressed data to a file.
	// 
	bool UncompressMemToFile(CkByteData &inData, const wchar_t *destPath);

	// Creates an asynchronous task to call the UncompressMemToFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressMemToFileAsync(CkByteData &inData, const wchar_t *destPath);

	// Decompresses Gzip-compressed data and returns the result as a string.
	// 
	// After decompression, the result is raw binary data (a sequence of bytes). These
	// bytes are then interpreted as text using the specified character set (such as
	// utf-8, iso-8859-1, etc.) to produce the final string.
	// 
	// Internally, Chilkat converts the byte sequence to a string by interpreting the
	// bytes according to the specified character set. For example, if utf-8 is
	// specified, the bytes are treated as the UTF-8 byte representation of text and
	// decoded into the internal string format used by the programming language.
	// 
	// It is important that the character set matches the one originally used when the
	// data was compressed. If the wrong character set is used, the byte-to-text
	// conversion may produce incorrect or unreadable characters.
	// 
	bool UncompressString(CkByteData &inData, const wchar_t *inCharset, CkString &outStr);
	// Decompresses Gzip-compressed data and returns the result as a string.
	// 
	// After decompression, the result is raw binary data (a sequence of bytes). These
	// bytes are then interpreted as text using the specified character set (such as
	// utf-8, iso-8859-1, etc.) to produce the final string.
	// 
	// Internally, Chilkat converts the byte sequence to a string by interpreting the
	// bytes according to the specified character set. For example, if utf-8 is
	// specified, the bytes are treated as the UTF-8 byte representation of text and
	// decoded into the internal string format used by the programming language.
	// 
	// It is important that the character set matches the one originally used when the
	// data was compressed. If the wrong character set is used, the byte-to-text
	// conversion may produce incorrect or unreadable characters.
	// 
	const wchar_t *uncompressString(CkByteData &inData, const wchar_t *inCharset);

	// Creates an asynchronous task to call the UncompressString method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressStringAsync(CkByteData &inData, const wchar_t *inCharset);

	// Decompresses Gzip data provided as an encoded string and returns the
	// uncompressed result as text.
	// 
	// The input string is first decoded using the specified encoding, such as base64,
	// hex, url, base32, quoted-printable, etc. The decoded Gzip data is then
	// decompressed and converted to text using the specified character set.
	// 
	bool UncompressStringENC(const wchar_t *inStr, const wchar_t *charset, const wchar_t *encoding, CkString &outStr);
	// Decompresses Gzip data provided as an encoded string and returns the
	// uncompressed result as text.
	// 
	// The input string is first decoded using the specified encoding, such as base64,
	// hex, url, base32, quoted-printable, etc. The decoded Gzip data is then
	// decompressed and converted to text using the specified character set.
	// 
	const wchar_t *uncompressStringENC(const wchar_t *inStr, const wchar_t *charset, const wchar_t *encoding);

	// Extracts a.tar.gz archive to a directory.
	// 
	// The Gzip decompression and TAR extraction are performed in streaming mode. No
	// temporary files are created, and memory usage remains small and constant.
	// 
	// If bNoAbsolute is true, absolute paths in the TAR archive are not allowed.
	// This helps protect against extracting files to unsafe locations, such as system
	// directories.
	// 
	bool UnTarGz(const wchar_t *gzPath, const wchar_t *destDir, bool bNoAbsolute);

	// Creates an asynchronous task to call the UnTarGz method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UnTarGzAsync(const wchar_t *gzPath, const wchar_t *destDir, bool bNoAbsolute);

	// A convenience method for writing a binary byte array to a file.
	bool WriteFile(const wchar_t *path, CkByteData &binaryData);

	// Converts encoded and compressed XFDL data to a decompressed XML string.
	// 
	// XFDL data is often stored in an ASCII-safe compressed form, such as asci-gzip or
	// asc-gzip. Despite the name, this does not always mean the data is a standard.gz
	// file. In some XFDL files, the compressed payload uses the raw deflate format
	// rather than the full Gzip file format.
	// 
	// Chilkat automatically detects the actual encoding and compression format used by
	// the XFDL data. It decodes the ASCII/Base64 representation, determines whether
	// the compressed data is Gzip or deflate, decompresses it correctly, and returns
	// the resulting XML string.
	// 
	// This allows applications to call XfdlToXml without needing to manually
	// distinguish between XFDL variants such as Base64+Gzip and Base64+Deflate.
	// 
	// Returns the decoded and decompressed XML string.
	// 
	// XFDL (Extensible Forms Description Language) is an XML-based format used to
	// define secure, interactive electronic forms—often including digital signatures
	// and integrity protections—commonly used in government and enterprise
	// applications.
	// 
	bool XfdlToXml(const wchar_t *xfldData, CkString &outStr);
	// Converts encoded and compressed XFDL data to a decompressed XML string.
	// 
	// XFDL data is often stored in an ASCII-safe compressed form, such as asci-gzip or
	// asc-gzip. Despite the name, this does not always mean the data is a standard.gz
	// file. In some XFDL files, the compressed payload uses the raw deflate format
	// rather than the full Gzip file format.
	// 
	// Chilkat automatically detects the actual encoding and compression format used by
	// the XFDL data. It decodes the ASCII/Base64 representation, determines whether
	// the compressed data is Gzip or deflate, decompresses it correctly, and returns
	// the resulting XML string.
	// 
	// This allows applications to call XfdlToXml without needing to manually
	// distinguish between XFDL variants such as Base64+Gzip and Base64+Deflate.
	// 
	// Returns the decoded and decompressed XML string.
	// 
	// XFDL (Extensible Forms Description Language) is an XML-based format used to
	// define secure, interactive electronic forms—often including digital signatures
	// and integrity protections—commonly used in government and enterprise
	// applications.
	// 
	const wchar_t *xfdlToXml(const wchar_t *xfldData);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
