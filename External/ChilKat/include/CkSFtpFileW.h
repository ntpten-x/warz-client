// CkSFtpFileW.h: interface for the CkSFtpFileW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkSFtpFileW_H
#define _CkSFtpFileW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkDateTimeW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkSFtpFileW
class CK_VISIBLE_PUBLIC CkSFtpFileW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkSFtpFileW(const CkSFtpFileW &);
	CkSFtpFileW &operator=(const CkSFtpFileW &);

    public:
	CkSFtpFileW(void);
	virtual ~CkSFtpFileW(void);

	

	static CkSFtpFileW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the file creation date and time as an RFC 822-formatted string, such as
	// Fri, 21 Nov 1997 09:55:06 -0600.
	// 
	// Server requirement: Creation-time metadata is available only when the server
	// supports SFTP version 4 or later and provides this attribute.
	// 
	void get_CreateTimeStr(CkString &str);
	// Returns the file creation date and time as an RFC 822-formatted string, such as
	// Fri, 21 Nov 1997 09:55:06 -0600.
	// 
	// Server requirement: Creation-time metadata is available only when the server
	// supports SFTP version 4 or later and provides this attribute.
	// 
	const wchar_t *createTimeStr(void);

	// Returns the name of the directory entry. Depending on the entry type, this may
	// be a regular filename, directory name, symbolic-link name, or the name of
	// another special filesystem object.
	void get_Filename(CkString &str);
	// Returns the name of the directory entry. Depending on the entry type, this may
	// be a regular filename, directory name, symbolic-link name, or the name of
	// another special filesystem object.
	const wchar_t *filename(void);

	// Identifies the type of directory entry. The returned value is one of the
	// following:
	// 
	// +-------------+----------------------------------------------------------+
	// |    Value    |                         Meaning                          |
	// +=============+==========================================================+
	// | regular     | A regular file.                                          |
	// +-------------+----------------------------------------------------------+
	// | directory   | A directory.                                             |
	// +-------------+----------------------------------------------------------+
	// | symLink     | A symbolic link.                                         |
	// +-------------+----------------------------------------------------------+
	// | special     | A special file whose more specific type is not reported. |
	// +-------------+----------------------------------------------------------+
	// | unknown     | The type is unknown or was not provided by the server.   |
	// +-------------+----------------------------------------------------------+
	// | socket      | A socket.                                                |
	// +-------------+----------------------------------------------------------+
	// | charDevice  | A character device.                                      |
	// +-------------+----------------------------------------------------------+
	// | blockDevice | A block device.                                          |
	// +-------------+----------------------------------------------------------+
	// | fifo        | A FIFO (named pipe).                                     |
	// +-------------+----------------------------------------------------------+
	// 
	// The convenience properties IsRegular[1], IsDirectory[2], and IsSymLink[3] may be
	// used for the most common entry types.
	// 
	// 
	// References:
	// [1] #IsRegular
	// [2] #IsDirectory
	// [3] #IsSymLink
	void get_FileType(CkString &str);
	// Identifies the type of directory entry. The returned value is one of the
	// following:
	// 
	// +-------------+----------------------------------------------------------+
	// |    Value    |                         Meaning                          |
	// +=============+==========================================================+
	// | regular     | A regular file.                                          |
	// +-------------+----------------------------------------------------------+
	// | directory   | A directory.                                             |
	// +-------------+----------------------------------------------------------+
	// | symLink     | A symbolic link.                                         |
	// +-------------+----------------------------------------------------------+
	// | special     | A special file whose more specific type is not reported. |
	// +-------------+----------------------------------------------------------+
	// | unknown     | The type is unknown or was not provided by the server.   |
	// +-------------+----------------------------------------------------------+
	// | socket      | A socket.                                                |
	// +-------------+----------------------------------------------------------+
	// | charDevice  | A character device.                                      |
	// +-------------+----------------------------------------------------------+
	// | blockDevice | A block device.                                          |
	// +-------------+----------------------------------------------------------+
	// | fifo        | A FIFO (named pipe).                                     |
	// +-------------+----------------------------------------------------------+
	// 
	// The convenience properties IsRegular[1], IsDirectory[2], and IsSymLink[3] may be
	// used for the most common entry types.
	// 
	// 
	// References:
	// [1] #IsRegular
	// [2] #IsDirectory
	// [3] #IsSymLink
	const wchar_t *fileType(void);

	// Returns the numeric group ID associated with the file.
	int get_Gid(void);

	// Returns the textual group name associated with the file.
	// 
	// Server requirement: This attribute is available only when the server supports
	// SFTP version 4 or later and provides owner/group names.
	// 
	void get_Group(CkString &str);
	// Returns the textual group name associated with the file.
	// 
	// Server requirement: This attribute is available only when the server supports
	// SFTP version 4 or later and provides owner/group names.
	// 
	const wchar_t *group(void);

	// Returns true if the server marks the file as append-only. New data may be
	// added only at the end of the file; existing data cannot be overwritten through
	// normal file writes.
	// 
	// Server requirement: This attribute is defined for SFTP version 6 or later.
	// 
	bool get_IsAppendOnly(void);

	// Returns true if the server marks the file for inclusion in backup or archive
	// operations.
	// 
	// Server requirement: This attribute is defined for SFTP version 6 or later.
	// 
	bool get_IsArchive(void);

	// Applies to directories. Returns true when names within the directory should be
	// compared without regard to letter case.
	// 
	// Server requirement: This attribute is defined for SFTP version 6 or later.
	// 
	bool get_IsCaseInsensitive(void);

	// Returns true if the file is stored using transparent filesystem-level
	// compression on the server.
	// 
	// This attribute describes how the server stores the file. It does not change the
	// file bytes transferred through SFTP.
	// 
	// Server requirement: This attribute is defined for SFTP version 6 or later.
	// 
	bool get_IsCompressed(void);

	// Returns true if the directory entry is a directory.
	bool get_IsDirectory(void);

	// Returns true if the file is stored using transparent filesystem-level
	// encryption on the server.
	// 
	// This attribute describes storage at rest. It does not alter the file bytes
	// returned by read operations or accepted by write operations.
	// 
	// Server requirement: This attribute is defined for SFTP version 6 or later.
	// 
	bool get_IsEncrypted(void);

	// Returns true if the server marks the entry as hidden. Hidden entries are
	// normally omitted from user-facing displays unless the user specifically requests
	// them.
	bool get_IsHidden(void);

	// Returns true if the server marks the file as immutable. An immutable file
	// cannot normally be deleted, renamed, modified, or used as the target of a new
	// hard link.
	// 
	// Immutability is generally stronger than read-only status, the ordinary
	// permission mask, or an access-control list. On many systems, only a privileged
	// administrator can set or clear this attribute.
	// 
	// Server requirement: This attribute is defined for SFTP version 6 or later.
	// 
	bool get_IsImmutable(void);

	// Returns true if the server marks the file as read-only.
	// 
	// Server requirement: This attribute is defined for SFTP version 6 or later.
	// 
	bool get_IsReadOnly(void);

	// Returns true if the directory entry is a regular file rather than a directory,
	// symbolic link, device, socket, FIFO, or other special type.
	bool get_IsRegular(void);

	// Returns true if the server identifies the file as sparse. A sparse file can
	// contain unwritten regions, often called holes, that read as zero bytes without
	// consuming equivalent physical disk space.
	// 
	// For example, writing data at an offset of 10 MB may leave the region between the
	// previous end of file and that offset unallocated on disk.
	// 
	// Some servers store all files sparsely and may always set this flag. Other
	// servers cannot reliably determine whether a file is sparse, so a file may be
	// sparse even when this property is false.
	// 
	// Server requirement: This attribute is defined for SFTP version 6 or later.
	// 
	bool get_IsSparse(void);

	// Returns true if the directory entry is a symbolic link.
	bool get_IsSymLink(void);

	// Returns true if modifications to the file are committed synchronously to
	// server storage.
	// 
	// Server requirement: This attribute is defined for SFTP version 6 or later.
	// 
	bool get_IsSync(void);

	// Returns true if the server marks the file as part of the operating system.
	// 
	// Server requirement: This attribute is defined for SFTP version 6 or later.
	// 
	bool get_IsSystem(void);

	// Returns the file's last-access date and time as an RFC 822-formatted string,
	// such as Fri, 21 Nov 1997 09:55:06 -0600.
	void get_LastAccessTimeStr(CkString &str);
	// Returns the file's last-access date and time as an RFC 822-formatted string,
	// such as Fri, 21 Nov 1997 09:55:06 -0600.
	const wchar_t *lastAccessTimeStr(void);

	// Returns the file's last-modified date and time as an RFC 822-formatted string,
	// such as Fri, 21 Nov 1997 09:55:06 -0600.
	// 
	// Use LastModifiedTime[1] when a native date/time value is more convenient.
	// 
	// 
	// References:
	// [1] #LastModifiedTime
	void get_LastModifiedTimeStr(CkString &str);
	// Returns the file's last-modified date and time as an RFC 822-formatted string,
	// such as Fri, 21 Nov 1997 09:55:06 -0600.
	// 
	// Use LastModifiedTime[1] when a native date/time value is more convenient.
	// 
	// 
	// References:
	// [1] #LastModifiedTime
	const wchar_t *lastModifiedTimeStr(void);

	// Returns the textual owner name associated with the file.
	// 
	// Server requirement: This attribute is available only when the server supports
	// SFTP version 4 or later and provides owner/group names.
	// 
	void get_Owner(CkString &str);
	// Returns the textual owner name associated with the file.
	// 
	// Server requirement: This attribute is available only when the server supports
	// SFTP version 4 or later and provides owner/group names.
	// 
	const wchar_t *owner(void);

	// Returns the POSIX-style file-permission bit mask. The values correspond to the
	// permission and special-mode bits in the POSIX st_mode field.
	// 
	// +---------+-------------+----------------+
	// | Symbol  | Octal value |    Meaning     |
	// +=========+=============+================+
	// | S_IRUSR | 0400        | Owner read     |
	// +---------+-------------+----------------+
	// | S_IWUSR | 0200        | Owner write    |
	// +---------+-------------+----------------+
	// | S_IXUSR | 0100        | Owner execute  |
	// +---------+-------------+----------------+
	// | S_IRGRP | 0040        | Group read     |
	// +---------+-------------+----------------+
	// | S_IWGRP | 0020        | Group write    |
	// +---------+-------------+----------------+
	// | S_IXGRP | 0010        | Group execute  |
	// +---------+-------------+----------------+
	// | S_IROTH | 0004        | Others read    |
	// +---------+-------------+----------------+
	// | S_IWOTH | 0002        | Others write   |
	// +---------+-------------+----------------+
	// | S_IXOTH | 0001        | Others execute |
	// +---------+-------------+----------------+
	// | S_ISUID | 4000        | Set-user-ID    |
	// +---------+-------------+----------------+
	// | S_ISGID | 2000        | Set-group-ID   |
	// +---------+-------------+----------------+
	// | S_ISVTX | 1000        | Sticky bit     |
	// +---------+-------------+----------------+
	// 
	// Use bitwise AND operations to test individual permission bits.
	// 
	int get_Permissions(void);

	// Returns the file size in bytes as a 32-bit integer. Returns -1 when the size
	// cannot be represented by a 32-bit integer. Use Size64[1] or SizeStr[2] for
	// larger values.
	// 
	// References:
	// [1] #Size64
	// [2] #SizeStr
	int get_Size32(void);

	// Returns the file size in bytes as a 64-bit integer.
	__int64 get_Size64(void);

	// Returns the file size in bytes as a base-10 string. This is the string
	// representation of Size64[1] and is useful in environments where a 64-bit integer
	// is inconvenient or unavailable.
	// 
	// References:
	// [1] #Size64
	void get_SizeStr(CkString &str);
	// Returns the file size in bytes as a base-10 string. This is the string
	// representation of Size64[1] and is useful in environments where a 64-bit integer
	// is inconvenient or unavailable.
	// 
	// References:
	// [1] #Size64
	const wchar_t *sizeStr(void);

	// Returns the numeric user ID associated with the file.
	int get_Uid(void);



	// ----------------------
	// Methods
	// ----------------------
	// Deprecated. Use the CreateTimeStr[1] property instead.
	// 
	// Returns the file creation date and time in UTC as a CkDateTime object.
	// 
	// Server requirement: Creation-time metadata is available only when the server
	// supports SFTP version 4 or later and provides this attribute.
	// 
	// 
	// References:
	// [1] #CreateTimeStr
	// The caller is responsible for deleting the object returned by this method.
	CkDateTimeW *GetCreateDt(void);

	// Deprecated. Use the LastAccessTimeStr[1] property instead.
	// 
	// Returns the file's last-access date and time in UTC as a CkDateTime object.
	// 
	// 
	// References:
	// [1] #LastAccessTimeStr
	// The caller is responsible for deleting the object returned by this method.
	CkDateTimeW *GetLastAccessDt(void);

	// Deprecated. Use the LastModifiedTimeStr[1] property instead.
	// 
	// Returns the file's last-modified date and time in UTC as a CkDateTime object.
	// 
	// 
	// References:
	// [1] #LastModifiedTimeStr
	// The caller is responsible for deleting the object returned by this method.
	CkDateTimeW *GetLastModifiedDt(void);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
