// CkCsrW.h: interface for the CkCsrW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkCsrW_H
#define _CkCsrW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkPrivateKeyW;
class CkBinDataW;
class CkXmlW;
class CkPublicKeyW;
class CkStringTableW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkCsrW
class CK_VISIBLE_PUBLIC CkCsrW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkCsrW(const CkCsrW &);
	CkCsrW &operator=(const CkCsrW &);

    public:
	CkCsrW(void);
	virtual ~CkCsrW(void);

	

	static CkCsrW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Gets or sets the subject common name (CN), OID 2.5.4.3, for the CSR. For a TLS
	// server request this has traditionally been a DNS hostname; for other certificate
	// profiles it may identify a person, device, service, or organization.
	// 
	// Chilkat requires this property when generating a CSR. The exact value and
	// validation rules are determined by the certificate authority and certificate
	// profile.
	// 
	// Do not use CN as a substitute for SAN: For modern TLS certificates, add every
	// DNS hostname or IP address through AddSan[1]. Current TLS identity verification
	// uses Subject Alternative Name entries, and the common name is retained primarily
	// for compatibility and display.
	// 
	// References:
	// [1] #AddSan
	void get_CommonName(CkString &str);
	// Gets or sets the subject common name (CN), OID 2.5.4.3, for the CSR. For a TLS
	// server request this has traditionally been a DNS hostname; for other certificate
	// profiles it may identify a person, device, service, or organization.
	// 
	// Chilkat requires this property when generating a CSR. The exact value and
	// validation rules are determined by the certificate authority and certificate
	// profile.
	// 
	// Do not use CN as a substitute for SAN: For modern TLS certificates, add every
	// DNS hostname or IP address through AddSan[1]. Current TLS identity verification
	// uses Subject Alternative Name entries, and the common name is retained primarily
	// for compatibility and display.
	// 
	// References:
	// [1] #AddSan
	const wchar_t *commonName(void);
	// Gets or sets the subject common name (CN), OID 2.5.4.3, for the CSR. For a TLS
	// server request this has traditionally been a DNS hostname; for other certificate
	// profiles it may identify a person, device, service, or organization.
	// 
	// Chilkat requires this property when generating a CSR. The exact value and
	// validation rules are determined by the certificate authority and certificate
	// profile.
	// 
	// Do not use CN as a substitute for SAN: For modern TLS certificates, add every
	// DNS hostname or IP address through AddSan[1]. Current TLS identity verification
	// uses Subject Alternative Name entries, and the common name is retained primarily
	// for compatibility and display.
	// 
	// References:
	// [1] #AddSan
	void put_CommonName(const wchar_t *newVal);

	// Gets or sets the subject organization name (O), OID 2.5.4.10. For
	// organization-validated certificate profiles, this is typically the legal or
	// verified organization name.
	// 
	// This property is optional at the PKCS #10 level, but a certificate authority may
	// require it or replace it with a value established during identity validation.
	// 
	void get_Company(CkString &str);
	// Gets or sets the subject organization name (O), OID 2.5.4.10. For
	// organization-validated certificate profiles, this is typically the legal or
	// verified organization name.
	// 
	// This property is optional at the PKCS #10 level, but a certificate authority may
	// require it or replace it with a value established during identity validation.
	// 
	const wchar_t *company(void);
	// Gets or sets the subject organization name (O), OID 2.5.4.10. For
	// organization-validated certificate profiles, this is typically the legal or
	// verified organization name.
	// 
	// This property is optional at the PKCS #10 level, but a certificate authority may
	// require it or replace it with a value established during identity validation.
	// 
	void put_Company(const wchar_t *newVal);

	// Gets or sets the subject organizational unit name (OU), OID 2.5.4.11. It may
	// identify a department, division, team, or other unit within the organization.
	// 
	// This property is optional. Some public certificate profiles restrict or omit
	// organizational-unit values, so follow the requirements of the receiving CA.
	// 
	void get_CompanyDivision(CkString &str);
	// Gets or sets the subject organizational unit name (OU), OID 2.5.4.11. It may
	// identify a department, division, team, or other unit within the organization.
	// 
	// This property is optional. Some public certificate profiles restrict or omit
	// organizational-unit values, so follow the requirements of the receiving CA.
	// 
	const wchar_t *companyDivision(void);
	// Gets or sets the subject organizational unit name (OU), OID 2.5.4.11. It may
	// identify a department, division, team, or other unit within the organization.
	// 
	// This property is optional. Some public certificate profiles restrict or omit
	// organizational-unit values, so follow the requirements of the receiving CA.
	// 
	void put_CompanyDivision(const wchar_t *newVal);

	// Gets or sets the subject country name (C), OID 2.5.4.6. The value is normally a
	// two-letter uppercase ISO 3166-1 country code, such as US, CA, or DE.
	// 
	// This property is optional unless required by the certificate authority's
	// enrollment profile.
	// 
	// X.520 encoding: The country-name attribute is defined as a two-character
	// PrintableString. Do not place a full country name such as United States in this
	// field.
	void get_Country(CkString &str);
	// Gets or sets the subject country name (C), OID 2.5.4.6. The value is normally a
	// two-letter uppercase ISO 3166-1 country code, such as US, CA, or DE.
	// 
	// This property is optional unless required by the certificate authority's
	// enrollment profile.
	// 
	// X.520 encoding: The country-name attribute is defined as a two-character
	// PrintableString. Do not place a full country name such as United States in this
	// field.
	const wchar_t *country(void);
	// Gets or sets the subject country name (C), OID 2.5.4.6. The value is normally a
	// two-letter uppercase ISO 3166-1 country code, such as US, CA, or DE.
	// 
	// This property is optional unless required by the certificate authority's
	// enrollment profile.
	// 
	// X.520 encoding: The country-name attribute is defined as a two-character
	// PrintableString. Do not place a full country name such as United States in this
	// field.
	void put_Country(const wchar_t *newVal);

	// Gets or sets the legacy PKCS #9 emailAddress subject attribute, OID
	// 1.2.840.113549.1.9.1. This property is optional.
	// 
	// Prefer an email SAN for email identity: The subject-DN emailAddress attribute is
	// permitted for legacy compatibility but is deprecated in the Internet X.509
	// profile. When the certificate must identify an email address, also use AddSan[1]
	// with rfc822Name, as required by the target certificate profile.
	// 
	// References:
	// [1] #AddSan
	void get_EmailAddress(CkString &str);
	// Gets or sets the legacy PKCS #9 emailAddress subject attribute, OID
	// 1.2.840.113549.1.9.1. This property is optional.
	// 
	// Prefer an email SAN for email identity: The subject-DN emailAddress attribute is
	// permitted for legacy compatibility but is deprecated in the Internet X.509
	// profile. When the certificate must identify an email address, also use AddSan[1]
	// with rfc822Name, as required by the target certificate profile.
	// 
	// References:
	// [1] #AddSan
	const wchar_t *emailAddress(void);
	// Gets or sets the legacy PKCS #9 emailAddress subject attribute, OID
	// 1.2.840.113549.1.9.1. This property is optional.
	// 
	// Prefer an email SAN for email identity: The subject-DN emailAddress attribute is
	// permitted for legacy compatibility but is deprecated in the Internet X.509
	// profile. When the certificate must identify an email address, also use AddSan[1]
	// with rfc822Name, as required by the target certificate profile.
	// 
	// References:
	// [1] #AddSan
	void put_EmailAddress(const wchar_t *newVal);

	// Gets or sets the message-digest algorithm used when signing a generated CSR.
	// Supported values are sha1, sha256, sha384, and sha512. The default is sha256.
	// 
	// This property selects the digest for the CSR's proof-of-possession signature. It
	// does not select the signature algorithm that the certificate authority will use
	// on the issued certificate.
	// 
	// Avoid SHA-1 for new requests: Use sha256 or stronger unless a legacy enrollment
	// system explicitly requires SHA-1. The digest must also be compatible with the
	// supplied key type and the receiving CA.
	void get_HashAlgorithm(CkString &str);
	// Gets or sets the message-digest algorithm used when signing a generated CSR.
	// Supported values are sha1, sha256, sha384, and sha512. The default is sha256.
	// 
	// This property selects the digest for the CSR's proof-of-possession signature. It
	// does not select the signature algorithm that the certificate authority will use
	// on the issued certificate.
	// 
	// Avoid SHA-1 for new requests: Use sha256 or stronger unless a legacy enrollment
	// system explicitly requires SHA-1. The digest must also be compatible with the
	// supplied key type and the receiving CA.
	const wchar_t *hashAlgorithm(void);
	// Gets or sets the message-digest algorithm used when signing a generated CSR.
	// Supported values are sha1, sha256, sha384, and sha512. The default is sha256.
	// 
	// This property selects the digest for the CSR's proof-of-possession signature. It
	// does not select the signature algorithm that the certificate authority will use
	// on the issued certificate.
	// 
	// Avoid SHA-1 for new requests: Use sha256 or stronger unless a legacy enrollment
	// system explicitly requires SHA-1. The digest must also be compatible with the
	// supplied key type and the receiving CA.
	void put_HashAlgorithm(const wchar_t *newVal);

	// Gets or sets the subject locality name (L), OID 2.5.4.7. This usually identifies
	// a city, town, or other local jurisdiction.
	// 
	// This property is optional unless required by the certificate authority's
	// enrollment profile.
	// 
	void get_Locality(CkString &str);
	// Gets or sets the subject locality name (L), OID 2.5.4.7. This usually identifies
	// a city, town, or other local jurisdiction.
	// 
	// This property is optional unless required by the certificate authority's
	// enrollment profile.
	// 
	const wchar_t *locality(void);
	// Gets or sets the subject locality name (L), OID 2.5.4.7. This usually identifies
	// a city, town, or other local jurisdiction.
	// 
	// This property is optional unless required by the certificate authority's
	// enrollment profile.
	// 
	void put_Locality(const wchar_t *newVal);

	// Gets or sets the hash algorithm used by MGF1 in an RSASSA-PSS CSR signature.
	// This property applies only when the private key is RSA and PssPadding[1] is
	// true.
	// 
	// Supported values are sha256, sha384, and sha512. The default is sha256.
	// 
	// Common choice: For straightforward interoperability, set this to the same digest
	// selected by HashAlgorithm[2] unless the receiving profile explicitly specifies
	// different RSASSA-PSS parameters.
	// 
	// References:
	// [1] #PssPadding
	// [2] #HashAlgorithm
	void get_MgfHashAlg(CkString &str);
	// Gets or sets the hash algorithm used by MGF1 in an RSASSA-PSS CSR signature.
	// This property applies only when the private key is RSA and PssPadding[1] is
	// true.
	// 
	// Supported values are sha256, sha384, and sha512. The default is sha256.
	// 
	// Common choice: For straightforward interoperability, set this to the same digest
	// selected by HashAlgorithm[2] unless the receiving profile explicitly specifies
	// different RSASSA-PSS parameters.
	// 
	// References:
	// [1] #PssPadding
	// [2] #HashAlgorithm
	const wchar_t *mgfHashAlg(void);
	// Gets or sets the hash algorithm used by MGF1 in an RSASSA-PSS CSR signature.
	// This property applies only when the private key is RSA and PssPadding[1] is
	// true.
	// 
	// Supported values are sha256, sha384, and sha512. The default is sha256.
	// 
	// Common choice: For straightforward interoperability, set this to the same digest
	// selected by HashAlgorithm[2] unless the receiving profile explicitly specifies
	// different RSASSA-PSS parameters.
	// 
	// References:
	// [1] #PssPadding
	// [2] #HashAlgorithm
	void put_MgfHashAlg(const wchar_t *newVal);

	// Controls the RSA signature scheme used when generating a CSR with an RSA private
	// key. When true, Chilkat signs using RSASSA-PSS. When false, the RSA
	// signature uses the traditional RSASSA-PKCS1-v1_5 scheme. This property has no
	// effect for elliptic-curve keys.
	// 
	// Related settings: HashAlgorithm[1] selects the digest of the
	// certification-request information. When PSS is enabled, MgfHashAlg[2] selects
	// the digest used by MGF1.
	// Interoperability: RSASSA-PSS is a modern RSA signature scheme, but the receiving
	// CA or enrollment protocol must support PSS algorithm parameters in PKCS #10
	// requests.
	// 
	// References:
	// [1] #HashAlgorithm
	// [2] #MgfHashAlg
	bool get_PssPadding(void);
	// Controls the RSA signature scheme used when generating a CSR with an RSA private
	// key. When true, Chilkat signs using RSASSA-PSS. When false, the RSA
	// signature uses the traditional RSASSA-PKCS1-v1_5 scheme. This property has no
	// effect for elliptic-curve keys.
	// 
	// Related settings: HashAlgorithm[1] selects the digest of the
	// certification-request information. When PSS is enabled, MgfHashAlg[2] selects
	// the digest used by MGF1.
	// Interoperability: RSASSA-PSS is a modern RSA signature scheme, but the receiving
	// CA or enrollment protocol must support PSS algorithm parameters in PKCS #10
	// requests.
	// 
	// References:
	// [1] #HashAlgorithm
	// [2] #MgfHashAlg
	void put_PssPadding(bool newVal);

	// Gets or sets the subject state or province name (ST, sometimes displayed as S),
	// OID 2.5.4.8.
	// 
	// This property is optional unless required by the certificate authority. Use the
	// full jurisdiction name expected by the CA, such as Illinois, rather than
	// assuming an abbreviation is accepted.
	// 
	void get_State(CkString &str);
	// Gets or sets the subject state or province name (ST, sometimes displayed as S),
	// OID 2.5.4.8.
	// 
	// This property is optional unless required by the certificate authority. Use the
	// full jurisdiction name expected by the CA, such as Illinois, rather than
	// assuming an abbreviation is accepted.
	// 
	const wchar_t *state(void);
	// Gets or sets the subject state or province name (ST, sometimes displayed as S),
	// OID 2.5.4.8.
	// 
	// This property is optional unless required by the certificate authority. Use the
	// full jurisdiction name expected by the CA, such as Illinois, rather than
	// assuming an abbreviation is accepted.
	// 
	void put_State(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds one Subject Alternative Name to the CSR that will be generated. Call this
	// method once for each name to request. The SAN values are carried as requested
	// certificate extensions; the issuing certificate authority decides whether to
	// validate and include them in the final certificate.
	// 
	// +------------------------------+-----------------------------------------------+
	// |           sanType            |              Meaning and example              |
	// +==============================+===============================================+
	// | dnsName                      | A DNS hostname, such as www.example.com or an |
	// |                              | allowed wildcard such as *.example.com .      |
	// +------------------------------+-----------------------------------------------+
	// | IPAddress                    | An IPv4 or IPv6 address, such as 192.0.2.10   |
	// |                              | or 2001:db8::10 .                             |
	// +------------------------------+-----------------------------------------------+
	// | rfc822Name                   | An Internet email address, such as            |
	// |                              | user@example.com .                            |
	// +------------------------------+-----------------------------------------------+
	// | uniformResourceIndicator     | A URI. This is Chilkat's accepted keyword;    |
	// |                              | the X.509 GeneralName field is formally named |
	// |                              | uniformResourceIdentifier .                   |
	// +------------------------------+-----------------------------------------------+
	// | directoryName                | An X.500 distinguished name.                  |
	// +------------------------------+-----------------------------------------------+
	// | registeredID                 | A registered object identifier.               |
	// +------------------------------+-----------------------------------------------+
	// | otherName , x400Address ,    | Less common X.509 GeneralName forms used by   |
	// | ediPartyName                 | specialized profiles.                         |
	// +------------------------------+-----------------------------------------------+
	// 
	// TLS server certificates: Put every DNS name and IP address that clients must
	// validate in the SAN extension. Modern TLS identity checking uses dNSName and
	// iPAddress SAN entries rather than relying on the subject common name.
	bool AddSan(const wchar_t *sanType, const wchar_t *sanValue);

	// Generates a PKCS #10 Certificate Signing Request using the supplied RSA or
	// elliptic-curve private key and writes the binary DER representation to csrData.
	// 
	// The generated request uses the subject fields, Subject Alternative Names,
	// extension request, and signature settings currently configured on this object.
	// The DER bytes are the same request data that would appear as the Base64 body
	// returned by GenCsrPem[1].
	// 
	// DER versus PEM: DER is the binary ASN.1 encoding of the CSR. PEM is that DER
	// data encoded as Base64 with certificate-request header and footer lines. Use DER
	// for binary protocols such as EST when required by the receiving system.
	// 
	// References:
	// [1] #GenCsrPem
	bool GenCsrBd(CkPrivateKeyW &privKey, CkBinDataW &csrData);

	// Generates a PKCS #10 Certificate Signing Request using the supplied PrivateKey
	// and the subject fields, Subject Alternative Names, extension request, and
	// signature settings currently configured on this object. The private key may be
	// RSA or elliptic-curve (ECDSA).
	// 
	// On success, returns the CSR in PEM form, normally enclosed by -----BEGIN
	// CERTIFICATE REQUEST----- and -----END CERTIFICATE REQUEST----- lines. The Base64
	// body is the DER-encoded PKCS #10 request.
	// 
	// What a CSR contains: A CSR contains the subject name, the public key derived
	// from privKey, optional attributes such as requested extensions, and a signature
	// made with the corresponding private key. The private key itself is never
	// included.
	// Signature settings: HashAlgorithm[1] selects the digest. For RSA keys,
	// PssPadding[2] and MgfHashAlg[3] control whether RSASSA-PSS is used and which
	// MGF1 digest is encoded in its parameters.
	// 
	// References:
	// [1] #HashAlgorithm
	// [2] #PssPadding
	// [3] #MgfHashAlg
	bool GenCsrPem(CkPrivateKeyW &privKey, CkString &outStr);
	// Generates a PKCS #10 Certificate Signing Request using the supplied PrivateKey
	// and the subject fields, Subject Alternative Names, extension request, and
	// signature settings currently configured on this object. The private key may be
	// RSA or elliptic-curve (ECDSA).
	// 
	// On success, returns the CSR in PEM form, normally enclosed by -----BEGIN
	// CERTIFICATE REQUEST----- and -----END CERTIFICATE REQUEST----- lines. The Base64
	// body is the DER-encoded PKCS #10 request.
	// 
	// What a CSR contains: A CSR contains the subject name, the public key derived
	// from privKey, optional attributes such as requested extensions, and a signature
	// made with the corresponding private key. The private key itself is never
	// included.
	// Signature settings: HashAlgorithm[1] selects the digest. For RSA keys,
	// PssPadding[2] and MgfHashAlg[3] control whether RSASSA-PSS is used and which
	// MGF1 digest is encoded in its parameters.
	// 
	// References:
	// [1] #HashAlgorithm
	// [2] #PssPadding
	// [3] #MgfHashAlg
	const wchar_t *genCsrPem(CkPrivateKeyW &privKey);

	// Retrieves the PKCS #9 extensionRequest attribute, OID 1.2.840.113549.1.9.14,
	// from the currently loaded CSR. When present, the requested extensions are loaded
	// into extensionReqXml as Chilkat ASN.1 XML.
	// 
	// CSR contents only: The returned XML describes extensions requested by the
	// applicant. It does not show which extensions a certificate authority ultimately
	// accepted or placed in an issued certificate.
	bool GetExtensionRequest(CkXmlW &extensionReqXml);

	// Copies the public key contained in the currently loaded CSR into pubkey. The
	// resulting PublicKey object is independent of the CSR and contains no private-key
	// material.
	// 
	// Proof of possession: A PKCS #10 request is signed with the private key
	// corresponding to this public key. Use VerifyCsr[1] to check that relationship;
	// merely extracting the public key does not verify the CSR signature.
	// 
	// References:
	// [1] #VerifyCsr
	bool GetPublicKey(CkPublicKeyW &pubkey);

	// Retrieves the Subject Alternative Names requested by the currently loaded CSR
	// and writes them to the supplied StringTable.
	// 
	// Requested, not issued: These values are taken from the CSR's extension-request
	// data. They describe what the applicant asked the CA to place in the certificate,
	// not what a CA has validated or will necessarily issue.
	bool GetSans(CkStringTableW &sans);

	// Returns the value of a subject distinguished-name attribute from the currently
	// loaded or configured CSR, identified by its object identifier. For example, OID
	// 2.5.4.9 identifies streetAddress.
	// 
	// OID-based lookup: The short names commonly displayed in certificate tools, such
	// as CN, O, OU, and C, are labels for specific OIDs. This method uses the numeric
	// OID so uncommon or application-specific attributes can also be retrieved.
	bool GetSubjectField(const wchar_t *oid, CkString &outStr);
	// Returns the value of a subject distinguished-name attribute from the currently
	// loaded or configured CSR, identified by its object identifier. For example, OID
	// 2.5.4.9 identifies streetAddress.
	// 
	// OID-based lookup: The short names commonly displayed in certificate tools, such
	// as CN, O, OU, and C, are labels for specific OIDs. This method uses the numeric
	// OID so uncommon or application-specific attributes can also be retrieved.
	const wchar_t *getSubjectField(const wchar_t *oid);
	// Returns the value of a subject distinguished-name attribute from the currently
	// loaded or configured CSR, identified by its object identifier. For example, OID
	// 2.5.4.9 identifies streetAddress.
	// 
	// OID-based lookup: The short names commonly displayed in certificate tools, such
	// as CN, O, OU, and C, are labels for specific OIDs. This method uses the numeric
	// OID so uncommon or application-specific attributes can also be retrieved.
	const wchar_t *subjectField(const wchar_t *oid);

	// Loads a PEM-encoded PKCS #10 Certificate Signing Request. On success, the
	// subject properties and retrieval methods on this object reflect the values
	// contained in the loaded request, including its public key, Subject Alternative
	// Names, and extension-request attribute when present.
	// 
	// Loading is not verification: Parsing a CSR does not prove that its signature is
	// valid. Call VerifyCsr[1] to verify that the request was signed by the private
	// key corresponding to the public key carried in the CSR.
	// No private key is loaded: A PKCS #10 request contains only the public key and
	// signature. The applicant must retain the original private key separately for use
	// with the certificate issued by the CA.
	// 
	// References:
	// [1] #VerifyCsr
	bool LoadCsrPem(const wchar_t *csrPemStr);

	// Sets the PKCS #9 extensionRequest attribute, OID 1.2.840.113549.1.9.14, for the
	// CSR to be generated. extensionReqXml supplies the requested X.509 extensions as
	// ASN.1 represented in Chilkat XML form.
	// 
	// Purpose of extensionRequest: PKCS #10 has no certificate-extension field of its
	// own. Requested X.509 extensions, such as Subject Alternative Name, key usage, or
	// extended key usage, are commonly carried in this signed attribute.
	// A request is not a command: The certificate authority may ignore, modify,
	// reject, or independently validate any requested extension according to its
	// enrollment profile and security policy.
	bool SetExtensionRequest(CkXmlW &extensionReqXml);

	// Sets a subject distinguished-name attribute identified by oid. For example, OID
	// 2.5.4.9 identifies streetAddress. Use the dedicated properties such as
	// CommonName[1], Company[2], and Country[3] for the commonly used subject
	// attributes.
	// 
	// asnType specifies the ASN.1 string type used to encode the value and may be
	// UTF8String, IA5String, or PrintableString. Use UTF8String unless the attribute
	// definition or certificate-authority profile requires another type.
	// 
	// +-----------------+------------------------------------------------------------+
	// |   ASN.1 type    |                        Typical use                         |
	// +=================+============================================================+
	// | UTF8String      | General Unicode text and the preferred default for most    |
	// |                 | modern directory attributes.                               |
	// +-----------------+------------------------------------------------------------+
	// | IA5String       | ASCII-based attributes whose schema specifically requires  |
	// |                 | IA5String, such as the legacy PKCS #9 emailAddress         |
	// |                 | attribute.                                                 |
	// +-----------------+------------------------------------------------------------+
	// | PrintableString | Attributes constrained to the limited PrintableString      |
	// |                 | character set, such as the X.520 country name.             |
	// +-----------------+------------------------------------------------------------+
	// 
	// Schema matters: The OID determines the attribute's meaning and permitted syntax.
	// A value can be valid text yet still be rejected by a CA if the selected ASN.1
	// type, length, or format does not match that attribute's schema or the CA's
	// enrollment policy.
	// 
	// References:
	// [1] #CommonName
	// [2] #Company
	// [3] #Country
	bool SetSubjectField(const wchar_t *oid, const wchar_t *value, const wchar_t *asnType);

	// Verifies the digital signature on the currently loaded CSR using the public key
	// embedded in that request. Returns true when the signature is cryptographically
	// valid; otherwise returns false.
	// 
	// What this proves: Successful verification shows that the request was signed
	// using the private key corresponding to the included public key and that the
	// signed request data has not been altered.
	// What this does not prove: Signature verification does not validate the
	// applicant's identity, confirm control of a DNS name or email address, approve
	// requested extensions, establish trust, or issue a certificate. Those checks and
	// policy decisions belong to the certificate authority.
	bool VerifyCsr(void);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
