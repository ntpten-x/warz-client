// CkEmail.h: interface for the CkEmail class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkEmail_H
#define _CkEmail_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkBinData;
class CkByteData;
class CkCert;
class CkStringArray;
class CkJsonObject;
class CkDateTime;
class CkStringBuilder;
class CkCertChain;
class CkStringTable;
class CkTask;
class CkPrivateKey;
class CkXmlCertVault;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkEmail
class CK_VISIBLE_PUBLIC CkEmail  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkEmail(const CkEmail &);
	CkEmail &operator=(const CkEmail &);

    public:
	CkEmail(void);
	virtual ~CkEmail(void);

	static CkEmail *createNew(void);
	static CkEmail *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Gets or sets the primary body of the email.
	// 
	// When reading this property, an email containing both plain-text and HTML
	// alternatives returns the HTML body. Use GetHtmlBody[1] or GetPlainTextBody[2] to
	// retrieve a specific representation, and use HasHtmlBody[3] or
	// HasPlainTextBody[4] to determine which representations are present.
	// 
	// When setting this property, Chilkat inspects the supplied content to determine
	// the body type. If the content is recognized as HTML, the HTML body is set.
	// Otherwise, the plain-text body is set. If the email contains both plain-text and
	// HTML alternatives, the corresponding alternative is replaced and the other
	// alternative is left unchanged.
	// 
	// For explicit control, use SetTextBody[5], SetHtmlBody[6],
	// AddPlainTextAlternativeBody[7], or AddHtmlAlternativeBody[8].
	// 
	// 
	// References:
	// [1] #GetHtmlBody
	// [2] #GetPlainTextBody
	// [3] #HasHtmlBody
	// [4] #HasPlainTextBody
	// [5] #SetTextBody
	// [6] #SetHtmlBody
	// [7] #AddPlainTextAlternativeBody
	// [8] #AddHtmlAlternativeBody
	void get_Body(CkString &str);
	// Gets or sets the primary body of the email.
	// 
	// When reading this property, an email containing both plain-text and HTML
	// alternatives returns the HTML body. Use GetHtmlBody[1] or GetPlainTextBody[2] to
	// retrieve a specific representation, and use HasHtmlBody[3] or
	// HasPlainTextBody[4] to determine which representations are present.
	// 
	// When setting this property, Chilkat inspects the supplied content to determine
	// the body type. If the content is recognized as HTML, the HTML body is set.
	// Otherwise, the plain-text body is set. If the email contains both plain-text and
	// HTML alternatives, the corresponding alternative is replaced and the other
	// alternative is left unchanged.
	// 
	// For explicit control, use SetTextBody[5], SetHtmlBody[6],
	// AddPlainTextAlternativeBody[7], or AddHtmlAlternativeBody[8].
	// 
	// 
	// References:
	// [1] #GetHtmlBody
	// [2] #GetPlainTextBody
	// [3] #HasHtmlBody
	// [4] #HasPlainTextBody
	// [5] #SetTextBody
	// [6] #SetHtmlBody
	// [7] #AddPlainTextAlternativeBody
	// [8] #AddHtmlAlternativeBody
	const char *body(void);
	// Gets or sets the primary body of the email.
	// 
	// When reading this property, an email containing both plain-text and HTML
	// alternatives returns the HTML body. Use GetHtmlBody[1] or GetPlainTextBody[2] to
	// retrieve a specific representation, and use HasHtmlBody[3] or
	// HasPlainTextBody[4] to determine which representations are present.
	// 
	// When setting this property, Chilkat inspects the supplied content to determine
	// the body type. If the content is recognized as HTML, the HTML body is set.
	// Otherwise, the plain-text body is set. If the email contains both plain-text and
	// HTML alternatives, the corresponding alternative is replaced and the other
	// alternative is left unchanged.
	// 
	// For explicit control, use SetTextBody[5], SetHtmlBody[6],
	// AddPlainTextAlternativeBody[7], or AddHtmlAlternativeBody[8].
	// 
	// 
	// References:
	// [1] #GetHtmlBody
	// [2] #GetPlainTextBody
	// [3] #HasHtmlBody
	// [4] #HasPlainTextBody
	// [5] #SetTextBody
	// [6] #SetHtmlBody
	// [7] #AddPlainTextAlternativeBody
	// [8] #AddHtmlAlternativeBody
	void put_Body(const char *newVal);

	// This property is deprecated and applications should use the MailMan.SmtpMailFrom
	// property instead.
	// 
	// The SMTP envelope sender is separate from the visible From header. Use
	// MailMan.SmtpMailFrom when delivery failures or bounces should be directed to a
	// different address.
	// 
	void get_BounceAddress(CkString &str);
	// This property is deprecated and applications should use the MailMan.SmtpMailFrom
	// property instead.
	// 
	// The SMTP envelope sender is separate from the visible From header. Use
	// MailMan.SmtpMailFrom when delivery failures or bounces should be directed to a
	// different address.
	// 
	const char *bounceAddress(void);
	// This property is deprecated and applications should use the MailMan.SmtpMailFrom
	// property instead.
	// 
	// The SMTP envelope sender is separate from the visible From header. Use
	// MailMan.SmtpMailFrom when delivery failures or bounces should be directed to a
	// different address.
	// 
	void put_BounceAddress(const char *newVal);

	// Represents the main charset of the email, such as utf-8, iso-8859-1, Shift_JIS,
	// US-ASCII, etc. This property can be empty if there is no explicit charset, such
	// as for emails with only US-ASCII.
	// 
	// Setting this property causes Chilkat to use the new charset in HTML and
	// plain-text bodies, where possible. This can include updating the HTML META tag
	// in HTML bodies to agree with the charset specified in the email header and also
	// the byte representation of the HTML body in the email.
	// 
	// Chilkat stores text internally as Unicode. This property mainly controls how
	// body text is converted to bytes and labeled when MIME is generated.
	// 
	void get_Charset(CkString &str);
	// Represents the main charset of the email, such as utf-8, iso-8859-1, Shift_JIS,
	// US-ASCII, etc. This property can be empty if there is no explicit charset, such
	// as for emails with only US-ASCII.
	// 
	// Setting this property causes Chilkat to use the new charset in HTML and
	// plain-text bodies, where possible. This can include updating the HTML META tag
	// in HTML bodies to agree with the charset specified in the email header and also
	// the byte representation of the HTML body in the email.
	// 
	// Chilkat stores text internally as Unicode. This property mainly controls how
	// body text is converted to bytes and labeled when MIME is generated.
	// 
	const char *charset(void);
	// Represents the main charset of the email, such as utf-8, iso-8859-1, Shift_JIS,
	// US-ASCII, etc. This property can be empty if there is no explicit charset, such
	// as for emails with only US-ASCII.
	// 
	// Setting this property causes Chilkat to use the new charset in HTML and
	// plain-text bodies, where possible. This can include updating the HTML META tag
	// in HTML bodies to agree with the charset specified in the email header and also
	// the byte representation of the HTML body in the email.
	// 
	// Chilkat stores text internally as Unicode. This property mainly controls how
	// body text is converted to bytes and labeled when MIME is generated.
	// 
	void put_Charset(const char *newVal);

	// true if the email arrived encrypted and was successfully decrypted, otherwise
	// false. This property is only meaningful when the ReceivedEncrypted[1] property
	// is equal to true.
	// 
	// Check ReceivedEncrypted[1] first. A value of false can mean either that the
	// message was not encrypted or that decryption did not succeed.
	// 
	// 
	// References:
	// [1] #ReceivedEncrypted
	bool get_Decrypted(void);

	// The date/time from the Date header in the UTC/GMT timezone in RFC822 string
	// form.
	// 
	// For example: Fri, 10 Jul 2026 20:15:30 GMT.
	// 
	// Setting this property updates the email's Date header.
	// 
	void get_EmailDateStr(CkString &str);
	// The date/time from the Date header in the UTC/GMT timezone in RFC822 string
	// form.
	// 
	// For example: Fri, 10 Jul 2026 20:15:30 GMT.
	// 
	// Setting this property updates the email's Date header.
	// 
	const char *emailDateStr(void);
	// The date/time from the Date header in the UTC/GMT timezone in RFC822 string
	// form.
	// 
	// For example: Fri, 10 Jul 2026 20:15:30 GMT.
	// 
	// Setting this property updates the email's Date header.
	// 
	void put_EmailDateStr(const char *newVal);

	// If the email was received encrypted, this contains the details of the
	// certificate used for encryption.
	// 
	// This property is meaningful only when ReceivedEncrypted[1] is true. To obtain
	// a certificate object rather than descriptive text, use GetEncryptedByCert[2] or
	// LastDecryptCert[3].
	// 
	// 
	// References:
	// [1] #ReceivedEncrypted
	// [2] #GetEncryptedByCert
	// [3] #LastDecryptCert
	void get_EncryptedBy(CkString &str);
	// If the email was received encrypted, this contains the details of the
	// certificate used for encryption.
	// 
	// This property is meaningful only when ReceivedEncrypted[1] is true. To obtain
	// a certificate object rather than descriptive text, use GetEncryptedByCert[2] or
	// LastDecryptCert[3].
	// 
	// 
	// References:
	// [1] #ReceivedEncrypted
	// [2] #GetEncryptedByCert
	// [3] #LastDecryptCert
	const char *encryptedBy(void);

	// Set this property to send an email to a list of recipients stored in a plain
	// text file. The file format is simple: one recipient per line, no comments
	// allowed, blank lines are ignored. Setting this property is equivalent to adding
	// a CKX-FileDistList header field to the email. MailMan treats header fields
	// beginning with CKX- specially in that these fields are never transmitted with
	// the email when sent. However, CKX fields are saved and restored when saving to
	// XML or loading from XML (or MIME). When sending an email containing a
	// CKX-FileDistList header field, MailMan will read the distribution list file and
	// send the email to each recipient. Emails can be sent individually, or with BCC,
	// 100 recipients at a time. (See the MailMan.SendIndividual property.)
	// 
	// The distribution-list file is read when the message is sent, so the file must
	// still exist and be accessible at that time. This feature is separate from the
	// recipients stored in the normal To, Cc, and Bcc lists.
	// 
	void get_FileDistList(CkString &str);
	// Set this property to send an email to a list of recipients stored in a plain
	// text file. The file format is simple: one recipient per line, no comments
	// allowed, blank lines are ignored. Setting this property is equivalent to adding
	// a CKX-FileDistList header field to the email. MailMan treats header fields
	// beginning with CKX- specially in that these fields are never transmitted with
	// the email when sent. However, CKX fields are saved and restored when saving to
	// XML or loading from XML (or MIME). When sending an email containing a
	// CKX-FileDistList header field, MailMan will read the distribution list file and
	// send the email to each recipient. Emails can be sent individually, or with BCC,
	// 100 recipients at a time. (See the MailMan.SendIndividual property.)
	// 
	// The distribution-list file is read when the message is sent, so the file must
	// still exist and be accessible at that time. This feature is separate from the
	// recipients stored in the normal To, Cc, and Bcc lists.
	// 
	const char *fileDistList(void);
	// Set this property to send an email to a list of recipients stored in a plain
	// text file. The file format is simple: one recipient per line, no comments
	// allowed, blank lines are ignored. Setting this property is equivalent to adding
	// a CKX-FileDistList header field to the email. MailMan treats header fields
	// beginning with CKX- specially in that these fields are never transmitted with
	// the email when sent. However, CKX fields are saved and restored when saving to
	// XML or loading from XML (or MIME). When sending an email containing a
	// CKX-FileDistList header field, MailMan will read the distribution list file and
	// send the email to each recipient. Emails can be sent individually, or with BCC,
	// 100 recipients at a time. (See the MailMan.SendIndividual property.)
	// 
	// The distribution-list file is read when the message is sent, so the file must
	// still exist and be accessible at that time. This feature is separate from the
	// recipients stored in the normal To, Cc, and Bcc lists.
	// 
	void put_FileDistList(const char *newVal);

	// Contains the sender name and email address as they appear in the From header,
	// such as John Smith <john.smith@mail.com>.
	// 
	// If the sender identified by the Sender header field should differ from the
	// visible From address, call AddHeaderField[1] to set the Sender header field.
	// 
	// From, FromName[2], and FromAddress[3] are different views of the same MIME From
	// header.
	// 
	// 
	// References:
	// [1] #AddHeaderField
	// [2] #FromName
	// [3] #FromAddress
	void get_From(CkString &str);
	// Contains the sender name and email address as they appear in the From header,
	// such as John Smith <john.smith@mail.com>.
	// 
	// If the sender identified by the Sender header field should differ from the
	// visible From address, call AddHeaderField[1] to set the Sender header field.
	// 
	// From, FromName[2], and FromAddress[3] are different views of the same MIME From
	// header.
	// 
	// 
	// References:
	// [1] #AddHeaderField
	// [2] #FromName
	// [3] #FromAddress
	const char *ck_from(void);
	// Contains the sender name and email address as they appear in the From header,
	// such as John Smith <john.smith@mail.com>.
	// 
	// If the sender identified by the Sender header field should differ from the
	// visible From address, call AddHeaderField[1] to set the Sender header field.
	// 
	// From, FromName[2], and FromAddress[3] are different views of the same MIME From
	// header.
	// 
	// 
	// References:
	// [1] #AddHeaderField
	// [2] #FromName
	// [3] #FromAddress
	void put_From(const char *newVal);

	// The email address of the sender.
	// 
	// Changing this property updates the address portion of the MIME From header while
	// preserving the sender name when possible.
	// 
	void get_FromAddress(CkString &str);
	// The email address of the sender.
	// 
	// Changing this property updates the address portion of the MIME From header while
	// preserving the sender name when possible.
	// 
	const char *fromAddress(void);
	// The email address of the sender.
	// 
	// Changing this property updates the address portion of the MIME From header while
	// preserving the sender name when possible.
	// 
	void put_FromAddress(const char *newVal);

	// The name of the sender.
	// 
	// Changing this property updates the display-name portion of the MIME From header
	// while preserving the email address.
	// 
	void get_FromName(CkString &str);
	// The name of the sender.
	// 
	// Changing this property updates the display-name portion of the MIME From header
	// while preserving the email address.
	// 
	const char *fromName(void);
	// The name of the sender.
	// 
	// Changing this property updates the display-name portion of the MIME From header
	// while preserving the email address.
	// 
	void put_FromName(const char *newVal);

	// The complete MIME header of the email.
	// 
	// This is the header generated from the current in-memory email object. Modify
	// individual fields through the corresponding properties or header methods rather
	// than attempting to assign to this read-only property.
	// 
	void get_Header(CkString &str);
	// The complete MIME header of the email.
	// 
	// This is the header generated from the current in-memory email object. Modify
	// individual fields through the corresponding properties or header methods rather
	// than attempting to assign to this read-only property.
	// 
	const char *header(void);

	// Identifies the primary language group detected in the email subject and body
	// text.
	// 
	//     * latin1 — English and Western European languages
	//     * central — Central European languages, such as Polish, Czech, and Hungarian
	//     * russian — Cyrillic languages
	//     * greek, turkish, hebrew, arabic, thai, or vietnamese
	//     * chinese, japanese, or korean
	//     * devanagari, bengali, gurmukhi, gujarati, oriya, tamil, telugu, kannada,
	//     malayalam, or sinhala
	//     * lao, tibetan, myanmar, or georgian
	//     * unknown
	// 
	// Characters in address and other MIME header fields are not considered. The
	// Subject[1] header has the greatest influence on the result. For example, an
	// email with Japanese text in the subject and Russian text in the body is
	// classified as japanese.
	// 
	// The classification is based on the Unicode blocks containing the characters
	// found in the email.
	// 
	// This is a character-based heuristic intended to help choose encodings. It is not
	// taken from the MIME Content-Language header and should not be treated as formal
	// language detection.
	// 
	// 
	// References:
	// [1] #Subject
	void get_Language(CkString &str);
	// Identifies the primary language group detected in the email subject and body
	// text.
	// 
	//     * latin1 — English and Western European languages
	//     * central — Central European languages, such as Polish, Czech, and Hungarian
	//     * russian — Cyrillic languages
	//     * greek, turkish, hebrew, arabic, thai, or vietnamese
	//     * chinese, japanese, or korean
	//     * devanagari, bengali, gurmukhi, gujarati, oriya, tamil, telugu, kannada,
	//     malayalam, or sinhala
	//     * lao, tibetan, myanmar, or georgian
	//     * unknown
	// 
	// Characters in address and other MIME header fields are not considered. The
	// Subject[1] header has the greatest influence on the result. For example, an
	// email with Japanese text in the subject and Russian text in the body is
	// classified as japanese.
	// 
	// The classification is based on the Unicode blocks containing the characters
	// found in the email.
	// 
	// This is a character-based heuristic intended to help choose encodings. It is not
	// taken from the MIME Content-Language header and should not be treated as formal
	// language detection.
	// 
	// 
	// References:
	// [1] #Subject
	const char *language(void);

	// The date/time found in the Date header field returned in the local timezone in
	// RFC822 string form.
	// 
	// For example: Fri, 10 Jul 2026 15:15:30 -0500.
	// 
	// Setting this property updates the email's Date header. Use LocalDate[1] when a
	// native local date/time value is preferred.
	// 
	// 
	// References:
	// [1] #LocalDate
	void get_LocalDateStr(CkString &str);
	// The date/time found in the Date header field returned in the local timezone in
	// RFC822 string form.
	// 
	// For example: Fri, 10 Jul 2026 15:15:30 -0500.
	// 
	// Setting this property updates the email's Date header. Use LocalDate[1] when a
	// native local date/time value is preferred.
	// 
	// 
	// References:
	// [1] #LocalDate
	const char *localDateStr(void);
	// The date/time found in the Date header field returned in the local timezone in
	// RFC822 string form.
	// 
	// For example: Fri, 10 Jul 2026 15:15:30 -0500.
	// 
	// Setting this property updates the email's Date header. Use LocalDate[1] when a
	// native local date/time value is preferred.
	// 
	// 
	// References:
	// [1] #LocalDate
	void put_LocalDateStr(const char *newVal);

	// Identifies the email software that sent the email.
	// 
	// This corresponds to the MIME X-Mailer header, which is informational and may be
	// absent or supplied by the sending application.
	// 
	void get_Mailer(CkString &str);
	// Identifies the email software that sent the email.
	// 
	// This corresponds to the MIME X-Mailer header, which is informational and may be
	// absent or supplied by the sending application.
	// 
	const char *mailer(void);
	// Identifies the email software that sent the email.
	// 
	// This corresponds to the MIME X-Mailer header, which is informational and may be
	// absent or supplied by the sending application.
	// 
	void put_Mailer(const char *newVal);

	// The number of body representations present in the email. A representation may be
	// plain text, HTML, iCalendar, or another body format.
	// 
	// A normal email with one body generally returns 1. A multipart/alternative email
	// returns the number of alternatives contained in that enclosure. A newly created
	// or cleared Email object also reports 1 for its default empty text body.
	// 
	// An alternative is one of multiple representations of the same email body, such
	// as plain text and HTML, within a multipart/alternative message.
	// 
	// For example, an email containing plain-text and HTML alternatives, inline
	// images, and an attachment may have a MIME structure similar to:
	// 
	// multipart/mixed
	//   multipart/alternative
	//     text/plain
	//     multipart/related
	//       text/html
	//       image/png
	// application/pdf
	// 
	// In this example, the text/plain part and the multipart/related part are
	// alternatives. The multipart/related part contains the HTML body and an inline
	// image, while the PDF is a separate attachment.
	// 
	// Alternative indexes used by methods such as GetAlternativeBody[1] are
	// zero-based.
	// 
	// 
	// References:
	// [1] #GetAlternativeBody
	int get_NumAlternatives(void);

	// The number of embedded emails represented by message/rfc822 MIME parts.
	// 
	// Some mail clients attach a forwarded message as a complete nested email. These
	// parts are counted separately from ordinary attachments and related items.
	// 
	// Attached-message indexes are zero-based. Use GetAttachedEmail[1] to copy an
	// embedded message into another Email object. The deprecated GetAttachedMessage[2]
	// method also returns an independent copy.
	// 
	// 
	// References:
	// [1] #GetAttachedEmail
	// [2] #GetAttachedMessage
	int get_NumAttachedMessages(void);

	// The number of ordinary attachments contained in the email.
	// 
	// Attachment indexes are zero-based. Related resources contained within a
	// multipart/related enclosure are counted separately by NumRelatedItems[1], and
	// embedded message/rfc822 emails are counted by NumAttachedMessages[2].
	// 
	// A MIME part outside a multipart/related enclosure may be classified as an
	// attachment even when it does not explicitly contain Content-Disposition:
	// attachment. MIME structure, content type, and disposition are considered
	// together.
	// 
	// Note: If an email is downloaded from an Imap server without attachment data, use
	// the Imap method that reports attachment information for the server message. This
	// property reports only the attachments actually present in the current Email
	// object.
	// 
	// 
	// References:
	// [1] #NumRelatedItems
	// [2] #NumAttachedMessages
	int get_NumAttachments(void);

	// The number of blind carbon-copy email recipients.
	// 
	// Bcc recipient indexes are zero-based and can be inspected with GetBcc[1],
	// GetBccAddr[2], and GetBccName[3].
	// 
	// 
	// References:
	// [1] #GetBcc
	// [2] #GetBccAddr
	// [3] #GetBccName
	int get_NumBcc(void);

	// The number of carbon-copy email recipients.
	// 
	// Cc recipient indexes are zero-based and can be inspected with GetCC[1],
	// GetCcAddr[2], and GetCcName[3].
	// 
	// 
	// References:
	// [1] #GetCC
	// [2] #GetCcAddr
	// [3] #GetCcName
	int get_NumCC(void);

	// Returns the number of days old from the current system date/time. The email's
	// date is obtained from the Date header field. If the Date header field is
	// missing, or invalid, then -9999 is returned. A negative number may be returned
	// if the Date header field contains a future date/time. (However, -9999 represents
	// an error condition.)
	// 
	// The calculation uses the parsed Date header, not the time when the message was
	// downloaded or loaded into the object.
	// 
	int get_NumDaysOld(void);

	// Returns the number of message/rfc822 parts contained within the multipart/digest
	// enclosure. If no multipart/digest enclosure exists, then this property has the
	// value of 0. The GetDigest[1] method is called to get the Nth digest as an email
	// object.
	// 
	// Digest indexes are zero-based. Use GetDigestEmail[2] to retrieve an individual
	// message from the digest.
	// 
	// 
	// References:
	// [1] #GetDigest
	// [2] #GetDigestEmail
	int get_NumDigests(void);

	// The number of header fields. When accessing a header field by index, the first
	// header field is at index 0, and the last is at NumHeaderFields-1. (Chilkat
	// indexing is always 0-based.)
	// 
	// Repeated header fields are counted separately. Use GetHeaderFieldName[1] and
	// GetHeaderFieldValue[2] to enumerate them by zero-based index.
	// 
	// 
	// References:
	// [1] #GetHeaderFieldName
	// [2] #GetHeaderFieldValue
	int get_NumHeaderFields(void);

	// The number of related MIME items present in the email. Related items are
	// resources, such as images or style sheets, contained with an HTML body in a
	// multipart/related enclosure.
	// 
	// Related-item indexes are zero-based. These parts are distinct from ordinary
	// attachments and are commonly referenced by HTML using a cid: URL or a
	// Content-Location value.
	// 
	// Classification is based primarily on the MIME structure. An inline disposition
	// or Content-ID alone does not necessarily make a part a related item if it is
	// outside the relevant multipart/related enclosure.
	// 
	int get_NumRelatedItems(void);

	// Returns the number of replacement patterns previously set by calling the
	// SetReplacePattern[1] method 1 or more times. If replacement patterns are set,
	// the email bodies and header fields are modified by applying the
	// search/replacement strings during the message sending process.
	// 
	// Pattern indexes are zero-based. Replacement patterns are retained in the email
	// object and applied later during supported mail-merge sending operations.
	// 
	// 
	// References:
	// [1] #SetReplacePattern
	int get_NumReplacePatterns(void);

	// Contains the number of report parts in a multipart/report email.
	// 
	// A MIME part is counted as a report when its Content-Type is message/*, except
	// for message/rfc822, or when its Content-Type is text/rfc822-headers. A
	// message/rfc822 part is treated as an attached email and is counted by
	// NumAttachedMessages[1].
	// 
	// Use GetReport[2] to retrieve the body of each report part.
	// 
	// Report indexes are zero-based. Use GetReport[2] to retrieve the content of an
	// individual report part.
	// 
	// 
	// References:
	// [1] #NumAttachedMessages
	// [2] #GetReport
	int get_NumReports(void);

	// The number of direct email recipients.
	// 
	// To-recipient indexes are zero-based and can be inspected with GetTo[1],
	// GetToAddr[2], and GetToName[3].
	// 
	// 
	// References:
	// [1] #GetTo
	// [2] #GetToAddr
	// [3] #GetToName
	int get_NumTo(void);

	// Selects the hash algorithm used by OAEP padding when encrypting email with
	// RSAES-OAEP. Valid values are sha1, sha256, sha384, and sha512. The default is
	// sha256.
	// 
	// This property is used only when OaepPadding[1] is true.
	// 
	// 
	// References:
	// [1] #OaepPadding
	void get_OaepHash(CkString &str);
	// Selects the hash algorithm used by OAEP padding when encrypting email with
	// RSAES-OAEP. Valid values are sha1, sha256, sha384, and sha512. The default is
	// sha256.
	// 
	// This property is used only when OaepPadding[1] is true.
	// 
	// 
	// References:
	// [1] #OaepPadding
	const char *oaepHash(void);
	// Selects the hash algorithm used by OAEP padding when encrypting email with
	// RSAES-OAEP. Valid values are sha1, sha256, sha384, and sha512. The default is
	// sha256.
	// 
	// This property is used only when OaepPadding[1] is true.
	// 
	// 
	// References:
	// [1] #OaepPadding
	void put_OaepHash(const char *newVal);

	// Selects the mask-generation function (MGF) hash algorithm used by OAEP padding
	// when encrypting email with RSAES-OAEP. Valid values are sha1, sha256, sha384,
	// and sha512. The default is sha256.
	// 
	// This property is used only when OaepPadding[1] is true. Some recipients
	// require the MGF hash to match OaepHash[2].
	// 
	// 
	// References:
	// [1] #OaepPadding
	// [2] #OaepHash
	void get_OaepMgfHash(CkString &str);
	// Selects the mask-generation function (MGF) hash algorithm used by OAEP padding
	// when encrypting email with RSAES-OAEP. Valid values are sha1, sha256, sha384,
	// and sha512. The default is sha256.
	// 
	// This property is used only when OaepPadding[1] is true. Some recipients
	// require the MGF hash to match OaepHash[2].
	// 
	// 
	// References:
	// [1] #OaepPadding
	// [2] #OaepHash
	const char *oaepMgfHash(void);
	// Selects the mask-generation function (MGF) hash algorithm used by OAEP padding
	// when encrypting email with RSAES-OAEP. Valid values are sha1, sha256, sha384,
	// and sha512. The default is sha256.
	// 
	// This property is used only when OaepPadding[1] is true. Some recipients
	// require the MGF hash to match OaepHash[2].
	// 
	// 
	// References:
	// [1] #OaepPadding
	// [2] #OaepHash
	void put_OaepMgfHash(const char *newVal);

	// Selects the RSA encryption scheme when encrypting email. The default value is
	// false, which selects RSAES_PKCS1-V1_5. When set to true, RSAES_OAEP is used.
	// 
	// This affects the RSA key-encryption step used for S/MIME encryption; it does not
	// change the symmetric content-encryption algorithm selected by Pkcs7CryptAlg[1].
	// 
	// 
	// References:
	// [1] #Pkcs7CryptAlg
	bool get_OaepPadding(void);
	// Selects the RSA encryption scheme when encrypting email. The default value is
	// false, which selects RSAES_PKCS1-V1_5. When set to true, RSAES_OAEP is used.
	// 
	// This affects the RSA key-encryption step used for S/MIME encryption; it does not
	// change the symmetric content-encryption algorithm selected by Pkcs7CryptAlg[1].
	// 
	// 
	// References:
	// [1] #Pkcs7CryptAlg
	void put_OaepPadding(bool newVal);

	// When true (the default) the methods to save email attachments and related
	// items will overwrite files if they already exist. When false, the methods that
	// save email attachments and related items will append a string of 4 characters to
	// create a unique filename if a file already exists. The filename of the
	// attachment (or related item) within the email object is updated and can be
	// retrieved by the program to determine the actual file(s) created.
	// 
	// This setting applies only when attachments or related items are written to the
	// filesystem. When false and a name collision occurs during a save operation,
	// Chilkat chooses a unique filename and updates the corresponding filename stored
	// in the email object.
	// 
	bool get_OverwriteExisting(void);
	// When true (the default) the methods to save email attachments and related
	// items will overwrite files if they already exist. When false, the methods that
	// save email attachments and related items will append a string of 4 characters to
	// create a unique filename if a file already exists. The filename of the
	// attachment (or related item) within the email object is updated and can be
	// retrieved by the program to determine the actual file(s) created.
	// 
	// This setting applies only when attachments or related items are written to the
	// filesystem. When false and a name collision occurs during a save operation,
	// Chilkat chooses a unique filename and updates the corresponding filename stored
	// in the email object.
	// 
	void put_OverwriteExisting(bool newVal);

	// When an email is sent encrypted (using PKCS#7 public-key encryption), this
	// selects the underlying symmetric encryption algorithm. Possible values are: aes,
	// aes-gcm, des, 3des, and rc2. The default value is aes.
	// 
	// Note: The aes-gcm option was added in Chilkat v10.0.0
	// 
	// This setting is used when S/MIME encryption is generated, typically after
	// SendEncrypted[1] is set to true and recipient encryption certificates have
	// been supplied.
	// 
	// 
	// References:
	// [1] #SendEncrypted
	void get_Pkcs7CryptAlg(CkString &str);
	// When an email is sent encrypted (using PKCS#7 public-key encryption), this
	// selects the underlying symmetric encryption algorithm. Possible values are: aes,
	// aes-gcm, des, 3des, and rc2. The default value is aes.
	// 
	// Note: The aes-gcm option was added in Chilkat v10.0.0
	// 
	// This setting is used when S/MIME encryption is generated, typically after
	// SendEncrypted[1] is set to true and recipient encryption certificates have
	// been supplied.
	// 
	// 
	// References:
	// [1] #SendEncrypted
	const char *pkcs7CryptAlg(void);
	// When an email is sent encrypted (using PKCS#7 public-key encryption), this
	// selects the underlying symmetric encryption algorithm. Possible values are: aes,
	// aes-gcm, des, 3des, and rc2. The default value is aes.
	// 
	// Note: The aes-gcm option was added in Chilkat v10.0.0
	// 
	// This setting is used when S/MIME encryption is generated, typically after
	// SendEncrypted[1] is set to true and recipient encryption certificates have
	// been supplied.
	// 
	// 
	// References:
	// [1] #SendEncrypted
	void put_Pkcs7CryptAlg(const char *newVal);

	// When the email is sent encrypted using PKCS#7 public-key encryption, this
	// selects the key length of the underlying symmetric encryption algorithm. The
	// default value is 128.
	// 
	// The allowed values depend on Pkcs7CryptAlg[1]:
	// 
	//     * For aes, use 128, 192, or 256.
	//     * For 3des, use 192.
	//     * For des, use 40.
	//     * For rc2, use 40, 56, 64, or 128.
	// 
	// An unsupported algorithm and key-length combination causes the encryption
	// operation to fail.
	// 
	// 
	// References:
	// [1] #Pkcs7CryptAlg
	int get_Pkcs7KeyLength(void);
	// When the email is sent encrypted using PKCS#7 public-key encryption, this
	// selects the key length of the underlying symmetric encryption algorithm. The
	// default value is 128.
	// 
	// The allowed values depend on Pkcs7CryptAlg[1]:
	// 
	//     * For aes, use 128, 192, or 256.
	//     * For 3des, use 192.
	//     * For des, use 40.
	//     * For rc2, use 40, 56, 64, or 128.
	// 
	// An unsupported algorithm and key-length combination causes the encryption
	// operation to fail.
	// 
	// 
	// References:
	// [1] #Pkcs7CryptAlg
	void put_Pkcs7KeyLength(int newVal);

	// Only applies when building an email with non-English characters where the
	// charset is not explicitly set. The Chilkat email component will automatically
	// choose a charset based on the languages found within an email (if the charset is
	// not already specified within the MIME or explicitly specified by setting the
	// Charset[1] property). The default charset chosen for each language is:
	// 
	// Chinese: gb2312
	// Japanese: shift_JIS
	// Korean: ks_c_5601-1987
	// Thai: windows-874
	// All others: iso-8859-*
	// 
	// This allows for charsets such as iso-2022-jp to be chosen instead of the
	// default. If the preferred charset does not apply to the situation, it is not
	// used. For example, if the preferred charset is iso-2022-jp, but the email
	// contains Greek characters, then the preferred charset is ignored.
	// 
	// This is a preference, not a forced conversion. It is ignored when the message
	// already specifies a charset or when the requested charset cannot represent the
	// email text.
	// 
	// 
	// References:
	// [1] #Charset
	void get_PreferredCharset(CkString &str);
	// Only applies when building an email with non-English characters where the
	// charset is not explicitly set. The Chilkat email component will automatically
	// choose a charset based on the languages found within an email (if the charset is
	// not already specified within the MIME or explicitly specified by setting the
	// Charset[1] property). The default charset chosen for each language is:
	// 
	// Chinese: gb2312
	// Japanese: shift_JIS
	// Korean: ks_c_5601-1987
	// Thai: windows-874
	// All others: iso-8859-*
	// 
	// This allows for charsets such as iso-2022-jp to be chosen instead of the
	// default. If the preferred charset does not apply to the situation, it is not
	// used. For example, if the preferred charset is iso-2022-jp, but the email
	// contains Greek characters, then the preferred charset is ignored.
	// 
	// This is a preference, not a forced conversion. It is ignored when the message
	// already specifies a charset or when the requested charset cannot represent the
	// email text.
	// 
	// 
	// References:
	// [1] #Charset
	const char *preferredCharset(void);
	// Only applies when building an email with non-English characters where the
	// charset is not explicitly set. The Chilkat email component will automatically
	// choose a charset based on the languages found within an email (if the charset is
	// not already specified within the MIME or explicitly specified by setting the
	// Charset[1] property). The default charset chosen for each language is:
	// 
	// Chinese: gb2312
	// Japanese: shift_JIS
	// Korean: ks_c_5601-1987
	// Thai: windows-874
	// All others: iso-8859-*
	// 
	// This allows for charsets such as iso-2022-jp to be chosen instead of the
	// default. If the preferred charset does not apply to the situation, it is not
	// used. For example, if the preferred charset is iso-2022-jp, but the email
	// contains Greek characters, then the preferred charset is ignored.
	// 
	// This is a preference, not a forced conversion. It is ignored when the message
	// already specifies a charset or when the requested charset cannot represent the
	// email text.
	// 
	// 
	// References:
	// [1] #Charset
	void put_PreferredCharset(const char *newVal);

	// When true, header fields added via the AddHeaderField[1] or AddHeaderField2[2]
	// methods are prepended to the top of the header as opposed to appended to the
	// bottom. The default value is false.
	// 
	// This affects header fields added after the property is set. It does not reorder
	// fields that are already present.
	// 
	// 
	// References:
	// [1] #AddHeaderField
	// [2] #AddHeaderField2
	bool get_PrependHeaders(void);
	// When true, header fields added via the AddHeaderField[1] or AddHeaderField2[2]
	// methods are prepended to the top of the header as opposed to appended to the
	// bottom. The default value is false.
	// 
	// This affects header fields added after the property is set. It does not reorder
	// fields that are already present.
	// 
	// 
	// References:
	// [1] #AddHeaderField
	// [2] #AddHeaderField2
	void put_PrependHeaders(bool newVal);

	// true if this email was originally received with encryption, otherwise false.
	// 
	// This records how the message was originally received. It remains useful after
	// successful automatic decryption, when the visible body is already the decrypted
	// content.
	// 
	bool get_ReceivedEncrypted(void);

	// true if this email was originally received with a digital signature, otherwise
	// false.
	// 
	// This records whether the original message contained one or more digital
	// signatures. Use SignaturesValid[1] to determine whether the signed content
	// verified successfully.
	// 
	// 
	// References:
	// [1] #SignaturesValid
	bool get_ReceivedSigned(void);

	// Sets the Reply-To header field to the specified email address such as
	// john@example.com. The Reply-To header automatically defaults to the From[1]
	// email address. You would only set this property if you wish for the Reply-To
	// email address to be different from the From[1] address.
	// 
	// There is usually only a single Reply-To email address. If multiple Reply-To
	// addresses are needed, then set with a comma-separated list of email addresses
	// such as john@example.com, mary@somewhere.com.
	// 
	// This changes the MIME Reply-To header only; it does not change the SMTP envelope
	// sender or the visible From header.
	// 
	// 
	// References:
	// [1] #From
	void get_ReplyTo(CkString &str);
	// Sets the Reply-To header field to the specified email address such as
	// john@example.com. The Reply-To header automatically defaults to the From[1]
	// email address. You would only set this property if you wish for the Reply-To
	// email address to be different from the From[1] address.
	// 
	// There is usually only a single Reply-To email address. If multiple Reply-To
	// addresses are needed, then set with a comma-separated list of email addresses
	// such as john@example.com, mary@somewhere.com.
	// 
	// This changes the MIME Reply-To header only; it does not change the SMTP envelope
	// sender or the visible From header.
	// 
	// 
	// References:
	// [1] #From
	const char *replyTo(void);
	// Sets the Reply-To header field to the specified email address such as
	// john@example.com. The Reply-To header automatically defaults to the From[1]
	// email address. You would only set this property if you wish for the Reply-To
	// email address to be different from the From[1] address.
	// 
	// There is usually only a single Reply-To email address. If multiple Reply-To
	// addresses are needed, then set with a comma-separated list of email addresses
	// such as john@example.com, mary@somewhere.com.
	// 
	// This changes the MIME Reply-To header only; it does not change the SMTP envelope
	// sender or the visible From header.
	// 
	// 
	// References:
	// [1] #From
	void put_ReplyTo(const char *newVal);

	// Set to true if you want the email to request a return-receipt when received by
	// the recipient. The default value is false.
	// 
	// Setting this property causes the Disposition-Notification-To email header to be
	// added when the email is sent.
	// 
	// A return receipt is only a request. The recipient's mail client or server may
	// ignore it, and a receipt is not proof that the message was read by a person.
	// 
	bool get_ReturnReceipt(void);
	// Set to true if you want the email to request a return-receipt when received by
	// the recipient. The default value is false.
	// 
	// Setting this property causes the Disposition-Notification-To email header to be
	// added when the email is sent.
	// 
	// A return receipt is only a request. The recipient's mail client or server may
	// ignore it, and a receipt is not proof that the message was read by a person.
	// 
	void put_ReturnReceipt(bool newVal);

	// Set to true if this email should be sent encrypted. The default value is
	// false.
	// 
	// Encryption requires one or more recipient certificates, supplied with methods
	// such as AddEncryptCert[1] or SetEncryptCert[2]. Setting this property alone does
	// not provide a certificate.
	// 
	// 
	// References:
	// [1] #AddEncryptCert
	// [2] #SetEncryptCert
	bool get_SendEncrypted(void);
	// Set to true if this email should be sent encrypted. The default value is
	// false.
	// 
	// Encryption requires one or more recipient certificates, supplied with methods
	// such as AddEncryptCert[1] or SetEncryptCert[2]. Setting this property alone does
	// not provide a certificate.
	// 
	// 
	// References:
	// [1] #AddEncryptCert
	// [2] #SetEncryptCert
	void put_SendEncrypted(bool newVal);

	// Set to true if this email should be sent with a digital signature. The default
	// value is false.
	// 
	// Signing requires a certificate with access to its private key, supplied with
	// SetSigningCert[1] or SetSigningCert2[2].
	// 
	// Note: Please be aware of the Apple Mail bug explained in the webpage at the link
	// below.
	// 
	// 
	// References:
	// [1] #SetSigningCert
	// [2] #SetSigningCert2
	bool get_SendSigned(void);
	// Set to true if this email should be sent with a digital signature. The default
	// value is false.
	// 
	// Signing requires a certificate with access to its private key, supplied with
	// SetSigningCert[1] or SetSigningCert2[2].
	// 
	// Note: Please be aware of the Apple Mail bug explained in the webpage at the link
	// below.
	// 
	// 
	// References:
	// [1] #SetSigningCert
	// [2] #SetSigningCert2
	void put_SendSigned(bool newVal);

	// true if the email was received with one or more digital signatures, and if all
	// the signatures were validated indicating that the email was not altered.
	// Otherwise this property is set to false. (This property is only meaningful
	// when the ReceivedSigned[1] property is equal to true.)
	// 
	// This indicates cryptographic integrity of the signed content. Applications that
	// also require certificate trust should separately examine the signer certificate
	// and its chain.
	// 
	// 
	// References:
	// [1] #ReceivedSigned
	bool get_SignaturesValid(void);

	// If the email was received digitally signed, this property contains the fields of
	// the certificate's SubjectDN.
	// 
	// For example: US, 94105, California, San Francisco, 100 Market Street, Northwind
	// Research LLC, Engineering, Avery Morgan
	// 
	// This is similar to a distinguished name (DN), but without the attribute names,
	// such as C=, ST=, L=, O=, and CN=, preceding each value.
	// 
	// This is intended for display or diagnostics. Use LastSignerCert[1] when the
	// signer certificate itself is needed.
	// 
	// 
	// References:
	// [1] #LastSignerCert
	void get_SignedBy(CkString &str);
	// If the email was received digitally signed, this property contains the fields of
	// the certificate's SubjectDN.
	// 
	// For example: US, 94105, California, San Francisco, 100 Market Street, Northwind
	// Research LLC, Engineering, Avery Morgan
	// 
	// This is similar to a distinguished name (DN), but without the attribute names,
	// such as C=, ST=, L=, O=, and CN=, preceding each value.
	// 
	// This is intended for display or diagnostics. Use LastSignerCert[1] when the
	// signer certificate itself is needed.
	// 
	// 
	// References:
	// [1] #LastSignerCert
	const char *signedBy(void);

	// Selects the signature algorithm to be used when sending signed (PKCS#7) email.
	// The default value is PKCS1-v1_5. This can be set to RSASSA-PSS (or simply pss)
	// to use the RSASSA-PSS signature scheme.
	// 
	// Note: This property only applies when signing with an RSA private key. It does
	// not apply for ECC or DSA private keys.
	// 
	// This setting is used only for RSA signing. The selected scheme must also be
	// supported by the private key provider.
	// 
	void get_SigningAlg(CkString &str);
	// Selects the signature algorithm to be used when sending signed (PKCS#7) email.
	// The default value is PKCS1-v1_5. This can be set to RSASSA-PSS (or simply pss)
	// to use the RSASSA-PSS signature scheme.
	// 
	// Note: This property only applies when signing with an RSA private key. It does
	// not apply for ECC or DSA private keys.
	// 
	// This setting is used only for RSA signing. The selected scheme must also be
	// supported by the private key provider.
	// 
	const char *signingAlg(void);
	// Selects the signature algorithm to be used when sending signed (PKCS#7) email.
	// The default value is PKCS1-v1_5. This can be set to RSASSA-PSS (or simply pss)
	// to use the RSASSA-PSS signature scheme.
	// 
	// Note: This property only applies when signing with an RSA private key. It does
	// not apply for ECC or DSA private keys.
	// 
	// This setting is used only for RSA signing. The selected scheme must also be
	// supported by the private key provider.
	// 
	void put_SigningAlg(const char *newVal);

	// Selects the underlying hash algorithm used when sending signed (PKCS#7) email.
	// Possible values are sha1, sha256, sha384, sha512, md5, and md2. The default is
	// sha1.
	// 
	// This property controls the message-digest algorithm placed in the signature. It
	// is used only when a signed message is generated.
	// 
	void get_SigningHashAlg(CkString &str);
	// Selects the underlying hash algorithm used when sending signed (PKCS#7) email.
	// Possible values are sha1, sha256, sha384, sha512, md5, and md2. The default is
	// sha1.
	// 
	// This property controls the message-digest algorithm placed in the signature. It
	// is used only when a signed message is generated.
	// 
	const char *signingHashAlg(void);
	// Selects the underlying hash algorithm used when sending signed (PKCS#7) email.
	// Possible values are sha1, sha256, sha384, sha512, md5, and md2. The default is
	// sha1.
	// 
	// This property controls the message-digest algorithm placed in the signature. It
	// is used only when a signed message is generated.
	// 
	void put_SigningHashAlg(const char *newVal);

	// The size in bytes of the email, including all parts and attachments.
	// 
	// Note: This property is only valid if the full email was downloaded. If only the
	// header was downloaded, then this property will contain the size of just the
	// header.
	// 
	// This value describes the email data currently present in the object. It should
	// not be used as the server-reported full message size when only a partial message
	// was downloaded.
	// 
	int get_Size(void);

	// The email subject.
	// 
	// This property reads or writes the MIME Subject header. Chilkat performs the
	// required MIME header encoding when the subject contains non-ASCII characters.
	// 
	void get_Subject(CkString &str);
	// The email subject.
	// 
	// This property reads or writes the MIME Subject header. Chilkat performs the
	// required MIME header encoding when the subject contains non-ASCII characters.
	// 
	const char *subject(void);
	// The email subject.
	// 
	// This property reads or writes the MIME Subject header. Chilkat performs the
	// required MIME header encoding when the subject contains non-ASCII characters.
	// 
	void put_Subject(const char *newVal);

	// Contains the unique message identifier assigned by a POP3 server. The value is
	// also represented by the X-UIDL header field.
	// 
	// Important: UIDLs are specific to POP3. IMAP uses UIDs instead. An email
	// downloaded through Chilkat.Imap stores its IMAP identifier in the ckx-imap-uid
	// header. The ckx-imap-isUid header contains YES when that value is an IMAP UID,
	// or NO when it is a mailbox sequence number.
	// 
	// A UIDL identifies a POP3 message within the server's mailbox and is normally
	// used to avoid downloading the same message repeatedly.
	// 
	void get_Uidl(CkString &str);
	// Contains the unique message identifier assigned by a POP3 server. The value is
	// also represented by the X-UIDL header field.
	// 
	// Important: UIDLs are specific to POP3. IMAP uses UIDs instead. An email
	// downloaded through Chilkat.Imap stores its IMAP identifier in the ckx-imap-uid
	// header. The ckx-imap-isUid header contains YES when that value is an IMAP UID,
	// or NO when it is a mailbox sequence number.
	// 
	// A UIDL identifies a POP3 message within the server's mailbox and is normally
	// used to avoid downloading the same message repeatedly.
	// 
	const char *uidl(void);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	// 
	//     * NoBccHeader - (added in v11.0.0) Do not add the Bcc MIME header for BCC
	//     email addresses. Note: The NoBccHeader keyword must be present before
	//     calling AddBcc[1] or AddMultipleBcc[2]
	//     * NO_FORMAT_FLOWED - Don't automatically add format=flowed to any
	//     Content-Type header.
	// 
	// Leave this property empty unless a documented compatibility option is
	// specifically required. Unrecognized keywords should not be assumed to have any
	// effect.
	// 
	// 
	// References:
	// [1] #AddBcc
	// [2] #AddMultipleBcc
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	// 
	//     * NoBccHeader - (added in v11.0.0) Do not add the Bcc MIME header for BCC
	//     email addresses. Note: The NoBccHeader keyword must be present before
	//     calling AddBcc[1] or AddMultipleBcc[2]
	//     * NO_FORMAT_FLOWED - Don't automatically add format=flowed to any
	//     Content-Type header.
	// 
	// Leave this property empty unless a documented compatibility option is
	// specifically required. Unrecognized keywords should not be assumed to have any
	// effect.
	// 
	// 
	// References:
	// [1] #AddBcc
	// [2] #AddMultipleBcc
	const char *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	// 
	//     * NoBccHeader - (added in v11.0.0) Do not add the Bcc MIME header for BCC
	//     email addresses. Note: The NoBccHeader keyword must be present before
	//     calling AddBcc[1] or AddMultipleBcc[2]
	//     * NO_FORMAT_FLOWED - Don't automatically add format=flowed to any
	//     Content-Type header.
	// 
	// Leave this property empty unless a documented compatibility option is
	// specifically required. Unrecognized keywords should not be assumed to have any
	// effect.
	// 
	// 
	// References:
	// [1] #AddBcc
	// [2] #AddMultipleBcc
	void put_UncommonOptions(const char *newVal);

	// Applies to the UnpackHtml[1] method. When true, relative paths are used within
	// the HTML for the links to the related files (images and style sheets) that were
	// unpacked to the filesystem. Otherwise absolute paths are used. The default value
	// is true.
	// 
	// Relative paths are usually preferable when the unpacked HTML directory will be
	// moved or deployed as a unit. Absolute paths can be useful for immediate local
	// viewing.
	// 
	// 
	// References:
	// [1] #UnpackHtml
	bool get_UnpackUseRelPaths(void);
	// Applies to the UnpackHtml[1] method. When true, relative paths are used within
	// the HTML for the links to the related files (images and style sheets) that were
	// unpacked to the filesystem. Otherwise absolute paths are used. The default value
	// is true.
	// 
	// Relative paths are usually preferable when the unpacked HTML directory will be
	// moved or deployed as a unit. Absolute paths can be useful for immediate local
	// viewing.
	// 
	// 
	// References:
	// [1] #UnpackHtml
	void put_UnpackUseRelPaths(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds an attachment using the contents of a BinData object. If contentType is empty,
	// then the Content-Type will be inferred from filename extension.
	// 
	// filename is the filename stored in MIME, not a filesystem path. The bytes are taken
	// from binData.
	// 
	bool AddAttachmentBd(const char *filename, CkBinData &binData, const char *contentType);


	// Adds or replaces a MIME header field in one of the email attachments. If the
	// header field does not exist, it is added. Otherwise it is replaced.
	// 
	// Indexing: index is zero-based and must identify an existing attachment. This
	// changes the attachment MIME header in the current email object; it does not
	// modify the original source file.
	// 
	void AddAttachmentHeader(int index, const char *fieldName, const char *fieldValue);


	// Adds a recipient to the blind carbon-copy (BCC) list. emailAddress is required; friendlyName is
	// optional. Call this method separately for each BCC recipient.
	// 
	// Note: Before v11.0.0, BCC addresses are not added to the MIME header. After
	// v11.0.0, BCC addresses are included in the MIME header. Most email servers
	// remove the BCC header before delivering the message to regular recipients. The
	// NoBccHeader keyword can be used in UncommonOptions[1] to prevent BCC email
	// addresses in the MIME passed to the SMTP server. If your application specifies
	// NoBccHeader, do so before adding BCC addresses.
	// 
	// The recipient is added to the in-memory message only. The message is not
	// transmitted until it is passed to a sending method of MailMan.
	// 
	// 
	// References:
	// [1] #UncommonOptions
	bool AddBcc(const char *friendlyName, const char *emailAddress);


	// Adds a recipient to the carbon-copy list. emailAddress is required, but friendlyName may be
	// empty.
	// 
	// To add multiple CC recipients, call this method once per recipient.
	// 
	// The recipient is added to the in-memory message only. Use NumCC[1] and the Cc
	// getter methods to inspect the resulting list.
	// 
	// 
	// References:
	// [1] #NumCC
	bool AddCC(const char *friendlyName, const char *emailAddress);


	// Adds an attachment directly from data in memory to the email.
	// 
	// fileName is the filename that appears in MIME; it does not need to be an existing
	// local path. content supplies the attachment bytes.
	// 
	bool AddDataAttachment(const char *fileName, CkByteData &content);


	// Adds an attachment to an email from in-memory data. Same as AddDataAttachment[1]
	// but allows the Content-Type to be specified.
	// 
	// fileName is the MIME filename, content contains the attachment bytes, and contentType is the
	// MIME type such as application/pdf.
	// 
	// 
	// References:
	// [1] #AddDataAttachment
	bool AddDataAttachment2(const char *fileName, CkByteData &content, const char *contentType);


	// Allows for certificates to be explicitly specified for sending encrypted email
	// to one or more recipients. Call this method once per certificate to be used. The
	// ClearEncryptCerts[1] method may be called to clear the list of
	// explicitly-specified certificates.
	// 
	// Note: It is possible to send encrypted email without explicitly specifying the
	// certificates. On Windows, the registry-based Current-User and Local-Machine
	// certificate stores are automatically searched for certificates matching each
	// recipient in the To, CC, and BCC lists. On macOS, the Keychain is automatically
	// searched for matching recipient certificates.
	// 
	// Note: The SetEncryptCert[2] method is equivalent to calling ClearEncryptCerts[1]
	// followed by AddEncryptCert.
	// 
	// Use this method when encrypting for multiple recipients: add each recipient
	// certificate separately. For a single explicitly selected certificate,
	// SetEncryptCert[2] may be simpler.
	// 
	// 
	// References:
	// [1] #ClearEncryptCerts
	// [2] #SetEncryptCert
	bool AddEncryptCert(CkCert &cert);


	// Adds a file as an attachment to the email. Returns the MIME Content-Type of the
	// attachment, which is inferred based on the filename extension.
	// 
	// path is a local filesystem path. The file is read and incorporated into the
	// current email object, and the attachment filename placed in MIME is derived from
	// path.
	// 
	bool AddFileAttachment(const char *path, CkString &outStrContentType);

	// Adds a file as an attachment to the email. Returns the MIME Content-Type of the
	// attachment, which is inferred based on the filename extension.
	// 
	// path is a local filesystem path. The file is read and incorporated into the
	// current email object, and the attachment filename placed in MIME is derived from
	// path.
	// 
	const char *addFileAttachment(const char *path);

	// Same as AddFileAttachment[1], but the content type can be explicitly specified.
	// 
	// Use this form when filename-based MIME type inference is unsuitable. contentType should
	// be a MIME media type such as application/octet-stream.
	// 
	// 
	// References:
	// [1] #AddFileAttachment
	bool AddFileAttachment2(const char *path, const char *contentType);


	// Any standard or non-standard (custom) header field can be added to the email
	// with this method. One interesting feature is that all header fields whose name
	// begins with CKX- will not be included in the header when an email is sent. These
	// fields will be included when saved to or loaded from XML. This makes it easy to
	// include persistent meta-data with an email which your programs can use in any
	// way it chooses.
	// 
	// Important: This method will replace an already-existing header field. To allow
	// for adding duplicate header fields, call AddHeaderField2[1] (see below).
	// 
	// This changes the MIME header stored in the current email object. It does not
	// change the SMTP envelope, except where another component explicitly interprets a
	// particular header.
	// 
	// 
	// References:
	// [1] #AddHeaderField2
	void AddHeaderField(const char *fieldName, const char *fieldValue);


	// This method is the same as AddHeaderField[1], except that if the header field
	// already exists, it is not replaced. A duplicate header will be added.
	// 
	// Use this method for headers that may legally occur more than once, such as
	// Received. For a single-valued field that should be replaced, use
	// AddHeaderField[1].
	// 
	// 
	// References:
	// [1] #AddHeaderField
	void AddHeaderField2(const char *fieldName, const char *fieldValue);


	// Adds or replaces the HTML body representation of the email.
	// 
	// If no HTML alternative exists, one is added. If an HTML alternative already
	// exists, it is replaced rather than duplicated. Repeated calls therefore leave at
	// most one HTML alternative.
	// 
	// When paired with AddPlainTextAlternativeBody[1], Chilkat creates a
	// multipart/alternative body so mail clients can choose the representation they
	// support. Use SetHtmlBody[2] when a multipart alternative is not needed.
	// 
	// 
	// References:
	// [1] #AddPlainTextAlternativeBody
	// [2] #SetHtmlBody
	bool AddHtmlAlternativeBody(const char *body);


	// Adds or replaces an iCalendar body as a text/calendar alternative.
	// 
	// If an iCalendar alternative already exists, it is replaced rather than
	// duplicated. Repeated calls therefore leave at most one calendar alternative.
	// 
	// icalContent contains the iCalendar data. methodName specifies the method parameter placed in
	// the alternative body's Content-Type header, such as REQUEST or CANCEL.
	// 
	// BEGIN:VCALENDAR
	// VERSION:2.0
	// PRODID:-//hacksw/handcal//NONSGML v1.0//EN
	// BEGIN:VEVENT
	// UID:uid1@example.com
	// DTSTAMP:19970714T170000Z
	// ORGANIZER;CN=John Doe:MAILTO:john.doe@example.com
	// DTSTART:19970714T170000Z
	// DTEND:19970715T035959Z
	// SUMMARY:Bastille Day Party
	// END:VEVENT
	// END:VCALENDAR
	// 
	// For example, when methodName is REQUEST, the MIME headers for the alternative body
	// include:
	// 
	// Content-Type: text/calendar; method=REQUEST
	// Content-Transfer-Encoding: base64
	// 
	// Calendar-aware mail clients may display this part as a meeting invitation,
	// cancellation, or published event according to the iCalendar METHOD value and the
	// contents of icalContent.
	// 
	bool AddiCalendarAlternativeBody(const char *icalContent, const char *methodName);


	// Parses the mailbox list in commaSeparatedAddresses and appends the results to the blind carbon-copy
	// (Bcc) recipient list.
	// 
	// Recipients may be separated by commas or semicolons. Each item may be a bare
	// address or a mailbox with a display name. Quoted display names may contain
	// commas.
	// 
	// Empty items are ignored. Duplicate addresses are retained.
	// 
	// Note: Before v11.0.0, BCC addresses were not added to the MIME header. Starting
	// in v11.0.0, BCC addresses are included in the MIME header. Most email servers
	// remove the Bcc header before delivering the message to regular recipients. To
	// omit BCC addresses from generated MIME, place the NoBccHeader keyword in
	// UncommonOptions[1] before adding BCC recipients.
	// 
	// 
	// References:
	// [1] #UncommonOptions
	bool AddMultipleBcc(const char *commaSeparatedAddresses);


	// Parses the mailbox list in commaSeparatedAddresses and appends the results to the carbon-copy (Cc)
	// recipient list.
	// 
	// Recipients may be separated by commas or semicolons. Each item may be a bare
	// address or a mailbox with a display name. Quoted display names may contain
	// commas.
	// 
	// Empty items are ignored. Duplicate addresses are retained.
	// 
	bool AddMultipleCC(const char *commaSeparatedAddresses);


	// Parses the mailbox list in commaSeparatedAddresses and appends the results to the direct-recipient
	// (To) list.
	// 
	// Recipients may be separated by commas or semicolons. Each item may be a bare
	// address or a mailbox with a display name. Quoted display names may contain
	// commas.
	// 
	// Empty items are ignored. Duplicate addresses are retained.
	// 
	bool AddMultipleTo(const char *commaSeparatedAddresses);


	// Adds the PFX data in bd to the list of certificate and private-key sources
	// used during decryption or signing. password contains the PFX password.
	// 
	// Call this method once for each additional PFX source.
	// 
	// The PFX data becomes a lookup source for subsequent cryptographic operations by
	// this object. Adding it does not immediately decrypt or sign the message.
	// 
	bool AddPfxSourceBd(CkBinData &bd, const char *password);


	// Adds the PFX data in pfxBytes to the internal list of certificate and private-key
	// sources used during decryption. pfxPassword contains the PFX password.
	// 
	// Call this method once for each additional PFX source. On Windows, Chilkat
	// automatically searches the system certificate stores. On macOS, Chilkat
	// automatically searches the Keychain. Therefore, explicitly adding a PFX source
	// is often unnecessary when the required certificate and private key are already
	// installed.
	// 
	// The PFX is retained as a certificate source for later operations performed by
	// this email object. Adding a source does not itself decrypt or sign the current
	// message.
	// 
	bool AddPfxSourceData(CkByteData &pfxBytes, const char *pfxPassword);


	// Adds the PFX file specified by pfxFilePath to the internal list of certificate and
	// private-key sources used during decryption. pfxPassword contains the PFX password.
	// 
	// Call this method once for each additional PFX file. On Windows, Chilkat
	// automatically searches the system certificate stores. On macOS, Chilkat
	// automatically searches the Keychain. Therefore, explicitly adding a PFX source
	// is often unnecessary when the required certificate and private key are already
	// installed.
	// 
	// The PFX file becomes a certificate source for later operations performed by this
	// email object. The file must be readable when this method is called.
	// 
	bool AddPfxSourceFile(const char *pfxFilePath, const char *pfxPassword);


	// Adds or replaces the plain-text body representation of the email.
	// 
	// If no plain-text alternative exists, one is added. If a plain-text alternative
	// already exists, it is replaced rather than duplicated. Repeated calls therefore
	// leave at most one plain-text alternative.
	// 
	// When paired with AddHtmlAlternativeBody[1], Chilkat creates a
	// multipart/alternative body so text-only clients have a suitable representation.
	// Use SetTextBody[2] when a multipart alternative is not needed.
	// 
	// 
	// References:
	// [1] #AddHtmlAlternativeBody
	// [2] #SetTextBody
	bool AddPlainTextAlternativeBody(const char *body);


	// Adds a related item using the contents of a BinData object. Returns the
	// Content-ID for the newly added related item.
	// 
	// The returned Content-ID can be used in the HTML body as cid:returnedContentId.
	// 
	bool AddRelatedBd(const char *filename, CkBinData &binData, CkString &outStr);

	// Adds a related item using the contents of a BinData object. Returns the
	// Content-ID for the newly added related item.
	// 
	// The returned Content-ID can be used in the HTML body as cid:returnedContentId.
	// 
	const char *addRelatedBd(const char *filename, CkBinData &binData);

	// Adds a related item using the binary data in binData.
	// 
	// fileNameInHtml specifies the filename, path, or URL used by the corresponding HTML
	// reference, such as an img element's src attribute.
	// 
	// This form is useful when the HTML already contains a filename, URL, or path
	// reference that Chilkat should associate with the new related MIME part.
	// 
	bool AddRelatedBd2(CkBinData &binData, const char *fileNameInHtml);


	// Adds the memory data as a related item to the email and returns the Content-ID.
	// Emails formatted in HTML can include images with this call and internally
	// reference the image through a cid hyperlink.
	// 
	// The returned Content-ID can be inserted into the HTML body as a cid: reference.
	// A related item is part of the HTML presentation and is separate from an ordinary
	// downloadable attachment.
	// 
	bool AddRelatedData(const char *fileName, CkByteData &inData, CkString &outStr);

	// Adds the memory data as a related item to the email and returns the Content-ID.
	// Emails formatted in HTML can include images with this call and internally
	// reference the image through a cid hyperlink.
	// 
	// The returned Content-ID can be inserted into the HTML body as a cid: reference.
	// A related item is part of the HTML presentation and is separate from an ordinary
	// downloadable attachment.
	// 
	const char *addRelatedData(const char *fileName, CkByteData &inData);

	// Adds a related item to the email from in-memory byte data. Related items are
	// things such as images and style sheets that are embedded within an HTML email.
	// They are not considered attachments because their sole purpose is to participate
	// in the display of the HTML. This method differs from AddRelatedData[1] in that
	// it does not use or return a Content-ID.
	// 
	// inData contains the related-item bytes. fileNameInHtml should be set to the filename used in
	// an HTML img tag's src attribute, or to the URL referenced by an HTML link tag
	// for a style sheet.
	// 
	// Use this form when the HTML already contains a filename, path, or URL that
	// should be associated with the new related MIME part.
	// 
	// 
	// References:
	// [1] #AddRelatedData
	void AddRelatedData2(CkByteData &inData, const char *fileNameInHtml);


	// Adds the contents of the local file in path as a related MIME resource and
	// returns the generated Content-ID.
	// 
	// The returned value is the bare Content-ID. It does not include angle brackets or
	// the cid: prefix. For example, if the method returns CID-123@example, the HTML
	// reference is cid:CID-123@example.
	// 
	// This method does not modify the HTML body. The application must add or update
	// the corresponding cid: reference itself.
	// 
	// The file becomes a related MIME resource rather than an ordinary attachment.
	// 
	bool AddRelatedFile(const char *path, CkString &outStrContentID);

	// Adds the contents of the local file in path as a related MIME resource and
	// returns the generated Content-ID.
	// 
	// The returned value is the bare Content-ID. It does not include angle brackets or
	// the cid: prefix. For example, if the method returns CID-123@example, the HTML
	// reference is cid:CID-123@example.
	// 
	// This method does not modify the HTML body. The application must add or update
	// the corresponding cid: reference itself.
	// 
	// The file becomes a related MIME resource rather than an ordinary attachment.
	// 
	const char *addRelatedFile(const char *path);

	// Adds the local file in filenameOnDisk as a related MIME resource addressed by
	// Content-Location rather than Content-ID.
	// 
	// filenameInHtml becomes the related item's MIME filename and Content-Location value. It
	// should match the filename, path, or URL already used by the corresponding HTML
	// reference, such as an img element's src attribute.
	// 
	// This method does not generate a Content-ID and does not modify the HTML body.
	// The HTML must already refer to filenameInHtml.
	// 
	// Note: Outlook.com may fail to display embedded images when filenameInHtml contains a path.
	// For best compatibility, use only a filename when targeting Outlook.com.
	// 
	bool AddRelatedFile2(const char *filenameOnDisk, const char *filenameInHtml);


	// Adds or replaces a MIME header field in one of the email's related items. If the
	// header field does not exist, it is added. Otherwise it is replaced.
	// 
	// Indexing: index is zero-based and must identify an existing related item. The
	// change applies to the related item's MIME sub-header.
	// 
	void AddRelatedHeader(int index, const char *fieldName, const char *fieldValue);


	// Adds a text-based related MIME resource, such as a style sheet, and returns the
	// generated Content-ID.
	// 
	// nameInHtml is the MIME filename or resource name, str contains the text content, and
	// charset specifies the charset used to encode that content.
	// 
	// The returned value is the bare Content-ID. It does not include angle brackets or
	// the cid: prefix. This method does not modify the HTML body; the application must
	// add or update the corresponding cid: reference itself.
	// 
	bool AddRelatedString(const char *nameInHtml, const char *str, const char *charset, CkString &outCid);

	// Adds a text-based related MIME resource, such as a style sheet, and returns the
	// generated Content-ID.
	// 
	// nameInHtml is the MIME filename or resource name, str contains the text content, and
	// charset specifies the charset used to encode that content.
	// 
	// The returned value is the bare Content-ID. It does not include angle brackets or
	// the cid: prefix. This method does not modify the HTML body; the application must
	// add or update the corresponding cid: reference itself.
	// 
	const char *addRelatedString(const char *nameInHtml, const char *str, const char *charset);

	// Adds a related item to the email from an in-memory string. Related items are
	// things such as images and style sheets that are embedded within an HTML email.
	// They are not considered attachments because their sole purpose is to participate
	// in the display of the HTML.
	// 
	// fileNameInHtml should be set to the filename used in an HTML img tag's src attribute, or
	// to the URL referenced by an HTML link tag for a style sheet. content contains the
	// Unicode text to add. charset specifies the charset to which content is converted
	// before the MIME part is created, such as iso-8859-1, utf-8, or Shift_JIS.
	// 
	// The resource is added as related content, not as a normal file attachment.
	// 
	void AddRelatedString2(const char *fileNameInHtml, const char *content, const char *charset);


	// Adds an attachment directly from a string in memory to the email.
	// 
	// path supplies the filename placed in MIME, not a file to be read. content is the
	// text content that becomes the attachment body.
	// 
	bool AddStringAttachment(const char *path, const char *content);


	// Adds a text attachment using the in-memory string in content.
	// 
	// path specifies the attachment filename; it is not a path to an existing local
	// file. charset specifies the charset used to encode the string before it is added to
	// the email.
	// 
	// Note: charset may begin with bom- or no-bom- to require or suppress a byte-order
	// mark for encodings such as UTF-8 or UTF-16. Examples include bom-utf-8 and
	// no-bom-utf-8.
	// 
	// This method is appropriate for text data already held in memory. For arbitrary
	// binary bytes, use a BinData - or byte-based attachment method instead.
	// 
	bool AddStringAttachment2(const char *path, const char *content, const char *charset);


	// Adds a recipient to the to list. emailAddress is required, but friendlyName may be empty. Emails
	// that have no To recipients will be sent to _LT_undisclosed-recipients_GT_.
	// 
	// To add multiple recipients, call this method once per TO recipient.
	// 
	// The recipient is added to the current in-memory message. Use NumTo[1] and the To
	// getter methods to inspect the resulting list.
	// 
	// 
	// References:
	// [1] #NumTo
	bool AddTo(const char *friendlyName, const char *emailAddress);


	// Decrypts and restores an email message that was previously encrypted using
	// AesEncrypt[1]. password must be the same password that was passed as password to
	// AesEncrypt[1].
	// 
	// This is Chilkat's password-based email-object encryption counterpart to
	// AesEncrypt[1]; it is not S/MIME certificate-based decryption.
	// 
	// 
	// References:
	// [1] #AesEncrypt
	bool AesDecrypt(const char *password);


	// Encrypts the email body, all alternative bodies, all message sub-parts, and
	// attachments using 128-bit AES CBC encryption. To decrypt the email, call
	// AesDecrypt[1] and pass the same value for password.
	// 
	// The AesEncrypt / AesDecrypt[1] methods use symmetric password-based AES
	// encryption and do not use certificates or private keys. The sending and
	// receiving applications must both use Chilkat, and the value of password must be
	// known by both applications.
	// 
	// This is separate from S/MIME encryption controlled by SendEncrypted[2].
	// 
	// 
	// References:
	// [1] #AesDecrypt
	// [2] #SendEncrypted
	bool AesEncrypt(const char *password);


	// Appends a string to the plain-text body.
	// 
	// If the message has only an HTML body, this method does not append HTML. Use
	// SetHtmlBody[1] or retrieve and reset the HTML body when HTML content must be
	// extended.
	// 
	// 
	// References:
	// [1] #SetHtmlBody
	void AppendToBody(const char *str);


	// Repairs selected MIME-formatting problems commonly found in email produced by
	// other software.
	// 
	// fixups is a comma-separated list of fixup keywords. The following keyword is
	// currently defined:
	// 
	//     * FixRelated — Relocates HTML-related items, such as embedded images, into
	//     the appropriate MIME structure so they are not incorrectly presented as ordinary
	//     attachments.
	// 
	// Fixups modify the current in-memory MIME structure. Apply them only when the
	// input message exhibits the corresponding formatting problem.
	// 
	bool ApplyFixups(const char *fixups);


	// Unpacks an HTML email's body and its related items (images, style sheets, and
	// the like) to the filesystem: each related part is written as a separate file,
	// and the HTML is rewritten so those parts load as ordinary files instead of cid:
	// references.
	// 
	// Despite the "Asp" in the name (a historical artifact), this method is not
	// limited to classic ASP. It is useful whenever an HTML email must be displayed or
	// processed outside of a mail client, including:
	// 
	//     * Web display — rendering a message in webmail or any web application (PHP,
	//     ASP.NET, Node, Java, Python, and so on), where the browser loads the saved
	//     images and style sheets from a URL.
	//     * Archiving — saving an email as a self-contained, browsable HTML folder for
	//     long-term storage or compliance, viewable later without the original mail
	//     client.
	//     * Embedded viewers — loading the unpacked HTML into a desktop application's
	//     built-in browser or WebView control, which renders local files.
	//     * Format conversion — feeding the HTML to an HTML-to-PDF (or image) renderer
	//     that needs the related files present on disk.
	// 
	// The arguments control the output: prefix is prepended to each saved filename,
	// saveDir is the filesystem directory where files are written, urlPath is the URL
	// base substituted into the rewritten HTML, and cleanFiles removes previously
	// unpacked files first when set to true.
	// 
	// For purely local viewing using relative paths rather than a web urlPath, see
	// UnpackHtml. To instead produce a single self-contained MHT file that a
	// WebBrowser control can display, see CreateTempMht.
	// 
	bool AspUnpack(const char *prefix, const char *saveDir, const char *urlPath, bool cleanFiles);


	// Unpacks an HTML email's body and its related items (images, style sheets, and
	// the like) to the filesystem and returns the rewritten HTML, in which the cid:
	// references have been replaced so the parts load as ordinary files. This performs
	// the same unpacking as AspUnpack, except the resulting HTML is returned directly
	// rather than only a success flag.
	// 
	// Despite the "Asp" in the name (a historical artifact), this method is not
	// limited to classic ASP. Unpacking an HTML email to disk is useful whenever the
	// message must be displayed or processed outside of a mail client, including:
	// 
	//     * Web display — rendering a message in webmail or any web application (PHP,
	//     ASP.NET, Node, Java, Python, and so on), where the browser loads the saved
	//     images and style sheets from a URL.
	//     * Archiving — saving an email as a self-contained, browsable HTML folder for
	//     long-term storage or compliance, viewable later without the original mail
	//     client.
	//     * Embedded viewers — loading the unpacked HTML into a desktop application's
	//     built-in browser or WebView control, which renders local files.
	//     * Format conversion — feeding the HTML to an HTML-to-PDF (or image) renderer
	//     that needs the related files present on disk.
	// 
	// The arguments control the output: prefix is prepended to each saved filename,
	// saveDir is the filesystem directory where files are written, urlPath is the URL
	// base substituted into the rewritten HTML, and cleanFiles removes previously
	// unpacked files first when set to true.
	// 
	// For purely local viewing using relative paths rather than a web urlPath, see
	// UnpackHtml.
	// 
	bool AspUnpack2(const char *prefix, const char *saveDir, const char *urlPath, bool cleanFiles, CkByteData &outHtml);


	// Attaches a copy of email to this email object. The attached email is encapsulated
	// in a message/rfc822 subpart.
	// 
	// A copy is attached, so later changes to email do not change the embedded message.
	// The new part is counted by NumAttachedMessages[1].
	// 
	// 
	// References:
	// [1] #NumAttachedMessages
	bool AttachEmail(CkEmail &email);


	// Attaches a MIME message to the email object. The attached MIME is encapsulated
	// in a message/rfc822 subpart.
	// 
	// The attached message is counted by NumAttachedMessages[1] and can later be
	// retrieved as an Email object.
	// 
	// 
	// References:
	// [1] #NumAttachedMessages
	bool AttachMessage(CkByteData &mimeBytes);


	// Takes a byte array of multibyte (non-Unicode) data and returns a Unicode
	// B-Encoded string.
	// 
	// B-encoding is commonly used in RFC 2047 encoded words for non-ASCII MIME header
	// text. charset identifies the charset represented by the input bytes.
	// 
	bool BEncodeBytes(CkByteData &inData, const char *charset, CkString &outEncodedStr);

	// Takes a byte array of multibyte (non-Unicode) data and returns a Unicode
	// B-Encoded string.
	// 
	// B-encoding is commonly used in RFC 2047 encoded words for non-ASCII MIME header
	// text. charset identifies the charset represented by the input bytes.
	// 
	const char *bEncodeBytes(CkByteData &inData, const char *charset);

	// Converts the Unicode string in str to the charset specified by charset, B-encodes
	// the resulting multibyte data, and returns the encoded string.
	// 
	// B-encoding is commonly used in RFC 2047 encoded words for non-ASCII MIME header
	// text. charset controls the byte charset used before Base64 encoding.
	// 
	bool BEncodeString(const char *str, const char *charset, CkString &outEncodedStr);

	// Converts the Unicode string in str to the charset specified by charset, B-encodes
	// the resulting multibyte data, and returns the encoded string.
	// 
	// B-encoding is commonly used in RFC 2047 encoded words for non-ASCII MIME header
	// text. charset controls the byte charset used before Base64 encoding.
	// 
	const char *bEncodeString(const char *str, const char *charset);

	// Removes the current message content, including recipients, headers, body
	// representations, attachments, related items, and embedded messages. It does not
	// delete or alter a message on a mail server.
	// 
	// This method does not reset every configurable property. It resets
	// message-oriented state such as Charset[1], SendSigned[2], SendEncrypted[3],
	// OverwriteExisting[4], and ReturnReceipt[5] to their defaults.
	// 
	// Other settings remain unchanged. In particular, replacement patterns and
	// settings such as SigningHashAlg[6], Pkcs7KeyLength[7], OaepMgfHash[8],
	// PrependHeaders[9], and UncommonOptions[10] are preserved.
	// 
	// After clearing, the email has one default empty text body. When serialized,
	// Chilkat can emit the standard headers for an empty email.
	// 
	// 
	// References:
	// [1] #Charset
	// [2] #SendSigned
	// [3] #SendEncrypted
	// [4] #OverwriteExisting
	// [5] #ReturnReceipt
	// [6] #SigningHashAlg
	// [7] #Pkcs7KeyLength
	// [8] #OaepMgfHash
	// [9] #PrependHeaders
	// [10] #UncommonOptions
	void Clear(void);


	// Clears the list of blind carbon-copy recipients.
	// 
	// This changes only the current email object and does not affect messages already
	// sent.
	// 
	void ClearBcc(void);


	// Clears the list of carbon-copy recipients.
	// 
	// This changes only the current email object and does not affect messages already
	// sent.
	// 
	void ClearCC(void);


	// Clears the internal list of explicitly specified certificates to be used for
	// this encrypted email.
	// 
	// This removes certificates added explicitly for future encryption operations. It
	// does not remove certificates from the Windows certificate stores, the macOS
	// Keychain, or any PFX source.
	// 
	void ClearEncryptCerts(void);


	// Clears the list of to recipients.
	// 
	// This changes only the current email object and does not affect messages already
	// sent.
	// 
	void ClearTo(void);


	// This method is deprecated. Applications should instead call MakeCopy[1].
	// 
	// Creates and returns an identical copy of the Email object.
	// 
	// The returned object is independent of the original, so either copy may be
	// modified without changing the other.
	// 
	// 
	// References:
	// [1] #MakeCopy
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *Clone(void);


	// Computes a global unique key for the email. The key is created by a digest-MD5
	// hash of the concatenation of the following:
	// 
	// messageID + CRLF + subject + CRLF + from + CRLF + date + CRLF + recipientAddrs
	// 
	// messageID contains the contents of the Message-IDheader field.
	// subject contains the contents of the Subjectheader field, trimmed of whitespace from both ends,
	//  where TAB characters are converted to SPACE characters, and internal whitespace is trimmed so that
	//  no more than one SPACE char in a row exists.
	// from contains the lowercase Fromheader email address.
	// date contains the contents of the Dateheader field.
	// toAddrs contains lowercase To and Cc recipient email addresses, comma-separated, with duplicates removed, and sorted
	//  in ascending order. The BCC addresses are NOT included.
	// 
	// (After calling this method, the LastErrorText property can be examined to see the string that was hashed.)
	// 
	// The 16-byte MD5 hash is returned as an encoded string. encoding determines the
	// encoding: base64, hex, url, etc. If bFold is true, then the 16-byte MD5 hash is
	// folded to 8 bytes with an XOR to produce a shorter key.
	// 
	// The result is intended as a deterministic message key for indexing or duplicate
	// detection. It is separate from the MIME Message-ID and does not modify the
	// email.
	// 
	bool ComputeGlobalKey2(const char *encoding, bool bFold, CkString &outStr);

	// Computes a global unique key for the email. The key is created by a digest-MD5
	// hash of the concatenation of the following:
	// 
	// messageID + CRLF + subject + CRLF + from + CRLF + date + CRLF + recipientAddrs
	// 
	// messageID contains the contents of the Message-IDheader field.
	// subject contains the contents of the Subjectheader field, trimmed of whitespace from both ends,
	//  where TAB characters are converted to SPACE characters, and internal whitespace is trimmed so that
	//  no more than one SPACE char in a row exists.
	// from contains the lowercase Fromheader email address.
	// date contains the contents of the Dateheader field.
	// toAddrs contains lowercase To and Cc recipient email addresses, comma-separated, with duplicates removed, and sorted
	//  in ascending order. The BCC addresses are NOT included.
	// 
	// (After calling this method, the LastErrorText property can be examined to see the string that was hashed.)
	// 
	// The 16-byte MD5 hash is returned as an encoded string. encoding determines the
	// encoding: base64, hex, url, etc. If bFold is true, then the 16-byte MD5 hash is
	// folded to 8 bytes with an XOR to produce a shorter key.
	// 
	// The result is intended as a deterministic message key for indexing or duplicate
	// detection. It is separate from the MIME Message-ID and does not modify the
	// email.
	// 
	const char *computeGlobalKey2(const char *encoding, bool bFold);

	// Converts images embedded inline within HTML to multipart/related MIME parts
	// referenced from the HTML by CID.
	// 
	// This is useful for producing conventional HTML email where image data is stored
	// in MIME parts rather than directly in the HTML. Review the resulting HTML and
	// related-item collection after conversion.
	// 
	bool ConvertInlineImages(void);


	// This method is deprecated. Applications should instead call ToDsn[1].
	// 
	// Creates a new DSN (Delivery Status Notification) email having the format as
	// specified in RFC 3464. See the example (below) for more detailed information.
	// 
	// The returned notification is a new, independent Email object. The source email
	// is not modified.
	// 
	// 
	// References:
	// [1] #ToDsn
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *CreateDsn(const char *humanReadableMessage, const char *xmlStatusFields, bool bHeaderOnly);


	// This method is deprecated. Applications should instead call ToForward[1].
	// 
	// Returns a copy of the Email object with the body and header fields changed so
	// that the newly created email can be forwarded. After calling CreateForward,
	// simply add new recipients to the created email, and call MailMan.SendEmail.
	// 
	// The returned forward is a new, independent Email object and may be edited before
	// it is sent.
	// 
	// 
	// References:
	// [1] #ToForward
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *CreateForward(void);


	// This method is deprecated. Applications should instead call ToMdn[1].
	// 
	// Creates a new MDN (Message Disposition Notification) email having the format as
	// specified in RFC 3798. See the example (below) for more detailed information.
	// 
	// The returned notification is a new, independent Email object. The source email
	// is not modified.
	// 
	// 
	// References:
	// [1] #ToMdn
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *CreateMdn(const char *humanReadableMessage, const char *xmlStatusFields, bool bHeaderOnly);


	// This method is deprecated. Applications should instead call ToReply[1].
	// 
	// Returns a copy of the Email object with the body and header fields changed so
	// that the newly created email can be sent as a reply. After calling CreateReply,
	// simply prepend additional information to the body, and call MailMan.SendEmail.
	// 
	// Note: Attachments are not included in the returned reply email. However,
	// attached messages are included. If an application does not wish to include the
	// attached messages in a reply email, they can be removed by calling
	// RemoveAttachedMessages[2] on the reply email object.
	// 
	// The returned reply is a new, independent Email object. Add or adjust recipients
	// and body text before sending it.
	// 
	// 
	// References:
	// [1] #ToReply
	// [2] #RemoveAttachedMessages
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *CreateReply(void);


	// Prepares the email for display in a web browser and saves it as a temporary MHT
	// (MIME HTML) file, returning the path to the file. If inFilename is empty, a
	// temporary filename is generated automatically.
	// 
	// To make the message viewable as a standalone web page, this method transforms
	// the email as follows:
	// 
	//     * All attachments are dropped.
	//     * If the email has both HTML and plain-text alternatives, the plain-text
	//     alternative is dropped.
	//     * If the email has only a plain-text body, that body is converted to HTML.
	// 
	// The resulting MHT file can be loaded by a WebBrowser control (or any viewer that
	// understands MHT) to render the message, inline images and all. To instead unpack
	// the HTML and its related files to loose files served by a web application, see
	// AspUnpack.
	// 
	bool CreateTempMht(const char *inFilename, CkString &outPath);

	// Prepares the email for display in a web browser and saves it as a temporary MHT
	// (MIME HTML) file, returning the path to the file. If inFilename is empty, a
	// temporary filename is generated automatically.
	// 
	// To make the message viewable as a standalone web page, this method transforms
	// the email as follows:
	// 
	//     * All attachments are dropped.
	//     * If the email has both HTML and plain-text alternatives, the plain-text
	//     alternative is dropped.
	//     * If the email has only a plain-text body, that body is converted to HTML.
	// 
	// The resulting MHT file can be loaded by a WebBrowser control (or any viewer that
	// understands MHT) to render the message, inline images and all. To instead unpack
	// the HTML and its related files to loose files served by a web application, see
	// AspUnpack.
	// 
	const char *createTempMht(const char *inFilename);

	// Removes all attachments from the email.
	// 
	// This removes ordinary file attachments from the in-memory message. Related items
	// and attached message/rfc822 emails are separate and are not described by this
	// method.
	// 
	void DropAttachments(void);


	// A related item is typically an embedded image referenced from the HTML in the
	// email via a CID hyperlink. This method removes the Nth embedded image from the
	// email. Note: If the HTML tries to reference the removed image, it will be
	// displayed as a broken image link.
	// 
	// This changes only the current in-memory Email object and does not delete or
	// alter a message on a mail server.
	// 
	void DropRelatedItem(int index);


	// A related item is typically an embedded image referenced from the HTML in the
	// email via a CID hyperlink. This method removes all the embedded images from the
	// email.
	// 
	// This removes related MIME resources from the in-memory message. It does not
	// remove ordinary attachments.
	// 
	void DropRelatedItems(void);


	// Removes the attachment at the zero-based index specified by index.
	// 
	// index is zero-based; valid values are from 0 through NumAttachments[1] - 1.
	// 
	// 
	// References:
	// [1] #NumAttachments
	bool DropSingleAttachment(int index);


	// This method is deprecated. Applications can instead call the certificate
	// object's GetIssuer method.
	// 
	// Digitally signed and/or encrypted emails are automatically unwrapped when
	// received from a POP3 or IMAP server, or when loaded from any source such as a
	// MIME string, in-memory byte data, or an.eml file. The results of signature
	// verification or decryption are stored in properties such as ReceivedSigned[1],
	// ReceivedEncrypted[2], and SignaturesValid[3]. The signing certificate can be
	// obtained via GetSigningCert[4]. If the signature contains additional
	// certificates in the authentication chain, this method provides access to them.
	// 
	// Pass the signing certificate in cert. If its issuing certificate was included in
	// the signature, that certificate is returned. Otherwise, _NULL_ is returned. If
	// cert is a self-signed root certificate, the returned object is a copy of cert.
	// 
	// To traverse the chain, first pass the certificate returned by GetSignedByCert[5]
	// in cert. On each subsequent call, pass the certificate returned by the previous
	// call. Stop when the returned certificate has the same SubjectDN and SerialNumber
	// as cert, or when this method returns _NULL_.
	// 
	// Issuer lookup is a certificate-chain operation and is separate from determining
	// whether the signer certificate should be trusted for a particular application.
	// 
	// 
	// References:
	// [1] #ReceivedSigned
	// [2] #ReceivedEncrypted
	// [3] #SignaturesValid
	// [4] #GetSigningCert
	// [5] #GetSignedByCert
	// The caller is responsible for deleting the object returned by this method.
	CkCert *FindIssuer(CkCert &cert);


	// Generates a unique filename for this email. The filename will be different each
	// time the method is called.
	// 
	// This method returns a filename only; it does not create a file. It is useful
	// when saving many messages and a collision-resistant local name is needed.
	// 
	bool GenerateFilename(CkString &outStrFilename);

	// Generates a unique filename for this email. The filename will be different each
	// time the method is called.
	// 
	// This method returns a filename only; it does not create a file. It is useful
	// when saving many messages and a collision-resistant local name is needed.
	// 
	const char *generateFilename(void);

	// Returns the Nth alternative body. The NumAlternatives[1] property tells the
	// number of alternative bodies present. Use the GetHtmlBody[2] and
	// GetPlainTextBody[3] methods to easily get the HTML or plain text alternative
	// bodies.
	// 
	// index is zero-based; valid values are from 0 through NumAlternatives[1] - 1.
	// 
	// 
	// References:
	// [1] #NumAlternatives
	// [2] #GetHtmlBody
	// [3] #GetPlainTextBody
	bool GetAlternativeBody(int index, CkString &outStrBody);

	// Returns the Nth alternative body. The NumAlternatives[1] property tells the
	// number of alternative bodies present. Use the GetHtmlBody[2] and
	// GetPlainTextBody[3] methods to easily get the HTML or plain text alternative
	// bodies.
	// 
	// index is zero-based; valid values are from 0 through NumAlternatives[1] - 1.
	// 
	// 
	// References:
	// [1] #NumAlternatives
	// [2] #GetHtmlBody
	// [3] #GetPlainTextBody
	const char *getAlternativeBody(int index);
	// Returns the Nth alternative body. The NumAlternatives[1] property tells the
	// number of alternative bodies present. Use the GetHtmlBody[2] and
	// GetPlainTextBody[3] methods to easily get the HTML or plain text alternative
	// bodies.
	// 
	// index is zero-based; valid values are from 0 through NumAlternatives[1] - 1.
	// 
	// 
	// References:
	// [1] #NumAlternatives
	// [2] #GetHtmlBody
	// [3] #GetPlainTextBody
	const char *alternativeBody(int index);


	// Returns the contents of the Nth alternative body to binData. The first alternative
	// body is at index 0. This method should only be called when the
	// NumAlternatives[1] property has a value greater than 0.
	// 
	// index is zero-based; valid values are from 0 through NumAlternatives[1] - 1. binData
	// receives the body bytes.
	// 
	// 
	// References:
	// [1] #NumAlternatives
	bool GetAlternativeBodyBd(int index, CkBinData &binData);


	// Returns the alternative body by Content-Type, such as text/plain, text/html,
	// text/xml, etc.
	// 
	// The lookup is useful when the alternative order is not known. Typical values for
	// contentType are text/plain and text/html.
	// 
	bool GetAlternativeBodyByContentType(const char *contentType, CkString &outStr);

	// Returns the alternative body by Content-Type, such as text/plain, text/html,
	// text/xml, etc.
	// 
	// The lookup is useful when the alternative order is not known. Typical values for
	// contentType are text/plain and text/html.
	// 
	const char *getAlternativeBodyByContentType(const char *contentType);
	// Returns the alternative body by Content-Type, such as text/plain, text/html,
	// text/xml, etc.
	// 
	// The lookup is useful when the alternative order is not known. Typical values for
	// contentType are text/plain and text/html.
	// 
	const char *alternativeBodyByContentType(const char *contentType);


	// Returns the content type of the Nth alternative body. The NumAlternatives[1]
	// property tells the number of alternative bodies present.
	// 
	// index is zero-based; valid values are from 0 through NumAlternatives[1] - 1.
	// 
	// 
	// References:
	// [1] #NumAlternatives
	bool GetAlternativeContentType(int index, CkString &outStrContentType);

	// Returns the content type of the Nth alternative body. The NumAlternatives[1]
	// property tells the number of alternative bodies present.
	// 
	// index is zero-based; valid values are from 0 through NumAlternatives[1] - 1.
	// 
	// 
	// References:
	// [1] #NumAlternatives
	const char *getAlternativeContentType(int index);
	// Returns the content type of the Nth alternative body. The NumAlternatives[1]
	// property tells the number of alternative bodies present.
	// 
	// index is zero-based; valid values are from 0 through NumAlternatives[1] - 1.
	// 
	// 
	// References:
	// [1] #NumAlternatives
	const char *alternativeContentType(int index);


	// Returns the value of a header field within the Nth alternative body's MIME
	// sub-part.
	// 
	// index is zero-based and refers to an alternative counted by NumAlternatives[1].
	// fieldName names the MIME header field within that alternative part.
	// 
	// 
	// References:
	// [1] #NumAlternatives
	bool GetAltHeaderField(int index, const char *fieldName, CkString &outStr);

	// Returns the value of a header field within the Nth alternative body's MIME
	// sub-part.
	// 
	// index is zero-based and refers to an alternative counted by NumAlternatives[1].
	// fieldName names the MIME header field within that alternative part.
	// 
	// 
	// References:
	// [1] #NumAlternatives
	const char *getAltHeaderField(int index, const char *fieldName);
	// Returns the value of a header field within the Nth alternative body's MIME
	// sub-part.
	// 
	// index is zero-based and refers to an alternative counted by NumAlternatives[1].
	// fieldName names the MIME header field within that alternative part.
	// 
	// 
	// References:
	// [1] #NumAlternatives
	const char *altHeaderField(int index, const char *fieldName);


	// Copies the Nth embedded message/rfc822 MIME part into email.
	// 
	// index is zero-based; valid values are from 0 through NumAttachedMessages[1] - 1.
	// email is replaced with an independent copy of the embedded message. Modifying
	// email does not change the embedded message stored in the caller.
	// 
	// 
	// References:
	// [1] #NumAttachedMessages
	bool GetAttachedEmail(int index, CkEmail &email);


	// This method is deprecated. Applications should instead call GetAttachedEmail[1].
	// 
	// Returns the embedded email from the Nth message/rfc822 MIME part. index is
	// zero-based; valid values are from 0 through NumAttachedMessages[2] - 1.
	// 
	// The returned object is an independent copy. Modifying it does not change the
	// embedded message stored in the caller. A subsequent call for the same index
	// returns a fresh copy. If index is invalid, this method returns _NULL_.
	// 
	// 
	// References:
	// [1] #GetAttachedEmail
	// [2] #NumAttachedMessages
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *GetAttachedMessage(int index);


	// Returns a header field attribute value for the Nth attached (embedded) email.
	// For example, to get the value of the name attribute in the Content-Type header
	// for the first attached message:
	// 
	// Content-Type: message/rfc822; name="md75000024149.eml"
	// 
	// then the method arguments should contain the values 0, Content-Type, name.
	// 
	// index is a zero-based attached-message index. fieldName names a MIME header field and
	// attrName names one of that field's parameters.
	// 
	bool GetAttachedMessageAttr(int index, const char *fieldName, const char *attrName, CkString &outStr);

	// Returns a header field attribute value for the Nth attached (embedded) email.
	// For example, to get the value of the name attribute in the Content-Type header
	// for the first attached message:
	// 
	// Content-Type: message/rfc822; name="md75000024149.eml"
	// 
	// then the method arguments should contain the values 0, Content-Type, name.
	// 
	// index is a zero-based attached-message index. fieldName names a MIME header field and
	// attrName names one of that field's parameters.
	// 
	const char *getAttachedMessageAttr(int index, const char *fieldName, const char *attrName);
	// Returns a header field attribute value for the Nth attached (embedded) email.
	// For example, to get the value of the name attribute in the Content-Type header
	// for the first attached message:
	// 
	// Content-Type: message/rfc822; name="md75000024149.eml"
	// 
	// then the method arguments should contain the values 0, Content-Type, name.
	// 
	// index is a zero-based attached-message index. fieldName names a MIME header field and
	// attrName names one of that field's parameters.
	// 
	const char *attachedMessageAttr(int index, const char *fieldName, const char *attrName);


	// Returns the filename of the Nth attached (embedded) email. The filename is the
	// filename attribute of the Content-Disposition header field found within the Nth
	// message/rfc822 sub-part of the calling email object.
	// 
	// Important: The attached message filename is only present if the
	// Content-Disposition header exists AND contains a filename attribute. If
	// questions arise, one could open the email in a text editor to examine the MIME
	// sub-header for the attached message (where the Content-Type = message/rfc822).
	// For example, here is a sub-header that has a filename:
	// 
	// Content-Type: message/rfc822; name="GetAttachedMessageAttr.eml"
	// Content-Transfer-Encoding: 7bit
	// Content-Disposition: attachment; filename="GetAttachedMessageAttr.eml"
	// 
	// Here is an attached message sub-header that does NOT have a filename:
	// 
	// Content-Type: message/rfc822
	// Content-Transfer-Encoding: 7bit
	// Content-Disposition: attachment
	// 
	// index is zero-based. The returned value comes from MIME metadata and should be
	// sanitized before it is used as a local filesystem name.
	// 
	bool GetAttachedMessageFilename(int index, CkString &outStr);

	// Returns the filename of the Nth attached (embedded) email. The filename is the
	// filename attribute of the Content-Disposition header field found within the Nth
	// message/rfc822 sub-part of the calling email object.
	// 
	// Important: The attached message filename is only present if the
	// Content-Disposition header exists AND contains a filename attribute. If
	// questions arise, one could open the email in a text editor to examine the MIME
	// sub-header for the attached message (where the Content-Type = message/rfc822).
	// For example, here is a sub-header that has a filename:
	// 
	// Content-Type: message/rfc822; name="GetAttachedMessageAttr.eml"
	// Content-Transfer-Encoding: 7bit
	// Content-Disposition: attachment; filename="GetAttachedMessageAttr.eml"
	// 
	// Here is an attached message sub-header that does NOT have a filename:
	// 
	// Content-Type: message/rfc822
	// Content-Transfer-Encoding: 7bit
	// Content-Disposition: attachment
	// 
	// index is zero-based. The returned value comes from MIME metadata and should be
	// sanitized before it is used as a local filesystem name.
	// 
	const char *getAttachedMessageFilename(int index);
	// Returns the filename of the Nth attached (embedded) email. The filename is the
	// filename attribute of the Content-Disposition header field found within the Nth
	// message/rfc822 sub-part of the calling email object.
	// 
	// Important: The attached message filename is only present if the
	// Content-Disposition header exists AND contains a filename attribute. If
	// questions arise, one could open the email in a text editor to examine the MIME
	// sub-header for the attached message (where the Content-Type = message/rfc822).
	// For example, here is a sub-header that has a filename:
	// 
	// Content-Type: message/rfc822; name="GetAttachedMessageAttr.eml"
	// Content-Transfer-Encoding: 7bit
	// Content-Disposition: attachment; filename="GetAttachedMessageAttr.eml"
	// 
	// Here is an attached message sub-header that does NOT have a filename:
	// 
	// Content-Type: message/rfc822
	// Content-Transfer-Encoding: 7bit
	// Content-Disposition: attachment
	// 
	// index is zero-based. The returned value comes from MIME metadata and should be
	// sanitized before it is used as a local filesystem name.
	// 
	const char *attachedMessageFilename(int index);


	// Returns a header field attribute value from the header field of the Nth
	// attachment.
	// 
	// index is a zero-based attachment index. fieldName names a header field such as
	// Content-Type, and attrName names one of that field's parameters, such as charset or
	// name.
	// 
	bool GetAttachmentAttr(int index, const char *fieldName, const char *attrName, CkString &outStr);

	// Returns a header field attribute value from the header field of the Nth
	// attachment.
	// 
	// index is a zero-based attachment index. fieldName names a header field such as
	// Content-Type, and attrName names one of that field's parameters, such as charset or
	// name.
	// 
	const char *getAttachmentAttr(int index, const char *fieldName, const char *attrName);
	// Returns a header field attribute value from the header field of the Nth
	// attachment.
	// 
	// index is a zero-based attachment index. fieldName names a header field such as
	// Content-Type, and attrName names one of that field's parameters, such as charset or
	// name.
	// 
	const char *attachmentAttr(int index, const char *fieldName, const char *attrName);


	// Copies an attachment's binary data into binData. The first attachment is at index
	// 0.
	// 
	// index is zero-based. binData receives the attachment bytes.
	// 
	bool GetAttachmentBd(int index, CkBinData &binData);


	// Returns the ContentID header field for the Nth attachment. The first attachment
	// is at index 0.
	// 
	// index is zero-based. The returned value is the identifier used by cid: references
	// when the attachment is referenced inline.
	// 
	bool GetAttachmentContentID(int index, CkString &outStrContentID);

	// Returns the ContentID header field for the Nth attachment. The first attachment
	// is at index 0.
	// 
	// index is zero-based. The returned value is the identifier used by cid: references
	// when the attachment is referenced inline.
	// 
	const char *getAttachmentContentID(int index);
	// Returns the ContentID header field for the Nth attachment. The first attachment
	// is at index 0.
	// 
	// index is zero-based. The returned value is the identifier used by cid: references
	// when the attachment is referenced inline.
	// 
	const char *attachmentContentID(int index);


	// Returns the Content-Type header field for the Nth attachment. Indexing of
	// attachments begins at 0.
	// 
	// index is zero-based. The result is the MIME media type without implying that the
	// filename extension is trustworthy.
	// 
	bool GetAttachmentContentType(int index, CkString &outStrContentType);

	// Returns the Content-Type header field for the Nth attachment. Indexing of
	// attachments begins at 0.
	// 
	// index is zero-based. The result is the MIME media type without implying that the
	// filename extension is trustworthy.
	// 
	const char *getAttachmentContentType(int index);
	// Returns the Content-Type header field for the Nth attachment. Indexing of
	// attachments begins at 0.
	// 
	// index is zero-based. The result is the MIME media type without implying that the
	// filename extension is trustworthy.
	// 
	const char *attachmentContentType(int index);


	// Retrieves an attachment's binary data for in-memory access.
	// 
	// index is zero-based. This legacy byte-array method loads data already present in
	// the email object and does not download missing attachment data from a server.
	// 
	bool GetAttachmentData(int index, CkByteData &outData);


	// Retrieves an attachment's filename.
	// 
	// index is zero-based. The returned value is the filename stored in MIME. It may
	// contain path information or characters that are not valid in a local filesystem
	// filename. When SaveAllAttachments[1] or SaveAttachedFile[2] saves the
	// attachment, Chilkat ignores MIME path components and sanitizes the final
	// filename as described by those methods.
	// 
	// 
	// References:
	// [1] #SaveAllAttachments
	// [2] #SaveAttachedFile
	bool GetAttachmentFilename(int index, CkString &outStrFilename);

	// Retrieves an attachment's filename.
	// 
	// index is zero-based. The returned value is the filename stored in MIME. It may
	// contain path information or characters that are not valid in a local filesystem
	// filename. When SaveAllAttachments[1] or SaveAttachedFile[2] saves the
	// attachment, Chilkat ignores MIME path components and sanitizes the final
	// filename as described by those methods.
	// 
	// 
	// References:
	// [1] #SaveAllAttachments
	// [2] #SaveAttachedFile
	const char *getAttachmentFilename(int index);
	// Retrieves an attachment's filename.
	// 
	// index is zero-based. The returned value is the filename stored in MIME. It may
	// contain path information or characters that are not valid in a local filesystem
	// filename. When SaveAllAttachments[1] or SaveAttachedFile[2] saves the
	// attachment, Chilkat ignores MIME path components and sanitizes the final
	// filename as described by those methods.
	// 
	// 
	// References:
	// [1] #SaveAllAttachments
	// [2] #SaveAttachedFile
	const char *attachmentFilename(int index);


	// Returns the value of a header field (by name) of an attachment.
	// 
	// attachIndex is a zero-based attachment index and fieldName is the MIME header-field name.
	// Header-field names are case-insensitive.
	// 
	bool GetAttachmentHeader(int attachIndex, const char *fieldName, CkString &outFieldValue);

	// Returns the value of a header field (by name) of an attachment.
	// 
	// attachIndex is a zero-based attachment index and fieldName is the MIME header-field name.
	// Header-field names are case-insensitive.
	// 
	const char *getAttachmentHeader(int attachIndex, const char *fieldName);
	// Returns the value of a header field (by name) of an attachment.
	// 
	// attachIndex is a zero-based attachment index and fieldName is the MIME header-field name.
	// Header-field names are case-insensitive.
	// 
	const char *attachmentHeader(int attachIndex, const char *fieldName);


	// Returns the size, in bytes, of the attachment at the zero-based index specified
	// by index. Returns -1 if index does not identify an existing attachment.
	// 
	// The returned value is the decoded attachment content size, not the number of
	// Base64 characters in the MIME representation.
	// 
	int GetAttachmentSize(int index);


	// Returns the attachment at the zero-based index specified by index as text.
	// 
	// charset specifies the charset used to interpret the attachment bytes, such as
	// utf-8. CRLF sequences in the attachment are normalized to single newline
	// characters in the returned string.
	// 
	// index is zero-based. charset controls conversion of the attachment bytes to Unicode;
	// use a binary attachment getter when the content is not text.
	// 
	bool GetAttachmentString(int index, const char *charset, CkString &outStr);

	// Returns the attachment at the zero-based index specified by index as text.
	// 
	// charset specifies the charset used to interpret the attachment bytes, such as
	// utf-8. CRLF sequences in the attachment are normalized to single newline
	// characters in the returned string.
	// 
	// index is zero-based. charset controls conversion of the attachment bytes to Unicode;
	// use a binary attachment getter when the content is not text.
	// 
	const char *getAttachmentString(int index, const char *charset);
	// Returns the attachment at the zero-based index specified by index as text.
	// 
	// charset specifies the charset used to interpret the attachment bytes, such as
	// utf-8. CRLF sequences in the attachment are normalized to single newline
	// characters in the returned string.
	// 
	// index is zero-based. charset controls conversion of the attachment bytes to Unicode;
	// use a binary attachment getter when the content is not text.
	// 
	const char *attachmentString(int index, const char *charset);


	// Retrieves an attachment's data as a String. All end-of-lines will be translated
	// to CRLF sequences.
	// 
	// index is a zero-based attachment index. charset specifies the charset used to decode
	// the attachment bytes to Unicode text.
	// 
	bool GetAttachmentStringCrLf(int index, const char *charset, CkString &outStrData);

	// Retrieves an attachment's data as a String. All end-of-lines will be translated
	// to CRLF sequences.
	// 
	// index is a zero-based attachment index. charset specifies the charset used to decode
	// the attachment bytes to Unicode text.
	// 
	const char *getAttachmentStringCrLf(int index, const char *charset);
	// Retrieves an attachment's data as a String. All end-of-lines will be translated
	// to CRLF sequences.
	// 
	// index is a zero-based attachment index. charset specifies the charset used to decode
	// the attachment bytes to Unicode text.
	// 
	const char *attachmentStringCrLf(int index, const char *charset);


	// Returns a blind carbon-copy recipient's full email address.
	// 
	// index is zero-based; valid values are from 0 through NumBcc[1] - 1. The result
	// may include both display name and address.
	// 
	// 
	// References:
	// [1] #NumBcc
	bool GetBcc(int index, CkString &outStr);

	// Returns a blind carbon-copy recipient's full email address.
	// 
	// index is zero-based; valid values are from 0 through NumBcc[1] - 1. The result
	// may include both display name and address.
	// 
	// 
	// References:
	// [1] #NumBcc
	const char *getBcc(int index);
	// Returns a blind carbon-copy recipient's full email address.
	// 
	// index is zero-based; valid values are from 0 through NumBcc[1] - 1. The result
	// may include both display name and address.
	// 
	// 
	// References:
	// [1] #NumBcc
	const char *bcc(int index);


	// Returns the Nth BCC address (only the address part, not the friendly-name part).
	// 
	// index is zero-based; valid values are from 0 through NumBcc[1] - 1.
	// 
	// 
	// References:
	// [1] #NumBcc
	bool GetBccAddr(int index, CkString &outStr);

	// Returns the Nth BCC address (only the address part, not the friendly-name part).
	// 
	// index is zero-based; valid values are from 0 through NumBcc[1] - 1.
	// 
	// 
	// References:
	// [1] #NumBcc
	const char *getBccAddr(int index);
	// Returns the Nth BCC address (only the address part, not the friendly-name part).
	// 
	// index is zero-based; valid values are from 0 through NumBcc[1] - 1.
	// 
	// 
	// References:
	// [1] #NumBcc
	const char *bccAddr(int index);


	// Returns the Nth BCC name (only the friendly-name part, not the address part).
	// 
	// index is zero-based; valid values are from 0 through NumBcc[1] - 1.
	// 
	// 
	// References:
	// [1] #NumBcc
	bool GetBccName(int index, CkString &outStr);

	// Returns the Nth BCC name (only the friendly-name part, not the address part).
	// 
	// index is zero-based; valid values are from 0 through NumBcc[1] - 1.
	// 
	// 
	// References:
	// [1] #NumBcc
	const char *getBccName(int index);
	// Returns the Nth BCC name (only the friendly-name part, not the address part).
	// 
	// index is zero-based; valid values are from 0 through NumBcc[1] - 1.
	// 
	// 
	// References:
	// [1] #NumBcc
	const char *bccName(int index);


	// Returns a carbon-copy recipient's full email address.
	// 
	// index is zero-based; valid values are from 0 through NumCC[1] - 1. The result may
	// include both display name and address.
	// 
	// 
	// References:
	// [1] #NumCC
	bool GetCC(int index, CkString &outStr);

	// Returns a carbon-copy recipient's full email address.
	// 
	// index is zero-based; valid values are from 0 through NumCC[1] - 1. The result may
	// include both display name and address.
	// 
	// 
	// References:
	// [1] #NumCC
	const char *getCC(int index);
	// Returns a carbon-copy recipient's full email address.
	// 
	// index is zero-based; valid values are from 0 through NumCC[1] - 1. The result may
	// include both display name and address.
	// 
	// 
	// References:
	// [1] #NumCC
	const char *cC(int index);


	// Returns the Nth CC address (only the address part, not the friendly-name part).
	// 
	// index is zero-based; valid values are from 0 through NumCC[1] - 1.
	// 
	// 
	// References:
	// [1] #NumCC
	bool GetCcAddr(int index, CkString &outStr);

	// Returns the Nth CC address (only the address part, not the friendly-name part).
	// 
	// index is zero-based; valid values are from 0 through NumCC[1] - 1.
	// 
	// 
	// References:
	// [1] #NumCC
	const char *getCcAddr(int index);
	// Returns the Nth CC address (only the address part, not the friendly-name part).
	// 
	// index is zero-based; valid values are from 0 through NumCC[1] - 1.
	// 
	// 
	// References:
	// [1] #NumCC
	const char *ccAddr(int index);


	// Returns the Nth CC name (only the friendly-name part, not the address part).
	// 
	// index is zero-based; valid values are from 0 through NumCC[1] - 1.
	// 
	// 
	// References:
	// [1] #NumCC
	bool GetCcName(int index, CkString &outStr);

	// Returns the Nth CC name (only the friendly-name part, not the address part).
	// 
	// index is zero-based; valid values are from 0 through NumCC[1] - 1.
	// 
	// 
	// References:
	// [1] #NumCC
	const char *getCcName(int index);
	// Returns the Nth CC name (only the friendly-name part, not the address part).
	// 
	// index is zero-based; valid values are from 0 through NumCC[1] - 1.
	// 
	// 
	// References:
	// [1] #NumCC
	const char *ccName(int index);


	// Returns a field from the message/delivery-status part of a delivery-status
	// notification.
	// 
	// Call this method only for an email identified as a multipart/report
	// delivery-status notification. fieldName specifies the field name, such as
	// Final-Recipient, Status, Action, or Reporting-MTA.
	// 
	// Reporting-MTA: dns; XYZ.abc.nl
	// 
	// Final-Recipient: RFC822; someEmailAddr@doesnotexist123.nl
	// Action: failed
	// Status: 5.4.4
	// 
	// fieldName names a field in the delivery-status section. This method reads the report
	// already present in the email object and performs no server query.
	// 
	bool GetDeliveryStatusInfo(const char *fieldName, CkString &outFieldValue);

	// Returns a field from the message/delivery-status part of a delivery-status
	// notification.
	// 
	// Call this method only for an email identified as a multipart/report
	// delivery-status notification. fieldName specifies the field name, such as
	// Final-Recipient, Status, Action, or Reporting-MTA.
	// 
	// Reporting-MTA: dns; XYZ.abc.nl
	// 
	// Final-Recipient: RFC822; someEmailAddr@doesnotexist123.nl
	// Action: failed
	// Status: 5.4.4
	// 
	// fieldName names a field in the delivery-status section. This method reads the report
	// already present in the email object and performs no server query.
	// 
	const char *getDeliveryStatusInfo(const char *fieldName);
	// Returns a field from the message/delivery-status part of a delivery-status
	// notification.
	// 
	// Call this method only for an email identified as a multipart/report
	// delivery-status notification. fieldName specifies the field name, such as
	// Final-Recipient, Status, Action, or Reporting-MTA.
	// 
	// Reporting-MTA: dns; XYZ.abc.nl
	// 
	// Final-Recipient: RFC822; someEmailAddr@doesnotexist123.nl
	// Action: failed
	// Status: 5.4.4
	// 
	// fieldName names a field in the delivery-status section. This method reads the report
	// already present in the email object and performs no server query.
	// 
	const char *deliveryStatusInfo(const char *fieldName);


	// This method is deprecated. Applications should instead call GetDigestEmail[1].
	// 
	// Returns a digest contained within a multipart/digest as an email object. The
	// first digest is at index 0. Use the NumDigests[2] property to get the number of
	// digests available.
	// 
	// index is zero-based; valid values are from 0 through NumDigests[2] - 1.
	// 
	// 
	// References:
	// [1] #GetDigestEmail
	// [2] #NumDigests
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *GetDigest(int index);


	// Returns in email the Nth digest email contained within a multipart/digest. The
	// first digest is at index 0. Use the NumDigests[1] property to get the number of
	// digests available.
	// 
	// index is zero-based; valid values are from 0 through NumDigests[1] - 1. email
	// receives a copy of the digest message.
	// 
	// 
	// References:
	// [1] #NumDigests
	bool GetDigestEmail(int index, CkEmail &email);


	// This method is deprecated. Applications should instead call GetDsnInfo[1].
	// 
	// If the email is a multipart/report, then it is a delivery status notification.
	// This method can be used to get Final-Recipient values from the
	// message/delivery-status part of the email. This method should only be called if
	// the IsMultipartReport[2] method returns true.
	// 
	// This reads recipient status information already contained in the DSN. It does
	// not query the destination mail system for current delivery state.
	// 
	// 
	// References:
	// [1] #GetDsnInfo
	// [2] #IsMultipartReport
	// The caller is responsible for deleting the object returned by this method.
	CkStringArray *GetDsnFinalRecipients(void);


	// If the IsMultipartReport[1] method indicates that the email is multipart/report,
	// use this method to obtain the delivery-status information, including the final
	// recipients, as JSON that is easy to parse.
	// 
	// The JSON is derived from report data already contained in the email; the method
	// does not contact an SMTP server for updated status.
	// 
	// 
	// References:
	// [1] #IsMultipartReport
	bool GetDsnInfo(CkJsonObject &json);


	// This method is deprecated. Applications should instead use the EmailDateStr[1]
	// property.
	// 
	// Returns the date/time found in the Date header field as a date/time object.
	// 
	// The returned value represents the parsed MIME Date header. It is not the file
	// creation time or the time the message was downloaded.
	// 
	// 
	// References:
	// [1] #EmailDateStr
	// The caller is responsible for deleting the object returned by this method.
	CkDateTime *GetDt(void);


	// Returns the certificate that was previously set by SetEncryptCert[1].
	// 
	// This returns only a certificate explicitly assigned to the email object. It does
	// not perform a new certificate-store search.
	// 
	// 
	// References:
	// [1] #SetEncryptCert
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetEncryptCert(void);


	// This method is deprecated. Applications should instead call LastDecryptCert[1]
	// to get the certificate used to decrypt this email.
	// 
	// Returns the certificate associated with a received encrypted email.
	// 
	// Call this after an encrypted message has been parsed and decrypted. The returned
	// certificate identifies the decryption recipient information found in the
	// message.
	// 
	// 
	// References:
	// [1] #LastDecryptCert
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetEncryptedByCert(void);


	// Reads a file and returns the contents. This is here purely for convenience.
	// 
	// This convenience method is unrelated to the structure of the current email and
	// does not modify the email object.
	// 
	bool GetFileContent(const char *path, CkByteData &outData);


	// Returns the value of a header field.
	// 
	// Header-field names are case-insensitive. If a field occurs more than once, use
	// indexed header enumeration when each occurrence must be inspected separately.
	// 
	bool GetHeaderField(const char *fieldName, CkString &outStrFieldData);

	// Returns the value of a header field.
	// 
	// Header-field names are case-insensitive. If a field occurs more than once, use
	// indexed header enumeration when each occurrence must be inspected separately.
	// 
	const char *getHeaderField(const char *fieldName);
	// Returns the value of a header field.
	// 
	// Header-field names are case-insensitive. If a field occurs more than once, use
	// indexed header enumeration when each occurrence must be inspected separately.
	// 
	const char *headerField(const char *fieldName);


	// Returns the name of the Nth header field. The NumHeaderFields[1] property gives
	// the number of header fields. Use GetHeaderField[2] to retrieve a header field
	// value by name.
	// 
	// The first header field is at index 0. (All Chilkat indexing is 0-based.)
	// 
	// index is zero-based; valid values are from 0 through NumHeaderFields[1] - 1.
	// Repeated fields appear as separate entries.
	// 
	// 
	// References:
	// [1] #NumHeaderFields
	// [2] #GetHeaderField
	bool GetHeaderFieldName(int index, CkString &outStrFieldName);

	// Returns the name of the Nth header field. The NumHeaderFields[1] property gives
	// the number of header fields. Use GetHeaderField[2] to retrieve a header field
	// value by name.
	// 
	// The first header field is at index 0. (All Chilkat indexing is 0-based.)
	// 
	// index is zero-based; valid values are from 0 through NumHeaderFields[1] - 1.
	// Repeated fields appear as separate entries.
	// 
	// 
	// References:
	// [1] #NumHeaderFields
	// [2] #GetHeaderField
	const char *getHeaderFieldName(int index);
	// Returns the name of the Nth header field. The NumHeaderFields[1] property gives
	// the number of header fields. Use GetHeaderField[2] to retrieve a header field
	// value by name.
	// 
	// The first header field is at index 0. (All Chilkat indexing is 0-based.)
	// 
	// index is zero-based; valid values are from 0 through NumHeaderFields[1] - 1.
	// Repeated fields appear as separate entries.
	// 
	// 
	// References:
	// [1] #NumHeaderFields
	// [2] #GetHeaderField
	const char *headerFieldName(int index);


	// Returns the value of the Nth header field. (Indexing begins at 0) The number of
	// header fields can be obtained from the NumHeaderFields[1] property.
	// 
	// The first header field is at index 0, the last header field is at index
	// NumHeaderFields[1] -1. (All Chilkat indexing is 0-based.)
	// 
	// index is zero-based; valid values are from 0 through NumHeaderFields[1] - 1. Use
	// the same index with GetHeaderFieldName[2] to identify the field.
	// 
	// 
	// References:
	// [1] #NumHeaderFields
	// [2] #GetHeaderFieldName
	bool GetHeaderFieldValue(int index, CkString &outStrFieldValue);

	// Returns the value of the Nth header field. (Indexing begins at 0) The number of
	// header fields can be obtained from the NumHeaderFields[1] property.
	// 
	// The first header field is at index 0, the last header field is at index
	// NumHeaderFields[1] -1. (All Chilkat indexing is 0-based.)
	// 
	// index is zero-based; valid values are from 0 through NumHeaderFields[1] - 1. Use
	// the same index with GetHeaderFieldName[2] to identify the field.
	// 
	// 
	// References:
	// [1] #NumHeaderFields
	// [2] #GetHeaderFieldName
	const char *getHeaderFieldValue(int index);
	// Returns the value of the Nth header field. (Indexing begins at 0) The number of
	// header fields can be obtained from the NumHeaderFields[1] property.
	// 
	// The first header field is at index 0, the last header field is at index
	// NumHeaderFields[1] -1. (All Chilkat indexing is 0-based.)
	// 
	// index is zero-based; valid values are from 0 through NumHeaderFields[1] - 1. Use
	// the same index with GetHeaderFieldName[2] to identify the field.
	// 
	// 
	// References:
	// [1] #NumHeaderFields
	// [2] #GetHeaderFieldName
	const char *headerFieldValue(int index);


	// Returns the body having the text/html content type.
	// 
	// This reads the HTML representation already present in the email object. It does
	// not automatically inline related images; use GetHtmlBodySb[1] for that option.
	// 
	// 
	// References:
	// [1] #GetHtmlBodySb
	bool GetHtmlBody(CkString &outStrBody);

	// Returns the body having the text/html content type.
	// 
	// This reads the HTML representation already present in the email object. It does
	// not automatically inline related images; use GetHtmlBodySb[1] for that option.
	// 
	// 
	// References:
	// [1] #GetHtmlBodySb
	const char *getHtmlBody(void);
	// Returns the body having the text/html content type.
	// 
	// This reads the HTML representation already present in the email object. It does
	// not automatically inline related images; use GetHtmlBodySb[1] for that option.
	// 
	// 
	// References:
	// [1] #GetHtmlBodySb
	const char *htmlBody(void);


	// Returns the body having the text/html content type. If inlineImageData is true, the
	// related images found in the MIME are inlined as base64 directly within the
	// returned HTML. The HTML is returned in sb.
	// 
	// Inlining related images can substantially increase the size of the returned HTML
	// because the image bytes are embedded as data URLs.
	// 
	bool GetHtmlBodySb(bool inlineImageData, CkStringBuilder &sb);


	// When email headers are downloaded from an IMAP server (using Chilkat IMAP), a
	// ckx-imap-uid header field is added. The content of this header is the UID or
	// sequence number of the email on the IMAP server. In addition, a ckx-imap-isUid
	// header field is added, and this will have the value YES or NO. If the value is
	// YES, then ckx-imap-uid contains a UID, if the value is NO, then ckx-imap-uid
	// contains the sequence number. This method returns the UID if ckx-imap-uid exists
	// and contains a UID, otherwise it returns 0xFFFFFFFF.
	// 
	// An application that wishes to download the full email would use this UID and
	// then call the Chilkat IMAP object's FetchSingle or FetchSingleAsMime methods.
	// 
	// Note: If an email was downloaded from the IMAP server in a way such that the UID
	// is not received, then there will be no ckx-imap-uid header field and this method
	// would return 0xFFFFFFFF. For example, if emails are downloaded by sequence
	// numbers via the Imap.FetchSequence method, then UIDs are not used and therefore
	// the email object will not contain this information.
	// 
	// This reads Chilkat metadata stored in the email object; it does not contact the
	// IMAP server. The accompanying Boolean output distinguishes a stable UID from a
	// mailbox sequence number.
	// 
	unsigned long GetImapUid(void);


	// This method is deprecated. Applications should instead call LinkedDomains[1].
	// 
	// Parses an HTML email and returns the set of domain names that occur in
	// hyperlinks within the HTML body.
	// 
	// This method parses hyperlinks only. It does not perform DNS lookups or connect
	// to any of the returned domains.
	// 
	// 
	// References:
	// [1] #LinkedDomains
	// The caller is responsible for deleting the object returned by this method.
	CkStringArray *GetLinkedDomains(void);


	// Returns the email as RFC822/MIME text containing the headers, body
	// representations, related items, and attachments.
	// 
	// The result is suitable for saving as an.eml file or passing to an API that
	// accepts MIME text.
	// 
	// Serialization may normalize header whitespace, Content-Type parameters, transfer
	// encodings, and other MIME formatting. Therefore, MIME that is loaded and then
	// reserialized is not guaranteed to be byte-for-byte identical to the original
	// input. Repeated calls without modifying the email return the same current
	// serialized form.
	// 
	// Headers that were explicitly removed, such as Date, Message-ID, or MIME-Version,
	// are not necessarily regenerated by this method.
	// 
	bool GetMime(CkString &outStrMime);

	// Returns the email as RFC822/MIME text containing the headers, body
	// representations, related items, and attachments.
	// 
	// The result is suitable for saving as an.eml file or passing to an API that
	// accepts MIME text.
	// 
	// Serialization may normalize header whitespace, Content-Type parameters, transfer
	// encodings, and other MIME formatting. Therefore, MIME that is loaded and then
	// reserialized is not guaranteed to be byte-for-byte identical to the original
	// input. Repeated calls without modifying the email return the same current
	// serialized form.
	// 
	// Headers that were explicitly removed, such as Date, Message-ID, or MIME-Version,
	// are not necessarily regenerated by this method.
	// 
	const char *getMime(void);
	// Returns the email as RFC822/MIME text containing the headers, body
	// representations, related items, and attachments.
	// 
	// The result is suitable for saving as an.eml file or passing to an API that
	// accepts MIME text.
	// 
	// Serialization may normalize header whitespace, Content-Type parameters, transfer
	// encodings, and other MIME formatting. Therefore, MIME that is loaded and then
	// reserialized is not guaranteed to be byte-for-byte identical to the original
	// input. Repeated calls without modifying the email return the same current
	// serialized form.
	// 
	// Headers that were explicitly removed, such as Date, Message-ID, or MIME-Version,
	// are not necessarily regenerated by this method.
	// 
	const char *mime(void);


	// Serializes the complete RFC822/MIME message and appends the bytes to bindat.
	// 
	// The output includes headers, body representations, related items, and
	// attachments. Clear bindat first when replacement rather than append behavior is
	// desired.
	// 
	// Serialization may normalize header whitespace, Content-Type parameters, transfer
	// encodings, and other MIME formatting. Loading MIME and then calling this method
	// is therefore not guaranteed to reproduce the original input byte-for-byte.
	// 
	bool GetMimeBd(CkBinData &bindat);


	// Returns the complete RFC822/MIME message as bytes.
	// 
	// Use this form when exact output bytes are required or when the programming
	// language represents binary data separately from strings.
	// 
	// Serialization may normalize header whitespace, Content-Type parameters, transfer
	// encodings, and other MIME formatting. Loading MIME and then calling this method
	// is therefore not guaranteed to reproduce the original input byte-for-byte.
	// 
	bool GetMimeBinary(CkByteData &outBytes);


	// Returns the email as MIME text containing the email header, body (or bodies),
	// related items (if any), and all attachments. The MIME is appended to the
	// existing contents (if any) of sb.
	// 
	// Clear sb first when replacement rather than append behavior is desired.
	// 
	bool GetMimeSb(CkStringBuilder &sb);


	// Returns the binary content of the Nth non-multipart MIME part matching the
	// Content-Type pattern in contentType. index is a zero-based index among the matching
	// parts.
	// 
	// contentType may be an exact Content-Type, such as application/pdf, or a wildcard
	// pattern, such as application/* or *. Use GetNumPartsOfType[1] to determine the
	// number of matching parts.
	// 
	// When inlineOnly is true, only parts having an inline Content-Disposition are
	// considered. When excludeAttachments is true, parts having an attachment Content-Disposition
	// are excluded.
	// 
	// Note: A header-only email, or an email downloaded from IMAP without attachments,
	// does not contain every MIME part from the complete message.
	// 
	// Use GetNumPartsOfType[1] with the same filters to determine the valid zero-based
	// index range before retrieving a part.
	// 
	// 
	// References:
	// [1] #GetNumPartsOfType
	bool GetNthBinaryPartOfType(int index, const char *contentType, bool inlineOnly, bool excludeAttachments, CkByteData &outBytes);


	// Loads bd with the binary bytes of the Nth MIME sub-part matching contentType, which
	// can be an exact Content-Type such as application/pdf, or a wildcarded
	// Content-Type such as application/*, or */*. Indexing begins at 0. Call
	// GetNumPartsOfType[1] to find out how many MIME sub-parts exist for any given
	// content type. If inlineOnly is true, then only MIME sub-parts having a
	// Content-Disposition of inline are included. If excludeAttachments is true, then MIME
	// sub-parts having a Content-Disposition of attachment are excluded.
	// 
	// Note: If the email was downloaded as header-only, it will not contain all the
	// parts of the full email. Also, if downloaded from IMAP excluding attachments,
	// those parts that are the attachments will (of course) be missing.
	// 
	// Note: Beginning in v9.5.0.95, contentType can be wildcarded. For example, it is
	// possible to specify text/*, or simply * to match any Content-Type.
	// 
	// Note: Only non-multipart MIME parts are matched.
	// 
	// Use GetNumPartsOfType[1] with the same filters to determine the valid zero-based
	// index range before loading bd.
	// 
	// 
	// References:
	// [1] #GetNumPartsOfType
	bool GetNthBinaryPartOfTypeBd(int index, const char *contentType, bool inlineOnly, bool excludeAttachments, CkBinData &bd);


	// Returns the Content-Type of the Nth non-multipart MIME part matching the pattern
	// in contentType. index is a zero-based index among the matching parts.
	// 
	// contentType may be an exact Content-Type, such as text/plain, or a wildcard pattern,
	// such as text/* or *. When inlineOnly is true, only parts having an inline
	// Content-Disposition are considered. When excludeAttachments is true, parts having an
	// attachment Content-Disposition are excluded.
	// 
	// Use GetNumPartsOfType[1] with the same filters to determine the valid zero-based
	// index range.
	// 
	// 
	// References:
	// [1] #GetNumPartsOfType
	bool GetNthContentType(int index, const char *contentType, bool inlineOnly, bool excludeAttachments, CkString &outStr);

	// Returns the Content-Type of the Nth non-multipart MIME part matching the pattern
	// in contentType. index is a zero-based index among the matching parts.
	// 
	// contentType may be an exact Content-Type, such as text/plain, or a wildcard pattern,
	// such as text/* or *. When inlineOnly is true, only parts having an inline
	// Content-Disposition are considered. When excludeAttachments is true, parts having an
	// attachment Content-Disposition are excluded.
	// 
	// Use GetNumPartsOfType[1] with the same filters to determine the valid zero-based
	// index range.
	// 
	// 
	// References:
	// [1] #GetNumPartsOfType
	const char *getNthContentType(int index, const char *contentType, bool inlineOnly, bool excludeAttachments);
	// Returns the Content-Type of the Nth non-multipart MIME part matching the pattern
	// in contentType. index is a zero-based index among the matching parts.
	// 
	// contentType may be an exact Content-Type, such as text/plain, or a wildcard pattern,
	// such as text/* or *. When inlineOnly is true, only parts having an inline
	// Content-Disposition are considered. When excludeAttachments is true, parts having an
	// attachment Content-Disposition are excluded.
	// 
	// Use GetNumPartsOfType[1] with the same filters to determine the valid zero-based
	// index range.
	// 
	// 
	// References:
	// [1] #GetNumPartsOfType
	const char *nthContentType(int index, const char *contentType, bool inlineOnly, bool excludeAttachments);


	// Returns the text content of the Nth non-multipart MIME part matching the
	// Content-Type pattern in contentType. index is a zero-based index among the matching
	// parts.
	// 
	// contentType may be an exact Content-Type, such as text/plain, or a wildcard pattern,
	// such as text/* or *. Use GetNumPartsOfType[1] to determine the number of
	// matching parts.
	// 
	// When inlineOnly is true, only parts having an inline Content-Disposition are
	// considered. When excludeAttachments is true, parts having an attachment Content-Disposition
	// are excluded.
	// 
	// Note: A header-only email, or an email downloaded from IMAP without attachments,
	// does not contain every MIME part from the complete message.
	// 
	// Use GetNumPartsOfType[1] with the same filters to determine the valid zero-based
	// index range before retrieving a part.
	// 
	// 
	// References:
	// [1] #GetNumPartsOfType
	bool GetNthTextPartOfType(int index, const char *contentType, bool inlineOnly, bool excludeAttachments, CkString &outStr);

	// Returns the text content of the Nth non-multipart MIME part matching the
	// Content-Type pattern in contentType. index is a zero-based index among the matching
	// parts.
	// 
	// contentType may be an exact Content-Type, such as text/plain, or a wildcard pattern,
	// such as text/* or *. Use GetNumPartsOfType[1] to determine the number of
	// matching parts.
	// 
	// When inlineOnly is true, only parts having an inline Content-Disposition are
	// considered. When excludeAttachments is true, parts having an attachment Content-Disposition
	// are excluded.
	// 
	// Note: A header-only email, or an email downloaded from IMAP without attachments,
	// does not contain every MIME part from the complete message.
	// 
	// Use GetNumPartsOfType[1] with the same filters to determine the valid zero-based
	// index range before retrieving a part.
	// 
	// 
	// References:
	// [1] #GetNumPartsOfType
	const char *getNthTextPartOfType(int index, const char *contentType, bool inlineOnly, bool excludeAttachments);
	// Returns the text content of the Nth non-multipart MIME part matching the
	// Content-Type pattern in contentType. index is a zero-based index among the matching
	// parts.
	// 
	// contentType may be an exact Content-Type, such as text/plain, or a wildcard pattern,
	// such as text/* or *. Use GetNumPartsOfType[1] to determine the number of
	// matching parts.
	// 
	// When inlineOnly is true, only parts having an inline Content-Disposition are
	// considered. When excludeAttachments is true, parts having an attachment Content-Disposition
	// are excluded.
	// 
	// Note: A header-only email, or an email downloaded from IMAP without attachments,
	// does not contain every MIME part from the complete message.
	// 
	// Use GetNumPartsOfType[1] with the same filters to determine the valid zero-based
	// index range before retrieving a part.
	// 
	// 
	// References:
	// [1] #GetNumPartsOfType
	const char *nthTextPartOfType(int index, const char *contentType, bool inlineOnly, bool excludeAttachments);


	// Returns the number of non-multipart MIME parts matching the Content-Type pattern
	// in contentType.
	// 
	// contentType may be an exact Content-Type, such as text/plain, or a wildcard pattern,
	// such as text/* or *. When inlineOnly is true, only parts having an inline
	// Content-Disposition are counted. When excludeAttachments is true, parts having an attachment
	// Content-Disposition are excluded.
	// 
	// Note: A header-only email, or an email downloaded from IMAP without attachments,
	// does not contain every MIME part from the complete message.
	// 
	// The count is based on the MIME parts currently loaded in the email object. No
	// attachment or body data is fetched from a server by this method.
	// 
	int GetNumPartsOfType(const char *contentType, bool inlineOnly, bool excludeAttachments);


	// Returns the email body having the text/plain content type.
	// 
	// This reads the plain-text representation already present in the email object. It
	// does not convert the HTML body to plain text.
	// 
	bool GetPlainTextBody(CkString &outStrBody);

	// Returns the email body having the text/plain content type.
	// 
	// This reads the plain-text representation already present in the email object. It
	// does not convert the HTML body to plain text.
	// 
	const char *getPlainTextBody(void);
	// Returns the email body having the text/plain content type.
	// 
	// This reads the plain-text representation already present in the email object. It
	// does not convert the HTML body to plain text.
	// 
	const char *plainTextBody(void);


	// Returns a header field attribute value from the header field of the Nth related
	// item.
	// 
	// index is a zero-based related-item index. fieldName names a MIME header field and attrName
	// names one of that field's parameters.
	// 
	bool GetRelatedAttr(int index, const char *fieldName, const char *attrName, CkString &outStr);

	// Returns a header field attribute value from the header field of the Nth related
	// item.
	// 
	// index is a zero-based related-item index. fieldName names a MIME header field and attrName
	// names one of that field's parameters.
	// 
	const char *getRelatedAttr(int index, const char *fieldName, const char *attrName);
	// Returns a header field attribute value from the header field of the Nth related
	// item.
	// 
	// index is a zero-based related-item index. fieldName names a MIME header field and attrName
	// names one of that field's parameters.
	// 
	const char *relatedAttr(int index, const char *fieldName, const char *attrName);


	// Returns the content ID of a related item contained with the email. Related items
	// are typically images and style-sheets embedded within HTML emails.
	// 
	// index is zero-based; valid values are from 0 through NumRelatedItems[1] - 1. The
	// value is normally referenced from HTML as a cid: URL.
	// 
	// 
	// References:
	// [1] #NumRelatedItems
	bool GetRelatedContentID(int index, CkString &outStrContentID);

	// Returns the content ID of a related item contained with the email. Related items
	// are typically images and style-sheets embedded within HTML emails.
	// 
	// index is zero-based; valid values are from 0 through NumRelatedItems[1] - 1. The
	// value is normally referenced from HTML as a cid: URL.
	// 
	// 
	// References:
	// [1] #NumRelatedItems
	const char *getRelatedContentID(int index);
	// Returns the content ID of a related item contained with the email. Related items
	// are typically images and style-sheets embedded within HTML emails.
	// 
	// index is zero-based; valid values are from 0 through NumRelatedItems[1] - 1. The
	// value is normally referenced from HTML as a cid: URL.
	// 
	// 
	// References:
	// [1] #NumRelatedItems
	const char *relatedContentID(int index);


	// Returns the Content-Location of a related item contained with the email. Related
	// items are typically images and style-sheets embedded within HTML emails.
	// 
	// index is zero-based. Content-Location is an alternative to Content-ID for
	// identifying a resource referenced by the HTML body.
	// 
	bool GetRelatedContentLocation(int index, CkString &outStr);

	// Returns the Content-Location of a related item contained with the email. Related
	// items are typically images and style-sheets embedded within HTML emails.
	// 
	// index is zero-based. Content-Location is an alternative to Content-ID for
	// identifying a resource referenced by the HTML body.
	// 
	const char *getRelatedContentLocation(int index);
	// Returns the Content-Location of a related item contained with the email. Related
	// items are typically images and style-sheets embedded within HTML emails.
	// 
	// index is zero-based. Content-Location is an alternative to Content-ID for
	// identifying a resource referenced by the HTML body.
	// 
	const char *relatedContentLocation(int index);


	// Returns the Content-Type of the Nth related content item in an email message.
	// 
	// index is zero-based; valid values are from 0 through NumRelatedItems[1] - 1.
	// 
	// 
	// References:
	// [1] #NumRelatedItems
	bool GetRelatedContentType(int index, CkString &outStrContentType);

	// Returns the Content-Type of the Nth related content item in an email message.
	// 
	// index is zero-based; valid values are from 0 through NumRelatedItems[1] - 1.
	// 
	// 
	// References:
	// [1] #NumRelatedItems
	const char *getRelatedContentType(int index);
	// Returns the Content-Type of the Nth related content item in an email message.
	// 
	// index is zero-based; valid values are from 0 through NumRelatedItems[1] - 1.
	// 
	// 
	// References:
	// [1] #NumRelatedItems
	const char *relatedContentType(int index);


	// Returns the content of a related item contained with the email. Related items
	// are typically images and style-sheets embedded within HTML emails.
	// 
	// index is zero-based. This legacy byte-array method returns data already loaded
	// into the email object.
	// 
	bool GetRelatedData(int index, CkByteData &outBuffer);


	// Returns the filename of a related item contained with the email. Related items
	// are typically images and style-sheets embedded within HTML emails.
	// 
	// index is zero-based. The returned MIME filename should be sanitized before it is
	// used as a local filesystem path.
	// 
	bool GetRelatedFilename(int index, CkString &outStrFilename);

	// Returns the filename of a related item contained with the email. Related items
	// are typically images and style-sheets embedded within HTML emails.
	// 
	// index is zero-based. The returned MIME filename should be sanitized before it is
	// used as a local filesystem path.
	// 
	const char *getRelatedFilename(int index);
	// Returns the filename of a related item contained with the email. Related items
	// are typically images and style-sheets embedded within HTML emails.
	// 
	// index is zero-based. The returned MIME filename should be sanitized before it is
	// used as a local filesystem path.
	// 
	const char *relatedFilename(int index);


	// Returns the value of a header field (by name) of a related item.
	// 
	// index is a zero-based related-item index. MIME header-field names are
	// case-insensitive.
	// 
	bool GetRelatedHeader(int index, const char *fieldName, CkString &outStr);

	// Returns the value of a header field (by name) of a related item.
	// 
	// index is a zero-based related-item index. MIME header-field names are
	// case-insensitive.
	// 
	const char *getRelatedHeader(int index, const char *fieldName);
	// Returns the value of a header field (by name) of a related item.
	// 
	// index is a zero-based related-item index. MIME header-field names are
	// case-insensitive.
	// 
	const char *relatedHeader(int index, const char *fieldName);


	// Returns the text with CR line-endings of a related item contained with the
	// email. Related items are typically images and style-sheets embedded within HTML
	// emails.
	// 
	// index is zero-based and charset specifies the charset used to decode the
	// related-item bytes to Unicode text.
	// 
	bool GetRelatedString(int index, const char *charset, CkString &outStrData);

	// Returns the text with CR line-endings of a related item contained with the
	// email. Related items are typically images and style-sheets embedded within HTML
	// emails.
	// 
	// index is zero-based and charset specifies the charset used to decode the
	// related-item bytes to Unicode text.
	// 
	const char *getRelatedString(int index, const char *charset);
	// Returns the text with CR line-endings of a related item contained with the
	// email. Related items are typically images and style-sheets embedded within HTML
	// emails.
	// 
	// index is zero-based and charset specifies the charset used to decode the
	// related-item bytes to Unicode text.
	// 
	const char *relatedString(int index, const char *charset);


	// Returns the text with CRLF line-endings of a related item contained with the
	// email. Related items are typically images and style-sheets embedded within HTML
	// emails.
	// 
	// index is zero-based and charset specifies the charset used to decode the
	// related-item bytes to Unicode text.
	// 
	bool GetRelatedStringCrLf(int index, const char *charset, CkString &outStr);

	// Returns the text with CRLF line-endings of a related item contained with the
	// email. Related items are typically images and style-sheets embedded within HTML
	// emails.
	// 
	// index is zero-based and charset specifies the charset used to decode the
	// related-item bytes to Unicode text.
	// 
	const char *getRelatedStringCrLf(int index, const char *charset);
	// Returns the text with CRLF line-endings of a related item contained with the
	// email. Related items are typically images and style-sheets embedded within HTML
	// emails.
	// 
	// index is zero-based and charset specifies the charset used to decode the
	// related-item bytes to Unicode text.
	// 
	const char *relatedStringCrLf(int index, const char *charset);


	// Returns a replacement pattern previously defined for mail-merge operations.
	// 
	// index is zero-based; valid values are from 0 through NumReplacePatterns[1] - 1.
	// 
	// 
	// References:
	// [1] #NumReplacePatterns
	bool GetReplacePattern(int index, CkString &outStrPattern);

	// Returns a replacement pattern previously defined for mail-merge operations.
	// 
	// index is zero-based; valid values are from 0 through NumReplacePatterns[1] - 1.
	// 
	// 
	// References:
	// [1] #NumReplacePatterns
	const char *getReplacePattern(int index);
	// Returns a replacement pattern previously defined for mail-merge operations.
	// 
	// index is zero-based; valid values are from 0 through NumReplacePatterns[1] - 1.
	// 
	// 
	// References:
	// [1] #NumReplacePatterns
	const char *replacePattern(int index);


	// Returns a replacement string for a previously defined pattern/replacement string
	// pair. (This is a mail-merge feature.)
	// 
	// Note: This method was found to not be working correctly and is fixed in Chilkat
	// v9.5.0.91.
	// 
	// index is a zero-based pattern index. Use NumReplacePatterns[1] to determine the
	// valid range.
	// 
	// 
	// References:
	// [1] #NumReplacePatterns
	bool GetReplaceString(int index, CkString &outStr);

	// Returns a replacement string for a previously defined pattern/replacement string
	// pair. (This is a mail-merge feature.)
	// 
	// Note: This method was found to not be working correctly and is fixed in Chilkat
	// v9.5.0.91.
	// 
	// index is a zero-based pattern index. Use NumReplacePatterns[1] to determine the
	// valid range.
	// 
	// 
	// References:
	// [1] #NumReplacePatterns
	const char *getReplaceString(int index);
	// Returns a replacement string for a previously defined pattern/replacement string
	// pair. (This is a mail-merge feature.)
	// 
	// Note: This method was found to not be working correctly and is fixed in Chilkat
	// v9.5.0.91.
	// 
	// index is a zero-based pattern index. Use NumReplacePatterns[1] to determine the
	// valid range.
	// 
	// 
	// References:
	// [1] #NumReplacePatterns
	const char *replaceString(int index);


	// Returns a replacement string for a previously defined pattern/replacement string
	// pair. (This is a mail-merge feature.)
	// 
	// pattern is the previously registered pattern text, not a numeric index.
	// 
	bool GetReplaceString2(const char *pattern, CkString &outStr);

	// Returns a replacement string for a previously defined pattern/replacement string
	// pair. (This is a mail-merge feature.)
	// 
	// pattern is the previously registered pattern text, not a numeric index.
	// 
	const char *getReplaceString2(const char *pattern);
	// Returns a replacement string for a previously defined pattern/replacement string
	// pair. (This is a mail-merge feature.)
	// 
	// pattern is the previously registered pattern text, not a numeric index.
	// 
	const char *replaceString2(const char *pattern);


	// (See the NumReports[1] property.) Returns the body content of the Nth report
	// within a multipart/report email.
	// 
	// Multipart/report is a message type that contains data formatted for a mail
	// server to read. It is split between a text/plain (or some other content/type
	// easily readable) and a message/delivery-status, which contains the data
	// formatted for the mail server to read.
	// 
	// It is defined in RFC 3462
	// 
	// index is zero-based; valid values are from 0 through NumReports[1] - 1.
	// 
	// 
	// References:
	// [1] #NumReports
	bool GetReport(int index, CkString &outStr);

	// (See the NumReports[1] property.) Returns the body content of the Nth report
	// within a multipart/report email.
	// 
	// Multipart/report is a message type that contains data formatted for a mail
	// server to read. It is split between a text/plain (or some other content/type
	// easily readable) and a message/delivery-status, which contains the data
	// formatted for the mail server to read.
	// 
	// It is defined in RFC 3462
	// 
	// index is zero-based; valid values are from 0 through NumReports[1] - 1.
	// 
	// 
	// References:
	// [1] #NumReports
	const char *getReport(int index);
	// (See the NumReports[1] property.) Returns the body content of the Nth report
	// within a multipart/report email.
	// 
	// Multipart/report is a message type that contains data formatted for a mail
	// server to read. It is split between a text/plain (or some other content/type
	// easily readable) and a message/delivery-status, which contains the data
	// formatted for the mail server to read.
	// 
	// It is defined in RFC 3462
	// 
	// index is zero-based; valid values are from 0 through NumReports[1] - 1.
	// 
	// 
	// References:
	// [1] #NumReports
	const char *report(int index);


	// This method is deprecated. Applications should instead call LastSignerCert[1] to
	// get the certificate used to sign this email.
	// 
	// Return the certificate used to digitally sign this email.
	// 
	// The returned certificate describes the signer of the most recently parsed or
	// verified signed message; it is not the certificate configured for a future
	// signing operation.
	// 
	// 
	// References:
	// [1] #LastSignerCert
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetSignedByCert(void);


	// This method is deprecated. Applications can get the cert chain by calling
	// LastSignerCert[1] to get the certificate object, and then get the certificate
	// chain from the certificate object.
	// 
	// Return the full certificate chain of the certificate used to digitally sign this
	// email.
	// 
	// The chain describes the signer of a received signed email. It is different from
	// the certificate chain that might be configured for a future signing operation.
	// 
	// 
	// References:
	// [1] #LastSignerCert
	// The caller is responsible for deleting the object returned by this method.
	CkCertChain *GetSignedByCertChain(void);


	// Return the certificate that will be used to digitally sign this email. This is
	// the cerficate that was previously set by calling the SetSigningCert[1] method.
	// 
	// This returns the certificate configured for a future signing operation. It does
	// not return the signer of an already received message.
	// 
	// 
	// References:
	// [1] #SetSigningCert
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetSigningCert(void);


	// Returns a to recipient's full email address.
	// 
	// index is zero-based; valid values are from 0 through NumTo[1] - 1. The result may
	// include both display name and address.
	// 
	// 
	// References:
	// [1] #NumTo
	bool GetTo(int index, CkString &outStr);

	// Returns a to recipient's full email address.
	// 
	// index is zero-based; valid values are from 0 through NumTo[1] - 1. The result may
	// include both display name and address.
	// 
	// 
	// References:
	// [1] #NumTo
	const char *getTo(int index);
	// Returns a to recipient's full email address.
	// 
	// index is zero-based; valid values are from 0 through NumTo[1] - 1. The result may
	// include both display name and address.
	// 
	// 
	// References:
	// [1] #NumTo
	const char *to(int index);


	// Returns the Nth To address (only the address part, not the friendly-name part).
	// 
	// index is zero-based; valid values are from 0 through NumTo[1] - 1.
	// 
	// 
	// References:
	// [1] #NumTo
	bool GetToAddr(int index, CkString &outStr);

	// Returns the Nth To address (only the address part, not the friendly-name part).
	// 
	// index is zero-based; valid values are from 0 through NumTo[1] - 1.
	// 
	// 
	// References:
	// [1] #NumTo
	const char *getToAddr(int index);
	// Returns the Nth To address (only the address part, not the friendly-name part).
	// 
	// index is zero-based; valid values are from 0 through NumTo[1] - 1.
	// 
	// 
	// References:
	// [1] #NumTo
	const char *toAddr(int index);


	// Returns the Nth To name (only the friendly-name part, not the address part).
	// 
	// index is zero-based; valid values are from 0 through NumTo[1] - 1.
	// 
	// 
	// References:
	// [1] #NumTo
	bool GetToName(int index, CkString &outStr);

	// Returns the Nth To name (only the friendly-name part, not the address part).
	// 
	// index is zero-based; valid values are from 0 through NumTo[1] - 1.
	// 
	// 
	// References:
	// [1] #NumTo
	const char *getToName(int index);
	// Returns the Nth To name (only the friendly-name part, not the address part).
	// 
	// index is zero-based; valid values are from 0 through NumTo[1] - 1.
	// 
	// 
	// References:
	// [1] #NumTo
	const char *toName(int index);


	// Convert the email object to an XML document in memory
	// 
	// The XML is Chilkat's email-object representation, not MIME and not a
	// standardized interchange format. Use GetMime[1] when an RFC822/MIME message is
	// required.
	// 
	// 
	// References:
	// [1] #GetMime
	bool GetXml(CkString &outStrXml);

	// Convert the email object to an XML document in memory
	// 
	// The XML is Chilkat's email-object representation, not MIME and not a
	// standardized interchange format. Use GetMime[1] when an RFC822/MIME message is
	// required.
	// 
	// 
	// References:
	// [1] #GetMime
	const char *getXml(void);
	// Convert the email object to an XML document in memory
	// 
	// The XML is Chilkat's email-object representation, not MIME and not a
	// standardized interchange format. Use GetMime[1] when an RFC822/MIME message is
	// required.
	// 
	// 
	// References:
	// [1] #GetMime
	const char *xml(void);


	// Returns true when the email contains a header field named fieldName whose value
	// matches the wildcard pattern in valuePattern.
	// 
	// valuePattern may contain any number of * characters, where each asterisk matches zero or
	// more characters. caseSensitive controls whether matching is case-sensitive.
	// 
	// The pattern syntax is a simple wildcard match, not a regular expression.
	// Header-field names are compared without regard to case.
	// 
	bool HasHeaderMatching(const char *fieldName, const char *valuePattern, bool caseSensitive);


	// Returns true if the email has an HTML body.
	// 
	// Returns true only when a text/html body is present in the current email
	// object.
	// 
	bool HasHtmlBody(void);


	// Returns true if the email has a plain-text body.
	// 
	// Returns true only when a text/plain body is present in the current email
	// object.
	// 
	bool HasPlainTextBody(void);


	// Returns true if the email is a multipart/report email.
	// 
	// Returns true when the top-level message structure is a multipart/report. Use
	// GetDsnInfo[1] or GetReport[2] to examine report content.
	// 
	// 
	// References:
	// [1] #GetDsnInfo
	// [2] #GetReport
	bool IsMultipartReport(void);


	// Returns in cert the certificate used to decrypt this email.
	// 
	// Call this after a successful decryption to inspect the certificate associated
	// with the private key that decrypted the message.
	// 
	bool LastDecryptCert(CkCert &cert);


	// Copies the certificate for the signer at the zero-based index specified by index
	// into cert.
	// 
	// Most signed emails have one signer, but an email may contain multiple
	// signatures.
	// 
	// Call this after parsing or verifying a signed message. cert receives a copy of
	// the signer certificate and can be examined independently.
	// 
	bool LastSignerCert(int index, CkCert &cert);


	// Extracts domain names from hyperlinks in an HTML email. Lowercase domains are
	// appended to domains without creating duplicates.
	// 
	// This method parses links only; it does not perform DNS lookups or make network
	// requests to the extracted domains.
	// 
	bool LinkedDomains(CkStringTable &domains);


	// Loads a complete email from an.eml file. An EML file contains RFC822/MIME
	// message text.
	// 
	// On success, the loaded message replaces the entire current email, including
	// recipients, headers, bodies, related items, and attachments. If the file cannot
	// be opened or parsed and the method fails, the email content that existed before
	// the call is preserved.
	// 
	// The file is parsed locally; this method does not connect to an SMTP, POP3, or
	// IMAP server.
	// 
	bool LoadEml(const char *mimePath);


	// Loads the email object from a completed asynchronous task.
	// 
	// task must be a completed task produced by a compatible asynchronous email
	// operation. Loading the result replaces the current email content.
	// 
	bool LoadTaskResult(CkTask &task);


	// Loads an email from a Chilkat XML email file.
	// 
	// On success, the loaded message replaces the entire current email, including
	// recipients, headers, bodies, related items, and attachments. If the file cannot
	// be opened or parsed and the method fails, the email content that existed before
	// the call is preserved.
	// 
	// The file must contain XML previously produced by Chilkat email serialization. It
	// is not an arbitrary XML-to-email conversion method.
	// 
	bool LoadXml(const char *xmlPath);


	// Loads an email from the Chilkat XML representation in xmlStr, typically obtained
	// from GetXml[1].
	// 
	// On success, the loaded message replaces the entire current email, including
	// recipients, headers, bodies, related items, and attachments. If xmlStr cannot be
	// parsed and the method fails, the email content that existed before the call is
	// preserved.
	// 
	// This is a local parsing operation and does not connect to a mail server.
	// 
	// 
	// References:
	// [1] #GetXml
	bool LoadXmlString(const char *xmlStr);


	// Copies the entire state of this email into destEmail, including all message content,
	// recipients, headers, body representations, attachments, related items, embedded
	// messages, replacement patterns, certificates, certificate sources, and
	// configuration properties.
	// 
	// destEmail becomes an independent copy. Subsequent changes to either email object do
	// not affect the other.
	// 
	bool MakeCopy(CkEmail &destEmail);


	// Takes a byte array of multibyte (non-Unicode) data and returns a Unicode
	// Q-Encoded string.
	// 
	// Q-encoding is commonly used in RFC 2047 encoded words for non-ASCII MIME header
	// text. charset identifies the charset represented by the input bytes.
	// 
	bool QEncodeBytes(CkByteData &inData, const char *charset, CkString &outEncodedStr);

	// Takes a byte array of multibyte (non-Unicode) data and returns a Unicode
	// Q-Encoded string.
	// 
	// Q-encoding is commonly used in RFC 2047 encoded words for non-ASCII MIME header
	// text. charset identifies the charset represented by the input bytes.
	// 
	const char *qEncodeBytes(CkByteData &inData, const char *charset);

	// Converts the Unicode string in str to the charset specified by charset, Q-encodes
	// the resulting multibyte data, and returns the encoded string.
	// 
	// Q-encoding is commonly used in RFC 2047 encoded words for non-ASCII MIME header
	// text. charset controls the byte charset used before Q-encoding.
	// 
	bool QEncodeString(const char *str, const char *charset, CkString &outEncodedStr);

	// Converts the Unicode string in str to the charset specified by charset, Q-encodes
	// the resulting multibyte data, and returns the encoded string.
	// 
	// Q-encoding is commonly used in RFC 2047 encoded words for non-ASCII MIME header
	// text. charset controls the byte charset used before Q-encoding.
	// 
	const char *qEncodeString(const char *str, const char *charset);

	// Removes the Nth message/rfc822 sub-part of the email. Indexing begins at 0.
	// 
	// idx is zero-based; valid values are from 0 through NumAttachedMessages[1] - 1.
	// This changes only the in-memory email.
	// 
	// 
	// References:
	// [1] #NumAttachedMessages
	void RemoveAttachedMessage(int idx);


	// Removes all message/rfc822 sub-parts of the email object.
	// 
	// This does not remove ordinary file attachments or related HTML resources.
	// 
	void RemoveAttachedMessages(void);


	// Removes relative or absolute path information from attachment filenames stored
	// in the MIME, leaving only each final filename component.
	// 
	// This changes the MIME filename metadata only. It does not affect the behavior of
	// SaveAllAttachments[1] or SaveAttachedFile[2], because those methods already
	// ignore path information in MIME attachment filenames and save beneath the
	// directory specified by the application.
	// 
	// 
	// References:
	// [1] #SaveAllAttachments
	// [2] #SaveAttachedFile
	void RemoveAttachmentPaths(void);


	// Removes by name all occurrences of a header field.
	// 
	// Header-field names are case-insensitive. All repeated occurrences having the
	// specified name are removed from the current email object.
	// 
	void RemoveHeaderField(const char *fieldName);


	// Removes the HTML body from the email (if an HTML body exists).
	// 
	// Other body representations, attachments, and related items remain unchanged.
	// 
	void RemoveHtmlAlternative(void);


	// Removes the plain-text body from the email (if a plain-text body exists).
	// 
	// Other body representations, attachments, and related items remain unchanged.
	// 
	void RemovePlainTextAlternative(void);


	// Saves all attachments to the directory specified by dirPath. If dirPath or any of its
	// directory components do not exist, Chilkat creates them automatically. The
	// OverwriteExisting[1] property controls whether existing files may be
	// overwritten.
	// 
	// Chilkat first uses the filename from the MIME Content-Disposition header. If no
	// filename is present there, it uses the name parameter from the Content-Type
	// header. If neither is present, the attachment is saved as attachedFile.txt.
	// 
	// If the selected MIME filename contains relative or absolute path information,
	// Chilkat ignores the path and uses only the final filename component. The file is
	// always written beneath the application-specified directory in dirPath.
	// 
	// On Windows, Chilkat converts the final MIME filename component to a valid
	// Windows filename. It replaces | and a: that is not part of a drive specification
	// with _; removes <, >, *,?, and "; and interprets / and \ as path separators, so
	// the path is omitted. If the colon belongs to a drive specification such as C:\,
	// it is discarded with the path. For example, a<b>c:d|e?f*g.txt is saved as
	// abc_d_efg.txt.
	// 
	// Attachment filenames can be changed before saving. The number of attachments is
	// available in the NumAttachments[2] property. An application can call
	// GetAttachmentFilename[3] for each zero-based index and change a filename by
	// calling SetAttachmentFilename[4].
	// 
	// Only attachments already present in the email object are saved. A message
	// downloaded without attachment bodies must first have those bodies fetched by the
	// mail protocol component.
	// 
	// 
	// References:
	// [1] #OverwriteExisting
	// [2] #NumAttachments
	// [3] #GetAttachmentFilename
	// [4] #SetAttachmentFilename
	bool SaveAllAttachments(const char *dirPath);


	// Saves the attachment at the zero-based index specified by index to the directory
	// specified by dirPath. If dirPath or any of its directory components do not exist,
	// Chilkat creates them automatically. The OverwriteExisting[1] property controls
	// whether an existing file may be overwritten.
	// 
	// Chilkat first uses the filename from the MIME Content-Disposition header. If no
	// filename is present there, it uses the name parameter from the Content-Type
	// header. If neither is present, the attachment is saved as attachedFile.txt.
	// 
	// If the selected MIME filename contains relative or absolute path information,
	// Chilkat ignores the path and uses only the final filename component. The file is
	// always written beneath the application-specified directory in dirPath.
	// 
	// On Windows, Chilkat converts the final MIME filename component to a valid
	// Windows filename. It replaces | and a: that is not part of a drive specification
	// with _; removes <, >, *,?, and "; and interprets / and \ as path separators, so
	// the path is omitted. If the colon belongs to a drive specification such as C:\,
	// it is discarded with the path. For example, a<b>c:d|e?f*g.txt is saved as
	// abc_d_efg.txt.
	// 
	// The attachment data must already be present in the current Email object. This
	// method does not retrieve missing attachment data from a mail server.
	// 
	// 
	// References:
	// [1] #OverwriteExisting
	bool SaveAttachedFile(int index, const char *dirPath);


	// Convert this email object to EML and save it to a file.
	// 
	// An EML file contains the complete RFC822/MIME message, including headers,
	// bodies, related items, and attachments.
	// 
	bool SaveEml(const char *emlFilePath);


	// Saves the related item at the zero-based index specified by index to the
	// directory specified by dirPath. If dirPath or any of its directory components do not
	// exist, Chilkat creates them automatically. Valid indexes are from 0 through
	// NumRelatedItems[1] - 1. The OverwriteExisting[2] property controls whether an
	// existing file may be overwritten.
	// 
	// If the related item's MIME filename contains relative or absolute path
	// information, Chilkat ignores the path and uses only the final filename
	// component. The file is always written beneath the application-specified
	// directory in dirPath.
	// 
	// Related items are typically images, style sheets, or other resources used by an
	// HTML body. The related-item data must already be present in the email object.
	// 
	// 
	// References:
	// [1] #NumRelatedItems
	// [2] #OverwriteExisting
	bool SaveRelatedItem(int index, const char *dirPath);


	// Convert this email object to XML and save it to a file.
	// 
	// The generated XML is Chilkat's email-object serialization and can later be
	// loaded with LoadXml[1]. Use SaveEml[2] for a standard MIME message file.
	// 
	// 
	// References:
	// [1] #LoadXml
	// [2] #SaveEml
	bool SaveXml(const char *path);


	// Sets the charset parameter of the Content-Type header field for the attachment
	// at the zero-based index specified by index. charset specifies the charset, such as
	// Shift_JIS, iso-8859-2, big5, or iso-8859-5.
	// 
	// This updates MIME metadata and does not transcode the attachment bytes. Use it
	// only when the bytes are already encoded in the charset specified by charset.
	// 
	bool SetAttachmentCharset(int index, const char *charset);


	// Sets the Content-Disposition value for the attachment at the zero-based index
	// specified by index.
	// 
	// The default disposition is attachment. Set disposition to inline when the attachment
	// should be presented as inline content.
	// 
	// index is zero-based. inline suggests that a mail client may display the part in
	// the message, while attachment suggests a separate downloadable file.
	// 
	bool SetAttachmentDisposition(int index, const char *disposition);


	// Changes the filename of the attachment at the zero-based index specified by
	// index. filename contains the new filename.
	// 
	// index is zero-based. This changes the filename stored in MIME and does not rename
	// any original local file.
	// 
	bool SetAttachmentFilename(int index, const char *filename);


	// Sets the main email body to binary content. byteData contains the body bytes, and
	// contentType specifies the MIME Content-Type.
	// 
	// disposition may be empty, inline, or attachment. filename optionally specifies a filename.
	// If filename is non-empty, disposition must also be non-empty because the filename is a
	// parameter of the Content-Disposition header field.
	// 
	// This replaces the main body with byteData. Use an attachment method instead when the
	// data should coexist with a separate message body.
	// 
	bool SetBinaryBody(CkByteData &byteData, const char *contentType, const char *disposition, const char *filename);


	// Sets the main email body from the binary data in bd.
	// 
	// contentType specifies the MIME Content-Type. disposition specifies the disposition and may be
	// empty, inline, or attachment. filename optionally specifies a filename. When filename is
	// provided, disposition must also be specified because the filename is an attribute of
	// the Content-Disposition header.
	// 
	// This replaces the main body using bytes already stored in bd. It does not add
	// a separate attachment unless disposition and filename intentionally describe the body as
	// one.
	// 
	bool SetBodyBd(CkBinData &bd, const char *contentType, const char *disposition, const char *filename);


	// Allows for a certificate to be explicitly provided for decryption. When an email
	// object is loaded via any method, such as LoadEml[1], SetFromMimeText[2],
	// SetFromMimeBytes[3], etc., security layers (signatures and encryption) are
	// automatically unwrapped. This method could be called prior to calling a method
	// that loads the email.
	// 
	// Configure the certificate before loading or unwrapping the encrypted MIME so the
	// private key is available at decryption time.
	// 
	// 
	// References:
	// [1] #LoadEml
	// [2] #SetFromMimeText
	// [3] #SetFromMimeBytes
	bool SetDecryptCert(CkCert &cert);


	// Explicitly provides the certificate in cert and the corresponding private key in
	// key for decryption. When an email object is loaded by a method such as
	// LoadEml[1], SetFromMimeText[2], or SetFromMimeBytes[3], security layers such as
	// signatures and encryption are automatically unwrapped. Decryption requires the
	// private key in key.
	// 
	// On Windows, Chilkat automatically searches the system certificate stores for the
	// required certificate and private key. On macOS, Chilkat automatically searches
	// the Keychain. When the required certificate and private key are not installed in
	// one of these locations, provide them in cert and key, or call
	// AddPfxSourceFile[4] or AddPfxSourceData[5].
	// 
	// Call this method before loading or unwrapping the encrypted MIME. cert and key
	// must correspond to one another.
	// 
	// 
	// References:
	// [1] #LoadEml
	// [2] #SetFromMimeText
	// [3] #SetFromMimeBytes
	// [4] #AddPfxSourceFile
	// [5] #AddPfxSourceData
	bool SetDecryptCert2(CkCert &cert, CkPrivateKey &key);


	// Sets the Date header field of the email to have the value of the date/time
	// object provided.
	// 
	// The date/time is formatted as an RFC822 Date header when the message is
	// serialized.
	// 
	bool SetDt(CkDateTime &dt);


	// Creates a typical email used to send EDIFACT messages. Does the following:
	// 
	//     1. Sets the email body to the EDIFACT message passed in message.
	//     2. Sets the Content-Transfer-Encoding to Base64.
	//     3. Set the Content-Type equal to application/EDIFACT.
	//     4. Sets the Content-Type header's name attribute to name.
	//     5. Sets the Content-Disposition equal to attachment.
	//     6. Sets the Content-Disposition 's filename attribute equal to filename.
	//     7. The EDIFACT message is converted to the charset indicated by charset, and
	//     encoded using Base64 in the email body.
	// 
	// The email's subject, recipients, FROM address, and other headers are left
	// unmodified.
	// 
	// This is a convenience method that constructs the customary MIME headers and body
	// for EDIFACT transport. It replaces the existing main body configuration.
	// 
	void SetEdifactBody(const char *message, const char *name, const char *filename, const char *charset);


	// Sets the certificate in cert as the explicit recipient encryption certificate.
	// Use the CreateCS, CertStore, and Cert classes to obtain a Cert object by
	// locating a certificate in a certificate store or loading one from a file.
	// 
	// Use AddEncryptCert[1] instead when the message must be decryptable by multiple
	// recipients.
	// 
	// 
	// References:
	// [1] #AddEncryptCert
	bool SetEncryptCert(CkCert &cert);


	// Loads an email with the MIME stored in a BinData object.
	// 
	// Note: This replaces the entire contents of the email object, including the To/CC
	// recipients.
	// 
	// The MIME is parsed locally and the BinData itself is not modified.
	// 
	bool SetFromMimeBd(CkBinData &bindat);


	// Loads mimeBytes into the email object. If the email object already contained an
	// email, it is entirely replaced. The character encoding (such as utf-8,
	// iso-8859-1, etc.) of the bytes is automatically inferred from the content. If
	// for some reason it is not possible to determine the character encoding, the
	// SetFromMimeBytes2[1] method may be called to explicitly specify the charset.
	// 
	// Use this method when MIME text is supplied as bytes in a known character
	// encoding. Parsing is local and replaces the current email content.
	// 
	// 
	// References:
	// [1] #SetFromMimeBytes2
	bool SetFromMimeBytes(CkByteData &mimeBytes);


	// Replaces the current email with the MIME bytes in mimeBytes.
	// 
	// charset specifies the character encoding of the MIME bytes, such as utf-8 or
	// iso-8859-1.
	// 
	// Use this method only when the byte array contains MIME text in a known character
	// encoding. For arbitrary MIME bytes that may contain binary sections, prefer a
	// binary MIME-loading method.
	// 
	bool SetFromMimeBytes2(CkByteData &mimeBytes, const char *charset);


	// Loads an email with the MIME stored in a StringBuilder object.
	// 
	// Note: This replaces the entire contents of the email object, including the To/CC
	// recipients.
	// 
	// The MIME is parsed locally and the StringBuilder itself is not modified.
	// 
	bool SetFromMimeSb(CkStringBuilder &sb);


	// Loads the email from MIME text contained in mimeText, such as the contents of an.eml
	// file.
	// 
	// On success, this replaces the entire current email, including recipients,
	// headers, bodies, related items, and attachments. An empty string is accepted and
	// clears the current message content.
	// 
	// mimeText must be interpreted as MIME, not as body text. To set a plain-text body
	// directly, use the Body[1] property or SetTextBody[2].
	// 
	// This parses MIME already present in memory and does not contact a mail server.
	// 
	// 
	// References:
	// [1] #Body
	// [2] #SetTextBody
	bool SetFromMimeText(const char *mimeText);


	// Loads an email from an XML string.
	// 
	// Note: This replaces the entire contents of the email object, including the To/CC
	// recipients.
	// 
	// The XML must be in Chilkat's email serialization format, typically obtained from
	// GetXml[1].
	// 
	// 
	// References:
	// [1] #GetXml
	bool SetFromXmlText(const char *xmlStr);


	// Sets the HTML body of an email.
	// 
	// This creates or replaces the text/html body. It does not automatically create a
	// plain-text alternative.
	// 
	void SetHtmlBody(const char *html);


	// Sets the HTML email body from a byte array containing character data in the
	// specified character set. This method also updates the email Content-Type header
	// to properly reflect the content type of the body.
	// 
	// Use this method when HTML is already available as encoded bytes. For a Unicode
	// string, SetHtmlBody[1] is simpler.
	// 
	// 
	// References:
	// [1] #SetHtmlBody
	bool SetMbHtmlBody(const char *charset, CkByteData &inData);


	// Sets the plain-text email body from a byte array containing character data in
	// the specified character set. This method also updates the email Content-Type
	// header to properly reflect the content type of the body.
	// 
	// Use this method when plain text is already available as encoded bytes. For a
	// Unicode string, use SetTextBody[1] or the plain-text body property/methods.
	// 
	// 
	// References:
	// [1] #SetTextBody
	bool SetMbPlainTextBody(const char *charset, CkByteData &inData);


	// Sets the filename for a related item within the email.
	// 
	// index is zero-based. This changes the filename stored in the related MIME part
	// and does not rename a local source file.
	// 
	bool SetRelatedFilename(int index, const char *path);


	// Defines a mail-merge replacement pair. pattern contains the pattern to find, and
	// replaceString contains the replacement text.
	// 
	// When the email is sent by a MailMan sending method, occurrences of pattern are
	// replaced with replaceString. To define multiple replacement pairs, call this method once
	// for each pair. The MailMan method RenderToMime also performs these replacements.
	// Methods such as SaveEml[1] and GetMime[2] do not.
	// 
	// pattern may occur in any header field and in either an HTML or plain-text body.
	// Defining the pair does not immediately alter the stored body or headers;
	// replacement occurs later during supported rendering or sending operations.
	// 
	// 
	// References:
	// [1] #SaveEml
	// [2] #GetMime
	bool SetReplacePattern(const char *pattern, const char *replaceString);


	// Sets the certificate in cert for creating a digital signature. Use the CreateCS,
	// CertStore, and Cert classes to obtain a Cert object by locating a certificate in
	// a certificate store or loading one from a file.
	// 
	// cert must have access to its private key when signing occurs. Use
	// SetSigningCert2[1] when the private key is supplied separately.
	// 
	// 
	// References:
	// [1] #SetSigningCert2
	bool SetSigningCert(CkCert &cert);


	// Explicitly sets the certificate in cert and the corresponding private key in
	// key for sending digitally signed email.
	// 
	// If cert already has access to its private key, it is usually sufficient to call
	// SetSigningCert[1]. On Windows, Chilkat automatically searches the system
	// certificate stores and Windows Protected Store for the corresponding certificate
	// and private key. On macOS, Chilkat automatically searches the Keychain.
	// 
	// In many cases, it is not necessary to set the signing certificate explicitly.
	// Chilkat can automatically locate a certificate whose email address matches the
	// email's From address, provided the certificate and private key are installed in
	// a searchable certificate store or Keychain.
	// 
	// Use this method when the private key is held separately from the certificate.
	// cert and key must correspond to one another.
	// 
	// 
	// References:
	// [1] #SetSigningCert
	bool SetSigningCert2(CkCert &cert, CkPrivateKey &key);


	// Sets the body of the email and also sets the Content-Type header field of contentType.
	// If the email is already multipart/alternative, an additional alternative with
	// the indicated Content-Type will be added. If an alternative with the same
	// Content-Type already exists, it is replaced.
	// 
	// Use a textual MIME type such as text/plain or text/html. When building a
	// plain-text/HTML pair, the dedicated alternative-body methods make the intended
	// multipart/alternative structure clearer.
	// 
	void SetTextBody(const char *bodyText, const char *contentType);


	// Creates a new Delivery Status Notification (DSN) email in the format specified
	// by RFC 3464. The DSN email is generated in dsnEmail.
	// 
	// The source email is not modified. Populate any additional sender or recipient
	// fields on dsnEmail before sending the generated notification.
	// 
	bool ToDsn(const char *explanation, const char *statusFields, bool headerOnly, CkEmail &dsnEmail);


	// Creates an inline-forward email in forward based on this email.
	// 
	// The source email is not modified. forward can be edited to add recipients,
	// introductory text, or other forwarding details before sending.
	// 
	bool ToForward(CkEmail &forward);


	// Creates a new MDN (Message Disposition Notification) email in mdn using the
	// format specified by RFC 3798.
	// 
	// The source email is not modified. Populate any additional sender or recipient
	// fields on mdn before sending the generated notification.
	// 
	bool ToMdn(const char *message, const char *statusFields, bool headerOnly, CkEmail &mdn);


	// Generates a reply email in reply with updated header and body fields to enable
	// sending as a reply. Note: Attachments are excluded from the reply, but attached
	// messages are included. To exclude attached messages, call
	// RemoveAttachedMessages[1] on the reply email object.
	// 
	// The source email is not modified. reply can be edited to add introductory text,
	// adjust recipients, or change reply behavior before sending.
	// 
	// 
	// References:
	// [1] #RemoveAttachedMessages
	bool ToReply(CkEmail &reply);


	// Returns true if this email's UIDL equals the UIDL of the email passed in e.
	// 
	// This comparison is meaningful for messages obtained through POP3. It does not
	// compare IMAP UIDs, MIME Message-ID values, or message content.
	// 
	bool UidlEquals(CkEmail &e);


	// Unpacks an HTML email into an HTML file and separate related files, such as
	// images and style sheets. Links in the HTML are rewritten to reference the
	// extracted files.
	// 
	// unpackDir specifies the destination directory for the HTML file, htmlFilename specifies the
	// HTML filename, and partsSubdir specifies the subdirectory beneath unpackDir where related
	// files are written. Chilkat creates the related-files subdirectory when
	// necessary.
	// 
	// Example: If unpackDir is C:/test, htmlFilename is myEmail.html, and partsSubdir is images, Chilkat
	// writes C:/test/myEmail.html and stores related files in C:/test/images.
	// 
	// Note: Only related content physically contained in the email can be extracted.
	// Images referenced by external web URLs are not downloaded.
	// 
	// The extracted filenames originate from message content and should be treated as
	// untrusted when processing email from unknown senders. The method operates on
	// data already present in the email object.
	// 
	bool UnpackHtml(const char *unpackDir, const char *htmlFilename, const char *partsSubdir);


	// Unobfuscates emails by undoing what spammers do to obfuscate email. It removes
	// comments from HTML bodies and unobfuscates hyperlinked URLs.
	// 
	// This modifies the current email content. Make a copy first when the original
	// HTML must be preserved for forensic or auditing purposes.
	// 
	void UnSpamify(void);


	// Unzips and replaces any Zip file attachments with the expanded contents. As an
	// example, if an email contained a single Zip file containing 3 GIF image files as
	// an attachment, then after calling this method the email would contain 3 GIF file
	// attachments, and the Zip attachment would be gone.If an email contains multiple
	// Zip file attachments, each Zip is expanded and replaced with the contents.
	// 
	// This changes the attachment collection in memory; it does not extract files
	// directly to a filesystem directory. Save the resulting attachments separately
	// when files are required on disk.
	// 
	bool UnzipAttachments(void);


	// Adds the XML certificate vault in vault to the object's internal certificate and
	// private-key lookup sources for encryption, decryption, signing, and
	// verification.
	// 
	// Unlike AddPfxSourceData[1] and AddPfxSourceFile[2], only one XML certificate
	// vault can be used. Each call replaces the vault supplied by the previous call,
	// so only the most recent vault remains in use.
	// 
	// vault becomes a lookup source for subsequent operations by this object. Adding it
	// does not immediately sign, verify, encrypt, or decrypt anything.
	// 
	// 
	// References:
	// [1] #AddPfxSourceData
	// [2] #AddPfxSourceFile
	bool UseCertVault(CkXmlCertVault &vault);


	// Replaces all the attachments of an email with a single Zip file attachment
	// having the filename specified.
	// 
	// The original attachments are removed from the in-memory email and their contents
	// are placed into the new Zip attachment. Related items and attached emails are
	// separate.
	// 
	bool ZipAttachments(const char *zipFilename);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
