// CkJsonObject.h: interface for the CkJsonObject class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkJsonObject_H
#define _CkJsonObject_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkJsonArray;
class CkStringTable;
class CkBinData;
class CkDateTime;
class CkDtObj;
class CkStringBuilder;
class CkHashtable;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkJsonObject
class CK_VISIBLE_PUBLIC CkJsonObject  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkJsonObject(const CkJsonObject &);
	CkJsonObject &operator=(const CkJsonObject &);

    public:
	CkJsonObject(void);
	virtual ~CkJsonObject(void);

	static CkJsonObject *createNew(void);
	static CkJsonObject *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Specifies the character used to separate object-member names in Chilkat JSON
	// paths. The default is.. Set it to / for Firebase-style paths. This property
	// should contain exactly one character.
	// 
	// Arrays in paths: Array indexes continue to use square brackets, such as
	// orders[0].id. If a member name itself contains a path-separator character, quote
	// that path component with double quotes.
	void get_DelimiterChar(CkString &str);
	// Specifies the character used to separate object-member names in Chilkat JSON
	// paths. The default is.. Set it to / for Firebase-style paths. This property
	// should contain exactly one character.
	// 
	// Arrays in paths: Array indexes continue to use square brackets, such as
	// orders[0].id. If a member name itself contains a path-separator character, quote
	// that path component with double quotes.
	const char *delimiterChar(void);
	// Specifies the character used to separate object-member names in Chilkat JSON
	// paths. The default is.. Set it to / for Firebase-style paths. This property
	// should contain exactly one character.
	// 
	// Arrays in paths: Array indexes continue to use square brackets, such as
	// orders[0].id. If a member name itself contains a path-separator character, quote
	// that path component with double quotes.
	void put_DelimiterChar(const char *newVal);

	// Controls whether emitted JSON is compact or pretty-printed. The default is
	// true.
	// 
	// +---------+--------------------------------------------------------------------+
	// | true  | Emit a compact representation with no extra formatting whitespace. |
	// +---------+--------------------------------------------------------------------+
	// | false | Emit indented, human-readable JSON.                                |
	// +---------+--------------------------------------------------------------------+
	// 
	// JSON semantics: Formatting whitespace does not change the JSON data. Use compact
	// output for transport/storage and pretty output for diagnostics or human review.
	bool get_EmitCompact(void);
	// Controls whether emitted JSON is compact or pretty-printed. The default is
	// true.
	// 
	// +---------+--------------------------------------------------------------------+
	// | true  | Emit a compact representation with no extra formatting whitespace. |
	// +---------+--------------------------------------------------------------------+
	// | false | Emit indented, human-readable JSON.                                |
	// +---------+--------------------------------------------------------------------+
	// 
	// JSON semantics: Formatting whitespace does not change the JSON data. Use compact
	// output for transport/storage and pretty output for diagnostics or human review.
	void put_EmitCompact(bool newVal);

	// Controls line endings when pretty-printed JSON is emitted (EmitCompact =
	// false). The default is true.
	// 
	// +---------+------------------------+
	// | true  | Use CRLF line endings. |
	// +---------+------------------------+
	// | false | Use LF line endings.   |
	// +---------+------------------------+
	// 
	// Compact output: This setting has no effect when EmitCompact is true because
	// compact JSON is emitted without formatting line breaks.
	bool get_EmitCrLf(void);
	// Controls line endings when pretty-printed JSON is emitted (EmitCompact =
	// false). The default is true.
	// 
	// +---------+------------------------+
	// | true  | Use CRLF line endings. |
	// +---------+------------------------+
	// | false | Use LF line endings.   |
	// +---------+------------------------+
	// 
	// Compact output: This setting has no effect when EmitCompact is true because
	// compact JSON is emitted without formatting line breaks.
	void put_EmitCrLf(bool newVal);

	// Enables automatic resolution of Chilkat secret specification strings for
	// supported string-setting methods. The default is false. When enabled, a value
	// beginning with!! can identify a credential stored in Windows Credential Manager
	// or Apple Keychain instead of embedding the literal secret in application code.
	// 
	// Secret specification format:!![appName|]service[|domain]|username.
	// 
	// This feature applies to AddStringAt, AppendString, SetStringAt, SetStringOf,
	// UpdateSb, and UpdateString.
	// 
	// Security: Secret resolution changes where the string value comes from; the
	// resulting JSON member still contains the resolved value. Avoid emitting or
	// logging JSON that contains credentials unless that exposure is explicitly
	// intended.
	bool get_EnableSecrets(void);
	// Enables automatic resolution of Chilkat secret specification strings for
	// supported string-setting methods. The default is false. When enabled, a value
	// beginning with!! can identify a credential stored in Windows Credential Manager
	// or Apple Keychain instead of embedding the literal secret in application code.
	// 
	// Secret specification format:!![appName|]service[|domain]|username.
	// 
	// This feature applies to AddStringAt, AppendString, SetStringAt, SetStringOf,
	// UpdateSb, and UpdateString.
	// 
	// Security: Secret resolution changes where the string value comes from; the
	// resulting JSON member still contains the resolved value. Avoid emitting or
	// logging JSON that contains credentials unless that exposure is explicitly
	// intended.
	void put_EnableSecrets(bool newVal);

	// Supplies the integer substituted for i when a JSON path contains an array index
	// such as [i]. This is useful for loop-based navigation without constructing a new
	// path string for every iteration.
	// 
	// Related properties: The J and K properties provide the same substitution
	// behavior for [j] and [k].
	int get_I(void);
	// Supplies the integer substituted for i when a JSON path contains an array index
	// such as [i]. This is useful for loop-based navigation without constructing a new
	// path string for every iteration.
	// 
	// Related properties: The J and K properties provide the same substitution
	// behavior for [j] and [k].
	void put_I(int newVal);

	// Supplies the integer substituted for j when a JSON path contains [j]. It is
	// commonly used with nested-array paths such as matrix[i][j].
	// 
	int get_J(void);
	// Supplies the integer substituted for j when a JSON path contains [j]. It is
	// commonly used with nested-array paths such as matrix[i][j].
	// 
	void put_J(int newVal);

	// Supplies the integer substituted for k when a JSON path contains [k]. It can be
	// combined with I and J for deeper nested-array traversal.
	// 
	int get_K(void);
	// Supplies the integer substituted for k when a JSON path contains [k]. It can be
	// combined with I and J for deeper nested-array traversal.
	// 
	void put_K(int newVal);

	// If true, member names are converted to lowercase while JSON is loaded by Load,
	// LoadBd, LoadSb, or LoadFile. The default is false.
	// 
	// Important: This changes member names in the parsed document; it is not merely a
	// case-insensitive lookup mode. Use it only when normalizing names is intentional.
	bool get_LowerCaseNames(void);
	// If true, member names are converted to lowercase while JSON is loaded by Load,
	// LoadBd, LoadSb, or LoadFile. The default is false.
	// 
	// Important: This changes member names in the parsed document; it is not merely a
	// case-insensitive lookup mode. Use it only when normalizing names is intentional.
	void put_LowerCaseNames(bool newVal);

	// Specifies a path prefix automatically prepended to JSON paths passed to
	// path-based methods such as StringOf, ObjectOf, UpdateString, SetBoolOf, and
	// SizeOfArray. The default is the empty string.
	// 
	// Use case: Set a prefix when many operations target the same nested object. The
	// individual method calls can then use paths relative to that prefix.
	void get_PathPrefix(CkString &str);
	// Specifies a path prefix automatically prepended to JSON paths passed to
	// path-based methods such as StringOf, ObjectOf, UpdateString, SetBoolOf, and
	// SizeOfArray. The default is the empty string.
	// 
	// Use case: Set a prefix when many operations target the same nested object. The
	// individual method calls can then use paths relative to that prefix.
	const char *pathPrefix(void);
	// Specifies a path prefix automatically prepended to JSON paths passed to
	// path-based methods such as StringOf, ObjectOf, UpdateString, SetBoolOf, and
	// SizeOfArray. The default is the empty string.
	// 
	// Use case: Set a prefix when many operations target the same nested object. The
	// individual method calls can then use paths relative to that prefix.
	void put_PathPrefix(const char *newVal);

	// Returns the number of direct name/value members in this JSON object. Nested
	// members inside child objects are not included.
	// 
	// JSON objects and order: RFC 8259 defines a JSON object as an unordered
	// collection of name/value pairs. Chilkat preserves a member order so index-based
	// APIs and deterministic emission are possible, but interoperable application
	// logic should generally use member names rather than depend on object order.
	int get_Size(void);

	// When Strict is true, the Load methods first check that the data is well-formed
	// JSON. If it is not, the load fails and the contents of this JsonObject are left
	// unchanged. The default is false.
	// 
	// This applies to Load[1], LoadSb[2], LoadBd[3], LoadFile[4] and
	// LoadPredefined[5].
	// 
	// Chilkat's JSON parser is deliberately tolerant. By default it can accept text
	// that is not well-formed, succeed, and leave an empty or partially populated
	// document. That is convenient when the goal is a best-effort parse of imperfect
	// input, but it is the wrong behavior when a silently missing member changes what
	// the application does. A single missing comma, for example, can cause the members
	// after it to be dropped while the load still reports success.
	// 
	// Set Strict to true for JSON carrying configuration, credentials, or security
	// parameters, where a member that quietly failed to load would be acted on as
	// though it had never been specified.
	// 
	// Note: The default is false so that existing applications are unaffected. When
	// a strict load is rejected, this JsonObject keeps whatever it held before the
	// call, so a failed reload never leaves the object empty.
	// 
	// References:
	// [1] #Load
	// [2] #LoadSb
	// [3] #LoadBd
	// [4] #LoadFile
	// [5] #LoadPredefined
	bool get_Strict(void);
	// When Strict is true, the Load methods first check that the data is well-formed
	// JSON. If it is not, the load fails and the contents of this JsonObject are left
	// unchanged. The default is false.
	// 
	// This applies to Load[1], LoadSb[2], LoadBd[3], LoadFile[4] and
	// LoadPredefined[5].
	// 
	// Chilkat's JSON parser is deliberately tolerant. By default it can accept text
	// that is not well-formed, succeed, and leave an empty or partially populated
	// document. That is convenient when the goal is a best-effort parse of imperfect
	// input, but it is the wrong behavior when a silently missing member changes what
	// the application does. A single missing comma, for example, can cause the members
	// after it to be dropped while the load still reports success.
	// 
	// Set Strict to true for JSON carrying configuration, credentials, or security
	// parameters, where a member that quietly failed to load would be acted on as
	// though it had never been specified.
	// 
	// Note: The default is false so that existing applications are unaffected. When
	// a strict load is rejected, this JsonObject keeps whatever it held before the
	// call, so a failed reload never leaves the object empty.
	// 
	// References:
	// [1] #Load
	// [2] #LoadSb
	// [3] #LoadBd
	// [4] #LoadFile
	// [5] #LoadPredefined
	void put_Strict(bool newVal);

	// Provides a catch-all string for uncommon, implementation-specific options. The
	// default is the empty string and it should normally remain empty.
	// 
	// Recommendation: Do not invent option keywords. Set this property only when a
	// specific JsonObject option is documented by Chilkat or provided by Chilkat
	// support.
	void get_UncommonOptions(CkString &str);
	// Provides a catch-all string for uncommon, implementation-specific options. The
	// default is the empty string and it should normally remain empty.
	// 
	// Recommendation: Do not invent option keywords. Set this property only when a
	// specific JsonObject option is documented by Chilkat or provided by Chilkat
	// support.
	const char *uncommonOptions(void);
	// Provides a catch-all string for uncommon, implementation-specific options. The
	// default is the empty string and it should normally remain empty.
	// 
	// Recommendation: Do not invent option keywords. Set this property only when a
	// specific JsonObject option is documented by Chilkat or provided by Chilkat
	// support.
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Inserts a new JSON array member named name at the zero-based member position
	// index. The new array is empty.
	// 
	// +----+----------------------------------+
	// | 0  | Insert as the first member.      |
	// +----+----------------------------------+
	// | -1 | Append as the last member.       |
	// +----+----------------------------------+
	// | n  | Insert at zero-based position n. |
	// +----+----------------------------------+
	// 
	// Member name vs. JSON path: name is a direct member name, not a JSON path. Use an
	// Update* or Set*Of method when addressing a nested value by path.
	bool AddArrayAt(int index, const char *name);


	// Inserts a new JSON array member named name at the zero-based member position
	// index. The array value is copied from jarr; subsequent changes to the source
	// array do not modify the inserted copy.
	// 
	// +----+----------------------------------+
	// | 0  | Insert as the first member.      |
	// +----+----------------------------------+
	// | -1 | Append as the last member.       |
	// +----+----------------------------------+
	// | n  | Insert at zero-based position n. |
	// +----+----------------------------------+
	// 
	// Member name vs. JSON path: name is a direct member name, not a JSON path. Use an
	// Update* or Set*Of method when addressing a nested value by path.
	bool AddArrayCopyAt(int index, const char *name, CkJsonArray &jarr);


	// Inserts a new JSON boolean member named name at the zero-based member position
	// index. The value is taken from value.
	// 
	// +----+----------------------------------+
	// | 0  | Insert as the first member.      |
	// +----+----------------------------------+
	// | -1 | Append as the last member.       |
	// +----+----------------------------------+
	// | n  | Insert at zero-based position n. |
	// +----+----------------------------------+
	// 
	// Member name vs. JSON path: name is a direct member name, not a JSON path. Use an
	// Update* or Set*Of method when addressing a nested value by path.
	bool AddBoolAt(int index, const char *name, bool value);


	// Inserts a new JSON number member named name at the zero-based member position
	// index. The integer value is emitted as a JSON number, not as a quoted string.
	// 
	// +----+----------------------------------+
	// | 0  | Insert as the first member.      |
	// +----+----------------------------------+
	// | -1 | Append as the last member.       |
	// +----+----------------------------------+
	// | n  | Insert at zero-based position n. |
	// +----+----------------------------------+
	// 
	// Member name vs. JSON path: name is a direct member name, not a JSON path. Use an
	// Update* or Set*Of method when addressing a nested value by path.
	bool AddIntAt(int index, const char *name, int value);


	// Inserts a new JSON null member named name at the zero-based member position
	// index.
	// 
	// +----+----------------------------------+
	// | 0  | Insert as the first member.      |
	// +----+----------------------------------+
	// | -1 | Append as the last member.       |
	// +----+----------------------------------+
	// | n  | Insert at zero-based position n. |
	// +----+----------------------------------+
	// 
	// Member name vs. JSON path: name is a direct member name, not a JSON path. Use an
	// Update* or Set*Of method when addressing a nested value by path.
	bool AddNullAt(int index, const char *name);


	// Inserts a new JSON number member named name at the zero-based member position
	// index. The numericStr argument supplies the exact JSON numeric text to store.
	// 
	// +----+----------------------------------+
	// | 0  | Insert as the first member.      |
	// +----+----------------------------------+
	// | -1 | Append as the last member.       |
	// +----+----------------------------------+
	// | n  | Insert at zero-based position n. |
	// +----+----------------------------------+
	// 
	// Member name vs. JSON path: name is a direct member name, not a JSON path. Use an
	// Update* or Set*Of method when addressing a nested value by path.
	// Exact numeric text: Use this method when lexical form or precision matters, for
	// example 12345678901234567890, 1.2500, or scientific notation. The supplied text
	// must be valid JSON number syntax; JSON does not permit NaN or infinity.
	bool AddNumberAt(int index, const char *name, const char *numericStr);


	// Inserts a new JSON object member named name at the zero-based member position
	// index. The new object is empty.
	// 
	// +----+----------------------------------+
	// | 0  | Insert as the first member.      |
	// +----+----------------------------------+
	// | -1 | Append as the last member.       |
	// +----+----------------------------------+
	// | n  | Insert at zero-based position n. |
	// +----+----------------------------------+
	// 
	// Member name vs. JSON path: name is a direct member name, not a JSON path. Use an
	// Update* or Set*Of method when addressing a nested value by path.
	bool AddObjectAt(int index, const char *name);


	// Inserts a new JSON object member named name at the zero-based member position
	// index. The object value is copied from jsonObj; the inserted value is
	// independent of the source.
	// 
	// +----+----------------------------------+
	// | 0  | Insert as the first member.      |
	// +----+----------------------------------+
	// | -1 | Append as the last member.       |
	// +----+----------------------------------+
	// | n  | Insert at zero-based position n. |
	// +----+----------------------------------+
	// 
	// Member name vs. JSON path: name is a direct member name, not a JSON path. Use an
	// Update* or Set*Of method when addressing a nested value by path.
	bool AddObjectCopyAt(int index, const char *name, CkJsonObject &jsonObj);


	// Inserts a new JSON string member named name at the zero-based member position
	// index. The value is stored as a JSON string and is escaped as needed when
	// emitted.
	// 
	// +----+----------------------------------+
	// | 0  | Insert as the first member.      |
	// +----+----------------------------------+
	// | -1 | Append as the last member.       |
	// +----+----------------------------------+
	// | n  | Insert at zero-based position n. |
	// +----+----------------------------------+
	// 
	// Member name vs. JSON path: name is a direct member name, not a JSON path. Use an
	// Update* or Set*Of method when addressing a nested value by path.
	bool AddStringAt(int index, const char *name, const char *value);


	// Appends a new JSON array member named name to this object. The newly appended
	// array is empty and the returned JsonArray references that array in this
	// document, so changes made through it modify the same JSON tree.
	// 
	// Member name vs. JSON path: name is a direct member name. It is not interpreted
	// as a JSON path. Use the corresponding Update* method when a nested path should
	// be addressed or created.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonArray *AppendArray(const char *name);


	// Appends a new JSON array member named name to this object. A new empty array is
	// created and jarr is updated to reference it. The method returns true on
	// success.
	// 
	// Member name vs. JSON path: name is a direct member name. It is not interpreted
	// as a JSON path. Use the corresponding Update* method when a nested path should
	// be addressed or created.
	bool AppendArray2(const char *name, CkJsonArray &jarr);


	// Appends a new JSON array member named name to this object. The array is copied
	// from jarr, so the appended array is independent of the source array.
	// 
	// Member name vs. JSON path: name is a direct member name. It is not interpreted
	// as a JSON path. Use the corresponding Update* method when a nested path should
	// be addressed or created.
	bool AppendArrayCopy(const char *name, CkJsonArray &jarr);


	// Appends a new JSON boolean member named name to this object. The value is taken
	// from value.
	// 
	// Member name vs. JSON path: name is a direct member name. It is not interpreted
	// as a JSON path. Use the corresponding Update* method when a nested path should
	// be addressed or created.
	bool AppendBool(const char *name, bool value);


	// Appends a new JSON number member named name to this object. The integer value is
	// stored as a JSON number.
	// 
	// Member name vs. JSON path: name is a direct member name. It is not interpreted
	// as a JSON path. Use the corresponding Update* method when a nested path should
	// be addressed or created.
	bool AppendInt(const char *name, int value);


	// Appends a new JSON object member named name to this object. The newly appended
	// object is empty and the returned JsonObject references that object in this
	// document.
	// 
	// Member name vs. JSON path: name is a direct member name. It is not interpreted
	// as a JSON path. Use the corresponding Update* method when a nested path should
	// be addressed or created.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *AppendObject(const char *name);


	// Appends a new JSON object member named name to this object. A new empty object
	// is created and jsonObj is updated to reference it. The method returns true on
	// success.
	// 
	// Member name vs. JSON path: name is a direct member name. It is not interpreted
	// as a JSON path. Use the corresponding Update* method when a nested path should
	// be addressed or created.
	bool AppendObject2(const char *name, CkJsonObject &jsonObj);


	// Appends a new JSON object member named name to this object. The object is copied
	// from jsonObj, so the appended object is independent of the source object.
	// 
	// Member name vs. JSON path: name is a direct member name. It is not interpreted
	// as a JSON path. Use the corresponding Update* method when a nested path should
	// be addressed or created.
	bool AppendObjectCopy(const char *name, CkJsonObject &jsonObj);


	// Appends a new JSON string member named name to this object. The value is
	// JSON-escaped as needed when emitted.
	// 
	// Member name vs. JSON path: name is a direct member name. It is not interpreted
	// as a JSON path. Use the corresponding Update* method when a nested path should
	// be addressed or created.
	bool AppendString(const char *name, const char *value);


	// Appends a new JSON array member named name to this object. The array is
	// populated with the strings contained in values.
	// 
	// Member name vs. JSON path: name is a direct member name. It is not interpreted
	// as a JSON path. Use the corresponding Update* method when a nested path should
	// be addressed or created.
	bool AppendStringArray(const char *name, CkStringTable &values);


	// Returns the JSON array stored in the member at zero-based position index. The
	// returned JsonArray references the existing array in the same document; it is not
	// a detached copy.
	// 
	// Type requirement: The member at index must be an array. Use TypeAt when the
	// member type is not already known.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonArray *ArrayAt(int index);


	// Updates jarr to reference the JSON array stored at zero-based member position
	// index and returns true on success.
	// 
	bool ArrayAt2(int index, CkJsonArray &jarr);


	// Returns the JSON array at jsonPath. The returned JsonArray references the
	// existing array in the same document, so modifications through it are reflected
	// in the parent JSON.
	// 
	// JSON paths: Paths are relative to this object and may include object-member
	// separators and array indexes, for example orders[0].items.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonArray *ArrayOf(const char *jsonPath);


	// Updates jarr to reference the JSON array at jsonPath and returns true on
	// success.
	// 
	bool ArrayOf2(const char *jsonPath, CkJsonArray &jarr);


	// Returns the boolean value of the member at zero-based position index.
	// 
	// Indexing: Member indexes are based on the order maintained by this JsonObject
	// instance. JSON objects are semantically unordered, so application protocols
	// should normally identify values by member name rather than by position.
	bool BoolAt(int index);


	// Returns the boolean value at jsonPath. The path is evaluated relative to this
	// JsonObject, after applying PathPrefix if one is set.
	// 
	bool BoolOf(const char *jsonPath);


	// Reads the string value at jsonPath, decodes it using encoding (for example,
	// base64 or hex), and appends the resulting bytes to bd.
	// 
	// Binary-in-JSON convention: The JSON member itself is text. The encoding argument
	// tells Chilkat how that text represents the original bytes.
	bool BytesOf(const char *jsonPath, const char *encoding, CkBinData &bd);


	// Removes all members from this JSON object, leaving an empty object equivalent to
	// {}.
	// 
	void Clear(void);


	// Deprecated. Use MakeCopy instead. Returns an independent copy of this JSON
	// object.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *Clone(void);


	// Updates jsonObj so that it references the same JSON object as the caller. No
	// JSON data is copied.
	// 
	// Shared state: After this call, modifications through either reference affect the
	// same underlying JSON object.
	bool CopyRef(CkJsonObject &jsonObj);


	// Parses the date/time value at jsonPath and loads the result into dateTime.
	// Recognized forms include ISO 8601 timestamps (for example,
	// 2009-11-04T19:55:41Z), RFC 822-style date/time strings, and Unix timestamp
	// integers.
	// 
	// JSON has no native date type: Dates in JSON are application conventions, usually
	// represented as strings or numbers. This method recognizes common conventions and
	// converts them to CkDateTime.
	bool DateOf(const char *jsonPath, CkDateTime &dateTime);


	// Deletes the direct member named name from this JSON object.
	// 
	// Not a path: name is a member name, not a JSON path. Use a path-based operation
	// when deleting or replacing a nested value requires navigation first.
	bool Delete(const char *name);


	// Deletes the member at zero-based position index. Members after the deleted
	// position shift toward the beginning.
	// 
	bool DeleteAt(int index);


	// Deletes every object record in the array at arrayPath whose value at relative
	// path relpath equals or wildcard-matches value. The caseSensitive argument
	// controls matching. Returns the number of records deleted.
	// 
	int DeleteRecords(const char *arrayPath, const char *relpath, const char *value, bool caseSensitive);


	// Parses the date/time value at jsonPath into dt. If bLocal is true, the
	// destination receives local date/time fields; otherwise it receives UTC/GMT
	// fields. Recognized inputs include ISO 8601 timestamps, RFC 822-style date/time
	// strings, and Unix timestamp integers.
	// 
	bool DtOf(const char *jsonPath, bool bLocal, CkDtObj &dt);


	// Serializes the JSON document rooted at this object and returns the JSON text.
	// Formatting is controlled by EmitCompact and, for pretty output, EmitCrLf.
	// 
	// Object member order: Chilkat emits members in its maintained order, but JSON
	// object ordering is not semantically significant under RFC 8259.
	bool Emit(CkString &outStr);

	// Serializes the JSON document rooted at this object and returns the JSON text.
	// Formatting is controlled by EmitCompact and, for pretty output, EmitCrLf.
	// 
	// Object member order: Chilkat emits members in its maintained order, but JSON
	// object ordering is not semantically significant under RFC 8259.
