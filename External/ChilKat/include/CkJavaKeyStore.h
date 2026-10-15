// CkJavaKeyStore.h: interface for the CkJavaKeyStore class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkJavaKeyStore_H
#define _CkJavaKeyStore_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkPfx;
class CkCert;
class CkCertChain;
class CkPrivateKey;
class CkBinData;
class CkByteData;
class CkJsonObject;
class CkStringBuilder;
class CkPem;
class CkXmlCertVault;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkJavaKeyStore
class CK_VISIBLE_PUBLIC CkJavaKeyStore  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkJavaKeyStore(const CkJavaKeyStore &);
	CkJavaKeyStore &operator=(const CkJavaKeyStore &);

    public:
	CkJavaKeyStore(void);
	virtual ~CkJavaKeyStore(void);

	static CkJavaKeyStore *createNew(void);
	static CkJavaKeyStore *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the number of private-key entries currently contained in the keystore.
	// Each private-key entry has an alias, a protected private key, and an associated
	// certificate chain. Valid private-key indexes range from 0 through NumPrivateKeys
	// - 1.
	// Entry password versus store password: The private key in each entry may have its
	// own password. That entry password is supplied to methods such as PrivateKeyAt[1]
	// and PrivateKeyOf[2]. It is distinct from the store password used when loading or
	// saving the complete keystore.
	// 
	// References:
	// [1] #PrivateKeyAt
	// [2] #PrivateKeyOf
	int get_NumPrivateKeys(void);

	// Returns the number of symmetric secret-key entries currently contained in the
	// keystore. Examples include AES, HMAC, Blowfish, and ChaCha key material. Valid
	// indexes range from 0 through NumSecretKeys - 1.
	// JCEKS entry type: Secret-key entries require the JCEKS format; the traditional
	// JKS format stores private-key entries and trusted-certificate entries but does
	// not provide the JCEKS secret-key entry type.
	int get_NumSecretKeys(void);

	// Returns the number of trusted-certificate entries currently contained in the
	// keystore. Each entry contains one certificate and an alias. Valid indexes range
	// from 0 through NumTrustedCerts - 1.
	// A trusted entry is not necessarily a root CA: Java keystores can mark any
	// certificate as trusted. The application or Java security configuration decides
	// what that trust means; this class does not validate the certificate merely
	// because it is stored as a trusted-certificate entry.
	int get_NumTrustedCerts(void);

	// Controls whether a complete certificate chain is required when a private-key
	// entry is added. The default is true. When enabled, AddPrivateKey[1] and
	// AddPfx[2] fail if Chilkat cannot build the chain through the issuing
	// certificates to a root or self-signed certificate. When set to false, an
	// incomplete chain may be stored.
	// Providing missing issuers: Call UseCertVault[3] to make additional certificates
	// available for chain construction. Trusted CA roots supplied through Chilkat
	// trusted-root facilities may also help complete the chain. This property affects
	// chain construction while adding entries; it does not perform application
	// trust-policy validation.
	// 
	// References:
	// [1] #AddPrivateKey
	// [2] #AddPfx
	// [3] #UseCertVault
	bool get_RequireCompleteChain(void);
	// Controls whether a complete certificate chain is required when a private-key
	// entry is added. The default is true. When enabled, AddPrivateKey[1] and
	// AddPfx[2] fail if Chilkat cannot build the chain through the issuing
	// certificates to a root or self-signed certificate. When set to false, an
	// incomplete chain may be stored.
	// Providing missing issuers: Call UseCertVault[3] to make additional certificates
	// available for chain construction. Trusted CA roots supplied through Chilkat
	// trusted-root facilities may also help complete the chain. This property affects
	// chain construction while adding entries; it does not perform application
	// trust-policy validation.
	// 
	// References:
	// [1] #AddPrivateKey
	// [2] #AddPfx
	// [3] #UseCertVault
	void put_RequireCompleteChain(bool newVal);

	// Controls validation of the keystore-level integrity digest when a JKS or JCEKS
	// store is loaded. The default is true. In this mode, the load method uses the
	// supplied store password to verify that the serialized keystore has not been
	// altered and that the password is appropriate for the store.
	// 
	// When set to false, a load method may be called with an empty password to read
	// the store without validating its integrity digest.
	// 
	// Security consequence: Disabling this check does not decrypt private or secret
	// key entries and does not make their entry passwords unnecessary. It only skips
	// store-level integrity verification, so corrupted or modified keystore data may
	// be accepted. Leave this property enabled for normal use.
	bool get_VerifyKeyedDigest(void);
	// Controls validation of the keystore-level integrity digest when a JKS or JCEKS
	// store is loaded. The default is true. In this mode, the load method uses the
	// supplied store password to verify that the serialized keystore has not been
	// altered and that the password is appropriate for the store.
	// 
	// When set to false, a load method may be called with an empty password to read
	// the store without validating its integrity digest.
	// 
	// Security consequence: Disabling this check does not decrypt private or secret
	// key entries and does not make their entry passwords unnecessary. It only skips
	// store-level integrity verification, so corrupted or modified keystore data may
	// be accepted. Leave this property enabled for normal use.
	void put_VerifyKeyedDigest(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Imports the private-key entries found in the Pfx object supplied in pfx. One
	// Java keystore private-key entry is added for each private key in the PFX/PKCS
	// #12 data. Certificates from the PFX are used to construct the certificate chain
	// associated with each imported private key.
	// 
	// alias specifies the alias for the first imported private key. If it is empty,
	// Chilkat chooses an alias in this order:
	// 
	//     1. The subject common name of the private key certificate.
	//     2. The subject email address.
	//     3. The PKCS #12 friendly-name attribute.
	//     4. The certificate serial number.
	// 
	// If the PFX contains additional private keys, their aliases are chosen
	// automatically using the same preference order. password becomes the entry password
	// used to protect the imported private keys in the Java keystore.
	// 
	// What is not imported: Standalone certificates from the PFX are not added as
	// trusted-certificate entries. They are used only as possible members of
	// private-key certificate chains. Call AddTrustedCert[1] separately when a
	// certificate should become an explicit trust entry.
	// Chain completion: If RequireCompleteChain[2] is enabled, the method fails when
	// any imported private-key chain cannot be completed. UseCertVault[3] can supply
	// additional issuer certificates.
	// 
	// References:
	// [1] #AddTrustedCert
	// [2] #RequireCompleteChain
	// [3] #UseCertVault
	bool AddPfx(CkPfx &pfx, const char *alias, const char *password);


	// Adds a private-key entry using the certificate in cert. The Cert object must
	// have access to its associated private key. Chilkat obtains that private key and
	// builds the certificate chain beginning with cert.
	// 
	// alias is the entry alias. If it is empty, Chilkat chooses an alias from the
	// certificate in this order: subject common name, subject email address, then
	// certificate serial number. password is the password used to protect the private key
	// inside the keystore.
	// 
	// Certificate-chain construction: A private-key entry consists of the private key
	// and the certificate chain for its public key. If RequireCompleteChain[1] is
	// enabled, the method fails unless the chain can be completed. Use UseCertVault[2]
	// when additional issuer certificates are needed.
	// 
	// References:
	// [1] #RequireCompleteChain
	// [2] #UseCertVault
	bool AddPrivateKey(CkCert &cert, const char *alias, const char *password);


	// Adds a symmetric secret-key entry. encodedKeyBytes contains the key bytes encoded as text,
	// and encoding names that encoding, such as hex, base64, or base64url. algorithm records
	// the key algorithm, such as AES, HMAC_SHA256, or CHACHA. alias is the alias, and
	// password is the password used to protect the key entry.
	// 
	// The algorithm value describes the intended key type; it does not transform the
	// supplied key bytes. For example, a 128-bit AES key is supplied as exactly 16
	// decoded bytes and algorithm is set to AES.
	// 
	// JCEKS and legacy protection: Secret-key entries are stored in JCEKS form. JCEKS
	// protects these entries using the legacy PBEWithMD5AndTripleDES mechanism defined
	// by that format. Use this format when interoperability requires JCEKS, and
	// protect both the entry password and the resulting file.
	bool AddSecretKey(const char *encodedKeyBytes, const char *encoding, const char *algorithm, const char *alias, const char *password);


	// Adds cert as a trusted-certificate entry under the alias supplied in alias. A
	// trusted-certificate entry contains the certificate only; it does not contain a
	// private key or a certificate chain.
	// Trust is an application decision: Adding a certificate as a trusted entry does
	// not prove that it is a CA certificate, validate its signature chain, or make it
	// universally trustworthy. It records that the keystore owner intends to trust
	// that certificate for the consuming Java application or security configuration.
	bool AddTrustedCert(CkCert &cert, const char *alias);


	// Loads certChain with the certificate chain belonging to the private-key entry at
	// zero-based index index. Valid indexes range from 0 through NumPrivateKeys[1] - 1.
	// The first certificate contains the public key corresponding to the private key;
	// subsequent certificates are issuing certificates toward the root.
	// 
	// References:
	// [1] #NumPrivateKeys
	bool CertChainAt(int index, CkCertChain &certChain);


	// Searches the private-key entries for an alias equal to alias and loads the
	// matching certificate chain into certChain. caseSensitive controls whether the alias comparison
	// is case-sensitive. The first certificate in the chain contains the public key
	// corresponding to the private key.
	// Alias case behavior: Java keystore implementations can differ in alias case
	// handling. Avoid aliases that differ only by case, even when a case-sensitive
	// search is requested.
	bool CertChainOf(const char *alias, bool caseSensitive, CkCertChain &certChain);


	// Changes the password protecting the private-key entry at index. Indexing begins
	// at 0. oldPassword is the current entry password and newPassword is the new entry password.
	// This does not change only the store password: A JKS/JCEKS store can have one
	// password for store-level integrity and separate passwords for private-key
	// entries. To migrate a keystore from one common password to another, load it
	// using the old store password, call this method for each private-key entry that
	// uses the old password, and then save the store using the new store password.
	bool ChangePassword(int index, const char *oldPassword, const char *newPassword);


	// Deprecated: Use CertChainOf[1] instead.
	// 
	// Returns the certificate chain belonging to the private-key entry whose alias
	// matches alias. caseSensitive controls whether alias matching is case-sensitive. The first
	// certificate in the returned chain corresponds to the private key.
	// 
	// 
	// References:
	// [1] #CertChainOf
	// The caller is responsible for deleting the object returned by this method.
	CkCertChain *FindCertChain(const char *alias, bool caseSensitive);


	// Deprecated: Use PrivateKeyOf[1] instead.
	// 
	// Returns the private key belonging to the entry whose alias matches alias. password is
	// the entry password used to recover the key, and caseSensitive controls whether alias
	// matching is case-sensitive.
	// 
	// 
	// References:
	// [1] #PrivateKeyOf
	// The caller is responsible for deleting the object returned by this method.
	CkPrivateKey *FindPrivateKey(const char *password, const char *alias, bool caseSensitive);


	// Deprecated: Use TrustedCertOf[1] instead.
	// 
	// Returns the trusted certificate whose alias matches alias. caseSensitive controls whether
	// alias matching is case-sensitive.
	// 
	// 
	// References:
	// [1] #TrustedCertOf
	// The caller is responsible for deleting the object returned by this method.
	CkCert *FindTrustedCert(const char *alias, bool caseSensitive);


	// Deprecated: Use CertChainAt[1] instead.
	// 
	// Returns the certificate chain for the private-key entry at index. Indexing begins
	// at 0, and the valid range is determined by NumPrivateKeys[2]. The first
	// certificate in the chain corresponds to the private key.
	// 
	// 
	// References:
	// [1] #CertChainAt
	// [2] #NumPrivateKeys
	// The caller is responsible for deleting the object returned by this method.
	CkCertChain *GetCertChain(int index);


	// Deprecated: Use PrivateKeyAt[1] instead.
	// 
	// Returns the private key for the entry at index. password is the password protecting
	// that private-key entry. Indexing begins at 0.
	// 
	// 
	// References:
	// [1] #PrivateKeyAt
	// The caller is responsible for deleting the object returned by this method.
	CkPrivateKey *GetPrivateKey(const char *password, int index);


	// Returns the alias of the private-key entry at index. Indexing begins at 0; valid
	// indexes range from 0 through NumPrivateKeys[1] - 1.
	// Alias portability: Java keystore alias case behavior is
	// implementation-dependent. Avoid creating aliases that differ only by letter
	// case, even when a Chilkat lookup method offers a case-sensitive option.
	// 
	// References:
	// [1] #NumPrivateKeys
	bool GetPrivateKeyAlias(int index, CkString &outStr);

	// Returns the alias of the private-key entry at index. Indexing begins at 0; valid
	// indexes range from 0 through NumPrivateKeys[1] - 1.
	// Alias portability: Java keystore alias case behavior is
	// implementation-dependent. Avoid creating aliases that differ only by letter
	// case, even when a Chilkat lookup method offers a case-sensitive option.
	// 
	// References:
	// [1] #NumPrivateKeys
	const char *getPrivateKeyAlias(int index);
	// Returns the alias of the private-key entry at index. Indexing begins at 0; valid
	// indexes range from 0 through NumPrivateKeys[1] - 1.
	// Alias portability: Java keystore alias case behavior is
	// implementation-dependent. Avoid creating aliases that differ only by letter
	// case, even when a Chilkat lookup method offers a case-sensitive option.
	// 
	// References:
	// [1] #NumPrivateKeys
	const char *privateKeyAlias(int index);


	// Recovers the secret-key entry at index and returns its raw key bytes encoded
	// using encoding. password is the password protecting that entry. Indexing begins at 0.
	// Common output encodings include hex, base64, and base64url.
	// Secret material: The returned text represents the actual symmetric key bytes,
	// not a fingerprint or identifier. Avoid writing it to logs, command histories, or
	// unprotected configuration files.
	bool GetSecretKey(const char *password, int index, const char *encoding, CkString &outStr);

	// Recovers the secret-key entry at index and returns its raw key bytes encoded
	// using encoding. password is the password protecting that entry. Indexing begins at 0.
	// Common output encodings include hex, base64, and base64url.
	// Secret material: The returned text represents the actual symmetric key bytes,
	// not a fingerprint or identifier. Avoid writing it to logs, command histories, or
	// unprotected configuration files.
	const char *getSecretKey(const char *password, int index, const char *encoding);
	// Recovers the secret-key entry at index and returns its raw key bytes encoded
	// using encoding. password is the password protecting that entry. Indexing begins at 0.
	// Common output encodings include hex, base64, and base64url.
	// Secret material: The returned text represents the actual symmetric key bytes,
	// not a fingerprint or identifier. Avoid writing it to logs, command histories, or
	// unprotected configuration files.
	const char *secretKey(const char *password, int index, const char *encoding);


	// Returns the alias of the secret-key entry at index. Indexing begins at 0; valid
	// indexes range from 0 through NumSecretKeys[1] - 1.
	// 
	// References:
	// [1] #NumSecretKeys
	bool GetSecretKeyAlias(int index, CkString &outStr);

	// Returns the alias of the secret-key entry at index. Indexing begins at 0; valid
	// indexes range from 0 through NumSecretKeys[1] - 1.
	// 
	// References:
	// [1] #NumSecretKeys
	const char *getSecretKeyAlias(int index);
	// Returns the alias of the secret-key entry at index. Indexing begins at 0; valid
	// indexes range from 0 through NumSecretKeys[1] - 1.
	// 
	// References:
	// [1] #NumSecretKeys
	const char *secretKeyAlias(int index);


	// Deprecated: Use TrustedCertAt[1] instead.
	// 
	// Returns the trusted certificate at index. Indexing begins at 0; the valid range
	// is determined by NumTrustedCerts[2].
	// 
	// 
	// References:
	// [1] #TrustedCertAt
	// [2] #NumTrustedCerts
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetTrustedCert(int index);


	// Returns the alias of the trusted-certificate entry at index. Indexing begins at
	// 0; valid indexes range from 0 through NumTrustedCerts[1] - 1.
	// 
	// References:
	// [1] #NumTrustedCerts
	bool GetTrustedCertAlias(int index, CkString &outStr);

	// Returns the alias of the trusted-certificate entry at index. Indexing begins at
	// 0; valid indexes range from 0 through NumTrustedCerts[1] - 1.
	// 
	// References:
	// [1] #NumTrustedCerts
	const char *getTrustedCertAlias(int index);
	// Returns the alias of the trusted-certificate entry at index. Indexing begins at
	// 0; valid indexes range from 0 through NumTrustedCerts[1] - 1.
	// 
	// References:
	// [1] #NumTrustedCerts
	const char *trustedCertAlias(int index);


	// Loads a JKS or JCEKS keystore from the bytes currently contained in bd. password
	// is the store password used for integrity verification when VerifyKeyedDigest[1]
	// is enabled.
	// 
	// References:
	// [1] #VerifyKeyedDigest
	bool LoadBd(const char *password, CkBinData &bd);


	// Loads a JKS or JCEKS keystore from the serialized bytes in jksData. password is the
	// store password used for store-level integrity verification when
	// VerifyKeyedDigest[1] is enabled.
	// Two password layers: Loading the store does not require Chilkat to decrypt every
	// private or secret key. The passwords protecting individual key entries are
	// supplied later when those keys are retrieved or exported.
	// 
	// References:
	// [1] #VerifyKeyedDigest
	bool LoadBinary(const char *password, CkByteData &jksData);


	// Decodes the serialized keystore text in jksEncData using the binary encoding named by
	// encoding, then loads the resulting JKS or JCEKS bytes. Common encodings include
	// base64, hex, and base64url. password is the store password used for integrity
	// verification.
	// Encoding is not encryption: encoding describes how binary keystore bytes are
	// represented as text. It does not name the keystore format and does not protect
	// the data cryptographically.
	bool LoadEncoded(const char *password, const char *jksEncData, const char *encoding);


	// Loads a JKS or JCEKS keystore from the file at path. password is the store password
	// used to verify the keystore-level integrity digest when VerifyKeyedDigest[1] is
	// enabled.
	// JKS/JCEKS versus PKCS #12: This class is intended for the proprietary Java JKS
	// and JCEKS formats. Modern Java releases use PKCS #12 as the default keystore
	// type; use Chilkat.Pfx when the input is a.p12 or.pfx container.
	// 
	// References:
	// [1] #VerifyKeyedDigest
	bool LoadFile(const char *password, const char *path);


	// Loads supported keys from the JWK Set in jwkSet into this Java keystore object.
	// password is used to protect imported private-key and secret-key entries. A JWK kid
	// value is used as the entry alias when present.
	// JWK Set structure: jwkSet should contain a JSON object with a keys array. Private
	// asymmetric JWKs contain private parameters such as d; symmetric JWKs use kty:
	// "oct" and contain the key in k. Treat the input as sensitive whenever it
	// contains private or symmetric key material.
	bool LoadJwkSet(const char *password, CkJsonObject &jwkSet);


	// Loads privKey with the private key at zero-based index index. password is the password
	// protecting that private-key entry. Valid indexes range from 0 through
	// NumPrivateKeys[1] - 1.
	// Use the entry password: password is not necessarily the password used to load the
	// complete keystore. Java keystores can protect each private-key entry with a
	// different password.
	// 
	// References:
	// [1] #NumPrivateKeys
	bool PrivateKeyAt(const char *password, int index, CkPrivateKey &privKey);


	// Searches the private-key entries for an alias equal to alias and loads the
	// matching private key into privKey. password is the password protecting that key entry,
	// and caseSensitive controls whether the alias comparison is case-sensitive.
	bool PrivateKeyOf(const char *password, const char *alias, bool caseSensitive, CkPrivateKey &privKey);


	// Removes an entry selected by type and zero-based index. entryType uses the following
	// documented values:
	// 
	// +------+-----------------------------------------------------------------------+
	// | entryType |                            Entry selected                             |
	// +======+=======================================================================+
	// | 1    | Trusted-certificate entry; index indexes the trusted-certificate list. |
	// +------+-----------------------------------------------------------------------+
	// | 2    | Private-key entry; index indexes the private-key list.                 |
	// +------+-----------------------------------------------------------------------+
	// 
	// index is an index within the selected entry category, not an index across all
	// entries in the keystore.
	// 
	// In-memory change: This method modifies the current object. Call ToFile[1],
	// ToBd[2], or another To* method to persist the updated keystore.
	// 
	// References:
	// [1] #ToFile
	// [2] #ToBd
	bool RemoveEntry(int entryType, int index);


	// Changes the alias of an entry selected by type and zero-based index. entryType uses
	// the following documented values:
	// 
	// +------+-----------------------------------------------------------------------+
	// | entryType |                            Entry selected                             |
	// +======+=======================================================================+
	// | 1    | Trusted-certificate entry; index indexes the trusted-certificate list. |
	// +------+-----------------------------------------------------------------------+
	// | 2    | Private-key entry; index indexes the private-key list.                 |
	// +------+-----------------------------------------------------------------------+
	// 
	// alias is the new alias. The index is relative to the selected category, not the
	// complete set of keystore entries.
	// 
	// Choose aliases carefully: Aliases identify entries within a Java keystore, but
	// case sensitivity is implementation-dependent. Use unique aliases that do not
	// differ only by case.
	bool SetAlias(int entryType, int index, const char *alias);


	// Serializes the current Java keystore and writes the complete JKS or JCEKS file
	// image to bd. password is the store password used to create the keystore-level
	// integrity digest.
	// Separate entry protection: Private-key and secret-key entries may have passwords
	// distinct from the store password. Serializing with password does not automatically
	// change those entry passwords.
	bool ToBd(const char *password, CkBinData &bd);


	// Serializes the current Java keystore and returns the complete JKS or JCEKS file
	// image as bytes. password is the store password used to create the keystore-level
	// integrity digest.
	// Store password versus entry passwords: The store password protects the integrity
	// of the serialized keystore. Private-key and secret-key entries may remain
	// protected by their own entry passwords, which were supplied when the entries
	// were added or changed. The store password is not general-purpose encryption for
	// all aliases and certificates in the file.
	bool ToBinary(const char *password, CkByteData &outBytes);


	// Serializes the current Java keystore and returns the resulting JKS or JCEKS
	// bytes encoded as text using encoding. Common choices include base64, hex, and
	// base64url. password is the store password used to create the keystore-level
	// integrity digest.
	bool ToEncodedString(const char *password, const char *encoding, CkString &outStr);

	// Serializes the current Java keystore and returns the resulting JKS or JCEKS
	// bytes encoded as text using encoding. Common choices include base64, hex, and
	// base64url. password is the store password used to create the keystore-level
	// integrity digest.
	const char *toEncodedString(const char *password, const char *encoding);

	// Serializes the current Java keystore and writes the complete JKS or JCEKS file
	// image to path. password is the store password used to create the keystore-level
	// integrity digest.
	// Password roles: The store password may differ from the passwords protecting
	// individual private-key or secret-key entries. Saving with a new store password
	// does not automatically change each entry password; use ChangePassword[1] for
	// private-key entries when needed.
	// 
	// References:
	// [1] #ChangePassword
	bool ToFile(const char *password, const char *path);


	// Exports supported private-key and secret-key entries as a JSON Web Key Set and
	// writes the JSON to sbJwkSet. password is used to recover protected key entries. Each
	// exported JWK receives a kid value derived from the keystore alias.
	// Sensitive output: A JWK containing private parameter d or symmetric parameter k
	// contains secret key material. Protect the resulting JSON as carefully as the
	// original keystore and do not log or transmit it over an untrusted channel.
	bool ToJwkSet(const char *password, CkStringBuilder &sbJwkSet);


	// Deprecated: Use ToPemObj[1] instead.
	// 
	// Converts the keystore material supported by the Pem class and returns a new Pem
	// object. password is used to decrypt private-key entries during the conversion.
	// 
	// Private-key password: The supplied password must recover the private-key entries
	// included in the conversion. The returned Pem object is an in-memory
	// representation; its later serialization settings determine how PEM output is
	// formatted or encrypted.
	// 
	// References:
	// [1] #ToPemObj
	// The caller is responsible for deleting the object returned by this method.
	CkPem *ToPem(const char *password);


	// Converts the keystore material supported by the Pem class and loads the result
	// into pemObj. password is used to decrypt private-key entries during the conversion.
	// Output handling: The destination Pem object receives the converted material in
	// memory. Its own export methods and properties control whether later PEM text is
	// encrypted and how it is formatted. Treat unencrypted private-key PEM as
	// sensitive data.
	bool ToPemObj(const char *password, CkPem &pemObj);


	// Deprecated: Use ToPfxObj[1] instead.
	// 
	// Converts the certificates and recoverable private-key entries in the Java
	// keystore to a new Pfx object. password is used to decrypt the private-key entries
	// being exported.
	// 
	// 
	// References:
	// [1] #ToPfxObj
	// The caller is responsible for deleting the object returned by this method.
	CkPfx *ToPfx(const char *password);


	// Converts the certificates and recoverable private-key entries in the Java
	// keystore and loads the result into pfxObj. password is used to decrypt private-key
	// entries during the conversion.
	// Conversion password: password is an input password for recovering the Java keystore
	// entries. It is not automatically the password that will protect a later
	// serialized PFX; use the destination Pfx export method to choose the PFX
	// password.
	bool ToPfxObj(const char *password, CkPfx &pfxObj);


	// Loads cert with the trusted certificate at the zero-based index index. Valid
	// indexes range from 0 through NumTrustedCerts[1] - 1. The returned certificate is
	// the single certificate stored in the trust entry and has no private key merely
	// by virtue of being trusted.
	// 
	// References:
	// [1] #NumTrustedCerts
	bool TrustedCertAt(int index, CkCert &cert);


	// Searches the trusted-certificate entries for an alias equal to alias and loads
	// the matching certificate into cert. caseSensitive controls whether the alias comparison
	// is case-sensitive.
	bool TrustedCertOf(const char *alias, bool caseSensitive, CkCert &cert);


	// Adds vault to the certificate sources Chilkat searches when it needs issuer
	// certificates to build a private-key certificate chain. This is useful before
	// calling AddPrivateKey[1] or AddPfx[2] when the supplied certificate material
	// does not already contain the complete chain.
	// Lookup source only: Registering a certificate vault does not copy all vault
	// certificates into the Java keystore and does not create trusted-certificate
	// entries. Certificates are consulted only as candidates for chain construction.
	// 
	// References:
	// [1] #AddPrivateKey
	// [2] #AddPfx
	bool UseCertVault(CkXmlCertVault &vault);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
