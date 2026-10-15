// CkEccW.h: interface for the CkEccW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkEccW_H
#define _CkEccW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkPrivateKeyW;
class CkPrngW;
class CkPublicKeyW;
class CkBinDataW;
class CkCertW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkEccW
class CK_VISIBLE_PUBLIC CkEccW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkEccW(const CkEccW &);
	CkEccW &operator=(const CkEccW &);

    public:
	CkEccW(void);
	virtual ~CkEccW(void);

	

	static CkEccW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Controls the binary layout of ECDSA signatures created by this object. The
	// default is true.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                          Signature layout                          |
	// +=========+====================================================================+
	// | true  | ASN.1 DER: a SEQUENCE containing the two INTEGER values r and s .  |
	// |         | Its encoded length can vary because DER INTEGER values may require |
	// |         | leading sign-padding bytes.                                        |
	// +---------+--------------------------------------------------------------------+
	// | false | Raw format: fixed-width, unsigned big-endian r followed            |
	// |         | immediately by fixed-width s , commonly written r || s .           |
	// +---------+--------------------------------------------------------------------+
	// 
	// Signing versus verification: This property controls generated signatures.
	// Chilkat verification methods automatically recognize both ASN.1 DER and raw r ||
	// s signatures.
	// Protocol compatibility: Neither format is universally interchangeable. Use the
	// layout required by the receiving protocol or file format.
	bool get_AsnFormat(void);
	// Controls the binary layout of ECDSA signatures created by this object. The
	// default is true.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                          Signature layout                          |
	// +=========+====================================================================+
	// | true  | ASN.1 DER: a SEQUENCE containing the two INTEGER values r and s .  |
	// |         | Its encoded length can vary because DER INTEGER values may require |
	// |         | leading sign-padding bytes.                                        |
	// +---------+--------------------------------------------------------------------+
	// | false | Raw format: fixed-width, unsigned big-endian r followed            |
	// |         | immediately by fixed-width s , commonly written r || s .           |
	// +---------+--------------------------------------------------------------------+
	// 
	// Signing versus verification: This property controls generated signatures.
	// Chilkat verification methods automatically recognize both ASN.1 DER and raw r ||
	// s signatures.
	// Protocol compatibility: Neither format is universally interchangeable. Use the
	// layout required by the receiving protocol or file format.
	void put_AsnFormat(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Deprecated. Use GenKey[1] for new code.
	// 
	// Generates an elliptic-curve private key on the named curve specified by curveName.
	// prng supplies the cryptographically secure random data used to choose the
	// private scalar. On success, the returned PrivateKey contains the new EC key; a
	// null or empty result indicates failure.
	// 
	// EC key terminology: The generated object is an EC private key. The same
	// underlying key type may be used with ECDSA signatures or with compatible
	// elliptic-curve key-agreement operations; “ECDSA key” is common shorthand but is
	// not a distinct key encoding.
	// 
	// See GenKey[1] for the supported curve names.
	// 
	// 
	// References:
	// [1] #GenKey
	// The caller is responsible for deleting the object returned by this method.
	CkPrivateKeyW *GenEccKey(const wchar_t *curveName, CkPrngW &prng);

	// Deprecated. Use GenKey2[1] for new code.
	// 
	// Constructs an elliptic-curve private key on the curve named by curveName from the
	// encoded private scalar in encodedK. encoding names the representation of encodedK, such as
	// hex, base64, or decimal. On success, the returned PrivateKey contains the
	// reconstructed key.
	// 
	// Historical argument name: Although encodedK is named encodedK, it supplies the key's
	// private scalar. It is not the temporary per-signature ECDSA nonce commonly
	// written as k. The scalar must be valid for the selected curve and must remain
	// secret.
	// 
	// This method is primarily useful for test vectors or for reconstructing a key
	// from known private-key material. See GenKey2[1] for the supported curve names.
	// 
	// 
	// References:
	// [1] #GenKey2
	// The caller is responsible for deleting the object returned by this method.
	CkPrivateKeyW *GenEccKey2(const wchar_t *curveName, const wchar_t *encodedK, const wchar_t *encoding);

	// Generates a new elliptic-curve private key and stores it in privKey. curveName selects
	// the named curve, and prng supplies the cryptographically secure random data used
	// to choose the private scalar. Returns true on success and false on failure.
	// 
	// Supported curve names are:
	// 
	// +-------------------------------------------------+----------------------------+
	// |                   Curve name                    |           Notes            |
	// +=================================================+============================+
	// | secp256r1                                       | Also known as P-256 and    |
	// |                                                 | prime256v1 .               |
	// +-------------------------------------------------+----------------------------+
	// | secp384r1                                       | Also known as P-384.       |
	// +-------------------------------------------------+----------------------------+
	// | secp521r1                                       | Also known as P-521.       |
	// +-------------------------------------------------+----------------------------+
	// | secp256k1                                       | Widely associated with     |
	// |                                                 | Bitcoin and related        |
	// |                                                 | systems.                   |
	// +-------------------------------------------------+----------------------------+
	// | secp192r1 , secp224r1                           | Older, smaller SEC curves  |
	// |                                                 | retained for               |
	// |                                                 | compatibility.             |
	// +-------------------------------------------------+----------------------------+
	// | brainpoolP160r1 , brainpoolP192r1 ,             | Brainpool prime-field      |
	// | brainpoolP224r1 , brainpoolP256r1 ,             | curves.                    |
	// | brainpoolP320r1 , brainpoolP384r1 ,             |                            |
	// | brainpoolP512r1                                 |                            |
	// +-------------------------------------------------+----------------------------+
	// 
	// Choose the curve required by the protocol: The curve name determines the key
	// size, signature size, and interoperability. P-256, P-384, and P-521 are broadly
	// standardized; secp256k1 is commonly required by Bitcoin-related systems. Older
	// and smaller curves should generally be used only for compatibility with an
	// existing format or peer.
	// Random generation matters: The security of the private key depends on the
	// randomness supplied by prng. Use a properly initialized cryptographic Prng.
	bool GenKey(const wchar_t *curveName, CkPrngW &prng, CkPrivateKeyW &privKey);

	// Constructs an elliptic-curve private key in privKey from a caller-supplied private
	// scalar. curveName selects the named curve, encodedK contains the scalar, and encoding names
	// its representation, such as hex, base64, or decimal. Returns true on success
	// and false on failure.
	// 
	// Supported curve names are:
	// 
	// +-------------------------------------------------+----------------------------+
	// |                   Curve name                    |           Notes            |
	// +=================================================+============================+
	// | secp256r1                                       | Also known as P-256 and    |
	// |                                                 | prime256v1 .               |
	// +-------------------------------------------------+----------------------------+
	// | secp384r1                                       | Also known as P-384.       |
	// +-------------------------------------------------+----------------------------+
	// | secp521r1                                       | Also known as P-521.       |
	// +-------------------------------------------------+----------------------------+
	// | secp256k1                                       | Widely associated with     |
	// |                                                 | Bitcoin and related        |
	// |                                                 | systems.                   |
	// +-------------------------------------------------+----------------------------+
	// | secp192r1 , secp224r1                           | Older, smaller SEC curves  |
	// |                                                 | retained for               |
	// |                                                 | compatibility.             |
	// +-------------------------------------------------+----------------------------+
	// | brainpoolP160r1 , brainpoolP192r1 ,             | Brainpool prime-field      |
	// | brainpoolP224r1 , brainpoolP256r1 ,             | curves.                    |
	// | brainpoolP320r1 , brainpoolP384r1 ,             |                            |
	// | brainpoolP512r1                                 |                            |
	// +-------------------------------------------------+----------------------------+
	// 
	// encodedK is the private key value: Despite the historical argument name, encodedK is
	// the long-lived private scalar used to construct the key. It is not the temporary
	// ECDSA signing nonce also commonly denoted by k. The value must be valid for the
	// selected curve, unpredictable when used as a real key, and kept secret.
	// Typical use: Use this method to reproduce a known key for a test vector or to
	// import a scalar supplied by another system. Use GenKey[1] to create a new random
	// private key.
	// 
	// References:
	// [1] #GenKey
	bool GenKey2(const wchar_t *curveName, const wchar_t *encodedK, const wchar_t *encoding, CkPrivateKeyW &privKey);

	// Computes an elliptic-curve Diffie-Hellman shared secret from the private key in
	// privKey and the peer's public key in pubKey. encoding specifies how the resulting bytes
	// are encoded in the returned string, such as hex or base64.
	// 
	// Two parties obtain the same result when each combines its own private key with
	// the other party's corresponding public key. Both keys must use the same named
	// curve and must be suitable EC keys.
	// 
	// Do not use the raw result directly as a long-term encryption key: A shared
	// secret is normally passed through the key-derivation function required by the
	// surrounding protocol, together with any required context, salt, or transcript
	// information. Key agreement by itself also does not authenticate the peer; an
	// unauthenticated exchange is vulnerable to a man-in-the-middle attack.
	// ECDH, not ECDSA: ECDSA is a signature algorithm. This method performs ECDH-style
	// key agreement.
	bool SharedSecretENC(CkPrivateKeyW &privKey, CkPublicKeyW &pubKey, const wchar_t *encoding, CkString &outStr);
	// Computes an elliptic-curve Diffie-Hellman shared secret from the private key in
	// privKey and the peer's public key in pubKey. encoding specifies how the resulting bytes
	// are encoded in the returned string, such as hex or base64.
	// 
	// Two parties obtain the same result when each combines its own private key with
	// the other party's corresponding public key. Both keys must use the same named
	// curve and must be suitable EC keys.
	// 
	// Do not use the raw result directly as a long-term encryption key: A shared
	// secret is normally passed through the key-derivation function required by the
	// surrounding protocol, together with any required context, salt, or transcript
	// information. Key agreement by itself also does not authenticate the peer; an
	// unauthenticated exchange is vulnerable to a man-in-the-middle attack.
	// ECDH, not ECDSA: ECDSA is a signature algorithm. This method performs ECDH-style
	// key agreement.
	const wchar_t *sharedSecretENC(CkPrivateKeyW &privKey, CkPublicKeyW &pubKey, const wchar_t *encoding);

	// Hashes the bytes currently contained in bdData and creates an ECDSA signature with
	// the EC private key in privKey. hashAlg selects the hash algorithm and may be sha256,
	// sha384, or sha512. encoding selects the textual encoding of the returned signature,
	// such as hex or base64. prng supplies the random source used during ECDSA
	// signature generation.
	// 
	// The signature's binary layout is controlled by AsnFormat[1]. The contents of the
	// BinData object are read but not modified.
	// 
	// Sign the exact bytes: Verification succeeds only when the verifier hashes the
	// same byte sequence with the same hash algorithm and uses the public key
	// corresponding to privKey.
	// Protect the signing nonce: Use a cryptographically secure Prng. Reusing or
	// predicting an ECDSA nonce can expose the private key.
	// 
	// References:
	// [1] #AsnFormat
	bool SignBd(CkBinDataW &bdData, const wchar_t *hashAlg, const wchar_t *encoding, CkPrivateKeyW &privKey, CkPrngW &prng, CkString &outStr);
	// Hashes the bytes currently contained in bdData and creates an ECDSA signature with
	// the EC private key in privKey. hashAlg selects the hash algorithm and may be sha256,
	// sha384, or sha512. encoding selects the textual encoding of the returned signature,
	// such as hex or base64. prng supplies the random source used during ECDSA
	// signature generation.
	// 
	// The signature's binary layout is controlled by AsnFormat[1]. The contents of the
	// BinData object are read but not modified.
	// 
	// Sign the exact bytes: Verification succeeds only when the verifier hashes the
	// same byte sequence with the same hash algorithm and uses the public key
	// corresponding to privKey.
	// Protect the signing nonce: Use a cryptographically secure Prng. Reusing or
	// predicting an ECDSA nonce can expose the private key.
	// 
	// References:
	// [1] #AsnFormat
	const wchar_t *signBd(CkBinDataW &bdData, const wchar_t *hashAlg, const wchar_t *encoding, CkPrivateKeyW &privKey, CkPrngW &prng);

	// Hashes the bytes in bdData and creates an ECDSA signature using the private key
	// associated with the certificate in cert. hashAlg selects sha256, sha384, or sha512;
	// encoding selects the textual encoding of the returned signature.
	// 
	// The certificate must contain an EC public key and must provide access to its
	// corresponding private key. The private key may be embedded with the certificate
	// or supplied through the platform or key-storage mechanism from which the
	// certificate was loaded. Signature layout is controlled by AsnFormat[1].
	// 
	// Certificate versus key: The certificate identifies the public key and may
	// describe the key owner, but signing requires actual access to the associated
	// private key. A public-only certificate cannot sign.
	// 
	// References:
	// [1] #AsnFormat
	bool SignBdUsingCert(CkBinDataW &bdData, const wchar_t *hashAlg, const wchar_t *encoding, CkCertW &cert, CkString &outStr);
	// Hashes the bytes in bdData and creates an ECDSA signature using the private key
	// associated with the certificate in cert. hashAlg selects sha256, sha384, or sha512;
	// encoding selects the textual encoding of the returned signature.
	// 
	// The certificate must contain an EC public key and must provide access to its
	// corresponding private key. The private key may be embedded with the certificate
	// or supplied through the platform or key-storage mechanism from which the
	// certificate was loaded. Signature layout is controlled by AsnFormat[1].
	// 
	// Certificate versus key: The certificate identifies the public key and may
	// describe the key owner, but signing requires actual access to the associated
	// private key. A public-only certificate cannot sign.
	// 
	// References:
	// [1] #AsnFormat
	const wchar_t *signBdUsingCert(CkBinDataW &bdData, const wchar_t *hashAlg, const wchar_t *encoding, CkCertW &cert);

	// Creates an ECDSA signature over a digest that has already been computed by the
	// application. encodedHash contains the digest encoded using the binary encoding named by
	// encoding, such as hex or base64. privkey supplies the EC private key, and prng supplies
	// the random source used during signature generation.
	// 
	// The returned signature uses the same textual encoding named by encoding. Its binary
	// layout is controlled by AsnFormat[1]: ASN.1 DER when true, or raw r || s when
	// false.
	// 
	// No hashing is performed: encodedHash must be the exact digest required by the protocol.
	// The verifier must use the same digest bytes and the matching public key.
	// ECDSA nonce safety: Every signature requires a secret per-signature value. It
	// must be generated securely and must never be reused with the same private key,
	// because nonce reuse or predictability can reveal the private key. Supply a
	// properly initialized cryptographic Prng.
	// 
	// References:
	// [1] #AsnFormat
	bool SignHashENC(const wchar_t *encodedHash, const wchar_t *encoding, CkPrivateKeyW &privkey, CkPrngW &prng, CkString &outStr);
	// Creates an ECDSA signature over a digest that has already been computed by the
	// application. encodedHash contains the digest encoded using the binary encoding named by
	// encoding, such as hex or base64. privkey supplies the EC private key, and prng supplies
	// the random source used during signature generation.
	// 
	// The returned signature uses the same textual encoding named by encoding. Its binary
	// layout is controlled by AsnFormat[1]: ASN.1 DER when true, or raw r || s when
	// false.
	// 
	// No hashing is performed: encodedHash must be the exact digest required by the protocol.
	// The verifier must use the same digest bytes and the matching public key.
	// ECDSA nonce safety: Every signature requires a secret per-signature value. It
	// must be generated securely and must never be reused with the same private key,
	// because nonce reuse or predictability can reveal the private key. Supply a
	// properly initialized cryptographic Prng.
	// 
	// References:
	// [1] #AsnFormat
	const wchar_t *signHashENC(const wchar_t *encodedHash, const wchar_t *encoding, CkPrivateKeyW &privkey, CkPrngW &prng);

	// Creates an ECDSA signature over a digest that has already been computed. encodedHash
	// contains the digest encoded using the binary encoding named by encoding. cert
	// supplies a certificate whose public key is EC and whose associated private key
	// is accessible for signing.
	// 
	// The returned signature uses the same textual encoding named by encoding. Its binary
	// layout is controlled by AsnFormat[1].
	// 
	// No hashing is performed: encodedHash must contain the final digest bytes expected by
	// the receiving protocol. Use SignBdUsingCert[2] when Chilkat should hash the
	// source data before signing.
	// Private-key requirement: A certificate containing only a public key is not
	// sufficient. The associated EC private key must be present and usable.
	// 
	// References:
	// [1] #AsnFormat
	// [2] #SignBdUsingCert
	bool SignHashUsingCert(const wchar_t *encodedHash, const wchar_t *encoding, CkCertW &cert, CkString &outStr);
	// Creates an ECDSA signature over a digest that has already been computed. encodedHash
	// contains the digest encoded using the binary encoding named by encoding. cert
	// supplies a certificate whose public key is EC and whose associated private key
	// is accessible for signing.
	// 
	// The returned signature uses the same textual encoding named by encoding. Its binary
	// layout is controlled by AsnFormat[1].
	// 
	// No hashing is performed: encodedHash must contain the final digest bytes expected by
	// the receiving protocol. Use SignBdUsingCert[2] when Chilkat should hash the
	// source data before signing.
	// Private-key requirement: A certificate containing only a public key is not
	// sufficient. The associated EC private key must be present and usable.
	// 
	// References:
	// [1] #AsnFormat
	// [2] #SignBdUsingCert
	const wchar_t *signHashUsingCert(const wchar_t *encodedHash, const wchar_t *encoding, CkCertW &cert);

	// Hashes the bytes in bdData using the algorithm named by hashAlg and verifies the
	// ECDSA signature in encodedSig with the EC public key in pubkey. encoding identifies the
	// textual encoding of the signature, such as hex or base64. Supported hash
	// algorithms are sha256, sha384, and sha512.
	// 
	// Chilkat automatically recognizes ASN.1 DER and raw r || s signature layouts.
	// 
	// +--------+----------------------------------------------+
	// | Return |                   Meaning                    |
	// +========+==============================================+
	// | 1      | Valid signature.                             |
	// +--------+----------------------------------------------+
	// | 0      | Invalid signature.                           |
	// +--------+----------------------------------------------+
	// | -1     | Operational failure; examine LastErrorText . |
	// +--------+----------------------------------------------+
	// 
	// Exact-data requirement: A valid signature becomes invalid if any signed byte
	// changes or if a different hash algorithm is selected.
	int VerifyBd(CkBinDataW &bdData, const wchar_t *hashAlg, const wchar_t *encodedSig, const wchar_t *encoding, CkPublicKeyW &pubkey);

	// Verifies an ECDSA signature over a digest that was computed by the application.
	// encodedHash is the encoded digest, encodedSig is the encoded signature, encoding names the binary
	// encoding used by both strings, and pubkey supplies the matching EC public key.
	// 
	// Chilkat automatically recognizes both supported ECDSA signature layouts: ASN.1
	// DER and fixed-width raw r || s. The AsnFormat[1] property therefore does not
	// need to match the signature being verified.
	// 
	// +--------+---------------------------------------------------------------------+
	// | Return |                               Meaning                               |
	// +========+=====================================================================+
	// | 1      | The signature is valid for the supplied digest and public key.      |
	// +--------+---------------------------------------------------------------------+
	// | 0      | The method ran successfully, but the signature is not valid.        |
	// +--------+---------------------------------------------------------------------+
	// | -1     | The verification operation could not be completed because of        |
	// |        | malformed input, an unsuitable key, an unsupported encoding, or     |
	// |        | another error. Examine LastErrorText .                              |
	// +--------+---------------------------------------------------------------------+
	// 
	// Digest-level verification: This method does not hash the original message. It
	// verifies only the digest bytes supplied in encodedHash.
	// 
	// References:
	// [1] #AsnFormat
	int VerifyHashENC(const wchar_t *encodedHash, const wchar_t *encodedSig, const wchar_t *encoding, CkPublicKeyW &pubkey);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
