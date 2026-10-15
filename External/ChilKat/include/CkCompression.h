// CkCompression.h: interface for the CkCompression class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkCompression_H
#define _CkCompression_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkByteData;
class CkTask;
class CkBinData;
class CkJsonObject;
class CkStringBuilder;
class CkStream;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkCompression
class CK_VISIBLE_PUBLIC CkCompression  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkCompression(const CkCompression &);
	CkCompression &operator=(const CkCompression &);

    public:
	CkCompression(void);
	virtual ~CkCompression(void);

	static CkCompression *createNew(void);
	static CkCompression *createNew2(int progLang);
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
	// Specifies the compression algorithm to use. Supported values are deflate, zlib,
	// bzip2, and lzw.
	// 
	// The zlib option is the deflate algorithm with a zlib header.
	// 
	// Note: ppmd is deprecated and should not be used. It was only available on 32-bit
	// systems and specifically used the J variant. New applications should use one of
	// the supported algorithms listed above.
	// 
	void get_Algorithm(CkString &str);
	// Specifies the compression algorithm to use. Supported values are deflate, zlib,
	// bzip2, and lzw.
	// 
	// The zlib option is the deflate algorithm with a zlib header.
	// 
	// Note: ppmd is deprecated and should not be used. It was only available on 32-bit
	// systems and specifically used the J variant. New applications should use one of
	// the supported algorithms listed above.
	// 
	const char *algorithm(void);
	// Specifies the compression algorithm to use. Supported values are deflate, zlib,
	// bzip2, and lzw.
	// 
	// The zlib option is the deflate algorithm with a zlib header.
	// 
	// Note: ppmd is deprecated and should not be used. It was only available on 32-bit
	// systems and specifically used the J variant. New applications should use one of
	// the supported algorithms listed above.
	// 
	void put_Algorithm(const char *newVal);

	// Specifies the character encoding used when converting text to bytes before
	// compression, and bytes back to text after decompression.
	// 
	// The current default is the computer’s ANSI charset, such as Windows-1252 on many
	// Western Windows systems. However, most modern applications should explicitly set
	// this property to utf-8.
	// 
	// Recommendation: Set Charset = "utf-8" unless you specifically need compatibility
	// with another encoding.
	// 
	void get_Charset(CkString &str);
	// Specifies the character encoding used when converting text to bytes before
	// compression, and bytes back to text after decompression.
	// 
	// The current default is the computer’s ANSI charset, such as Windows-1252 on many
	// Western Windows systems. However, most modern applications should explicitly set
	// this property to utf-8.
	// 
	// Recommendation: Set Charset = "utf-8" unless you specifically need compatibility
	// with another encoding.
	// 
	const char *charset(void);
	// Specifies the character encoding used when converting text to bytes before
	// compression, and bytes back to text after decompression.
	// 
	// The current default is the computer’s ANSI charset, such as Windows-1252 on many
	// Western Windows systems. However, most modern applications should explicitly set
	// this property to utf-8.
	// 
	// Recommendation: Set Charset = "utf-8" unless you specifically need compatibility
	// with another encoding.
	// 
	void put_Charset(const char *newVal);

	// Sets the compression level used by the deflate and zlib algorithms.
	// 
	//     * 0 means no compression.
	//     * 9 means maximum compression.
	//     * The default value is 6.
	// 
	// Higher values may produce smaller output but can require more processing time.
	// 
	int get_DeflateLevel(void);
	// Sets the compression level used by the deflate and zlib algorithms.
	// 
	//     * 0 means no compression.
	//     * 9 means maximum compression.
	//     * The default value is 6.
	// 
	// Higher values may produce smaller output but can require more processing time.
	// 
	void put_DeflateLevel(int newVal);

	// Specifies the text encoding used by methods whose names end in ENC, such as
	// CompressBytesENC and DecompressStringENC.
	// 
	// Compression methods ending in ENC return compressed binary data as an encoded
	// string. Decompression methods ending in ENC expect the input string to use this
	// same encoding.
	// 
	// Valid values include:
	// 
	//     * base64
	//     * hex
	//     * url
	//     * quoted-printable
	void get_EncodingMode(CkString &str);
	// Specifies the text encoding used by methods whose names end in ENC, such as
	// CompressBytesENC and DecompressStringENC.
	// 
	// Compression methods ending in ENC return compressed binary data as an encoded
	// string. Decompression methods ending in ENC expect the input string to use this
	// same encoding.
	// 
	// Valid values include:
	// 
	//     * base64
	//     * hex
	//     * url
	//     * quoted-printable
	const char *encodingMode(void);
	// Specifies the text encoding used by methods whose names end in ENC, such as
	// CompressBytesENC and DecompressStringENC.
	// 
	// Compression methods ending in ENC return compressed binary data as an encoded
	// string. Decompression methods ending in ENC expect the input string to use this
	// same encoding.
	// 
	// Valid values include:
	// 
	//     * base64
	//     * hex
	//     * url
	//     * quoted-printable
	void put_EncodingMode(const char *newVal);

	// Indicates that the next chunk-aware compression or decompression call is the
	// first chunk in a sequence.
	// 
	// The default value is true.
	// 
	// When both FirstChunk and LastChunk are true, the method call is treated as a
	// complete, single-call compression or decompression operation.
	// 
	bool get_FirstChunk(void);
	// Indicates that the next chunk-aware compression or decompression call is the
	// first chunk in a sequence.
	// 
	// The default value is true.
	// 
	// When both FirstChunk and LastChunk are true, the method call is treated as a
	// complete, single-call compression or decompression operation.
	// 
	void put_FirstChunk(bool newVal);

	// Specifies the interval, in milliseconds, between AbortCheck event callbacks.
	// 
	// This allows an application to periodically check whether a long-running
	// operation should be aborted.
	// 
	// The default value is 0, which disables AbortCheck callbacks.
	// 
	int get_HeartbeatMs(void);
	// Specifies the interval, in milliseconds, between AbortCheck event callbacks.
	// 
	// This allows an application to periodically check whether a long-running
	// operation should be aborted.
	// 
	// The default value is 0, which disables AbortCheck callbacks.
	// 
	void put_HeartbeatMs(int newVal);

	// Indicates that the next chunk-aware compression or decompression call is the
	// final chunk in a sequence.
	// 
	// The default value is true.
	// 
	// When both FirstChunk and LastChunk are true, the input is treated as the
	// complete data set and processed in a single call.
	// 
	bool get_LastChunk(void);
	// Indicates that the next chunk-aware compression or decompression call is the
	// final chunk in a sequence.
	// 
	// The default value is true.
	// 
	// When both FirstChunk and LastChunk are true, the input is treated as the
	// complete data set and processed in a single call.
	// 
	void put_LastChunk(bool newVal);

	// Provides a way to enable specialized or uncommon behavior. This property
	// normally remains empty.
	// 
	// It may be set to a comma-separated list of keywords.
	// 
	// Supported option:
	// 
	//     * Crypt2CompressHdr — Duplicates the compression/decompression header
	//     behavior used by the deprecated and removed Crypt2 compression functions.
	void get_UncommonOptions(CkString &str);
	// Provides a way to enable specialized or uncommon behavior. This property
	// normally remains empty.
	// 
	// It may be set to a comma-separated list of keywords.
	// 
	// Supported option:
	// 
	//     * Crypt2CompressHdr — Duplicates the compression/decompression header
	//     behavior used by the deprecated and removed Crypt2 compression functions.
	const char *uncommonOptions(void);
	// Provides a way to enable specialized or uncommon behavior. This property
	// normally remains empty.
	// 
	// It may be set to a comma-separated list of keywords.
	// 
	// Supported option:
	// 
	//     * Crypt2CompressHdr — Duplicates the compression/decompression header
	//     behavior used by the deprecated and removed Crypt2 compression functions.
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Large amounts of binary byte data may be compressed in chunks by first calling
	// BeginCompressBytes, followed by 0 or more calls to MoreCompressedBytes, and
	// ending with a final call to EndCompressBytes. Each call returns 0 or more bytes
	// of compressed data which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool BeginCompressBytes(CkByteData &data, CkByteData &outData);


	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Large amounts of binary byte data may be compressed in chunks by first calling
	// BeginCompressBytes, followed by 0 or more calls to MoreCompressedBytes, and
	// ending with a final call to EndCompressBytes. Each call returns 0 or more bytes
	// of compressed data which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool BeginCompressBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Large amounts of binary byte data may be compressed in chunks by first calling
	// BeginCompressBytesENC, followed by 0 or more calls to MoreCompressedBytesENC,
	// and ending with a final call to EndCompressBytesENC. Each call returns 0 or more
	// characters of compressed data (encoded as a string according to the EncodingMode
	// property setting) which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool BeginCompressBytesENC(CkByteData &data, CkString &outStr);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Large amounts of binary byte data may be compressed in chunks by first calling
	// BeginCompressBytesENC, followed by 0 or more calls to MoreCompressedBytesENC,
	// and ending with a final call to EndCompressBytesENC. Each call returns 0 or more
	// characters of compressed data (encoded as a string according to the EncodingMode
	// property setting) which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	const char *beginCompressBytesENC(CkByteData &data);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Large amounts of string data may be compressed in chunks by first calling
	// BeginCompressString, followed by 0 or more calls to MoreCompressedString, and
	// ending with a final call to EndCompressString. Each call returns 0 or more bytes
	// of compressed data which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool BeginCompressString(const char *str, CkByteData &outData);


	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Large amounts of string data may be compressed in chunks by first calling
	// BeginCompressStringENC, followed by 0 or more calls to MoreCompressedStringENC,
	// and ending with a final call to EndCompressStringENC. Each call returns 0 or
	// more characters of compressed data (encoded as a string according to the
	// EncodingMode property setting) which may be output to a compressed data stream
	// (such as a file, socket, etc.).
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool BeginCompressStringENC(const char *str, CkString &outStr);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Large amounts of string data may be compressed in chunks by first calling
	// BeginCompressStringENC, followed by 0 or more calls to MoreCompressedStringENC,
	// and ending with a final call to EndCompressStringENC. Each call returns 0 or
	// more characters of compressed data (encoded as a string according to the
	// EncodingMode property setting) which may be output to a compressed data stream
	// (such as a file, socket, etc.).
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	const char *beginCompressStringENC(const char *str);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressBytes, followed by 0 or more calls to MoreDecompressedBytes, and
	// ending with a final call to EndDecompressBytes. Each call returns 0 or more
	// bytes of decompressed data.
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool BeginDecompressBytes(CkByteData &data, CkByteData &outData);


	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressBytes, followed by 0 or more calls to MoreDecompressedBytes, and
	// ending with a final call to EndDecompressBytes. Each call returns 0 or more
	// bytes of decompressed data.
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool BeginDecompressBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressBytesENC, followed by 0 or more calls to
	// MoreDecompressedBytesENC, and ending with a final call to EndDecompressBytesENC.
	// Each call returns 0 or more bytes of decompressed data.
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool BeginDecompressBytesENC(const char *str, CkByteData &outData);


	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressString, followed by 0 or more calls to MoreDecompressedString,
	// and ending with a final call to EndDecompressString. Each call returns 0 or more
	// characters of decompressed text.
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool BeginDecompressString(CkByteData &data, CkString &outStr);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressString, followed by 0 or more calls to MoreDecompressedString,
	// and ending with a final call to EndDecompressString. Each call returns 0 or more
	// characters of decompressed text.
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	const char *beginDecompressString(CkByteData &data);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressStringENC, followed by 0 or more calls to
	// MoreDecompressedStringENC, and ending with a final call to
	// EndDecompressStringENC. Each call returns 0 or more characters of decompressed
	// text.
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool BeginDecompressStringENC(const char *str, CkString &outStr);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressStringENC, followed by 0 or more calls to
	// MoreDecompressedStringENC, and ending with a final call to
	// EndDecompressStringENC. Each call returns 0 or more characters of decompressed
	// text.
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	const char *beginDecompressStringENC(const char *str);

	// Compresses the data contained in a BinData object.
	// 
	// The BinData object is modified to contain the compressed result.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	bool CompressBd(CkBinData &bd);

	// Compresses the data contained in a BinData object.
	// 
	// The BinData object is modified to contain the compressed result.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	CkTask *CompressBdAsync(CkBinData &bd);


	// Compresses the data in one BinData object and appends the compressed output to
	// another BinData object.
	// 
	// The input BinData is not modified.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool CompressBd2(CkBinData &bdIn, CkBinData &bdOut);

	// Compresses the data in one BinData object and appends the compressed output to
	// another BinData object.
	// 
	// The input BinData is not modified.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	CkTask *CompressBd2Async(CkBinData &bdIn, CkBinData &bdOut);


	// Compresses a byte array and returns the compressed bytes.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool CompressBytes(CkByteData &data, CkByteData &outData);

	// Compresses a byte array and returns the compressed bytes.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	CkTask *CompressBytesAsync(CkByteData &data);


	// Compresses byte data passed by pointer and size, and returns the compressed
	// bytes.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool CompressBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// Compresses a byte array and returns the compressed result as an encoded string.
	// 
	// The output encoding is controlled by EncodingMode.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	bool CompressBytesENC(CkByteData &data, CkString &outStr);

	// Compresses a byte array and returns the compressed result as an encoded string.
	// 
	// The output encoding is controlled by EncodingMode.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	const char *compressBytesENC(CkByteData &data);
	// Compresses a byte array and returns the compressed result as an encoded string.
	// 
	// The output encoding is controlled by EncodingMode.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	CkTask *CompressBytesENCAsync(CkByteData &data);


	// Compresses and encrypts a file, writing the result to a destination file.
	// 
	// The compression and encryption are performed internally in streaming mode, so
	// files of any size can be processed without loading the entire file into memory.
	// 
	bool CompressEncryptFile(CkJsonObject &cryptParams, const char *srcPath, const char *destPath);

	// Compresses and encrypts a file, writing the result to a destination file.
	// 
	// The compression and encryption are performed internally in streaming mode, so
	// files of any size can be processed without loading the entire file into memory.
	// 
	CkTask *CompressEncryptFileAsync(CkJsonObject &cryptParams, const char *srcPath, const char *destPath);


	// Compresses a source file and writes the compressed data to a destination file.
	// 
	// The file is processed internally in streaming mode, allowing files of any size
	// to be compressed with stable memory usage.
	// 
	bool CompressFile(const char *srcPath, const char *destPath);

	// Compresses a source file and writes the compressed data to a destination file.
	// 
	// The file is processed internally in streaming mode, allowing files of any size
	// to be compressed with stable memory usage.
	// 
	CkTask *CompressFileAsync(const char *srcPath, const char *destPath);


	// Compresses the text contained in a StringBuilder and appends the compressed
	// bytes to a BinData object.
	// 
	// Text is converted to bytes according to the Charset property.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool CompressSb(CkStringBuilder &sb, CkBinData &binData);

	// Compresses the text contained in a StringBuilder and appends the compressed
	// bytes to a BinData object.
	// 
	// Text is converted to bytes according to the Charset property.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	CkTask *CompressSbAsync(CkStringBuilder &sb, CkBinData &binData);


	// Compresses a string and appends the compressed bytes to a BinData object.
	// 
	// The string is converted to bytes using the charset specified by the Charset
	// property.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool CompressStr(const char *str, CkBinData &bd);

	// Compresses a string and appends the compressed bytes to a BinData object.
	// 
	// The string is converted to bytes using the charset specified by the Charset
	// property.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	CkTask *CompressStrAsync(const char *str, CkBinData &bd);


	// Compresses data from a stream source and writes the compressed data to the
	// stream sink.
	// 
	// The operation is performed in streaming mode, making it suitable for very large
	// or even continuous streams while maintaining stable memory usage.
	// 
	bool CompressStream(CkStream &strm);

	// Compresses data from a stream source and writes the compressed data to the
	// stream sink.
	// 
	// The operation is performed in streaming mode, making it suitable for very large
	// or even continuous streams while maintaining stable memory usage.
	// 
	CkTask *CompressStreamAsync(CkStream &strm);


	// Compresses a string and returns the compressed bytes.
	// 
	// The string is converted to bytes using the Charset property.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool CompressString(const char *str, CkByteData &outData);

	// Compresses a string and returns the compressed bytes.
	// 
	// The string is converted to bytes using the Charset property.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	CkTask *CompressStringAsync(const char *str);


	// Compresses a string and returns the compressed result as an encoded string.
	// 
	// The string is first converted to bytes using Charset, then compressed, and
	// finally encoded according to EncodingMode.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	bool CompressStringENC(const char *str, CkString &outStr);

	// Compresses a string and returns the compressed result as an encoded string.
	// 
	// The string is first converted to bytes using Charset, then compressed, and
	// finally encoded according to EncodingMode.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	const char *compressStringENC(const char *str);
	// Compresses a string and returns the compressed result as an encoded string.
	// 
	// The string is first converted to bytes using Charset, then compressed, and
	// finally encoded according to EncodingMode.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	CkTask *CompressStringENCAsync(const char *str);


	// Decompresses the compressed data contained in a BinData object.
	// 
	// The BinData object is modified to contain the decompressed result.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	bool DecompressBd(CkBinData &bd);

	// Decompresses the compressed data contained in a BinData object.
	// 
	// The BinData object is modified to contain the decompressed result.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	CkTask *DecompressBdAsync(CkBinData &bd);


	// Decompresses the data in one BinData object and appends the decompressed output
	// to another BinData object.
	// 
	// The input BinData is not modified.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool DecompressBd2(CkBinData &bdIn, CkBinData &bdOut);

	// Decompresses the data in one BinData object and appends the decompressed output
	// to another BinData object.
	// 
	// The input BinData is not modified.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	CkTask *DecompressBd2Async(CkBinData &bdIn, CkBinData &bdOut);


	// Decompresses compressed byte data and returns the decompressed bytes.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool DecompressBytes(CkByteData &data, CkByteData &outData);

	// Decompresses compressed byte data and returns the decompressed bytes.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	CkTask *DecompressBytesAsync(CkByteData &data);


	// Decompresses compressed byte data passed by pointer and size, and returns the
	// decompressed bytes.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool DecompressBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// Decompresses compressed data supplied as an encoded string and returns the
	// decompressed bytes.
	// 
	// The input string is decoded according to EncodingMode before being decompressed.
	// 
	bool DecompressBytesENC(const char *encodedCompressedData, CkByteData &outData);

	// Decompresses compressed data supplied as an encoded string and returns the
	// decompressed bytes.
	// 
	// The input string is decoded according to EncodingMode before being decompressed.
	// 
	CkTask *DecompressBytesENCAsync(const char *encodedCompressedData);


	// Decompresses a source file and writes the decompressed data to a destination
	// file.
	// 
	// The file is processed internally in streaming mode, allowing files of any size
	// to be decompressed without loading the entire file into memory.
	// 
	bool DecompressFile(const char *srcPath, const char *destPath);

	// Decompresses a source file and writes the decompressed data to a destination
	// file.
	// 
	// The file is processed internally in streaming mode, allowing files of any size
	// to be decompressed without loading the entire file into memory.
	// 
	CkTask *DecompressFileAsync(const char *srcPath, const char *destPath);


	// Decompresses compressed data from a BinData object and appends the resulting
	// text to a StringBuilder.
	// 
	// The decompressed bytes are converted to text using the Charset property.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool DecompressSb(CkBinData &binData, CkStringBuilder &sb);

	// Decompresses compressed data from a BinData object and appends the resulting
	// text to a StringBuilder.
	// 
	// The decompressed bytes are converted to text using the Charset property.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	CkTask *DecompressSbAsync(CkBinData &binData, CkStringBuilder &sb);


	// Decompresses data from a stream source and writes the decompressed data to the
	// stream sink.
	// 
	// The operation is performed in streaming mode, making it suitable for very large
	// or continuous streams while maintaining stable memory usage.
	// 
	bool DecompressStream(CkStream &strm);

	// Decompresses data from a stream source and writes the decompressed data to the
	// stream sink.
	// 
	// The operation is performed in streaming mode, making it suitable for very large
	// or continuous streams while maintaining stable memory usage.
	// 
	CkTask *DecompressStreamAsync(CkStream &strm);


	// Decompresses compressed byte data and returns the resulting string.
	// 
	// The decompressed bytes are converted to text using the Charset property.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool DecompressString(CkByteData &data, CkString &outStr);

	// Decompresses compressed byte data and returns the resulting string.
	// 
	// The decompressed bytes are converted to text using the Charset property.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	const char *decompressString(CkByteData &data);

	// Decompresses compressed data supplied as an encoded string and returns the
	// resulting text.
	// 
	// The input string is decoded according to EncodingMode, then decompressed. The
	// resulting bytes are converted to text using Charset.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	bool DecompressStringENC(const char *encodedCompressedData, CkString &outStr);

	// Decompresses compressed data supplied as an encoded string and returns the
	// resulting text.
	// 
	// The input string is decoded according to EncodingMode, then decompressed. The
	// resulting bytes are converted to text using Charset.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	const char *decompressStringENC(const char *encodedCompressedData);
	// Decompresses compressed data supplied as an encoded string and returns the
	// resulting text.
	// 
	// The input string is decoded according to EncodingMode, then decompressed. The
	// resulting bytes are converted to text using Charset.
	// 
	// This method is not FirstChunk / LastChunk aware.
	// 
	CkTask *DecompressStringENCAsync(const char *encodedCompressedData);


	// Decrypts and decompresses a file, writing the restored data to a destination
	// file.
	// 
	// This is the reverse operation of CompressEncryptFile.
	// 
	bool DecryptDecompressFile(CkJsonObject &cryptParams, const char *srcPath, const char *destPath);

	// Decrypts and decompresses a file, writing the restored data to a destination
	// file.
	// 
	// This is the reverse operation of CompressEncryptFile.
	// 
	CkTask *DecryptDecompressFileAsync(CkJsonObject &cryptParams, const char *srcPath, const char *destPath);


	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressBytes)
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool EndCompressBytes(CkByteData &outData);


	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressBytesENC)
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool EndCompressBytesENC(CkString &outStr);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressBytesENC)
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	const char *endCompressBytesENC(void);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressString)
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool EndCompressString(CkByteData &outData);


	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressStringENC)
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool EndCompressStringENC(CkString &outStr);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressStringENC)
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	const char *endCompressStringENC(void);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// (See BeginDecompressBytes)
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool EndDecompressBytes(CkByteData &outData);


	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressBytesENC)
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool EndDecompressBytesENC(CkByteData &outData);


	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// (See BeginDecompressString)
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool EndDecompressString(CkString &outStr);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// (See BeginDecompressString)
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	const char *endDecompressString(void);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressStringENC)
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	bool EndDecompressStringENC(CkString &outStr);

	// The Begin*, More*, and End* methods are replaced with the FirstChunk[1] and
	// LastChunk[2] properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr[3] and DecompressBd2[4].
	// 
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressStringENC)
	// 
	// 
	// References:
	// [1] #FirstChunk
	// [2] #LastChunk
	// [3] #CompressStr
	// [4] #DecompressBd2
	const char *endDecompressStringENC(void);

	// Loads the caller of the task's async method.
	bool LoadTaskCaller(CkTask &task);


	// (See BeginCompressBytes)
	bool MoreCompressBytes(CkByteData &data, CkByteData &outData);


	// (See BeginCompressBytes2)
	bool MoreCompressBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// (See BeginCompressBytesENC)
	bool MoreCompressBytesENC(CkByteData &data, CkString &outStr);

	// (See BeginCompressBytesENC)
	const char *moreCompressBytesENC(CkByteData &data);

	// (See BeginCompressString)
	bool MoreCompressString(const char *str, CkByteData &outData);


	// (See BeginCompressStringENC)
	bool MoreCompressStringENC(const char *str, CkString &outStr);

	// (See BeginCompressStringENC)
	const char *moreCompressStringENC(const char *str);

	// (See BeginDecompressBytes)
	bool MoreDecompressBytes(CkByteData &data, CkByteData &outData);


	// (See BeginDecompressBytes2)
	bool MoreDecompressBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressBytesENC)
	// 
	bool MoreDecompressBytesENC(const char *str, CkByteData &outData);


	// (See BeginDecompressString)
	bool MoreDecompressString(CkByteData &data, CkString &outStr);

	// (See BeginDecompressString)
	const char *moreDecompressString(CkByteData &data);

	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressStringENC)
	// 
	bool MoreDecompressStringENC(const char *str, CkString &outStr);

	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressStringENC)
	// 
	const char *moreDecompressStringENC(const char *str);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
