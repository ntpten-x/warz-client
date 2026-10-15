// CkSFtpDir.h: interface for the CkSFtpDir class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkSFtpDir_H
#define _CkSFtpDir_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkSFtpFile;
class CkTask;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkSFtpDir
class CK_VISIBLE_PUBLIC CkSFtpDir  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkSFtpDir(const CkSFtpDir &);
	CkSFtpDir &operator=(const CkSFtpDir &);

    public:
	CkSFtpDir(void);
	virtual ~CkSFtpDir(void);

	static CkSFtpDir *createNew(void);
	static CkSFtpDir *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the number of entries in this directory listing.
	// 
	// The count includes every item returned by the server, such as regular files,
	// directories, symbolic links, and special entries. Valid zero-based indexes range
	// from 0 through NumFilesAndDirs - 1.
	// 
	int get_NumFilesAndDirs(void);

	// Returns the original remote path used to create this directory listing.
	// 
	// This is the same path string that was supplied to the SFTP directory-open
	// operation. It identifies the requested directory and is retained with the
	// listing for later reference.
	// 
	void get_OriginalPath(CkString &str);
	// Returns the original remote path used to create this directory listing.
	// 
	// This is the same path string that was supplied to the SFTP directory-open
	// operation. It identifies the requested directory and is retained with the
	// listing for later reference.
	// 
	const char *originalPath(void);



	// ----------------------
	// Methods
	// ----------------------
	// Copies the metadata for the directory entry at the zero-based index into
	// fileObj.
	// 
	// The first entry is at index 0. Use NumFilesAndDirs[1] to determine the number of
	// available entries.
	// 
	// The populated SFtpFile object provides the entry name, type, size, timestamps,
	// ownership, permissions, and any additional attributes supplied by the SFTP
	// server.
	// 
	// Use GetFilename[2] when only the entry name is needed.
	// 
	// References:
	// [1] #NumFilesAndDirs
	// [2] #GetFilename
	bool FileAt(int index, CkSFtpFile &fileObj);


	// Returns the filename of the directory entry at the zero-based index.
	// 
	// The first entry is at index 0. Use NumFilesAndDirs[1] to determine the number of
	// available entries.
	// 
	// Use FileAt[2] when the application needs the full SFtpFile metadata rather than
	// only the entry name.
	// 
	// References:
	// [1] #NumFilesAndDirs
	// [2] #FileAt
	bool GetFilename(int index, CkString &outStr);

	// Returns the filename of the directory entry at the zero-based index.
	// 
	// The first entry is at index 0. Use NumFilesAndDirs[1] to determine the number of
	// available entries.
	// 
	// Use FileAt[2] when the application needs the full SFtpFile metadata rather than
	// only the entry name.
	// 
	// References:
	// [1] #NumFilesAndDirs
	// [2] #FileAt
	const char *getFilename(int index);
	// Returns the filename of the directory entry at the zero-based index.
	// 
	// The first entry is at index 0. Use NumFilesAndDirs[1] to determine the number of
	// available entries.
	// 
	// Use FileAt[2] when the application needs the full SFtpFile metadata rather than
	// only the entry name.
	// 
	// References:
	// [1] #NumFilesAndDirs
	// [2] #FileAt
	const char *filename(int index);


	// Deprecated: Use FileAt[1] instead.
	// 
	// Returns an SFtpFile object containing the metadata for the directory entry at
	// the zero-based index.
	// 
	// The first entry is at index 0. Use NumFilesAndDirs[2] to determine the number of
	// available entries.
	// 
	// 
	// References:
	// [1] #FileAt
	// [2] #NumFilesAndDirs
	// The caller is responsible for deleting the object returned by this method.
	CkSFtpFile *GetFileObject(int index);


	// Loads this SFtpDir object from the result of a completed asynchronous Task.
	// 
	// The task must represent an asynchronous SFTP operation whose result is a
	// directory listing. Call this method after the task has finished to transfer the
	// listing data into the current object.
	// 
	bool LoadTaskResult(CkTask &task);


	// Reorders the files and subdirectories in this listing according to field.
	// 
	// Set ascending to true for ascending order or false for descending order. The
	// new order is used by index-based methods such as GetFilename[1] and FileAt[2].
	// 
	// +------------------+------------------------------------------------------+
	// |      field       |                       Sort key                       |
	// +==================+======================================================+
	// | filename         | Filename using the normal case-sensitive comparison. |
	// +------------------+------------------------------------------------------+
	// | filenameNoCase   | Filename using a case-insensitive comparison.        |
	// +------------------+------------------------------------------------------+
	// | lastModifiedTime | Last-modified date and time.                         |
	// +------------------+------------------------------------------------------+
	// | lastAccessTime   | Last-access date and time.                           |
	// +------------------+------------------------------------------------------+
	// | lastCreateTime   | Creation date and time.                              |
	// +------------------+------------------------------------------------------+
	// | size             | Entry size in bytes.                                 |
	// +------------------+------------------------------------------------------+
	// 
	// 
	// References:
	// [1] #GetFilename
	// [2] #FileAt
	void Sort(const char *field, bool ascending);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
