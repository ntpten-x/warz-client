// CkMime.h: interface for the CkMime class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkMime_H
#define _CkMime_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkCert;
class CkPrivateKey;
class CkBinData;
class CkByteData;
class CkStringArray;
class CkJsonObject;
class CkStringBuilder;
class CkCertChain;
class CkStringTable;
class CkXmlCertVault;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkMime
class CK_VISIBLE_PUBLIC CkMime  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkMime(const CkMime &);
	CkMime &operator=(const CkMime &);

    public:
	CkMime(void);
	virtual ~CkMime(void);

	static CkMime *createNew(void);
	static CkMime *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Gets or sets the raw boundary token used by a multipart MIME entity. Do not
	// include surrounding quotation marks.Content-Type: multipart/mixed;
	// boundary="example-boundary" For this example, Boundary is example-boundary.
	// Chilkat automatically quotes the parameter when the token contains characters
	// such as spaces or semicolons.
	// Normally automatic. Methods such as NewMultipartMixed[1],
	// NewMultipartAlternative[2], and NewMultipartRelated[3] generate a nonempty
	// boundary.
	// Caller-supplied boundaries are not validated. Chilkat does not detect collisions
	// with body text. An empty value is permitted but produces invalid multipart
	// delimiters, and supplying quotation marks as part of the property value causes
	// those quotation marks to become part of the boundary. The property can also be
	// set on a nonmultipart entity, where it is simply added as a Content-Type
	// parameter.
	// 
	// References:
	// [1] #NewMultipartMixed
	// [2] #NewMultipartAlternative
	// [3] #NewMultipartRelated
	void get_Boundary(CkString &str);
	// Gets or sets the raw boundary token used by a multipart MIME entity. Do not
	// include surrounding quotation marks.Content-Type: multipart/mixed;
	// boundary="example-boundary" For this example, Boundary is example-boundary.
	// Chilkat automatically quotes the parameter when the token contains characters
	// such as spaces or semicolons.
	// Normally automatic. Methods such as NewMultipartMixed[1],
	// NewMultipartAlternative[2], and NewMultipartRelated[3] generate a nonempty
	// boundary.
	// Caller-supplied boundaries are not validated. Chilkat does not detect collisions
	// with body text. An empty value is permitted but produces invalid multipart
	// delimiters, and supplying quotation marks as part of the property value causes
	// those quotation marks to become part of the boundary. The property can also be
	// set on a nonmultipart entity, where it is simply added as a Content-Type
	// parameter.
	// 
	// References:
	// [1] #NewMultipartMixed
	// [2] #NewMultipartAlternative
	// [3] #NewMultipartRelated
	const char *boundary(void);
	// Gets or sets the raw boundary token used by a multipart MIME entity. Do not
	// include surrounding quotation marks.Content-Type: multipart/mixed;
	// boundary="example-boundary" For this example, Boundary is example-boundary.
	// Chilkat automatically quotes the parameter when the token contains characters
	// such as spaces or semicolons.
	// Normally automatic. Methods such as NewMultipartMixed[1],
	// NewMultipartAlternative[2], and NewMultipartRelated[3] generate a nonempty
	// boundary.
	// Caller-supplied boundaries are not validated. Chilkat does not detect collisions
	// with body text. An empty value is permitted but produces invalid multipart
	// delimiters, and supplying quotation marks as part of the property value causes
	// those quotation marks to become part of the boundary. The property can also be
	// set on a nonmultipart entity, where it is simply added as a Content-Type
	// parameter.
	// 
	// References:
	// [1] #NewMultipartMixed
	// [2] #NewMultipartAlternative
	// [3] #NewMultipartRelated
	void put_Boundary(const char *newVal);

	// Gets or sets the charset parameter of the Content-Type header
	// field.Content-Type: text/plain; charset=utf-8 Changing this property preserves
	// the media type and other parameters. Setting it when no Content-Type exists
	// creates a Content-Type field, although the media type remains empty until
	// ContentType[1] is set.
	// Charset versus transfer encoding. The charset identifies how text characters are
	// represented as bytes. Encoding[2] controls the MIME transport representation of
	// those bytes.
	// Empty-string behavior. Setting Charset to an empty string does not remove the
	// parameter. It selects the platform default ANSI charset; on Windows this is
	// typically windows-1252.
	// 
	// References:
	// [1] #ContentType
	// [2] #Encoding
	void get_Charset(CkString &str);
	// Gets or sets the charset parameter of the Content-Type header
	// field.Content-Type: text/plain; charset=utf-8 Changing this property preserves
	// the media type and other parameters. Setting it when no Content-Type exists
	// creates a Content-Type field, although the media type remains empty until
	// ContentType[1] is set.
	// Charset versus transfer encoding. The charset identifies how text characters are
	// represented as bytes. Encoding[2] controls the MIME transport representation of
	// those bytes.
	// Empty-string behavior. Setting Charset to an empty string does not remove the
	// parameter. It selects the platform default ANSI charset; on Windows this is
	// typically windows-1252.
	// 
	// References:
	// [1] #ContentType
	// [2] #Encoding
	const char *charset(void);
	// Gets or sets the charset parameter of the Content-Type header
	// field.Content-Type: text/plain; charset=utf-8 Changing this property preserves
	// the media type and other parameters. Setting it when no Content-Type exists
	// creates a Content-Type field, although the media type remains empty until
	// ContentType[1] is set.
	// Charset versus transfer encoding. The charset identifies how text characters are
	// represented as bytes. Encoding[2] controls the MIME transport representation of
	// those bytes.
	// Empty-string behavior. Setting Charset to an empty string does not remove the
	// parameter. It selects the platform default ANSI charset; on Windows this is
	// typically windows-1252.
	// 
	// References:
	// [1] #ContentType
	// [2] #Encoding
	void put_Charset(const char *newVal);

	// Gets or sets a JSON string containing advanced CMS/PKCS #7 signing and
	// validation options. The default is an empty string, which selects normal
	// behavior. A valid empty JSON object may also be supplied as {}.
	// 
	// Unknown JSON members are retained but ignored. Malformed JSON is normalized to
	// {}. This property is intended for specialized interoperability requirements;
	// applications should leave it empty unless a documented option is specifically
	// needed.
	// 
	void get_CmsOptions(CkString &str);
	// Gets or sets a JSON string containing advanced CMS/PKCS #7 signing and
	// validation options. The default is an empty string, which selects normal
	// behavior. A valid empty JSON object may also be supplied as {}.
	// 
	// Unknown JSON members are retained but ignored. Malformed JSON is normalized to
	// {}. This property is intended for specialized interoperability requirements;
	// applications should leave it empty unless a documented option is specifically
	// needed.
	// 
	const char *cmsOptions(void);
	// Gets or sets a JSON string containing advanced CMS/PKCS #7 signing and
	// validation options. The default is an empty string, which selects normal
	// behavior. A valid empty JSON object may also be supplied as {}.
	// 
	// Unknown JSON members are retained but ignored. Malformed JSON is normalized to
	// {}. This property is intended for specialized interoperability requirements;
	// applications should leave it empty unless a documented option is specifically
	// needed.
	// 
	void put_CmsOptions(const char *newVal);

	// Gets or sets the MIME media type of the current part, excluding all parameters.
	// Supply a value such as text/plain, text/html, application/pdf, or
	// multipart/mixed; do not include charset, boundary, or other parameters in this
	// property.
	// 
	// Changing the media type preserves the existing charset and unrecognized
	// parameters, but may remove parameters that are specific to the previous media
	// type, such as format=flowed. Setting an empty string leaves an empty media type
	// and can therefore produce an invalid-looking header if other parameters remain.
	// 
	// Classification methods use this value. Methods such as IsText[1], IsImage[2],
	// and IsMultipart[3] classify the media type stored here. Parameters must be set
	// through their dedicated properties or header attributes, not appended to
	// ContentType.
	// 
	// References:
	// [1] #IsText
	// [2] #IsImage
	// [3] #IsMultipart
	void get_ContentType(CkString &str);
	// Gets or sets the MIME media type of the current part, excluding all parameters.
	// Supply a value such as text/plain, text/html, application/pdf, or
	// multipart/mixed; do not include charset, boundary, or other parameters in this
	// property.
	// 
	// Changing the media type preserves the existing charset and unrecognized
	// parameters, but may remove parameters that are specific to the previous media
	// type, such as format=flowed. Setting an empty string leaves an empty media type
	// and can therefore produce an invalid-looking header if other parameters remain.
	// 
	// Classification methods use this value. Methods such as IsText[1], IsImage[2],
	// and IsMultipart[3] classify the media type stored here. Parameters must be set
	// through their dedicated properties or header attributes, not appended to
	// ContentType.
	// 
	// References:
	// [1] #IsText
	// [2] #IsImage
	// [3] #IsMultipart
	const char *contentType(void);
	// Gets or sets the MIME media type of the current part, excluding all parameters.
	// Supply a value such as text/plain, text/html, application/pdf, or
	// multipart/mixed; do not include charset, boundary, or other parameters in this
	// property.
	// 
	// Changing the media type preserves the existing charset and unrecognized
	// parameters, but may remove parameters that are specific to the previous media
	// type, such as format=flowed. Setting an empty string leaves an empty media type
	// and can therefore produce an invalid-looking header if other parameters remain.
	// 
	// Classification methods use this value. Methods such as IsText[1], IsImage[2],
	// and IsMultipart[3] classify the media type stored here. Parameters must be set
	// through their dedicated properties or header attributes, not appended to
	// ContentType.
	// 
	// References:
	// [1] #IsText
	// [2] #IsImage
	// [3] #IsMultipart
	void put_ContentType(const char *newVal);

	// Returns the current local date and time formatted as an Internet message date,
	// including the numeric UTC offset. For example:Fri, 21 Nov 1997 09:55:06 -0600
	void get_CurrentDateTime(CkString &str);
	// Returns the current local date and time formatted as an Internet message date,
	// including the numeric UTC offset. For example:Fri, 21 Nov 1997 09:55:06 -0600
	const char *currentDateTime(void);

	// Gets or sets the disposition value from the Content-Disposition header field,
	// excluding parameters such as filename.Content-Disposition: attachment;
	// filename="report.pdf" Changing this property preserves an existing filename
	// parameter. Typical values are attachment and inline.
	void get_Disposition(CkString &str);
	// Gets or sets the disposition value from the Content-Disposition header field,
	// excluding parameters such as filename.Content-Disposition: attachment;
	// filename="report.pdf" Changing this property preserves an existing filename
	// parameter. Typical values are attachment and inline.
	const char *disposition(void);
	// Gets or sets the disposition value from the Content-Disposition header field,
	// excluding parameters such as filename.Content-Disposition: attachment;
	// filename="report.pdf" Changing this property preserves an existing filename
	// parameter. Typical values are attachment and inline.
	void put_Disposition(const char *newVal);

	// Gets or sets the value of the Content-Transfer-Encoding header field for the
	// current part. Common values include base64, quoted-printable, 7bit, 8bit, and
	// binary.
	// Transfer encoding is not compression. It determines how the body bytes are
	// represented in serialized MIME. GetBodyEncoded[1] returns the transfer-encoded
	// form, while GetBodyBd[2], GetBodyBinary[3], and SaveBody[4] return or save
	// decoded bytes.
	// 
	// References:
	// [1] #GetBodyEncoded
	// [2] #GetBodyBd
	// [3] #GetBodyBinary
	// [4] #SaveBody
	void get_Encoding(CkString &str);
	// Gets or sets the value of the Content-Transfer-Encoding header field for the
	// current part. Common values include base64, quoted-printable, 7bit, 8bit, and
	// binary.
	// Transfer encoding is not compression. It determines how the body bytes are
	// represented in serialized MIME. GetBodyEncoded[1] returns the transfer-encoded
	// form, while GetBodyBd[2], GetBodyBinary[3], and SaveBody[4] return or save
	// decoded bytes.
	// 
	// References:
	// [1] #GetBodyEncoded
	// [2] #GetBodyBd
	// [3] #GetBodyBinary
	// [4] #SaveBody
	const char *encoding(void);
	// Gets or sets the value of the Content-Transfer-Encoding header field for the
	// current part. Common values include base64, quoted-printable, 7bit, 8bit, and
	// binary.
	// Transfer encoding is not compression. It determines how the body bytes are
	// represented in serialized MIME. GetBodyEncoded[1] returns the transfer-encoded
	// form, while GetBodyBd[2], GetBodyBinary[3], and SaveBody[4] return or save
	// decoded bytes.
	// 
	// References:
	// [1] #GetBodyEncoded
	// [2] #GetBodyBd
	// [3] #GetBodyBinary
	// [4] #SaveBody
	void put_Encoding(const char *newVal);

	// Gets or sets the filename parameter of the Content-Disposition header field. The
	// value is a receiver-facing filename, not a local filesystem path.
	// 
	// Changing this property preserves the disposition value but removes other
	// Content-Disposition parameters such as size. Setting an empty string removes the
	// filename parameter.
	// 
	// International filenames. When setting a non-ASCII filename, Chilkat emits an RFC
	// 2047 encoded-word in filename=. When reading a header containing both filename=
	// and filename*=, this property returns filename=. Use GetHeaderFieldAttribute[1]
	// to retrieve the raw filename* value.
	// 
	// References:
	// [1] #GetHeaderFieldAttribute
	void get_Filename(CkString &str);
	// Gets or sets the filename parameter of the Content-Disposition header field. The
	// value is a receiver-facing filename, not a local filesystem path.
	// 
	// Changing this property preserves the disposition value but removes other
	// Content-Disposition parameters such as size. Setting an empty string removes the
	// filename parameter.
	// 
	// International filenames. When setting a non-ASCII filename, Chilkat emits an RFC
	// 2047 encoded-word in filename=. When reading a header containing both filename=
	// and filename*=, this property returns filename=. Use GetHeaderFieldAttribute[1]
	// to retrieve the raw filename* value.
	// 
	// References:
	// [1] #GetHeaderFieldAttribute
	const char *filename(void);
	// Gets or sets the filename parameter of the Content-Disposition header field. The
	// value is a receiver-facing filename, not a local filesystem path.
	// 
	// Changing this property preserves the disposition value but removes other
	// Content-Disposition parameters such as size. Setting an empty string removes the
	// filename parameter.
	// 
	// International filenames. When setting a non-ASCII filename, Chilkat emits an RFC
	// 2047 encoded-word in filename=. When reading a header containing both filename=
	// and filename*=, this property returns filename=. Use GetHeaderFieldAttribute[1]
	// to retrieve the raw filename* value.
	// 
	// References:
	// [1] #GetHeaderFieldAttribute
	void put_Filename(const char *newVal);

	// Gets or sets the micalg parameter of a multipart/signed Content-Type header
	// field.Content-Type: multipart/signed;
	//   protocol="application/pkcs7-signature";
	//   micalg=sha-256;
	// boundary="example-boundary" The parameter advertises the message-digest
	// algorithm used by the detached signature.
	// SigningHashAlg is authoritative. When a detached signature is created,
	// SigningHashAlg[1] selects the digest and Chilkat replaces any conflicting Micalg
	// value with the corresponding MIME token, such as sha-1, sha-256, sha-384, or
	// sha-512. Setting Micalg alone does not select the cryptographic digest.
	// 
	// References:
	// [1] #SigningHashAlg
	void get_Micalg(CkString &str);
	// Gets or sets the micalg parameter of a multipart/signed Content-Type header
	// field.Content-Type: multipart/signed;
	//   protocol="application/pkcs7-signature";
	//   micalg=sha-256;
	// boundary="example-boundary" The parameter advertises the message-digest
	// algorithm used by the detached signature.
	// SigningHashAlg is authoritative. When a detached signature is created,
	// SigningHashAlg[1] selects the digest and Chilkat replaces any conflicting Micalg
	// value with the corresponding MIME token, such as sha-1, sha-256, sha-384, or
	// sha-512. Setting Micalg alone does not select the cryptographic digest.
	// 
	// References:
	// [1] #SigningHashAlg
	const char *micalg(void);
	// Gets or sets the micalg parameter of a multipart/signed Content-Type header
	// field.Content-Type: multipart/signed;
	//   protocol="application/pkcs7-signature";
	//   micalg=sha-256;
	// boundary="example-boundary" The parameter advertises the message-digest
	// algorithm used by the detached signature.
	// SigningHashAlg is authoritative. When a detached signature is created,
	// SigningHashAlg[1] selects the digest and Chilkat replaces any conflicting Micalg
	// value with the corresponding MIME token, such as sha-1, sha-256, sha-384, or
	// sha-512. Setting Micalg alone does not select the cryptographic digest.
	// 
	// References:
	// [1] #SigningHashAlg
	void put_Micalg(const char *newVal);

	// Gets or sets the name parameter of the Content-Type header field. For
	// attachments, Filename[1] is generally the primary receiver-facing name.
	// 
	// Setting a non-ASCII value causes Chilkat to emit an RFC 2047 encoded-word in the
	// name= parameter. Setting this property when no media type exists creates a
	// Content-Type field with an empty media type.
	// 
	// 
	// References:
	// [1] #Filename
	void get_Name(CkString &str);
	// Gets or sets the name parameter of the Content-Type header field. For
	// attachments, Filename[1] is generally the primary receiver-facing name.
	// 
	// Setting a non-ASCII value causes Chilkat to emit an RFC 2047 encoded-word in the
	// name= parameter. Setting this property when no media type exists creates a
	// Content-Type field with an empty media type.
	// 
	// 
	// References:
	// [1] #Filename
	const char *name(void);
	// Gets or sets the name parameter of the Content-Type header field. For
	// attachments, Filename[1] is generally the primary receiver-facing name.
	// 
	// Setting a non-ASCII value causes Chilkat to emit an RFC 2047 encoded-word in the
	// name= parameter. Setting this property when no media type exists creates a
	// Content-Type field with an empty media type.
	// 
	// 
	// References:
	// [1] #Filename
	void put_Name(const char *newVal);

	// Returns the number of recipient or decryption certificates currently recorded by
	// the most recent S/MIME encryption, decryption, or security-unwrapping operation.
	// A new object returns 0. A successful single-recipient Encrypt[1] records 1, and
	// successful decryption records the certificate whose private key was used.
	// 
	// Use LastDecryptCert[2] with a zero-based index to retrieve a recorded
	// certificate. This is a result count; it is not the number of PFX sources or
	// decryption certificates configured on the object.
	// 
	// 
	// References:
	// [1] #Encrypt
	// [2] #LastDecryptCert
	int get_NumDecryptCerts(void);

	// Deprecated. Use NumDecryptCerts[1] instead.
	// 
	// This property is retained as an older name for the certificate-result count
	// associated with S/MIME encryption, decryption, and security-unwrapping
	// operations.
	// 
	// 
	// References:
	// [1] #NumDecryptCerts
	int get_NumEncryptCerts(void);

	// Returns the number of header-field occurrences in the current part. Duplicate
	// names count separately and retain their order. Valid indexes range from 0
	// through NumHeaderFields - 1 for use with GetHeaderFieldName[1] and
	// GetHeaderFieldValue[2].
	// 
	// During MIME parsing, duplicate ordinary fields are retained. Duplicate
	// Content-Type fields are collapsed, with the last value taking effect.
	// 
	// 
	// References:
	// [1] #GetHeaderFieldName
	// [2] #GetHeaderFieldValue
	int get_NumHeaderFields(void);

	// Returns the number of direct child parts. It does not include deeper
	// descendants. Iterate from 0 through NumParts - 1 and call PartAt[1] to traverse
	// the tree.
	// 
	// The object returned by PartAt provides live access to the stored child.
	// Modifying that returned object modifies the parent MIME tree.
	// 
	// 
	// References:
	// [1] #PartAt
	int get_NumParts(void);

	// Returns the number of signer certificates currently recorded by the most recent
	// S/MIME signing, signature-verification, or security-unwrapping operation. A new
	// object returns 0. A single-certificate signing method records 1; Verify[1] and
	// UnwrapSecurity[2] replace the count with the signer results from that operation.
	// 
	// A failed call to Verify[1] clears the signer results and sets this property to
	// 0. Use LastSignerCert[3] with a zero-based index to retrieve a recorded signer
	// certificate.
	// 
	// 
	// References:
	// [1] #Verify
	// [2] #UnwrapSecurity
	// [3] #LastSignerCert
	int get_NumSignerCerts(void);

	// Gets or sets the hash algorithm used by RSAES-OAEP when encrypting the CMS
	// content-encryption key. Supported values are sha1, sha256, sha384, and sha512.
	// The default is sha256. An empty or unrecognized value leaves the current valid
	// setting unchanged.
	// 
	// This property is used only when OaepPadding[1] is true. It is independent of
	// OaepMgfHash[2]; for example, OAEP may use SHA-256 while MGF1 uses SHA-1.
	// 
	// 
	// References:
	// [1] #OaepPadding
	// [2] #OaepMgfHash
	void get_OaepHash(CkString &str);
	// Gets or sets the hash algorithm used by RSAES-OAEP when encrypting the CMS
	// content-encryption key. Supported values are sha1, sha256, sha384, and sha512.
	// The default is sha256. An empty or unrecognized value leaves the current valid
	// setting unchanged.
	// 
	// This property is used only when OaepPadding[1] is true. It is independent of
	// OaepMgfHash[2]; for example, OAEP may use SHA-256 while MGF1 uses SHA-1.
	// 
	// 
	// References:
	// [1] #OaepPadding
	// [2] #OaepMgfHash
	const char *oaepHash(void);
	// Gets or sets the hash algorithm used by RSAES-OAEP when encrypting the CMS
	// content-encryption key. Supported values are sha1, sha256, sha384, and sha512.
	// The default is sha256. An empty or unrecognized value leaves the current valid
	// setting unchanged.
	// 
	// This property is used only when OaepPadding[1] is true. It is independent of
	// OaepMgfHash[2]; for example, OAEP may use SHA-256 while MGF1 uses SHA-1.
	// 
	// 
	// References:
	// [1] #OaepPadding
	// [2] #OaepMgfHash
	void put_OaepHash(const char *newVal);

	// Gets or sets the hash algorithm used by the MGF1 mask generation function within
	// RSAES-OAEP. Supported values are sha1, sha256, sha384, and sha512. The default
	// is sha256. An empty or unrecognized value leaves the current valid setting
	// unchanged.
	// 
	// This property is used only when OaepPadding[1] is true and is independent of
	// OaepHash[2].
	// 
	// 
	// References:
	// [1] #OaepPadding
	// [2] #OaepHash
	void get_OaepMgfHash(CkString &str);
	// Gets or sets the hash algorithm used by the MGF1 mask generation function within
	// RSAES-OAEP. Supported values are sha1, sha256, sha384, and sha512. The default
	// is sha256. An empty or unrecognized value leaves the current valid setting
	// unchanged.
	// 
	// This property is used only when OaepPadding[1] is true and is independent of
	// OaepHash[2].
	// 
	// 
	// References:
	// [1] #OaepPadding
	// [2] #OaepHash
	const char *oaepMgfHash(void);
	// Gets or sets the hash algorithm used by the MGF1 mask generation function within
	// RSAES-OAEP. Supported values are sha1, sha256, sha384, and sha512. The default
	// is sha256. An empty or unrecognized value leaves the current valid setting
	// unchanged.
	// 
	// This property is used only when OaepPadding[1] is true and is independent of
	// OaepHash[2].
	// 
	// 
	// References:
	// [1] #OaepPadding
	// [2] #OaepHash
	void put_OaepMgfHash(const char *newVal);

	// Selects the RSA key-transport padding used when creating encrypted MIME. The
	// default is false, which uses RSAES-PKCS1-v1_5. Set to true to use
	// RSAES-OAEP.
	// Scope. This setting protects the symmetric content-encryption key for an RSA
	// recipient. It does not change the symmetric content algorithm selected by
	// Pkcs7CryptAlg[1].
	// 
	// References:
	// [1] #Pkcs7CryptAlg
	bool get_OaepPadding(void);
	// Selects the RSA key-transport padding used when creating encrypted MIME. The
	// default is false, which uses RSAES-PKCS1-v1_5. Set to true to use
	// RSAES-OAEP.
	// Scope. This setting protects the symmetric content-encryption key for an RSA
	// recipient. It does not change the symmetric content algorithm selected by
	// Pkcs7CryptAlg[1].
	// 
	// References:
	// [1] #Pkcs7CryptAlg
	void put_OaepPadding(bool newVal);

	// Gets or sets the symmetric content-encryption algorithm used when creating
	// CMS/PKCS #7 encrypted MIME. Supported input values are aes, aes-gcm, des, 3des,
	// and rc2. The default is aes. The aes-gcm option was added in version 10.0.0.
	// 
	// The getter returns normalized names: after setting aes-gcm it returns aes, and
	// after setting 3des it returns des. The generated CMS data nevertheless uses
	// AES-GCM or 3DES-CBC respectively.
	// 
	// Hybrid encryption. S/MIME encrypts the MIME content with a symmetric
	// content-encryption key. The recipient certificate then protects that
	// content-encryption key. This property selects the symmetric algorithm;
	// Pkcs7KeyLength[1] selects its key length.
	// 
	// References:
	// [1] #Pkcs7KeyLength
	void get_Pkcs7CryptAlg(CkString &str);
	// Gets or sets the symmetric content-encryption algorithm used when creating
	// CMS/PKCS #7 encrypted MIME. Supported input values are aes, aes-gcm, des, 3des,
	// and rc2. The default is aes. The aes-gcm option was added in version 10.0.0.
	// 
	// The getter returns normalized names: after setting aes-gcm it returns aes, and
	// after setting 3des it returns des. The generated CMS data nevertheless uses
	// AES-GCM or 3DES-CBC respectively.
	// 
	// Hybrid encryption. S/MIME encrypts the MIME content with a symmetric
	// content-encryption key. The recipient certificate then protects that
	// content-encryption key. This property selects the symmetric algorithm;
	// Pkcs7KeyLength[1] selects its key length.
	// 
	// References:
	// [1] #Pkcs7KeyLength
	const char *pkcs7CryptAlg(void);
	// Gets or sets the symmetric content-encryption algorithm used when creating
	// CMS/PKCS #7 encrypted MIME. Supported input values are aes, aes-gcm, des, 3des,
	// and rc2. The default is aes. The aes-gcm option was added in version 10.0.0.
	// 
	// The getter returns normalized names: after setting aes-gcm it returns aes, and
	// after setting 3des it returns des. The generated CMS data nevertheless uses
	// AES-GCM or 3DES-CBC respectively.
	// 
	// Hybrid encryption. S/MIME encrypts the MIME content with a symmetric
	// content-encryption key. The recipient certificate then protects that
	// content-encryption key. This property selects the symmetric algorithm;
	// Pkcs7KeyLength[1] selects its key length.
	// 
	// References:
	// [1] #Pkcs7KeyLength
	void put_Pkcs7CryptAlg(const char *newVal);

	// Gets or sets the content-encryption key length, in bits, used when creating
	// CMS/PKCS #7 encrypted MIME. The default is 128.
	// 
	// Because this property may be set before Pkcs7CryptAlg[1], the setter accepts the
	// union of key lengths that can be valid for any supported symmetric algorithm:
	// 40, 56, 64, 128, 192, and 256. A value outside this set is rejected and the
	// previous value is retained.
	// 
	// +----------------+-----------------------+
	// |   Algorithm    |  Normal key lengths   |
	// +================+=======================+
	// | aes or aes-gcm | 128 , 192 , or 256    |
	// +----------------+-----------------------+
	// | 3des           | 192                   |
	// +----------------+-----------------------+
	// | des            | 40                    |
	// +----------------+-----------------------+
	// | rc2            | 40 , 56 , 64 , or 128 |
	// +----------------+-----------------------+
	// 
	// Set both properties before encrypting. The property setter rejects only lengths
	// that cannot be valid for any supported algorithm. Applications should select the
	// algorithm and its appropriate key length before calling Encrypt[2] or
	// EncryptN[3].
	// 
	// References:
	// [1] #Pkcs7CryptAlg
	// [2] #Encrypt
	// [3] #EncryptN
	int get_Pkcs7KeyLength(void);
	// Gets or sets the content-encryption key length, in bits, used when creating
	// CMS/PKCS #7 encrypted MIME. The default is 128.
	// 
	// Because this property may be set before Pkcs7CryptAlg[1], the setter accepts the
	// union of key lengths that can be valid for any supported symmetric algorithm:
	// 40, 56, 64, 128, 192, and 256. A value outside this set is rejected and the
	// previous value is retained.
	// 
	// +----------------+-----------------------+
	// |   Algorithm    |  Normal key lengths   |
	// +================+=======================+
	// | aes or aes-gcm | 128 , 192 , or 256    |
	// +----------------+-----------------------+
	// | 3des           | 192                   |
	// +----------------+-----------------------+
	// | des            | 40                    |
	// +----------------+-----------------------+
	// | rc2            | 40 , 56 , 64 , or 128 |
	// +----------------+-----------------------+
	// 
	// Set both properties before encrypting. The property setter rejects only lengths
	// that cannot be valid for any supported algorithm. Applications should select the
	// algorithm and its appropriate key length before calling Encrypt[2] or
	// EncryptN[3].
	// 
	// References:
	// [1] #Pkcs7CryptAlg
	// [2] #Encrypt
	// [3] #EncryptN
	void put_Pkcs7KeyLength(int newVal);

	// Gets or sets the protocol parameter of the Content-Type header field. This
	// parameter is commonly used by multipart/signed to identify the media type of the
	// detached signature part.Content-Type: multipart/signed;
	//   protocol="application/pkcs7-signature";
	//   micalg=sha-256;
	// boundary="example-boundary" For this example, Protocol is
	// application/pkcs7-signature.
	void get_Protocol(CkString &str);
	// Gets or sets the protocol parameter of the Content-Type header field. This
	// parameter is commonly used by multipart/signed to identify the media type of the
	// detached signature part.Content-Type: multipart/signed;
	//   protocol="application/pkcs7-signature";
	//   micalg=sha-256;
	// boundary="example-boundary" For this example, Protocol is
	// application/pkcs7-signature.
	const char *protocol(void);
	// Gets or sets the protocol parameter of the Content-Type header field. This
	// parameter is commonly used by multipart/signed to identify the media type of the
	// detached signature part.Content-Type: multipart/signed;
	//   protocol="application/pkcs7-signature";
	//   micalg=sha-256;
	// boundary="example-boundary" For this example, Protocol is
	// application/pkcs7-signature.
	void put_Protocol(const char *newVal);

	// Gets or sets the RSA signature scheme used when creating CMS/PKCS #7 signed
	// MIME. The default and normalized PKCS #1 v1.5 value is PKCS1-V1_5. Set the
	// property to RSASSA-PSS or pss to use RSASSA-PSS; the getter returns RSASSA-PSS.
	// 
	// An empty or unrecognized value selects PKCS1-V1_5. This setting applies only
	// when the signing private key is RSA. It does not select the signature scheme for
	// EC or DSA keys. The property controls signature creation and is not updated
	// during verification; use GetLastJsonData[1] to inspect a verified signature.
	// 
	// 
	// References:
	// [1] #GetLastJsonData
	void get_SigningAlg(CkString &str);
	// Gets or sets the RSA signature scheme used when creating CMS/PKCS #7 signed
	// MIME. The default and normalized PKCS #1 v1.5 value is PKCS1-V1_5. Set the
	// property to RSASSA-PSS or pss to use RSASSA-PSS; the getter returns RSASSA-PSS.
	// 
	// An empty or unrecognized value selects PKCS1-V1_5. This setting applies only
	// when the signing private key is RSA. It does not select the signature scheme for
	// EC or DSA keys. The property controls signature creation and is not updated
	// during verification; use GetLastJsonData[1] to inspect a verified signature.
	// 
	// 
	// References:
	// [1] #GetLastJsonData
	const char *signingAlg(void);
	// Gets or sets the RSA signature scheme used when creating CMS/PKCS #7 signed
	// MIME. The default and normalized PKCS #1 v1.5 value is PKCS1-V1_5. Set the
	// property to RSASSA-PSS or pss to use RSASSA-PSS; the getter returns RSASSA-PSS.
	// 
	// An empty or unrecognized value selects PKCS1-V1_5. This setting applies only
	// when the signing private key is RSA. It does not select the signature scheme for
	// EC or DSA keys. The property controls signature creation and is not updated
	// during verification; use GetLastJsonData[1] to inspect a verified signature.
	// 
	// 
	// References:
	// [1] #GetLastJsonData
	void put_SigningAlg(const char *newVal);

	// Gets or sets the message-digest algorithm used when creating CMS/PKCS #7
	// signatures. The default is sha256. Supported values are sha1, sha256, sha384,
	// sha512, md5, and md2. Names are case-insensitive and are returned in lowercase.
	// 
	// An empty or unrecognized value selects sha1. This property controls signature
	// creation only and is not changed when a signature is verified. After
	// verification, call GetLastJsonData[1] to inspect the digest algorithm found in
	// the signed data.
	// 
	// Security guidance. Use a SHA-2 algorithm such as sha256 unless interoperability
	// with a legacy system requires otherwise. MD2, MD5, and SHA-1 are retained for
	// compatibility with older signed messages. Because invalid input falls back to
	// SHA-1, applications should set this property to a known supported value.
	// 
	// References:
	// [1] #GetLastJsonData
	void get_SigningHashAlg(CkString &str);
	// Gets or sets the message-digest algorithm used when creating CMS/PKCS #7
	// signatures. The default is sha256. Supported values are sha1, sha256, sha384,
	// sha512, md5, and md2. Names are case-insensitive and are returned in lowercase.
	// 
	// An empty or unrecognized value selects sha1. This property controls signature
	// creation only and is not changed when a signature is verified. After
	// verification, call GetLastJsonData[1] to inspect the digest algorithm found in
	// the signed data.
	// 
	// Security guidance. Use a SHA-2 algorithm such as sha256 unless interoperability
	// with a legacy system requires otherwise. MD2, MD5, and SHA-1 are retained for
	// compatibility with older signed messages. Because invalid input falls back to
	// SHA-1, applications should set this property to a known supported value.
	// 
	// References:
	// [1] #GetLastJsonData
	const char *signingHashAlg(void);
	// Gets or sets the message-digest algorithm used when creating CMS/PKCS #7
	// signatures. The default is sha256. Supported values are sha1, sha256, sha384,
	// sha512, md5, and md2. Names are case-insensitive and are returned in lowercase.
	// 
	// An empty or unrecognized value selects sha1. This property controls signature
	// creation only and is not changed when a signature is verified. After
	// verification, call GetLastJsonData[1] to inspect the digest algorithm found in
	// the signed data.
	// 
	// Security guidance. Use a SHA-2 algorithm such as sha256 unless interoperability
	// with a legacy system requires otherwise. MD2, MD5, and SHA-1 are retained for
	// compatibility with older signed messages. Because invalid input falls back to
	// SHA-1, applications should set this property to a known supported value.
	// 
	// References:
	// [1] #GetLastJsonData
	void put_SigningHashAlg(const char *newVal);

	// Gets or sets a semicolon-delimited or implementation-specific option string used
	// for uncommon compatibility requirements. The default is the empty string, and
	// normal applications should leave it empty. Options placed here may be
	// version-specific and should be used only when directed by Chilkat documentation
	// or support.
	void get_UncommonOptions(CkString &str);
	// Gets or sets a semicolon-delimited or implementation-specific option string used
	// for uncommon compatibility requirements. The default is the empty string, and
	// normal applications should leave it empty. Options placed here may be
	// version-specific and should be used only when directed by Chilkat documentation
	// or support.
	const char *uncommonOptions(void);
	// Gets or sets a semicolon-delimited or implementation-specific option string used
	// for uncommon compatibility requirements. The default is the empty string, and
	// normal applications should leave it empty. Options placed here may be
	// version-specific and should be used only when directed by Chilkat documentation
	// or support.
	void put_UncommonOptions(const char *newVal);

	// Controls whether UnwrapSecurity[1] adds informative header fields describing the
	// security layers removed. The default is true.
	// 
	// +---------------------+---------------+
	// |       Header        | Example value |
	// +=====================+===============+
	// | X-NumPartsSigned    | 1             |
	// +---------------------+---------------+
	// | X-SignaturesValid   | yes           |
	// +---------------------+---------------+
	// | X-NumPartsEncrypted | 1             |
	// +---------------------+---------------+
	// | X-Decrypted         | yes           |
	// +---------------------+---------------+
	// 
	// Set to false when the application requires the unwrapped MIME without these
	// additional status headers.
	// 
	// 
	// References:
	// [1] #UnwrapSecurity
	bool get_UnwrapExtras(void);
	// Controls whether UnwrapSecurity[1] adds informative header fields describing the
	// security layers removed. The default is true.
	// 
	// +---------------------+---------------+
	// |       Header        | Example value |
	// +=====================+===============+
	// | X-NumPartsSigned    | 1             |
	// +---------------------+---------------+
	// | X-SignaturesValid   | yes           |
	// +---------------------+---------------+
	// | X-NumPartsEncrypted | 1             |
	// +---------------------+---------------+
	// | X-Decrypted         | yes           |
	// +---------------------+---------------+
	// 
	// Set to false when the application requires the unwrapped MIME without these
	// additional status headers.
	// 
	// 
	// References:
	// [1] #UnwrapSecurity
	void put_UnwrapExtras(bool newVal);

	// Controls whether Chilkat uses the conventional multipart preamble text This is a
	// multi-part message in MIME format. when serializing a multipart entity. The
	// default is false. The preamble is meaningful only when the multipart has
	// content and is ignored by MIME-aware readers.
	bool get_UseMmDescription(void);
	// Controls whether Chilkat uses the conventional multipart preamble text This is a
	// multi-part message in MIME format. when serializing a multipart entity. The
	// default is false. The preamble is meaningful only when the multipart has
	// content and is ignored by MIME-aware readers.
	void put_UseMmDescription(bool newVal);

	// Controls whether newly created S/MIME media types use the historical x-pkcs7
	// names.
	// 
	// +------------------+-----------------------------------------------------------+
	// |      Value       |                   Generated media types                   |
	// +==================+===========================================================+
	// | true (default) | application/x-pkcs7-mime and                              |
	// |                  | application/x-pkcs7-signature                             |
	// +------------------+-----------------------------------------------------------+
	// | false          | application/pkcs7-mime and application/pkcs7-signature    |
	// +------------------+-----------------------------------------------------------+
	// 
	// For detached signatures, the selected signature media type is used both for the
	// outer protocol parameter and for the signature part. For opaque signed or
	// encrypted MIME, it controls the application/...pkcs7-mime content type.
	// 
	// Interoperability. The x- forms are widely encountered in existing S/MIME
	// messages. Chilkat recognizes both naming forms.
	bool get_UseXPkcs7(void);
	// Controls whether newly created S/MIME media types use the historical x-pkcs7
	// names.
	// 
	// +------------------+-----------------------------------------------------------+
	// |      Value       |                   Generated media types                   |
	// +==================+===========================================================+
	// | true (default) | application/x-pkcs7-mime and                              |
	// |                  | application/x-pkcs7-signature                             |
	// +------------------+-----------------------------------------------------------+
	// | false          | application/pkcs7-mime and application/pkcs7-signature    |
	// +------------------+-----------------------------------------------------------+
	// 
	// For detached signatures, the selected signature media type is used both for the
	// outer protocol parameter and for the signature part. For opaque signed or
	// encrypted MIME, it controls the application/...pkcs7-mime content type.
	// 
	// Interoperability. The x- forms are widely encountered in existing S/MIME
	// messages. Chilkat recognizes both naming forms.
	void put_UseXPkcs7(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Computes the byte length of the current entity's serialized MIME body and adds
	// or updates its Content-Length header. The count is based on the transfer-encoded
	// serialized body, not the decoded payload.
	// 
	// For a multipart entity, the count includes boundary delimiter lines, child
	// headers, child bodies, and the closing boundary. Only the current entity's
	// header is updated; child parts do not receive Content-Length fields. Repeated
	// calls recompute the value and leave a single header occurrence.
	// 
	void AddContentLength(void);


	// Adds cert to the internal collection of certificates available for S/MIME
	// decryption. The certificate must have access to its corresponding private key.
	// Call this method once for each candidate certificate.
	// 
	// The collection is searched by Decrypt[1] and UnwrapSecurity[2]. Other ways to
	// provide decryption credentials include AddPfxSourceFile[3], AddPfxSourceBd[4],
	// and UseCertVault[5].
	// 
	// 
	// References:
	// [1] #Decrypt
	// [2] #UnwrapSecurity
	// [3] #AddPfxSourceFile
	// [4] #AddPfxSourceBd
	// [5] #UseCertVault
	bool AddDecryptCert(CkCert &cert);


	// Creates an S/MIME detached signature using cert. The certificate itself must
	// have access to its private key. On success, the current object becomes a
	// multipart/signed entity with two direct children:
	// 
	// +--------+------------------------------------------------------------+
	// |  Part  |                          Contents                          |
	// +========+============================================================+
	// | First  | The original MIME entity being signed.                     |
	// +--------+------------------------------------------------------------+
	// | Second | The CMS/PKCS #7 signature data, normally named smime.p7s . |
	// +--------+------------------------------------------------------------+
	// 
	// SigningHashAlg[1] selects the digest and generated micalg parameter. For RSA
	// keys, SigningAlg[2] selects PKCS #1 v1.5 or RSASSA-PSS. UseXPkcs7[3] selects the
	// signature media-type spelling.
	// 
	// Private-key requirement. Adding a matching PFX source does not supply a missing
	// signing key for a public-only Cert. Load the private key into cert or use
	// AddDetachedSignaturePk[4].
	// Signing an already signed MIME. Calling this method again creates a new outer
	// multipart/signed layer. It does not add another signer to the existing CMS
	// signer-information set.
	// 
	// References:
	// [1] #SigningHashAlg
	// [2] #SigningAlg
	// [3] #UseXPkcs7
	// [4] #AddDetachedSignaturePk
	bool AddDetachedSignature(CkCert &cert);


	// Creates the same detached multipart/signed structure as AddDetachedSignature[1].
	// cert is the signing certificate and must have access to its private key.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  transferHeaderFields   |                          Header placement                          |
	// +=========+====================================================================+
	// | false | Existing message header fields, such as Subject and From , remain  |
	// |         | on the first signed content part. The new outer multipart has no   |
	// |         | copies of those fields.                                            |
	// +---------+--------------------------------------------------------------------+
	// | true  | Existing message header fields are moved to the new outer          |
	// |         | multipart/signed entity and removed from the first content part.   |
	// +---------+--------------------------------------------------------------------+
	// 
	// 
	// References:
	// [1] #AddDetachedSignature
	bool AddDetachedSignature2(CkCert &cert, bool transferHeaderFields);


	// Creates a detached S/MIME signature using cert as the signer certificate and
	// privateKey as its associated private key. Use this method when the certificate and
	// private key are supplied separately.
	// 
	// On success, the current object becomes the same two-part multipart/signed
	// structure described by AddDetachedSignature[1]. SigningHashAlg[2],
	// SigningAlg[3], and UseXPkcs7[4] control the generated signature.
	// 
	// 
	// References:
	// [1] #AddDetachedSignature
	// [2] #SigningHashAlg
	// [3] #SigningAlg
	// [4] #UseXPkcs7
	bool AddDetachedSignaturePk(CkCert &cert, CkPrivateKey &privateKey);


	// Creates a detached S/MIME signature using the certificate in cert and the
	// corresponding private key in privateKey. transferHeaderFields controls placement of the existing
	// message header fields:
	// 
	// +---------+--------------------------------------------------------------------+
	// |  transferHeaderFields   |                          Header placement                          |
	// +=========+====================================================================+
	// | false | Headers remain on the first signed content part.                   |
	// +---------+--------------------------------------------------------------------+
	// | true  | Headers are moved to the new outer multipart/signed entity and     |
	// |         | removed from the first content part.                               |
	// +---------+--------------------------------------------------------------------+
	// 
	// This is the separate-private-key counterpart of AddDetachedSignature2[1].
	// 
	// 
	// References:
	// [1] #AddDetachedSignature2
	bool AddDetachedSignaturePk2(CkCert &cert, CkPrivateKey &privateKey, bool transferHeaderFields);


	// Adds cert to the internal recipient-certificate list used by EncryptN[1]. Call
	// this method once for each intended recipient. Encryption uses the public key in
	// each certificate, so recipient private keys are not required at encryption time.
	// 
	// Call ClearEncryptCerts[2] to empty the list.
	// 
	// 
	// References:
	// [1] #EncryptN
	// [2] #ClearEncryptCerts
	bool AddEncryptCert(CkCert &cert);


	// Appends a new header field named by name with the value in value. Existing fields
	// having the same case-insensitive name are preserved. An empty value creates a
	// legal empty-valued field.
	// 
	// Chilkat converts spaces in a header name to hyphens, removes embedded CR and LF
	// characters from the value to prevent header injection, and folds long values
	// when serializing.
	// 
	// Replacing versus appending. Use SetHeaderField[1] to remove all existing
	// occurrences and set one replacement value.
	// 
	// References:
	// [1] #SetHeaderField
	bool AddHeaderField(const char *name, const char *value);


	// Adds the PKCS #12/PFX bytes in bd to the internal collection of credential
	// sources used by later S/MIME decryption operations. password is the password
	// protecting the PFX data. Call the method once for each PFX source that should be
	// searched.
	// 
	// The source remains configured across subsequent LoadMime calls and repeated
	// decryptions. Chilkat continues searching after a PFX that does not contain the
	// required recipient key.
	// 
	// Not a signing-key fallback. Adding a PFX source does not make a public-only
	// certificate usable by the signing methods. The signing certificate itself must
	// have its private key, or the private key must be supplied explicitly by a method
	// whose name ends in Pk.
	bool AddPfxSourceBd(CkBinData &bd, const char *password);


	// Legacy byte-array method. Adds the PKCS #12/PFX data in pfxFileData to the internal
	// collection of credential sources used by later S/MIME decryption operations.
	// pfxPassword is the password protecting the PFX. Call the method once for each PFX
	// source that should be searched. Prefer AddPfxSourceBd[1] when a BinData object
	// is available.
	// 
	// The source remains configured across subsequent LoadMime calls and repeated
	// decryptions. Chilkat continues searching after a PFX that does not contain the
	// required recipient key.
	// 
	// Not a signing-key fallback. Adding a PFX source does not make a public-only
	// certificate usable by the signing methods. The signing certificate itself must
	// have its private key, or the private key must be supplied explicitly by a method
	// whose name ends in Pk.
	// 
	// References:
	// [1] #AddPfxSourceBd
	bool AddPfxSourceData(CkByteData &pfxFileData, const char *pfxPassword);


	// Adds the PFX/P12 file at the local filesystem path in pfxFilePath to the internal
	// collection of credential sources used by later S/MIME decryption operations.
	// password is the password protecting the file. Call the method once for each PFX
	// source that should be searched.
	// 
	// The source remains configured across subsequent LoadMime calls and repeated
	// decryptions. Chilkat continues searching after a PFX that does not contain the
	// required recipient key.
	// 
	// Not a signing-key fallback. Adding a PFX source does not make a public-only
	// certificate usable by the signing methods. The signing certificate itself must
	// have its private key, or the private key must be supplied explicitly by a method
	// whose name ends in Pk.
	bool AddPfxSourceFile(const char *pfxFilePath, const char *password);


	// Appends a copy of mime as the last direct child. Chilkat does not retain a
	// reference to mime, so later changes to mime do not affect the appended part. The
	// same source object may be appended more than once.
	// 
	// If the current object is not multipart, it is converted to multipart/mixed. The
	// complete original entity, including its existing headers and body, becomes part
	// 0; the copy of mime becomes part 1. The new outer entity contains its generated
	// multipart Content-Type.
	// 
	// Editing an appended child. Retrieve it with PartAt[1]. The object returned by
	// PartAt is a live child, unlike the copied input to this method.
	// 
	// References:
	// [1] #PartAt
	bool AppendPart(CkMime &mime);


	// Reads the local file at filename, creates an attachment part, and appends it.
	// Filename-extension matching is case-insensitive.
	// 
	// +----------------------+-------------------------------------------------------+
	// |      File kind       |                   Generated headers                   |
	// +======================+=======================================================+
	// | .txt                 | text/plain; charset=windows-1252; format=flowed ,     |
	// |                      | 7bit , attachment filename and name                   |
	// +----------------------+-------------------------------------------------------+
	// | Known binary type,   | Inferred media type such as image/png , base64 ,      |
	// | such as .PNG         | attachment filename and name                          |
	// +----------------------+-------------------------------------------------------+
	// | Unknown extension    | application/octet-stream , base64 , attachment        |
	// |                      | filename and name                                     |
	// +----------------------+-------------------------------------------------------+
	// 
	// If the current object is not multipart, the same conversion described by
	// AppendPart[1] occurs. Calling this method on a new empty object therefore
	// creates an empty part 0 and the file attachment as part 1.
	// 
	// 
	// References:
	// [1] #AppendPart
	bool AppendPartFromFile(const char *filename);


	// Parses the current part's decoded body as ASN.1 DER and returns an XML
	// representation of the ASN.1 structure. This is primarily useful for inspecting
	// CMS/PKCS #7 bodies such as application/pkcs7-mime or application/x-pkcs7-mime.Content-Type: application/pkcs7-mime; smime-type=signed-data
	// Content-Transfer-Encoding: base64
	// 
	// MII...
	// Diagnostic conversion. The returned XML exposes ASN.1 tags, object identifiers,
	// and values for inspection. It is not the MIME-to-XML representation returned by
	// GetXml[1].
	// 
	// References:
	// [1] #GetXml
	bool AsnBodyToXml(CkString &outStr);

	// Parses the current part's decoded body as ASN.1 DER and returns an XML
	// representation of the ASN.1 structure. This is primarily useful for inspecting
	// CMS/PKCS #7 bodies such as application/pkcs7-mime or application/x-pkcs7-mime.Content-Type: application/pkcs7-mime; smime-type=signed-data
	// Content-Transfer-Encoding: base64
	// 
	// MII...
	// Diagnostic conversion. The returned XML exposes ASN.1 tags, object identifiers,
	// and values for inspection. It is not the MIME-to-XML representation returned by
	// GetXml[1].
	// 
	// References:
	// [1] #GetXml
	const char *asnBodyToXml(void);

	// Clears the internal recipient-certificate list populated by AddEncryptCert[1]. A
	// subsequent call to EncryptN[2] requires certificates to be added again.
	// 
	// References:
	// [1] #AddEncryptCert
	// [2] #EncryptN
	void ClearEncryptCerts(void);


	// Returns true if the currently visible MIME tree contains a CMS/PKCS #7
	// encrypted entity. Both application/pkcs7-mime and application/x-pkcs7-mime forms
	// are recognized.
	// Encrypted layers hide their contents. This method examines the MIME structure as
	// it currently exists. It cannot report signed or encrypted entities inside
	// ciphertext until the enclosing encrypted layer is successfully removed.
	bool ContainsEncryptedParts(void);


	// Returns true if the currently visible MIME tree contains a complete detached
	// or opaque CMS/PKCS #7 signed entity. A standalone application/pkcs7-signature or
	// application/x-pkcs7-signature leaf part is not by itself classified as a signed
	// message.
	// Encrypted layers hide their contents. A signature nested inside encrypted data
	// is not visible until the encrypted layer is removed. After a signature is
	// successfully verified and unwrapped, this method returns false because the
	// signed wrapper no longer exists.
	bool ContainsSignedParts(void);


	// Recursively converts every part whose Content-Transfer-Encoding is 8bit or
	// binary to base64. Both the child object's Encoding property and the serialized
	// header are updated. Parts using 7bit or another encoding are unchanged.
	void Convert8Bit(void);


	// Wraps the current entity in a new outer multipart/alternative entity. The
	// original entity becomes the first and initially only child.
	// 
	// The new outer entity retains message-level and custom headers such as
	// MIME-Version, Date, Subject, From, To, Content-ID, Content-Location, and custom
	// fields. The original Content-Type, Content-Transfer-Encoding,
	// Content-Disposition, and body move to the first child. An existing charset
	// parameter is retained on the new multipart Content-Type. Calling the method
	// again wraps the existing multipart in another multipart layer; the operation is
	// not idempotent.
	// 
	// Alternative ordering. Additional representations can be appended with
	// AppendPart[1]. Conventionally, alternatives are ordered from least rich to most
	// rich, such as text/plain followed by text/html.
	// 
	// References:
	// [1] #AppendPart
	bool ConvertToMultipartAlt(void);


	// Wraps the current entity in a new outer multipart/mixed entity. The original
	// entity becomes the first and initially only child.
	// 
	// The new outer entity retains message-level and custom headers such as
	// MIME-Version, Date, Subject, From, To, Content-ID, Content-Location, and custom
	// fields. The original Content-Type, Content-Transfer-Encoding,
	// Content-Disposition, and body move to the first child. An existing charset
	// parameter is retained on the new multipart Content-Type. Calling the method
	// again wraps the existing multipart in another multipart layer; the operation is
	// not idempotent.
	// 
	bool ConvertToMultipartMixed(void);


	// Creates an opaque (attached) S/MIME signature using cert. The certificate itself
	// must have access to its private key. On success, the current MIME entity is
	// replaced by CMS/PKCS #7 signed-data containing both the original MIME bytes and
	// the signature.
	// 
	// The result has no MIME child parts, uses Base64 content-transfer encoding, and
	// has an application/x-pkcs7-mime or application/pkcs7-mime content type according
	// to UseXPkcs7[1]. SigningHashAlg[2] and, for RSA keys, SigningAlg[3] select the
	// signing algorithms.
	// 
	// This differs from AddDetachedSignature[4], which creates a visible
	// multipart/signed wrapper with a separate signature part.
	// 
	// 
	// References:
	// [1] #UseXPkcs7
	// [2] #SigningHashAlg
	// [3] #SigningAlg
	// [4] #AddDetachedSignature
	bool ConvertToSigned(CkCert &cert);


	// Creates an opaque (attached) S/MIME signature using cert as the signer
	// certificate and privateKey as its associated private key. Use this method when the
	// certificate and private key are supplied separately.
	// 
	// The resulting CMS/PKCS #7 signed-data contains the original MIME entity and its
	// signature, has no MIME child parts, and uses Base64 content-transfer encoding.
	// For a detached multipart/signed result, use AddDetachedSignaturePk[1].
	// 
	// 
	// References:
	// [1] #AddDetachedSignaturePk
	bool ConvertToSignedPk(CkCert &cert, CkPrivateKey &privateKey);


	// Decrypts the current CMS/PKCS #7 encrypted MIME entity and replaces it with the
	// recovered MIME content. Chilkat identifies the intended recipient from the CMS
	// recipient information and searches configured credential sources for the
	// matching certificate and private key.
	// 
	// +---------------------+--------------------------------------------------------+
	// |       Source        |                   How it is supplied                   |
	// +=====================+========================================================+
	// | Explicit            | AddDecryptCert[1] or DecryptUsingCert[2]               |
	// | certificate         |                                                        |
	// +---------------------+--------------------------------------------------------+
	// | PFX/P12             | AddPfxSourceFile[3] , AddPfxSourceBd[4] , or a         |
	// |                     | DecryptUsingPfx... method                              |
	// +---------------------+--------------------------------------------------------+
	// | Certificate vault   | UseCertVault[5]                                        |
	// +---------------------+--------------------------------------------------------+
	// | Platform            | Windows certificate stores and the macOS Keychain are  |
	// | certificate store   | searched automatically where supported                 |
	// +---------------------+--------------------------------------------------------+
	// 
	// On success, NumDecryptCerts[6] and LastDecryptCert[7] identify the certificate
	// used, and GetLastJsonData[8] reports the content-encryption algorithm and key
	// size. On failure, the encrypted MIME remains unchanged.
	// 
	// Serialization after decryption. The recovered MIME content is restored
	// semantically, but its generated serialization is not guaranteed to be
	// byte-for-byte identical to the bytes that existed before encryption.
	// 
	// References:
	// [1] #AddDecryptCert
	// [2] #DecryptUsingCert
	// [3] #AddPfxSourceFile
	// [4] #AddPfxSourceBd
	// [5] #UseCertVault
	// [6] #NumDecryptCerts
	// [7] #LastDecryptCert
	// [8] #GetLastJsonData
	bool Decrypt(void);


	// Decrypts the current CMS/PKCS #7 encrypted MIME entity using the certificate in
	// cert and its associated private key in privateKey. On success, the encrypted wrapper
	// is replaced by the recovered MIME content, the decryption certificate is
	// available through LastDecryptCert[1], and operation details are available
	// through GetLastJsonData[2]. On failure, the encrypted MIME remains unchanged.
	// 
	// Use this method when the certificate and private key are stored separately. Use
	// Decrypt[3] when Chilkat should locate the credential from configured sources.
	// 
	// 
	// References:
	// [1] #LastDecryptCert
	// [2] #GetLastJsonData
	// [3] #Decrypt
	bool Decrypt2(CkCert &cert, CkPrivateKey &privateKey);


	// Decrypts the current CMS/PKCS #7 encrypted MIME entity using cert. The
	// certificate must have access to its corresponding private key; a public-only
	// certificate is insufficient. On success, the encrypted wrapper is replaced by
	// the recovered MIME content and cert is recorded in the decryption results. On
	// failure, the encrypted MIME remains unchanged.
	bool DecryptUsingCert(CkCert &cert);


	// Legacy byte-array method. Decrypts the current CMS/PKCS #7 encrypted MIME entity
	// using certificates and private keys from the PFX/P12 bytes in pfxData. password is the
	// password protecting the PFX data.
	// 
	// On success, the encrypted wrapper is replaced by the recovered MIME content and
	// the matching certificate is available through LastDecryptCert[1]. On failure,
	// the encrypted MIME remains unchanged.
	// 
	// 
	// References:
	// [1] #LastDecryptCert
	bool DecryptUsingPfxData(CkByteData &pfxData, const char *password);


	// Decrypts the current CMS/PKCS #7 encrypted MIME entity using certificates and
	// private keys from the PFX/P12 file at the local filesystem path in pfxFilePath. pfxPassword is
	// the password protecting the file.
	// 
	// On success, the encrypted wrapper is replaced by the recovered MIME content and
	// the matching certificate is available through LastDecryptCert[1].
	// GetLastJsonData[2] may include both CMS decryption details and information
	// produced while reading the PFX. On failure, the encrypted MIME remains
	// unchanged.
	// 
	// 
	// References:
	// [1] #LastDecryptCert
	// [2] #GetLastJsonData
	bool DecryptUsingPfxFile(const char *pfxFilePath, const char *pfxPassword);


	// Encrypts the current MIME entity for the recipient certificate in cert and
	// replaces it with CMS/PKCS #7 encrypted S/MIME. cert must be RSA-based. Only the
	// recipient's public key is needed to encrypt; the matching private key is
	// required later to decrypt.
	// 
	// The default content encryption is AES-128-CBC. Pkcs7CryptAlg[1] and
	// Pkcs7KeyLength[2] select the symmetric algorithm and key length. By default,
	// RSAES-PKCS1-v1_5 transports the content-encryption key; set OaepPadding[3] to
	// true to use RSAES-OAEP, with OaepHash[4] and OaepMgfHash[5] controlling its
	// parameters.
	// 
	// The generated MIME uses Base64 transfer encoding, the filename smime.p7m, and an
	// application/x-pkcs7-mime or application/pkcs7-mime content type according to
	// UseXPkcs7[6]. After encryption, GetDecryptCertInfo[7] can report the recipient
	// identifiers stored in the CMS data. If encryption fails, the original MIME
	// remains unchanged.
	// 
	// 
	// References:
	// [1] #Pkcs7CryptAlg
	// [2] #Pkcs7KeyLength
	// [3] #OaepPadding
	// [4] #OaepHash
	// [5] #OaepMgfHash
	// [6] #UseXPkcs7
	// [7] #GetDecryptCertInfo
	bool Encrypt(CkCert &cert);


	// Encrypts the current MIME entity for every certificate previously added with
	// AddEncryptCert[1]. Each recipient receives independently protected access to the
	// same encrypted content.
	// 
	// Add one certificate per intended recipient, call this method, and use
	// ClearEncryptCerts[2] before preparing a different recipient set.
	// 
	// 
	// References:
	// [1] #AddEncryptCert
	// [2] #ClearEncryptCerts
	bool EncryptN(void);


	// Deprecated. Applications should call PartsToFiles[1].
	// 
	// This method recursively saves parts having a nonempty filename parameter to the
	// existing directory in dirPath and returns a StringArray containing the created
	// paths. See PartsToFiles[1] for the current extraction and filename-handling
	// rules.
	// 
	// 
	// References:
	// [1] #PartsToFiles
	// The caller is responsible for deleting the object returned by this method.
	CkStringArray *ExtractPartsToFiles(const char *dirPath);


	// Deprecated. Use the certificate object's GetIssuer method instead.
	// 
	// Finds the issuer of cert. If cert is self-issued or a root certificate, the
	// returned object is a copy of cert.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCert *FindIssuer(CkCert &cert);


	// Replaces the contents of binDat with the decoded body bytes of the current part.
	// Existing bytes in binDat are discarded. Base64 and quoted-printable are decoded.
	// MIME headers, multipart boundaries, and child parts are not included.
	bool GetBodyBd(CkBinData &binDat);


	// Returns the decoded body bytes of the current part. Base64 and quoted-printable
	// are decoded, but no MIME headers or multipart framing are included. This legacy
	// byte-array method preserves arbitrary bytes, including embedded NUL bytes.
	bool GetBodyBinary(CkByteData &outData);


	// Returns the decoded body as text. Chilkat first decodes the
	// Content-Transfer-Encoding and then interprets text according to the declared
	// charset.
	// Use a byte-oriented getter for binary content. A string result cannot reliably
	// represent arbitrary binary bytes or embedded NUL bytes. Use GetBodyBd[1] or
	// GetBodyBinary[2] for binary payloads.
	// 
	// References:
	// [1] #GetBodyBd
	// [2] #GetBodyBinary
	bool GetBodyDecoded(CkString &outStr);

	// Returns the decoded body as text. Chilkat first decodes the
	// Content-Transfer-Encoding and then interprets text according to the declared
	// charset.
	// Use a byte-oriented getter for binary content. A string result cannot reliably
	// represent arbitrary binary bytes or embedded NUL bytes. Use GetBodyBd[1] or
	// GetBodyBinary[2] for binary payloads.
	// 
	// References:
	// [1] #GetBodyBd
	// [2] #GetBodyBinary
	const char *getBodyDecoded(void);
	// Returns the decoded body as text. Chilkat first decodes the
	// Content-Transfer-Encoding and then interprets text according to the declared
	// charset.
	// Use a byte-oriented getter for binary content. A string result cannot reliably
	// represent arbitrary binary bytes or embedded NUL bytes. Use GetBodyBd[1] or
	// GetBodyBinary[2] for binary payloads.
	// 
	// References:
	// [1] #GetBodyBd
	// [2] #GetBodyBinary
	const char *bodyDecoded(void);


	// Returns the current part's transfer-encoded body text without decoding Base64 or
	// quoted-printable. The returned value is Chilkat's normalized serialization of
	// the body, not necessarily the exact text that appeared in the loaded MIME. For
	// example, Base64 padding and line wrapping or quoted-printable spelling may be
	// regenerated.
	bool GetBodyEncoded(CkString &outStr);

	// Returns the current part's transfer-encoded body text without decoding Base64 or
	// quoted-printable. The returned value is Chilkat's normalized serialization of
	// the body, not necessarily the exact text that appeared in the loaded MIME. For
	// example, Base64 padding and line wrapping or quoted-printable spelling may be
	// regenerated.
	const char *getBodyEncoded(void);
	// Returns the current part's transfer-encoded body text without decoding Base64 or
	// quoted-printable. The returned value is Chilkat's normalized serialization of
	// the body, not necessarily the exact text that appeared in the loaded MIME. For
	// example, Base64 padding and line wrapping or quoted-printable spelling may be
	// regenerated.
	const char *bodyEncoded(void);


	// Examines the current encrypted S/MIME entity and writes recipient-certificate
	// identifiers to the JsonObject in certInfo. This can be used to identify which
	// certificate and private key must be made available before calling Decrypt[1] or
	// UnwrapSecurity[2]. A typical result is:{
	//   "recipientInfo": [
	//     {
	//       "serial": "166FC256FC66A64B20C710F15BFAB63E",
	//       "issuerCN": "Example Issuing CA"
	//     }
	//   ]
	// }
	// 
	// The method returns false and writes an empty JSON object when the current MIME
	// entity is not encrypted, including after it has already been decrypted.
	// 
	// No private key is revealed. The encrypted message contains recipient identifiers
	// and encrypted key material, not recipient private keys.
	// 
	// References:
	// [1] #Decrypt
	// [2] #UnwrapSecurity
	bool GetDecryptCertInfo(CkJsonObject &certInfo);


	// Deprecated. Use LastDecryptCert[1] instead.
	// 
	// Loads the certificate at zero-based index from the certificate results recorded
	// by the most recent applicable S/MIME operation. Use NumDecryptCerts[2] for the
	// count.
	// 
	// 
	// References:
	// [1] #LastDecryptCert
	// [2] #NumDecryptCerts
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetEncryptCert(int index);


	// Returns the complete serialized body of the current MIME entity. For multipart
	// MIME, this includes boundary delimiters, each child part's headers and body, and
	// the closing boundary. The current entity's own header fields are not included.
	// 
	// Use GetBodyDecoded[1] when the decoded payload of a single part is needed.
	// 
	// 
	// References:
	// [1] #GetBodyDecoded
	bool GetEntireBody(CkString &outStr);

	// Returns the complete serialized body of the current MIME entity. For multipart
	// MIME, this includes boundary delimiters, each child part's headers and body, and
	// the closing boundary. The current entity's own header fields are not included.
	// 
	// Use GetBodyDecoded[1] when the decoded payload of a single part is needed.
	// 
	// 
	// References:
	// [1] #GetBodyDecoded
	const char *getEntireBody(void);
	// Returns the complete serialized body of the current MIME entity. For multipart
	// MIME, this includes boundary delimiters, each child part's headers and body, and
	// the closing boundary. The current entity's own header fields are not included.
	// 
	// Use GetBodyDecoded[1] when the decoded payload of a single part is needed.
	// 
	// 
	// References:
	// [1] #GetBodyDecoded
	const char *entireBody(void);


	// Returns the complete serialized header section of the current MIME entity. The
	// body and any multipart child content are not included.
	bool GetEntireHead(CkString &outStr);

	// Returns the complete serialized header section of the current MIME entity. The
	// body and any multipart child content are not included.
	const char *getEntireHead(void);
	// Returns the complete serialized header section of the current MIME entity. The
	// body and any multipart child content are not included.
	const char *entireHead(void);


	// Returns the value of the first header field whose name matches fieldName
	// case-insensitively. Duplicate later occurrences are not combined. Returns null
	// when no matching field exists.
	bool GetHeaderField(const char *fieldName, CkString &outStr);

	// Returns the value of the first header field whose name matches fieldName
	// case-insensitively. Duplicate later occurrences are not combined. Returns null
	// when no matching field exists.
	const char *getHeaderField(const char *fieldName);
	// Returns the value of the first header field whose name matches fieldName
	// case-insensitively. Duplicate later occurrences are not combined. Returns null
	// when no matching field exists.
	const char *headerField(const char *fieldName);


	// Returns an attribute value parsed from the first header field named by name.
	// Both the header name and attrName attribute name are matched case-insensitively.
	// Surrounding quotation marks are removed, and semicolons inside a quoted value
	// are handled as part of the value.
	// 
	// Extended parameters such as filename*=utf-8''r%C3%A9sum%C3%A9.txt are returned
	// in their raw encoded form; this method does not percent-decode or apply the
	// declared charset. Returns null when the field or attribute is absent.
	// 
	bool GetHeaderFieldAttribute(const char *name, const char *attrName, CkString &outStr);

	// Returns an attribute value parsed from the first header field named by name.
	// Both the header name and attrName attribute name are matched case-insensitively.
	// Surrounding quotation marks are removed, and semicolons inside a quoted value
	// are handled as part of the value.
	// 
	// Extended parameters such as filename*=utf-8''r%C3%A9sum%C3%A9.txt are returned
	// in their raw encoded form; this method does not percent-decode or apply the
	// declared charset. Returns null when the field or attribute is absent.
	// 
	const char *getHeaderFieldAttribute(const char *name, const char *attrName);
	// Returns an attribute value parsed from the first header field named by name.
	// Both the header name and attrName attribute name are matched case-insensitively.
	// Surrounding quotation marks are removed, and semicolons inside a quoted value
	// are handled as part of the value.
	// 
	// Extended parameters such as filename*=utf-8''r%C3%A9sum%C3%A9.txt are returned
	// in their raw encoded form; this method does not percent-decode or apply the
	// declared charset. Returns null when the field or attribute is absent.
	// 
	const char *headerFieldAttribute(const char *name, const char *attrName);


	// Returns the name of the header-field occurrence at zero-based index. Header order
	// and original casing are preserved for ordinary loaded headers. Use
	// NumHeaderFields[1] to determine the valid range.
	// 
	// References:
	// [1] #NumHeaderFields
	bool GetHeaderFieldName(int index, CkString &outStr);

	// Returns the name of the header-field occurrence at zero-based index. Header order
	// and original casing are preserved for ordinary loaded headers. Use
	// NumHeaderFields[1] to determine the valid range.
	// 
	// References:
	// [1] #NumHeaderFields
	const char *getHeaderFieldName(int index);
	// Returns the name of the header-field occurrence at zero-based index. Header order
	// and original casing are preserved for ordinary loaded headers. Use
	// NumHeaderFields[1] to determine the valid range.
	// 
	// References:
	// [1] #NumHeaderFields
	const char *headerFieldName(int index);


	// Returns the unfolded value of the header-field occurrence at zero-based index.
	// Continuation lines are combined into a single value. Use NumHeaderFields[1] to
	// determine the valid range.
	// 
	// References:
	// [1] #NumHeaderFields
	bool GetHeaderFieldValue(int index, CkString &outStr);

	// Returns the unfolded value of the header-field occurrence at zero-based index.
	// Continuation lines are combined into a single value. Use NumHeaderFields[1] to
	// determine the valid range.
	// 
	// References:
	// [1] #NumHeaderFields
	const char *getHeaderFieldValue(int index);
	// Returns the unfolded value of the header-field occurrence at zero-based index.
	// Continuation lines are combined into a single value. Use NumHeaderFields[1] to
	// determine the valid range.
	// 
	// References:
	// [1] #NumHeaderFields
	const char *headerFieldValue(int index);


	// Copies structured details from the most recent operation into json when such
	// details are available. Many methods do not produce JSON data.
	// 
	// +---------------------+--------------------------------------------------------+
	// |      Operation      |                     Typical result                     |
	// +=====================+========================================================+
	// | Signing or          | An empty JSON object.                                  |
	// | encryption          |                                                        |
	// +---------------------+--------------------------------------------------------+
	// | Verify[1]           | pkcs7.verify details such as embedded certificates,    |
	// |                     | digest algorithms, signer information, signature       |
	// |                     | algorithm, signing time, message digest, and           |
	// |                     | authenticated attributes.                              |
	// +---------------------+--------------------------------------------------------+
	// | Decryption          | pkcs7.decrypt details including the content algorithm  |
	// |                     | and key size. A PFX-based method may also include PKCS |
	// |                     | #12 parsing details.                                   |
	// +---------------------+--------------------------------------------------------+
	// | UnwrapSecurity[2]   | May contain both verification and decryption sections  |
	// |                     | when both kinds of security layer were removed.        |
	// +---------------------+--------------------------------------------------------+
	// 
	// Read immediately. The information describes the most recent applicable call on
	// this object and can be replaced by a later operation.
	// 
	// References:
	// [1] #Verify
	// [2] #UnwrapSecurity
	void GetLastJsonData(CkJsonObject &json);


	// Serializes and returns the complete MIME entity, including headers, body,
	// multipart boundaries, and all descendants.
	// Serialization is normalized. The result is semantically equivalent MIME, not a
	// byte-for-byte copy of loaded input. Chilkat can unfold headers, normalize
	// parameter quoting and transfer encodings, discard multipart preamble and
	// epilogue text, and generate CRLF for headers and multipart framing. Existing
	// body line endings may not always be rewritten.
	bool GetMime(CkString &outStr);

	// Serializes and returns the complete MIME entity, including headers, body,
	// multipart boundaries, and all descendants.
	// Serialization is normalized. The result is semantically equivalent MIME, not a
	// byte-for-byte copy of loaded input. Chilkat can unfold headers, normalize
	// parameter quoting and transfer encodings, discard multipart preamble and
	// epilogue text, and generate CRLF for headers and multipart framing. Existing
	// body line endings may not always be rewritten.
	const char *getMime(void);
	// Serializes and returns the complete MIME entity, including headers, body,
	// multipart boundaries, and all descendants.
	// Serialization is normalized. The result is semantically equivalent MIME, not a
	// byte-for-byte copy of loaded input. Chilkat can unfold headers, normalize
	// parameter quoting and transfer encodings, discard multipart preamble and
	// epilogue text, and generate CRLF for headers and multipart framing. Existing
	// body line endings may not always be rewritten.
	const char *mime(void);


	// Serializes the complete MIME entity and appends its bytes to bindat. Existing
	// BinData bytes are preserved. Use this method when arbitrary binary body bytes
	// must not pass through a text string.
	// Serialization is normalized. The result is semantically equivalent MIME, not a
	// byte-for-byte copy of loaded input. Chilkat can unfold headers, normalize
	// parameter quoting and transfer encodings, discard multipart preamble and
	// epilogue text, and generate CRLF for headers and multipart framing. Existing
	// body line endings may not always be rewritten.
	bool GetMimeBd(CkBinData &bindat);


	// Returns the complete serialized MIME entity as a byte array. This preserves
	// binary body bytes that cannot safely pass through a string.
	// Serialization is normalized. The result is semantically equivalent MIME, not a
	// byte-for-byte copy of loaded input. Chilkat can unfold headers, normalize
	// parameter quoting and transfer encodings, discard multipart preamble and
	// epilogue text, and generate CRLF for headers and multipart framing. Existing
	// body line endings may not always be rewritten.
	bool GetMimeBytes(CkByteData &outBytes);


	// Serializes the complete MIME entity and appends it to sb. Existing
	// StringBuilder content is preserved.
	// Serialization is normalized. The result is semantically equivalent MIME, not a
	// byte-for-byte copy of loaded input. Chilkat can unfold headers, normalize
	// parameter quoting and transfer encodings, discard multipart preamble and
	// epilogue text, and generate CRLF for headers and multipart framing. Existing
	// body line endings may not always be rewritten.
	bool GetMimeSb(CkStringBuilder &sb);


	// This method is deprecated. Applications should call PartAt[1].
	// 
	// Retrieves the direct child at zero-based index. The returned object provides live
	// access to the child stored in the parent MIME tree, so modifying it modifies the
	// parent.
	// 
	// 
	// References:
	// [1] #PartAt
	// The caller is responsible for deleting the object returned by this method.
	CkMime *GetPart(int index);


	// Returns the CMS signingTime signed attribute for the signer at zero-based index,
	// formatted as an RFC 822-style date string in GMT. For example:Wed, 29 Jul 2026
	// 14:32:58 GMT
	// 
	// Call HasSignatureSigningTime[1] first because the attribute is optional. Use
	// NumSignerCerts[2] for the signer count.
	// 
	// Signing time is not a trusted timestamp. The CMS signingTime value is supplied
	// by the signer. It is different from a timestamp token issued and signed by a
	// trusted timestamp authority.
	// 
	// References:
	// [1] #HasSignatureSigningTime
	// [2] #NumSignerCerts
	bool GetSignatureSigningTimeStr(int index, CkString &outStr);

	// Returns the CMS signingTime signed attribute for the signer at zero-based index,
	// formatted as an RFC 822-style date string in GMT. For example:Wed, 29 Jul 2026
	// 14:32:58 GMT
	// 
	// Call HasSignatureSigningTime[1] first because the attribute is optional. Use
	// NumSignerCerts[2] for the signer count.
	// 
	// Signing time is not a trusted timestamp. The CMS signingTime value is supplied
	// by the signer. It is different from a timestamp token issued and signed by a
	// trusted timestamp authority.
	// 
	// References:
	// [1] #HasSignatureSigningTime
	// [2] #NumSignerCerts
	const char *getSignatureSigningTimeStr(int index);
	// Returns the CMS signingTime signed attribute for the signer at zero-based index,
	// formatted as an RFC 822-style date string in GMT. For example:Wed, 29 Jul 2026
	// 14:32:58 GMT
	// 
	// Call HasSignatureSigningTime[1] first because the attribute is optional. Use
	// NumSignerCerts[2] for the signer count.
	// 
	// Signing time is not a trusted timestamp. The CMS signingTime value is supplied
	// by the signer. It is different from a timestamp token issued and signed by a
	// trusted timestamp authority.
	// 
	// References:
	// [1] #HasSignatureSigningTime
	// [2] #NumSignerCerts
	const char *signatureSigningTimeStr(int index);


	// Deprecated. Use LastSignerCert[1] instead.
	// 
	// Returns the signer certificate at zero-based index from the most recent
	// verification or security-unwrapping operation.
	// 
	// 
	// References:
	// [1] #LastSignerCert
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetSignerCert(int index);


	// Deprecated. Retrieve the signer certificate with LastSignerCert[1] and then
	// obtain its certificate chain through the Cert API.
	// 
	// This method returns the chain associated with the signer at zero-based index.
	// 
	// 
	// References:
	// [1] #LastSignerCert
	// The caller is responsible for deleting the object returned by this method.
	CkCertChain *GetSignerCertChain(int index);


	// Returns a concise MIME-tree summary. fmt is case-insensitive. The value xml
	// selects XML output; all other values, including text, an empty string, or an
	// unrecognized value, select the indented text format.multipart/mixed
	//     text/plain
	// application/octet-stream <multipart-mixed>
	//     <text-plain />
	//     <application-octet-stream />
	// </multipart-mixed>
	bool GetStructure(const char *fmt, CkString &outStr);

	// Returns a concise MIME-tree summary. fmt is case-insensitive. The value xml
	// selects XML output; all other values, including text, an empty string, or an
	// unrecognized value, select the indented text format.multipart/mixed
	//     text/plain
	// application/octet-stream <multipart-mixed>
	//     <text-plain />
	//     <application-octet-stream />
	// </multipart-mixed>
	const char *getStructure(const char *fmt);
	// Returns a concise MIME-tree summary. fmt is case-insensitive. The value xml
	// selects XML output; all other values, including text, an empty string, or an
	// unrecognized value, select the indented text format.multipart/mixed
	//     text/plain
	// application/octet-stream <multipart-mixed>
	//     <text-plain />
	//     <application-octet-stream />
	// </multipart-mixed>
	const char *structure(const char *fmt);


	// Converts the MIME tree to Chilkat's XML representation and returns it as a
	// string. Header names become XML element names, structured header parameters
	// become XML attributes, duplicate headers become repeated elements, multipart
	// children are nested in subpart elements, and binary bodies are represented in an
	// encoded textual form.
	// XML round-tripping is semantic. Loading this XML reconstructs an equivalent MIME
	// tree, but it is not byte-preserving and header names are normalized to
	// lowercase.
	bool GetXml(CkString &outStr);

	// Converts the MIME tree to Chilkat's XML representation and returns it as a
	// string. Header names become XML element names, structured header parameters
	// become XML attributes, duplicate headers become repeated elements, multipart
	// children are nested in subpart elements, and binary bodies are represented in an
	// encoded textual form.
	// XML round-tripping is semantic. Loading this XML reconstructs an equivalent MIME
	// tree, but it is not byte-preserving and header names are normalized to
	// lowercase.
	const char *getXml(void);
	// Converts the MIME tree to Chilkat's XML representation and returns it as a
	// string. Header names become XML element names, structured header parameters
	// become XML attributes, duplicate headers become repeated elements, multipart
	// children are nested in subpart elements, and binary bodies are represented in an
	// encoded textual form.
	// XML round-tripping is semantic. Loading this XML reconstructs an equivalent MIME
	// tree, but it is not byte-preserving and header names are normalized to
	// lowercase.
	const char *xml(void);


	// Returns true if the signer at zero-based index has a CMS signingTime signed
	// attribute. Use NumSignerCerts[1] for the signer count and
	// GetSignatureSigningTimeStr[2] to retrieve the value.
	// 
	// References:
	// [1] #NumSignerCerts
	// [2] #GetSignatureSigningTimeStr
	bool HasSignatureSigningTime(int index);


	// Returns true when ContentType[1] begins with application/. It returns false
	// for an empty or malformed media type.
	// 
	// References:
	// [1] #ContentType
	bool IsApplicationData(void);


	// Returns true when the current part's disposition value is attachment, matched
	// case-insensitively. Parameters such as filename do not affect the test. An
	// inline part remains non-attachment even when it has a filename.
	bool IsAttachment(void);


	// Returns true when ContentType[1] begins with audio/.
	// 
	// References:
	// [1] #ContentType
	bool IsAudio(void);


	// Returns true when the current MIME entity is a CMS/PKCS #7 encrypted S/MIME
	// wrapper. Both application/pkcs7-mime and application/x-pkcs7-mime forms are
	// recognized. To search the visible MIME tree rather than only the current entity,
	// use ContainsEncryptedParts[1].
	// 
	// References:
	// [1] #ContainsEncryptedParts
	bool IsEncrypted(void);


	// Returns true when ContentType[1] is text/html. The ContentType property must
	// contain only the media type; set parameters such as charset separately.
	// 
	// References:
	// [1] #ContentType
	bool IsHtml(void);


	// Returns true when ContentType[1] begins with image/, including values such as
	// image/svg+xml.
	// 
	// References:
	// [1] #ContentType
	bool IsImage(void);


	// Returns true when ContentType[1] begins with multipart/.
	// 
	// References:
	// [1] #ContentType
	bool IsMultipart(void);


	// Returns true when ContentType[1] is multipart/alternative.
	// 
	// References:
	// [1] #ContentType
	bool IsMultipartAlternative(void);


	// Returns true when ContentType[1] is multipart/mixed.
	// 
	// References:
	// [1] #ContentType
	bool IsMultipartMixed(void);


	// Returns true when ContentType[1] is multipart/related.
	// 
	// References:
	// [1] #ContentType
	bool IsMultipartRelated(void);


	// Returns true when ContentType[1] is text/plain.
	// 
	// References:
	// [1] #ContentType
	bool IsPlainText(void);


	// Returns true when the current MIME entity is a complete CMS/PKCS #7 signed
	// S/MIME wrapper, including detached multipart/signed and opaque signed-data
	// forms. A standalone application/pkcs7-signature or application/x-pkcs7-signature
	// leaf part is not by itself classified as a signed message. To search the visible
	// MIME tree, use ContainsSignedParts[1].
	// 
	// References:
	// [1] #ContainsSignedParts
	bool IsSigned(void);


	// Returns true when ContentType[1] begins with text/.
	// 
	// References:
	// [1] #ContentType
	bool IsText(void);


	// Returns true when ContentType[1] begins with video/.
	// 
	// References:
	// [1] #ContentType
	bool IsVideo(void);


	// Returns true only for text/xml or application/xml. It does not classify
	// structured-suffix media types such as application/soap+xml,
	// application/atom+xml, or image/svg+xml as XML.
	bool IsXml(void);


	// Loads into cert the decryption certificate at zero-based index from the most
	// recent successful decryption or security-unwrapping operation. Valid indexes
	// range from 0 through NumDecryptCerts[1] - 1. The returned certificate has access
	// to the private key used for decryption.
	// 
	// An invalid index returns false and leaves cert unchanged.
	// 
	// 
	// References:
	// [1] #NumDecryptCerts
	bool LastDecryptCert(int index, CkCert &cert);


	// Deprecated. Use GetLastJsonData[1] instead.
	// 
	// Returns a JsonObject containing details produced by the most recent operation
	// when that operation provides structured diagnostic data. For example, after
	// UnwrapSecurity[2], the JSON may describe the signature, key-transport,
	// content-encryption, and certificate information encountered.
	// 
	// 
	// References:
	// [1] #GetLastJsonData
	// [2] #UnwrapSecurity
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *LastJsonData(void);


	// Loads into cert the signer certificate at zero-based index from the most recent
	// successful signature-verification or security-unwrapping operation. Valid
	// indexes range from 0 through NumSignerCerts[1] - 1. The returned certificate
	// normally contains only the public key; it does not gain access to the signer's
	// private key.
	// 
	// An invalid index returns false and leaves cert unchanged. A later failed call
	// to Verify[2] clears the signer results.
	// 
	// 
	// References:
	// [1] #NumSignerCerts
	// [2] #Verify
	bool LastSignerCert(int index, CkCert &cert);


	// Parses the complete MIME text in mimeMsg and replaces the current object's headers,
	// body, and multipart tree. A successful call always replaces the previous MIME.
	// 
	// If no blank line separates headers from the body, lines that appear header-like
	// are parsed as headers and the body is empty. Data after the header/body
	// separator belongs to the body.
	// 
	// Permissive parser and normalized output. Chilkat accepts many imperfect
	// messages. Observed behavior includes ignoring malformed header lines and leading
	// non-header text, using the last duplicate Content-Type, repairing a missing
	// multipart closing delimiter during serialization, treating unmatched
	// boundary-like text as an ordinary body, and tolerating malformed Base64 or
	// quoted-printable. LF-only and CR-only input are accepted; generated headers and
	// multipart framing use CRLF. Loading and reserializing is therefore not
	// guaranteed to reproduce the original bytes, and multipart preamble and epilogue
	// text are not retained.
	// Text input is not a raw-byte container. Use LoadMimeBd[1] or LoadMimeBytes[2]
	// for arbitrary 8-bit bytes or embedded NUL bytes.
	// 
	// References:
	// [1] #LoadMimeBd
	// [2] #LoadMimeBytes
	bool LoadMime(const char *mimeMsg);


	// Parses complete MIME bytes from bindat and replaces the current MIME on success.
	// This is the preferred loader when the MIME can contain arbitrary 8-bit body
	// bytes or embedded NUL bytes. Parsing tolerance and serialization normalization
	// are the same as LoadMime[1].
	// 
	// References:
	// [1] #LoadMime
	bool LoadMimeBd(CkBinData &bindat);


	// Parses complete MIME bytes from binData and replaces the current MIME on success.
	// This byte-oriented loader preserves arbitrary 8-bit values and embedded NUL
	// bytes. Parsing tolerance and serialization normalization are the same as
	// LoadMime[1].
	// 
	// References:
	// [1] #LoadMime
	bool LoadMimeBytes(CkByteData &binData);


	// Reads and parses the complete MIME entity from the local file at fileName. A
	// successful call replaces the current MIME. If the file cannot be opened, the
	// method returns false and preserves the existing object unchanged.
	// 
	// Parsing tolerance and serialization normalization are the same as LoadMime[1].
	// 
	// 
	// References:
	// [1] #LoadMime
	bool LoadMimeFile(const char *fileName);


	// Parses complete MIME text from sb and replaces the current MIME on success.
	// Parsing tolerance and serialization normalization are the same as LoadMime[1].
	// Use byte input for arbitrary MIME bytes. A StringBuilder is text-oriented. Use
	// LoadMimeBd[2] for binary MIME containing arbitrary 8-bit values or NUL bytes.
	// 
	// References:
	// [1] #LoadMime
	// [2] #LoadMimeBd
	bool LoadMimeSb(CkStringBuilder &sb);


	// Reconstructs a MIME tree from Chilkat's MIME XML in xml. On success, the
	// current object is replaced. If the XML is invalid, the method returns false
	// and preserves the existing MIME unchanged.
	// 
	// The reconstructed MIME is semantically equivalent but not byte-identical to the
	// MIME that produced the XML. Header names are normalized to lowercase.
	// 
	bool LoadXml(const char *xml);


	// Reads Chilkat MIME XML from the local file at fileName and reconstructs the MIME
	// tree. On success, the current object is replaced. If the file cannot be opened
	// or the XML is invalid, the method returns false and preserves the existing
	// MIME unchanged. Header names are normalized to lowercase during reconstruction.
	bool LoadXmlFile(const char *fileName);


	// Clears the current object and initializes it as message/rfc822. Its body is a
	// serialized copy of mimeObject at the time of the call. Later modifications to mimeObject do
	// not change the embedded message.
	bool NewMessageRfc822(CkMime &mimeObject);


	// Initializes an empty multipart/alternative entity. Clears all existing headers,
	// body content, and child parts. The new object contains only a multipart
	// Content-Type with an automatically generated boundary, has zero parts, and does
	// not automatically add MIME-Version.
	bool NewMultipartAlternative(void);


	// Initializes an empty multipart/mixed entity. Clears all existing headers, body
	// content, and child parts. The new object contains only a multipart Content-Type
	// with an automatically generated boundary, has zero parts, and does not
	// automatically add MIME-Version.
	bool NewMultipartMixed(void);


	// Initializes an empty multipart/related entity. Clears all existing headers, body
	// content, and child parts. The new object contains only a multipart Content-Type
	// with an automatically generated boundary, has zero parts, and does not
	// automatically add MIME-Version.
	bool NewMultipartRelated(void);


	// Provides live access to the direct child at zero-based index through subPart.
	// Modifying subPart after a successful call modifies the child stored in the parent
	// MIME tree.
	// 
	// Valid indexes range from 0 through NumParts[1] - 1. An invalid index returns
	// false and preserves subPart unchanged.
	// 
	// Different from AppendPart. AppendPart[2] stores a copy of its argument. This
	// method exposes the actual stored child.
	// 
	// References:
	// [1] #NumParts
	// [2] #AppendPart
	bool PartAt(int index, CkMime &subPart);


	// Recursively traverses the MIME tree and saves each part having a nonempty
	// filename parameter to the existing directory in path. A name parameter alone is
	// not used as a fallback. The disposition may be attachment or inline; a filename
	// is what controls extraction.
	//     * Only the final path component of a MIME filename is used. Directory
	//     components, absolute paths, and.. traversal are discarded.
	//     * On Windows, invalid filename characters are replaced with underscores.
	//     * Duplicate filenames target the same path; later parts overwrite earlier
	//     parts.
	//     * st is appended to rather than cleared. Each added entry is the full path
	//     actually written, including any sanitized filename.
	//     * The destination directory is not created. If it does not exist, the method
	//     returns false, creates no files, and appends nothing to st.
	// Treat MIME filenames as untrusted. Use a controlled destination directory and
	// apply any application-specific policy for file types, size limits, overwriting,
	// and renaming.
	bool PartsToFiles(const char *path, CkStringTable &st);


	// Removes fields whose name matches fieldName case-insensitively. If bAllOccurrences is false,
	// only the first matching occurrence is removed. If bAllOccurrences is true, all matching
	// occurrences are removed. Remaining fields retain their relative order.
	void RemoveHeaderField(const char *fieldName, bool bAllOccurrences);


	// Removes the direct child at zero-based index. Valid indexes range from 0 through
	// NumParts[1] - 1. An out-of-range index returns false and leaves the tree
	// unchanged.
	// 
	// References:
	// [1] #NumParts
	bool RemovePart(int index);


	// Writes the decoded body bytes of the current part to the local path in filename.
	// Base64 and quoted-printable are decoded. MIME headers and multipart framing are
	// not written.
	// File behavior. Existing files are overwritten. Parent directories are not
	// created, and passing a directory as the destination fails. On Windows, an
	// existing read-only file is replaced and the read-only attribute is removed.
	bool SaveBody(const char *filename);


	// Serializes the complete MIME entity and writes it to the local path in filename,
	// including headers, body, multipart boundaries, and all descendants.
	// Serialization is normalized. The result is semantically equivalent MIME, not a
	// byte-for-byte copy of loaded input. Chilkat can unfold headers, normalize
	// parameter quoting and transfer encodings, discard multipart preamble and
	// epilogue text, and generate CRLF for headers and multipart framing. Existing
	// body line endings may not always be rewritten.
	// File behavior. Existing files are overwritten. Parent directories are not
	// created, and passing a directory as the destination fails. On Windows, an
	// existing read-only file is replaced and the read-only attribute is removed.
	bool SaveMime(const char *filename);


	// Writes Chilkat's MIME XML representation to the local path in filename. The file can
	// be loaded by LoadXmlFile[1].
	// File behavior. Existing files are overwritten. Parent directories are not
	// created, and passing a directory as the destination fails. On Windows, an
	// existing read-only file is replaced and the read-only attribute is removed.
	// 
	// References:
	// [1] #LoadXmlFile
	bool SaveXml(const char *filename);


	// Sets the current part's body from str while preserving existing content headers
	// such as Content-Type, charset, and Content-Transfer-Encoding.
	// Multipart entities serialize their child parts. Calling this method on a
	// multipart object changes what the body getter methods return, but the assigned
	// body is not included in the serialized multipart output while child parts are
	// present. Build multipart content through AppendPart[1] and PartAt[2].
	// 
	// References:
	// [1] #AppendPart
	// [2] #PartAt
	void SetBody(const char *str);


	// Sets the decoded body bytes from bd, changes Content-Transfer-Encoding to
	// base64, and preserves the bytes exactly. It does not set a Content-Type,
	// disposition, filename, or name; set those separately when needed.
	bool SetBodyBd(CkBinData &bd);


	// Legacy byte-array method. Sets the decoded body bytes from binData, changes
	// Content-Transfer-Encoding to base64, and preserves the bytes exactly. It does
	// not set a Content-Type, disposition, filename, or name; set those separately
	// when needed. Prefer SetBodyBd[1] when using BinData.
	// 
	// References:
	// [1] #SetBodyBd
	bool SetBodyFromBinary(CkByteData &binData);


	// Sets the body from transfer-encoded text. encoding must be base64 or
	// quoted-printable; other values, including 7bit, 8bit, binary, an unknown name,
	// or an empty string, cause failure.
	// 
	// Base64 whitespace is accepted and the stored representation is normalized.
	// Invalid Base64 causes the method to return false. On any failure, all existing
	// headers and body content are preserved unchanged.
	// 
	// Do not encode twice. str must already be in the encoding named by encoding. To
	// provide decoded bytes, use SetBodyBd[1] or SetBodyFromBinary[2].
	// 
	// References:
	// [1] #SetBodyBd
	// [2] #SetBodyFromBinary
	bool SetBodyFromEncoded(const char *encoding, const char *str);


	// Reads the local file at fileName and replaces the current part's body and content
	// headers according to the filename extension.
	// 
	// +---------------+--------------------------------------------------------------+
	// |   File kind   |                            Result                            |
	// +===============+==============================================================+
	// | .txt          | text/plain; charset=windows-1252; format=flowed , 7bit       |
	// +---------------+--------------------------------------------------------------+
	// | .html         | text/html; charset=windows-1252 , 7bit                       |
	// +---------------+--------------------------------------------------------------+
	// | Unknown       | application/octet-stream , base64 , attachment , and         |
	// | extension     | filename/name parameters based on the local filename         |
	// +---------------+--------------------------------------------------------------+
	// 
	// If the file cannot be opened, the method returns false and preserves the
	// existing MIME unchanged.
	// 
	bool SetBodyFromFile(const char *fileName);


	// Sets str as HTML and changes the media type to text/html. For ASCII input,
	// Chilkat uses Content-Transfer-Encoding: 7bit and does not add a charset.
	// Existing unrelated headers are preserved.
	bool SetBodyFromHtml(const char *str);


	// Sets str as plain text. For ASCII input, Chilkat sets Content-Type: text/plain;
	// format=flowed and Content-Transfer-Encoding: 7bit without a charset. For
	// non-ASCII UTF-8 input, it sets charset=utf-8 and uses 8bit. Existing unrelated
	// headers are preserved.
	bool SetBodyFromPlainText(const char *str);


	// Sets str as XML, changes the media type to text/xml, and selects a transfer
	// encoding appropriate for the text. For ASCII input, Chilkat uses 7bit and does
	// not add a charset.
	// 
	// The XML declaration's encoding value is not copied to the MIME charset
	// parameter.
	// 
	// Different from LoadXml. This method places an XML document in the MIME body.
	// LoadXml[1] reconstructs an entire MIME object from Chilkat MIME XML.
	// 
	// References:
	// [1] #LoadXml
	bool SetBodyFromXml(const char *str);


	// Sets one header field named by name. Matching is case-insensitive. All existing
	// occurrences are removed and one replacement is inserted. If no field exists, a
	// new one is added. Passing an empty value removes all matching occurrences rather
	// than creating an empty-valued field.
	// 
	// Use AddHeaderField[1] to append another occurrence or to create an empty-valued
	// field.
	// 
	// 
	// References:
	// [1] #AddHeaderField
	bool SetHeaderField(const char *name, const char *value);


	// Supplies cert as a signer-certificate fallback for subsequent signature
	// verification. This is useful when the CMS/PKCS #7 signature does not embed the
	// signer certificate and Chilkat cannot otherwise locate it. Only the public key
	// is required.
	// This does not require a particular signer. An embedded signer certificate takes
	// precedence. If the CMS signature embeds the correct signer certificate,
	// verification can succeed even when cert is an unrelated certificate, and
	// LastSignerCert[1] returns the embedded certificate. To enforce signer identity,
	// verify first and then compare the returned signer certificate using
	// application-defined criteria such as its serial number, fingerprint, subject,
	// issuer, or trusted chain.
	// 
	// References:
	// [1] #LastSignerCert
	bool SetVerifyCert(CkCert &cert);


	// Removes supported S/MIME security layers and restores the underlying MIME
	// content. It handles both common layer orders: a message signed and then
	// encrypted, and a message encrypted and then signed. It continues through nested
	// top-level layers until no additional supported security wrapper remains.
	// 
	// After a successful call, NumSignerCerts[1] and LastSignerCert[2] identify
	// verified signers, while NumDecryptCerts[3] and LastDecryptCert[4] identify
	// decryption certificates. GetLastJsonData[5] may contain both pkcs7.verify and
	// pkcs7.decrypt details.
	// 
	// Additional result headers. When UnwrapExtras[6] is true, Chilkat adds headers
	// such as X-NumPartsSigned, X-SignaturesValid, X-NumPartsEncrypted, and
	// X-Decrypted. Set it to false to omit these headers.
	// 
	// References:
	// [1] #NumSignerCerts
	// [2] #LastSignerCert
	// [3] #NumDecryptCerts
	// [4] #LastDecryptCert
	// [5] #GetLastJsonData
	// [6] #UnwrapExtras
	bool UnwrapSecurity(void);


	// Replaces the current body with an application/x-www-form-urlencoded -style
	// representation using the character set named by charset. Spaces become +, a literal
	// plus becomes%2B, non-ASCII bytes become%HH sequences, and separators such as &
	// and = remain unchanged.Input:  a b+c&d=e
	// Output: a+b%2Bc&d=e
	// 
	// The MIME content headers are not changed. If the named character set is
	// unsupported, the body remains unchanged.
	// 
	// Not a MIME transfer encoding. This operation is distinct from base64 and
	// quoted-printable.
	void UrlEncodeBody(const char *charset);


	// Sets vault as the certificate vault used to locate certificates and private keys
	// for S/MIME encryption, decryption, signing, and verification. Only one vault is
	// active; each call replaces the previously configured vault.
	// 
	// Use XmlCertVault when credentials are maintained independently of platform
	// certificate stores or individual PFX sources.
	// 
	bool UseCertVault(CkXmlCertVault &vault);


	// Verifies the current CMS/PKCS #7 signed MIME entity and removes the signature
	// wrapper. Both detached multipart/signed messages and opaque CMS signed-data are
	// supported. The method works with signed MIME loaded from serialized input as
	// well as MIME signed by the current object.
	// 
	// On success, the object is restored to the MIME structure and content that was
	// signed, NumSignerCerts[1] reports the verified signer count, LastSignerCert[2]
	// returns the signer certificate, and GetLastJsonData[3] reports CMS verification
	// details. A detached signature can restore the original serialization exactly,
	// but opaque signed-data restoration is semantic and is not guaranteed to
	// reproduce byte-for-byte identical MIME serialization.
	// 
	// On failure, the signed wrapper remains unchanged, no content is unwrapped, and
	// the signer-result count is cleared to 0.
	// 
	// SetVerifyCert is a fallback, not a signer restriction. When the CMS data embeds
	// a usable signer certificate, Chilkat uses that embedded certificate.
	// Verification can therefore succeed even when SetVerifyCert[4] was given an
	// unrelated certificate. Enforce signer identity after verification by examining
	// LastSignerCert[2].
	// What verification proves. Cryptographic verification establishes that the signed
	// bytes have not changed and that the signature matches the signer certificate.
	// Application trust decisions may additionally require validating the certificate
	// chain, identity, usage, validity period, and revocation status.
	// 
	// References:
	// [1] #NumSignerCerts
	// [2] #LastSignerCert
	// [3] #GetLastJsonData
	// [4] #SetVerifyCert
	bool Verify(void);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
