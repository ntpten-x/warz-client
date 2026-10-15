// CkScpW.h: interface for the CkScpW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkScpW_H
#define _CkScpW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkBinDataW;
class CkTaskW;
class CkByteData;
class CkSshW;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkScpW
class CK_VISIBLE_PUBLIC CkScpW  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkScpW(const CkScpW &);
	CkScpW &operator=(const CkScpW &);

    public:
	CkScpW(void);
	virtual ~CkScpW(void);

	

	static CkScpW *createNew(void);
	

	CkScpW(bool bCallbackOwned);
	static CkScpW *createNew(bool bCallbackOwned);

	
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
	// Set to true to request cancellation of the method currently executing on this
	// object. Long-running network and file-transfer operations check this property
	// periodically; a method that completes quickly may finish before the request is
	// observed.
	// 
	// Both synchronous and asynchronous operations can be cancelled. To cancel a
	// synchronous call, set this property from another thread on the same Scp object.
	// Chilkat resets the property to false after the cancellation is processed. If
	// no method is running, a previously set value is cleared when the next method
	// begins.
	// 
	// Cooperative cancellation: This property requests an abort; it does not forcibly
	// terminate a thread. Use the method return value, LastMethodSuccess where
	// applicable, and LastErrorText to determine the final outcome.
	bool get_AbortCurrent(void);
	// Set to true to request cancellation of the method currently executing on this
	// object. Long-running network and file-transfer operations check this property
	// periodically; a method that completes quickly may finish before the request is
	// observed.
	// 
	// Both synchronous and asynchronous operations can be cancelled. To cancel a
	// synchronous call, set this property from another thread on the same Scp object.
	// Chilkat resets the property to false after the cancellation is processed. If
	// no method is running, a previously set value is cleared when the next method
	// begins.
	// 
	// Cooperative cancellation: This property requests an abort; it does not forcibly
	// terminate a thread. Use the method return value, LastMethodSuccess where
	// applicable, and LastErrorText to determine the final outcome.
	void put_AbortCurrent(bool newVal);

	// Specifies the interval, in milliseconds, between AbortCheck[1] event callbacks
	// during supported long-running operations. The callback allows the application to
	// report activity or request cancellation before the operation completes.
	// 
	// The default value is 0, which disables periodic AbortCheck callbacks.
	// 
	// Event-callback setting: This property is useful only in programming environments
	// that support Chilkat event callbacks. It is not an SSH keep-alive interval and
	// does not change connection or read timeouts.
	// 
	// References:
	// [1] #AbortCheck
	int get_HeartbeatMs(void);
	// Specifies the interval, in milliseconds, between AbortCheck[1] event callbacks
	// during supported long-running operations. The callback allows the application to
	// report activity or request cancellation before the operation completes.
	// 
	// The default value is 0, which disables periodic AbortCheck callbacks.
	// 
	// Event-callback setting: This property is useful only in programming environments
	// that support Chilkat event callbacks. It is not an SSH keep-alive interval and
	// does not change connection or read timeouts.
	// 
	// References:
	// [1] #AbortCheck
	void put_HeartbeatMs(int newVal);

	// Specifies the value that represents 100% completion in PercentDone event
	// callbacks. The default is 100, which reports progress in whole-percent units.
	// For example, when the scale is 1000, a callback value of 453 represents 45.3%
	// completion.
	// 
	// The value is limited to the range 10 through 100000. Increasing the scale
	// provides finer numeric granularity for operations whose progress can be
	// measured.
	// 
	// Event-callback setting: This property applies only in programming environments
	// that support Chilkat event callbacks. A larger scale changes the meaning and
	// possible granularity of callback values; it does not guarantee that every
	// intermediate value will be reported.
	int get_PercentDoneScale(void);
	// Specifies the value that represents 100% completion in PercentDone event
	// callbacks. The default is 100, which reports progress in whole-percent units.
	// For example, when the scale is 1000, a callback value of 453 represents 45.3%
	// completion.
	// 
	// The value is limited to the range 10 through 100000. Increasing the scale
	// provides finer numeric granularity for operations whose progress can be
	// measured.
	// 
	// Event-callback setting: This property applies only in programming environments
	// that support Chilkat event callbacks. A larger scale changes the meaning and
	// possible granularity of callback values; it does not guarantee that every
	// intermediate value will be reported.
	void put_PercentDoneScale(int newVal);

	// Specifies environment variables to send for each SCP upload or download. Set the
	// property to a JSON object whose member names are environment-variable names and
	// whose values are strings.
	// 
	// {
	//   "LCS_PASSWORD": "myPassword",
	//   "SOME_ENV_VAR": "some_value"
	// }
	// Server policy controls acceptance: SCP transfers run through SSH channels. The
	// SSH server may accept, reject, or ignore requested environment variables
	// according to its configuration. Do not assume that setting this property
	// guarantees that the remote SCP process receives every variable.
	// Sensitive values: Environment variables can contain secrets, but they are not a
	// substitute for SSH authentication. Avoid exposing sensitive values in
	// application logs or diagnostic output.
	void get_SendEnv(CkString &str);
	// Specifies environment variables to send for each SCP upload or download. Set the
	// property to a JSON object whose member names are environment-variable names and
	// whose values are strings.
	// 
	// {
	//   "LCS_PASSWORD": "myPassword",
	//   "SOME_ENV_VAR": "some_value"
	// }
	// Server policy controls acceptance: SCP transfers run through SSH channels. The
	// SSH server may accept, reject, or ignore requested environment variables
	// according to its configuration. Do not assume that setting this property
	// guarantees that the remote SCP process receives every variable.
	// Sensitive values: Environment variables can contain secrets, but they are not a
	// substitute for SSH authentication. Avoid exposing sensitive values in
	// application logs or diagnostic output.
	const wchar_t *sendEnv(void);
	// Specifies environment variables to send for each SCP upload or download. Set the
	// property to a JSON object whose member names are environment-variable names and
	// whose values are strings.
	// 
	// {
	//   "LCS_PASSWORD": "myPassword",
	//   "SOME_ENV_VAR": "some_value"
	// }
	// Server policy controls acceptance: SCP transfers run through SSH channels. The
	// SSH server may accept, reject, or ignore requested environment variables
	// according to its configuration. Do not assume that setting this property
	// guarantees that the remote SCP process receives every variable.
	// Sensitive values: Environment variables can contain secrets, but they are not a
	// substitute for SSH authentication. Avoid exposing sensitive values in
	// application logs or diagnostic output.
	void put_SendEnv(const wchar_t *newVal);

	// Contains the local paths of the files transferred by the most recent call to
	// SyncTreeUpload[1] or SyncTreeDownload[2]. Paths are listed one per line.
	// 
	//     * After an upload, each line is the full local path of a source file that
	//     was uploaded.
	//     * After a download, each line is the full local path of a destination file
	//     that was downloaded.
	// Local paths only: This property reports local filesystem paths, not remote
	// paths. It lists files actually transferred by the last synchronization
	// operation, rather than every file examined during comparison.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void get_SyncedFiles(CkString &str);
	// Contains the local paths of the files transferred by the most recent call to
	// SyncTreeUpload[1] or SyncTreeDownload[2]. Paths are listed one per line.
	// 
	//     * After an upload, each line is the full local path of a source file that
	//     was uploaded.
	//     * After a download, each line is the full local path of a destination file
	//     that was downloaded.
	// Local paths only: This property reports local filesystem paths, not remote
	// paths. It lists files actually transferred by the last synchronization
	// operation, rather than every file examined during comparison.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	const wchar_t *syncedFiles(void);
	// Contains the local paths of the files transferred by the most recent call to
	// SyncTreeUpload[1] or SyncTreeDownload[2]. Paths are listed one per line.
	// 
	//     * After an upload, each line is the full local path of a source file that
	//     was uploaded.
	//     * After a download, each line is the full local path of a destination file
	//     that was downloaded.
	// Local paths only: This property reports local filesystem paths, not remote
	// paths. It lists files actually transferred by the last synchronization
	// operation, rather than every file examined during comparison.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void put_SyncedFiles(const wchar_t *newVal);

	// Specifies a semicolon-separated list of wildcard patterns for filenames that are
	// eligible for transfer by SyncTreeUpload[1] and SyncTreeDownload[2]. A file is
	// considered only when its filename matches at least one pattern.
	// 
	// For example, *.xml;*.txt;*.csv limits synchronization to XML, text, and CSV
	// files. The default empty string imposes no include restriction.
	// 
	// Pattern scope: Patterns are matched against the final filename, not the full
	// local or remote path. Directory traversal is controlled separately by
	// SyncMustMatchDir[3] and SyncMustNotMatchDir[4].
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	// [3] #SyncMustMatchDir
	// [4] #SyncMustNotMatchDir
	void get_SyncMustMatch(CkString &str);
	// Specifies a semicolon-separated list of wildcard patterns for filenames that are
	// eligible for transfer by SyncTreeUpload[1] and SyncTreeDownload[2]. A file is
	// considered only when its filename matches at least one pattern.
	// 
	// For example, *.xml;*.txt;*.csv limits synchronization to XML, text, and CSV
	// files. The default empty string imposes no include restriction.
	// 
	// Pattern scope: Patterns are matched against the final filename, not the full
	// local or remote path. Directory traversal is controlled separately by
	// SyncMustMatchDir[3] and SyncMustNotMatchDir[4].
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	// [3] #SyncMustMatchDir
	// [4] #SyncMustNotMatchDir
	const wchar_t *syncMustMatch(void);
	// Specifies a semicolon-separated list of wildcard patterns for filenames that are
	// eligible for transfer by SyncTreeUpload[1] and SyncTreeDownload[2]. A file is
	// considered only when its filename matches at least one pattern.
	// 
	// For example, *.xml;*.txt;*.csv limits synchronization to XML, text, and CSV
	// files. The default empty string imposes no include restriction.
	// 
	// Pattern scope: Patterns are matched against the final filename, not the full
	// local or remote path. Directory traversal is controlled separately by
	// SyncMustMatchDir[3] and SyncMustNotMatchDir[4].
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	// [3] #SyncMustMatchDir
	// [4] #SyncMustNotMatchDir
	void put_SyncMustMatch(const wchar_t *newVal);

	// Specifies a semicolon-separated list of wildcard patterns for directory names
	// that may be traversed by SyncTreeUpload[1] and SyncTreeDownload[2]. When this
	// property is nonempty, synchronization descends only into directories whose names
	// match at least one pattern.
	// 
	// For example, a*;b*;c* permits traversal into directories whose names begin with
	// a, b, or c. The default empty string permits traversal into all directories,
	// subject to SyncMustNotMatchDir[3].
	// 
	// Pattern scope: Each pattern is matched against the directory name itself, not
	// its complete path. This property affects traversal; it does not directly select
	// individual files.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	// [3] #SyncMustNotMatchDir
	void get_SyncMustMatchDir(CkString &str);
	// Specifies a semicolon-separated list of wildcard patterns for directory names
	// that may be traversed by SyncTreeUpload[1] and SyncTreeDownload[2]. When this
	// property is nonempty, synchronization descends only into directories whose names
	// match at least one pattern.
	// 
	// For example, a*;b*;c* permits traversal into directories whose names begin with
	// a, b, or c. The default empty string permits traversal into all directories,
	// subject to SyncMustNotMatchDir[3].
	// 
	// Pattern scope: Each pattern is matched against the directory name itself, not
	// its complete path. This property affects traversal; it does not directly select
	// individual files.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	// [3] #SyncMustNotMatchDir
	const wchar_t *syncMustMatchDir(void);
	// Specifies a semicolon-separated list of wildcard patterns for directory names
	// that may be traversed by SyncTreeUpload[1] and SyncTreeDownload[2]. When this
	// property is nonempty, synchronization descends only into directories whose names
	// match at least one pattern.
	// 
	// For example, a*;b*;c* permits traversal into directories whose names begin with
	// a, b, or c. The default empty string permits traversal into all directories,
	// subject to SyncMustNotMatchDir[3].
	// 
	// Pattern scope: Each pattern is matched against the directory name itself, not
	// its complete path. This property affects traversal; it does not directly select
	// individual files.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	// [3] #SyncMustNotMatchDir
	void put_SyncMustMatchDir(const wchar_t *newVal);

	// Specifies a semicolon-separated list of wildcard patterns for filenames that
	// must be skipped by SyncTreeUpload[1] and SyncTreeDownload[2].
	// 
	// For example, *.tmp;*.bak;*.log excludes temporary, backup, and log files. The
	// default empty string excludes no files.
	// 
	// Pattern scope: Patterns are matched against the final filename, not the full
	// path. Use SyncMustNotMatchDir[3] to prevent synchronization from entering
	// selected directories and their subtrees.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	// [3] #SyncMustNotMatchDir
	void get_SyncMustNotMatch(CkString &str);
	// Specifies a semicolon-separated list of wildcard patterns for filenames that
	// must be skipped by SyncTreeUpload[1] and SyncTreeDownload[2].
	// 
	// For example, *.tmp;*.bak;*.log excludes temporary, backup, and log files. The
	// default empty string excludes no files.
	// 
	// Pattern scope: Patterns are matched against the final filename, not the full
	// path. Use SyncMustNotMatchDir[3] to prevent synchronization from entering
	// selected directories and their subtrees.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	// [3] #SyncMustNotMatchDir
	const wchar_t *syncMustNotMatch(void);
	// Specifies a semicolon-separated list of wildcard patterns for filenames that
	// must be skipped by SyncTreeUpload[1] and SyncTreeDownload[2].
	// 
	// For example, *.tmp;*.bak;*.log excludes temporary, backup, and log files. The
	// default empty string excludes no files.
	// 
	// Pattern scope: Patterns are matched against the final filename, not the full
	// path. Use SyncMustNotMatchDir[3] to prevent synchronization from entering
	// selected directories and their subtrees.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	// [3] #SyncMustNotMatchDir
	void put_SyncMustNotMatch(const wchar_t *newVal);

	// Specifies a semicolon-separated list of wildcard patterns for directory names
	// that must not be traversed by SyncTreeUpload[1] and SyncTreeDownload[2]. A
	// matching directory and everything below it are skipped.
	// 
	// For example, temp*;cache*;.git prevents traversal into temporary, cache, and Git
	// metadata directories. The default empty string excludes no directories.
	// 
	// Pattern scope: Each pattern is matched against the directory name itself, not
	// its complete path. This setting is especially useful during recursive
	// synchronization because excluding a directory avoids scanning its entire
	// subtree.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void get_SyncMustNotMatchDir(CkString &str);
	// Specifies a semicolon-separated list of wildcard patterns for directory names
	// that must not be traversed by SyncTreeUpload[1] and SyncTreeDownload[2]. A
	// matching directory and everything below it are skipped.
	// 
	// For example, temp*;cache*;.git prevents traversal into temporary, cache, and Git
	// metadata directories. The default empty string excludes no directories.
	// 
	// Pattern scope: Each pattern is matched against the directory name itself, not
	// its complete path. This setting is especially useful during recursive
	// synchronization because excluding a directory avoids scanning its entire
	// subtree.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	const wchar_t *syncMustNotMatchDir(void);
	// Specifies a semicolon-separated list of wildcard patterns for directory names
	// that must not be traversed by SyncTreeUpload[1] and SyncTreeDownload[2]. A
	// matching directory and everything below it are skipped.
	// 
	// For example, temp*;cache*;.git prevents traversal into temporary, cache, and Git
	// metadata directories. The default empty string excludes no directories.
	// 
	// Pattern scope: Each pattern is matched against the directory name itself, not
	// its complete path. This setting is especially useful during recursive
	// synchronization because excluding a directory avoids scanning its entire
	// subtree.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void put_SyncMustNotMatchDir(const wchar_t *newVal);

	// Provides a comma-separated list of specialized compatibility options. The
	// default is the empty string, which is appropriate for normal SCP transfers.
	// 
	// +----------------+-------------------------------------------------------------+
	// |    Keyword     |                          Behavior                           |
	// +================+=============================================================+
	// | FilenameOnly   | Uses only the filename, rather than the complete target     |
	// |                | path, in the remote scp -t command. This option exists for  |
	// |                | compatibility with systems such as certain LANCOM routers.  |
	// +----------------+-------------------------------------------------------------+
	// | ProtectFromVpn | On Android, attempts to route the SCP connection outside an |
	// |                | installed or active VPN.                                    |
	// +----------------+-------------------------------------------------------------+
	// 
	// Leave empty unless needed: These options alter uncommon platform or server
	// compatibility behavior. Enable a keyword only when a Chilkat example, release
	// note, or support response identifies it as necessary for the target environment.
	void get_UncommonOptions(CkString &str);
	// Provides a comma-separated list of specialized compatibility options. The
	// default is the empty string, which is appropriate for normal SCP transfers.
	// 
	// +----------------+-------------------------------------------------------------+
	// |    Keyword     |                          Behavior                           |
	// +================+=============================================================+
	// | FilenameOnly   | Uses only the filename, rather than the complete target     |
	// |                | path, in the remote scp -t command. This option exists for  |
	// |                | compatibility with systems such as certain LANCOM routers.  |
	// +----------------+-------------------------------------------------------------+
	// | ProtectFromVpn | On Android, attempts to route the SCP connection outside an |
	// |                | installed or active VPN.                                    |
	// +----------------+-------------------------------------------------------------+
	// 
	// Leave empty unless needed: These options alter uncommon platform or server
	// compatibility behavior. Enable a keyword only when a Chilkat example, release
	// note, or support response identifies it as necessary for the target environment.
	const wchar_t *uncommonOptions(void);
	// Provides a comma-separated list of specialized compatibility options. The
	// default is the empty string, which is appropriate for normal SCP transfers.
	// 
	// +----------------+-------------------------------------------------------------+
	// |    Keyword     |                          Behavior                           |
	// +================+=============================================================+
	// | FilenameOnly   | Uses only the filename, rather than the complete target     |
	// |                | path, in the remote scp -t command. This option exists for  |
	// |                | compatibility with systems such as certain LANCOM routers.  |
	// +----------------+-------------------------------------------------------------+
	// | ProtectFromVpn | On Android, attempts to route the SCP connection outside an |
	// |                | installed or active VPN.                                    |
	// +----------------+-------------------------------------------------------------+
	// 
	// Leave empty unless needed: These options alter uncommon platform or server
	// compatibility behavior. Enable a keyword only when a Chilkat example, release
	// note, or support response identifies it as necessary for the target environment.
	void put_UncommonOptions(const wchar_t *newVal);

	// Specifies an octal UNIX permission mode to apply to files uploaded by SCP,
	// overriding the permissions derived from the local source file. For example, set
	// this property to 0644 to grant read/write permission to the owner and read-only
	// permission to the group and others.
	// 
	// The default is the empty string, which causes the uploaded file's remote
	// permissions to be based on the local file's permissions.
	// 
	// UNIX permission notation: Supply the mode as a string containing octal digits,
	// such as 0600, 0644, or 0755. The remote SSH account must still have permission
	// to create or replace the file, and server-side policy may restrict the final
	// mode.
	void get_UnixPermOverride(CkString &str);
	// Specifies an octal UNIX permission mode to apply to files uploaded by SCP,
	// overriding the permissions derived from the local source file. For example, set
	// this property to 0644 to grant read/write permission to the owner and read-only
	// permission to the group and others.
	// 
	// The default is the empty string, which causes the uploaded file's remote
	// permissions to be based on the local file's permissions.
	// 
	// UNIX permission notation: Supply the mode as a string containing octal digits,
	// such as 0600, 0644, or 0755. The remote SSH account must still have permission
	// to create or replace the file, and server-side policy may restrict the final
	// mode.
	const wchar_t *unixPermOverride(void);
	// Specifies an octal UNIX permission mode to apply to files uploaded by SCP,
	// overriding the permissions derived from the local source file. For example, set
	// this property to 0644 to grant read/write permission to the owner and read-only
	// permission to the group and others.
	// 
	// The default is the empty string, which causes the uploaded file's remote
	// permissions to be based on the local file's permissions.
	// 
	// UNIX permission notation: Supply the mode as a string containing octal digits,
	// such as 0600, 0644, or 0755. The remote SSH account must still have permission
	// to create or replace the file, and server-side policy may restrict the final
	// mode.
	void put_UnixPermOverride(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Downloads the file at remotePath and appends its exact bytes to the existing contents
	// of the BinData object in bd.
	// 
	// An absolute remote path begins with /. A relative path is interpreted relative
	// to the authenticated SSH user's home directory.
	// 
	// Append behavior: This method does not clear bd before downloading. Clear the
	// BinData object first when the downloaded file should replace, rather than
	// follow, its current contents.
	bool DownloadBd(const wchar_t *remotePath, CkBinDataW &bd);

	// Creates an asynchronous task to call the DownloadBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadBdAsync(const wchar_t *remotePath, CkBinDataW &bd);

	// Downloads the file at remotePath from the SSH server and returns its exact bytes. No
	// character decoding or text transformation is performed.
	// 
	// An absolute remote path begins with /. A relative path is interpreted relative
	// to the authenticated SSH user's home directory.
	// 
	// In-memory download: The complete file is returned in memory. For large files,
	// DownloadFile[1] is generally preferable because it writes directly to the local
	// filesystem.
	// 
	// References:
	// [1] #DownloadFile
	bool DownloadBinary(const wchar_t *remotePath, CkByteData &outBytes);

	// Creates an asynchronous task to call the DownloadBinary method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadBinaryAsync(const wchar_t *remotePath);

	// Downloads the file at remotePath and returns its bytes encoded as text using the
	// binary encoding named by encoding, such as base64 or hex.
	// 
	// An absolute remote path begins with /. A relative path is interpreted relative
	// to the authenticated SSH user's home directory.
	// 
	// Binary encoding versus charset: encoding selects a text representation of arbitrary
	// bytes; it is not a character set and does not decode the remote file as text.
	// Use DownloadString[1] when the remote file contains text that must be decoded
	// with a charset.
	// Memory use: The complete file and its encoded representation are held in memory.
	// Encodings such as Base64 also increase the amount of data returned.
	// 
	// References:
	// [1] #DownloadString
	bool DownloadBinaryEncoded(const wchar_t *remotePath, const wchar_t *encoding, CkString &outStr);
	// Downloads the file at remotePath and returns its bytes encoded as text using the
	// binary encoding named by encoding, such as base64 or hex.
	// 
	// An absolute remote path begins with /. A relative path is interpreted relative
	// to the authenticated SSH user's home directory.
	// 
	// Binary encoding versus charset: encoding selects a text representation of arbitrary
	// bytes; it is not a character set and does not decode the remote file as text.
	// Use DownloadString[1] when the remote file contains text that must be decoded
	// with a charset.
	// Memory use: The complete file and its encoded representation are held in memory.
	// Encodings such as Base64 also increase the amount of data returned.
	// 
	// References:
	// [1] #DownloadString
	const wchar_t *downloadBinaryEncoded(const wchar_t *remotePath, const wchar_t *encoding);

	// Creates an asynchronous task to call the DownloadBinaryEncoded method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadBinaryEncodedAsync(const wchar_t *remotePath, const wchar_t *encoding);

	// Downloads the file at remotePath from the SSH server and writes its bytes to the local
	// filesystem path in localPath.
	// 
	// An absolute remote path begins with /. A relative remote path is interpreted
	// relative to the authenticated SSH user's home directory. The application must
	// have permission to create or replace the local destination file.
	// 
	// Streaming transfer: This method is the preferred download method for large files
	// because the data is written to disk rather than returned as one in-memory byte
	// array or string.
	bool DownloadFile(const wchar_t *remotePath, const wchar_t *localPath);

	// Creates an asynchronous task to call the DownloadFile method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadFileAsync(const wchar_t *remotePath, const wchar_t *localPath);

	// Downloads the file at remotePath, decodes its bytes using the character encoding named
	// by charset, and returns the resulting text.
	// 
	// An absolute remote path begins with /. A relative path is interpreted relative
	// to the authenticated SSH user's home directory.
	// 
	// Charset matters: charset describes how the remote file’s bytes represent
	// characters, for example utf-8, windows-1252, or iso-8859-1. Using the wrong
	// charset can produce incorrect characters. Use a binary download method for files
	// that are not text.
	bool DownloadString(const wchar_t *remotePath, const wchar_t *charset, CkString &outStr);
	// Downloads the file at remotePath, decodes its bytes using the character encoding named
	// by charset, and returns the resulting text.
	// 
	// An absolute remote path begins with /. A relative path is interpreted relative
	// to the authenticated SSH user's home directory.
	// 
	// Charset matters: charset describes how the remote file’s bytes represent
	// characters, for example utf-8, windows-1252, or iso-8859-1. Using the wrong
	// charset can produce incorrect characters. Use a binary download method for files
	// that are not text.
	const wchar_t *downloadString(const wchar_t *remotePath, const wchar_t *charset);

	// Creates an asynchronous task to call the DownloadString method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadStringAsync(const wchar_t *remotePath, const wchar_t *charset);

	// Loads the original caller object associated with the asynchronous Task in task.
	// task must be a task created by a compatible asynchronous method of this class.
	// 
	// Normally not application-facing: This is a support method for Chilkat async-task
	// infrastructure and generated language wrappers. It does not load arbitrary task
	// results or transfer data.
	bool LoadTaskCaller(CkTaskW &task);

	// Synchronizes files from the remote directory tree rooted at remoteRoot to the local
	// directory rooted at localRoot. bRecurse controls recursion: set it to true to descend
	// into subdirectories, or false to process only files directly in the root
	// directory.
	// 
	// An absolute remote root begins with /; a relative remote root is interpreted
	// relative to the authenticated SSH user's home directory. A relative local root
	// is interpreted relative to the application's current working directory.
	// 
	// +------+-----------------------------------------------------------------------+
	// | Mode |                           Files transferred                           |
	// +======+=======================================================================+
	// | 0    | Download every eligible file.                                         |
	// +------+-----------------------------------------------------------------------+
	// | 1    | Download files that do not already exist locally.                     |
	// +------+-----------------------------------------------------------------------+
	// | 2    | Download files that are missing locally or whose remote last-modified |
	// |      | time is newer than the local file.                                    |
	// +------+-----------------------------------------------------------------------+
	// | 3    | Download only files whose remote last-modified time is newer. A       |
	// |      | remote file that has no local counterpart is not downloaded.          |
	// +------+-----------------------------------------------------------------------+
	// | 5    | Download files that are missing locally or whose size differs from    |
	// |      | the local file.                                                       |
	// +------+-----------------------------------------------------------------------+
	// | 6    | Download files that are missing locally, differ in size, or have a    |
	// |      | newer remote last-modified time.                                      |
	// +------+-----------------------------------------------------------------------+
	// 
	// The filename and directory filters in SyncMustMatch[1], SyncMustNotMatch[2],
	// SyncMustMatchDir[3], and SyncMustNotMatchDir[4] are applied during traversal.
	// After completion, SyncedFiles[5] lists the full local paths of files actually
	// downloaded.
	// 
	// Timestamp-based modes: Modes 2, 3, and 6 compare last-modified times. Incorrect
	// server timestamps or clock differences between systems can affect which file is
	// considered newer.
	// 
	// References:
	// [1] #SyncMustMatch
	// [2] #SyncMustNotMatch
	// [3] #SyncMustMatchDir
	// [4] #SyncMustNotMatchDir
	// [5] #SyncedFiles
	bool SyncTreeDownload(const wchar_t *remoteRoot, const wchar_t *localRoot, int mode, bool bRecurse);

	// Creates an asynchronous task to call the SyncTreeDownload method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SyncTreeDownloadAsync(const wchar_t *remoteRoot, const wchar_t *localRoot, int mode, bool bRecurse);

	// Synchronizes files from the local directory tree rooted at localBaseDir to the remote
	// directory rooted at remoteBaseDir. bRecurse controls recursion: set it to true to descend
	// into subdirectories, or false to process only files directly in the local base
	// directory.
	// 
	// A relative local base directory is interpreted relative to the application's
	// current working directory. An absolute remote base directory begins with /; a
	// relative remote base directory is interpreted relative to the authenticated SSH
	// user's home directory.
	// 
	// +------+-----------------------------------------------------------------------+
	// | Mode |                           Files transferred                           |
	// +======+=======================================================================+
	// | 0    | Upload every eligible file.                                           |
	// +------+-----------------------------------------------------------------------+
	// | 1    | Upload files that do not already exist on the remote server.          |
	// +------+-----------------------------------------------------------------------+
	// | 2    | Upload files that are missing remotely or whose local last-modified   |
	// |      | time is newer than the remote file.                                   |
	// +------+-----------------------------------------------------------------------+
	// | 3    | Upload only files whose local last-modified time is newer. A local    |
	// |      | file that has no remote counterpart is not uploaded.                  |
	// +------+-----------------------------------------------------------------------+
	// | 4    | Upload files that are missing remotely or whose size differs from the |
	// |      | remote file.                                                          |
	// +------+-----------------------------------------------------------------------+
	// | 5    | Upload files that are missing remotely, differ in size, or have a     |
	// |      | newer local last-modified time.                                       |
	// +------+-----------------------------------------------------------------------+
	// 
	// The filename and directory filters in SyncMustMatch[1], SyncMustNotMatch[2],
	// SyncMustMatchDir[3], and SyncMustNotMatchDir[4] are applied during traversal.
	// After completion, SyncedFiles[5] lists the full local paths of files actually
	// uploaded.
	// 
	// Timestamp-based modes: Modes 2, 3, and 5 compare last-modified times. Incorrect
	// server timestamps or clock differences between systems can affect which file is
	// considered newer.
	// 
	// References:
	// [1] #SyncMustMatch
	// [2] #SyncMustNotMatch
	// [3] #SyncMustMatchDir
	// [4] #SyncMustNotMatchDir
	// [5] #SyncedFiles
	bool SyncTreeUpload(const wchar_t *localBaseDir, const wchar_t *remoteBaseDir, int mode, bool bRecurse);

	// Creates an asynchronous task to call the SyncTreeUpload method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SyncTreeUploadAsync(const wchar_t *localBaseDir, const wchar_t *remoteBaseDir, int mode, bool bRecurse);

	// Uploads all bytes currently contained in the BinData object in bd to the
	// remote file at remotePath. The data is transferred without character decoding or other
	// transformation.
	// 
	// An absolute remote path begins with /. A relative path is interpreted relative
	// to the authenticated SSH user's home directory. The remote parent directory must
	// already exist.
	// 
	// Source object: The upload reads the current contents of bd and does not remove
	// or modify those bytes.
	bool UploadBd(const wchar_t *remotePath, CkBinDataW &bd);

	// Creates an asynchronous task to call the UploadBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadBdAsync(const wchar_t *remotePath, CkBinDataW &bd);

	// Uploads the exact bytes in binData to the remote file at remotePath. No text encoding,
	// newline conversion, or other data transformation is performed.
	// 
	// An absolute remote path begins with /. A relative path is interpreted relative
	// to the authenticated SSH user's home directory. The remote parent directory must
	// already exist and the SSH account must have permission to create or replace the
	// file.
	// 
	// Binary-safe transfer: Use this method for arbitrary in-memory data. For a local
	// file, UploadFile[1] avoids loading the entire source into an application byte
	// array.
	// 
	// References:
	// [1] #UploadFile
	bool UploadBinary(const wchar_t *remotePath, CkByteData &binData);

	// Creates an asynchronous task to call the UploadBinary method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadBinaryAsync(const wchar_t *remotePath, CkByteData &binData);

	// Decodes the text in encodedData using the binary encoding named by encoding, then uploads
	// the resulting bytes to the remote file at remotePath. Typical encoding names include
	// base64 and hex.
	// 
	// An absolute remote path begins with /. A relative path is interpreted relative
	// to the authenticated SSH user's home directory. The remote parent directory must
	// already exist.
	// 
	// The encoded text is not uploaded literally: For example, when encoding is base64,
	// Chilkat Base64-decodes encodedData and transfers the decoded binary bytes. This method
	// is for encoded binary representations, not character-set conversion.
	bool UploadBinaryEncoded(const wchar_t *remotePath, const wchar_t *encodedData, const wchar_t *encoding);

	// Creates an asynchronous task to call the UploadBinaryEncoded method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadBinaryEncodedAsync(const wchar_t *remotePath, const wchar_t *encodedData, const wchar_t *encoding);

	// Uploads the local filesystem file at localPath to the remote path in remotePath. The file
	// is transferred as raw bytes.
	// 
	// An absolute remote path begins with /. A relative remote path is interpreted
	// relative to the authenticated SSH user's home directory. The remote parent
	// directory must already exist, and the SSH account must have permission to create
	// or replace the destination file.
	// 
	// Remote permissions are normally derived from the local file. Set
	// UnixPermOverride[1] when a specific remote UNIX mode is required.
	// 
	// SCP is not FTP: There is no ASCII or binary transfer mode. UploadFile copies the
	// file bytes without line-ending or character-set conversion.
	// 
	// References:
	// [1] #UnixPermOverride
	bool UploadFile(const wchar_t *localPath, const wchar_t *remotePath);

	// Creates an asynchronous task to call the UploadFile method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadFileAsync(const wchar_t *localPath, const wchar_t *remotePath);

	// Encodes the text in textData using the character encoding named by charset, then
	// uploads the resulting bytes to the remote file at remotePath.
	// 
	// An absolute remote path begins with /. A relative path is interpreted relative
	// to the authenticated SSH user's home directory. The remote parent directory must
	// already exist.
	// 
	// Text encoding: charset controls how characters are converted to bytes, for example
	// utf-8, windows-1252, or iso-8859-1. SCP itself has no text mode; any line-ending
	// characters already present in textData are encoded and transferred as part of the
	// text.
	bool UploadString(const wchar_t *remotePath, const wchar_t *textData, const wchar_t *charset);

	// Creates an asynchronous task to call the UploadString method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadStringAsync(const wchar_t *remotePath, const wchar_t *textData, const wchar_t *charset);

	// Associates this Scp object with the connected and authenticated Ssh object in
	// sshConnection. Subsequent SCP operations use that existing SSH session rather than
	// opening a separate network connection.
	// 
	// Connection, proxy, timeout, host-key verification, algorithm, logging, and other
	// transport-related settings belong to the Ssh object and therefore apply to the
	// SCP operations performed through it. Keep the SSH object connected and available
	// for as long as the Scp object is using it.
	// 
	// SCP and SFTP are different protocols: Scp performs SCP-style transfers over SSH
	// and requires compatible SCP support on the remote system. Use Chilkat.SFtp when
	// the server expects the SSH File Transfer Protocol subsystem or when directory
	// listing and remote file-management features are needed.
	bool UseSsh(CkSshW &sshConnection);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
