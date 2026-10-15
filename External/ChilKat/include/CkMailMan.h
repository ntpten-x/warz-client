// CkMailMan.h: interface for the CkMailMan class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkMailMan_H
#define _CkMailMan_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkBinData;
class CkByteData;
class CkTask;
class CkEmailBundle;
class CkEmail;
class CkStringArray;
class CkStringTable;
class CkJsonObject;
class CkCert;
class CkStringBuilder;
class CkPrivateKey;
class CkSecureString;
class CkSshKey;
class CkXmlCertVault;
class CkSsh;
class CkSocket;
class CkMailManProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkMailMan
class CK_VISIBLE_PUBLIC CkMailMan  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkMailMan(const CkMailMan &);
	CkMailMan &operator=(const CkMailMan &);

    public:
	CkMailMan(void);
	virtual ~CkMailMan(void);

	static CkMailMan *createNew(void);
	static CkMailMan *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	CkMailManProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkMailManProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Set this property to true to request that the currently running operation be
	// aborted.
	// 
	// This applies to methods that may take time to complete, such as methods that
	// perform network communication or lengthy file operations. Methods that always
	// complete quickly are generally not affected.
	// 
	// If no method is currently running, the property is automatically reset to
	// false when the next method call begins. When an abort actually occurs, Chilkat
	// resets this property to false.
	// 
	// Both synchronous and asynchronous method calls can be aborted. A synchronous
	// method can be aborted by setting this property from another thread.
	// 
	bool get_AbortCurrent(void);
	// Set this property to true to request that the currently running operation be
	// aborted.
	// 
	// This applies to methods that may take time to complete, such as methods that
	// perform network communication or lengthy file operations. Methods that always
	// complete quickly are generally not affected.
	// 
	// If no method is currently running, the property is automatically reset to
	// false when the next method call begins. When an abort actually occurs, Chilkat
	// resets this property to false.
	// 
	// Both synchronous and asynchronous method calls can be aborted. A synchronous
	// method can be aborted by setting this property from another thread.
	// 
	void put_AbortCurrent(bool newVal);

	// Determines whether an email should be sent when one or more recipients are
	// rejected by the SMTP server.
	// 
	// The default value is false, which means Chilkat continues sending even if some
	// recipients are rejected.
	// 
	// When set to true, the email is not sent to any recipients if the SMTP server
	// rejects any recipient address.
	// 
	// Important: This property only works when SMTP pipelining is disabled. Because
	// SmtpPipelining[1] is true by default, set SmtpPipelining = false when
	// all-or-none behavior is required.
	// 
	// Note: SMTP servers do not always verify recipient addresses. Even when they do,
	// the server can usually verify only addresses within domains it controls.
	// 
	// 
	// References:
	// [1] #SmtpPipelining
	bool get_AllOrNone(void);
	// Determines whether an email should be sent when one or more recipients are
	// rejected by the SMTP server.
	// 
	// The default value is false, which means Chilkat continues sending even if some
	// recipients are rejected.
	// 
	// When set to true, the email is not sent to any recipients if the SMTP server
	// rejects any recipient address.
	// 
	// Important: This property only works when SMTP pipelining is disabled. Because
	// SmtpPipelining[1] is true by default, set SmtpPipelining = false when
	// all-or-none behavior is required.
	// 
	// Note: SMTP servers do not always verify recipient addresses. Even when they do,
	// the server can usually verify only addresses within domains it controls.
	// 
	// 
	// References:
	// [1] #SmtpPipelining
	void put_AllOrNone(bool newVal);

	// Controls whether Chilkat automatically selects the SMTP and POP3 TLS mode from a
	// standard port number when a connection is prepared.
	// 
	//     * SMTP port 465: implicit TLS (SmtpSsl[1] = true).
	//     * SMTP port 587: explicit TLS using STARTTLS.
	//     * SMTP port 25: no TLS is implied.
	//     * POP3 port 995: implicit TLS (PopSsl[2] = true).
	//     * POP3 port 110: no TLS is implied.
	// 
	// The default value is true. For these standard ports, Chilkat sets the related
	// TLS properties to a consistent combination before connecting, so conflicting
	// implicit and explicit TLS settings do not remain in effect.
	// 
	// If the configured port is nonstandard, AutoFix does not change the TLS
	// properties. The application must set the desired implicit, required-explicit,
	// opportunistic-explicit, or unencrypted mode explicitly.
	// 
	// Important: AutoFix is applied when Chilkat prepares the connection. Assigning a
	// port number does not immediately rewrite the visible property values.
	// 
	// 
	// References:
	// [1] #SmtpSsl
	// [2] #PopSsl
	bool get_AutoFix(void);
	// Controls whether Chilkat automatically selects the SMTP and POP3 TLS mode from a
	// standard port number when a connection is prepared.
	// 
	//     * SMTP port 465: implicit TLS (SmtpSsl[1] = true).
	//     * SMTP port 587: explicit TLS using STARTTLS.
	//     * SMTP port 25: no TLS is implied.
	//     * POP3 port 995: implicit TLS (PopSsl[2] = true).
	//     * POP3 port 110: no TLS is implied.
	// 
	// The default value is true. For these standard ports, Chilkat sets the related
	// TLS properties to a consistent combination before connecting, so conflicting
	// implicit and explicit TLS settings do not remain in effect.
	// 
	// If the configured port is nonstandard, AutoFix does not change the TLS
	// properties. The application must set the desired implicit, required-explicit,
	// opportunistic-explicit, or unencrypted mode explicitly.
	// 
	// Important: AutoFix is applied when Chilkat prepares the connection. Assigning a
	// port number does not immediately rewrite the visible property values.
	// 
	// 
	// References:
	// [1] #SmtpSsl
	// [2] #PopSsl
	void put_AutoFix(bool newVal);

	// Determines whether Chilkat automatically generates a unique Message-ID header
	// when an email is sent.
	// 
	// The default behavior is to generate a new unique Message-ID at send time. This
	// allows the same Email object to be reused without accidentally sending duplicate
	// message IDs.
	// 
	// If duplicate message IDs are used, some SMTP servers may treat the message as a
	// duplicate and discard it.
	// 
	// When automatic generation is enabled, calling GetHeaderField("Message-ID")
	// before sending will not necessarily show the actual message ID that Chilkat
	// sends.
	// 
	// Set this property to false to prevent Chilkat from automatically generating
	// the Message-ID header.
	// 
	bool get_AutoGenMessageId(void);
	// Determines whether Chilkat automatically generates a unique Message-ID header
	// when an email is sent.
	// 
	// The default behavior is to generate a new unique Message-ID at send time. This
	// allows the same Email object to be reused without accidentally sending duplicate
	// message IDs.
	// 
	// If duplicate message IDs are used, some SMTP servers may treat the message as a
	// duplicate and discard it.
	// 
	// When automatic generation is enabled, calling GetHeaderField("Message-ID")
	// before sending will not necessarily show the actual message ID that Chilkat
	// sends.
	// 
	// Set this property to false to prevent Chilkat from automatically generating
	// the Message-ID header.
	// 
	void put_AutoGenMessageId(bool newVal);

	// When true, Chilkat automatically sends the SMTP RSET command before sending a
	// new email over an already-open SMTP connection.
	// 
	// This helps ensure the SMTP session is in a clean state before the next email is
	// sent.
	// 
	// The default value is false.
	// 
	// Note: This property only applies when reusing an existing SMTP connection.
	// 
	bool get_AutoSmtpRset(void);
	// When true, Chilkat automatically sends the SMTP RSET command before sending a
	// new email over an already-open SMTP connection.
	// 
	// This helps ensure the SMTP session is in a clean state before the next email is
	// sent.
	// 
	// The default value is false.
	// 
	// Note: This property only applies when reusing an existing SMTP connection.
	// 
	void put_AutoSmtpRset(bool newVal);

	// Determines whether Chilkat automatically unwraps digitally signed or encrypted
	// email when the message is downloaded or loaded from MIME.
	// 
	// The default value is true. When enabled, Chilkat verifies signatures and
	// decrypts encrypted content when possible. The results are made available through
	// the email object's security-related properties and methods.
	// 
	// Set this property to false if you want signed or encrypted attachments, such
	// as.p7m or.p7s files, to remain as ordinary attachments.
	// 
	// Important: Signature verification and decryption must occur when the original
	// MIME is first loaded. After MIME is parsed into Chilkat's internal email object
	// format, the exact original MIME bytes are no longer available, and the signature
	// can no longer be verified.
	// 
	bool get_AutoUnwrapSecurity(void);
	// Determines whether Chilkat automatically unwraps digitally signed or encrypted
	// email when the message is downloaded or loaded from MIME.
	// 
	// The default value is true. When enabled, Chilkat verifies signatures and
	// decrypts encrypted content when possible. The results are made available through
	// the email object's security-related properties and methods.
	// 
	// Set this property to false if you want signed or encrypted attachments, such
	// as.p7m or.p7s files, to remain as ordinary attachments.
	// 
	// Important: Signature verification and decryption must occur when the original
	// MIME is first loaded. After MIME is parsed into Chilkat's internal email object
	// format, the exact original MIME bytes are no longer available, and the signature
	// can no longer be verified.
	// 
	void put_AutoUnwrapSecurity(bool newVal);

	// Sets the local IP address to use when connecting from a computer that has
	// multiple network interfaces or multiple IP addresses.
	// 
	// For most computers, this property should be left unset. Chilkat will
	// automatically use the default local IP address.
	// 
	// The value should be a numeric IP address, such as 165.164.55.124, not a
	// hostname.
	// 
	void get_ClientIpAddress(CkString &str);
	// Sets the local IP address to use when connecting from a computer that has
	// multiple network interfaces or multiple IP addresses.
	// 
	// For most computers, this property should be left unset. Chilkat will
	// automatically use the default local IP address.
	// 
	// The value should be a numeric IP address, such as 165.164.55.124, not a
	// hostname.
	// 
	const char *clientIpAddress(void);
	// Sets the local IP address to use when connecting from a computer that has
	// multiple network interfaces or multiple IP addresses.
	// 
	// For most computers, this property should be left unset. Chilkat will
	// automatically use the default local IP address.
	// 
	// The value should be a numeric IP address, such as 165.164.55.124, not a
	// hostname.
	// 
	void put_ClientIpAddress(const char *newVal);

	// Contains a numeric code describing the result of the last connection attempt.
	// This applies to the last connection made, or attempted, by any method.
	// 
	// +------+-------------------------------------------------------------+
	// | Code |                           Meaning                           |
	// +======+=============================================================+
	// | 0    | Success.                                                    |
	// +------+-------------------------------------------------------------+
	// | 1    | Empty hostname.                                             |
	// +------+-------------------------------------------------------------+
	// | 2    | DNS lookup failed.                                          |
	// +------+-------------------------------------------------------------+
	// | 3    | DNS timeout.                                                |
	// +------+-------------------------------------------------------------+
	// | 4    | Aborted by the application.                                 |
	// +------+-------------------------------------------------------------+
	// | 5    | Internal failure.                                           |
	// +------+-------------------------------------------------------------+
	// | 6    | Connection timed out.                                       |
	// +------+-------------------------------------------------------------+
	// | 7    | Connection rejected, or failed for another reason.          |
	// +------+-------------------------------------------------------------+
	// | 100  | TLS internal error.                                         |
	// +------+-------------------------------------------------------------+
	// | 101  | Failed to send the TLS client hello.                        |
	// +------+-------------------------------------------------------------+
	// | 102  | Unexpected TLS handshake message.                           |
	// +------+-------------------------------------------------------------+
	// | 103  | Failed to read the TLS server hello.                        |
	// +------+-------------------------------------------------------------+
	// | 104  | No server certificate was received.                         |
	// +------+-------------------------------------------------------------+
	// | 105  | Unexpected TLS protocol version.                            |
	// +------+-------------------------------------------------------------+
	// | 106  | Server certificate verification failed.                     |
	// +------+-------------------------------------------------------------+
	// | 107  | Unacceptable TLS protocol version.                          |
	// +------+-------------------------------------------------------------+
	// | 109  | Failed to read TLS handshake messages.                      |
	// +------+-------------------------------------------------------------+
	// | 110  | Failed to send client certificate handshake message.        |
	// +------+-------------------------------------------------------------+
	// | 111  | Failed to send client key exchange handshake message.       |
	// +------+-------------------------------------------------------------+
	// | 112  | Client certificate private key is not accessible.           |
	// +------+-------------------------------------------------------------+
	// | 113  | Failed to send client certificate verify handshake message. |
	// +------+-------------------------------------------------------------+
	// | 114  | Failed to send change cipher spec handshake message.        |
	// +------+-------------------------------------------------------------+
	// | 115  | Failed to send finished handshake message.                  |
	// +------+-------------------------------------------------------------+
	// | 116  | The server's finished message is invalid.                   |
	// +------+-------------------------------------------------------------+
	// 
	int get_ConnectFailReason(void);

	// The maximum number of seconds to wait while attempting to connect to an SMTP or
	// POP3 server.
	// 
	// The default value is 30 seconds.
	// 
	int get_ConnectTimeout(void);
	// The maximum number of seconds to wait while attempting to connect to an SMTP or
	// POP3 server.
	// 
	// The default value is 30 seconds.
	// 
	void put_ConnectTimeout(int newVal);

	// The DsnEnvid property specifies the SMTP DSN ENVID value, which is an arbitrary
	// identifier attached to the SMTP envelope. The same value is typically returned
	// in DSN responses so the sending application can correlate delivery notifications
	// with the original outbound email.
	// 
	// Common choices for DsnEnvid include:
	// 
	//     * An internal message ID:
	// 
	//         MSG-10004521
	// 
	//     * A GUID or UUID:
	// 
	//         550e8400-e29b-41d4-a716-446655440000
	// 
	//     * An order or transaction number:
	// 
	//         ORDER-847291
	// 
	//     * A timestamp-based identifier:
	// 
	//         MAIL-20260515-153045-001
	// 
	//     * A composite identifier combining application, customer, and message IDs:
	// 
	//         billing|cust-9182|invoice-44381
	// 
	// The value should uniquely identify the outbound email within your application.
	// It does not need to match the MIME Message-ID header, although some applications
	// choose to use the same identifier for both.
	// 
	// --------------------------------------------------------------------------------
	// 
	// About SMTP DSN
	// 
	// SMTP DSN means Delivery Status Notification. It is an optional SMTP service
	// extension defined by RFC 3461 that allows the sender to request delivery-status
	// reports from the SMTP server.
	// 
	// DSN allows an application to request notifications such as:
	// 
	//     * Successful delivery
	//     * Delivery failure
	//     * Delayed delivery
	// 
	// It also allows the sender to specify whether the returned notification should
	// include the full original message or only the message headers.
	// 
	// In MailMan, DSN behavior is controlled using:
	// 
	//     * DsnEnvid — sets the SMTP ENVID envelope identifier.
	//     * DsnNotify[1] — controls when notifications are requested, such as SUCCESS,
	//     FAILURE, DELAY, or NEVER.
	//     * DsnRet[2] — controls whether DSN responses include the full message or
	//     only headers.
	// 
	// DSN is an optional SMTP extension and is not supported by all SMTP servers. A
	// server supports DSN only if it advertises the DSN capability in response to the
	// SMTP EHLO command.
	// 
	// The IsSmtpDsnCapable[3] method can be used to determine whether the SMTP server
	// supports DSN.
	// 
	// Even when DSN is supported, some SMTP servers or downstream mail systems may
	// ignore or partially honor DSN requests.
	// 
	// 
	// References:
	// [1] #DsnNotify
	// [2] #DsnRet
	// [3] #IsSmtpDsnCapable
	void get_DsnEnvid(CkString &str);
	// The DsnEnvid property specifies the SMTP DSN ENVID value, which is an arbitrary
	// identifier attached to the SMTP envelope. The same value is typically returned
	// in DSN responses so the sending application can correlate delivery notifications
	// with the original outbound email.
	// 
	// Common choices for DsnEnvid include:
	// 
	//     * An internal message ID:
	// 
	//         MSG-10004521
	// 
	//     * A GUID or UUID:
	// 
	//         550e8400-e29b-41d4-a716-446655440000
	// 
	//     * An order or transaction number:
	// 
	//         ORDER-847291
	// 
	//     * A timestamp-based identifier:
	// 
	//         MAIL-20260515-153045-001
	// 
	//     * A composite identifier combining application, customer, and message IDs:
	// 
	//         billing|cust-9182|invoice-44381
	// 
	// The value should uniquely identify the outbound email within your application.
	// It does not need to match the MIME Message-ID header, although some applications
	// choose to use the same identifier for both.
	// 
	// --------------------------------------------------------------------------------
	// 
	// About SMTP DSN
	// 
	// SMTP DSN means Delivery Status Notification. It is an optional SMTP service
	// extension defined by RFC 3461 that allows the sender to request delivery-status
	// reports from the SMTP server.
	// 
	// DSN allows an application to request notifications such as:
	// 
	//     * Successful delivery
	//     * Delivery failure
	//     * Delayed delivery
	// 
	// It also allows the sender to specify whether the returned notification should
	// include the full original message or only the message headers.
	// 
	// In MailMan, DSN behavior is controlled using:
	// 
	//     * DsnEnvid — sets the SMTP ENVID envelope identifier.
	//     * DsnNotify[1] — controls when notifications are requested, such as SUCCESS,
	//     FAILURE, DELAY, or NEVER.
	//     * DsnRet[2] — controls whether DSN responses include the full message or
	//     only headers.
	// 
	// DSN is an optional SMTP extension and is not supported by all SMTP servers. A
	// server supports DSN only if it advertises the DSN capability in response to the
	// SMTP EHLO command.
	// 
	// The IsSmtpDsnCapable[3] method can be used to determine whether the SMTP server
	// supports DSN.
	// 
	// Even when DSN is supported, some SMTP servers or downstream mail systems may
	// ignore or partially honor DSN requests.
	// 
	// 
	// References:
	// [1] #DsnNotify
	// [2] #DsnRet
	// [3] #IsSmtpDsnCapable
	const char *dsnEnvid(void);
	// The DsnEnvid property specifies the SMTP DSN ENVID value, which is an arbitrary
	// identifier attached to the SMTP envelope. The same value is typically returned
	// in DSN responses so the sending application can correlate delivery notifications
	// with the original outbound email.
	// 
	// Common choices for DsnEnvid include:
	// 
	//     * An internal message ID:
	// 
	//         MSG-10004521
	// 
	//     * A GUID or UUID:
	// 
	//         550e8400-e29b-41d4-a716-446655440000
	// 
	//     * An order or transaction number:
	// 
	//         ORDER-847291
	// 
	//     * A timestamp-based identifier:
	// 
	//         MAIL-20260515-153045-001
	// 
	//     * A composite identifier combining application, customer, and message IDs:
	// 
	//         billing|cust-9182|invoice-44381
	// 
	// The value should uniquely identify the outbound email within your application.
	// It does not need to match the MIME Message-ID header, although some applications
	// choose to use the same identifier for both.
	// 
	// --------------------------------------------------------------------------------
	// 
	// About SMTP DSN
	// 
	// SMTP DSN means Delivery Status Notification. It is an optional SMTP service
	// extension defined by RFC 3461 that allows the sender to request delivery-status
	// reports from the SMTP server.
	// 
	// DSN allows an application to request notifications such as:
	// 
	//     * Successful delivery
	//     * Delivery failure
	//     * Delayed delivery
	// 
	// It also allows the sender to specify whether the returned notification should
	// include the full original message or only the message headers.
	// 
	// In MailMan, DSN behavior is controlled using:
	// 
	//     * DsnEnvid — sets the SMTP ENVID envelope identifier.
	//     * DsnNotify[1] — controls when notifications are requested, such as SUCCESS,
	//     FAILURE, DELAY, or NEVER.
	//     * DsnRet[2] — controls whether DSN responses include the full message or
	//     only headers.
	// 
	// DSN is an optional SMTP extension and is not supported by all SMTP servers. A
	// server supports DSN only if it advertises the DSN capability in response to the
	// SMTP EHLO command.
	// 
	// The IsSmtpDsnCapable[3] method can be used to determine whether the SMTP server
	// supports DSN.
	// 
	// Even when DSN is supported, some SMTP servers or downstream mail systems may
	// ignore or partially honor DSN requests.
	// 
	// 
	// References:
	// [1] #DsnNotify
	// [2] #DsnRet
	// [3] #IsSmtpDsnCapable
	void put_DsnEnvid(const char *newVal);

	// Sets the SMTP DSN NOTIFY parameter used when sending email.
	// 
	// The value may be left empty, set to NEVER, or set to a comma-separated
	// combination of SUCCESS, FAILURE, and DELAY.
	// 
	void get_DsnNotify(CkString &str);
	// Sets the SMTP DSN NOTIFY parameter used when sending email.
	// 
	// The value may be left empty, set to NEVER, or set to a comma-separated
	// combination of SUCCESS, FAILURE, and DELAY.
	// 
	const char *dsnNotify(void);
	// Sets the SMTP DSN NOTIFY parameter used when sending email.
	// 
	// The value may be left empty, set to NEVER, or set to a comma-separated
	// combination of SUCCESS, FAILURE, and DELAY.
	// 
	void put_DsnNotify(const char *newVal);

	// Sets the SMTP DSN RET parameter used when sending email.
	// 
	// The value may be left empty, set to FULL to request the full message in DSN
	// notifications, or set to HDRS to request only the message headers.
	// 
	void get_DsnRet(CkString &str);
	// Sets the SMTP DSN RET parameter used when sending email.
	// 
	// The value may be left empty, set to FULL to request the full message in DSN
	// notifications, or set to HDRS to request only the message headers.
	// 
	const char *dsnRet(void);
	// Sets the SMTP DSN RET parameter used when sending email.
	// 
	// The value may be left empty, set to FULL to request the full message in DSN
	// notifications, or set to HDRS to request only the message headers.
	// 
	void put_DsnRet(const char *newVal);

	// When true, Chilkat embeds the signing certificate chain in signed email.
	// 
	// Certificates are included up to, but not including, the root certificate. If
	// IncludeRootCert[1] is also true, the root CA certificate is included as well.
	// 
	// The default value is false
	// 
	// 
	// References:
	// [1] #IncludeRootCert
	bool get_EmbedCertChain(void);
	// When true, Chilkat embeds the signing certificate chain in signed email.
	// 
	// Certificates are included up to, but not including, the root certificate. If
	// IncludeRootCert[1] is also true, the root CA certificate is included as well.
	// 
	// The default value is false
	// 
	// 
	// References:
	// [1] #IncludeRootCert
	void put_EmbedCertChain(bool newVal);

	// Enables automatic resolution of passwords and credentials from secure local
	// storage.
	// 
	// When set to true, supported properties and methods can accept a Chilkat secret
	// specification string instead of a literal password. Secret specification strings
	// begin with!!.
	// 
	// Chilkat resolves secrets from:
	// 
	//     * Windows Credential Manager on Windows.
	//     * Apple Keychain on macOS.
	// 
	// The secret specification format is:!![appName|]service[|domain]|username
	// 
	// This applies to PopPassword[1], SmtpPassword[2], HttpProxyPassword[3],
	// SocksPassword[4], PopPasswordBase64[5], and SshAuthenticatePw[6].
	// 
	// The default value is false.
	// 
	// 
	// References:
	// [1] #PopPassword
	// [2] #SmtpPassword
	// [3] #HttpProxyPassword
	// [4] #SocksPassword
	// [5] #PopPasswordBase64
	// [6] #SshAuthenticatePw
	bool get_EnableSecrets(void);
	// Enables automatic resolution of passwords and credentials from secure local
	// storage.
	// 
	// When set to true, supported properties and methods can accept a Chilkat secret
	// specification string instead of a literal password. Secret specification strings
	// begin with!!.
	// 
	// Chilkat resolves secrets from:
	// 
	//     * Windows Credential Manager on Windows.
	//     * Apple Keychain on macOS.
	// 
	// The secret specification format is:!![appName|]service[|domain]|username
	// 
	// This applies to PopPassword[1], SmtpPassword[2], HttpProxyPassword[3],
	// SocksPassword[4], PopPasswordBase64[5], and SshAuthenticatePw[6].
	// 
	// The default value is false.
	// 
	// 
	// References:
	// [1] #PopPassword
	// [2] #SmtpPassword
	// [3] #HttpProxyPassword
	// [4] #SocksPassword
	// [5] #PopPasswordBase64
	// [6] #SshAuthenticatePw
	void put_EnableSecrets(bool newVal);

	// Specifies a filter expression applied by methods such as LoadXmlFile[1],
	// LoadXmlString[2], LoadMbx[3], CopyMail[4], and TransferMail[5].
	// 
	// When a filter is present, only emails matching the expression are returned. For
	// TransferMail[5], only matching emails are removed from the mail server.
	// 
	// Example expressions:
	// 
	//     Body like "mortgage rates*"
	//     Subject contains "update" and From contains "chilkat"
	//     To = "info@chilkatsoft.com"
	// 
	// Rules for filter expressions:
	// 
	//     * Any MIME header field name may be used. Header names are case-insensitive.
	//     * Literal strings are enclosed in double quotes.
	//     * String matching is case-insensitive.
	//     * The * wildcard matches zero or more characters.
	//     * Parentheses may be used to control precedence.
	//     * Logical operators are AND, OR, and NOT.
	//     * String comparison operators include CONTAINS and LIKE.
	// 
	// Note: Filtering works on text strings only, not dates or numbers.
	// 
	// 
	// References:
	// [1] #LoadXmlFile
	// [2] #LoadXmlString
	// [3] #LoadMbx
	// [4] #CopyMail
	// [5] #TransferMail
	void get_Filter(CkString &str);
	// Specifies a filter expression applied by methods such as LoadXmlFile[1],
	// LoadXmlString[2], LoadMbx[3], CopyMail[4], and TransferMail[5].
	// 
	// When a filter is present, only emails matching the expression are returned. For
	// TransferMail[5], only matching emails are removed from the mail server.
	// 
	// Example expressions:
	// 
	//     Body like "mortgage rates*"
	//     Subject contains "update" and From contains "chilkat"
	//     To = "info@chilkatsoft.com"
	// 
	// Rules for filter expressions:
	// 
	//     * Any MIME header field name may be used. Header names are case-insensitive.
	//     * Literal strings are enclosed in double quotes.
	//     * String matching is case-insensitive.
	//     * The * wildcard matches zero or more characters.
	//     * Parentheses may be used to control precedence.
	//     * Logical operators are AND, OR, and NOT.
	//     * String comparison operators include CONTAINS and LIKE.
	// 
	// Note: Filtering works on text strings only, not dates or numbers.
	// 
	// 
	// References:
	// [1] #LoadXmlFile
	// [2] #LoadXmlString
	// [3] #LoadMbx
	// [4] #CopyMail
	// [5] #TransferMail
	const char *filter(void);
	// Specifies a filter expression applied by methods such as LoadXmlFile[1],
	// LoadXmlString[2], LoadMbx[3], CopyMail[4], and TransferMail[5].
	// 
	// When a filter is present, only emails matching the expression are returned. For
	// TransferMail[5], only matching emails are removed from the mail server.
	// 
	// Example expressions:
	// 
	//     Body like "mortgage rates*"
	//     Subject contains "update" and From contains "chilkat"
	//     To = "info@chilkatsoft.com"
	// 
	// Rules for filter expressions:
	// 
	//     * Any MIME header field name may be used. Header names are case-insensitive.
	//     * Literal strings are enclosed in double quotes.
	//     * String matching is case-insensitive.
	//     * The * wildcard matches zero or more characters.
	//     * Parentheses may be used to control precedence.
	//     * Logical operators are AND, OR, and NOT.
	//     * String comparison operators include CONTAINS and LIKE.
	// 
	// Note: Filtering works on text strings only, not dates or numbers.
	// 
	// 
	// References:
	// [1] #LoadXmlFile
	// [2] #LoadXmlString
	// [3] #LoadMbx
	// [4] #CopyMail
	// [5] #TransferMail
	void put_Filter(const char *newVal);

	// Sets the interval, in milliseconds, between AbortCheck event callbacks.
	// 
	// This allows an application to periodically decide whether a long-running
	// operation should be aborted.
	// 
	// The default value is 0, which means no AbortCheck callbacks are generated.
	// 
	int get_HeartbeatMs(void);
	// Sets the interval, in milliseconds, between AbortCheck event callbacks.
	// 
	// This allows an application to periodically decide whether a long-running
	// operation should be aborted.
	// 
	// The default value is 0, which means no AbortCheck callbacks are generated.
	// 
	void put_HeartbeatMs(int newVal);

	// Sets the hostname sent in the SMTP EHLO or HELO command.
	// 
	// The default value is an empty string, which causes Chilkat to use the local
	// computer's hostname.
	// 
	void get_HeloHostname(CkString &str);
	// Sets the hostname sent in the SMTP EHLO or HELO command.
	// 
	// The default value is an empty string, which causes Chilkat to use the local
	// computer's hostname.
	// 
	const char *heloHostname(void);
	// Sets the hostname sent in the SMTP EHLO or HELO command.
	// 
	// The default value is an empty string, which causes Chilkat to use the local
	// computer's hostname.
	// 
	void put_HeloHostname(const char *newVal);

	// Sets the authentication method used when the configured HTTP proxy requires
	// credentials.
	// 
	// Valid values are Basic and NTLM. Leave this property empty when the proxy does
	// not require authentication.
	// 
	void get_HttpProxyAuthMethod(CkString &str);
	// Sets the authentication method used when the configured HTTP proxy requires
	// credentials.
	// 
	// Valid values are Basic and NTLM. Leave this property empty when the proxy does
	// not require authentication.
	// 
	const char *httpProxyAuthMethod(void);
	// Sets the authentication method used when the configured HTTP proxy requires
	// credentials.
	// 
	// Valid values are Basic and NTLM. Leave this property empty when the proxy does
	// not require authentication.
	// 
	void put_HttpProxyAuthMethod(const char *newVal);

	// Sets the optional Windows domain used for NTLM authentication with an HTTP
	// proxy.
	// 
	// This property is ignored for Basic proxy authentication and may be left empty
	// when no NTLM domain is required.
	// 
	void get_HttpProxyDomain(CkString &str);
	// Sets the optional Windows domain used for NTLM authentication with an HTTP
	// proxy.
	// 
	// This property is ignored for Basic proxy authentication and may be left empty
	// when no NTLM domain is required.
	// 
	const char *httpProxyDomain(void);
	// Sets the optional Windows domain used for NTLM authentication with an HTTP
	// proxy.
	// 
	// This property is ignored for Basic proxy authentication and may be left empty
	// when no NTLM domain is required.
	// 
	void put_HttpProxyDomain(const char *newVal);

	// Sets the hostname or IP address of the HTTP proxy used for SMTP and POP3
	// connections.
	// 
	// Leave this property empty to connect directly without an HTTP proxy.
	// 
	void get_HttpProxyHostname(CkString &str);
	// Sets the hostname or IP address of the HTTP proxy used for SMTP and POP3
	// connections.
	// 
	// Leave this property empty to connect directly without an HTTP proxy.
	// 
	const char *httpProxyHostname(void);
	// Sets the hostname or IP address of the HTTP proxy used for SMTP and POP3
	// connections.
	// 
	// Leave this property empty to connect directly without an HTTP proxy.
	// 
	void put_HttpProxyHostname(const char *newVal);

	// Sets the password used to authenticate with the configured HTTP proxy.
	// 
	// This property is used together with HttpProxyUsername[1] and, for NTLM
	// authentication, may also be used with HttpProxyDomain[2].
	// 
	// 
	// References:
	// [1] #HttpProxyUsername
	// [2] #HttpProxyDomain
	void get_HttpProxyPassword(CkString &str);
	// Sets the password used to authenticate with the configured HTTP proxy.
	// 
	// This property is used together with HttpProxyUsername[1] and, for NTLM
	// authentication, may also be used with HttpProxyDomain[2].
	// 
	// 
	// References:
	// [1] #HttpProxyUsername
	// [2] #HttpProxyDomain
	const char *httpProxyPassword(void);
	// Sets the password used to authenticate with the configured HTTP proxy.
	// 
	// This property is used together with HttpProxyUsername[1] and, for NTLM
	// authentication, may also be used with HttpProxyDomain[2].
	// 
	// 
	// References:
	// [1] #HttpProxyUsername
	// [2] #HttpProxyDomain
	void put_HttpProxyPassword(const char *newVal);

	// Sets the TCP port of the HTTP proxy.
	// 
	// Common proxy ports include 8080 and 3128. The value is used only when
	// HttpProxyHostname[1] is set.
	// 
	// 
	// References:
	// [1] #HttpProxyHostname
	int get_HttpProxyPort(void);
	// Sets the TCP port of the HTTP proxy.
	// 
	// Common proxy ports include 8080 and 3128. The value is used only when
	// HttpProxyHostname[1] is set.
	// 
	// 
	// References:
	// [1] #HttpProxyHostname
	void put_HttpProxyPort(int newVal);

	// Sets the username used to authenticate with the configured HTTP proxy.
	// 
	// This property is used only when the proxy requires authentication.
	// 
	void get_HttpProxyUsername(CkString &str);
	// Sets the username used to authenticate with the configured HTTP proxy.
	// 
	// This property is used only when the proxy requires authentication.
	// 
	const char *httpProxyUsername(void);
	// Sets the username used to authenticate with the configured HTTP proxy.
	// 
	// This property is used only when the proxy requires authentication.
	// 
	void put_HttpProxyUsername(const char *newVal);

	// Determines whether pending POP3 deletion marks are committed automatically after
	// a successful delete operation or full-message retrieval performed with
	// keepOnServer = false.
	// 
	// The default value is true. Chilkat sends DELE as each message is processed.
	// After the complete operation succeeds, Chilkat sends QUIT, commits the
	// deletions, and closes the POP3 session. The next POP3 method automatically
	// reconnects and establishes a new session.
	// 
	// When set to false, Chilkat sends DELE but leaves the session open and the
	// deletions uncommitted. Call Pop3EndSession[1] to send QUIT and commit them.
	// Calling Pop3Reset[2], calling Pop3EndSessionNoQuit[3], or losing the POP3
	// connection before QUIT causes the server to forget the pending deletion marks.
	// 
	// Header-only or partial-message retrieval never marks a message for deletion,
	// regardless of this property or the value of keepOnServer.
	// 
	// 
	// References:
	// [1] #Pop3EndSession
	// [2] #Pop3Reset
	// [3] #Pop3EndSessionNoQuit
	bool get_ImmediateDelete(void);
	// Determines whether pending POP3 deletion marks are committed automatically after
	// a successful delete operation or full-message retrieval performed with
	// keepOnServer = false.
	// 
	// The default value is true. Chilkat sends DELE as each message is processed.
	// After the complete operation succeeds, Chilkat sends QUIT, commits the
	// deletions, and closes the POP3 session. The next POP3 method automatically
	// reconnects and establishes a new session.
	// 
	// When set to false, Chilkat sends DELE but leaves the session open and the
	// deletions uncommitted. Call Pop3EndSession[1] to send QUIT and commit them.
	// Calling Pop3Reset[2], calling Pop3EndSessionNoQuit[3], or losing the POP3
	// connection before QUIT causes the server to forget the pending deletion marks.
	// 
	// Header-only or partial-message retrieval never marks a message for deletion,
	// regardless of this property or the value of keepOnServer.
	// 
	// 
	// References:
	// [1] #Pop3EndSession
	// [2] #Pop3Reset
	// [3] #Pop3EndSessionNoQuit
	void put_ImmediateDelete(bool newVal);

	// Determines whether the root CA certificate is included in the S/MIME signature
	// of a signed email.
	// 
	// This property only applies when EmbedCertChain[1] is true.
	// 
	// 
	// References:
	// [1] #EmbedCertChain
	bool get_IncludeRootCert(void);
	// Determines whether the root CA certificate is included in the S/MIME signature
	// of a signed email.
	// 
	// This property only applies when EmbedCertChain[1] is true.
	// 
	// 
	// References:
	// [1] #EmbedCertChain
	void put_IncludeRootCert(bool newVal);

	// Returns true if Chilkat believes the POP3 connection is still open.
	// 
	// Accessing this property does not send any command to the POP3 server. If the
	// server has disconnected but Chilkat has not yet attempted further communication,
	// this property may still return true.
	// 
	// To verify that the POP3 connection is actually alive, call Pop3Noop[1].
	// 
	// 
	// References:
	// [1] #Pop3Noop
	bool get_IsPop3Connected(void);

	// Returns true if Chilkat believes the SMTP connection is still open.
	// 
	// Accessing this property does not communicate with the SMTP server. A lost
	// connection may not be detected until the next SMTP command is sent.
	// 
	// To verify that the SMTP connection is actually alive, call SmtpNoop[1].
	// 
	// 
	// References:
	// [1] #SmtpNoop
	bool get_IsSmtpConnected(void);

	// Contains the SMTP failure status code returned by the server for the most recent
	// SMTP operation.
	// 
	// This property is nonzero only when Chilkat successfully connected, began an SMTP
	// session, and then received a status code indicating failure. Such failures are
	// generally reported by 4xx or 5xx replies.
	// 
	//     * 4xx — Temporary failure. Retrying later may succeed.
	//     * 5xx — Permanent failure. The request was rejected and usually requires a
	//     change before retrying.
	// 
	// A value of 0 means that no SMTP failure status code was received. For example,
	// the operation may have failed before an SMTP session was established. Use
	// SmtpFailReason[1] and LastErrorText for additional diagnostic information.
	// 
	// 
	// References:
	// [1] #SmtpFailReason
	int get_LastSmtpStatus(void);

	// Provides the text associated with the most recent SMTP reply received from the
	// server.
	// 
	// Use this property together with LastSmtpStatus[1] when diagnosing an SMTP
	// failure or interpreting a server-specific response.
	// 
	// 
	// References:
	// [1] #LastSmtpStatus
	void get_LastSmtpStatusMsg(CkString &str);
	// Provides the text associated with the most recent SMTP reply received from the
	// server.
	// 
	// Use this property together with LastSmtpStatus[1] when diagnosing an SMTP
	// failure or interpreting a server-specific response.
	// 
	// 
	// References:
	// [1] #LastSmtpStatus
	const char *lastSmtpStatusMsg(void);

	// Specifies a local file path where Chilkat writes each message exactly as it was
	// received from the POP3 server.
	// 
	// This is useful for debugging problems involving MIME structure, encodings,
	// attachments, or server behavior.
	// 
	void get_LogMailReceivedFilename(CkString &str);
	// Specifies a local file path where Chilkat writes each message exactly as it was
	// received from the POP3 server.
	// 
	// This is useful for debugging problems involving MIME structure, encodings,
	// attachments, or server behavior.
	// 
	const char *logMailReceivedFilename(void);
	// Specifies a local file path where Chilkat writes each message exactly as it was
	// received from the POP3 server.
	// 
	// This is useful for debugging problems involving MIME structure, encodings,
	// attachments, or server behavior.
	// 
	void put_LogMailReceivedFilename(const char *newVal);

	// Specifies a local file path where Chilkat writes the exact MIME message sent to
	// the SMTP server.
	// 
	// This is useful for inspecting the final MIME produced by Chilkat.
	// 
	void get_LogMailSentFilename(CkString &str);
	// Specifies a local file path where Chilkat writes the exact MIME message sent to
	// the SMTP server.
	// 
	// This is useful for inspecting the final MIME produced by Chilkat.
	// 
	const char *logMailSentFilename(void);
	// Specifies a local file path where Chilkat writes the exact MIME message sent to
	// the SMTP server.
	// 
	// This is useful for inspecting the final MIME produced by Chilkat.
	// 
	void put_LogMailSentFilename(const char *newVal);

	// Sets the POP3 server hostname or IP address.
	// 
	// Do not include http:// or https://. The value should be a hostname such as
	// pop.example.com or an IPv4/IPv6 address.
	// 
	void get_MailHost(CkString &str);
	// Sets the POP3 server hostname or IP address.
	// 
	// Do not include http:// or https://. The value should be a hostname such as
	// pop.example.com or an IPv4/IPv6 address.
	// 
	const char *mailHost(void);
	// Sets the POP3 server hostname or IP address.
	// 
	// Do not include http:// or https://. The value should be a hostname such as
	// pop.example.com or an IPv4/IPv6 address.
	// 
	void put_MailHost(const char *newVal);

	// Sets the POP3 server port number.
	// 
	// The default value is 110.
	// 
	// The standard POP3 ports and their associated MailMan property settings are
	// described below.
	// 
	// Port 995 — POP3 over Implicit SSL/TLS
	// 
	// Uses implicit SSL/TLS, meaning the TLS connection is established immediately
	// when the TCP connection is opened.
	// 
	// mailman.MailPort = 995;
	// mailman.PopSsl = true;
	// 
	// Port 110 — Standard Unencrypted POP3
	// 
	// Uses a normal unencrypted POP3 connection.
	// 
	// mailman.MailPort = 110;
	// mailman.PopSsl = false;
	// mailman.Pop3Stls = false;
	// mailman.Pop3StlsIfPossible = false;
	// 
	// Port 110 — POP3 with Explicit TLS via STLS
	// 
	// The connection begins unencrypted and is upgraded to TLS using the POP3 STLS
	// command.
	// 
	// mailman.MailPort = 110;
	// mailman.PopSsl = false;
	// mailman.Pop3Stls = true;
	// 
	// Port 110 — Opportunistic STLS
	// 
	// Attempts to upgrade the connection to TLS using STLS if the POP3 server supports
	// it. Otherwise, the connection remains unencrypted.
	// 
	// mailman.MailPort = 110;
	// mailman.PopSsl = false;
	// mailman.Pop3StlsIfPossible = true;
	// 
	// Important: PopSsl[1] and Pop3Stls[2] represent two different approaches to TLS
	// security:
	// 
	//     * PopSsl = true means the connection begins as SSL/TLS from the very start
	//     (implicit TLS).
	//     * Pop3Stls = true means the connection begins unencrypted and is later
	//     upgraded to TLS using the POP3 STLS command (explicit TLS).
	// 
	// These two approaches are mutually exclusive and should not both be enabled at
	// the same time.
	// 
	// Modern POP3 servers most commonly use either:
	// 
	//     * 995 with PopSsl = true, or
	//     * 110 with Pop3Stls = true.
	// 
	// References:
	// [1] #PopSsl
	// [2] #Pop3Stls
	int get_MailPort(void);
	// Sets the POP3 server port number.
	// 
	// The default value is 110.
	// 
	// The standard POP3 ports and their associated MailMan property settings are
	// described below.
	// 
	// Port 995 — POP3 over Implicit SSL/TLS
	// 
	// Uses implicit SSL/TLS, meaning the TLS connection is established immediately
	// when the TCP connection is opened.
	// 
	// mailman.MailPort = 995;
	// mailman.PopSsl = true;
	// 
	// Port 110 — Standard Unencrypted POP3
	// 
	// Uses a normal unencrypted POP3 connection.
	// 
	// mailman.MailPort = 110;
	// mailman.PopSsl = false;
	// mailman.Pop3Stls = false;
	// mailman.Pop3StlsIfPossible = false;
	// 
	// Port 110 — POP3 with Explicit TLS via STLS
	// 
	// The connection begins unencrypted and is upgraded to TLS using the POP3 STLS
	// command.
	// 
	// mailman.MailPort = 110;
	// mailman.PopSsl = false;
	// mailman.Pop3Stls = true;
	// 
	// Port 110 — Opportunistic STLS
	// 
	// Attempts to upgrade the connection to TLS using STLS if the POP3 server supports
	// it. Otherwise, the connection remains unencrypted.
	// 
	// mailman.MailPort = 110;
	// mailman.PopSsl = false;
	// mailman.Pop3StlsIfPossible = true;
	// 
	// Important: PopSsl[1] and Pop3Stls[2] represent two different approaches to TLS
	// security:
	// 
	//     * PopSsl = true means the connection begins as SSL/TLS from the very start
	//     (implicit TLS).
	//     * Pop3Stls = true means the connection begins unencrypted and is later
	//     upgraded to TLS using the POP3 STLS command (explicit TLS).
	// 
	// These two approaches are mutually exclusive and should not both be enabled at
	// the same time.
	// 
	// Modern POP3 servers most commonly use either:
	// 
	//     * 995 with PopSsl = true, or
	//     * 110 with Pop3Stls = true.
	// 
	// References:
	// [1] #PopSsl
	// [2] #Pop3Stls
	void put_MailPort(int newVal);

	// Limits the number of messages retrieved from the POP3 server. The following
	// methods honor this property:
	// 
	//     * GetAllHeaders[1]
	//     * GetHeaders[2]
	//     * FetchAll[3]
	//     * FetchRange[4]
	// 
	// The default value is 0, which means no limit.
	// 
	// For FetchAll, a positive value selects the newest messages in the mailbox. For
	// example, when MaxCount = 2, the two newest messages are retrieved and returned
	// in normal mailbox order, with the older of the two first.
	// 
	// 
	// References:
	// [1] #GetAllHeaders
	// [2] #GetHeaders
	// [3] #FetchAll
	// [4] #FetchRange
	int get_MaxCount(void);
	// Limits the number of messages retrieved from the POP3 server. The following
	// methods honor this property:
	// 
	//     * GetAllHeaders[1]
	//     * GetHeaders[2]
	//     * FetchAll[3]
	//     * FetchRange[4]
	// 
	// The default value is 0, which means no limit.
	// 
	// For FetchAll, a positive value selects the newest messages in the mailbox. For
	// example, when MaxCount = 2, the two newest messages are retrieved and returned
	// in normal mailbox order, with the older of the two first.
	// 
	// 
	// References:
	// [1] #GetAllHeaders
	// [2] #GetHeaders
	// [3] #FetchAll
	// [4] #FetchRange
	void put_MaxCount(int newVal);

	// Sets the OAuth2 access token used for POP3 or SMTP XOAUTH2 authentication.
	// 
	// When this property is set, Chilkat uses the AUTH XOAUTH2 authentication
	// mechanism when it is supported by the server.
	// 
	// For POP3 XOAUTH2 authentication: PopPassword[1] should be left empty, or
	// explicitly set to the empty string.
	// 
	// For SMTP XOAUTH2 authentication: SmtpPassword[2] should be left unset, or set to
	// the empty string.
	// 
	// The access token is sent as a bearer token during the AUTH XOAUTH2
	// authentication exchange.
	// 
	// 
	// References:
	// [1] #PopPassword
	// [2] #SmtpPassword
	void get_OAuth2AccessToken(CkString &str);
	// Sets the OAuth2 access token used for POP3 or SMTP XOAUTH2 authentication.
	// 
	// When this property is set, Chilkat uses the AUTH XOAUTH2 authentication
	// mechanism when it is supported by the server.
	// 
	// For POP3 XOAUTH2 authentication: PopPassword[1] should be left empty, or
	// explicitly set to the empty string.
	// 
	// For SMTP XOAUTH2 authentication: SmtpPassword[2] should be left unset, or set to
	// the empty string.
	// 
	// The access token is sent as a bearer token during the AUTH XOAUTH2
	// authentication exchange.
	// 
	// 
	// References:
	// [1] #PopPassword
	// [2] #SmtpPassword
	const char *oAuth2AccessToken(void);
	// Sets the OAuth2 access token used for POP3 or SMTP XOAUTH2 authentication.
	// 
	// When this property is set, Chilkat uses the AUTH XOAUTH2 authentication
	// mechanism when it is supported by the server.
	// 
	// For POP3 XOAUTH2 authentication: PopPassword[1] should be left empty, or
	// explicitly set to the empty string.
	// 
	// For SMTP XOAUTH2 authentication: SmtpPassword[2] should be left unset, or set to
	// the empty string.
	// 
	// The access token is sent as a bearer token during the AUTH XOAUTH2
	// authentication exchange.
	// 
	// 
	// References:
	// [1] #PopPassword
	// [2] #SmtpPassword
	void put_OAuth2AccessToken(const char *newVal);

	// Controls the MIME format used for digitally signed email.
	// 
	// When set to false, Chilkat creates a multipart/signed email. In this format,
	// the original email content remains visible as a normal MIME body part, and the
	// digital signature is included as a separate MIME part.
	// 
	// The top-level MIME Content-Type header will look similar to:
	// 
	// Content-Type: multipart/signed;
	//     protocol="application/pkcs7-signature";
	//     micalg=sha-256;
	//     boundary="------------040808030405050402070604"
	// 
	// This is commonly referred to as a detached signature because the signed content
	// exists separately from the signature itself.
	// 
	// When set to true, Chilkat creates an opaque signed email using PKCS#7
	// signed-data format. In this case, the original MIME content is encapsulated
	// inside the PKCS#7 signature structure.
	// 
	// The top-level MIME Content-Type header will look similar to:
	// 
	// Content-Type: application/pkcs7-mime;
	//     smime-type="signed-data";
	//     name="smime.p7m"; micalg=sha-256
	// 
	// This format is historically known as opaque signing because the original message
	// content is wrapped inside the PKCS#7 signed object and is not directly visible
	// as ordinary MIME body parts.
	// 
	// The default value is true.
	// 
	bool get_OpaqueSigning(void);
	// Controls the MIME format used for digitally signed email.
	// 
	// When set to false, Chilkat creates a multipart/signed email. In this format,
	// the original email content remains visible as a normal MIME body part, and the
	// digital signature is included as a separate MIME part.
	// 
	// The top-level MIME Content-Type header will look similar to:
	// 
	// Content-Type: multipart/signed;
	//     protocol="application/pkcs7-signature";
	//     micalg=sha-256;
	//     boundary="------------040808030405050402070604"
	// 
	// This is commonly referred to as a detached signature because the signed content
	// exists separately from the signature itself.
	// 
	// When set to true, Chilkat creates an opaque signed email using PKCS#7
	// signed-data format. In this case, the original MIME content is encapsulated
	// inside the PKCS#7 signature structure.
	// 
	// The top-level MIME Content-Type header will look similar to:
	// 
	// Content-Type: application/pkcs7-mime;
	//     smime-type="signed-data";
	//     name="smime.p7m"; micalg=sha-256
	// 
	// This format is historically known as opaque signing because the original message
	// content is wrapped inside the PKCS#7 signed object and is not directly visible
	// as ordinary MIME body parts.
	// 
	// The default value is true.
	// 
	void put_OpaqueSigning(bool newVal);

	// Sets the filename used in the Content-Disposition header when sending a PKCS#7
	// encrypted email.
	// 
	// The default value is smime.p7m.
	// 
	void get_P7mEncryptAttachFilename(CkString &str);
	// Sets the filename used in the Content-Disposition header when sending a PKCS#7
	// encrypted email.
	// 
	// The default value is smime.p7m.
	// 
	const char *p7mEncryptAttachFilename(void);
	// Sets the filename used in the Content-Disposition header when sending a PKCS#7
	// encrypted email.
	// 
	// The default value is smime.p7m.
	// 
	void put_P7mEncryptAttachFilename(const char *newVal);

	// Sets the filename used in the Content-Disposition header when sending an opaque
	// signed PKCS#7 email.
	// 
	// The default value is smime.p7m.
	// 
	void get_P7mSigAttachFilename(CkString &str);
	// Sets the filename used in the Content-Disposition header when sending an opaque
	// signed PKCS#7 email.
	// 
	// The default value is smime.p7m.
	// 
	const char *p7mSigAttachFilename(void);
	// Sets the filename used in the Content-Disposition header when sending an opaque
	// signed PKCS#7 email.
	// 
	// The default value is smime.p7m.
	// 
	void put_P7mSigAttachFilename(const char *newVal);

	// Sets the filename used in the Content-Disposition header when sending a signed
	// email with a detached PKCS#7 signature.
	// 
	// The default value is smime.p7s.
	// 
	void get_P7sSigAttachFilename(CkString &str);
	// Sets the filename used in the Content-Disposition header when sending a signed
	// email with a detached PKCS#7 signature.
	// 
	// The default value is smime.p7s.
	// 
	const char *p7sSigAttachFilename(void);
	// Sets the filename used in the Content-Disposition header when sending a signed
	// email with a detached PKCS#7 signature.
	// 
	// The default value is smime.p7s.
	// 
	void put_P7sSigAttachFilename(const char *newVal);

	// This property is only valid in programming environments and languages that allow
	// for event callbacks.
	// 
	// Sets the value that represents 100% completion for PercentDone event callbacks.
	// 
	// The default value is 100, meaning progress values range from 0 to 100. Setting
	// this property to a larger value provides finer granularity. For example, setting
	// PercentDoneScale = 1000 allows progress to be reported in tenths of a percent.
	// 
	// For example, if PercentDoneScale = 1000, then a callback value of 453 represents
	// 45.3% complete.
	// 
	// The value is clamped to a minimum of 10 and a maximum of 100000.
	// 
	int get_PercentDoneScale(void);
	// This property is only valid in programming environments and languages that allow
	// for event callbacks.
	// 
	// Sets the value that represents 100% completion for PercentDone event callbacks.
	// 
	// The default value is 100, meaning progress values range from 0 to 100. Setting
	// this property to a larger value provides finer granularity. For example, setting
	// PercentDoneScale = 1000 allows progress to be reported in tenths of a percent.
	// 
	// For example, if PercentDoneScale = 1000, then a callback value of 453 represents
	// 45.3% complete.
	// 
	// The value is clamped to a minimum of 10 and a maximum of 100000.
	// 
	void put_PercentDoneScale(int newVal);

	// Returns 0 when no POP3 session is active.
	// 
	// Otherwise, returns a positive integer that increments each time a new POP3
	// session is established. This can be used to detect whether a new session has
	// started.
	// 
	int get_Pop3SessionId(void);

	// Provides the accumulated raw POP3 commands sent to the server and the raw
	// responses received from the server.
	// 
	// This property is read-only. To clear it, call ClearPop3SessionLog[1].
	// 
	// 
	// References:
	// [1] #ClearPop3SessionLog
	void get_Pop3SessionLog(CkString &str);
	// Provides the accumulated raw POP3 commands sent to the server and the raw
	// responses received from the server.
	// 
	// This property is read-only. To clear it, call ClearPop3SessionLog[1].
	// 
	// 
	// References:
	// [1] #ClearPop3SessionLog
	const char *pop3SessionLog(void);

	// Determines whether SPA, also known as NTLM authentication, is used for POP3.
	// 
	// Set this property to true to use SPA authentication. No other programming
	// changes are required.
	// 
	// The default value is false.
	// 
	// Note: If SPA/NTLM authentication fails, set Global.DefaultNtlmVersion = 1 and
	// retry.
	// 
	bool get_Pop3SPA(void);
	// Determines whether SPA, also known as NTLM authentication, is used for POP3.
	// 
	// Set this property to true to use SPA authentication. No other programming
	// changes are required.
	// 
	// The default value is false.
	// 
	// Note: If SPA/NTLM authentication fails, set Global.DefaultNtlmVersion = 1 and
	// retry.
	// 
	void put_Pop3SPA(bool newVal);

	// Indicates whether the POP3 server certificate chain was successfully verified
	// during the most recent SSL/TLS POP3 connection.
	// 
	// This property reports certificate-chain verification only. It does not report
	// hostname matching or public key pinning. When either of those checks is
	// required, a mismatch causes the connection itself to fail.
	// 
	// This property is meaningful only after an SSL/TLS POP3 connection attempt.
	// 
	bool get_Pop3SslServerCertVerified(void);

	// Determines whether Chilkat requires the POP3 connection to be upgraded to TLS
	// using the STLS command.
	// 
	// When set to true, Chilkat initially connects without encryption and then sends
	// STLS before authenticating. The connection fails if the server does not support
	// the required upgrade.
	// 
	// PopSsl[1] takes precedence. If implicit TLS is enabled, this property does not
	// cause an additional explicit TLS upgrade.
	// 
	// The default value is false. Use Pop3StlsIfPossible[2] when the upgrade should
	// be attempted only when the server advertises support.
	// 
	// 
	// References:
	// [1] #PopSsl
	// [2] #Pop3StlsIfPossible
	bool get_Pop3Stls(void);
	// Determines whether Chilkat requires the POP3 connection to be upgraded to TLS
	// using the STLS command.
	// 
	// When set to true, Chilkat initially connects without encryption and then sends
	// STLS before authenticating. The connection fails if the server does not support
	// the required upgrade.
	// 
	// PopSsl[1] takes precedence. If implicit TLS is enabled, this property does not
	// cause an additional explicit TLS upgrade.
	// 
	// The default value is false. Use Pop3StlsIfPossible[2] when the upgrade should
	// be attempted only when the server advertises support.
	// 
	// 
	// References:
	// [1] #PopSsl
	// [2] #Pop3StlsIfPossible
	void put_Pop3Stls(bool newVal);

	// Determines whether Chilkat attempts POP3 STLS when the server advertises support
	// for it.
	// 
	// If the server supports STLS, the connection is upgraded to TLS. Otherwise, the
	// connection remains unencrypted.
	// 
	// PopSsl[1] takes precedence. If implicit TLS is enabled, no separate STLS upgrade
	// is attempted. Use Pop3Stls[2] = true instead when encryption is required and
	// the connection should fail if explicit TLS is unavailable.
	// 
	// The default value is false.
	// 
	// 
	// References:
	// [1] #PopSsl
	// [2] #Pop3Stls
	bool get_Pop3StlsIfPossible(void);
	// Determines whether Chilkat attempts POP3 STLS when the server advertises support
	// for it.
	// 
	// If the server supports STLS, the connection is upgraded to TLS. Otherwise, the
	// connection remains unencrypted.
	// 
	// PopSsl[1] takes precedence. If implicit TLS is enabled, no separate STLS upgrade
	// is attempted. Use Pop3Stls[2] = true instead when encryption is required and
	// the connection should fail if explicit TLS is unavailable.
	// 
	// The default value is false.
	// 
	// 
	// References:
	// [1] #PopSsl
	// [2] #Pop3Stls
	void put_Pop3StlsIfPossible(bool newVal);

	// Sets the POP3 password.
	// 
	// On Windows, if Pop3SPA[1] is enabled, both PopUsername[2] and PopPassword may be
	// set to "default" to use the credentials of the current logged-on Windows user.
	// 
	// 
	// References:
	// [1] #Pop3SPA
	// [2] #PopUsername
	void get_PopPassword(CkString &str);
	// Sets the POP3 password.
	// 
	// On Windows, if Pop3SPA[1] is enabled, both PopUsername[2] and PopPassword may be
	// set to "default" to use the credentials of the current logged-on Windows user.
	// 
	// 
	// References:
	// [1] #Pop3SPA
	// [2] #PopUsername
	const char *popPassword(void);
	// Sets the POP3 password.
	// 
	// On Windows, if Pop3SPA[1] is enabled, both PopUsername[2] and PopPassword may be
	// set to "default" to use the credentials of the current logged-on Windows user.
	// 
	// 
	// References:
	// [1] #Pop3SPA
	// [2] #PopUsername
	void put_PopPassword(const char *newVal);

	// Sets the POP3 password as Base64-encoded data instead of plain text.
	// 
	// MailMan decodes the Base64 value and uses the resulting bytes as the POP3
	// password. This property is useful when an application already stores or receives
	// the password in Base64 form; Base64 encoding by itself does not provide
	// encryption.
	// 
	void get_PopPasswordBase64(CkString &str);
	// Sets the POP3 password as Base64-encoded data instead of plain text.
	// 
	// MailMan decodes the Base64 value and uses the resulting bytes as the POP3
	// password. This property is useful when an application already stores or receives
	// the password in Base64 form; Base64 encoding by itself does not provide
	// encryption.
	// 
	const char *popPasswordBase64(void);
	// Sets the POP3 password as Base64-encoded data instead of plain text.
	// 
	// MailMan decodes the Base64 value and uses the resulting bytes as the POP3
	// password. This property is useful when an application already stores or receives
	// the password in Base64 form; Base64 encoding by itself does not provide
	// encryption.
	// 
	void put_PopPasswordBase64(const char *newVal);

	// Determines whether implicit SSL/TLS is used when connecting to the POP3 server.
	// 
	// When set to true, the TLS connection is established immediately when the TCP
	// connection is opened. Implicit POP3 TLS commonly uses port 995.
	// 
	// Implicit TLS takes precedence over explicit TLS. Therefore, when PopSsl =
	// true, the settings in Pop3Stls[1] and Pop3StlsIfPossible[2] do not cause a
	// separate STLS upgrade.
	// 
	// The default value is false. When AutoFix[3] is enabled, a standard POP3 port
	// can cause Chilkat to select the appropriate TLS mode automatically before
	// connecting.
	// 
	// 
	// References:
	// [1] #Pop3Stls
	// [2] #Pop3StlsIfPossible
	// [3] #AutoFix
	bool get_PopSsl(void);
	// Determines whether implicit SSL/TLS is used when connecting to the POP3 server.
	// 
	// When set to true, the TLS connection is established immediately when the TCP
	// connection is opened. Implicit POP3 TLS commonly uses port 995.
	// 
	// Implicit TLS takes precedence over explicit TLS. Therefore, when PopSsl =
	// true, the settings in Pop3Stls[1] and Pop3StlsIfPossible[2] do not cause a
	// separate STLS upgrade.
	// 
	// The default value is false. When AutoFix[3] is enabled, a standard POP3 port
	// can cause Chilkat to select the appropriate TLS mode automatically before
	// connecting.
	// 
	// 
	// References:
	// [1] #Pop3Stls
	// [2] #Pop3StlsIfPossible
	// [3] #AutoFix
	void put_PopSsl(bool newVal);

	// Sets the POP3 login name.
	// 
	// On Windows, if Pop3SPA[1] is enabled, both PopUsername and PopPassword[2] may be
	// set to "default" to use the credentials of the current logged-on Windows user.
	// 
	// 
	// References:
	// [1] #Pop3SPA
	// [2] #PopPassword
	void get_PopUsername(CkString &str);
	// Sets the POP3 login name.
	// 
	// On Windows, if Pop3SPA[1] is enabled, both PopUsername and PopPassword[2] may be
	// set to "default" to use the credentials of the current logged-on Windows user.
	// 
	// 
	// References:
	// [1] #Pop3SPA
	// [2] #PopPassword
	const char *popUsername(void);
	// Sets the POP3 login name.
	// 
	// On Windows, if Pop3SPA[1] is enabled, both PopUsername and PopPassword[2] may be
	// set to "default" to use the credentials of the current logged-on Windows user.
	// 
	// 
	// References:
	// [1] #Pop3SPA
	// [2] #PopPassword
	void put_PopUsername(const char *newVal);

	// Determines whether IPv6 is preferred over IPv4 when both are available for a
	// hostname.
	// 
	// The default value is false, which means IPv4 is preferred.
	// 
	bool get_PreferIpv6(void);
	// Determines whether IPv6 is preferred over IPv4 when both are available for a
	// hostname.
	// 
	// The default value is false, which means IPv4 is preferred.
	// 
	void put_PreferIpv6(bool newVal);

	// Sets the maximum number of seconds to wait when the SMTP or POP3 server stops
	// responding.
	// 
	// The default value is 30 seconds.
	// 
	int get_ReadTimeout(void);
	// Sets the maximum number of seconds to wait when the SMTP or POP3 server stops
	// responding.
	// 
	// The default value is 30 seconds.
	// 
	void put_ReadTimeout(int newVal);

	// Determines whether the hostname used for the TLS connection must match a name in
	// the server certificate's Subject Alternative Name (SAN) extension.
	// 
	// The comparison is made against the SNI hostname sent in the TLS handshake.
	// MailMan normally uses the configured server hostname. When connecting by IP
	// address or through an alternate endpoint, set SniHostname[1] to the expected DNS
	// hostname.
	// 
	// Hostname matching is enforced independently of RequireSslCertVerify[2].
	// Therefore, it still occurs when certificate-chain verification is not required.
	// 
	// The default value is false.
	// 
	// 
	// References:
	// [1] #SniHostname
	// [2] #RequireSslCertVerify
	bool get_RequireHostnameMatch(void);
	// Determines whether the hostname used for the TLS connection must match a name in
	// the server certificate's Subject Alternative Name (SAN) extension.
	// 
	// The comparison is made against the SNI hostname sent in the TLS handshake.
	// MailMan normally uses the configured server hostname. When connecting by IP
	// address or through an alternate endpoint, set SniHostname[1] to the expected DNS
	// hostname.
	// 
	// Hostname matching is enforced independently of RequireSslCertVerify[2].
	// Therefore, it still occurs when certificate-chain verification is not required.
	// 
	// The default value is false.
	// 
	// 
	// References:
	// [1] #SniHostname
	// [2] #RequireSslCertVerify
	void put_RequireHostnameMatch(bool newVal);

	// Determines whether Chilkat requires the SMTP or POP3 server certificate chain to
	// be successfully verified for an SSL/TLS connection.
	// 
	// When set to true, Chilkat rejects the connection if the certificate is
	// expired, is not yet valid, or its chain/signature cannot be verified to a
	// trusted root.
	// 
	// Certificate-chain verification is separate from hostname matching and public key
	// pinning. RequireHostnameMatch[1] is enforced independently, even when this
	// property is false. TlsPinSet[2] supplements, rather than replaces, certificate
	// verification.
	// 
	// The default value is false. This property applies only to SSL/TLS connections.
	// 
	// 
	// References:
	// [1] #RequireHostnameMatch
	// [2] #TlsPinSet
	bool get_RequireSslCertVerify(void);
	// Determines whether Chilkat requires the SMTP or POP3 server certificate chain to
	// be successfully verified for an SSL/TLS connection.
	// 
	// When set to true, Chilkat rejects the connection if the certificate is
	// expired, is not yet valid, or its chain/signature cannot be verified to a
	// trusted root.
	// 
	// Certificate-chain verification is separate from hostname matching and public key
	// pinning. RequireHostnameMatch[1] is enforced independently, even when this
	// property is false. TlsPinSet[2] supplements, rather than replaces, certificate
	// verification.
	// 
	// The default value is false. This property applies only to SSL/TLS connections.
	// 
	// 
	// References:
	// [1] #RequireHostnameMatch
	// [2] #TlsPinSet
	void put_RequireSslCertVerify(bool newVal);

	// Determines whether the email's Date header is reset to the current date and time
	// when an email is loaded.
	// 
	// This applies to methods such as LoadMbx[1], LoadEml[2], LoadMime[3], LoadXml,
	// and LoadXmlString[4].
	// 
	// The default value is false.
	// 
	// 
	// References:
	// [1] #LoadMbx
	// [2] #LoadEml
	// [3] #LoadMime
	// [4] #LoadXmlString
	bool get_ResetDateOnLoad(void);
	// Determines whether the email's Date header is reset to the current date and time
	// when an email is loaded.
	// 
	// This applies to methods such as LoadMbx[1], LoadEml[2], LoadMime[3], LoadXml,
	// and LoadXmlString[4].
	// 
	// The default value is false.
	// 
	// 
	// References:
	// [1] #LoadMbx
	// [2] #LoadEml
	// [3] #LoadMime
	// [4] #LoadXmlString
	void put_ResetDateOnLoad(bool newVal);

	// Sets the buffer size used by the underlying TCP/IP socket when sending data.
	// 
	// The default value is 32767.
	// 
	int get_SendBufferSize(void);
	// Sets the buffer size used by the underlying TCP/IP socket when sending data.
	// 
	// The default value is 32767.
	// 
	void put_SendBufferSize(int newVal);

	// Controls how email is sent to distribution lists. The default value is true.
	// 
	// When true, Chilkat creates and sends a separate email for each recipient. The
	// original To, Cc, and Bcc headers are cleared, and the current recipient is
	// placed in the To header. Replacement patterns are applied separately for each
	// recipient, and every individual message receives a unique Message-ID.
	// 
	// If sending to one recipient fails, processing stops and no later recipients are
	// attempted.
	// 
	// When false, Chilkat sends messages in batches of up to 100 Bcc recipients at a
	// time. For example, a distribution list with 350 recipients produces four
	// messages: three containing 100 Bcc recipients and one containing 50.
	// 
	bool get_SendIndividual(void);
	// Controls how email is sent to distribution lists. The default value is true.
	// 
	// When true, Chilkat creates and sends a separate email for each recipient. The
	// original To, Cc, and Bcc headers are cleared, and the current recipient is
	// placed in the To header. Replacement patterns are applied separately for each
	// recipient, and every individual message receives a unique Message-ID.
	// 
	// If sending to one recipient fails, processing stops and no later recipients are
	// attempted.
	// 
	// When false, Chilkat sends messages in batches of up to 100 Bcc recipients at a
	// time. For example, a distribution list with 350 recipients produces four
	// messages: three containing 100 Bcc recipients and one containing 50.
	// 
	void put_SendIndividual(bool newVal);

	// Sets the maximum message size, in bytes, for POP3 operations that can download
	// one or more complete emails. It applies to any method capable of downloading a
	// full email and does not restrict header-only or partial-body retrieval.
	// 
	// The default value is 0, which means no size limit.
	// 
	// For multi-message retrieval, a message larger than the limit is omitted from the
	// result. No placeholder Email is added for the skipped message, and skipping an
	// oversized message does not by itself cause the retrieval method to fail.
	// 
	int get_SizeLimit(void);
	// Sets the maximum message size, in bytes, for POP3 operations that can download
	// one or more complete emails. It applies to any method capable of downloading a
	// full email and does not restrict header-only or partial-body retrieval.
	// 
	// The default value is 0, which means no size limit.
	// 
	// For multi-message retrieval, a message larger than the limit is omitted from the
	// result. No placeholder Email is added for the skipped message, and skipping an
	// oversized message does not by itself cause the retrieval method to fail.
	// 
	void put_SizeLimit(int newVal);

	// Sets the SMTP authentication method to use.
	// 
	// This property should usually be left empty so Chilkat can automatically choose
	// the most secure method advertised by the SMTP server.
	// 
	// If the server does not advertise authentication methods, or if a specific method
	// must be forced, set this property to one of: NONE, LOGIN, PLAIN, CRAM-MD5, or
	// NTLM.
	// 
	// Note: If NTLM authentication fails, set Global.DefaultNtlmVersion = 1 and retry.
	// 
	void get_SmtpAuthMethod(CkString &str);
	// Sets the SMTP authentication method to use.
	// 
	// This property should usually be left empty so Chilkat can automatically choose
	// the most secure method advertised by the SMTP server.
	// 
	// If the server does not advertise authentication methods, or if a specific method
	// must be forced, set this property to one of: NONE, LOGIN, PLAIN, CRAM-MD5, or
	// NTLM.
	// 
	// Note: If NTLM authentication fails, set Global.DefaultNtlmVersion = 1 and retry.
	// 
	const char *smtpAuthMethod(void);
	// Sets the SMTP authentication method to use.
	// 
	// This property should usually be left empty so Chilkat can automatically choose
	// the most secure method advertised by the SMTP server.
	// 
	// If the server does not advertise authentication methods, or if a specific method
	// must be forced, set this property to one of: NONE, LOGIN, PLAIN, CRAM-MD5, or
	// NTLM.
	// 
	// Note: If NTLM authentication fails, set Global.DefaultNtlmVersion = 1 and retry.
	// 
	void put_SmtpAuthMethod(const char *newVal);

	// Contains a keyword describing the result or failure reason for the last SMTP
	// operation.
	// 
	// Success: The method succeeded.
	// Failed: A general failure occurred.
	// NoValidRecipients: The SMTP server rejected all recipients.
	// NoRecipients: No To, CC, or BCC recipients were provided.
	// SomeBadRecipients: AllOrNone[1] is true and some recipients were rejected.
	// Aborted: The application aborted the operation.
	// NoFrom: No FROM address was provided.
	// FromFailure: The server rejected the MAIL FROM command.
	// NoCredentials: Required credentials were not provided.
	// AuthFailure: SMTP authentication failed.
	// DataFailure: The server returned an error in response to DATA.
	// NoSmtpHostname: No SMTP hostname or IP address was provided.
	// StartTlsFailed: Failed to upgrade the connection using STARTTLS.
	// ConnectFailed: Could not establish the TCP or TLS connection.
	// GreetingError: The SMTP server returned an error in the initial greeting.
	// ConnectionLost: The SMTP connection was lost during the operation.
	// Timeout: A socket read or write timeout occurred.
	// RenderFailed: The email could not be rendered for sending.
	// NotUnlocked: UnlockBundle was not called on at least one MailMan instance.
	// InternalFailure: An internal failure occurred and should be reported to Chilkat
	// support.
	// 
	// References:
	// [1] #AllOrNone
	void get_SmtpFailReason(CkString &str);
	// Contains a keyword describing the result or failure reason for the last SMTP
	// operation.
	// 
	// Success: The method succeeded.
	// Failed: A general failure occurred.
	// NoValidRecipients: The SMTP server rejected all recipients.
	// NoRecipients: No To, CC, or BCC recipients were provided.
	// SomeBadRecipients: AllOrNone[1] is true and some recipients were rejected.
	// Aborted: The application aborted the operation.
	// NoFrom: No FROM address was provided.
	// FromFailure: The server rejected the MAIL FROM command.
	// NoCredentials: Required credentials were not provided.
	// AuthFailure: SMTP authentication failed.
	// DataFailure: The server returned an error in response to DATA.
	// NoSmtpHostname: No SMTP hostname or IP address was provided.
	// StartTlsFailed: Failed to upgrade the connection using STARTTLS.
	// ConnectFailed: Could not establish the TCP or TLS connection.
	// GreetingError: The SMTP server returned an error in the initial greeting.
	// ConnectionLost: The SMTP connection was lost during the operation.
	// Timeout: A socket read or write timeout occurred.
	// RenderFailed: The email could not be rendered for sending.
	// NotUnlocked: UnlockBundle was not called on at least one MailMan instance.
	// InternalFailure: An internal failure occurred and should be reported to Chilkat
	// support.
	// 
	// References:
	// [1] #AllOrNone
	const char *smtpFailReason(void);

	// Sets the SMTP server hostname or IP address.
	// 
	// Do not include http:// or https://. The value may be a hostname, IPv4 address,
	// or IPv6 address.
	// 
	void get_SmtpHost(CkString &str);
	// Sets the SMTP server hostname or IP address.
	// 
	// Do not include http:// or https://. The value may be a hostname, IPv4 address,
	// or IPv6 address.
	// 
	const char *smtpHost(void);
	// Sets the SMTP server hostname or IP address.
	// 
	// Do not include http:// or https://. The value may be a hostname, IPv4 address,
	// or IPv6 address.
	// 
	void put_SmtpHost(const char *newVal);

	// Sets the Windows domain to use when logging in to an SMTP server with NTLM
	// authentication.
	// 
	// Leave this property empty if no domain is required.
	// 
	void get_SmtpLoginDomain(CkString &str);
	// Sets the Windows domain to use when logging in to an SMTP server with NTLM
	// authentication.
	// 
	// Leave this property empty if no domain is required.
	// 
	const char *smtpLoginDomain(void);
	// Sets the Windows domain to use when logging in to an SMTP server with NTLM
	// authentication.
	// 
	// Leave this property empty if no domain is required.
	// 
	void put_SmtpLoginDomain(const char *newVal);

	// Sets the SMTP envelope sender address used in the MAIL FROM command.
	// 
	// This address receives bounce messages and identifies the originator of the SMTP
	// transaction. It may differ from the From MIME header.
	// 
	// If left empty, Chilkat uses the email address from the message's From header.
	// 
	// SMTP servers may reject the envelope sender based on DNS, SPF, or other server
	// policy checks.
	// 
	void get_SmtpMailFrom(CkString &str);
	// Sets the SMTP envelope sender address used in the MAIL FROM command.
	// 
	// This address receives bounce messages and identifies the originator of the SMTP
	// transaction. It may differ from the From MIME header.
	// 
	// If left empty, Chilkat uses the email address from the message's From header.
	// 
	// SMTP servers may reject the envelope sender based on DNS, SPF, or other server
	// policy checks.
	// 
	const char *smtpMailFrom(void);
	// Sets the SMTP envelope sender address used in the MAIL FROM command.
	// 
	// This address receives bounce messages and identifies the originator of the SMTP
	// transaction. It may differ from the From MIME header.
	// 
	// If left empty, Chilkat uses the email address from the message's From header.
	// 
	// SMTP servers may reject the envelope sender based on DNS, SPF, or other server
	// policy checks.
	// 
	void put_SmtpMailFrom(const char *newVal);

	// Sets the password used for SMTP authentication.
	// 
	// Chilkat supports SMTP authentication methods such as LOGIN, PLAIN, CRAM-MD5, and
	// NTLM, and normally chooses the most secure available method automatically.
	// 
	// If NTLM authentication is used, SmtpUsername[1] and SmtpPassword may be set to
	// the keyword "default" to use the current Windows logged-on credentials.
	// 
	// 
	// References:
	// [1] #SmtpUsername
	void get_SmtpPassword(CkString &str);
	// Sets the password used for SMTP authentication.
	// 
	// Chilkat supports SMTP authentication methods such as LOGIN, PLAIN, CRAM-MD5, and
	// NTLM, and normally chooses the most secure available method automatically.
	// 
	// If NTLM authentication is used, SmtpUsername[1] and SmtpPassword may be set to
	// the keyword "default" to use the current Windows logged-on credentials.
	// 
	// 
	// References:
	// [1] #SmtpUsername
	const char *smtpPassword(void);
	// Sets the password used for SMTP authentication.
	// 
	// Chilkat supports SMTP authentication methods such as LOGIN, PLAIN, CRAM-MD5, and
	// NTLM, and normally chooses the most secure available method automatically.
	// 
	// If NTLM authentication is used, SmtpUsername[1] and SmtpPassword may be set to
	// the keyword "default" to use the current Windows logged-on credentials.
	// 
	// 
	// References:
	// [1] #SmtpUsername
	void put_SmtpPassword(const char *newVal);

	// Determines whether SMTP pipelining is used when the server advertises support
	// for it.
	// 
	// The default value is true.
	// 
	// Set this property to false to prevent SMTP pipelining. This is required when
	// using AllOrNone[1].
	// 
	// 
	// References:
	// [1] #AllOrNone
	bool get_SmtpPipelining(void);
	// Determines whether SMTP pipelining is used when the server advertises support
	// for it.
	// 
	// The default value is true.
	// 
	// Set this property to false to prevent SMTP pipelining. This is required when
	// using AllOrNone[1].
	// 
	// 
	// References:
	// [1] #AllOrNone
	void put_SmtpPipelining(bool newVal);

	// Sets the SMTP server port.
	// 
	// The default value is 25. If using implicit SSL/TLS with SmtpSsl = true, the
	// common port is 465.
	// 
	int get_SmtpPort(void);
	// Sets the SMTP server port.
	// 
	// The default value is 25. If using implicit SSL/TLS with SmtpSsl = true, the
	// common port is 465.
	// 
	void put_SmtpPort(int newVal);

	// Provides the accumulated raw SMTP commands sent to the server and raw responses
	// received from the server.
	// 
	// This property is read-only. To clear it, call ClearSmtpSessionLog[1].
	// 
	// 
	// References:
	// [1] #ClearSmtpSessionLog
	void get_SmtpSessionLog(CkString &str);
	// Provides the accumulated raw SMTP commands sent to the server and raw responses
	// received from the server.
	// 
	// This property is read-only. To clear it, call ClearSmtpSessionLog[1].
	// 
	// 
	// References:
	// [1] #ClearSmtpSessionLog
	const char *smtpSessionLog(void);

	// Determines whether Chilkat uses implicit SSL/TLS when connecting to the SMTP
	// server.
	// 
	// When set to true, the TLS connection is established immediately when the TCP
	// connection is opened. Implicit SMTP TLS commonly uses port 465.
	// 
	// Implicit TLS takes precedence over explicit TLS. Therefore, when SmtpSsl =
	// true, the settings in StartTLS[1] and StartTLSifPossible[2] do not cause a
	// separate STARTTLS upgrade.
	// 
	// The default value is false. When AutoFix[3] is enabled, a standard SMTP port
	// can cause Chilkat to select the appropriate TLS mode automatically before
	// connecting.
	// 
	// 
	// References:
	// [1] #StartTLS
	// [2] #StartTLSifPossible
	// [3] #AutoFix
	bool get_SmtpSsl(void);
	// Determines whether Chilkat uses implicit SSL/TLS when connecting to the SMTP
	// server.
	// 
	// When set to true, the TLS connection is established immediately when the TCP
	// connection is opened. Implicit SMTP TLS commonly uses port 465.
	// 
	// Implicit TLS takes precedence over explicit TLS. Therefore, when SmtpSsl =
	// true, the settings in StartTLS[1] and StartTLSifPossible[2] do not cause a
	// separate STARTTLS upgrade.
	// 
	// The default value is false. When AutoFix[3] is enabled, a standard SMTP port
	// can cause Chilkat to select the appropriate TLS mode automatically before
	// connecting.
	// 
	// 
	// References:
	// [1] #StartTLS
	// [2] #StartTLSifPossible
	// [3] #AutoFix
	void put_SmtpSsl(bool newVal);

	// Indicates whether the SMTP server certificate chain was successfully verified
	// during the most recent SSL/TLS SMTP connection.
	// 
	// This property reports certificate-chain verification only. It does not report
	// hostname matching or public key pinning. When either of those checks is
	// required, a mismatch causes the connection itself to fail.
	// 
	// This property is meaningful only after an SSL/TLS SMTP connection attempt.
	// 
	bool get_SmtpSslServerCertVerified(void);

	// Sets the username used for SMTP authentication.
	// 
	// If SmtpAuthMethod[1] is NTLM, SmtpUsername and SmtpPassword[2] may be set to the
	// keyword "default" to use the current Windows logged-on credentials.
	// 
	// 
	// References:
	// [1] #SmtpAuthMethod
	// [2] #SmtpPassword
	void get_SmtpUsername(CkString &str);
	// Sets the username used for SMTP authentication.
	// 
	// If SmtpAuthMethod[1] is NTLM, SmtpUsername and SmtpPassword[2] may be set to the
	// keyword "default" to use the current Windows logged-on credentials.
	// 
	// 
	// References:
	// [1] #SmtpAuthMethod
	// [2] #SmtpPassword
	const char *smtpUsername(void);
	// Sets the username used for SMTP authentication.
	// 
	// If SmtpAuthMethod[1] is NTLM, SmtpUsername and SmtpPassword[2] may be set to the
	// keyword "default" to use the current Windows logged-on credentials.
	// 
	// 
	// References:
	// [1] #SmtpAuthMethod
	// [2] #SmtpPassword
	void put_SmtpUsername(const char *newVal);

	// Specifies the DNS hostname sent in the Server Name Indication (SNI) extension of
	// the TLS handshake for SMTP and POP3 connections.
	// 
	// Normally this property is left empty. In that case, MailMan uses SmtpHost[1] for
	// SMTP connections and MailHost[2] for POP3 connections.
	// 
	// Set this property when connecting by IP address or through an alternate endpoint
	// while the server's TLS certificate and virtual-host configuration use a DNS
	// hostname. The value is also used for certificate hostname comparison when
	// RequireHostnameMatch[3] is true.
	// 
	// The default value is the empty string.
	// 
	// 
	// References:
	// [1] #SmtpHost
	// [2] #MailHost
	// [3] #RequireHostnameMatch
	void get_SniHostname(CkString &str);
	// Specifies the DNS hostname sent in the Server Name Indication (SNI) extension of
	// the TLS handshake for SMTP and POP3 connections.
	// 
	// Normally this property is left empty. In that case, MailMan uses SmtpHost[1] for
	// SMTP connections and MailHost[2] for POP3 connections.
	// 
	// Set this property when connecting by IP address or through an alternate endpoint
	// while the server's TLS certificate and virtual-host configuration use a DNS
	// hostname. The value is also used for certificate hostname comparison when
	// RequireHostnameMatch[3] is true.
	// 
	// The default value is the empty string.
	// 
	// 
	// References:
	// [1] #SmtpHost
	// [2] #MailHost
	// [3] #RequireHostnameMatch
	const char *sniHostname(void);
	// Specifies the DNS hostname sent in the Server Name Indication (SNI) extension of
	// the TLS handshake for SMTP and POP3 connections.
	// 
	// Normally this property is left empty. In that case, MailMan uses SmtpHost[1] for
	// SMTP connections and MailHost[2] for POP3 connections.
	// 
	// Set this property when connecting by IP address or through an alternate endpoint
	// while the server's TLS certificate and virtual-host configuration use a DNS
	// hostname. The value is also used for certificate hostname comparison when
	// RequireHostnameMatch[3] is true.
	// 
	// The default value is the empty string.
	// 
	// 
	// References:
	// [1] #SmtpHost
	// [2] #MailHost
	// [3] #RequireHostnameMatch
	void put_SniHostname(const char *newVal);

	// Sets the SOCKS4 or SOCKS5 proxy hostname or IPv4 address.
	// 
	// This property is used only when SocksVersion[1] is set to 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksHostname(CkString &str);
	// Sets the SOCKS4 or SOCKS5 proxy hostname or IPv4 address.
	// 
	// This property is used only when SocksVersion[1] is set to 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const char *socksHostname(void);
	// Sets the SOCKS4 or SOCKS5 proxy hostname or IPv4 address.
	// 
	// This property is used only when SocksVersion[1] is set to 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksHostname(const char *newVal);

	// Sets the SOCKS5 proxy password, if authentication is required.
	// 
	// SOCKS4 does not use passwords, so this property applies only to SOCKS5.
	// 
	void get_SocksPassword(CkString &str);
	// Sets the SOCKS5 proxy password, if authentication is required.
	// 
	// SOCKS4 does not use passwords, so this property applies only to SOCKS5.
	// 
	const char *socksPassword(void);
	// Sets the SOCKS5 proxy password, if authentication is required.
	// 
	// SOCKS4 does not use passwords, so this property applies only to SOCKS5.
	// 
	void put_SocksPassword(const char *newVal);

	// Sets the SOCKS proxy port.
	// 
	// The default value is 1080. This property applies only when SocksVersion[1] is
	// set to 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	int get_SocksPort(void);
	// Sets the SOCKS proxy port.
	// 
	// The default value is 1080. This property applies only when SocksVersion[1] is
	// set to 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksPort(int newVal);

	// Sets the SOCKS4 or SOCKS5 proxy username.
	// 
	// This property is used only when SocksVersion[1] is set to 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksUsername(CkString &str);
	// Sets the SOCKS4 or SOCKS5 proxy username.
	// 
	// This property is used only when SocksVersion[1] is set to 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const char *socksUsername(void);
	// Sets the SOCKS4 or SOCKS5 proxy username.
	// 
	// This property is used only when SocksVersion[1] is set to 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksUsername(const char *newVal);

	// Specifies whether a SOCKS proxy is used.
	// 
	//     * 0 — no SOCKS proxy is used. This is the default.
	//     * 4 — connect through a SOCKS4 proxy.
	//     * 5 — connect through a SOCKS5 proxy.
	int get_SocksVersion(void);
	// Specifies whether a SOCKS proxy is used.
	// 
	//     * 0 — no SOCKS proxy is used. This is the default.
	//     * 4 — connect through a SOCKS4 proxy.
	//     * 5 — connect through a SOCKS5 proxy.
	void put_SocksVersion(int newVal);

	// Sets the socket receive buffer size.
	// 
	// The default value is 4194304.
	// 
	// This property should normally be left unchanged. It may be increased if download
	// performance is slow. Values should preferably be multiples of 4096.
	// 
	int get_SoRcvBuf(void);
	// Sets the socket receive buffer size.
	// 
	// The default value is 4194304.
	// 
	// This property should normally be left unchanged. It may be increased if download
	// performance is slow. Values should preferably be multiples of 4096.
	// 
	void put_SoRcvBuf(int newVal);

	// Sets the socket send buffer size.
	// 
	// The default value is 262144.
	// 
	// This property should normally be left unchanged. It may be increased if upload
	// performance is slow. Testing values such as 512K or 1MB is reasonable. Values
	// should preferably be multiples of 4096.
	// 
	int get_SoSndBuf(void);
	// Sets the socket send buffer size.
	// 
	// The default value is 262144.
	// 
	// This property should normally be left unchanged. It may be increased if upload
	// performance is slow. Testing values such as 512K or 1MB is reasonable. Values
	// should preferably be multiples of 4096.
	// 
	void put_SoSndBuf(int newVal);

	// Sets the TLS cipher suites Chilkat is allowed to offer when establishing SSL/TLS
	// connections.
	// 
	// The default value is an empty string, meaning Chilkat may offer all implemented
	// cipher suites. To restrict the allowed ciphers, set this property to a
	// comma-separated list of cipher suite names, ordered by preference.
	// 
	// The cipher suites supported by Chilkat are:
	// 
	// TLS 1.3 Cipher Suites
	// 
	//     * TLS_AES_128_GCM_SHA256
	//     * TLS_CHACHA20_POLY1305_SHA256
	//     * TLS_AES_256_GCM_SHA384
	// 
	// ChaCha20-Poly1305 Cipher Suites
	// 
	//     * TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256
	//     * TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256
	//     * TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256
	// 
	// AES-GCM Cipher Suites
	// 
	//     * TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256
	//     * TLS_DHE_RSA_WITH_AES_128_GCM_SHA256
	//     * TLS_RSA_WITH_AES_128_GCM_SHA256
	//     * TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256
	//     * TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384
	//     * TLS_DHE_RSA_WITH_AES_256_GCM_SHA384
	//     * TLS_RSA_WITH_AES_256_GCM_SHA384
	//     * TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384
	// 
	// AES-128 CBC Cipher Suites
	// 
	//     * TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA
	//     * TLS_DHE_RSA_WITH_AES_128_CBC_SHA
	//     * TLS_RSA_WITH_AES_128_CBC_SHA
	//     * TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256
	//     * TLS_DHE_RSA_WITH_AES_128_CBC_SHA256
	//     * TLS_RSA_WITH_AES_128_CBC_SHA256
	//     * TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA
	//     * TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256
	// 
	// AES-256 CBC Cipher Suites
	// 
	//     * TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA
	//     * TLS_DHE_RSA_WITH_AES_256_CBC_SHA
	//     * TLS_RSA_WITH_AES_256_CBC_SHA
	//     * TLS_DHE_RSA_WITH_AES_256_CBC_SHA256
	//     * TLS_RSA_WITH_AES_256_CBC_SHA256
	//     * TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384
	//     * TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA
	//     * TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384
	// 
	// Important: The client offers a list of allowed cipher suites, but the server
	// chooses the final cipher suite from that list.
	// 
	// This property can also include special keywords:
	// 
	//     * rsa1024 — reject server certificates with RSA keys smaller than 1024 bits.
	//     * rsa2048 — reject server certificates with RSA keys smaller than 2048 bits.
	//     * secure-renegotiation — require secure renegotiation as defined by RFC
	//     5746.
	//     * best-practices — use Chilkat's current best-practice cipher policy.
	// 
	// The best-practices setting currently requires RSA server keys of at least 1024
	// bits, requires secure renegotiation, and disallows RC4, DES, and 3DES ciphers.
	// 
	// Example:
	// 
	//     TLS_DHE_RSA_WITH_AES_256_CBC_SHA256, TLS_RSA_WITH_AES_256_CBC_SHA, rsa1024,
	//     secure-renegotiation
	// 
	void get_SslAllowedCiphers(CkString &str);
	// Sets the TLS cipher suites Chilkat is allowed to offer when establishing SSL/TLS
	// connections.
	// 
	// The default value is an empty string, meaning Chilkat may offer all implemented
	// cipher suites. To restrict the allowed ciphers, set this property to a
	// comma-separated list of cipher suite names, ordered by preference.
	// 
	// The cipher suites supported by Chilkat are:
	// 
	// TLS 1.3 Cipher Suites
	// 
	//     * TLS_AES_128_GCM_SHA256
	//     * TLS_CHACHA20_POLY1305_SHA256
	//     * TLS_AES_256_GCM_SHA384
	// 
	// ChaCha20-Poly1305 Cipher Suites
	// 
	//     * TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256
	//     * TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256
	//     * TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256
	// 
	// AES-GCM Cipher Suites
	// 
	//     * TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256
	//     * TLS_DHE_RSA_WITH_AES_128_GCM_SHA256
	//     * TLS_RSA_WITH_AES_128_GCM_SHA256
	//     * TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256
	//     * TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384
	//     * TLS_DHE_RSA_WITH_AES_256_GCM_SHA384
	//     * TLS_RSA_WITH_AES_256_GCM_SHA384
	//     * TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384
	// 
	// AES-128 CBC Cipher Suites
	// 
	//     * TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA
	//     * TLS_DHE_RSA_WITH_AES_128_CBC_SHA
	//     * TLS_RSA_WITH_AES_128_CBC_SHA
	//     * TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256
	//     * TLS_DHE_RSA_WITH_AES_128_CBC_SHA256
	//     * TLS_RSA_WITH_AES_128_CBC_SHA256
	//     * TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA
	//     * TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256
	// 
	// AES-256 CBC Cipher Suites
	// 
	//     * TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA
	//     * TLS_DHE_RSA_WITH_AES_256_CBC_SHA
	//     * TLS_RSA_WITH_AES_256_CBC_SHA
	//     * TLS_DHE_RSA_WITH_AES_256_CBC_SHA256
	//     * TLS_RSA_WITH_AES_256_CBC_SHA256
	//     * TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384
	//     * TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA
	//     * TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384
	// 
	// Important: The client offers a list of allowed cipher suites, but the server
	// chooses the final cipher suite from that list.
	// 
	// This property can also include special keywords:
	// 
	//     * rsa1024 — reject server certificates with RSA keys smaller than 1024 bits.
	//     * rsa2048 — reject server certificates with RSA keys smaller than 2048 bits.
	//     * secure-renegotiation — require secure renegotiation as defined by RFC
	//     5746.
	//     * best-practices — use Chilkat's current best-practice cipher policy.
	// 
	// The best-practices setting currently requires RSA server keys of at least 1024
	// bits, requires secure renegotiation, and disallows RC4, DES, and 3DES ciphers.
	// 
	// Example:
	// 
	//     TLS_DHE_RSA_WITH_AES_256_CBC_SHA256, TLS_RSA_WITH_AES_256_CBC_SHA, rsa1024,
	//     secure-renegotiation
	// 
	const char *sslAllowedCiphers(void);
	// Sets the TLS cipher suites Chilkat is allowed to offer when establishing SSL/TLS
	// connections.
	// 
	// The default value is an empty string, meaning Chilkat may offer all implemented
	// cipher suites. To restrict the allowed ciphers, set this property to a
	// comma-separated list of cipher suite names, ordered by preference.
	// 
	// The cipher suites supported by Chilkat are:
	// 
	// TLS 1.3 Cipher Suites
	// 
	//     * TLS_AES_128_GCM_SHA256
	//     * TLS_CHACHA20_POLY1305_SHA256
	//     * TLS_AES_256_GCM_SHA384
	// 
	// ChaCha20-Poly1305 Cipher Suites
	// 
	//     * TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256
	//     * TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256
	//     * TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256
	// 
	// AES-GCM Cipher Suites
	// 
	//     * TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256
	//     * TLS_DHE_RSA_WITH_AES_128_GCM_SHA256
	//     * TLS_RSA_WITH_AES_128_GCM_SHA256
	//     * TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256
	//     * TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384
	//     * TLS_DHE_RSA_WITH_AES_256_GCM_SHA384
	//     * TLS_RSA_WITH_AES_256_GCM_SHA384
	//     * TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384
	// 
	// AES-128 CBC Cipher Suites
	// 
	//     * TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA
	//     * TLS_DHE_RSA_WITH_AES_128_CBC_SHA
	//     * TLS_RSA_WITH_AES_128_CBC_SHA
	//     * TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256
	//     * TLS_DHE_RSA_WITH_AES_128_CBC_SHA256
	//     * TLS_RSA_WITH_AES_128_CBC_SHA256
	//     * TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA
	//     * TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256
	// 
	// AES-256 CBC Cipher Suites
	// 
	//     * TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA
	//     * TLS_DHE_RSA_WITH_AES_256_CBC_SHA
	//     * TLS_RSA_WITH_AES_256_CBC_SHA
	//     * TLS_DHE_RSA_WITH_AES_256_CBC_SHA256
	//     * TLS_RSA_WITH_AES_256_CBC_SHA256
	//     * TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384
	//     * TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA
	//     * TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384
	// 
	// Important: The client offers a list of allowed cipher suites, but the server
	// chooses the final cipher suite from that list.
	// 
	// This property can also include special keywords:
	// 
	//     * rsa1024 — reject server certificates with RSA keys smaller than 1024 bits.
	//     * rsa2048 — reject server certificates with RSA keys smaller than 2048 bits.
	//     * secure-renegotiation — require secure renegotiation as defined by RFC
	//     5746.
	//     * best-practices — use Chilkat's current best-practice cipher policy.
	// 
	// The best-practices setting currently requires RSA server keys of at least 1024
	// bits, requires secure renegotiation, and disallows RC4, DES, and 3DES ciphers.
	// 
	// Example:
	// 
	//     TLS_DHE_RSA_WITH_AES_256_CBC_SHA256, TLS_RSA_WITH_AES_256_CBC_SHA, rsa1024,
	//     secure-renegotiation
	// 
	void put_SslAllowedCiphers(const char *newVal);

	// Selects the SSL/TLS protocol version used for secure SMTP and POP3 connections.
	// 
	// Possible values include:
	// 
	//     * default
	//     * TLS 1.3
	//     * TLS 1.2
	//     * TLS 1.1
	//     * TLS 1.0
	//     * SSL 3.0
	//     * TLS 1.3 or higher
	//     * TLS 1.2 or higher
	//     * TLS 1.1 or higher
	//     * TLS 1.0 or higher
	// 
	// The default value is default, which allows Chilkat to choose the protocol
	// dynamically based on the server's requirements.
	// 
	// Choosing an exact protocol version can cause the connection to fail unless that
	// exact version is negotiated. In most cases, using an or higher setting is
	// preferable.
	// 
	void get_SslProtocol(CkString &str);
	// Selects the SSL/TLS protocol version used for secure SMTP and POP3 connections.
	// 
	// Possible values include:
	// 
	//     * default
	//     * TLS 1.3
	//     * TLS 1.2
	//     * TLS 1.1
	//     * TLS 1.0
	//     * SSL 3.0
	//     * TLS 1.3 or higher
	//     * TLS 1.2 or higher
	//     * TLS 1.1 or higher
	//     * TLS 1.0 or higher
	// 
	// The default value is default, which allows Chilkat to choose the protocol
	// dynamically based on the server's requirements.
	// 
	// Choosing an exact protocol version can cause the connection to fail unless that
	// exact version is negotiated. In most cases, using an or higher setting is
	// preferable.
	// 
	const char *sslProtocol(void);
	// Selects the SSL/TLS protocol version used for secure SMTP and POP3 connections.
	// 
	// Possible values include:
	// 
	//     * default
	//     * TLS 1.3
	//     * TLS 1.2
	//     * TLS 1.1
	//     * TLS 1.0
	//     * SSL 3.0
	//     * TLS 1.3 or higher
	//     * TLS 1.2 or higher
	//     * TLS 1.1 or higher
	//     * TLS 1.0 or higher
	// 
	// The default value is default, which allows Chilkat to choose the protocol
	// dynamically based on the server's requirements.
	// 
	// Choosing an exact protocol version can cause the connection to fail unless that
	// exact version is negotiated. In most cases, using an or higher setting is
	// preferable.
	// 
	void put_SslProtocol(const char *newVal);

	// Determines whether Chilkat requires SMTP STARTTLS.
	// 
	// When set to true, Chilkat connects to the SMTP server normally and then sends
	// the STARTTLS command to upgrade the connection to TLS before authenticating and
	// sending email. The connection fails if the server does not support the required
	// upgrade.
	// 
	// SmtpSsl[1] takes precedence. If implicit TLS is enabled, this property does not
	// cause an additional explicit TLS upgrade.
	// 
	// The default value is false. Use StartTLSifPossible[2] when the upgrade should
	// be attempted only when the server advertises support.
	// 
	// This property applies to SMTP only, not POP3.
	// 
	// 
	// References:
	// [1] #SmtpSsl
	// [2] #StartTLSifPossible
	bool get_StartTLS(void);
	// Determines whether Chilkat requires SMTP STARTTLS.
	// 
	// When set to true, Chilkat connects to the SMTP server normally and then sends
	// the STARTTLS command to upgrade the connection to TLS before authenticating and
	// sending email. The connection fails if the server does not support the required
	// upgrade.
	// 
	// SmtpSsl[1] takes precedence. If implicit TLS is enabled, this property does not
	// cause an additional explicit TLS upgrade.
	// 
	// The default value is false. Use StartTLSifPossible[2] when the upgrade should
	// be attempted only when the server advertises support.
	// 
	// This property applies to SMTP only, not POP3.
	// 
	// 
	// References:
	// [1] #SmtpSsl
	// [2] #StartTLSifPossible
	void put_StartTLS(bool newVal);

	// Determines whether Chilkat attempts SMTP STARTTLS when the server advertises
	// support for it.
	// 
	// If the server supports STARTTLS, the connection is upgraded to TLS. Otherwise,
	// the connection remains unencrypted.
	// 
	// SmtpSsl[1] takes precedence. If implicit TLS is enabled, no separate STARTTLS
	// upgrade is attempted. Use StartTLS[2] = true instead when encryption is
	// required and the connection should fail if explicit TLS is unavailable.
	// 
	// The default value is true. This property applies to SMTP only, not POP3.
	// 
	// 
	// References:
	// [1] #SmtpSsl
	// [2] #StartTLS
	bool get_StartTLSifPossible(void);
	// Determines whether Chilkat attempts SMTP STARTTLS when the server advertises
	// support for it.
	// 
	// If the server supports STARTTLS, the connection is upgraded to TLS. Otherwise,
	// the connection remains unencrypted.
	// 
	// SmtpSsl[1] takes precedence. If implicit TLS is enabled, no separate STARTTLS
	// upgrade is attempted. Use StartTLS[2] = true instead when encryption is
	// required and the connection should fail if explicit TLS is unavailable.
	// 
	// The default value is true. This property applies to SMTP only, not POP3.
	// 
	// 
	// References:
	// [1] #SmtpSsl
	// [2] #StartTLS
	void put_StartTLSifPossible(bool newVal);

	// Contains the current or most recently negotiated TLS cipher suite.
	// 
	// If no TLS connection has been established, or if the TLS connection attempt
	// failed, this property is empty.
	// 
	// Example value:
	// 
	//     TLS_DHE_RSA_WITH_AES_256_CBC_SHA256
	// 
	void get_TlsCipherSuite(CkString &str);
	// Contains the current or most recently negotiated TLS cipher suite.
	// 
	// If no TLS connection has been established, or if the TLS connection attempt
	// failed, this property is empty.
	// 
	// Example value:
	// 
	//     TLS_DHE_RSA_WITH_AES_256_CBC_SHA256
	// 
	const char *tlsCipherSuite(void);

	// Sets the expected Subject Public Key Info (SPKI) fingerprints for TLS public key
	// pinning.
	// 
	// During the TLS handshake, Chilkat compares the server certificate's public key
	// fingerprint against this pin set. If none of the pins match, the connection
	// fails.
	// 
	// Pinning supplements normal certificate-chain verification; it does not replace
	// it. A matching pin does not by itself make an expired or otherwise invalid
	// certificate acceptable.
	// 
	// The format is:
	// 
	//     hash_algorithm, encoding, SPKI_fingerprint_1, SPKI_fingerprint_2, ...
	// 
	// Example with one SHA-256 Base64 pin:
	// 
	//     sha256, base64, lKg1SIqyhPSK19tlPbjl8s02yChsVTDklQpkMCHvsTE=
	// 
	// Example with two SHA-256 Base64 pins:
	// 
	//     sha256, base64, 4t37LpnGmrMEAG8HEz9yIrnvJV2euVRwCLb9EH5WZyI=,
	//     68b0G5iqMvWVWvUCjMuhLEyekM5729PadtnU5tdXZKs=
	// 
	// Supported hash algorithms include sha1, sha256, sha384, sha512, md2, md5, haval,
	// ripemd128, ripemd160, ripemd256, and ripemd320.
	// 
	// Supported encodings include base64, hex, and other Chilkat-supported encodings.
	// 
	void get_TlsPinSet(CkString &str);
	// Sets the expected Subject Public Key Info (SPKI) fingerprints for TLS public key
	// pinning.
	// 
	// During the TLS handshake, Chilkat compares the server certificate's public key
	// fingerprint against this pin set. If none of the pins match, the connection
	// fails.
	// 
	// Pinning supplements normal certificate-chain verification; it does not replace
	// it. A matching pin does not by itself make an expired or otherwise invalid
	// certificate acceptable.
	// 
	// The format is:
	// 
	//     hash_algorithm, encoding, SPKI_fingerprint_1, SPKI_fingerprint_2, ...
	// 
	// Example with one SHA-256 Base64 pin:
	// 
	//     sha256, base64, lKg1SIqyhPSK19tlPbjl8s02yChsVTDklQpkMCHvsTE=
	// 
	// Example with two SHA-256 Base64 pins:
	// 
	//     sha256, base64, 4t37LpnGmrMEAG8HEz9yIrnvJV2euVRwCLb9EH5WZyI=,
	//     68b0G5iqMvWVWvUCjMuhLEyekM5729PadtnU5tdXZKs=
	// 
	// Supported hash algorithms include sha1, sha256, sha384, sha512, md2, md5, haval,
	// ripemd128, ripemd160, ripemd256, and ripemd320.
	// 
	// Supported encodings include base64, hex, and other Chilkat-supported encodings.
	// 
	const char *tlsPinSet(void);
	// Sets the expected Subject Public Key Info (SPKI) fingerprints for TLS public key
	// pinning.
	// 
	// During the TLS handshake, Chilkat compares the server certificate's public key
	// fingerprint against this pin set. If none of the pins match, the connection
	// fails.
	// 
	// Pinning supplements normal certificate-chain verification; it does not replace
	// it. A matching pin does not by itself make an expired or otherwise invalid
	// certificate acceptable.
	// 
	// The format is:
	// 
	//     hash_algorithm, encoding, SPKI_fingerprint_1, SPKI_fingerprint_2, ...
	// 
	// Example with one SHA-256 Base64 pin:
	// 
	//     sha256, base64, lKg1SIqyhPSK19tlPbjl8s02yChsVTDklQpkMCHvsTE=
	// 
	// Example with two SHA-256 Base64 pins:
	// 
	//     sha256, base64, 4t37LpnGmrMEAG8HEz9yIrnvJV2euVRwCLb9EH5WZyI=,
	//     68b0G5iqMvWVWvUCjMuhLEyekM5729PadtnU5tdXZKs=
	// 
	// Supported hash algorithms include sha1, sha256, sha384, sha512, md2, md5, haval,
	// ripemd128, ripemd160, ripemd256, and ripemd320.
	// 
	// Supported encodings include base64, hex, and other Chilkat-supported encodings.
	// 
	void put_TlsPinSet(const char *newVal);

	// Contains the current or most recently negotiated TLS protocol version.
	// 
	// If no TLS connection has been established, or if the TLS connection attempt
	// failed, this property is empty.
	// 
	// Possible values include SSL 3.0, TLS 1.0, TLS 1.1, TLS 1.2, and TLS 1.3.
	// 
	void get_TlsVersion(CkString &str);
	// Contains the current or most recently negotiated TLS protocol version.
	// 
	// If no TLS connection has been established, or if the TLS connection attempt
	// failed, this property is empty.
	// 
	// Possible values include SSL 3.0, TLS 1.0, TLS 1.1, TLS 1.2, and TLS 1.3.
	// 
	const char *tlsVersion(void);

	// Provides a comma-separated list of uncommon option keywords.
	// 
	// This property defaults to an empty string and should normally remain empty.
	// 
	//     * ProtectFromVpn — introduced in v9.5.0.80. On Android, bypasses any
	//     installed or active VPN.
	//     * SmtpLoginAnsi — introduced in v9.5.0.97. Causes SMTP login and password
	//     strings containing non-ASCII characters to be sent using ANSI encoding instead
	//     of UTF-8. This restores the older Chilkat behavior for SMTP servers that expect
	//     ANSI credentials.
	void get_UncommonOptions(CkString &str);
	// Provides a comma-separated list of uncommon option keywords.
	// 
	// This property defaults to an empty string and should normally remain empty.
	// 
	//     * ProtectFromVpn — introduced in v9.5.0.80. On Android, bypasses any
	//     installed or active VPN.
	//     * SmtpLoginAnsi — introduced in v9.5.0.97. Causes SMTP login and password
	//     strings containing non-ASCII characters to be sent using ANSI encoding instead
	//     of UTF-8. This restores the older Chilkat behavior for SMTP servers that expect
	//     ANSI credentials.
	const char *uncommonOptions(void);
	// Provides a comma-separated list of uncommon option keywords.
	// 
	// This property defaults to an empty string and should normally remain empty.
	// 
	//     * ProtectFromVpn — introduced in v9.5.0.80. On Android, bypasses any
	//     installed or active VPN.
	//     * SmtpLoginAnsi — introduced in v9.5.0.97. Causes SMTP login and password
	//     strings containing non-ASCII characters to be sent using ANSI encoding instead
	//     of UTF-8. This restores the older Chilkat behavior for SMTP servers that expect
	//     ANSI credentials.
	void put_UncommonOptions(const char *newVal);

	// Determines whether Chilkat automatically uses APOP authentication when the POP3
	// server supports it.
	// 
	// The default value is false.
	// 
	bool get_UseApop(void);
	// Determines whether Chilkat automatically uses APOP authentication when the POP3
	// server supports it.
	// 
	// The default value is false.
	// 
	void put_UseApop(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds a PFX/PKCS#12 certificate store to the MailMan object's internal list of
	// sources used for locating certificates and private keys.
	// 
	// bd is a BinData object containing the bytes of a.pfx or.p12 file.
	// 
	// The added PFX source is searched when Chilkat needs a certificate and private
	// key for operations such as:
	// 
	//     * Decrypting S/MIME encrypted email
	//     * Creating digitally signed email
	// 
	// Multiple PFX sources can be added by calling this method once for each PFX.
	// 
	// On Windows, the registry-based Windows certificate stores are automatically
	// searched when locating certificates and private keys. Therefore, if the required
	// certificate and private key are already installed in the Windows certificate
	// store, explicitly adding a PFX source is often unnecessary.
	// 
	// On macOS, the Apple Keychain is also searched automatically. If the required
	// certificate and private key are already available in the Apple Keychain, it is
	// likewise unnecessary to explicitly add a PFX source.
	// 
	// password specifies the password required to open the PFX.
	// 
	bool AddPfxSourceBd(CkBinData &bd, const char *password);


	// Adds a PFX/PKCS#12 certificate store to the MailMan object's internal list of
	// sources used for locating certificates and private keys.
	// 
	// The pfxData argument contains the bytes of a.pfx /.p12 file.
	// 
	// The added PFX source is searched when Chilkat needs a certificate and private
	// key for operations such as:
	// 
	//     * Decrypting S/MIME encrypted email
	//     * Creating digitally signed email
	// 
	// Multiple PFX sources can be added by calling this method once for each PFX.
	// 
	// On Windows, the registry-based Windows certificate stores are automatically
	// searched when locating certificates and private keys. Therefore, if the required
	// certificate and private key are already installed in the Windows certificate
	// store, explicitly adding a PFX source is often unnecessary.
	// 
	// On macOS, the Apple Keychain is also searched automatically. If the required
	// certificate and private key are already available in the Apple Keychain, it is
	// likewise unnecessary to explicitly add a PFX source.
	// 
	// The password argument specifies the password required to open the PFX.
	// 
	bool AddPfxSourceData(CkByteData &pfxData, const char *password);


	// Adds a PFX/PKCS#12 file to the MailMan object's internal list of sources used
	// for locating certificates and private keys. The pfxFilePath argument is the path to
	// a.pfx or.p12 file.
	// 
	// The added PFX source is searched when Chilkat needs a certificate and private
	// key for operations such as:
	// 
	//     * Decrypting S/MIME encrypted email
	//     * Creating digitally signed email
	// 
	// Multiple PFX sources can be added by calling this method once for each PFX.
	// 
	// On Windows, the registry-based Windows certificate stores are automatically
	// searched when locating certificates and private keys. Therefore, if the required
	// certificate and private key are already installed in the Windows certificate
	// store, explicitly adding a PFX source is often unnecessary.
	// 
	// On macOS, the Apple Keychain is also searched automatically. If the required
	// certificate and private key are already available in the Apple Keychain, it is
	// likewise unnecessary to explicitly add a PFX source.
	// 
	// The password argument specifies the password required to open the PFX.
	// 
	bool AddPfxSourceFile(const char *pfxFilePath, const char *password);


	// Returns the number of messages currently available in the POP3 mailbox. Returns
	// -1 if an error occurs.
	// 
	// If no POP3 session is active, Chilkat connects and authenticates automatically.
	// After a successful call, the POP3 session remains open and can be reused by
	// subsequent POP3 methods. Call Pop3EndSession[1] or Pop3EndSessionNoQuit[2] to
	// end it.
	// 
	// If this method fails, use VerifyPopConnection[3] to test basic connectivity and
	// VerifyPopLogin[4] to test authentication.
	// 
	// 
	// References:
	// [1] #Pop3EndSession
	// [2] #Pop3EndSessionNoQuit
	// [3] #VerifyPopConnection
	// [4] #VerifyPopLogin
	int CheckMail(void);

	// Returns the number of messages currently available in the POP3 mailbox. Returns
	// -1 if an error occurs.
	// 
	// If no POP3 session is active, Chilkat connects and authenticates automatically.
	// After a successful call, the POP3 session remains open and can be reused by
	// subsequent POP3 methods. Call Pop3EndSession[1] or Pop3EndSessionNoQuit[2] to
	// end it.
	// 
	// If this method fails, use VerifyPopConnection[3] to test basic connectivity and
	// VerifyPopLogin[4] to test authentication.
	// 
	// 
	// References:
	// [1] #Pop3EndSession
	// [2] #Pop3EndSessionNoQuit
	// [3] #VerifyPopConnection
	// [4] #VerifyPopLogin
	CkTask *CheckMailAsync(void);


	// Clears the MailMan object's in-memory list of bad email addresses.
	// 
	// When an email-sending method is called, email addresses rejected by the SMTP
	// server are cached in the MailMan object. These rejected addresses can be
	// retrieved by calling GetBadEmailAddresses[1]. This method clears that cached
	// list so the object starts with no remembered bad addresses.
	// 
	// 
	// References:
	// [1] #GetBadEmailAddresses
	void ClearBadEmailAddresses(void);


	// Clears the current contents of the Pop3SessionLog[1] property.
	// 
	// 
	// References:
	// [1] #Pop3SessionLog
	void ClearPop3SessionLog(void);


	// Clears the current contents of the SmtpSessionLog[1] property.
	// 
	// 
	// References:
	// [1] #SmtpSessionLog
	void ClearSmtpSessionLog(void);


	// Explicitly closes the current SMTP connection. Before closing the socket
	// connection, Chilkat sends the SMTP QUIT command to the server.
	// 
	// Calling this method is optional in most applications. The MailMan object
	// automatically opens an SMTP connection when an email-sending method is called
	// and no connection is already open. The connection is then kept open so
	// subsequent sends can reuse it. For example, if an application calls SendEmail[1]
	// ten times, the first call opens the SMTP connection, and the following calls
	// send over the same connection.
	// 
	// If an SMTP-related property changes, such as the hostname, username, password,
	// port, or SSL/TLS settings, the existing connection is closed and a new
	// connection is established the next time an email-sending method is called.
	// 
	// The SMTP connection is also closed automatically when the MailMan object is
	// destroyed.
	// 
	// 
	// References:
	// [1] #SendEmail
	bool CloseSmtpConnection(void);

	// Explicitly closes the current SMTP connection. Before closing the socket
	// connection, Chilkat sends the SMTP QUIT command to the server.
	// 
	// Calling this method is optional in most applications. The MailMan object
	// automatically opens an SMTP connection when an email-sending method is called
	// and no connection is already open. The connection is then kept open so
	// subsequent sends can reuse it. For example, if an application calls SendEmail[1]
	// ten times, the first call opens the SMTP connection, and the following calls
	// send over the same connection.
	// 
	// If an SMTP-related property changes, such as the hostname, username, password,
	// port, or SSL/TLS settings, the existing connection is closed and a new
	// connection is established the next time an email-sending method is called.
	// 
	// The SMTP connection is also closed automatically when the MailMan object is
	// destroyed.
	// 
	// 
	// References:
	// [1] #SendEmail
	CkTask *CloseSmtpConnectionAsync(void);


	// Deprecated: Use FetchAll[1] instead.
	// 
	// Downloads all matching messages from the POP3 mailbox and returns them in an
	// EmailBundle. The messages remain on the POP3 server.
	// 
	// If Filter[2] is set, only messages that match the filter expression are
	// included.
	// 
	// 
	// References:
	// [1] #FetchAll
	// [2] #Filter
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *CopyMail(void);

	// Deprecated: Use FetchAll[1] instead.
	// 
	// Downloads all matching messages from the POP3 mailbox and returns them in an
	// EmailBundle. The messages remain on the POP3 server.
	// 
	// If Filter[2] is set, only messages that match the filter expression are
	// included.
	// 
	// 
	// References:
	// [1] #FetchAll
	// [2] #Filter
	CkTask *CopyMailAsync(void);


	// Deletes POP3 messages by using the UIDLs stored in the X-UIDL headers of the
	// Email objects in emailBundle. An email that does not contain an X-UIDL header is
	// skipped.
	// 
	// Chilkat processes the bundle and marks each located message with DELE. If a
	// connection failure occurs before processing is complete, the POP3 session is
	// lost and all uncommitted deletion marks are forgotten.
	// 
	// If ImmediateDelete[1] is true, which is the default, Chilkat sends a single
	// QUIT after the entire bundle has been processed. This commits all deletion marks
	// and closes the POP3 session. If it is false, the marks remain pending until
	// the application calls Pop3EndSession[2].
	// 
	// When making multiple deletion calls, it is usually more efficient to set
	// ImmediateDelete to false, perform all deletion operations, and call
	// Pop3EndSession once at the end.
	// 
	// 
	// References:
	// [1] #ImmediateDelete
	// [2] #Pop3EndSession
	bool DeleteBundle(CkEmailBundle &emailBundle);

	// Deletes POP3 messages by using the UIDLs stored in the X-UIDL headers of the
	// Email objects in emailBundle. An email that does not contain an X-UIDL header is
	// skipped.
	// 
	// Chilkat processes the bundle and marks each located message with DELE. If a
	// connection failure occurs before processing is complete, the POP3 session is
	// lost and all uncommitted deletion marks are forgotten.
	// 
	// If ImmediateDelete[1] is true, which is the default, Chilkat sends a single
	// QUIT after the entire bundle has been processed. This commits all deletion marks
	// and closes the POP3 session. If it is false, the marks remain pending until
	// the application calls Pop3EndSession[2].
	// 
	// When making multiple deletion calls, it is usually more efficient to set
	// ImmediateDelete to false, perform all deletion operations, and call
	// Pop3EndSession once at the end.
	// 
	// 
	// References:
	// [1] #ImmediateDelete
	// [2] #Pop3EndSession
	CkTask *DeleteBundleAsync(CkEmailBundle &emailBundle);


	// Marks an email for deletion by its POP3 message number.
	// 
	// Important: Message numbers are specific to a single POP3 session and can change
	// from one session to the next. For example, if a mailbox contains ten messages,
	// they are numbered 1 through 10. If message 1 is deleted and a new POP3 session
	// is opened, the remaining messages are renumbered 1 through 9.
	// 
	// A POP3 session must already be established before this method is called, either
	// explicitly by calling Pop3BeginSession[1] or implicitly by calling another
	// method that opens the session. This method does not automatically begin a new
	// session because doing so could change the message numbers and cause the
	// application to delete a different message than intended.
	// 
	// This method only marks the message for deletion. The message is not removed from
	// the POP3 mailbox until the session is ended by calling Pop3EndSession[2], which
	// sends the QUIT command.
	// 
	// 
	// References:
	// [1] #Pop3BeginSession
	// [2] #Pop3EndSession
	bool DeleteByMsgnum(int msgnum);

	// Marks an email for deletion by its POP3 message number.
	// 
	// Important: Message numbers are specific to a single POP3 session and can change
	// from one session to the next. For example, if a mailbox contains ten messages,
	// they are numbered 1 through 10. If message 1 is deleted and a new POP3 session
	// is opened, the remaining messages are renumbered 1 through 9.
	// 
	// A POP3 session must already be established before this method is called, either
	// explicitly by calling Pop3BeginSession[1] or implicitly by calling another
	// method that opens the session. This method does not automatically begin a new
	// session because doing so could change the message numbers and cause the
	// application to delete a different message than intended.
	// 
	// This method only marks the message for deletion. The message is not removed from
	// the POP3 mailbox until the session is ended by calling Pop3EndSession[2], which
	// sends the QUIT command.
	// 
	// 
	// References:
	// [1] #Pop3BeginSession
	// [2] #Pop3EndSession
	CkTask *DeleteByMsgnumAsync(int msgnum);


	// Marks the POP3 message identified by the UIDL in uidl for deletion. UIDLs are
	// preferred over message numbers because they remain stable across sessions while
	// the message remains in the mailbox.
	// 
	// If ImmediateDelete[1] is true, which is the default, Chilkat sends QUIT,
	// commits the deletion, and closes the session before returning. If it is false,
	// the message is only marked with DELE; call Pop3EndSession[2] to commit all
	// pending deletions.
	// 
	// Pop3Reset[3] or Pop3EndSessionNoQuit[4] cancels uncommitted deletion marks.
	// 
	// If no POP3 session is active, Chilkat connects and authenticates automatically.
	// 
	// 
	// References:
	// [1] #ImmediateDelete
	// [2] #Pop3EndSession
	// [3] #Pop3Reset
	// [4] #Pop3EndSessionNoQuit
	bool DeleteByUidl(const char *uidl);

	// Marks the POP3 message identified by the UIDL in uidl for deletion. UIDLs are
	// preferred over message numbers because they remain stable across sessions while
	// the message remains in the mailbox.
	// 
	// If ImmediateDelete[1] is true, which is the default, Chilkat sends QUIT,
	// commits the deletion, and closes the session before returning. If it is false,
	// the message is only marked with DELE; call Pop3EndSession[2] to commit all
	// pending deletions.
	// 
	// Pop3Reset[3] or Pop3EndSessionNoQuit[4] cancels uncommitted deletion marks.
	// 
	// If no POP3 session is active, Chilkat connects and authenticates automatically.
	// 
	// 
	// References:
	// [1] #ImmediateDelete
	// [2] #Pop3EndSession
	// [3] #Pop3Reset
	// [4] #Pop3EndSessionNoQuit
	CkTask *DeleteByUidlAsync(const char *uidl);


	// Deletes a POP3 message by using the UIDL stored in the X-UIDL header of the
	// Email in email. If email does not contain an X-UIDL header, the method fails.
	// 
	// If no POP3 session is active, Chilkat connects and authenticates automatically.
	// The UIDL is used to locate the corresponding message in the current mailbox.
	// 
	// If ImmediateDelete[1] is true, which is the default, Chilkat marks the message
	// for deletion, sends QUIT to commit the deletion, and closes the POP3 session
	// before returning. If it is false, the message is marked with DELE and the
	// deletion remains pending until Pop3EndSession[2] sends QUIT.
	// 
	// Pop3Reset[3] or Pop3EndSessionNoQuit[4] cancels uncommitted deletion marks.
	// Uncommitted marks are also forgotten if the POP3 connection is lost before QUIT
	// is sent.
	// 
	// 
	// References:
	// [1] #ImmediateDelete
	// [2] #Pop3EndSession
	// [3] #Pop3Reset
	// [4] #Pop3EndSessionNoQuit
	bool DeleteEmail(CkEmail &email);

	// Deletes a POP3 message by using the UIDL stored in the X-UIDL header of the
	// Email in email. If email does not contain an X-UIDL header, the method fails.
	// 
	// If no POP3 session is active, Chilkat connects and authenticates automatically.
	// The UIDL is used to locate the corresponding message in the current mailbox.
	// 
	// If ImmediateDelete[1] is true, which is the default, Chilkat marks the message
	// for deletion, sends QUIT to commit the deletion, and closes the POP3 session
	// before returning. If it is false, the message is marked with DELE and the
	// deletion remains pending until Pop3EndSession[2] sends QUIT.
	// 
	// Pop3Reset[3] or Pop3EndSessionNoQuit[4] cancels uncommitted deletion marks.
	// Uncommitted marks are also forgotten if the POP3 connection is lost before QUIT
	// is sent.
	// 
	// 
	// References:
	// [1] #ImmediateDelete
	// [2] #Pop3EndSession
	// [3] #Pop3Reset
	// [4] #Pop3EndSessionNoQuit
	CkTask *DeleteEmailAsync(CkEmail &email);


	// Deprecated: Use DeleteUidlSet[1] instead.
	// 
	// Marks each POP3 message whose UIDL appears in uidlArray for deletion.
	// 
	// POP3 deletions are committed when the session ends with QUIT. With the default
	// setting ImmediateDelete = true, MailMan sends QUIT automatically. For a
	// sequence of deletion calls, set ImmediateDelete = false, mark all messages,
	// and call Pop3EndSession[2] once.
	// 
	// 
	// References:
	// [1] #DeleteUidlSet
	// [2] #Pop3EndSession
	bool DeleteMultiple(CkStringArray &uidlArray);

	// Deprecated: Use DeleteUidlSet[1] instead.
	// 
	// Marks each POP3 message whose UIDL appears in uidlArray for deletion.
	// 
	// POP3 deletions are committed when the session ends with QUIT. With the default
	// setting ImmediateDelete = true, MailMan sends QUIT automatically. For a
	// sequence of deletion calls, set ImmediateDelete = false, mark all messages,
	// and call Pop3EndSession[2] once.
	// 
	// 
	// References:
	// [1] #DeleteUidlSet
	// [2] #Pop3EndSession
	CkTask *DeleteMultipleAsync(CkStringArray &uidlArray);


	// Marks the POP3 messages whose UIDLs are listed in stUidls for deletion.
	// 
	// Chilkat processes the UIDL set and sends DELE for each located message. If a
	// connection failure occurs before processing is complete, the POP3 session is
	// lost and all uncommitted deletion marks are forgotten.
	// 
	// If ImmediateDelete[1] is true, which is the default, Chilkat sends a single
	// QUIT after the entire set has been processed. This commits all deletion marks
	// and closes the POP3 session. If it is false, the marks remain pending until
	// the application calls Pop3EndSession[2].
	// 
	// When making multiple deletion calls, it is usually more efficient to set
	// ImmediateDelete to false, perform all deletion operations, and call
	// Pop3EndSession once at the end.
	// 
	// 
	// References:
	// [1] #ImmediateDelete
	// [2] #Pop3EndSession
	bool DeleteUidlSet(CkStringTable &stUidls);

	// Marks the POP3 messages whose UIDLs are listed in stUidls for deletion.
	// 
	// Chilkat processes the UIDL set and sends DELE for each located message. If a
	// connection failure occurs before processing is complete, the POP3 session is
	// lost and all uncommitted deletion marks are forgotten.
	// 
	// If ImmediateDelete[1] is true, which is the default, Chilkat sends a single
	// QUIT after the entire set has been processed. This commits all deletion marks
	// and closes the POP3 session. If it is false, the marks remain pending until
	// the application calls Pop3EndSession[2].
	// 
	// When making multiple deletion calls, it is usually more efficient to set
	// ImmediateDelete to false, perform all deletion operations, and call
	// Pop3EndSession once at the end.
	// 
	// 
	// References:
	// [1] #ImmediateDelete
	// [2] #Pop3EndSession
	CkTask *DeleteUidlSetAsync(CkStringTable &stUidls);


	// Retrieves messages from the POP3 mailbox and appends them to the EmailBundle in
	// bundle. Existing emails in bundle are preserved.
	// 
	// If headersOnly is true, Chilkat retrieves the message headers and a partial body.
	// numBodyLines specifies the number of body lines; a value of 0 retrieves the first body
	// line. Attachments are not downloaded. If headersOnly is false, Chilkat retrieves the
	// complete messages, including attachments.
	// 
	// If keepOnServer is true, every retrieved message remains on the POP3 server,
	// regardless of ImmediateDelete[1].
	// 
	// If keepOnServer is false and complete messages are retrieved, Chilkat sends DELE for
	// each message after it is downloaded. If ImmediateDelete = true, Chilkat sends
	// QUIT only after the entire requested set has been downloaded successfully; this
	// commits the deletions and closes the POP3 session. If ImmediateDelete = false,
	// the deletion marks remain pending in the open session until the application
	// calls Pop3EndSession[2].
	// 
	// If the POP3 connection is lost before QUIT, the session ends and the server
	// forgets all uncommitted deletion marks. Chilkat automatically reconnects and
	// establishes a new session when the next POP3 method is called.
	// 
	// Header-only or partial retrieval never marks messages for deletion, regardless
	// of keepOnServer or ImmediateDelete.
	// 
	// MaxCount[3] can limit the result to the newest messages. SizeLimit[4] can omit
	// oversized messages from full-message retrieval.
	// 
	// If an error occurs while retrieving multiple messages, processing stops at the
	// first failure. Messages that were successfully retrieved before the failure
	// remain appended to the output EmailBundle; Chilkat does not remove those results
	// or restore the bundle to its prior state.
	// 
	// 
	// References:
	// [1] #ImmediateDelete
	// [2] #Pop3EndSession
	// [3] #MaxCount
	// [4] #SizeLimit
	bool FetchAll(bool keepOnServer, bool headersOnly, int numBodyLines, CkEmailBundle &bundle);

	// Retrieves messages from the POP3 mailbox and appends them to the EmailBundle in
	// bundle. Existing emails in bundle are preserved.
	// 
	// If headersOnly is true, Chilkat retrieves the message headers and a partial body.
	// numBodyLines specifies the number of body lines; a value of 0 retrieves the first body
	// line. Attachments are not downloaded. If headersOnly is false, Chilkat retrieves the
	// complete messages, including attachments.
	// 
	// If keepOnServer is true, every retrieved message remains on the POP3 server,
	// regardless of ImmediateDelete[1].
	// 
	// If keepOnServer is false and complete messages are retrieved, Chilkat sends DELE for
	// each message after it is downloaded. If ImmediateDelete = true, Chilkat sends
	// QUIT only after the entire requested set has been downloaded successfully; this
	// commits the deletions and closes the POP3 session. If ImmediateDelete = false,
	// the deletion marks remain pending in the open session until the application
	// calls Pop3EndSession[2].
	// 
	// If the POP3 connection is lost before QUIT, the session ends and the server
	// forgets all uncommitted deletion marks. Chilkat automatically reconnects and
	// establishes a new session when the next POP3 method is called.
	// 
	// Header-only or partial retrieval never marks messages for deletion, regardless
	// of keepOnServer or ImmediateDelete.
	// 
	// MaxCount[3] can limit the result to the newest messages. SizeLimit[4] can omit
	// oversized messages from full-message retrieval.
	// 
	// If an error occurs while retrieving multiple messages, processing stops at the
	// first failure. Messages that were successfully retrieved before the failure
	// remain appended to the output EmailBundle; Chilkat does not remove those results
	// or restore the bundle to its prior state.
	// 
	// 
	// References:
	// [1] #ImmediateDelete
	// [2] #Pop3EndSession
	// [3] #MaxCount
	// [4] #SizeLimit
	CkTask *FetchAllAsync(bool keepOnServer, bool headersOnly, int numBodyLines, CkEmailBundle &bundle);


	// Deprecated: Use FetchOne[1] instead.
	// 
	// Retrieves the message identified by the POP3 message number in msgnum. The message
	// remains on the server.
	// 
	// Important: POP3 message numbers are valid only within the current session and
	// can change after messages are deleted or a new session begins. A POP3 session
	// must already be active; this method does not open a new session automatically.
	// 
	// 
	// References:
	// [1] #FetchOne
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *FetchByMsgnum(int msgnum);

	// Deprecated: Use FetchOne[1] instead.
	// 
	// Retrieves the message identified by the POP3 message number in msgnum. The message
	// remains on the server.
	// 
	// Important: POP3 message numbers are valid only within the current session and
	// can change after messages are deleted or a new session begins. A POP3 session
	// must already be active; this method does not open a new session automatically.
	// 
	// 
	// References:
	// [1] #FetchOne
	CkTask *FetchByMsgnumAsync(int msgnum);


	// Retrieves one message by UIDL and stores it in the Email in email. The message
	// remains on the POP3 server.
	// 
	// If headerOnly is true, Chilkat retrieves the headers and a partial body. numBodyLines
	// specifies the number of body lines; a value of 0 retrieves the first body line.
	// Attachments are not downloaded. If headerOnly is false, Chilkat retrieves the
	// complete message, including attachments.
	// 
	// If uidl is not found or the fetch otherwise fails, email is left unchanged.
	// 
	bool FetchByUidl(const char *uidl, bool headerOnly, int numBodyLines, CkEmail &email);

	// Retrieves one message by UIDL and stores it in the Email in email. The message
	// remains on the POP3 server.
	// 
	// If headerOnly is true, Chilkat retrieves the headers and a partial body. numBodyLines
	// specifies the number of body lines; a value of 0 retrieves the first body line.
	// Attachments are not downloaded. If headerOnly is false, Chilkat retrieves the
	// complete message, including attachments.
	// 
	// If uidl is not found or the fetch otherwise fails, email is left unchanged.
	// 
	CkTask *FetchByUidlAsync(const char *uidl, bool headerOnly, int numBodyLines, CkEmail &email);


	// Deprecated: Use FetchByUidl[1] instead.
	// 
	// Retrieves the POP3 message identified by the UIDL in uidl. The message remains
	// on the server.
	// 
	// UIDLs are generally preferable to POP3 message numbers because they remain
	// stable across sessions while the message remains in the mailbox.
	// 
	// 
	// References:
	// [1] #FetchByUidl
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *FetchEmail(const char *uidl);

	// Deprecated: Use FetchByUidl[1] instead.
	// 
	// Retrieves the POP3 message identified by the UIDL in uidl. The message remains
	// on the server.
	// 
	// UIDLs are generally preferable to POP3 message numbers because they remain
	// stable across sessions while the message remains in the mailbox.
	// 
	// 
	// References:
	// [1] #FetchByUidl
	CkTask *FetchEmailAsync(const char *uidl);


	// Downloads the complete version of the header-only or partial Email in partialEmail and
	// stores it in fullEmail. The full result includes the complete body and any
	// attachments.
	// 
	// partialEmail must retain the UIDL needed to locate the same message in the POP3 mailbox.
	// The original POP3 session is not required; Chilkat connects and authenticates
	// automatically when a session is not already active.
	// 
	// If the UIDL no longer exists in the mailbox, or if the full message cannot be
	// downloaded for another reason, the method fails and fullEmail remains unchanged.
	// 
	// This method is useful when an application first retrieves headers or partial
	// bodies and downloads the complete message only after the user selects it.
	// 
	bool FetchFull(CkEmail &partialEmail, CkEmail &fullEmail);

	// Downloads the complete version of the header-only or partial Email in partialEmail and
	// stores it in fullEmail. The full result includes the complete body and any
	// attachments.
	// 
	// partialEmail must retain the UIDL needed to locate the same message in the POP3 mailbox.
	// The original POP3 session is not required; Chilkat connects and authenticates
	// automatically when a session is not already active.
	// 
	// If the UIDL no longer exists in the mailbox, or if the full message cannot be
	// downloaded for another reason, the method fails and fullEmail remains unchanged.
	// 
	// This method is useful when an application first retrieves headers or partial
	// bodies and downloads the complete message only after the user selects it.
	// 
	CkTask *FetchFullAsync(CkEmail &partialEmail, CkEmail &fullEmail);


	// Retrieves the POP3 message identified by the UIDL in uidl and returns its raw
	// MIME bytes. The message remains on the server.
	// 
	// Use a byte-oriented result because MIME can contain arbitrary binary data and
	// multiple character encodings.
	// 
	bool FetchMime(const char *uidl, CkByteData &outData);

	// Retrieves the POP3 message identified by the UIDL in uidl and returns its raw
	// MIME bytes. The message remains on the server.
	// 
	// Use a byte-oriented result because MIME can contain arbitrary binary data and
	// multiple character encodings.
	// 
	CkTask *FetchMimeAsync(const char *uidl);


	// Fetches an email from the POP3 server by UIDL and stores the raw MIME source
	// bytes in mimeData.
	// 
	// Chilkat clears the existing contents of mimeData before attempting the download. If
	// the method succeeds, mimeData contains the downloaded MIME bytes. If it fails, mimeData
	// remains empty.
	// 
	bool FetchMimeBd(const char *uidl, CkBinData &mimeData);

	// Fetches an email from the POP3 server by UIDL and stores the raw MIME source
	// bytes in mimeData.
	// 
	// Chilkat clears the existing contents of mimeData before attempting the download. If
	// the method succeeds, mimeData contains the downloaded MIME bytes. If it fails, mimeData
	// remains empty.
	// 
	CkTask *FetchMimeBdAsync(const char *uidl, CkBinData &mimeData);


	// Retrieves an email by POP3 message number and returns the raw MIME source bytes.
	// 
	// Important: Message numbers are specific to a single POP3 session and can change
	// from one session to the next. For example, if a mailbox contains ten messages,
	// they are numbered 1 through 10. If message 1 is deleted and a new POP3 session
	// is opened, the remaining messages are renumbered 1 through 9.
	// 
	// A POP3 session must already be established before this method is called, either
	// explicitly by calling Pop3BeginSession[1] or implicitly by calling another
	// method that opens the session. This method does not automatically begin a new
	// POP3 session because doing so could change the message numbers.
	// 
	// 
	// References:
	// [1] #Pop3BeginSession
	bool FetchMimeByMsgnum(int msgnum, CkByteData &outBytes);

	// Retrieves an email by POP3 message number and returns the raw MIME source bytes.
	// 
	// Important: Message numbers are specific to a single POP3 session and can change
	// from one session to the next. For example, if a mailbox contains ten messages,
	// they are numbered 1 through 10. If message 1 is deleted and a new POP3 session
	// is opened, the remaining messages are renumbered 1 through 9.
	// 
	// A POP3 session must already be established before this method is called, either
	// explicitly by calling Pop3BeginSession[1] or implicitly by calling another
	// method that opens the session. This method does not automatically begin a new
	// POP3 session because doing so could change the message numbers.
	// 
	// 
	// References:
	// [1] #Pop3BeginSession
	CkTask *FetchMimeByMsgnumAsync(int msgnum);


	// Retrieves an email by POP3 message number and stores the raw MIME source bytes
	// in bd.
	// 
	// Chilkat clears the existing contents of bd before attempting the download. If
	// the method succeeds, bd contains the downloaded MIME bytes. If it fails, bd
	// remains empty.
	// 
	// Important: Message numbers are specific to a single POP3 session and can change
	// from one session to the next. For example, if a mailbox contains ten messages,
	// they are numbered 1 through 10. If message 1 is deleted and a new POP3 session
	// is opened, the remaining messages are renumbered 1 through 9.
	// 
	// A POP3 session must already be established before this method is called, either
	// explicitly by calling Pop3BeginSession[1] or implicitly by calling another
	// method that opens the session. This method does not automatically begin a new
	// POP3 session because doing so could change the message numbers.
	// 
	// 
	// References:
	// [1] #Pop3BeginSession
	bool FetchMimeByMsgnumBd(int msgnum, CkBinData &bd);

	// Retrieves an email by POP3 message number and stores the raw MIME source bytes
	// in bd.
	// 
	// Chilkat clears the existing contents of bd before attempting the download. If
	// the method succeeds, bd contains the downloaded MIME bytes. If it fails, bd
	// remains empty.
	// 
	// Important: Message numbers are specific to a single POP3 session and can change
	// from one session to the next. For example, if a mailbox contains ten messages,
	// they are numbered 1 through 10. If message 1 is deleted and a new POP3 session
	// is opened, the remaining messages are renumbered 1 through 9.
	// 
	// A POP3 session must already be established before this method is called, either
	// explicitly by calling Pop3BeginSession[1] or implicitly by calling another
	// method that opens the session. This method does not automatically begin a new
	// POP3 session because doing so could change the message numbers.
	// 
	// 
	// References:
	// [1] #Pop3BeginSession
	CkTask *FetchMimeByMsgnumBdAsync(int msgnum, CkBinData &bd);


	// Deprecated: Use FetchUidlSet[1] instead.
	// 
	// Retrieves each POP3 message whose UIDL appears in uidlArray and returns the messages
	// in an EmailBundle. The downloaded messages remain on the server.
	// 
	// 
	// References:
	// [1] #FetchUidlSet
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *FetchMultiple(CkStringArray &uidlArray);

	// Deprecated: Use FetchUidlSet[1] instead.
	// 
	// Retrieves each POP3 message whose UIDL appears in uidlArray and returns the messages
	// in an EmailBundle. The downloaded messages remain on the server.
	// 
	// 
	// References:
	// [1] #FetchUidlSet
	CkTask *FetchMultipleAsync(CkStringArray &uidlArray);


	// Deprecated: Use FetchUidlSet[1] instead.
	// 
	// Retrieves partial messages for the UIDLs in uidlArray. Each returned Email contains
	// the complete message headers and at most the first numBodyLines lines of the body;
	// attachments are not downloaded.
	// 
	// 
	// References:
	// [1] #FetchUidlSet
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *FetchMultipleHeaders(CkStringArray &uidlArray, int numBodyLines);

	// Deprecated: Use FetchUidlSet[1] instead.
	// 
	// Retrieves partial messages for the UIDLs in uidlArray. Each returned Email contains
	// the complete message headers and at most the first numBodyLines lines of the body;
	// attachments are not downloaded.
	// 
	// 
	// References:
	// [1] #FetchUidlSet
	CkTask *FetchMultipleHeadersAsync(CkStringArray &uidlArray, int numBodyLines);


	// Deprecated: Use FetchMimeBd[1] for individual raw MIME messages, or retrieve
	// messages as Email objects.
	// 
	// Downloads the messages identified by the UIDLs in uidlArray and returns their MIME
	// content as strings.
	// 
	// MIME can contain unencoded binary data and mixed character encodings, so a
	// string is not a reliable container for arbitrary MIME. Byte-oriented methods are
	// preferred.
	// 
	// 
	// References:
	// [1] #FetchMimeBd
	// The caller is responsible for deleting the object returned by this method.
	CkStringArray *FetchMultipleMime(CkStringArray &uidlArray);

	// Deprecated: Use FetchMimeBd[1] for individual raw MIME messages, or retrieve
	// messages as Email objects.
	// 
	// Downloads the messages identified by the UIDLs in uidlArray and returns their MIME
	// content as strings.
	// 
	// MIME can contain unencoded binary data and mixed character encodings, so a
	// string is not a reliable container for arbitrary MIME. Byte-oriented methods are
	// preferred.
	// 
	// 
	// References:
	// [1] #FetchMimeBd
	CkTask *FetchMultipleMimeAsync(CkStringArray &uidlArray);


	// Retrieves one message by POP3 message number and stores it in the Email in email.
	// The first message has number 1. The message remains on the server.
	// 
	// If headerOnly is true, Chilkat retrieves the headers and a partial body. numBodyLines
	// specifies the number of body lines; a value of 0 retrieves the first body line.
	// Attachments are not downloaded. If headerOnly is false, Chilkat retrieves the
	// complete message, including attachments.
	// 
	// If the message number is invalid or the fetch otherwise fails, email is left
	// unchanged.
	// 
	// POP3 message numbers are specific to the current mailbox state and can change
	// between sessions. Use UIDLs when a message must be identified reliably across
	// sessions.
	// 
	bool FetchOne(bool headerOnly, int numBodyLines, int msgNum, CkEmail &email);

	// Retrieves one message by POP3 message number and stores it in the Email in email.
	// The first message has number 1. The message remains on the server.
	// 
	// If headerOnly is true, Chilkat retrieves the headers and a partial body. numBodyLines
	// specifies the number of body lines; a value of 0 retrieves the first body line.
	// Attachments are not downloaded. If headerOnly is false, Chilkat retrieves the
	// complete message, including attachments.
	// 
	// If the message number is invalid or the fetch otherwise fails, email is left
	// unchanged.
	// 
	// POP3 message numbers are specific to the current mailbox state and can change
	// between sessions. Use UIDLs when a message must be identified reliably across
	// sessions.
	// 
	CkTask *FetchOneAsync(bool headerOnly, int numBodyLines, int msgNum, CkEmail &email);


	// Retrieves a range of messages from the POP3 mailbox and appends them to the
	// EmailBundle in bundle. Existing emails in bundle are preserved.
	// 
	// startIndex and endIndex are zero-based, inclusive indexes in the server's current mailbox
	// order. The messages are appended in increasing index order. If endIndex extends past
	// the end of the mailbox, Chilkat stops at the final message. If startIndex is greater
	// than endIndex, the method succeeds without appending any messages.
	// 
	// If headersOnly is true, Chilkat retrieves the message headers and a partial body.
	// numBodyLines specifies the number of body lines; a value of 0 retrieves the first body
	// line. Attachments are not downloaded. If headersOnly is false, Chilkat retrieves the
	// complete messages, including attachments.
	// 
	// If keepOnServer is true, every retrieved message remains on the POP3 server,
	// regardless of ImmediateDelete[1].
	// 
	// If keepOnServer is false and complete messages are retrieved, Chilkat sends DELE for
	// each message after it is downloaded. If ImmediateDelete = true, Chilkat sends
	// QUIT only after the entire requested set has been downloaded successfully; this
	// commits the deletions and closes the POP3 session. If ImmediateDelete = false,
	// the deletion marks remain pending in the open session until the application
	// calls Pop3EndSession[2].
	// 
	// If the POP3 connection is lost before QUIT, the session ends and the server
	// forgets all uncommitted deletion marks. Chilkat automatically reconnects and
	// establishes a new session when the next POP3 method is called.
	// 
	// Header-only or partial retrieval never marks messages for deletion, regardless
	// of keepOnServer or ImmediateDelete.
	// 
	// If an error occurs while retrieving multiple messages, processing stops at the
	// first failure. Messages that were successfully retrieved before the failure
	// remain appended to the output EmailBundle; Chilkat does not remove those results
	// or restore the bundle to its prior state.
	// 
	// 
	// References:
	// [1] #ImmediateDelete
	// [2] #Pop3EndSession
	bool FetchRange(bool keepOnServer, bool headersOnly, int numBodyLines, int startIndex, int endIndex, CkEmailBundle &bundle);

	// Retrieves a range of messages from the POP3 mailbox and appends them to the
	// EmailBundle in bundle. Existing emails in bundle are preserved.
	// 
	// startIndex and endIndex are zero-based, inclusive indexes in the server's current mailbox
	// order. The messages are appended in increasing index order. If endIndex extends past
	// the end of the mailbox, Chilkat stops at the final message. If startIndex is greater
	// than endIndex, the method succeeds without appending any messages.
	// 
	// If headersOnly is true, Chilkat retrieves the message headers and a partial body.
	// numBodyLines specifies the number of body lines; a value of 0 retrieves the first body
	// line. Attachments are not downloaded. If headersOnly is false, Chilkat retrieves the
	// complete messages, including attachments.
	// 
	// If keepOnServer is true, every retrieved message remains on the POP3 server,
	// regardless of ImmediateDelete[1].
	// 
	// If keepOnServer is false and complete messages are retrieved, Chilkat sends DELE for
	// each message after it is downloaded. If ImmediateDelete = true, Chilkat sends
	// QUIT only after the entire requested set has been downloaded successfully; this
	// commits the deletions and closes the POP3 session. If ImmediateDelete = false,
	// the deletion marks remain pending in the open session until the application
	// calls Pop3EndSession[2].
	// 
	// If the POP3 connection is lost before QUIT, the session ends and the server
	// forgets all uncommitted deletion marks. Chilkat automatically reconnects and
	// establishes a new session when the next POP3 method is called.
	// 
	// Header-only or partial retrieval never marks messages for deletion, regardless
	// of keepOnServer or ImmediateDelete.
	// 
	// If an error occurs while retrieving multiple messages, processing stops at the
	// first failure. Messages that were successfully retrieved before the failure
	// remain appended to the output EmailBundle; Chilkat does not remove those results
	// or restore the bundle to its prior state.
	// 
	// 
	// References:
	// [1] #ImmediateDelete
	// [2] #Pop3EndSession
	CkTask *FetchRangeAsync(bool keepOnServer, bool headersOnly, int numBodyLines, int startIndex, int endIndex, CkEmailBundle &bundle);


	// Deprecated: Use FetchOne[1] instead.
	// 
	// Retrieves a partial message by POP3 message number. numBodyLines specifies the maximum
	// number of body lines to include, and messageNumber specifies the POP3 message number.
	// 
	// The returned Email contains the message headers and partial body but does not
	// contain attachments. POP3 message numbers are session-specific and can change
	// between sessions.
	// 
	// 
	// References:
	// [1] #FetchOne
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *FetchSingleHeader(int numBodyLines, int messageNumber);

	// Deprecated: Use FetchOne[1] instead.
	// 
	// Retrieves a partial message by POP3 message number. numBodyLines specifies the maximum
	// number of body lines to include, and messageNumber specifies the POP3 message number.
	// 
	// The returned Email contains the message headers and partial body but does not
	// contain attachments. POP3 message numbers are session-specific and can change
	// between sessions.
	// 
	// 
	// References:
	// [1] #FetchOne
	CkTask *FetchSingleHeaderAsync(int numBodyLines, int messageNumber);


	// Deprecated: Use FetchByUidl[1] instead.
	// 
	// Retrieves a partial message by UIDL. numBodyLines specifies the maximum number of body
	// lines to include, and uidl specifies the UIDL.
	// 
	// The returned Email contains the message headers and partial body but does not
	// contain attachments.
	// 
	// 
	// References:
	// [1] #FetchByUidl
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *FetchSingleHeaderByUidl(int numBodyLines, const char *uidl);

	// Deprecated: Use FetchByUidl[1] instead.
	// 
	// Retrieves a partial message by UIDL. numBodyLines specifies the maximum number of body
	// lines to include, and uidl specifies the UIDL.
	// 
	// The returned Email contains the message headers and partial body but does not
	// contain attachments.
	// 
	// 
	// References:
	// [1] #FetchByUidl
	CkTask *FetchSingleHeaderByUidlAsync(int numBodyLines, const char *uidl);


	// Retrieves the UIDLs of the messages currently stored in the POP3 mailbox and
	// stores them in uidls. The UIDLs are returned in the server's current mailbox
	// order, with one entry for each message.
	// 
	// A POP3 UIDL, or Unique ID Listing, is a persistent identifier assigned by the
	// mail server. Unlike POP3 message numbers, which can change between sessions, a
	// UIDL remains stable for as long as the message remains in the mailbox.
	// 
	// If no POP3 session is active, Chilkat connects and authenticates automatically.
	// After a successful call, the session remains open for reuse by subsequent POP3
	// methods.
	// 
	bool FetchUidls(CkStringTable &uidls);

	// Retrieves the UIDLs of the messages currently stored in the POP3 mailbox and
	// stores them in uidls. The UIDLs are returned in the server's current mailbox
	// order, with one entry for each message.
	// 
	// A POP3 UIDL, or Unique ID Listing, is a persistent identifier assigned by the
	// mail server. Unlike POP3 message numbers, which can change between sessions, a
	// UIDL remains stable for as long as the message remains in the mailbox.
	// 
	// If no POP3 session is active, Chilkat connects and authenticates automatically.
	// After a successful call, the session remains open for reuse by subsequent POP3
	// methods.
	// 
	CkTask *FetchUidlsAsync(CkStringTable &uidls);


	// Retrieves the messages whose UIDLs are listed in uidls and appends them to the
	// EmailBundle in bundle. Existing emails in bundle are preserved, and the retrieved
	// messages remain on the POP3 server.
	// 
	// UIDLs are processed in the order in which they occur in uidls. A duplicate UIDL
	// causes the same message to be appended again. A UIDL that is not present in the
	// mailbox is ignored and does not by itself cause the method to fail.
	// 
	// If headersOnly is true, Chilkat retrieves the headers and a partial body. numBodyLines
	// specifies the number of body lines; a value of 0 retrieves the first body line.
	// Attachments are not downloaded. If headersOnly is false, Chilkat retrieves the
	// complete messages, including attachments.
	// 
	// If an error occurs while retrieving multiple messages, processing stops at the
	// first failure. Messages that were successfully retrieved before the failure
	// remain appended to the output EmailBundle; Chilkat does not remove those results
	// or restore the bundle to its prior state.
	// 
	bool FetchUidlSet(CkStringTable &uidls, bool headersOnly, int numBodyLines, CkEmailBundle &bundle);

	// Retrieves the messages whose UIDLs are listed in uidls and appends them to the
	// EmailBundle in bundle. Existing emails in bundle are preserved, and the retrieved
	// messages remain on the POP3 server.
	// 
	// UIDLs are processed in the order in which they occur in uidls. A duplicate UIDL
	// causes the same message to be appended again. A UIDL that is not present in the
	// mailbox is ignored and does not by itself cause the method to fail.
	// 
	// If headersOnly is true, Chilkat retrieves the headers and a partial body. numBodyLines
	// specifies the number of body lines; a value of 0 retrieves the first body line.
	// Attachments are not downloaded. If headersOnly is false, Chilkat retrieves the
	// complete messages, including attachments.
	// 
	// If an error occurs while retrieving multiple messages, processing stops at the
	// first failure. Messages that were successfully retrieved before the failure
	// remain appended to the output EmailBundle; Chilkat does not remove those results
	// or restore the bundle to its prior state.
	// 
	CkTask *FetchUidlSetAsync(CkStringTable &uidls, bool headersOnly, int numBodyLines, CkEmailBundle &bundle);


	// Deprecated: Use FetchAll[1] instead.
	// 
	// Retrieves partial representations of messages in the POP3 mailbox. Each returned
	// Email contains the complete headers and at most the first numBodyLines lines of the
	// body; attachments are not downloaded.
	// 
	// MaxCount[2] limits the number of messages returned when it is greater than 0.
	// 
	// 
	// References:
	// [1] #FetchAll
	// [2] #MaxCount
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *GetAllHeaders(int numBodyLines);

	// Deprecated: Use FetchAll[1] instead.
	// 
	// Retrieves partial representations of messages in the POP3 mailbox. Each returned
	// Email contains the complete headers and at most the first numBodyLines lines of the
	// body; attachments are not downloaded.
	// 
	// MaxCount[2] limits the number of messages returned when it is greater than 0.
	// 
	// 
	// References:
	// [1] #FetchAll
	// [2] #MaxCount
	CkTask *GetAllHeadersAsync(int numBodyLines);


	// Deprecated: Use SmtpRecipientsLog[1] instead.
	// 
	// Returns recipient addresses rejected by the SMTP server during the most recent
	// email-send operation. MailMan clears its accepted and rejected recipient lists
	// at the beginning of each new send operation.
	// 
	// An SMTP server can usually verify only recipients in domains it manages
	// directly. An address accepted during the SMTP transaction may still fail later
	// at another mail server.
	// 
	// 
	// References:
	// [1] #SmtpRecipientsLog
	// The caller is responsible for deleting the object returned by this method.
	CkStringArray *GetBadEmailAddrs(void);


	// Deprecated: Use FetchFull[1] instead.
	// 
	// Uses the partial or header-only email in email to locate and download the complete
	// message from the POP3 server, including the full body and attachments.
	// 
	// 
	// References:
	// [1] #FetchFull
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *GetFullEmail(CkEmail &email);

	// Deprecated: Use FetchFull[1] instead.
	// 
	// Uses the partial or header-only email in email to locate and download the complete
	// message from the POP3 server, including the full body and attachments.
	// 
	// 
	// References:
	// [1] #FetchFull
	CkTask *GetFullEmailAsync(CkEmail &email);


	// Deprecated: Use FetchRange[1] instead.
	// 
	// Retrieves partial messages from the zero-based mailbox index range fromIndex through
	// toIndex. Each returned Email contains the complete headers and at most the first
	// numBodyLines lines of the body; attachments are not downloaded.
	// 
	// MaxCount[2] limits the number of messages returned when it is greater than 0.
	// 
	// 
	// References:
	// [1] #FetchRange
	// [2] #MaxCount
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *GetHeaders(int numBodyLines, int fromIndex, int toIndex);

	// Deprecated: Use FetchRange[1] instead.
	// 
	// Retrieves partial messages from the zero-based mailbox index range fromIndex through
	// toIndex. Each returned Email contains the complete headers and at most the first
	// numBodyLines lines of the body; attachments are not downloaded.
	// 
	// MaxCount[2] limits the number of messages returned when it is greater than 0.
	// 
	// 
	// References:
	// [1] #FetchRange
	// [2] #MaxCount
	CkTask *GetHeadersAsync(int numBodyLines, int fromIndex, int toIndex);


	// Copies into json any structured JSON details produced by the immediately
	// preceding method call.
	// 
	// Not every MailMan method produces JSON details. Call this method immediately
	// after the operation of interest so the returned information corresponds to that
	// operation.
	// 
	void GetLastJsonData(CkJsonObject &json);


	// Returns the number of emails currently available in the POP3 mailbox. Returns -1
	// if an error occurs.
	// 
	// This method is functionally identical to CheckMail[1].
	// 
	// 
	// References:
	// [1] #CheckMail
	int GetMailboxCount(void);

	// Returns the number of emails currently available in the POP3 mailbox. Returns -1
	// if an error occurs.
	// 
	// This method is functionally identical to CheckMail[1].
	// 
	// 
	// References:
	// [1] #CheckMail
	CkTask *GetMailboxCountAsync(void);


	// Returns an XML document containing information about the messages currently
	// stored in the POP3 mailbox.
	// 
	// The XML includes the UIDL and size, in bytes, for each message in the mailbox.
	// This is useful for scanning mailbox state without downloading the full messages.
	// 
	bool GetMailboxInfoXml(CkString &outXml);

	// Returns an XML document containing information about the messages currently
	// stored in the POP3 mailbox.
	// 
	// The XML includes the UIDL and size, in bytes, for each message in the mailbox.
	// This is useful for scanning mailbox state without downloading the full messages.
	// 
	const char *getMailboxInfoXml(void);
	// Returns an XML document containing information about the messages currently
	// stored in the POP3 mailbox.
	// 
	// The XML includes the UIDL and size, in bytes, for each message in the mailbox.
	// This is useful for scanning mailbox state without downloading the full messages.
	// 
	const char *mailboxInfoXml(void);

	// Returns an XML document containing information about the messages currently
	// stored in the POP3 mailbox.
	// 
	// The XML includes the UIDL and size, in bytes, for each message in the mailbox.
	// This is useful for scanning mailbox state without downloading the full messages.
	// 
	CkTask *GetMailboxInfoXmlAsync(void);


	// Returns the total combined size, in bytes, of all messages currently stored in
	// the POP3 mailbox. This is also known as the POP3 maildrop size.
	// 
	// If no POP3 session is active, Chilkat connects and authenticates automatically.
	// After a successful call, the session remains open for reuse by subsequent POP3
	// methods.
	// 
	// Returns -1 on failure.
	// 
	unsigned long GetMailboxSize(void);

	// Returns the total combined size, in bytes, of all messages currently stored in
	// the POP3 mailbox. This is also known as the POP3 maildrop size.
	// 
	// If no POP3 session is active, Chilkat connects and authenticates automatically.
	// After a successful call, the session remains open for reuse by subsequent POP3
	// methods.
	// 
	// Returns -1 on failure.
	// 
	CkTask *GetMailboxSizeAsync(void);


	// Deprecated: Use GetServerCert[1] instead.
	// 
	// Returns the certificate presented by the POP3 server for the current SSL/TLS
	// connection. The certificate is available only after a secure POP3 connection has
	// been established.
	// 
	// 
	// References:
	// [1] #GetServerCert
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetPop3SslServerCert(void);


	// Deprecated: Use SmtpRecipientsLog[1] instead.
	// 
	// Returns recipient addresses accepted by the SMTP server during the most recent
	// email-send operation. MailMan clears its accepted and rejected recipient lists
	// at the beginning of each new send operation.
	// 
	// Acceptance by the current SMTP server does not guarantee final delivery to the
	// destination mailbox.
	// 
	// 
	// References:
	// [1] #SmtpRecipientsLog
	// The caller is responsible for deleting the object returned by this method.
	CkStringArray *GetSentToEmailAddrs(void);


	// Gets the digital certificate presented by the SMTP or POP3 server for the
	// current SSL/TLS connection and stores it in cert.
	// 
	// If useSmtp is true, Chilkat returns the certificate for the SMTP connection. If
	// useSmtp is false, Chilkat returns the certificate for the POP3 connection.
	// 
	// This method applies only when the current connection uses SSL/TLS.
	// 
	bool GetServerCert(bool useSmtp, CkCert &cert);


	// Returns the size, in bytes, of the email on the POP3 server identified by uidl.
	// The size includes the full message content, including attachments.
	// 
	// Returns -1 if an error occurs.
	// 
	int GetSizeByUidl(const char *uidl);

	// Returns the size, in bytes, of the email on the POP3 server identified by uidl.
	// The size includes the full message content, including attachments.
	// 
	// Returns -1 if an error occurs.
	// 
	CkTask *GetSizeByUidlAsync(const char *uidl);


	// Deprecated: Use GetServerCert[1] instead.
	// 
	// Returns the certificate presented by the SMTP server for the current SSL/TLS
	// connection. The certificate is available only after a secure SMTP connection has
	// been established.
	// 
	// 
	// References:
	// [1] #GetServerCert
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetSmtpSslServerCert(void);


	// Deprecated: Use FetchUidls[1] instead.
	// 
	// Returns the UIDLs of the messages currently stored in the POP3 mailbox, in
	// mailbox order.
	// 
	// 
	// References:
	// [1] #FetchUidls
	// The caller is responsible for deleting the object returned by this method.
	CkStringArray *GetUidls(void);

	// Deprecated: Use FetchUidls[1] instead.
	// 
	// Returns the UIDLs of the messages currently stored in the POP3 mailbox, in
	// mailbox order.
	// 
	// 
	// References:
	// [1] #FetchUidls
	CkTask *GetUidlsAsync(void);


	// Contacts the SMTP server and determines whether it supports the DSN, or Delivery
	// Status Notification, extension defined by RFC 3461.
	// 
	// DSN support is used with properties such as DsnEnvid[1], DsnNotify[2], and
	// DsnRet[3]. Returns true if the SMTP server advertises DSN support, otherwise
	// returns false.
	// 
	// 
	// References:
	// [1] #DsnEnvid
	// [2] #DsnNotify
	// [3] #DsnRet
	bool IsSmtpDsnCapable(void);

	// Contacts the SMTP server and determines whether it supports the DSN, or Delivery
	// Status Notification, extension defined by RFC 3461.
	// 
	// DSN support is used with properties such as DsnEnvid[1], DsnNotify[2], and
	// DsnRet[3]. Returns true if the SMTP server advertises DSN support, otherwise
	// returns false.
	// 
	// 
	// References:
	// [1] #DsnEnvid
	// [2] #DsnNotify
	// [3] #DsnRet
	CkTask *IsSmtpDsnCapableAsync(void);


	// Deprecated: Use GetLastJsonData[1] instead.
	// 
	// Returns a JsonObject containing additional details produced by the immediately
	// preceding method call when that method provides structured diagnostic
	// information. Not every method produces JSON details.
	// 
	// 
	// References:
	// [1] #GetLastJsonData
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *LastJsonData(void);


	// Deprecated: Create an Email object and call its LoadEml method instead.
	// 
	// Loads a single email from the local.eml file at emlFilename and returns the parsed
	// Email object.
	// 
	// emlFilename may be an absolute path, a relative path, or a filename in the current
	// working directory.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *LoadEml(const char *emlFilename);


	// Deprecated: Use LoadMbxFile[1] instead.
	// 
	// Loads emails from the local.mbx mailbox file at mbxFileName and returns them in an
	// EmailBundle. If Filter[2] is set, only matching emails are included.
	// 
	// 
	// References:
	// [1] #LoadMbxFile
	// [2] #Filter
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *LoadMbx(const char *mbxFileName);


	// Loads emails from a.mbx mailbox file and stores them in bundle.
	// 
	// If a filter has been configured, only the emails matching the filter are
	// returned.
	// 
	bool LoadMbxFile(const char *mbxPath, CkEmailBundle &bundle);


	// Deprecated: Create an Email object and call its SetFromMimeText method instead.
	// 
	// Parses the MIME text in mimeText and returns the resulting Email object.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *LoadMime(const char *mimeText);


	// Associates this MailMan object with the original MailMan caller of the
	// asynchronous operation represented by task.
	// 
	// Use this method when the application has a Task but no longer has a reference to
	// the MailMan object that started the asynchronous operation. A common example is
	// code running in a TaskCompleted event handler that needs access to the original
	// MailMan object.
	// 
	// task may be the task returned by any MailMan asynchronous method, and the task
	// does not need to be complete.
	// 
	// This method does not copy the original caller's configuration or state. After it
	// succeeds, this MailMan object refers to the same MailMan state as the original
	// caller. Any state previously associated with this MailMan object is replaced,
	// and changes made through either reference affect the same MailMan instance.
	// 
	bool LoadTaskCaller(CkTask &task);


	// Deprecated: Create an Email object and call its SetFromXmlText method instead.
	// 
	// Loads a single email from the local XML file at filename and returns the
	// reconstructed Email object.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *LoadXmlEmail(const char *filename);


	// Deprecated: Create an Email object and call its SetFromXmlText method instead.
	// 
	// Reconstructs a single Email from the XML text in xmlString.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *LoadXmlEmailString(const char *xmlString);


	// Deprecated: Create an EmailBundle and call its LoadXml method instead.
	// 
	// Loads one or more emails from the local XML file at filename and returns them in an
	// EmailBundle. If Filter[1] is set, only matching emails are included.
	// 
	// 
	// References:
	// [1] #Filter
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *LoadXmlFile(const char *filename);


	// Deprecated: Create an EmailBundle and call its LoadXmlString method instead.
	// 
	// Loads one or more emails from the XML text in xmlString and returns them in an
	// EmailBundle. If Filter[1] is set, only matching emails are included.
	// 
	// 
	// References:
	// [1] #Filter
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *LoadXmlString(const char *xmlString);


	// Deprecated: Use the Dns class for MX lookups.
	// 
	// Performs a DNS MX lookup for the domain portion of the email address in emailAddress and
	// returns the hostname of a mail exchanger.
	// 
	bool MxLookup(const char *emailAddress, CkString &outStrHostname);

	// Deprecated: Use the Dns class for MX lookups.
	// 
	// Performs a DNS MX lookup for the domain portion of the email address in emailAddress and
	// returns the hostname of a mail exchanger.
	// 
	const char *mxLookup(const char *emailAddress);

	// Deprecated: Use the Dns class for MX lookups.
	// 
	// Performs a DNS MX lookup for the domain portion of the email address in emailAddress and
	// returns the available mail-exchanger hostnames in priority order. The preferred
	// server is at index 0.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkStringArray *MxLookupAll(const char *emailAddress);


	// Explicitly opens a connection to the SMTP server and authenticates if a username
	// and password, OAuth2 token, or other applicable authentication settings have
	// been provided.
	// 
	// Calling this method is optional. Email-sending methods such as SendEmail[1]
	// automatically open and authenticate the SMTP connection when needed.
	// 
	// This method is equivalent to calling SmtpConnect[2] followed by
	// SmtpAuthenticate[3].
	// 
	// 
	// References:
	// [1] #SendEmail
	// [2] #SmtpConnect
	// [3] #SmtpAuthenticate
	bool OpenSmtpConnection(void);

	// Explicitly opens a connection to the SMTP server and authenticates if a username
	// and password, OAuth2 token, or other applicable authentication settings have
	// been provided.
	// 
	// Calling this method is optional. Email-sending methods such as SendEmail[1]
	// automatically open and authenticate the SMTP connection when needed.
	// 
	// This method is equivalent to calling SmtpConnect[2] followed by
	// SmtpAuthenticate[3].
	// 
	// 
	// References:
	// [1] #SendEmail
	// [2] #SmtpConnect
	// [3] #SmtpAuthenticate
	CkTask *OpenSmtpConnectionAsync(void);


	// Authenticates with the POP3 server using the current POP3 property settings,
	// such as PopUsername[1], PopPassword[2], and any authentication-related options.
	// 
	// This method should be called only after a successful call to Pop3Connect[3]. The
	// Pop3BeginSession[4] method performs both steps and is equivalent to calling
	// Pop3Connect[3] followed by Pop3Authenticate.
	// 
	// Calling this method is optional in most applications because POP3 methods that
	// communicate with the server automatically connect and authenticate if no
	// authenticated session is already open.
	// 
	// 
	// References:
	// [1] #PopUsername
	// [2] #PopPassword
	// [3] #Pop3Connect
	// [4] #Pop3BeginSession
	bool Pop3Authenticate(void);

	// Authenticates with the POP3 server using the current POP3 property settings,
	// such as PopUsername[1], PopPassword[2], and any authentication-related options.
	// 
	// This method should be called only after a successful call to Pop3Connect[3]. The
	// Pop3BeginSession[4] method performs both steps and is equivalent to calling
	// Pop3Connect[3] followed by Pop3Authenticate.
	// 
	// Calling this method is optional in most applications because POP3 methods that
	// communicate with the server automatically connect and authenticate if no
	// authenticated session is already open.
	// 
	// 
	// References:
	// [1] #PopUsername
	// [2] #PopPassword
	// [3] #Pop3Connect
	// [4] #Pop3BeginSession
	CkTask *Pop3AuthenticateAsync(void);


	// Explicitly begins a POP3 session by connecting to the POP3 server and
	// authenticating using the current POP3 property settings.
	// 
	// Calling this method is optional. Any method that requires an established POP3
	// session automatically connects and logs in if a session is not already open.
	// 
	bool Pop3BeginSession(void);

	// Explicitly begins a POP3 session by connecting to the POP3 server and
	// authenticating using the current POP3 property settings.
	// 
	// Calling this method is optional. Any method that requires an established POP3
	// session automatically connects and logs in if a session is not already open.
	// 
	CkTask *Pop3BeginSessionAsync(void);


	// Explicitly connects to the POP3 server. If SSL/TLS is required by the current
	// property settings, the secure TLS channel is established as part of this call.
	// This method receives the server's initial greeting but does not authenticate.
	// 
	// After Pop3Connect succeeds, call Pop3Authenticate[1] to log in. The
	// Pop3BeginSession[2] method performs both steps and is equivalent to calling
	// Pop3Connect followed by Pop3Authenticate[1].
	// 
	// Calling this method is optional in most applications because POP3 methods that
	// communicate with the server automatically connect and authenticate if no
	// authenticated session is already open. When finished with the POP3 server, call
	// Pop3EndSession[3] or Pop3EndSessionNoQuit[4] to disconnect.
	// 
	// 
	// References:
	// [1] #Pop3Authenticate
	// [2] #Pop3BeginSession
	// [3] #Pop3EndSession
	// [4] #Pop3EndSessionNoQuit
	bool Pop3Connect(void);

	// Explicitly connects to the POP3 server. If SSL/TLS is required by the current
	// property settings, the secure TLS channel is established as part of this call.
	// This method receives the server's initial greeting but does not authenticate.
	// 
	// After Pop3Connect succeeds, call Pop3Authenticate[1] to log in. The
	// Pop3BeginSession[2] method performs both steps and is equivalent to calling
	// Pop3Connect followed by Pop3Authenticate[1].
	// 
	// Calling this method is optional in most applications because POP3 methods that
	// communicate with the server automatically connect and authenticate if no
	// authenticated session is already open. When finished with the POP3 server, call
	// Pop3EndSession[3] or Pop3EndSessionNoQuit[4] to disconnect.
	// 
	// 
	// References:
	// [1] #Pop3Authenticate
	// [2] #Pop3BeginSession
	// [3] #Pop3EndSession
	// [4] #Pop3EndSessionNoQuit
	CkTask *Pop3ConnectAsync(void);


	// Sends the POP3 QUIT command and closes the current POP3 connection.
	// 
	// Any messages marked for deletion during the session are permanently deleted when
	// the server accepts QUIT. After the session ends, IsPop3Connected[1] is false
	// and Pop3SessionId[2] returns 0.
	// 
	// 
	// References:
	// [1] #IsPop3Connected
	// [2] #Pop3SessionId
	bool Pop3EndSession(void);

	// Sends the POP3 QUIT command and closes the current POP3 connection.
	// 
	// Any messages marked for deletion during the session are permanently deleted when
	// the server accepts QUIT. After the session ends, IsPop3Connected[1] is false
	// and Pop3SessionId[2] returns 0.
	// 
	// 
	// References:
	// [1] #IsPop3Connected
	// [2] #Pop3SessionId
	CkTask *Pop3EndSessionAsync(void);


	// Closes the POP3 connection without sending the QUIT command.
	// 
	// Pending deletion marks are not committed. Messages marked with DELE during the
	// session remain in the mailbox after reconnecting.
	// 
	// Use Pop3EndSession[1] when pending deletions should be finalized.
	// 
	// This method should always return true.
	// 
	// 
	// References:
	// [1] #Pop3EndSession
	bool Pop3EndSessionNoQuit(void);

	// Closes the POP3 connection without sending the QUIT command.
	// 
	// Pending deletion marks are not committed. Messages marked with DELE during the
	// session remain in the mailbox after reconnecting.
	// 
	// Use Pop3EndSession[1] when pending deletions should be finalized.
	// 
	// This method should always return true.
	// 
	// 
	// References:
	// [1] #Pop3EndSession
	CkTask *Pop3EndSessionNoQuitAsync(void);


	// Sends a POP3 NOOP command to the server.
	// 
	// This can be useful for keeping a POP3 session alive or for verifying that the
	// current POP3 connection is still open and functioning.
	// 
	bool Pop3Noop(void);

	// Sends a POP3 NOOP command to the server.
	// 
	// This can be useful for keeping a POP3 session alive or for verifying that the
	// current POP3 connection is still open and functioning.
	// 
	CkTask *Pop3NoopAsync(void);


	// Sends the POP3 RSET command to the server.
	// 
	// Any messages marked for deletion during the current session are unmarked and
	// remain in the mailbox. The POP3 session remains open after a successful reset.
	// 
	bool Pop3Reset(void);

	// Sends the POP3 RSET command to the server.
	// 
	// Any messages marked for deletion during the current session are unmarked and
	// remain in the mailbox. The POP3 session remains open after a successful reset.
	// 
	CkTask *Pop3ResetAsync(void);


	// Sends a raw command to the POP3 server and returns the server's response.
	// 
	// If command contains non-US-ASCII characters, charset specifies the character set used
	// to encode the command before it is sent. Examples include utf-8, ansi,
	// iso-8859-1, and Shift_JIS.
	// 
	// This method is intended for advanced use, diagnostics, or issuing POP3 commands
	// not directly exposed by higher-level MailMan methods.
	// 
	bool Pop3SendRawCommand(const char *command, const char *charset, CkString &outStr);

	// Sends a raw command to the POP3 server and returns the server's response.
	// 
	// If command contains non-US-ASCII characters, charset specifies the character set used
	// to encode the command before it is sent. Examples include utf-8, ansi,
	// iso-8859-1, and Shift_JIS.
	// 
	// This method is intended for advanced use, diagnostics, or issuing POP3 commands
	// not directly exposed by higher-level MailMan methods.
	// 
	const char *pop3SendRawCommand(const char *command, const char *charset);
	// Sends a raw command to the POP3 server and returns the server's response.
	// 
	// If command contains non-US-ASCII characters, charset specifies the character set used
	// to encode the command before it is sent. Examples include utf-8, ansi,
	// iso-8859-1, and Shift_JIS.
	// 
	// This method is intended for advanced use, diagnostics, or issuing POP3 commands
	// not directly exposed by higher-level MailMan methods.
	// 
	CkTask *Pop3SendRawCommandAsync(const char *command, const char *charset);


	// Sends a simple email to a single recipient without requiring the application to
	// explicitly create an Email object.
	// 
	// The fromAddr argument is the sender address, toAddr is the recipient address, subject is
	// the message subject, body is the plain-text body, and smtpServer is the SMTP server
	// hostname.
	// 
	// This method is convenient for simple cases. For attachments, HTML email, CC/BCC
	// recipients, alternate bodies, signing, encryption, or more control over headers
	// and SMTP behavior, create an Email object and use SendEmail[1] instead.
	// 
	// 
	// References:
	// [1] #SendEmail
	bool QuickSend(const char *fromAddr, const char *toAddr, const char *subject, const char *body, const char *smtpServer);

	// Sends a simple email to a single recipient without requiring the application to
	// explicitly create an Email object.
	// 
	// The fromAddr argument is the sender address, toAddr is the recipient address, subject is
	// the message subject, body is the plain-text body, and smtpServer is the SMTP server
	// hostname.
	// 
	// This method is convenient for simple cases. For attachments, HTML email, CC/BCC
	// recipients, alternate bodies, signing, encryption, or more control over headers
	// and SMTP behavior, create an Email object and use SendEmail[1] instead.
	// 
	// 
	// References:
	// [1] #SendEmail
	CkTask *QuickSendAsync(const char *fromAddr, const char *toAddr, const char *subject, const char *body, const char *smtpServer);


	// Renders the Email in email as the MIME text that would be sent to the SMTP
	// server, without actually sending the email.
	// 
	// Rendering uses the current MailMan and Email settings and may include MIME
	// formatting, header encoding, replacement-pattern substitution, digital signing,
	// encryption, and other transformations required before transmission.
	// 
	// This method does not modify email. Values generated as part of rendering are
	// produced for the returned MIME and are not written back to the supplied Email.
	// Repeated calls are not guaranteed to produce byte-for-byte identical MIME.
	// 
	// By default, a Bcc header present in email is included in the rendered MIME. Add
	// NoBccHeader to the Email object's UncommonOptions property to omit the Bcc
	// header from the MIME.
	// 
	// Conceptually, SendEmail[1] performs this rendering step and then sends the
	// resulting MIME.
	// 
	// Note: If the MIME may contain 8-bit or binary data, use RenderToMimeBytes[2] or
	// RenderToMimeBd[3]. Returning binary MIME as a string can corrupt bytes that are
	// not valid text.
	// 
	// 
	// References:
	// [1] #SendEmail
	// [2] #RenderToMimeBytes
	// [3] #RenderToMimeBd
	bool RenderToMime(CkEmail &email, CkString &outStr);

	// Renders the Email in email as the MIME text that would be sent to the SMTP
	// server, without actually sending the email.
	// 
	// Rendering uses the current MailMan and Email settings and may include MIME
	// formatting, header encoding, replacement-pattern substitution, digital signing,
	// encryption, and other transformations required before transmission.
	// 
	// This method does not modify email. Values generated as part of rendering are
	// produced for the returned MIME and are not written back to the supplied Email.
	// Repeated calls are not guaranteed to produce byte-for-byte identical MIME.
	// 
	// By default, a Bcc header present in email is included in the rendered MIME. Add
	// NoBccHeader to the Email object's UncommonOptions property to omit the Bcc
	// header from the MIME.
	// 
	// Conceptually, SendEmail[1] performs this rendering step and then sends the
	// resulting MIME.
	// 
	// Note: If the MIME may contain 8-bit or binary data, use RenderToMimeBytes[2] or
	// RenderToMimeBd[3]. Returning binary MIME as a string can corrupt bytes that are
	// not valid text.
	// 
	// 
	// References:
	// [1] #SendEmail
	// [2] #RenderToMimeBytes
	// [3] #RenderToMimeBd
	const char *renderToMime(CkEmail &email);

	// Renders the Email in email as MIME bytes and appends the result to renderedMime.
	// 
	// This method is the BinData version of RenderToMimeBytes[1]. It is useful when
	// the rendered MIME must be preserved as bytes, especially when it may contain
	// 8-bit or binary MIME content.
	// 
	// Rendering does not modify email. Values generated for the rendered MIME are not
	// written back to the supplied Email.
	// 
	// 
	// References:
	// [1] #RenderToMimeBytes
	bool RenderToMimeBd(CkEmail &email, CkBinData &renderedMime);


	// Renders the Email in email as the MIME bytes that would be sent to the SMTP
	// server, without actually sending the email.
	// 
	// This method is similar to RenderToMime[1], except the rendered MIME is returned
	// as a byte array. Use it when the MIME may contain 8-bit or binary content, or
	// when the exact rendered bytes are needed.
	// 
	// Rendering does not modify email. Values generated for the rendered MIME are not
	// written back to the supplied Email.
	// 
	// 
	// References:
	// [1] #RenderToMime
	bool RenderToMimeBytes(CkEmail &email, CkByteData &outBytes);


	// Renders the Email in email as MIME text and appends the result to renderedMime.
	// 
	// This method is the StringBuilder version of RenderToMime[1]. Rendering does not
	// modify email; values generated for the rendered MIME are not written back to the
	// supplied Email.
	// 
	// Note: If the MIME may contain 8-bit or binary content, use RenderToMimeBytes[2]
	// or RenderToMimeBd[3] instead. Returning binary MIME as text can corrupt data
	// that is not valid text.
	// 
	// 
	// References:
	// [1] #RenderToMime
	// [2] #RenderToMimeBytes
	// [3] #RenderToMimeBd
	bool RenderToMimeSb(CkEmail &email, CkStringBuilder &renderedMime);


	// Sends each email in bundle. This is equivalent to calling SendEmail[1] once for
	// each email in the bundle.
	// 
	// If an error occurs while sending one email, Chilkat continues attempting to send
	// the remaining emails unless a fatal error occurs that requires the send
	// operation to stop.
	// 
	// Because it can be difficult or impossible to programmatically determine exactly
	// which emails succeeded and which failed after a bundle send, applications that
	// need detailed per-message status should loop through the bundle and call
	// SendEmail[1] for each message individually.
	// 
	// 
	// References:
	// [1] #SendEmail
	bool SendBundle(CkEmailBundle &bundle);

	// Sends each email in bundle. This is equivalent to calling SendEmail[1] once for
	// each email in the bundle.
	// 
	// If an error occurs while sending one email, Chilkat continues attempting to send
	// the remaining emails unless a fatal error occurs that requires the send
	// operation to stop.
	// 
	// Because it can be difficult or impossible to programmatically determine exactly
	// which emails succeeded and which failed after a bundle send, applications that
	// need detailed per-message status should loop through the bundle and call
	// SendEmail[1] for each message individually.
	// 
	// 
	// References:
	// [1] #SendEmail
	CkTask *SendBundleAsync(CkEmailBundle &bundle);


	// Sends a single email through the configured SMTP server.
	// 
	// Chilkat automatically opens the SMTP connection when needed. After the email is
	// sent, the connection remains open so a subsequent call to SendEmail or another
	// email-sending method can reuse the same SMTP connection. If an SMTP-related
	// property changes, such as SmtpHost[1], SmtpUsername[2], password, port, or
	// SSL/TLS settings, Chilkat automatically closes the existing connection and
	// establishes a new one using the updated settings on the next send.
	// 
	// Important: Some SMTP servers do not complete final delivery processing until the
	// SMTP connection is closed. In these cases, call CloseSmtpConnection[3] after
	// sending. Most SMTP servers process the message immediately, so explicitly
	// closing the connection is usually not required.
	// 
	// By default, a Bcc header in email is included in the MIME sent to the SMTP
	// server. To prevent Bcc addresses from appearing in the MIME header, add
	// NoBccHeader to the Email object's UncommonOptions property.
	// 
	// After sending, additional information about the SMTP transaction may be
	// available by calling GetLastJsonData[4].
	// 
	// If this method fails, examine SmtpFailReason[5] and LastSmtpStatus[6]. The
	// latter is nonzero only when Chilkat established an SMTP session and received a
	// failure status code from the server.
	// 
	// 
	// References:
	// [1] #SmtpHost
	// [2] #SmtpUsername
	// [3] #CloseSmtpConnection
	// [4] #GetLastJsonData
	// [5] #SmtpFailReason
	// [6] #LastSmtpStatus
	bool SendEmail(CkEmail &email);

	// Sends a single email through the configured SMTP server.
	// 
	// Chilkat automatically opens the SMTP connection when needed. After the email is
	// sent, the connection remains open so a subsequent call to SendEmail or another
	// email-sending method can reuse the same SMTP connection. If an SMTP-related
	// property changes, such as SmtpHost[1], SmtpUsername[2], password, port, or
	// SSL/TLS settings, Chilkat automatically closes the existing connection and
	// establishes a new one using the updated settings on the next send.
	// 
	// Important: Some SMTP servers do not complete final delivery processing until the
	// SMTP connection is closed. In these cases, call CloseSmtpConnection[3] after
	// sending. Most SMTP servers process the message immediately, so explicitly
	// closing the connection is usually not required.
	// 
	// By default, a Bcc header in email is included in the MIME sent to the SMTP
	// server. To prevent Bcc addresses from appearing in the MIME header, add
	// NoBccHeader to the Email object's UncommonOptions property.
	// 
	// After sending, additional information about the SMTP transaction may be
	// available by calling GetLastJsonData[4].
	// 
	// If this method fails, examine SmtpFailReason[5] and LastSmtpStatus[6]. The
	// latter is nonzero only when Chilkat established an SMTP session and received a
	// failure status code from the server.
	// 
	// 
	// References:
	// [1] #SmtpHost
	// [2] #SmtpUsername
	// [3] #CloseSmtpConnection
	// [4] #GetLastJsonData
	// [5] #SmtpFailReason
	// [6] #LastSmtpStatus
	CkTask *SendEmailAsync(CkEmail &email);


	// Sends an email from caller-supplied MIME text. The MIME source in mimeSource is passed
	// to the SMTP server as the message content.
	// 
	// This method provides complete control over the MIME that is sent. It is useful
	// when the application already has a fully formed MIME message, or when the MIME
	// was created externally and should not be rebuilt from an Email object.
	// 
	// The fromAddr argument is the SMTP reverse-path address used in the MAIL FROM
	// command. This is where bounced email and non-delivery reports are normally
	// delivered. It can be different from the From header in the MIME.
	// 
	// recipients is a comma-separated list of plain email addresses used in SMTP RCPT TO
	// commands. Do not include display names or formatted mailbox syntax; supply only
	// addresses such as alice@example.com,bob@example.com.
	// 
	// If this method fails, examine SmtpFailReason[1] and LastSmtpStatus[2]. The
	// latter is nonzero only when Chilkat established an SMTP session and received a
	// failure status code from the server.
	// 
	// 
	// References:
	// [1] #SmtpFailReason
	// [2] #LastSmtpStatus
	bool SendMime(const char *fromAddr, const char *recipients, const char *mimeSource);

	// Sends an email from caller-supplied MIME text. The MIME source in mimeSource is passed
	// to the SMTP server as the message content.
	// 
	// This method provides complete control over the MIME that is sent. It is useful
	// when the application already has a fully formed MIME message, or when the MIME
	// was created externally and should not be rebuilt from an Email object.
	// 
	// The fromAddr argument is the SMTP reverse-path address used in the MAIL FROM
	// command. This is where bounced email and non-delivery reports are normally
	// delivered. It can be different from the From header in the MIME.
	// 
	// recipients is a comma-separated list of plain email addresses used in SMTP RCPT TO
	// commands. Do not include display names or formatted mailbox syntax; supply only
	// addresses such as alice@example.com,bob@example.com.
	// 
	// If this method fails, examine SmtpFailReason[1] and LastSmtpStatus[2]. The
	// latter is nonzero only when Chilkat established an SMTP session and received a
	// failure status code from the server.
	// 
	// 
	// References:
	// [1] #SmtpFailReason
	// [2] #LastSmtpStatus
	CkTask *SendMimeAsync(const char *fromAddr, const char *recipients, const char *mimeSource);


	// Sends an email from caller-supplied MIME bytes contained in mimeData.
	// 
	// This method is the BinData version of SendMimeBytes[1]. It is useful when the
	// MIME must be sent exactly as bytes, such as when it contains binary MIME
	// content, 8bit encodings, or a DKIM/DomainKey signature where byte preservation
	// matters.
	// 
	// fromAddr is the SMTP reverse-path address used in the MAIL FROM command. recipients is a
	// comma-separated list of plain email addresses used in SMTP RCPT TO commands. Do
	// not include display names or formatted mailbox syntax in recipients.
	// 
	// If this method fails, examine SmtpFailReason[2] and LastSmtpStatus[3]. The
	// latter is nonzero only when Chilkat established an SMTP session and received a
	// failure status code from the server.
	// 
	// 
	// References:
	// [1] #SendMimeBytes
	// [2] #SmtpFailReason
	// [3] #LastSmtpStatus
	bool SendMimeBd(const char *fromAddr, const char *recipients, CkBinData &mimeData);

	// Sends an email from caller-supplied MIME bytes contained in mimeData.
	// 
	// This method is the BinData version of SendMimeBytes[1]. It is useful when the
	// MIME must be sent exactly as bytes, such as when it contains binary MIME
	// content, 8bit encodings, or a DKIM/DomainKey signature where byte preservation
	// matters.
	// 
	// fromAddr is the SMTP reverse-path address used in the MAIL FROM command. recipients is a
	// comma-separated list of plain email addresses used in SMTP RCPT TO commands. Do
	// not include display names or formatted mailbox syntax in recipients.
	// 
	// If this method fails, examine SmtpFailReason[2] and LastSmtpStatus[3]. The
	// latter is nonzero only when Chilkat established an SMTP session and received a
	// failure status code from the server.
	// 
	// 
	// References:
	// [1] #SendMimeBytes
	// [2] #SmtpFailReason
	// [3] #LastSmtpStatus
	CkTask *SendMimeBdAsync(const char *fromAddr, const char *recipients, CkBinData &mimeData);


	// Sends an email from caller-supplied MIME bytes.
	// 
	// This method is similar to SendMime[1], except the MIME is supplied as a byte
	// array. Use this method when the MIME contains binary data, 8bit content, or a
	// DKIM/DomainKey signature where preserving the exact bytes is important.
	// 
	// The fromAddr argument is the SMTP reverse-path address used in the MAIL FROM
	// command. This is where bounced email and non-delivery reports are normally
	// delivered. It can be different from the From header in the MIME.
	// 
	// recipients is a comma-separated list of plain email addresses used in SMTP RCPT TO
	// commands. Do not include display names or formatted mailbox syntax; supply only
	// addresses such as alice@example.com,bob@example.com.
	// 
	// If this method fails, examine SmtpFailReason[2] and LastSmtpStatus[3]. The
	// latter is nonzero only when Chilkat established an SMTP session and received a
	// failure status code from the server.
	// 
	// 
	// References:
	// [1] #SendMime
	// [2] #SmtpFailReason
	// [3] #LastSmtpStatus
	bool SendMimeBytes(const char *fromAddr, const char *recipients, CkByteData &mimeSource);

	// Sends an email from caller-supplied MIME bytes.
	// 
	// This method is similar to SendMime[1], except the MIME is supplied as a byte
	// array. Use this method when the MIME contains binary data, 8bit content, or a
	// DKIM/DomainKey signature where preserving the exact bytes is important.
	// 
	// The fromAddr argument is the SMTP reverse-path address used in the MAIL FROM
	// command. This is where bounced email and non-delivery reports are normally
	// delivered. It can be different from the From header in the MIME.
	// 
	// recipients is a comma-separated list of plain email addresses used in SMTP RCPT TO
	// commands. Do not include display names or formatted mailbox syntax; supply only
	// addresses such as alice@example.com,bob@example.com.
	// 
	// If this method fails, examine SmtpFailReason[2] and LastSmtpStatus[3]. The
	// latter is nonzero only when Chilkat established an SMTP session and received a
	// failure status code from the server.
	// 
	// 
	// References:
	// [1] #SendMime
	// [2] #SmtpFailReason
	// [3] #LastSmtpStatus
	CkTask *SendMimeBytesAsync(const char *fromAddr, const char *recipients, CkByteData &mimeSource);


	// Sends caller-supplied MIME text to a distribution list read from a text file.
	// 
	// This method is similar to SendMime[1], except the recipient list is read from
	// distListFilename. The distribution list file should contain one email address per line.
	// 
	// The fromAddr argument is the SMTP reverse-path address used in the MAIL FROM
	// command. The MIME text in mimeSource is used as the message content.
	// 
	// 
	// References:
	// [1] #SendMime
	bool SendMimeToList(const char *fromAddr, const char *distListFilename, const char *mimeSource);

	// Sends caller-supplied MIME text to a distribution list read from a text file.
	// 
	// This method is similar to SendMime[1], except the recipient list is read from
	// distListFilename. The distribution list file should contain one email address per line.
	// 
	// The fromAddr argument is the SMTP reverse-path address used in the MAIL FROM
	// command. The MIME text in mimeSource is used as the message content.
	// 
	// 
	// References:
	// [1] #SendMime
	CkTask *SendMimeToListAsync(const char *fromAddr, const char *distListFilename, const char *mimeSource);


	// Explicitly specifies the certificate to use when decrypting encrypted email.
	// 
	// The certificate must correspond to the recipient certificate used to encrypt the
	// message, and the associated private key must be available to Chilkat through the
	// certificate itself, an added PFX source, an XML certificate vault, or the
	// platform certificate store where applicable.
	// 
	bool SetDecryptCert(CkCert &cert);


	// Explicitly specifies both the certificate and its associated private key to use
	// when decrypting S/MIME encrypted email.
	// 
	// In most cases, it is simpler to call AddPfxSourceFile[1] or AddPfxSourceData[2]
	// to provide the certificate and private key together in a PFX/PKCS#12 source. On
	// Windows, if the certificate and private key are already installed in the default
	// certificate store, no explicit setup may be needed because MailMan automatically
	// searches the Windows certificate stores.
	// 
	// 
	// References:
	// [1] #AddPfxSourceFile
	// [2] #AddPfxSourceData
	bool SetDecryptCert2(CkCert &cert, CkPrivateKey &privateKey);


	// Sets the POP3 or SMTP password from a SecureString.
	// 
	// The protocol argument specifies which password is being set. Use pop3 to set the
	// POP3 password, which is equivalent to setting the PopPassword[1] property. Use
	// smtp to set the SMTP password, which is equivalent to setting the
	// SmtpPassword[2] property.
	// 
	// 
	// References:
	// [1] #PopPassword
	// [2] #SmtpPassword
	bool SetPassword(const char *protocol, CkSecureString &password);


	// Sets the client-side certificate to use for SSL/TLS connections.
	// 
	// This is typically not required. Most SSL/TLS connections authenticate the server
	// only, while the client remains unauthenticated at the TLS layer. Use this method
	// only when the SMTP or POP3 server requires TLS client certificate
	// authentication.
	// 
	bool SetSslClientCert(CkCert &cert);


	// Sets the client-side certificate to use for SSL/TLS connections, loading it from
	// PEM data or from a PEM file.
	// 
	// The pemDataOrFilename argument may contain PEM text or the path to a PEM file. The pemPassword
	// argument supplies the password if the PEM private key is encrypted.
	// 
	// TLS client certificates are typically required only when the server uses mutual
	// TLS. Most SMTP and POP3 SSL/TLS connections do not require a client certificate.
	// 
	bool SetSslClientCertPem(const char *pemDataOrFilename, const char *pemPassword);


	// Sets the client-side certificate to use for SSL/TLS connections, loading it from
	// a PFX/PKCS#12 file.
	// 
	// The pfxPath argument is the path to the PFX file, and pfxPassword is the password required
	// to open it.
	// 
	// TLS client certificates are typically required only when the server uses mutual
	// TLS. Most SMTP and POP3 SSL/TLS connections do not require a client certificate.
	// 
	bool SetSslClientCertPfx(const char *pfxPath, const char *pfxPassword);


	// Authenticates with the SMTP server using the current SMTP property settings,
	// such as SmtpUsername[1], SmtpPassword[2], OAuth2 token settings, and other
	// authentication-related options.
	// 
	// This method should be called only after a successful call to SmtpConnect[3]. The
	// OpenSmtpConnection[4] method performs both steps and is equivalent to calling
	// SmtpConnect[3] followed by SmtpAuthenticate.
	// 
	// Calling this method is optional in most applications because SMTP methods that
	// communicate with the server, such as SendEmail[5], automatically connect and
	// authenticate if no authenticated SMTP connection is already open.
	// 
	// 
	// References:
	// [1] #SmtpUsername
	// [2] #SmtpPassword
	// [3] #SmtpConnect
	// [4] #OpenSmtpConnection
	// [5] #SendEmail
	bool SmtpAuthenticate(void);

	// Authenticates with the SMTP server using the current SMTP property settings,
	// such as SmtpUsername[1], SmtpPassword[2], OAuth2 token settings, and other
	// authentication-related options.
	// 
	// This method should be called only after a successful call to SmtpConnect[3]. The
	// OpenSmtpConnection[4] method performs both steps and is equivalent to calling
	// SmtpConnect[3] followed by SmtpAuthenticate.
	// 
	// Calling this method is optional in most applications because SMTP methods that
	// communicate with the server, such as SendEmail[5], automatically connect and
	// authenticate if no authenticated SMTP connection is already open.
	// 
	// 
	// References:
	// [1] #SmtpUsername
	// [2] #SmtpPassword
	// [3] #SmtpConnect
	// [4] #OpenSmtpConnection
	// [5] #SendEmail
	CkTask *SmtpAuthenticateAsync(void);


	// Explicitly connects to the SMTP server. If SSL/TLS is required by the current
	// property settings, the secure TLS channel is established as part of this call.
	// This method receives the server's initial greeting but does not authenticate.
	// 
	// After SmtpConnect succeeds, call SmtpAuthenticate[1] to authenticate. The
	// OpenSmtpConnection[2] method performs both steps and is equivalent to calling
	// SmtpConnect followed by SmtpAuthenticate[1].
	// 
	// Calling this method is optional in most applications because SMTP methods that
	// communicate with the server, such as SendEmail[3], automatically connect and
	// authenticate if no authenticated SMTP connection is already open.
	// 
	// 
	// References:
	// [1] #SmtpAuthenticate
	// [2] #OpenSmtpConnection
	// [3] #SendEmail
	bool SmtpConnect(void);

	// Explicitly connects to the SMTP server. If SSL/TLS is required by the current
	// property settings, the secure TLS channel is established as part of this call.
	// This method receives the server's initial greeting but does not authenticate.
	// 
	// After SmtpConnect succeeds, call SmtpAuthenticate[1] to authenticate. The
	// OpenSmtpConnection[2] method performs both steps and is equivalent to calling
	// SmtpConnect followed by SmtpAuthenticate[1].
	// 
	// Calling this method is optional in most applications because SMTP methods that
	// communicate with the server, such as SendEmail[3], automatically connect and
	// authenticate if no authenticated SMTP connection is already open.
	// 
	// 
	// References:
	// [1] #SmtpAuthenticate
	// [2] #OpenSmtpConnection
	// [3] #SendEmail
	CkTask *SmtpConnectAsync(void);


	// Sends an SMTP NOOP command to the server.
	// 
	// This can be useful for testing whether the SMTP connection is working and still
	// valid. If an SMTP connection is not already open, SmtpNoop automatically
	// establishes the connection using the current SMTP property settings.
	// 
	bool SmtpNoop(void);

	// Sends an SMTP NOOP command to the server.
	// 
	// This can be useful for testing whether the SMTP connection is working and still
	// valid. If an SMTP connection is not already open, SmtpNoop automatically
	// establishes the connection using the current SMTP property settings.
	// 
	CkTask *SmtpNoopAsync(void);


	// Sends an SMTP RSET command to the server.
	// 
	// The RSET command resets the server-side state of the current SMTP transaction so
	// the connection can be used to begin a new mail transaction. This method is
	// rarely needed. It would normally only be useful if a mail-sending method failed
	// and left the SMTP connection open in a non-initial state, a situation that
	// should generally not occur with the Chilkat MailMan object.
	// 
	bool SmtpReset(void);

	// Sends an SMTP RSET command to the server.
	// 
	// The RSET command resets the server-side state of the current SMTP transaction so
	// the connection can be used to begin a new mail transaction. This method is
	// rarely needed. It would normally only be useful if a mail-sending method failed
	// and left the SMTP connection open in a non-initial state, a situation that
	// should generally not occur with the Chilkat MailMan object.
	// 
	CkTask *SmtpResetAsync(void);


	// Sends a raw command to the SMTP server and returns the server's response.
	// 
	// If command contains non-US-ASCII characters, charset specifies the character set used
	// to encode the command before it is sent. Examples include utf-8, ansi,
	// iso-8859-1, and Shift_JIS.
	// 
	// If bEncodeBase64 is true, the response is returned in Base64-encoded form. If bEncodeBase64 is
	// false, the raw response text is returned.
	// 
	// This method is intended for advanced use, diagnostics, or issuing SMTP commands
	// not directly exposed by higher-level MailMan methods.
	// 
	bool SmtpSendRawCommand(const char *command, const char *charset, bool bEncodeBase64, CkString &outStr);

	// Sends a raw command to the SMTP server and returns the server's response.
	// 
	// If command contains non-US-ASCII characters, charset specifies the character set used
	// to encode the command before it is sent. Examples include utf-8, ansi,
	// iso-8859-1, and Shift_JIS.
	// 
	// If bEncodeBase64 is true, the response is returned in Base64-encoded form. If bEncodeBase64 is
	// false, the raw response text is returned.
	// 
	// This method is intended for advanced use, diagnostics, or issuing SMTP commands
	// not directly exposed by higher-level MailMan methods.
	// 
	const char *smtpSendRawCommand(const char *command, const char *charset, bool bEncodeBase64);
	// Sends a raw command to the SMTP server and returns the server's response.
	// 
	// If command contains non-US-ASCII characters, charset specifies the character set used
	// to encode the command before it is sent. Examples include utf-8, ansi,
	// iso-8859-1, and Shift_JIS.
	// 
	// If bEncodeBase64 is true, the response is returned in Base64-encoded form. If bEncodeBase64 is
	// false, the raw response text is returned.
	// 
	// This method is intended for advanced use, diagnostics, or issuing SMTP commands
	// not directly exposed by higher-level MailMan methods.
	// 
	CkTask *SmtpSendRawCommandAsync(const char *command, const char *charset, bool bEncodeBase64);


	// Authenticates with the SSH server using public-key authentication after an SSH
	// tunnel has been opened.
	// 
	// The sshLogin argument is the SSH account name. The privKey argument is the SshKey
	// containing the private key used for authentication. The matching public key must
	// already be installed for the SSH account on the server.
	// 
	// An SSH tunneling session begins by calling SshOpenTunnel[1] to connect to the
	// SSH server, followed by either SshAuthenticatePk or SshAuthenticatePw[2] to
	// authenticate.
	// 
	// After the SSH tunnel is established and authenticated, MailMan's underlying SMTP
	// or POP3 communication uses the SSH tunnel. No other programming changes are
	// required beyond the initial tunnel setup calls.
	// 
	// 
	// References:
	// [1] #SshOpenTunnel
	// [2] #SshAuthenticatePw
	bool SshAuthenticatePk(const char *sshLogin, CkSshKey &privKey);

	// Authenticates with the SSH server using public-key authentication after an SSH
	// tunnel has been opened.
	// 
	// The sshLogin argument is the SSH account name. The privKey argument is the SshKey
	// containing the private key used for authentication. The matching public key must
	// already be installed for the SSH account on the server.
	// 
	// An SSH tunneling session begins by calling SshOpenTunnel[1] to connect to the
	// SSH server, followed by either SshAuthenticatePk or SshAuthenticatePw[2] to
	// authenticate.
	// 
	// After the SSH tunnel is established and authenticated, MailMan's underlying SMTP
	// or POP3 communication uses the SSH tunnel. No other programming changes are
	// required beyond the initial tunnel setup calls.
	// 
	// 
	// References:
	// [1] #SshOpenTunnel
	// [2] #SshAuthenticatePw
	CkTask *SshAuthenticatePkAsync(const char *sshLogin, CkSshKey &privKey);


	// Authenticates with the SSH server using an SSH username and password after an
	// SSH tunnel has been opened.
	// 
	// The sshLogin argument is the SSH account name, and sshPassword is the corresponding SSH
	// password.
	// 
	// An SSH tunneling session begins by calling SshOpenTunnel[1] to connect to the
	// SSH server, followed by either SshAuthenticatePw or SshAuthenticatePk[2] to
	// authenticate.
	// 
	// After the SSH tunnel is established and authenticated, MailMan's underlying SMTP
	// or POP3 communication uses the SSH tunnel. No other programming changes are
	// required beyond the initial tunnel setup calls.
	// 
	// 
	// References:
	// [1] #SshOpenTunnel
	// [2] #SshAuthenticatePk
	bool SshAuthenticatePw(const char *sshLogin, const char *sshPassword);

	// Authenticates with the SSH server using an SSH username and password after an
	// SSH tunnel has been opened.
	// 
	// The sshLogin argument is the SSH account name, and sshPassword is the corresponding SSH
	// password.
	// 
	// An SSH tunneling session begins by calling SshOpenTunnel[1] to connect to the
	// SSH server, followed by either SshAuthenticatePw or SshAuthenticatePk[2] to
	// authenticate.
	// 
	// After the SSH tunnel is established and authenticated, MailMan's underlying SMTP
	// or POP3 communication uses the SSH tunnel. No other programming changes are
	// required beyond the initial tunnel setup calls.
	// 
	// 
	// References:
	// [1] #SshOpenTunnel
	// [2] #SshAuthenticatePk
	CkTask *SshAuthenticatePwAsync(const char *sshLogin, const char *sshPassword);


	// Closes the SSH tunnel used for SMTP or POP3 communication.
	// 
	bool SshCloseTunnel(void);

	// Closes the SSH tunnel used for SMTP or POP3 communication.
	// 
	CkTask *SshCloseTunnelAsync(void);


	// Connects to an SSH server and opens an SSH tunnel for MailMan's SMTP or POP3
	// connections.
	// 
	// The sshHostname argument is the hostname or IP address of the SSH server. The sshPort
	// argument is the SSH port, typically 22.
	// 
	// An SSH tunneling session begins by calling SshOpenTunnel, followed by either
	// SshAuthenticatePw[1] or SshAuthenticatePk[2] to authenticate.
	// 
	// After the SSH tunnel is established and authenticated, MailMan's underlying SMTP
	// or POP3 communication uses the SSH tunnel. No other programming changes are
	// required beyond the initial tunnel setup calls.
	// 
	// 
	// References:
	// [1] #SshAuthenticatePw
	// [2] #SshAuthenticatePk
	bool SshOpenTunnel(const char *sshHostname, int sshPort);

	// Connects to an SSH server and opens an SSH tunnel for MailMan's SMTP or POP3
	// connections.
	// 
	// The sshHostname argument is the hostname or IP address of the SSH server. The sshPort
	// argument is the SSH port, typically 22.
	// 
	// An SSH tunneling session begins by calling SshOpenTunnel, followed by either
	// SshAuthenticatePw[1] or SshAuthenticatePk[2] to authenticate.
	// 
	// After the SSH tunnel is established and authenticated, MailMan's underlying SMTP
	// or POP3 communication uses the SSH tunnel. No other programming changes are
	// required beyond the initial tunnel setup calls.
	// 
	// 
	// References:
	// [1] #SshAuthenticatePw
	// [2] #SshAuthenticatePk
	CkTask *SshOpenTunnelAsync(const char *sshHostname, int sshPort);


	// Deprecated: Use FetchAll[1] with ARG1 set to false instead.
	// 
	// Downloads all matching messages from the POP3 mailbox, returns them in an
	// EmailBundle, and removes the fully downloaded messages from the server according
	// to the POP3 deletion and session settings.
	// 
	// If Filter[2] is set, only matching messages are transferred.
	// 
	// 
	// References:
	// [1] #FetchAll
	// [2] #Filter
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *TransferMail(void);

	// Deprecated: Use FetchAll[1] with ARG1 set to false instead.
	// 
	// Downloads all matching messages from the POP3 mailbox, returns them in an
	// EmailBundle, and removes the fully downloaded messages from the server according
	// to the POP3 deletion and session settings.
	// 
	// If Filter[2] is set, only matching messages are transferred.
	// 
	// 
	// References:
	// [1] #FetchAll
	// [2] #Filter
	CkTask *TransferMailAsync(void);


	// Deprecated: Use byte-oriented MIME methods or retrieve messages as Email
	// objects.
	// 
	// Downloads the messages identified by the UIDLs in uidlArray, returns their MIME
	// content as strings, and removes the downloaded messages from the POP3 server
	// according to the POP3 deletion and session settings.
	// 
	// MIME can contain unencoded binary data and mixed character encodings, so a
	// string is not a reliable container for arbitrary MIME.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkStringArray *TransferMultipleMime(CkStringArray &uidlArray);

	// Deprecated: Use byte-oriented MIME methods or retrieve messages as Email
	// objects.
	// 
	// Downloads the messages identified by the UIDLs in uidlArray, returns their MIME
	// content as strings, and removes the downloaded messages from the POP3 server
	// according to the POP3 deletion and session settings.
	// 
	// MIME can contain unencoded binary data and mixed character encodings, so a
	// string is not a reliable container for arbitrary MIME.
	// 
	CkTask *TransferMultipleMimeAsync(CkStringArray &uidlArray);


	// Provides an XML certificate vault to be searched for certificates and private
	// keys when MailMan performs operations such as encryption, decryption, signing,
	// or signature verification.
	// 
	// Unlike PFX sources added with AddPfxSourceData[1], AddPfxSourceBd[2], or
	// AddPfxSourceFile[3], only one XML certificate vault can be used at a time. If
	// UseCertVault is called more than once, the most recent vault replaces the
	// previously supplied vault.
	// 
	// 
	// References:
	// [1] #AddPfxSourceData
	// [2] #AddPfxSourceBd
	// [3] #AddPfxSourceFile
	bool UseCertVault(CkXmlCertVault &vault);


	// Configures MailMan to use an existing SSH tunnel provided by the Ssh object in
	// ssh for SMTP and POP3 connections.
	// 
	// This method is similar to UseSshTunnel[1], except the SSH tunnel is supplied in
	// ssh rather than a Socket object.
	// 
	// Sharing an existing SSH tunnel is useful when multiple objects need to
	// communicate through the same SSH connection. SSH supports multiple logical
	// channels within one tunnel, so SMTP and POP3 connections can exist
	// simultaneously as separate SSH channels.
	// 
	// 
	// References:
	// [1] #UseSshTunnel
	bool UseSsh(CkSsh &ssh);


	// Configures MailMan to use an existing SSH tunnel provided by a Socket object for
	// SMTP and POP3 connections.
	// 
	// Sharing an existing SSH tunnel is useful when multiple objects need to
	// communicate through the same SSH connection. SSH supports multiple logical
	// channels within one tunnel, so SMTP and POP3 connections can exist
	// simultaneously as separate SSH channels.
	// 
	bool UseSshTunnel(CkSocket &tunnel);


	// Tests whether a TCP/IP connection can be established with the configured POP3
	// server.
	// 
	// This method verifies connectivity only. It does not prove that POP3
	// authentication will succeed. Use VerifyPopLogin[1] to test both connection and
	// login.
	// 
	// Returns true if the connection can be established, otherwise returns false.
	// 
	// 
	// References:
	// [1] #VerifyPopLogin
	bool VerifyPopConnection(void);

	// Tests whether a TCP/IP connection can be established with the configured POP3
	// server.
	// 
	// This method verifies connectivity only. It does not prove that POP3
	// authentication will succeed. Use VerifyPopLogin[1] to test both connection and
	// login.
	// 
	// Returns true if the connection can be established, otherwise returns false.
	// 
	// 
	// References:
	// [1] #VerifyPopLogin
	CkTask *VerifyPopConnectionAsync(void);


	// Tests whether Chilkat can connect to the configured POP3 server and successfully
	// log in using the current POP3 authentication settings.
	// 
	// Use this method to diagnose whether POP3 credentials and authentication settings
	// are correct. If only the TCP/IP connection needs to be tested, use
	// VerifyPopConnection[1].
	// 
	// Returns true if the connection and login succeed, otherwise returns false.
	// 
	// 
	// References:
	// [1] #VerifyPopConnection
	bool VerifyPopLogin(void);

	// Tests whether Chilkat can connect to the configured POP3 server and successfully
	// log in using the current POP3 authentication settings.
	// 
	// Use this method to diagnose whether POP3 credentials and authentication settings
	// are correct. If only the TCP/IP connection needs to be tested, use
	// VerifyPopConnection[1].
	// 
	// Returns true if the connection and login succeed, otherwise returns false.
	// 
	// 
	// References:
	// [1] #VerifyPopConnection
	CkTask *VerifyPopLoginAsync(void);


	// Begins the SMTP send process for email, sends the recipient addresses to the SMTP
	// server, and then aborts before sending the message content. Recipient addresses
	// rejected by the SMTP server are returned in badAddrs.
	// 
	// This method can help identify addresses the SMTP server rejects during the SMTP
	// RCPT TO stage. However, it cannot guarantee that all accepted addresses are
	// valid. SMTP servers often accept addresses outside their own domains and only
	// later discover delivery failures when relaying or delivering to the final
	// destination.
	// 
	bool VerifyRecips(CkEmail &email, CkStringArray &badAddrs);

	// Begins the SMTP send process for email, sends the recipient addresses to the SMTP
	// server, and then aborts before sending the message content. Recipient addresses
	// rejected by the SMTP server are returned in badAddrs.
	// 
	// This method can help identify addresses the SMTP server rejects during the SMTP
	// RCPT TO stage. However, it cannot guarantee that all accepted addresses are
	// valid. SMTP servers often accept addresses outside their own domains and only
	// later discover delivery failures when relaying or delivering to the final
	// destination.
	// 
	CkTask *VerifyRecipsAsync(CkEmail &email, CkStringArray &badAddrs);


	// Tests whether a TCP/IP connection can be established with the configured SMTP
	// server.
	// 
	// This method verifies connectivity only. It does not prove that SMTP
	// authentication will succeed. Use VerifySmtpLogin[1] to test both connection and
	// login.
	// 
	// Returns true if the connection can be established, otherwise returns false.
	// 
	// 
	// References:
	// [1] #VerifySmtpLogin
	bool VerifySmtpConnection(void);

	// Tests whether a TCP/IP connection can be established with the configured SMTP
	// server.
	// 
	// This method verifies connectivity only. It does not prove that SMTP
	// authentication will succeed. Use VerifySmtpLogin[1] to test both connection and
	// login.
	// 
	// Returns true if the connection can be established, otherwise returns false.
	// 
	// 
	// References:
	// [1] #VerifySmtpLogin
	CkTask *VerifySmtpConnectionAsync(void);


	// Tests whether Chilkat can connect to the configured SMTP server and successfully
	// authenticate using the current SMTP authentication settings.
	// 
	// Use this method to diagnose whether SMTP credentials and authentication settings
	// are correct. If only the TCP/IP connection needs to be tested, use
	// VerifySmtpConnection[1].
	// 
	// Returns true if the connection and login succeed, otherwise returns false.
	// 
	// 
	// References:
	// [1] #VerifySmtpConnection
	bool VerifySmtpLogin(void);

	// Tests whether Chilkat can connect to the configured SMTP server and successfully
	// authenticate using the current SMTP authentication settings.
	// 
	// Use this method to diagnose whether SMTP credentials and authentication settings
	// are correct. If only the TCP/IP connection needs to be tested, use
	// VerifySmtpConnection[1].
	// 
	// Returns true if the connection and login succeed, otherwise returns false.
	// 
	// 
	// References:
	// [1] #VerifySmtpConnection
	CkTask *VerifySmtpLoginAsync(void);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
