// CkJsonArray.h: interface for the CkJsonArray class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkJsonArray_H
#define _CkJsonArray_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkJsonObject;
class CkDateTime;
class CkDtObj;
class CkStringBuilder;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkJsonArray
class CK_VISIBLE_PUBLIC CkJsonArray  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkJsonArray(const CkJsonArray &);
	CkJsonArray &operator=(const CkJsonArray &);

    public:
	CkJsonArray(void);
	virtual ~CkJsonArray(void);

	static CkJsonArray *createNew(void);
	static CkJsonArray *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Controls whether emitted JSON is compact or pretty-formatted. If true, output
	// contains no unnecessary whitespace and is emitted on a single line. If false,
	// indentation and line breaks are added for readability. The default is true.
	// 
	bool get_EmitCompact(void);
	// Controls whether emitted JSON is compact or pretty-formatted. If true, output
	// contains no unnecessary whitespace and is emitted on a single line. If false,
	// indentation and line breaks are added for readability. The default is true.
	// 
	void put_EmitCompact(bool newVal);

	// Controls line endings when pretty-formatted JSON is emitted. If true, line
	// breaks use CRLF (); if false, they use LF (). The default is true.
	// 
	// Applies only to pretty output: When EmitCompact is true, the JSON is emitted
	// on one line and this setting has no effect.
	bool get_EmitCrlf(void);
	// Controls line endings when pretty-formatted JSON is emitted. If true, line
	// breaks use CRLF (); if false, they use LF (). The default is true.
	// 
	// Applies only to pretty output: When EmitCompact is true, the JSON is emitted
	// on one line and this setting has no effect.
	void put_EmitCrlf(bool newVal);

	// Specifies the zero-based array index at which FindString and FindObject begin
	// searching. The default value is 0.
	// 
	// Iterating matches: After finding a match at index n, set this property to n + 1
	// before the next search to continue with later elements.
	int get_FindStartIndex(void);
	// Specifies the zero-based array index at which FindString and FindObject begin
	// searching. The default value is 0.
	// 
	// Iterating matches: After finding a match at index n, set this property to n + 1
	// before the next search to continue with later elements.
	void put_FindStartIndex(int newVal);

	// Returns the number of values currently contained in the JSON array. Array
	// indexes therefore range from 0 through Size - 1.
	// 
	int get_Size(void);



	// ----------------------
	// Methods
	// ----------------------
	// Inserts a new, empty JSON array at zero-based position index. Existing elements
	// at that position and after it are shifted one position toward the end of the
	// array.
	// 
	// +----+------------------------------------+
	// | 0  | Insert as the first array element. |
	// +----+------------------------------------+
	// | -1 | Append as the last array element.  |
	// +----+------------------------------------+
	// | n  | Insert at zero-based position n.   |
	// +----+------------------------------------+
	// 
	// Insert vs. replace: The Add*At methods insert a new array element. Use the
	// corresponding Set*At method when replacing an existing element.
	bool AddArrayAt(int index);


	// Inserts a new, empty JSON array at zero-based position index and updates jarr to
	// reference the newly inserted array.
	// 
	// +----+------------------------------------+
	// | 0  | Insert as the first array element. |
	// +----+------------------------------------+
	// | -1 | Append as the last array element.  |
	// +----+------------------------------------+
	// | n  | Insert at zero-based position n.   |
	// +----+------------------------------------+
	// 
	// Immediate editing: Because jarr references the inserted array, it can be
	// populated directly without a separate ArrayAt lookup.
	bool AddArrayAt2(int index, CkJsonArray &jarr);


	// Inserts a new JSON boolean value at zero-based position index. Existing elements
	// at that position and after it are shifted one position toward the end of the
	// array.
	// 
	// +----+------------------------------------+
	// | 0  | Insert as the first array element. |
	// +----+------------------------------------+
	// | -1 | Append as the last array element.  |
	// +----+------------------------------------+
	// | n  | Insert at zero-based position n.   |
	// +----+------------------------------------+
	// 
	// Insert vs. replace: The Add*At methods insert a new array element. Use the
	// corresponding Set*At method when replacing an existing element.
	bool AddBoolAt(int index, bool value);


	// Inserts a new JSON integer value at zero-based position index. Existing elements
	// at that position and after it are shifted one position toward the end of the
	// array.
	// 
	// +----+------------------------------------+
	// | 0  | Insert as the first array element. |
	// +----+------------------------------------+
	// | -1 | Append as the last array element.  |
	// +----+------------------------------------+
	// | n  | Insert at zero-based position n.   |
	// +----+------------------------------------+
	// 
	// Insert vs. replace: The Add*At methods insert a new array element. Use the
	// corresponding Set*At method when replacing an existing element.
	bool AddIntAt(int index, int value);


	// Inserts a JSON null value at zero-based position index. Existing elements at
	// that position and after it are shifted one position toward the end of the array.
	// 
	// +----+------------------------------------+
	// | 0  | Insert as the first array element. |
	// +----+------------------------------------+
	// | -1 | Append as the last array element.  |
	// +----+------------------------------------+
	// | n  | Insert at zero-based position n.   |
	// +----+------------------------------------+
	// 
	// Insert vs. replace: The Add*At methods insert a new array element. Use the
	// corresponding Set*At method when replacing an existing element.
	bool AddNullAt(int index);


	// Inserts a JSON number at zero-based position index. The numericStr argument
	// supplies the exact JSON numeric text to store. Existing elements at that
	// position and after it are shifted one position toward the end of the array.
	// 
	// +----+------------------------------------+
	// | 0  | Insert as the first array element. |
	// +----+------------------------------------+
	// | -1 | Append as the last array element.  |
	// +----+------------------------------------+
	// | n  | Insert at zero-based position n.   |
	// +----+------------------------------------+
	// 
	// Exact numeric text: Use this method when lexical form or precision matters, for
	// example 12345678901234567890, 1.2500, or scientific notation. The supplied text
	// must be valid JSON number syntax; JSON does not permit NaN or infinity.
	bool AddNumberAt(int index, const char *numericStr);


	// Inserts a new, empty JSON object at zero-based position index. Existing elements
	// at that position and after it are shifted one position toward the end of the
	// array.
	// 
	// +----+------------------------------------+
	// | 0  | Insert as the first array element. |
	// +----+------------------------------------+
	// | -1 | Append as the last array element.  |
	// +----+------------------------------------+
	// | n  | Insert at zero-based position n.   |
	// +----+------------------------------------+
	// 
	// Insert vs. replace: The Add*At methods insert a new array element. Use the
	// corresponding Set*At method when replacing an existing element.
	bool AddObjectAt(int index);


	// Inserts a new, empty JSON object at zero-based position index and updates json
	// to reference the newly inserted object.
	// 
	// +----+------------------------------------+
	// | 0  | Insert as the first array element. |
	// +----+------------------------------------+
	// | -1 | Append as the last array element.  |
	// +----+------------------------------------+
	// | n  | Insert at zero-based position n.   |
	// +----+------------------------------------+
	// 
	// Immediate editing: Because json references the inserted object, it can be
	// populated directly without a separate ObjectAt lookup.
	bool AddObjectAt2(int index, CkJsonObject &json);


	// Inserts an independent copy of jsonObj at zero-based position index. Existing
	// elements at that position and after it are shifted one position toward the end
	// of the array.
	// 
	// +----+------------------------------------+
	// | 0  | Insert as the first array element. |
	// +----+------------------------------------+
	// | -1 | Append as the last array element.  |
	// +----+------------------------------------+
	// | n  | Insert at zero-based position n.   |
	// +----+------------------------------------+
	// 
	// Copy semantics: The inserted object is copied rather than referenced. Later
	// changes to the source jsonObj do not serve as edits to the inserted array value.
	bool AddObjectCopyAt(int index, CkJsonObject &jsonObj);


	// Inserts a new JSON string value at zero-based position index. Existing elements
	// at that position and after it are shifted one position toward the end of the
	// array.
	// 
	// +----+------------------------------------+
	// | 0  | Insert as the first array element. |
	// +----+------------------------------------+
	// | -1 | Append as the last array element.  |
	// +----+------------------------------------+
	// | n  | Insert at zero-based position n.   |
	// +----+------------------------------------+
	// 
	// Insert vs. replace: The Add*At methods insert a new array element. Use the
	// corresponding Set*At method when replacing an existing element.
	bool AddStringAt(int index, const char *value);


	// Inserts a new JSON unsigned integer value at zero-based position index. Existing
	// elements at that position and after it are shifted one position toward the end
	// of the array.
	// 
	// +----+------------------------------------+
	// | 0  | Insert as the first array element. |
	// +----+------------------------------------+
	// | -1 | Append as the last array element.  |
	// +----+------------------------------------+
	// | n  | Insert at zero-based position n.   |
	// +----+------------------------------------+
	// 
	// Insert vs. replace: The Add*At methods insert a new array element. Use the
	// corresponding Set*At method when replacing an existing element.
	bool AddUIntAt(int index, unsigned long value);


	// Appends copies of all values from jarr to the end of this array, preserving
	// their order.
	// 
	// Source is unchanged: The source array is not emptied or moved. This method is
	// useful for concatenating JSON arrays, including arrays belonging to different
	// JSON documents.
	bool AppendArrayItems(CkJsonArray &jarr);


	// Returns the nested JSON array stored at zero-based position index.
	// 
	// Reference, not copy: The returned JsonArray refers to the existing nested array
	// in the same JSON document. Changes made through the returned object modify that
	// nested array.
	// Type requirement: The value at index must be an array. Use TypeAt when the value
	// type is not already known.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonArray *ArrayAt(int index);


	// Updates jarr so that it references the nested JSON array stored at zero-based
	// position index.
	// 
	// Reference, not copy: Changes made through jarr modify the existing nested array
	// in the same JSON document.
	bool ArrayAt2(int index, CkJsonArray &jarr);


	// Returns the boolean value stored at zero-based position index.
	// 
	// Type-aware access: Use TypeAt when the JSON type at index is not already known.
	bool BoolAt(int index);


	// Removes all values from the array, leaving an empty JSON array ([]).
	// 
	void Clear(void);


	// Parses the date/time value at zero-based position index and loads the result
	// into dateTime. Recognized forms include ISO 8601 timestamps (for example,
	// 2009-11-04T19:55:41Z), RFC 822-style date/time strings, and Unix timestamp
	// integers.
	// 
	// JSON has no native date type: Dates are application conventions represented as
	// strings or numbers. These methods recognize common representations and convert
	// them to Chilkat date/time objects.
	bool DateAt(int index, CkDateTime &dateTime);


	// Deletes the value at zero-based position index. Elements following the deleted
	// value shift down by one position.
	// 
	bool DeleteAt(int index);


	// Parses the date/time value at zero-based position index and loads the result
	// into dt. If bLocal is true, the populated fields represent local time; if
	// false, they represent UTC/GMT. Recognized forms include ISO 8601 timestamps,
	// RFC 822-style date/time strings, and Unix timestamp integers.
	// 
	// JSON has no native date type: Dates are application conventions represented as
	// strings or numbers. These methods recognize common representations and convert
	// them to Chilkat date/time objects.
	bool DtAt(int index, bool bLocal, CkDtObj &dt);


	// Serializes this JSON array and returns the resulting JSON text.
	// 
	// Formatting: Set EmitCompact to choose compact versus pretty output. When pretty
	// output is enabled, EmitCrlf selects CRLF or LF line endings.
	bool Emit(CkString &outStr);

	// Serializes this JSON array and returns the resulting JSON text.
	// 
	// Formatting: Set EmitCompact to choose compact versus pretty output. When pretty
	// output is enabled, EmitCrlf selects CRLF or LF line endings.
