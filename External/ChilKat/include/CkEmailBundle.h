// CkEmailBundle.h: interface for the CkEmailBundle class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkEmailBundle_H
#define _CkEmailBundle_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkEmail;
class CkJsonObject;
class CkStringArray;
class CkTask;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkEmailBundle
class CK_VISIBLE_PUBLIC CkEmailBundle  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkEmailBundle(const CkEmailBundle &);
	CkEmailBundle &operator=(const CkEmailBundle &);

    public:
	CkEmailBundle(void);
	virtual ~CkEmailBundle(void);

	static CkEmailBundle *createNew(void);
	static CkEmailBundle *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the number of Email objects currently contained in the bundle.
	// 
	// Valid zero-based indexes range from 0 through MessageCount - 1.
	// 
	int get_MessageCount(void);



	// ----------------------
	// Methods
	// ----------------------
	// Adds an independent copy of the Email object in email to the end of this
	// in-memory bundle.
	// 
	// The bundle does not retain a reference to email and does not take ownership of
	// the supplied object. Changes made to email after this method returns do not
	// affect the copy stored in the bundle, and changes to the stored copy do not
	// affect email.
	// 
	// The same Email object may be added more than once. Each call adds another
	// independent copy and increases the MessageCount[1] property by one.
	// 
	// 
	// References:
	// [1] #MessageCount
	bool AddEmail(CkEmail &email);


	// Removes and discards all emails from this in-memory bundle.
	// 
	// After this method returns, MessageCount[1] is 0. No messages are deleted from
	// any mail server.
	// 
	// 
	// References:
	// [1] #MessageCount
	void Clear(void);


	// Copies the email at the zero-based index in index into the Email object in email.
	// 
	// Valid indexes range from 0 through MessageCount[1] - 1. The first email is at
	// index 0.
	// 
	// email receives an independent copy. Changes made to email do not modify the email
	// stored in the bundle.
	// 
	// Note: This is an in-memory operation and does not communicate with a mail
	// server.
	// 
	// 
	// References:
	// [1] #MessageCount
	bool EmailAt(int index, CkEmail &email);


	// Deprecated: Use FindEmail[1] instead.
	// 
	// Returns the first email having a header field whose name matches headerFieldName and whose
	// value matches headerFieldValue. Header field name matching is case-insensitive. Header field
	// value matching is exact and case-sensitive.
	// 
	// Returns _NULL_ when no matching email is found.
	// 
	// 
	// References:
	// [1] #FindEmail
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *FindByHeader(const char *headerFieldName, const char *headerFieldValue);


	// Finds the first email in the bundle whose MIME header field matches the search
	// criteria specified by the JsonObject in json.
	// 
	// At this time, a search may specify only one MIME header field. Use the following
	// JSON format:
	// 
	// {
	//   "header": {
	//     "name": "Subject",
	//     "value": "Dinner on Wednesday?",
	//     "caseInsensitive": true
	//   }
	// }
	// 
	// header.name specifies the MIME header field name, and header.value specifies the
	// complete field value to match. The field value must match exactly; this is not a
	// substring, wildcard, or regular-expression search. Set header.caseInsensitive to
	// true for a case-insensitive comparison or false for a case-sensitive comparison.
	// 
	// When a match is found, email receives the first matching email.
	// 
	bool FindEmail(CkJsonObject &json, CkEmail &email);


	// Deprecated: Use EmailAt[1] instead.
	// 
	// Returns a copy of the email at the zero-based index in index. Valid indexes range
	// from 0 through MessageCount[2] - 1.
	// 
	// The returned Email is independent of the email stored in the bundle. Changes
	// made to the returned object do not modify the bundle.
	// 
	// To replace an email, retrieve the copy, modify it, remove the original with
	// RemoveEmailByIndex[3], and add the modified email with AddEmail[4].
	// 
	// Note: This is an in-memory operation. It does not communicate with a mail server
	// or download message content.
	// 
	// 
	// References:
	// [1] #EmailAt
	// [2] #MessageCount
	// [3] #RemoveEmailByIndex
	// [4] #AddEmail
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *GetEmail(int index);


	// Deprecated: This method is retained for compatibility and may be removed in a
	// future version of Chilkat.
	// 
	// Returns a StringArray containing the POP3 UIDL values stored with the Email
	// objects in the bundle.
	// 
	// UIDLs apply to messages retrieved from a POP3 server. IMAP messages use UIDs
	// instead; an IMAP UID associated with an email is available in the ckx-imap-uid
	// header field.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkStringArray *GetUidls(void);


	// Serializes the entire email bundle to Chilkat XML and returns the XML document
	// as a string.
	// 
	// The XML contains the bundle and its individual Email objects. It can be loaded
	// into another EmailBundle by calling LoadXmlString[1].
	// 
	// This is Chilkat's XML representation of an email bundle; it is not an RFC
	// 822/MIME message.
	// 
	// 
	// References:
	// [1] #LoadXmlString
	bool GetXml(CkString &outXml);

	// Serializes the entire email bundle to Chilkat XML and returns the XML document
	// as a string.
	// 
	// The XML contains the bundle and its individual Email objects. It can be loaded
	// into another EmailBundle by calling LoadXmlString[1].
	// 
	// This is Chilkat's XML representation of an email bundle; it is not an RFC
	// 822/MIME message.
	// 
	// 
	// References:
	// [1] #LoadXmlString
	const char *getXml(void);
	// Serializes the entire email bundle to Chilkat XML and returns the XML document
	// as a string.
	// 
	// The XML contains the bundle and its individual Email objects. It can be loaded
	// into another EmailBundle by calling LoadXmlString[1].
	// 
	// This is Chilkat's XML representation of an email bundle; it is not an RFC
	// 822/MIME message.
	// 
	// 
	// References:
	// [1] #LoadXmlString
	const char *xml(void);


	// Loads this email bundle from the result of the completed asynchronous Task in
	// task.
	// 
	// Use this method when an asynchronous Chilkat operation returns an EmailBundle as
	// its task result. task must represent a task that has finished running.
	// 
	bool LoadTaskResult(CkTask &task);


	// Loads an email bundle from the local filesystem path specified by path. The path
	// may be absolute or relative; a filename alone refers to a file in the current
	// working directory.
	// 
	// The file should contain Chilkat email-bundle XML previously produced by
	// SaveXml[1] or GetXml[2].
	// 
	// The emails loaded from path are appended to the emails already in the bundle.
	// Existing emails are not removed or replaced.
	// 
	// 
	// References:
	// [1] #SaveXml
	// [2] #GetXml
	bool LoadXml(const char *path);


	// Loads an email bundle from the Chilkat XML string in xmlStr.
	// 
	// The XML is typically obtained from GetXml[1] or read from a file created by
	// SaveXml[2].
	// 
	// The emails loaded from xmlStr are appended to the emails already in the bundle.
	// Existing emails are not removed or replaced.
	// 
	// 
	// References:
	// [1] #GetXml
	// [2] #SaveXml
	bool LoadXmlString(const char *xmlStr);


	// Removes the first email in this in-memory bundle that matches email.
	// 
	// Chilkat first searches for an email having the same UIDL as email. If no email
	// with a matching UIDL is found, it searches for the first email having the same
	// Message-ID header field value. Only the first matching email is removed.
	// 
	// email may be an independent copy obtained from EmailAt[1].
	// 
	// Note: This method changes only the local bundle. It does not delete a message
	// from a POP3 or IMAP server.
	// 
	// 
	// References:
	// [1] #EmailAt
	bool RemoveEmail(CkEmail &email);


	// Removes the email at the zero-based index in index.
	// 
	// Valid indexes range from 0 through MessageCount[1] - 1.
	// 
	// Note: This method changes only the local bundle. It does not delete a message
	// from a mail server.
	// 
	// 
	// References:
	// [1] #MessageCount
	bool RemoveEmailByIndex(int index);


	// Serializes the bundle and each contained Email to Chilkat XML, then writes the
	// XML document to the local filesystem path specified by path. The path may be
	// absolute or relative; a filename alone writes to the current working directory.
	// 
	// Reload the saved bundle by calling LoadXml[1]. Use GetXml[2] when the XML is
	// needed in memory rather than in a file.
	// 
	// The saved file is a Chilkat email-bundle serialization, not an RFC 822/MIME
	// message file.
	// 
	// 
	// References:
	// [1] #LoadXml
	// [2] #GetXml
	bool SaveXml(const char *path);


	// Sorts the emails in this bundle by each Email object's EmailDate property.
	// 
	// Set ascending to true to sort in ascending order, from oldest to newest. Set ascending
	// to false to sort in descending order, from newest to oldest.
	// 
	// The operation changes the order of the emails in the in-memory collection.
	// 
	void SortByDate(bool ascending);


	// Sorts the emails in this bundle by the full value of each email's To header
	// field.
	// 
	// The comparisons are case-sensitive. Set ascending to true for ascending order or
	// false for descending order. The operation changes the order of the emails in
	// the in-memory collection.
	// 
	void SortByRecipient(bool ascending);


	// Sorts the emails in this bundle by the full content of each email's From header
	// field.
	// 
	// Set ascending to true for ascending order or false for descending order. The
	// operation changes the order of the emails in the in-memory collection.
	// 
	void SortBySender(bool ascending);


	// Sorts the emails in this bundle by subject.
	// 
	// Set ascending to true for ascending order or false for descending order. The
	// operation changes the order of the emails in the in-memory collection.
	// 
	void SortBySubject(bool ascending);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
