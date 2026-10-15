// CkMessageSetW.h: interface for the CkMessageSetW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkMessageSetW_H
#define _CkMessageSetW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkTaskW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkMessageSetW
class CK_VISIBLE_PUBLIC CkMessageSetW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkMessageSetW(const CkMessageSetW &);
	CkMessageSetW &operator=(const CkMessageSetW &);

    public:
	CkMessageSetW(void);
	virtual ~CkMessageSetW(void);

	

	static CkMessageSetW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the number of unique message identifiers currently stored in the set. A
	// newly created MessageSet has a count of 0.
	// 
	// The identifiers are maintained in ascending numeric order. They are interpreted
	// as UIDs when HasUids[1] is true, or as sequence numbers when it is false.
	// 
	// 
	// References:
	// [1] #HasUids
	int get_Count(void);

	// Indicates how the numeric identifiers in this message set are interpreted:
	// 
	//     * true — the values are IMAP UIDs. This is the default.
	//     * false — the values are mailbox-relative sequence numbers.
	// 
	// Changing this property only changes how the existing numeric values are
	// interpreted. It does not convert, validate, reorder, or clear the identifiers.
	// 
	// An IMAP UID is stable only within its mailbox and while that mailbox's
	// UIDVALIDITY remains unchanged. Sequence numbers are temporary and can change
	// when messages are added or expunged.
	// 
	// Set this property consistently before passing a manually constructed message set
	// to an Imap method. The string formats produced by ToCommaSeparatedStr[1] and
	// ToCompactString[2] contain only the numeric values and do not include this
	// setting.
	// 
	// 
	// References:
	// [1] #ToCommaSeparatedStr
	// [2] #ToCompactString
	bool get_HasUids(void);
	// Indicates how the numeric identifiers in this message set are interpreted:
	// 
	//     * true — the values are IMAP UIDs. This is the default.
	//     * false — the values are mailbox-relative sequence numbers.
	// 
	// Changing this property only changes how the existing numeric values are
	// interpreted. It does not convert, validate, reorder, or clear the identifiers.
	// 
	// An IMAP UID is stable only within its mailbox and while that mailbox's
	// UIDVALIDITY remains unchanged. Sequence numbers are temporary and can change
	// when messages are added or expunged.
	// 
	// Set this property consistently before passing a manually constructed message set
	// to an Imap method. The string formats produced by ToCommaSeparatedStr[1] and
	// ToCompactString[2] contain only the numeric values and do not include this
	// setting.
	// 
	// 
	// References:
	// [1] #ToCommaSeparatedStr
	// [2] #ToCompactString
	void put_HasUids(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Returns true if the raw numeric value in msgId is present in the message set;
	// otherwise, returns false.
	// 
	// The comparison is numeric only. The HasUids[1] setting does not participate in
	// the comparison.
	// 
	// 
	// References:
	// [1] #HasUids
	bool ContainsId(unsigned long msgId);

	// Clears the identifiers currently stored in this object and loads the compact
	// message-set representation in str. The existing HasUids[1] setting is
	// preserved.
	// 
	// Important: The existing set is cleared before str is parsed. If parsing fails,
	// the message set remains empty.
	// 
	// An empty string succeeds and leaves the set empty. Valid identifiers are
	// unsigned 32-bit decimal values from 1 through 4294967295. The value 0 is not
	// accepted. Values too large for an unsigned 32-bit integer cause the method to
	// fail.
	// 
	// The syntax uses commas to separate values or ranges, and a colon to specify an
	// inclusive ascending range. A single range may contain at most 500,001
	// identifiers; equivalently, the ending value minus the starting value cannot
	// exceed 500000.
	// 
	// Version note: The error-handling behavior described here was added in Chilkat
	// version 11.6.0.
	// 
	// +-----------+---------------------------------------------------------+
	// |   Input   |                         Result                          |
	// +===========+=========================================================+
	// | 1,2,3,4,5 | Loads 1,2,3,4,5 .                                       |
	// +-----------+---------------------------------------------------------+
	// | 1:5       | Loads the inclusive range 1 through 5 .                 |
	// +-----------+---------------------------------------------------------+
	// | 1:5,8:10  | Loads 1,2,3,4,5,8,9,10 .                                |
	// +-----------+---------------------------------------------------------+
	// | 1,1,2,2,3 | Loads the unique values 1,2,3 .                         |
	// +-----------+---------------------------------------------------------+
	// | 1:5,3:7   | Loads the unique values 1 through 7 .                   |
	// +-----------+---------------------------------------------------------+
	// | 1,,3      | Empty comma-separated elements are ignored; loads 1,3 . |
	// +-----------+---------------------------------------------------------+
	// | 1,2,abc,4 | Unrecognized elements are ignored; loads 1,2,4 .        |
	// +-----------+---------------------------------------------------------+
	// | +1        | A leading plus sign is accepted; loads 1 .              |
	// +-----------+---------------------------------------------------------+
	// 
	// Whitespace is accepted around values, commas, and colons. This includes spaces,
	// tabs, carriage returns, and line feeds. Empty comma-separated elements and
	// unrecognized non-numeric elements are intentionally ignored. If str is nonempty
	// and no valid identifier is loaded, the method returns false.
	// 
	// Descending ranges, ranges containing 0, wildcard ranges such as 1:*, malformed
	// range syntax, oversized ranges, and numeric overflow cause the method to return
	// false.
	// 
	// On success, duplicate identifiers are removed and the resulting identifiers are
	// stored in ascending numeric order. The serialized form contains only the numbers
	// and does not indicate whether they are UIDs or sequence numbers.
	// 
	// Use ToCompactString[2] to generate the canonical compact representation.
	// 
	// 
	// References:
	// [1] #HasUids
	// [2] #ToCompactString
	bool FromCompactString(const wchar_t *str);

	// Returns the message identifier at the zero-based index specified by index.
	// Identifiers are returned in ascending numeric order.
	// 
	// If index is negative or is greater than or equal to Count[1], this method returns
	// 0xFFFFFFFF.
	// 
	// Important: The numeric value 0xFFFFFFFF can also be stored in the set. Check
	// index against Count before calling this method when that value could be present.
	// 
	// References:
	// [1] #Count
	unsigned long GetId(int index);

	// Adds id to the message set and maintains the identifiers in ascending numeric
	// order.
	// 
	//     * If id is already present, no duplicate is added.
	//     * If id is 0, the set is unchanged.
	//     * The value 0xFFFFFFFF is accepted.
	// 
	// The HasUids[1] setting determines whether the stored values are interpreted as
	// UIDs or sequence numbers.
	// 
	// 
	// References:
	// [1] #HasUids
	void InsertId(unsigned long id);

	// Loads the MessageSet result produced by a completed asynchronous operation.
	// 
	// task must be a completed Task returned by an asynchronous method whose result
	// type is MessageSet. If task is not a valid completed task of the required result
	// type, this object remains unchanged.
	// 
	bool LoadTaskResult(CkTaskW &task);

	// Removes the identifier whose raw numeric value equals id. If the value is not
	// present, the set is unchanged.
	// 
	// The comparison is numeric only and does not depend on HasUids[1]. The remaining
	// identifiers stay in ascending numeric order.
	// 
	// 
	// References:
	// [1] #HasUids
	void RemoveId(unsigned long id);

	// Removes from this message set every identifier whose raw numeric value is
	// present in msgSet. Values not present in this set are ignored.
	// 
	// The comparison is numeric only; the HasUids[1] values of the two objects are not
	// compared. This object's HasUids value is preserved, and the remaining
	// identifiers stay in ascending numeric order.
	// 
	// Passing the same object as msgSet clears the set. Passing an empty set leaves this
	// set unchanged.
	// 
	// For meaningful IMAP results, both objects should represent identifiers of the
	// same type and from the same mailbox.
	// 
	// 
	// References:
	// [1] #HasUids
	void Subtract(CkMessageSetW &msgSet);

	// Returns the unique identifiers as a comma-separated string in ascending numeric
	// order. An empty set returns an empty string.
	// 
	// For example, a set containing the identifiers 1 through 5 returns 1,2,3,4,5.
	// 
	// The returned string contains only the numeric values; it does not include the
	// HasUids[1] setting.
	// 
	// 
	// References:
	// [1] #HasUids
	bool ToCommaSeparatedStr(CkString &outStr);
	// Returns the unique identifiers as a comma-separated string in ascending numeric
	// order. An empty set returns an empty string.
	// 
	// For example, a set containing the identifiers 1 through 5 returns 1,2,3,4,5.
	// 
	// The returned string contains only the numeric values; it does not include the
	// HasUids[1] setting.
	// 
	// 
	// References:
	// [1] #HasUids
	const wchar_t *toCommaSeparatedStr(void);

	// Returns the unique identifiers in ascending numeric order using compact IMAP
	// message-set syntax. Consecutive identifiers are represented as an inclusive
	// range. An empty set returns an empty string.
	// 
	// +----------------------+--------------+
	// | Comma-separated form | Compact form |
	// +======================+==============+
	// | 1,2,3,4,5            | 1:5          |
	// +----------------------+--------------+
	// | 1,2,3,4,5,8,9,10     | 1:5,8:10     |
	// +----------------------+--------------+
	// | 1,3,4,5,8,9,10       | 1,3:5,8:10   |
	// +----------------------+--------------+
	// 
	// The returned string is canonical for the current set: identifiers are unique,
	// sorted, and consecutive runs are compacted. It contains only the numeric values
	// and does not include the HasUids[1] setting.
	// 
	// Use FromCompactString[2] to load this format.
	// 
	// 
	// References:
	// [1] #HasUids
	// [2] #FromCompactString
	bool ToCompactString(CkString &outStr);
	// Returns the unique identifiers in ascending numeric order using compact IMAP
	// message-set syntax. Consecutive identifiers are represented as an inclusive
	// range. An empty set returns an empty string.
	// 
	// +----------------------+--------------+
	// | Comma-separated form | Compact form |
	// +======================+==============+
	// | 1,2,3,4,5            | 1:5          |
	// +----------------------+--------------+
	// | 1,2,3,4,5,8,9,10     | 1:5,8:10     |
	// +----------------------+--------------+
	// | 1,3,4,5,8,9,10       | 1,3:5,8:10   |
	// +----------------------+--------------+
	// 
	// The returned string is canonical for the current set: identifiers are unique,
	// sorted, and consecutive runs are compacted. It contains only the numeric values
	// and does not include the HasUids[1] setting.
	// 
	// Use FromCompactString[2] to load this format.
	// 
	// 
	// References:
	// [1] #HasUids
	// [2] #FromCompactString
	const wchar_t *toCompactString(void);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
