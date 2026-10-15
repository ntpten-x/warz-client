// CkJws.h: interface for the CkJws class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkJws_H
#define _CkJws_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkStringBuilder;
class CkBinData;
class CkJsonObject;
class CkPrivateKey;
class CkPublicKey;
class CkCert;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkJws
class CK_VISIBLE_PUBLIC CkJws  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkJws(const CkJws &);
	CkJws &operator=(const CkJws &);

    public:
	CkJws(void);
	virtual ~CkJws(void);

	static CkJws *createNew(void);
	static CkJws *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the number of signature slots represented by this object.
	// 
	// After a successful LoadJws or LoadJwsSb, this is the number of signatures in the
	// loaded serialization: 1 for compact or flattened form, or the number of elements
	// in the general JSON signatures array.
	// 
	// During creation, only SetProtectedHeader and SetUnprotectedHeader establish
	// signature slots. The value is one greater than the highest index having either
	// type of header. Key setters attach key material but do not change this property.
	// 
	// Contiguous indexes are required: Indexes are valid from 0 through 1000. If a
	// header is set at index 2, this property becomes 3; CreateJws then requires
	// configured headers at indexes 0, 1, and 2. A gap causes creation to fail.
	int get_NumSignatures(void);

	// Controls whether Chilkat uses JWS Compact Serialization for a single signature.
	// The default is true.
	// 
	// +----------------------------------+-------------------------------------------+
	// |         Configured state         |                  Output                   |
	// +==================================+===========================================+
	// | No signature headers             | Creation fails.                           |
	// +----------------------------------+-------------------------------------------+
	// | One signature and PreferCompact  | Compact Serialization. A protected header |
	// | = true                         | must exist. Any unprotected header is not |
	// |                                  | represented.                              |
	// +----------------------------------+-------------------------------------------+
	// | One signature, PreferCompact =   | Flattened JWS JSON Serialization.         |
	// | false , PreferFlattened =      |                                           |
	// | true                           |                                           |
	// +----------------------------------+-------------------------------------------+
	// | One signature, both preference   | General JWS JSON Serialization with one   |
	// | properties false               | element in signatures .                   |
	// +----------------------------------+-------------------------------------------+
	// | More than one signature          | General JWS JSON Serialization,           |
	// |                                  | regardless of the preference properties.  |
	// +----------------------------------+-------------------------------------------+
	// 
	// Compact output has the form protected.payload.signature. It requires a protected
	// header and cannot represent an unprotected header. If both header types are
	// configured and compact output is selected, the unprotected header is omitted
	// from the result.
	// 
	// Attached payload only: Chilkat always emits the base64url-encoded payload. The
	// class has no built-in detached-payload mode and does not support RFC 7797
	// b64=false payloads.
	bool get_PreferCompact(void);
	// Controls whether Chilkat uses JWS Compact Serialization for a single signature.
	// The default is true.
	// 
	// +----------------------------------+-------------------------------------------+
	// |         Configured state         |                  Output                   |
	// +==================================+===========================================+
	// | No signature headers             | Creation fails.                           |
	// +----------------------------------+-------------------------------------------+
	// | One signature and PreferCompact  | Compact Serialization. A protected header |
	// | = true                         | must exist. Any unprotected header is not |
	// |                                  | represented.                              |
	// +----------------------------------+-------------------------------------------+
	// | One signature, PreferCompact =   | Flattened JWS JSON Serialization.         |
	// | false , PreferFlattened =      |                                           |
	// | true                           |                                           |
	// +----------------------------------+-------------------------------------------+
	// | One signature, both preference   | General JWS JSON Serialization with one   |
	// | properties false               | element in signatures .                   |
	// +----------------------------------+-------------------------------------------+
	// | More than one signature          | General JWS JSON Serialization,           |
	// |                                  | regardless of the preference properties.  |
	// +----------------------------------+-------------------------------------------+
	// 
	// Compact output has the form protected.payload.signature. It requires a protected
	// header and cannot represent an unprotected header. If both header types are
	// configured and compact output is selected, the unprotected header is omitted
	// from the result.
	// 
	// Attached payload only: Chilkat always emits the base64url-encoded payload. The
	// class has no built-in detached-payload mode and does not support RFC 7797
	// b64=false payloads.
	void put_PreferCompact(bool newVal);

	// Controls which JSON form is used when creating a JWS with exactly one signature
	// and PreferCompact[1] is false. The default is true.
	// 
	// +---------+--------------------------------------------------------------------+
	// | Setting |                     One-signature JSON output                      |
	// +=========+====================================================================+
	// | true  | Flattened JSON, with protected , header , and signature directly   |
	// |         | in the top-level object.                                           |
	// +---------+--------------------------------------------------------------------+
	// | false | General JSON, with one signature object in the top-level           |
	// |         | signatures array.                                                  |
	// +---------+--------------------------------------------------------------------+
	// 
	// When more than one signature is configured, General JSON Serialization is always
	// used and this property is ignored. Signature objects are emitted in ascending
	// index order.
	// 
	// 
	// References:
	// [1] #PreferCompact
	bool get_PreferFlattened(void);
	// Controls which JSON form is used when creating a JWS with exactly one signature
	// and PreferCompact[1] is false. The default is true.
	// 
	// +---------+--------------------------------------------------------------------+
	// | Setting |                     One-signature JSON output                      |
	// +=========+====================================================================+
	// | true  | Flattened JSON, with protected , header , and signature directly   |
	// |         | in the top-level object.                                           |
	// +---------+--------------------------------------------------------------------+
	// | false | General JSON, with one signature object in the top-level           |
	// |         | signatures array.                                                  |
	// +---------+--------------------------------------------------------------------+
	// 
	// When more than one signature is configured, General JSON Serialization is always
	// used and this property is ignored. Signature objects are emitted in ascending
	// index order.
	// 
	// 
	// References:
	// [1] #PreferCompact
	void put_PreferFlattened(bool newVal);

	// Provides a catch-all string for specialized compatibility options. The default
	// is an empty string.
	// 
	// No public JWS options are currently documented: Leave this property empty unless
	// an exact keyword and value are supplied by a Chilkat release note, example, or
	// support response. Undocumented values should not be used as substitutes for JOSE
	// headers or application policy.
	void get_UncommonOptions(CkString &str);
	// Provides a catch-all string for specialized compatibility options. The default
	// is an empty string.
	// 
	// No public JWS options are currently documented: Leave this property empty unless
	// an exact keyword and value are supplied by a Chilkat release note, example, or
	// support response. Undocumented values should not be used as substitutes for JOSE
	// headers or application policy.
	const char *uncommonOptions(void);
	// Provides a catch-all string for specialized compatibility options. The default
	// is an empty string.
	// 
	// No public JWS options are currently documented: Leave this property empty unless
	// an exact keyword and value are supplied by a Chilkat release note, example, or
	// support response. Undocumented values should not be used as substitutes for JOSE
	// headers or application policy.
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Creates and returns a JWS from the current payload, headers, and signing keys.
	// 
	// +----------------------------------+-------------------------------------------+
	// |         Configured state         |                  Output                   |
	// +==================================+===========================================+
	// | No signature headers             | Creation fails.                           |
	// +----------------------------------+-------------------------------------------+
	// | One signature and PreferCompact  | Compact Serialization. A protected header |
	// | = true                         | must exist. Any unprotected header is not |
	// |                                  | represented.                              |
	// +----------------------------------+-------------------------------------------+
	// | One signature, PreferCompact =   | Flattened JWS JSON Serialization.         |
	// | false , PreferFlattened =      |                                           |
	// | true                           |                                           |
	// +----------------------------------+-------------------------------------------+
	// | One signature, both preference   | General JWS JSON Serialization with one   |
	// | properties false               | element in signatures .                   |
	// +----------------------------------+-------------------------------------------+
	// | More than one signature          | General JWS JSON Serialization,           |
	// |                                  | regardless of the preference properties.  |
	// +----------------------------------+-------------------------------------------+
	// 
	// Signature slots must form a contiguous range from 0 through NumSignatures[1] -
	// 1. Each slot must have at least one header, an alg value, and compatible signing
	// material. Chilkat looks for alg in the protected header first and then the
	// unprotected header; matching is case-insensitive after trimming.
	// 
	// The payload is always attached and base64url encoded. If no payload setter was
	// called, Chilkat signs a valid zero-length payload. Detached payloads and RFC
	// 7797 unencoded payloads are not supported.
	// 
	// Calling after LoadJws: The loaded payload and headers are reused, but the
	// existing serialized signatures are discarded and recomputed using the currently
	// configured keys. Key material survives loads. For unrelated operations, a fresh
	// Jws object avoids carrying keys forward.
	// Signing algorithms: CreateJws and CreateJwsSb support HS256, HS384, HS512;
	// RS256, RS384, RS512; PS256, PS384, PS512; ES256, ES384, ES512; and none. The
	// none algorithm produces an empty signature. Other identifiers, including EdDSA,
	// Ed25519, Ed448, ES256K, Brainpool bp* identifiers, legacy SHA-1 algorithms, and
	// private-use names, are not supported for signing.
	// 
	// References:
	// [1] #NumSignatures
	bool CreateJws(CkString &outStr);

	// Creates and returns a JWS from the current payload, headers, and signing keys.
	// 
	// +----------------------------------+-------------------------------------------+
	// |         Configured state         |                  Output                   |
	// +==================================+===========================================+
	// | No signature headers             | Creation fails.                           |
	// +----------------------------------+-------------------------------------------+
	// | One signature and PreferCompact  | Compact Serialization. A protected header |
	// | = true                         | must exist. Any unprotected header is not |
	// |                                  | represented.                              |
	// +----------------------------------+-------------------------------------------+
	// | One signature, PreferCompact =   | Flattened JWS JSON Serialization.         |
	// | false , PreferFlattened =      |                                           |
	// | true                           |                                           |
	// +----------------------------------+-------------------------------------------+
	// | One signature, both preference   | General JWS JSON Serialization with one   |
	// | properties false               | element in signatures .                   |
	// +----------------------------------+-------------------------------------------+
	// | More than one signature          | General JWS JSON Serialization,           |
	// |                                  | regardless of the preference properties.  |
	// +----------------------------------+-------------------------------------------+
	// 
	// Signature slots must form a contiguous range from 0 through NumSignatures[1] -
	// 1. Each slot must have at least one header, an alg value, and compatible signing
	// material. Chilkat looks for alg in the protected header first and then the
	// unprotected header; matching is case-insensitive after trimming.
	// 
	// The payload is always attached and base64url encoded. If no payload setter was
	// called, Chilkat signs a valid zero-length payload. Detached payloads and RFC
	// 7797 unencoded payloads are not supported.
	// 
	// Calling after LoadJws: The loaded payload and headers are reused, but the
	// existing serialized signatures are discarded and recomputed using the currently
	// configured keys. Key material survives loads. For unrelated operations, a fresh
	// Jws object avoids carrying keys forward.
	// Signing algorithms: CreateJws and CreateJwsSb support HS256, HS384, HS512;
	// RS256, RS384, RS512; PS256, PS384, PS512; ES256, ES384, ES512; and none. The
	// none algorithm produces an empty signature. Other identifiers, including EdDSA,
	// Ed25519, Ed448, ES256K, Brainpool bp* identifiers, legacy SHA-1 algorithms, and
	// private-use names, are not supported for signing.
	// 
	// References:
	// [1] #NumSignatures
	const char *createJws(void);

	// Creates a JWS using the same rules as CreateJws[1] and writes it to sbJws.
	// 
	// The destination StringBuilder is cleared at the start. On success it contains
	// the complete serialized JWS; on failure it remains empty and no partial JWS is
	// returned.
	// 
	// Creation requirements: Signature indexes must be contiguous, each slot must have
	// a header and alg, and the required MAC key, private key, or signing certificate
	// must be configured at that same index.
	// 
	// References:
	// [1] #CreateJws
	bool CreateJwsSb(CkStringBuilder &sbJws);


	// Returns the loaded payload as text after decoding its bytes using charset charset.
	// 
	// If the charset is unsupported or the payload bytes are invalid for that charset,
	// the method fails and returns no decoded text. Use GetPayloadBd[1] to retrieve
	// exact bytes.
	// 
	// Extraction is not validation: This method does not verify a signature. Treat the
	// returned value as untrusted until the signatures required by the application
	// have returned 1 from Validate[2].
	// 
	// References:
	// [1] #GetPayloadBd
	// [2] #Validate
	bool GetPayload(const char *charset, CkString &outStr);

	// Returns the loaded payload as text after decoding its bytes using charset charset.
	// 
	// If the charset is unsupported or the payload bytes are invalid for that charset,
	// the method fails and returns no decoded text. Use GetPayloadBd[1] to retrieve
	// exact bytes.
	// 
	// Extraction is not validation: This method does not verify a signature. Treat the
	// returned value as untrusted until the signatures required by the application
	// have returned 1 from Validate[2].
	// 
	// References:
	// [1] #GetPayloadBd
	// [2] #Validate
	const char *getPayload(const char *charset);
	// Returns the loaded payload as text after decoding its bytes using charset charset.
	// 
	// If the charset is unsupported or the payload bytes are invalid for that charset,
	// the method fails and returns no decoded text. Use GetPayloadBd[1] to retrieve
	// exact bytes.
	// 
	// Extraction is not validation: This method does not verify a signature. Treat the
	// returned value as untrusted until the signatures required by the application
	// have returned 1 from Validate[2].
	// 
	// References:
	// [1] #GetPayloadBd
	// [2] #Validate
	const char *payload(const char *charset);


	// Writes the exact loaded JWS payload bytes to binData without charset conversion.
	// 
	// The destination BinData is cleared first. On success it contains only the
	// payload bytes; on failure it remains empty.
	// 
	// Validate before use: Loading and extracting a payload does not establish
	// integrity or signer identity. Validate the required signature indexes before
	// trusting these bytes.
	bool GetPayloadBd(CkBinData &binData);


	// Decodes the loaded payload bytes using charset charset and writes the resulting
	// text to sbPayload.
	// 
	// The destination StringBuilder is cleared first. On success it contains the
	// decoded payload; on failure, including a charset conversion error, it remains
	// empty. Use GetPayloadBd[1] when the payload is binary or its encoding is
	// unknown.
	// 
	// Extraction is not validation: This method does not verify a signature. Treat the
	// payload as untrusted until Validate[2] returns 1 for every signer required by
	// the application.
	// 
	// References:
	// [1] #GetPayloadBd
	// [2] #Validate
	bool GetPayloadSb(const char *charset, CkStringBuilder &sbPayload);


	// Copies the decoded protected header of signature index into json. The valid
	// zero-based index range is 0 through 1000.
	// 
	// On success, the destination JsonObject is replaced with a clone of the header.
	// On failure—an invalid index or no protected header—the destination is left
	// unchanged. The method does not merge members.
	// 
	// Exact signed representation: The returned JSON is decoded content, not the
	// original base64url text. During creation, Chilkat preserves JSON member
	// insertion order and emits compact JSON; byte-for-byte test vectors require the
	// same member order and formatting.
	// Critical parameters: Chilkat preserves but does not process crit. Inspect and
	// enforce critical-extension and expected-algorithm policy before trusting a valid
	// signature.
	bool GetProtectedH(int index, CkJsonObject &json);


	// Returns a newly allocated clone of the decoded protected header for signature
	// index. The valid index range is 0 through 1000.
	// 
	// The returned object belongs to the caller. This method returns NULL if the index
	// is invalid or no protected header exists at that index.
	// 
	// Deprecated: Use GetProtectedH[1] to load an existing JsonObject. The protected
	// header is signed data, but its meaning should not be trusted until the
	// corresponding signature validates and application policy accepts its parameters.
	// 
	// References:
	// [1] #GetProtectedH
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *GetProtectedHeader(int index);


	// Copies the optional unprotected header of signature index into json. The valid
	// zero-based index range is 0 through 1000.
	// 
	// On success, the destination JsonObject is replaced with a clone of the header.
	// If no unprotected header exists, this method returns false as a normal absence
	// result and leaves the destination unchanged. An invalid index also returns
	// false and records an error.
	// 
	// Not signed: These members are not part of the JWS Signing Input. Chilkat does
	// not reject a member name that also appears in the protected header; protected
	// values take precedence when Chilkat looks up parameters such as alg.
	bool GetUnprotectedH(int index, CkJsonObject &json);


	// Returns a newly allocated clone of the optional unprotected header for signature
	// index. The valid index range is 0 through 1000.
	// 
	// The returned object belongs to the caller. This method returns NULL if the index
	// is invalid or no unprotected header exists at that index.
	// 
	// Deprecated and unprotected: Use GetUnprotectedH[1]. Members in this object are
	// not covered by the signature and must not be treated as trusted security
	// decisions unless independently authenticated.
	// 
	// References:
	// [1] #GetUnprotectedH
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *GetUnprotectedHeader(int index);


	// Loads a JWS from jwsStr.
	// 
	// Loads and parses a compact, flattened JSON, or general JSON JWS. Leading and
	// trailing whitespace around the complete input is accepted. Input whose first
	// non-whitespace character is {is parsed as JSON; all other input is treated as
	// compact serialization.
	// 
	// +-------------+----------------------------------------------------------------+
	// |    Form     |                       Load requirements                        |
	// +=============+================================================================+
	// | Compact     | Exactly three dot-separated parts. The protected header must   |
	// |             | base64url-decode to a JSON object. An empty payload segment is |
	// |             | allowed.                                                       |
	// +-------------+----------------------------------------------------------------+
	// | Flattened   | A top-level payload and signature are required.                |
	// | JSON        |                                                                |
	// +-------------+----------------------------------------------------------------+
	// | General     | A top-level payload and signatures array are required. Each    |
	// | JSON        | array element must contain signature . An empty array is       |
	// |             | accepted and produces NumSignatures = 0 .                      |
	// +-------------+----------------------------------------------------------------+
	// 
	// If a signatures array is present, general form takes precedence and top-level
	// flattened signature fields are ignored. Unknown top-level JSON members are
	// ignored. Structural and payload/protected-header decoding errors are detected
	// while loading; algorithm, key compatibility, and cryptographic signature checks
	// are deferred until Validate[1].
	// 
	// State replacement: Loading clears the previous payload and all protected and
	// unprotected headers before parsing, but retains MAC keys, public keys, private
	// keys, and signing certificates. A failed load does not restore the prior JWS;
	// the object is left cleared or partially populated while key material remains.
	// No detached input: The payload must be present. JSON without a payload member
	// fails, and there is no method to supply external detached content for
	// validation.
	// 
	// References:
	// [1] #Validate
	bool LoadJws(const char *jwsStr);


	// Loads a JWS from the current contents of sbJws.
	// 
	// Loads and parses a compact, flattened JSON, or general JSON JWS. Leading and
	// trailing whitespace around the complete input is accepted. Input whose first
	// non-whitespace character is {is parsed as JSON; all other input is treated as
	// compact serialization.
	// 
	// +-------------+----------------------------------------------------------------+
	// |    Form     |                       Load requirements                        |
	// +=============+================================================================+
	// | Compact     | Exactly three dot-separated parts. The protected header must   |
	// |             | base64url-decode to a JSON object. An empty payload segment is |
	// |             | allowed.                                                       |
	// +-------------+----------------------------------------------------------------+
	// | Flattened   | A top-level payload and signature are required.                |
	// | JSON        |                                                                |
	// +-------------+----------------------------------------------------------------+
	// | General     | A top-level payload and signatures array are required. Each    |
	// | JSON        | array element must contain signature . An empty array is       |
	// |             | accepted and produces NumSignatures = 0 .                      |
	// +-------------+----------------------------------------------------------------+
	// 
	// If a signatures array is present, general form takes precedence and top-level
	// flattened signature fields are ignored. Unknown top-level JSON members are
	// ignored. Structural and payload/protected-header decoding errors are detected
	// while loading; algorithm, key compatibility, and cryptographic signature checks
	// are deferred until Validate[1].
	// 
	// State replacement: Loading clears the previous payload and all protected and
	// unprotected headers before parsing, but retains MAC keys, public keys, private
	// keys, and signing certificates. A failed load does not restore the prior JWS;
	// the object is left cleared or partially populated while key material remains.
	// No detached input: The payload must be present. JSON without a payload member
	// fails, and there is no method to supply external detached content for
	// validation.
	// 
	// References:
	// [1] #Validate
	bool LoadJwsSb(CkStringBuilder &sbJws);


	// Sets the symmetric MAC key for signature index. The valid zero-based index range
	// is 0 through 1000. key is decoded using binary encoding encoding, and the resulting
	// bytes are copied.
	// 
	// This setter attaches key material but does not establish a signature slot or
	// change NumSignatures[1]. Calling it again at the same index replaces the
	// previous MAC key. A successful return means the key text decoded and was stored;
	// algorithm and key-length compatibility are checked when creating or validating.
	// 
	// +-------+--------------------------------------------+
	// |  alg  | Application-recommended minimum key length |
	// +=======+============================================+
	// | HS256 | 32 bytes                                   |
	// +-------+--------------------------------------------+
	// | HS384 | 48 bytes                                   |
	// +-------+--------------------------------------------+
	// | HS512 | 64 bytes                                   |
	// +-------+--------------------------------------------+
	// 
	// Key length is not enforced: Chilkat accepts shorter HMAC keys silently for both
	// creation and validation. The application is responsible for meeting its security
	// policy and the JOSE recommendation that the key be at least as long as the hash
	// output.
	// 
	// References:
	// [1] #NumSignatures
	bool SetMacKey(int index, const char *key, const char *encoding);


	// Sets the symmetric MAC key for signature index from a copy of the raw bytes in
	// key. The valid zero-based index range is 0 through 1000.
	// 
	// This setter does not create a signature slot. Calling it again replaces only the
	// MAC key at this index. Key length is not checked until use—and Chilkat does not
	// enforce the recommended minimum even during creation or validation.
	// 
	// +-------+--------------------------------------------+
	// |  alg  | Application-recommended minimum key length |
	// +=======+============================================+
	// | HS256 | 32 bytes                                   |
	// +-------+--------------------------------------------+
	// | HS384 | 48 bytes                                   |
	// +-------+--------------------------------------------+
	// | HS512 | 64 bytes                                   |
	// +-------+--------------------------------------------+
	// 
	// Key selection: The MAC key is used only when alg is HS256, HS384, or HS512.
	// Other key objects configured at the same index are ignored for an HMAC
	// algorithm.
	bool SetMacKeyBd(int index, CkBinData &key);


	// Replaces the current payload with payload converted to bytes using charset charset.
	// 
	// If includeBom is true, a byte-order mark is included when the charset defines one.
	// Unsupported charsets or unrepresentable text cause this method to return
	// false. The payload bytes are copied.
	// 
	// An empty string establishes a valid zero-length payload, which is equivalent to
	// having never set a payload. Chilkat always includes the base64url-encoded
	// payload in generated output.
	// 
	// JWS signs bytes: Charset and BOM choices change the exact signing input. UTF-8
	// without a BOM is normally preferred. Built-in detached payloads and RFC 7797
	// b64=false are not supported.
	bool SetPayload(const char *payload, const char *charset, bool includeBom);


	// Replaces the current JWS payload with a copy of all bytes in binData. Use this
	// method for binary data or whenever the exact byte sequence must be preserved
	// without charset conversion.
	// 
	// An empty BinData establishes a valid zero-length payload. The class does not
	// distinguish this from never having called a payload setter.
	// 
	// Attached, encoded payload: Chilkat always base64url encodes these bytes and
	// includes the resulting payload segment or JSON member. Built-in detached
	// payloads and b64=false unencoded payloads are not supported.
	bool SetPayloadBd(CkBinData &binData);


	// Replaces the current payload with the text in sbPayload, converted to bytes using
	// charset charset. The bytes are copied; the source StringBuilder does not need to
	// remain alive.
	// 
	// If includeBom is true, a byte-order mark is included when the chosen charset defines
	// one. Charset conversion failure, including unsupported charset or
	// unrepresentable text, causes this method to return false.
	// 
	// An empty input establishes a valid zero-length payload. Chilkat always base64url
	// encodes and includes the payload in the generated JWS.
	// 
	// Exact bytes are signed: The charset and BOM determine the octets covered by the
	// signature. UTF-8 without a BOM is the usual interoperable choice for textual or
	// JSON payloads. Use SetPayloadBd for exact binary bytes.
	bool SetPayloadSb(CkStringBuilder &sbPayload, const char *charset, bool includeBom);


	// Sets a private key for creating signature index. The valid zero-based index range
	// is 0 through 1000. The key is cloned, so the source object does not need to
	// remain alive.
	// 
	// This setter does not establish a signature slot. A successful return means the
	// key was accepted and copied; key type, RSA size, EC curve, and compatibility
	// with the header's alg are validated during CreateJws.
	// 
	// +----------------+-------------------------------------------------------------+
	// |   alg family   |                          Key used                           |
	// +================+=============================================================+
	// | RS256 , RS384  | RSA key; RSASSA-PKCS1-v1_5 with the corresponding SHA-2     |
	// | , RS512        | hash.                                                       |
	// +----------------+-------------------------------------------------------------+
	// | PS256 , PS384  | RSA key; RSASSA-PSS using the same hash for MGF1 and a salt |
	// | , PS512        | whose length equals the hash output length.                 |
	// +----------------+-------------------------------------------------------------+
	// | ES256          | EC key on P-256; JWS signature is the 64-byte fixed-width R |
	// |                | || S value.                                                 |
	// +----------------+-------------------------------------------------------------+
	// | ES384          | EC key on P-384; JWS signature is the 96-byte fixed-width R |
	// |                | || S value.                                                 |
	// +----------------+-------------------------------------------------------------+
	// | ES512          | EC key on P-521; JWS signature is the 132-byte fixed-width  |
	// |                | R || S value.                                               |
	// +----------------+-------------------------------------------------------------+
	// 
	// Precedence: For RSA or ECDSA signing, an explicitly set private key takes
	// precedence over a signing certificate at the same index. A public key may
	// coexist and is used only by Validate. Setting one key kind does not clear the
	// others.
	// ECDSA details: Chilkat produces JOSE fixed-width R || S signatures. It does not
	// force low-S normalization. The curve must exactly match ES256/P-256,
	// ES384/P-384, or ES512/P-521.
	bool SetPrivateKey(int index, CkPrivateKey &privKey);


	// Sets the protected JOSE header for signature index. The valid zero-based index
	// range is 0 through 1000. Setting either a protected or unprotected header
	// establishes the signature slot and can increase NumSignatures[1].
	// 
	// json is cloned; later modification or disposal of the source JsonObject does not
	// change the stored header. Calling this method again at the same index replaces
	// only that protected header. An empty object is stored as {} and still counts as
	// a configured slot.
	// 
	// During signing, Chilkat serializes the object compactly, preserving member
	// insertion order, UTF-8 encodes it, and base64url encodes the result. These exact
	// encoded bytes are included in the JWS Signing Input.
	// 
	// Where alg is found: Chilkat checks the protected header first and then the
	// unprotected header. Put alg in the protected header so the algorithm choice is
	// integrity protected. If the same name appears in both headers, Chilkat does not
	// reject the overlap; the protected value takes precedence.
	// Unsupported extensions: The crit parameter is preserved but not processed, and
	// RFC 7797 b64=false is not supported. Applications that use critical extensions
	// must inspect and enforce them independently.
	// 
	// References:
	// [1] #NumSignatures
	bool SetProtectedHeader(int index, CkJsonObject &json);


	// Sets the public key used to validate signature index. The valid zero-based index
	// range is 0 through 1000. The key is cloned, so the source object does not need
	// to remain alive.
	// 
	// This setter does not create a signature slot. Key type, RSA size, applicable
	// EC-curve requirements, and compatibility with alg are checked during Validate,
	// not by this method.
	// 
	// +----------------------+-------------------------------------------------------+
	// |      alg family      |                       Key used                        |
	// +======================+=======================================================+
	// | RS256 , RS384 ,      | RSA key; RSASSA-PKCS1-v1_5 with the corresponding     |
	// | RS512                | SHA-2 hash.                                           |
	// +----------------------+-------------------------------------------------------+
	// | PS256 , PS384 ,      | RSA key; RSASSA-PSS using the same hash for MGF1 and  |
	// | PS512                | a salt whose length equals the hash output length.    |
	// +----------------------+-------------------------------------------------------+
	// | ES256                | EC key on P-256; JWS signature is the 64-byte         |
	// |                      | fixed-width R || S value.                             |
	// +----------------------+-------------------------------------------------------+
	// | ES384                | EC key on P-384; JWS signature is the 96-byte         |
	// |                      | fixed-width R || S value.                             |
	// +----------------------+-------------------------------------------------------+
	// | ES512                | EC key on P-521; JWS signature is the 132-byte        |
	// |                      | fixed-width R || S value.                             |
	// +----------------------+-------------------------------------------------------+
	// | Other es*            | Verification only. Chilkat performs generic ECDSA     |
	// | identifiers, such as | verification using SHA-256 without enforcing a        |
	// | ES256K               | particular EC curve.                                  |
	// +----------------------+-------------------------------------------------------+
	// | Brainpool bp*        | Verification only. These are non-standard JOSE        |
	// | identifiers          | identifiers; Chilkat uses an EC key and SHA-256       |
	// |                      | without enforcing a particular curve.                 |
	// +----------------------+-------------------------------------------------------+
	// 
	// No automatic key resolution: Chilkat never resolves jku or x5u, imports an
	// embedded jwk, extracts a key from x5c, or searches a certificate store by kid.
	// The application must resolve and set the verification key at the same signature
	// index.
	// ECDSA verification: For the standard identifiers, Chilkat accepts the JOSE raw
	// fixed-width format: 64 bytes for ES256, 96 bytes for ES384, and 132 bytes for
	// ES512, with the corresponding P-256, P-384, and P-521 curve requirements. High-S
	// signatures are accepted. Other es* identifiers and Brainpool bp* identifiers are
	// handled as verification-only generic ECDSA with SHA-256 and no curve check.
	bool SetPublicKey(int index, CkPublicKey &pubKey);


	// Sets the certificate whose associated private key will be used to create
	// signature index. The valid zero-based index range is 0 through 1000. This setter
	// attaches key material but does not establish a signature slot.
	// 
	// +----------------+-------------------------------------------------------------+
	// |   alg family   |                          Key used                           |
	// +================+=============================================================+
	// | RS256 , RS384  | RSA key; RSASSA-PKCS1-v1_5 with the corresponding SHA-2     |
	// | , RS512        | hash.                                                       |
	// +----------------+-------------------------------------------------------------+
	// | PS256 , PS384  | RSA key; RSASSA-PSS using the same hash for MGF1 and a salt |
	// | , PS512        | whose length equals the hash output length.                 |
	// +----------------+-------------------------------------------------------------+
	// | ES256          | EC key on P-256; JWS signature is the 64-byte fixed-width R |
	// |                | || S value.                                                 |
	// +----------------+-------------------------------------------------------------+
	// | ES384          | EC key on P-384; JWS signature is the 96-byte fixed-width R |
	// |                | || S value.                                                 |
	// +----------------+-------------------------------------------------------------+
	// | ES512          | EC key on P-521; JWS signature is the 132-byte fixed-width  |
	// |                | R || S value.                                               |
	// +----------------+-------------------------------------------------------------+
	// 
	// If the certificate has an exportable private key, Chilkat copies the key and the
	// source certificate need not remain alive. For a non-exportable smart-card or
	// HSM-backed key, Chilkat retains the certificate and uses the platform key
	// provider during CreateJws; keep the certificate and provider available until
	// signing completes.
	// 
	// Validation is deferred: This method can return true even when no usable
	// private key is currently accessible; it logs a warning and the definitive
	// failure occurs during CreateJws. PIN prompts and provider errors also occur
	// while signing.
	// Certificate status is not checked: Chilkat does not require the certificate to
	// be trusted, unexpired, or authorized for digital signatures, and it does not
	// choose alg automatically. The application must set a compatible algorithm and
	// apply any certificate policy it requires. An explicitly configured private key
	// takes precedence over the certificate at the same index.
	bool SetSigningCert(int index, CkCert &cert);


	// Sets the optional unprotected JOSE header for signature index. The valid
	// zero-based index range is 0 through 1000. Setting either header type establishes
	// the signature slot.
	// 
	// json is cloned. Calling this method again at the same index replaces only the
	// unprotected header; it does not change the protected header or any key material.
	// An empty object is stored and is emitted as "header":{} in JSON serialization.
	// 
	// An unprotected header is emitted only in flattened or general JWS JSON
	// Serialization. It is not included in the JWS Signing Input. If compact output is
	// selected for one signature, the unprotected header is omitted; if no protected
	// header exists, compact creation fails.
	// 
	// Not integrity protected: Do not place trusted algorithm selection, authorization
	// decisions, or key-selection data solely in this header. Chilkat does not reject
	// names duplicated in the protected header; protected-header values take
	// precedence.
	bool SetUnprotectedHeader(int index, CkJsonObject &json);


	// Validates exactly one signature, identified by zero-based index, using the MAC
	// key or public key configured at that same index.
	// 
	// +----------+-------------------------------------------------------------------+
	// |  Return  |                              Meaning                              |
	// |  value   |                                                                   |
	// +==========+===================================================================+
	// | 1        | The signature or MAC is cryptographically valid for this          |
	// |          | signature index.                                                  |
	// +----------+-------------------------------------------------------------------+
	// | 0        | A well-formed signature was checked but did not match. For HMAC,  |
	// |          | a wrong key or wrong-length signature normally produces this      |
	// |          | result.                                                           |
	// +----------+-------------------------------------------------------------------+
	// | -1       | Validation could not be performed because of an error such as an  |
	// |          | invalid index, missing or unsupported alg , missing key,          |
	// |          | incompatible key type, a required curve mismatch for the standard |
	// |          | ES256 / ES384 / ES512 algorithms, a malformed signature, or an    |
	// |          | RSA/ECDSA verification error.                                     |
	// +----------+-------------------------------------------------------------------+
	// 
	// Chilkat obtains alg from the protected header first and then the unprotected
	// header. Matching is case-insensitive after trimming. If the same name is present
	// in both headers, the protected value wins; the duplicate is not rejected.
	// 
	// Verification algorithms: Validate supports HS256, HS384, HS512; RS256, RS384,
	// RS512; PS256, PS384, PS512; and ES256, ES384, ES512. Algorithm-family matching
	// is prefix-based after trimming and case normalization. Other es* identifiers,
	// such as ES256K, are treated as generic ECDSA using SHA-256 with no curve
	// restriction. Brainpool bp* identifiers are also accepted for verification using
	// an EC key and SHA-256 with no curve check; these are non-standard JOSE
	// identifiers and are not supported for signing. none is rejected. EdDSA, Ed25519,
	// Ed448, legacy SHA-1 algorithms, and names that do not begin with a recognized
	// hs, rs, ps, es, or bp prefix are rejected with -1.
	// Multiple signatures: This method does not validate all signatures automatically.
	// Loop from 0 through NumSignatures - 1, set the appropriate key at each index,
	// and apply the application's required all/any/threshold signer policy.
	// Header policy remains application-controlled: The class does not process crit or
	// enforce an expected-algorithm allowlist. A valid cryptographic result can still
	// use an algorithm or header policy unacceptable to the application. Chilkat also
	// never treats an RSA public key as an HMAC secret; HS algorithms require a
	// separately configured MAC key.
	int Validate(int index);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
