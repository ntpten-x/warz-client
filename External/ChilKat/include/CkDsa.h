// CkDsa.h: interface for the CkDsa class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkDsa_H
#define _CkDsa_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkBinData;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkDsa
class CK_VISIBLE_PUBLIC CkDsa  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkDsa(const CkDsa &);
	CkDsa &operator=(const CkDsa &);

    public:
	CkDsa(void);
	virtual ~CkDsa(void);

	static CkDsa *createNew(void);
	static CkDsa *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Specifies the size, in bits, of the DSA subgroup parameter Q used by the legacy
	// GenKey method. The default is 160. This also determines the natural size of the
	// DSA signature components r and s.
	// 
	// Applications should normally leave this property at its default. When an
	// explicit standards-era (L, N) parameter pair is required, use GenKey2, where L
	// is the bit length of P and N is the bit length of Q.
	// 
	// Legacy algorithm: NIST FIPS 186-5 no longer approves DSA for generating new
	// digital signatures. Retain DSA generation and signing only for interoperability
	// with systems or data formats that specifically require it; DSA verification
	// remains useful for legacy signatures.
	int get_GroupSize(void);
	// Specifies the size, in bits, of the DSA subgroup parameter Q used by the legacy
	// GenKey method. The default is 160. This also determines the natural size of the
	// DSA signature components r and s.
	// 
	// Applications should normally leave this property at its default. When an
	// explicit standards-era (L, N) parameter pair is required, use GenKey2, where L
	// is the bit length of P and N is the bit length of Q.
	// 
	// Legacy algorithm: NIST FIPS 186-5 no longer approves DSA for generating new
	// digital signatures. Retain DSA generation and signing only for interoperability
	// with systems or data formats that specifically require it; DSA verification
	// remains useful for legacy signatures.
	void put_GroupSize(int newVal);

	// Returns the DSA domain parameter G, the generator of the subgroup of order Q
	// modulo P.
	// 
	// The returned text is a hexadecimal encoding of Chilkat's SSH1-format bignum
	// representation, which includes a two-byte bit-length prefix followed by the
	// unsigned integer bytes.
	// 
	void get_HexG(CkString &str);
	// Returns the DSA domain parameter G, the generator of the subgroup of order Q
	// modulo P.
	// 
	// The returned text is a hexadecimal encoding of Chilkat's SSH1-format bignum
	// representation, which includes a two-byte bit-length prefix followed by the
	// unsigned integer bytes.
	// 
	const char *hexG(void);

	// Returns the DSA domain parameter P, the large prime modulus.
	// 
	// The returned text is a hexadecimal encoding of Chilkat's SSH1-format bignum
	// representation, which includes a two-byte bit-length prefix followed by the
	// unsigned integer bytes.
	// 
	void get_HexP(CkString &str);
	// Returns the DSA domain parameter P, the large prime modulus.
	// 
	// The returned text is a hexadecimal encoding of Chilkat's SSH1-format bignum
	// representation, which includes a two-byte bit-length prefix followed by the
	// unsigned integer bytes.
	// 
	const char *hexP(void);

	// Returns the DSA domain parameter Q, a prime divisor of P - 1. The bit length of
	// Q is commonly written as N and determines the range of the private value X and
	// signature components r and s.
	// 
	// The returned text is a hexadecimal encoding of Chilkat's SSH1-format bignum
	// representation, which includes a two-byte bit-length prefix followed by the
	// unsigned integer bytes.
	// 
	void get_HexQ(CkString &str);
	// Returns the DSA domain parameter Q, a prime divisor of P - 1. The bit length of
	// Q is commonly written as N and determines the range of the private value X and
	// signature components r and s.
	// 
	// The returned text is a hexadecimal encoding of Chilkat's SSH1-format bignum
	// representation, which includes a two-byte bit-length prefix followed by the
	// unsigned integer bytes.
	// 
	const char *hexQ(void);

	// Returns the DSA private value X. It is present only when the object contains a
	// private key and satisfies 0 < X < Q.
	// 
	// The returned text is a hexadecimal encoding of Chilkat's SSH1-format bignum
	// representation, which includes a two-byte bit-length prefix followed by the
	// unsigned integer bytes.
	// 
	// Sensitive value: Anyone who obtains X can create signatures as the key owner. Do
	// not log, transmit, or persist this value unless it is protected as private-key
	// material.
	void get_HexX(CkString &str);
	// Returns the DSA private value X. It is present only when the object contains a
	// private key and satisfies 0 < X < Q.
	// 
	// The returned text is a hexadecimal encoding of Chilkat's SSH1-format bignum
	// representation, which includes a two-byte bit-length prefix followed by the
	// unsigned integer bytes.
	// 
	// Sensitive value: Anyone who obtains X can create signatures as the key owner. Do
	// not log, transmit, or persist this value unless it is protected as private-key
	// material.
	const char *hexX(void);

	// Returns the DSA public value Y, where Y = GX mod P. It is available when either
	// a public or private DSA key is loaded.
	// 
	// The returned text is a hexadecimal encoding of Chilkat's SSH1-format bignum
	// representation, which includes a two-byte bit-length prefix followed by the
	// unsigned integer bytes.
	// 
	void get_HexY(CkString &str);
	// Returns the DSA public value Y, where Y = GX mod P. It is available when either
	// a public or private DSA key is loaded.
	// 
	// The returned text is a hexadecimal encoding of Chilkat's SSH1-format bignum
	// representation, which includes a two-byte bit-length prefix followed by the
	// unsigned integer bytes.
	// 
	const char *hexY(void);

	// Reserved for uncommon or compatibility-specific options. The default is the
	// empty string, and applications should normally leave this property unchanged
	// unless Chilkat documentation or support identifies a specific keyword required
	// for the target system.
	// 
	void get_UncommonOptions(CkString &str);
	// Reserved for uncommon or compatibility-specific options. The default is the
	// empty string, and applications should normally leave this property unchanged
	// unless Chilkat documentation or support identifies a specific keyword required
	// for the target system.
	// 
	const char *uncommonOptions(void);
	// Reserved for uncommon or compatibility-specific options. The default is the
	// empty string, and applications should normally leave this property unchanged
	// unless Chilkat documentation or support identifies a specific keyword required
	// for the target system.
	// 
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Loads a DSA private key from the DER-encoded bytes in derData. On success, the
	// object contains both the private and public key components and can sign or
	// verify digests.
	// 
	// Private-key handling: The input contains secret key material. Keep it out of
	// logs and protect any storage or transport that carries these bytes.
	bool FromDer(CkByteData &derData);


	// Loads a DSA private key from the DER bytes contained in the BinData object
	// passed in bd. Returns true on successful decoding.
	// 
	// Private-key handling: The BinData content contains secret key material and
	// should be cleared or released when no longer needed.
	bool FromDerBd(CkBinData &bd);


	// Loads a DSA private key from the DER-encoded file specified by path. Returns
	// true when the file is read and decoded successfully; otherwise returns
	// false.
	// 
	// Private-key handling: Restrict access to the file because it contains secret key
	// material. Check LastErrorText when loading fails.
	bool FromDerFile(const char *path);


	// Loads a DSA private key from the PEM text in pemData. password supplies the password
	// when the PEM is encrypted. If the PEM is unencrypted, the password is ignored
	// and the key is loaded normally.
	// 
	// Returns true on success and false if the PEM cannot be decoded, the password
	// is incorrect, or the contained key is not a supported DSA private key.
	// 
	// Security: Do not embed production passwords in source code or log the PEM text.
	// Prefer protected secret storage and encrypted private-key files where practical.
	bool FromEncryptedPem(const char *password, const char *pemData);


	// Loads an unencrypted DSA private key from the PEM text in pemData. On success, the
	// object contains the private key and its corresponding public components.
	// 
	// Unencrypted private key: PEM armor is only a text encoding; it does not protect
	// the private key. Treat the string as highly sensitive and use FromEncryptedPem
	// when password-protected PEM is available.
	bool FromPem(const char *pemData);


	// Loads a DSA public key from the DER-encoded bytes in derData. A public key can be
	// used with Verify and can be exported, but it cannot be used by SignHash.
	// 
	bool FromPublicDer(CkByteData &derData);


	// Loads a DSA public key from the DER bytes contained in the BinData object passed
	// in bd. The resulting key can verify signatures but cannot sign.
	// 
	bool FromPublicDerBd(CkBinData &bd);


	// Loads a DSA public key from the DER-encoded file specified by path. Returns
	// true when the file is read and decoded successfully; otherwise returns
	// false.
	// 
	bool FromPublicDerFile(const char *path);


	// Loads a DSA public key from the PEM text in pemData. Returns true when the PEM
	// contains a supported DSA public key and is decoded successfully.
	// 
	bool FromPublicPem(const char *pemData);


	// Loads a DSA public or private key from the XML text in xmlKey. The XML content
	// determines whether the resulting object contains public components only or also
	// includes the private value X.
	// 
	// Security: XML is only a representation format. If the XML contains X, it
	// contains the complete private key and must be protected accordingly.
	bool FromXml(const char *xmlKey);


	// Generates a new DSA key pair with a P size of numBits bits. numBits must be at least
	// 1024 and a multiple of 64. This legacy method uses the subgroup size selected by
	// GroupSize, whose default is 160 bits.
	// 
	// For explicit standard parameter pairs such as (2048, 224) or (3072, 256), use
	// GenKey2.
	// 
	// Legacy algorithm: DSA signature generation is no longer approved by FIPS 186-5.
	// Generate new DSA keys only when required for compatibility with an existing
	// protocol, key store, or signature format.
	bool GenKey(int numBits);


	// Generates a new DSA key pair using an explicit (L, N) parameter-size
	// combination. keyLenBits is L, the bit length of the prime modulus P. modLenBits is N, the
	// bit length of the subgroup prime Q.
	// 
	// +------+------------+-----------------------------------+
	// |  L   |     N      | Historical FIPS 186-4 combination |
	// +======+============+===================================+
	// | 1024 | 160        | Legacy                            |
	// +------+------------+-----------------------------------+
	// | 2048 | 224 or 256 | Supported parameter pairs         |
	// +------+------------+-----------------------------------+
	// | 3072 | 256        | Largest listed pair               |
	// +------+------------+-----------------------------------+
	// 
	// Current standards status: These combinations come from the superseded FIPS 186-4
	// DSA specification. FIPS 186-5 no longer approves DSA signature generation; use
	// this method only for compatibility.
	bool GenKey2(int keyLenBits, int modLenBits);


	// Generates a new DSA key pair from OpenSSL-style DSA parameters supplied as
	// DER-encoded bytes in derBytes.
	// 
	// The supplied data contains DSA domain parameters P, Q, and G, not an existing
	// private key. Chilkat validates or imports those parameters and generates a fresh
	// private value X and corresponding public value Y.
	// 
	bool GenKeyFromParamsDer(CkByteData &derBytes);


	// Generates a new DSA key pair from OpenSSL-style DSA parameters stored as DER
	// bytes in the BinData object passed in bd.
	// 
	// The supplied data contains DSA domain parameters P, Q, and G, not an existing
	// private key. Chilkat validates or imports those parameters and generates a fresh
	// private value X and corresponding public value Y.
	// 
	bool GenKeyFromParamsDerBd(CkBinData &bd);


	// Generates a new DSA key pair from the OpenSSL-style DER DSA-parameters file
	// specified by path.
	// 
	// The supplied data contains DSA domain parameters P, Q, and G, not an existing
	// private key. Chilkat validates or imports those parameters and generates a fresh
	// private value X and corresponding public value Y.
	// 
	// Returns true when the parameters are loaded and a key pair is generated
	// successfully.
	// 
	bool GenKeyFromParamsDerFile(const char *path);


	// Generates a new DSA key pair from OpenSSL-style DSA parameters supplied as PEM
	// text in pem.
	// 
	// The supplied data contains DSA domain parameters P, Q, and G, not an existing
	// private key. Chilkat validates or imports those parameters and generates a fresh
	// private value X and corresponding public value Y.
	// 
	bool GenKeyFromParamsPem(const char *pem);


	// Generates a new DSA key pair from the OpenSSL-style PEM DSA-parameters file
	// specified by path.
	// 
	// The supplied data contains DSA domain parameters P, Q, and G, not an existing
	// private key. Chilkat validates or imports those parameters and generates a fresh
	// private value X and corresponding public value Y.
	// 
	// A typical parameter file is PEM-armored with a BEGIN DSA PARAMETERS header. The
	// newly generated private key can be exported with the applicable To* methods.
	// 
	bool GenKeyFromParamsPemFile(const char *path);


	// Generates a new DSA private/public key pair using the preselected domain
	// parameters P, Q, and G supplied in pHex, qHex, and gHex.
	// 
	// Each argument is hexadecimal text in Chilkat's SSH1-format bignum
	// representation. Chilkat generates a fresh private value X and derives Y; the
	// supplied values are domain parameters, not an existing key pair.
	// 
	// Parameter provenance: Only use DSA parameters obtained from a trusted, validated
	// source. Malformed or maliciously chosen domain parameters can undermine
	// signature security.
	bool GenKeyFromPQG(const char *pHex, const char *qHex, const char *gHex);


	// Returns the current Hash bytes encoded according to encoding. Use hex or base64.
	// 
	// This method does not compute a hash; it only converts the bytes already stored
	// in the Hash property to text.
	// 
	bool GetEncodedHash(const char *encoding, CkString &outStr);

	// Returns the current Hash bytes encoded according to encoding. Use hex or base64.
	// 
	// This method does not compute a hash; it only converts the bytes already stored
	// in the Hash property to text.
	// 
	const char *getEncodedHash(const char *encoding);
	// Returns the current Hash bytes encoded according to encoding. Use hex or base64.
	// 
	// This method does not compute a hash; it only converts the bytes already stored
	// in the Hash property to text.
	// 
	const char *encodedHash(const char *encoding);


	// Returns the current Signature bytes encoded according to encoding. Use hex or
	// base64.
	// 
	// After a successful SignHash call, the returned bytes are the ASN.1 DER-encoded
	// DSA signature containing the integers r and s.
	// 
	bool GetEncodedSignature(const char *encoding, CkString &outStr);

	// Returns the current Signature bytes encoded according to encoding. Use hex or
	// base64.
	// 
	// After a successful SignHash call, the returned bytes are the ASN.1 DER-encoded
	// DSA signature containing the integers r and s.
	// 
	const char *getEncodedSignature(const char *encoding);
	// Returns the current Signature bytes encoded according to encoding. Use hex or
	// base64.
	// 
	// After a successful SignHash call, the returned bytes are the ASN.1 DER-encoded
	// DSA signature containing the integers r and s.
	// 
	const char *encodedSignature(const char *encoding);


	// Loads the entire file specified by path and returns its contents as text using
	// the legacy ANSI character encoding.
	// 
	// Encoding note: This convenience method is suitable for ASCII-compatible PEM and
	// similar legacy text. It is not a general Unicode file reader; use an API with an
	// explicit character encoding when UTF-8 or other Unicode text must be preserved.
	bool LoadText(const char *path, CkString &outStr);

	// Loads the entire file specified by path and returns its contents as text using
	// the legacy ANSI character encoding.
	// 
	// Encoding note: This convenience method is suitable for ASCII-compatible PEM and
	// similar legacy text. It is not a general Unicode file reader; use an API with an
	// explicit character encoding when UTF-8 or other Unicode text must be preserved.
	const char *loadText(const char *path);

	// Writes strToSave to the file specified by path using the legacy ANSI character
	// encoding. Returns true on success.
	// 
	// Encoding note: This convenience method is appropriate for ASCII-compatible PEM
	// text. It can lose characters that are not representable in the active ANSI
	// encoding, so use an explicitly encoded text-writing API for general Unicode
	// content.
	bool SaveText(const char *strToSave, const char *path);


	// Decodes encodedHash using the encoding named by encoding and stores the resulting bytes in
	// the Hash property. Use hex or base64.
	// 
	// The decoded value must be the already-computed message digest that will be
	// signed by SignHash or checked by Verify.
	// 
	bool SetEncodedHash(const char *encoding, const char *encodedHash);


	// Decodes the signature text in encodedSig using the encoding named by encoding and stores
	// the resulting bytes in the Signature property. Use hex or base64.
	// 
	// The decoded bytes are expected to contain the ASN.1 DER-encoded DSA signature.
	// Set the corresponding Hash and public key before calling Verify.
	// 
	bool SetEncodedSignature(const char *encoding, const char *encodedSig);


	// Builds the DSA signature from separately encoded r and s integer values. encoding
	// identifies the encoding used by both encodedR and encodedS; use hex or base64.
	// 
	// On success, Signature contains the ASN.1 DER SEQUENCE of the two integers and is
	// ready for use with Verify.
	// 
	bool SetEncodedSignatureRS(const char *encoding, const char *encodedR, const char *encodedS);


	// Loads a DSA private key from explicitly supplied components. groupSizeInBytes is the size of
	// Q in bytes. pHex, qHex, gHex, and xHex provide P, Q, G, and the private value X,
	// respectively.
	// 
	// The corresponding public value Y = GX mod P is derived from the private key.
	// 
	// SSH1 bignums: Each component string is hexadecimal text representing an
	// SSH1-format bignum: a two-byte bit-length prefix followed by the unsigned
	// integer bytes.
	// Sensitive value: xHex contains the private key. Do not expose it in logs or
	// transmit it over an unprotected channel.
	bool SetKeyExplicit(int groupSizeInBytes, const char *pHex, const char *qHex, const char *gHex, const char *xHex);


	// Loads a DSA public key from explicitly supplied components. groupSizeInBytes is the size of
	// Q in bytes. pHex, qHex, gHex, and yHex provide P, Q, G, and the public value Y,
	// respectively.
	// 
	// The resulting object can verify DSA signatures but cannot create them.
	// 
	// SSH1 bignums: Each component string is hexadecimal text representing an
	// SSH1-format bignum: a two-byte bit-length prefix followed by the unsigned
	// integer bytes.
	bool SetPubKeyExplicit(int groupSizeInBytes, const char *pHex, const char *qHex, const char *gHex, const char *yHex);


	// Creates a DSA signature over the digest currently stored in Hash. A DSA private
	// key must be loaded, and the digest must be set directly or with SetEncodedHash
	// before this method is called.
	// 
	// On success, Signature contains an ASN.1 DER-encoded sequence of the DSA values r
	// and s. Retrieve it with GetEncodedSignature or read the Signature property.
	// 
	// Security-critical nonce: Each DSA signature requires a secret per-signature
	// value. Reuse or poor generation of that value can reveal the private key.
	// Chilkat performs this generation internally; applications should not attempt to
	// reuse signature state.
	// Standards status: FIPS 186-5 no longer approves DSA for generating new
	// signatures. Use this method only for required legacy interoperability.
	bool SignHash(void);


	// Returns the loaded DSA private key as DER-encoded bytes. A private key must be
	// present; a public-only key cannot be exported by this method.
	// 
	// Sensitive output: The returned bytes contain the private key and must be
	// protected in memory, storage, and transit.
	bool ToDer(CkByteData &outBytes);


	// Writes the DER-encoded DSA private key to the BinData object passed in bd.
	// Returns true on success.
	// 
	// Sensitive output: The destination contains unencrypted private-key bytes after a
	// successful call. Protect and clear it appropriately.
	bool ToDerBd(CkBinData &bd);


	// Writes the loaded DSA private key to the DER file specified by path. Returns
	// true on success.
	// 
	// Sensitive output: The file contains unencrypted private-key material. Apply
	// restrictive filesystem permissions and avoid writing it to shared or temporary
	// locations.
	bool ToDerFile(const char *path);


	// Returns the loaded DSA private key as password-encrypted PEM text using password as
	// the password.
	// 
	// Password protection: Use a strong password and protect it separately from the
	// PEM. Encrypted PEM reduces exposure at rest but does not make it safe to log or
	// transmit indiscriminately.
	bool ToEncryptedPem(const char *password, CkString &outStr);

	// Returns the loaded DSA private key as password-encrypted PEM text using password as
	// the password.
	// 
	// Password protection: Use a strong password and protect it separately from the
	// PEM. Encrypted PEM reduces exposure at rest but does not make it safe to log or
	// transmit indiscriminately.
	const char *toEncryptedPem(const char *password);

	// Returns the loaded DSA private key as unencrypted PEM text.
	// 
	// Unencrypted private key: PEM armor is not encryption. Anyone who obtains this
	// text can use the private key, so prefer ToEncryptedPem when password protection
	// is required.
	bool ToPem(CkString &outStr);

	// Returns the loaded DSA private key as unencrypted PEM text.
	// 
	// Unencrypted private key: PEM armor is not encryption. Anyone who obtains this
	// text can use the private key, so prefer ToEncryptedPem when password protection
	// is required.
	const char *toPem(void);

	// Returns the public portion of the loaded DSA key as DER-encoded bytes. This
	// works whether the object contains a public key or a private key with a
	// corresponding public value.
	// 
	bool ToPublicDer(CkByteData &outBytes);


	// Writes the DER-encoded public portion of the loaded DSA key to the BinData
	// object passed in bd. Returns true on success.
	// 
	bool ToPublicDerBd(CkBinData &bd);


	// Writes the public portion of the loaded DSA key to the DER file specified by
	// path. Returns true on success.
	// 
	bool ToPublicDerFile(const char *path);


	// Returns the public portion of the loaded DSA key as PEM text. Public-key PEM may
	// be distributed to parties that need to verify signatures; it does not contain
	// the private value X.
	// 
	bool ToPublicPem(CkString &outStr);

	// Returns the public portion of the loaded DSA key as PEM text. Public-key PEM may
	// be distributed to parties that need to verify signatures; it does not contain
	// the private value X.
	// 
	const char *toPublicPem(void);

	// Returns the loaded DSA key as XML. Set bPublicOnly to true to export public
	// components only. Set it to false to include the private component when a
	// private key is loaded.
	// 
	// Security: When bPublicOnly is false, the XML can contain the private value X. Protect
	// it as private-key material.
	bool ToXml(bool bPublicOnly, CkString &outStr);

	// Returns the loaded DSA key as XML. Set bPublicOnly to true to export public
	// components only. Set it to false to include the private component when a
	// private key is loaded.
	// 
	// Security: When bPublicOnly is false, the XML can contain the private value X. Protect
	// it as private-key material.
	const char *toXml(bool bPublicOnly);

	// Verifies the DSA signature currently stored in Signature against the digest
	// stored in Hash, using the loaded public key. Both values must be set before
	// calling this method.
	// 
	// Returns true only when the signature is valid. A false result can indicate
	// an invalid signature, malformed input, an incompatible key, or another
	// operational error; inspect LastErrorText when the reason matters.
	// 
	bool Verify(void);


	// Checks the mathematical validity and internal consistency of the DSA public or
	// private key currently loaded in the object. Returns true when the key
	// parameters and available key components pass validation.
	// 
	// This does not establish who owns the key, whether the key came from a trusted
	// source, or whether it is suitable for a particular protocol.
	// 
	bool VerifyKey(void);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
