// CkLogW.h: interface for the CkLogW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkLogW_H
#define _CkLogW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkByteData;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkLogW
class CK_VISIBLE_PUBLIC CkLogW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkLogW(const CkLogW &);
	CkLogW &operator=(const CkLogW &);

    public:
	CkLogW(void);
	virtual ~CkLogW(void);

	

	static CkLogW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------


	// ----------------------
	// Methods
	// ----------------------
	// Clears all existing log entries and starts a new log whose top-level context is
	// named initialTag.
	// 
	// Typical use: Call this at the beginning of an operation or test run, then add
	// entries with the other Log* methods. The completed structured log can be
	// inspected through the Log object's diagnostic text, such as LastErrorText.
	void Clear(const wchar_t *initialTag);

	// Begins a nested logging context named tag. Entries written after this call are
	// grouped inside the new context until a matching LeaveContext is called.
	// 
	// Balanced contexts: Pair each EnterContext with LeaveContext. Contexts may be
	// nested to reflect operation hierarchy.
	void EnterContext(const wchar_t *tag);

	// Ends the current nested logging context and returns logging to its parent
	// context.
	// 
	// Empty contexts are omitted: If nothing was logged after entering the current
	// context, Chilkat automatically removes that empty context when it is left.
	void LeaveContext(void);

	// Adds a tagged text value to the current context. The output associates tag with
	// message, making this useful for named values such as filenames, paths, IDs,
	// states, or protocol fields.
	// 
	// Sensitive data: Avoid logging passwords, private keys, access tokens, session
	// secrets, or other sensitive values unless disclosure is intentional.
	void LogData(const wchar_t *tag, const wchar_t *message);

	// Encodes the supplied binary data as Base64 and adds the encoded value to the
	// current log under tag.
	// 
	// Base64: Base64 makes arbitrary bytes printable in a text log. It is an encoding,
	// not encryption.
	void LogDataBase64(const wchar_t *tag, CkByteData &data);

	// Encodes szByteData bytes beginning at pByteData as Base64 and logs the result
	// under tag.
	// 
	// C++ byte buffer: This form accepts a pointer and explicit byte count. Base64 is
	// printable encoding only; it does not protect the logged data.
	void LogDataBase64_2(const wchar_t *tag, const void *pByteData, unsigned long szByteData);

	// Encodes the supplied binary data as hexadecimal text and adds the encoded value
	// to the current log under tag.
	// 
	// Hex output: Hex is convenient for short protocol fields, identifiers, digests,
	// and byte-level troubleshooting because each byte is represented by two hex
	// digits.
	void LogDataHex(const wchar_t *tag, CkByteData &data);

	// Encodes szByteData bytes beginning at pByteData as hexadecimal text and logs the
	// result under tag.
	// 
	// C++ byte buffer: This form accepts a pointer and explicit byte count. The caller
	// must supply a valid buffer containing at least szByteData readable bytes.
	void LogDataHex2(const wchar_t *tag, const void *pByteData, unsigned long szByteData);

	// Adds a tagged text value to the current context, but limits the logged value to
	// at most the first maxNumChars characters of message.
	// 
	// Diagnostic previews: Use this when a value may be very large and only a leading
	// preview is needed. The original input string is not modified.
	void LogDataMax(const wchar_t *tag, const wchar_t *message, int maxNumChars);

	// Logs the current date and time under tag using an RFC 822-style date/time
	// representation. If gmt is true, the logged time is GMT/UTC; otherwise local
	// system time is used.
	// 
	// Date/time vs. timestamp: Use LogDateTime for a calendar date with timezone
	// context. Use LogTimestamp for a time-of-day marker.
	void LogDateTime(const wchar_t *tag, bool gmt);

	// Adds message as an error entry in the current logging context.
	// 
	// Application diagnostics: This is application-defined logging. It is separate
	// from LastErrorText produced by other Chilkat objects when their operations fail.
	void LogError(const wchar_t *message);

	// Computes a hash of szByteData bytes beginning at pByteData and logs the digest
	// as hexadecimal text under tag. Supported values for hashAlg are SHA1, SHA256,
	// SHA384, SHA512, and MD5.
	// 
	// Useful for comparison: A digest is often preferable to dumping a large binary
	// value when the goal is to determine whether two byte sequences are identical.
	// Security note: MD5 and SHA1 are not suitable when cryptographic collision
	// resistance is required. Prefer SHA-256 or stronger for security-sensitive
	// hashing.
	void LogHash2(const wchar_t *tag, const wchar_t *hashAlg, const void *pByteData, unsigned long szByteData);

	// Adds message as an informational entry in the current logging context.
	// 
	// Structured tracing: Use informational entries for significant steps and
	// decisions. Use LogData when the entry is better represented as a named value.
	void LogInfo(const wchar_t *message);

	// Adds the integer value to the current log under tag.
	// 
	void LogInt(const wchar_t *tag, int value);

	// Adds the signed 64-bit integer value to the current log under tag.
	// 
	// 64-bit values: Useful for values such as large byte counts, file sizes, sequence
	// numbers, or timestamps that can exceed ordinary integer ranges.
	void LogInt64(const wchar_t *tag, __int64 value);

	// Logs the current time-of-day under tag in HH:MM:SS:mmm form, where mmm
	// represents milliseconds.
	// 
	// Timing note: This is a time-of-day marker, not a monotonic elapsed-time
	// measurement.
	void LogTimestamp(const wchar_t *tag);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
