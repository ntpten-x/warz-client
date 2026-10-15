// CkJweW.h: interface for the CkJweW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkJweW_H
#define _CkJweW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkBinDataW;
class CkStringBuilderW;
class CkJsonObjectW;
class CkPrivateKeyW;
class CkPublicKeyW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkJweW
class CK_VISIBLE_PUBLIC CkJweW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkJweW(const CkJweW &);
	CkJweW &operator=(const CkJweW &);

    public:
	CkJweW(void);
	virtual ~CkJweW(void);

	

	static CkJweW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the number of recipients in the loaded JWE or in the JWE currently being
	// configured. Recipient indexes are zero-based and must be in the range 0 through
	// 1000.
	// 
	// +-----------------+------------------------------------------------------------+
	// |  Object state   |                How the count is determined                 |
	// +=================+============================================================+
	// | After LoadJwe   | Returns 1 for compact or flattened serialization, or the   |
	// | or LoadJweSb    | number of elements in the general JSON recipients array.   |
	// +-----------------+------------------------------------------------------------+
	// | Before          | Returns one more than the highest index having a public    |
	// | encryption      | key, wrapping key, or password, with a minimum value of 1  |
	// |                 | . Private keys and recipient headers do not increase the   |
	// |                 | create-mode count.                                         |
	// +-----------------+------------------------------------------------------------+
	// 
	// Indexes may be configured in any order, but encryption processes every recipient
	// from index 0 through NumRecipients - 1. For example, setting only a public key
	// at index 2 implies three recipients; encryption then fails for indexes 0 and 1
	// because they are not fully configured. In practice, configure a contiguous range
	// beginning at 0.
	// 
	// No recipient removal method: Re-setting an indexed key, password, or header
	// replaces only that value. There is no method to remove an individual configured
	// recipient, so use a fresh Jwe object for an unrelated recipient set.
	int get_NumRecipients(void);

	// Controls whether encryption prefers JWE Compact Serialization. The default is
	// true.
	// 
	// +-------------------------------------+----------------------------------------+
	// |            Configuration            |         Serialization selected         |
	// +=====================================+========================================+
	// | More than one recipient             | General JWE JSON Serialization,        |
	// |                                     | regardless of this property.           |
	// +-------------------------------------+----------------------------------------+
	// | One recipient, PreferCompact =      | Compact Serialization.                 |
	// | true, and no shared unprotected   |                                        |
	// | header                              |                                        |
	// +-------------------------------------+----------------------------------------+
	// | One recipient and PreferCompact =   | A JSON serialization; PreferFlattened  |
	// | false                             | chooses flattened or general form.     |
	// +-------------------------------------+----------------------------------------+
	// | One recipient with a shared         | A JSON serialization because compact   |
	// | unprotected header, even an empty   | form cannot carry the unprotected      |
	// | one                                 | member.                                |
	// +-------------------------------------+----------------------------------------+
	// 
	// A per-recipient header by itself does not prevent compact output. If compact
	// form is selected, that header is not included. Set this property to false when
	// a single-recipient per-recipient header must be emitted.
	// 
	// AAD and compact form: Setting AAD does not itself force JSON output. If compact
	// serialization is selected, the configured AAD is ignored and Chilkat logs a
	// warning. Set PreferCompact to false when AAD must be carried and
	// authenticated.
	bool get_PreferCompact(void);
	// Controls whether encryption prefers JWE Compact Serialization. The default is
	// true.
	// 
	// +-------------------------------------+----------------------------------------+
	// |            Configuration            |         Serialization selected         |
	// +=====================================+========================================+
	// | More than one recipient             | General JWE JSON Serialization,        |
	// |                                     | regardless of this property.           |
	// +-------------------------------------+----------------------------------------+
	// | One recipient, PreferCompact =      | Compact Serialization.                 |
	// | true, and no shared unprotected   |                                        |
	// | header                              |                                        |
	// +-------------------------------------+----------------------------------------+
	// | One recipient and PreferCompact =   | A JSON serialization; PreferFlattened  |
	// | false                             | chooses flattened or general form.     |
	// +-------------------------------------+----------------------------------------+
	// | One recipient with a shared         | A JSON serialization because compact   |
	// | unprotected header, even an empty   | form cannot carry the unprotected      |
	// | one                                 | member.                                |
	// +-------------------------------------+----------------------------------------+
	// 
	// A per-recipient header by itself does not prevent compact output. If compact
	// form is selected, that header is not included. Set this property to false when
	// a single-recipient per-recipient header must be emitted.
	// 
	// AAD and compact form: Setting AAD does not itself force JSON output. If compact
	// serialization is selected, the configured AAD is ignored and Chilkat logs a
	// warning. Set PreferCompact to false when AAD must be carried and
	// authenticated.
	void put_PreferCompact(bool newVal);

	// Controls which JWE JSON Serialization is produced for a single recipient. The
	// default is true. It has no effect when compact form is selected or when
	// multiple recipients require general JSON.
	// 
	// +----------------------------------+-------------------------------------------+
	// |            Condition             |                  Result                   |
	// +==================================+===========================================+
	// | One recipient, JSON required,    | Flattened JWE JSON Serialization.         |
	// | and this property is true      |                                           |
	// +----------------------------------+-------------------------------------------+
	// | One recipient, JSON required,    | General JWE JSON Serialization containing |
	// | and this property is false     | a one-element recipients array.           |
	// +----------------------------------+-------------------------------------------+
	// | More than one recipient          | General JWE JSON Serialization.           |
	// +----------------------------------+-------------------------------------------+
	// 
	// To force general JSON for a single recipient, set both PreferCompact and
	// PreferFlattened to false.
	// 
	// Empty header objects: A shared protected header is emitted only when it contains
	// members. A shared unprotected header is emitted whenever it has been set, even
	// when empty. A configured per-recipient header is also emitted in JSON form even
	// when empty.
	bool get_PreferFlattened(void);
	// Controls which JWE JSON Serialization is produced for a single recipient. The
	// default is true. It has no effect when compact form is selected or when
	// multiple recipients require general JSON.
	// 
	// +----------------------------------+-------------------------------------------+
	// |            Condition             |                  Result                   |
	// +==================================+===========================================+
	// | One recipient, JSON required,    | Flattened JWE JSON Serialization.         |
	// | and this property is true      |                                           |
	// +----------------------------------+-------------------------------------------+
	// | One recipient, JSON required,    | General JWE JSON Serialization containing |
	// | and this property is false     | a one-element recipients array.           |
	// +----------------------------------+-------------------------------------------+
	// | More than one recipient          | General JWE JSON Serialization.           |
	// +----------------------------------+-------------------------------------------+
	// 
	// To force general JSON for a single recipient, set both PreferCompact and
	// PreferFlattened to false.
	// 
	// Empty header objects: A shared protected header is emitted only when it contains
	// members. A shared unprotected header is emitted whenever it has been set, even
	// when empty. A configured per-recipient header is also emitted in JSON form even
	// when empty.
	void put_PreferFlattened(bool newVal);

	// Provides a catch-all string for specialized compatibility options that are not
	// exposed as ordinary properties. The default is the empty string, which is
	// appropriate for normal JWE creation and decryption.
	// 
	// No public keywords documented: This reference does not currently define any
	// public Jwe.UncommonOptions keywords. Leave the property empty unless a Chilkat
	// release note, example, or support response provides the exact option name,
	// syntax, and intended use.
	void get_UncommonOptions(CkString &str);
	// Provides a catch-all string for specialized compatibility options that are not
	// exposed as ordinary properties. The default is the empty string, which is
	// appropriate for normal JWE creation and decryption.
	// 
	// No public keywords documented: This reference does not currently define any
	// public Jwe.UncommonOptions keywords. Leave the property empty unless a Chilkat
	// release note, example, or support response provides the exact option name,
	// syntax, and intended use.
	const wchar_t *uncommonOptions(void);
	// Provides a catch-all string for specialized compatibility options that are not
	// exposed as ordinary properties. The default is the empty string, which is
	// appropriate for normal JWE creation and decryption.
	// 
	// No public keywords documented: This reference does not currently define any
	// public Jwe.UncommonOptions keywords. Leave the property empty unless a Chilkat
	// release note, example, or support response provides the exact option name,
	// syntax, and intended use.
	void put_UncommonOptions(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Decrypts recipient index from the currently loaded JWE and returns the plaintext
	// decoded using charset charset. The valid recipient index range is 0 through
	// NumRecipients - 1.
	// 
	//     1. Call LoadJwe or LoadJweSb.
	//     2. Inspect headers and select an acceptable recipient and algorithm under
	//     application policy.
	//     3. Set the required private key, wrapping key, or password at the same
	//     index.
	//     4. Call this method.
	// 
	// Loaded AAD is used automatically. Authentication is completed before plaintext
	// is returned. For zip: DEF, decompression occurs only after successful
	// authentication, and no partial decompressed output is returned.
	// 
	// Charset errors: Charset conversion errors cause Decrypt to fail.
	bool Decrypt(int index, const wchar_t *charset, CkString &outStr);
	// Decrypts recipient index from the currently loaded JWE and returns the plaintext
	// decoded using charset charset. The valid recipient index range is 0 through
	// NumRecipients - 1.
	// 
	//     1. Call LoadJwe or LoadJweSb.
	//     2. Inspect headers and select an acceptable recipient and algorithm under
	//     application policy.
	//     3. Set the required private key, wrapping key, or password at the same
	//     index.
	//     4. Call this method.
	// 
	// Loaded AAD is used automatically. Authentication is completed before plaintext
	// is returned. For zip: DEF, decompression occurs only after successful
	// authentication, and no partial decompressed output is returned.
	// 
	// Charset errors: Charset conversion errors cause Decrypt to fail.
	const wchar_t *decrypt(int index, const wchar_t *charset);

	// Decrypts recipient index and appends the authenticated plaintext bytes to bd.
	// No character-set conversion is performed. Loaded AAD is used automatically, and
	// zip: DEF is decompressed only after authentication succeeds.
	// 
	// Atomic destination behavior: On success, plaintext bytes are appended and
	// existing bytes are preserved. On failure, bd is left unchanged; no partial or
	// unauthenticated plaintext is delivered.
	bool DecryptBd(int index, CkBinDataW &bd);

	// Decrypts recipient index, authenticates the JWE, decodes the plaintext bytes
	// using charset charset, and appends the resulting text to contentSb. Loaded AAD is used
	// automatically, and zip: DEF is decompressed only after authentication succeeds.
	// 
	// Atomic destination behavior: On success, plaintext is appended and existing text
	// is preserved. On failure, contentSb is left unchanged; no unauthenticated or
	// partially decoded plaintext is delivered.
	// Charset handling: Invalid byte sequences for charset cause failure. Use DecryptBd
	// for raw binary plaintext.
	bool DecryptSb(int index, const wchar_t *charset, CkStringBuilderW &contentSb);

	// Encrypts content and returns the resulting compact, flattened JSON, or general JSON
	// JWE. content is converted to bytes using charset charset. If the text cannot be
	// represented in that charset, the method fails.
	// 
	// Before calling this method, configure the protected header and each recipient's
	// required public key, wrapping key, or password. The selected alg and enc values
	// determine the required key type and length; final compatibility checks occur
	// during this call. Chilkat generates the content-encryption IV automatically: 12
	// bytes for AES-GCM content encryption and 16 bytes for AES-CBC-HMAC content
	// encryption.
	// 
	// Serialization is selected by NumRecipients, PreferCompact, PreferFlattened, and
	// whether a shared unprotected header is present. A single per-recipient header is
	// omitted if compact serialization is selected. Configured AAD is also ignored in
	// compact form and causes a warning.
	// 
	// Generated state persists: Encryption replaces any previously loaded JWE and can
	// add epk, AES-GCM wrapping iv / tag, and other generated parameters to the stored
	// headers. Use a fresh object or reset headers for independent operations,
	// especially to prevent AES-GCM wrapping-IV reuse.
	// Compression and extensions: zip: DEF compresses before encryption. Unknown zip
	// values are ignored. The class does not enforce crit; applications must apply any
	// critical-extension policy themselves.
	bool Encrypt(const wchar_t *content, const wchar_t *charset, CkString &outStr);
	// Encrypts content and returns the resulting compact, flattened JSON, or general JSON
	// JWE. content is converted to bytes using charset charset. If the text cannot be
	// represented in that charset, the method fails.
	// 
	// Before calling this method, configure the protected header and each recipient's
	// required public key, wrapping key, or password. The selected alg and enc values
	// determine the required key type and length; final compatibility checks occur
	// during this call. Chilkat generates the content-encryption IV automatically: 12
	// bytes for AES-GCM content encryption and 16 bytes for AES-CBC-HMAC content
	// encryption.
	// 
	// Serialization is selected by NumRecipients, PreferCompact, PreferFlattened, and
	// whether a shared unprotected header is present. A single per-recipient header is
	// omitted if compact serialization is selected. Configured AAD is also ignored in
	// compact form and causes a warning.
	// 
	// Generated state persists: Encryption replaces any previously loaded JWE and can
	// add epk, AES-GCM wrapping iv / tag, and other generated parameters to the stored
	// headers. Use a fresh object or reset headers for independent operations,
	// especially to prevent AES-GCM wrapping-IV reuse.
	// Compression and extensions: zip: DEF compresses before encryption. Unknown zip
	// values are ignored. The class does not enforce crit; applications must apply any
	// critical-extension policy themselves.
	const wchar_t *encrypt(const wchar_t *content, const wchar_t *charset);

	// Encrypts the exact bytes in contentBd and appends the resulting JWE text to jweSb. No
	// character-set conversion is performed, making this the appropriate method for
	// arbitrary binary content.
	// 
	// The same recipient configuration, serialization-selection, AAD, compression, and
	// generated-header rules described for Encrypt apply.
	// 
	// Failure behavior: Check the true/false return before using jweSb. A failure
	// does not append a partial JWE.
	bool EncryptBd(CkBinDataW &contentBd, CkStringBuilderW &jweSb);

	// Encodes the text in contentSb using charset charset, encrypts it, and appends the
	// resulting JWE text to jweSb. Existing text in jweSb is preserved. If the input
	// contains characters that cannot be represented in charset, the call fails.
	// 
	// The same recipient configuration, serialization-selection, AAD, compression, and
	// generated-header rules described for Encrypt apply.
	// 
	// Failure behavior: Check the true/false return before using jweSb. A failure
	// does not append a partial JWE.
	bool EncryptSb(CkStringBuilderW &contentSb, const wchar_t *charset, CkStringBuilderW &jweSb);

	// Searches only the per-recipient unprotected headers for a member named paramName
	// whose string value equals paramValue. caseSensitive controls whether both the member-name and
	// value comparisons are case-sensitive.
	// 
	// Returns the zero-based index of the first matching recipient, or -1 when no
	// match is found. A value of -1 is also returned when the object cannot be
	// searched; treat it simply as “no matching recipient found.” The protected and
	// shared unprotected headers are not searched.
	// 
	// A common use is to load a JWE, find a recipient by kid, set the corresponding
	// key or password at the returned index, and decrypt using that same index.
	// 
	// Routing only: Per-recipient headers are unprotected and attacker-controlled.
	// Validate acceptable key identifiers and algorithms under application policy, and
	// trust the result only after authenticated decryption succeeds.
	int FindRecipient(const wchar_t *paramName, const wchar_t *paramValue, bool caseSensitive);

	// Copies the entire currently loaded JWE structure into json as a JSON object.
	// This is the full JWE representation, not a decoded or merged JOSE header.
	// 
	// The object can contain protected in its original base64url-encoded form,
	// unprotected, header, recipients, encrypted_key, iv, ciphertext, tag, aad, and
	// any retained unknown top-level members. A JWE originally loaded from compact
	// form is also exposed in this JSON-object representation.
	// 
	// On success, json is overwritten. The method requires a loaded JWE; on failure,
	// json is left unchanged. Use GetProtectedHeader to obtain the decoded
	// protected-header JSON.
	// 
	// No effective-header merge: This method does not decode protected and does not
	// combine protected, shared unprotected, and per-recipient members. Applications
	// must inspect the relevant objects explicitly.
	bool GetHeader(CkJsonObjectW &json);

	// Copies the decoded shared JWE Protected Header into json. Only the protected
	// header is returned; it is not merged with the shared unprotected header or any
	// per-recipient header.
	// 
	// The method succeeds after a protected header was configured with
	// SetProtectedHeader, or after a JWE containing a protected header was loaded. On
	// success json is overwritten; on failure it is left unchanged.
	// 
	// Use this method to inspect alg, enc, zip, crit, and other protected parameters
	// before choosing a key or applying application policy.
	// 
	// Authentication timing: The header can be decoded before a key is supplied, but
	// its integrity is established only when authenticated decryption succeeds. The
	// Jwe class does not enforce crit; applications requiring critical-extension
	// processing must do so themselves.
	bool GetProtectedHeader(CkJsonObjectW &json);

	// Loads jwe as JWE Compact Serialization, Flattened JWE JSON Serialization, or
	// General JWE JSON Serialization. Loading parses structure and headers but does
	// not decrypt, authenticate, or apply application algorithm policy.
	// 
	// +-----------------------------+------------------------------------------------+
	// |         Input rule          |                    Behavior                    |
	// +=============================+================================================+
	// | Leading or trailing         | Trimmed before format detection.               |
	// | whitespace                  |                                                |
	// +-----------------------------+------------------------------------------------+
	// | First non-whitespace        | Parsed as flattened or general JSON.           |
	// | character is {{             |                                                |
	// +-----------------------------+------------------------------------------------+
	// | Other input                 | Treated as compact serialization and required  |
	// |                             | to contain exactly five dot-separated          |
	// |                             | segments.                                      |
	// +-----------------------------+------------------------------------------------+
	// | Empty compact encrypted_key | Accepted, as required by dir and direct        |
	// | segment                     | ECDH-ES .                                      |
	// +-----------------------------+------------------------------------------------+
	// | Protected header            | Base64url-decoded and parsed as UTF-8 JSON     |
	// |                             | during loading. Invalid protected-header       |
	// |                             | encoding or JSON causes failure.               |
	// +-----------------------------+------------------------------------------------+
	// | General JSON with top-level | The recipients array takes precedence;         |
	// | flattened recipient members | top-level header and encrypted_key are         |
	// |                             | ignored.                                       |
	// +-----------------------------+------------------------------------------------+
	// | Unknown top-level members   | Retained and visible through GetHeader , but   |
	// |                             | otherwise ignored.                             |
	// +-----------------------------+------------------------------------------------+
	// 
	// Most semantic checks are deferred until decryption, including presence and
	// support of alg / enc, key compatibility, PBES2 parameter validity, and decoding
	// or length checks for iv, tag, ciphertext, and encrypted_key.
	// 
	// State replacement: Every load attempt discards the previous loaded JWE and
	// clears configured protected, shared unprotected, recipient-header, and AAD
	// state. A failed load does not restore the prior message. Public keys, private
	// keys, wrapping keys, and passwords are not cleared. The normal decrypt sequence
	// is therefore: load first, then set the selected recipient key, then decrypt.
	// Parsing details: Padding, alternate Base64 alphabets, line breaks, and duplicate
	// JSON member names follow Chilkat's underlying JSON and base64url decoders when
	// each value is used. Malformed values generally fail during decryption if they
	// were not needed during initial loading.
	// No authentication yet: Headers and kid values are attacker-controlled until
	// authenticated decryption succeeds. Apply an algorithm and key-selection
	// allowlist before decrypting untrusted input.
	bool LoadJwe(const wchar_t *jwe);

	// Loads the complete JWE text in sb. It accepts compact, flattened JSON, or
	// general JSON serialization and otherwise follows all parsing, state-replacement,
	// deferred-validation, and security behavior documented for LoadJwe.
	// 
	// The source StringBuilder is read during the call and does not need to remain
	// alive afterward.
	// 
	bool LoadJweSb(CkStringBuilderW &sb);

	// Sets external Additional Authenticated Data (AAD) for a JWE being encrypted.
	// aad is encoded using charset charset, and the resulting bytes replace any
	// previously configured AAD. Chilkat copies the bytes. Passing an empty string
	// clears AAD. If encoding or another validation step fails, the previous AAD
	// remains unchanged.
	// 
	// In JSON serialization, AAD is base64url-encoded into the top-level aad member
	// and included in the authentication calculation. It is visible but cannot be
	// modified without causing authentication failure.
	// 
	// Compact serialization: AAD does not force JSON serialization. If compact form is
	// selected, Chilkat ignores the configured AAD and logs a warning. Set
	// PreferCompact to false when AAD must be emitted.
	// Decryption: After loading a JSON JWE, Chilkat automatically uses its serialized
	// aad value. Do not call this method merely to repeat AAD before decryption.
	// Exact bytes: Character encoding is part of the AAD definition. Use SetAadBd when
	// the protocol defines exact binary AAD.
	bool SetAad(const wchar_t *aad, const wchar_t *charset);

	// Sets external Additional Authenticated Data (AAD) to the exact bytes in aad.
	// Chilkat copies the bytes, replacing previous AAD. Passing empty BinData clears
	// AAD and causes no aad member to be emitted. If the setter fails, the previous
	// AAD remains unchanged.
	// 
	// In JSON serialization, the bytes are base64url-encoded into the top-level aad
	// member and authenticated without being encrypted.
	// 
	// Compact serialization: AAD does not force JSON output. If compact form is
	// selected, the configured AAD is ignored and a warning is logged. Set
	// PreferCompact to false when AAD is required.
	// Decryption: A loaded JSON JWE supplies its own AAD automatically; do not set it
	// again before decrypting.
	bool SetAadBd(CkBinDataW &aad);

	// Sets the PBES2 password for recipient index. The valid index range is 0 through
	// 1000. Chilkat converts password to UTF-8, copies it, and replaces only the password
	// at that index.
	// 
	// Use this method with PBES2-HS256+A128KW, PBES2-HS384+A192KW, or
	// PBES2-HS512+A256KW. The applicable header must also contain:
	// 
	// +-----------+------------------------------------------------------------------+
	// |  Header   |                           Requirement                            |
	// |  member   |                                                                  |
	// +===========+==================================================================+
	// | p2s       | Base64url-encoded salt. Chilkat does not generate it, impose a   |
	// |           | minimum length, or detect reuse. Generate a fresh random salt of |
	// |           | at least 8 bytes for each encryption.                            |
	// +-----------+------------------------------------------------------------------+
	// | p2c       | A JSON integer or quoted numeric string from 1 through 999000 .  |
	// |           | Chilkat does not generate it.                                    |
	// +-----------+------------------------------------------------------------------+
	// 
	// The parameters may be in the protected header or the recipient header. A
	// recipient-header value takes precedence over a shared value. Missing or invalid
	// values are detected during encryption or decryption, not by this setter or by
	// LoadJwe. If this setter fails, the previously stored password remains unchanged.
	// 
	// Cost policy: The built-in maximum is 999,000 iterations. Applications accepting
	// untrusted JWEs should still apply their own acceptable p2c range before
	// decryption.
	// Recipient indexing: Passwords contribute to create-mode NumRecipients. Configure
	// a contiguous recipient range beginning at index 0.
	bool SetPassword(int index, const wchar_t *password);

	// Sets the private key used to decrypt recipient index. The valid index range is 0
	// through 1000. Chilkat copies privKey and releases any previously stored private key
	// at that index; the source object may be discarded after this call.
	// 
	// +----------------+-------------------------------------------------------------+
	// |    Key type    |                    Applicable alg values                    |
	// +================+=============================================================+
	// | RSA private    | RSA1_5 , RSA-OAEP , RSA-OAEP-256 , RSA-OAEP-384 , and       |
	// | key            | RSA-OAEP-512 .                                              |
	// +----------------+-------------------------------------------------------------+
	// | EC private key | ECDH-ES and the ECDH-ES+A128KW , +A192KW , and +A256KW      |
	// |                | variants.                                                   |
	// +----------------+-------------------------------------------------------------+
	// 
	// Call LoadJwe first, then set the private key for the selected recipient index,
	// and finally call a decryption method with the same index. Loading does not clear
	// previously stored keys, so explicitly overwrite keys when reusing the object for
	// unrelated messages.
	// 
	// Validation timing: A true return means the key was copied and stored.
	// RSA-versus-EC type, curve, key size, and compatibility with the loaded alg are
	// validated during decryption, not by this setter. If the setter fails, the
	// previously stored key remains unchanged.
	// RSA-OAEP-256 compatibility: During decryption, Chilkat includes a fallback for
	// tokens produced by older Chilkat versions that labeled the algorithm
	// RSA-OAEP-256 while using SHA-1 for the mask-generation function.
	// Recipient count: Private keys are decryption state and do not increase
	// create-mode NumRecipients.
	bool SetPrivateKey(int index, CkPrivateKeyW &privKey);

	// Sets the shared JWE Protected Header from json. Chilkat copies the source
	// JsonObject, replacing the previously configured protected header only if the
	// call succeeds. The caller does not need to keep json alive or call this method
	// again after modifying the original object.
	// 
	// The protected header is serialized as UTF-8 and base64url-encoded. It is
	// visible, but its encoded form is included in the authenticated data, so any
	// modification causes authenticated decryption to fail.
	// 
	// +----------------------------------+-------------------------------------------+
	// |           JWE pattern            |           Recommended placement           |
	// +==================================+===========================================+
	// | Single-recipient compact JWE     | Place alg and enc here.                   |
	// +----------------------------------+-------------------------------------------+
	// | Single-recipient JSON JWE        | Normally place alg and enc here.          |
	// +----------------------------------+-------------------------------------------+
	// | Multiple recipients using        | Place the shared enc here and each        |
	// | different key-management         | recipient-specific alg in its             |
	// | algorithms                       | per-recipient header.                     |
	// +----------------------------------+-------------------------------------------+
	// | Multiple recipients using one    | The common alg may be placed here.        |
	// | common alg                       |                                           |
	// +----------------------------------+-------------------------------------------+
	// 
	//     * For PBES2, p2s and p2c may be placed here or in the applicable recipient
	//     header.
	//     * For ECDH-ES encryption, a protected header must be configured. Chilkat
	//     generates a fresh ephemeral EC key and writes its public JWK to epk.
	//     Optional apu and apv values must be supplied here as base64url strings.
	//     * For single-recipient compact AES-GCM key wrapping, Chilkat writes the
	//     wrapping iv and tag here. In JSON serialization they are written to the
	//     recipient header instead.
	//     * zip: DEF enables DEFLATE compression. Other zip values are ignored.
	// Object reuse: Encryption can add generated members such as ECDH epk or AES-GCM
	// key-wrap iv / tag to the stored headers. These values remain for later calls.
	// Reusing an existing AES-GCM wrapping IV with the same key is unsafe; use a fresh
	// Jwe object or reset the headers for each independent encryption.
	// Critical extensions: The Jwe class does not enforce crit. Applications that
	// accept critical JOSE extensions must inspect this header and reject unsupported
	// entries before trusting the decrypted content.
	bool SetProtectedHeader(CkJsonObjectW &json);

	// Sets the public key used to encrypt for recipient index. The valid index range is
	// 0 through 1000. Chilkat copies pubKey and replaces only the public key at that
	// index; the source object need not remain alive.
	// 
	// +---------------+--------------------------------------------------------------+
	// |   Key type    |                    Applicable alg values                     |
	// +===============+==============================================================+
	// | RSA public    | RSA1_5 , RSA-OAEP , RSA-OAEP-256 , RSA-OAEP-384 , and        |
	// | key           | RSA-OAEP-512 .                                               |
	// +---------------+--------------------------------------------------------------+
	// | EC public key | ECDH-ES and the ECDH-ES+A128KW , +A192KW , and +A256KW       |
	// |               | variants.                                                    |
	// +---------------+--------------------------------------------------------------+
	// 
	// For ECDH-ES, Chilkat generates a fresh ephemeral key pair for each encryption on
	// the same curve as the recipient key and writes the generated public key to
	// protected-header epk. If an epk object was preconfigured, only its crv value is
	// used as a curve-name hint; Chilkat replaces its kty, x, and y values.
	// 
	// NIST P-256, P-384, P-521, and supported Brainpool EC keys can be used. X25519 is
	// not supported by this JWE ECDH-ES implementation. ECDH-ES, including its +A*KW
	// variants, should be used with a single recipient.
	// 
	// Validation timing: A true result means the key was copied. Key type, size,
	// curve, and alg compatibility are checked when Encrypt, EncryptSb, or EncryptBd
	// runs. If the setter fails, the previously stored key remains unchanged.
	// Algorithm names: RSA-OAEP-384 and RSA-OAEP-512 are Chilkat extensions beyond the
	// base JOSE algorithm set; confirm peer interoperability before selecting them.
	// Recipient indexing: Public keys contribute to create-mode NumRecipients.
	// Configure a contiguous range beginning at index 0; skipped lower indexes cause
	// encryption to attempt incomplete recipients and fail.
	bool SetPublicKey(int index, CkPublicKeyW &pubKey);

	// Sets the per-recipient unprotected header for zero-based recipient index index.
	// The valid index range is 0 through 1000. Chilkat copies json, and calling this
	// method again at the same index replaces only that recipient header.
	// 
	// In flattened JSON this becomes the top-level header member. In general JSON it
	// becomes the header member of the corresponding element in the recipients array.
	// An empty object is retained and emitted as "header":{}; it does not remove the
	// recipient, and no recipient-removal method exists.
	// 
	// Typical members include kid, recipient-specific alg, PBES2 p2s / p2c, or AES-GCM
	// key-wrap iv / tag. Use the same index with the appropriate key or password
	// setter.
	// 
	// Compact serialization: A per-recipient header alone does not force JSON output.
	// If compact serialization is selected for a single recipient, this header is
	// omitted. Set PreferCompact to false when it must be serialized.
	// Recipient counting: Before encryption, NumRecipients is determined by configured
	// public keys, wrapping keys, and passwords. A recipient header by itself does not
	// increase that count.
	// Not authenticated: Per-recipient headers are unprotected. Treat values such as
	// kid as routing hints and accept them only under application policy and after
	// authenticated decryption succeeds.
	bool SetRecipientHeader(int index, CkJsonObjectW &json);

	// Sets the shared JWE Unprotected Header from json. Chilkat copies the source
	// JsonObject; a successful call replaces the previous shared unprotected header,
	// while a failed call preserves it.
	// 
	// The header applies to every recipient and can be represented only by JWE JSON
	// Serialization. Setting it forces JSON output even when json is empty, in which
	// case the output contains "unprotected":{}.
	// 
	// Not authenticated: This header is neither encrypted nor integrity-protected. Do
	// not place algorithm-policy, identity, authorization, or trusted key-location
	// decisions here unless the application independently validates them.
	// Loading a JWE: LoadJwe and LoadJweSb discard this configured header and replace
	// all header state with the loaded message.
	bool SetUnprotectedHeader(CkJsonObjectW &json);

	// Sets the symmetric key for recipient index. encodedKey contains the key bytes encoded
	// according to encoding, such as hex or base64. The valid index range is 0 through
	// 1000.
	// 
	// Chilkat decodes and copies the key. A decoding failure returns false and
	// leaves the previous key at that index unchanged. Algorithm-specific key length
	// is validated during encryption or decryption.
	// 
	// +------------------------+---------------------+
	// |    Algorithm family    | Required key length |
	// +========================+=====================+
	// | A128KW or A128GCMKW    | 16 bytes            |
	// +------------------------+---------------------+
	// | A192KW or A192GCMKW    | 24 bytes            |
	// +------------------------+---------------------+
	// | A256KW or A256GCMKW    | 32 bytes            |
	// +------------------------+---------------------+
	// | dir with A128GCM       | 16 bytes            |
	// +------------------------+---------------------+
	// | dir with A192GCM       | 24 bytes            |
	// +------------------------+---------------------+
	// | dir with A256GCM       | 32 bytes            |
	// +------------------------+---------------------+
	// | dir with A128CBC-HS256 | 32 bytes            |
	// +------------------------+---------------------+
	// | dir with A192CBC-HS384 | 48 bytes            |
	// +------------------------+---------------------+
	// | dir with A256CBC-HS512 | 64 bytes            |
	// +------------------------+---------------------+
	// 
	// For dir, set the direct content-encryption key at index 0. Direct encryption
	// uses one shared key and is intended for a single recipient.
	// 
	// AES-GCM key wrapping: For A128GCMKW, A192GCMKW, and A256GCMKW, Chilkat normally
	// generates the required 12-byte wrapping IV and computes the 16-byte tag. A
	// pre-set iv is used as-is and must decode to exactly 12 bytes. A pre-set tag is
	// replaced by the computed tag. Compact output stores these values in the
	// protected header; JSON output stores them in the recipient header. During
	// decryption, the IV may be read from the recipient or a shared header; the tag is
	// read from the recipient header, with the shared protected header also consulted
	// for recipient index 0. Both values are required.
	// Never reuse a wrapping IV: Generated AES-GCM wrapping parameters remain in the
	// stored headers after encryption. Reusing the object can therefore reuse an
	// existing IV. Use a fresh object or reset the headers before each independent
	// AES-GCM key-wrap encryption.
	// Recipient indexing: Wrapping keys contribute to create-mode NumRecipients.
	// Configure every index from 0 through the highest index used.
	bool SetWrappingKey(int index, const wchar_t *encodedKey, const wchar_t *encoding);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
