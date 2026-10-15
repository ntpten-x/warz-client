// CkDirTree.h: interface for the CkDirTree class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkDirTree_H
#define _CkDirTree_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"




#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkDirTree
class CK_VISIBLE_PUBLIC CkDirTree  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkDirTree(const CkDirTree &);
	CkDirTree &operator=(const CkDirTree &);

    public:
	CkDirTree(void);
	virtual ~CkDirTree(void);

	static CkDirTree *createNew(void);
	static CkDirTree *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Specifies the root directory whose contents are traversed. Set this property
	// before calling BeginIterate.
	// 
	// The value may be an absolute filesystem path or a relative path. A relative path
	// is resolved from the calling process's current working directory.
	// 
	// Iteration scope: The iterator visits the files and subdirectories contained
	// under this directory. The Recurse property determines whether nested levels are
	// included.
	void get_BaseDir(CkString &str);
	// Specifies the root directory whose contents are traversed. Set this property
	// before calling BeginIterate.
	// 
	// The value may be an absolute filesystem path or a relative path. A relative path
	// is resolved from the calling process's current working directory.
	// 
	// Iteration scope: The iterator visits the files and subdirectories contained
	// under this directory. The Recurse property determines whether nested levels are
	// included.
	const char *baseDir(void);
	// Specifies the root directory whose contents are traversed. Set this property
	// before calling BeginIterate.
	// 
	// The value may be an absolute filesystem path or a relative path. A relative path
	// is resolved from the calling process's current working directory.
	// 
	// Iteration scope: The iterator visits the files and subdirectories contained
	// under this directory. The Recurse property determines whether nested levels are
	// included.
	void put_BaseDir(const char *newVal);

	// Indicates whether the traversal has reached its normal end and no current item
	// remains.
	// 
	// This property is especially important because both BeginIterate and
	// AdvancePosition can return false for either normal completion or an error:
	// 
	// +------------+---------------+-------------------------------------------------+
	// |   Method   | DoneIterating |                     Meaning                     |
	// |   result   |               |                                                 |
	// +============+===============+=================================================+
	// | false    | true        | The directory was empty, or the last item has   |
	// |            |               | been passed. This is normal completion.         |
	// +------------+---------------+-------------------------------------------------+
	// | false    | false       | An error occurred. Examine LastErrorText .      |
	// +------------+---------------+-------------------------------------------------+
	// 
	bool get_DoneIterating(void);

	// Returns the size of the current file in bytes as a 32-bit integer. The value is
	// 0 when the current item is a directory.
	// 
	// Large files: A 32-bit integer cannot represent all modern file sizes. Use
	// FileSize64 when the language binding provides it, or FileSizeStr when a decimal
	// string is more portable.
	int get_FileSize32(void);

	// Returns the size of the current file in bytes as a 64-bit integer. The value is
	// 0 when the current item is a directory.
	// 
	// This is the preferred numeric size property for files that may exceed the range
	// of FileSize32. In bindings that do not expose a 64-bit integer property, use
	// FileSizeStr.
	// 
	__int64 get_FileSize64(void);

	// Returns the size of the current file in bytes as an unsigned decimal string. The
	// value is 0 when the current item is a directory.
	// 
	// This representation is useful for very large files and for language bindings
	// where a 64-bit integer is unavailable or inconvenient. Convert the string to an
	// appropriate arbitrary-precision or 64-bit numeric type only when arithmetic is
	// required.
	// 
	void get_FileSizeStr(CkString &str);
	// Returns the size of the current file in bytes as an unsigned decimal string. The
	// value is 0 when the current item is a directory.
	// 
	// This representation is useful for very large files and for language bindings
	// where a 64-bit integer is unavailable or inconvenient. Convert the string to an
	// appropriate arbitrary-precision or 64-bit numeric type only when arithmetic is
	// required.
	// 
	const char *fileSizeStr(void);

	// Returns the absolute filesystem path of the current file or subdirectory,
	// including the item's name.
	// 
	// The path uses the native path syntax for the operating system. For a path
	// relative to BaseDir, use RelativePath.
	// 
	void get_FullPath(CkString &str);
	// Returns the absolute filesystem path of the current file or subdirectory,
	// including the item's name.
	// 
	// The path uses the native path syntax for the operating system. For a path
	// relative to BaseDir, use RelativePath.
	// 
	const char *fullPath(void);

	// Returns the current item's Windows extended-length absolute path. For example, a
	// local path may be returned as \\?\C:\data\reports\file.txt; a network path may
	// use the \\?\UNC\server\share\... form.
	// 
	// Windows path form: The \\?\ prefix asks Windows to use extended-length path
	// parsing and is useful when working with paths that may exceed legacy path-length
	// limits. Use FullPath when an ordinary native absolute path is preferred.
	void get_FullUncPath(CkString &str);
	// Returns the current item's Windows extended-length absolute path. For example, a
	// local path may be returned as \\?\C:\data\reports\file.txt; a network path may
	// use the \\?\UNC\server\share\... form.
	// 
	// Windows path form: The \\?\ prefix asks Windows to use extended-length path
	// parsing and is useful when working with paths that may exceed legacy path-length
	// limits. Use FullPath when an ordinary native absolute path is preferred.
	const char *fullUncPath(void);

	// Returns true when the current item is a subdirectory and false when it is a
	// file.
	// 
	// Check this property before using a file-size property. Directory items report a
	// size of 0.
	// 
	bool get_IsDirectory(void);

	// Controls whether traversal descends into nested subdirectories.
	// 
	// +---------+--------------------------------------------------------------------+
	// | true  | Visit files and directories throughout the complete tree rooted at |
	// |         | BaseDir .                                                          |
	// +=========+====================================================================+
	// | false | Visit only the immediate contents of BaseDir .                     |
	// +=========+====================================================================+
	// 
	// The default value is true. Set this property before calling BeginIterate.
	// 
	bool get_Recurse(void);
	// Controls whether traversal descends into nested subdirectories.
	// 
	// +---------+--------------------------------------------------------------------+
	// | true  | Visit files and directories throughout the complete tree rooted at |
	// |         | BaseDir .                                                          |
	// +=========+====================================================================+
	// | false | Visit only the immediate contents of BaseDir .                     |
	// +=========+====================================================================+
	// 
	// The default value is true. Set this property before calling BeginIterate.
	// 
	void put_Recurse(bool newVal);

	// Returns the path of the current file or subdirectory relative to BaseDir,
	// including the item's name.
	// 
	// For example, if BaseDir is C:\data and the current item is
	// C:\data\images\logo.png, this property returns images\logo.png on Windows. Path
	// separators follow the operating system's native convention.
	// 
	void get_RelativePath(CkString &str);
	// Returns the path of the current file or subdirectory relative to BaseDir,
	// including the item's name.
	// 
	// For example, if BaseDir is C:\data and the current item is
	// C:\data\images\logo.png, this property returns images\logo.png on Windows. Path
	// separators follow the operating system's native convention.
	// 
	const char *relativePath(void);

	// Provides a comma-separated list of specialized compatibility options. The
	// default is the empty string, and applications should normally leave it
	// unchanged.
	// 
	// +---------------+--------------------------------------------------------------+
	// |    Keyword    |                            Effect                            |
	// +===============+==============================================================+
	// | Q_EncodePaths | Returns path-valued output properties in Chilkat's Q-encoded |
	// |               | representation. Introduced in Chilkat v11.1.0. This changes  |
	// |               | only the returned string representation; it does not change  |
	// |               | which filesystem items are traversed.                        |
	// +---------------+--------------------------------------------------------------+
	// 
	void get_UncommonOptions(CkString &str);
	// Provides a comma-separated list of specialized compatibility options. The
	// default is the empty string, and applications should normally leave it
	// unchanged.
	// 
	// +---------------+--------------------------------------------------------------+
	// |    Keyword    |                            Effect                            |
	// +===============+==============================================================+
	// | Q_EncodePaths | Returns path-valued output properties in Chilkat's Q-encoded |
	// |               | representation. Introduced in Chilkat v11.1.0. This changes  |
	// |               | only the returned string representation; it does not change  |
	// |               | which filesystem items are traversed.                        |
	// +---------------+--------------------------------------------------------------+
	// 
	const char *uncommonOptions(void);
	// Provides a comma-separated list of specialized compatibility options. The
	// default is the empty string, and applications should normally leave it
	// unchanged.
	// 
	// +---------------+--------------------------------------------------------------+
	// |    Keyword    |                            Effect                            |
	// +===============+==============================================================+
	// | Q_EncodePaths | Returns path-valued output properties in Chilkat's Q-encoded |
	// |               | representation. Introduced in Chilkat v11.1.0. This changes  |
	// |               | only the returned string representation; it does not change  |
	// |               | which filesystem items are traversed.                        |
	// +---------------+--------------------------------------------------------------+
	// 
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Advances the traversal from the current item to the next file or subdirectory.
	// 
	// If the method returns true, the current-item properties—such as FullPath,
	// RelativePath, IsDirectory, and the file-size properties—describe the newly
	// selected item.
	// 
	// +-------------+---------------+------------------------------------------------+
	// |   Return    | DoneIterating |                    Meaning                     |
	// |    value    |               |                                                |
	// +=============+===============+================================================+
	// | true      | false       | The iterator advanced successfully and a       |
	// |             |               | current item is available.                     |
	// +-------------+---------------+------------------------------------------------+
	// | false     | true        | The last item has been passed; traversal       |
	// |             |               | completed normally.                            |
	// +-------------+---------------+------------------------------------------------+
	// | false     | false       | An error occurred. Examine LastErrorText .     |
	// +-------------+---------------+------------------------------------------------+
	// 
	bool AdvancePosition(void);


	// Initializes a new traversal using the current BaseDir and Recurse settings.
	// 
	// If the method returns true, the iterator is positioned at the first file or
	// subdirectory, and the current-item properties can be read immediately. Continue
	// by processing that item and then calling AdvancePosition.
	// 
	// +------------+---------------+-------------------------------------------------+
	// |   Return   | DoneIterating |                     Meaning                     |
	// |   value    |               |                                                 |
	// +============+===============+=================================================+
	// | true     | false       | The first item is available.                    |
	// +------------+---------------+-------------------------------------------------+
	// | false    | true        | The directory contains no items in the selected |
	// |            |               | traversal scope. This is not an error.          |
	// +------------+---------------+-------------------------------------------------+
	// | false    | false       | Initialization failed. Examine LastErrorText .  |
	// +------------+---------------+-------------------------------------------------+
	// 
	// Property lifetime: Treat the current-item properties as valid only while the
	// iterator is positioned on an item—that is, after a successful BeginIterate or
	// AdvancePosition.
	bool BeginIterate(void);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
