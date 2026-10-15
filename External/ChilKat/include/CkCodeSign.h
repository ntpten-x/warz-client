// CkCodeSign.h: interface for the CkCodeSign class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkCodeSign_H
#define _CkCodeSign_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkCert;
class CkJsonObject;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkCodeSign
class CK_VISIBLE_PUBLIC CkCodeSign  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkCodeSign(const CkCodeSign &);
	CkCodeSign &operator=(const CkCodeSign &);

    public:
	CkCodeSign(void);
	virtual ~CkCodeSign(void);

	static CkCodeSign *createNew(void);
	static CkCodeSign *createNew2(int progLang);
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
	// Specifies the approximate interval, in milliseconds, between AbortCheck[1] event
	// callbacks during supported operations. An event handler can request that the
	// current operation be aborted.
	// 
	// The default is 0, which disables AbortCheck callbacks. Setting a positive value
	// enables periodic callbacks when an operation is sufficiently long-running;
	// methods that finish quickly may complete without generating one.
	// 
	// Callback interval: The interval is a scheduling target rather than a real-time
	// guarantee. Callback timing can vary while waiting for private-key hardware, a
	// timestamp authority, certificate-chain processing, or other operating-system
	// services.
	// 
	// References:
	// [1] #AbortCheck
	int get_HeartbeatMs(void);
	// Specifies the approximate interval, in milliseconds, between AbortCheck[1] event
	// callbacks during supported operations. An event handler can request that the
	// current operation be aborted.
	// 
	// The default is 0, which disables AbortCheck callbacks. Setting a positive value
	// enables periodic callbacks when an operation is sufficiently long-running;
	// methods that finish quickly may complete without generating one.
	// 
	// Callback interval: The interval is a scheduling target rather than a real-time
	// guarantee. Callback timing can vary while waiting for private-key hardware, a
	// timestamp authority, certificate-chain processing, or other operating-system
	// services.
	// 
	// References:
	// [1] #AbortCheck
	void put_HeartbeatMs(int newVal);

	// Provides a comma-separated list of specialized compatibility or validation
	// options. The default is an empty string, which is appropriate for normal use.
	// 
	// +-----------------------------+------------------------------------------------+
	// |           Option            |                     Effect                     |
	// +=============================+================================================+
	// | codesign-allow-expired-cert | Prevents Authenticode verification from        |
	// |                             | failing solely because the signing certificate |
	// |                             | is expired.                                    |
	// +-----------------------------+------------------------------------------------+
	// 
	// Use only for an explicit trust policy: This option relaxes the
	// certificate-expiration check; it does not disable file-integrity, signature,
	// chain, or other validation checks. It is not a substitute for timestamping. A
	// signature carrying a valid trusted timestamp should ordinarily remain verifiable
	// after the signing certificate expires without this option.
	void get_UncommonOptions(CkString &str);
	// Provides a comma-separated list of specialized compatibility or validation
	// options. The default is an empty string, which is appropriate for normal use.
	// 
	// +-----------------------------+------------------------------------------------+
	// |           Option            |                     Effect                     |
	// +=============================+================================================+
	// | codesign-allow-expired-cert | Prevents Authenticode verification from        |
	// |                             | failing solely because the signing certificate |
	// |                             | is expired.                                    |
	// +-----------------------------+------------------------------------------------+
	// 
	// Use only for an explicit trust policy: This option relaxes the
	// certificate-expiration check; it does not disable file-integrity, signature,
	// chain, or other validation checks. It is not a substitute for timestamping. A
	// signature carrying a valid trusted timestamp should ordinarily remain verifiable
	// after the signing certificate expires without this option.
	const char *uncommonOptions(void);
	// Provides a comma-separated list of specialized compatibility or validation
	// options. The default is an empty string, which is appropriate for normal use.
	// 
	// +-----------------------------+------------------------------------------------+
	// |           Option            |                     Effect                     |
	// +=============================+================================================+
	// | codesign-allow-expired-cert | Prevents Authenticode verification from        |
	// |                             | failing solely because the signing certificate |
	// |                             | is expired.                                    |
	// +-----------------------------+------------------------------------------------+
	// 
	// Use only for an explicit trust policy: This option relaxes the
	// certificate-expiration check; it does not disable file-integrity, signature,
	// chain, or other validation checks. It is not a substitute for timestamping. A
	// signature carrying a valid trusted timestamp should ordinarily remain verifiable
	// after the signing certificate expires without this option.
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds a Microsoft Authenticode signature to the Windows executable or DLL
	// specified by path. The file is modified in place. cert supplies the code-signing
	// certificate and must provide access to its associated private key. options supplies
	// the signing configuration as JSON.
	// 
	// Common options options include:
	// 
	// +-------------------------------+----------------------------------------------+
	// |          JSON member          |                   Purpose                    |
	// +===============================+==============================================+
	// | hashAlg                       | Selects the file-digest algorithm, such as   |
	// |                               | sha256 .                                     |
	// +-------------------------------+----------------------------------------------+
	// | timestampToken.enabled        | Enables an RFC 3161 timestamp token.         |
	// +-------------------------------+----------------------------------------------+
	// | timestampToken.tsaUrl         | Specifies the timestamp authority URL.       |
	// +-------------------------------+----------------------------------------------+
	// | timestampToken.requestTsaCert | Requests inclusion of the timestamp          |
	// |                               | authority certificate.                       |
	// +-------------------------------+----------------------------------------------+
	// | timestampToken.hashAlg        | Selects the timestamp-request digest         |
	// |                               | algorithm, such as sha256 .                  |
	// +-------------------------------+----------------------------------------------+
	// 
	// {
	//   "hashAlg": "sha256",
	//   "timestampToken": {
	//     "enabled": true,
	//     "tsaUrl": "http://timestamp.example.com",
	//     "requestTsaCert": true,
	//     "hashAlg": "sha256"
	//   }
	// }
	// Timestamping is strongly recommended: A trusted timestamp records that the
	// signature existed while the code-signing certificate was valid. This normally
	// allows the signature to continue validating after the signing certificate
	// expires, provided the timestamp and certificate chains remain valid under the
	// verifier's trust policy.
	bool AddSignature(const char *path, CkCert &cert, CkJsonObject &options);

	// Adds a Microsoft Authenticode signature to the Windows executable or DLL
	// specified by path. The file is modified in place. cert supplies the code-signing
	// certificate and must provide access to its associated private key. options supplies
	// the signing configuration as JSON.
	// 
	// Common options options include:
	// 
	// +-------------------------------+----------------------------------------------+
	// |          JSON member          |                   Purpose                    |
	// +===============================+==============================================+
	// | hashAlg                       | Selects the file-digest algorithm, such as   |
	// |                               | sha256 .                                     |
	// +-------------------------------+----------------------------------------------+
	// | timestampToken.enabled        | Enables an RFC 3161 timestamp token.         |
	// +-------------------------------+----------------------------------------------+
	// | timestampToken.tsaUrl         | Specifies the timestamp authority URL.       |
	// +-------------------------------+----------------------------------------------+
	// | timestampToken.requestTsaCert | Requests inclusion of the timestamp          |
	// |                               | authority certificate.                       |
	// +-------------------------------+----------------------------------------------+
	// | timestampToken.hashAlg        | Selects the timestamp-request digest         |
	// |                               | algorithm, such as sha256 .                  |
	// +-------------------------------+----------------------------------------------+
	// 
	// {
	//   "hashAlg": "sha256",
	//   "timestampToken": {
	//     "enabled": true,
	//     "tsaUrl": "http://timestamp.example.com",
	//     "requestTsaCert": true,
	//     "hashAlg": "sha256"
	//   }
	// }
	// Timestamping is strongly recommended: A trusted timestamp records that the
	// signature existed while the code-signing certificate was valid. This normally
	// allows the signature to continue validating after the signing certificate
	// expires, provided the timestamp and certificate chains remain valid under the
	// verifier's trust policy.
	CkTask *AddSignatureAsync(const char *path, CkCert &cert, CkJsonObject &options);


	// Retrieves the X.509 signer certificate discovered by the most recent call to
	// VerifySignature[1] on this CodeSign object. If the certificate is fully
	// available, cert is loaded with it and the method returns true. Otherwise, the
	// method returns false.
	// 
	// The returned object contains the public certificate only; it does not provide
	// the signer's private key. Call this method after VerifySignature and use the
	// same CodeSign instance.
	// 
	// Certificate retrieval versus trust: Successfully retrieving the signer
	// certificate does not independently validate the signature or establish trust.
	// Use the result of VerifySignature and the returned signature information when
	// making a trust decision.
	// 
	// References:
	// [1] #VerifySignature
	bool GetSignerCert(CkCert &cert);


	// Removes the embedded Authenticode signature from the Windows executable or DLL
	// specified by path. The file is modified in place. Returns true if the
	// signature is successfully removed; otherwise returns false.
	// 
	// Effect of removal: The resulting file is no longer Authenticode-signed and no
	// longer carries the removed publisher and timestamp information. This operation
	// does not delete the signing certificate from a Windows certificate store or
	// alter the private key. Keep a backup when the original signed file must be
	// retained.
	bool RemoveSignature(const char *path);


	// Verifies the embedded Microsoft Authenticode signature of the Windows executable
	// or DLL specified by path. Structured information about the signature, signer,
	// certificate chain, digest algorithms, timestamp, and validation result is
	// written to sigInfo.
	// 
	// Returns true when the signature satisfies the applicable Authenticode
	// validation checks under the current Windows trust configuration. This includes
	// confirming that the signed portions of the file have not changed and evaluating
	// the signing certificate and timestamp information, as applicable. An unsigned
	// file or a signature that does not validate causes the method to return false.
	// Inspect sigInfo and LastErrorText for details.
	// 
	// What successful verification means: Authenticode verifies publisher identity,
	// file integrity, and certificate trust according to the validation policy. It
	// does not prove that the software is bug-free, safe to execute, or free of
	// malicious behavior. Trust results can also depend on the Windows trusted-root
	// store, certificate-chain availability, timestamp validity, revocation policy,
	// and other system trust settings.
	bool VerifySignature(const char *path, CkJsonObject &sigInfo);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
