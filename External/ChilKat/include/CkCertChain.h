// CkCertChain.h: interface for the CkCertChain class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkCertChain_H
#define _CkCertChain_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkCert;
class CkTrustedRoots;
class CkJsonObject;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkCertChain
class CK_VISIBLE_PUBLIC CkCertChain  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkCertChain(const CkCertChain &);
	CkCertChain &operator=(const CkCertChain &);

    public:
	CkCertChain(void);
	virtual ~CkCertChain(void);

	static CkCertChain *createNew(void);
	static CkCertChain *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The number of certificates currently contained in the chain.
	// 
	// +----------------+-------------------------------------------------------------+
	// |     Index      |                           Meaning                           |
	// +================+=============================================================+
	// | 0              | The target or end-entity certificate—the certificate        |
	// |                | farthest from the root end of the chain                     |
	// +----------------+-------------------------------------------------------------+
	// | 1 ... NumCerts | Intermediate CA certificates, when present                  |
	// | - 2            |                                                             |
	// +----------------+-------------------------------------------------------------+
	// | NumCerts - 1   | The highest certificate available in the chain              |
	// +----------------+-------------------------------------------------------------+
	// 
	// Do not assume the final certificate is trusted: If ReachesRoot is false, the
	// final certificate may only be the highest intermediate that was available. Even
	// when the chain ends in a self-signed root, trust must be established separately.
	int get_NumCerts(void);

	// The number of certificates in the chain whose validity period has expired.
	// 
	// Expiration is only one validation check: A value of 0 does not mean the chain is
	// valid or trusted. It does not by itself establish that certificates are already
	// valid, correctly signed, unrevoked, issued by an accepted trust anchor, or
	// suitable for the intended identity and key usage.
	// 
	// Retrieve individual certificates with CertAt when the application needs to
	// inspect exact validity dates or identify which certificates are expired.
	// 
	int get_NumExpiredCerts(void);

	// true if the chain extends to a terminal root certificate rather than stopping
	// at an intermediate certificate. When this property is true, the certificate at
	// index NumCerts - 1 is the root-end certificate of the chain.
	// 
	// Root presence is not root trust: An included root is commonly self-signed, but
	// its presence does not make it a trusted anchor. Use IsRootTrusted with the
	// application's approved TrustedRoots collection to test trust-anchor membership.
	// 
	// A value of false means the chain is incomplete at the root end; the final
	// certificate may be an intermediate CA for which no issuer certificate was
	// available.
	// 
	bool get_ReachesRoot(void);

	// Specifies uncommon behavior as a comma-separated list of keywords. The default
	// is the empty string, which enables the standard behavior.
	// 
	// +-----------------------+------------------------------------------------------+
	// |        Keyword        |                        Effect                        |
	// +=======================+======================================================+
	// | PkiPathV1.ExcludeRoot | Omits the root certificate from the value returned   |
	// |                       | by X509PKIPathv1 . This option affects that method   |
	// |                       | only.                                                |
	// +-----------------------+------------------------------------------------------+
	// 
	// Interoperability note: Some protocols transport the trust anchor with the path,
	// while others expect the recipient to obtain or trust it independently. Use this
	// option according to the format required by the receiving system.
	void get_UncommonOptions(CkString &str);
	// Specifies uncommon behavior as a comma-separated list of keywords. The default
	// is the empty string, which enables the standard behavior.
	// 
	// +-----------------------+------------------------------------------------------+
	// |        Keyword        |                        Effect                        |
	// +=======================+======================================================+
	// | PkiPathV1.ExcludeRoot | Omits the root certificate from the value returned   |
	// |                       | by X509PKIPathv1 . This option affects that method   |
	// |                       | only.                                                |
	// +-----------------------+------------------------------------------------------+
	// 
	// Interoperability note: Some protocols transport the trust anchor with the path,
	// while others expect the recipient to obtain or trust it independently. Use this
	// option according to the format required by the receiving system.
	const char *uncommonOptions(void);
	// Specifies uncommon behavior as a comma-separated list of keywords. The default
	// is the empty string, which enables the standard behavior.
	// 
	// +-----------------------+------------------------------------------------------+
	// |        Keyword        |                        Effect                        |
	// +=======================+======================================================+
	// | PkiPathV1.ExcludeRoot | Omits the root certificate from the value returned   |
	// |                       | by X509PKIPathv1 . This option affects that method   |
	// |                       | only.                                                |
	// +-----------------------+------------------------------------------------------+
	// 
	// Interoperability note: Some protocols transport the trust anchor with the path,
	// while others expect the recipient to obtain or trust it independently. Use this
	// option according to the format required by the receiving system.
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Populates cert with the certificate at the specified zero-based index. Valid
	// indices range from 0 through NumCerts - 1.
	// 
	// +----------------+-------------------------------------------------------------+
	// |     Index      |                    Position in the chain                    |
	// +================+=============================================================+
	// | 0              | Target or end-entity certificate                            |
	// +----------------+-------------------------------------------------------------+
	// | 1 ... NumCerts | Intermediate CA certificates, when present                  |
	// | - 2            |                                                             |
	// +----------------+-------------------------------------------------------------+
	// | NumCerts - 1   | Highest certificate available in the chain; a root          |
	// |                | certificate only when ReachesRoot is true                 |
	// +----------------+-------------------------------------------------------------+
	// 
	// Returns true on success. Returns false if the index is invalid or the
	// certificate cannot be returned; in that case, do not use the contents of cert as
	// a successful result.
	// 
	bool CertAt(int index, CkCert &cert);


	// Returns the certificate at the specified zero-based index. Index 0 is the target
	// or end-entity certificate, and increasing indices move toward the issuer and
	// root end of the chain.
	// 
	// Deprecated: Use CertAt instead. CertAt populates a caller-supplied Cert object
	// and returns an explicit success status.
	// 
	// If index is outside the range 0 through NumCerts - 1, the method fails and
	// object-returning language bindings return a null or equivalent value. Where
	// applicable, check LastMethodSuccess and LastErrorText.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetCert(int index);


	// Tests whether the certificate at the root end of this chain is present in the
	// TrustedRoots collection passed in trustedRoots. Returns true when a matching
	// trusted-root certificate is found; otherwise returns false.
	// 
	// Trust is a local policy decision: A self-signed certificate is not trusted
	// merely because it appears at the end of a chain. This method checks membership
	// in the supplied trust collection; it does not, by itself, establish that the
	// entire chain is valid for a particular application or identity.
	// 
	// A complete certificate-validation decision may also require checking signature
	// linkage, certificate validity periods, revocation status, basic constraints, key
	// usage, policies, name constraints, and application-specific identity
	// requirements.
	// 
	bool IsRootTrusted(CkTrustedRoots &trustedRoots);


	// Loads the certificate chain from the x5c member of the JWK contained in jwk.
	// Returns true if the chain is loaded successfully; otherwise returns false.
	// 
	// As defined by RFC 7517, x5c is a JSON array of DER-encoded X.509 certificates
	// represented using standard Base64—not Base64URL. The first certificate contains
	// the key associated with the JWK. Each following certificate should certify the
	// certificate immediately before it, so the array order is target certificate
	// first and rootward certificates afterward.
	// 
	// Security note: Loading an x5c array does not make its certificates trusted.
	// Treat the chain as untrusted input until the required signature, validity,
	// trust-anchor, revocation, and application-policy checks have been completed.
	bool LoadX5C(CkJsonObject &jwk);


	// Verifies the cryptographic signature linkage of the certificates in this chain.
	// Starting with the target certificate at index 0, each certificate's signature is
	// checked using the public key of the next issuer certificate in the chain.
	// Returns true when the certificate signatures are valid through the root end of
	// the chain; otherwise returns false.
	// 
	// Signature verification is not full path validation: A true result confirms the
	// issuer-signature relationships represented by the chain. It does not by itself
	// prove that the root is trusted, that certificates are within their validity
	// periods, that none are revoked, that CA constraints and policies are acceptable,
	// or that the target certificate is valid for a particular hostname or usage.
	bool VerifyCertSignatures(void);


	// Returns the Base64 representation of a DER-encoded ASN.1 PkiPath containing the
	// certificates in this chain. This representation is commonly identified as the
	// X509PKIPathv1 token type in WS-Security and may also be encountered in
	// XML-signature workflows.
	// 
	// A PkiPath is a SEQUENCE OF Certificate ordered from the root or most-trusted end
	// toward the target certificate. This is the reverse of the indexing used by
	// CertAt, where index 0 is the target certificate.
	// 
	// +--------------------+------------------------------------+
	// |   Representation   |         Certificate order          |
	// +====================+====================================+
	// | CertChain indexing | Target/leaf → intermediates → root |
	// +--------------------+------------------------------------+
	// | X509PKIPathv1      | Root → intermediates → target/leaf |
	// +--------------------+------------------------------------+
	// 
	// By default, the root certificate is included when it is present in the chain.
	// Set UncommonOptions to PkiPathV1.ExcludeRoot when the receiving protocol expects
	// the trust anchor to be supplied separately.
	// 
	// Return-value note: This is a string-returning method. Check LastMethodSuccess
	// before using the returned text, and inspect LastErrorText if the operation
	// fails.
	bool X509PKIPathv1(CkString &outStr);

	// Returns the Base64 representation of a DER-encoded ASN.1 PkiPath containing the
	// certificates in this chain. This representation is commonly identified as the
	// X509PKIPathv1 token type in WS-Security and may also be encountered in
	// XML-signature workflows.
	// 
	// A PkiPath is a SEQUENCE OF Certificate ordered from the root or most-trusted end
	// toward the target certificate. This is the reverse of the indexing used by
	// CertAt, where index 0 is the target certificate.
	// 
	// +--------------------+------------------------------------+
	// |   Representation   |         Certificate order          |
	// +====================+====================================+
	// | CertChain indexing | Target/leaf → intermediates → root |
	// +--------------------+------------------------------------+
	// | X509PKIPathv1      | Root → intermediates → target/leaf |
	// +--------------------+------------------------------------+
	// 
	// By default, the root certificate is included when it is present in the chain.
	// Set UncommonOptions to PkiPathV1.ExcludeRoot when the receiving protocol expects
	// the trust anchor to be supplied separately.
	// 
	// Return-value note: This is a string-returning method. Check LastMethodSuccess
	// before using the returned text, and inspect LastErrorText if the operation
	// fails.
	const char *x509PKIPathv1(void);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
