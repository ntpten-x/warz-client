// CkPrivateKey.h: interface for the CkPrivateKey class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkPrivateKey_H
#define _CkPrivateKey_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkByteData;
class CkBinData;
class CkPublicKey;
class CkStringBuilder;
class CkTask;
class CkJsonObject;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkPrivateKey
class CK_VISIBLE_PUBLIC CkPrivateKey  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkPrivateKey(const CkPrivateKey &);
	CkPrivateKey &operator=(const CkPrivateKey &);

    public:
	CkPrivateKey(void);
	virtual ~CkPrivateKey(void);

	static CkPrivateKey *createNew(void);
	static CkPrivateKey *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	CkBaseProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the nominal size of the loaded private key, in bits. The value is 0 when
	// the object is empty. For RSA it is the modulus size; for DSA it is the size of
	// p; for EC it is the named-curve field size; and for Ed25519 it is 256.
	// Comparing strength: Bit lengths are meaningful only within the context of the
	// algorithm. A 256-bit EC key and a 256-bit RSA key do not provide comparable
	// security.
	int get_BitLength(void);

	// Identifies the algorithm of the currently loaded key. The value is one of empty,
	// rsa, dsa, ecc, or ed25519. empty means that no usable private key is loaded.
	// One-key state model: A PrivateKey object holds one current key. Loading another
	// key replaces it; a failed load leaves the object empty.
	void get_KeyType(CkString &str);
	// Identifies the algorithm of the currently loaded key. The value is one of empty,
	// rsa, dsa, ecc, or ed25519. empty means that no usable private key is loaded.
	// One-key state model: A PrivateKey object holds one current key. Loading another
	// key replaces it; a failed load leaves the object empty.
	const char *keyType(void);

	// Controls the block cipher used by encrypted PKCS #8 export methods. Supported
	// values are 3des, aes128, aes192, and aes256. Values are case-insensitive and are
	// normalized to lowercase. The default is 3des. Assigning an empty or unrecognized
	// value resets the property to 3des. All choices use CBC mode.
	// 
	// Encrypted PKCS #8 output uses PBES2 with PBKDF2. The generated parameters use an
	// 8-byte salt, 2048 PBKDF2 iterations, and the default PBKDF2 PRF (HMAC-SHA-1).
	// The selected cipher uses CBC mode with a newly generated IV.
	// 
	// Recommended setting: Prefer aes256 for new output unless an older consumer
	// requires 3DES. This property selects encryption parameters only; password
	// quality remains essential.
	void get_Pkcs8EncryptAlg(CkString &str);
	// Controls the block cipher used by encrypted PKCS #8 export methods. Supported
	// values are 3des, aes128, aes192, and aes256. Values are case-insensitive and are
	// normalized to lowercase. The default is 3des. Assigning an empty or unrecognized
	// value resets the property to 3des. All choices use CBC mode.
	// 
	// Encrypted PKCS #8 output uses PBES2 with PBKDF2. The generated parameters use an
	// 8-byte salt, 2048 PBKDF2 iterations, and the default PBKDF2 PRF (HMAC-SHA-1).
	// The selected cipher uses CBC mode with a newly generated IV.
	// 
	// Recommended setting: Prefer aes256 for new output unless an older consumer
	// requires 3DES. This property selects encryption parameters only; password
	// quality remains essential.
	const char *pkcs8EncryptAlg(void);
	// Controls the block cipher used by encrypted PKCS #8 export methods. Supported
	// values are 3des, aes128, aes192, and aes256. Values are case-insensitive and are
	// normalized to lowercase. The default is 3des. Assigning an empty or unrecognized
	// value resets the property to 3des. All choices use CBC mode.
	// 
	// Encrypted PKCS #8 output uses PBES2 with PBKDF2. The generated parameters use an
	// 8-byte salt, 2048 PBKDF2 iterations, and the default PBKDF2 PRF (HMAC-SHA-1).
	// The selected cipher uses CBC mode with a newly generated IV.
	// 
	// Recommended setting: Prefer aes256 for new output unless an older consumer
	// requires 3DES. This property selects encryption parameters only; password
	// quality remains essential.
	void put_Pkcs8EncryptAlg(const char *newVal);

	// Provides a catch-all string for specialized compatibility options that are not
	// exposed as ordinary properties. The default is the empty string, which is
	// appropriate for normal use.
	// Leave empty unless instructed: Set this property only when a Chilkat example,
	// release note, or support response documents a specific option needed for an
	// unusual interoperability case.
	void get_UncommonOptions(CkString &str);
	// Provides a catch-all string for specialized compatibility options that are not
	// exposed as ordinary properties. The default is the empty string, which is
	// appropriate for normal use.
	// Leave empty unless instructed: Set this property only when a Chilkat example,
	// release note, or support response documents a specific option needed for an
	// unusual interoperability case.
	const char *uncommonOptions(void);
	// Provides a catch-all string for specialized compatibility options that are not
	// exposed as ordinary properties. The default is the empty string, which is
	// appropriate for normal use.
	// Leave empty unless instructed: Set this property only when a Chilkat example,
	// release note, or support response documents a specific option needed for an
	// unusual interoperability case.
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Exports the key as a compact JWK (JSON Web Key). Binary integers and byte
	// strings use Base64url without padding.
	// 
	// +----------+---------------------------------------------------+
	// | Key type |                  Members emitted                  |
	// +==========+===================================================+
	// | RSA      | kty , n , e , d , p , q , dp , dq , qi            |
	// +----------+---------------------------------------------------+
	// | EC       | kty , crv , x , y , d                             |
	// +----------+---------------------------------------------------+
	// | Ed25519  | kty = OKP , crv = Ed25519 , x , d , and use = sig |
	// +----------+---------------------------------------------------+
	// 
	// Key material only: Optional JOSE metadata loaded from a JWK, such as kid, alg,
	// key_ops, or a caller-supplied use, is not retained for re-export. The Ed25519
	// use = sig member is emitted by Chilkat.
	// Private output: The returned JSON contains private key material and must be
	// protected accordingly.
	bool GetJwk(CkString &outStr);

	// Exports the key as a compact JWK (JSON Web Key). Binary integers and byte
	// strings use Base64url without padding.
	// 
	// +----------+---------------------------------------------------+
	// | Key type |                  Members emitted                  |
	// +==========+===================================================+
	// | RSA      | kty , n , e , d , p , q , dp , dq , qi            |
	// +----------+---------------------------------------------------+
	// | EC       | kty , crv , x , y , d                             |
	// +----------+---------------------------------------------------+
	// | Ed25519  | kty = OKP , crv = Ed25519 , x , d , and use = sig |
	// +----------+---------------------------------------------------+
	// 
	// Key material only: Optional JOSE metadata loaded from a JWK, such as kid, alg,
	// key_ops, or a caller-supplied use, is not retained for re-export. The Ed25519
	// use = sig member is emitted by Chilkat.
	// Private output: The returned JSON contains private key material and must be
	// protected accordingly.
	const char *getJwk(void);
	// Exports the key as a compact JWK (JSON Web Key). Binary integers and byte
	// strings use Base64url without padding.
	// 
	// +----------+---------------------------------------------------+
	// | Key type |                  Members emitted                  |
	// +==========+===================================================+
	// | RSA      | kty , n , e , d , p , q , dp , dq , qi            |
	// +----------+---------------------------------------------------+
	// | EC       | kty , crv , x , y , d                             |
	// +----------+---------------------------------------------------+
	// | Ed25519  | kty = OKP , crv = Ed25519 , x , d , and use = sig |
	// +----------+---------------------------------------------------+
	// 
	// Key material only: Optional JOSE metadata loaded from a JWK, such as kid, alg,
	// key_ops, or a caller-supplied use, is not retained for re-export. The Ed25519
	// use = sig member is emitted by Chilkat.
	// Private output: The returned JSON contains private key material and must be
	// protected accordingly.
	const char *jwk(void);


	// Computes the RFC 7638 thumbprint of the public portion of the loaded key using
	// the hash algorithm named by hashAlg. Supported values include md5, sha1, sha256,
	// sha384, and sha512. An unsupported name causes the method to fail. The returned
	// digest is Base64url-encoded without padding.
	// Public-key identity: The canonical thumbprint input contains only the required
	// public JWK members. Private members and optional metadata such as kid, use, and
	// alg are excluded, so the result matches the thumbprint of the corresponding
	// PublicKey.
	// Recommended hash: Use sha256 for normal RFC 7638 interoperability. MD5 and SHA-1
	// are available for compatibility but should not be chosen for new
	// security-sensitive identifiers.
	bool GetJwkThumbprint(const char *hashAlg, CkString &outStr);

	// Computes the RFC 7638 thumbprint of the public portion of the loaded key using
	// the hash algorithm named by hashAlg. Supported values include md5, sha1, sha256,
	// sha384, and sha512. An unsupported name causes the method to fail. The returned
	// digest is Base64url-encoded without padding.
	// Public-key identity: The canonical thumbprint input contains only the required
	// public JWK members. Private members and optional metadata such as kid, use, and
	// alg are excluded, so the result matches the thumbprint of the corresponding
	// PublicKey.
	// Recommended hash: Use sha256 for normal RFC 7638 interoperability. MD5 and SHA-1
	// are available for compatibility but should not be chosen for new
	// security-sensitive identifiers.
	const char *getJwkThumbprint(const char *hashAlg);
	// Computes the RFC 7638 thumbprint of the public portion of the loaded key using
	// the hash algorithm named by hashAlg. Supported values include md5, sha1, sha256,
	// sha384, and sha512. An unsupported name causes the method to fail. The returned
	// digest is Base64url-encoded without padding.
	// Public-key identity: The canonical thumbprint input contains only the required
	// public JWK members. Private members and optional metadata such as kid, use, and
	// alg are excluded, so the result matches the thumbprint of the corresponding
	// PublicKey.
	// Recommended hash: Use sha256 for normal RFC 7638 interoperability. MD5 and SHA-1
	// are available for compatibility but should not be chosen for new
	// security-sensitive identifiers.
	const char *jwkThumbprint(const char *hashAlg);


	// Exports the key as the traditional or preferred unencrypted binary DER
	// representation.
	// Historical method name: PKCS #1 is specifically an RSA standard. For non-RSA key
	// types, this method returns the applicable traditional structure or a PKCS #8
	// fallback.
	// 
	// +----------+-------------------------------------------------------------------+
	// | Key type |                      Returned representation                      |
	// +==========+===================================================================+
	// | RSA      | RSAPrivateKey DER from PKCS #1.                                   |
	// +----------+-------------------------------------------------------------------+
	// | DSA      | The traditional six-integer DSA private-key structure.            |
	// +----------+-------------------------------------------------------------------+
	// | EC       | ECPrivateKey DER from RFC 5915.                                   |
	// +----------+-------------------------------------------------------------------+
	// | Ed25519  | PKCS #8 PrivateKeyInfo DER using the Ed25519 OID 1.3.101.112 ,    |
	// |          | because Ed25519 has no traditional PKCS #1 form.                  |
	// +----------+-------------------------------------------------------------------+
	// 
	// For RSA, the DER contains:
	// 
	// RSAPrivateKey ::= SEQUENCE {
	//     version           Version,
	//     modulus           INTEGER,  -- n
	//     publicExponent    INTEGER,  -- e
	//     privateExponent   INTEGER,  -- d
	//     prime1            INTEGER,  -- p
	//     prime2            INTEGER,  -- q
	//     exponent1         INTEGER,  -- d mod (p-1)
	//     exponent2         INTEGER,  -- d mod (q-1)
	//     coefficient       INTEGER,  -- (inverse of q) mod p
	//     otherPrimeInfos   OtherPrimeInfos OPTIONAL
	// }
	// 
	// For EC, the traditional structure is:
	// 
	// ECPrivateKey ::= SEQUENCE {
	//     version        INTEGER { ecPrivkeyVer1(1) },
	//     privateKey     OCTET STRING,
	//     parameters [0] ECParameters OPTIONAL,
	//     publicKey  [1] BIT STRING OPTIONAL
	// }
	// Modern binary API: For new code, GetPkcsBd[1] returns the same family of
	// representations in a BinData.
	// 
	// References:
	// [1] #GetPkcsBd
	bool GetPkcs1(CkByteData &outBytes);


	// Exports the key as the traditional or preferred unencrypted DER representation
	// and encodes the DER as text using the binary encoding named by encoding. The binary
	// bytes are the same as returned by GetPkcs1[1].
	// Historical method name: PKCS #1 is specifically an RSA standard. For non-RSA key
	// types, this method returns the applicable traditional structure or a PKCS #8
	// fallback.
	// 
	// +----------+-------------------------------------------------------------------+
	// | Key type |                      Returned representation                      |
	// +==========+===================================================================+
	// | RSA      | RSAPrivateKey DER from PKCS #1.                                   |
	// +----------+-------------------------------------------------------------------+
	// | DSA      | The traditional six-integer DSA private-key structure.            |
	// +----------+-------------------------------------------------------------------+
	// | EC       | ECPrivateKey DER from RFC 5915.                                   |
	// +----------+-------------------------------------------------------------------+
	// | Ed25519  | PKCS #8 PrivateKeyInfo DER using the Ed25519 OID 1.3.101.112 ,    |
	// |          | because Ed25519 has no traditional PKCS #1 form.                  |
	// +----------+-------------------------------------------------------------------+
	// 
	// For RSA, the DER contains:
	// 
	// RSAPrivateKey ::= SEQUENCE {
	//     version           Version,
	//     modulus           INTEGER,  -- n
	//     publicExponent    INTEGER,  -- e
	//     privateExponent   INTEGER,  -- d
	//     prime1            INTEGER,  -- p
	//     prime2            INTEGER,  -- q
	//     exponent1         INTEGER,  -- d mod (p-1)
	//     exponent2         INTEGER,  -- d mod (q-1)
	//     coefficient       INTEGER,  -- (inverse of q) mod p
	//     otherPrimeInfos   OtherPrimeInfos OPTIONAL
	// }
	// 
	// For EC, the traditional structure is:
	// 
	// ECPrivateKey ::= SEQUENCE {
	//     version        INTEGER { ecPrivkeyVer1(1) },
	//     privateKey     OCTET STRING,
	//     parameters [0] ECParameters OPTIONAL,
	//     publicKey  [1] BIT STRING OPTIONAL
	// }
	// Encoding validation: An unsupported encoding encoding name causes the method to
	// fail; it does not silently select another encoding.
	// 
	// References:
	// [1] #GetPkcs1
	bool GetPkcs1ENC(const char *encoding, CkString &outStr);

	// Exports the key as the traditional or preferred unencrypted DER representation
	// and encodes the DER as text using the binary encoding named by encoding. The binary
	// bytes are the same as returned by GetPkcs1[1].
	// Historical method name: PKCS #1 is specifically an RSA standard. For non-RSA key
	// types, this method returns the applicable traditional structure or a PKCS #8
	// fallback.
	// 
	// +----------+-------------------------------------------------------------------+
	// | Key type |                      Returned representation                      |
	// +==========+===================================================================+
	// | RSA      | RSAPrivateKey DER from PKCS #1.                                   |
	// +----------+-------------------------------------------------------------------+
	// | DSA      | The traditional six-integer DSA private-key structure.            |
	// +----------+-------------------------------------------------------------------+
	// | EC       | ECPrivateKey DER from RFC 5915.                                   |
	// +----------+-------------------------------------------------------------------+
	// | Ed25519  | PKCS #8 PrivateKeyInfo DER using the Ed25519 OID 1.3.101.112 ,    |
	// |          | because Ed25519 has no traditional PKCS #1 form.                  |
	// +----------+-------------------------------------------------------------------+
	// 
	// For RSA, the DER contains:
	// 
	// RSAPrivateKey ::= SEQUENCE {
	//     version           Version,
	//     modulus           INTEGER,  -- n
	//     publicExponent    INTEGER,  -- e
	//     privateExponent   INTEGER,  -- d
	//     prime1            INTEGER,  -- p
	//     prime2            INTEGER,  -- q
	//     exponent1         INTEGER,  -- d mod (p-1)
	//     exponent2         INTEGER,  -- d mod (q-1)
	//     coefficient       INTEGER,  -- (inverse of q) mod p
	//     otherPrimeInfos   OtherPrimeInfos OPTIONAL
	// }
	// 
	// For EC, the traditional structure is:
	// 
	// ECPrivateKey ::= SEQUENCE {
	//     version        INTEGER { ecPrivkeyVer1(1) },
	//     privateKey     OCTET STRING,
	//     parameters [0] ECParameters OPTIONAL,
	//     publicKey  [1] BIT STRING OPTIONAL
	// }
	// Encoding validation: An unsupported encoding encoding name causes the method to
	// fail; it does not silently select another encoding.
	// 
	// References:
	// [1] #GetPkcs1
	const char *getPkcs1ENC(const char *encoding);
	// Exports the key as the traditional or preferred unencrypted DER representation
	// and encodes the DER as text using the binary encoding named by encoding. The binary
	// bytes are the same as returned by GetPkcs1[1].
	// Historical method name: PKCS #1 is specifically an RSA standard. For non-RSA key
	// types, this method returns the applicable traditional structure or a PKCS #8
	// fallback.
	// 
	// +----------+-------------------------------------------------------------------+
	// | Key type |                      Returned representation                      |
	// +==========+===================================================================+
	// | RSA      | RSAPrivateKey DER from PKCS #1.                                   |
	// +----------+-------------------------------------------------------------------+
	// | DSA      | The traditional six-integer DSA private-key structure.            |
	// +----------+-------------------------------------------------------------------+
	// | EC       | ECPrivateKey DER from RFC 5915.                                   |
	// +----------+-------------------------------------------------------------------+
	// | Ed25519  | PKCS #8 PrivateKeyInfo DER using the Ed25519 OID 1.3.101.112 ,    |
	// |          | because Ed25519 has no traditional PKCS #1 form.                  |
	// +----------+-------------------------------------------------------------------+
	// 
	// For RSA, the DER contains:
	// 
	// RSAPrivateKey ::= SEQUENCE {
	//     version           Version,
	//     modulus           INTEGER,  -- n
	//     publicExponent    INTEGER,  -- e
	//     privateExponent   INTEGER,  -- d
	//     prime1            INTEGER,  -- p
	//     prime2            INTEGER,  -- q
	//     exponent1         INTEGER,  -- d mod (p-1)
	//     exponent2         INTEGER,  -- d mod (q-1)
	//     coefficient       INTEGER,  -- (inverse of q) mod p
	//     otherPrimeInfos   OtherPrimeInfos OPTIONAL
	// }
	// 
	// For EC, the traditional structure is:
	// 
	// ECPrivateKey ::= SEQUENCE {
	//     version        INTEGER { ecPrivkeyVer1(1) },
	//     privateKey     OCTET STRING,
	//     parameters [0] ECParameters OPTIONAL,
	//     publicKey  [1] BIT STRING OPTIONAL
	// }
	// Encoding validation: An unsupported encoding encoding name causes the method to
	// fail; it does not silently select another encoding.
	// 
	// References:
	// [1] #GetPkcs1
	const char *pkcs1ENC(const char *encoding);


	// Exports the key as unencrypted PEM, preferring the traditional
	// algorithm-specific representation when one exists.
	// 
	// +----------+-----------------+---------------------+
	// | Key type |    PEM label    |        Body         |
	// +==========+=================+=====================+
	// | RSA      | RSA PRIVATE KEY | PKCS #1 DER         |
	// +----------+-----------------+---------------------+
	// | DSA      | DSA PRIVATE KEY | Traditional DSA DER |
	// +----------+-----------------+---------------------+
	// | EC       | EC PRIVATE KEY  | RFC 5915 DER        |
	// +----------+-----------------+---------------------+
	// | Ed25519  | PRIVATE KEY     | PKCS #8 DER         |
	// +----------+-----------------+---------------------+
	// 
	// Generated PEM formatting: PEM output uses CRLF line endings, Base64 lines of at
	// most 64 characters, and a final CRLF.
	// Security note: The returned private key is not encrypted.
	bool GetPkcs1Pem(CkString &outStr);

	// Exports the key as unencrypted PEM, preferring the traditional
	// algorithm-specific representation when one exists.
	// 
	// +----------+-----------------+---------------------+
	// | Key type |    PEM label    |        Body         |
	// +==========+=================+=====================+
	// | RSA      | RSA PRIVATE KEY | PKCS #1 DER         |
	// +----------+-----------------+---------------------+
	// | DSA      | DSA PRIVATE KEY | Traditional DSA DER |
	// +----------+-----------------+---------------------+
	// | EC       | EC PRIVATE KEY  | RFC 5915 DER        |
	// +----------+-----------------+---------------------+
	// | Ed25519  | PRIVATE KEY     | PKCS #8 DER         |
	// +----------+-----------------+---------------------+
	// 
	// Generated PEM formatting: PEM output uses CRLF line endings, Base64 lines of at
	// most 64 characters, and a final CRLF.
	// Security note: The returned private key is not encrypted.
	const char *getPkcs1Pem(void);
	// Exports the key as unencrypted PEM, preferring the traditional
	// algorithm-specific representation when one exists.
	// 
	// +----------+-----------------+---------------------+
	// | Key type |    PEM label    |        Body         |
	// +==========+=================+=====================+
	// | RSA      | RSA PRIVATE KEY | PKCS #1 DER         |
	// +----------+-----------------+---------------------+
	// | DSA      | DSA PRIVATE KEY | Traditional DSA DER |
	// +----------+-----------------+---------------------+
	// | EC       | EC PRIVATE KEY  | RFC 5915 DER        |
	// +----------+-----------------+---------------------+
	// | Ed25519  | PRIVATE KEY     | PKCS #8 DER         |
	// +----------+-----------------+---------------------+
	// 
	// Generated PEM formatting: PEM output uses CRLF line endings, Base64 lines of at
	// most 64 characters, and a final CRLF.
	// Security note: The returned private key is not encrypted.
	const char *pkcs1Pem(void);


	// Exports the key as unencrypted PKCS #8 DER. PKCS #8 is an algorithm-independent
	// private-key container. Chilkat emits the classic version-0 PrivateKeyInfo
	// structure, with the algorithm-specific private-key DER in an OCTET STRING.PrivateKeyInfo ::= SEQUENCE {
	//     version                   Version,
	//     privateKeyAlgorithm       AlgorithmIdentifier,
	//     privateKey                OCTET STRING,
	//     attributes           [0]  IMPLICIT Attributes OPTIONAL
	// }
	// Security note: PKCS #8 is a container format and is not inherently encrypted.
	// This method returns cleartext private-key material.
	bool GetPkcs8(CkByteData &outData);


	// Exports the key as unencrypted PKCS #8 DER and encodes the DER as text using the
	// binary encoding named by encoding. PKCS #8 is an algorithm-independent private-key
	// container. Chilkat emits the classic version-0 PrivateKeyInfo structure, with
	// the algorithm-specific private-key DER in an OCTET STRING.PrivateKeyInfo ::= SEQUENCE {
	//     version                   Version,
	//     privateKeyAlgorithm       AlgorithmIdentifier,
	//     privateKey                OCTET STRING,
	//     attributes           [0]  IMPLICIT Attributes OPTIONAL
	// }
	// Encoding validation: An unsupported encoding encoding name causes the method to
	// fail; it does not silently select another encoding.
	// Encoding is not encryption: Base64, hexadecimal, and similar encodings only
	// represent the DER bytes as text. They do not protect the private key.
	bool GetPkcs8ENC(const char *encoding, CkString &outStr);

	// Exports the key as unencrypted PKCS #8 DER and encodes the DER as text using the
	// binary encoding named by encoding. PKCS #8 is an algorithm-independent private-key
	// container. Chilkat emits the classic version-0 PrivateKeyInfo structure, with
	// the algorithm-specific private-key DER in an OCTET STRING.PrivateKeyInfo ::= SEQUENCE {
	//     version                   Version,
	//     privateKeyAlgorithm       AlgorithmIdentifier,
	//     privateKey                OCTET STRING,
	//     attributes           [0]  IMPLICIT Attributes OPTIONAL
	// }
	// Encoding validation: An unsupported encoding encoding name causes the method to
	// fail; it does not silently select another encoding.
	// Encoding is not encryption: Base64, hexadecimal, and similar encodings only
	// represent the DER bytes as text. They do not protect the private key.
	const char *getPkcs8ENC(const char *encoding);
	// Exports the key as unencrypted PKCS #8 DER and encodes the DER as text using the
	// binary encoding named by encoding. PKCS #8 is an algorithm-independent private-key
	// container. Chilkat emits the classic version-0 PrivateKeyInfo structure, with
	// the algorithm-specific private-key DER in an OCTET STRING.PrivateKeyInfo ::= SEQUENCE {
	//     version                   Version,
	//     privateKeyAlgorithm       AlgorithmIdentifier,
	//     privateKey                OCTET STRING,
	//     attributes           [0]  IMPLICIT Attributes OPTIONAL
	// }
	// Encoding validation: An unsupported encoding encoding name causes the method to
	// fail; it does not silently select another encoding.
	// Encoding is not encryption: Base64, hexadecimal, and similar encodings only
	// represent the DER bytes as text. They do not protect the private key.
	const char *pkcs8ENC(const char *encoding);


	// Exports the key as password-protected PKCS #8 DER using password as the password.
	// The block cipher is selected by Pkcs8EncryptAlg[1].EncryptedPrivateKeyInfo ::= SEQUENCE {
	//     encryptionAlgorithm  AlgorithmIdentifier,
	//     encryptedData        OCTET STRING
	// }
	// 
	// Encrypted PKCS #8 output uses PBES2 with PBKDF2. The generated parameters use an
	// 8-byte salt, 2048 PBKDF2 iterations, and the default PBKDF2 PRF (HMAC-SHA-1).
	// The selected cipher uses CBC mode with a newly generated IV.
	// 
	// Empty passwords: An empty password still produces an encrypted PKCS #8 container
	// that can be reopened with an empty password, but it provides no meaningful
	// password protection.
	// 
	// References:
	// [1] #Pkcs8EncryptAlg
	bool GetPkcs8Encrypted(const char *password, CkByteData &outBytes);


	// Exports the key as password-protected PKCS #8 DER, then encodes the encrypted
	// DER as text. encoding names the binary encoding and password supplies the password. The
	// cipher is selected by Pkcs8EncryptAlg[1].
	// 
	// Encrypted PKCS #8 output uses PBES2 with PBKDF2. The generated parameters use an
	// 8-byte salt, 2048 PBKDF2 iterations, and the default PBKDF2 PRF (HMAC-SHA-1).
	// The selected cipher uses CBC mode with a newly generated IV.
	// 
	// Encoding validation: An unsupported encoding encoding name causes the method to
	// fail.
	// Empty passwords: A nonempty, strong password should be used. An empty password is
	// accepted but provides no meaningful password protection.
	// 
	// References:
	// [1] #Pkcs8EncryptAlg
	bool GetPkcs8EncryptedENC(const char *encoding, const char *password, CkString &outStr);

	// Exports the key as password-protected PKCS #8 DER, then encodes the encrypted
	// DER as text. encoding names the binary encoding and password supplies the password. The
	// cipher is selected by Pkcs8EncryptAlg[1].
	// 
	// Encrypted PKCS #8 output uses PBES2 with PBKDF2. The generated parameters use an
	// 8-byte salt, 2048 PBKDF2 iterations, and the default PBKDF2 PRF (HMAC-SHA-1).
	// The selected cipher uses CBC mode with a newly generated IV.
	// 
	// Encoding validation: An unsupported encoding encoding name causes the method to
	// fail.
	// Empty passwords: A nonempty, strong password should be used. An empty password is
	// accepted but provides no meaningful password protection.
	// 
	// References:
	// [1] #Pkcs8EncryptAlg
	const char *getPkcs8EncryptedENC(const char *encoding, const char *password);
	// Exports the key as password-protected PKCS #8 DER, then encodes the encrypted
	// DER as text. encoding names the binary encoding and password supplies the password. The
	// cipher is selected by Pkcs8EncryptAlg[1].
	// 
	// Encrypted PKCS #8 output uses PBES2 with PBKDF2. The generated parameters use an
	// 8-byte salt, 2048 PBKDF2 iterations, and the default PBKDF2 PRF (HMAC-SHA-1).
	// The selected cipher uses CBC mode with a newly generated IV.
	// 
	// Encoding validation: An unsupported encoding encoding name causes the method to
	// fail.
	// Empty passwords: A nonempty, strong password should be used. An empty password is
	// accepted but provides no meaningful password protection.
	// 
	// References:
	// [1] #Pkcs8EncryptAlg
	const char *pkcs8EncryptedENC(const char *encoding, const char *password);


	// Exports the key as password-protected PKCS #8 PEM using password as the password.
	// The cipher is selected by Pkcs8EncryptAlg[1]. The output uses:-----BEGIN ENCRYPTED PRIVATE KEY-----
	// ...
	// -----END ENCRYPTED PRIVATE KEY-----
	// 
	// Encrypted PKCS #8 output uses PBES2 with PBKDF2. The generated parameters use an
	// 8-byte salt, 2048 PBKDF2 iterations, and the default PBKDF2 PRF (HMAC-SHA-1).
	// The selected cipher uses CBC mode with a newly generated IV.
	// 
	// Generated PEM formatting: PEM output uses CRLF line endings, Base64 lines of at
	// most 64 characters, and a final CRLF.
	// Empty passwords: An empty password is accepted and still produces encrypted PKCS #8,
	// but it provides no meaningful password protection.
	// 
	// References:
	// [1] #Pkcs8EncryptAlg
	bool GetPkcs8EncryptedPem(const char *password, CkString &outStr);

	// Exports the key as password-protected PKCS #8 PEM using password as the password.
	// The cipher is selected by Pkcs8EncryptAlg[1]. The output uses:-----BEGIN ENCRYPTED PRIVATE KEY-----
	// ...
	// -----END ENCRYPTED PRIVATE KEY-----
	// 
	// Encrypted PKCS #8 output uses PBES2 with PBKDF2. The generated parameters use an
	// 8-byte salt, 2048 PBKDF2 iterations, and the default PBKDF2 PRF (HMAC-SHA-1).
	// The selected cipher uses CBC mode with a newly generated IV.
	// 
	// Generated PEM formatting: PEM output uses CRLF line endings, Base64 lines of at
	// most 64 characters, and a final CRLF.
	// Empty passwords: An empty password is accepted and still produces encrypted PKCS #8,
	// but it provides no meaningful password protection.
	// 
	// References:
	// [1] #Pkcs8EncryptAlg
	const char *getPkcs8EncryptedPem(const char *password);
	// Exports the key as password-protected PKCS #8 PEM using password as the password.
	// The cipher is selected by Pkcs8EncryptAlg[1]. The output uses:-----BEGIN ENCRYPTED PRIVATE KEY-----
	// ...
	// -----END ENCRYPTED PRIVATE KEY-----
	// 
	// Encrypted PKCS #8 output uses PBES2 with PBKDF2. The generated parameters use an
	// 8-byte salt, 2048 PBKDF2 iterations, and the default PBKDF2 PRF (HMAC-SHA-1).
	// The selected cipher uses CBC mode with a newly generated IV.
	// 
	// Generated PEM formatting: PEM output uses CRLF line endings, Base64 lines of at
	// most 64 characters, and a final CRLF.
	// Empty passwords: An empty password is accepted and still produces encrypted PKCS #8,
	// but it provides no meaningful password protection.
	// 
	// References:
	// [1] #Pkcs8EncryptAlg
	const char *pkcs8EncryptedPem(const char *password);


	// Exports the key as unencrypted PKCS #8 PEM. For RSA, EC, and Ed25519, the PEM
	// armor is:-----BEGIN PRIVATE KEY-----
	// ...
	// -----END PRIVATE KEY----- PKCS #8 is an algorithm-independent private-key
	// container. Chilkat emits the classic version-0 PrivateKeyInfo structure, with
	// the algorithm-specific private-key DER in an OCTET STRING.PrivateKeyInfo ::= SEQUENCE {
	//     version                   Version,
	//     privateKeyAlgorithm       AlgorithmIdentifier,
	//     privateKey                OCTET STRING,
	//     attributes           [0]  IMPLICIT Attributes OPTIONAL
	// }
	// Generated PEM formatting: PEM output uses CRLF line endings, Base64 lines of at
	// most 64 characters, and a final CRLF.
	// Security note: This output is not password-protected.
	bool GetPkcs8Pem(CkString &outStr);

	// Exports the key as unencrypted PKCS #8 PEM. For RSA, EC, and Ed25519, the PEM
	// armor is:-----BEGIN PRIVATE KEY-----
	// ...
	// -----END PRIVATE KEY----- PKCS #8 is an algorithm-independent private-key
	// container. Chilkat emits the classic version-0 PrivateKeyInfo structure, with
	// the algorithm-specific private-key DER in an OCTET STRING.PrivateKeyInfo ::= SEQUENCE {
	//     version                   Version,
	//     privateKeyAlgorithm       AlgorithmIdentifier,
	//     privateKey                OCTET STRING,
	//     attributes           [0]  IMPLICIT Attributes OPTIONAL
	// }
	// Generated PEM formatting: PEM output uses CRLF line endings, Base64 lines of at
	// most 64 characters, and a final CRLF.
	// Security note: This output is not password-protected.
	const char *getPkcs8Pem(void);
	// Exports the key as unencrypted PKCS #8 PEM. For RSA, EC, and Ed25519, the PEM
	// armor is:-----BEGIN PRIVATE KEY-----
	// ...
	// -----END PRIVATE KEY----- PKCS #8 is an algorithm-independent private-key
	// container. Chilkat emits the classic version-0 PrivateKeyInfo structure, with
	// the algorithm-specific private-key DER in an OCTET STRING.PrivateKeyInfo ::= SEQUENCE {
	//     version                   Version,
	//     privateKeyAlgorithm       AlgorithmIdentifier,
	//     privateKey                OCTET STRING,
	//     attributes           [0]  IMPLICIT Attributes OPTIONAL
	// }
	// Generated PEM formatting: PEM output uses CRLF line endings, Base64 lines of at
	// most 64 characters, and a final CRLF.
	// Security note: This output is not password-protected.
	const char *pkcs8Pem(void);


	// Exports the key as DER and replaces the contents of the BinData in bd.
	// 
	// +---------+--------------------+-----------------------------------------------+
	// |  pkcs1   |        password        |                    Output                     |
	// +=========+====================+===============================================+
	// | true  | Ignored for        | RSA PKCS #1, traditional DSA, RFC 5915 EC, or |
	// |         | encryption.        | PKCS #8 for Ed25519.                          |
	// +---------+--------------------+-----------------------------------------------+
	// | false | Empty string.      | Unencrypted PKCS #8 DER.                      |
	// +---------+--------------------+-----------------------------------------------+
	// | false | Nonempty password. | Encrypted PKCS #8 DER using                   |
	// |         |                    | Pkcs8EncryptAlg[1] .                          |
	// +---------+--------------------+-----------------------------------------------+
	// 
	// Output state: A successful call replaces any existing bd content. If the call
	// fails, bd is cleared.
	// Password behavior: When pkcs1 is true, password does not encrypt the output. To
	// obtain encrypted output, set pkcs1 to false and provide a nonempty password.
	// 
	// References:
	// [1] #Pkcs8EncryptAlg
	bool GetPkcsBd(bool pkcs1, const char *password, CkBinData &bd);


	// Deprecated. Use ToPublicKey[1] instead. This method creates and returns a
	// PublicKey containing an independent copy of the public portion corresponding to
	// the loaded private key.
	// 
	// References:
	// [1] #ToPublicKey
	// The caller is responsible for deleting the object returned by this method.
	CkPublicKey *GetPublicKey(void);


	// Exports the raw private value as lowercase hexadecimal and replaces the contents
	// of the StringBuilder in pubKey with the corresponding raw public key.
	// 
	// +----------+-------------------------------------+-----------------------------+
	// | Key type |       Returned private value        |    Public value in pubKey     |
	// +==========+=====================================+=============================+
	// | Ed25519  | The 32-byte seed accepted by        | The 32-byte public key, as  |
	// |          | LoadEd25519[1] , as 64 hex          | 64 hex characters.          |
	// |          | characters.                         |                             |
	// +----------+-------------------------------------+-----------------------------+
	// | EC       | The private scalar, padded to the   | The uncompressed point 04   |
	// |          | curve size as needed.               | || HEX(x) || HEX(y) .       |
	// +----------+-------------------------------------+-----------------------------+
	// 
	// Applicable key types: This method supports Ed25519 and ordinary EC keys. RSA and
	// DSA keys do not have a single simple raw representation and cause the method to
	// fail.
	// Output on failure: If the method fails, pubKey is cleared.
	// 
	// References:
	// [1] #LoadEd25519
	bool GetRawHex(CkStringBuilder &pubKey, CkString &outStr);

	// Exports the raw private value as lowercase hexadecimal and replaces the contents
	// of the StringBuilder in pubKey with the corresponding raw public key.
	// 
	// +----------+-------------------------------------+-----------------------------+
	// | Key type |       Returned private value        |    Public value in pubKey     |
	// +==========+=====================================+=============================+
	// | Ed25519  | The 32-byte seed accepted by        | The 32-byte public key, as  |
	// |          | LoadEd25519[1] , as 64 hex          | 64 hex characters.          |
	// |          | characters.                         |                             |
	// +----------+-------------------------------------+-----------------------------+
	// | EC       | The private scalar, padded to the   | The uncompressed point 04   |
	// |          | curve size as needed.               | || HEX(x) || HEX(y) .       |
	// +----------+-------------------------------------+-----------------------------+
	// 
	// Applicable key types: This method supports Ed25519 and ordinary EC keys. RSA and
	// DSA keys do not have a single simple raw representation and cause the method to
	// fail.
	// Output on failure: If the method fails, pubKey is cleared.
	// 
	// References:
	// [1] #LoadEd25519
	const char *getRawHex(CkStringBuilder &pubKey);
	// Exports the raw private value as lowercase hexadecimal and replaces the contents
	// of the StringBuilder in pubKey with the corresponding raw public key.
	// 
	// +----------+-------------------------------------+-----------------------------+
	// | Key type |       Returned private value        |    Public value in pubKey     |
	// +==========+=====================================+=============================+
	// | Ed25519  | The 32-byte seed accepted by        | The 32-byte public key, as  |
	// |          | LoadEd25519[1] , as 64 hex          | 64 hex characters.          |
	// |          | characters.                         |                             |
	// +----------+-------------------------------------+-----------------------------+
	// | EC       | The private scalar, padded to the   | The uncompressed point 04   |
	// |          | curve size as needed.               | || HEX(x) || HEX(y) .       |
	// +----------+-------------------------------------+-----------------------------+
	// 
	// Applicable key types: This method supports Ed25519 and ordinary EC keys. RSA and
	// DSA keys do not have a single simple raw representation and cause the method to
	// fail.
	// Output on failure: If the method fails, pubKey is cleared.
	// 
	// References:
	// [1] #LoadEd25519
	const char *rawHex(CkStringBuilder &pubKey);


	// Exports the key in Chilkat-compatible XML. The XML is not encrypted. RSA and DSA
	// components use ordinary Base64.
	// 
	// RSA keys use:
	// 
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>...</Exponent>
	//   <D>...</D>
	//   <P>...</P>
	//   <Q>...</Q>
	//   <DP>...</DP>
	//   <DQ>...</DQ>
	//   <InverseQ>...</InverseQ>
	// </RSAKeyValue>
	// 
	// DSA keys use:
	// 
	// <DSAKeyValue>
	//   <P>...</P>
	//   <Q>...</Q>
	//   <G>...</G>
	//   <Y>...</Y>
	//   <X>...</X>
	// </DSAKeyValue>
	// 
	// EC keys place the named curve in the curve attribute and Base64-encode the RFC
	// 5915 ECPrivateKey DER in the element content:
	// 
	// <ECCKeyValue curve="secp256r1">...</ECCKeyValue>
	// 
	// Ed25519 keys Base64-encode 64 bytes consisting of the 32-byte private seed
	// followed by the 32-byte public key:
	// 
	// <Ed25519KeyValue>...</Ed25519KeyValue>
	// Round-trip support: XML produced by this method can be loaded by LoadXml[1],
	// LoadXmlFile[2], or the general format-detection methods.
	// Interoperability note: These XML forms are Chilkat-compatible representations.
	// Prefer PKCS #8, PEM, or JWK when interoperating with systems that expect
	// standard key containers.
	// 
	// References:
	// [1] #LoadXml
	// [2] #LoadXmlFile
	bool GetXml(CkString &outStr);

	// Exports the key in Chilkat-compatible XML. The XML is not encrypted. RSA and DSA
	// components use ordinary Base64.
	// 
	// RSA keys use:
	// 
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>...</Exponent>
	//   <D>...</D>
	//   <P>...</P>
	//   <Q>...</Q>
	//   <DP>...</DP>
	//   <DQ>...</DQ>
	//   <InverseQ>...</InverseQ>
	// </RSAKeyValue>
	// 
	// DSA keys use:
	// 
	// <DSAKeyValue>
	//   <P>...</P>
	//   <Q>...</Q>
	//   <G>...</G>
	//   <Y>...</Y>
	//   <X>...</X>
	// </DSAKeyValue>
	// 
	// EC keys place the named curve in the curve attribute and Base64-encode the RFC
	// 5915 ECPrivateKey DER in the element content:
	// 
	// <ECCKeyValue curve="secp256r1">...</ECCKeyValue>
	// 
	// Ed25519 keys Base64-encode 64 bytes consisting of the 32-byte private seed
	// followed by the 32-byte public key:
	// 
	// <Ed25519KeyValue>...</Ed25519KeyValue>
	// Round-trip support: XML produced by this method can be loaded by LoadXml[1],
	// LoadXmlFile[2], or the general format-detection methods.
	// Interoperability note: These XML forms are Chilkat-compatible representations.
	// Prefer PKCS #8, PEM, or JWK when interoperating with systems that expect
	// standard key containers.
	// 
	// References:
	// [1] #LoadXml
	// [2] #LoadXmlFile
	const char *getXml(void);
	// Exports the key in Chilkat-compatible XML. The XML is not encrypted. RSA and DSA
	// components use ordinary Base64.
	// 
	// RSA keys use:
	// 
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>...</Exponent>
	//   <D>...</D>
	//   <P>...</P>
	//   <Q>...</Q>
	//   <DP>...</DP>
	//   <DQ>...</DQ>
	//   <InverseQ>...</InverseQ>
	// </RSAKeyValue>
	// 
	// DSA keys use:
	// 
	// <DSAKeyValue>
	//   <P>...</P>
	//   <Q>...</Q>
	//   <G>...</G>
	//   <Y>...</Y>
	//   <X>...</X>
	// </DSAKeyValue>
	// 
	// EC keys place the named curve in the curve attribute and Base64-encode the RFC
	// 5915 ECPrivateKey DER in the element content:
	// 
	// <ECCKeyValue curve="secp256r1">...</ECCKeyValue>
	// 
	// Ed25519 keys Base64-encode 64 bytes consisting of the 32-byte private seed
	// followed by the 32-byte public key:
	// 
	// <Ed25519KeyValue>...</Ed25519KeyValue>
	// Round-trip support: XML produced by this method can be loaded by LoadXml[1],
	// LoadXmlFile[2], or the general format-detection methods.
	// Interoperability note: These XML forms are Chilkat-compatible representations.
	// Prefer PKCS #8, PEM, or JWK when interoperating with systems that expect
	// standard key containers.
	// 
	// References:
	// [1] #LoadXml
	// [2] #LoadXmlFile
	const char *xml(void);


	// Loads a private key from the data in privKeyData by inspecting its contents. Recognized
	// representations include RSA PKCS #1 DER, traditional DSA and EC DER, PKCS #8
	// DER, encrypted PKCS #8, PEM, JWK, Chilkat-compatible XML, Microsoft PVK, and
	// supported Ed25519 representations. password supplies the password when the detected
	// representation is encrypted; otherwise it may be empty.
	// Text and binary input: privKeyData contains the exact bytes to inspect. Textual PEM,
	// JWK, and XML are detected from those bytes; a filename extension is not
	// involved.
	// Trailing DER data: If the input begins with one complete supported DER key
	// followed by extra bytes or another DER object, the first key is loaded and
	// trailing data is ignored.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	bool LoadAnyFormat(CkBinData &privKeyData, const char *password);


	// Loads a private key from the file at path by inspecting its contents. Recognized
	// representations include RSA PKCS #1 DER, traditional DSA and EC DER, PKCS #8
	// DER, encrypted PKCS #8, PEM, JWK, Chilkat-compatible XML, Microsoft PVK, and
	// supported Ed25519 representations. password supplies the password when needed.
	// Filename extensions are advisory: The file content determines the format; a
	// nonstandard or misleading extension does not prevent recognition.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	bool LoadAnyFormatFile(const char *path, const char *password);


	// Loads an Ed25519 key pair from raw hexadecimal values. privKey is the 32-byte
	// Ed25519 private seed. pubKey is the 32-byte public key. Each nonempty value must
	// contain exactly 64 hexadecimal digits. Uppercase hexadecimal and an optional 0x
	// prefix are accepted; embedded whitespace is not accepted. pubKey may be empty, in
	// which case Chilkat derives the public key from the seed.
	// Supplied public key is not verified: When pubKey is nonempty, Chilkat stores the
	// supplied public value without checking that it corresponds to privKey. Pass an
	// empty pubKey when the public key should be derived and guaranteed to match the
	// private seed.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	bool LoadEd25519(const char *privKey, const char *pubKey);


	// Loads a private key from the PEM text in pemStr. password supplies the password when
	// the PEM is encrypted. The method accepts encrypted PKCS #8 PEM and also loads
	// supported unencrypted PEM.-----BEGIN ENCRYPTED PRIVATE KEY-----
	// ...
	// -----END ENCRYPTED PRIVATE KEY-----
	// Content auto-detection: Chilkat examines the content rather than relying on the
	// method name or filename extension. This password-taking method can load both
	// encrypted and unencrypted supported private-key representations.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	// Password failure: An incorrect password causes loading to fail and leaves this
	// object empty.
	bool LoadEncryptedPem(const char *pemStr, const char *password);


	// Loads a private key from the file at path, using password when the detected key is
	// encrypted. The file may contain encrypted PKCS #8 PEM or another supported
	// encrypted or unencrypted representation.
	// Content auto-detection: Chilkat examines the content rather than relying on the
	// method name or filename extension. This password-taking method can load both
	// encrypted and unencrypted supported private-key representations.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	bool LoadEncryptedPemFile(const char *path, const char *password);


	// Loads a private key from the JWK JSON in jsonStr. Supported private JWK key types
	// are RSA (kty = RSA), EC (kty = EC), and Ed25519 (kty = OKP, crv = Ed25519). An
	// unsupported kty causes the method to fail.
	// Private key material required: A JWK containing only public members belongs in a
	// PublicKey. This method is for JWKs that contain private key material.
	// Metadata handling: Optional JOSE metadata such as kid, use, alg, and key_ops may
	// be present but is not retained by PrivateKey.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	bool LoadJwk(const char *jsonStr);


	// Loads a private key from the PEM text in str. This method has no password
	// argument and therefore cannot load password-protected PEM. Use
	// LoadEncryptedPem[1] for encrypted input.
	// Content auto-detection: The method name identifies the expected or traditional
	// use, but Chilkat examines the content and can load other supported unencrypted
	// private-key representations. Encrypted input requires a load method that accepts
	// a password.
	// PEM block selection: If the text contains multiple PEM blocks, Chilkat selects
	// the first supported private-key block. It skips preceding public-key or
	// unrelated PEM blocks.
	// Accepted surrounding content: Leading and trailing whitespace, a UTF-8 BOM, and
	// trailing non-PEM text are accepted.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	// 
	// References:
	// [1] #LoadEncryptedPem
	bool LoadPem(const char *str);


	// Loads a private key from the file at path. This method has no password argument
	// and therefore cannot load a password-protected key. Use LoadEncryptedPemFile[1]
	// or LoadAnyFormatFile[2] when a password may be required.
	// Content auto-detection: The method name identifies the expected or traditional
	// use, but Chilkat examines the content and can load other supported unencrypted
	// private-key representations. Encrypted input requires a load method that accepts
	// a password.
	// PEM block selection: For a file containing multiple PEM blocks, Chilkat selects
	// the first supported private-key block and skips preceding public-key or
	// unrelated blocks.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	// 
	// References:
	// [1] #LoadEncryptedPemFile
	// [2] #LoadAnyFormatFile
	bool LoadPemFile(const char *path);


	// Loads a private key from the in-memory data in data. Despite the historical PKCS
	// #1 name, Chilkat examines the content and accepts supported unencrypted RSA,
	// DSA, EC, Ed25519, PKCS #8, PEM, JWK, and XML representations.
	// Content auto-detection: The method name identifies the expected or traditional
	// use, but Chilkat examines the content and can load other supported unencrypted
	// private-key representations. Encrypted input requires a load method that accepts
	// a password.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	// Modern binary API: For new code that already has a BinData, use
	// LoadAnyFormat[1].
	// 
	// References:
	// [1] #LoadAnyFormat
	bool LoadPkcs1(CkByteData &data);


	// Loads a private key from the file at path. Despite the historical PKCS #1 name,
	// the method examines the content and accepts supported unencrypted private-key
	// representations.
	// Content auto-detection: The method name identifies the expected or traditional
	// use, but Chilkat examines the content and can load other supported unencrypted
	// private-key representations. Encrypted input requires a load method that accepts
	// a password.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	bool LoadPkcs1File(const char *path);


	// Loads a private key from the in-memory data in data. Although this method is
	// named for unencrypted PKCS #8 DER, Chilkat examines the content and accepts
	// other supported unencrypted private-key representations.
	// Content auto-detection: The method name identifies the expected or traditional
	// use, but Chilkat examines the content and can load other supported unencrypted
	// private-key representations. Encrypted input requires a load method that accepts
	// a password.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	// Modern binary API: For new code that already has a BinData, LoadAnyFormat[1]
	// avoids the older byte-array API.
	// 
	// References:
	// [1] #LoadAnyFormat
	bool LoadPkcs8(CkByteData &data);


	// Loads a private key from the in-memory data in data, using password when the
	// detected key is encrypted. The method can load encrypted PKCS #8 and other
	// supported encrypted or unencrypted representations.
	// Content auto-detection: Chilkat examines the content rather than relying on the
	// method name or filename extension. This password-taking method can load both
	// encrypted and unencrypted supported private-key representations.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	bool LoadPkcs8Encrypted(CkByteData &data, const char *password);


	// Loads a private key from the file at path, using password when the detected key is
	// encrypted. The method can load encrypted PKCS #8 DER or PEM and also supported
	// unencrypted representations.
	// Content auto-detection: Chilkat examines the content rather than relying on the
	// method name or filename extension. This password-taking method can load both
	// encrypted and unencrypted supported private-key representations.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	bool LoadPkcs8EncryptedFile(const char *path, const char *password);


	// Loads a private key from the file at path. Although named for unencrypted PKCS
	// #8, the method examines the file content and accepts other supported unencrypted
	// private-key representations.
	// Content auto-detection: The method name identifies the expected or traditional
	// use, but Chilkat examines the content and can load other supported unencrypted
	// private-key representations. Encrypted input requires a load method that accepts
	// a password.
	// Trailing DER data: When the file begins with a complete supported DER
	// private-key object, trailing bytes or a second concatenated DER object are
	// ignored; the first key is loaded.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	bool LoadPkcs8File(const char *path);


	// Loads a private key from the in-memory data in data, using password if the detected
	// representation is encrypted. This Windows-only method supports Microsoft PVK and
	// also participates in Chilkat private-key content auto-detection.
	// Content auto-detection: Chilkat examines the content rather than relying on the
	// method name or filename extension. This password-taking method can load both
	// encrypted and unencrypted supported private-key representations.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	bool LoadPvk(CkByteData &data, const char *password);


	// Loads a private key from the file at path, using password if the detected
	// representation is encrypted. This Windows-only method supports Microsoft PVK and
	// also participates in Chilkat private-key content auto-detection.
	// Content auto-detection: Chilkat examines the content rather than relying on the
	// method name or filename extension. This password-taking method can load both
	// encrypted and unencrypted supported private-key representations.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	bool LoadPvkFile(const char *path, const char *password);


	// Loads a private key from the XML text in xml. Supported Chilkat-compatible XML
	// roots include RSAKeyValue, DSAKeyValue, ECCKeyValue, and Ed25519KeyValue.
	// Content auto-detection: The method name identifies the expected or traditional
	// use, but Chilkat examines the content and can load other supported unencrypted
	// private-key representations. Encrypted input requires a load method that accepts
	// a password.
	// Ed25519 XML: The Ed25519KeyValue content is ordinary Base64 for the 32-byte
	// private seed followed by the 32-byte public key.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	bool LoadXml(const char *xml);


	// Loads a private key from the file at path. Chilkat recognizes RSA, DSA, EC, and
	// Ed25519 XML produced by GetXml[1], and also auto-detects other supported
	// unencrypted private-key representations.
	// Content auto-detection: The method name identifies the expected or traditional
	// use, but Chilkat examines the content and can load other supported unencrypted
	// private-key representations. Encrypted input requires a load method that accepts
	// a password.
	// Object state: A successful load replaces any key already held by this object. If
	// loading fails, this object is left empty.
	// 
	// References:
	// [1] #GetXml
	bool LoadXmlFile(const char *path);


	// Saves the key at path as unencrypted PEM, preferring a traditional
	// algorithm-specific representation when one exists. RSA uses RSA PRIVATE KEY, DSA
	// uses DSA PRIVATE KEY, EC uses EC PRIVATE KEY, and Ed25519 uses the PKCS #8
	// PRIVATE KEY form.
	// Generated PEM formatting: PEM output uses CRLF line endings, Base64 lines of at
	// most 64 characters, and a final CRLF.
	// File behavior: An existing destination file is replaced. Parent directories are
	// not created; the parent directory must already exist.
	// PKCS #8 alternative: Use SavePkcs8PemFile[1] to always request the
	// algorithm-independent PKCS #8 PRIVATE KEY form.
	// Security note: The file is not password-protected.
	// 
	// References:
	// [1] #SavePkcs8PemFile
	bool SavePemFile(const char *path);


	// Saves the key at path using the traditional or preferred unencrypted DER
	// representation.
	// Historical method name: RSA is saved as PKCS #1, EC as RFC 5915, DSA in its
	// traditional structure, and Ed25519 as PKCS #8 because no traditional PKCS #1
	// form exists.
	// File behavior: An existing destination file is replaced. Parent directories are
	// not created; the parent directory must already exist.
	// Security note: The file contains cleartext private-key material.
	bool SavePkcs1File(const char *path);


	// Saves the key as password-protected PKCS #8 DER. password supplies the password and
	// path is the destination path. The cipher is selected by Pkcs8EncryptAlg[1].
	// 
	// Encrypted PKCS #8 output uses PBES2 with PBKDF2. The generated parameters use an
	// 8-byte salt, 2048 PBKDF2 iterations, and the default PBKDF2 PRF (HMAC-SHA-1).
	// The selected cipher uses CBC mode with a newly generated IV.
	// 
	// File behavior: An existing destination file is replaced. Parent directories are
	// not created; the parent directory must already exist.
	// Empty passwords: An empty password is accepted but provides no meaningful password
	// protection.
	// 
	// References:
	// [1] #Pkcs8EncryptAlg
	bool SavePkcs8EncryptedFile(const char *password, const char *path);


	// Saves the key as password-protected PKCS #8 PEM. password supplies the password and
	// path is the destination path. The file uses the ENCRYPTED PRIVATE KEY PEM label,
	// and the cipher is selected by Pkcs8EncryptAlg[1].
	// 
	// Encrypted PKCS #8 output uses PBES2 with PBKDF2. The generated parameters use an
	// 8-byte salt, 2048 PBKDF2 iterations, and the default PBKDF2 PRF (HMAC-SHA-1).
	// The selected cipher uses CBC mode with a newly generated IV.
	// 
	// Generated PEM formatting: PEM output uses CRLF line endings, Base64 lines of at
	// most 64 characters, and a final CRLF.
	// File behavior: An existing destination file is replaced. Parent directories are
	// not created; the parent directory must already exist.
	// Empty passwords: An empty password is accepted but provides no meaningful password
	// protection.
	// 
	// References:
	// [1] #Pkcs8EncryptAlg
	bool SavePkcs8EncryptedPemFile(const char *password, const char *path);


	// Saves the key as unencrypted PKCS #8 DER at path. PKCS #8 is an
	// algorithm-independent private-key container. Chilkat emits the classic version-0
	// PrivateKeyInfo structure, with the algorithm-specific private-key DER in an
	// OCTET STRING.PrivateKeyInfo ::= SEQUENCE {
	//     version                   Version,
	//     privateKeyAlgorithm       AlgorithmIdentifier,
	//     privateKey                OCTET STRING,
	//     attributes           [0]  IMPLICIT Attributes OPTIONAL
	// }
	// File behavior: An existing destination file is replaced. Parent directories are
	// not created; the parent directory must already exist.
	// macOS Keychain: Starting in Chilkat v10.0.0, path may be formatted as
	// keychain:<label> to save the private key to the Apple Keychain.
	// Security note: The file contains cleartext private-key material.
	bool SavePkcs8File(const char *path);


	// Saves the key as unencrypted PKCS #8 PEM at path. The PEM label is PRIVATE KEY
	// for RSA, EC, Ed25519, and other supported PKCS #8 key types.PKCS #8 is an
	// algorithm-independent private-key container. Chilkat emits the classic version-0
	// PrivateKeyInfo structure, with the algorithm-specific private-key DER in an
	// OCTET STRING.PrivateKeyInfo ::= SEQUENCE {
	//     version                   Version,
	//     privateKeyAlgorithm       AlgorithmIdentifier,
	//     privateKey                OCTET STRING,
	//     attributes           [0]  IMPLICIT Attributes OPTIONAL
	// }
	// Generated PEM formatting: PEM output uses CRLF line endings, Base64 lines of at
	// most 64 characters, and a final CRLF.
	// File behavior: An existing destination file is replaced. Parent directories are
	// not created; the parent directory must already exist.
	// Security note: The file is not password-protected.
	bool SavePkcs8PemFile(const char *path);


	// Saves the key as unencrypted Chilkat-compatible XML at path. The XML
	// representation is the same as returned by GetXml[1].
	// File behavior: An existing destination file is replaced. Parent directories are
	// not created; the parent directory must already exist.
	// Security note: The XML contains cleartext private-key material.
	// 
	// References:
	// [1] #GetXml
	bool SaveXmlFile(const char *path);


	// Extracts the public portion of the loaded private key and stores an independent
	// copy in the PublicKey supplied in pubKey. The resulting public key is unaffected
	// if this PrivateKey is later reloaded with a different key.
	// Target state on failure: If extraction fails, an existing key already held by
	// pubKey is preserved.
	bool ToPublicKey(CkPublicKey &pubKey);


	// Uploads or imports the private key to a supported cloud key-management service.
	// jsonIn supplies service-specific input parameters as a JsonObject, and jsonOut
	// receives service-specific result information.
	// Open-ended interface: The required JSON members and returned JSON depend on the
	// target service and operation. Follow the corresponding Chilkat example for AWS
	// KMS, Azure Key Vault, or another supported provider rather than assuming one
	// common schema.
	// Security note: Cloud import operations may transmit private-key material. Use
	// only the provider endpoint, authentication, and transport settings documented
	// for the intended service.
	bool UploadToCloud(CkJsonObject &jsonIn, CkJsonObject &jsonOut);

	// Uploads or imports the private key to a supported cloud key-management service.
	// jsonIn supplies service-specific input parameters as a JsonObject, and jsonOut
	// receives service-specific result information.
	// Open-ended interface: The required JSON members and returned JSON depend on the
	// target service and operation. Follow the corresponding Chilkat example for AWS
	// KMS, Azure Key Vault, or another supported provider rather than assuming one
	// common schema.
	// Security note: Cloud import operations may transmit private-key material. Use
	// only the provider endpoint, authentication, and transport settings documented
	// for the intended service.
	CkTask *UploadToCloudAsync(CkJsonObject &jsonIn, CkJsonObject &jsonOut);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
