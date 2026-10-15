// CkPublicKeyW.h: interface for the CkPublicKeyW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkPublicKeyW_H
#define _CkPublicKeyW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkByteData;
class CkBinDataW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkPublicKeyW
class CK_VISIBLE_PUBLIC CkPublicKeyW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkPublicKeyW(const CkPublicKeyW &);
	CkPublicKeyW &operator=(const CkPublicKeyW &);

    public:
	CkPublicKeyW(void);
	virtual ~CkPublicKeyW(void);

	

	static CkPublicKeyW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns true if no public key is currently loaded, and false if this object
	// contains a public key. A newly constructed PublicKey object is empty.
	// 
	// A PublicKey object holds at most one key. Every successful load replaces the
	// current key. Every failed load clears the object; a previously loaded key is
	// never preserved after a load failure.
	// 
	bool get_Empty(void);

	// Returns the key size in bits. The meaning is algorithm-specific:
	// 
	// +--------------+-----------------------------------------------------+
	// |   Key type   |                    Reported size                    |
	// +==============+=====================================================+
	// | RSA          | The bit length of the RSA modulus, such as 2048.    |
	// +--------------+-----------------------------------------------------+
	// | DSA          | The bit length of the prime parameter p .           |
	// +--------------+-----------------------------------------------------+
	// | EC           | The size of the curve field, such as 256 for P-256. |
	// +--------------+-----------------------------------------------------+
	// | Ed25519      | 256.                                                |
	// +--------------+-----------------------------------------------------+
	// | Empty object | 0.                                                  |
	// +--------------+-----------------------------------------------------+
	// 
	// Security strength: Key sizes are not directly comparable across algorithms. For
	// example, a 256-bit EC key and a 2048-bit RSA key have different encodings and
	// security characteristics.
	int get_KeySize(void);

	// Returns the type of public key currently held by this object.
	// 
	// +---------+-----------------------------------------------------------------+
	// |  Value  |                             Meaning                             |
	// +=========+=================================================================+
	// | empty   | No public key is loaded.                                        |
	// +---------+-----------------------------------------------------------------+
	// | rsa     | An RSA public key.                                              |
	// +---------+-----------------------------------------------------------------+
	// | dsa     | A DSA public key.                                               |
	// +---------+-----------------------------------------------------------------+
	// | ecc     | An elliptic-curve public key, commonly used with ECDSA or ECDH. |
	// +---------+-----------------------------------------------------------------+
	// | ed25519 | An Ed25519 public key.                                          |
	// +---------+-----------------------------------------------------------------+
	// 
	// Key type versus key format: The key type identifies the cryptographic algorithm.
	// DER, PEM, JWK, and XML are representations of the same key material, not
	// additional key types. X25519 keys are not supported by this class.
	void get_KeyType(CkString &str);
	// Returns the type of public key currently held by this object.
	// 
	// +---------+-----------------------------------------------------------------+
	// |  Value  |                             Meaning                             |
	// +=========+=================================================================+
	// | empty   | No public key is loaded.                                        |
	// +---------+-----------------------------------------------------------------+
	// | rsa     | An RSA public key.                                              |
	// +---------+-----------------------------------------------------------------+
	// | dsa     | A DSA public key.                                               |
	// +---------+-----------------------------------------------------------------+
	// | ecc     | An elliptic-curve public key, commonly used with ECDSA or ECDH. |
	// +---------+-----------------------------------------------------------------+
	// | ed25519 | An Ed25519 public key.                                          |
	// +---------+-----------------------------------------------------------------+
	// 
	// Key type versus key format: The key type identifies the cryptographic algorithm.
	// DER, PEM, JWK, and XML are representations of the same key material, not
	// additional key types. X25519 keys are not supported by this class.
	const wchar_t *keyType(void);



	// ----------------------
	// Methods
	// ----------------------
	// Returns the public key as binary DER. preferPkcs1 is a historical format-preference
	// flag whose exact effect depends on the key type:
	// 
	// +----------+--------------------------------+----------------------------------+
	// | Key type |         preferPkcs1 = true          |          preferPkcs1 = false          |
	// +==========+================================+==================================+
	// | RSA      | PKCS #1 RSAPublicKey           | X.509 SubjectPublicKeyInfo using |
	// |          | containing the modulus and     | the RSA OID 1.2.840.113549.1.1.1 |
	// |          | exponent.                      | .                                |
	// +----------+--------------------------------+----------------------------------+
	// | EC       | X.509 SubjectPublicKeyInfo     | X.509 SubjectPublicKeyInfo       |
	// |          | using a named-curve OID.       | containing explicit EC domain    |
	// |          |                                | parameters.                      |
	// +----------+--------------------------------+----------------------------------+
	// | Ed25519  | X.509 SubjectPublicKeyInfo     | The same Ed25519                 |
	// |          | using OID 1.3.101.112 .        | SubjectPublicKeyInfo             |
	// |          |                                | representation.                  |
	// +----------+--------------------------------+----------------------------------+
	// 
	// For DSA, Chilkat returns its supported DSA DER representation. The method fails
	// if this object is empty.
	// 
	// EC behavior: For EC keys, preferPkcs1 does not select PKCS #1. It selects the concise
	// named-curve encoding when true and the larger explicit-parameter encoding when
	// false.
	bool GetDer(bool preferPkcs1, CkByteData &outBytes);

	// Writes the public key as binary DER to bd. preferPkcs1 selects the representation
	// using the same RSA, EC, DSA, and Ed25519 rules described for GetDer[1].
	// 
	// bd is replaced; data already present in the BinData is not appended to. If the
	// method fails, including when this object is empty, bd is cleared.
	// 
	// Preferred binary export: Use this method instead of the legacy
	// byte-array-returning GetDer[1] when working with binary data in newer code.
	// 
	// References:
	// [1] #GetDer
	bool GetDerBd(bool preferPkcs1, CkBinDataW &bd);

	// Returns the DER representation selected by preferPkcs1, encoded as text using the
	// binary encoding named by encoding. The DER-selection rules are the same as for
	// GetDer[1].
	// 
	// +-----------------+------------------------------------------------------------+
	// |   Common encoding   |                      Output encoding                       |
	// |      value      |                                                            |
	// +=================+============================================================+
	// | base64          | Standard Base64 with no line breaks. This is the most      |
	// |                 | common choice for textual DER.                             |
	// +-----------------+------------------------------------------------------------+
	// | base64Url       | URL-safe Base64, useful when key bytes must appear in URLs |
	// |                 | or JSON-oriented protocols.                                |
	// +-----------------+------------------------------------------------------------+
	// | hex             | Uppercase hexadecimal.                                     |
	// +-----------------+------------------------------------------------------------+
	// | hexLower        | Lowercase hexadecimal.                                     |
	// +-----------------+------------------------------------------------------------+
	// 
	// Encoding names are case-insensitive. See the Chilkat Binary Encoding List[2] for
	// the complete set of supported encoding names. An empty or unsupported encoding
	// name causes the method to fail. The method also fails if this object is empty.
	// 
	// 
	// References:
	// [1] #GetDer
	// [2] https://cknotes.com/chilkat-binary-encoding-list/
	bool GetEncoded(bool preferPkcs1, const wchar_t *encoding, CkString &outStr);
	// Returns the DER representation selected by preferPkcs1, encoded as text using the
	// binary encoding named by encoding. The DER-selection rules are the same as for
	// GetDer[1].
	// 
	// +-----------------+------------------------------------------------------------+
	// |   Common encoding   |                      Output encoding                       |
	// |      value      |                                                            |
	// +=================+============================================================+
	// | base64          | Standard Base64 with no line breaks. This is the most      |
	// |                 | common choice for textual DER.                             |
	// +-----------------+------------------------------------------------------------+
	// | base64Url       | URL-safe Base64, useful when key bytes must appear in URLs |
	// |                 | or JSON-oriented protocols.                                |
	// +-----------------+------------------------------------------------------------+
	// | hex             | Uppercase hexadecimal.                                     |
	// +-----------------+------------------------------------------------------------+
	// | hexLower        | Lowercase hexadecimal.                                     |
	// +-----------------+------------------------------------------------------------+
	// 
	// Encoding names are case-insensitive. See the Chilkat Binary Encoding List[2] for
	// the complete set of supported encoding names. An empty or unsupported encoding
	// name causes the method to fail. The method also fails if this object is empty.
	// 
	// 
	// References:
	// [1] #GetDer
	// [2] https://cknotes.com/chilkat-binary-encoding-list/
	const wchar_t *getEncoded(bool preferPkcs1, const wchar_t *encoding);
	// Returns the DER representation selected by preferPkcs1, encoded as text using the
	// binary encoding named by encoding. The DER-selection rules are the same as for
	// GetDer[1].
	// 
	// +-----------------+------------------------------------------------------------+
	// |   Common encoding   |                      Output encoding                       |
	// |      value      |                                                            |
	// +=================+============================================================+
	// | base64          | Standard Base64 with no line breaks. This is the most      |
	// |                 | common choice for textual DER.                             |
	// +-----------------+------------------------------------------------------------+
	// | base64Url       | URL-safe Base64, useful when key bytes must appear in URLs |
	// |                 | or JSON-oriented protocols.                                |
	// +-----------------+------------------------------------------------------------+
	// | hex             | Uppercase hexadecimal.                                     |
	// +-----------------+------------------------------------------------------------+
	// | hexLower        | Lowercase hexadecimal.                                     |
	// +-----------------+------------------------------------------------------------+
	// 
	// Encoding names are case-insensitive. See the Chilkat Binary Encoding List[2] for
	// the complete set of supported encoding names. An empty or unsupported encoding
	// name causes the method to fail. The method also fails if this object is empty.
	// 
	// 
	// References:
	// [1] #GetDer
	// [2] https://cknotes.com/chilkat-binary-encoding-list/
	const wchar_t *encoded(bool preferPkcs1, const wchar_t *encoding);

	// Returns the public key as a compact JWK (JSON Web Key). Binary values use
	// Base64url encoding without padding. Repeated calls for the same key produce the
	// same compact member order.
	// 
	// RSA:
	// 
	// {"kty":"RSA","n":"BASE64URL_MODULUS","e":"BASE64URL_EXPONENT"}
	// 
	// EC:
	// 
	// {"kty":"EC","crv":"P-256","x":"BASE64URL_X","y":"BASE64URL_Y"}
	// 
	// Ed25519:
	// 
	// {"kty":"OKP","crv":"Ed25519","x":"BASE64URL_PUBLIC_KEY"}
	// 
	// Only public key parameters are emitted. Private members and optional JWK
	// metadata are not included. The method fails if this object is empty or if the
	// loaded key type cannot be represented as a supported JWK.
	// 
	// RSA exponent: The value AQAB commonly represents exponent 65537, but the actual
	// exponent from the loaded RSA key is exported.
	bool GetJwk(CkString &outStr);
	// Returns the public key as a compact JWK (JSON Web Key). Binary values use
	// Base64url encoding without padding. Repeated calls for the same key produce the
	// same compact member order.
	// 
	// RSA:
	// 
	// {"kty":"RSA","n":"BASE64URL_MODULUS","e":"BASE64URL_EXPONENT"}
	// 
	// EC:
	// 
	// {"kty":"EC","crv":"P-256","x":"BASE64URL_X","y":"BASE64URL_Y"}
	// 
	// Ed25519:
	// 
	// {"kty":"OKP","crv":"Ed25519","x":"BASE64URL_PUBLIC_KEY"}
	// 
	// Only public key parameters are emitted. Private members and optional JWK
	// metadata are not included. The method fails if this object is empty or if the
	// loaded key type cannot be represented as a supported JWK.
	// 
	// RSA exponent: The value AQAB commonly represents exponent 65537, but the actual
	// exponent from the loaded RSA key is exported.
	const wchar_t *getJwk(void);
	// Returns the public key as a compact JWK (JSON Web Key). Binary values use
	// Base64url encoding without padding. Repeated calls for the same key produce the
	// same compact member order.
	// 
	// RSA:
	// 
	// {"kty":"RSA","n":"BASE64URL_MODULUS","e":"BASE64URL_EXPONENT"}
	// 
	// EC:
	// 
	// {"kty":"EC","crv":"P-256","x":"BASE64URL_X","y":"BASE64URL_Y"}
	// 
	// Ed25519:
	// 
	// {"kty":"OKP","crv":"Ed25519","x":"BASE64URL_PUBLIC_KEY"}
	// 
	// Only public key parameters are emitted. Private members and optional JWK
	// metadata are not included. The method fails if this object is empty or if the
	// loaded key type cannot be represented as a supported JWK.
	// 
	// RSA exponent: The value AQAB commonly represents exponent 65537, but the actual
	// exponent from the loaded RSA key is exported.
	const wchar_t *jwk(void);

	// Returns the RFC 7638 JWK thumbprint for this public key. Chilkat constructs the
	// required canonical JSON object from the public JWK members, hashes its UTF-8
	// representation using the algorithm named by hashAlg, and returns the digest using
	// Base64url encoding without padding.
	// 
	// Accepted algorithm names are md5, sha1, sha256, sha384, and sha512. Names are
	// case-insensitive. An empty or unsupported algorithm name causes the method to
	// fail. sha256 is the conventional choice for RFC 7638 thumbprints.
	// 
	// The method fails if this object is empty or if the key cannot be represented as
	// a supported JWK.
	// 
	// Not a certificate thumbprint: A JWK thumbprint identifies public key parameters.
	// An X.509 certificate fingerprint hashes the complete DER-encoded certificate and
	// is therefore a different value.
	bool GetJwkThumbprint(const wchar_t *hashAlg, CkString &outStr);
	// Returns the RFC 7638 JWK thumbprint for this public key. Chilkat constructs the
	// required canonical JSON object from the public JWK members, hashes its UTF-8
	// representation using the algorithm named by hashAlg, and returns the digest using
	// Base64url encoding without padding.
	// 
	// Accepted algorithm names are md5, sha1, sha256, sha384, and sha512. Names are
	// case-insensitive. An empty or unsupported algorithm name causes the method to
	// fail. sha256 is the conventional choice for RFC 7638 thumbprints.
	// 
	// The method fails if this object is empty or if the key cannot be represented as
	// a supported JWK.
	// 
	// Not a certificate thumbprint: A JWK thumbprint identifies public key parameters.
	// An X.509 certificate fingerprint hashes the complete DER-encoded certificate and
	// is therefore a different value.
	const wchar_t *getJwkThumbprint(const wchar_t *hashAlg);
	// Returns the RFC 7638 JWK thumbprint for this public key. Chilkat constructs the
	// required canonical JSON object from the public JWK members, hashes its UTF-8
	// representation using the algorithm named by hashAlg, and returns the digest using
	// Base64url encoding without padding.
	// 
	// Accepted algorithm names are md5, sha1, sha256, sha384, and sha512. Names are
	// case-insensitive. An empty or unsupported algorithm name causes the method to
	// fail. sha256 is the conventional choice for RFC 7638 thumbprints.
	// 
	// The method fails if this object is empty or if the key cannot be represented as
	// a supported JWK.
	// 
	// Not a certificate thumbprint: A JWK thumbprint identifies public key parameters.
	// An X.509 certificate fingerprint hashes the complete DER-encoded certificate and
	// is therefore a different value.
	const wchar_t *jwkThumbprint(const wchar_t *hashAlg);

	// Returns the public key in PEM format. preferPkcs1 selects the underlying DER
	// representation as follows:
	// 
	// +----------+------------------------------+------------------------------------+
	// | Key type |        preferPkcs1 = true         |           preferPkcs1 = false           |
	// +==========+==============================+====================================+
	// | RSA      | RSA PUBLIC KEY , containing  | PUBLIC KEY , containing X.509      |
	// |          | PKCS #1 RSAPublicKey .       | SubjectPublicKeyInfo .             |
	// +----------+------------------------------+------------------------------------+
	// | EC       | PUBLIC KEY with named-curve  | PUBLIC KEY with explicit EC domain |
	// |          | parameters.                  | parameters.                        |
	// +----------+------------------------------+------------------------------------+
	// | Ed25519  | PUBLIC KEY .                 | The same PUBLIC KEY                |
	// |          |                              | representation.                    |
	// +----------+------------------------------+------------------------------------+
	// 
	// PEM output uses CRLF line endings, Base64 body lines of at most 64 characters,
	// and a final CRLF after the closing boundary line. The method fails if this
	// object is empty.
	// 
	// PEM is DER plus text armor: The Base64 body contains the DER representation
	// selected by preferPkcs1. The boundary label identifies the enclosed structure.
	bool GetPem(bool preferPkcs1, CkString &outStr);
	// Returns the public key in PEM format. preferPkcs1 selects the underlying DER
	// representation as follows:
	// 
	// +----------+------------------------------+------------------------------------+
	// | Key type |        preferPkcs1 = true         |           preferPkcs1 = false           |
	// +==========+==============================+====================================+
	// | RSA      | RSA PUBLIC KEY , containing  | PUBLIC KEY , containing X.509      |
	// |          | PKCS #1 RSAPublicKey .       | SubjectPublicKeyInfo .             |
	// +----------+------------------------------+------------------------------------+
	// | EC       | PUBLIC KEY with named-curve  | PUBLIC KEY with explicit EC domain |
	// |          | parameters.                  | parameters.                        |
	// +----------+------------------------------+------------------------------------+
	// | Ed25519  | PUBLIC KEY .                 | The same PUBLIC KEY                |
	// |          |                              | representation.                    |
	// +----------+------------------------------+------------------------------------+
	// 
	// PEM output uses CRLF line endings, Base64 body lines of at most 64 characters,
	// and a final CRLF after the closing boundary line. The method fails if this
	// object is empty.
	// 
	// PEM is DER plus text armor: The Base64 body contains the DER representation
	// selected by preferPkcs1. The boundary label identifies the enclosed structure.
	const wchar_t *getPem(bool preferPkcs1);
	// Returns the public key in PEM format. preferPkcs1 selects the underlying DER
	// representation as follows:
	// 
	// +----------+------------------------------+------------------------------------+
	// | Key type |        preferPkcs1 = true         |           preferPkcs1 = false           |
	// +==========+==============================+====================================+
	// | RSA      | RSA PUBLIC KEY , containing  | PUBLIC KEY , containing X.509      |
	// |          | PKCS #1 RSAPublicKey .       | SubjectPublicKeyInfo .             |
	// +----------+------------------------------+------------------------------------+
	// | EC       | PUBLIC KEY with named-curve  | PUBLIC KEY with explicit EC domain |
	// |          | parameters.                  | parameters.                        |
	// +----------+------------------------------+------------------------------------+
	// | Ed25519  | PUBLIC KEY .                 | The same PUBLIC KEY                |
	// |          |                              | representation.                    |
	// +----------+------------------------------+------------------------------------+
	// 
	// PEM output uses CRLF line endings, Base64 body lines of at most 64 characters,
	// and a final CRLF after the closing boundary line. The method fails if this
	// object is empty.
	// 
	// PEM is DER plus text armor: The Base64 body contains the DER representation
	// selected by preferPkcs1. The boundary label identifies the enclosed structure.
	const wchar_t *pem(bool preferPkcs1);

	// Returns the public key in Chilkat XML format. The exact representation depends
	// on the key type.
	// 
	// RSA:
	// 
	// <RSAPublicKey><Modulus>BASE64_MODULUS</Modulus><Exponent>
	// BASE64_EXPONENT</Exponent></RSAPublicKey>
	// 
	// DSA:
	// 
	// <DSAPublicKey>
	//   <P>BASE64_P</P>
	//   <Q>BASE64_Q</Q>
	//   <G>BASE64_G</G>
	//   <Y>BASE64_Y</Y>
	// </DSAPublicKey>
	// 
	// EC:
	// 
	// <ECCPublicKey curve="secp256r1" x="UPPERCASE_HEX_X"
	// y="UPPERCASE_HEX_Y">BASE64_DER</ECCPublicKey>
	// 
	// For EC keys, the curve attribute contains the Chilkat curve name, the x and y
	// attributes contain full-width uppercase hexadecimal coordinates, and the element
	// text contains a Base64-encoded DER public-key structure with explicit curve
	// parameters.
	// 
	// Ed25519:
	// 
	// <Ed25519PublicKey>BASE64_32_BYTE_PUBLIC_KEY</Ed25519PublicKey>
	// 
	// The returned XML can be loaded by LoadFromString[1], LoadFromFile[2], or
	// LoadBd[3]. The method fails if this object is empty.
	// 
	// Interoperability note: These XML forms are Chilkat representations. For
	// interchange with non-Chilkat systems, PEM, DER, or JWK is usually preferable.
	// 
	// References:
	// [1] #LoadFromString
	// [2] #LoadFromFile
	// [3] #LoadBd
	bool GetXml(CkString &outStr);
	// Returns the public key in Chilkat XML format. The exact representation depends
	// on the key type.
	// 
	// RSA:
	// 
	// <RSAPublicKey><Modulus>BASE64_MODULUS</Modulus><Exponent>
	// BASE64_EXPONENT</Exponent></RSAPublicKey>
	// 
	// DSA:
	// 
	// <DSAPublicKey>
	//   <P>BASE64_P</P>
	//   <Q>BASE64_Q</Q>
	//   <G>BASE64_G</G>
	//   <Y>BASE64_Y</Y>
	// </DSAPublicKey>
	// 
	// EC:
	// 
	// <ECCPublicKey curve="secp256r1" x="UPPERCASE_HEX_X"
	// y="UPPERCASE_HEX_Y">BASE64_DER</ECCPublicKey>
	// 
	// For EC keys, the curve attribute contains the Chilkat curve name, the x and y
	// attributes contain full-width uppercase hexadecimal coordinates, and the element
	// text contains a Base64-encoded DER public-key structure with explicit curve
	// parameters.
	// 
	// Ed25519:
	// 
	// <Ed25519PublicKey>BASE64_32_BYTE_PUBLIC_KEY</Ed25519PublicKey>
	// 
	// The returned XML can be loaded by LoadFromString[1], LoadFromFile[2], or
	// LoadBd[3]. The method fails if this object is empty.
	// 
	// Interoperability note: These XML forms are Chilkat representations. For
	// interchange with non-Chilkat systems, PEM, DER, or JWK is usually preferable.
	// 
	// References:
	// [1] #LoadFromString
	// [2] #LoadFromFile
	// [3] #LoadBd
	const wchar_t *getXml(void);
	// Returns the public key in Chilkat XML format. The exact representation depends
	// on the key type.
	// 
	// RSA:
	// 
	// <RSAPublicKey><Modulus>BASE64_MODULUS</Modulus><Exponent>
	// BASE64_EXPONENT</Exponent></RSAPublicKey>
	// 
	// DSA:
	// 
	// <DSAPublicKey>
	//   <P>BASE64_P</P>
	//   <Q>BASE64_Q</Q>
	//   <G>BASE64_G</G>
	//   <Y>BASE64_Y</Y>
	// </DSAPublicKey>
	// 
	// EC:
	// 
	// <ECCPublicKey curve="secp256r1" x="UPPERCASE_HEX_X"
	// y="UPPERCASE_HEX_Y">BASE64_DER</ECCPublicKey>
	// 
	// For EC keys, the curve attribute contains the Chilkat curve name, the x and y
	// attributes contain full-width uppercase hexadecimal coordinates, and the element
	// text contains a Base64-encoded DER public-key structure with explicit curve
	// parameters.
	// 
	// Ed25519:
	// 
	// <Ed25519PublicKey>BASE64_32_BYTE_PUBLIC_KEY</Ed25519PublicKey>
	// 
	// The returned XML can be loaded by LoadFromString[1], LoadFromFile[2], or
	// LoadBd[3]. The method fails if this object is empty.
	// 
	// Interoperability note: These XML forms are Chilkat representations. For
	// interchange with non-Chilkat systems, PEM, DER, or JWK is usually preferable.
	// 
	// References:
	// [1] #LoadFromString
	// [2] #LoadFromFile
	// [3] #LoadBd
	const wchar_t *xml(void);

	// Loads a public key from standard Base64-encoded DER in keyStr. Whitespace within
	// the Base64 text is permitted. The decoded DER is inspected to determine the key
	// type and structure. For RSA, both PKCS #1 RSAPublicKey and X.509
	// SubjectPublicKeyInfo are recognized.
	// 
	// A complete PEM string is also accepted, including its BEGIN / END boundary
	// lines. Base64url text, arbitrary non-PEM text surrounding the encoded data,
	// X.509 certificates, and encrypted private keys are not accepted.
	// 
	// A successful load replaces the current key. A failed load clears this object.
	// 
	// Certificates and encrypted private keys: Direct X.509 certificate input is not
	// supported. Load a certificate with a Cert object and obtain its public key from
	// the certificate. Encrypted private-key input is also not supported by this
	// class; load and decrypt it with a PrivateKey object, then obtain the
	// corresponding public key.
	// DER terminology: The general X.509 public-key wrapper is SubjectPublicKeyInfo.
	// It is sometimes informally called a “PKCS #8 public key,” although PKCS #8
	// formally defines private-key syntax.
	bool LoadBase64(const wchar_t *keyStr);

	// Loads a public key from the data in bd. The BinData may contain binary DER or
	// any textual representation recognized by LoadFromString[1], including PEM,
	// Chilkat XML, JWK, standard Base64 DER, and supported RFC 4716 SSH2 public-key
	// blocks.
	// 
	// Public keys and unencrypted private keys are accepted; when private-key material
	// is supplied, only the public portion is retained. For binary DER, the first
	// recognized DER object is loaded and trailing bytes are ignored. Hex-encoded DER,
	// Base64url-encoded DER, one-line OpenSSH public keys, X.509 certificates, and
	// encrypted private keys are not recognized.
	// 
	// JWK required-member and metadata behavior is the same as described for
	// LoadFromString[1]. A successful load replaces the current key. A failed load
	// clears this object.
	// 
	// Certificates and encrypted private keys: Direct X.509 certificate input is not
	// supported. Load a certificate with a Cert object and obtain its public key from
	// the certificate. Encrypted private-key input is also not supported by this
	// class; load and decrypt it with a PrivateKey object, then obtain the
	// corresponding public key.
	// Recommended general-purpose loader: Use this method when the key data may be
	// binary or text, or when the precise representation is not known in advance.
	// 
	// References:
	// [1] #LoadFromString
	bool LoadBd(CkBinDataW &bd);

	// Loads an elliptic-curve public key directly from its affine point coordinates.
	// curveName names the curve, Qx is the hexadecimal x-coordinate (Qx), and Qy is the
	// hexadecimal y-coordinate (Qy).
	// 
	// The coordinate strings must contain exactly the full field width for the
	// selected curve. Uppercase and lowercase hexadecimal are accepted. A 0x prefix,
	// whitespace, separators, extra leading zero bytes, shortened coordinates,
	// non-hexadecimal characters, empty values, and all-zero coordinates are rejected.
	// Curve names are case-insensitive.
	// 
	// +-----------------+--------------------------------------------------+
	// | Supported curve |             Description and aliases              |
	// +=================+==================================================+
	// | secp256r1       | NIST P-256; also known as P-256 and prime256v1 . |
	// +-----------------+--------------------------------------------------+
	// | secp384r1       | NIST P-384; also known as P-384 .                |
	// +-----------------+--------------------------------------------------+
	// | secp521r1       | NIST P-521; also known as P-521 .                |
	// +-----------------+--------------------------------------------------+
	// | secp256k1       | The 256-bit Koblitz curve used by Bitcoin.       |
	// +-----------------+--------------------------------------------------+
	// | secp192r1       | 192-bit SEC/NIST curve.                          |
	// +-----------------+--------------------------------------------------+
	// | secp224r1       | 224-bit SEC/NIST curve.                          |
	// +-----------------+--------------------------------------------------+
	// | brainpoolP160r1 | 160-bit Brainpool curve.                         |
	// +-----------------+--------------------------------------------------+
	// | brainpoolP192r1 | 192-bit Brainpool curve.                         |
	// +-----------------+--------------------------------------------------+
	// | brainpoolP224r1 | 224-bit Brainpool curve.                         |
	// +-----------------+--------------------------------------------------+
	// | brainpoolP256r1 | 256-bit Brainpool curve.                         |
	// +-----------------+--------------------------------------------------+
	// | brainpoolP320r1 | 320-bit Brainpool curve.                         |
	// +-----------------+--------------------------------------------------+
	// | brainpoolP384r1 | 384-bit Brainpool curve.                         |
	// +-----------------+--------------------------------------------------+
	// | brainpoolP512r1 | 512-bit Brainpool curve.                         |
	// +-----------------+--------------------------------------------------+
	// 
	// A successful load replaces the current key. A failed load clears this object.
	// The method validates syntax, coordinate width, and obvious zero values, but it
	// does not fully verify that the supplied coordinates form a point on the named
	// curve.
	// 
	// Raw coordinates versus encoded keys: Use this method only when the curve name
	// and separate x/y coordinates are already available. For DER, PEM, JWK, XML, or
	// other complete key representations, use LoadBd[1], LoadFromString[2], or
	// LoadFromFile[3].
	// 
	// References:
	// [1] #LoadBd
	// [2] #LoadFromString
	// [3] #LoadFromFile
	bool LoadEcdsa(const wchar_t *curveName, const wchar_t *Qx, const wchar_t *Qy);

	// Loads a raw Ed25519 public key from the hexadecimal string in pubKey. pubKey must
	// contain exactly 64 hexadecimal characters representing 32 bytes. Uppercase and
	// lowercase hexadecimal are accepted.
	// 
	// A 0x prefix, whitespace, separators, non-hexadecimal characters, odd-length
	// input, and values shorter or longer than 32 bytes are rejected. A successful
	// load replaces the current key; a failed load clears this object.
	// 
	// This method validates the hexadecimal syntax and exact byte count. It does not
	// determine whether every 32-byte value is a usable Ed25519 public point; for
	// example, an all-zero 32-byte value is accepted.
	// 
	// Ed25519 is not X25519: Ed25519 is a signature system and X25519 is a
	// key-agreement system. Their public keys are not interchangeable, and X25519 keys
	// are not supported by this class.
	bool LoadEd25519(const wchar_t *pubKey);

	// Loads a public key from binary DER in keyBytes. The DER structure and key type are
	// detected automatically. Public-key DER and unencrypted private-key DER are
	// accepted; when private-key material is supplied, only the public portion is
	// retained.
	// 
	// For RSA, both PKCS #1 RSAPublicKey and X.509 SubjectPublicKeyInfo are
	// recognized. The loader parses the first recognized DER object and ignores
	// trailing bytes, including a second concatenated DER object.
	// 
	// A successful load replaces the current key. A failed load clears this object.
	// 
	// Certificates and encrypted private keys: Direct X.509 certificate input is not
	// supported. Load a certificate with a Cert object and obtain its public key from
	// the certificate. Encrypted private-key input is also not supported by this
	// class; load and decrypt it with a PrivateKey object, then obtain the
	// corresponding public key.
	// Preferred API: This byte-array method is retained for compatibility. New
	// applications should generally place the data in a BinData object and call
	// LoadBd[1].
	// 
	// References:
	// [1] #LoadBd
	bool LoadFromBinary(CkByteData &keyBytes);

	// Loads a public key from the local filesystem path specified by path. Chilkat
	// examines the file contents rather than the filename extension. Supported content
	// includes binary DER, PEM, Chilkat XML, JWK, standard Base64 DER, and RFC 4716
	// SSH2 public-key blocks for supported RSA and Ed25519 keys.
	// 
	// Public keys and unencrypted private keys are accepted. When private-key material
	// is supplied, only the public portion is retained. Hex-encoded DER,
	// Base64url-encoded DER, one-line OpenSSH public keys, X.509 certificates, and
	// encrypted private keys are not recognized.
	// 
	// For PEM files, UTF-8 BOMs, CRLF or LF line endings, surrounding text, and
	// unrelated PEM blocks are tolerated. If multiple recognized key blocks are
	// present, the first recognized key is loaded. For binary DER, the first
	// recognized DER object is loaded and trailing bytes are ignored.
	// 
	// JWK required-member and metadata behavior is the same as described for
	// LoadFromString[1]. A successful load replaces the current key. A failed load
	// clears this object.
	// 
	// Certificates and encrypted private keys: Direct X.509 certificate input is not
	// supported. Load a certificate with a Cert object and obtain its public key from
	// the certificate. Encrypted private-key input is also not supported by this
	// class; load and decrypt it with a PrivateKey object, then obtain the
	// corresponding public key.
	// 
	// References:
	// [1] #LoadFromString
	bool LoadFromFile(const wchar_t *path);

	// Loads a public key from the string in keyString. Chilkat examines the content and
	// recognizes these textual representations:
	//     * PEM public keys.
	//     * Unencrypted PEM private keys, from which only the public portion is
	//     retained.
	//     * Chilkat XML public or private keys.
	//     * Public or private JWK.
	//     * Standard Base64-encoded DER.
	//     * RFC 4716 SSH2 public-key blocks for supported RSA and Ed25519 keys.
	// 
	// Hex-encoded DER, Base64url-encoded DER, one-line OpenSSH forms such as ssh-rsa
	// ... and ssh-ed25519 ..., X.509 certificates, and encrypted private keys are not
	// recognized.
	// 
	// For PEM input, UTF-8 BOMs, CRLF or LF line endings, leading and trailing
	// whitespace, unrelated surrounding text, and unrelated PEM blocks are tolerated.
	// If multiple recognized key blocks are present, the first recognized key is
	// loaded.
	// 
	// For JWK input, required public members must be present. Private members such as
	// d may be present but are discarded. Optional metadata such as kid, use, alg,
	// key_ops, and x5c is not retained.
	// 
	// +----------+-----------------------------+
	// | Key type |   Required public members   |
	// +==========+=============================+
	// | RSA      | kty , n , and a nonzero e . |
	// +----------+-----------------------------+
	// | EC       | kty , crv , x , and y .     |
	// +----------+-----------------------------+
	// | Ed25519  | kty , crv , and x .         |
	// +----------+-----------------------------+
	// 
	// A successful load replaces the current key. A failed load clears this object.
	// 
	// Certificates and encrypted private keys: Direct X.509 certificate input is not
	// supported. Load a certificate with a Cert object and obtain its public key from
	// the certificate. Encrypted private-key input is also not supported by this
	// class; load and decrypt it with a PrivateKey object, then obtain the
	// corresponding public key.
	// Validation scope: JWK loading validates the required structure and basic values,
	// but it does not prove that supplied EC or Ed25519 public bytes are
	// mathematically valid or trusted.
	bool LoadFromString(const wchar_t *keyString);

	// Saves the public key to path as binary DER. preferPkcs1 selects the representation
	// using the same RSA, EC, and Ed25519 rules described for GetDer[1].
	// 
	// An existing destination file is overwritten. Parent directories are not created
	// automatically. The method fails if path names a directory. If this object is
	// empty, the method fails without creating the file.
	// 
	// Windows read-only files: An existing read-only destination may be replaced; the
	// resulting file is not left with the read-only attribute.
	// 
	// References:
	// [1] #GetDer
	bool SaveDerFile(bool preferPkcs1, const wchar_t *path);

	// Saves the public key to path in PEM format. preferPkcs1 selects the representation and
	// PEM label using the same rules described for GetPem[1].
	// 
	// The generated file uses CRLF line endings, Base64 body lines of at most 64
	// characters, and a final CRLF. An existing destination file is overwritten. If
	// this object is empty, the method fails without creating the file.
	// 
	// 
	// References:
	// [1] #GetPem
	bool SavePemFile(bool preferPkcs1, const wchar_t *path);

	// Saves the public key to the local filesystem path specified by path using
	// exactly the same key-type-specific XML text returned by GetXml[1]. No additional
	// BOM or line ending is added.
	// 
	// An existing destination file is overwritten. If this object is empty, the method
	// fails without creating the destination file.
	// 
	// Choosing a file format: Use XML when another Chilkat application will read the
	// key. For broader interoperability, PEM or DER is usually a better choice.
	// 
	// References:
	// [1] #GetXml
	bool SaveXmlFile(const wchar_t *path);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
