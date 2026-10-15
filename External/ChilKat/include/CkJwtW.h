// CkJwtW.h: interface for the CkJwtW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkJwtW_H
#define _CkJwtW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkCertW;
class CkPrivateKeyW;
class CkPublicKeyW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkJwtW
class CK_VISIBLE_PUBLIC CkJwtW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkJwtW(const CkJwtW &);
	CkJwtW &operator=(const CkJwtW &);

    public:
	CkJwtW(void);
	virtual ~CkJwtW(void);

	

	static CkJwtW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Controls whether Chilkat removes insignificant JSON whitespace from the header
	// and payload passed to CreateJwt and CreateJwtPk before Base64URL encoding and
	// signing. The default is true.
	// 
	// Compaction reduces token size without changing the JSON data model. Because the
	// exact header and payload bytes are part of the signing input, changing this
	// property changes the encoded token and its signature even when the JSON values
	// are equivalent.
	// 
	// Whitespace inside JSON strings is preserved: Compaction removes formatting
	// whitespace between JSON tokens; it does not remove spaces that are part of a
	// quoted string value.
	bool get_AutoCompact(void);
	// Controls whether Chilkat removes insignificant JSON whitespace from the header
	// and payload passed to CreateJwt and CreateJwtPk before Base64URL encoding and
	// signing. The default is true.
	// 
	// Compaction reduces token size without changing the JSON data model. Because the
	// exact header and payload bytes are part of the signing input, changing this
	// property changes the encoded token and its signature even when the JSON values
	// are equivalent.
	// 
	// Whitespace inside JSON strings is preserved: Compaction removes formatting
	// whitespace between JSON tokens; it does not remove spaces that are part of a
	// quoted string value.
	void put_AutoCompact(bool newVal);

	// Provides a catch-all string for specialized compatibility options that are not
	// exposed as ordinary properties. The default is the empty string, which is
	// appropriate for normal use.
	// 
	// Leave empty unless instructed: Set this property only when a Chilkat example,
	// release note, or support response documents a specific option needed for an
	// unusual interoperability case.
	void get_UncommonOptions(CkString &str);
	// Provides a catch-all string for specialized compatibility options that are not
	// exposed as ordinary properties. The default is the empty string, which is
	// appropriate for normal use.
	// 
	// Leave empty unless instructed: Set this property only when a Chilkat example,
	// release note, or support response documents a specific option needed for an
	// unusual interoperability case.
	const wchar_t *uncommonOptions(void);
	// Provides a catch-all string for specialized compatibility options that are not
	// exposed as ordinary properties. The default is the empty string, which is
	// appropriate for normal use.
	// 
	// Leave empty unless instructed: Set this property only when a Chilkat example,
	// release note, or support response documents a specific option needed for an
	// unusual interoperability case.
	void put_UncommonOptions(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Creates a signed JWT using an HMAC shared secret. header may be a complete JOSE
	// header JSON object or the shorthand HS256, HS384, or HS512. A shorthand value
	// produces a standard header containing the corresponding alg value.
	// 
	// payload is the JSON claims set. Chilkat signs the JSON supplied by the
	// application; it does not automatically add claims such as iss, sub, aud, iat,
	// nbf, or exp. password is the shared secret used by both the signer and verifier.
	// 
	// +-----------+--------------------+
	// | Algorithm |     Operation      |
	// +===========+====================+
	// | HS256     | HMAC with SHA-256. |
	// +-----------+--------------------+
	// | HS384     | HMAC with SHA-384. |
	// +-----------+--------------------+
	// | HS512     | HMAC with SHA-512. |
	// +-----------+--------------------+
	// 
	// On success, the result is a compact JWS in the form
	// base64url(header).base64url(payload).base64url(signature). The Base64URL
	// segments do not use padding.
	// 
	// Signed, not encrypted: Anyone who receives the token can decode its header and
	// payload. The HMAC protects integrity and authenticity only; do not place
	// confidential information in the claims unless the token is protected separately.
	// Shared-secret guidance: Use a high-entropy secret appropriate for the selected
	// HMAC algorithm. A human password is usually weaker than a randomly generated
	// key. Use CreateJwtPk when the trust model requires an asymmetric private key.
	bool CreateJwt(const wchar_t *header, const wchar_t *payload, const wchar_t *password, CkString &outStr);
	// Creates a signed JWT using an HMAC shared secret. header may be a complete JOSE
	// header JSON object or the shorthand HS256, HS384, or HS512. A shorthand value
	// produces a standard header containing the corresponding alg value.
	// 
	// payload is the JSON claims set. Chilkat signs the JSON supplied by the
	// application; it does not automatically add claims such as iss, sub, aud, iat,
	// nbf, or exp. password is the shared secret used by both the signer and verifier.
	// 
	// +-----------+--------------------+
	// | Algorithm |     Operation      |
	// +===========+====================+
	// | HS256     | HMAC with SHA-256. |
	// +-----------+--------------------+
	// | HS384     | HMAC with SHA-384. |
	// +-----------+--------------------+
	// | HS512     | HMAC with SHA-512. |
	// +-----------+--------------------+
	// 
	// On success, the result is a compact JWS in the form
	// base64url(header).base64url(payload).base64url(signature). The Base64URL
	// segments do not use padding.
	// 
	// Signed, not encrypted: Anyone who receives the token can decode its header and
	// payload. The HMAC protects integrity and authenticity only; do not place
	// confidential information in the claims unless the token is protected separately.
	// Shared-secret guidance: Use a high-entropy secret appropriate for the selected
	// HMAC algorithm. A human password is usually weaker than a randomly generated
	// key. Use CreateJwtPk when the trust model requires an asymmetric private key.
	const wchar_t *createJwt(const wchar_t *header, const wchar_t *payload, const wchar_t *password);

	// Creates a signed JWT using the private key associated with cert. The certificate
	// must provide access to an RSA or EC private key compatible with the alg value in
	// header.
	// 
	// header may be a complete JOSE header JSON object or the shorthand RS256, RS384,
	// RS512, PS256, PS384, PS512, ES256, ES384, or ES512. payload is the JSON claims
	// set. PS256/384/512 support was added in Chilkat v10.0.0.
	// 
	// On success, the result is a compact JWS in the form
	// base64url(header).base64url(payload).base64url(signature).
	// 
	// Private-key access is required: A certificate containing only the public key
	// cannot create a signature. Signing can also fail when the private key exists but
	// is not accessible, is nonfunctional, requires unavailable user interaction, or
	// is incompatible with the selected algorithm.
	// Certificate trust is a verifier decision: Creating a JWT with a
	// certificate-backed key does not by itself establish that recipients should trust
	// that certificate. The verifier must obtain the correct public key or certificate
	// through a trusted mechanism and apply any required certificate validation
	// policy.
	bool CreateJwtCert(const wchar_t *header, const wchar_t *payload, CkCertW &cert, CkString &outStr);
	// Creates a signed JWT using the private key associated with cert. The certificate
	// must provide access to an RSA or EC private key compatible with the alg value in
	// header.
	// 
	// header may be a complete JOSE header JSON object or the shorthand RS256, RS384,
	// RS512, PS256, PS384, PS512, ES256, ES384, or ES512. payload is the JSON claims
	// set. PS256/384/512 support was added in Chilkat v10.0.0.
	// 
	// On success, the result is a compact JWS in the form
	// base64url(header).base64url(payload).base64url(signature).
	// 
	// Private-key access is required: A certificate containing only the public key
	// cannot create a signature. Signing can also fail when the private key exists but
	// is not accessible, is nonfunctional, requires unavailable user interaction, or
	// is incompatible with the selected algorithm.
	// Certificate trust is a verifier decision: Creating a JWT with a
	// certificate-backed key does not by itself establish that recipients should trust
	// that certificate. The verifier must obtain the correct public key or certificate
	// through a trusted mechanism and apply any required certificate validation
	// policy.
	const wchar_t *createJwtCert(const wchar_t *header, const wchar_t *payload, CkCertW &cert);

	// Creates a signed JWT using an asymmetric private key. header may be a complete
	// JOSE header JSON object or one of the documented shorthand algorithm names.
	// payload is the JSON claims set, and key must be a private key compatible with
	// the selected alg.
	// 
	// +--------------------+---------------------------------------------------------+
	// |   JOSE algorithm   |            Required key and signature scheme            |
	// +====================+=========================================================+
	// | RS256 , RS384 ,    | RSA private key; RSASSA-PKCS1-v1_5 with the             |
	// | RS512              | corresponding SHA-2 digest.                             |
	// +--------------------+---------------------------------------------------------+
	// | PS256 , PS384 ,    | RSA private key; RSASSA-PSS with the corresponding      |
	// | PS512              | SHA-2 digest and MGF1.                                  |
	// +--------------------+---------------------------------------------------------+
	// | ES256 , ES384 ,    | EC private key compatible with the requested ECDSA      |
	// | ES512              | algorithm.                                              |
	// +--------------------+---------------------------------------------------------+
	// | EdDSA              | Ed25519 private key. Use a full JOSE header containing  |
	// |                    | "alg":"EdDSA" .                                         |
	// +--------------------+---------------------------------------------------------+
	// 
	// The shorthand forms documented for this method are RS256, RS384, RS512, PS256,
	// PS384, PS512, ES256, ES384, and ES512. PS256/384/512 support was added in
	// Chilkat v10.0.0; Ed25519 signing with EdDSA requires Chilkat v9.5.0.95 or later.
	// 
	// On success, the result is a compact JWS in the form
	// base64url(header).base64url(payload).base64url(signature).
	// 
	// Key compatibility: The private-key type must agree with alg. Do not select an
	// algorithm solely from untrusted input. Choose the algorithm as part of the
	// application protocol and use a key intended for that algorithm.
	// Claims remain application-defined: This method creates the cryptographic
	// signature. The application is responsible for constructing and later validating
	// issuer, audience, subject, lifetime, nonce, and other required claims.
	bool CreateJwtPk(const wchar_t *header, const wchar_t *payload, CkPrivateKeyW &key, CkString &outStr);
	// Creates a signed JWT using an asymmetric private key. header may be a complete
	// JOSE header JSON object or one of the documented shorthand algorithm names.
	// payload is the JSON claims set, and key must be a private key compatible with
	// the selected alg.
	// 
	// +--------------------+---------------------------------------------------------+
	// |   JOSE algorithm   |            Required key and signature scheme            |
	// +====================+=========================================================+
	// | RS256 , RS384 ,    | RSA private key; RSASSA-PKCS1-v1_5 with the             |
	// | RS512              | corresponding SHA-2 digest.                             |
	// +--------------------+---------------------------------------------------------+
	// | PS256 , PS384 ,    | RSA private key; RSASSA-PSS with the corresponding      |
	// | PS512              | SHA-2 digest and MGF1.                                  |
	// +--------------------+---------------------------------------------------------+
	// | ES256 , ES384 ,    | EC private key compatible with the requested ECDSA      |
	// | ES512              | algorithm.                                              |
	// +--------------------+---------------------------------------------------------+
	// | EdDSA              | Ed25519 private key. Use a full JOSE header containing  |
	// |                    | "alg":"EdDSA" .                                         |
	// +--------------------+---------------------------------------------------------+
	// 
	// The shorthand forms documented for this method are RS256, RS384, RS512, PS256,
	// PS384, PS512, ES256, ES384, and ES512. PS256/384/512 support was added in
	// Chilkat v10.0.0; Ed25519 signing with EdDSA requires Chilkat v9.5.0.95 or later.
	// 
	// On success, the result is a compact JWS in the form
	// base64url(header).base64url(payload).base64url(signature).
	// 
	// Key compatibility: The private-key type must agree with alg. Do not select an
	// algorithm solely from untrusted input. Choose the algorithm as part of the
	// application protocol and use a key intended for that algorithm.
	// Claims remain application-defined: This method creates the cryptographic
	// signature. The application is responsible for constructing and later validating
	// issuer, audience, subject, lifetime, nonce, and other required claims.
	const wchar_t *createJwtPk(const wchar_t *header, const wchar_t *payload, CkPrivateKeyW &key);

	// Returns a JWT NumericDate equal to the current system time plus numSecOffset.
	// The result is the number of whole seconds elapsed since 1970-01-01T00:00:00Z,
	// ignoring leap seconds.
	// 
	// A positive offset produces a future time and a negative offset produces a past
	// time. Typical uses include generating values for iat, nbf, and exp claims. The
	// method returns the numeric value only; it does not insert the value into a JSON
	// payload.
	// 
	// System-clock dependency: The result is based on the computer's current clock.
	// Token lifetimes and validation can be incorrect when the system clock is
	// inaccurate.
	int GenNumericDate(int numSecOffset);

	// Decodes and returns the JOSE header JSON from the first segment of the compact
	// JWT. For a token in the form header.payload.signature, this method
	// Base64URL-decodes the header segment and interprets it as JSON text.
	// 
	// No verification is performed: Decoding a header does not prove that the token is
	// authentic. Until VerifyJwt or VerifyJwtPk succeeds, treat every header
	// value—including alg, kid, jku, and x5u —as attacker-controlled input.
	// 
	// The method fails if the token does not contain a decodable compact-JWT header.
	// 
	bool GetHeader(const wchar_t *token, CkString &outStr);
	// Decodes and returns the JOSE header JSON from the first segment of the compact
	// JWT. For a token in the form header.payload.signature, this method
	// Base64URL-decodes the header segment and interprets it as JSON text.
	// 
	// No verification is performed: Decoding a header does not prove that the token is
	// authentic. Until VerifyJwt or VerifyJwtPk succeeds, treat every header
	// value—including alg, kid, jku, and x5u —as attacker-controlled input.
	// 
	// The method fails if the token does not contain a decodable compact-JWT header.
	// 
	const wchar_t *getHeader(const wchar_t *token);
	// Decodes and returns the JOSE header JSON from the first segment of the compact
	// JWT. For a token in the form header.payload.signature, this method
	// Base64URL-decodes the header segment and interprets it as JSON text.
	// 
	// No verification is performed: Decoding a header does not prove that the token is
	// authentic. Until VerifyJwt or VerifyJwtPk succeeds, treat every header
	// value—including alg, kid, jku, and x5u —as attacker-controlled input.
	// 
	// The method fails if the token does not contain a decodable compact-JWT header.
	// 
	const wchar_t *header(const wchar_t *token);

	// Decodes and returns the claims-set JSON from the second segment of the compact
	// JWT. For a token in the form header.payload.signature, this method
	// Base64URL-decodes the payload segment and returns the resulting JSON text.
	// 
	// Decoding is not validation: This method does not verify the signature, token
	// lifetime, issuer, audience, nonce, or any other claim. Use the appropriate
	// signature-verification method first, then apply the claim checks required by the
	// application.
	// 
	// The method fails if the token does not contain a decodable compact-JWT payload.
	// 
	bool GetPayload(const wchar_t *token, CkString &outStr);
	// Decodes and returns the claims-set JSON from the second segment of the compact
	// JWT. For a token in the form header.payload.signature, this method
	// Base64URL-decodes the payload segment and returns the resulting JSON text.
	// 
	// Decoding is not validation: This method does not verify the signature, token
	// lifetime, issuer, audience, nonce, or any other claim. Use the appropriate
	// signature-verification method first, then apply the claim checks required by the
	// application.
	// 
	// The method fails if the token does not contain a decodable compact-JWT payload.
	// 
	const wchar_t *getPayload(const wchar_t *token);
	// Decodes and returns the claims-set JSON from the second segment of the compact
	// JWT. For a token in the form header.payload.signature, this method
	// Base64URL-decodes the payload segment and returns the resulting JSON text.
	// 
	// Decoding is not validation: This method does not verify the signature, token
	// lifetime, issuer, audience, nonce, or any other claim. Use the appropriate
	// signature-verification method first, then apply the claim checks required by the
	// application.
	// 
	// The method fails if the token does not contain a decodable compact-JWT payload.
	// 
	const wchar_t *payload(const wchar_t *token);

	// Checks the JWT exp (expiration time) and nbf (not before) claims against the
	// current system time. It returns true when every present time constraint
	// permits the token to be used, and false when the token is expired, is not yet
	// valid, or its relevant time data cannot be processed.
	// 
	// +-------+------------------------------------------------------------+
	// | Claim |                       Validity rule                        |
	// +=======+============================================================+
	// | exp   | The token is not accepted on or after the expiration time. |
	// +-------+------------------------------------------------------------+
	// | nbf   | The token is not accepted before the not-before time.      |
	// +-------+------------------------------------------------------------+
	// 
	// leeway is a number of seconds allowed for clock skew. Keep it small; a few
	// minutes is typical. The method checks whichever of exp and nbf are present and
	// does not require either claim to exist.
	// 
	// Time checking is separate from signature verification: IsTimeValid does not
	// verify the JWT signature and does not validate iss, aud, sub, iat, jti, nonce
	// values, or application-specific claims. A normal validation workflow verifies
	// the signature, checks time constraints, and then validates all required claims.
	bool IsTimeValid(const wchar_t *jwt, int leeway);

	// Verifies the signature of a compact JWT signed with the shared secret in
	// password. This method accepts only the HMAC algorithms HS256, HS384, and HS512.
	// It rejects none and algorithms intended for asymmetric keys.
	// 
	// Chilkat reads the token's alg value, computes the corresponding HMAC over the
	// encoded header and payload, and compares the result with the signature segment.
	// The method returns true only when the signature matches.
	// 
	// Signature verification only: A successful result does not validate expiration,
	// not-before time, issuer, audience, subject, or any other claim. Call IsTimeValid
	// and perform the application's required claim checks separately.
	// Enforce the expected algorithm: Applications should inspect the verified header
	// and require the specific HMAC algorithm allowed by their protocol rather than
	// accepting any algorithm merely because this method supports it.
	bool VerifyJwt(const wchar_t *token, const wchar_t *password);

	// Verifies the signature of a compact JWT using key. The public key must match the
	// private key that created the signature and must be compatible with the algorithm
	// named by the token's alg header.
	// 
	// +-------------------+----------------------------------------------------------+
	// |  JOSE algorithm   |                     Verification key                     |
	// +===================+==========================================================+
	// | RS256 , RS384 ,   | RSA public key for RSASSA-PKCS1-v1_5.                    |
	// | RS512             |                                                          |
	// +-------------------+----------------------------------------------------------+
	// | PS256 , PS384 ,   | RSA public key for RSASSA-PSS.                           |
	// | PS512             |                                                          |
	// +-------------------+----------------------------------------------------------+
	// | ES256 , ES384 ,   | EC public key compatible with the ECDSA algorithm.       |
	// | ES512             |                                                          |
	// +-------------------+----------------------------------------------------------+
	// | EdDSA             | Ed25519 public key. Ed25519 verification requires        |
	// |                   | Chilkat v9.5.0.84 or later.                              |
	// +-------------------+----------------------------------------------------------+
	// 
	// The method returns true only when the signature is valid. It returns false
	// for a malformed token, unsupported or incompatible algorithm/key combination,
	// incorrect key, or invalid signature. The unsecured none algorithm is rejected.
	// 
	// Use a trusted key-selection process: Do not automatically trust a key URL or key
	// identifier taken from an unverified JWT header. Select the verification key from
	// trusted configuration or a securely obtained and validated key set, and enforce
	// the expected algorithm.
	// Claims are not checked: Signature validity proves only that the token was signed
	// by the holder of the corresponding private key and was not modified. Validate
	// time, issuer, audience, nonce, and all other required claims separately.
	bool VerifyJwtPk(const wchar_t *token, CkPublicKeyW &key);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
