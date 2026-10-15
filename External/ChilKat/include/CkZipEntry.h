// CkZipEntry.h: interface for the CkZipEntry class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkZipEntry_H
#define _CkZipEntry_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkByteData;
class CkDateTime;
class CkBinData;
class CkStringBuilder;
class CkStream;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkZipEntry
class CK_VISIBLE_PUBLIC CkZipEntry  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkZipEntry(const CkZipEntry &);
	CkZipEntry &operator=(const CkZipEntry &);

    public:
	CkZipEntry(void);
	virtual ~CkZipEntry(void);

	static CkZipEntry *createNew(void);
	static CkZipEntry *createNew2(int progLang);
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
	// Gets or sets the comment stored in the ZIP archive for this entry.
	// 
	void get_Comment(CkString &str);
	// Gets or sets the comment stored in the ZIP archive for this entry.
	// 
	const char *comment(void);
	// Gets or sets the comment stored in the ZIP archive for this entry.
	// 
	void put_Comment(const char *newVal);

	// The compressed size of this entry, in bytes.
	// 
	// For mapped entries (entries already contained within an opened ZIP archive),
	// this property contains the actual compressed size stored within the ZIP.
	// 
	// For file entries or data entries that have not yet been written to a ZIP
	// archive, compression has not yet occurred. In these cases, this property
	// contains:
	// 
	//     * The current uncompressed data size for data entries.
	//     * The cached filesystem file size for referenced file entries.
	// 
	// After the ZIP archive is written, the entries become mapped entries, and this
	// property then reflects the actual compressed size stored in the ZIP archive.
	// 
	unsigned long get_CompressedLength(void);

	// The compressed size of this entry, in bytes, as a 64-bit integer.
	// 
	// For mapped entries (entries already contained within an opened ZIP archive),
	// this property contains the actual compressed size stored within the ZIP.
	// 
	// For file entries or data entries that have not yet been written to a ZIP
	// archive, compression has not yet occurred. In these cases, this property
	// contains:
	// 
	//     * The current uncompressed data size for data entries.
	//     * The cached filesystem file size for referenced file entries.
	// 
	// After the ZIP archive is written, the entries become mapped entries, and this
	// property then reflects the actual compressed size stored in the ZIP archive.
	// 
	// Use this property when sizes may exceed the range of a 32-bit integer.
	// 
	__int64 get_CompressedLength64(void);

	// The compressed size of this entry as a decimal string.
	// 
	// For mapped entries (entries already contained within an opened ZIP archive),
	// this property contains the actual compressed size stored within the ZIP.
	// 
	// For file entries or data entries that have not yet been written to a ZIP
	// archive, compression has not yet occurred. In these cases, this property
	// contains:
	// 
	//     * The current uncompressed data size for data entries.
	//     * The cached filesystem file size for referenced file entries.
	// 
	// After the ZIP archive is written, the entries become mapped entries, and this
	// property then reflects the actual compressed size stored in the ZIP archive.
	// 
	// This property is useful when sizes may exceed the range of a 32-bit integer.
	// 
	void get_CompressedLengthStr(CkString &str);
	// The compressed size of this entry as a decimal string.
	// 
	// For mapped entries (entries already contained within an opened ZIP archive),
	// this property contains the actual compressed size stored within the ZIP.
	// 
	// For file entries or data entries that have not yet been written to a ZIP
	// archive, compression has not yet occurred. In these cases, this property
	// contains:
	// 
	//     * The current uncompressed data size for data entries.
	//     * The cached filesystem file size for referenced file entries.
	// 
	// After the ZIP archive is written, the entries become mapped entries, and this
	// property then reflects the actual compressed size stored in the ZIP archive.
	// 
	// This property is useful when sizes may exceed the range of a 32-bit integer.
	// 
	const char *compressedLengthStr(void);

	// Gets or sets the compression level for this entry.
	// 
	// A value of 0 means no compression, and a value of 9 means maximum compression.
	// 
	// The default value is 6.
	// 
	int get_CompressionLevel(void);
	// Gets or sets the compression level for this entry.
	// 
	// A value of 0 means no compression, and a value of 9 means maximum compression.
	// 
	// The default value is 6.
	// 
	void put_CompressionLevel(int newVal);

	// Gets or sets the compression method used for this entry.
	// 
	//     * 0 means no compression.
	//     * 8 means Deflate compression.
	// 
	// Deflate is the standard compression algorithm used by common ZIP utilities such
	// as WinZip.
	// 
	int get_CompressionMethod(void);
	// Gets or sets the compression method used for this entry.
	// 
	//     * 0 means no compression.
	//     * 8 means Deflate compression.
	// 
	// Deflate is the standard compression algorithm used by common ZIP utilities such
	// as WinZip.
	// 
	void put_CompressionMethod(int newVal);

	// The CRC value for this ZIP entry.
	// 
	// For AES-encrypted entries, the CRC value is 0.
	// 
	int get_Crc(void);

	// The AES encryption key length for this entry.
	// 
	// If this entry is AES encrypted, the value is 128, 192, or 256.
	// 
	// If this entry is not AES encrypted, the value is 0.
	// 
	int get_EncryptionKeyLen(void);

	// A unique identifier assigned to this entry while the ZIP object is instantiated
	// in memory.
	// 
	// This ID can be used to retrieve the same entry later with Zip.EntryById.
	// 
	int get_EntryID(void);

	// Indicates the origin and current state of this ZIP entry.
	// 
	//     * 0 — Mapped Entry: an entry that already exists in an open ZIP file.
	//     * 1 — File Entry: a file in the local filesystem that has been referenced,
	//     but not yet read or compressed.
	//     * 2 — Data Entry: an entry containing uncompressed data already held in
	//     memory.
	//     * 3 — Null Entry: an entry that no longer exists in the ZIP archive.
	//     * 4 — New Directory Entry: a directory entry added to the ZIP object.
	// 
	// When the ZIP archive is written by calling WriteZip or WriteToMemory, entries
	// are transformed into mapped entries. In other words, after writing, they point
	// to compressed data contained in the newly created or rewritten ZIP archive.
	// 
	int get_EntryType(void);

	// Gets or sets the local last-modified date/time for this ZIP entry in RFC 822
	// string format.
	// 
	// Example RFC 822 date/time strings:
	// 
	//     Tue, 15 Nov 1994 12:45:26 GMT
	//     Fri, 05 Jan 2024 18:30:00 -0500
	// 
	// The timezone may be specified either as a named timezone such as GMT, or as a
	// numeric UTC offset such as -0500.
	// 
	void get_FileDateTimeStr(CkString &str);
	// Gets or sets the local last-modified date/time for this ZIP entry in RFC 822
	// string format.
	// 
	// Example RFC 822 date/time strings:
	// 
	//     Tue, 15 Nov 1994 12:45:26 GMT
	//     Fri, 05 Jan 2024 18:30:00 -0500
	// 
	// The timezone may be specified either as a named timezone such as GMT, or as a
	// numeric UTC offset such as -0500.
	// 
	const char *fileDateTimeStr(void);
	// Gets or sets the local last-modified date/time for this ZIP entry in RFC 822
	// string format.
	// 
	// Example RFC 822 date/time strings:
	// 
	//     Tue, 15 Nov 1994 12:45:26 GMT
	//     Fri, 05 Jan 2024 18:30:00 -0500
	// 
	// The timezone may be specified either as a named timezone such as GMT, or as a
	// numeric UTC offset such as -0500.
	// 
	void put_FileDateTimeStr(const char *newVal);

	// Gets or sets the filename, including any relative path, stored for this entry
	// inside the ZIP archive.
	// 
	// Changing this property changes the path/name that will appear in the ZIP
	// archive. It does not rename a source file in the local filesystem.
	// 
	void get_FileName(CkString &str);
	// Gets or sets the filename, including any relative path, stored for this entry
	// inside the ZIP archive.
	// 
	// Changing this property changes the path/name that will appear in the ZIP
	// archive. It does not rename a source file in the local filesystem.
	// 
	const char *fileName(void);
	// Gets or sets the filename, including any relative path, stored for this entry
	// inside the ZIP archive.
	// 
	// Changing this property changes the path/name that will appear in the ZIP
	// archive. It does not rename a source file in the local filesystem.
	// 
	void put_FileName(const char *newVal);

	// Returns the raw filename bytes found in the ZIP entry, encoded as a hexadecimal
	// string.
	// 
	// This can be useful for diagnosing filename encoding issues.
	// 
	void get_FileNameHex(CkString &str);
	// Returns the raw filename bytes found in the ZIP entry, encoded as a hexadecimal
	// string.
	// 
	// This can be useful for diagnosing filename encoding issues.
	// 
	const char *fileNameHex(void);

	// The interval in milliseconds between each AbortCheck[1] event callback, which
	// enables an application to abort certain method calls before they complete. By
	// default, HeartbeatMs is set to 0, meaning no AbortCheck event callbacks will
	// trigger.
	// 
	// References:
	// [1] #AbortCheck
	int get_HeartbeatMs(void);
	// The interval in milliseconds between each AbortCheck[1] event callback, which
	// enables an application to abort certain method calls before they complete. By
	// default, HeartbeatMs is set to 0, meaning no AbortCheck event callbacks will
	// trigger.
	// 
	// References:
	// [1] #AbortCheck
	void put_HeartbeatMs(int newVal);

	// Indicates whether this ZIP entry is AES encrypted.
	// 
	// This property can be true only for entries already contained in a ZIP archive,
	// such as entries obtained after calling OpenZip, OpenBd, or OpenFromMemory.
	// 
	// If the entry is not AES encrypted, the property is false.
	// 
	bool get_IsAesEncrypted(void);

	// Indicates whether this ZIP entry is a directory entry.
	// 
	// The value is true if the entry represents a directory, and false if it
	// represents a file.
	// 
	bool get_IsDirectory(void);

	// Gets or sets the text flag in the internal file attributes for this ZIP entry.
	// 
	// This flag indicates whether the entry contents should be considered text rather
	// than binary data.
	// 
	// The flag is informational and does not need to be accurate for normal ZIP
	// processing. It is provided for compatibility with applications that may be
	// sensitive to this attribute.
	// 
	bool get_TextFlag(void);
	// Gets or sets the text flag in the internal file attributes for this ZIP entry.
	// 
	// This flag indicates whether the entry contents should be considered text rather
	// than binary data.
	// 
	// The flag is informational and does not need to be accurate for normal ZIP
	// processing. It is provided for compatibility with applications that may be
	// sensitive to this attribute.
	// 
	void put_TextFlag(bool newVal);

	// The uncompressed size of this entry, in bytes.
	// 
	unsigned long get_UncompressedLength(void);

	// The uncompressed size of this entry, in bytes, as a 64-bit integer.
	// 
	// Use this property when the uncompressed size may exceed the range of a 32-bit
	// integer.
	// 
	__int64 get_UncompressedLength64(void);

	// The uncompressed size of this ZIP entry as a decimal string.
	// 
	// This is useful when the uncompressed size may be larger than what can safely be
	// represented by a 32-bit integer.
	// 
	void get_UncompressedLengthStr(CkString &str);
	// The uncompressed size of this ZIP entry as a decimal string.
	// 
	// This is useful when the uncompressed size may be larger than what can safely be
	// represented by a 32-bit integer.
	// 
	const char *uncompressedLengthStr(void);



	// ----------------------
	// Methods
	// ----------------------
	// Appends binary data to this ZIP entry's file contents.
	// 
	// If this entry is already a Data Entry (EntryType = 2), then the bytes in inData
	// are appended directly to the existing uncompressed in-memory data.
	// 
	// If this entry is not already a Data Entry, then the entry is first converted
	// into a Data Entry before the new data is appended.
	// 
	//     * If the entry is a mapped entry (EntryType = 0), the compressed ZIP entry
	//     data is first inflated into memory. The new data is then appended, and the entry
	//     becomes a Data Entry containing the combined uncompressed data.
	//     * If the entry is a file entry (EntryType = 1), the referenced filesystem
	//     file is first loaded into memory. The new data is then appended, and the entry
	//     becomes a Data Entry containing the combined data.
	// 
	// After this method is called, the entry contents exist entirely as uncompressed
	// in-memory data associated with the ZipEntry object.
	// 
	bool AppendData(CkByteData &inData);

	// Appends binary data to this ZIP entry's file contents.
	// 
	// If this entry is already a Data Entry (EntryType = 2), then the bytes in inData
	// are appended directly to the existing uncompressed in-memory data.
	// 
	// If this entry is not already a Data Entry, then the entry is first converted
	// into a Data Entry before the new data is appended.
	// 
	//     * If the entry is a mapped entry (EntryType = 0), the compressed ZIP entry
	//     data is first inflated into memory. The new data is then appended, and the entry
	//     becomes a Data Entry containing the combined uncompressed data.
	//     * If the entry is a file entry (EntryType = 1), the referenced filesystem
	//     file is first loaded into memory. The new data is then appended, and the entry
	//     becomes a Data Entry containing the combined data.
	// 
	// After this method is called, the entry contents exist entirely as uncompressed
	// in-memory data associated with the ZipEntry object.
	// 
	CkTask *AppendDataAsync(CkByteData &inData);


	// Appends text data to this ZIP entry's file contents.
	// 
	// The text is converted to bytes using the character encoding specified by
	// charset, such as utf-8, utf-16, or ansi.
	// 
	// If this entry is already a Data Entry (EntryType = 2), then the encoded bytes
	// are appended directly to the existing uncompressed in-memory data.
	// 
	// If this entry is not already a Data Entry, then the entry is first converted
	// into a Data Entry before the new text data is appended.
	// 
	//     * If the entry is a mapped entry (EntryType = 0), the compressed ZIP entry
	//     data is first inflated into memory. The new text data is then appended, and the
	//     entry becomes a Data Entry containing the combined uncompressed data.
	//     * If the entry is a file entry (EntryType = 1), the referenced filesystem
	//     file is first loaded into memory. The new text data is then appended, and the
	//     entry becomes a Data Entry containing the combined data.
	// 
	// After this method is called, the entry contents exist entirely as uncompressed
	// in-memory data associated with the ZipEntry object.
	// 
	bool AppendString(const char *strContent, const char *charset);

	// Appends text data to this ZIP entry's file contents.
	// 
	// The text is converted to bytes using the character encoding specified by
	// charset, such as utf-8, utf-16, or ansi.
	// 
	// If this entry is already a Data Entry (EntryType = 2), then the encoded bytes
	// are appended directly to the existing uncompressed in-memory data.
	// 
	// If this entry is not already a Data Entry, then the entry is first converted
	// into a Data Entry before the new text data is appended.
	// 
	//     * If the entry is a mapped entry (EntryType = 0), the compressed ZIP entry
	//     data is first inflated into memory. The new text data is then appended, and the
	//     entry becomes a Data Entry containing the combined uncompressed data.
	//     * If the entry is a file entry (EntryType = 1), the referenced filesystem
	//     file is first loaded into memory. The new text data is then appended, and the
	//     entry becomes a Data Entry containing the combined data.
	// 
	// After this method is called, the entry contents exist entirely as uncompressed
	// in-memory data associated with the ZipEntry object.
	// 
	CkTask *AppendStringAsync(const char *strContent, const char *charset);


	// Returns the compressed data for this ZIP entry as a byte array.
	// 
	// This method can only be called when the entry already contains compressed data.
	// In other words, the entry must be a mapped entry.
	// 
	// This is the case when an existing ZIP archive has been opened, or after a ZIP
	// archive has been written using WriteZip or WriteToMemory.
	// 
	// If the entry was added using methods such as AppendData, AppendFiles, or
	// AddFile, it does not yet contain compressed data. The entry becomes a mapped
	// entry after the ZIP archive is written.
	// 
	bool Copy(CkByteData &outData);


	// Returns the compressed data for this ZIP entry as a Base64-encoded string.
	// 
	// This method can only be used when the entry already contains compressed data,
	// meaning the entry is a mapped entry.
	// 
	// This is possible for entries from a ZIP archive that has already been opened, or
	// after writing a ZIP archive while it remains open.
	// 
	bool CopyToBase64(CkString &outStr);

	// Returns the compressed data for this ZIP entry as a Base64-encoded string.
	// 
	// This method can only be used when the entry already contains compressed data,
	// meaning the entry is a mapped entry.
	// 
	// This is possible for entries from a ZIP archive that has already been opened, or
	// after writing a ZIP archive while it remains open.
	// 
	const char *copyToBase64(void);

	// Returns the compressed data for this ZIP entry as a hexadecimal encoded string.
	// 
	// This method can only be used when the entry already contains compressed data,
	// meaning the entry is a mapped entry.
	// 
	// This is possible for entries from a ZIP archive that has already been opened, or
	// after writing a ZIP archive while it remains open.
	// 
	bool CopyToHex(CkString &outStr);

	// Returns the compressed data for this ZIP entry as a hexadecimal encoded string.
	// 
	// This method can only be used when the entry already contains compressed data,
	// meaning the entry is a mapped entry.
	// 
	// This is possible for entries from a ZIP archive that has already been opened, or
	// after writing a ZIP archive while it remains open.
	// 
	const char *copyToHex(void);

	// Extracts this ZIP entry beneath the specified base directory.
	// 
	// The entry is extracted according to the relative path stored in the ZIP archive.
	// 
	// For example, if the entry filename is docs/readme.txt and dirPath is
	// c:/temp/output, the file is extracted to c:/temp/output/docs/readme.txt.
	// 
	// Use ExtractInto instead if the file should be extracted directly into a specific
	// directory regardless of the path stored in the ZIP archive.
	// 
	bool Extract(const char *dirPath);

	// Extracts this ZIP entry beneath the specified base directory.
	// 
	// The entry is extracted according to the relative path stored in the ZIP archive.
	// 
	// For example, if the entry filename is docs/readme.txt and dirPath is
	// c:/temp/output, the file is extracted to c:/temp/output/docs/readme.txt.
	// 
	// Use ExtractInto instead if the file should be extracted directly into a specific
	// directory regardless of the path stored in the ZIP archive.
	// 
	CkTask *ExtractAsync(const char *dirPath);


	// Extracts this entry directly into the specified directory, ignoring any path
	// information stored in the ZIP entry.
	// 
	// For example, if the entry filename is docs/readme.txt and dirPath is
	// c:/temp/output, the file is extracted to c:/temp/output/readme.txt.
	// 
	// If this entry is a directory entry, nothing is extracted. To create the
	// directory represented by a directory entry, use Extract instead.
	// 
	bool ExtractInto(const char *dirPath);

	// Extracts this entry directly into the specified directory, ignoring any path
	// information stored in the ZIP entry.
	// 
	// For example, if the entry filename is docs/readme.txt and dirPath is
	// c:/temp/output, the file is extracted to c:/temp/output/readme.txt.
	// 
	// If this entry is a directory entry, nothing is extracted. To create the
	// directory represented by a directory entry, use Extract instead.
	// 
	CkTask *ExtractIntoAsync(const char *dirPath);


	// This method is deprecated and will be removed in a future version. Use the
	// FileDateTimeStr property instead. Returns the last-modified date/time of this
	// zip entry.
	// The caller is responsible for deleting the object returned by this method.
	CkDateTime *GetDt(void);


	// Updates this ZipEntry object so that it represents the next entry in the same
	// ZIP archive.
	// 
	// The next entry may be either a file entry or a directory entry.
	// 
	// Returns true if the object was advanced to the next entry. Returns false if
	// there are no more entries.
	// 
	bool GetNext(void);


	// Updates this ZipEntry object so that it represents the next entry in the ZIP
	// archive matching the specified wildcard pattern.
	// 
	// The wildcard character * matches zero or more characters. Matching is performed
	// against the full stored filename, including any relative path.
	// 
	// The matching entry may be either a file entry or a directory entry.
	// 
	// Returns true if a matching entry is found. Returns false if no further
	// matching entry exists.
	// 
	bool GetNextMatch(const char *pattern);


	// Inflates this ZIP entry directly into memory and returns the uncompressed data
	// as a byte array.
	// 
	// This method is used to obtain the uncompressed bytes of a single ZIP entry
	// without extracting it to a file.
	// 
	bool Inflate(CkByteData &outData);

	// Inflates this ZIP entry directly into memory and returns the uncompressed data
	// as a byte array.
	// 
	// This method is used to obtain the uncompressed bytes of a single ZIP entry
	// without extracting it to a file.
	// 
	CkTask *InflateAsync(void);


	// Loads the caller of the task's async method.
	bool LoadTaskCaller(CkTask &task);


	// This method is deprecated. Applications should instead call GetNext.
	// 
	// Return the next entry (file or directory) within the Zip
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntry *NextEntry(void);


	// This method is deprecated. Applications should instead call GetNextMatch.
	// 
	// Returns the next entry having a filename matching a pattern. The * characters
	// matches 0 or more of any character. The full filename, including path, is used
	// when matching against the pattern. A NULL is returned if nothing matches.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntry *NextMatchingEntry(const char *matchStr);


	// Replaces this ZIP entry's existing contents with new binary data.
	// 
	// The new data becomes the complete contents of the entry.
	// 
	bool ReplaceData(CkByteData &inData);


	// Replaces this ZIP entry's existing contents with new text data.
	// 
	// The text is converted to bytes using the character encoding specified by
	// charset, such as utf-8 or ansi.
	// 
	// The resulting bytes become the complete contents of the entry.
	// 
	bool ReplaceString(const char *strContent, const char *charset);


	// Sets the last-modified date/time for this ZIP entry.
	// 
	// The dt argument is a CkDateTime object containing the date/time to store for the
	// entry.
	// 
	void SetDt(CkDateTime &dt);


	// Unzips this entry directly into a BinData object.
	// 
	// The uncompressed bytes are written to binData.
	// 
	bool UnzipToBd(CkBinData &binData);

	// Unzips this entry directly into a BinData object.
	// 
	// The uncompressed bytes are written to binData.
	// 
	CkTask *UnzipToBdAsync(CkBinData &binData);


	// Unzips this entry as text and appends the result to a StringBuilder.
	// 
	// The srcCharset argument specifies how the uncompressed bytes should be
	// interpreted, such as utf-8, utf-16, or windows-1252.
	// 
	// The lineEndingBehavior argument controls line-ending conversion:
	// 
	//     * 0 — leave line endings unchanged.
	//     * 1 — convert all line endings to bare LF.
	//     * 2 — convert all line endings to CRLF.
	bool UnzipToSb(int lineEndingBehavior, const char *srcCharset, CkStringBuilder &sb);

	// Unzips this entry as text and appends the result to a StringBuilder.
	// 
	// The srcCharset argument specifies how the uncompressed bytes should be
	// interpreted, such as utf-8, utf-16, or windows-1252.
	// 
	// The lineEndingBehavior argument controls line-ending conversion:
	// 
	//     * 0 — leave line endings unchanged.
	//     * 1 — convert all line endings to bare LF.
	//     * 2 — convert all line endings to CRLF.
	CkTask *UnzipToSbAsync(int lineEndingBehavior, const char *srcCharset, CkStringBuilder &sb);


	// Unzips this entry to a stream.
	// 
	// If called synchronously, the toStream must have a sink, such as a file or
	// another stream object.
	// 
	// If called asynchronously, the foreground thread can read from the stream while
	// the unzip operation writes to it.
	// 
	bool UnzipToStream(CkStream &toStream);

	// Unzips this entry to a stream.
	// 
	// If called synchronously, the toStream must have a sink, such as a file or
	// another stream object.
	// 
	// If called asynchronously, the foreground thread can read from the stream while
	// the unzip operation writes to it.
	// 
	CkTask *UnzipToStreamAsync(CkStream &toStream);


	// Inflates this entry and returns the uncompressed data as a string.
	// 
	// The srcCharset argument specifies how the uncompressed bytes should be
	// interpreted, such as utf-8, utf-16, or windows-1252.
	// 
	// The lineEndingBehavior argument controls line-ending conversion:
	// 
	//     * 0 — leave line endings unchanged.
	//     * 1 — convert all line endings to bare LF.
	//     * 2 — convert all line endings to CRLF.
	bool UnzipToString(int lineEndingBehavior, const char *srcCharset, CkString &outStr);

	// Inflates this entry and returns the uncompressed data as a string.
	// 
	// The srcCharset argument specifies how the uncompressed bytes should be
	// interpreted, such as utf-8, utf-16, or windows-1252.
	// 
	// The lineEndingBehavior argument controls line-ending conversion:
	// 
	//     * 0 — leave line endings unchanged.
	//     * 1 — convert all line endings to bare LF.
	//     * 2 — convert all line endings to CRLF.
	const char *unzipToString(int lineEndingBehavior, const char *srcCharset);
	// Inflates this entry and returns the uncompressed data as a string.
	// 
	// The srcCharset argument specifies how the uncompressed bytes should be
	// interpreted, such as utf-8, utf-16, or windows-1252.
	// 
	// The lineEndingBehavior argument controls line-ending conversion:
	// 
	//     * 0 — leave line endings unchanged.
	//     * 1 — convert all line endings to bare LF.
	//     * 2 — convert all line endings to CRLF.
	CkTask *UnzipToStringAsync(int lineEndingBehavior, const char *srcCharset);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
