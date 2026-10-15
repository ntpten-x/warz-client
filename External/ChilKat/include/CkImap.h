// CkImap.h: interface for the CkImap class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkImap_H
#define _CkImap_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkBinData;
class CkByteData;
class CkTask;
class CkEmail;
class CkStringBuilder;
class CkMessageSet;
class CkEmailBundle;
class CkStringArray;
class CkCert;
class CkMailboxes;
class CkSecureString;
class CkJsonObject;
class CkPrivateKey;
class CkSshKey;
class CkXmlCertVault;
class CkSsh;
class CkSocket;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkImap
class CK_VISIBLE_PUBLIC CkImap  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkImap(const CkImap &);
	CkImap &operator=(const CkImap &);

    public:
	CkImap(void);
	virtual ~CkImap(void);

	static CkImap *createNew(void);
	static CkImap *createNew2(int progLang);
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
	// Controls cancellation of the method currently running on this Imap object.
	// 
	//     * Set this property to true to request that a long-running network
	//     operation abort.
	//     * Short methods that do not perform lengthy processing or network
	//     communication are generally unaffected.
	//     * Both synchronous and asynchronous calls can be aborted. A synchronous call
	//     may be canceled by setting this property from another thread.
	// 
	// The property is automatically reset to false when the abort is processed. If
	// no method is running, it is reset when the next method begins.
	// 
	// Canceling an operation can leave the connection in an uncertain state. Close the
	// connection, reconnect, authenticate again, and reselect the mailbox before
	// continuing. Output objects may contain partial results, and a server-side
	// operation may already have been partially applied before cancellation.
	// 
	bool get_AbortCurrent(void);
	// Controls cancellation of the method currently running on this Imap object.
	// 
	//     * Set this property to true to request that a long-running network
	//     operation abort.
	//     * Short methods that do not perform lengthy processing or network
	//     communication are generally unaffected.
	//     * Both synchronous and asynchronous calls can be aborted. A synchronous call
	//     may be canceled by setting this property from another thread.
	// 
	// The property is automatically reset to false when the abort is processed. If
	// no method is running, it is reset when the next method begins.
	// 
	// Canceling an operation can leave the connection in an uncertain state. Close the
	// connection, reconnect, authenticate again, and reselect the mailbox before
	// continuing. Output objects may contain partial results, and a server-side
	// operation may already have been partially applied before cancellation.
	// 
	void put_AbortCurrent(bool newVal);

	// Controls the initial \Seen flag for these methods:
	// 
	//     * AppendMail[1]
	//     * AppendMime[2]
	//     * AppendMimeWithDateStr[3]
	//     * true (the default): the appended message is marked as seen.
	//     * false: the appended message is initially unseen.
	// 
	// The flag-specific append methods use their explicit arguments and do not use
	// this property.
	// 
	// 
	// References:
	// [1] #AppendMail
	// [2] #AppendMime
	// [3] #AppendMimeWithDateStr
	bool get_AppendSeen(void);
	// Controls the initial \Seen flag for these methods:
	// 
	//     * AppendMail[1]
	//     * AppendMime[2]
	//     * AppendMimeWithDateStr[3]
	//     * true (the default): the appended message is marked as seen.
	//     * false: the appended message is initially unseen.
	// 
	// The flag-specific append methods use their explicit arguments and do not use
	// this property.
	// 
	// 
	// References:
	// [1] #AppendMail
	// [2] #AppendMime
	// [3] #AppendMimeWithDateStr
	void put_AppendSeen(bool newVal);

	// Contains the UID assigned by the server to the message most recently appended
	// successfully.
	// 
	// The default is 0. After any successful append, this property is set to the UID
	// reported by the server, or to 0 if the server succeeds but does not report an
	// appended UID. A failed append leaves the previous value unchanged.
	// 
	int get_AppendUid(void);

	// Selects the IMAP authentication mechanism. Matching is case-insensitive, but
	// spelling matters.
	// 
	// +----------+-----------------------------------------------------------------+
	// |  Value   |                             Purpose                             |
	// +==========+=================================================================+
	// | LOGIN    | Username and password authentication.                           |
	// +----------+-----------------------------------------------------------------+
	// | PLAIN    | SASL PLAIN authentication. AuthzId[1] may also be used.         |
	// +----------+-----------------------------------------------------------------+
	// | CRAM-MD5 | Challenge-response authentication when supported by the server. |
	// +----------+-----------------------------------------------------------------+
	// | NTLM     | Windows Integrated Authentication.                              |
	// +----------+-----------------------------------------------------------------+
	// | XOAUTH2  | OAuth 2.0 access-token authentication.                          |
	// +----------+-----------------------------------------------------------------+
	// 
	// The default is LOGIN, and an empty or unrecognized value also uses the LOGIN
	// method. If the selected mechanism fails or is not supported by the server,
	// Chilkat does not fall back to another authentication method.
	// 
	// If NTLM authentication fails because of an NTLM-version compatibility issue, set
	// Global.DefaultNtlmVersion to 1 and retry.
	// 
	// 
	// References:
	// [1] #AuthzId
	void get_AuthMethod(CkString &str);
	// Selects the IMAP authentication mechanism. Matching is case-insensitive, but
	// spelling matters.
	// 
	// +----------+-----------------------------------------------------------------+
	// |  Value   |                             Purpose                             |
	// +==========+=================================================================+
	// | LOGIN    | Username and password authentication.                           |
	// +----------+-----------------------------------------------------------------+
	// | PLAIN    | SASL PLAIN authentication. AuthzId[1] may also be used.         |
	// +----------+-----------------------------------------------------------------+
	// | CRAM-MD5 | Challenge-response authentication when supported by the server. |
	// +----------+-----------------------------------------------------------------+
	// | NTLM     | Windows Integrated Authentication.                              |
	// +----------+-----------------------------------------------------------------+
	// | XOAUTH2  | OAuth 2.0 access-token authentication.                          |
	// +----------+-----------------------------------------------------------------+
	// 
	// The default is LOGIN, and an empty or unrecognized value also uses the LOGIN
	// method. If the selected mechanism fails or is not supported by the server,
	// Chilkat does not fall back to another authentication method.
	// 
	// If NTLM authentication fails because of an NTLM-version compatibility issue, set
	// Global.DefaultNtlmVersion to 1 and retry.
	// 
	// 
	// References:
	// [1] #AuthzId
	const char *authMethod(void);
	// Selects the IMAP authentication mechanism. Matching is case-insensitive, but
	// spelling matters.
	// 
	// +----------+-----------------------------------------------------------------+
	// |  Value   |                             Purpose                             |
	// +==========+=================================================================+
	// | LOGIN    | Username and password authentication.                           |
	// +----------+-----------------------------------------------------------------+
	// | PLAIN    | SASL PLAIN authentication. AuthzId[1] may also be used.         |
	// +----------+-----------------------------------------------------------------+
	// | CRAM-MD5 | Challenge-response authentication when supported by the server. |
	// +----------+-----------------------------------------------------------------+
	// | NTLM     | Windows Integrated Authentication.                              |
	// +----------+-----------------------------------------------------------------+
	// | XOAUTH2  | OAuth 2.0 access-token authentication.                          |
	// +----------+-----------------------------------------------------------------+
	// 
	// The default is LOGIN, and an empty or unrecognized value also uses the LOGIN
	// method. If the selected mechanism fails or is not supported by the server,
	// Chilkat does not fall back to another authentication method.
	// 
	// If NTLM authentication fails because of an NTLM-version compatibility issue, set
	// Global.DefaultNtlmVersion to 1 and retry.
	// 
	// 
	// References:
	// [1] #AuthzId
	void put_AuthMethod(const char *newVal);

	// Specifies the optional authorization identity used with the PLAIN authentication
	// mechanism.
	// 
	// Leave this property empty unless the IMAP server requires an authorization
	// identity that differs from the login identity supplied to Login[1].
	// 
	// 
	// References:
	// [1] #Login
	void get_AuthzId(CkString &str);
	// Specifies the optional authorization identity used with the PLAIN authentication
	// mechanism.
	// 
	// Leave this property empty unless the IMAP server requires an authorization
	// identity that differs from the login identity supplied to Login[1].
	// 
	// 
	// References:
	// [1] #Login
	const char *authzId(void);
	// Specifies the optional authorization identity used with the PLAIN authentication
	// mechanism.
	// 
	// Leave this property empty unless the IMAP server requires an authorization
	// identity that differs from the login identity supplied to Login[1].
	// 
	// 
	// References:
	// [1] #Login
	void put_AuthzId(const char *newVal);

	// Controls whether methods that download a complete email also download ordinary
	// attachment bodies. The default is true.
	// 
	//     * true: complete-email fetches include attachment bodies.
	//     * false: complete-email fetches omit ordinary attachment bodies, whether
	//     the result is returned as an Email object or as MIME.
	// 
	// Header-only methods never download attachment bodies. They add ckx-imap-*
	// metadata describing the attachments, which can be read with GetMailNumAttach[1],
	// GetMailAttachFilename[2], and GetMailAttachSize[3]. In this state, the Email
	// object's ordinary attachment count can still be 0.
	// 
	// Related MIME parts used by an HTML body are not treated as ordinary attachments.
	// Signed or encrypted messages are always downloaded in full because their
	// complete MIME is required for verification or decryption.
	// 
	// 
	// References:
	// [1] #GetMailNumAttach
	// [2] #GetMailAttachFilename
	// [3] #GetMailAttachSize
	bool get_AutoDownloadAttachments(void);
	// Controls whether methods that download a complete email also download ordinary
	// attachment bodies. The default is true.
	// 
	//     * true: complete-email fetches include attachment bodies.
	//     * false: complete-email fetches omit ordinary attachment bodies, whether
	//     the result is returned as an Email object or as MIME.
	// 
	// Header-only methods never download attachment bodies. They add ckx-imap-*
	// metadata describing the attachments, which can be read with GetMailNumAttach[1],
	// GetMailAttachFilename[2], and GetMailAttachSize[3]. In this state, the Email
	// object's ordinary attachment count can still be 0.
	// 
	// Related MIME parts used by an HTML body are not treated as ordinary attachments.
	// Signed or encrypted messages are always downloaded in full because their
	// complete MIME is required for verification or decryption.
	// 
	// 
	// References:
	// [1] #GetMailNumAttach
	// [2] #GetMailAttachFilename
	// [3] #GetMailAttachSize
	void put_AutoDownloadAttachments(bool newVal);

	// When true (the default), changes the public Ssl[1] and StartTls[2] property
	// values when Connect[3] is called for a standard IMAP port:
	// 
	//     * Port 993: sets Ssl to true and StartTls to false for implicit TLS.
	//     * Port 143: sets Ssl to false. The existing StartTls value determines
	//     whether the connection is upgraded explicitly.
	// 
	// For a nonstandard port, this property makes no changes. Set it to false when
	// the application must preserve an unusual port and TLS combination exactly as
	// configured.
	// 
	// 
	// References:
	// [1] #Ssl
	// [2] #StartTls
	// [3] #Connect
	bool get_AutoFix(void);
	// When true (the default), changes the public Ssl[1] and StartTls[2] property
	// values when Connect[3] is called for a standard IMAP port:
	// 
	//     * Port 993: sets Ssl to true and StartTls to false for implicit TLS.
	//     * Port 143: sets Ssl to false. The existing StartTls value determines
	//     whether the connection is upgraded explicitly.
	// 
	// For a nonstandard port, this property makes no changes. Set it to false when
	// the application must preserve an unusual port and TLS combination exactly as
	// configured.
	// 
	// 
	// References:
	// [1] #Ssl
	// [2] #StartTls
	// [3] #Connect
	void put_AutoFix(bool newVal);

	// Specifies the local IP address to bind when the computer has multiple network
	// interfaces or addresses.
	// 
	// Leave this property empty for the usual case. The operating system will select
	// the default local interface. When set, use a numeric IP address such as
	// 165.164.55.124, not a hostname.
	// 
	void get_ClientIpAddress(CkString &str);
	// Specifies the local IP address to bind when the computer has multiple network
	// interfaces or addresses.
	// 
	// Leave this property empty for the usual case. The operating system will select
	// the default local interface. When set, use a numeric IP address such as
	// 165.164.55.124, not a hostname.
	// 
	const char *clientIpAddress(void);
	// Specifies the local IP address to bind when the computer has multiple network
	// interfaces or addresses.
	// 
	// Leave this property empty for the usual case. The operating system will select
	// the default local interface. When set, use a numeric IP address such as
	// 165.164.55.124, not a hostname.
	// 
	void put_ClientIpAddress(const char *newVal);

	// Contains the hostname or IP address of the IMAP server to which the object is
	// currently connected.
	// 
	// Returns an empty string when no connection is active.
	// 
	void get_ConnectedToHost(CkString &str);
	// Contains the hostname or IP address of the IMAP server to which the object is
	// currently connected.
	// 
	// Returns an empty string when no connection is active.
	// 
	const char *connectedToHost(void);

	// The maximum number of seconds to wait while establishing the TCP connection to
	// the IMAP server.
	// 
	// The default is 30 seconds. This timeout applies to connection establishment, not
	// to later reads from the server.
	// 
	int get_ConnectTimeout(void);
	// The maximum number of seconds to wait while establishing the TCP connection to
	// the IMAP server.
	// 
	// The default is 30 seconds. This timeout applies to connection establishment, not
	// to later reads from the server.
	// 
	void put_ConnectTimeout(int newVal);

	// Specifies the Windows domain used for NTLM authentication.
	// 
	// This property is optional and may be left empty when the login name already
	// identifies the domain or when NTLM is not used.
	// 
	void get_Domain(CkString &str);
	// Specifies the Windows domain used for NTLM authentication.
	// 
	// This property is optional and may be left empty when the login name already
	// identifies the domain or when NTLM is not used.
	// 
	const char *domain(void);
	// Specifies the Windows domain used for NTLM authentication.
	// 
	// This property is optional and may be left empty when the login name already
	// identifies the domain or when NTLM is not used.
	// 
	void put_Domain(const char *newVal);

	// Enables automatic resolution of credential values from secure operating-system
	// storage. The default is false.
	// 
	// When true, supported password arguments and properties may contain a secret
	// specification beginning with!! instead of a literal secret. Chilkat resolves the
	// value from Windows Credential Manager or Apple Keychain.
	// 
	// !![appName|]service[|domain]|username
	// 
	// This applies to HttpProxyPassword[1], SocksPassword[2], the password supplied to
	// Login[3], and the password supplied to SshAuthenticatePw[4].
	// 
	// 
	// References:
	// [1] #HttpProxyPassword
	// [2] #SocksPassword
	// [3] #Login
	// [4] #SshAuthenticatePw
	bool get_EnableSecrets(void);
	// Enables automatic resolution of credential values from secure operating-system
	// storage. The default is false.
	// 
	// When true, supported password arguments and properties may contain a secret
	// specification beginning with!! instead of a literal secret. Chilkat resolves the
	// value from Windows Credential Manager or Apple Keychain.
	// 
	// !![appName|]service[|domain]|username
	// 
	// This applies to HttpProxyPassword[1], SocksPassword[2], the password supplied to
	// Login[3], and the password supplied to SshAuthenticatePw[4].
	// 
	// 
	// References:
	// [1] #HttpProxyPassword
	// [2] #SocksPassword
	// [3] #Login
	// [4] #SshAuthenticatePw
	void put_EnableSecrets(bool newVal);

	// Sets the interval, in milliseconds, between AbortCheck[1] event callbacks during
	// operations that support cancellation.
	// 
	// The default is 0, which disables periodic AbortCheck[1] callbacks.
	// 
	// 
	// References:
	// [1] #AbortCheck
	int get_HeartbeatMs(void);
	// Sets the interval, in milliseconds, between AbortCheck[1] event callbacks during
	// operations that support cancellation.
	// 
	// The default is 0, which disables periodic AbortCheck[1] callbacks.
	// 
	// 
	// References:
	// [1] #AbortCheck
	void put_HeartbeatMs(int newVal);

	// Contains the HIGHESTMODSEQ value of the currently selected mailbox as a decimal
	// string.
	// 
	// The value is 0 when no mailbox is selected or the server does not provide this
	// information. A string is used because the value may exceed the integer range of
	// some programming languages.
	// 
	void get_HighestModSeq(CkString &str);
	// Contains the HIGHESTMODSEQ value of the currently selected mailbox as a decimal
	// string.
	// 
	// The value is 0 when no mailbox is selected or the server does not provide this
	// information. A string is used because the value may exceed the integer range of
	// some programming languages.
	// 
	const char *highestModSeq(void);

	// Specifies the authentication mechanism used by an HTTP proxy.
	// 
	// Valid values are Basic and NTLM. This property is used only when
	// HttpProxyHostname[1] identifies an HTTP proxy that requires authentication.
	// 
	// 
	// References:
	// [1] #HttpProxyHostname
	void get_HttpProxyAuthMethod(CkString &str);
	// Specifies the authentication mechanism used by an HTTP proxy.
	// 
	// Valid values are Basic and NTLM. This property is used only when
	// HttpProxyHostname[1] identifies an HTTP proxy that requires authentication.
	// 
	// 
	// References:
	// [1] #HttpProxyHostname
	const char *httpProxyAuthMethod(void);
	// Specifies the authentication mechanism used by an HTTP proxy.
	// 
	// Valid values are Basic and NTLM. This property is used only when
	// HttpProxyHostname[1] identifies an HTTP proxy that requires authentication.
	// 
	// 
	// References:
	// [1] #HttpProxyHostname
	void put_HttpProxyAuthMethod(const char *newVal);

	// Specifies the optional Windows domain for HTTP-proxy NTLM authentication.
	// 
	// It is ignored when the proxy does not use NTLM authentication.
	// 
	void get_HttpProxyDomain(CkString &str);
	// Specifies the optional Windows domain for HTTP-proxy NTLM authentication.
	// 
	// It is ignored when the proxy does not use NTLM authentication.
	// 
	const char *httpProxyDomain(void);
	// Specifies the optional Windows domain for HTTP-proxy NTLM authentication.
	// 
	// It is ignored when the proxy does not use NTLM authentication.
	// 
	void put_HttpProxyDomain(const char *newVal);

	// Specifies the hostname or numeric IPv4 address of an HTTP proxy through which
	// the IMAP connection is established.
	// 
	// Leave this property empty to connect directly or to use another configured
	// transport such as SOCKS or SSH tunneling.
	// 
	void get_HttpProxyHostname(CkString &str);
	// Specifies the hostname or numeric IPv4 address of an HTTP proxy through which
	// the IMAP connection is established.
	// 
	// Leave this property empty to connect directly or to use another configured
	// transport such as SOCKS or SSH tunneling.
	// 
	const char *httpProxyHostname(void);
	// Specifies the hostname or numeric IPv4 address of an HTTP proxy through which
	// the IMAP connection is established.
	// 
	// Leave this property empty to connect directly or to use another configured
	// transport such as SOCKS or SSH tunneling.
	// 
	void put_HttpProxyHostname(const char *newVal);

	// Specifies the password used to authenticate with the configured HTTP proxy.
	// 
	// It is used only when the proxy requires authentication.
	// 
	void get_HttpProxyPassword(CkString &str);
	// Specifies the password used to authenticate with the configured HTTP proxy.
	// 
	// It is used only when the proxy requires authentication.
	// 
	const char *httpProxyPassword(void);
	// Specifies the password used to authenticate with the configured HTTP proxy.
	// 
	// It is used only when the proxy requires authentication.
	// 
	void put_HttpProxyPassword(const char *newVal);

	// Specifies the TCP port of the configured HTTP proxy.
	// 
	// Common values include 8080 and 3128, but the correct value is determined by the
	// proxy server configuration.
	// 
	int get_HttpProxyPort(void);
	// Specifies the TCP port of the configured HTTP proxy.
	// 
	// Common values include 8080 and 3128, but the correct value is determined by the
	// proxy server configuration.
	// 
	void put_HttpProxyPort(int newVal);

	// Specifies the username used to authenticate with the configured HTTP proxy.
	// 
	// It is used only when the proxy requires authentication.
	// 
	void get_HttpProxyUsername(CkString &str);
	// Specifies the username used to authenticate with the configured HTTP proxy.
	// 
	// It is used only when the proxy requires authentication.
	// 
	const char *httpProxyUsername(void);
	// Specifies the username used to authenticate with the configured HTTP proxy.
	// 
	// It is used only when the proxy requires authentication.
	// 
	void put_HttpProxyUsername(const char *newVal);

	// Enables or disables the in-memory IMAP protocol log. The default is false.
	// 
	// When enabled, SessionLog[1] contains the raw commands sent to the server and the
	// raw responses received. Use ClearSessionLog[2] to reset it.
	// 
	// 
	// References:
	// [1] #SessionLog
	// [2] #ClearSessionLog
	bool get_KeepSessionLog(void);
	// Enables or disables the in-memory IMAP protocol log. The default is false.
	// 
	// When enabled, SessionLog[1] contains the raw commands sent to the server and the
	// raw responses received. Use ClearSessionLog[2] to reset it.
	// 
	// 
	// References:
	// [1] #SessionLog
	// [2] #ClearSessionLog
	void put_KeepSessionLog(bool newVal);

	// Contains the MIME source sent by the most recent successful call to one of the
	// following methods:
	// 
	//     * AppendMail[1]
	//     * AppendMime[2]
	//     * AppendMimeWithDateStr[3]
	//     * AppendMimeWithFlags[4]
	//     * AppendMimeWithFlagsSb[5]
	// 
	// A failed append leaves the previous value unchanged. Therefore, read this
	// property only after confirming that the append method succeeded.
	// 
	// 
	// References:
	// [1] #AppendMail
	// [2] #AppendMime
	// [3] #AppendMimeWithDateStr
	// [4] #AppendMimeWithFlags
	// [5] #AppendMimeWithFlagsSb
	void get_LastAppendedMime(CkString &str);
	// Contains the MIME source sent by the most recent successful call to one of the
	// following methods:
	// 
	//     * AppendMail[1]
	//     * AppendMime[2]
	//     * AppendMimeWithDateStr[3]
	//     * AppendMimeWithFlags[4]
	//     * AppendMimeWithFlagsSb[5]
	// 
	// A failed append leaves the previous value unchanged. Therefore, read this
	// property only after confirming that the append method succeeded.
	// 
	// 
	// References:
	// [1] #AppendMail
	// [2] #AppendMime
	// [3] #AppendMimeWithDateStr
	// [4] #AppendMimeWithFlags
	// [5] #AppendMimeWithFlagsSb
	const char *lastAppendedMime(void);

	// Contains the most recent raw IMAP command sent to the server.
	// 
	// This property is primarily intended for diagnostics when an IMAP operation fails
	// or produces an unexpected response.
	// 
	void get_LastCommand(CkString &str);
	// Contains the most recent raw IMAP command sent to the server.
	// 
	// This property is primarily intended for diagnostics when an IMAP operation fails
	// or produces an unexpected response.
	// 
	const char *lastCommand(void);

	// Contains the most recent intermediate response received from the IMAP server
	// while a command was in progress.
	// 
	// Use it for protocol-level diagnostics when a command involves continuations or
	// multiple response stages.
	// 
	void get_LastIntermediateResponse(CkString &str);
	// Contains the most recent intermediate response received from the IMAP server
	// while a command was in progress.
	// 
	// Use it for protocol-level diagnostics when a command involves continuations or
	// multiple response stages.
	// 
	const char *lastIntermediateResponse(void);

	// Contains the raw response most recently received from the IMAP server.
	// 
	// This property is cleared when Chilkat sends a new command. If a method fails
	// during local argument validation or before a command is sent, the previous
	// response can remain here. Also, a method can return failure even when the last
	// tagged server response is OK, such as when a syntactically successful FETCH
	// returns no matching message. Use the method return value or LastMethodSuccess as
	// the authoritative success indicator.
	// 
	void get_LastResponse(CkString &str);
	// Contains the raw response most recently received from the IMAP server.
	// 
	// This property is cleared when Chilkat sends a new command. If a method fails
	// during local argument validation or before a command is sent, the previous
	// response can remain here. Also, a method can return failure even when the last
	// tagged server response is OK, such as when a syntactically successful FETCH
	// returns no matching message. Use the method return value or LastMethodSuccess as
	// the authoritative success indicator.
	// 
	const char *lastResponse(void);

	// Contains the optional IMAP response code from the most recent server response,
	// such as NONEXISTENT or AUTHENTICATIONFAILED. Response-code strings vary by
	// server.
	// 
	// If a method fails before sending an IMAP command, this property can still
	// contain the response code from an earlier command. Use the method return value
	// or LastMethodSuccess to determine whether the current operation succeeded.
	// 
	void get_LastResponseCode(CkString &str);
	// Contains the optional IMAP response code from the most recent server response,
	// such as NONEXISTENT or AUTHENTICATIONFAILED. Response-code strings vary by
	// server.
	// 
	// If a method fails before sending an IMAP command, this property can still
	// contain the response code from an earlier command. Use the method return value
	// or LastMethodSuccess to determine whether the current operation succeeded.
	// 
	const char *lastResponseCode(void);

	// Contains the username of the authenticated IMAP session.
	// 
	// Returns an empty string when the object is not logged in.
	// 
	void get_LoggedInUser(CkString &str);
	// Contains the username of the authenticated IMAP session.
	// 
	// Returns an empty string when the object is not logged in.
	// 
	const char *loggedInUser(void);

	// Contains the number of messages reported when the current mailbox was selected.
	// 
	// The value is updated by SelectMailbox[1] and ExamineMailbox[2]. Unsolicited
	// EXISTS notifications returned by IdleCheck[3] do not automatically update this
	// property; use the notification value or reselect/query the mailbox when a
	// refreshed count is needed.
	// 
	// 
	// References:
	// [1] #SelectMailbox
	// [2] #ExamineMailbox
	// [3] #IdleCheck
	int get_NumMessages(void);

	// Controls whether fetching full message content marks the message as seen.
	// 
	//     * false (the default): fetching a full message or its raw MIME may set the
	//     \Seen flag.
	//     * true: full message data and raw MIME are fetched without setting \Seen,
	//     using IMAP peek semantics.
	// 
	// Fetching headers only does not set \Seen, regardless of this property.
	// 
	bool get_PeekMode(void);
	// Controls whether fetching full message content marks the message as seen.
	// 
	//     * false (the default): fetching a full message or its raw MIME may set the
	//     \Seen flag.
	//     * true: full message data and raw MIME are fetched without setting \Seen,
	//     using IMAP peek semantics.
	// 
	// Fetching headers only does not set \Seen, regardless of this property.
	// 
	void put_PeekMode(bool newVal);

	// Sets the scale used by PercentDone[1] event callbacks. The default is 100.
	// 
	// For example, a scale of 1000 gives tenths-of-a-percent precision, so a callback
	// value of 453 represents 45.3% complete. Values are limited to the range 10
	// through 100000.
	// 
	// This property applies only to languages and environments that support event
	// callbacks and only to operations for which progress can be measured.
	// 
	// 
	// References:
	// [1] #PercentDone
	int get_PercentDoneScale(void);
	// Sets the scale used by PercentDone[1] event callbacks. The default is 100.
	// 
	// For example, a scale of 1000 gives tenths-of-a-percent precision, so a callback
	// value of 453 represents 45.3% complete. Values are limited to the range 10
	// through 100000.
	// 
	// This property applies only to languages and environments that support event
	// callbacks and only to operations for which progress can be measured.
	// 
	// 
	// References:
	// [1] #PercentDone
	void put_PercentDoneScale(int newVal);

	// Specifies the IMAP server port. The default is 143.
	// 
	//     * 993 is the standard port for implicit TLS and is normally used with Ssl[1]
	//     set to true.
	//     * 143 is the standard port for ordinary IMAP and for explicit TLS requested
	//     with StartTls[2].
	// 
	// When AutoFix[3] is enabled, standard port values are used to adjust the
	// effective TLS configuration when connecting.
	// 
	// 
	// References:
	// [1] #Ssl
	// [2] #StartTls
	// [3] #AutoFix
	int get_Port(void);
	// Specifies the IMAP server port. The default is 143.
	// 
	//     * 993 is the standard port for implicit TLS and is normally used with Ssl[1]
	//     set to true.
	//     * 143 is the standard port for ordinary IMAP and for explicit TLS requested
	//     with StartTls[2].
	// 
	// When AutoFix[3] is enabled, standard port values are used to adjust the
	// effective TLS configuration when connecting.
	// 
	// 
	// References:
	// [1] #Ssl
	// [2] #StartTls
	// [3] #AutoFix
	void put_Port(int newVal);

	// Controls address-family preference when a hostname resolves to both IPv4 and
	// IPv6 addresses.
	// 
	//     * false (the default): prefer IPv4.
	//     * true: prefer IPv6.
	// 
	// The other address family may still be used when the preferred one is
	// unavailable.
	// 
	bool get_PreferIpv6(void);
	// Controls address-family preference when a hostname resolves to both IPv4 and
	// IPv6 addresses.
	// 
	//     * false (the default): prefer IPv4.
	//     * true: prefer IPv6.
	// 
	// The other address family may still be used when the preferred one is
	// unavailable.
	// 
	void put_PreferIpv6(bool newVal);

	// The maximum number of seconds that an incoming IMAP response may stall with no
	// additional bytes received.
	// 
	// The default is 60 seconds. This is an inactivity timeout, not a limit on the
	// total time allowed for a large response.
	// 
	int get_ReadTimeout(void);
	// The maximum number of seconds that an incoming IMAP response may stall with no
	// additional bytes received.
	// 
	// The default is 60 seconds. This is an inactivity timeout, not a limit on the
	// total time allowed for a large response.
	// 
	void put_ReadTimeout(int newVal);

	// Controls verification of the IMAP server's TLS certificate chain.
	// 
	//     * false (the default): a connection is not rejected solely because normal
	//     certificate-chain verification fails.
	//     * true: the connection fails when the certificate is expired, is not yet
	//     valid, its signature is invalid, or its chain cannot be verified to a trusted
	//     root.
	// 
	// Certificate-chain verification is separate from hostname matching and public-key
	// pinning. Hostname matching, when required, is enforced independently even when
	// this property is false. TlsPinSet[1] supplements rather than replaces normal
	// certificate verification.
	// 
	// The hostname used for the TLS connection is also used for Server Name Indication
	// (SNI) and certificate hostname comparison.
	// 
	// 
	// References:
	// [1] #TlsPinSet
	bool get_RequireSslCertVerify(void);
	// Controls verification of the IMAP server's TLS certificate chain.
	// 
	//     * false (the default): a connection is not rejected solely because normal
	//     certificate-chain verification fails.
	//     * true: the connection fails when the certificate is expired, is not yet
	//     valid, its signature is invalid, or its chain cannot be verified to a trusted
	//     root.
	// 
	// Certificate-chain verification is separate from hostname matching and public-key
	// pinning. Hostname matching, when required, is enforced independently even when
	// this property is false. TlsPinSet[1] supplements rather than replaces normal
	// certificate verification.
	// 
	// The hostname used for the TLS connection is also used for Server Name Indication
	// (SNI) and certificate hostname comparison.
	// 
	// 
	// References:
	// [1] #TlsPinSet
	void put_RequireSslCertVerify(bool newVal);

	// Specifies the IMAP CHARSET used by Search[1], QueryMbx[2], and QueryThread[3]
	// when search criteria contain non-ASCII characters. The default is UTF-8.
	// 
	// If the criteria contain only 7-bit ASCII characters, no CHARSET is needed and
	// this property has no effect. The value AUTO enables the legacy behavior of
	// selecting a charset by examining the criteria text.
	// 
	// Most applications should leave this property unchanged unless a particular
	// server rejects non-English search text.
	// 
	// 
	// References:
	// [1] #Search
	// [2] #QueryMbx
	// [3] #QueryThread
	void get_SearchCharset(CkString &str);
	// Specifies the IMAP CHARSET used by Search[1], QueryMbx[2], and QueryThread[3]
	// when search criteria contain non-ASCII characters. The default is UTF-8.
	// 
	// If the criteria contain only 7-bit ASCII characters, no CHARSET is needed and
	// this property has no effect. The value AUTO enables the legacy behavior of
	// selecting a charset by examining the criteria text.
	// 
	// Most applications should leave this property unchanged unless a particular
	// server rejects non-English search text.
	// 
	// 
	// References:
	// [1] #Search
	// [2] #QueryMbx
	// [3] #QueryThread
	const char *searchCharset(void);
	// Specifies the IMAP CHARSET used by Search[1], QueryMbx[2], and QueryThread[3]
	// when search criteria contain non-ASCII characters. The default is UTF-8.
	// 
	// If the criteria contain only 7-bit ASCII characters, no CHARSET is needed and
	// this property has no effect. The value AUTO enables the legacy behavior of
	// selecting a charset by examining the criteria text.
	// 
	// Most applications should leave this property unchanged unless a particular
	// server rejects non-English search text.
	// 
	// 
	// References:
	// [1] #Search
	// [2] #QueryMbx
	// [3] #QueryThread
	void put_SearchCharset(const char *newVal);

	// Contains the name of the currently selected or examined mailbox.
	// 
	// Returns an empty string when no mailbox is selected.
	// 
	void get_SelectedMailbox(CkString &str);
	// Contains the name of the currently selected or examined mailbox.
	// 
	// Returns an empty string when no mailbox is selected.
	// 
	const char *selectedMailbox(void);

	// Specifies the application-level buffer size used when sending data through the
	// underlying TCP connection.
	// 
	// The default is 32767 bytes. Most applications should leave this setting
	// unchanged.
	// 
	int get_SendBufferSize(void);
	// Specifies the application-level buffer size used when sending data through the
	// underlying TCP connection.
	// 
	// The default is 32767 bytes. Most applications should leave this setting
	// unchanged.
	// 
	void put_SendBufferSize(int newVal);

	// Contains the mailbox-hierarchy delimiter reported by the IMAP server, typically
	// / or..
	// 
	// MbxList[1] and the legacy mailbox-listing methods update this property from the
	// server's LIST response. The value is a string containing one character.
	// 
	// 
	// References:
	// [1] #MbxList
	void get_SeparatorChar(CkString &str);
	// Contains the mailbox-hierarchy delimiter reported by the IMAP server, typically
	// / or..
	// 
	// MbxList[1] and the legacy mailbox-listing methods update this property from the
	// server's LIST response. The value is a string containing one character.
	// 
	// 
	// References:
	// [1] #MbxList
	const char *separatorChar(void);
	// Contains the mailbox-hierarchy delimiter reported by the IMAP server, typically
	// / or..
	// 
	// MbxList[1] and the legacy mailbox-listing methods update this property from the
	// server's LIST response. The value is a string containing one character.
	// 
	// 
	// References:
	// [1] #MbxList
	void put_SeparatorChar(const char *newVal);

	// Contains the in-memory log of raw IMAP commands and server responses.
	// 
	// KeepSessionLog[1] must be true for logging to occur. Call ClearSessionLog[2]
	// to remove previously collected entries.
	// 
	// Chilkat redacts sensitive credentials, including passwords and OAuth access
	// tokens, from session logs, diagnostic logs, and LastErrorText.
	// 
	// 
	// References:
	// [1] #KeepSessionLog
	// [2] #ClearSessionLog
	void get_SessionLog(CkString &str);
	// Contains the in-memory log of raw IMAP commands and server responses.
	// 
	// KeepSessionLog[1] must be true for logging to occur. Call ClearSessionLog[2]
	// to remove previously collected entries.
	// 
	// Chilkat redacts sensitive credentials, including passwords and OAuth access
	// tokens, from session logs, diagnostic logs, and LastErrorText.
	// 
	// 
	// References:
	// [1] #KeepSessionLog
	// [2] #ClearSessionLog
	const char *sessionLog(void);

	// Specifies the hostname or numeric IP address of the SOCKS proxy.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksHostname(CkString &str);
	// Specifies the hostname or numeric IP address of the SOCKS proxy.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const char *socksHostname(void);
	// Specifies the hostname or numeric IP address of the SOCKS proxy.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksHostname(const char *newVal);

	// Specifies the SOCKS5 proxy password.
	// 
	// It is ignored for SOCKS4 because SOCKS4 does not define password authentication.
	// 
	void get_SocksPassword(CkString &str);
	// Specifies the SOCKS5 proxy password.
	// 
	// It is ignored for SOCKS4 because SOCKS4 does not define password authentication.
	// 
	const char *socksPassword(void);
	// Specifies the SOCKS5 proxy password.
	// 
	// It is ignored for SOCKS4 because SOCKS4 does not define password authentication.
	// 
	void put_SocksPassword(const char *newVal);

	// Specifies the SOCKS proxy port. The default is 1080.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	int get_SocksPort(void);
	// Specifies the SOCKS proxy port. The default is 1080.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksPort(int newVal);

	// Specifies the username sent to a SOCKS4 or SOCKS5 proxy.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksUsername(CkString &str);
	// Specifies the username sent to a SOCKS4 or SOCKS5 proxy.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const char *socksUsername(void);
	// Specifies the username sent to a SOCKS4 or SOCKS5 proxy.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksUsername(const char *newVal);

	// Selects whether the IMAP connection uses a SOCKS proxy.
	// 
	// +-------+------------------------------------------------+
	// | Value |                    Behavior                    |
	// +=======+================================================+
	// | 0     | Do not use a SOCKS proxy. This is the default. |
	// +-------+------------------------------------------------+
	// | 4     | Connect through a SOCKS4 proxy.                |
	// +-------+------------------------------------------------+
	// | 5     | Connect through a SOCKS5 proxy.                |
	// +-------+------------------------------------------------+
	// 
	int get_SocksVersion(void);
	// Selects whether the IMAP connection uses a SOCKS proxy.
	// 
	// +-------+------------------------------------------------+
	// | Value |                    Behavior                    |
	// +=======+================================================+
	// | 0     | Do not use a SOCKS proxy. This is the default. |
	// +-------+------------------------------------------------+
	// | 4     | Connect through a SOCKS4 proxy.                |
	// +-------+------------------------------------------------+
	// | 5     | Connect through a SOCKS5 proxy.                |
	// +-------+------------------------------------------------+
	// 
	void put_SocksVersion(int newVal);

	// Sets the operating system's TCP receive-buffer size. The default is 4194304
	// bytes.
	// 
	// Most applications should leave this unchanged. Increasing it may improve
	// download throughput on high-latency or high-bandwidth networks. Values that are
	// multiples of 4096 are recommended.
	// 
	int get_SoRcvBuf(void);
	// Sets the operating system's TCP receive-buffer size. The default is 4194304
	// bytes.
	// 
	// Most applications should leave this unchanged. Increasing it may improve
	// download throughput on high-latency or high-bandwidth networks. Values that are
	// multiples of 4096 are recommended.
	// 
	void put_SoRcvBuf(int newVal);

	// Specifies the sort order used by QueryMbx[1]. The default is the empty string,
	// which uses an ordinary IMAP SEARCH.
	// 
	// Set this property to a space-separated list of sort keys. Sorting is ascending
	// unless REVERSE precedes a key. Supported keys are ARRIVAL, CC, DATE, FROM, SIZE,
	// SUBJECT, and TO.
	// 
	// Examples:
	// 
	//     * SUBJECT REVERSE DATE
	//     * REVERSE SIZE
	//     * ARRIVAL
	// 
	// If the server does not support the IMAP SORT extension, Chilkat automatically
	// falls back to an ordinary SEARCH.
	// 
	// 
	// References:
	// [1] #QueryMbx
	void get_SortCriteria(CkString &str);
	// Specifies the sort order used by QueryMbx[1]. The default is the empty string,
	// which uses an ordinary IMAP SEARCH.
	// 
	// Set this property to a space-separated list of sort keys. Sorting is ascending
	// unless REVERSE precedes a key. Supported keys are ARRIVAL, CC, DATE, FROM, SIZE,
	// SUBJECT, and TO.
	// 
	// Examples:
	// 
	//     * SUBJECT REVERSE DATE
	//     * REVERSE SIZE
	//     * ARRIVAL
	// 
	// If the server does not support the IMAP SORT extension, Chilkat automatically
	// falls back to an ordinary SEARCH.
	// 
	// 
	// References:
	// [1] #QueryMbx
	const char *sortCriteria(void);
	// Specifies the sort order used by QueryMbx[1]. The default is the empty string,
	// which uses an ordinary IMAP SEARCH.
	// 
	// Set this property to a space-separated list of sort keys. Sorting is ascending
	// unless REVERSE precedes a key. Supported keys are ARRIVAL, CC, DATE, FROM, SIZE,
	// SUBJECT, and TO.
	// 
	// Examples:
	// 
	//     * SUBJECT REVERSE DATE
	//     * REVERSE SIZE
	//     * ARRIVAL
	// 
	// If the server does not support the IMAP SORT extension, Chilkat automatically
	// falls back to an ordinary SEARCH.
	// 
	// 
	// References:
	// [1] #QueryMbx
	void put_SortCriteria(const char *newVal);

	// Sets the operating system's TCP send-buffer size. The default is 262144 bytes.
	// 
	// Most applications should leave this unchanged. Increasing it may improve upload
	// throughput; values such as 524288 or 1048576 may be tested when needed.
	// 
	int get_SoSndBuf(void);
	// Sets the operating system's TCP send-buffer size. The default is 262144 bytes.
	// 
	// Most applications should leave this unchanged. Increasing it may improve upload
	// throughput; values such as 524288 or 1048576 may be tested when needed.
	// 
	void put_SoSndBuf(int newVal);

	// Controls implicit TLS for the IMAP connection. The default is false.
	// 
	//     * true: begin the connection with a TLS handshake, typically on port 993.
	//     * false: begin with ordinary IMAP. Use StartTls[1] when the server
	//     requires an explicit STARTTLS upgrade.
	// 
	// If both this property and StartTls[1] are true, implicit TLS takes precedence
	// and STARTTLS is not used.
	// 
	// 
	// References:
	// [1] #StartTls
	bool get_Ssl(void);
	// Controls implicit TLS for the IMAP connection. The default is false.
	// 
	//     * true: begin the connection with a TLS handshake, typically on port 993.
	//     * false: begin with ordinary IMAP. Use StartTls[1] when the server
	//     requires an explicit STARTTLS upgrade.
	// 
	// If both this property and StartTls[1] are true, implicit TLS takes precedence
	// and STARTTLS is not used.
	// 
	// 
	// References:
	// [1] #StartTls
	void put_Ssl(bool newVal);

	// Restricts the cipher suites and selected TLS security requirements offered for
	// an IMAP TLS connection.
	// 
	// Leave this property empty to allow all cipher suites implemented by the
	// installed Chilkat version. To restrict negotiation, provide a comma-separated
	// list in preference order, for example:
	// 
	// TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384, TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256
	// 
	// The server chooses from the cipher suites offered by the client; the client
	// cannot force a suite the server does not support.
	// 
	// The list may also contain these policy keywords:
	// 
	//     * rsa1024 or rsa2048 to require a minimum RSA server-key size.
	//     * secure-renegotiation to require secure TLS renegotiation.
	//     * best-practices to use the security policy recommended by the installed
	//     Chilkat version.
	// 
	// Legacy keywords such as aes256-cbc, aes128-cbc, 3des-cbc, and rc4 remain
	// recognized for compatibility, but explicitly listing acceptable suites is
	// preferred.
	// 
	void get_SslAllowedCiphers(CkString &str);
	// Restricts the cipher suites and selected TLS security requirements offered for
	// an IMAP TLS connection.
	// 
	// Leave this property empty to allow all cipher suites implemented by the
	// installed Chilkat version. To restrict negotiation, provide a comma-separated
	// list in preference order, for example:
	// 
	// TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384, TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256
	// 
	// The server chooses from the cipher suites offered by the client; the client
	// cannot force a suite the server does not support.
	// 
	// The list may also contain these policy keywords:
	// 
	//     * rsa1024 or rsa2048 to require a minimum RSA server-key size.
	//     * secure-renegotiation to require secure TLS renegotiation.
	//     * best-practices to use the security policy recommended by the installed
	//     Chilkat version.
	// 
	// Legacy keywords such as aes256-cbc, aes128-cbc, 3des-cbc, and rc4 remain
	// recognized for compatibility, but explicitly listing acceptable suites is
	// preferred.
	// 
	const char *sslAllowedCiphers(void);
	// Restricts the cipher suites and selected TLS security requirements offered for
	// an IMAP TLS connection.
	// 
	// Leave this property empty to allow all cipher suites implemented by the
	// installed Chilkat version. To restrict negotiation, provide a comma-separated
	// list in preference order, for example:
	// 
	// TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384, TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256
	// 
	// The server chooses from the cipher suites offered by the client; the client
	// cannot force a suite the server does not support.
	// 
	// The list may also contain these policy keywords:
	// 
	//     * rsa1024 or rsa2048 to require a minimum RSA server-key size.
	//     * secure-renegotiation to require secure TLS renegotiation.
	//     * best-practices to use the security policy recommended by the installed
	//     Chilkat version.
	// 
	// Legacy keywords such as aes256-cbc, aes128-cbc, 3des-cbc, and rc4 remain
	// recognized for compatibility, but explicitly listing acceptable suites is
	// preferred.
	// 
	void put_SslAllowedCiphers(const char *newVal);

	// Selects the TLS protocol version or minimum version allowed for secure IMAP
	// connections.
	// 
	// The complete list of accepted values is:
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
	// The default is default, which allows Chilkat to negotiate a protocol supported
	// by both client and server. A minimum-version setting is generally more
	// interoperable than requiring one exact version.
	// 
	void get_SslProtocol(CkString &str);
	// Selects the TLS protocol version or minimum version allowed for secure IMAP
	// connections.
	// 
	// The complete list of accepted values is:
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
	// The default is default, which allows Chilkat to negotiate a protocol supported
	// by both client and server. A minimum-version setting is generally more
	// interoperable than requiring one exact version.
	// 
	const char *sslProtocol(void);
	// Selects the TLS protocol version or minimum version allowed for secure IMAP
	// connections.
	// 
	// The complete list of accepted values is:
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
	// The default is default, which allows Chilkat to negotiate a protocol supported
	// by both client and server. A minimum-version setting is generally more
	// interoperable than requiring one exact version.
	// 
	void put_SslProtocol(const char *newVal);

	// Indicates whether the IMAP server certificate chain was successfully verified
	// for the current or most recent TLS connection.
	// 
	// This property reports certificate-chain verification only. It does not report
	// hostname matching or public-key pinning. If hostname matching or pinning is
	// required and the check fails, the connection itself fails.
	// 
	bool get_SslServerCertVerified(void);

	// Controls explicit TLS using the IMAP STARTTLS command. The default is false.
	// 
	//     * true: connect in clear text, issue STARTTLS, and then continue through
	//     an encrypted channel.
	//     * false: do not request an explicit TLS upgrade.
	// 
	// Explicit TLS is commonly used on port 143. For implicit TLS, set Ssl[1] to
	// true and normally use port 993. If both properties are true, Ssl[1] takes
	// precedence.
	// 
	// 
	// References:
	// [1] #Ssl
	bool get_StartTls(void);
	// Controls explicit TLS using the IMAP STARTTLS command. The default is false.
	// 
	//     * true: connect in clear text, issue STARTTLS, and then continue through
	//     an encrypted channel.
	//     * false: do not request an explicit TLS upgrade.
	// 
	// Explicit TLS is commonly used on port 143. For implicit TLS, set Ssl[1] to
	// true and normally use port 993. If both properties are true, Ssl[1] takes
	// precedence.
	// 
	// 
	// References:
	// [1] #Ssl
	void put_StartTls(bool newVal);

	// Contains the cipher suite negotiated for the current or most recent TLS
	// connection, for example TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384.
	// 
	// The value is empty before a TLS connection has been established or after a
	// failed TLS negotiation.
	// 
	void get_TlsCipherSuite(CkString &str);
	// Contains the cipher suite negotiated for the current or most recent TLS
	// connection, for example TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384.
	// 
	// The value is empty before a TLS connection has been established or after a
	// failed TLS negotiation.
	// 
	const char *tlsCipherSuite(void);

	// Specifies one or more expected SPKI fingerprints for TLS public-key pinning. If
	// none of the configured pins matches the server certificate, the TLS handshake
	// fails.
	// 
	// Pinning supplements normal certificate-chain verification; it does not replace
	// it. A matching pin does not make an expired or otherwise invalid certificate
	// acceptable. When a pin set is configured, pin matching is enforced even if
	// RequireSslCertVerify[1] is false.
	// 
	// The format is:
	// 
	// hashAlgorithm, encoding, fingerprint1, fingerprint2, ...
	// 
	// Example:
	// 
	// sha256, base64, lKg1SIqyhPSK19tlPbjl8s02yChsVTDklQpkMCHvsTE=
	// 
	// Supported hash algorithms include sha1, sha256, sha384, sha512, md2, md5, haval,
	// ripemd128, ripemd160, ripemd256, and ripemd320. Supported encodings include
	// base64, hex, and other Chilkat-supported binary encodings.
	// 
	// 
	// References:
	// [1] #RequireSslCertVerify
	void get_TlsPinSet(CkString &str);
	// Specifies one or more expected SPKI fingerprints for TLS public-key pinning. If
	// none of the configured pins matches the server certificate, the TLS handshake
	// fails.
	// 
	// Pinning supplements normal certificate-chain verification; it does not replace
	// it. A matching pin does not make an expired or otherwise invalid certificate
	// acceptable. When a pin set is configured, pin matching is enforced even if
	// RequireSslCertVerify[1] is false.
	// 
	// The format is:
	// 
	// hashAlgorithm, encoding, fingerprint1, fingerprint2, ...
	// 
	// Example:
	// 
	// sha256, base64, lKg1SIqyhPSK19tlPbjl8s02yChsVTDklQpkMCHvsTE=
	// 
	// Supported hash algorithms include sha1, sha256, sha384, sha512, md2, md5, haval,
	// ripemd128, ripemd160, ripemd256, and ripemd320. Supported encodings include
	// base64, hex, and other Chilkat-supported binary encodings.
	// 
	// 
	// References:
	// [1] #RequireSslCertVerify
	const char *tlsPinSet(void);
	// Specifies one or more expected SPKI fingerprints for TLS public-key pinning. If
	// none of the configured pins matches the server certificate, the TLS handshake
	// fails.
	// 
	// Pinning supplements normal certificate-chain verification; it does not replace
	// it. A matching pin does not make an expired or otherwise invalid certificate
	// acceptable. When a pin set is configured, pin matching is enforced even if
	// RequireSslCertVerify[1] is false.
	// 
	// The format is:
	// 
	// hashAlgorithm, encoding, fingerprint1, fingerprint2, ...
	// 
	// Example:
	// 
	// sha256, base64, lKg1SIqyhPSK19tlPbjl8s02yChsVTDklQpkMCHvsTE=
	// 
	// Supported hash algorithms include sha1, sha256, sha384, sha512, md2, md5, haval,
	// ripemd128, ripemd160, ripemd256, and ripemd320. Supported encodings include
	// base64, hex, and other Chilkat-supported binary encodings.
	// 
	// 
	// References:
	// [1] #RequireSslCertVerify
	void put_TlsPinSet(const char *newVal);

	// Contains the protocol version negotiated for the current or most recent TLS
	// connection, such as TLS 1.2 or TLS 1.3.
	// 
	// The value is empty before a TLS connection has been established or after a
	// failed TLS negotiation.
	// 
	void get_TlsVersion(CkString &str);
	// Contains the protocol version negotiated for the current or most recent TLS
	// connection, such as TLS 1.2 or TLS 1.3.
	// 
	// The value is empty before a TLS connection has been established or after a
	// failed TLS negotiation.
	// 
	const char *tlsVersion(void);

	// Contains the mailbox's reported UIDNEXT value—the UID expected to be assigned to
	// the next appended message.
	// 
	// The value is 0 when no mailbox is selected or when the server did not provide
	// UIDNEXT.
	// 
	unsigned long get_UidNext(void);

	// Contains the UIDVALIDITY value of the currently selected mailbox, or 0 when no
	// mailbox is selected.
	// 
	// An application that stores message UIDs should also store this value. If
	// UIDVALIDITY changes in a later session, previously stored UIDs must no longer be
	// assumed to identify the same messages.
	// 
	unsigned long get_UidValidity(void);

	// Provides comma-separated compatibility or platform-specific options for uncommon
	// cases. The default is an empty string, and most applications should leave it
	// unchanged.
	// 
	//     * ProtectFromVpn: on Android, bypasses an installed or active VPN.
	//     * EnableTls13: legacy option that enabled offering TLS 1.3 in versions where
	//     it was not yet enabled by default.
	void get_UncommonOptions(CkString &str);
	// Provides comma-separated compatibility or platform-specific options for uncommon
	// cases. The default is an empty string, and most applications should leave it
	// unchanged.
	// 
	//     * ProtectFromVpn: on Android, bypasses an installed or active VPN.
	//     * EnableTls13: legacy option that enabled offering TLS 1.3 in versions where
	//     it was not yet enabled by default.
	const char *uncommonOptions(void);
	// Provides comma-separated compatibility or platform-specific options for uncommon
	// cases. The default is an empty string, and most applications should leave it
	// unchanged.
	// 
	//     * ProtectFromVpn: on Android, bypasses an installed or active VPN.
	//     * EnableTls13: legacy option that enabled offering TLS 1.3 in versions where
	//     it was not yet enabled by default.
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds the PKCS #12/PFX data in the BinData in bd as a source of certificates
	// and private keys for S/MIME processing.
	// 
	// password contains the PFX password. Call this method once for each additional
	// source.
	// 
	bool AddPfxSourceBd(CkBinData &bd, const char *password);


	// Adds a PKCS #12/PFX source that may be searched for certificates and private
	// keys needed for S/MIME decryption or signature processing.
	// 
	// pfxBytes contains the PFX bytes, and pfxPassword contains its password. Call this method
	// once for each additional source. Common file extensions are.pfx and.p12.
	// 
	bool AddPfxSourceData(CkByteData &pfxBytes, const char *pfxPassword);


	// Adds a PKCS #12/PFX file that may be searched for certificates and private keys
	// needed for S/MIME decryption or signature processing.
	// 
	// pfxFilePath is the local filesystem path of the PFX file, and pfxPassword contains its
	// password. Call this method once for each additional source.
	// 
	// On Windows, system certificate stores are also searched automatically. On macOS,
	// the Keychain is searched automatically.
	// 
	bool AddPfxSourceFile(const char *pfxFilePath, const char *pfxPassword);


	// Appends the Email in email to the mailbox named by mailbox.
	// 
	// AppendSeen[1] controls the initial \Seen flag. After success, AppendUid[2]
	// contains the UID reported by the server, or 0 if no UID was reported, and
	// LastAppendedMime[3] contains the MIME sent.
	// 
	// Rendering for the append does not generate or replace email's Date, Message-ID,
	// or MIME boundary values. If email uses an 8bit or binary transfer encoding that
	// would produce non-text binary bytes, Chilkat changes the rendered transfer
	// encoding to a text-safe encoding such as Base64.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #AppendSeen
	// [2] #AppendUid
	// [3] #LastAppendedMime
	bool AppendMail(const char *mailbox, CkEmail &email);

	// Appends the Email in email to the mailbox named by mailbox.
	// 
	// AppendSeen[1] controls the initial \Seen flag. After success, AppendUid[2]
	// contains the UID reported by the server, or 0 if no UID was reported, and
	// LastAppendedMime[3] contains the MIME sent.
	// 
	// Rendering for the append does not generate or replace email's Date, Message-ID,
	// or MIME boundary values. If email uses an 8bit or binary transfer encoding that
	// would produce non-text binary bytes, Chilkat changes the rendered transfer
	// encoding to a text-safe encoding such as Base64.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #AppendSeen
	// [2] #AppendUid
	// [3] #LastAppendedMime
	CkTask *AppendMailAsync(const char *mailbox, CkEmail &email);


	// Appends the complete RFC 822/MIME message in mimeText to the mailbox named by mailbox.
	// 
	// AppendSeen[1] controls the initial \Seen flag. After success, AppendUid[2]
	// contains the UID reported by the server, or 0 if no UID was reported, and
	// LastAppendedMime[3] contains the MIME sent.
	// 
	// The MIME text is sent exactly as supplied. Chilkat does not normalize line
	// endings, add a final CRLF, or re-encode headers or body content. The supplied
	// text must not contain non-text binary bytes.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #AppendSeen
	// [2] #AppendUid
	// [3] #LastAppendedMime
	bool AppendMime(const char *mailbox, const char *mimeText);

	// Appends the complete RFC 822/MIME message in mimeText to the mailbox named by mailbox.
	// 
	// AppendSeen[1] controls the initial \Seen flag. After success, AppendUid[2]
	// contains the UID reported by the server, or 0 if no UID was reported, and
	// LastAppendedMime[3] contains the MIME sent.
	// 
	// The MIME text is sent exactly as supplied. Chilkat does not normalize line
	// endings, add a final CRLF, or re-encode headers or body content. The supplied
	// text must not contain non-text binary bytes.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #AppendSeen
	// [2] #AppendUid
	// [3] #LastAppendedMime
	CkTask *AppendMimeAsync(const char *mailbox, const char *mimeText);


	// Appends the MIME message in mimeText to the mailbox named by mailbox while explicitly
	// setting the server-side internal date from internalDateStr.
	// 
	// internalDateStr is an RFC 822 date/time string, for example Fri, 10 Jul 2026 20:15:30 GMT.
	// The internal date is mailbox metadata and is distinct from the message's Date
	// header. AppendSeen[1] controls the initial \Seen flag.
	// 
	// The MIME text is sent exactly as supplied. Chilkat does not normalize line
	// endings, add a final CRLF, or re-encode headers or body content. The supplied
	// text must not contain non-text binary bytes.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #AppendSeen
	bool AppendMimeWithDateStr(const char *mailbox, const char *mimeText, const char *internalDateStr);

	// Appends the MIME message in mimeText to the mailbox named by mailbox while explicitly
	// setting the server-side internal date from internalDateStr.
	// 
	// internalDateStr is an RFC 822 date/time string, for example Fri, 10 Jul 2026 20:15:30 GMT.
	// The internal date is mailbox metadata and is distinct from the message's Date
	// header. AppendSeen[1] controls the initial \Seen flag.
	// 
	// The MIME text is sent exactly as supplied. Chilkat does not normalize line
	// endings, add a final CRLF, or re-encode headers or body content. The supplied
	// text must not contain non-text binary bytes.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #AppendSeen
	CkTask *AppendMimeWithDateStrAsync(const char *mailbox, const char *mimeText, const char *internalDateStr);


	// Appends the MIME message in mimeText to the mailbox named by mailbox and sets its
	// initial system flags.
	// 
	//     * seen controls \Seen.
	//     * flagged controls \Flagged.
	//     * answered controls \Answered.
	//     * draft controls \Draft.
	// 
	// Use true to set a flag and false to leave it unset. The explicit flag
	// arguments are used instead of AppendSeen[1].
	// 
	// The MIME text is sent exactly as supplied. Chilkat does not normalize line
	// endings, add a final CRLF, or re-encode headers or body content. The supplied
	// text must not contain non-text binary bytes.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #AppendSeen
	bool AppendMimeWithFlags(const char *mailbox, const char *mimeText, bool seen, bool flagged, bool answered, bool draft);

	// Appends the MIME message in mimeText to the mailbox named by mailbox and sets its
	// initial system flags.
	// 
	//     * seen controls \Seen.
	//     * flagged controls \Flagged.
	//     * answered controls \Answered.
	//     * draft controls \Draft.
	// 
	// Use true to set a flag and false to leave it unset. The explicit flag
	// arguments are used instead of AppendSeen[1].
	// 
	// The MIME text is sent exactly as supplied. Chilkat does not normalize line
	// endings, add a final CRLF, or re-encode headers or body content. The supplied
	// text must not contain non-text binary bytes.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #AppendSeen
	CkTask *AppendMimeWithFlagsAsync(const char *mailbox, const char *mimeText, bool seen, bool flagged, bool answered, bool draft);


	// Appends the MIME contained in the StringBuilder in sbMime to mailbox mailbox and sets
	// its initial system flags.
	// 
	//     * seen controls \Seen.
	//     * flagged controls \Flagged.
	//     * answered controls \Answered.
	//     * draft controls \Draft.
	// 
	// The explicit flag arguments are used instead of AppendSeen[1].
	// 
	// The MIME text is sent exactly as supplied. Chilkat does not normalize line
	// endings, add a final CRLF, or re-encode headers or body content. The supplied
	// text must not contain non-text binary bytes.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #AppendSeen
	bool AppendMimeWithFlagsSb(const char *mailbox, CkStringBuilder &sbMime, bool seen, bool flagged, bool answered, bool draft);

	// Appends the MIME contained in the StringBuilder in sbMime to mailbox mailbox and sets
	// its initial system flags.
	// 
	//     * seen controls \Seen.
	//     * flagged controls \Flagged.
	//     * answered controls \Answered.
	//     * draft controls \Draft.
	// 
	// The explicit flag arguments are used instead of AppendSeen[1].
	// 
	// The MIME text is sent exactly as supplied. Chilkat does not normalize line
	// endings, add a final CRLF, or re-encode headers or body content. The supplied
	// text must not contain non-text binary bytes.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #AppendSeen
	CkTask *AppendMimeWithFlagsSbAsync(const char *mailbox, CkStringBuilder &sbMime, bool seen, bool flagged, bool answered, bool draft);


	// Sends the IMAP CAPABILITY command and returns the server's raw capability
	// response.
	// 
	// Use HasCapability[1] to test the returned text for a particular capability such
	// as IDLE, MOVE, SORT, or QUOTA.
	// 
	// 
	// References:
	// [1] #HasCapability
	bool Capability(CkString &outStr);

	// Sends the IMAP CAPABILITY command and returns the server's raw capability
	// response.
	// 
	// Use HasCapability[1] to test the returned text for a particular capability such
	// as IDLE, MOVE, SORT, or QUOTA.
	// 
	// 
	// References:
	// [1] #HasCapability
	const char *capability(void);
	// Sends the IMAP CAPABILITY command and returns the server's raw capability
	// response.
	// 
	// Use HasCapability[1] to test the returned text for a particular capability such
	// as IDLE, MOVE, SORT, or QUOTA.
	// 
	// 
	// References:
	// [1] #HasCapability
	CkTask *CapabilityAsync(void);


	// Checks whether the underlying TCP socket is currently connected to the IMAP
	// server.
	// 
	// This performs a low-level socket-state check and does not send an IMAP command.
	// To verify that the server is responsive and the session remains usable, call
	// Noop[1].
	// 
	// 
	// References:
	// [1] #Noop
	bool CheckConnection(void);


	// Deprecated: Use QueryMbx[1] instead.
	// 
	// Checks for messages that arrived since the mailbox was selected or since the
	// previous call to this method, whichever is later.
	// 
	// The method closes and reopens the selected mailbox, then searches for messages
	// marked recent or having a UID greater than the prior UIDNEXT. The returned
	// MessageSet contains UIDs and may be passed to FetchMsgSet[2].
	// 
	// 
	// References:
	// [1] #QueryMbx
	// [2] #FetchMsgSet
	// The caller is responsible for deleting the object returned by this method.
	CkMessageSet *CheckForNewEmail(void);

	// Deprecated: Use QueryMbx[1] instead.
	// 
	// Checks for messages that arrived since the mailbox was selected or since the
	// previous call to this method, whichever is later.
	// 
	// The method closes and reopens the selected mailbox, then searches for messages
	// marked recent or having a UID greater than the prior UIDNEXT. The returned
	// MessageSet contains UIDs and may be passed to FetchMsgSet[2].
	// 
	// 
	// References:
	// [1] #QueryMbx
	// [2] #FetchMsgSet
	CkTask *CheckForNewEmailAsync(void);


	// Clears the in-memory text returned by SessionLog[1].
	// 
	// Session logging remains enabled or disabled according to KeepSessionLog[2].
	// 
	// 
	// References:
	// [1] #SessionLog
	// [2] #KeepSessionLog
	void ClearSessionLog(void);


	// Closes the currently selected mailbox while keeping the authenticated IMAP
	// connection open.
	// 
	// mailbox is retained for backward compatibility but is ignored. It may be the empty
	// string. Messages marked with \Deleted are permanently removed as part of the
	// close operation. After success, SelectedMailbox[1] is empty, but another mailbox
	// can be selected on the same connection.
	// 
	// 
	// References:
	// [1] #SelectedMailbox
	bool CloseMailbox(const char *mailbox);

	// Closes the currently selected mailbox while keeping the authenticated IMAP
	// connection open.
	// 
	// mailbox is retained for backward compatibility but is ignored. It may be the empty
	// string. Messages marked with \Deleted are permanently removed as part of the
	// close operation. After success, SelectedMailbox[1] is empty, but another mailbox
	// can be selected on the same connection.
	// 
	// 
	// References:
	// [1] #SelectedMailbox
	CkTask *CloseMailboxAsync(const char *mailbox);


	// Establishes a TCP connection to the IMAP server identified by domainName but does not
	// authenticate.
	// 
	// domainName may be a hostname, IPv4 address, or IPv6 address. Configure Port[1],
	// Ssl[2], StartTls[3], proxy settings, and timeouts before calling this method.
	// The TLS hostname is used for Server Name Indication (SNI) and certificate
	// hostname comparison. Call Login[4] after the connection succeeds.
	// 
	// If this method is called while already connected, Chilkat tears down the
	// existing connection and establishes a new connection to domainName. This applies even
	// when domainName names the same server.
	// 
	// Imap does not automatically reconnect after a connection is dropped. The
	// application must call this method again, authenticate again, reselect a mailbox
	// when needed, and retry the interrupted operation.
	// 
	// Connection failures can also be caused by DNS, local or remote firewalls,
	// antivirus software, routing, or other network infrastructure outside Chilkat.
	// 
	// 
	// References:
	// [1] #Port
	// [2] #Ssl
	// [3] #StartTls
	// [4] #Login
	bool Connect(const char *domainName);

	// Establishes a TCP connection to the IMAP server identified by domainName but does not
	// authenticate.
	// 
	// domainName may be a hostname, IPv4 address, or IPv6 address. Configure Port[1],
	// Ssl[2], StartTls[3], proxy settings, and timeouts before calling this method.
	// The TLS hostname is used for Server Name Indication (SNI) and certificate
	// hostname comparison. Call Login[4] after the connection succeeds.
	// 
	// If this method is called while already connected, Chilkat tears down the
	// existing connection and establishes a new connection to domainName. This applies even
	// when domainName names the same server.
	// 
	// Imap does not automatically reconnect after a connection is dropped. The
	// application must call this method again, authenticate again, reselect a mailbox
	// when needed, and retry the interrupted operation.
	// 
	// Connection failures can also be caused by DNS, local or remote firewalls,
	// antivirus software, routing, or other network infrastructure outside Chilkat.
	// 
	// 
	// References:
	// [1] #Port
	// [2] #Ssl
	// [3] #StartTls
	// [4] #Login
	CkTask *ConnectAsync(const char *domainName);


	// Copies one message from the currently selected mailbox to the destination
	// mailbox in copyToMailbox.
	// 
	// msgId identifies the source message. If bUid is true, msgId is a UID; otherwise,
	// msgId is a sequence number. The original message remains in the selected mailbox.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	bool Copy(unsigned long msgId, bool bUid, const char *copyToMailbox);

	// Copies one message from the currently selected mailbox to the destination
	// mailbox in copyToMailbox.
	// 
	// msgId identifies the source message. If bUid is true, msgId is a UID; otherwise,
	// msgId is a sequence number. The original message remains in the selected mailbox.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	CkTask *CopyAsync(unsigned long msgId, bool bUid, const char *copyToMailbox);


	// Copies the messages identified by the MessageSet in messageSet from the selected
	// mailbox to destination mailbox copyToMailbox using one IMAP command.
	// 
	// MessageSet.HasUids determines whether messageSet contains UIDs or sequence numbers.
	// For sequence numbers, one invalid value causes the entire command to fail and no
	// messages are copied. For UIDs, nonexistent values are silently ignored and valid
	// messages are copied. The original messages remain in the selected mailbox.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	bool CopyMultiple(CkMessageSet &messageSet, const char *copyToMailbox);

	// Copies the messages identified by the MessageSet in messageSet from the selected
	// mailbox to destination mailbox copyToMailbox using one IMAP command.
	// 
	// MessageSet.HasUids determines whether messageSet contains UIDs or sequence numbers.
	// For sequence numbers, one invalid value causes the entire command to fail and no
	// messages are copied. For UIDs, nonexistent values are silently ignored and valid
	// messages are copied. The original messages remain in the selected mailbox.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	CkTask *CopyMultipleAsync(CkMessageSet &messageSet, const char *copyToMailbox);


	// Copies a contiguous range of messages, identified by sequence number, from the
	// selected mailbox to the destination mailbox in copyToMailbox.
	// 
	// startSeqNum is the first sequence number and count is the number of messages to copy.
	// IMAP sequence numbers begin at 1 and can change when messages are expunged.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	bool CopySequence(int startSeqNum, int count, const char *copyToMailbox);

	// Copies a contiguous range of messages, identified by sequence number, from the
	// selected mailbox to the destination mailbox in copyToMailbox.
	// 
	// startSeqNum is the first sequence number and count is the number of messages to copy.
	// IMAP sequence numbers begin at 1 and can change when messages are expunged.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	CkTask *CopySequenceAsync(int startSeqNum, int count, const char *copyToMailbox);


	// Creates the mailbox named by mailbox on the IMAP server.
	// 
	// Use the hierarchy delimiter reported in SeparatorChar[1] when creating a nested
	// mailbox. In IMAP terminology, mailbox and folder are synonymous.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #SeparatorChar
	bool CreateMailbox(const char *mailbox);

	// Creates the mailbox named by mailbox on the IMAP server.
	// 
	// Use the hierarchy delimiter reported in SeparatorChar[1] when creating a nested
	// mailbox. In IMAP terminology, mailbox and folder are synonymous.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #SeparatorChar
	CkTask *CreateMailboxAsync(const char *mailbox);


	// Deletes the mailbox named by mailbox from the IMAP server.
	// 
	// This deletes the mailbox itself, not merely the messages it contains. Server
	// rules may require the mailbox to be empty first.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	bool DeleteMailbox(const char *mailbox);

	// Deletes the mailbox named by mailbox from the IMAP server.
	// 
	// This deletes the mailbox itself, not merely the messages it contains. Server
	// rules may require the mailbox to be empty first.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	CkTask *DeleteMailboxAsync(const char *mailbox);


	// Closes the connection to the IMAP server.
	// 
	// A failure indicates that the connection could not be closed cleanly; the socket
	// is nevertheless no longer intended for further use. In many applications, a
	// disconnect failure during shutdown can be treated as nonfatal.
	// 
	bool Disconnect(void);

	// Closes the connection to the IMAP server.
	// 
	// A failure indicates that the connection could not be closed cleanly; the socket
	// is nevertheless no longer intended for further use. In many applications, a
	// disconnect failure during shutdown can be treated as nonfatal.
	// 
	CkTask *DisconnectAsync(void);


	// Opens the mailbox in mailbox as read-only.
	// 
	// Use this instead of SelectMailbox[1] when the application must not change
	// message flags or mailbox state. Successful examination updates properties such
	// as NumMessages[2], UidValidity[3], and UidNext[4].
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #SelectMailbox
	// [2] #NumMessages
	// [3] #UidValidity
	// [4] #UidNext
	bool ExamineMailbox(const char *mailbox);

	// Opens the mailbox in mailbox as read-only.
	// 
	// Use this instead of SelectMailbox[1] when the application must not change
	// message flags or mailbox state. Successful examination updates properties such
	// as NumMessages[2], UidValidity[3], and UidNext[4].
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #SelectMailbox
	// [2] #NumMessages
	// [3] #UidValidity
	// [4] #UidNext
	CkTask *ExamineMailboxAsync(const char *mailbox);


	// Permanently removes all messages marked with the \Deleted flag from the
	// currently selected mailbox.
	// 
	// The mailbox remains selected and the authenticated connection remains open.
	// Expunging can change sequence numbers for the remaining messages.
	// 
	bool Expunge(void);

	// Permanently removes all messages marked with the \Deleted flag from the
	// currently selected mailbox.
	// 
	// The mailbox remains selected and the authenticated connection remains open.
	// Expunging can change sequence numbers for the remaining messages.
	// 
	CkTask *ExpungeAsync(void);


	// Permanently removes all messages marked with \Deleted from the selected mailbox
	// and then closes the mailbox.
	// 
	// After success, SelectedMailbox[1] is empty. The authenticated IMAP connection
	// remains open and can be used to select another mailbox.
	// 
	// 
	// References:
	// [1] #SelectedMailbox
	bool ExpungeAndClose(void);

	// Permanently removes all messages marked with \Deleted from the selected mailbox
	// and then closes the mailbox.
	// 
	// After success, SelectedMailbox[1] is empty. The authenticated IMAP connection
	// remains open and can be used to select another mailbox.
	// 
	// 
	// References:
	// [1] #SelectedMailbox
	CkTask *ExpungeAndCloseAsync(void);


	// Obtains attachment attachmentIndex from the Email in emailObject and writes it to the filesystem
	// path in saveToPath. Attachment indexes are zero-based.
	// 
	// saveToPath may be a filename, a relative path ending in a filename, or an absolute
	// path ending in a filename. Missing parent directories are not created. An
	// existing file is overwritten. A failed operation should not leave a partial
	// output file.
	// 
	// If emailObject already contains the attachment bytes, the data is saved without
	// contacting the IMAP server. If emailObject was fetched without attachment bodies,
	// Chilkat uses its ckx-imap-* metadata to locate and download the requested MIME
	// part. The same IMAP session is not required, and a copied Email can be used if
	// the metadata is preserved.
	// 
	// The corresponding mailbox must be selected when a server fetch is required. If
	// ckx-imap-isUid is YES, the permanent UID is used and the operation can work
	// after reconnecting. If it is NO, the stored value is a sequence number, which
	// can identify a different message after an expunge. UID-based metadata is
	// therefore preferred for deferred attachment operations. The method fails if the
	// referenced message or MIME part no longer exists, such as after the message is
	// moved or expunged.
	// 
	// Related MIME parts used by an HTML body are not counted as ordinary attachments.
	// Signed and encrypted messages are fetched in full because their complete MIME is
	// required.
	// 
	bool FetchAttachment(CkEmail &emailObject, int attachmentIndex, const char *saveToPath);

	// Obtains attachment attachmentIndex from the Email in emailObject and writes it to the filesystem
	// path in saveToPath. Attachment indexes are zero-based.
	// 
	// saveToPath may be a filename, a relative path ending in a filename, or an absolute
	// path ending in a filename. Missing parent directories are not created. An
	// existing file is overwritten. A failed operation should not leave a partial
	// output file.
	// 
	// If emailObject already contains the attachment bytes, the data is saved without
	// contacting the IMAP server. If emailObject was fetched without attachment bodies,
	// Chilkat uses its ckx-imap-* metadata to locate and download the requested MIME
	// part. The same IMAP session is not required, and a copied Email can be used if
	// the metadata is preserved.
	// 
	// The corresponding mailbox must be selected when a server fetch is required. If
	// ckx-imap-isUid is YES, the permanent UID is used and the operation can work
	// after reconnecting. If it is NO, the stored value is a sequence number, which
	// can identify a different message after an expunge. UID-based metadata is
	// therefore preferred for deferred attachment operations. The method fails if the
	// referenced message or MIME part no longer exists, such as after the message is
	// moved or expunged.
	// 
	// Related MIME parts used by an HTML body are not counted as ordinary attachments.
	// Signed and encrypted messages are fetched in full because their complete MIME is
	// required.
	// 
	CkTask *FetchAttachmentAsync(CkEmail &emailObject, int attachmentIndex, const char *saveToPath);


	// Obtains attachment attachmentIndex from the Email in email and stores its bytes in the
	// BinData in binData.
	// 
	// Attachment indexes are zero-based. binData is always cleared first. On success it
	// contains the complete attachment bytes; on failure it remains empty.
	// 
	// See FetchAttachment[1] for details about downloading attachment data not already
	// present in email.
	// 
	// 
	// References:
	// [1] #FetchAttachment
	bool FetchAttachmentBd(CkEmail &email, int attachmentIndex, CkBinData &binData);

	// Obtains attachment attachmentIndex from the Email in email and stores its bytes in the
	// BinData in binData.
	// 
	// Attachment indexes are zero-based. binData is always cleared first. On success it
	// contains the complete attachment bytes; on failure it remains empty.
	// 
	// See FetchAttachment[1] for details about downloading attachment data not already
	// present in email.
	// 
	// 
	// References:
	// [1] #FetchAttachment
	CkTask *FetchAttachmentBdAsync(CkEmail &email, int attachmentIndex, CkBinData &binData);


	// Obtains attachment attachIndex from the Email in email and returns its bytes. Attachment
	// indexes are zero-based.
	// 
	// If the attachment is not already present in email, Chilkat downloads it from the
	// IMAP server using the message metadata stored in the email. See
	// FetchAttachment[1] for attachment-fetching details.
	// 
	// 
	// References:
	// [1] #FetchAttachment
	bool FetchAttachmentBytes(CkEmail &email, int attachIndex, CkByteData &outBytes);

	// Obtains attachment attachIndex from the Email in email and returns its bytes. Attachment
	// indexes are zero-based.
	// 
	// If the attachment is not already present in email, Chilkat downloads it from the
	// IMAP server using the message metadata stored in the email. See
	// FetchAttachment[1] for attachment-fetching details.
	// 
	// 
	// References:
	// [1] #FetchAttachment
	CkTask *FetchAttachmentBytesAsync(CkEmail &email, int attachIndex);


	// Obtains text attachment attachmentIndex from the Email in email, decodes it using the
	// charset in charset, and stores the text in the StringBuilder in sb.
	// 
	// Attachment indexes are zero-based. sb is always cleared first. On success it
	// contains the complete decoded attachment text; on failure it remains empty. Use
	// this method only for text attachments.
	// 
	// See FetchAttachment[1] for details about downloading data not already present in
	// email.
	// 
	// 
	// References:
	// [1] #FetchAttachment
	bool FetchAttachmentSb(CkEmail &email, int attachmentIndex, const char *charset, CkStringBuilder &sb);

	// Obtains text attachment attachmentIndex from the Email in email, decodes it using the
	// charset in charset, and stores the text in the StringBuilder in sb.
	// 
	// Attachment indexes are zero-based. sb is always cleared first. On success it
	// contains the complete decoded attachment text; on failure it remains empty. Use
	// this method only for text attachments.
	// 
	// See FetchAttachment[1] for details about downloading data not already present in
	// email.
	// 
	// 
	// References:
	// [1] #FetchAttachment
	CkTask *FetchAttachmentSbAsync(CkEmail &email, int attachmentIndex, const char *charset, CkStringBuilder &sb);


	// Obtains text attachment attachmentIndex from the Email in emailObject and decodes its bytes using
	// the character encoding named by charset.
	// 
	// Use this only when the attachment contains text. Attachment indexes are
	// zero-based. See FetchAttachment[1] for information about downloading attachment
	// data that is not already present in emailObject.
	// 
	// 
	// References:
	// [1] #FetchAttachment
	bool FetchAttachmentString(CkEmail &emailObject, int attachmentIndex, const char *charset, CkString &outStr);

	// Obtains text attachment attachmentIndex from the Email in emailObject and decodes its bytes using
	// the character encoding named by charset.
	// 
	// Use this only when the attachment contains text. Attachment indexes are
	// zero-based. See FetchAttachment[1] for information about downloading attachment
	// data that is not already present in emailObject.
	// 
	// 
	// References:
	// [1] #FetchAttachment
	const char *fetchAttachmentString(CkEmail &emailObject, int attachmentIndex, const char *charset);
	// Obtains text attachment attachmentIndex from the Email in emailObject and decodes its bytes using
	// the character encoding named by charset.
	// 
	// Use this only when the attachment contains text. Attachment indexes are
	// zero-based. See FetchAttachment[1] for information about downloading attachment
	// data that is not already present in emailObject.
	// 
	// 
	// References:
	// [1] #FetchAttachment
	CkTask *FetchAttachmentStringAsync(CkEmail &emailObject, int attachmentIndex, const char *charset);


	// Deprecated: Use FetchMsgSet[1] instead.
	// 
	// Downloads the messages identified by the MessageSet in messageSet and returns them in
	// an EmailBundle.
	// 
	// Whether messageSet contains UIDs or sequence numbers is determined by its HasUids
	// property.
	// 
	// 
	// References:
	// [1] #FetchMsgSet
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *FetchBundle(CkMessageSet &messageSet);

	// Deprecated: Use FetchMsgSet[1] instead.
	// 
	// Downloads the messages identified by the MessageSet in messageSet and returns them in
	// an EmailBundle.
	// 
	// Whether messageSet contains UIDs or sequence numbers is determined by its HasUids
	// property.
	// 
	// 
	// References:
	// [1] #FetchMsgSet
	CkTask *FetchBundleAsync(CkMessageSet &messageSet);


	// Deprecated: Use FetchSingleBd[1] or methods that return Email objects.
	// 
	// Downloads the messages identified by messageSet and returns their MIME sources in a
	// StringArray. MIME may contain binary data and mixed character encodings, so
	// representing it as ordinary strings can require transformations and is not
	// suitable for preserving exact bytes.
	// 
	// 
	// References:
	// [1] #FetchSingleBd
	// The caller is responsible for deleting the object returned by this method.
	CkStringArray *FetchBundleAsMime(CkMessageSet &messageSet);

	// Deprecated: Use FetchSingleBd[1] or methods that return Email objects.
	// 
	// Downloads the messages identified by messageSet and returns their MIME sources in a
	// StringArray. MIME may contain binary data and mixed character encodings, so
	// representing it as ordinary strings can require transformations and is not
	// suitable for preserving exact bytes.
	// 
	// 
	// References:
	// [1] #FetchSingleBd
	CkTask *FetchBundleAsMimeAsync(CkMessageSet &messageSet);


	// Deprecated: Use FetchRange[1] instead.
	// 
	// Downloads a sequence-number range beginning at startSeqNum and containing up to count
	// messages.
	// 
	// failedSet receives sequence numbers that could not be fetched, fetchedSet receives sequence
	// numbers fetched successfully, and the returned EmailBundle contains the
	// downloaded messages.
	// 
	// 
	// References:
	// [1] #FetchRange
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *FetchChunk(int startSeqNum, int count, CkMessageSet &failedSet, CkMessageSet &fetchedSet);

	// Deprecated: Use FetchRange[1] instead.
	// 
	// Downloads a sequence-number range beginning at startSeqNum and containing up to count
	// messages.
	// 
	// failedSet receives sequence numbers that could not be fetched, fetchedSet receives sequence
	// numbers fetched successfully, and the returned EmailBundle contains the
	// downloaded messages.
	// 
	// 
	// References:
	// [1] #FetchRange
	CkTask *FetchChunkAsync(int startSeqNum, int count, CkMessageSet &failedSet, CkMessageSet &fetchedSet);


	// Attempts to download count full messages beginning with sequence number seqnum.
	// 
	// failedSet and fetchedSet are cleared before use. failedSet receives sequence numbers that failed
	// or were not yet fetched, fetchedSet receives sequence numbers fetched successfully,
	// and both sets have MessageSet.HasUids set to false. Downloaded messages are
	// appended to the EmailBundle in bundle, which is not cleared.
	// 
	// Sequence numbers beyond the end of the mailbox are added to failedSet. The method can
	// return success even when failedSet is nonempty; success indicates that the requested
	// range was processed, not that every sequence number existed.
	// 
	// If a network failure occurs, messages already fetched remain in bundle, fetchedSet
	// retains the successfully fetched sequence numbers, and failedSet contains the failed
	// and not-yet-fetched sequence numbers. Processing stops and the connection must
	// be considered unusable.
	// 
	bool FetchChunk2(int seqnum, int count, CkMessageSet &failedSet, CkMessageSet &fetchedSet, CkEmailBundle &bundle);

	// Attempts to download count full messages beginning with sequence number seqnum.
	// 
	// failedSet and fetchedSet are cleared before use. failedSet receives sequence numbers that failed
	// or were not yet fetched, fetchedSet receives sequence numbers fetched successfully,
	// and both sets have MessageSet.HasUids set to false. Downloaded messages are
	// appended to the EmailBundle in bundle, which is not cleared.
	// 
	// Sequence numbers beyond the end of the mailbox are added to failedSet. The method can
	// return success even when failedSet is nonempty; success indicates that the requested
	// range was processed, not that every sequence number existed.
	// 
	// If a network failure occurs, messages already fetched remain in bundle, fetchedSet
	// retains the successfully fetched sequence numbers, and failedSet contains the failed
	// and not-yet-fetched sequence numbers. Processing stops and the connection must
	// be considered unusable.
	// 
	CkTask *FetchChunk2Async(int seqnum, int count, CkMessageSet &failedSet, CkMessageSet &fetchedSet, CkEmailBundle &bundle);


	// Downloads one message or its headers into the Email in email.
	// 
	//     * headerOnly = true: download headers only.
	//     * headerOnly = false: download the full message.
	//     * bUid = true: msgId is a UID.
	//     * bUid = false: msgId is a sequence number.
	// 
	// On success, email is replaced with the fetched email. On failure, email remains
	// unchanged.
	// 
	// A header-only result contains no body or attachment bodies, but includes
	// ckx-imap-* metadata for the message identifier, flags, total size, and
	// attachment information. For a full download, ordinary attachment bodies are
	// included according to AutoDownloadAttachments[1]. PeekMode[2] controls whether a
	// full fetch sets \Seen; a header-only fetch does not set it.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	// [2] #PeekMode
	bool FetchEmail(bool headerOnly, unsigned long msgId, bool bUid, CkEmail &email);

	// Downloads one message or its headers into the Email in email.
	// 
	//     * headerOnly = true: download headers only.
	//     * headerOnly = false: download the full message.
	//     * bUid = true: msgId is a UID.
	//     * bUid = false: msgId is a sequence number.
	// 
	// On success, email is replaced with the fetched email. On failure, email remains
	// unchanged.
	// 
	// A header-only result contains no body or attachment bodies, but includes
	// ckx-imap-* metadata for the message identifier, flags, total size, and
	// attachment information. For a full download, ordinary attachment bodies are
	// included according to AutoDownloadAttachments[1]. PeekMode[2] controls whether a
	// full fetch sets \Seen; a header-only fetch does not set it.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	// [2] #PeekMode
	CkTask *FetchEmailAsync(bool headerOnly, unsigned long msgId, bool bUid, CkEmail &email);


	// Returns the space-separated IMAP flags for the message identified by msgId.
	// 
	// If bUid is true, msgId is a UID; otherwise, it is a sequence number. A result
	// might be \Flagged \Seen $label1.
	// 
	// An existing message with no flags returns the empty string. A nonexistent
	// message is an error.
	// 
	bool FetchFlags(unsigned long msgId, bool bUid, CkString &outStrFlags);

	// Returns the space-separated IMAP flags for the message identified by msgId.
	// 
	// If bUid is true, msgId is a UID; otherwise, it is a sequence number. A result
	// might be \Flagged \Seen $label1.
	// 
	// An existing message with no flags returns the empty string. A nonexistent
	// message is an error.
	// 
	const char *fetchFlags(unsigned long msgId, bool bUid);
	// Returns the space-separated IMAP flags for the message identified by msgId.
	// 
	// If bUid is true, msgId is a UID; otherwise, it is a sequence number. A result
	// might be \Flagged \Seen $label1.
	// 
	// An existing message with no flags returns the empty string. A nonexistent
	// message is an error.
	// 
	CkTask *FetchFlagsAsync(unsigned long msgId, bool bUid);


	// Deprecated: Use FetchMsgSet[1] instead.
	// 
	// Downloads only the headers for the messages identified by messageSet and returns them
	// in an EmailBundle.
	// 
	// Use GetMailNumAttach[2], GetMailAttachSize[3], GetMailAttachFilename[4], and
	// GetMailFlag[5] to inspect metadata stored with a header-only email.
	// 
	// 
	// References:
	// [1] #FetchMsgSet
	// [2] #GetMailNumAttach
	// [3] #GetMailAttachSize
	// [4] #GetMailAttachFilename
	// [5] #GetMailFlag
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *FetchHeaders(CkMessageSet &messageSet);

	// Deprecated: Use FetchMsgSet[1] instead.
	// 
	// Downloads only the headers for the messages identified by messageSet and returns them
	// in an EmailBundle.
	// 
	// Use GetMailNumAttach[2], GetMailAttachSize[3], GetMailAttachFilename[4], and
	// GetMailFlag[5] to inspect metadata stored with a header-only email.
	// 
	// 
	// References:
	// [1] #FetchMsgSet
	// [2] #GetMailNumAttach
	// [3] #GetMailAttachSize
	// [4] #GetMailAttachFilename
	// [5] #GetMailFlag
	CkTask *FetchHeadersAsync(CkMessageSet &messageSet);


	// Downloads the existing messages identified by the MessageSet in msgSet and appends
	// them to the EmailBundle in bundle. bundle is not cleared.
	// 
	//     * headersOnly = true: download headers only.
	//     * headersOnly = false: download full messages, with ordinary attachments
	//     controlled by AutoDownloadAttachments[1].
	// 
	// MessageSet.HasUids determines whether msgSet contains UIDs or sequence numbers. A
	// MessageSet is a true set, so duplicate identifiers are collapsed before any
	// command is sent. Identifiers that do not exist are omitted without causing the
	// method to fail. Do not rely on insertion order; fetched messages are returned in
	// the order supplied by the IMAP server, normally mailbox order.
	// 
	// If a network failure occurs after some messages have been downloaded, those
	// messages remain appended to bundle, fetching stops immediately, and the connection
	// must be considered unusable. Reconnect, authenticate, and reselect the mailbox
	// before retrying.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	bool FetchMsgSet(bool headersOnly, CkMessageSet &msgSet, CkEmailBundle &bundle);

	// Downloads the existing messages identified by the MessageSet in msgSet and appends
	// them to the EmailBundle in bundle. bundle is not cleared.
	// 
	//     * headersOnly = true: download headers only.
	//     * headersOnly = false: download full messages, with ordinary attachments
	//     controlled by AutoDownloadAttachments[1].
	// 
	// MessageSet.HasUids determines whether msgSet contains UIDs or sequence numbers. A
	// MessageSet is a true set, so duplicate identifiers are collapsed before any
	// command is sent. Identifiers that do not exist are omitted without causing the
	// method to fail. Do not rely on insertion order; fetched messages are returned in
	// the order supplied by the IMAP server, normally mailbox order.
	// 
	// If a network failure occurs after some messages have been downloaded, those
	// messages remain appended to bundle, fetching stops immediately, and the connection
	// must be considered unusable. Reconnect, authenticate, and reselect the mailbox
	// before retrying.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	CkTask *FetchMsgSetAsync(bool headersOnly, CkMessageSet &msgSet, CkEmailBundle &bundle);


	// Downloads count messages beginning with sequence number seqnum and appends them to
	// the EmailBundle in bundle. bundle is not cleared.
	// 
	//     * headersOnly = true: download headers only.
	//     * headersOnly = false: download full messages, with ordinary attachments
	//     controlled by AutoDownloadAttachments[1].
	// 
	// seqnum and count must both be greater than 0. IMAP sequence numbers begin at 1;
	// passing 0 for seqnum, 0 for count, or a negative count fails without changing bundle.
	// Only messages that exist in the requested sequence-number range are appended.
	// Sequence numbers can change after messages are expunged.
	// 
	// If a network failure occurs after some messages have been downloaded, those
	// messages remain appended to bundle, fetching stops immediately, and the connection
	// must be considered unusable.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	bool FetchRange(bool headersOnly, int seqnum, int count, CkEmailBundle &bundle);

	// Downloads count messages beginning with sequence number seqnum and appends them to
	// the EmailBundle in bundle. bundle is not cleared.
	// 
	//     * headersOnly = true: download headers only.
	//     * headersOnly = false: download full messages, with ordinary attachments
	//     controlled by AutoDownloadAttachments[1].
	// 
	// seqnum and count must both be greater than 0. IMAP sequence numbers begin at 1;
	// passing 0 for seqnum, 0 for count, or a negative count fails without changing bundle.
	// Only messages that exist in the requested sequence-number range are appended.
	// Sequence numbers can change after messages are expunged.
	// 
	// If a network failure occurs after some messages have been downloaded, those
	// messages remain appended to bundle, fetching stops immediately, and the connection
	// must be considered unusable.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	CkTask *FetchRangeAsync(bool headersOnly, int seqnum, int count, CkEmailBundle &bundle);


	// Deprecated: Use FetchRange[1] instead.
	// 
	// Downloads numMessages messages beginning with sequence number startSeqNum and returns them in
	// an EmailBundle.
	// 
	// Sequence numbers begin at 1. If the requested count extends beyond the mailbox,
	// messages through the end of the mailbox are returned. Sequence numbers can
	// change whenever messages are expunged.
	// 
	// 
	// References:
	// [1] #FetchRange
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *FetchSequence(int startSeqNum, int numMessages);

	// Deprecated: Use FetchRange[1] instead.
	// 
	// Downloads numMessages messages beginning with sequence number startSeqNum and returns them in
	// an EmailBundle.
	// 
	// Sequence numbers begin at 1. If the requested count extends beyond the mailbox,
	// messages through the end of the mailbox are returned. Sequence numbers can
	// change whenever messages are expunged.
	// 
	// 
	// References:
	// [1] #FetchRange
	CkTask *FetchSequenceAsync(int startSeqNum, int numMessages);


	// Deprecated: Use FetchSingleBd[1] or methods that return Email objects.
	// 
	// Downloads numMessages messages beginning at sequence number startSeqNum and returns each MIME
	// source in a StringArray.
	// 
	// Sequence numbers begin at 1 and may change after an expunge. MIME can contain
	// binary data and mixed encodings, so string-based MIME retrieval is not suitable
	// when exact bytes must be preserved.
	// 
	// 
	// References:
	// [1] #FetchSingleBd
	// The caller is responsible for deleting the object returned by this method.
	CkStringArray *FetchSequenceAsMime(int startSeqNum, int numMessages);

	// Deprecated: Use FetchSingleBd[1] or methods that return Email objects.
	// 
	// Downloads numMessages messages beginning at sequence number startSeqNum and returns each MIME
	// source in a StringArray.
	// 
	// Sequence numbers begin at 1 and may change after an expunge. MIME can contain
	// binary data and mixed encodings, so string-based MIME retrieval is not suitable
	// when exact bytes must be preserved.
	// 
	// 
	// References:
	// [1] #FetchSingleBd
	CkTask *FetchSequenceAsMimeAsync(int startSeqNum, int numMessages);


	// Deprecated: Use FetchRange[1] instead.
	// 
	// Downloads only the headers for numMessages messages beginning with sequence number
	// startSeqNum.
	// 
	// Sequence numbers begin at 1 and must be within the current range reported by
	// NumMessages[2]. They can change when messages are expunged.
	// 
	// 
	// References:
	// [1] #FetchRange
	// [2] #NumMessages
	// The caller is responsible for deleting the object returned by this method.
	CkEmailBundle *FetchSequenceHeaders(int startSeqNum, int numMessages);

	// Deprecated: Use FetchRange[1] instead.
	// 
	// Downloads only the headers for numMessages messages beginning with sequence number
	// startSeqNum.
	// 
	// Sequence numbers begin at 1 and must be within the current range reported by
	// NumMessages[2]. They can change when messages are expunged.
	// 
	// 
	// References:
	// [1] #FetchRange
	// [2] #NumMessages
	CkTask *FetchSequenceHeadersAsync(int startSeqNum, int numMessages);


	// Deprecated: Use FetchEmail[1] instead.
	// 
	// Downloads one message and returns it as an Email. If bUid is true, msgId is a
	// UID; otherwise, msgId is a sequence number.
	// 
	// Ordinary attachment bodies are included according to AutoDownloadAttachments[2].
	// 
	// 
	// References:
	// [1] #FetchEmail
	// [2] #AutoDownloadAttachments
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *FetchSingle(unsigned long msgId, bool bUid);

	// Deprecated: Use FetchEmail[1] instead.
	// 
	// Downloads one message and returns it as an Email. If bUid is true, msgId is a
	// UID; otherwise, msgId is a sequence number.
	// 
	// Ordinary attachment bodies are included according to AutoDownloadAttachments[2].
	// 
	// 
	// References:
	// [1] #FetchEmail
	// [2] #AutoDownloadAttachments
	CkTask *FetchSingleAsync(unsigned long msgId, bool bUid);


	// Downloads one message and returns its MIME source as a string.
	// 
	// If bUid is true, msgId is a UID; otherwise, msgId is a sequence number. Ordinary
	// attachment bodies are included according to AutoDownloadAttachments[1].
	// 
	// Chilkat interprets the received MIME bytes as UTF-8. MIME using Base64 or
	// quoted-printable transfer encoding is safe because the encoded bytes are ASCII.
	// Raw 8bit or binary content, or unencoded text in another charset such as
	// ISO-8859-1 or Shift_JIS, can be misinterpreted or cause an error. Use
	// FetchSingleBd[2] whenever byte-exact MIME is required.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	// [2] #FetchSingleBd
	bool FetchSingleAsMime(unsigned long msgId, bool bUid, CkString &outStrMime);

	// Downloads one message and returns its MIME source as a string.
	// 
	// If bUid is true, msgId is a UID; otherwise, msgId is a sequence number. Ordinary
	// attachment bodies are included according to AutoDownloadAttachments[1].
	// 
	// Chilkat interprets the received MIME bytes as UTF-8. MIME using Base64 or
	// quoted-printable transfer encoding is safe because the encoded bytes are ASCII.
	// Raw 8bit or binary content, or unencoded text in another charset such as
	// ISO-8859-1 or Shift_JIS, can be misinterpreted or cause an error. Use
	// FetchSingleBd[2] whenever byte-exact MIME is required.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	// [2] #FetchSingleBd
	const char *fetchSingleAsMime(unsigned long msgId, bool bUid);
	// Downloads one message and returns its MIME source as a string.
	// 
	// If bUid is true, msgId is a UID; otherwise, msgId is a sequence number. Ordinary
	// attachment bodies are included according to AutoDownloadAttachments[1].
	// 
	// Chilkat interprets the received MIME bytes as UTF-8. MIME using Base64 or
	// quoted-printable transfer encoding is safe because the encoded bytes are ASCII.
	// Raw 8bit or binary content, or unencoded text in another charset such as
	// ISO-8859-1 or Shift_JIS, can be misinterpreted or cause an error. Use
	// FetchSingleBd[2] whenever byte-exact MIME is required.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	// [2] #FetchSingleBd
	CkTask *FetchSingleAsMimeAsync(unsigned long msgId, bool bUid);


	// Downloads one message's MIME into the StringBuilder in sbMime.
	// 
	// If bUid is true, msgId is a UID; otherwise, msgId is a sequence number. Ordinary
	// attachment bodies are included according to AutoDownloadAttachments[1]. sbMime is
	// cleared before the operation; on failure it remains empty.
	// 
	// Chilkat interprets the received MIME bytes as UTF-8. MIME using Base64 or
	// quoted-printable transfer encoding is safe because the encoded bytes are ASCII.
	// Raw 8bit or binary content, or unencoded text in another charset such as
	// ISO-8859-1 or Shift_JIS, can be misinterpreted or cause an error. Use
	// FetchSingleBd[2] whenever byte-exact MIME is required.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	// [2] #FetchSingleBd
	bool FetchSingleAsMimeSb(unsigned long msgId, bool bUid, CkStringBuilder &sbMime);

	// Downloads one message's MIME into the StringBuilder in sbMime.
	// 
	// If bUid is true, msgId is a UID; otherwise, msgId is a sequence number. Ordinary
	// attachment bodies are included according to AutoDownloadAttachments[1]. sbMime is
	// cleared before the operation; on failure it remains empty.
	// 
	// Chilkat interprets the received MIME bytes as UTF-8. MIME using Base64 or
	// quoted-printable transfer encoding is safe because the encoded bytes are ASCII.
	// Raw 8bit or binary content, or unencoded text in another charset such as
	// ISO-8859-1 or Shift_JIS, can be misinterpreted or cause an error. Use
	// FetchSingleBd[2] whenever byte-exact MIME is required.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	// [2] #FetchSingleBd
	CkTask *FetchSingleAsMimeSbAsync(unsigned long msgId, bool bUid, CkStringBuilder &sbMime);


	// Downloads one message's MIME bytes into the BinData in mimeData.
	// 
	// If bUid is true, msgId is a UID; otherwise, it is a sequence number. Ordinary
	// attachment bodies are included according to AutoDownloadAttachments[1], and
	// PeekMode[2] controls whether the fetch sets \Seen.
	// 
	// mimeData is cleared before the operation. On success it contains the downloaded MIME
	// bytes; on failure it remains empty.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	// [2] #PeekMode
	bool FetchSingleBd(unsigned long msgId, bool bUid, CkBinData &mimeData);

	// Downloads one message's MIME bytes into the BinData in mimeData.
	// 
	// If bUid is true, msgId is a UID; otherwise, it is a sequence number. Ordinary
	// attachment bodies are included according to AutoDownloadAttachments[1], and
	// PeekMode[2] controls whether the fetch sets \Seen.
	// 
	// mimeData is cleared before the operation. On success it contains the downloaded MIME
	// bytes; on failure it remains empty.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	// [2] #PeekMode
	CkTask *FetchSingleBdAsync(unsigned long msgId, bool bUid, CkBinData &mimeData);


	// Deprecated: Use FetchEmail[1] instead.
	// 
	// Downloads only the headers for one message. If bUid is true, msgId is a UID;
	// otherwise, msgId is a sequence number.
	// 
	// Use the attachment- and flag-inspection methods to read metadata retained in the
	// header-only Email.
	// 
	// 
	// References:
	// [1] #FetchEmail
	// The caller is responsible for deleting the object returned by this method.
	CkEmail *FetchSingleHeader(unsigned long msgId, bool bUid);

	// Deprecated: Use FetchEmail[1] instead.
	// 
	// Downloads only the headers for one message. If bUid is true, msgId is a UID;
	// otherwise, msgId is a sequence number.
	// 
	// Use the attachment- and flag-inspection methods to read metadata retained in the
	// header-only Email.
	// 
	// 
	// References:
	// [1] #FetchEmail
	CkTask *FetchSingleHeaderAsync(unsigned long msgId, bool bUid);


	// Downloads and returns the MIME header block for one message, without downloading
	// the body.
	// 
	// If bUID is true, msgId is a UID; otherwise, msgId is a sequence number.
	// 
	bool FetchSingleHeaderAsMime(unsigned long msgId, bool bUID, CkString &outStr);

	// Downloads and returns the MIME header block for one message, without downloading
	// the body.
	// 
	// If bUID is true, msgId is a UID; otherwise, msgId is a sequence number.
	// 
	const char *fetchSingleHeaderAsMime(unsigned long msgId, bool bUID);
	// Downloads and returns the MIME header block for one message, without downloading
	// the body.
	// 
	// If bUID is true, msgId is a UID; otherwise, msgId is a sequence number.
	// 
	CkTask *FetchSingleHeaderAsMimeAsync(unsigned long msgId, bool bUID);


	// Deprecated: Use QueryMbx[1] instead.
	// 
	// Returns a MessageSet containing every UID in the currently selected mailbox.
	// 
	// The replacement call is equivalent to querying for ALL with UID results
	// requested.
	// 
	// 
	// References:
	// [1] #QueryMbx
	// The caller is responsible for deleting the object returned by this method.
	CkMessageSet *GetAllUids(void);

	// Deprecated: Use QueryMbx[1] instead.
	// 
	// Returns a MessageSet containing every UID in the currently selected mailbox.
	// 
	// The replacement call is equivalent to querying for ALL with UID results
	// requested.
	// 
	// 
	// References:
	// [1] #QueryMbx
	CkTask *GetAllUidsAsync(void);


	// Returns the filename for attachment attachIndex represented by email. Attachment indexes
	// are zero-based.
	// 
	// This method can obtain the filename from ckx-imap-* metadata in a header-only
	// email even when the attachment body has not been downloaded.
	// 
	bool GetMailAttachFilename(CkEmail &email, int attachIndex, CkString &outStrFilename);

	// Returns the filename for attachment attachIndex represented by email. Attachment indexes
	// are zero-based.
	// 
	// This method can obtain the filename from ckx-imap-* metadata in a header-only
	// email even when the attachment body has not been downloaded.
	// 
	const char *getMailAttachFilename(CkEmail &email, int attachIndex);
	// Returns the filename for attachment attachIndex represented by email. Attachment indexes
	// are zero-based.
	// 
	// This method can obtain the filename from ckx-imap-* metadata in a header-only
	// email even when the attachment body has not been downloaded.
	// 
	const char *mailAttachFilename(CkEmail &email, int attachIndex);


	// Returns the size in bytes of attachment attachIndex represented by email. Attachment
	// indexes are zero-based.
	// 
	// This method can obtain the size from ckx-imap-* metadata in a header-only email
	// even when the attachment body has not been downloaded.
	// 
	int GetMailAttachSize(CkEmail &email, int attachIndex);


	// Sends the IMAP STATUS command for the mailbox in mailbox and returns the reported
	// values as XML attributes.
	// 
	//     * messages: total number of messages.
	//     * recent: messages having the \Recent flag.
	//     * uidnext: expected UID for the next appended message.
	//     * uidvalidity: mailbox UID-validity value.
	//     * unseen: messages without the \Seen flag.
	// <status messages="240" recent="0" uidnext="3674" uidvalidity="3" unseen="213"
	// />
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	bool GetMailboxStatus(const char *mailbox, CkString &outStr);

	// Sends the IMAP STATUS command for the mailbox in mailbox and returns the reported
	// values as XML attributes.
	// 
	//     * messages: total number of messages.
	//     * recent: messages having the \Recent flag.
	//     * uidnext: expected UID for the next appended message.
	//     * uidvalidity: mailbox UID-validity value.
	//     * unseen: messages without the \Seen flag.
	// <status messages="240" recent="0" uidnext="3674" uidvalidity="3" unseen="213"
	// />
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	const char *getMailboxStatus(const char *mailbox);
	// Sends the IMAP STATUS command for the mailbox in mailbox and returns the reported
	// values as XML attributes.
	// 
	//     * messages: total number of messages.
	//     * recent: messages having the \Recent flag.
	//     * uidnext: expected UID for the next appended message.
	//     * uidvalidity: mailbox UID-validity value.
	//     * unseen: messages without the \Seen flag.
	// <status messages="240" recent="0" uidnext="3674" uidvalidity="3" unseen="213"
	// />
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	const char *mailboxStatus(const char *mailbox);

	// Sends the IMAP STATUS command for the mailbox in mailbox and returns the reported
	// values as XML attributes.
	// 
	//     * messages: total number of messages.
	//     * recent: messages having the \Recent flag.
	//     * uidnext: expected UID for the next appended message.
	//     * uidvalidity: mailbox UID-validity value.
	//     * unseen: messages without the \Seen flag.
	// <status messages="240" recent="0" uidnext="3674" uidvalidity="3" unseen="213"
	// />
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	CkTask *GetMailboxStatusAsync(const char *mailbox);


	// Returns the state of the flag named by flagName from the IMAP metadata stored in the
	// Email in email.
	// 
	//     * 1: the flag is set.
	//     * 0: the flag is not set.
	//     * -1: the required ckx-imap-* metadata is missing.
	// 
	// Standard flags include \Seen, \Answered, \Flagged, \Draft, and \Deleted. Custom
	// keywords such as $label1 or NonJunk are also supported.
	// 
	// Integer-returning methods do not use LastMethodSuccess to report this condition;
	// test the return value directly.
	// 
	int GetMailFlag(CkEmail &email, const char *flagName);


	// Returns the number of ordinary attachments represented by email.
	// 
	// This method also works with a header-only email or an email fetched while
	// AutoDownloadAttachments[1] was false. In those cases it reads the
	// ckx-imap-numAttach metadata, even though the Email object's downloaded
	// attachment count can be 0.
	// 
	// 
	// References:
	// [1] #AutoDownloadAttachments
	int GetMailNumAttach(CkEmail &email);


	// Returns the complete server-reported size of the Email in email, in bytes,
	// including attachment data.
	// 
	// This value may be available even when only the message headers were downloaded.
	// 
	int GetMailSize(CkEmail &email);


	// Sends the IMAP GETQUOTA command for the quota root in quotaRoot and returns the
	// server response as JSON.
	// 
	// The server must advertise the IMAP QUOTA capability.
	// 
	bool GetQuota(const char *quotaRoot, CkString &outStr);

	// Sends the IMAP GETQUOTA command for the quota root in quotaRoot and returns the
	// server response as JSON.
	// 
	// The server must advertise the IMAP QUOTA capability.
	// 
	const char *getQuota(const char *quotaRoot);
	// Sends the IMAP GETQUOTA command for the quota root in quotaRoot and returns the
	// server response as JSON.
	// 
	// The server must advertise the IMAP QUOTA capability.
	// 
	const char *quota(const char *quotaRoot);

	// Sends the IMAP GETQUOTA command for the quota root in quotaRoot and returns the
	// server response as JSON.
	// 
	// The server must advertise the IMAP QUOTA capability.
	// 
	CkTask *GetQuotaAsync(const char *quotaRoot);


	// Sends the IMAP GETQUOTAROOT command for the mailbox in mailboxName and returns the
	// server response as JSON. The server must advertise the IMAP QUOTA capability.
	// 
	// A response can contain both the mailbox-to-root mapping and the quota values:
	// 
	// {
	//   "QUOTAROOT": {"mailbox":"Inbox","root":"Mailbox"},
	//   "QUOTA": {"root":"Mailbox","resource":"STORAGE","used":9,"max":256000}
	// }
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	bool GetQuotaRoot(const char *mailboxName, CkString &outStr);

	// Sends the IMAP GETQUOTAROOT command for the mailbox in mailboxName and returns the
	// server response as JSON. The server must advertise the IMAP QUOTA capability.
	// 
	// A response can contain both the mailbox-to-root mapping and the quota values:
	// 
	// {
	//   "QUOTAROOT": {"mailbox":"Inbox","root":"Mailbox"},
	//   "QUOTA": {"root":"Mailbox","resource":"STORAGE","used":9,"max":256000}
	// }
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	const char *getQuotaRoot(const char *mailboxName);
	// Sends the IMAP GETQUOTAROOT command for the mailbox in mailboxName and returns the
	// server response as JSON. The server must advertise the IMAP QUOTA capability.
	// 
	// A response can contain both the mailbox-to-root mapping and the quota values:
	// 
	// {
	//   "QUOTAROOT": {"mailbox":"Inbox","root":"Mailbox"},
	//   "QUOTA": {"root":"Mailbox","resource":"STORAGE","used":9,"max":256000}
	// }
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	const char *quotaRoot(const char *mailboxName);

	// Sends the IMAP GETQUOTAROOT command for the mailbox in mailboxName and returns the
	// server response as JSON. The server must advertise the IMAP QUOTA capability.
	// 
	// A response can contain both the mailbox-to-root mapping and the quota values:
	// 
	// {
	//   "QUOTAROOT": {"mailbox":"Inbox","root":"Mailbox"},
	//   "QUOTA": {"root":"Mailbox","resource":"STORAGE","used":9,"max":256000}
	// }
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	CkTask *GetQuotaRootAsync(const char *mailboxName);


	// Stores the certificate presented by the IMAP server for the current or most
	// recent TLS connection in the Cert object supplied as cert.
	// 
	// This is useful for certificate inspection, diagnostics, or implementing
	// application-specific trust checks.
	// 
	bool GetServerCert(CkCert &cert);


	// Deprecated: Use GetServerCert[1] instead.
	// 
	// Returns the certificate presented by the IMAP server for the current TLS
	// connection.
	// 
	// 
	// References:
	// [1] #GetServerCert
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetSslServerCert(void);


	// Tests whether the capability named by name appears in the raw capability
	// response in capabilityResponse.
	// 
	// capabilityResponse is typically the string returned by Capability[1]. Capability-name matching
	// follows IMAP capability-token semantics.
	// 
	// 
	// References:
	// [1] #Capability
	bool HasCapability(const char *name, const char *capabilityResponse);


	// Waits up to timeoutMs milliseconds for unsolicited mailbox updates after IdleStart[1]
	// has entered IMAP IDLE mode.
	// 
	// timeoutMs = 0 performs a strict poll: it checks for already available data and
	// returns immediately. Positive values wait for up to the requested time,
	// including very large values. If the connection is lost while waiting, the method
	// fails.
	// 
	// This method does not send a polling command. It consumes the notifications
	// currently waiting on the existing connection and returns them as XML. A second
	// call returns only notifications that arrived after the previous call.
	// 
	//     * flags: flags changed for a message.
	//     * expunge: a sequence number was removed.
	//     * exists: the mailbox message count changed.
	//     * recent: the recent-message count changed.
	//     * raw: an unrecognized response line retained for diagnostics.
	// <idle><exists>115</exists><recent>1</recent></id
	// le>
	// 
	// When no update is available, the result is <idle></idle>. An exists notification
	// does not automatically change NumMessages[2].
	// 
	// Chilkat does not automatically refresh IDLE. The application should periodically
	// call IdleDone[3] and IdleStart[1], typically before 29 minutes have elapsed, to
	// prevent servers with a 30-minute limit from dropping the connection.
	// 
	// 
	// References:
	// [1] #IdleStart
	// [2] #NumMessages
	// [3] #IdleDone
	bool IdleCheck(int timeoutMs, CkString &outStr);

	// Waits up to timeoutMs milliseconds for unsolicited mailbox updates after IdleStart[1]
	// has entered IMAP IDLE mode.
	// 
	// timeoutMs = 0 performs a strict poll: it checks for already available data and
	// returns immediately. Positive values wait for up to the requested time,
	// including very large values. If the connection is lost while waiting, the method
	// fails.
	// 
	// This method does not send a polling command. It consumes the notifications
	// currently waiting on the existing connection and returns them as XML. A second
	// call returns only notifications that arrived after the previous call.
	// 
	//     * flags: flags changed for a message.
	//     * expunge: a sequence number was removed.
	//     * exists: the mailbox message count changed.
	//     * recent: the recent-message count changed.
	//     * raw: an unrecognized response line retained for diagnostics.
	// <idle><exists>115</exists><recent>1</recent></id
	// le>
	// 
	// When no update is available, the result is <idle></idle>. An exists notification
	// does not automatically change NumMessages[2].
	// 
	// Chilkat does not automatically refresh IDLE. The application should periodically
	// call IdleDone[3] and IdleStart[1], typically before 29 minutes have elapsed, to
	// prevent servers with a 30-minute limit from dropping the connection.
	// 
	// 
	// References:
	// [1] #IdleStart
	// [2] #NumMessages
	// [3] #IdleDone
	const char *idleCheck(int timeoutMs);
	// Waits up to timeoutMs milliseconds for unsolicited mailbox updates after IdleStart[1]
	// has entered IMAP IDLE mode.
	// 
	// timeoutMs = 0 performs a strict poll: it checks for already available data and
	// returns immediately. Positive values wait for up to the requested time,
	// including very large values. If the connection is lost while waiting, the method
	// fails.
	// 
	// This method does not send a polling command. It consumes the notifications
	// currently waiting on the existing connection and returns them as XML. A second
	// call returns only notifications that arrived after the previous call.
	// 
	//     * flags: flags changed for a message.
	//     * expunge: a sequence number was removed.
	//     * exists: the mailbox message count changed.
	//     * recent: the recent-message count changed.
	//     * raw: an unrecognized response line retained for diagnostics.
	// <idle><exists>115</exists><recent>1</recent></id
	// le>
	// 
	// When no update is available, the result is <idle></idle>. An exists notification
	// does not automatically change NumMessages[2].
	// 
	// Chilkat does not automatically refresh IDLE. The application should periodically
	// call IdleDone[3] and IdleStart[1], typically before 29 minutes have elapsed, to
	// prevent servers with a 30-minute limit from dropping the connection.
	// 
	// 
	// References:
	// [1] #IdleStart
	// [2] #NumMessages
	// [3] #IdleDone
	CkTask *IdleCheckAsync(int timeoutMs);


	// Ends IMAP IDLE mode by sending the protocol's DONE continuation.
	// 
	// The authenticated connection remains open and usable. Calling this method when
	// IDLE is not active fails.
	// 
	// Applications maintaining a long-lived IDLE connection should call this method
	// shortly before the server's IDLE limit, commonly at about 29 minutes, and then
	// immediately call IdleStart[1] again.
	// 
	// 
	// References:
	// [1] #IdleStart
	bool IdleDone(void);

	// Ends IMAP IDLE mode by sending the protocol's DONE continuation.
	// 
	// The authenticated connection remains open and usable. Calling this method when
	// IDLE is not active fails.
	// 
	// Applications maintaining a long-lived IDLE connection should call this method
	// shortly before the server's IDLE limit, commonly at about 29 minutes, and then
	// immediately call IdleStart[1] again.
	// 
	// 
	// References:
	// [1] #IdleStart
	CkTask *IdleDoneAsync(void);


	// Sends the IMAP IDLE command and begins listening for unsolicited mailbox
	// updates.
	// 
	// The session must be connected, authenticated, and have a mailbox selected with
	// SelectMailbox[1] or ExamineMailbox[2]. The server must advertise the IDLE
	// capability.
	// 
	// Calling this method while IDLE is already active fails. While IDLE is active,
	// any other method that sends an IMAP command also fails; call IdleDone[3] first.
	// 
	// Chilkat does not automatically renew IDLE. To avoid common server time limits,
	// the application should end and restart IDLE before the server timeout, typically
	// about every 29 minutes.
	// 
	// 
	// References:
	// [1] #SelectMailbox
	// [2] #ExamineMailbox
	// [3] #IdleDone
	bool IdleStart(void);

	// Sends the IMAP IDLE command and begins listening for unsolicited mailbox
	// updates.
	// 
	// The session must be connected, authenticated, and have a mailbox selected with
	// SelectMailbox[1] or ExamineMailbox[2]. The server must advertise the IDLE
	// capability.
	// 
	// Calling this method while IDLE is already active fails. While IDLE is active,
	// any other method that sends an IMAP command also fails; call IdleDone[3] first.
	// 
	// Chilkat does not automatically renew IDLE. To avoid common server time limits,
	// the application should end and restart IDLE before the server timeout, typically
	// about every 29 minutes.
	// 
	// 
	// References:
	// [1] #SelectMailbox
	// [2] #ExamineMailbox
	// [3] #IdleDone
	CkTask *IdleStartAsync(void);


	// Returns the last known connection state without sending data to the IMAP server.
	// 
	// A true result does not prove that an idle connection is still usable. Call
	// Noop[1] to send a command and verify that the server responds.
	// 
	// 
	// References:
	// [1] #Noop
	bool IsConnected(void);


	// Indicates whether this object is in an authenticated IMAP session.
	// 
	// This reports the last known state and does not send a command to the server.
	// 
	bool IsLoggedIn(void);


	// Deprecated: Use MbxList[1] instead.
	// 
	// Sends the IMAP LIST command using reference as the reference name and wildcardedMailbox as the
	// mailbox pattern.
	// 
	// The pattern supports IMAP wildcards: * matches zero or more hierarchy levels,
	// while% matches within one hierarchy level. The returned Mailboxes object
	// contains the matching names and attributes.
	// 
	// This method also updates SeparatorChar[2] from the hierarchy delimiter reported
	// by the server.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #MbxList
	// [2] #SeparatorChar
	// The caller is responsible for deleting the object returned by this method.
	CkMailboxes *ListMailboxes(const char *reference, const char *wildcardedMailbox);

	// Deprecated: Use MbxList[1] instead.
	// 
	// Sends the IMAP LIST command using reference as the reference name and wildcardedMailbox as the
	// mailbox pattern.
	// 
	// The pattern supports IMAP wildcards: * matches zero or more hierarchy levels,
	// while% matches within one hierarchy level. The returned Mailboxes object
	// contains the matching names and attributes.
	// 
	// This method also updates SeparatorChar[2] from the hierarchy delimiter reported
	// by the server.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #MbxList
	// [2] #SeparatorChar
	CkTask *ListMailboxesAsync(const char *reference, const char *wildcardedMailbox);


	// Deprecated: Use MbxList[1] instead.
	// 
	// Sends the IMAP LSUB command and returns subscribed mailboxes matching wildcardedMailbox,
	// interpreted relative to reference.
	// 
	// The mailbox-pattern rules are the same as for ListMailboxes[2].
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #MbxList
	// [2] #ListMailboxes
	// The caller is responsible for deleting the object returned by this method.
	CkMailboxes *ListSubscribed(const char *reference, const char *wildcardedMailbox);

	// Deprecated: Use MbxList[1] instead.
	// 
	// Sends the IMAP LSUB command and returns subscribed mailboxes matching wildcardedMailbox,
	// interpreted relative to reference.
	// 
	// The mailbox-pattern rules are the same as for ListMailboxes[2].
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #MbxList
	// [2] #ListMailboxes
	CkTask *ListSubscribedAsync(const char *reference, const char *wildcardedMailbox);


	// Associates this Imap object with the original Imap caller that created the
	// asynchronous Task in task.
	// 
	// This works with a task returned by any Imap async method, and the task does not
	// need to be complete. The operation does not copy the caller's state; this object
	// becomes another reference to the same underlying Imap state. Any previously
	// associated state in this object is replaced.
	// 
	// Use this when code has a Task —for example in a task-completed callback—but no
	// longer has a reference to the object that started the async operation.
	// 
	bool LoadTaskCaller(CkTask &task);


	// Authenticates the connected IMAP session using the login name in loginName and the
	// credential in password.
	// 
	// Call Connect[1] first. The mechanism is selected by AuthMethod[2].
	// 
	// For XOAUTH2, loginName is the normal IMAP login name or email address and password is the
	// raw OAuth 2.0 access token without a Bearer prefix. A failed XOAUTH2 login
	// leaves the connection open so the application may correct the credentials and
	// try again.
	// 
	// Do not call this method again after the session is already authenticated. A
	// repeated login attempt fails, although the existing authenticated session
	// remains logged in.
	// 
	// 
	// References:
	// [1] #Connect
	// [2] #AuthMethod
	bool Login(const char *loginName, const char *password);

	// Authenticates the connected IMAP session using the login name in loginName and the
	// credential in password.
	// 
	// Call Connect[1] first. The mechanism is selected by AuthMethod[2].
	// 
	// For XOAUTH2, loginName is the normal IMAP login name or email address and password is the
	// raw OAuth 2.0 access token without a Bearer prefix. A failed XOAUTH2 login
	// leaves the connection open so the application may correct the credentials and
	// try again.
	// 
	// Do not call this method again after the session is already authenticated. A
	// repeated login attempt fails, although the existing authenticated session
	// remains logged in.
	// 
	// 
	// References:
	// [1] #Connect
	// [2] #AuthMethod
	CkTask *LoginAsync(const char *loginName, const char *password);


	// Authenticates the connected IMAP session using the SecureString login name in
	// loginName and credential in password.
	// 
	// This is the secure-string counterpart of Login[1]. The authentication mechanism
	// is selected by AuthMethod[2].
	// 
	// For XOAUTH2, loginName contains the normal login name or email address and password
	// contains the raw access token without a Bearer prefix.
	// 
	// 
	// References:
	// [1] #Login
	// [2] #AuthMethod
	bool LoginSecure(CkSecureString &loginName, CkSecureString &password);

	// Authenticates the connected IMAP session using the SecureString login name in
	// loginName and credential in password.
	// 
	// This is the secure-string counterpart of Login[1]. The authentication mechanism
	// is selected by AuthMethod[2].
	// 
	// For XOAUTH2, loginName contains the normal login name or email address and password
	// contains the raw access token without a Bearer prefix.
	// 
	// 
	// References:
	// [1] #Login
	// [2] #AuthMethod
	CkTask *LoginSecureAsync(CkSecureString &loginName, CkSecureString &password);


	// Sends the IMAP LOGOUT command and ends the authenticated session.
	// 
	// The server normally closes the connection as part of a successful logout.
	// 
	bool Logout(void);

	// Sends the IMAP LOGOUT command and ends the authenticated session.
	// 
	// The server normally closes the connection as part of a successful logout.
	// 
	CkTask *LogoutAsync(void);


	// Lists matching mailboxes and appends them to the Mailboxes object in mboxes. mboxes
	// is not cleared on success, so repeated calls on the same object can add
	// duplicate entries. If the method fails, mboxes is unchanged.
	// 
	//     * subscribed = true: list only subscribed mailboxes.
	//     * subscribed = false: list all matching mailboxes.
	// 
	// reference is the IMAP reference name, usually an empty string. mbxPattern is the mailbox
	// pattern: * matches zero or more hierarchy levels, while% matches one hierarchy
	// level.
	// 
	// Applications may use normal Unicode mailbox names and patterns. Chilkat
	// automatically handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as
	// required by the server.
	// 
	// The method also updates SeparatorChar[1] from the server's response.
	// 
	// 
	// References:
	// [1] #SeparatorChar
	bool MbxList(bool subscribed, const char *reference, const char *mbxPattern, CkMailboxes &mboxes);

	// Lists matching mailboxes and appends them to the Mailboxes object in mboxes. mboxes
	// is not cleared on success, so repeated calls on the same object can add
	// duplicate entries. If the method fails, mboxes is unchanged.
	// 
	//     * subscribed = true: list only subscribed mailboxes.
	//     * subscribed = false: list all matching mailboxes.
	// 
	// reference is the IMAP reference name, usually an empty string. mbxPattern is the mailbox
	// pattern: * matches zero or more hierarchy levels, while% matches one hierarchy
	// level.
	// 
	// Applications may use normal Unicode mailbox names and patterns. Chilkat
	// automatically handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as
	// required by the server.
	// 
	// The method also updates SeparatorChar[1] from the server's response.
	// 
	// 
	// References:
	// [1] #SeparatorChar
	CkTask *MbxListAsync(bool subscribed, const char *reference, const char *mbxPattern, CkMailboxes &mboxes);


	// Moves the messages identified by the MessageSet in messageSet from the selected
	// mailbox to destination mailbox destFolder using one IMAP MOVE command.
	// 
	// The server must advertise the MOVE capability. If it does not, this method fails
	// and does not emulate the operation with copy, delete, and expunge commands.
	// 
	// MessageSet.HasUids determines whether messageSet contains UIDs or sequence numbers.
	// For sequence numbers, one invalid value causes complete failure and nothing is
	// moved. For UIDs, nonexistent values are silently ignored and valid messages are
	// moved.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	bool MoveMessages(CkMessageSet &messageSet, const char *destFolder);

	// Moves the messages identified by the MessageSet in messageSet from the selected
	// mailbox to destination mailbox destFolder using one IMAP MOVE command.
	// 
	// The server must advertise the MOVE capability. If it does not, this method fails
	// and does not emulate the operation with copy, delete, and expunge commands.
	// 
	// MessageSet.HasUids determines whether messageSet contains UIDs or sequence numbers.
	// For sequence numbers, one invalid value causes complete failure and nothing is
	// moved. For UIDs, nonexistent values are silently ignored and valid messages are
	// moved.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	CkTask *MoveMessagesAsync(CkMessageSet &messageSet, const char *destFolder);


	// Sends the IMAP NOOP command and waits for the server response.
	// 
	// This is useful for verifying that an existing authenticated connection is still
	// responsive and for receiving unsolicited mailbox-state updates.
	// 
	bool Noop(void);

	// Sends the IMAP NOOP command and waits for the server response.
	// 
	// This is useful for verifying that an existing authenticated connection is still
	// responsive and for receiving unsolicited mailbox-state updates.
	// 
	CkTask *NoopAsync(void);


	// Searches the selected mailbox using the IMAP criteria in criteria and stores
	// matching identifiers in the MessageSet in msgSet.
	// 
	// On success, msgSet is replaced with the result. If bUid is true, msgSet contains
	// UIDs and MessageSet.HasUids is true; otherwise, msgSet contains sequence numbers
	// and MessageSet.HasUids is false. If the method fails, msgSet is unchanged.
	// SearchCharset[1] applies when the criteria contain non-ASCII text.
	// 
	// For the special criterion new-email, Chilkat records each UIDNEXT received from
	// SELECT, EXAMINE, or another IMAP response and uses it as the baseline for
	// detecting later UIDs. If no UIDNEXT is available, Chilkat searches for messages
	// having the \Recent flag. Results are always UIDs regardless of bUid, and an
	// empty result clears msgSet.
	// 
	// When SortCriteria[2] is nonempty, Chilkat uses IMAP SORT if the server supports
	// it. Otherwise, it automatically falls back to an ordinary SEARCH.
	// 
	// 
	// References:
	// [1] #SearchCharset
	// [2] #SortCriteria
	bool QueryMbx(const char *criteria, bool bUid, CkMessageSet &msgSet);

	// Searches the selected mailbox using the IMAP criteria in criteria and stores
	// matching identifiers in the MessageSet in msgSet.
	// 
	// On success, msgSet is replaced with the result. If bUid is true, msgSet contains
	// UIDs and MessageSet.HasUids is true; otherwise, msgSet contains sequence numbers
	// and MessageSet.HasUids is false. If the method fails, msgSet is unchanged.
	// SearchCharset[1] applies when the criteria contain non-ASCII text.
	// 
	// For the special criterion new-email, Chilkat records each UIDNEXT received from
	// SELECT, EXAMINE, or another IMAP response and uses it as the baseline for
	// detecting later UIDs. If no UIDNEXT is available, Chilkat searches for messages
	// having the \Recent flag. Results are always UIDs regardless of bUid, and an
	// empty result clears msgSet.
	// 
	// When SortCriteria[2] is nonempty, Chilkat uses IMAP SORT if the server supports
	// it. Otherwise, it automatically falls back to an ordinary SEARCH.
	// 
	// 
	// References:
	// [1] #SearchCharset
	// [2] #SortCriteria
	CkTask *QueryMbxAsync(const char *criteria, bool bUid, CkMessageSet &msgSet);


	// Sends the IMAP THREAD command for the selected mailbox.
	// 
	// threadAlg is the threading algorithm, commonly ORDEREDSUBJECT or REFERENCES. searchCriteria
	// contains ordinary IMAP search criteria and is interpreted using
	// SearchCharset[1]. If bUid is true, message identifiers in the result are UIDs;
	// otherwise, they are sequence numbers.
	// 
	// On success, json is completely replaced with the thread hierarchy. On failure,
	// json is unchanged; there is no partial-success JSON result.
	// 
	// The returned JSON has a top-level threads array. Each element represents one
	// thread, and nested arrays encode parent/child relationships. For example:
	// 
	// {"threads":[[1],[2],[3]]}
	// 
	// The server must advertise the IMAP THREAD capability and support the selected
	// algorithm.
	// 
	// 
	// References:
	// [1] #SearchCharset
	bool QueryThread(const char *threadAlg, const char *searchCriteria, bool bUid, CkJsonObject &json);

	// Sends the IMAP THREAD command for the selected mailbox.
	// 
	// threadAlg is the threading algorithm, commonly ORDEREDSUBJECT or REFERENCES. searchCriteria
	// contains ordinary IMAP search criteria and is interpreted using
	// SearchCharset[1]. If bUid is true, message identifiers in the result are UIDs;
	// otherwise, they are sequence numbers.
	// 
	// On success, json is completely replaced with the thread hierarchy. On failure,
	// json is unchanged; there is no partial-success JSON result.
	// 
	// The returned JSON has a top-level threads array. Each element represents one
	// thread, and nested arrays encode parent/child relationships. For example:
	// 
	// {"threads":[[1],[2],[3]]}
	// 
	// The server must advertise the IMAP THREAD capability and support the selected
	// algorithm.
	// 
	// 
	// References:
	// [1] #SearchCharset
	CkTask *QueryThreadAsync(const char *threadAlg, const char *searchCriteria, bool bUid, CkJsonObject &json);


	// Sends the raw IMAP command bytes in the BinData in bdCmd and stores the raw
	// response bytes in bdResp.
	// 
	// bdCmd contains the command without an IMAP command tag or trailing CRLF; Chilkat
	// supplies both. bdResp is cleared and replaced with the response.
	// 
	// Use raw commands only for rare server extensions that are not otherwise exposed
	// by the API, have an expected one-line response, and do not change Imap object
	// state such as the selected mailbox, message count, UidNext, or UidValidity.
	// State-changing raw commands can leave cached properties inconsistent with the
	// server.
	// 
	bool RawCommandBd(CkBinData &bdCmd, CkBinData &bdResp);

	// Sends the raw IMAP command bytes in the BinData in bdCmd and stores the raw
	// response bytes in bdResp.
	// 
	// bdCmd contains the command without an IMAP command tag or trailing CRLF; Chilkat
	// supplies both. bdResp is cleared and replaced with the response.
	// 
	// Use raw commands only for rare server extensions that are not otherwise exposed
	// by the API, have an expected one-line response, and do not change Imap object
	// state such as the selected mailbox, message count, UidNext, or UidValidity.
	// State-changing raw commands can leave cached properties inconsistent with the
	// server.
	// 
	CkTask *RawCommandBdAsync(CkBinData &bdCmd, CkBinData &bdResp);


	// Fetches the current IMAP flags for the server message represented by email and
	// updates its ckx-imap-* metadata headers.
	// 
	// Chilkat reads the identifier from ckx-imap-uid and checks ckx-imap-isUid to
	// determine whether it is a UID or sequence number. A copied Email can be used as
	// long as this metadata is preserved.
	// 
	// When ckx-imap-isUid is NO, the stored sequence number may identify a different
	// message after an expunge. UID-based emails are preferred for later operations.
	// Methods such as GetMailFlag[1] read the refreshed flag metadata.
	// 
	// 
	// References:
	// [1] #GetMailFlag
	bool RefetchMailFlags(CkEmail &email);

	// Fetches the current IMAP flags for the server message represented by email and
	// updates its ckx-imap-* metadata headers.
	// 
	// Chilkat reads the identifier from ckx-imap-uid and checks ckx-imap-isUid to
	// determine whether it is a UID or sequence number. A copied Email can be used as
	// long as this metadata is preserved.
	// 
	// When ckx-imap-isUid is NO, the stored sequence number may identify a different
	// message after an expunge. UID-based emails are preferred for later operations.
	// Methods such as GetMailFlag[1] read the refreshed flag metadata.
	// 
	// 
	// References:
	// [1] #GetMailFlag
	CkTask *RefetchMailFlagsAsync(CkEmail &email);


	// Renames the mailbox in fromMailbox to the name in toMailbox.
	// 
	// Changing hierarchy components can also move a mailbox within the server's folder
	// tree, for example from INBOX.old.project to INBOX.archive.project.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	bool RenameMailbox(const char *fromMailbox, const char *toMailbox);

	// Renames the mailbox in fromMailbox to the name in toMailbox.
	// 
	// Changing hierarchy components can also move a mailbox within the server's folder
	// tree, for example from INBOX.old.project to INBOX.archive.project.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	CkTask *RenameMailboxAsync(const char *fromMailbox, const char *toMailbox);


	// Deprecated: Use QueryMbx[1] instead.
	// 
	// Searches the selected mailbox using the IMAP search criteria in criteria. If bUid is
	// true, the returned MessageSet contains UIDs; otherwise, it contains sequence
	// numbers.
	// 
	// criteria is passed to the server as IMAP SEARCH criteria. Multiple keys are combined
	// with AND unless operators such as OR or NOT are used. Common examples include:
	// 
	//     * ALL
	//     * UNSEEN
	//     * FROM "sender@example.com"
	//     * SUBJECT "invoice"
	//     * SINCE 1-Jul-2026
	//     * UID 1000:*
	// 
	// String matching is performed by the server and is normally case-insensitive
	// substring matching. SearchCharset[2] controls the charset used for non-ASCII
	// criteria, although some server implementations impose additional restrictions.
	// 
	// 
	// References:
	// [1] #QueryMbx
	// [2] #SearchCharset
	// The caller is responsible for deleting the object returned by this method.
	CkMessageSet *Search(const char *criteria, bool bUid);

	// Deprecated: Use QueryMbx[1] instead.
	// 
	// Searches the selected mailbox using the IMAP search criteria in criteria. If bUid is
	// true, the returned MessageSet contains UIDs; otherwise, it contains sequence
	// numbers.
	// 
	// criteria is passed to the server as IMAP SEARCH criteria. Multiple keys are combined
	// with AND unless operators such as OR or NOT are used. Common examples include:
	// 
	//     * ALL
	//     * UNSEEN
	//     * FROM "sender@example.com"
	//     * SUBJECT "invoice"
	//     * SINCE 1-Jul-2026
	//     * UID 1000:*
	// 
	// String matching is performed by the server and is normally case-insensitive
	// substring matching. SearchCharset[2] controls the charset used for non-ASCII
	// criteria, although some server implementations impose additional restrictions.
	// 
	// 
	// References:
	// [1] #QueryMbx
	// [2] #SearchCharset
	CkTask *SearchAsync(const char *criteria, bool bUid);


	// Opens the mailbox in mailbox for read-write access.
	// 
	// A mailbox must be selected before message fetch, search, flag, copy, move, or
	// expunge operations that act on mailbox contents. Successful selection updates
	// SelectedMailbox[1], NumMessages[2], UidValidity[3], and related mailbox-state
	// properties.
	// 
	// Use ExamineMailbox[4] when read-only access is required.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #SelectedMailbox
	// [2] #NumMessages
	// [3] #UidValidity
	// [4] #ExamineMailbox
	bool SelectMailbox(const char *mailbox);

	// Opens the mailbox in mailbox for read-write access.
	// 
	// A mailbox must be selected before message fetch, search, flag, copy, move, or
	// expunge operations that act on mailbox contents. Successful selection updates
	// SelectedMailbox[1], NumMessages[2], UidValidity[3], and related mailbox-state
	// properties.
	// 
	// Use ExamineMailbox[4] when read-only access is required.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	// 
	// References:
	// [1] #SelectedMailbox
	// [2] #NumMessages
	// [3] #UidValidity
	// [4] #ExamineMailbox
	CkTask *SelectMailboxAsync(const char *mailbox);


	// Sends the raw IMAP command text in cmd and returns the raw server response.
	// 
	// Pass the command itself, such as NOOP, without an IMAP command tag or trailing
	// CRLF. Chilkat generates the tag and command line termination.
	// 
	// Use raw commands only for rare server extensions that are not otherwise exposed
	// by the API, have an expected one-line response, and do not change Imap object
	// state such as the selected mailbox, message count, UidNext, or UidValidity.
	// State-changing raw commands can leave cached properties inconsistent with the
	// server.
	// 
	bool SendRawCommand(const char *cmd, CkString &outRawResponse);

	// Sends the raw IMAP command text in cmd and returns the raw server response.
	// 
	// Pass the command itself, such as NOOP, without an IMAP command tag or trailing
	// CRLF. Chilkat generates the tag and command line termination.
	// 
	// Use raw commands only for rare server extensions that are not otherwise exposed
	// by the API, have an expected one-line response, and do not change Imap object
	// state such as the selected mailbox, message count, UidNext, or UidValidity.
	// State-changing raw commands can leave cached properties inconsistent with the
	// server.
	// 
	const char *sendRawCommand(const char *cmd);
	// Sends the raw IMAP command text in cmd and returns the raw server response.
	// 
	// Pass the command itself, such as NOOP, without an IMAP command tag or trailing
	// CRLF. Chilkat generates the tag and command line termination.
	// 
	// Use raw commands only for rare server extensions that are not otherwise exposed
	// by the API, have an expected one-line response, and do not change Imap object
	// state such as the selected mailbox, message count, UidNext, or UidValidity.
	// State-changing raw commands can leave cached properties inconsistent with the
	// server.
	// 
	CkTask *SendRawCommandAsync(const char *cmd);


	// Sends the raw IMAP command text in cmd and returns the server response as
	// bytes.
	// 
	// Pass the command without an IMAP tag or trailing CRLF; Chilkat supplies both.
	// This is the byte-response counterpart of SendRawCommand[1].
	// 
	// Use raw commands only for rare server extensions that are not otherwise exposed
	// by the API, have an expected one-line response, and do not change Imap object
	// state such as the selected mailbox, message count, UidNext, or UidValidity.
	// State-changing raw commands can leave cached properties inconsistent with the
	// server.
	// 
	// 
	// References:
	// [1] #SendRawCommand
	bool SendRawCommandB(const char *cmd, CkByteData &outBytes);

	// Sends the raw IMAP command text in cmd and returns the server response as
	// bytes.
	// 
	// Pass the command without an IMAP tag or trailing CRLF; Chilkat supplies both.
	// This is the byte-response counterpart of SendRawCommand[1].
	// 
	// Use raw commands only for rare server extensions that are not otherwise exposed
	// by the API, have an expected one-line response, and do not change Imap object
	// state such as the selected mailbox, message count, UidNext, or UidValidity.
	// State-changing raw commands can leave cached properties inconsistent with the
	// server.
	// 
	// 
	// References:
	// [1] #SendRawCommand
	CkTask *SendRawCommandBAsync(const char *cmd);


	// Sends the raw IMAP command bytes in cmd and returns the server response as
	// bytes.
	// 
	// cmd contains the command without an IMAP tag or trailing CRLF; Chilkat supplies
	// both.
	// 
	// Use raw commands only for rare server extensions that are not otherwise exposed
	// by the API, have an expected one-line response, and do not change Imap object
	// state such as the selected mailbox, message count, UidNext, or UidValidity.
	// State-changing raw commands can leave cached properties inconsistent with the
	// server.
	// 
	bool SendRawCommandC(CkByteData &cmd, CkByteData &outBytes);

	// Sends the raw IMAP command bytes in cmd and returns the server response as
	// bytes.
	// 
	// cmd contains the command without an IMAP tag or trailing CRLF; Chilkat supplies
	// both.
	// 
	// Use raw commands only for rare server extensions that are not otherwise exposed
	// by the API, have an expected one-line response, and do not change Imap object
	// state such as the selected mailbox, message count, UidNext, or UidValidity.
	// State-changing raw commands can leave cached properties inconsistent with the
	// server.
	// 
	CkTask *SendRawCommandCAsync(CkByteData &cmd);


	// Specifies the Cert in cert for decrypting S/MIME messages downloaded by this
	// Imap object.
	// 
	// The certificate must have access to its associated private key. Use
	// SetDecryptCert2[1] when the private key is supplied separately.
	// 
	// 
	// References:
	// [1] #SetDecryptCert2
	bool SetDecryptCert(CkCert &cert);


	// Specifies the certificate in cert and its separately supplied PrivateKey in key
	// for decrypting S/MIME messages.
	// 
	// Use this when the certificate object does not already provide access to the
	// private key.
	// 
	bool SetDecryptCert2(CkCert &cert, CkPrivateKey &key);


	// Sets or clears one flag on the message identified by msgId in the selected
	// mailbox.
	// 
	// If bUid is true, msgId is a UID; otherwise, it is a sequence number. flagName is
	// the flag name, and value is 1 to set the flag or 0 to clear it.
	// 
	// Standard flags include \Deleted, \Seen, \Answered, \Flagged, and \Draft.
	// Server-supported custom keywords may also be used.
	// 
	bool SetFlag(unsigned long msgId, bool bUid, const char *flagName, int value);

	// Sets or clears one flag on the message identified by msgId in the selected
	// mailbox.
	// 
	// If bUid is true, msgId is a UID; otherwise, it is a sequence number. flagName is
	// the flag name, and value is 1 to set the flag or 0 to clear it.
	// 
	// Standard flags include \Deleted, \Seen, \Answered, \Flagged, and \Draft.
	// Server-supported custom keywords may also be used.
	// 
	CkTask *SetFlagAsync(unsigned long msgId, bool bUid, const char *flagName, int value);


	// Sets or clears one flag for every identifier in the MessageSet supplied in messageSet.
	// 
	// flagName is the flag name, and value is 1 to set it or 0 to clear it.
	// MessageSet.HasUids determines whether the identifiers are UIDs or sequence
	// numbers. Chilkat sends one IMAP STORE or UID STORE command containing the
	// complete identifier set.
	// 
	// IMAP bulk flag changes are not atomic and have no all-or-nothing rollback.
	// Changes applied before a failure remain applied. For UID-based operations,
	// nonexistent UIDs are silently ignored as required by IMAP. For sequence-number
	// operations, an out-of-range sequence number causes the server to return an
	// error; whether valid sequence numbers in the same command were changed before
	// that error is server-dependent.
	// 
	// This method changes server state only. It does not update metadata in any
	// previously fetched Email objects.
	// 
	bool SetFlags(CkMessageSet &messageSet, const char *flagName, int value);

	// Sets or clears one flag for every identifier in the MessageSet supplied in messageSet.
	// 
	// flagName is the flag name, and value is 1 to set it or 0 to clear it.
	// MessageSet.HasUids determines whether the identifiers are UIDs or sequence
	// numbers. Chilkat sends one IMAP STORE or UID STORE command containing the
	// complete identifier set.
	// 
	// IMAP bulk flag changes are not atomic and have no all-or-nothing rollback.
	// Changes applied before a failure remain applied. For UID-based operations,
	// nonexistent UIDs are silently ignored as required by IMAP. For sequence-number
	// operations, an out-of-range sequence number causes the server to return an
	// error; whether valid sequence numbers in the same command were changed before
	// that error is server-dependent.
	// 
	// This method changes server state only. It does not update metadata in any
	// previously fetched Email objects.
	// 
	CkTask *SetFlagsAsync(CkMessageSet &messageSet, const char *flagName, int value);


	// Sets or clears a flag for the server message represented by the Email in email.
	// 
	// Chilkat reads the message identifier from ckx-imap-uid and uses ckx-imap-isUid
	// to determine whether the value is a UID or sequence number. flagName is the flag
	// name, and value is 1 to set it or 0 to clear it. The method fails if the required
	// metadata is absent.
	// 
	// A copied Email can be used as long as the metadata is preserved. When
	// ckx-imap-isUid is NO, the stored value is a sequence number and may no longer
	// identify the same message after an expunge. UID-based emails are preferred for
	// operations performed later or after reconnecting.
	// 
	// Setting \Deleted marks the message for deletion; call Expunge[1] to remove it
	// permanently.
	// 
	// 
	// References:
	// [1] #Expunge
	bool SetMailFlag(CkEmail &email, const char *flagName, int value);

	// Sets or clears a flag for the server message represented by the Email in email.
	// 
	// Chilkat reads the message identifier from ckx-imap-uid and uses ckx-imap-isUid
	// to determine whether the value is a UID or sequence number. flagName is the flag
	// name, and value is 1 to set it or 0 to clear it. The method fails if the required
	// metadata is absent.
	// 
	// A copied Email can be used as long as the metadata is preserved. When
	// ckx-imap-isUid is NO, the stored value is a sequence number and may no longer
	// identify the same message after an expunge. UID-based emails are preferred for
	// operations performed later or after reconnecting.
	// 
	// Setting \Deleted marks the message for deletion; call Expunge[1] to remove it
	// permanently.
	// 
	// 
	// References:
	// [1] #Expunge
	CkTask *SetMailFlagAsync(CkEmail &email, const char *flagName, int value);


	// Sends the IMAP SETQUOTA command for quota root quotaRoot.
	// 
	// resource is STORAGE to set the combined message-storage limit or MESSAGE to set the
	// message-count limit. For STORAGE, quota is measured in units of 1024 octets; for
	// example, 500000 represents approximately 500,000,000 bytes.
	// 
	// The server must support the IMAP QUOTA extension and the requested resource
	// type.
	// 
	bool SetQuota(const char *quotaRoot, const char *resource, int quota);

	// Sends the IMAP SETQUOTA command for quota root quotaRoot.
	// 
	// resource is STORAGE to set the combined message-storage limit or MESSAGE to set the
	// message-count limit. For STORAGE, quota is measured in units of 1024 octets; for
	// example, 500000 represents approximately 500,000,000 bytes.
	// 
	// The server must support the IMAP QUOTA extension and the requested resource
	// type.
	// 
	CkTask *SetQuotaAsync(const char *quotaRoot, const char *resource, int quota);


	// Specifies the client certificate in cert for TLS client-certificate
	// authentication.
	// 
	// Most IMAP servers do not require a client certificate. When one is required,
	// cert must provide access to the corresponding private key.
	// 
	bool SetSslClientCert(CkCert &cert);


	// Specifies a TLS client certificate and private key from PEM data or a PEM file.
	// 
	// pemDataOrFilename may contain the PEM text itself or a local filesystem path to the PEM file;
	// Chilkat detects which form was supplied. pemPassword contains the password when the
	// private key is encrypted.
	// 
	bool SetSslClientCertPem(const char *pemDataOrFilename, const char *pemPassword);


	// Specifies a TLS client certificate and private key from a PKCS #12/PFX file.
	// 
	// pfxFilename is the local filesystem path of the.pfx or.p12 file, and pfxPassword contains its
	// password.
	// 
	bool SetSslClientCertPfx(const char *pfxFilename, const char *pfxPassword);


	// Deprecated: Use QueryMbx[1] instead.
	// 
	// Searches the selected mailbox using criteria searchCriteria and returns the matching
	// message identifiers in the order requested by sortCriteria.
	// 
	// sortCriteria is a space-separated sort expression. REVERSE before a key makes that key
	// descending. Supported keys include ARRIVAL, CC, DATE, FROM, SIZE, SUBJECT, and
	// TO.
	// 
	// charset is the search charset. If bUid is true, the returned set contains UIDs;
	// otherwise, sequence numbers are returned. The server must support IMAP SORT.
	// 
	// 
	// References:
	// [1] #QueryMbx
	// The caller is responsible for deleting the object returned by this method.
	CkMessageSet *Sort(const char *sortCriteria, const char *charset, const char *searchCriteria, bool bUid);

	// Deprecated: Use QueryMbx[1] instead.
	// 
	// Searches the selected mailbox using criteria searchCriteria and returns the matching
	// message identifiers in the order requested by sortCriteria.
	// 
	// sortCriteria is a space-separated sort expression. REVERSE before a key makes that key
	// descending. Supported keys include ARRIVAL, CC, DATE, FROM, SIZE, SUBJECT, and
	// TO.
	// 
	// charset is the search charset. If bUid is true, the returned set contains UIDs;
	// otherwise, sequence numbers are returned. The server must support IMAP SORT.
	// 
	// 
	// References:
	// [1] #QueryMbx
	CkTask *SortAsync(const char *sortCriteria, const char *charset, const char *searchCriteria, bool bUid);


	// Authenticates the SSH tunnel using the username in sshLogin and the SshKey private
	// key in privateKey.
	// 
	// Call SshOpenTunnel[1] first. The corresponding public key must already be
	// authorized for sshLogin on the SSH server. After authentication, call Connect[2] and
	// Login[3] for the IMAP server.
	// 
	// 
	// References:
	// [1] #SshOpenTunnel
	// [2] #Connect
	// [3] #Login
	bool SshAuthenticatePk(const char *sshLogin, CkSshKey &privateKey);

	// Authenticates the SSH tunnel using the username in sshLogin and the SshKey private
	// key in privateKey.
	// 
	// Call SshOpenTunnel[1] first. The corresponding public key must already be
	// authorized for sshLogin on the SSH server. After authentication, call Connect[2] and
	// Login[3] for the IMAP server.
	// 
	// 
	// References:
	// [1] #SshOpenTunnel
	// [2] #Connect
	// [3] #Login
	CkTask *SshAuthenticatePkAsync(const char *sshLogin, CkSshKey &privateKey);


	// Authenticates the SSH tunnel using the username in sshLogin and password in sshPassword.
	// 
	// Call SshOpenTunnel[1] first. After SSH authentication succeeds, call Connect[2]
	// and Login[3]; the IMAP traffic then flows through the tunnel automatically.
	// 
	// 
	// References:
	// [1] #SshOpenTunnel
	// [2] #Connect
	// [3] #Login
	bool SshAuthenticatePw(const char *sshLogin, const char *sshPassword);

	// Authenticates the SSH tunnel using the username in sshLogin and password in sshPassword.
	// 
	// Call SshOpenTunnel[1] first. After SSH authentication succeeds, call Connect[2]
	// and Login[3]; the IMAP traffic then flows through the tunnel automatically.
	// 
	// 
	// References:
	// [1] #SshOpenTunnel
	// [2] #Connect
	// [3] #Login
	CkTask *SshAuthenticatePwAsync(const char *sshLogin, const char *sshPassword);


	// Closes the SSH tunnel opened by SshOpenTunnel[1].
	// 
	// Any IMAP connection using that tunnel must no longer be used after the tunnel is
	// closed.
	// 
	// 
	// References:
	// [1] #SshOpenTunnel
	bool SshCloseTunnel(void);

	// Closes the SSH tunnel opened by SshOpenTunnel[1].
	// 
	// Any IMAP connection using that tunnel must no longer be used after the tunnel is
	// closed.
	// 
	// 
	// References:
	// [1] #SshOpenTunnel
	CkTask *SshCloseTunnelAsync(void);


	// Connects to the SSH server in sshHostname on port sshPort and prepares an SSH tunnel for
	// the later IMAP connection.
	// 
	// Port 22 is the usual SSH port. After this succeeds, authenticate with
	// SshAuthenticatePw[1] or SshAuthenticatePk[2], then call Connect[3] and Login[4]
	// for IMAP.
	// 
	// 
	// References:
	// [1] #SshAuthenticatePw
	// [2] #SshAuthenticatePk
	// [3] #Connect
	// [4] #Login
	bool SshOpenTunnel(const char *sshHostname, int sshPort);

	// Connects to the SSH server in sshHostname on port sshPort and prepares an SSH tunnel for
	// the later IMAP connection.
	// 
	// Port 22 is the usual SSH port. After this succeeds, authenticate with
	// SshAuthenticatePw[1] or SshAuthenticatePk[2], then call Connect[3] and Login[4]
	// for IMAP.
	// 
	// 
	// References:
	// [1] #SshAuthenticatePw
	// [2] #SshAuthenticatePk
	// [3] #Connect
	// [4] #Login
	CkTask *SshOpenTunnelAsync(const char *sshHostname, int sshPort);


	// Sets or clears multiple flags on one message in the selected mailbox.
	// 
	// If bUid is true, msgId is a UID; otherwise, it is a sequence number. flagNames is a
	// space-separated list such as \Seen \Answered $label1. value is 1 to set all
	// listed flags or 0 to clear them.
	// 
	// The operation uses IMAP STORE or UID STORE and is not transactional. A
	// nonexistent UID can be silently ignored and the command can still succeed. An
	// invalid sequence number causes failure. This method changes server state only
	// and does not update metadata in previously fetched Email objects.
	// 
	bool StoreFlags(unsigned long msgId, bool bUid, const char *flagNames, int value);

	// Sets or clears multiple flags on one message in the selected mailbox.
	// 
	// If bUid is true, msgId is a UID; otherwise, it is a sequence number. flagNames is a
	// space-separated list such as \Seen \Answered $label1. value is 1 to set all
	// listed flags or 0 to clear them.
	// 
	// The operation uses IMAP STORE or UID STORE and is not transactional. A
	// nonexistent UID can be silently ignored and the command can still succeed. An
	// invalid sequence number causes failure. This method changes server state only
	// and does not update metadata in previously fetched Email objects.
	// 
	CkTask *StoreFlagsAsync(unsigned long msgId, bool bUid, const char *flagNames, int value);


	// Subscribes the authenticated IMAP account to the mailbox named by mailbox.
	// 
	// Subscription controls which mailboxes are returned by subscribed-mailbox listing
	// operations; it does not create the mailbox.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	bool Subscribe(const char *mailbox);

	// Subscribes the authenticated IMAP account to the mailbox named by mailbox.
	// 
	// Subscription controls which mailboxes are returned by subscribed-mailbox listing
	// operations; it does not create the mailbox.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	CkTask *SubscribeAsync(const char *mailbox);


	// Deprecated: Use QueryThread[1] instead.
	// 
	// Sends the IMAP THREAD command using threading algorithm threadAlg, charset charset, and
	// search criteria searchCriteria.
	// 
	// Common algorithms are ORDEREDSUBJECT and REFERENCES. If bUid is true, thread
	// members are UIDs; otherwise, they are sequence numbers. The returned JsonObject
	// represents the parent-child thread structure.
	// 
	// The server must advertise the IMAP THREAD capability and support the requested
	// algorithm.
	// 
	// 
	// References:
	// [1] #QueryThread
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *ThreadCmd(const char *threadAlg, const char *charset, const char *searchCriteria, bool bUid);

	// Deprecated: Use QueryThread[1] instead.
	// 
	// Sends the IMAP THREAD command using threading algorithm threadAlg, charset charset, and
	// search criteria searchCriteria.
	// 
	// Common algorithms are ORDEREDSUBJECT and REFERENCES. If bUid is true, thread
	// members are UIDs; otherwise, they are sequence numbers. The returned JsonObject
	// represents the parent-child thread structure.
	// 
	// The server must advertise the IMAP THREAD capability and support the requested
	// algorithm.
	// 
	// 
	// References:
	// [1] #QueryThread
	CkTask *ThreadCmdAsync(const char *threadAlg, const char *charset, const char *searchCriteria, bool bUid);


	// Removes the subscription to the mailbox named by mailbox.
	// 
	// The mailbox itself and its messages are not deleted.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	bool Unsubscribe(const char *mailbox);

	// Removes the subscription to the mailbox named by mailbox.
	// 
	// The mailbox itself and its messages are not deleted.
	// 
	// Mailbox names may be supplied as normal Unicode strings. Chilkat automatically
	// handles IMAP modified UTF-7 or UTF-8 mailbox-name encoding as required by the
	// server.
	// 
	CkTask *UnsubscribeAsync(const char *mailbox);


	// Associates the XmlCertVault in vault with this Imap object as a source of
	// certificates and private keys for S/MIME operations.
	// 
	// Only one vault can be associated at a time. Calling this method again replaces
	// the previously associated vault.
	// 
	bool UseCertVault(CkXmlCertVault &vault);


	// Uses an already connected and authenticated Ssh object as the transport for
	// subsequent IMAP connections.
	// 
	// SSH supports multiple logical channels, so the same SSH connection may be shared
	// by IMAP and other Chilkat objects. Call this method before Connect[1].
	// 
	// 
	// References:
	// [1] #Connect
	bool UseSsh(CkSsh &ssh);


	// Uses the existing SSH tunnel represented by the Socket in tunnel for subsequent
	// IMAP connections.
	// 
	// This allows a tunnel to be shared with other objects. Call this method before
	// Connect[1].
	// 
	// 
	// References:
	// [1] #Connect
	bool UseSshTunnel(CkSocket &tunnel);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
