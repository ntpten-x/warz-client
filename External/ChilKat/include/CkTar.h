// CkTar.h: interface for the CkTar class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkTar_H
#define _CkTar_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkBinData;
class CkByteData;
class CkTarProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkTar
class CK_VISIBLE_PUBLIC CkTar  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkTar(const CkTar &);
	CkTar &operator=(const CkTar &);

    public:
	CkTar(void);
	virtual ~CkTar(void);

	static CkTar *createNew(void);
	static CkTar *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	CkTarProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkTarProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Controls whether extraction methods also capture an XML inventory of the
	// archive. When set to true, methods such as Untar, UntarGz, UntarBz2, and
	// UntarZ store the listing in XmlListing[1]. The XML has the same structure as the
	// string returned by ListXml[2]. The default is false.
	// 
	// Inspect without extracting: Set CaptureXmlListing and SuppressOutput[3] to
	// true before an untar operation to scan the archive and obtain its XML listing
	// without writing archive entries to disk.
	// 
	// References:
	// [1] #XmlListing
	// [2] #ListXml
	// [3] #SuppressOutput
	bool get_CaptureXmlListing(void);
	// Controls whether extraction methods also capture an XML inventory of the
	// archive. When set to true, methods such as Untar, UntarGz, UntarBz2, and
	// UntarZ store the listing in XmlListing[1]. The XML has the same structure as the
	// string returned by ListXml[2]. The default is false.
	// 
	// Inspect without extracting: Set CaptureXmlListing and SuppressOutput[3] to
	// true before an untar operation to scan the archive and obtain its XML listing
	// without writing archive entries to disk.
	// 
	// References:
	// [1] #XmlListing
	// [2] #ListXml
	// [3] #SuppressOutput
	void put_CaptureXmlListing(bool newVal);

	// Specifies the character encoding used to decode filenames stored in a TAR
	// archive during extraction. The default is utf-8, which is normally appropriate
	// for modern archives.
	// 
	// This property affects archive entry names only. It does not convert or otherwise
	// alter the contents of extracted files. TAR archives written by the WriteTar*
	// methods store filenames as UTF-8.
	// 
	// Filename interoperability: The original TAR header format does not always
	// identify the character encoding of a filename. Change this property only when an
	// older archive is known to use a different encoding.
	void get_Charset(CkString &str);
	// Specifies the character encoding used to decode filenames stored in a TAR
	// archive during extraction. The default is utf-8, which is normally appropriate
	// for modern archives.
	// 
	// This property affects archive entry names only. It does not convert or otherwise
	// alter the contents of extracted files. TAR archives written by the WriteTar*
	// methods store filenames as UTF-8.
	// 
	// Filename interoperability: The original TAR header format does not always
	// identify the character encoding of a filename. Change this property only when an
	// older archive is known to use a different encoding.
	const char *charset(void);
	// Specifies the character encoding used to decode filenames stored in a TAR
	// archive during extraction. The default is utf-8, which is normally appropriate
	// for modern archives.
	// 
	// This property affects archive entry names only. It does not convert or otherwise
	// alter the contents of extracted files. TAR archives written by the WriteTar*
	// methods store filenames as UTF-8.
	// 
	// Filename interoperability: The original TAR header format does not always
	// identify the character encoding of a filename. Change this property only when an
	// older archive is known to use a different encoding.
	void put_Charset(const char *newVal);

	// Specifies the UNIX permission bits written to the TAR header for directory
	// entries created by the WriteTar* methods. The default is octal 0755, which
	// represents rwxr-xr-x.
	// 
	// Archive metadata: This value records permissions in the archive. Whether the
	// exact permissions are restored during extraction depends on the destination
	// operating system, filesystem, process privileges, and local security policy.
	int get_DirMode(void);
	// Specifies the UNIX permission bits written to the TAR header for directory
	// entries created by the WriteTar* methods. The default is octal 0755, which
	// represents rwxr-xr-x.
	// 
	// Archive metadata: This value records permissions in the archive. Whether the
	// exact permissions are restored during extraction depends on the destination
	// operating system, filesystem, process privileges, and local security policy.
	void put_DirMode(int newVal);

	// Specifies a path prefix to prepend to entries when a TAR archive is created. For
	// example, setting this property to subdir1 causes an entry such as report.txt to
	// be stored as subdir1/report.txt.
	// 
	// The prefix changes only the path stored in the archive; it does not rename or
	// move the source file on disk.
	// 
	// AddFile2 exception: AddFile2[1] explicitly supplies the complete path within the
	// archive, so DirPrefix is not applied to files added by that method.
	// 
	// References:
	// [1] #AddFile2
	void get_DirPrefix(CkString &str);
	// Specifies a path prefix to prepend to entries when a TAR archive is created. For
	// example, setting this property to subdir1 causes an entry such as report.txt to
	// be stored as subdir1/report.txt.
	// 
	// The prefix changes only the path stored in the archive; it does not rename or
	// move the source file on disk.
	// 
	// AddFile2 exception: AddFile2[1] explicitly supplies the complete path within the
	// archive, so DirPrefix is not applied to files added by that method.
	// 
	// References:
	// [1] #AddFile2
	const char *dirPrefix(void);
	// Specifies a path prefix to prepend to entries when a TAR archive is created. For
	// example, setting this property to subdir1 causes an entry such as report.txt to
	// be stored as subdir1/report.txt.
	// 
	// The prefix changes only the path stored in the archive; it does not rename or
	// move the source file on disk.
	// 
	// AddFile2 exception: AddFile2[1] explicitly supplies the complete path within the
	// archive, so DirPrefix is not applied to files added by that method.
	// 
	// References:
	// [1] #AddFile2
	void put_DirPrefix(const char *newVal);

	// Specifies the UNIX permission bits written to the TAR header for ordinary file
	// entries created by the WriteTar* methods. The default is octal 0644, which
	// represents rw-r--r--.
	// 
	// Shell scripts: Files recognized as shell scripts use ScriptFileMode[1] instead,
	// allowing executable permissions to be recorded separately.
	// 
	// References:
	// [1] #ScriptFileMode
	int get_FileMode(void);
	// Specifies the UNIX permission bits written to the TAR header for ordinary file
	// entries created by the WriteTar* methods. The default is octal 0644, which
	// represents rw-r--r--.
	// 
	// Shell scripts: Files recognized as shell scripts use ScriptFileMode[1] instead,
	// allowing executable permissions to be recorded separately.
	// 
	// References:
	// [1] #ScriptFileMode
	void put_FileMode(int newVal);

	// Specifies the numeric group identifier (GID) written to TAR headers when an
	// archive is created. The default value is 1000.
	// 
	// Ownership metadata: A stored GID is archive metadata. Restoring ownership may
	// require elevated privileges and may be ignored or mapped differently on non-UNIX
	// systems.
	int get_GroupId(void);
	// Specifies the numeric group identifier (GID) written to TAR headers when an
	// archive is created. The default value is 1000.
	// 
	// Ownership metadata: A stored GID is archive metadata. Restoring ownership may
	// require elevated privileges and may be ignored or mapped differently on non-UNIX
	// systems.
	void put_GroupId(int newVal);

	// Specifies the group name written to TAR headers when an archive is created. By
	// default, Chilkat uses the username of the account running the application.
	// 
	// Name versus numeric ID: TAR headers can contain both a group name and the
	// numeric GroupId[1]. Extraction tools and operating systems may give different
	// precedence to these fields.
	// 
	// References:
	// [1] #GroupId
	void get_GroupName(CkString &str);
	// Specifies the group name written to TAR headers when an archive is created. By
	// default, Chilkat uses the username of the account running the application.
	// 
	// Name versus numeric ID: TAR headers can contain both a group name and the
	// numeric GroupId[1]. Extraction tools and operating systems may give different
	// precedence to these fields.
	// 
	// References:
	// [1] #GroupId
	const char *groupName(void);
	// Specifies the group name written to TAR headers when an archive is created. By
	// default, Chilkat uses the username of the account running the application.
	// 
	// Name versus numeric ID: TAR headers can contain both a group name and the
	// numeric GroupId[1]. Extraction tools and operating systems may give different
	// precedence to these fields.
	// 
	// References:
	// [1] #GroupId
	void put_GroupName(const char *newVal);

	// Specifies the approximate interval, in milliseconds, between AbortCheck[1] event
	// callbacks during supported long-running operations. The default is 0, which
	// disables periodic AbortCheck callbacks.
	// 
	// Cancellation is cooperative: A callback can request that an operation stop, but
	// the request is observed only when the running method reaches a cancellation
	// check. Short operations may finish before a callback occurs.
	// 
	// References:
	// [1] #AbortCheck
	int get_HeartbeatMs(void);
	// Specifies the approximate interval, in milliseconds, between AbortCheck[1] event
	// callbacks during supported long-running operations. The default is 0, which
	// disables periodic AbortCheck callbacks.
	// 
	// Cancellation is cooperative: A callback can request that an operation stop, but
	// the request is observed only when the running method reaches a cancellation
	// check. Short operations may finish before a callback occurs.
	// 
	// References:
	// [1] #AbortCheck
	void put_HeartbeatMs(int newVal);

	// Controls whether the patterns in MustMatch[1] and MustNotMatch[2] are matched
	// case-sensitively. The default is false.
	// 
	// Cross-platform behavior: Case sensitivity in the archive filter is independent
	// of whether the local filesystem itself treats filenames as case-sensitive.
	// 
	// References:
	// [1] #MustMatch
	// [2] #MustNotMatch
	bool get_MatchCaseSensitive(void);
	// Controls whether the patterns in MustMatch[1] and MustNotMatch[2] are matched
	// case-sensitively. The default is false.
	// 
	// Cross-platform behavior: Case sensitivity in the archive filter is independent
	// of whether the local filesystem itself treats filenames as case-sensitive.
	// 
	// References:
	// [1] #MustMatch
	// [2] #MustNotMatch
	void put_MatchCaseSensitive(bool newVal);

	// Specifies an inclusion pattern applied when creating or extracting TAR archives,
	// including compressed TAR formats. A candidate path is included or extracted only
	// when it matches this pattern. The default is an empty string, which permits all
	// paths.
	// 
	// The pattern may contain zero or more asterisks (*), where each asterisk matches
	// zero or more characters. For example, *.txt selects paths ending in.txt. Case
	// handling is controlled by MatchCaseSensitive[1].
	// 
	// Combined filters: If both MustMatch and MustNotMatch[2] are set, a path must
	// satisfy the inclusion pattern and must not satisfy the exclusion pattern.
	// 
	// References:
	// [1] #MatchCaseSensitive
	// [2] #MustNotMatch
	void get_MustMatch(CkString &str);
	// Specifies an inclusion pattern applied when creating or extracting TAR archives,
	// including compressed TAR formats. A candidate path is included or extracted only
	// when it matches this pattern. The default is an empty string, which permits all
	// paths.
	// 
	// The pattern may contain zero or more asterisks (*), where each asterisk matches
	// zero or more characters. For example, *.txt selects paths ending in.txt. Case
	// handling is controlled by MatchCaseSensitive[1].
	// 
	// Combined filters: If both MustMatch and MustNotMatch[2] are set, a path must
	// satisfy the inclusion pattern and must not satisfy the exclusion pattern.
	// 
	// References:
	// [1] #MatchCaseSensitive
	// [2] #MustNotMatch
	const char *mustMatch(void);
	// Specifies an inclusion pattern applied when creating or extracting TAR archives,
	// including compressed TAR formats. A candidate path is included or extracted only
	// when it matches this pattern. The default is an empty string, which permits all
	// paths.
	// 
	// The pattern may contain zero or more asterisks (*), where each asterisk matches
	// zero or more characters. For example, *.txt selects paths ending in.txt. Case
	// handling is controlled by MatchCaseSensitive[1].
	// 
	// Combined filters: If both MustMatch and MustNotMatch[2] are set, a path must
	// satisfy the inclusion pattern and must not satisfy the exclusion pattern.
	// 
	// References:
	// [1] #MatchCaseSensitive
	// [2] #MustNotMatch
	void put_MustMatch(const char *newVal);

	// Specifies an exclusion pattern applied when creating or extracting TAR archives,
	// including compressed TAR formats. A candidate path that matches this pattern is
	// skipped. The default is an empty string, which excludes nothing.
	// 
	// The pattern may contain zero or more asterisks (*), where each asterisk matches
	// zero or more characters. For example, *.obj skips paths ending in.obj. Case
	// handling is controlled by MatchCaseSensitive[1].
	// 
	// Exclusion takes effect after inclusion: When both filters are set, matching
	// MustMatch[2] does not override a match in MustNotMatch.
	// 
	// References:
	// [1] #MatchCaseSensitive
	// [2] #MustMatch
	void get_MustNotMatch(CkString &str);
	// Specifies an exclusion pattern applied when creating or extracting TAR archives,
	// including compressed TAR formats. A candidate path that matches this pattern is
	// skipped. The default is an empty string, which excludes nothing.
	// 
	// The pattern may contain zero or more asterisks (*), where each asterisk matches
	// zero or more characters. For example, *.obj skips paths ending in.obj. Case
	// handling is controlled by MatchCaseSensitive[1].
	// 
	// Exclusion takes effect after inclusion: When both filters are set, matching
	// MustMatch[2] does not override a match in MustNotMatch.
	// 
	// References:
	// [1] #MatchCaseSensitive
	// [2] #MustMatch
	const char *mustNotMatch(void);
	// Specifies an exclusion pattern applied when creating or extracting TAR archives,
	// including compressed TAR formats. A candidate path that matches this pattern is
	// skipped. The default is an empty string, which excludes nothing.
	// 
	// The pattern may contain zero or more asterisks (*), where each asterisk matches
	// zero or more characters. For example, *.obj skips paths ending in.obj. Case
	// handling is controlled by MatchCaseSensitive[1].
	// 
	// Exclusion takes effect after inclusion: When both filters are set, matching
	// MustMatch[2] does not override a match in MustNotMatch.
	// 
	// References:
	// [1] #MatchCaseSensitive
	// [2] #MustMatch
	void put_MustNotMatch(const char *newVal);

	// Controls whether absolute archive paths are converted to relative paths during
	// extraction. When true, a leading / or \ is removed before the entry is
	// written. The default is true.
	// 
	// Recommended security setting: Keep this property enabled when extracting
	// archives you did not create. Also extract untrusted archives into a dedicated
	// directory and inspect their entry names before relying on the extracted content.
	bool get_NoAbsolutePaths(void);
	// Controls whether absolute archive paths are converted to relative paths during
	// extraction. When true, a leading / or \ is removed before the entry is
	// written. The default is true.
	// 
	// Recommended security setting: Keep this property enabled when extracting
	// archives you did not create. Also extract untrusted archives into a dedicated
	// directory and inspect their entry names before relying on the extracted content.
	void put_NoAbsolutePaths(bool newVal);

	// Returns the number of directory roots currently registered for archive creation
	// by calls to AddDirRoot[1] and AddDirRoot2[2]. Individual files added with
	// AddFile or AddFile2 are not included in this count.
	// 
	// Use zero-based indexes from 0 through NumDirRoots - 1 with GetDirRoot[3].
	// 
	// 
	// References:
	// [1] #AddDirRoot
	// [2] #AddDirRoot2
	// [3] #GetDirRoot
	int get_NumDirRoots(void);

	// Specifies the value reported by PercentDone when an eligible operation is 100%
	// complete. The default is 100. Increasing the scale allows finer-grained integer
	// progress values; for example, a scale of 1000 allows 453 to represent 45.3%.
	// 
	// The value is clamped to the range 10 through 100000. This property is available
	// only in environments that support event callbacks, and only methods for which
	// measurable progress is available emit percentage updates.
	// 
	// Scale, not frequency: A larger scale increases the numeric resolution of
	// progress values but does not guarantee a callback for every possible value.
	int get_PercentDoneScale(void);
	// Specifies the value reported by PercentDone when an eligible operation is 100%
	// complete. The default is 100. Increasing the scale allows finer-grained integer
	// progress values; for example, a scale of 1000 allows 453 to represent 45.3%.
	// 
	// The value is clamped to the range 10 through 100000. This property is available
	// only in environments that support event callbacks, and only methods for which
	// measurable progress is available emit percentage updates.
	// 
	// Scale, not frequency: A larger scale increases the numeric resolution of
	// progress values but does not guarantee a callback for every possible value.
	void put_PercentDoneScale(int newVal);

	// Specifies the UNIX permission bits written to TAR headers for shell-script files
	// recognized by extensions such as.sh,.csh,.bash, and.bsh. The default is octal
	// 0755, which records executable permissions.
	// 
	// Other files: Non-script files use FileMode[1]; directories use DirMode[2].
	// 
	// References:
	// [1] #FileMode
	// [2] #DirMode
	int get_ScriptFileMode(void);
	// Specifies the UNIX permission bits written to TAR headers for shell-script files
	// recognized by extensions such as.sh,.csh,.bash, and.bsh. The default is octal
	// 0755, which records executable permissions.
	// 
	// Other files: Non-script files use FileMode[1]; directories use DirMode[2].
	// 
	// References:
	// [1] #FileMode
	// [2] #DirMode
	void put_ScriptFileMode(int newVal);

	// Controls whether untar operations write extracted files and directories to the
	// filesystem. When true, methods such as Untar, UntarGz, UntarBz2, and UntarZ
	// scan the archive without producing extracted output. The default is false.
	// 
	// Archive inventory workflow: Combine this property with CaptureXmlListing[1] to
	// obtain an XML listing without extracting the archive.
	// 
	// References:
	// [1] #CaptureXmlListing
	bool get_SuppressOutput(void);
	// Controls whether untar operations write extracted files and directories to the
	// filesystem. When true, methods such as Untar, UntarGz, UntarBz2, and UntarZ
	// scan the archive without producing extracted output. The default is false.
	// 
	// Archive inventory workflow: Combine this property with CaptureXmlListing[1] to
	// obtain an XML listing without extracting the archive.
	// 
	// References:
	// [1] #CaptureXmlListing
	void put_SuppressOutput(bool newVal);

	// Deprecated. Use MatchCaseSensitive[1] instead.
	// 
	// Until this property is removed, reading or setting it has the same effect as
	// reading or setting MatchCaseSensitive.
	// 
	// 
	// References:
	// [1] #MatchCaseSensitive
	bool get_UntarCaseSensitive(void);
	// Deprecated. Use MatchCaseSensitive[1] instead.
	// 
	// Until this property is removed, reading or setting it has the same effect as
	// reading or setting MatchCaseSensitive.
	// 
	// 
	// References:
	// [1] #MatchCaseSensitive
	void put_UntarCaseSensitive(bool newVal);

	// Controls whether untar methods add per-entry extraction details to
	// LastErrorText, LastErrorXml, and LastErrorHtml. The default is false.
	// 
	// Diagnostic output is not necessarily an error: When this property is enabled,
	// the LastError properties can contain useful extraction trace information even
	// after a successful operation.
	bool get_UntarDebugLog(void);
	// Controls whether untar methods add per-entry extraction details to
	// LastErrorText, LastErrorXml, and LastErrorHtml. The default is false.
	// 
	// Diagnostic output is not necessarily an error: When this property is enabled,
	// the LastError properties can contain useful extraction trace information even
	// after a successful operation.
	void put_UntarDebugLog(bool newVal);

	// Controls whether directory components from archive entry names are discarded
	// during extraction. When true, each file is written directly into
	// UntarFromDir[1] rather than recreating the archived directory tree. The default
	// is false.
	// 
	// Filename collisions: Different archive entries can have the same final filename
	// after their directory paths are removed. Use this option only when flattening
	// the archive is intentional and potential collisions are acceptable.
	// 
	// References:
	// [1] #UntarFromDir
	bool get_UntarDiscardPaths(void);
	// Controls whether directory components from archive entry names are discarded
	// during extraction. When true, each file is written directly into
	// UntarFromDir[1] rather than recreating the archived directory tree. The default
	// is false.
	// 
	// Filename collisions: Different archive entries can have the same final filename
	// after their directory paths are removed. Use this option only when flattening
	// the archive is intentional and potential collisions are acceptable.
	// 
	// References:
	// [1] #UntarFromDir
	void put_UntarDiscardPaths(bool newVal);

	// Specifies the destination directory for extraction. The default is., meaning the
	// current working directory of the calling process.
	// 
	// When UntarDiscardPaths[1] is false, archived subdirectories are recreated
	// beneath this directory. When it is true, extracted files are placed directly
	// in this directory.
	// 
	// Safer extraction: For untrusted archives, choose a new or otherwise isolated
	// destination directory rather than extracting directly into an application or
	// system directory.
	// 
	// References:
	// [1] #UntarDiscardPaths
	void get_UntarFromDir(CkString &str);
	// Specifies the destination directory for extraction. The default is., meaning the
	// current working directory of the calling process.
	// 
	// When UntarDiscardPaths[1] is false, archived subdirectories are recreated
	// beneath this directory. When it is true, extracted files are placed directly
	// in this directory.
	// 
	// Safer extraction: For untrusted archives, choose a new or otherwise isolated
	// destination directory rather than extracting directly into an application or
	// system directory.
	// 
	// References:
	// [1] #UntarDiscardPaths
	const char *untarFromDir(void);
	// Specifies the destination directory for extraction. The default is., meaning the
	// current working directory of the calling process.
	// 
	// When UntarDiscardPaths[1] is false, archived subdirectories are recreated
	// beneath this directory. When it is true, extracted files are placed directly
	// in this directory.
	// 
	// Safer extraction: For untrusted archives, choose a new or otherwise isolated
	// destination directory rather than extracting directly into an application or
	// system directory.
	// 
	// References:
	// [1] #UntarDiscardPaths
	void put_UntarFromDir(const char *newVal);

	// Limits the number of matching entries extracted by an untar operation. The
	// default is 0, which means no maximum.
	// 
	// For example, set MustMatch[1] to select a particular path and set UntarMaxCount
	// to 1 to stop after the first matching entry is extracted.
	// 
	// Archive order matters: When a limit is used, extraction stops after the
	// configured number of matches in archive order.
	// 
	// References:
	// [1] #MustMatch
	int get_UntarMaxCount(void);
	// Limits the number of matching entries extracted by an untar operation. The
	// default is 0, which means no maximum.
	// 
	// For example, set MustMatch[1] to select a particular path and set UntarMaxCount
	// to 1 to stop after the first matching entry is extracted.
	// 
	// Archive order matters: When a limit is used, extraction stops after the
	// configured number of matches in archive order.
	// 
	// References:
	// [1] #MustMatch
	void put_UntarMaxCount(int newVal);

	// Specifies the numeric user identifier (UID) written to TAR headers when an
	// archive is created. The default value is 1000.
	// 
	// Ownership metadata: A stored UID does not by itself change the owner of a local
	// source file. Restoring ownership during extraction may require elevated
	// privileges and may not apply on non-UNIX systems.
	int get_UserId(void);
	// Specifies the numeric user identifier (UID) written to TAR headers when an
	// archive is created. The default value is 1000.
	// 
	// Ownership metadata: A stored UID does not by itself change the owner of a local
	// source file. Restoring ownership during extraction may require elevated
	// privileges and may not apply on non-UNIX systems.
	void put_UserId(int newVal);

	// Specifies the user name written to TAR headers when an archive is created. By
	// default, Chilkat uses the username of the account running the application.
	// 
	// Name versus numeric ID: TAR headers can contain both a user name and the numeric
	// UserId[1]. Their interpretation depends on the extracting tool and destination
	// system.
	// 
	// References:
	// [1] #UserId
	void get_UserName(CkString &str);
	// Specifies the user name written to TAR headers when an archive is created. By
	// default, Chilkat uses the username of the account running the application.
	// 
	// Name versus numeric ID: TAR headers can contain both a user name and the numeric
	// UserId[1]. Their interpretation depends on the extracting tool and destination
	// system.
	// 
	// References:
	// [1] #UserId
	const char *userName(void);
	// Specifies the user name written to TAR headers when an archive is created. By
	// default, Chilkat uses the username of the account running the application.
	// 
	// Name versus numeric ID: TAR headers can contain both a user name and the numeric
	// UserId[1]. Their interpretation depends on the extracting tool and destination
	// system.
	// 
	// References:
	// [1] #UserId
	void put_UserName(const char *newVal);

	// Specifies the TAR header format used by the WriteTar* methods. The default is
	// gnu. Supported values are:
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                                 Use                                  |
	// +=======+======================================================================+
	// | gnu   | GNU TAR format and extensions. This is the Chilkat default and       |
	// |       | supports archive metadata beyond classic ustar limits.               |
	// +-------+----------------------------------------------------------------------+
	// | pax   | POSIX pax extended format. It is designed to represent long names    |
	// |       | and additional metadata through extensible records.                  |
	// +-------+----------------------------------------------------------------------+
	// | ustar | POSIX ustar format. It is broadly interoperable but has stricter     |
	// |       | limits on path lengths and metadata fields.                          |
	// +-------+----------------------------------------------------------------------+
	// 
	// Choosing a format: Use ustar when compatibility with simple TAR readers is the
	// priority and the archive fits its limits. Use pax for portable extended
	// metadata, or retain gnu when GNU TAR compatibility is expected.
	void get_WriteFormat(CkString &str);
	// Specifies the TAR header format used by the WriteTar* methods. The default is
	// gnu. Supported values are:
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                                 Use                                  |
	// +=======+======================================================================+
	// | gnu   | GNU TAR format and extensions. This is the Chilkat default and       |
	// |       | supports archive metadata beyond classic ustar limits.               |
	// +-------+----------------------------------------------------------------------+
	// | pax   | POSIX pax extended format. It is designed to represent long names    |
	// |       | and additional metadata through extensible records.                  |
	// +-------+----------------------------------------------------------------------+
	// | ustar | POSIX ustar format. It is broadly interoperable but has stricter     |
	// |       | limits on path lengths and metadata fields.                          |
	// +-------+----------------------------------------------------------------------+
	// 
	// Choosing a format: Use ustar when compatibility with simple TAR readers is the
	// priority and the archive fits its limits. Use pax for portable extended
	// metadata, or retain gnu when GNU TAR compatibility is expected.
	const char *writeFormat(void);
	// Specifies the TAR header format used by the WriteTar* methods. The default is
	// gnu. Supported values are:
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                                 Use                                  |
	// +=======+======================================================================+
	// | gnu   | GNU TAR format and extensions. This is the Chilkat default and       |
	// |       | supports archive metadata beyond classic ustar limits.               |
	// +-------+----------------------------------------------------------------------+
	// | pax   | POSIX pax extended format. It is designed to represent long names    |
	// |       | and additional metadata through extensible records.                  |
	// +-------+----------------------------------------------------------------------+
	// | ustar | POSIX ustar format. It is broadly interoperable but has stricter     |
	// |       | limits on path lengths and metadata fields.                          |
	// +-------+----------------------------------------------------------------------+
	// 
	// Choosing a format: Use ustar when compatibility with simple TAR readers is the
	// priority and the archive fits its limits. Use pax for portable extended
	// metadata, or retain gnu when GNU TAR compatibility is expected.
	void put_WriteFormat(const char *newVal);

	// Contains the XML listing captured by the most recent untar operation for which
	// CaptureXmlListing[1] was true. The XML structure is the same as the output
	// from ListXml[2].
	// 
	// Read after the operation: Use the untar method's return value to confirm that
	// the archive was processed successfully before consuming this property.
	// 
	// References:
	// [1] #CaptureXmlListing
	// [2] #ListXml
	void get_XmlListing(CkString &str);
	// Contains the XML listing captured by the most recent untar operation for which
	// CaptureXmlListing[1] was true. The XML structure is the same as the output
	// from ListXml[2].
	// 
	// Read after the operation: Use the untar method's return value to confirm that
	// the archive was processed successfully before consuming this property.
	// 
	// References:
	// [1] #CaptureXmlListing
	// [2] #ListXml
	const char *xmlListing(void);
	// Contains the XML listing captured by the most recent untar operation for which
	// CaptureXmlListing[1] was true. The XML structure is the same as the output
	// from ListXml[2].
	// 
	// Read after the operation: Use the untar method's return value to confirm that
	// the archive was processed successfully before consuming this property.
	// 
	// References:
	// [1] #CaptureXmlListing
	// [2] #ListXml
	void put_XmlListing(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds the directory tree at dirPath to the set of sources used by the next WriteTar*
	// operation. Call this method multiple times to include multiple directory trees
	// in one archive.
	// 
	// Use AddDirRoot2[1] when the tree should appear beneath an explicit prefix inside
	// the archive.
	// 
	// Queued archive sources: Directory roots and files are retained by the object
	// until ClearDirRootsAndFiles[2] is called.
	// 
	// References:
	// [1] #AddDirRoot2
	// [2] #ClearDirRootsAndFiles
	bool AddDirRoot(const char *dirPath);


	// Adds the directory tree at rootPath to the archive-creation source list and stores
	// its entries beneath the archive prefix supplied in rootPrefix. Call this method
	// multiple times, or combine it with AddDirRoot[1], before calling a WriteTar*
	// method.
	// 
	// rootPrefix should be a relative archive path such as abc/123 and should not end with
	// /. If DirPrefix[2] is also set, DirPrefix is applied first.
	// 
	// Path composition example: With DirPrefix = "package" and rootPrefix = "assets",
	// files from this root are stored beneath package/assets/.
	// 
	// References:
	// [1] #AddDirRoot
	// [2] #DirPrefix
	bool AddDirRoot2(const char *rootPrefix, const char *rootPath);


	// Adds the local file at path to the set of sources used by the next WriteTar*
	// operation. Call AddFile, AddFile2, and the directory-root methods as needed
	// before writing a single archive.
	// 
	// Use AddFile2[1] when the path stored inside the TAR must be specified
	// independently of the source file path.
	// 
	// Queued archive sources: Added files and directory roots remain associated with
	// the object until ClearDirRootsAndFiles[2] is called.
	// 
	// References:
	// [1] #AddFile2
	// [2] #ClearDirRootsAndFiles
	bool AddFile(const char *path);


	// Adds the local file at filePath to the archive-creation source list and stores it
	// using the exact archive path supplied in pathWithinTar. This allows the source path and
	// the path visible inside the TAR to differ.
	// 
	// Call this method as many times as needed, optionally together with the other
	// file and directory-root methods, before calling a single WriteTar* method.
	// 
	// DirPrefix is not applied: Because pathWithinTar already specifies the path within the
	// TAR, DirPrefix[1] does not modify entries added by this method. Use forward
	// slashes and a relative path for portable archive names.
	// 
	// References:
	// [1] #DirPrefix
	bool AddFile2(const char *filePath, const char *pathWithinTar);


	// Removes all files and directory roots previously registered by AddDirRoot[1],
	// AddDirRoot2[2], AddFile[3], and AddFile2[4].
	// 
	// Call this method before building a different archive with the same Tar object
	// when the earlier source list should not be reused.
	// 
	// 
	// References:
	// [1] #AddDirRoot
	// [2] #AddDirRoot2
	// [3] #AddFile
	// [4] #AddFile2
	bool ClearDirRootsAndFiles(void);


	// Creates a Debian binary package at debPath from the prepared control archive at
	// controlPath and data archive at dataPath. The inputs are typically named control.tar.gz and
	// data.tar.gz, or use another compression form accepted by the target Debian
	// tooling.
	// 
	// Debian package structure: A modern.deb file is an ar archive containing a
	// debian-binary format marker, a control.tar.* member for package metadata and
	// maintainer scripts, and a data.tar.* member for the installed filesystem
	// payload.
	// Prepared inputs required: This method packages the supplied control and data
	// tarballs. The caller is responsible for making their directory layout, control
	// metadata, permissions, and package contents valid for Debian package-management
	// tools.
	bool CreateDeb(const char *controlPath, const char *dataPath, const char *debPath);


	// Returns a directory root previously added with AddDirRoot[1] or AddDirRoot2[2].
	// index is a zero-based index.
	// 
	// Valid indexes range from 0 through NumDirRoots[3] - 1. For example, after two
	// roots are added, GetDirRoot(0) returns the first and GetDirRoot(1) returns the
	// second.
	// 
	// 
	// References:
	// [1] #AddDirRoot
	// [2] #AddDirRoot2
	// [3] #NumDirRoots
	bool GetDirRoot(int index, CkString &outStr);

	// Returns a directory root previously added with AddDirRoot[1] or AddDirRoot2[2].
	// index is a zero-based index.
	// 
	// Valid indexes range from 0 through NumDirRoots[3] - 1. For example, after two
	// roots are added, GetDirRoot(0) returns the first and GetDirRoot(1) returns the
	// second.
	// 
	// 
	// References:
	// [1] #AddDirRoot
	// [2] #AddDirRoot2
	// [3] #NumDirRoots
	const char *getDirRoot(int index);
	// Returns a directory root previously added with AddDirRoot[1] or AddDirRoot2[2].
	// index is a zero-based index.
	// 
	// Valid indexes range from 0 through NumDirRoots[3] - 1. For example, after two
	// roots are added, GetDirRoot(0) returns the first and GetDirRoot(1) returns the
	// second.
	// 
	// 
	// References:
	// [1] #AddDirRoot
	// [2] #AddDirRoot2
	// [3] #NumDirRoots
	const char *dirRoot(int index);


	// Scans the uncompressed TAR archive at tarPath and returns an XML description of its
	// files, directories, and archive metadata. The archive is not extracted.
	// 
	// Compressed tarballs: For a compressed TAR archive, an untar method can capture
	// the same listing format by setting CaptureXmlListing[1]. Set SuppressOutput[2]
	// as well when no files should be written.
	// 
	// References:
	// [1] #CaptureXmlListing
	// [2] #SuppressOutput
	bool ListXml(const char *tarPath, CkString &outStr);

	// Scans the uncompressed TAR archive at tarPath and returns an XML description of its
	// files, directories, and archive metadata. The archive is not extracted.
	// 
	// Compressed tarballs: For a compressed TAR archive, an untar method can capture
	// the same listing format by setting CaptureXmlListing[1]. Set SuppressOutput[2]
	// as well when no files should be written.
	// 
	// References:
	// [1] #CaptureXmlListing
	// [2] #SuppressOutput
	const char *listXml(const char *tarPath);
	// Scans the uncompressed TAR archive at tarPath and returns an XML description of its
	// files, directories, and archive metadata. The archive is not extracted.
	// 
	// Compressed tarballs: For a compressed TAR archive, an untar method can capture
	// the same listing format by setting CaptureXmlListing[1]. Set SuppressOutput[2]
	// as well when no files should be written.
	// 
	// References:
	// [1] #CaptureXmlListing
	// [2] #SuppressOutput
	CkTask *ListXmlAsync(const char *tarPath);


	// Loads the caller object associated with task, an asynchronous Chilkat Task, into
	// this Tar object.
	// 
	// Specialized async support: This method supports Chilkat task-caller plumbing and
	// is not normally needed in ordinary archive code. Use it only when a Chilkat
	// example or support instruction specifically requires it.
	bool LoadTaskCaller(CkTask &task);


	// Extracts the uncompressed TAR archive at tarPath into the directory specified by
	// UntarFromDir[1]. Archived directory trees are recreated unless
	// UntarDiscardPaths[2] is true.
	// 
	// Returns the number of files and directories extracted, or -1 if the operation
	// fails. Extraction is also affected by the matching, path-safety, count-limit,
	// listing, and output-suppression properties of this object.
	// 
	// TAR is a container format: An ordinary.tar archive is not compressed. Use
	// UntarGz, UntarBz2, or UntarZ for the corresponding compressed tarball formats.
	// 
	// References:
	// [1] #UntarFromDir
	// [2] #UntarDiscardPaths
	int Untar(const char *tarPath);

	// Extracts the uncompressed TAR archive at tarPath into the directory specified by
	// UntarFromDir[1]. Archived directory trees are recreated unless
	// UntarDiscardPaths[2] is true.
	// 
	// Returns the number of files and directories extracted, or -1 if the operation
	// fails. Extraction is also affected by the matching, path-safety, count-limit,
	// listing, and output-suppression properties of this object.
	// 
	// TAR is a container format: An ordinary.tar archive is not compressed. Use
	// UntarGz, UntarBz2, or UntarZ for the corresponding compressed tarball formats.
	// 
	// References:
	// [1] #UntarFromDir
	// [2] #UntarDiscardPaths
	CkTask *UntarAsync(const char *tarPath);


	// Decompresses and extracts the.tar.bz2 archive at tarPath into UntarFromDir[1]. This
	// format is also commonly named.tbz,.tbz2, or.tb2.
	// 
	// Returns true on success and false on failure. The same extraction filters,
	// path controls, listing options, and output settings used by Untar[2] also apply.
	// 
	// 
	// References:
	// [1] #UntarFromDir
	// [2] #Untar
	bool UntarBz2(const char *tarPath);

	// Decompresses and extracts the.tar.bz2 archive at tarPath into UntarFromDir[1]. This
	// format is also commonly named.tbz,.tbz2, or.tb2.
	// 
	// Returns true on success and false on failure. The same extraction filters,
	// path controls, listing options, and output settings used by Untar[2] also apply.
	// 
	// 
	// References:
	// [1] #UntarFromDir
	// [2] #Untar
	CkTask *UntarBz2Async(const char *tarPath);


	// Scans the uncompressed TAR archive at tarPath and copies the contents of the first
	// file whose archive path matches matchPattern into the BinData object supplied in bd.
	// Matching is evaluated in archive order.
	// 
	// No archive entry is written to the local filesystem. Returns true when a
	// matching file is successfully extracted to bd and false otherwise.
	// 
	bool UntarFirstMatchingToBd(const char *tarPath, const char *matchPattern, CkBinData &bd);


	// Reads an in-memory, uncompressed TAR archive from tarFileBytes and returns the contents
	// of the first file whose archive path matches matchPattern. Matching is evaluated in
	// archive order.
	// 
	// No file is written to the local filesystem. Use the normal method-success
	// indicator and LastErrorText to distinguish a successful result from a missing
	// match or processing failure.
	// 
	bool UntarFirstMatchingToMemory(CkByteData &tarFileBytes, const char *matchPattern, CkByteData &outBytes);


	// Extracts an uncompressed TAR archive supplied as bytes in tarFileBytes. Files and
	// directories are written beneath UntarFromDir[1], subject to the same filters and
	// path options as Untar[2].
	// 
	// Returns the number of files and directories extracted, or -1 on failure.
	// 
	// 
	// References:
	// [1] #UntarFromDir
	// [2] #Untar
	int UntarFromMemory(CkByteData &tarFileBytes);

	// Extracts an uncompressed TAR archive supplied as bytes in tarFileBytes. Files and
	// directories are written beneath UntarFromDir[1], subject to the same filters and
	// path options as Untar[2].
	// 
	// Returns the number of files and directories extracted, or -1 on failure.
	// 
	// 
	// References:
	// [1] #UntarFromDir
	// [2] #Untar
	CkTask *UntarFromMemoryAsync(CkByteData &tarFileBytes);


	// Decompresses and extracts the.tar.gz archive at tarPath into UntarFromDir[1].
	// The.tgz extension is a common short form for the same gzip-compressed TAR
	// structure.
	// 
	// Returns true on success and false on failure. The same extraction filters,
	// path controls, listing options, and output settings used by Untar[2] also apply.
	// 
	// 
	// References:
	// [1] #UntarFromDir
	// [2] #Untar
	bool UntarGz(const char *tarPath);

	// Decompresses and extracts the.tar.gz archive at tarPath into UntarFromDir[1].
	// The.tgz extension is a common short form for the same gzip-compressed TAR
	// structure.
	// 
	// Returns true on success and false on failure. The same extraction filters,
	// path controls, listing options, and output settings used by Untar[2] also apply.
	// 
	// 
	// References:
	// [1] #UntarFromDir
	// [2] #Untar
	CkTask *UntarGzAsync(const char *tarPath);


	// Decompresses and extracts the.tar.Z archive at tarPath into UntarFromDir[1]. The.Z
	// suffix denotes the historical UNIX compress format;.taz is a common alternate
	// extension.
	// 
	// Returns true on success and false on failure. The same extraction filters,
	// path controls, listing options, and output settings used by Untar[2] also apply.
	// 
	// 
	// References:
	// [1] #UntarFromDir
	// [2] #Untar
	bool UntarZ(const char *tarPath);

	// Decompresses and extracts the.tar.Z archive at tarPath into UntarFromDir[1]. The.Z
	// suffix denotes the historical UNIX compress format;.taz is a common alternate
	// extension.
	// 
	// Returns true on success and false on failure. The same extraction filters,
	// path controls, listing options, and output settings used by Untar[2] also apply.
	// 
	// 
	// References:
	// [1] #UntarFromDir
	// [2] #Untar
	CkTask *UntarZAsync(const char *tarPath);


	// Opens the uncompressed TAR archive at tarPath and scans its headers through the end
	// of the archive. Returns true when the archive structure is accepted and no
	// TAR-format errors are found; otherwise returns false.
	// 
	// What verification does not establish: Structural verification does not prove
	// that archived files are safe, trustworthy, or appropriate to extract. It is not
	// malware scanning and does not authenticate the archive publisher.
	bool VerifyTar(const char *tarPath);

	// Opens the uncompressed TAR archive at tarPath and scans its headers through the end
	// of the archive. Returns true when the archive structure is accepted and no
	// TAR-format errors are found; otherwise returns false.
	// 
	// What verification does not establish: Structural verification does not prove
	// that archived files are safe, trustworthy, or appropriate to extract. It is not
	// malware scanning and does not authenticate the archive publisher.
	CkTask *VerifyTarAsync(const char *tarPath);


	// Creates an uncompressed TAR archive at tarPath from the files and directory trees
	// previously added with AddFile, AddFile2, AddDirRoot, and AddDirRoot2. Archive
	// paths, permissions, ownership metadata, filters, and header format are
	// controlled by the corresponding properties.
	// 
	// Returns true on success and false on failure.
	// 
	bool WriteTar(const char *tarPath);

	// Creates an uncompressed TAR archive at tarPath from the files and directory trees
	// previously added with AddFile, AddFile2, AddDirRoot, and AddDirRoot2. Archive
	// paths, permissions, ownership metadata, filters, and header format are
	// controlled by the corresponding properties.
	// 
	// Returns true on success and false on failure.
	// 
	CkTask *WriteTarAsync(const char *tarPath);


	// Creates a bzip2-compressed TAR archive at bz2Path from the files and directory
	// trees previously added to this object. Common filename extensions
	// include.tar.bz2,.tbz,.tbz2, and.tb2.
	// 
	// Returns true on success and false on failure.
	// 
	// Two-layer format: The result is a TAR byte stream compressed with bzip2. TAR
	// supplies the multi-file archive structure; bzip2 supplies compression.
	bool WriteTarBz2(const char *bz2Path);

	// Creates a bzip2-compressed TAR archive at bz2Path from the files and directory
	// trees previously added to this object. Common filename extensions
	// include.tar.bz2,.tbz,.tbz2, and.tb2.
	// 
	// Returns true on success and false on failure.
	// 
	// Two-layer format: The result is a TAR byte stream compressed with bzip2. TAR
	// supplies the multi-file archive structure; bzip2 supplies compression.
	CkTask *WriteTarBz2Async(const char *bz2Path);


	// Creates a gzip-compressed TAR archive at gzPath from the files and directory trees
	// previously added to this object. The usual extensions are.tar.gz and.tgz.
	// 
	// Returns true on success and false on failure.
	// 
	// Two-layer format: The result is a TAR byte stream compressed with gzip. TAR
	// supplies the multi-file archive structure; gzip supplies compression.
	bool WriteTarGz(const char *gzPath);

	// Creates a gzip-compressed TAR archive at gzPath from the files and directory trees
	// previously added to this object. The usual extensions are.tar.gz and.tgz.
	// 
	// Returns true on success and false on failure.
	// 
	// Two-layer format: The result is a TAR byte stream compressed with gzip. TAR
	// supplies the multi-file archive structure; gzip supplies compression.
	CkTask *WriteTarGzAsync(const char *gzPath);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
