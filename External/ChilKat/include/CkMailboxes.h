// CkMailboxes.h: interface for the CkMailboxes class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkMailboxes_H
#define _CkMailboxes_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkTask;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkMailboxes
class CK_VISIBLE_PUBLIC CkMailboxes  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkMailboxes(const CkMailboxes &);
	CkMailboxes &operator=(const CkMailboxes &);

    public:
	CkMailboxes(void);
	virtual ~CkMailboxes(void);

	static CkMailboxes *createNew(void);
	static CkMailboxes *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the number of mailboxes in this collection. An empty collection has a
	// count of 0.
	// 
	// Mailboxes is a read-only result container populated by Imap.MbxList.
	// Applications inspect the returned entries but do not directly add, remove, or
	// modify mailboxes in this object.
	// 
	int get_Count(void);



	// ----------------------
	// Methods
	// ----------------------
	// Returns a comma-separated list of flags for the mailbox at the zero-based index
	// specified by index.
	// 
	// For example:
	// 
	// \HasNoChildren,\Important
	// 
	// To inspect the flags individually, use GetNumFlags[1] and GetNthFlag[2].
	// 
	// 
	// References:
	// [1] #GetNumFlags
	// [2] #GetNthFlag
	bool GetFlags(int index, CkString &outStr);

	// Returns a comma-separated list of flags for the mailbox at the zero-based index
	// specified by index.
	// 
	// For example:
	// 
	// \HasNoChildren,\Important
	// 
	// To inspect the flags individually, use GetNumFlags[1] and GetNthFlag[2].
	// 
	// 
	// References:
	// [1] #GetNumFlags
	// [2] #GetNthFlag
	const char *getFlags(int index);
	// Returns a comma-separated list of flags for the mailbox at the zero-based index
	// specified by index.
	// 
	// For example:
	// 
	// \HasNoChildren,\Important
	// 
	// To inspect the flags individually, use GetNumFlags[1] and GetNthFlag[2].
	// 
	// 
	// References:
	// [1] #GetNumFlags
	// [2] #GetNthFlag
	const char *flags(int index);


	// Returns the zero-based index of the mailbox whose name matches mbxName.
	// 
	// Pass mbxName as a normal Unicode mailbox name. Chilkat automatically handles the
	// protocol-level modified UTF-7 or IMAP UTF-8 representation; the application
	// should not encode the mailbox name manually.
	// 
	// The returned index can be used with methods such as GetName[1], GetFlags[2], and
	// IsSelectable[3].
	// 
	// 
	// References:
	// [1] #GetName
	// [2] #GetFlags
	// [3] #IsSelectable
	int GetMailboxIndex(const char *mbxName);


	// Returns the name of the mailbox at the zero-based index specified by index.
	// 
	// The name is returned as normal Unicode text. Chilkat automatically decodes
	// modified UTF-7 or IMAP UTF-8 mailbox names received from the server and
	// automatically performs the corresponding encoding when the name is passed to an
	// Imap method.
	// 
	// The returned name can therefore be passed directly to methods that select,
	// examine, create, rename, delete, copy to, or otherwise operate on a mailbox. Do
	// not manually encode or decode the mailbox name.
	// 
	bool GetName(int index, CkString &outStrName);

	// Returns the name of the mailbox at the zero-based index specified by index.
	// 
	// The name is returned as normal Unicode text. Chilkat automatically decodes
	// modified UTF-7 or IMAP UTF-8 mailbox names received from the server and
	// automatically performs the corresponding encoding when the name is passed to an
	// Imap method.
	// 
	// The returned name can therefore be passed directly to methods that select,
	// examine, create, rename, delete, copy to, or otherwise operate on a mailbox. Do
	// not manually encode or decode the mailbox name.
	// 
	const char *getName(int index);
	// Returns the name of the mailbox at the zero-based index specified by index.
	// 
	// The name is returned as normal Unicode text. Chilkat automatically decodes
	// modified UTF-7 or IMAP UTF-8 mailbox names received from the server and
	// automatically performs the corresponding encoding when the name is passed to an
	// Imap method.
	// 
	// The returned name can therefore be passed directly to methods that select,
	// examine, create, rename, delete, copy to, or otherwise operate on a mailbox. Do
	// not manually encode or decode the mailbox name.
	// 
	const char *name(int index);


	// Returns one flag from a mailbox in the collection.
	// 
	//     * index is the zero-based mailbox index.
	//     * flagIndex is the zero-based flag index within that mailbox.
	// 
	// Call GetNumFlags[1] to determine the number of flags available for the mailbox.
	// 
	// 
	// References:
	// [1] #GetNumFlags
	bool GetNthFlag(int index, int flagIndex, CkString &outStr);

	// Returns one flag from a mailbox in the collection.
	// 
	//     * index is the zero-based mailbox index.
	//     * flagIndex is the zero-based flag index within that mailbox.
	// 
	// Call GetNumFlags[1] to determine the number of flags available for the mailbox.
	// 
	// 
	// References:
	// [1] #GetNumFlags
	const char *getNthFlag(int index, int flagIndex);
	// Returns one flag from a mailbox in the collection.
	// 
	//     * index is the zero-based mailbox index.
	//     * flagIndex is the zero-based flag index within that mailbox.
	// 
	// Call GetNumFlags[1] to determine the number of flags available for the mailbox.
	// 
	// 
	// References:
	// [1] #GetNumFlags
	const char *nthFlag(int index, int flagIndex);


	// Returns the number of flags associated with the mailbox at the zero-based index
	// specified by index.
	// 
	// Returns -1 if index is outside the valid mailbox-index range. Use GetNthFlag[1]
	// to retrieve the individual flags.
	// 
	// 
	// References:
	// [1] #GetNthFlag
	int GetNumFlags(int index);


	// Returns true if the mailbox at the zero-based index specified by index contains
	// the flag named by flagName.
	// 
	// Flag-name comparison is case-insensitive. Include the leading backslash when
	// checking an IMAP system flag or mailbox attribute, for example \Marked,
	// \Noselect, or \HasChildren.
	// 
	bool HasFlag(int index, const char *flagName);


	// Returns true if the mailbox at the zero-based index specified by index either
	// has child mailboxes or permits child mailboxes to be created beneath it.
	// 
	// Important distinction: \HasNoChildren means that no child mailboxes currently
	// exist. It does not mean that children cannot be created. The IMAP \Noinferiors
	// attribute means that child mailboxes cannot be created.
	bool HasInferiors(int index);


	// Returns true if the mailbox at the zero-based index specified by index has the
	// IMAP \Marked attribute.
	// 
	// \Marked is a server-provided hint that the mailbox may contain messages added
	// since it was last selected. It is advisory information returned by the
	// mailbox-listing operation.
	// 
	bool IsMarked(int index);


	// Returns true if the mailbox at the zero-based index specified by index can be
	// selected or examined for message access.
	// 
	// A mailbox having the IMAP \Noselect attribute is not selectable, even though it
	// may appear in the mailbox hierarchy and may contain selectable child mailboxes.
	// 
	bool IsSelectable(int index);


	// Loads this object from a completed asynchronous task whose result is a Mailboxes
	// collection.
	// 
	// task must reference a completed Task returned by the asynchronous form of an
	// operation that produces mailbox-listing results.
	// 
	bool LoadTaskResult(CkTask &task);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