// QT defines the macro "emit" globally.  (Good grief!)
#if defined(QT_VERSION)
#pragma push_macro("emit")
#undef emit
const char *emit(void);
#pragma pop_macro("emit")
#else
const char *emit(void);
#endif



	// Serializes this JSON array into the supplied StringBuilder.
	// 
	// Formatting: Set EmitCompact to choose compact versus pretty output. When pretty
	// output is enabled, EmitCrlf selects CRLF or LF line endings.
	// Large JSON: Using a StringBuilder can avoid returning a very large JSON document
	// as a language-native string before passing it to another Chilkat method or
	// writing it to a file.
	bool EmitSb(CkStringBuilder &sb);


	// Searches array elements that are JSON objects and returns the zero-based index
	// of the first object whose direct member name has a value matching value. Returns
	// -1 if no match is found. The value pattern may contain *, which matches zero or
	// more characters. Set caseSensitive to control whether letter case must match.
	// 
	// Member name, not JSON path: name identifies a direct member of each object being
	// tested; it is not a JSON path.
	// Search start: Searching begins at FindStartIndex, whose default is 0. To
	// continue searching after a match, set FindStartIndex to the previous returned
	// index plus 1.
	int FindObject(const char *name, const char *value, bool caseSensitive);


	// Searches for the first string array element matching value and returns its
	// zero-based index, or -1 if no match is found. The pattern may contain *, which
	// matches zero or more characters. Set caseSensitive to control whether letter
	// case must match.
	// 
	// Search start: Searching begins at FindStartIndex, whose default is 0. To
	// continue searching after a match, set FindStartIndex to the previous returned
	// index plus 1.
	int FindString(const char *value, bool caseSensitive);


	// Returns the integer value stored at zero-based position index.
	// 
	// Type-aware access: Use TypeAt when the JSON type at index is not already known.
	int IntAt(int index);


	// Returns true if the value at zero-based position index is the JSON value null;
	// otherwise returns false.
	// 
	// JSON null: null is a distinct JSON value. It is not the same as an empty string,
	// zero, false, an empty object, or an empty array.
	bool IsNullAt(int index);


	// Parses the JSON array text in jsonArray and loads it into this object. The input
	// must represent a JSON array, beginning with [and ending with].
	// 
	// Important — loading detaches the array: Calling this method makes the JsonArray
	// its own independent JSON document. If the object previously referenced an array
	// nested inside another JSON document, that relationship is discarded. For this
	// reason, call Load / LoadSb on a new JsonArray instance.
	bool Load(const char *jsonArray);


	// Parses the JSON array contained in sb and loads it into this object. The input
	// must represent a JSON array, beginning with [and ending with].
	// 
	// Important — loading detaches the array: Calling this method makes the JsonArray
	// its own independent JSON document. If the object previously referenced an array
	// nested inside another JSON document, that relationship is discarded. For this
	// reason, call Load / LoadSb on a new JsonArray instance.
	bool LoadSb(CkStringBuilder &sb);


	// Returns the JSON object stored at zero-based position index.
	// 
	// Reference, not copy: The returned JsonObject refers to the existing object in
	// the same JSON document. Changes made through the returned object modify that
	// nested object.
	// Type requirement: The value at index must be an object. Use TypeAt when the
	// value type is not already known.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *ObjectAt(int index);


	// Updates jsonObj so that it references the JSON object stored at zero-based
	// position index.
	// 
	// Reference, not copy: Changes made through jsonObj modify the existing object in
	// the same JSON document.
	bool ObjectAt2(int index, CkJsonObject &jsonObj);


	// Replaces the value at zero-based position index with the specified JSON boolean
	// value. The array length and the positions of other elements are unchanged.
	// 
	bool SetBoolAt(int index, bool value);


	// Replaces the value at zero-based position index with the specified JSON integer
	// value. The array length and the positions of other elements are unchanged.
	// 
	bool SetIntAt(int index, int value);


	// Replaces the value at zero-based position index with the JSON value null. The
	// array length and the positions of other elements are unchanged.
	// 
	bool SetNullAt(int index);


	// Replaces the value at zero-based position index with a JSON number. The value
	// argument supplies the exact JSON numeric text to store.
	// 
	// Exact numeric text: Use this method when lexical form or precision matters. The
	// supplied text must be valid JSON number syntax; JSON does not permit NaN or
	// infinity.
	bool SetNumberAt(int index, const char *value);


	// Replaces the value at zero-based position index with the specified JSON string
	// value. The array length and the positions of other elements are unchanged.
	// 
	bool SetStringAt(int index, const char *value);


	// Replaces the value at zero-based position index with the specified JSON unsigned
	// integer value. The array length and the positions of other elements are
	// unchanged.
	// 
	bool SetUIntAt(int index, unsigned long value);


	// Returns the string value stored at zero-based position index.
	// 
	// Type-aware access: Use TypeAt when the JSON type at index is not already known.
	bool StringAt(int index, CkString &outStr);

	// Returns the string value stored at zero-based position index.
	// 
	// Type-aware access: Use TypeAt when the JSON type at index is not already known.
	const char *stringAt(int index);

	// Exchanges the values at zero-based positions index1 and index2. The array length
	// does not change.
	// 
	bool Swap(int index1, int index2);


	// Returns an integer identifying the JSON type of the value at zero-based position
	// index. Returns -1 if no value exists at that index.
	// 
	// +---+---------+
	// | 1 | string  |
	// +---+---------+
	// | 2 | number  |
	// +---+---------+
	// | 3 | object  |
	// +---+---------+
	// | 4 | array   |
	// +---+---------+
	// | 5 | boolean |
	// +---+---------+
	// | 6 | null    |
	// +---+---------+
	// 
	// Why use TypeAt: JSON arrays may contain mixed types. Checking the type first
	// avoids choosing a type-specific accessor such as ObjectAt, ArrayAt, or IntAt for
	// the wrong kind of value.
	int TypeAt(int index);


	// Returns the unsigned integer value stored at zero-based position index.
	// 
	// Type-aware access: Use TypeAt when the JSON type at index is not already known.
	unsigned long UIntAt(int index);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
