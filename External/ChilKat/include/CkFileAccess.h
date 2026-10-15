// CkFileAccess.h: interface for the CkFileAccess class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkFileAccess_H
#define _CkFileAccess_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkBinData;
class CkStringBuilder;
class CkByteData;
class CkDateTime;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkFileAccess
class CK_VISIBLE_PUBLIC CkFileAccess  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkFileAccess(const CkFileAccess &);
	CkFileAccess &operator=(const CkFileAccess &);

    public:
	CkFileAccess(void);
	virtual ~CkFileAccess(void);

	static CkFileAccess *createNew(void);
	static CkFileAccess *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the current working directory of the calling process. Relative file and
	// directory paths are resolved against this process-wide working directory.
	// 
	// Process-wide setting: The working directory belongs to the process, not to an
	// individual FileAccess object. Changing it can therefore affect relative-path
	// behavior elsewhere in the application.
	void get_CurrentDir(CkString &str);
	// Returns the current working directory of the calling process. Relative file and
	// directory paths are resolved against this process-wide working directory.
	// 
	// Process-wide setting: The working directory belongs to the process, not to an
	// individual FileAccess object. Changing it can therefore affect relative-path
	// behavior elsewhere in the application.
	const char *currentDir(void);

	// Returns true when the currently open file is positioned at end-of-file;
	// otherwise returns false.
	// 
	// Open-file state: This property applies to the file opened by OpenForRead,
	// OpenForWrite, OpenForReadWrite, OpenForAppend, or FileOpen.
	bool get_EndOfFile(void);

	// Provides the detailed open-error code from the most recent call to FileOpen,
	// OpenForRead, OpenForWrite, OpenForReadWrite, or OpenForAppend.
	// 
	// +------+-----------------------------------------------------------------------+
	// | Code |                                Meaning                                |
	// +======+=======================================================================+
	// | 0    | Success; no open error.                                               |
	// +------+-----------------------------------------------------------------------+
	// | 1    | Access denied.                                                        |
	// +------+-----------------------------------------------------------------------+
	// | 2    | File not found.                                                       |
	// +------+-----------------------------------------------------------------------+
	// | 3    | General, non-specific open error.                                     |
	// +------+-----------------------------------------------------------------------+
	// | 4    | File already exists.                                                  |
	// +------+-----------------------------------------------------------------------+
	// | 5    | The path refers to a directory and the requested access involves      |
	// |      | writing.                                                              |
	// +------+-----------------------------------------------------------------------+
	// | 6    | Too many symbolic links were encountered while resolving the path.    |
	// +------+-----------------------------------------------------------------------+
	// | 7    | The process already has the maximum number of files open.             |
	// +------+-----------------------------------------------------------------------+
	// | 8    | The pathname is too long.                                             |
	// +------+-----------------------------------------------------------------------+
	// | 9    | The system-wide limit on open files has been reached.                 |
	// +------+-----------------------------------------------------------------------+
	// | 10   | The pathname refers to a device special file for which no             |
	// |      | corresponding device exists.                                          |
	// +------+-----------------------------------------------------------------------+
	// | 11   | Insufficient kernel memory was available.                             |
	// +------+-----------------------------------------------------------------------+
	// | 12   | A file was to be created, but the containing device has no space      |
	// |      | available.                                                            |
	// +------+-----------------------------------------------------------------------+
	// | 13   | A pathname component expected to be a directory is not a directory.   |
	// +------+-----------------------------------------------------------------------+
	// | 14   | The regular file is too large to be opened because of an              |
	// |      | operating-system limitation.                                          |
	// +------+-----------------------------------------------------------------------+
	// | 15   | The path is on a read-only filesystem and write access was requested. |
	// +------+-----------------------------------------------------------------------+
	// 
	// Use with FileOpenErrorMsg: FileOpenError is useful for programmatic handling;
	// FileOpenErrorMsg provides the corresponding human-readable message.
	int get_FileOpenError(void);

	// Returns the human-readable message corresponding to FileOpenError for the most
	// recent file-open attempt.
	// 
	void get_FileOpenErrorMsg(CkString &str);
	// Returns the human-readable message corresponding to FileOpenError for the most
	// recent file-open attempt.
	// 
	const char *fileOpenErrorMsg(void);

	// Windows only. If true, OpenForAppend, OpenForRead, OpenForReadWrite, and
	// OpenForWrite request exclusive access to the file. Other processes are prevented
	// from opening the file until FileClose releases the handle. The default is
	// false.
	// 
	// File sharing: Windows file sharing is established when the file handle is
	// opened. Set this property before calling an OpenFor* method.
	bool get_LockFileOnOpen(void);
	// Windows only. If true, OpenForAppend, OpenForRead, OpenForReadWrite, and
	// OpenForWrite request exclusive access to the file. Other processes are prevented
	// from opening the file until FileClose releases the handle. The default is
	// false.
	// 
	// File sharing: Windows file sharing is established when the file handle is
	// opened. Set this property before calling an OpenFor* method.
	void put_LockFileOnOpen(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Appends text to the currently open file after converting the string to the
	// legacy ANSI character encoding used by Chilkat for the platform.
	// 
	// Character encoding: Use AppendText or AppendSb when an explicit encoding such as
	// utf-8 is preferred.
	bool AppendAnsi(const char *text);


	// Appends all bytes contained in bd to the currently open file without text
	// conversion.
	// 
	bool AppendBd(CkBinData &bd);


	// Appends the text contained in sb to the currently open file using the character
	// encoding specified by charset.
	// 
	bool AppendSb(CkStringBuilder &sb, const char *charset);


	// Appends str to the currently open file after encoding the text with the
	// character set named by charset, such as utf-8 or iso-8859-1.
	// 
	bool AppendText(const char *str, const char *charset);


	// Appends the UTF-16 little-endian byte-order mark to the currently open file. The
	// two bytes written are FF FE.
	// 
	// BOM placement: A BOM normally belongs at the beginning of a text file. This
	// method appends bytes at the current write position, so call it before writing
	// text when creating a new UTF-16LE file.
	bool AppendUnicodeBOM(void);


	// Appends the UTF-8 byte-order mark to the currently open file. The three bytes
	// written are EF BB BF.
	// 
	// UTF-8 BOM: A UTF-8 BOM is optional. Some software uses it as an encoding
	// signature, while other software expects BOM-less UTF-8.
	bool AppendUtf8BOM(void);


	// Ensures that the directory portion of filePath exists. Any missing parent
	// directories are created; the final path component is treated as a filename and
	// is not created as a directory.
	// 
	// Difference from DirEnsureExists: Use DirAutoCreate when you have a file path.
	// Use DirEnsureExists when the argument itself is a directory path.
	bool DirAutoCreate(const char *filePath);


	// Creates the directory specified by dirPath. Parent directories must already
	// exist; use DirEnsureExists when missing parent directories should also be
	// created.
	// 
	bool DirCreate(const char *dirPath);


	// Deletes the directory specified by dirPath. The directory must be empty; use
	// TreeDelete to recursively delete a directory and its contents.
	// 
	bool DirDelete(const char *dirPath);


	// Ensures that the complete directory path dirPath exists, creating missing
	// directories along the path as needed.
	// 
	bool DirEnsureExists(const char *dirPath);


	// Returns true if dirPath exists as a directory; otherwise returns false.
	// 
	bool DirExists(const char *dirPath);


	// Closes the currently open file and releases its operating-system file handle.
	// Any exclusive lock obtained through LockFileOnOpen is released at this time.
	// 
	void FileClose(void);


	// Compares filePath1 and filePath2 byte-for-byte and returns true only when
	// their contents are identical. File sizes are compared first; when sizes match,
	// the files are compared incrementally rather than being loaded entirely into
	// memory.
	// 
	// Binary comparison: The comparison is byte-oriented. Text encodings, line-ending
	// conventions, and Unicode normalization are not interpreted or normalized.
	bool FileContentsEqual(const char *filePath1, const char *filePath2);


	// Copies existingFilepath to newFilepath. If failIfExists is true and the
	// destination already exists, the copy fails instead of overwriting it.
	// 
	bool FileCopy(const char *existingFilepath, const char *newFilepath, bool failIfExists);


	// Deletes the file specified by filePath.
	// 
	bool FileDelete(const char *filePath);


	// Returns true if filePath exists; otherwise returns false. Use FileExists3
	// when the application must distinguish "does not exist" from "could not determine
	// because of an error."
	// 
	bool FileExists(const char *filePath);


	// Checks whether path exists and returns a three-state result: 1 if it exists, 0
	// if it does not exist, and -1 if Chilkat could not determine the result because
	// of permissions or another filesystem error.
	// 
	int FileExists3(const char *path);


	// Windows-specific low-level open. Opens filePath using arguments modeled after
	// the Win32 CreateFile API. For portable code, prefer OpenForRead, OpenForWrite,
	// OpenForReadWrite, or OpenForAppend.
	// 
	// +-------------+----------------------------------------------------------------+
	// |  Category   |                         Common values                          |
	// +=============+================================================================+
	// | Access      | GENERIC_READ = 0x80000000 , GENERIC_WRITE = 0x40000000         |
	// +-------------+----------------------------------------------------------------+
	// | Sharing     | FILE_SHARE_READ = 0x1 , FILE_SHARE_WRITE = 0x2                 |
	// +-------------+----------------------------------------------------------------+
	// | Disposition | CREATE_NEW=1 , CREATE_ALWAYS=2 , OPEN_EXISTING=3 ,             |
	// |             | OPEN_ALWAYS=4 , TRUNCATE_EXISTING=5                            |
	// +-------------+----------------------------------------------------------------+
	// 
	// Open failures: When this method fails, inspect FileOpenError and
	// FileOpenErrorMsg for the reason.
	bool FileOpen(const char *filePath, unsigned long accessMode, unsigned long shareMode, unsigned long createDisposition, unsigned long attributes);


	// Reads up to maxNumBytes bytes from the current file position and advances the
	// file position by the number of bytes actually read. An empty byte array is
	// returned on error.
	// 
	// End of file: A short read is normal near end-of-file. Use EndOfFile when the
	// caller needs to distinguish EOF state explicitly.
	bool FileRead(int maxNumBytes, CkByteData &outBytes);


	// Reads up to maxNumBytes bytes from the current file position and appends the
	// bytes to binData. The file position advances by the number of bytes read.
	// 
	// Destination behavior: Existing bytes already present in binData are preserved;
	// newly read bytes are appended.
	bool FileReadBd(int maxNumBytes, CkBinData &binData);


	// Renames or moves existingFilepath to newFilepath using the local filesystem.
	// 
	bool FileRename(const char *existingFilepath, const char *newFilepath);


	// Moves the current file position by offset bytes relative to origin.
	// 
	// +---+--------------------------------------------------------------+
	// | 0 | Offset from the beginning of the file.                       |
	// +---+--------------------------------------------------------------+
	// | 1 | Offset from the current file position.                       |
	// +---+--------------------------------------------------------------+
	// | 2 | Offset from end-of-file; negative offsets are commonly used. |
	// +---+--------------------------------------------------------------+
	// 
	// Random access: Seeking changes where the next read or write occurs; it does not
	// itself read, write, or resize the file.
	bool FileSeek(int offset, int origin);


	// Returns the file size in bytes as a signed 32-bit integer, or -1 on failure.
	// 
	// Large files: A signed 32-bit result cannot represent files larger than
	// approximately 2 GB. Use FileSize64 or FileSizeStr for large files.
	int FileSize(const char *filePath);


	// Returns the size of filePath in bytes as a signed 64-bit integer, or -1 on
	// failure.
	// 
	__int64 FileSize64(const char *filePath);


	// Returns the size of filePath in bytes as a decimal string. This avoids the range
	// limitation of a 32-bit integer return value.
	// 
	bool FileSizeStr(const char *filePath, CkString &outStr);

	// Returns the size of filePath in bytes as a decimal string. This avoids the range
	// limitation of a 32-bit integer return value.
	// 
	const char *fileSizeStr(const char *filePath);

	// Examines path and classifies the filesystem entry.
	// 
	// +----+--------------------------------------------------------------+
	// | -1 | Unable to determine because of permissions or another error. |
	// +----+--------------------------------------------------------------+
	// | 0  | Does not exist.                                              |
	// +----+--------------------------------------------------------------+
	// | 1  | Regular file.                                                |
	// +----+--------------------------------------------------------------+
	// | 2  | Directory.                                                   |
	// +----+--------------------------------------------------------------+
	// | 3  | Symbolic link.                                               |
	// +----+--------------------------------------------------------------+
	// | 4  | Windows shortcut.                                            |
	// +----+--------------------------------------------------------------+
	// | 99 | Another filesystem type.                                     |
	// +----+--------------------------------------------------------------+
	// 
	// Future values: Additional file-type codes may be added in future versions as
	// needed.
	int FileType(const char *path);


	// Writes all bytes in data at the current file position and advances the position
	// accordingly.
	// 
	bool FileWrite(CkByteData &data);


	// Writes exactly szByteData bytes beginning at pByteData to the currently open
	// file at the current file position.
	// 
	// C++ buffer contract: The caller must supply a valid readable buffer containing
	// at least szByteData bytes.
	bool FileWrite2(const void *pByteData, unsigned long szByteData);


	// Writes bytes from binData to the currently open file. offset selects the
	// starting byte within the BinData; numBytes selects how many bytes to write. Set
	// both to 0 to write the entire BinData, or set numBytes to 0 to write all
	// remaining bytes beginning at offset.
	// 
	bool FileWriteBd(CkBinData &binData, int offset, int numBytes);


	// Generates a fixed-width decimal block identifier from index, padded to length
	// characters, and then encodes those bytes using encoding (for example base64,
	// hex, or ascii). This utility was originally added for block-oriented uploads
	// such as Azure Blob block uploads.
	// 
	// Ordering: Fixed-width decimal identifiers preserve numeric ordering when
	// identifiers are compared lexically, provided the chosen width is large enough
	// for all indexes.
	bool GenBlockId(int index, int length, const char *encoding, CkString &outStr);

	// Generates a fixed-width decimal block identifier from index, padded to length
	// characters, and then encodes those bytes using encoding (for example base64,
	// hex, or ascii). This utility was originally added for block-oriented uploads
	// such as Azure Blob block uploads.
	// 
	// Ordering: Fixed-width decimal identifiers preserve numeric ordering when
	// identifiers are compared lexically, provided the chosen width is large enough
	// for all indexes.
	const char *genBlockId(int index, int length, const char *encoding);

	// Returns the directory portion of path according to Chilkat path-parsing rules.
	// 
	// GetDirectoryName('C:\MyDir\MySubDir\myfile.ext')  ->  'C:\MyDir\MySubDir\'
	// GetDirectoryName('C:\MyDir\MySubDir')             ->  'C:\MyDir\'
	// GetDirectoryName('C:\')                             ->  'C:\'
	bool GetDirectoryName(const char *path, CkString &outStr);

	// Returns the directory portion of path according to Chilkat path-parsing rules.
	// 
	// GetDirectoryName('C:\MyDir\MySubDir\myfile.ext')  ->  'C:\MyDir\MySubDir\'
	// GetDirectoryName('C:\MyDir\MySubDir')             ->  'C:\MyDir\'
	// GetDirectoryName('C:\')                             ->  'C:\'
	const char *getDirectoryName(const char *path);
	// Returns the directory portion of path according to Chilkat path-parsing rules.
	// 
	// GetDirectoryName('C:\MyDir\MySubDir\myfile.ext')  ->  'C:\MyDir\MySubDir\'
	// GetDirectoryName('C:\MyDir\MySubDir')             ->  'C:\MyDir\'
	// GetDirectoryName('C:\')                             ->  'C:\'
	const char *directoryName(const char *path);


	// Returns the filename extension portion of path, including the leading period. A
	// period appearing only in a directory name is not treated as the file extension.
	// 
	// GetExtension('C:\mydir.old\myfile.ext')  ->  '.ext'
	// GetExtension('C:\mydir.old\')            ->  ''
	bool GetExtension(const char *path, CkString &outStr);

	// Returns the filename extension portion of path, including the leading period. A
	// period appearing only in a directory name is not treated as the file extension.
	// 
	// GetExtension('C:\mydir.old\myfile.ext')  ->  '.ext'
	// GetExtension('C:\mydir.old\')            ->  ''
	const char *getExtension(const char *path);
	// Returns the filename extension portion of path, including the leading period. A
	// period appearing only in a directory name is not treated as the file extension.
	// 
	// GetExtension('C:\mydir.old\myfile.ext')  ->  '.ext'
	// GetExtension('C:\mydir.old\')            ->  ''
	const char *extension(const char *path);


	// Returns the final filename component of path, including its extension. If the
	// path ends with a directory separator, the returned filename is empty.
	// 
	// GetFileName('C:\mydir\myfile.ext')  ->  'myfile.ext'
	// GetFileName('C:\mydir\')            ->  ''
	bool GetFileName(const char *path, CkString &outStr);

	// Returns the final filename component of path, including its extension. If the
	// path ends with a directory separator, the returned filename is empty.
	// 
	// GetFileName('C:\mydir\myfile.ext')  ->  'myfile.ext'
	// GetFileName('C:\mydir\')            ->  ''
	const char *getFileName(const char *path);
	// Returns the final filename component of path, including its extension. If the
	// path ends with a directory separator, the returned filename is empty.
	// 
	// GetFileName('C:\mydir\myfile.ext')  ->  'myfile.ext'
	// GetFileName('C:\mydir\')            ->  ''
	const char *fileName(const char *path);


	// Returns the final filename component of path with its extension removed. If path
	// ends with a directory separator, the returned value is empty.
	// 
	// GetFileNameWithoutExtension('C:\mydir\myfile.ext')  ->  'myfile'
	// GetFileNameWithoutExtension('C:\mydir\')            ->  ''
	bool GetFileNameWithoutExtension(const char *path, CkString &outStr);

	// Returns the final filename component of path with its extension removed. If path
	// ends with a directory separator, the returned value is empty.
	// 
	// GetFileNameWithoutExtension('C:\mydir\myfile.ext')  ->  'myfile'
	// GetFileNameWithoutExtension('C:\mydir\')            ->  ''
	const char *getFileNameWithoutExtension(const char *path);
	// Returns the final filename component of path with its extension removed. If path
	// ends with a directory separator, the returned value is empty.
	// 
	// GetFileNameWithoutExtension('C:\mydir\myfile.ext')  ->  'myfile'
	// GetFileNameWithoutExtension('C:\mydir\')            ->  ''
	const char *fileNameWithoutExtension(const char *path);


	// Deprecated. Use GetFileTimeStr instead.
	// 
	// Returns one file timestamp as a CkDateTime, selected by which: 0 =
	// last-modified, 1 = last-access, 2 = creation.
	// 
	// Portability: Creation/birth time is not available on every filesystem. The
	// historical Chilkat behavior documented for Linux is to return the last-modified
	// time when creation time is unavailable.
	// The caller is responsible for deleting the object returned by this method.
	CkDateTime *GetFileTime(const char *path, int which);


	// Returns one file timestamp as an ISO 8601 UTC string in the form
	// YYYY-MM-DDTHH:MM:SSZ. The which argument selects 0 = last-modified, 1 =
	// last-access, or 2 = creation.
	// 
	// Portability: Creation/birth time is not available on every filesystem. The
	// documented Chilkat behavior on Linux is to return the last-modified time when
	// creation time is unavailable.
	bool GetFileTimeStr(const char *path, int which, CkString &outStr);

	// Returns one file timestamp as an ISO 8601 UTC string in the form
	// YYYY-MM-DDTHH:MM:SSZ. The which argument selects 0 = last-modified, 1 =
	// last-access, or 2 = creation.
	// 
	// Portability: Creation/birth time is not available on every filesystem. The
	// documented Chilkat behavior on Linux is to return the last-modified time when
	// creation time is unavailable.
	const char *getFileTimeStr(const char *path, int which);
	// Returns one file timestamp as an ISO 8601 UTC string in the form
	// YYYY-MM-DDTHH:MM:SSZ. The which argument selects 0 = last-modified, 1 =
	// last-access, or 2 = creation.
	// 
	// Portability: Creation/birth time is not available on every filesystem. The
	// documented Chilkat behavior on Linux is to return the last-modified time when
	// creation time is unavailable.
	const char *fileTimeStr(const char *path, int which);


	// Deprecated. Use GetFileTimeStr instead.
	// 
	// Returns the last-modified date/time for path as a CkDateTime. The documented
	// resolution of this legacy method is one second.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkDateTime *GetLastModified(const char *path);


	// Returns how many blockSize -byte blocks are required to cover the currently open
	// file. A partial final block counts as one block. Returns 0 for an empty file and
	// -1 if no file is open.
	// 
	// Calculation: Conceptually this is ceil(fileSize / blockSize) for a non-empty
	// file.
	int GetNumBlocks(int blockSize);


	// Generates a temporary pathname in dirPath using prefix and a random alphanumeric
	// suffix, in the general form prefix_xxxx.TMP. The returned pathname is guaranteed
	// not to already exist at the time it is generated.
	// 
	bool GetTempFilename(const char *dirPath, const char *prefix, CkString &outStr);

	// Generates a temporary pathname in dirPath using prefix and a random alphanumeric
	// suffix, in the general form prefix_xxxx.TMP. The returned pathname is guaranteed
	// not to already exist at the time it is generated.
	// 
	const char *getTempFilename(const char *dirPath, const char *prefix);
	// Generates a temporary pathname in dirPath using prefix and a random alphanumeric
	// suffix, in the general form prefix_xxxx.TMP. The returned pathname is guaranteed
	// not to already exist at the time it is generated.
	// 
	const char *tempFilename(const char *dirPath, const char *prefix);


	// Opens filePath for writing at end-of-file. The file is created if it does not
	// exist. Existing content is preserved, and the initial file position is at the
	// end.
	// 
	// Open failures: If the open/create operation fails, inspect FileOpenError and
	// FileOpenErrorMsg. On Windows, LockFileOnOpen can request exclusive access for
	// this method.
	bool OpenForAppend(const char *filePath);


	// Opens an existing filePath for reading. The file may contain text or binary data
	// and must already exist.
	// 
	// Open failures: If the open/create operation fails, inspect FileOpenError and
	// FileOpenErrorMsg. On Windows, LockFileOnOpen can request exclusive access for
	// this method.
	bool OpenForRead(const char *filePath);


	// Opens filePath for both reading and writing. The file is created if necessary.
	// Existing content is preserved, and the initial file position is at the
	// beginning.
	// 
	// Open failures: If the open/create operation fails, inspect FileOpenError and
	// FileOpenErrorMsg. On Windows, LockFileOnOpen can request exclusive access for
	// this method.
	bool OpenForReadWrite(const char *filePath);


	// Opens filePath for writing. The file is created if necessary; if it already
	// exists, it is truncated to zero length when opened.
	// 
	// Open failures: If the open/create operation fails, inspect FileOpenError and
	// FileOpenErrorMsg. On Windows, LockFileOnOpen can request exclusive access for
	// this method.
	bool OpenForWrite(const char *filePath);


	// Reads the entire file at filePath as binary data and returns an encoded textual
	// representation. Supported encoding names documented for this method include
	// base64, hex, qp, and url.
	// 
	// Encoding is not encryption: These encodings transform bytes into text; they do
	// not provide confidentiality.
	bool ReadBinaryToEncoded(const char *filePath, const char *encoding, CkString &outStr);

	// Reads the entire file at filePath as binary data and returns an encoded textual
	// representation. Supported encoding names documented for this method include
	// base64, hex, qp, and url.
	// 
	// Encoding is not encryption: These encodings transform bytes into text; they do
	// not provide confidentiality.
	const char *readBinaryToEncoded(const char *filePath, const char *encoding);

	// Reads the zero-based block blockIndex from the currently open file, where each
	// block is blockSize bytes. If the final block is shorter than blockSize, only the
	// remaining bytes are returned.
	// 
	bool ReadBlock(int blockIndex, int blockSize, CkByteData &outBytes);


	// Reads the zero-based block blockIndex from the currently open file, using
	// blockSize bytes per block, and appends the bytes to bd. A partial final block is
	// appended at its actual length.
	// 
	// Destination behavior: Existing contents of bd are preserved; the block bytes are
	// appended.
	bool ReadBlockBd(int blockIndex, int blockSize, CkBinData &bd);


	// Reads the entire file at filePath as raw bytes and returns the binary data.
	// 
	// Memory use: The whole file is loaded into memory. For very large files, use
	// OpenForRead together with FileReadBd or block-oriented methods.
	bool ReadEntireFile(const char *filePath, CkByteData &outBytes);


	// Reads the entire file at filePath, decodes its bytes using charset, and returns
	// the resulting text.
	// 
	// Charset matters: The charset controls byte-to-character conversion. Use the
	// encoding that actually represents the file; incorrect charset selection can
	// produce incorrect text or conversion failure.
	bool ReadEntireTextFile(const char *filePath, const char *charset, CkString &outStrFileContents);

	// Reads the entire file at filePath, decodes its bytes using charset, and returns
	// the resulting text.
	// 
	// Charset matters: The charset controls byte-to-character conversion. Use the
	// encoding that actually represents the file; incorrect charset selection can
	// produce incorrect text or conversion failure.
	const char *readEntireTextFile(const char *filePath, const char *charset);

	// Scans the currently open file for the next text fragment beginning with
	// beginMarker and ending with endMarker. The matched fragment, including both
	// markers, is decoded using charset and appended to sb. If startAtBeginning is
	// true, scanning restarts at the beginning of the file; otherwise it continues
	// after the previously matched fragment.
	// 
	// +----+------------------------------------+
	// | 1  | A fragment was found and appended. |
	// +----+------------------------------------+
	// | 0  | No matching fragment was found.    |
	// +----+------------------------------------+
	// | -1 | An error occurred while reading.   |
	// +----+------------------------------------+
	// 
	int ReadNextFragment(bool startAtBeginning, const char *beginMarker, const char *endMarker, const char *charset, CkStringBuilder &sb);


	// Reassembles a file previously divided by SplitFile. Parts are read from
	// partsDirPath using the supplied partPrefix and partExtension, and the combined
	// bytes are written to reassembledFilename.
	// 
	// Byte-for-byte reconstruction: Reassembly is a binary operation; no text decoding
	// or newline conversion is performed.
	bool ReassembleFile(const char *partsDirPath, const char *partPrefix, const char *partExtension, const char *reassembledFilename);


	// Reads the file at filePath as text using charset, replaces occurrences of
	// existingString with replacementString, writes the updated text back to the file,
	// and returns the number of replacements made.
	// 
	// Text operation: This is character-based replacement after decoding the file. It
	// is not suitable for arbitrary binary files.
	int ReplaceStrings(const char *filePath, const char *charset, const char *existingString, const char *replacementString);


	// Changes the current working directory of the calling process to dirPath.
	// 
	// Process-wide effect: The current directory is normally process-wide, so changing
	// it can affect relative paths used by other code or threads. Absolute paths avoid
	// that dependency.
	bool SetCurrentDir(const char *dirPath);


	// Sets the creation, last-access, and last-modified timestamps for filePath from
	// the supplied CkDateTime objects. On filesystems that do not support a
	// creation/birth time, createTime is ignored.
	// 
	// Filesystem differences: Timestamp availability and precision are filesystem- and
	// operating-system-dependent.
	bool SetFileTimes(const char *filePath, CkDateTime &createTime, CkDateTime &lastAccessTime, CkDateTime &lastModTime);


	// Sets the last-modified timestamp of filePath from lastModified. The precision
	// actually stored depends on the underlying filesystem.
	// 
	bool SetLastModified(const char *filePath, CkDateTime &lastModified);


	// Splits fileToSplit into sequential binary parts of up to partSize bytes and
	// writes them to destDir using partPrefix and partExtension. Use ReassembleFile to
	// reconstruct the original file.
	// 
	bool SplitFile(const char *fileToSplit, const char *partPrefix, const char *partExtension, int partSize, const char *destDir);


	// Creates a symbolic link at linkPath that refers to targetPath.
	// 
	// Windows note: A Windows symbolic link is not the same as a Windows shortcut.
	// Windows may require elevated privileges or an operating-system configuration
	// such as Developer Mode that permits unprivileged symbolic-link creation,
	// depending on system policy and how the application is launched.
	bool SymlinkCreate(const char *targetPath, const char *linkPath);


	// Returns the resolved target pathname for the symbolic link at linkPath. On
	// Windows, this method also understands Windows shortcut (.lnk) files and returns
	// the absolute target path.
	// 
	// Link vs. target: A symbolic link is a filesystem object that refers to another
	// path. A Windows shortcut is a separate shell-file format; Chilkat supports both
	// here even though they are different mechanisms.
	bool SymlinkTarget(const char *linkPath, CkString &outStr);

	// Returns the resolved target pathname for the symbolic link at linkPath. On
	// Windows, this method also understands Windows shortcut (.lnk) files and returns
	// the absolute target path.
	// 
	// Link vs. target: A symbolic link is a filesystem object that refers to another
	// path. A Windows shortcut is a separate shell-file format; Chilkat supports both
	// here even though they are different mechanisms.
	const char *symlinkTarget(const char *linkPath);

	// Recursively deletes the directory tree rooted at path, including contained files
	// and subdirectories.
	// 
	// Destructive operation: This operation is recursive and destructive. Ensure path
	// identifies the intended tree before calling it.
	bool TreeDelete(const char *path);


	// Truncates the currently open file at the current file position. Bytes at and
	// after that position are removed, making the current position the new
	// end-of-file.
	// 
	// Use with FileSeek: A common pattern is to seek to the desired new length and
	// then call Truncate.
	bool Truncate(void);


	// Creates or opens filePath, writes all bytes from fileData, and closes the file.
	// Existing file content is replaced.
	// 
	bool WriteEntireFile(const char *filePath, CkByteData &fileData);


	// Creates or opens filePath, encodes textData using charset, writes the resulting
	// bytes, and closes the file. Existing file content is replaced. If
	// includePreamble is true, an appropriate preamble/BOM is included for encodings
	// such as UTF-8 or UTF-16.
	// 
	// BOM terminology: A BOM is part of the byte representation of the text file; it
	// is not part of the application string itself.
	bool WriteEntireTextFile(const char *filePath, const char *textData, const char *charset, bool includedPreamble);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