// QT defines the macro "emit" globally.  (Good grief!)
#if defined(QT_VERSION)
#pragma push_macro("emit")
#undef emit
const char *emit(void);
#pragma pop_macro("emit")
#else
const char *emit(void);
#endif



	// Serializes this JSON and appends the resulting bytes to bd.
	// 
	// Append behavior: Existing data in the destination BinData is preserved.
	bool EmitBd(CkBinData &bd);


	// Serializes this JSON and appends the resulting text to sb. Formatting follows
	// EmitCompact and EmitCrLf.
	// 
	// Append behavior: Existing text in the destination StringBuilder is preserved;
	// the emitted JSON is added after it.
	bool EmitSb(CkStringBuilder &sb);


	// Serializes the JSON after substituting variables from subs into template
	// strings. A placeholder such as {$name} is replaced by the corresponding
	// hashtable value. Prefixing the variable name with i., as in {$i.count}, emits
	// the substituted value as a JSON integer instead of a quoted string.
	// 
	// If omitEmpty is true, members whose substituted result is an empty string or
	// empty array are omitted from the emitted JSON.
	// 
	// Template reuse: This method does not require rebuilding the JSON template. It is
	// commonly paired with Predefine and LoadPredefined when the same JSON shape is
	// emitted repeatedly with different values.
	bool EmitWithSubs(CkHashtable &subs, bool omitEmpty, CkString &outStr);

	// Serializes the JSON after substituting variables from subs into template
	// strings. A placeholder such as {$name} is replaced by the corresponding
	// hashtable value. Prefixing the variable name with i., as in {$i.count}, emits
	// the substituted value as a JSON integer instead of a quoted string.
	// 
	// If omitEmpty is true, members whose substituted result is an empty string or
	// empty array are omitted from the emitted JSON.
	// 
	// Template reuse: This method does not require rebuilding the JSON template. It is
	// commonly paired with Predefine and LoadPredefined when the same JSON shape is
	// emitted repeatedly with different values.
	const char *emitWithSubs(CkHashtable &subs, bool omitEmpty);

	// Recursively searches this JSON subtree for the first JSON object containing a
	// direct member named name. Returns that object, or _NULL_ if no matching object
	// is found.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *FindObjectWithMember(const char *name);


	// Recursively searches this JSON subtree for the first object containing a direct
	// member named name. On success, jsonObj is updated to reference the matching
	// object and the method returns true.
	// 
	bool FindObjectWithMember2(const char *name, CkJsonObject &jsonObj);


	// Searches the JSON array at arrayPath for the first object whose value at
	// relative path relPath equals or wildcard-matches value. The caseSensitive
	// argument controls string comparison. Returns the matching record object.
	// 
	// Wildcard matching: The search value may contain * to match zero or more
	// characters. relPath is evaluated relative to each record object in the array.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *FindRecord(const char *arrayPath, const char *relPath, const char *value, bool caseSensitive);


	// Searches the JSON array at arrayPath using the same matching rules as
	// FindRecord. On success, jsonObj is updated to reference the first matching
	// record and the method returns true.
	// 
	// Reference semantics: The destination references the record in the original JSON
	// document; changes made through jsonObj modify that record.
	bool FindRecord2(const char *arrayPath, const char *relPath, const char *value, bool caseSensitive, CkJsonObject &jsonObj);


	// Searches the JSON array at arrayPath for the first record whose relPath value
	// equals or wildcard-matches value, then returns the value at retRelPath from that
	// same record as a string.
	// 
	// Typical use: This is useful for lookups such as “find the record where Name is
	// Advertising and return its Id.” The * wildcard may be used in value.
	bool FindRecordString(const char *arrayPath, const char *relPath, const char *value, bool caseSensitive, const char *retRelPath, CkString &outStr);

	// Searches the JSON array at arrayPath for the first record whose relPath value
	// equals or wildcard-matches value, then returns the value at retRelPath from that
	// same record as a string.
	// 
	// Typical use: This is useful for lookups such as “find the record where Name is
	// Advertising and return its Id.” The * wildcard may be used in value.
	const char *findRecordString(const char *arrayPath, const char *relPath, const char *value, bool caseSensitive, const char *retRelPath);

	// Applies a Firebase Realtime Database event to this JSON object. name should be
	// put or patch, and data should contain event JSON such as
	// {"path":"/","data":{"a":1,"b":2}}.
	// 
	// Purpose: This method is useful when maintaining a local JSON representation from
	// Firebase server-sent events: put replaces the value at a path, while patch
	// updates individual child keys.
	bool FirebaseApplyEvent(const char *name, const char *data);


	// Applies Firebase-style patch semantics at jsonPath. jsonData must contain a JSON
	// object; each key in that object updates or adds the corresponding key at the
	// target path.
	// 
	// Relative path: jsonPath is relative to this JsonObject.
	bool FirebasePatch(const char *jsonPath, const char *jsonData);


	// Applies Firebase-style put semantics at jsonPath, replacing or inserting the
	// value at that path. value is JSON text and may represent an object, array,
	// number, boolean, null, or a quoted JSON string.
	// 
	// Quoted strings: To store a string through this method, value must contain a
	// valid JSON string literal, including its surrounding double quotes. Use
	// UpdateString when you already have an ordinary application string.
	bool FirebasePut(const char *jsonPath, const char *value);


	// Returns a JsonObject reference to the root object of the JSON document
	// containing this object. This can be called from any nested object reference.
	// 
	// Shared document lifetime: Nested JsonObject references share the same underlying
	// JSON document. The document remains available while at least one such reference
	// is retained by the application.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *GetDocRoot(void);


	// Updates docRoot to reference the root object of the JSON document containing the
	// caller and returns true on success.
	// 
	// Reference semantics: The destination is another reference into the same
	// underlying document; it is not a copy.
	bool GetDocRoot2(CkJsonObject &docRoot);


	// Returns true if a value exists at jsonPath; otherwise returns false.
	// 
	// Missing vs. null: A member whose JSON value is null still exists. Use IsNullOf
	// to test specifically for JSON null.
	bool HasMember(const char *jsonPath);


	// Returns the zero-based position of the direct member named name, or -1 if that
	// member name is not found.
	// 
	// Not a path: name is searched only among the direct members of this object.
	int IndexOf(const char *name);


	// Returns the integer value of the member at zero-based position index.
	// 
	// Indexing: Member indexes are based on the order maintained by this JsonObject
	// instance. JSON objects are semantically unordered, so application protocols
	// should normally identify values by member name rather than by position.
	int IntAt(int index);


	// Returns the integer value at jsonPath. The path is evaluated relative to this
	// JsonObject, after applying PathPrefix if one is set.
	// 
	// Large numbers: Use StringOf or the exact numeric-text APIs when a JSON integer
	// may exceed the range of the language binding's integer type.
	int IntOf(const char *jsonPath);


	// Returns true if the member at zero-based position index has the JSON value
	// null; otherwise returns false.
	// 
	bool IsNullAt(int index);


	// Returns true if the value at jsonPath is the JSON literal null; otherwise
	// returns false.
	// 
	// Null is a value: JSON null is different from a missing member and from an empty
	// string. Use HasMember when existence must be tested separately.
	bool IsNullOf(const char *jsonPath);


	// Returns an integer identifying the JSON type of the value at jsonPath. Returns
	// -1 if no member exists at that path.
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
	int JsonTypeOf(const char *jsonPath);


	// Parses the JSON text in json and loads the parsed data into this object for
	// DOM-style access and modification.
	// 
	// JSON data model: JSON values are strings, numbers, booleans, null, objects, or
	// arrays. Object member names should be unique for interoperable JSON; RFC 8259
	// notes that consumers differ in how duplicate names are handled.
	bool Load(const char *json);


	// Parses JSON from the bytes contained in bd and loads it into this object.
	// 
	bool LoadBd(CkBinData &bd);


	// Reads JSON text from the file at path, parses it, and loads the result into this
	// object.
	// 
	bool LoadFile(const char *path);


	// Loads this object from the predefined JSON document identified by name.
	// Predefined documents are created with Predefine.
	// 
	bool LoadPredefined(const char *name);


	// Parses JSON from the current contents of sb and loads it into this object.
	// 
	bool LoadSb(CkStringBuilder &sb);


	// Copies this JSON object into json. The destination receives an independent JSON
	// copy rather than another reference to the same underlying object.
	// 
	// Copy vs. reference: Use CopyRef when two JsonObject instances should refer to
	// the same JSON object instead of duplicating its data.
	bool MakeCopy(CkJsonObject &json);


	// Moves the direct member at zero-based position fromIndex to toIndex. Use toIndex
	// = 0 to move it first or -1 to move it last.
	// 
	bool MoveMember(int fromIndex, int toIndex);


	// Returns the name of the member at zero-based position index. Use this with Size
	// and TypeAt to iterate through an object's direct members.
	// 
	bool NameAt(int index, CkString &outStr);

	// Returns the name of the member at zero-based position index. Use this with Size
	// and TypeAt to iterate through an object's direct members.
	// 
	const char *nameAt(int index);

	// Creates a JSON array at path and loads that array from the JSON text in jArr.
	// The supplied text should represent a JSON array.
	// 
	// Difference from UpdateNewArray: UpdateNewArray creates an empty array.
	// NewArrayOf creates the array and immediately populates it from JSON text.
	bool NewArrayOf(const char *path, const char *jArr);


	// Creates a JSON object at path and loads that object from the JSON text in jObj.
	// The supplied text should represent a JSON object.
	// 
	// Difference from UpdateNewObject: UpdateNewObject creates an empty object.
	// NewObjectOf creates the object and immediately populates it from JSON text.
	bool NewObjectOf(const char *path, const char *jObj);


	// Returns the JSON object stored in the member at zero-based position index. The
	// returned JsonObject references the existing child object in the same document;
	// changes made through it modify that document.
	// 
	// Type requirement: The member at index must be a JSON object. Use TypeAt when the
	// type is not already known.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *ObjectAt(int index);


	// Updates jsonObj to reference the JSON object stored at zero-based member
	// position index and returns true on success.
	// 
	bool ObjectAt2(int index, CkJsonObject &jsonObj);


	// Returns the JSON object at jsonPath. The returned object is a live reference
	// into the same JSON document, not a copy.
	// 
	// Relative paths: A path is evaluated relative to the current object. Use
	// GetDocRoot when access must start from the document root.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *ObjectOf(const char *jsonPath);


	// Updates jsonObj to reference the JSON object at jsonPath and returns true on
	// success.
	// 
	bool ObjectOf2(const char *jsonPath, CkJsonObject &jsonObj);


	// Stores this JSON document in Chilkat's internal global collection of predefined
	// JSON documents under name. If the name already exists, the predefined value is
	// replaced.
	// 
	// Template use: After predefining a document, another JsonObject can load it by
	// name with LoadPredefined.
	bool Predefine(const char *name);


	// Renames the direct member oldName to newName. The member value and its position
	// are otherwise unchanged.
	// 
	// JSON interoperability: JSON object member names should be unique. Avoid renaming
	// a member to a name already used by another member unless duplicate names are
	// intentionally required.
	bool Rename(const char *oldName, const char *newName);


	// Renames the member at zero-based position index to name. The member value is not
	// changed.
	// 
	bool RenameAt(int index, const char *name);


	// Sets the member at zero-based position index to a JSON boolean value.
	// 
	bool SetBoolAt(int index, bool value);


	// Sets the value at jsonPath to a JSON boolean value.
	// 
	// Set vs. Update: Use UpdateBool when missing objects or array positions along the
	// path should be created automatically.
	bool SetBoolOf(const char *jsonPath, bool value);


	// Sets the member at zero-based position index to a JSON number value. The integer
	// is emitted as a JSON number.
	// 
	bool SetIntAt(int index, int value);


	// Sets the value at jsonPath to an integer JSON number.
	// 
	// Set vs. Update: Use UpdateInt when missing objects or array positions along the
	// path should be created automatically.
	bool SetIntOf(const char *jsonPath, int value);


	// Sets the member at zero-based position index to a JSON null value.
	// 
	bool SetNullAt(int index);


	// Sets the value at jsonPath to a JSON null value.
	// 
	// Set vs. Update: Use UpdateNull when missing objects or array positions along the
	// path should be created automatically.
	bool SetNullOf(const char *jsonPath);


	// Sets the member at zero-based position index to a JSON number value. The value
	// argument is the exact textual representation of the JSON number.
	// 
	// JSON number syntax: The text may contain an integer, fraction, or exponent. It
	// must be valid JSON number syntax; leading zeros (except for zero itself), NaN,
	// and infinity are not valid JSON numbers.
	bool SetNumberAt(int index, const char *value);


	// Sets the value at jsonPath to a JSON number value. The value argument supplies
	// the exact textual form of the JSON number.
	// 
	// Set vs. Update: Use UpdateNumber when missing objects or array positions along
	// the path should be created automatically.
	// Precision: Using numeric text avoids an intermediate conversion through a
	// floating-point type and can therefore preserve large integers or
	// application-specific decimal formatting.
	bool SetNumberOf(const char *jsonPath, const char *value);


	// Sets the member at zero-based position index to a JSON string value. The string
	// is escaped as required when JSON is emitted.
	// 
	bool SetStringAt(int index, const char *value);


	// Sets the value at jsonPath to a JSON string value. The string is escaped as
	// required when JSON is emitted.
	// 
	// Set vs. Update: Use UpdateString when missing objects or array positions along
	// the path should be created automatically.
	bool SetStringOf(const char *jsonPath, const char *value);


	// Returns the number of elements in the JSON array at jsonPath. Returns -1 if the
	// path does not resolve to an existing JSON array.
	// 
	int SizeOfArray(const char *jsonPath);


	// Sorts this object's direct members by member name. ascending selects ascending
	// or descending order, and caseSensitive controls how names are compared.
	// 
	// JSON semantics: Member ordering is not significant to JSON consumers, but
	// sorting can make emitted JSON deterministic and easier to compare or review.
	void Sort(bool ascending, bool caseSensitive);


	// Returns the string value of the member at zero-based position index.
	// 
	// Indexing: Member indexes are based on the order maintained by this JsonObject
	// instance. JSON objects are semantically unordered, so application protocols
	// should normally identify values by member name rather than by position.
	// Non-string values: StringOf can also provide textual representations of scalar
	// JSON values such as numbers, booleans, and null; use the type-specific methods
	// when the JSON type itself matters.
	bool StringAt(int index, CkString &outStr);

	// Returns the string value of the member at zero-based position index.
	// 
	// Indexing: Member indexes are based on the order maintained by this JsonObject
	// instance. JSON objects are semantically unordered, so application protocols
	// should normally identify values by member name rather than by position.
	// Non-string values: StringOf can also provide textual representations of scalar
	// JSON values such as numbers, booleans, and null; use the type-specific methods
	// when the JSON type itself matters.
	const char *stringAt(int index);

	// Returns the value at jsonPath as text. For a JSON string, the string value is
	// returned. Scalar non-string values such as numbers, booleans, and null are
	// returned using their JSON textual representation.
	// 
	// Type-sensitive code: Use JsonTypeOf, IntOf, BoolOf, or IsNullOf when the
	// distinction between JSON types is important.
	bool StringOf(const char *jsonPath, CkString &outStr);

	// Returns the value at jsonPath as text. For a JSON string, the string value is
	// returned. Scalar non-string values such as numbers, booleans, and null are
	// returned using their JSON textual representation.
	// 
	// Type-sensitive code: Use JsonTypeOf, IntOf, BoolOf, or IsNullOf when the
	// distinction between JSON types is important.
	const char *stringOf(const char *jsonPath);

	// Returns true if the textual value at jsonPath equals value according to the
	// caseSensitive setting; otherwise returns false.
	// 
	bool StringOfEquals(const char *jsonPath, const char *value, bool caseSensitive);


	// Retrieves the value at jsonPath as text and appends it to sb.
	// 
	// Append behavior: Existing contents of the destination StringBuilder are
	// preserved.
	bool StringOfSb(const char *jsonPath, CkStringBuilder &sb);


	// Swaps the positions of the direct members at zero-based indexes index1 and
	// index2. Member names and values are unchanged.
	// 
	// Ordering: JSON object order is not semantically significant, but Chilkat
	// preserves an order for index-based access and emission.
	bool Swap(int index1, int index2);


	// Returns an integer identifying the JSON type of the member at zero-based
	// position index. Returns -1 if no member exists at that index.
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
	int TypeAt(int index);


	// Returns the unsigned integer value at jsonPath.
	// 
	unsigned long UIntOf(const char *jsonPath);


	// Updates the value at jsonPath to a JSON string value, or creates the member and
	// any missing path components as needed. The bytes in bd are first encoded
	// according to encoding (for example, base64 or hex) and the encoded text is
	// stored as the JSON string value.
	// 
	// Path-based operation: jsonPath is interpreted using DelimiterChar, PathPrefix,
	// and the I / J / K index substitutions.
	// Binary data in JSON: JSON has no native byte-array type. Binary content must
	// therefore be represented using a textual encoding agreed upon by the producer
	// and consumer.
	bool UpdateBd(const char *jsonPath, const char *encoding, CkBinData &bd);


	// Updates the value at jsonPath to a JSON boolean value, or creates the member and
	// any missing path components as needed.
	// 
	// Path-based operation: jsonPath is interpreted using DelimiterChar, PathPrefix,
	// and the I / J / K index substitutions.
	bool UpdateBool(const char *jsonPath, bool value);


	// Updates the value at jsonPath to a JSON number value, or creates the member and
	// any missing path components as needed. The integer value is stored as a JSON
	// number.
	// 
	// Path-based operation: jsonPath is interpreted using DelimiterChar, PathPrefix,
	// and the I / J / K index substitutions.
	bool UpdateInt(const char *jsonPath, int value);


	// Creates or replaces the value at jsonPath with a new empty JSON array. Missing
	// path components are created automatically as needed.
	// 
	bool UpdateNewArray(const char *jsonPath);


	// Creates or replaces the value at jsonPath with a new empty JSON object. Missing
	// path components are created automatically as needed.
	// 
	bool UpdateNewObject(const char *jsonPath);


	// Updates the value at jsonPath to a JSON null value, or creates the member and
	// any missing path components as needed.
	// 
	// Path-based operation: jsonPath is interpreted using DelimiterChar, PathPrefix,
	// and the I / J / K index substitutions.
	bool UpdateNull(const char *jsonPath);


	// Updates the value at jsonPath to a JSON number value, or creates the member and
	// any missing path components as needed. The numericStr argument is stored as the
	// exact textual representation of the JSON number.
	// 
	// Path-based operation: jsonPath is interpreted using DelimiterChar, PathPrefix,
	// and the I / J / K index substitutions.
	// When to use: Use UpdateNumber instead of UpdateInt for decimal/exponent forms,
	// very large integers, or when preserving exact numeric text is important.
	bool UpdateNumber(const char *jsonPath, const char *numericStr);


	// Updates the value at jsonPath to a JSON string value, or creates the member and
	// any missing path components as needed. The new string value is taken from the
	// contents of sb.
	// 
	// Path-based operation: jsonPath is interpreted using DelimiterChar, PathPrefix,
	// and the I / J / K index substitutions.
	bool UpdateSb(const char *jsonPath, CkStringBuilder &sb);


	// Updates the value at jsonPath to a JSON string value, or creates the member and
	// any missing path components as needed. The supplied string is JSON-escaped as
	// needed.
	// 
	// Path-based operation: jsonPath is interpreted using DelimiterChar, PathPrefix,
	// and the I / J / K index substitutions.
	// Version note: Chilkat versions prior to 9.5.0.68 did not correctly escape all
	// characters for this method. Version 9.5.0.68 and later correct that behavior.
	bool UpdateString(const char *jsonPath, const char *value);


	// Updates the value at jsonPath to a JSON number value, or creates the member and
	// any missing path components as needed. The unsigned integer is stored as a JSON
	// number.
	// 
	// Path-based operation: jsonPath is interpreted using DelimiterChar, PathPrefix,
	// and the I / J / K index substitutions.
	bool UpdateUInt(const char *jsonPath, unsigned long value);


	// Serializes this JSON and writes it to the file at path. Output formatting
	// follows EmitCompact and EmitCrLf.
	// 
	bool WriteFile(const char *path);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
