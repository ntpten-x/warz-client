// CkGzip.h: interface for the CkGzip class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkGzip_H
#define _CkGzip_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkBinData;
class CkByteData;
class CkStringBuilder;
class CkDateTime;
class CkJsonObject;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkGzip
class CK_VISIBLE_PUBLIC CkGzip  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkGzip(const CkGzip &);
	CkGzip &operator=(const CkGzip &);

    public:
	CkGzip(void);
	virtual ~CkGzip(void);

	static CkGzip *createNew(void);
	static CkGzip *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	CkBaseProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgress *progress);


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
	const char *comment(void);
	// An optional comment to embed in the Gzip file when a Compress* method is called.
	// 
	void put_Comment(const char *newVal);

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
	const char *filename(void);
	// The filename to embed in the Gzip file when a Compress* method is called. Some
	// Gzip extraction tools use this embedded filename as the default output filename.
	// 
	void put_Filename(const char *newVal);

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
	const char *lastModStr(void);
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
	void put_LastModStr(const char *newVal);

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
	bool CompressBd(CkBinData &binDat);

	// Compresses the contents of a BinData object in place, replacing the original
	// data with Gzip-compressed data.
	// 
	CkTask *CompressBdAsync(CkBinData &binDat);


	// Compresses a file and writes the result as a Gzip file, typically with a.gz
	// extension.
	// 
	bool CompressFile(const char *srcPath, const char *destPath);

	// Compresses a file and writes the result as a Gzip file, typically with a.gz
	// extension.
	// 
	CkTask *CompressFileAsync(const char *srcPath, const char *destPath);


	// Compresses a file and writes the result as a Gzip file, while allowing a
	// different filename to be embedded inside the Gzip data.
	// 
	// The inFilename parameter is the actual file on disk. The srcPath parameter is the
	// filename stored in the Gzip header and may be used by extraction tools as the
	// output filename.
	// 
	bool CompressFile2(const char *srcPath, const char *embeddedFilename, const char *destPath);

	// Compresses a file and writes the result as a Gzip file, while allowing a
	// different filename to be embedded inside the Gzip data.
	// 
	// The inFilename parameter is the actual file on disk. The srcPath parameter is the
	// filename stored in the Gzip header and may be used by extraction tools as the
	// output filename.
	// 
	CkTask *CompressFile2Async(const char *srcPath, const char *embeddedFilename, const char *destPath);


	// Compresses a file and stores the resulting Gzip data in a BinData object.
	// 
	// The compressed output is held in memory. The maximum compressed size is 4 GB.
	// 
	bool CompressFileBd(const char *filePath, CkBinData &bd);

	// Compresses a file and stores the resulting Gzip data in a BinData object.
	// 
	// The compressed output is held in memory. The maximum compressed size is 4 GB.
	// 
	CkTask *CompressFileBdAsync(const char *filePath, CkBinData &bd);


	// Compresses a file and returns the resulting Gzip data as a byte array.
	// 
	// The compressed output is held in memory and has a maximum size limit of 4 GB.
	// 
	bool CompressFileToMem(const char *inFilename, CkByteData &outData);

	// Compresses a file and returns the resulting Gzip data as a byte array.
	// 
	// The compressed output is held in memory and has a maximum size limit of 4 GB.
	// 
	CkTask *CompressFileToMemAsync(const char *inFilename);


	// Compresses a byte array and returns the result as an in-memory Gzip image.
	// 
	// The uncompressed input data must not exceed 4 GB.
	// 
	bool CompressMemory(CkByteData &inData, CkByteData &outData);

	// Compresses a byte array and returns the result as an in-memory Gzip image.
	// 
	// The uncompressed input data must not exceed 4 GB.
	// 
	CkTask *CompressMemoryAsync(CkByteData &inData);


	// Compresses a byte array and writes the resulting Gzip data to a file.
	// 
	bool CompressMemToFile(CkByteData &inData, const char *destPath);

	// Compresses a byte array and writes the resulting Gzip data to a file.
	// 
	CkTask *CompressMemToFileAsync(CkByteData &inData, const char *destPath);


	// Compresses the text contained in a StringBuilder and writes the Gzip-compressed
	// result to a BinData object.
	// 
	// Before compression, the string is converted to bytes using the specified
	// character set, such as utf-8, iso-8859-1, or shift_JIS.
	// 
	bool CompressSb(CkStringBuilder &sb, const char *charset, CkBinData &bd);

	// Compresses the text contained in a StringBuilder and writes the Gzip-compressed
	// result to a BinData object.
	// 
	// Before compression, the string is converted to bytes using the specified
	// character set, such as utf-8, iso-8859-1, or shift_JIS.
	// 
	CkTask *CompressSbAsync(CkStringBuilder &sb, const char *charset, CkBinData &bd);


	// Compresses a string and returns the Gzip-compressed data as a byte array.
	// 
	// The string is first converted to bytes using the character set specified by
	// destCharset. Common values include utf-8, iso-8859-1, and shift_JIS.
	// 
	bool CompressString(const char *inStr, const char *destCharset, CkByteData &outBytes);

	// Compresses a string and returns the Gzip-compressed data as a byte array.
	// 
	// The string is first converted to bytes using the character set specified by
	// destCharset. Common values include utf-8, iso-8859-1, and shift_JIS.
	// 
	CkTask *CompressStringAsync(const char *inStr, const char *destCharset);


	// Compresses a string and returns the Gzip-compressed data as an encoded string.
	// 
	// The input string is first converted to bytes using the specified character set.
	// The compressed binary data is then encoded using the requested encoding, such as
	// base64, hex, url, base32, or quoted-printable.
	// 
	bool CompressStringENC(const char *inStr, const char *charset, const char *encoding, CkString &outStr);

	// Compresses a string and returns the Gzip-compressed data as an encoded string.
	// 
	// The input string is first converted to bytes using the specified character set.
	// The compressed binary data is then encoded using the requested encoding, such as
	// base64, hex, url, base32, or quoted-printable.
	// 
	const char *compressStringENC(const char *inStr, const char *charset, const char *encoding);

	// Compresses a string and writes the resulting Gzip data to a file.
	// 
	// The string is first converted to bytes using the character set specified by
	// destCharset.
	// 
	bool CompressStringToFile(const char *inStr, const char *destCharset, const char *destPath);

	// Compresses a string and writes the resulting Gzip data to a file.
	// 
	// The string is first converted to bytes using the character set specified by
	// destCharset.
	// 
	CkTask *CompressStringToFileAsync(const char *inStr, const char *destCharset, const char *destPath);


	// Decodes an encoded string and returns the original data. The encoding mode is
	// determined by encoding. It may be base64, hex, quoted-printable, or url.
	bool Decode(const char *encodedStr, const char *encoding, CkByteData &outBytes);


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
	bool DeflateStringENC(const char *inString, const char *charsetName, const char *outputEncoding, CkString &outStr);

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
	const char *deflateStringENC(const char *inString, const char *charsetName, const char *outputEncoding);

	// Encodes binary data to a printable string. The encoding mode is determined by
	// encoding. It may be base64, hex, quoted-printable, or url.
	bool Encode(CkByteData &byteData, const char *encoding, CkString &outStr);

	// Encodes binary data to a printable string. The encoding mode is determined by
	// encoding. It may be base64, hex, quoted-printable, or url.
	const char *encode(CkByteData &byteData, const char *encoding);

	// Checks whether the specified file contains Gzip-formatted data.
	// 
	// Returns true if the file is in Gzip format, or false otherwise.
	// 
	bool ExamineFile(const char *filePath);


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
	CkDateTime *GetDt(void);


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
	bool GetGzipInfo(const char *filePath, CkJsonObject &json);


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
	bool GetGzipInfoBd(CkBinData &bd, CkJsonObject &json);


	// Decompresses data previously compressed with DeflateStringENC.
	// 
	// The input string is first decoded using the specified input encoding, such as
	// hex, base64, url, or quoted-printable. The resulting compressed bytes are then
	// inflated, and the final bytes are converted to a string using the specified
	// character set.
	// 
	bool InflateStringENC(const char *inString, const char *convertFromCharset, const char *inputEncoding, CkString &outStr);

	// Decompresses data previously compressed with DeflateStringENC.
	// 
	// The input string is first decoded using the specified input encoding, such as
	// hex, base64, url, or quoted-printable. The resulting compressed bytes are then
	// inflated, and the final bytes are converted to a string using the specified
	// character set.
	// 
	const char *inflateStringENC(const char *inString, const char *convertFromCharset, const char *inputEncoding);

	// Checks whether the data contained in a BinData object is in Gzip format.
	// 
	// Returns true if the data is Gzip-formatted, or false otherwise.
	// 
	bool IsGzip(CkBinData &bd);


	// Loads the caller of the task's async method.
	bool LoadTaskCaller(CkTask &task);


	// Reads a binary file into memory and returns the byte array. Note: This method
	// does not parse a Gzip, it is only a convenience method for reading a binary file
	// into memory.
	bool ReadFile(const char *path, CkByteData &outBytes);


	// Sets the last-modified date/time to embed in the Gzip file when a Compress*
	// method is called.
	// 
	// If no date/time is explicitly set, the current system date/time is used.
	// 
	bool SetDt(CkDateTime &dt);


	// Sets optional extra binary data to include in the Gzip header when a Compress*
	// method is called.
	// 
	// The data is passed as an encoded string. Supported encodings include base64,
	// hex, ascii, and many others.
	// 
	bool SetExtraData(const char *encodedData, const char *encoding);


	// Decompresses Gzip data contained in a BinData object in place, replacing the
	// compressed data with the uncompressed data.
	// 
	bool UncompressBd(CkBinData &binDat);

	// Decompresses Gzip data contained in a BinData object in place, replacing the
	// compressed data with the uncompressed data.
	// 
	CkTask *UncompressBdAsync(CkBinData &binDat);


	// Decompresses Gzip data stored in a BinData object and writes the result to a
	// file.
	// 
	bool UncompressBdToFile(CkBinData &bd, const char *filePath);

	// Decompresses Gzip data stored in a BinData object and writes the result to a
	// file.
	// 
	CkTask *UncompressBdToFileAsync(CkBinData &bd, const char *filePath);


	// Decompresses a Gzip file and writes the result to the specified output path.
	// 
	// The output filename is provided by the caller. The filename embedded in the Gzip
	// data is not used.
	// 
	bool UncompressFile(const char *srcPath, const char *destPath);

	// Decompresses a Gzip file and writes the result to the specified output path.
	// 
	// The output filename is provided by the caller. The filename embedded in the Gzip
	// data is not used.
	// 
	CkTask *UncompressFileAsync(const char *srcPath, const char *destPath);


	// Decompresses a Gzip file and returns the uncompressed data as a byte array.
	// 
	// The uncompressed output is held in memory and must not exceed 4 GB.
	// 
	bool UncompressFileToMem(const char *srcPath, CkByteData &outData);

	// Decompresses a Gzip file and returns the uncompressed data as a byte array.
	// 
	// The uncompressed output is held in memory and must not exceed 4 GB.
	// 
	CkTask *UncompressFileToMemAsync(const char *srcPath);


	// Decompresses a Gzip file that contains text and returns the uncompressed text as
	// a string.
	// 
	// The charset parameter specifies the character encoding of the uncompressed text,
	// such as utf-8, iso-8859-1, windows-1252, shift_JIS, big5, etc.
	// 
	bool UncompressFileToString(const char *srcPath, const char *charset, CkString &outStr);

	// Decompresses a Gzip file that contains text and returns the uncompressed text as
	// a string.
	// 
	// The charset parameter specifies the character encoding of the uncompressed text,
	// such as utf-8, iso-8859-1, windows-1252, shift_JIS, big5, etc.
	// 
	const char *uncompressFileToString(const char *srcPath, const char *charset);
	// Decompresses a Gzip file that contains text and returns the uncompressed text as
	// a string.
	// 
	// The charset parameter specifies the character encoding of the uncompressed text,
	// such as utf-8, iso-8859-1, windows-1252, shift_JIS, big5, etc.
	// 
	CkTask *UncompressFileToStringAsync(const char *srcPath, const char *charset);


	// Decompresses an in-memory Gzip image and returns the uncompressed data as a byte
	// array.
	// 
	// The uncompressed output is held in memory and must not exceed 4 GB.
	// 
	bool UncompressMemory(CkByteData &inData, CkByteData &outData);

	// Decompresses an in-memory Gzip image and returns the uncompressed data as a byte
	// array.
	// 
	// The uncompressed output is held in memory and must not exceed 4 GB.
	// 
	CkTask *UncompressMemoryAsync(CkByteData &inData);


	// Decompresses an in-memory Gzip image and writes the uncompressed data to a file.
	// 
	bool UncompressMemToFile(CkByteData &inData, const char *destPath);

	// Decompresses an in-memory Gzip image and writes the uncompressed data to a file.
	// 
	CkTask *UncompressMemToFileAsync(CkByteData &inData, const char *destPath);


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
	bool UncompressString(CkByteData &inData, const char *inCharset, CkString &outStr);

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
	const char *uncompressString(CkByteData &inData, const char *inCharset);
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
	CkTask *UncompressStringAsync(CkByteData &inData, const char *inCharset);


	// Decompresses Gzip data provided as an encoded string and returns the
	// uncompressed result as text.
	// 
	// The input string is first decoded using the specified encoding, such as base64,
	// hex, url, base32, quoted-printable, etc. The decoded Gzip data is then
	// decompressed and converted to text using the specified character set.
	// 
	bool UncompressStringENC(const char *inStr, const char *charset, const char *encoding, CkString &outStr);

	// Decompresses Gzip data provided as an encoded string and returns the
	// uncompressed result as text.
	// 
	// The input string is first decoded using the specified encoding, such as base64,
	// hex, url, base32, quoted-printable, etc. The decoded Gzip data is then
	// decompressed and converted to text using the specified character set.
	// 
	const char *uncompressStringENC(const char *inStr, const char *charset, const char *encoding);

	// Extracts a.tar.gz archive to a directory.
	// 
	// The Gzip decompression and TAR extraction are performed in streaming mode. No
	// temporary files are created, and memory usage remains small and constant.
	// 
	// If bNoAbsolute is true, absolute paths in the TAR archive are not allowed.
	// This helps protect against extracting files to unsafe locations, such as system
	// directories.
	// 
	bool UnTarGz(const char *gzPath, const char *destDir, bool bNoAbsolute);

	// Extracts a.tar.gz archive to a directory.
	// 
	// The Gzip decompression and TAR extraction are performed in streaming mode. No
	// temporary files are created, and memory usage remains small and constant.
	// 
	// If bNoAbsolute is true, absolute paths in the TAR archive are not allowed.
	// This helps protect against extracting files to unsafe locations, such as system
	// directories.
	// 
	CkTask *UnTarGzAsync(const char *gzPath, const char *destDir, bool bNoAbsolute);


	// A convenience method for writing a binary byte array to a file.
	bool WriteFile(const char *path, CkByteData &binaryData);


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
	bool XfdlToXml(const char *xfldData, CkString &outStr);

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
	const char *xfdlToXml(const char *xfldData);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
