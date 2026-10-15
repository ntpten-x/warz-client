// CkTrustedRoots.h: interface for the CkTrustedRoots class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkTrustedRoots_H
#define _CkTrustedRoots_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkCert;
class CkTask;
class CkJavaKeyStore;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkTrustedRoots
class CK_VISIBLE_PUBLIC CkTrustedRoots  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkTrustedRoots(const CkTrustedRoots &);
	CkTrustedRoots &operator=(const CkTrustedRoots &);

    public:
	CkTrustedRoots(void);
	virtual ~CkTrustedRoots(void);

	static CkTrustedRoots *createNew(void);
	static CkTrustedRoots *createNew2(int progLang);
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
	// The number of certificates explicitly contained in this object. The count
	// includes certificates added by AddCert, AddJavaKeyStore, and LoadCaCertsPem.
	// 
	// Use indexes from 0 through NumCerts - 1 with CertAt.
	// 
	// Scope of the count: This property does not include operating-system CA roots
	// made available by TrustSystemCaRoots. It reports only the certificates stored in
	// this object.
	int get_NumCerts(void);

	// Controls the special case in which an SSL/TLS server presents a certificate
	// chain containing exactly one certificate and that certificate is self-signed.
	// The default value is false.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | false | Do not reject a one-certificate TLS chain solely because the       |
	// |         | certificate is self-signed.                                        |
	// +---------+--------------------------------------------------------------------+
	// | true  | Reject TLS server chains consisting of one self-signed             |
	// |         | certificate.                                                       |
	// +---------+--------------------------------------------------------------------+
	// 
	// This property applies to the TLS server-certificate case described above. It
	// does not reject a self-signed CA certificate merely because that certificate
	// appears as the trust anchor above a longer chain.
	// 
	// Security guidance: A self-signed certificate has no external issuer establishing
	// trust. Accept it only when the certificate or its public-key fingerprint has
	// been authenticated through a separate trusted channel.
	bool get_RejectSelfSignedCerts(void);
	// Controls the special case in which an SSL/TLS server presents a certificate
	// chain containing exactly one certificate and that certificate is self-signed.
	// The default value is false.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | false | Do not reject a one-certificate TLS chain solely because the       |
	// |         | certificate is self-signed.                                        |
	// +---------+--------------------------------------------------------------------+
	// | true  | Reject TLS server chains consisting of one self-signed             |
	// |         | certificate.                                                       |
	// +---------+--------------------------------------------------------------------+
	// 
	// This property applies to the TLS server-certificate case described above. It
	// does not reject a self-signed CA certificate merely because that certificate
	// appears as the trust anchor above a longer chain.
	// 
	// Security guidance: A self-signed certificate has no external issuer establishing
	// trust. Accept it only when the certificate or its public-key fingerprint has
	// been authenticated through a separate trusted channel.
	void put_RejectSelfSignedCerts(bool newVal);

	// Controls whether operating-system CA roots are included when this object's trust
	// configuration is activated. The default value is true.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | true  | Trust explicitly added certificates and the system-provided CA     |
	// |         | roots available to Chilkat.                                        |
	// +---------+--------------------------------------------------------------------+
	// | false | Do not automatically trust system-provided CA roots; use the       |
	// |         | explicitly configured collection and the selected                  |
	// |         | self-signed-certificate policy.                                    |
	// +---------+--------------------------------------------------------------------+
	// 
	// On Windows, system roots come from registry-based certificate stores. On Linux,
	// Chilkat may use a system CA bundle such as /etc/ssl/certs/ca-certificates.crt
	// when available.
	// 
	// System roots are not added to this object's explicit collection and therefore
	// are not included in NumCerts or returned by CertAt.
	// 
	bool get_TrustSystemCaRoots(void);
	// Controls whether operating-system CA roots are included when this object's trust
	// configuration is activated. The default value is true.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | true  | Trust explicitly added certificates and the system-provided CA     |
	// |         | roots available to Chilkat.                                        |
	// +---------+--------------------------------------------------------------------+
	// | false | Do not automatically trust system-provided CA roots; use the       |
	// |         | explicitly configured collection and the selected                  |
	// |         | self-signed-certificate policy.                                    |
	// +---------+--------------------------------------------------------------------+
	// 
	// On Windows, system roots come from registry-based certificate stores. On Linux,
	// Chilkat may use a system CA bundle such as /etc/ssl/certs/ca-certificates.crt
	// when available.
	// 
	// System roots are not added to this object's explicit collection and therefore
	// are not included in NumCerts or returned by CertAt.
	// 
	void put_TrustSystemCaRoots(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Activates this object's trust configuration for Chilkat-wide certificate
	// validation. The active configuration includes:
	//     * Certificates explicitly added to this object by AddCert, AddJavaKeyStore,
	//     or LoadCaCertsPem.
	//     * Operating-system CA roots when TrustSystemCaRoots is true.
	//     * The self-signed TLS certificate policy selected by RejectSelfSignedCerts.
	// 
	// After activation, Chilkat classes that validate PKCS7/CMS signatures or SSL/TLS
	// server certificate chains use this trust configuration. Returns true if the
	// configuration was activated successfully; otherwise returns false.
	// 
	// Trust-anchor note: Activating a certificate as trusted supplies a starting point
	// for certificate-path validation. It does not, by itself, prove that every
	// certificate issued beneath that anchor is valid for every purpose; the
	// applicable validation operation may also evaluate signatures, validity periods,
	// identity, key usage, constraints, and other policy requirements.
	bool Activate(void);


	// Adds the certificate in cert to this object's explicit trusted-certificate
	// collection. The certificate is subsequently treated as a trust anchor when this
	// configuration is activated.
	// 
	// Returns true if the certificate was added successfully; otherwise returns
	// false.
	// 
	// Security-sensitive operation: Calling this method is an explicit trust decision.
	// It does not first determine whether the certificate is self-signed, belongs to a
	// public CA, is currently valid, or is appropriate for the intended application.
	// Add only certificates obtained and verified through a trustworthy process.
	bool AddCert(CkCert &cert);


	// Adds the certificates designated as trusted entries in the keystore JavaKeyStore to
	// this object's explicit trusted-certificate collection.
	// 
	// Private keys and secret keys are not imported. Returns true if the trusted
	// certificates were added successfully; otherwise returns false.
	// 
	// Java keystore terminology: A trusted-certificate entry represents a certificate
	// that the keystore owner has chosen to trust. Importing it preserves that trust
	// decision; it does not independently validate the certificate or build a
	// certification path for it.
	bool AddJavaKeyStore(CkJavaKeyStore &keystore);

	// Adds the certificates designated as trusted entries in the keystore JavaKeyStore to
	// this object's explicit trusted-certificate collection.
	// 
	// Private keys and secret keys are not imported. Returns true if the trusted
	// certificates were added successfully; otherwise returns false.
	// 
	// Java keystore terminology: A trusted-certificate entry represents a certificate
	// that the keystore owner has chosen to trust. Importing it preserves that trust
	// decision; it does not independently validate the certificate or build a
	// certification path for it.
	CkTask *AddJavaKeyStoreAsync(CkJavaKeyStore &keystore);


	// Copies the certificate at zero-based index into the caller-supplied Cert object
	// in cert.
	// 
	// Valid indexes are from 0 through NumCerts - 1. Returns true if the certificate
	// was retrieved successfully; otherwise returns false, such as when the index is
	// outside the valid range.
	// 
	// This method enumerates only certificates explicitly contained in this
	// TrustedRoots object. Operating-system roots enabled through TrustSystemCaRoots
	// are not included.
	// 
	bool CertAt(int index, CkCert &cert);


	// Deactivates the previously activated Chilkat-wide trusted-root configuration.
	// After deactivation, roots and single-certificate self-signed certificates are
	// implicitly trusted.
	// 
	// Returns true if the active configuration was deactivated successfully;
	// otherwise returns false.
	// 
	// Security warning: This is a permissive mode. It does not merely restore a
	// conventional “trust the operating-system CA store” policy. Use Deactivate only
	// when implicitly trusting arbitrary roots and self-signed certificates is
	// intentional and acceptable for the application.
	bool Deactivate(void);


	// Returns the certificate at zero-based index in this object's explicitly added
	// certificate collection.
	// 
	// This method is deprecated. New applications should call CertAt, which returns an
	// explicit success/failure result and stores the certificate in a caller-supplied
	// Cert object.
	// 
	// Valid indexes are from 0 through NumCerts - 1. Operating-system roots enabled by
	// TrustSystemCaRoots are not part of this indexed collection.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetCert(int index);


	// Loads one or more PEM-encoded certificates from the file at path and adds them
	// to this object's explicit trusted-certificate collection. A CA bundle normally
	// contains consecutive -----BEGIN CERTIFICATE----- / -----END CERTIFICATE-----
	// blocks.
	// 
	// This method can load a curated application bundle, a Mozilla-derived CA bundle,
	// or a platform bundle such as /etc/ssl/certs/ca-certificates.crt when that file
	// exists. Returns true if the bundle was loaded successfully; otherwise returns
	// false.
	// 
	// Trust implication: Certificates loaded by this method are treated as trusted
	// anchors after activation. The file is not merely a source of intermediate
	// certificates. Review and protect the bundle as security-sensitive configuration.
	bool LoadCaCertsPem(const char *path);

	// Loads one or more PEM-encoded certificates from the file at path and adds them
	// to this object's explicit trusted-certificate collection. A CA bundle normally
	// contains consecutive -----BEGIN CERTIFICATE----- / -----END CERTIFICATE-----
	// blocks.
	// 
	// This method can load a curated application bundle, a Mozilla-derived CA bundle,
	// or a platform bundle such as /etc/ssl/certs/ca-certificates.crt when that file
	// exists. Returns true if the bundle was loaded successfully; otherwise returns
	// false.
	// 
	// Trust implication: Certificates loaded by this method are treated as trusted
	// anchors after activation. The file is not merely a source of intermediate
	// certificates. Review and protect the bundle as security-sensitive configuration.
	CkTask *LoadCaCertsPemAsync(const char *path);


	// Associates task with the object that initiated the task's asynchronous method
	// call. This supports Chilkat's asynchronous task infrastructure and is not
	// normally called directly by application code.
	// 
	// Returns true if the task caller was loaded successfully; otherwise returns
	// false.
	// 
	bool LoadTaskCaller(CkTask &task);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
