// CkHashtable.h: interface for the CkHashtable class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkHashtable_H
#define _CkHashtable_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkStringBuilder;
class CkStringTable;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkHashtable
class CK_VISIBLE_PUBLIC CkHashtable  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkHashtable(const CkHashtable &);
	CkHashtable &operator=(const CkHashtable &);

    public:
	CkHashtable(void);
	virtual ~CkHashtable(void);

	static CkHashtable *createNew(void);
	static CkHashtable *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The number of entries currently stored in the hashtable.
	// 
	// Each key contributes one entry regardless of whether its value is a string or an
	// integer. Adding a new key increases Count; replacing the value of an existing
	// key does not. Removing an entry decreases it, and Clear resets it to 0.
	// 
	int get_Count(void);



	// ----------------------
	// Methods
	// ----------------------
	// Reads hashtable XML previously produced by ToXmlSb from the StringBuilder passed
	// in sbXml and adds the entries to this table.
	// 
	// The operation merges with the existing table: keys not present in the XML
	// remain, and an imported entry replaces the current value for the same key. Call
	// Clear first when the XML should completely replace the current contents.
	// 
	// Returns true when the XML is parsed and imported successfully; otherwise
	// returns false.
	// 
	bool AddFromXmlSb(CkStringBuilder &sbXml);


	// Adds an entry whose string key is key and whose value is the integer value. If
	// the key already exists, its previous value is replaced.
	// 
	// Returns true when the entry is added or replaced. Returns false if the
	// operation cannot be completed, such as because memory could not be allocated.
	// 
	// One entry per key: Adding the same key again replaces the existing value; it
	// does not create a second entry. Replacing a value does not increase Count. Use
	// LookupInt to retrieve an integer value.
	bool AddInt(const char *key, int value);


	// Parses URL query parameters from queryParams and adds them to the hashtable as string
	// entries. Pass the query component in the following form:
	// 
	// field1=value1&field2=value2&field3=value3
	// 
	// Each value is expected to be URL encoded and is URL decoded before being stored.
	// If an imported key already exists, its previous value is replaced. Returns
	// true on success and false if the query parameters cannot be imported.
	// 
	// Repeated parameter names: A hashtable stores one value per key. It cannot
	// preserve a query string containing several independent values with the same
	// field name. Use a list-oriented parser when repeated names must remain distinct.
	bool AddQueryParams(const char *queryParams);


	// Adds an entry whose string key is key and whose value is the string value. If
	// the key already exists, its previous value is replaced.
	// 
	// Returns true when the entry is added or replaced. Returns false if the
	// operation cannot be completed, such as because memory could not be allocated.
	// 
	// One entry per key: Adding the same key again replaces the existing value; it
	// does not create a second entry. Replacing a value does not increase Count. Use
	// LookupStr to retrieve a string value.
	bool AddStr(const char *key, const char *value);


	// Removes every entry from the hashtable. After this call, Count is 0.
	// 
	// The current hash-table capacity is retained. To clear the entries and also
	// select a different bucket capacity, call ClearWithNewCapacity.
	// 
	void Clear(void);


	// Removes every entry and reinitializes the hashtable with capacity buckets. The
	// initial default capacity of a new Hashtable object is 521.
	// 
	// Returns true on success and false if the table cannot be reinitialized.
	// 
	// +----------+--------------------------------------------------------+
	// |   Term   |                        Meaning                         |
	// +==========+========================================================+
	// | Count    | The number of stored entries.                          |
	// +----------+--------------------------------------------------------+
	// | Capacity | The number of hash buckets, not a maximum entry count. |
	// +----------+--------------------------------------------------------+
	// 
	// Performance note: More buckets can reduce collisions for a large table, but use
	// more memory. Choosing roughly twice the expected number of entries and using a
	// prime number are tuning guidelines, not correctness requirements.
	bool ClearWithNewCapacity(int capacity);


	// Returns true if the hashtable contains the string key key; otherwise returns
	// false. The result tests key existence regardless of the value stored for that
	// key.
	// 
	// Useful before lookup: Call Contains when a lookup result could be ambiguous. For
	// example, LookupInt returns 0 both for a missing key and for an entry whose value
	// is actually zero.
	bool Contains(const char *key);


	// Returns true if the hashtable contains the integer key key; otherwise returns
	// false.
	// 
	// Key type: This method accepts an integer key. It is distinct from Contains,
	// which tests for a string key, and from AddInt, whose key is a string and whose
	// value is an integer.
	bool ContainsIntKey(int key);


	// Appends all hashtable key strings to the StringTable passed in strTable. Existing
	// strings already contained in strTable are not cleared.
	// 
	// Returns true on success and false on failure.
	// 
	// Enumeration order: Hashtable keys may be returned in any order. Do not depend on
	// insertion order or sorted order. Clear the destination StringTable first when it
	// should contain only the current hashtable keys.
	bool GetKeys(CkStringTable &strTable);


	// Returns the integer value associated with the string key key. This method is
	// intended for entries stored with AddInt.
	// 
	// If the key does not exist, the return value is 0.
	// 
	// Missing key versus zero: Because 0 is also a valid stored value, call Contains
	// first when the application must distinguish a missing key from an entry
	// containing zero.
	int LookupInt(const char *key);


	// Returns the string value associated with the string key key. This method is
	// intended for entries stored as strings, including entries added by AddStr or
	// AddQueryParams.
	// 
	// Check lookup success: The representation of a failed string-returning call
	// varies by programming language and may be null, Nothing, or an empty string. An
	// empty string may also be a legitimate value. Use Contains or LastMethodSuccess
	// when the distinction matters.
	bool LookupStr(const char *key, CkString &outStr);

	// Returns the string value associated with the string key key. This method is
	// intended for entries stored as strings, including entries added by AddStr or
	// AddQueryParams.
	// 
	// Check lookup success: The representation of a failed string-returning call
	// varies by programming language and may be null, Nothing, or an empty string. An
	// empty string may also be a legitimate value. Use Contains or LastMethodSuccess
	// when the distinction matters.
	const char *lookupStr(const char *key);

	// Removes the entry whose string key is key.
	// 
	//     * Returns true if the key existed and the entry was removed.
	//     * Returns false if the key was not present.
	// 
	// A false result caused by an absent key is a normal lookup outcome, not an
	// indication that the hashtable was damaged. Removing an existing entry decreases
	// Count by one.
	// 
	bool Remove(const char *key);


	// Serializes the hashtable as a URL query string in the following form:
	// 
	// key1=value1&key2=value2&key3=value3
	// 
	// Each value is URL encoded. The returned string does not include a leading?.
	// 
	// Important limitations: Key order is not defined, and a hashtable contains only
	// one value per key. Therefore the output is not suitable when parameter order is
	// significant or repeated field names must be preserved. In language bindings
	// where string-return failure is ambiguous, check LastMethodSuccess.
	bool ToQueryString(CkString &outStr);

	// Serializes the hashtable as a URL query string in the following form:
	// 
	// key1=value1&key2=value2&key3=value3
	// 
	// Each value is URL encoded. The returned string does not include a leading?.
	// 
	// Important limitations: Key order is not defined, and a hashtable contains only
	// one value per key. Therefore the output is not suitable when parameter order is
	// significant or repeated field names must be preserved. In language bindings
	// where string-return failure is ambiguous, check LastMethodSuccess.
	const char *toQueryString(void);

	// Serializes the current hashtable to Chilkat's hashtable XML format and appends
	// the XML to the StringBuilder passed in sbXml. Existing content in the
	// StringBuilder is preserved.
	// 
	// Returns true on success and false on failure. The generated XML can be
	// loaded by AddFromXmlSb.
	// 
	// <hashtable>
	//   <e><k>key</k><v>value</v></e>
	// </hashtable>
	// Ordering: Because hashtable enumeration order is not defined, do not rely on
	// entries appearing in insertion order or use the serialized text as a canonical,
	// byte-for-byte representation.
	bool ToXmlSb(CkStringBuilder &sbXml);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
