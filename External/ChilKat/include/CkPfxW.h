// CkPfxW.h: interface for the CkPfxW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkPfxW_H
#define _CkPfxW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkCertW;
class CkPrivateKeyW;
class CkCertChainW;
class CkJsonObjectW;
class CkBinDataW;
class CkByteData;
class CkJavaKeyStoreW;
class CkXmlCertVaultW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkPfxW
class CK_VISIBLE_PUBLIC CkPfxW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkPfxW(const CkPfxW &);
	CkPfxW &operator=(const CkPfxW &);

    public:
	CkPfxW(void);
	virtual ~CkPfxW(void);

	

	static CkPfxW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Gets or sets the password-based encryption scheme used for PKCS#8 shrouded
	// private-key bags when writing a PFX. After a PFX is loaded, this property
	// reports the scheme found for the loaded shrouded key bag.
	// 
	// The default is pbeWithSHAAnd3_KeyTripleDES_CBC for backward compatibility. Set
	// this property to pbes2 to use the cipher and PBKDF2 HMAC choices specified by
	// Pbes2CryptAlg[1] and Pbes2HmacAlg[2].
	// 
	// Scope: This property selects protection for private-key bags. It does not select
	// the certificate's public-key algorithm, the private key's algorithm, or the
	// signature algorithm used by a certificate.
	// Compatibility versus modern encryption: The Triple-DES default supports older
	// consumers. For new PFX output, prefer pbes2 with AES when every target platform
	// supports it.
	// 
	// References:
	// [1] #Pbes2CryptAlg
	// [2] #Pbes2HmacAlg
	void get_AlgorithmId(CkString &str);
	// Gets or sets the password-based encryption scheme used for PKCS#8 shrouded
	// private-key bags when writing a PFX. After a PFX is loaded, this property
	// reports the scheme found for the loaded shrouded key bag.
	// 
	// The default is pbeWithSHAAnd3_KeyTripleDES_CBC for backward compatibility. Set
	// this property to pbes2 to use the cipher and PBKDF2 HMAC choices specified by
	// Pbes2CryptAlg[1] and Pbes2HmacAlg[2].
	// 
	// Scope: This property selects protection for private-key bags. It does not select
	// the certificate's public-key algorithm, the private key's algorithm, or the
	// signature algorithm used by a certificate.
	// Compatibility versus modern encryption: The Triple-DES default supports older
	// consumers. For new PFX output, prefer pbes2 with AES when every target platform
	// supports it.
	// 
	// References:
	// [1] #Pbes2CryptAlg
	// [2] #Pbes2HmacAlg
	const wchar_t *algorithmId(void);
	// Gets or sets the password-based encryption scheme used for PKCS#8 shrouded
	// private-key bags when writing a PFX. After a PFX is loaded, this property
	// reports the scheme found for the loaded shrouded key bag.
	// 
	// The default is pbeWithSHAAnd3_KeyTripleDES_CBC for backward compatibility. Set
	// this property to pbes2 to use the cipher and PBKDF2 HMAC choices specified by
	// Pbes2CryptAlg[1] and Pbes2HmacAlg[2].
	// 
	// Scope: This property selects protection for private-key bags. It does not select
	// the certificate's public-key algorithm, the private key's algorithm, or the
	// signature algorithm used by a certificate.
	// Compatibility versus modern encryption: The Triple-DES default supports older
	// consumers. For new PFX output, prefer pbes2 with AES when every target platform
	// supports it.
	// 
	// References:
	// [1] #Pbes2CryptAlg
	// [2] #Pbes2HmacAlg
	void put_AlgorithmId(const wchar_t *newVal);

	// Returns the number of certificates currently contained in this PFX object. This
	// count includes end-entity certificates and any available intermediate or root CA
	// certificates.
	// 
	// Certificate indexes range from 0 through NumCerts - 1 for use with CertAt[1].
	// 
	// Indexes are independent: Certificates and private keys are stored in separate
	// collections. Certificate index i has no positional relationship to private-key
	// index i. In particular, CertAt(i) must not be assumed to return the certificate
	// for PrivateKeyAt(i)[2].
	// Do not infer meaning from order: No end-entity-first, CA-last, or
	// load/export/reload ordering guarantee is documented. Use certificate properties
	// to determine each certificate's role, and use localKeyId to associate a private
	// key with its certificate when that attribute is present.
	// 
	// References:
	// [1] #CertAt
	// [2] #PrivateKeyAt
	int get_NumCerts(void);

	// Returns the number of private keys currently contained in this PFX object.
	// 
	// Private-key indexes range from 0 through NumPrivateKeys - 1 for use with
	// PrivateKeyAt[1].
	// 
	// Indexes are independent: Private keys and certificates are stored in separate
	// collections. Private-key index i has no positional relationship to certificate
	// index i. A PFX commonly has more certificates than private keys because
	// intermediate and root CA certificates are also included.
	// Finding the matching certificate: When the private key has a localKeyId,
	// retrieve it with GetSafeBagAttr[2] and pass the value to CertByLocalKeyId[3]. Do
	// not pair a key and certificate by using the same index.
	// Secret material: A nonzero value means the object contains private keys in
	// memory. Handle the object and any exported form accordingly.
	// 
	// References:
	// [1] #PrivateKeyAt
	// [2] #GetSafeBagAttr
	// [3] #CertByLocalKeyId
	int get_NumPrivateKeys(void);

	// Gets or sets the content-encryption cipher used when AlgorithmId[1] is pbes2.
	// After loading a PBES2-protected PFX, this property reports the cipher used by
	// the loaded shrouded key bag.
	// 
	// +------------+--------------------------------------------------------+
	// |   Value    |                         Cipher                         |
	// +============+========================================================+
	// | aes256-cbc | AES-256 in CBC mode; the default for new PBES2 output. |
	// +------------+--------------------------------------------------------+
	// | aes192-cbc | AES-192 in CBC mode.                                   |
	// +------------+--------------------------------------------------------+
	// | aes128-cbc | AES-128 in CBC mode.                                   |
	// +------------+--------------------------------------------------------+
	// | 3des-cbc   | Triple DES in CBC mode for compatibility.              |
	// +------------+--------------------------------------------------------+
	// 
	// PBES2 components: This property chooses the cipher. Pbes2HmacAlg[2] chooses the
	// HMAC-based PBKDF2 pseudorandom function used to derive the encryption key from
	// the password.
	// 
	// References:
	// [1] #AlgorithmId
	// [2] #Pbes2HmacAlg
	void get_Pbes2CryptAlg(CkString &str);
	// Gets or sets the content-encryption cipher used when AlgorithmId[1] is pbes2.
	// After loading a PBES2-protected PFX, this property reports the cipher used by
	// the loaded shrouded key bag.
	// 
	// +------------+--------------------------------------------------------+
	// |   Value    |                         Cipher                         |
	// +============+========================================================+
	// | aes256-cbc | AES-256 in CBC mode; the default for new PBES2 output. |
	// +------------+--------------------------------------------------------+
	// | aes192-cbc | AES-192 in CBC mode.                                   |
	// +------------+--------------------------------------------------------+
	// | aes128-cbc | AES-128 in CBC mode.                                   |
	// +------------+--------------------------------------------------------+
	// | 3des-cbc   | Triple DES in CBC mode for compatibility.              |
	// +------------+--------------------------------------------------------+
	// 
	// PBES2 components: This property chooses the cipher. Pbes2HmacAlg[2] chooses the
	// HMAC-based PBKDF2 pseudorandom function used to derive the encryption key from
	// the password.
	// 
	// References:
	// [1] #AlgorithmId
	// [2] #Pbes2HmacAlg
	const wchar_t *pbes2CryptAlg(void);
	// Gets or sets the content-encryption cipher used when AlgorithmId[1] is pbes2.
	// After loading a PBES2-protected PFX, this property reports the cipher used by
	// the loaded shrouded key bag.
	// 
	// +------------+--------------------------------------------------------+
	// |   Value    |                         Cipher                         |
	// +============+========================================================+
	// | aes256-cbc | AES-256 in CBC mode; the default for new PBES2 output. |
	// +------------+--------------------------------------------------------+
	// | aes192-cbc | AES-192 in CBC mode.                                   |
	// +------------+--------------------------------------------------------+
	// | aes128-cbc | AES-128 in CBC mode.                                   |
	// +------------+--------------------------------------------------------+
	// | 3des-cbc   | Triple DES in CBC mode for compatibility.              |
	// +------------+--------------------------------------------------------+
	// 
	// PBES2 components: This property chooses the cipher. Pbes2HmacAlg[2] chooses the
	// HMAC-based PBKDF2 pseudorandom function used to derive the encryption key from
	// the password.
	// 
	// References:
	// [1] #AlgorithmId
	// [2] #Pbes2HmacAlg
	void put_Pbes2CryptAlg(const wchar_t *newVal);

	// Gets or sets the HMAC algorithm used by PBKDF2 when AlgorithmId[1] is pbes2.
	// After loading a PBES2-protected PFX, this property reports the HMAC choice found
	// in the loaded shrouded key bag.
	// 
	//     * hmacWithSha256 — default for new PBES2 output.
	//     * hmacWithSha384
	//     * hmacWithSha512
	//     * hmacWithSha1 — primarily for compatibility with older consumers.
	// Not the container-integrity MAC: This setting is part of PBES2 key derivation
	// for private-key encryption. It should not be confused with the separate
	// integrity protection that a PKCS#12 container may use.
	// 
	// References:
	// [1] #AlgorithmId
	void get_Pbes2HmacAlg(CkString &str);
	// Gets or sets the HMAC algorithm used by PBKDF2 when AlgorithmId[1] is pbes2.
	// After loading a PBES2-protected PFX, this property reports the HMAC choice found
	// in the loaded shrouded key bag.
	// 
	//     * hmacWithSha256 — default for new PBES2 output.
	//     * hmacWithSha384
	//     * hmacWithSha512
	//     * hmacWithSha1 — primarily for compatibility with older consumers.
	// Not the container-integrity MAC: This setting is part of PBES2 key derivation
	// for private-key encryption. It should not be confused with the separate
	// integrity protection that a PKCS#12 container may use.
	// 
	// References:
	// [1] #AlgorithmId
	const wchar_t *pbes2HmacAlg(void);
	// Gets or sets the HMAC algorithm used by PBKDF2 when AlgorithmId[1] is pbes2.
	// After loading a PBES2-protected PFX, this property reports the HMAC choice found
	// in the loaded shrouded key bag.
	// 
	//     * hmacWithSha256 — default for new PBES2 output.
	//     * hmacWithSha384
	//     * hmacWithSha512
	//     * hmacWithSha1 — primarily for compatibility with older consumers.
	// Not the container-integrity MAC: This setting is part of PBES2 key derivation
	// for private-key encryption. It should not be confused with the separate
	// integrity protection that a PKCS#12 container may use.
	// 
	// References:
	// [1] #AlgorithmId
	void put_Pbes2HmacAlg(const wchar_t *newVal);

	// Provides specialized compatibility options for unusual PFX interoperability
	// requirements. The default is an empty string, which is appropriate for normal
	// use. Multiple options are separated by commas.
	// 
	// +-------------------------+----------------------------------------------------+
	// |         Option          |                       Effect                       |
	// +=========================+====================================================+
	// | LegacyOrder             | Writes internal PKCS#12 ContentInfo objects in the |
	// |                         | ordering traditionally used by older Chilkat       |
	// |                         | versions.                                          |
	// +-------------------------+----------------------------------------------------+
	// | NoTruncatePfxPassword64 | Prevents Chilkat's default compatibility behavior  |
	// |                         | of truncating an extremely long PFX password to 64 |
	// |                         | characters.                                        |
	// +-------------------------+----------------------------------------------------+
	// 
	// Leave empty unless required: These options can reduce interoperability with
	// software that expects the default behavior. Enable one only for a documented
	// compatibility case.
	void get_UncommonOptions(CkString &str);
	// Provides specialized compatibility options for unusual PFX interoperability
	// requirements. The default is an empty string, which is appropriate for normal
	// use. Multiple options are separated by commas.
	// 
	// +-------------------------+----------------------------------------------------+
	// |         Option          |                       Effect                       |
	// +=========================+====================================================+
	// | LegacyOrder             | Writes internal PKCS#12 ContentInfo objects in the |
	// |                         | ordering traditionally used by older Chilkat       |
	// |                         | versions.                                          |
	// +-------------------------+----------------------------------------------------+
	// | NoTruncatePfxPassword64 | Prevents Chilkat's default compatibility behavior  |
	// |                         | of truncating an extremely long PFX password to 64 |
	// |                         | characters.                                        |
	// +-------------------------+----------------------------------------------------+
	// 
	// Leave empty unless required: These options can reduce interoperability with
	// software that expects the default behavior. Enable one only for a documented
	// compatibility case.
	const wchar_t *uncommonOptions(void);
	// Provides specialized compatibility options for unusual PFX interoperability
	// requirements. The default is an empty string, which is appropriate for normal
	// use. Multiple options are separated by commas.
	// 
	// +-------------------------+----------------------------------------------------+
	// |         Option          |                       Effect                       |
	// +=========================+====================================================+
	// | LegacyOrder             | Writes internal PKCS#12 ContentInfo objects in the |
	// |                         | ordering traditionally used by older Chilkat       |
	// |                         | versions.                                          |
	// +-------------------------+----------------------------------------------------+
	// | NoTruncatePfxPassword64 | Prevents Chilkat's default compatibility behavior  |
	// |                         | of truncating an extremely long PFX password to 64 |
	// |                         | characters.                                        |
	// +-------------------------+----------------------------------------------------+
	// 
	// Leave empty unless required: These options can reduce interoperability with
	// software that expects the default behavior. Enable one only for a documented
	// compatibility case.
	void put_UncommonOptions(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds cert to this PFX as an identity. The certificate must have an associated
	// private key that Chilkat can obtain and copy. This requirement applies whether
	// includeChain is true or false; AddCert does not provide a certificate-only mode.
	// 
	// includeChain controls only whether Chilkat also attempts to add the certificate chain:
	// 
	// +-------------------------------+---------------+------------------------------+
	// | Certificate/private-key state | includeChain  |            Result            |
	// +===============================+===============+==============================+
	// | No private key                | false or    | Fails. A certificate cannot  |
	// |                               | true        | be added by this method      |
	// |                               |               | without its private key.     |
	// +-------------------------------+---------------+------------------------------+
	// | Private key exists but cannot | false or    | Fails. Chilkat does not fall |
	// | be obtained or exported       | true        | back to adding the           |
	// |                               |               | certificate without the key. |
	// +-------------------------------+---------------+------------------------------+
	// | Usable private key            | false       | Adds the private key and     |
	// |                               |               | cert only. Intermediate and  |
	// |                               |               | root certificates are not    |
	// |                               |               | added.                       |
	// +-------------------------------+---------------+------------------------------+
	// | Usable private key; complete  | true        | Adds the private key, cert,  |
	// | chain locatable               |               | and the locatable            |
	// |                               |               | intermediate and root        |
	// |                               |               | certificates.                |
	// +-------------------------------+---------------+------------------------------+
	// | Usable private key; chain     | true        | Succeeds with a partial      |
	// | incomplete                    |               | chain. Missing intermediate  |
	// |                               |               | or root certificates do not  |
	// |                               |               | cause failure.               |
	// +-------------------------------+---------------+------------------------------+
	// 
	// Chain construction: When includeChain is true, Chilkat searches the certificates
	// already associated with cert and certificates made available for chain building,
	// principally through UseCertVault[1]. Each intermediate or root certificate is
	// included when it can be located. The chain does not need to terminate at a root,
	// and trust is not evaluated by this operation.
	// Snapshot semantics: The certificate, associated private key, and any locatable
	// chain certificates are copied at the time of the call. Chilkat does not retain a
	// live reference to cert. After this method returns, modifying, reloading, or
	// destroying the source Cert does not affect the material already stored in the
	// PFX, and later changes to the PFX do not affect the source object.
	// Duplicate handling: A private key already present in the object is not added
	// again. The primary certificate and any certificate that has a private key are
	// always inserted, even if an equivalent certificate is already present. Other
	// intermediate or CA certificates are skipped when they are duplicates.
	// Not atomic: After the certificate and key have passed the initial requirements,
	// certificates are merged first and the private key is added afterward. If the
	// key-add step fails, the method returns false but certificates already merged
	// remain in the object. Treat failure as a possible partial modification. A
	// missing or unobtainable private key is rejected before this merge begins.
	// Automatic association: If the private key does not already have a localKeyId,
	// Chilkat generates one and assigns the same value to the key's primary
	// certificate. This identifier associates the key and leaf certificate without
	// relying on collection indexes. Intermediate and root CA certificates may be
	// shared across multiple identities and are not paired by position.
	// 
	// References:
	// [1] #UseCertVault
	bool AddCert(CkCertW &cert, bool includeChain);

	// Adds privKey and the certificate chain in certChain to this PFX object. The chain must
	// contain at least one certificate. The certificate at index 0 is treated as the
	// end-entity certificate associated with privKey; the remaining entries are
	// additional certificates to include with the identity. The chain does not need to
	// contain a root certificate and may consist only of the end-entity certificate.
	// 
	// Caller responsibility: Chilkat does not verify that privKey mathematically matches
	// the public key in the certificate at index 0. The association is positional. A
	// mismatch is not rejected and can produce a PFX identity that later fails during
	// signing, decryption, or client authentication.
	// Copy and lifetime behavior: Chilkat immediately copies the private key and every
	// certificate in the supplied chain. It retains neither source object. Modifying,
	// reloading, or destroying the source PrivateKey or CertChain after this method
	// returns does not affect the PFX.
	// Duplicates and automatic association: A private key already present in the PFX
	// is not added again, and duplicate certificates are skipped. If the private key
	// does not already have a localKeyId, Chilkat generates one. The same identifier
	// is assigned to the certificate at index 0, linking that certificate to the key.
	// Other safe-bag attributes are not generated automatically.
	// Failure and partial modification: An empty certificate chain is rejected before
	// anything is added. For later failures, the operation is not atomic: certificates
	// are merged before the private key is added, so the method can return false
	// after leaving some certificates in the PFX.
	bool AddPrivateKey(CkPrivateKeyW &privKey, CkCertChainW &certChain);

	// Copies the certificate at the zero-based index index into cert. The first
	// certificate is at index 0; valid indexes are less than NumCerts[1].
	// 
	// On success, cert is replaced with an independent, detached copy of the selected
	// certificate. The method does not merge with or append to any certificate already
	// held by cert. The returned copy does not remain linked to the PFX: changing
	// either object later does not affect the other, and the copied certificate
	// remains usable even if the PFX is subsequently modified or destroyed.
	// 
	// Failure leaves the destination unchanged: If index is out of range or the
	// certificate cannot be returned, the method returns false without modifying
	// cert. When reusing a Cert object in a loop, always use its contents only after
	// this method returns true; otherwise cert may still contain the certificate
	// from an earlier successful call.
	// Do not pair by index: Certificate indexes and private-key indexes are
	// independent. CertAt(i) is not necessarily the certificate associated with
	// PrivateKeyAt(i)[2]. To associate a key with its certificate, obtain the key's
	// localKeyId with GetSafeBagAttr[3] and use CertByLocalKeyId[4].
	// 
	// References:
	// [1] #NumCerts
	// [2] #PrivateKeyAt
	// [3] #GetSafeBagAttr
	// [4] #CertByLocalKeyId
	bool CertAt(int index, CkCertW &cert);

	// Searches for a certificate whose certificate-bag localKeyId attribute matches
	// localKeyId and copies it into cert. encoding names the binary representation used for
	// localKeyId, such as decimal, base64, or hex.
	// 
	// On success, cert is replaced with the matching certificate. The method does not
	// merge with any certificate already held by cert.
	// 
	// Failure leaves the destination unchanged: If encoding is invalid, localKeyId cannot be
	// decoded, or no matching certificate is found, the method returns false without
	// modifying cert. Always use cert only after a true return, because a reused
	// destination may still contain a certificate from an earlier call.
	// Recommended association workflow: For a private key at index i, call
	// GetSafeBagAttr[1] with localKeyId = true, encoding = i, and cert = localKeyId. That
	// method returns the identifier in decimal representation, so pass the returned
	// value as localKeyId and decimal as encoding here.
	// Do not use matching indexes: Certificates and private keys are stored in
	// independent collections. CertAt(i) is not the certificate for PrivateKeyAt(i)
	// unless that happens coincidentally.
	// Scope: This method returns the matching primary certificate. It does not return
	// an associated certificate chain as a separate object.
	// 
	// References:
	// [1] #GetSafeBagAttr
	bool CertByLocalKeyId(const wchar_t *localKeyId, const wchar_t *encoding, CkCertW &cert);

	// Deprecated. Use CertByLocalKeyId[1] instead.
	// 
	// Searches for a certificate whose certificate-bag localKeyId attribute matches
	// the binary value supplied in localKeyId. encoding names the representation used for localKeyId,
	// such as decimal, base64, or hex.
	// 
	// Certificate/key association: When localKeyId was obtained from GetSafeBagAttr[2] using
	// the attribute name localKeyId, pass decimal for encoding. This lookup is the
	// reliable way to find a key's matching certificate; collection indexes do not
	// correspond.
	// 
	// References:
	// [1] #CertByLocalKeyId
	// [2] #GetSafeBagAttr
	// The caller is responsible for deleting the object returned by this method.
	CkCertW *FindCertByLocalKeyId(const wchar_t *localKeyId, const wchar_t *encoding);

	// Deprecated. Use CertAt[1] instead.
	// 
	// Returns the certificate at the zero-based index specified by index. The first
	// certificate is at index 0. An invalid index causes the method to fail and return
	// no object.
	// 
	// Do not pair by index: Certificate indexes and private-key indexes are
	// independent. GetCert(i) is not necessarily the certificate associated with
	// GetPrivateKey(i)[2]. Use a matching localKeyId when one is present.
	// 
	// References:
	// [1] #CertAt
	// [2] #GetPrivateKey
	// The caller is responsible for deleting the object returned by this method.
	CkCertW *GetCert(int index);

	// Replaces the entire contents of json with structured JSON information from the
	// most recent operation. The data is copied as a complete replacement; it is never
	// merged with members already present in json.
	// 
	// The exact members depend on the preceding method. After loading a PFX, the JSON
	// may describe authenticated-safe content, safe bags, encryption information, and
	// bag attributes. If no JSON data is available, json is cleared to an empty JSON
	// object.
	// 
	// Destination behavior: The previous contents of json are never preserved by this
	// call. Reusing a JsonObject is safe without clearing it first, but do not expect
	// older members to remain.
	// Diagnostics: Call this method immediately after the operation being inspected.
	// Not every method produces JSON detail, and this information supplements rather
	// than replaces LastErrorText.
	void GetLastJsonData(CkJsonObjectW &json);

	// Deprecated. Use PrivateKeyAt[1] instead.
	// 
	// Returns the private key at the zero-based index specified by index. The first
	// private key is at index 0. An invalid index causes the method to fail and return
	// no object.
	// 
	// Do not pair by index: Private-key indexes and certificate indexes are
	// independent. GetPrivateKey(i) is not necessarily associated with GetCert(i)[2].
	// Use the private key's localKeyId and CertByLocalKeyId[3] when that attribute is
	// present.
	// Sensitive material: A returned PrivateKey object contains secret key material.
	// Avoid logging, displaying, or exporting it unless the application explicitly
	// requires that operation.
	// 
	// References:
	// [1] #PrivateKeyAt
	// [2] #GetCert
	// [3] #CertByLocalKeyId
	// The caller is responsible for deleting the object returned by this method.
	CkPrivateKeyW *GetPrivateKey(int index);

	// Reads a recognized safe-bag attribute from a private key or certificate
	// contained in this PFX. forPrivateKey is true for a private key and false for a
	// certificate. index is the zero-based index within the selected collection. attrName
	// is the attribute name and is matched case-insensitively.
	// 
	// Empty values are treated as failure: The method succeeds only when the requested
	// attribute is recognized, readable, set, and nonempty. If the attribute is unset
	// or its stored value is an empty string, the method reports failure. An empty
	// string is therefore never a successful attribute result.
	// 
	// +-------------+-----------------------+----------------------------------------+
	// |   Logical   |  Accepted attrName names  |             Read behavior              |
	// |  attribute  |                       |                                        |
	// +=============+=======================+========================================+
	// | Friendly    | friendlyName ,        | All three names read the same          |
	// | name        | keyContainerName , or | underlying text attribute. The read    |
	// |             | keyName               | succeeds only when the attribute       |
	// |             |                       | contains a nonempty value; an unset or |
	// |             |                       | empty value causes failure.            |
	// +-------------+-----------------------+----------------------------------------+
	// | Storage     | storageProvider or    | Both names read the same underlying    |
	// | provider    | msStorageProvider     | text attribute. The read succeeds only |
	// |             |                       | when the attribute contains a nonempty |
	// |             |                       | value; an unset or empty value causes  |
	// |             |                       | failure.                               |
	// +-------------+-----------------------+----------------------------------------+
	// | Local key   | localKeyId            | The read succeeds only when a nonempty |
	// | ID          |                       | local key ID is present. The value is  |
	// |             |                       | always returned in decimal encoding as |
	// |             |                       | one big-endian integer, regardless of  |
	// |             |                       | the encoding used when it was set.     |
	// +-------------+-----------------------+----------------------------------------+
	// | Enhanced    | enhancedKeyUsage      | Not readable through this method. The  |
	// | key usage   |                       | operation reports failure even if the  |
	// |             |                       | attribute was previously set with      |
	// |             |                       | SetSafeBagAttr[1] .                    |
	// +-------------+-----------------------+----------------------------------------+
	// 
	// An unrecognized attrName name, an invalid index, an unreadable attribute, or any
	// recognized attribute whose value is unset or empty causes the read to fail.
	// 
	// Decimal localKeyId representation: The raw bytes are interpreted as one unsigned
	// big-endian integer. For example, bytes 01 02 03 04 05 06 07 08 are returned as
	// 72623859790382856. Leading zero bytes are not preserved by a set-read-set round
	// trip because 00 01 02 03 and 01 02 03 represent the same integer.
	// Pairing a key with its certificate: For private-key index i, read localKeyId
	// with forPrivateKey = true and index = i. If a nonempty value is returned successfully,
	// pass it to CertByLocalKeyId[2] using the encoding decimal. Never assume that
	// certificate index i matches private-key index i.
	// 
	// References:
	// [1] #SetSafeBagAttr
	// [2] #CertByLocalKeyId
	bool GetSafeBagAttr(bool forPrivateKey, int index, const wchar_t *attrName, CkString &outStr);
	// Reads a recognized safe-bag attribute from a private key or certificate
	// contained in this PFX. forPrivateKey is true for a private key and false for a
	// certificate. index is the zero-based index within the selected collection. attrName
	// is the attribute name and is matched case-insensitively.
	// 
	// Empty values are treated as failure: The method succeeds only when the requested
	// attribute is recognized, readable, set, and nonempty. If the attribute is unset
	// or its stored value is an empty string, the method reports failure. An empty
	// string is therefore never a successful attribute result.
	// 
	// +-------------+-----------------------+----------------------------------------+
	// |   Logical   |  Accepted attrName names  |             Read behavior              |
	// |  attribute  |                       |                                        |
	// +=============+=======================+========================================+
	// | Friendly    | friendlyName ,        | All three names read the same          |
	// | name        | keyContainerName , or | underlying text attribute. The read    |
	// |             | keyName               | succeeds only when the attribute       |
	// |             |                       | contains a nonempty value; an unset or |
	// |             |                       | empty value causes failure.            |
	// +-------------+-----------------------+----------------------------------------+
	// | Storage     | storageProvider or    | Both names read the same underlying    |
	// | provider    | msStorageProvider     | text attribute. The read succeeds only |
	// |             |                       | when the attribute contains a nonempty |
	// |             |                       | value; an unset or empty value causes  |
	// |             |                       | failure.                               |
	// +-------------+-----------------------+----------------------------------------+
	// | Local key   | localKeyId            | The read succeeds only when a nonempty |
	// | ID          |                       | local key ID is present. The value is  |
	// |             |                       | always returned in decimal encoding as |
	// |             |                       | one big-endian integer, regardless of  |
	// |             |                       | the encoding used when it was set.     |
	// +-------------+-----------------------+----------------------------------------+
	// | Enhanced    | enhancedKeyUsage      | Not readable through this method. The  |
	// | key usage   |                       | operation reports failure even if the  |
	// |             |                       | attribute was previously set with      |
	// |             |                       | SetSafeBagAttr[1] .                    |
	// +-------------+-----------------------+----------------------------------------+
	// 
	// An unrecognized attrName name, an invalid index, an unreadable attribute, or any
	// recognized attribute whose value is unset or empty causes the read to fail.
	// 
	// Decimal localKeyId representation: The raw bytes are interpreted as one unsigned
	// big-endian integer. For example, bytes 01 02 03 04 05 06 07 08 are returned as
	// 72623859790382856. Leading zero bytes are not preserved by a set-read-set round
	// trip because 00 01 02 03 and 01 02 03 represent the same integer.
	// Pairing a key with its certificate: For private-key index i, read localKeyId
	// with forPrivateKey = true and index = i. If a nonempty value is returned successfully,
	// pass it to CertByLocalKeyId[2] using the encoding decimal. Never assume that
	// certificate index i matches private-key index i.
	// 
	// References:
	// [1] #SetSafeBagAttr
	// [2] #CertByLocalKeyId
	const wchar_t *getSafeBagAttr(bool forPrivateKey, int index, const wchar_t *attrName);
	// Reads a recognized safe-bag attribute from a private key or certificate
	// contained in this PFX. forPrivateKey is true for a private key and false for a
	// certificate. index is the zero-based index within the selected collection. attrName
	// is the attribute name and is matched case-insensitively.
	// 
	// Empty values are treated as failure: The method succeeds only when the requested
	// attribute is recognized, readable, set, and nonempty. If the attribute is unset
	// or its stored value is an empty string, the method reports failure. An empty
	// string is therefore never a successful attribute result.
	// 
	// +-------------+-----------------------+----------------------------------------+
	// |   Logical   |  Accepted attrName names  |             Read behavior              |
	// |  attribute  |                       |                                        |
	// +=============+=======================+========================================+
	// | Friendly    | friendlyName ,        | All three names read the same          |
	// | name        | keyContainerName , or | underlying text attribute. The read    |
	// |             | keyName               | succeeds only when the attribute       |
	// |             |                       | contains a nonempty value; an unset or |
	// |             |                       | empty value causes failure.            |
	// +-------------+-----------------------+----------------------------------------+
	// | Storage     | storageProvider or    | Both names read the same underlying    |
	// | provider    | msStorageProvider     | text attribute. The read succeeds only |
	// |             |                       | when the attribute contains a nonempty |
	// |             |                       | value; an unset or empty value causes  |
	// |             |                       | failure.                               |
	// +-------------+-----------------------+----------------------------------------+
	// | Local key   | localKeyId            | The read succeeds only when a nonempty |
	// | ID          |                       | local key ID is present. The value is  |
	// |             |                       | always returned in decimal encoding as |
	// |             |                       | one big-endian integer, regardless of  |
	// |             |                       | the encoding used when it was set.     |
	// +-------------+-----------------------+----------------------------------------+
	// | Enhanced    | enhancedKeyUsage      | Not readable through this method. The  |
	// | key usage   |                       | operation reports failure even if the  |
	// |             |                       | attribute was previously set with      |
	// |             |                       | SetSafeBagAttr[1] .                    |
	// +-------------+-----------------------+----------------------------------------+
	// 
	// An unrecognized attrName name, an invalid index, an unreadable attribute, or any
	// recognized attribute whose value is unset or empty causes the read to fail.
	// 
	// Decimal localKeyId representation: The raw bytes are interpreted as one unsigned
	// big-endian integer. For example, bytes 01 02 03 04 05 06 07 08 are returned as
	// 72623859790382856. Leading zero bytes are not preserved by a set-read-set round
	// trip because 00 01 02 03 and 01 02 03 represent the same integer.
	// Pairing a key with its certificate: For private-key index i, read localKeyId
	// with forPrivateKey = true and index = i. If a nonempty value is returned successfully,
	// pass it to CertByLocalKeyId[2] using the encoding decimal. Never assume that
	// certificate index i matches private-key index i.
	// 
	// References:
	// [1] #SetSafeBagAttr
	// [2] #CertByLocalKeyId
	const wchar_t *safeBagAttr(bool forPrivateKey, int index, const wchar_t *attrName);

	// Imports all certificates and private keys currently held by this Pfx object into
	// the application's default keychain. This method is available only on macOS and
	// iOS. On other platforms it returns false and reports that the method is
	// macOS/iOS only.
	// 
	// The method does not accept a password. Any required password must already have
	// been supplied when loading the PFX or PEM data; the objects presently contained
	// in the Pfx are what this method imports.
	// 
	// opts is reserved for future use: The JsonObject currently has no defined members
	// and does not affect the import. Pass an empty JsonObject. Any JSON members
	// supplied today are ignored. The destination keychain, access group, key
	// accessibility, iCloud synchronization, and replacement behavior are not
	// configurable through this method.
	// 
	// The certificates and private keys are imported into the application's
	// platform-default keychain without assigning special access-group, accessibility,
	// or synchronization attributes. Normal macOS or iOS keychain-access rules and
	// application entitlements still apply.
	// 
	// Duplicates and atomicity: An item already present in the keychain does not cause
	// failure and is not added again or replaced, so re-importing the same identity is
	// safe. The import is all-or-nothing: if the method fails, it does not leave only
	// a subset of the PFX contents imported.
	// 
	// The calling sequence is the same on macOS and iOS: load or build the Pfx, create
	// an empty JsonObject, and pass it as opts.
	// 
	bool ImportToKeychain(CkJsonObjectW &opts);

	// Imports the certificates and private keys in this PFX into Windows certificate
	// stores and Windows key storage. This method is available only on Microsoft
	// Windows.
	// 
	// +----------+-------------------+-----------------------------------------------+
	// | Argument |       Name        |                    Meaning                    |
	// +==========+===================+===============================================+
	// | exportable     | exportable        | Controls the legacy CryptoAPI exportability   |
	// |          |                   | setting. This is the companion setting for    |
	// |          |                   | the older certificate-import path; it is not  |
	// |          |                   | the setting that determines exportability of  |
	// |          |                   | the CNG-persisted key.                        |
	// +----------+-------------------+-----------------------------------------------+
	// | userProtected     | userProtected     | When true, enables Windows strong key       |
	// |          |                   | protection, which can display an interactive  |
	// |          |                   | prompt when the key is imported or used. When |
	// |          |                   | false, key import and use are silent.       |
	// +----------+-------------------+-----------------------------------------------+
	// | machineKeyset     | machineKeyset     | Selects the scope for both private-key        |
	// |          |                   | storage and certificate stores. true uses   |
	// |          |                   | Local Machine; false uses Current User.     |
	// |          |                   | Local Machine imports generally require       |
	// |          |                   | elevation.                                    |
	// +----------+-------------------+-----------------------------------------------+
	// | allowOverwriteKey     | allowOverwriteKey | When true, an existing private key having   |
	// |          |                   | the same key-container name may be            |
	// |          |                   | overwritten. When false, the import fails   |
	// |          |                   | if that key already exists.                   |
	// +----------+-------------------+-----------------------------------------------+
	// | allowExport     | allowExport       | Controls the private key as persisted by the  |
	// |          |                   | CNG Microsoft Software Key Storage Provider.  |
	// |          |                   | When true, the key is marked                |
	// |          |                   | plaintext-exportable and can later be         |
	// |          |                   | exported, including as raw private-key        |
	// |          |                   | material. This is the effective exportability |
	// |          |                   | control for the key installed by this method. |
	// +----------+-------------------+-----------------------------------------------+
	// | leafStore     | leafStore         | Destination store for end-entity (leaf)       |
	// |          |                   | certificates.                                 |
	// +----------+-------------------+-----------------------------------------------+
	// | intermediateStore     | intermediateStore | Destination store for intermediate CA         |
	// |          |                   | certificates.                                 |
	// +----------+-------------------+-----------------------------------------------+
	// | rootStore     | rootStore         | Destination store for root or self-signed     |
	// |          |                   | certificates.                                 |
	// +----------+-------------------+-----------------------------------------------+
	// | extraOptions     | extraOptions      | Currently unused. It has no effect for any    |
	// |          |                   | value. Pass an empty string.                  |
	// +----------+-------------------+-----------------------------------------------+
	// 
	// Two different exportability settings: exportable applies to the legacy CryptoAPI
	// path. allowExport applies to the CNG Key Storage Provider used to persist the
	// private key and determines whether that installed key can actually be exported
	// later. Set allowExport to true only when later private-key export is required,
	// because it permits plaintext export.
	// 
	// Store names are case-insensitive. Standard names include My for leaf
	// certificates, CA or CertificationAuthority for intermediate certificates, and
	// Root for trusted roots. For any certificate class, pass None, Nothing, or an
	// empty string to skip importing that class. Other Windows store names, such as
	// AddressBook, AuthRoot, TrustedPeople, and TrustedPublisher, may also be used
	// when appropriate.
	// 
	// If a certificate already exists, it is updated or replaced rather than causing
	// an error. Existing private keys are handled separately: when a key having the
	// same key-container name exists, allowOverwriteKey determines whether it is
	// overwritten or causes the import to fail. The key-container name comes from the
	// private key's friendly name; if no friendly name exists, Chilkat generates a
	// unique name.
	// 
	// Overwrite risk: Enabling allowOverwriteKey can replace an unrelated existing key
	// when its container name matches the imported key's friendly name. Enable
	// overwrite only when that name is known to identify the key that should be
	// replaced.
	// Not atomic: Keys are imported one at a time, followed by certificates one at a
	// time. Items imported before a later failure remain installed. A private-key
	// failure stops key processing, while a certificate failure does not necessarily
	// prevent later certificates from being attempted. A false return can therefore
	// leave partial results in Windows; applications requiring all-or-nothing behavior
	// must inspect and clean up the target stores themselves.
	// Interactive protection: Do not set userProtected to true in a Windows service
	// or another noninteractive process. The required protection prompt cannot be
	// displayed and the operation may fail or hang. Use false for silent service and
	// server operation.
	// Trust-store impact: Importing a root certificate into the Windows Root store
	// makes it a trust anchor for the selected Current User or Local Machine scope.
	// Import only roots that the application or administrator intentionally trusts.
	// Use None for rootStore when root installation is not required.
	// 
	// Common configurations:
	// 
	// +--------------------+---------------------------------------------------------+
	// |      Scenario      |                    Typical settings                     |
	// +====================+=========================================================+
	// | Per-user, silent   | exportable=false , userProtected=false ,                |
	// | import             | machineKeyset=false , allowOverwriteKey=false ,         |
	// |                    | allowExport=false , leaf My , intermediate CA , root    |
	// |                    | None .                                                  |
	// +--------------------+---------------------------------------------------------+
	// | Machine-wide       | Use the silent settings above with machineKeyset=true   |
	// | service/server     | and run elevated.                                       |
	// +--------------------+---------------------------------------------------------+
	// | Key must be        | Set allowExport=true . Also set exportable=true when    |
	// | exportable later   | legacy CryptoAPI exportability is wanted.               |
	// +--------------------+---------------------------------------------------------+
	// | Leaf certificate   | Use a real leaf store such as My and pass None for both |
	// | only               | intermediate and root stores.                           |
	// +--------------------+---------------------------------------------------------+
	// | Replace an         | Set allowOverwriteKey=true only after confirming that   |
	// | existing key       | the key-container name cannot collide with an unrelated |
	// |                    | key.                                                    |
	// +--------------------+---------------------------------------------------------+
	// 
	bool ImportToWindows(bool exportable, bool userProtected, bool machineKeyset, bool allowOverwriteKey, bool allowExport, const wchar_t *leafStore, const wchar_t *intermediateStore, const wchar_t *rootStore, const wchar_t *extraOptions);

	// Deprecated. Use GetLastJsonData[1] instead.
	// 
	// Returns structured JSON information produced by the most recent operation that
	// generated such data. The exact JSON members depend on the preceding method.
	// 
	// 
	// References:
	// [1] #GetLastJsonData
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObjectW *LastJsonData(void);

	// Loads one or more certificate/private-key identities from the PEM-formatted text
	// in pemStr and builds the contents of this Pfx object. password supplies the password
	// when the PEM contains encrypted private keys.
	// 
	// The supported PEM block types are:
	// 
	// +-----------------------+------------------------------------------------------+
	// |       PEM block       |                       Meaning                        |
	// +=======================+======================================================+
	// | BEGIN CERTIFICATE     | An X.509 certificate.                                |
	// +-----------------------+------------------------------------------------------+
	// | BEGIN PRIVATE KEY     | An unencrypted PKCS #8 private key.                  |
	// +-----------------------+------------------------------------------------------+
	// | BEGIN ENCRYPTED       | A password-encrypted PKCS #8 private key.            |
	// | PRIVATE KEY           |                                                      |
	// +-----------------------+------------------------------------------------------+
	// | BEGIN RSA PRIVATE KEY | A traditional RSA private key, either unencrypted or |
	// |                       | password-encrypted.                                  |
	// +-----------------------+------------------------------------------------------+
	// 
	// Multiple independent identities are supported. Each private key is paired with
	// the certificate whose public key cryptographically matches it, and its chain is
	// assembled from the other certificates in the PEM. Block order is therefore
	// irrelevant; keys and certificates are not paired by position.
	// 
	// Required content: The PEM must contain at least one private key, and every
	// private key must have a matching certificate. The method fails if any key lacks
	// its certificate or if the PEM contains certificates but no private key.
	// Certificates that do not belong to any loaded key's certificate chain are not
	// carried into the PFX.
	// Duplicates: Repeated private-key or certificate blocks are accepted and
	// de-duplicated. They do not cause an error and do not create duplicate entries in
	// the resulting PFX.
	// Replacement and failure behavior: A successful call replaces all existing
	// contents. If the PEM cannot be parsed, the previous contents are preserved
	// because replacement has not begun. If parsing succeeds but conversion fails
	// while the parsed items are being added, the object has already been cleared and
	// may contain only the items processed before the failure. Therefore, a failed
	// call can mean either unchanged or partially replaced state, depending on where
	// the failure occurred.
	bool LoadPem(const wchar_t *pemStr, const wchar_t *password);

	// Loads a PFX / PKCS#12 container from the bytes currently held in bd. password is
	// the password argument.
	// 
	// Password and JSON options: password accepts either a literal password, which is used
	// for both integrity verification and all private-key bags, or a JSON object that
	// can separately provide integrity, privKeys, and skipPrivateKeys. See
	// LoadPfxFile[1] for the exact JSON-detection rules, member types, defaults, and
	// edge cases.
	// Destructive replacement: This method always replaces the current contents. The
	// object is cleared before the import is attempted, so a failed load leaves the
	// Pfx object empty; previously loaded certificates and keys are not preserved.
	// 
	// References:
	// [1] #LoadPfxFile
	bool LoadPfxBd(CkBinDataW &bd, const wchar_t *password);

	// Loads a PFX / PKCS#12 container from the in-memory bytes in pfxData. password is the
	// password argument.
	// 
	// Password and JSON options: password accepts either a literal password, which is used
	// for both integrity verification and all private-key bags, or a JSON object that
	// can separately provide integrity, privKeys, and skipPrivateKeys. See
	// LoadPfxFile[1] for the exact JSON-detection rules, member types, defaults, and
	// edge cases.
	// Destructive replacement: This method always replaces the current contents. The
	// object is cleared before the import is attempted, so a failed load leaves the
	// Pfx object empty; previously loaded certificates and keys are not preserved.
	// 
	// References:
	// [1] #LoadPfxFile
	bool LoadPfxBytes(CkByteData &pfxData, const wchar_t *password);

	// Decodes the text in encodedData using the binary encoding named by encoding, then loads the
	// resulting bytes as a PFX / PKCS#12 container. Common encodings include base64
	// and hex.
	// 
	// password is the password argument.
	// 
	// Password and JSON options: password accepts either a literal password, which is used
	// for both integrity verification and all private-key bags, or a JSON object that
	// can separately provide integrity, privKeys, and skipPrivateKeys. See
	// LoadPfxFile[1] for the exact JSON-detection rules, member types, defaults, and
	// edge cases.
	// Binary encoding is not a charset: encoding describes how binary PFX bytes were
	// represented as text. It does not control certificate-name character encoding or
	// password interpretation.
	// Destructive replacement: This method always replaces the current contents. The
	// object is cleared before the import is attempted, so a decoding error, bad
	// password, or malformed PFX leaves the Pfx object empty; previously loaded
	// certificates and keys are not preserved.
	// 
	// References:
	// [1] #LoadPfxFile
	bool LoadPfxEncoded(const wchar_t *encodedData, const wchar_t *encoding, const wchar_t *password);

	// Loads a PFX / PKCS#12 container from the file path in path. password follows the
	// password contract below. The same contract is used by LoadPfxBytes[1],
	// LoadPfxBd[2], and LoadPfxEncoded[3]; it does not apply to LoadPem[4].
	// 
	// The password argument has two modes:
	// 
	//     * Plain password: For any non-JSON value P, Chilkat uses P for both
	//     integrity verification and all private-key bags. skipPrivateKeys is false.
	//     * JSON options: After trimming leading and trailing whitespace, JSON mode is
	//     used only when the value begins with {, ends with}, and parses as valid
	//     JSON. All three recognized members are optional and case-sensitive.
	// {
	//   "integrity": "integrity-password",
	//   "privKeys": "private-key-password",
	//   "skipPrivateKeys": false
	// }
	// 
	// +-----------------+----------------------------+-------------------------------+
	// |     Member      |       Accepted value       |     Default when omitted      |
	// +=================+============================+===============================+
	// | integrity       | String                     | Integrity verification is     |
	// |                 |                            | skipped.                      |
	// +-----------------+----------------------------+-------------------------------+
	// | privKeys        | String                     | The empty string is used as   |
	// |                 |                            | the password for every        |
	// |                 |                            | private-key bag.              |
	// +-----------------+----------------------------+-------------------------------+
	// | skipPrivateKeys | JSON Boolean true , or a   | false                       |
	// |                 | string equal to true       |                               |
	// |                 | without regard to case     |                               |
	// +-----------------+----------------------------+-------------------------------+
	// 
	// Unknown JSON members are silently ignored. A misspelled member such as privkeys
	// therefore does not produce a JSON error; the documented default is used instead.
	// The single privKeys password applies to every private-key bag. Per-bag passwords
	// are not supported.
	// 
	// Certificate-only loading: When skipPrivateKeys is true, private-key bags are not
	// processed and the privKeys password is irrelevant. Integrity verification is
	// still performed when an integrity member is supplied.
	// Empty versus omitted integrity password: A plain empty string requests integrity
	// verification using an empty password. To intentionally skip integrity
	// verification, use JSON and omit integrity, for example {"skipPrivateKeys":true}
	// or {}.
	// Literal-password collision: A real password that, after trimming, is a valid
	// JSON object text is interpreted as options, and there is no force-literal
	// escape. Text enclosed in braces that is not valid JSON falls back to
	// literal-password handling.
	// Independent protection roles: PKCS#12 can use one password for the container
	// integrity MAC and another for encrypted private-key bags. A correct integrity
	// password does not validate the privKeys password. If integrity verification
	// succeeds but private-key decryption fails, the load still fails unless private
	// keys were skipped.
	// Destructive replacement: This method always replaces the current contents. The
	// object is cleared before opening and importing the file, so any
	// failure—including a missing file, invalid password, or malformed PFX—leaves the
	// Pfx object empty. Load into a new object when the previously loaded contents
	// must be preserved on failure.
	// 
	// References:
	// [1] #LoadPfxBytes
	// [2] #LoadPfxBd
	// [3] #LoadPfxEncoded
	// [4] #LoadPem
	bool LoadPfxFile(const wchar_t *path, const wchar_t *password);

	// Copies the private key at the zero-based index index into privKey. The first private
	// key is at index 0; valid indexes are less than NumPrivateKeys[1].
	// 
	// On success, privKey is replaced with an independent, detached copy of the selected
	// private key. The method does not merge with or append to any key already held by
	// privKey. The returned copy does not remain linked to the PFX: changing either
	// object later does not affect the other, and the copied key remains usable even
	// if the PFX is subsequently modified or destroyed.
	// 
	// Failure leaves the destination unchanged: If index is out of range or the private
	// key cannot be returned, the method returns false without modifying privKey. When
	// reusing a PrivateKey object, use its contents only after this method returns
	// true; otherwise privKey may still contain a key from an earlier successful call.
	// Do not pair by index: Private-key indexes and certificate indexes are
	// independent. PrivateKeyAt(i) is not necessarily associated with CertAt(i)[2].
	// Finding the matching certificate: Call GetSafeBagAttr[3] with index set to
	// true, privKey set to this private-key index, and ARG3 set to localKeyId. If the
	// attribute is present, pass the returned value to CertByLocalKeyId[4] using
	// decimal as the encoding.
	// Sensitive material: Treat privKey as secret key material. Avoid unnecessary
	// serialization, logging, or long-lived copies.
	// 
	// References:
	// [1] #NumPrivateKeys
	// [2] #CertAt
	// [3] #GetSafeBagAttr
	// [4] #CertByLocalKeyId
	bool PrivateKeyAt(int index, CkPrivateKeyW &privKey);

	// Sets a safe-bag attribute on a private key or certificate contained in this PFX.
	// A safe-bag attribute is metadata attached to an item inside a PKCS#12/PFX
	// container; it does not change the certificate or private-key material itself.
	// 
	//     * forPrivateKey is true to address a private key and false to address a
	//     certificate.
	//     * index is the zero-based index within the selected collection.
	//     * name is the attribute name. Attribute names are matched
	//     case-insensitively.
	//     * value is the value to set.
	//     * encoding specifies how value is decoded only when setting localKeyId. It is
	//     ignored for all text-valued attributes.
	// 
	// Setting a recognized attribute replaces its existing value; it never creates a
	// duplicate attribute. The method returns false and makes no change if name is
	// not one of the recognized names listed below.
	// 
	// +------------+---------------------+-------------------------------------------+
	// |  Logical   | Accepted name names |            Value and behavior             |
	// | attribute  |                     |                                           |
	// +============+=====================+===========================================+
	// | Friendly   | friendlyName ,      | These names refer to the same underlying  |
	// | name       | keyContainerName ,  | text attribute. value is stored as text,   |
	// |            | or keyName          | and encoding is ignored. Setting through any  |
	// |            |                     | alias replaces the value visible through  |
	// |            |                     | every alias.                              |
	// +------------+---------------------+-------------------------------------------+
	// | Storage    | storageProvider or  | The two names refer to the same           |
	// | provider   | msStorageProvider   | underlying text attribute. value is stored |
	// |            |                     | as text, and encoding is ignored.             |
	// +------------+---------------------+-------------------------------------------+
	// | Local key  | localKeyId          | A binary identifier commonly used to      |
	// | ID         |                     | associate a private-key bag with its      |
	// |            |                     | certificate bag. encoding specifies the       |
	// |            |                     | encoding of value, such as hex , base64 ,  |
	// |            |                     | or decimal . An empty value removes the    |
	// |            |                     | attribute.                                |
	// +------------+---------------------+-------------------------------------------+
	// | Enhanced   | enhancedKeyUsage    | value is a comma-separated text list. Each |
	// | key usage  |                     | item may be a recognized usage name, such |
	// |            |                     | as serverAuth , clientAuth , codeSigning  |
	// |            |                     | , or emailProtection , or a dotted OID    |
	// |            |                     | such as 1.3.6.1.5.5.7.3.1 . Unrecognized  |
	// |            |                     | items that are not valid OIDs are         |
	// |            |                     | silently skipped. encoding is ignored. An     |
	// |            |                     | empty value removes the attribute. This    |
	// |            |                     | attribute is write-only through the       |
	// |            |                     | safe-bag attribute API.                   |
	// +------------+---------------------+-------------------------------------------+
	// 
	// Encoding applies only to localKeyId: Friendly name, storage provider, and
	// enhanced key usage are text values. Supplying hex, base64, or another encoding
	// for those attributes has no effect.
	bool SetSafeBagAttr(bool forPrivateKey, int index, const wchar_t *name, const wchar_t *value, const wchar_t *encoding);

	// Serializes the current PFX contents as PKCS#12 data and writes the bytes to
	// bd, using password as the output password.
	// 
	// bd is cleared before serialization begins. On success, it contains only the
	// newly generated PFX data; the method replaces the previous BinData contents and
	// never appends to them.
	// 
	// Clear-first failure behavior: If the method returns false, the contents that
	// bd held before the call are not restored. bd may be empty or may contain
	// partially generated data. Use the destination only after a true return when
	// complete output is required.
	// 
	// The private-key encryption scheme is controlled by AlgorithmId[1] and, for
	// PBES2, the related algorithm properties.
	// 
	// Sensitive output: bd may contain encrypted private-key material. Keep the
	// password and resulting bytes protected even though they are stored only in
	// memory.
	// 
	// References:
	// [1] #AlgorithmId
	bool ToBd(const wchar_t *password, CkBinDataW &bd);

	// Serializes the current PFX contents to PKCS#12 bytes in memory, using password as
	// the output password.
	// 
	// The private-key protection scheme is selected by AlgorithmId[1] and, when PBES2
	// is selected, by Pbes2CryptAlg[2] and Pbes2HmacAlg[3].
	// 
	// Protect the output: The returned bytes may contain private keys. Use a strong
	// password, limit access to the data, and clear unnecessary copies from memory
	// when practical.
	// 
	// References:
	// [1] #AlgorithmId
	// [2] #Pbes2CryptAlg
	// [3] #Pbes2HmacAlg
	bool ToBinary(const wchar_t *password, CkByteData &outBytes);

	// Serializes the current PFX contents using password as the output password, then
	// returns the PKCS#12 bytes encoded as text using encoding. Common choices for encoding
	// are base64 and hex.
	// 
	// The PFX encryption settings are controlled by AlgorithmId[1] and the PBES2
	// properties.
	// 
	// Encoding does not add protection: Base64, hexadecimal, and similar encodings
	// only represent binary bytes as text. The confidentiality of private keys depends
	// on the PFX password and encryption settings.
	// 
	// References:
	// [1] #AlgorithmId
	bool ToEncodedString(const wchar_t *password, const wchar_t *encoding, CkString &outStr);
	// Serializes the current PFX contents using password as the output password, then
	// returns the PKCS#12 bytes encoded as text using encoding. Common choices for encoding
	// are base64 and hex.
	// 
	// The PFX encryption settings are controlled by AlgorithmId[1] and the PBES2
	// properties.
	// 
	// Encoding does not add protection: Base64, hexadecimal, and similar encodings
	// only represent binary bytes as text. The confidentiality of private keys depends
	// on the PFX password and encryption settings.
	// 
	// References:
	// [1] #AlgorithmId
	const wchar_t *toEncodedString(const wchar_t *password, const wchar_t *encoding);

	// Serializes the current PFX contents and writes the resulting PKCS#12 data to
	// path, using password as the output password.
	// 
	// .pfx and.p12 are the conventional filename extensions for PKCS#12 containers.
	// The private-key protection scheme is controlled by AlgorithmId[1] and the PBES2
	// properties.
	// 
	// File security: A PFX commonly contains private keys. In addition to choosing a
	// strong password, protect the file with appropriate filesystem permissions and
	// avoid leaving unnecessary backup copies.
	// 
	// References:
	// [1] #AlgorithmId
	bool ToFile(const wchar_t *password, const wchar_t *path);

	// Deprecated. Use ToJksObj[1] instead.
	// 
	// Creates a Java KeyStore object with one private-key entry for each private key
	// in this PFX. Certificates in the PFX are used to construct the certificate chain
	// for each entry. password is used to protect the generated private-key entries.
	// 
	// If alias is nonempty, it is used as the alias for the first private key.
	// Otherwise, the alias is chosen using the following order:
	// 
	//     1. Certificate subject common name.
	//     2. Certificate subject email address.
	//     3. PKCS#9 friendly-name attribute.
	//     4. Certificate serial number.
	// 
	// Additional private keys receive automatically selected aliases using the same
	// preference order.
	// 
	// 
	// References:
	// [1] #ToJksObj
	// The caller is responsible for deleting the object returned by this method.
	CkJavaKeyStoreW *ToJavaKeyStore(const wchar_t *alias, const wchar_t *password);

	// Populates jksObj with a Java KeyStore (JKS) representation of this PFX. One
	// private-key entry is created for each private key, and certificates in the PFX
	// are used to construct the corresponding certificate chains. password protects the
	// generated private-key entries.
	// 
	// jksObj is cleared before conversion begins. On success, it contains only the newly
	// converted key store; the method replaces the destination's previous entries
	// rather than merging with them.
	// 
	// Clear-first failure behavior: If conversion returns false, the key store that
	// jksObj held before the call is not restored. jksObj may be empty or partially
	// populated. Use the destination only after a true return when a complete
	// conversion is required.
	// 
	// If alias is nonempty, it becomes the alias for the first private key. Otherwise,
	// the alias is selected in this order:
	// 
	//     1. Certificate subject common name.
	//     2. Certificate subject email address.
	//     3. PKCS#9 friendly-name attribute.
	//     4. Certificate serial number.
	// 
	// Aliases for additional private keys are selected automatically using the same
	// preference order.
	// 
	// Container conversion: PKCS#12 and JKS are different keystore formats. Conversion
	// preserves available key-and-certificate relationships, but provider-specific
	// PKCS#12 attributes may not have an equivalent JKS representation.
	bool ToJksObj(const wchar_t *alias, const wchar_t *password, CkJavaKeyStoreW &jksObj);

	// Exports all private keys and certificates currently held by this object as
	// PEM-formatted text. Certificates are written as standard BEGIN CERTIFICATE
	// blocks.
	// 
	// Every private key is exported as unencrypted PKCS #8 in a BEGIN PRIVATE KEY
	// block. This method does not emit PKCS #1 RSA, SEC 1 EC, traditional DSA, or
	// legacy OpenSSL encrypted-private-key blocks.
	// 
	// Private keys are unencrypted: The returned text contains cleartext private-key
	// material. Use ToPemEx[1] to produce encrypted PKCS #8 private-key blocks or to
	// omit selected categories of objects.
	// 
	// References:
	// [1] #ToPemEx
	bool ToPem(CkString &outStr);
	// Exports all private keys and certificates currently held by this object as
	// PEM-formatted text. Certificates are written as standard BEGIN CERTIFICATE
	// blocks.
	// 
	// Every private key is exported as unencrypted PKCS #8 in a BEGIN PRIVATE KEY
	// block. This method does not emit PKCS #1 RSA, SEC 1 EC, traditional DSA, or
	// legacy OpenSSL encrypted-private-key blocks.
	// 
	// Private keys are unencrypted: The returned text contains cleartext private-key
	// material. Use ToPemEx[1] to produce encrypted PKCS #8 private-key blocks or to
	// omit selected categories of objects.
	// 
	// References:
	// [1] #ToPemEx
	const wchar_t *toPem(void);

	// Exports selected PFX contents as PEM-formatted text. Certificates are written as
	// standard BEGIN CERTIFICATE blocks. Private keys are always written in PKCS #8
	// form: BEGIN PRIVATE KEY when unencrypted, or BEGIN ENCRYPTED PRIVATE KEY when
	// encrypted. Traditional PKCS #1 RSA, SEC 1 EC, DSA, and legacy OpenSSL
	// encrypted-key PEM formats are not produced.
	// 
	// The arguments control the output as follows:
	// 
	// +----------+-------------------------------------------------------------------+
	// | Argument |                              Effect                               |
	// +==========+===================================================================+
	// | extendedAttrs     | When true, emits OpenSSL-style bag and key attribute text in    |
	// |          | addition to the PEM blocks.                                       |
	// +----------+-------------------------------------------------------------------+
	// | noKeys     | When true, omits private-key blocks.                            |
	// +----------+-------------------------------------------------------------------+
	// | noCerts     | When true, omits all certificate blocks.                        |
	// +----------+-------------------------------------------------------------------+
	// | noCaCerts     | When true, omits intermediate and root CA certificates while    |
	// |          | retaining applicable end-entity certificates.                     |
	// +----------+-------------------------------------------------------------------+
	// | encryptAlg     | Selects private-key encryption. Recognized keywords are aes128 ,  |
	// |          | aes192 , aes256 , des3 , and 3des . Leave empty for unencrypted   |
	// |          | private keys. An unrecognized nonempty value falls back to        |
	// |          | triple-DES rather than silently producing unencrypted output.     |
	// +----------+-------------------------------------------------------------------+
	// | password     | The password for encrypted private-key output. Encryption is      |
	// |          | applied only when both encryptAlg and password are nonempty.                |
	// +----------+-------------------------------------------------------------------+
	// 
	// Encryption format: AES choices use CBC mode with a 16-byte IV. des3 and 3des use
	// triple-DES in CBC mode with an 8-byte IV. The result is an encrypted PKCS #8
	// BEGIN ENCRYPTED PRIVATE KEY block.
	// Security note: If private keys are included and either encryptAlg or password is empty,
	// the output contains unencrypted PKCS #8 private-key material. Prefer aes256 for
	// new encrypted output unless the receiving system requires another supported
	// choice.
	bool ToPemEx(bool extendedAttrs, bool noKeys, bool noCerts, bool noCaCerts, const wchar_t *encryptAlg, const wchar_t *password, CkString &outStr);
	// Exports selected PFX contents as PEM-formatted text. Certificates are written as
	// standard BEGIN CERTIFICATE blocks. Private keys are always written in PKCS #8
	// form: BEGIN PRIVATE KEY when unencrypted, or BEGIN ENCRYPTED PRIVATE KEY when
	// encrypted. Traditional PKCS #1 RSA, SEC 1 EC, DSA, and legacy OpenSSL
	// encrypted-key PEM formats are not produced.
	// 
	// The arguments control the output as follows:
	// 
	// +----------+-------------------------------------------------------------------+
	// | Argument |                              Effect                               |
	// +==========+===================================================================+
	// | extendedAttrs     | When true, emits OpenSSL-style bag and key attribute text in    |
	// |          | addition to the PEM blocks.                                       |
	// +----------+-------------------------------------------------------------------+
	// | noKeys     | When true, omits private-key blocks.                            |
	// +----------+-------------------------------------------------------------------+
	// | noCerts     | When true, omits all certificate blocks.                        |
	// +----------+-------------------------------------------------------------------+
	// | noCaCerts     | When true, omits intermediate and root CA certificates while    |
	// |          | retaining applicable end-entity certificates.                     |
	// +----------+-------------------------------------------------------------------+
	// | encryptAlg     | Selects private-key encryption. Recognized keywords are aes128 ,  |
	// |          | aes192 , aes256 , des3 , and 3des . Leave empty for unencrypted   |
	// |          | private keys. An unrecognized nonempty value falls back to        |
	// |          | triple-DES rather than silently producing unencrypted output.     |
	// +----------+-------------------------------------------------------------------+
	// | password     | The password for encrypted private-key output. Encryption is      |
	// |          | applied only when both encryptAlg and password are nonempty.                |
	// +----------+-------------------------------------------------------------------+
	// 
	// Encryption format: AES choices use CBC mode with a 16-byte IV. des3 and 3des use
	// triple-DES in CBC mode with an 8-byte IV. The result is an encrypted PKCS #8
	// BEGIN ENCRYPTED PRIVATE KEY block.
	// Security note: If private keys are included and either encryptAlg or password is empty,
	// the output contains unencrypted PKCS #8 private-key material. Prefer aes256 for
	// new encrypted output unless the receiving system requires another supported
	// choice.
	const wchar_t *toPemEx(bool extendedAttrs, bool noKeys, bool noCerts, bool noCaCerts, const wchar_t *encryptAlg, const wchar_t *password);

	// Adds the certificates currently contained in vault to the set of certificate
	// sources available for later chain-building operations, such as AddCert[1].
	// 
	// The call captures a point-in-time snapshot of the vault's certificates. Chilkat
	// retains its own lifetime-safe references to those individual certificates and
	// does not retain a reference to the XmlCertVault object itself. After this method
	// returns, vault may be released, destroyed, or allowed to go out of scope; its
	// contributed certificates remain available to this Pfx object.
	// 
	// Snapshot, not live synchronization: Certificates added to or removed from vault
	// after this call are not automatically reflected here. Call UseCertVault again to
	// capture certificates added later.
	// Additive behavior: Repeated calls accumulate certificate sources; a later call
	// does not replace or clear certificates contributed by earlier vaults. The vault
	// certificates are made available for chain construction and are not, merely by
	// this call, added to the PFX's exported certificate collection.
	// 
	// References:
	// [1] #AddCert
	bool UseCertVault(CkXmlCertVaultW &vault);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
