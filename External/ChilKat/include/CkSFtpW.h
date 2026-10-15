// CkSFtpW.h: interface for the CkSFtpW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkSFtpW_H
#define _CkSFtpW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkTaskW;
class CkSshKeyW;
class CkSecureStringW;
class CkSshW;
class CkBinDataW;
class CkStringBuilderW;
class CkDateTimeW;
class CkJsonObjectW;
class CkStringTableW;
class CkSFtpDirW;
class CkByteData;
class CkSFtpProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkSFtpW
class CK_VISIBLE_PUBLIC CkSFtpW  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkSFtpW(const CkSFtpW &);
	CkSFtpW &operator=(const CkSFtpW &);

    public:
	CkSFtpW(void);
	virtual ~CkSFtpW(void);

	

	static CkSFtpW *createNew(void);
	

	CkSFtpW(bool bCallbackOwned);
	static CkSFtpW *createNew(bool bCallbackOwned);

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkSFtpProgressW *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkSFtpProgressW *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Set to true to request that the currently running Chilkat operation abort.
	// Both synchronous and asynchronous operations can be canceled; a synchronous call
	// may be interrupted by setting this property from another thread.
	// 
	// When the abort is observed, the current method returns failure and Chilkat
	// resets this property to false. If no method is running, it is reset when the
	// next method begins.
	// 
	bool get_AbortCurrent(void);
	// Set to true to request that the currently running Chilkat operation abort.
	// Both synchronous and asynchronous operations can be canceled; a synchronous call
	// may be interrupted by setting this property from another thread.
	// 
	// When the abort is observed, the current method returns failure and Chilkat
	// resets this property to false. If no method is running, it is reset when the
	// next method begins.
	// 
	void put_AbortCurrent(bool newVal);

	// Contains the result code from the most recent call to AuthenticatePw[1],
	// AuthenticatePk[2], AuthenticatePwPk[3], or a corresponding secure-string
	// authentication method.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                               Meaning                                |
	// +=======+======================================================================+
	// | 1     | Transport failure: communication was lost, or a network read or      |
	// |       | write failed or timed out.                                           |
	// +-------+----------------------------------------------------------------------+
	// | 2     | Invalid private key: the key format, key type, or key contents are   |
	// |       | not suitable for public-key authentication.                          |
	// +-------+----------------------------------------------------------------------+
	// | 3     | No mutually supported authentication method is available.            |
	// +-------+----------------------------------------------------------------------+
	// | 4     | SSH authentication protocol error: an unexpected or invalid message  |
	// |       | was received.                                                        |
	// +-------+----------------------------------------------------------------------+
	// | 5     | The server rejected the supplied password or private key.            |
	// +-------+----------------------------------------------------------------------+
	// | 6     | The SSH session is already authenticated.                            |
	// +-------+----------------------------------------------------------------------+
	// | 7     | The server requires a password change. See                           |
	// |       | PasswordChangeRequested[4] .                                         |
	// +-------+----------------------------------------------------------------------+
	// 
	// Read this property immediately after an authentication method fails. Also
	// inspect LastErrorText for detailed diagnostics.
	// Lifetime: A later successful authentication does not necessarily reset this
	// value. Consult it only immediately after an authentication method returns
	// false; do not use an older value to describe the current session.
	// 
	// References:
	// [1] #AuthenticatePw
	// [2] #AuthenticatePk
	// [3] #AuthenticatePwPk
	// [4] #PasswordChangeRequested
	int get_AuthFailReason(void);

	// Specifies the approximate maximum download rate, in bytes per second. The
	// default is 0, which disables download throttling.
	// 
	// Bandwidth throttling is approximate. Actual throughput can vary because of
	// network latency, SSH framing, buffering, and server behavior.
	int get_BandwidthThrottleDown(void);
	// Specifies the approximate maximum download rate, in bytes per second. The
	// default is 0, which disables download throttling.
	// 
	// Bandwidth throttling is approximate. Actual throughput can vary because of
	// network latency, SSH framing, buffering, and server behavior.
	void put_BandwidthThrottleDown(int newVal);

	// Specifies the approximate maximum upload rate, in bytes per second. The default
	// is 0, which disables upload throttling.
	// 
	// Bandwidth throttling is approximate. Actual throughput can vary because of
	// network latency, SSH framing, buffering, and server behavior.
	int get_BandwidthThrottleUp(void);
	// Specifies the approximate maximum upload rate, in bytes per second. The default
	// is 0, which disables upload throttling.
	// 
	// Bandwidth throttling is approximate. Actual throughput can vary because of
	// network latency, SSH framing, buffering, and server behavior.
	void put_BandwidthThrottleUp(int newVal);

	// Specifies the SSH client-identification string sent when a connection is
	// established. The default begins with SSH-2.0-Chilkat_ followed by the Chilkat
	// version, for example SSH-2.0-Chilkat_11.6.0.
	// 
	// The value should begin with SSH-2.0-. A server may disconnect if the
	// identification string is invalid.
	void get_ClientIdentifier(CkString &str);
	// Specifies the SSH client-identification string sent when a connection is
	// established. The default begins with SSH-2.0-Chilkat_ followed by the Chilkat
	// version, for example SSH-2.0-Chilkat_11.6.0.
	// 
	// The value should begin with SSH-2.0-. A server may disconnect if the
	// identification string is invalid.
	const wchar_t *clientIdentifier(void);
	// Specifies the SSH client-identification string sent when a connection is
	// established. The default begins with SSH-2.0-Chilkat_ followed by the Chilkat
	// version, for example SSH-2.0-Chilkat_11.6.0.
	// 
	// The value should begin with SSH-2.0-. A server may disconnect if the
	// identification string is invalid.
	void put_ClientIdentifier(const wchar_t *newVal);

	// This property is normally left unset. Set it only on a multihomed computer when
	// the application must bind the outgoing connection to a specific local network
	// interface.
	// 
	// Specify a numeric IPv4 or IPv6 address, not a hostname. When the property is
	// empty, the operating system automatically chooses the local address.
	// 
	void get_ClientIpAddress(CkString &str);
	// This property is normally left unset. Set it only on a multihomed computer when
	// the application must bind the outgoing connection to a specific local network
	// interface.
	// 
	// Specify a numeric IPv4 or IPv6 address, not a hostname. When the property is
	// empty, the operating system automatically chooses the local address.
	// 
	const wchar_t *clientIpAddress(void);
	// This property is normally left unset. Set it only on a multihomed computer when
	// the application must bind the outgoing connection to a specific local network
	// interface.
	// 
	// Specify a numeric IPv4 or IPv6 address, not a hostname. When the property is
	// empty, the operating system automatically chooses the local address.
	// 
	void put_ClientIpAddress(const wchar_t *newVal);

	// Specifies the maximum number of milliseconds allowed for the remote endpoint to
	// accept the TCP connection.
	// 
	// This setting covers TCP connection establishment. After the socket is connected,
	// receive and transfer inactivity are governed by IdleTimeoutMs[1] and
	// method-specific timeouts.
	// 
	// References:
	// [1] #IdleTimeoutMs
	int get_ConnectTimeoutMs(void);
	// Specifies the maximum number of milliseconds allowed for the remote endpoint to
	// accept the TCP connection.
	// 
	// This setting covers TCP connection establishment. After the socket is connected,
	// receive and transfer inactivity are governed by IdleTimeoutMs[1] and
	// method-specific timeouts.
	// 
	// References:
	// [1] #IdleTimeoutMs
	void put_ConnectTimeoutMs(int newVal);

	// Contains the RFC 4253 reason code from the most recent SSH DISCONNECT message
	// received from the server. A value of 0 means no server-provided disconnect code
	// is available.
	// 
	// +------+-----------------------------------------------+
	// | Code |                 Symbolic name                 |
	// +======+===============================================+
	// | 1    | SSH_DISCONNECT_HOST_NOT_ALLOWED_TO_CONNECT    |
	// +------+-----------------------------------------------+
	// | 2    | SSH_DISCONNECT_PROTOCOL_ERROR                 |
	// +------+-----------------------------------------------+
	// | 3    | SSH_DISCONNECT_KEY_EXCHANGE_FAILED            |
	// +------+-----------------------------------------------+
	// | 4    | SSH_DISCONNECT_RESERVED                       |
	// +------+-----------------------------------------------+
	// | 5    | SSH_DISCONNECT_MAC_ERROR                      |
	// +------+-----------------------------------------------+
	// | 6    | SSH_DISCONNECT_COMPRESSION_ERROR              |
	// +------+-----------------------------------------------+
	// | 7    | SSH_DISCONNECT_SERVICE_NOT_AVAILABLE          |
	// +------+-----------------------------------------------+
	// | 8    | SSH_DISCONNECT_PROTOCOL_VERSION_NOT_SUPPORTED |
	// +------+-----------------------------------------------+
	// | 9    | SSH_DISCONNECT_HOST_KEY_NOT_VERIFIABLE        |
	// +------+-----------------------------------------------+
	// | 10   | SSH_DISCONNECT_CONNECTION_LOST                |
	// +------+-----------------------------------------------+
	// | 11   | SSH_DISCONNECT_BY_APPLICATION                 |
	// +------+-----------------------------------------------+
	// | 12   | SSH_DISCONNECT_TOO_MANY_CONNECTIONS           |
	// +------+-----------------------------------------------+
	// | 13   | SSH_DISCONNECT_AUTH_CANCELLED_BY_USER         |
	// +------+-----------------------------------------------+
	// | 14   | SSH_DISCONNECT_NO_MORE_AUTH_METHODS_AVAILABLE |
	// +------+-----------------------------------------------+
	// | 15   | SSH_DISCONNECT_ILLEGAL_USER_NAME              |
	// +------+-----------------------------------------------+
	// 
	// See DisconnectReason[1] for the server-provided descriptive text.
	// 
	// 
	// References:
	// [1] #DisconnectReason
	int get_DisconnectCode(void);

	// Contains the descriptive text sent with the most recent server SSH DISCONNECT
	// message. See DisconnectCode[1] for the corresponding RFC 4253 reason code.
	// 
	// The text is supplied by the server and can be empty or generic. An ordinary TCP
	// loss or a local disconnect does not necessarily produce an SSH disconnect
	// reason.
	// 
	// 
	// References:
	// [1] #DisconnectCode
	void get_DisconnectReason(CkString &str);
	// Contains the descriptive text sent with the most recent server SSH DISCONNECT
	// message. See DisconnectCode[1] for the corresponding RFC 4253 reason code.
	// 
	// The text is supplied by the server and can be empty or generic. An ordinary TCP
	// loss or a local disconnect does not necessarily produce an SSH disconnect
	// reason.
	// 
	// 
	// References:
	// [1] #DisconnectCode
	const wchar_t *disconnectReason(void);

	// Controls whether Chilkat caches remote file sizes and attributes requested by
	// GetFileSize32[1], GetFileSize64[2], GetFileSizeStr[3], GetFileCreateTimeStr[4],
	// GetFileLastAccessStr[5], GetFileLastModifiedStr[6], GetFileOwner[7],
	// GetFileGroup[8], GetFilePermissions[9]. The default is false.
	// 
	// When enabled, requesting one attribute by filename causes the complete attribute
	// set for that file to be cached. Later attribute requests for the same filename
	// can be satisfied without another server round trip.
	// 
	// Caching applies only when a remote path is used, not when an open handle is
	// used. Call ClearCache[10] when remote metadata may have changed.
	// 
	// References:
	// [1] #GetFileSize32
	// [2] #GetFileSize64
	// [3] #GetFileSizeStr
	// [4] #GetFileCreateTimeStr
	// [5] #GetFileLastAccessStr
	// [6] #GetFileLastModifiedStr
	// [7] #GetFileOwner
	// [8] #GetFileGroup
	// [9] #GetFilePermissions
	// [10] #ClearCache
	bool get_EnableCache(void);
	// Controls whether Chilkat caches remote file sizes and attributes requested by
	// GetFileSize32[1], GetFileSize64[2], GetFileSizeStr[3], GetFileCreateTimeStr[4],
	// GetFileLastAccessStr[5], GetFileLastModifiedStr[6], GetFileOwner[7],
	// GetFileGroup[8], GetFilePermissions[9]. The default is false.
	// 
	// When enabled, requesting one attribute by filename causes the complete attribute
	// set for that file to be cached. Later attribute requests for the same filename
	// can be satisfied without another server round trip.
	// 
	// Caching applies only when a remote path is used, not when an open handle is
	// used. Call ClearCache[10] when remote metadata may have changed.
	// 
	// References:
	// [1] #GetFileSize32
	// [2] #GetFileSize64
	// [3] #GetFileSizeStr
	// [4] #GetFileCreateTimeStr
	// [5] #GetFileLastAccessStr
	// [6] #GetFileLastModifiedStr
	// [7] #GetFileOwner
	// [8] #GetFileGroup
	// [9] #GetFilePermissions
	// [10] #ClearCache
	void put_EnableCache(bool newVal);

	// Controls whether SSH compression may be negotiated. The default is false.
	// 
	// Some older servers advertise compression but fail when it is enabled. If the
	// server disconnects during or immediately after connection or authentication, try
	// leaving this property false.
	bool get_EnableCompression(void);
	// Controls whether SSH compression may be negotiated. The default is false.
	// 
	// Some older servers advertise compression but fail when it is enabled. If the
	// server disconnects during or immediately after connection or authentication, try
	// leaving this property false.
	void put_EnableCompression(bool newVal);

	// Enables automatic resolution of secret specification strings from secure
	// operating-system storage. The default is false.
	// 
	// When true, supported password properties and authentication methods may
	// receive a value beginning with!! instead of a literal credential. Chilkat
	// resolves the secret from Windows Credential Manager on Windows or Apple Keychain
	// on macOS.
	// 
	// Secret specification format:
	// 
	// !![appName|]service[|domain]|username
	// 
	// This feature applies to HttpProxyPassword[1], SocksPassword[2],
	// AuthenticatePw[3], and AuthenticatePwPk[4].
	// 
	// 
	// References:
	// [1] #HttpProxyPassword
	// [2] #SocksPassword
	// [3] #AuthenticatePw
	// [4] #AuthenticatePwPk
	bool get_EnableSecrets(void);
	// Enables automatic resolution of secret specification strings from secure
	// operating-system storage. The default is false.
	// 
	// When true, supported password properties and authentication methods may
	// receive a value beginning with!! instead of a literal credential. Chilkat
	// resolves the secret from Windows Credential Manager on Windows or Apple Keychain
	// on macOS.
	// 
	// Secret specification format:
	// 
	// !![appName|]service[|domain]|username
	// 
	// This feature applies to HttpProxyPassword[1], SocksPassword[2],
	// AuthenticatePw[3], and AuthenticatePwPk[4].
	// 
	// 
	// References:
	// [1] #HttpProxyPassword
	// [2] #SocksPassword
	// [3] #AuthenticatePw
	// [4] #AuthenticatePwPk
	void put_EnableSecrets(bool newVal);

	// Specifies the character encoding used for SFTP filenames. During
	// InitializeSftp[1], Chilkat automatically sets this property when the server
	// supplies a filename-charset extension.
	// 
	// When the property is empty, incoming and outgoing filenames use UTF-8.
	// Otherwise, Chilkat uses the specified charset, such as utf-8, iso-8859-1, or
	// windows-1252.
	// 
	// Use an explicit charset only when required by the server. UTF-8 is the normal
	// SFTP filename encoding.
	// 
	// References:
	// [1] #InitializeSftp
	void get_FilenameCharset(CkString &str);
	// Specifies the character encoding used for SFTP filenames. During
	// InitializeSftp[1], Chilkat automatically sets this property when the server
	// supplies a filename-charset extension.
	// 
	// When the property is empty, incoming and outgoing filenames use UTF-8.
	// Otherwise, Chilkat uses the specified charset, such as utf-8, iso-8859-1, or
	// windows-1252.
	// 
	// Use an explicit charset only when required by the server. UTF-8 is the normal
	// SFTP filename encoding.
	// 
	// References:
	// [1] #InitializeSftp
	const wchar_t *filenameCharset(void);
	// Specifies the character encoding used for SFTP filenames. During
	// InitializeSftp[1], Chilkat automatically sets this property when the server
	// supplies a filename-charset extension.
	// 
	// When the property is empty, incoming and outgoing filenames use UTF-8.
	// Otherwise, Chilkat uses the specified charset, such as utf-8, iso-8859-1, or
	// windows-1252.
	// 
	// Use an explicit charset only when required by the server. UTF-8 is the normal
	// SFTP filename encoding.
	// 
	// References:
	// [1] #InitializeSftp
	void put_FilenameCharset(const wchar_t *newVal);

	// Restricts SSH cipher negotiation to a single cipher. Leave this property empty
	// to use Chilkat's normal preference order. For broader algorithm control, use
	// SetAllowedAlgorithms[1].
	// 
	// +------------------------------------------+-----------------------------------+
	// |               Cipher name                |              Family               |
	// +==========================================+===================================+
	// | chacha20-poly1305@openssh.com            | ChaCha20-Poly1305 authenticated   |
	// |                                          | encryption                        |
	// +------------------------------------------+-----------------------------------+
	// | aes128-ctr, aes192-ctr, aes256-ctr       | AES in CTR mode                   |
	// +------------------------------------------+-----------------------------------+
	// | aes128-cbc, aes192-cbc, aes256-cbc       | AES in CBC mode                   |
	// +------------------------------------------+-----------------------------------+
	// | aes128-gcm@openssh.com,                  | AES-GCM authenticated encryption  |
	// | aes256-gcm@openssh.com                   |                                   |
	// +------------------------------------------+-----------------------------------+
	// | twofish128-cbc, twofish256-cbc           | Twofish in CBC mode               |
	// +------------------------------------------+-----------------------------------+
	// | blowfish-cbc                             | Blowfish in CBC mode              |
	// +------------------------------------------+-----------------------------------+
	// 
	// If the server does not support the selected cipher, Connect[2] fails.
	// 
	// References:
	// [1] #SetAllowedAlgorithms
	// [2] #Connect
	void get_ForceCipher(CkString &str);
	// Restricts SSH cipher negotiation to a single cipher. Leave this property empty
	// to use Chilkat's normal preference order. For broader algorithm control, use
	// SetAllowedAlgorithms[1].
	// 
	// +------------------------------------------+-----------------------------------+
	// |               Cipher name                |              Family               |
	// +==========================================+===================================+
	// | chacha20-poly1305@openssh.com            | ChaCha20-Poly1305 authenticated   |
	// |                                          | encryption                        |
	// +------------------------------------------+-----------------------------------+
	// | aes128-ctr, aes192-ctr, aes256-ctr       | AES in CTR mode                   |
	// +------------------------------------------+-----------------------------------+
	// | aes128-cbc, aes192-cbc, aes256-cbc       | AES in CBC mode                   |
	// +------------------------------------------+-----------------------------------+
	// | aes128-gcm@openssh.com,                  | AES-GCM authenticated encryption  |
	// | aes256-gcm@openssh.com                   |                                   |
	// +------------------------------------------+-----------------------------------+
	// | twofish128-cbc, twofish256-cbc           | Twofish in CBC mode               |
	// +------------------------------------------+-----------------------------------+
	// | blowfish-cbc                             | Blowfish in CBC mode              |
	// +------------------------------------------+-----------------------------------+
	// 
	// If the server does not support the selected cipher, Connect[2] fails.
	// 
	// References:
	// [1] #SetAllowedAlgorithms
	// [2] #Connect
	const wchar_t *forceCipher(void);
	// Restricts SSH cipher negotiation to a single cipher. Leave this property empty
	// to use Chilkat's normal preference order. For broader algorithm control, use
	// SetAllowedAlgorithms[1].
	// 
	// +------------------------------------------+-----------------------------------+
	// |               Cipher name                |              Family               |
	// +==========================================+===================================+
	// | chacha20-poly1305@openssh.com            | ChaCha20-Poly1305 authenticated   |
	// |                                          | encryption                        |
	// +------------------------------------------+-----------------------------------+
	// | aes128-ctr, aes192-ctr, aes256-ctr       | AES in CTR mode                   |
	// +------------------------------------------+-----------------------------------+
	// | aes128-cbc, aes192-cbc, aes256-cbc       | AES in CBC mode                   |
	// +------------------------------------------+-----------------------------------+
	// | aes128-gcm@openssh.com,                  | AES-GCM authenticated encryption  |
	// | aes256-gcm@openssh.com                   |                                   |
	// +------------------------------------------+-----------------------------------+
	// | twofish128-cbc, twofish256-cbc           | Twofish in CBC mode               |
	// +------------------------------------------+-----------------------------------+
	// | blowfish-cbc                             | Blowfish in CBC mode              |
	// +------------------------------------------+-----------------------------------+
	// 
	// If the server does not support the selected cipher, Connect[2] fails.
	// 
	// References:
	// [1] #SetAllowedAlgorithms
	// [2] #Connect
	void put_ForceCipher(const wchar_t *newVal);

	// Controls SFTP protocol-version negotiation. The default is true, which forces
	// use of SFTP v3 even when the server supports a newer version.
	// 
	// Set this property to false before InitializeSftp[1] when the application needs
	// features introduced in SFTP v4, v5, or v6. After initialization, read
	// ProtocolVersion[2] to determine the negotiated version.
	// 
	// 
	// References:
	// [1] #InitializeSftp
	// [2] #ProtocolVersion
	bool get_ForceV3(void);
	// Controls SFTP protocol-version negotiation. The default is true, which forces
	// use of SFTP v3 even when the server supports a newer version.
	// 
	// Set this property to false before InitializeSftp[1] when the application needs
	// features introduced in SFTP v4, v5, or v6. After initialization, read
	// ProtocolVersion[2] to determine the negotiated version.
	// 
	// 
	// References:
	// [1] #InitializeSftp
	// [2] #ProtocolVersion
	void put_ForceV3(bool newVal);

	// Specifies the interval, in milliseconds, between AbortCheck event callbacks
	// during operations that support progress events. The default is 0, which disables
	// periodic callbacks.
	// 
	int get_HeartbeatMs(void);
	// Specifies the interval, in milliseconds, between AbortCheck event callbacks
	// during operations that support progress events. The default is 0, which disables
	// periodic callbacks.
	// 
	void put_HeartbeatMs(int newVal);

	// Specifies the preferred host-key algorithm used during SSH connection
	// establishment. The default is DSS; set it to RSA only when required for
	// compatibility with a particular server.
	// 
	// Normally this property should be left unchanged.
	void get_HostKeyAlg(CkString &str);
	// Specifies the preferred host-key algorithm used during SSH connection
	// establishment. The default is DSS; set it to RSA only when required for
	// compatibility with a particular server.
	// 
	// Normally this property should be left unchanged.
	const wchar_t *hostKeyAlg(void);
	// Specifies the preferred host-key algorithm used during SSH connection
	// establishment. The default is DSS; set it to RSA only when required for
	// compatibility with a particular server.
	// 
	// Normally this property should be left unchanged.
	void put_HostKeyAlg(const wchar_t *newVal);

	// Contains the connected server's host-key fingerprint in Chilkat's legacy MD5
	// format. The value is set after a successful SSH connection.
	// 
	// ssh-rsa 2048 68:ff:d1:4e:6c:ff:d7:b0:d6:58:73:85:07:bc:2e:d5
	// ssh-ed25519 256 c8:73:22:c7:82:aa:09:f1:1c:4e:99:8a:a0:62:a7:87
	// For new applications, use GetHostKeyFP[1] with SHA256. Compare the fingerprint
	// with a value obtained from a trusted source before sending credentials.
	// The value is cleared by Disconnect[2]. Obtain and validate it while the SSH
	// connection is active.
	// 
	// References:
	// [1] #GetHostKeyFP
	// [2] #Disconnect
	void get_HostKeyFingerprint(CkString &str);
	// Contains the connected server's host-key fingerprint in Chilkat's legacy MD5
	// format. The value is set after a successful SSH connection.
	// 
	// ssh-rsa 2048 68:ff:d1:4e:6c:ff:d7:b0:d6:58:73:85:07:bc:2e:d5
	// ssh-ed25519 256 c8:73:22:c7:82:aa:09:f1:1c:4e:99:8a:a0:62:a7:87
	// For new applications, use GetHostKeyFP[1] with SHA256. Compare the fingerprint
	// with a value obtained from a trusted source before sending credentials.
	// The value is cleared by Disconnect[2]. Obtain and validate it while the SSH
	// connection is active.
	// 
	// References:
	// [1] #GetHostKeyFP
	// [2] #Disconnect
	const wchar_t *hostKeyFingerprint(void);

	// Specifies the authentication method used by an HTTP proxy. Matching is
	// case-insensitive.
	// 
	// +-------+---------------------------------------------+
	// | Value |                  Behavior                   |
	// +=======+=============================================+
	// | empty | Automatically negotiate a supported method. |
	// +-------+---------------------------------------------+
	// | Basic | Use HTTP Basic authentication.              |
	// +-------+---------------------------------------------+
	// | NTLM  | Use NTLM authentication.                    |
	// +-------+---------------------------------------------+
	// 
	void get_HttpProxyAuthMethod(CkString &str);
	// Specifies the authentication method used by an HTTP proxy. Matching is
	// case-insensitive.
	// 
	// +-------+---------------------------------------------+
	// | Value |                  Behavior                   |
	// +=======+=============================================+
	// | empty | Automatically negotiate a supported method. |
	// +-------+---------------------------------------------+
	// | Basic | Use HTTP Basic authentication.              |
	// +-------+---------------------------------------------+
	// | NTLM  | Use NTLM authentication.                    |
	// +-------+---------------------------------------------+
	// 
	const wchar_t *httpProxyAuthMethod(void);
	// Specifies the authentication method used by an HTTP proxy. Matching is
	// case-insensitive.
	// 
	// +-------+---------------------------------------------+
	// | Value |                  Behavior                   |
	// +=======+=============================================+
	// | empty | Automatically negotiate a supported method. |
	// +-------+---------------------------------------------+
	// | Basic | Use HTTP Basic authentication.              |
	// +-------+---------------------------------------------+
	// | NTLM  | Use NTLM authentication.                    |
	// +-------+---------------------------------------------+
	// 
	void put_HttpProxyAuthMethod(const wchar_t *newVal);

	// Specifies the optional Windows domain used for NTLM authentication with an HTTP
	// proxy. This property is ignored for Basic authentication.
	// 
	void get_HttpProxyDomain(CkString &str);
	// Specifies the optional Windows domain used for NTLM authentication with an HTTP
	// proxy. This property is ignored for Basic authentication.
	// 
	const wchar_t *httpProxyDomain(void);
	// Specifies the optional Windows domain used for NTLM authentication with an HTTP
	// proxy. This property is ignored for Basic authentication.
	// 
	void put_HttpProxyDomain(const wchar_t *newVal);

	// Specifies the hostname or numeric IP address of an HTTP proxy used to establish
	// the SSH connection.
	// 
	// Set this property together with HttpProxyPort[1]. A configured SOCKS proxy takes
	// precedence when SocksVersion[2] is 4 or 5.
	// 
	// 
	// References:
	// [1] #HttpProxyPort
	// [2] #SocksVersion
	void get_HttpProxyHostname(CkString &str);
	// Specifies the hostname or numeric IP address of an HTTP proxy used to establish
	// the SSH connection.
	// 
	// Set this property together with HttpProxyPort[1]. A configured SOCKS proxy takes
	// precedence when SocksVersion[2] is 4 or 5.
	// 
	// 
	// References:
	// [1] #HttpProxyPort
	// [2] #SocksVersion
	const wchar_t *httpProxyHostname(void);
	// Specifies the hostname or numeric IP address of an HTTP proxy used to establish
	// the SSH connection.
	// 
	// Set this property together with HttpProxyPort[1]. A configured SOCKS proxy takes
	// precedence when SocksVersion[2] is 4 or 5.
	// 
	// 
	// References:
	// [1] #HttpProxyPort
	// [2] #SocksVersion
	void put_HttpProxyHostname(const wchar_t *newVal);

	// Specifies the password used to authenticate with an HTTP proxy.
	// 
	void get_HttpProxyPassword(CkString &str);
	// Specifies the password used to authenticate with an HTTP proxy.
	// 
	const wchar_t *httpProxyPassword(void);
	// Specifies the password used to authenticate with an HTTP proxy.
	// 
	void put_HttpProxyPassword(const wchar_t *newVal);

	// Specifies the HTTP proxy port. Common values include 8080 and 3128.
	// 
	// The proxy is used when HttpProxyHostname[1] is nonempty, this property is
	// nonzero, and SocksVersion[2] is 0.
	// 
	// 
	// References:
	// [1] #HttpProxyHostname
	// [2] #SocksVersion
	int get_HttpProxyPort(void);
	// Specifies the HTTP proxy port. Common values include 8080 and 3128.
	// 
	// The proxy is used when HttpProxyHostname[1] is nonempty, this property is
	// nonzero, and SocksVersion[2] is 0.
	// 
	// 
	// References:
	// [1] #HttpProxyHostname
	// [2] #SocksVersion
	void put_HttpProxyPort(int newVal);

	// Specifies the username used to authenticate with an HTTP proxy.
	// 
	void get_HttpProxyUsername(CkString &str);
	// Specifies the username used to authenticate with an HTTP proxy.
	// 
	const wchar_t *httpProxyUsername(void);
	// Specifies the username used to authenticate with an HTTP proxy.
	// 
	void put_HttpProxyUsername(const wchar_t *newVal);

	// Specifies the maximum period, in milliseconds, during which an SFTP operation
	// may make no progress while sending or receiving data. The default is 30000 (30
	// seconds).
	// 
	// Set this property to 0 to allow an operation to wait indefinitely.
	// 
	int get_IdleTimeoutMs(void);
	// Specifies the maximum period, in milliseconds, during which an SFTP operation
	// may make no progress while sending or receiving data. The default is 30000 (30
	// seconds).
	// 
	// Set this property to 0 to allow an operation to wait indefinitely.
	// 
	void put_IdleTimeoutMs(int newVal);

	// Controls whether ReadDir[1] and ReadDirListing[2] include the special. and..
	// directory entries. The default is false.
	// 
	// This property controls only the special directory entries. and... It does not
	// exclude ordinary hidden filenames such as.gitignore or.profile.
	// 
	// References:
	// [1] #ReadDir
	// [2] #ReadDirListing
	bool get_IncludeDotDirs(void);
	// Controls whether ReadDir[1] and ReadDirListing[2] include the special. and..
	// directory entries. The default is false.
	// 
	// This property controls only the special directory entries. and... It does not
	// exclude ordinary hidden filenames such as.gitignore or.profile.
	// 
	// References:
	// [1] #ReadDir
	// [2] #ReadDirListing
	void put_IncludeDotDirs(bool newVal);

	// Contains the RFC 4254 channel-open failure code when InitializeSftp[1] cannot
	// open the SFTP session channel. The initial value is 0.
	// 
	// +------+--------------------------------------+
	// | Code |            Symbolic name             |
	// +======+======================================+
	// | 1    | SSH_OPEN_ADMINISTRATIVELY_PROHIBITED |
	// +------+--------------------------------------+
	// | 2    | SSH_OPEN_CONNECT_FAILED              |
	// +------+--------------------------------------+
	// | 3    | SSH_OPEN_UNKNOWN_CHANNEL_TYPE        |
	// +------+--------------------------------------+
	// | 4    | SSH_OPEN_RESOURCE_SHORTAGE           |
	// +------+--------------------------------------+
	// 
	// 
	// References:
	// [1] #InitializeSftp
	int get_InitializeFailCode(void);

	// Contains the descriptive text associated with InitializeFailCode[1] when
	// InitializeSftp[2] cannot open the SFTP session channel. The text is supplied by
	// the server and may be empty or generic.
	// 
	// 
	// References:
	// [1] #InitializeFailCode
	// [2] #InitializeSftp
	void get_InitializeFailReason(CkString &str);
	// Contains the descriptive text associated with InitializeFailCode[1] when
	// InitializeSftp[2] cannot open the SFTP session channel. The text is supplied by
	// the server and may be empty or generic.
	// 
	// 
	// References:
	// [1] #InitializeFailCode
	// [2] #InitializeSftp
	const wchar_t *initializeFailReason(void);

	// Returns true when Chilkat's last known state indicates that the underlying SSH
	// transport is connected. This means Connect[1] succeeded; it does not mean
	// authentication or InitializeSftp[2] has completed.
	// 
	// This property is passive and does not perform network I/O. A silent network
	// failure or a peer close may remain undetected until an operation reads from or
	// writes to the socket.
	// 
	// To actively test whether the connection is still writable, call SendIgnore[3]
	// and check its return value. The server does not reply to an SSH IGNORE message.
	// 
	// References:
	// [1] #Connect
	// [2] #InitializeSftp
	// [3] #SendIgnore
	bool get_IsConnected(void);

	// Controls whether SSH and SFTP protocol traffic is accumulated in SessionLog[1].
	// The default is false.
	// 
	// Session logging is intended for diagnostics and grows as activity continues.
	// Disable it when no longer needed and treat the resulting log as potentially
	// sensitive.
	// 
	// References:
	// [1] #SessionLog
	bool get_KeepSessionLog(void);
	// Controls whether SSH and SFTP protocol traffic is accumulated in SessionLog[1].
	// The default is false.
	// 
	// Session logging is intended for diagnostics and grows as activity continues.
	// Disable it when no longer needed and treat the resulting log as potentially
	// sensitive.
	// 
	// References:
	// [1] #SessionLog
	void put_KeepSessionLog(bool newVal);

	// Contains the numeric code from the most recently received SFTP SSH_FXP_STATUS
	// response. This is not necessarily the status of the most recently called method.
	// Methods that return a handle, attributes, or data can complete without receiving
	// a new status response, leaving an older value unchanged. A successful method can
	// therefore leave a previous nonzero status code in this property.
	// 
	// +------+------------------------------------+
	// | Code |           Symbolic name            |
	// +======+====================================+
	// | 0    | SSH_FX_OK                          |
	// +------+------------------------------------+
	// | 1    | SSH_FX_EOF                         |
	// +------+------------------------------------+
	// | 2    | SSH_FX_NO_SUCH_FILE                |
	// +------+------------------------------------+
	// | 3    | SSH_FX_PERMISSION_DENIED           |
	// +------+------------------------------------+
	// | 4    | SSH_FX_FAILURE                     |
	// +------+------------------------------------+
	// | 5    | SSH_FX_BAD_MESSAGE                 |
	// +------+------------------------------------+
	// | 6    | SSH_FX_NO_CONNECTION               |
	// +------+------------------------------------+
	// | 7    | SSH_FX_CONNECTION_LOST             |
	// +------+------------------------------------+
	// | 8    | SSH_FX_OP_UNSUPPORTED              |
	// +------+------------------------------------+
	// | 9    | SSH_FX_INVALID_HANDLE              |
	// +------+------------------------------------+
	// | 10   | SSH_FX_NO_SUCH_PATH                |
	// +------+------------------------------------+
	// | 11   | SSH_FX_FILE_ALREADY_EXISTS         |
	// +------+------------------------------------+
	// | 12   | SSH_FX_WRITE_PROTECT               |
	// +------+------------------------------------+
	// | 13   | SSH_FX_NO_MEDIA                    |
	// +------+------------------------------------+
	// | 14   | SSH_FX_NO_SPACE_ON_FILESYSTEM      |
	// +------+------------------------------------+
	// | 15   | SSH_FX_QUOTA_EXCEEDED              |
	// +------+------------------------------------+
	// | 16   | SSH_FX_UNKNOWN_PRINCIPAL           |
	// +------+------------------------------------+
	// | 17   | SSH_FX_LOCK_CONFLICT               |
	// +------+------------------------------------+
	// | 18   | SSH_FX_DIR_NOT_EMPTY               |
	// +------+------------------------------------+
	// | 19   | SSH_FX_NOT_A_DIRECTORY             |
	// +------+------------------------------------+
	// | 20   | SSH_FX_INVALID_FILENAME            |
	// +------+------------------------------------+
	// | 21   | SSH_FX_LINK_LOOP                   |
	// +------+------------------------------------+
	// | 22   | SSH_FX_CANNOT_DELETE               |
	// +------+------------------------------------+
	// | 23   | SSH_FX_INVALID_PARAMETER           |
	// +------+------------------------------------+
	// | 24   | SSH_FX_FILE_IS_A_DIRECTORY         |
	// +------+------------------------------------+
	// | 25   | SSH_FX_BYTE_RANGE_LOCK_CONFLICT    |
	// +------+------------------------------------+
	// | 26   | SSH_FX_BYTE_RANGE_LOCK_REFUSED     |
	// +------+------------------------------------+
	// | 27   | SSH_FX_DELETE_PENDING              |
	// +------+------------------------------------+
	// | 28   | SSH_FX_FILE_CORRUPT                |
	// +------+------------------------------------+
	// | 29   | SSH_FX_OWNER_INVALID               |
	// +------+------------------------------------+
	// | 30   | SSH_FX_GROUP_INVALID               |
	// +------+------------------------------------+
	// | 31   | SSH_FX_NO_MATCHING_BYTE_RANGE_LOCK |
	// +------+------------------------------------+
	// 
	// See LastStatusMessage[1] for the server-provided message text.
	// 
	// Use each method's documented return value as the primary success test. Read this
	// property immediately after a relevant SFTP failure when the server status
	// provides additional detail.
	// 
	// References:
	// [1] #LastStatusMessage
	int get_LastStatusCode(void);

	// Contains the message text from the most recently received SFTP SSH_FXP_STATUS
	// response. The wording is server-dependent.
	// 
	// This property can remain unchanged across later successful methods that do not
	// receive a new status response. See LastStatusCode[1] for the numeric code.
	// 
	// 
	// References:
	// [1] #LastStatusCode
	void get_LastStatusMessage(CkString &str);
	// Contains the message text from the most recently received SFTP SSH_FXP_STATUS
	// response. The wording is server-dependent.
	// 
	// This property can remain unchanged across later successful methods that do not
	// receive a new status response. See LastStatusCode[1] for the numeric code.
	// 
	// 
	// References:
	// [1] #LastStatusCode
	const wchar_t *lastStatusMessage(void);

	// Specifies the maximum packet length used by the underlying SSH transport. The
	// default is 32768 bytes.
	// 
	// Normally this property should remain unchanged.
	int get_MaxPacketSize(void);
	// Specifies the maximum packet length used by the underlying SSH transport. The
	// default is 32768 bytes.
	// 
	// Normally this property should remain unchanged.
	void put_MaxPacketSize(int newVal);

	// Indicates that the server rejected password authentication because the account
	// password must be changed. This property is set by AuthenticatePw[1] and
	// AuthenticatePwPk[2].
	// 
	// When true, call the authentication method again and pass the old and new
	// passwords in this form:
	// 
	// |oldPassword|newPassword|
	// 
	// References:
	// [1] #AuthenticatePw
	// [2] #AuthenticatePwPk
	bool get_PasswordChangeRequested(void);

	// Specifies the value representing 100% completion in PercentDone event callbacks.
	// The default is 100.
	// 
	// For example, a scale of 1000 provides 0.1% granularity, so a callback value of
	// 453 represents 45.3% complete. Values are clamped to the range 10 through
	// 100000.
	// 
	// This property applies only in environments that support event callbacks and only
	// to operations for which progress can be measured.
	int get_PercentDoneScale(void);
	// Specifies the value representing 100% completion in PercentDone event callbacks.
	// The default is 100.
	// 
	// For example, a scale of 1000 provides 0.1% granularity, so a callback value of
	// 453 represents 45.3% complete. Values are clamped to the range 10 through
	// 100000.
	// 
	// This property applies only in environments that support event callbacks and only
	// to operations for which progress can be measured.
	void put_PercentDoneScale(int newVal);

	// Controls the preferred address family when DNS resolution returns both IPv4 and
	// IPv6 addresses. The default is false, which prefers IPv4. Set it to true to
	// prefer IPv6.
	// 
	bool get_PreferIpv6(void);
	// Controls the preferred address family when DNS resolution returns both IPv4 and
	// IPv6 addresses. The default is false, which prefers IPv4. Set it to true to
	// prefer IPv6.
	// 
	void put_PreferIpv6(bool newVal);

	// Controls whether path-based upload and download methods preserve source
	// timestamps on the destination. The default is false.
	// 
	// Last-modified time is preserved when supported by the negotiated SFTP version
	// and destination filesystem. SFTP v3 represents these times with whole-second
	// precision and does not provide a creation-time attribute; creation-time
	// preservation requires a later protocol version and server support.
	// 
	// This property does not apply to low-level transfers performed by opening a
	// remote handle, reading or writing the data, and then closing the handle.
	bool get_PreserveDate(void);
	// Controls whether path-based upload and download methods preserve source
	// timestamps on the destination. The default is false.
	// 
	// Last-modified time is preserved when supported by the negotiated SFTP version
	// and destination filesystem. SFTP v3 represents these times with whole-second
	// precision and does not provide a creation-time attribute; creation-time
	// preservation requires a later protocol version and server support.
	// 
	// This property does not apply to low-level transfers performed by opening a
	// remote handle, reading or writing the data, and then closing the handle.
	void put_PreserveDate(bool newVal);

	// Contains the SFTP protocol version negotiated by InitializeSftp[1], normally a
	// value from 3 through 6.
	// 
	// Chilkat and the server exchange their highest supported versions, and the
	// session uses the lower compatible version. Features unavailable in older
	// versions are identified throughout this reference documentation.
	// 
	// The initial value is 0. After a successful initialization, the negotiated value
	// can remain populated after Disconnect[2] and during a later connection before
	// SFTP is initialized again. Do not use this property alone to determine whether
	// an SFTP channel is currently open.
	// 
	// References:
	// [1] #InitializeSftp
	// [2] #Disconnect
	int get_ProtocolVersion(void);

	// Specifies a semicolon-separated list of filename patterns. When nonempty,
	// ReadDir[1] and ReadDirListing[2] include only entries matching at least one
	// pattern.
	// 
	//     * * matches zero or more characters.
	//     * Matching is case-insensitive.
	//     *? and bracket expressions such as [0-9] are not wildcard operators.
	//     * Surrounding whitespace and empty entries between semicolons are ignored.
	// *.xml; *.txt; *.csv
	// 
	// References:
	// [1] #ReadDir
	// [2] #ReadDirListing
	void get_ReadDirMustMatch(CkString &str);
	// Specifies a semicolon-separated list of filename patterns. When nonempty,
	// ReadDir[1] and ReadDirListing[2] include only entries matching at least one
	// pattern.
	// 
	//     * * matches zero or more characters.
	//     * Matching is case-insensitive.
	//     *? and bracket expressions such as [0-9] are not wildcard operators.
	//     * Surrounding whitespace and empty entries between semicolons are ignored.
	// *.xml; *.txt; *.csv
	// 
	// References:
	// [1] #ReadDir
	// [2] #ReadDirListing
	const wchar_t *readDirMustMatch(void);
	// Specifies a semicolon-separated list of filename patterns. When nonempty,
	// ReadDir[1] and ReadDirListing[2] include only entries matching at least one
	// pattern.
	// 
	//     * * matches zero or more characters.
	//     * Matching is case-insensitive.
	//     *? and bracket expressions such as [0-9] are not wildcard operators.
	//     * Surrounding whitespace and empty entries between semicolons are ignored.
	// *.xml; *.txt; *.csv
	// 
	// References:
	// [1] #ReadDir
	// [2] #ReadDirListing
	void put_ReadDirMustMatch(const wchar_t *newVal);

	// Specifies a semicolon-separated list of filename patterns. When nonempty,
	// ReadDir[1] and ReadDirListing[2] exclude entries matching any pattern. Exclusion
	// is applied after ReadDirMustMatch[3].
	// 
	//     * * matches zero or more characters.
	//     * Matching is case-insensitive.
	//     *? and bracket expressions such as [0-9] are not wildcard operators.
	//     * Surrounding whitespace and empty entries between semicolons are ignored.
	// *.tmp; *.bak; *.log
	// 
	// References:
	// [1] #ReadDir
	// [2] #ReadDirListing
	// [3] #ReadDirMustMatch
	void get_ReadDirMustNotMatch(CkString &str);
	// Specifies a semicolon-separated list of filename patterns. When nonempty,
	// ReadDir[1] and ReadDirListing[2] exclude entries matching any pattern. Exclusion
	// is applied after ReadDirMustMatch[3].
	// 
	//     * * matches zero or more characters.
	//     * Matching is case-insensitive.
	//     *? and bracket expressions such as [0-9] are not wildcard operators.
	//     * Surrounding whitespace and empty entries between semicolons are ignored.
	// *.tmp; *.bak; *.log
	// 
	// References:
	// [1] #ReadDir
	// [2] #ReadDirListing
	// [3] #ReadDirMustMatch
	const wchar_t *readDirMustNotMatch(void);
	// Specifies a semicolon-separated list of filename patterns. When nonempty,
	// ReadDir[1] and ReadDirListing[2] exclude entries matching any pattern. Exclusion
	// is applied after ReadDirMustMatch[3].
	// 
	//     * * matches zero or more characters.
	//     * Matching is case-insensitive.
	//     *? and bracket expressions such as [0-9] are not wildcard operators.
	//     * Surrounding whitespace and empty entries between semicolons are ignored.
	// *.tmp; *.bak; *.log
	// 
	// References:
	// [1] #ReadDir
	// [2] #ReadDirListing
	// [3] #ReadDirMustMatch
	void put_ReadDirMustNotMatch(const wchar_t *newVal);

	// Contains the SSH server-identification string received during connection
	// establishment. For example:
	// 
	// SSH-2.0-OpenSSH_8.9p1 Ubuntu-3ubuntu0.16
	// The last received identifier can remain populated after Disconnect[1]. Use
	// IsConnected[2] to determine whether the SSH transport is currently connected.
	// 
	// References:
	// [1] #Disconnect
	// [2] #IsConnected
	void get_ServerIdentifier(CkString &str);
	// Contains the SSH server-identification string received during connection
	// establishment. For example:
	// 
	// SSH-2.0-OpenSSH_8.9p1 Ubuntu-3ubuntu0.16
	// The last received identifier can remain populated after Disconnect[1]. Use
	// IsConnected[2] to determine whether the SSH transport is currently connected.
	// 
	// References:
	// [1] #Disconnect
	// [2] #IsConnected
	const wchar_t *serverIdentifier(void);

	// Contains the in-memory SSH/SFTP protocol log. Enable logging by setting
	// KeepSessionLog[1] to true.
	// 
	// This property contains log text, not a file path. Call ClearSessionLog[2] to
	// clear it.
	// 
	// References:
	// [1] #KeepSessionLog
	// [2] #ClearSessionLog
	void get_SessionLog(CkString &str);
	// Contains the in-memory SSH/SFTP protocol log. Enable logging by setting
	// KeepSessionLog[1] to true.
	// 
	// This property contains log text, not a file path. Call ClearSessionLog[2] to
	// clear it.
	// 
	// References:
	// [1] #KeepSessionLog
	// [2] #ClearSessionLog
	const wchar_t *sessionLog(void);

	// Specifies the SOCKS proxy hostname or IPv4 address. This property is used only
	// when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksHostname(CkString &str);
	// Specifies the SOCKS proxy hostname or IPv4 address. This property is used only
	// when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const wchar_t *socksHostname(void);
	// Specifies the SOCKS proxy hostname or IPv4 address. This property is used only
	// when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksHostname(const wchar_t *newVal);

	// Specifies the SOCKS5 password when username/password authentication is required.
	// SOCKS4 does not use a password, so this property is ignored when SocksVersion[1]
	// is 4.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksPassword(CkString &str);
	// Specifies the SOCKS5 password when username/password authentication is required.
	// SOCKS4 does not use a password, so this property is ignored when SocksVersion[1]
	// is 4.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const wchar_t *socksPassword(void);
	// Specifies the SOCKS5 password when username/password authentication is required.
	// SOCKS4 does not use a password, so this property is ignored when SocksVersion[1]
	// is 4.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksPassword(const wchar_t *newVal);

	// Specifies the SOCKS proxy port. The default is 1080. This property is used only
	// when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	int get_SocksPort(void);
	// Specifies the SOCKS proxy port. The default is 1080. This property is used only
	// when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksPort(int newVal);

	// Specifies the SOCKS proxy username. For SOCKS4 it is sent as the user ID; for
	// SOCKS5 it is used with SocksPassword[1] for username/password authentication.
	// 
	// 
	// References:
	// [1] #SocksPassword
	void get_SocksUsername(CkString &str);
	// Specifies the SOCKS proxy username. For SOCKS4 it is sent as the user ID; for
	// SOCKS5 it is used with SocksPassword[1] for username/password authentication.
	// 
	// 
	// References:
	// [1] #SocksPassword
	const wchar_t *socksUsername(void);
	// Specifies the SOCKS proxy username. For SOCKS4 it is sent as the user ID; for
	// SOCKS5 it is used with SocksPassword[1] for username/password authentication.
	// 
	// 
	// References:
	// [1] #SocksPassword
	void put_SocksUsername(const wchar_t *newVal);

	// Selects whether and how a SOCKS proxy is used.
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
	// Selects whether and how a SOCKS proxy is used.
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

	// Specifies the socket receive-buffer size. The default is 4194304 bytes. Normally
	// this property should remain unchanged.
	// 
	// When download throughput is unexpectedly low, testing a larger value may help.
	// Values should generally be multiples of 4096.
	// 
	int get_SoRcvBuf(void);
	// Specifies the socket receive-buffer size. The default is 4194304 bytes. Normally
	// this property should remain unchanged.
	// 
	// When download throughput is unexpectedly low, testing a larger value may help.
	// Values should generally be multiples of 4096.
	// 
	void put_SoRcvBuf(int newVal);

	// Specifies the socket send-buffer size. The default is 262144 bytes. Normally
	// this property should remain unchanged.
	// 
	// When upload throughput is unexpectedly low, testing values such as 524288 or
	// 1048576 may help. Values should generally be multiples of 4096.
	// 
	int get_SoSndBuf(void);
	// Specifies the socket send-buffer size. The default is 262144 bytes. Normally
	// this property should remain unchanged.
	// 
	// When upload throughput is unexpectedly low, testing values such as 524288 or
	// 1048576 may help. Values should generally be multiples of 4096.
	// 
	void put_SoSndBuf(int newVal);

	// Controls whether SyncTreeDownload[1] creates empty remote directories locally.
	// The default is true.
	// 
	// When false, a local directory is created only when it is needed to contain a
	// downloaded file.
	// 
	// When true, an empty remote directory is created locally even when no file
	// beneath it is downloaded.
	// 
	// References:
	// [1] #SyncTreeDownload
	bool get_SyncCreateAllLocalDirs(void);
	// Controls whether SyncTreeDownload[1] creates empty remote directories locally.
	// The default is true.
	// 
	// When false, a local directory is created only when it is needed to contain a
	// downloaded file.
	// 
	// When true, an empty remote directory is created locally even when no file
	// beneath it is downloaded.
	// 
	// References:
	// [1] #SyncTreeDownload
	void put_SyncCreateAllLocalDirs(bool newVal);

	// Specifies comma-separated directives that modify SyncTreeUpload[1] or
	// SyncTreeDownload[2]. The default is an empty string.
	// 
	// +-------------------------------+----------------------------------------------+
	// |           Directive           |                    Effect                    |
	// +===============================+==============================================+
	// | UploadIgnoreLocalOpenFailures | During upload synchronization, skip local    |
	// |                               | files that cannot be opened, such as files   |
	// |                               | held with exclusive access by another        |
	// |                               | process.                                     |
	// +-------------------------------+----------------------------------------------+
	// 
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void get_SyncDirectives(CkString &str);
	// Specifies comma-separated directives that modify SyncTreeUpload[1] or
	// SyncTreeDownload[2]. The default is an empty string.
	// 
	// +-------------------------------+----------------------------------------------+
	// |           Directive           |                    Effect                    |
	// +===============================+==============================================+
	// | UploadIgnoreLocalOpenFailures | During upload synchronization, skip local    |
	// |                               | files that cannot be opened, such as files   |
	// |                               | held with exclusive access by another        |
	// |                               | process.                                     |
	// +-------------------------------+----------------------------------------------+
	// 
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	const wchar_t *syncDirectives(void);
	// Specifies comma-separated directives that modify SyncTreeUpload[1] or
	// SyncTreeDownload[2]. The default is an empty string.
	// 
	// +-------------------------------+----------------------------------------------+
	// |           Directive           |                    Effect                    |
	// +===============================+==============================================+
	// | UploadIgnoreLocalOpenFailures | During upload synchronization, skip local    |
	// |                               | files that cannot be opened, such as files   |
	// |                               | held with exclusive access by another        |
	// |                               | process.                                     |
	// +-------------------------------+----------------------------------------------+
	// 
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void put_SyncDirectives(const wchar_t *newVal);

	// Specifies a semicolon-separated list of wildcard filename patterns.
	// SyncTreeUpload[1] and SyncTreeDownload[2] transfer only files matching at least
	// one pattern.
	// 
	// This filter applies to filenames, not directory names encountered while
	// recursively traversing a tree.
	// 
	// *.xml;*.txt;*.csv
	// Use * to match zero or more characters. Separate multiple patterns with
	// semicolons.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void get_SyncMustMatch(CkString &str);
	// Specifies a semicolon-separated list of wildcard filename patterns.
	// SyncTreeUpload[1] and SyncTreeDownload[2] transfer only files matching at least
	// one pattern.
	// 
	// This filter applies to filenames, not directory names encountered while
	// recursively traversing a tree.
	// 
	// *.xml;*.txt;*.csv
	// Use * to match zero or more characters. Separate multiple patterns with
	// semicolons.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	const wchar_t *syncMustMatch(void);
	// Specifies a semicolon-separated list of wildcard filename patterns.
	// SyncTreeUpload[1] and SyncTreeDownload[2] transfer only files matching at least
	// one pattern.
	// 
	// This filter applies to filenames, not directory names encountered while
	// recursively traversing a tree.
	// 
	// *.xml;*.txt;*.csv
	// Use * to match zero or more characters. Separate multiple patterns with
	// semicolons.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void put_SyncMustMatch(const wchar_t *newVal);

	// Specifies a semicolon-separated list of wildcard directory-name patterns.
	// SyncTreeUpload[1] and SyncTreeDownload[2] enter only directories matching at
	// least one pattern.
	// 
	// xml;txt;data_*
	// Use * to match zero or more characters. Separate multiple patterns with
	// semicolons.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void get_SyncMustMatchDir(CkString &str);
	// Specifies a semicolon-separated list of wildcard directory-name patterns.
	// SyncTreeUpload[1] and SyncTreeDownload[2] enter only directories matching at
	// least one pattern.
	// 
	// xml;txt;data_*
	// Use * to match zero or more characters. Separate multiple patterns with
	// semicolons.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	const wchar_t *syncMustMatchDir(void);
	// Specifies a semicolon-separated list of wildcard directory-name patterns.
	// SyncTreeUpload[1] and SyncTreeDownload[2] enter only directories matching at
	// least one pattern.
	// 
	// xml;txt;data_*
	// Use * to match zero or more characters. Separate multiple patterns with
	// semicolons.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void put_SyncMustMatchDir(const wchar_t *newVal);

	// Specifies a semicolon-separated list of wildcard filename patterns.
	// SyncTreeUpload[1] and SyncTreeDownload[2] skip files matching any pattern.
	// 
	// This filter applies to filenames, not directory names encountered while
	// recursively traversing a tree.
	// 
	// *.tmp;*.bak;*.log
	// Use * to match zero or more characters. Separate multiple patterns with
	// semicolons.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void get_SyncMustNotMatch(CkString &str);
	// Specifies a semicolon-separated list of wildcard filename patterns.
	// SyncTreeUpload[1] and SyncTreeDownload[2] skip files matching any pattern.
	// 
	// This filter applies to filenames, not directory names encountered while
	// recursively traversing a tree.
	// 
	// *.tmp;*.bak;*.log
	// Use * to match zero or more characters. Separate multiple patterns with
	// semicolons.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	const wchar_t *syncMustNotMatch(void);
	// Specifies a semicolon-separated list of wildcard filename patterns.
	// SyncTreeUpload[1] and SyncTreeDownload[2] skip files matching any pattern.
	// 
	// This filter applies to filenames, not directory names encountered while
	// recursively traversing a tree.
	// 
	// *.tmp;*.bak;*.log
	// Use * to match zero or more characters. Separate multiple patterns with
	// semicolons.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void put_SyncMustNotMatch(const wchar_t *newVal);

	// Specifies a semicolon-separated list of wildcard directory-name patterns.
	// SyncTreeUpload[1] and SyncTreeDownload[2] skip directories matching any pattern.
	// 
	// temp;cache;archive_*
	// Use * to match zero or more characters. Separate multiple patterns with
	// semicolons.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void get_SyncMustNotMatchDir(CkString &str);
	// Specifies a semicolon-separated list of wildcard directory-name patterns.
	// SyncTreeUpload[1] and SyncTreeDownload[2] skip directories matching any pattern.
	// 
	// temp;cache;archive_*
	// Use * to match zero or more characters. Separate multiple patterns with
	// semicolons.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	const wchar_t *syncMustNotMatchDir(void);
	// Specifies a semicolon-separated list of wildcard directory-name patterns.
	// SyncTreeUpload[1] and SyncTreeDownload[2] skip directories matching any pattern.
	// 
	// temp;cache;archive_*
	// Use * to match zero or more characters. Separate multiple patterns with
	// semicolons.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void put_SyncMustNotMatchDir(const wchar_t *newVal);

	// Controls the TCP_NODELAY socket option. The default is false. Set it to true
	// to disable the Nagle algorithm and reduce delays when many small packets are
	// sent.
	// 
	bool get_TcpNoDelay(void);
	// Controls the TCP_NODELAY socket option. The default is false. Set it to true
	// to disable the Nagle algorithm and reduce delays when many small packets are
	// sent.
	// 
	void put_TcpNoDelay(bool newVal);

	// Provides comma-separated compatibility, security, and synchronization options
	// for uncommon scenarios. The default is an empty string and is appropriate for
	// most applications.
	// 
	// +--------------------------------+---------------------------------------------+
	// |            Keyword             |                   Effect                    |
	// +================================+=============================================+
	// | ForceUserAuthRsaSha1           | Force legacy ssh-rsa /SHA-1 signatures for  |
	// |                                | RSA user authentication. Set before         |
	// |                                | connecting.                                 |
	// +--------------------------------+---------------------------------------------+
	// | ProtectFromVpn                 | On Android, bypass an installed or active   |
	// |                                | VPN.                                        |
	// +--------------------------------+---------------------------------------------+
	// | NoSyncDownloadEmptyFiles       | Prevent empty files from being downloaded   |
	// |                                | by SyncTreeDownload .                       |
	// +--------------------------------+---------------------------------------------+
	// | no-weak-mac-algs               | Remove weaker SHA-1, MD5, and RIPEMD-160    |
	// |                                | MAC algorithms from the offered list.       |
	// +--------------------------------+---------------------------------------------+
	// | +ssh-hmac-etm                  | Re-enable OpenSSH Encrypt-then-MAC          |
	// |                                | algorithms disabled by default as a         |
	// |                                | Terrapin mitigation.                        |
	// +--------------------------------+---------------------------------------------+
	// | +chacha20-poly1305@openssh.com | Re-enable chacha20-poly1305@openssh.com ,   |
	// |                                | disabled by default as a Terrapin           |
	// |                                | mitigation.                                 |
	// +--------------------------------+---------------------------------------------+
	// 
	void get_UncommonOptions(CkString &str);
	// Provides comma-separated compatibility, security, and synchronization options
	// for uncommon scenarios. The default is an empty string and is appropriate for
	// most applications.
	// 
	// +--------------------------------+---------------------------------------------+
	// |            Keyword             |                   Effect                    |
	// +================================+=============================================+
	// | ForceUserAuthRsaSha1           | Force legacy ssh-rsa /SHA-1 signatures for  |
	// |                                | RSA user authentication. Set before         |
	// |                                | connecting.                                 |
	// +--------------------------------+---------------------------------------------+
	// | ProtectFromVpn                 | On Android, bypass an installed or active   |
	// |                                | VPN.                                        |
	// +--------------------------------+---------------------------------------------+
	// | NoSyncDownloadEmptyFiles       | Prevent empty files from being downloaded   |
	// |                                | by SyncTreeDownload .                       |
	// +--------------------------------+---------------------------------------------+
	// | no-weak-mac-algs               | Remove weaker SHA-1, MD5, and RIPEMD-160    |
	// |                                | MAC algorithms from the offered list.       |
	// +--------------------------------+---------------------------------------------+
	// | +ssh-hmac-etm                  | Re-enable OpenSSH Encrypt-then-MAC          |
	// |                                | algorithms disabled by default as a         |
	// |                                | Terrapin mitigation.                        |
	// +--------------------------------+---------------------------------------------+
	// | +chacha20-poly1305@openssh.com | Re-enable chacha20-poly1305@openssh.com ,   |
	// |                                | disabled by default as a Terrapin           |
	// |                                | mitigation.                                 |
	// +--------------------------------+---------------------------------------------+
	// 
	const wchar_t *uncommonOptions(void);
	// Provides comma-separated compatibility, security, and synchronization options
	// for uncommon scenarios. The default is an empty string and is appropriate for
	// most applications.
	// 
	// +--------------------------------+---------------------------------------------+
	// |            Keyword             |                   Effect                    |
	// +================================+=============================================+
	// | ForceUserAuthRsaSha1           | Force legacy ssh-rsa /SHA-1 signatures for  |
	// |                                | RSA user authentication. Set before         |
	// |                                | connecting.                                 |
	// +--------------------------------+---------------------------------------------+
	// | ProtectFromVpn                 | On Android, bypass an installed or active   |
	// |                                | VPN.                                        |
	// +--------------------------------+---------------------------------------------+
	// | NoSyncDownloadEmptyFiles       | Prevent empty files from being downloaded   |
	// |                                | by SyncTreeDownload .                       |
	// +--------------------------------+---------------------------------------------+
	// | no-weak-mac-algs               | Remove weaker SHA-1, MD5, and RIPEMD-160    |
	// |                                | MAC algorithms from the offered list.       |
	// +--------------------------------+---------------------------------------------+
	// | +ssh-hmac-etm                  | Re-enable OpenSSH Encrypt-then-MAC          |
	// |                                | algorithms disabled by default as a         |
	// |                                | Terrapin mitigation.                        |
	// +--------------------------------+---------------------------------------------+
	// | +chacha20-poly1305@openssh.com | Re-enable chacha20-poly1305@openssh.com ,   |
	// |                                | disabled by default as a Terrapin           |
	// |                                | mitigation.                                 |
	// +--------------------------------+---------------------------------------------+
	// 
	void put_UncommonOptions(const wchar_t *newVal);

	// Specifies the chunk size, in bytes, used by UploadFile[1] and
	// UploadFileByName[2]. The default is 32000.
	// 
	// If an upload fails because the local operating system aborts the connection, try
	// a smaller value such as 4096. Smaller chunks can reduce throughput.
	// 
	// References:
	// [1] #UploadFile
	// [2] #UploadFileByName
	int get_UploadChunkSize(void);
	// Specifies the chunk size, in bytes, used by UploadFile[1] and
	// UploadFileByName[2]. The default is 32000.
	// 
	// If an upload fails because the local operating system aborts the connection, try
	// a smaller value such as 4096. Smaller chunks can reduce throughput.
	// 
	// References:
	// [1] #UploadFile
	// [2] #UploadFileByName
	void put_UploadChunkSize(int newVal);

	// Contains a user-authentication banner received from the server. Check this
	// property after StartKeyboardAuth[1] or another authentication attempt and
	// display it to the user when appropriate.
	// 
	// When no banner is available, the property returns an empty string.
	// 
	// 
	// References:
	// [1] #StartKeyboardAuth
	void get_UserAuthBanner(CkString &str);
	// Contains a user-authentication banner received from the server. Check this
	// property after StartKeyboardAuth[1] or another authentication attempt and
	// display it to the user when appropriate.
	// 
	// When no banner is available, the property returns an empty string.
	// 
	// 
	// References:
	// [1] #StartKeyboardAuth
	const wchar_t *userAuthBanner(void);
	// Contains a user-authentication banner received from the server. Check this
	// property after StartKeyboardAuth[1] or another authentication attempt and
	// display it to the user when appropriate.
	// 
	// When no banner is available, the property returns an empty string.
	// 
	// 
	// References:
	// [1] #StartKeyboardAuth
	void put_UserAuthBanner(const wchar_t *newVal);

	// Controls the time zone used by date/time getters. When true, returned values
	// are expressed in UTC. When false (the default), returned values are converted
	// to the local time zone.
	// 
	// UtcMode = false: Fri, 21 Nov 1997 09:55:06 -0600
	// UtcMode = true:  Fri, 21 Nov 1997 15:55:06 GMT
	bool get_UtcMode(void);
	// Controls the time zone used by date/time getters. When true, returned values
	// are expressed in UTC. When false (the default), returned values are converted
	// to the local time zone.
	// 
	// UtcMode = false: Fri, 21 Nov 1997 09:55:06 -0600
	// UtcMode = true:  Fri, 21 Nov 1997 15:55:06 GMT
	void put_UtcMode(bool newVal);

	// Contains the current transfer byte count for an upload or download in progress.
	// An application can read this property while an asynchronous transfer is running.
	// 
	// For SyncTreeUpload[1] and SyncTreeDownload[2], the value is cumulative across
	// all files processed by the operation. Use XferByteCount64[3] when a 64-bit count
	// is required.
	// 
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	// [3] #XferByteCount64
	unsigned long get_XferByteCount(void);

	// Contains the current 64-bit transfer byte count for an upload or download in
	// progress. An application can read this property while an asynchronous transfer
	// is running.
	// 
	// For SyncTreeUpload[1] and SyncTreeDownload[2], the value is cumulative across
	// all files processed by the operation.
	// 
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	__int64 get_XferByteCount64(void);



	// ----------------------
	// Methods
	// ----------------------
	// Reads up to maxBytes bytes from the remote file identified by handle and appends
	// them to AccumulateBuffer[1]. The handle must have been returned by OpenFile[2].
	// 
	// Returns the number of bytes appended. Fewer bytes can be returned when
	// end-of-file is reached. Returns -1 if an error occurs.
	// 
	// 
	// References:
	// [1] #AccumulateBuffer
	// [2] #OpenFile
	int AccumulateBytes(const wchar_t *handle, int maxBytes);

	// Creates an asynchronous task to call the AccumulateBytes method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AccumulateBytesAsync(const wchar_t *handle, int maxBytes);

	// Adds two 64-bit integers supplied as decimal strings and returns the sum as a
	// decimal string.
	// 
	// n1 and n2 are useful in environments that cannot represent 64-bit integer values
	// directly.
	// 
	bool Add64(const wchar_t *n1, const wchar_t *n2, CkString &outStr);
	// Adds two 64-bit integers supplied as decimal strings and returns the sum as a
	// decimal string.
	// 
	// n1 and n2 are useful in environments that cannot represent 64-bit integer values
	// directly.
	// 
	const wchar_t *add64(const wchar_t *n1, const wchar_t *n2);

	// Authenticates the connected SSH session using public-key authentication.
	// username identifies the server account, and privateKey must contain the
	// corresponding private key. The matching public key must already be authorized
	// for that account on the server.
	// 
	// Call Connect[1] first. After a failure, inspect AuthFailReason[2] and
	// LastErrorText.
	// 
	// References:
	// [1] #Connect
	// [2] #AuthFailReason
	bool AuthenticatePk(const wchar_t *username, CkSshKeyW &privateKey);

	// Creates an asynchronous task to call the AuthenticatePk method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AuthenticatePkAsync(const wchar_t *username, CkSshKeyW &privateKey);

	// Authenticates the connected SSH session using login and password.
	// 
	// 1. Connect
	// 2. AuthenticatePw or AuthenticatePk
	// 3. InitializeSftp
	// 
	// If the server requests a password change, see PasswordChangeRequested[1]. After
	// a failure, inspect AuthFailReason[2] and LastErrorText.
	// 
	// A rejected password does not necessarily close the SSH connection. The
	// application may retry authentication on the same connected session. After a
	// later success, an older AuthFailReason[2] value can remain populated.
	// 
	// References:
	// [1] #PasswordChangeRequested
	// [2] #AuthFailReason
	bool AuthenticatePw(const wchar_t *login, const wchar_t *password);

	// Creates an asynchronous task to call the AuthenticatePw method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AuthenticatePwAsync(const wchar_t *login, const wchar_t *password);

	// Authenticates with a server that requires both a password and a private key.
	// username identifies the account, password supplies the password, and privateKey
	// supplies the private key.
	// 
	// Most servers require either password or public-key authentication rather than
	// both. After a failure, inspect AuthFailReason[1] and LastErrorText.
	// 
	// References:
	// [1] #AuthFailReason
	bool AuthenticatePwPk(const wchar_t *username, const wchar_t *password, CkSshKeyW &privateKey);

	// Creates an asynchronous task to call the AuthenticatePwPk method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AuthenticatePwPkAsync(const wchar_t *username, const wchar_t *password, CkSshKeyW &privateKey);

	// Works like AuthenticatePw[1], but receives login and password in SecureString
	// objects.
	// 
	// 
	// References:
	// [1] #AuthenticatePw
	bool AuthenticateSecPw(CkSecureStringW &login, CkSecureStringW &password);

	// Creates an asynchronous task to call the AuthenticateSecPw method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AuthenticateSecPwAsync(CkSecureStringW &login, CkSecureStringW &password);

	// Works like AuthenticatePwPk[1], but receives username and password in
	// SecureString objects. privateKey supplies the private key.
	// 
	// 
	// References:
	// [1] #AuthenticatePwPk
	bool AuthenticateSecPwPk(CkSecureStringW &username, CkSecureStringW &password, CkSshKeyW &privateKey);

	// Creates an asynchronous task to call the AuthenticateSecPwPk method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AuthenticateSecPwPkAsync(CkSecureStringW &username, CkSecureStringW &password, CkSshKeyW &privateKey);

	// Removes all bytes from AccumulateBuffer[1]. Call this before starting a new
	// sequence of AccumulateBytes[2] operations.
	// 
	// 
	// References:
	// [1] #AccumulateBuffer
	// [2] #AccumulateBytes
	void ClearAccumulateBuffer(void);

	// Clears the internal remote file-attribute cache used when EnableCache[1] is
	// true.
	// 
	// 
	// References:
	// [1] #EnableCache
	void ClearCache(void);

	// Clears the in-memory text stored in SessionLog[1].
	// 
	// 
	// References:
	// [1] #SessionLog
	void ClearSessionLog(void);

	// Closes the remote file or directory handle specified by handle. The handle must
	// have been returned by OpenFile[1] or OpenDir[2].
	// 
	// Handles are specific to one initialized SFTP session. Close each handle exactly
	// once. Closing an empty, invalid, or already-closed handle returns false. A
	// handle must never be reused after disconnecting or replacing the connection.
	// 
	// References:
	// [1] #OpenFile
	// [2] #OpenDir
	bool CloseHandle(const wchar_t *handle);

	// Creates an asynchronous task to call the CloseHandle method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CloseHandleAsync(const wchar_t *handle);

	// Establishes an SSH connection to domainName on TCP port port. The host may be a
	// DNS name or numeric IPv4 or IPv6 address; SSH servers commonly listen on port
	// 22.
	// 
	// A successful connection establishes the SSH transport only. Next call an
	// authentication method, then call InitializeSftp[1].
	// 1. Connect
	// 2. AuthenticatePw, AuthenticatePk, or another authentication method
	// 3. InitializeSftp
	// 4. Perform SFTP operations
	// 
	// Supported negotiation algorithms include:
	// 
	// +--------------+---------------------------------------------------------------+
	// |   Category   |                          Algorithms                           |
	// +==============+===============================================================+
	// | Host key     | ssh-ed25519 , rsa-sha2-256 , rsa-sha2-512 ,                   |
	// |              | ecdsa-sha2-nistp256 , ecdsa-sha2-nistp384 ,                   |
	// |              | ecdsa-sha2-nistp521 , ssh-rsa , ssh-dss                       |
	// +--------------+---------------------------------------------------------------+
	// | Key exchange | curve25519-sha256 , curve25519-sha256@libssh.org , NIST ECDH, |
	// |              | Diffie-Hellman group 1/14/16/18, and group-exchange           |
	// |              | SHA-1/SHA-256                                                 |
	// +--------------+---------------------------------------------------------------+
	// | Ciphers      | AES CTR/CBC/GCM, Twofish CBC, Blowfish CBC, and optionally    |
	// |              | chacha20-poly1305@openssh.com                                 |
	// +--------------+---------------------------------------------------------------+
	// | MAC          | SHA-2, SHA-1, RIPEMD-160, MD5, and optionally OpenSSH         |
	// |              | Encrypt-then-MAC variants                                     |
	// +--------------+---------------------------------------------------------------+
	// | Compression  | none , zlib , and zlib@openssh.com                            |
	// +--------------+---------------------------------------------------------------+
	// 
	// Connection failures can occur before SSH negotiation because of firewalls,
	// endpoint security, routing, network ACLs, proxy configuration, or server policy.
	// Calling while connected: A new successful Connect replaces the existing SSH
	// connection. The previous SFTP subsystem and all handles from it are no longer
	// usable. Authenticate and call InitializeSftp[1] for the new connection.
	// 
	// References:
	// [1] #InitializeSftp
	bool Connect(const wchar_t *domainName, int port);

	// Creates an asynchronous task to call the Connect method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ConnectAsync(const wchar_t *domainName, int port);

	// Connects to hostname on port through the already connected and authenticated Ssh
	// object in sshConn.
	// 
	// application  →  first SSH server  →  destination SSH/SFTP server
	// 
	// After this method succeeds, authenticate separately with the destination server
	// and call InitializeSftp. All destination traffic is carried through the first
	// SSH connection.
	// 
	bool ConnectThroughSsh(CkSshW &sshConn, const wchar_t *hostname, int port);

	// Creates an asynchronous task to call the ConnectThroughSsh method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ConnectThroughSshAsync(CkSshW &sshConn, const wchar_t *hostname, int port);

	// Continues keyboard-interactive authentication by submitting response for the
	// prompts returned by StartKeyboardAuth[1].
	// 
	// For a single prompt, pass the response text directly. For multiple prompts, pass
	// XML in this form:
	// 
	// <response>
	//   <response1>response to first prompt</response1>
	//   <response2>response to second prompt</response2>
	//   ...
	// </response>
	// 
	// The returned XML indicates authentication success, authentication failure, or
	// another infoRequest containing additional prompts.
	// 
	// <success>success message</success>
	// 
	// <error>error message</error>
	// 
	// References:
	// [1] #StartKeyboardAuth
	bool ContinueKeyboardAuth(const wchar_t *response, CkString &outStr);
	// Continues keyboard-interactive authentication by submitting response for the
	// prompts returned by StartKeyboardAuth[1].
	// 
	// For a single prompt, pass the response text directly. For multiple prompts, pass
	// XML in this form:
	// 
	// <response>
	//   <response1>response to first prompt</response1>
	//   <response2>response to second prompt</response2>
	//   ...
	// </response>
	// 
	// The returned XML indicates authentication success, authentication failure, or
	// another infoRequest containing additional prompts.
	// 
	// <success>success message</success>
	// 
	// <error>error message</error>
	// 
	// References:
	// [1] #StartKeyboardAuth
	const wchar_t *continueKeyboardAuth(const wchar_t *response);

	// Creates an asynchronous task to call the ContinueKeyboardAuth method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ContinueKeyboardAuthAsync(const wchar_t *response);

	// Copies supported timestamps and attributes from the local file at localFilename
	// to the remote item identified by remoteFilename.
	// 
	// Set isHandle to true when remoteFilename contains an open SFTP handle;
	// otherwise set it to false for a remote path.
	// 
	// +--------------------+---------------------------------------------------------+
	// |  Negotiated SFTP   |                    Attributes copied                    |
	// |      version       |                                                         |
	// +====================+=========================================================+
	// | SFTP v3 and        | Last-modified time and last-access time                 |
	// | earlier            |                                                         |
	// +--------------------+---------------------------------------------------------+
	// | SFTP v4 and v5     | Last-modified time, last-access time, and creation time |
	// +--------------------+---------------------------------------------------------+
	// | SFTP v6 and later  | The preceding timestamps plus read-only, hidden,        |
	// |                    | archive, compressed, and encrypted flags                |
	// +--------------------+---------------------------------------------------------+
	// 
	// The remote server and filesystem determine whether all requested attributes can
	// be applied. Last-access time may change when the server accesses the file, and
	// compressed or encrypted flags may not have the same effect on every server.
	bool CopyFileAttr(const wchar_t *localFilename, const wchar_t *remoteFilename, bool isHandle);

	// Creates an asynchronous task to call the CopyFileAttr method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CopyFileAttrAsync(const wchar_t *localFilename, const wchar_t *remoteFilename, bool isHandle);

	// Creates the remote directory specified by path. Parent directories are not
	// necessarily created automatically.
	// 
	bool CreateDir(const wchar_t *path);

	// Creates an asynchronous task to call the CreateDir method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CreateDirAsync(const wchar_t *path);

	// Closes the current SSH/SFTP connection. All remote file and directory handles
	// from that session become invalid and must not be reused.
	// 
	// The object remains reusable. A later session must call Connect[1], authenticate
	// again, and call InitializeSftp[2] before performing SFTP operations.
	// 
	// Some properties retain values from the previous session after disconnect,
	// including the negotiated protocol version, server identifier, and last SFTP
	// status. Treat these as historical values rather than evidence of a live session.
	// 
	// References:
	// [1] #Connect
	// [2] #InitializeSftp
	void Disconnect(void);

	// Downloads the remote file at remoteFilePath and appends its bytes to binData.
	// 
	// Existing data in binData is preserved. Clear it first when replacement rather
	// than append behavior is required.
	bool DownloadBd(const wchar_t *remoteFilePath, CkBinDataW &binData);

	// Creates an asynchronous task to call the DownloadBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadBdAsync(const wchar_t *remoteFilePath, CkBinDataW &binData);

	// Streams the remote file identified by handle to the local filesystem path
	// toFilename. The handle must have been returned by OpenFile[1].
	// 
	// The transfer is streamed and is not limited by available memory. Close the
	// remote handle when the download is complete.
	// 
	// This method downloads the entire remote file beginning at byte offset 0. It does
	// not begin at the handle's current sequential read position.
	// 
	// References:
	// [1] #OpenFile
	bool DownloadFile(const wchar_t *handle, const wchar_t *toFilename);

	// Creates an asynchronous task to call the DownloadFile method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadFileAsync(const wchar_t *handle, const wchar_t *toFilename);

	// Downloads the remote file at remoteFilePath to the local filesystem path
	// localFilePath.
	// 
	// When PreserveDate[1] is true, Chilkat preserves the remote file's
	// last-modified time.
	// 
	// An absolute remote path begins with / and is relative to the server filesystem
	// root. A relative path is interpreted relative to the authenticated user's home
	// directory.
	// If the local destination file exists, it is truncated before the download.
	// 
	// References:
	// [1] #PreserveDate
	bool DownloadFileByName(const wchar_t *remoteFilePath, const wchar_t *localFilePath);

	// Creates an asynchronous task to call the DownloadFileByName method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadFileByNameAsync(const wchar_t *remoteFilePath, const wchar_t *localFilePath);

	// Downloads the remote file at remoteFilePath, decodes it using charset, and
	// appends the text to sb.
	// 
	// Existing text in sb is preserved. Clear it first when replacement rather than
	// append behavior is required.
	bool DownloadSb(const wchar_t *remoteFilePath, const wchar_t *charset, CkStringBuilderW &sb);

	// Creates an asynchronous task to call the DownloadSb method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DownloadSbAsync(const wchar_t *remoteFilePath, const wchar_t *charset, CkStringBuilderW &sb);

	// Returns true when the most recent read for handle received the SFTP
	// end-of-file status.
	// 
	// Reading exactly through the final byte does not set EOF immediately. The next
	// read returns successfully with zero bytes, sets LastStatusCode[1] to SSH_FX_EOF,
	// and causes this method to return true.
	// 
	// An empty, malformed, or already-closed handle can also cause this method to
	// return true. Use LastReadFailed[2] and the read method's result to distinguish
	// a normal EOF from a handle or read failure.
	// 
	// References:
	// [1] #LastStatusCode
	// [2] #LastReadFailed
	bool Eof(const wchar_t *handle);

	// Checks the remote item at remotePath. When followLinks is true, a symbolic
	// link is followed and the target type is returned.
	// 
	// +-------------+----------------------------------------------------------------+
	// |   Return    |                            Meaning                             |
	// |    value    |                                                                |
	// +=============+================================================================+
	// | -1          | Unable to determine the result. Inspect LastErrorText .        |
	// +-------------+----------------------------------------------------------------+
	// | 0           | The path does not exist.                                       |
	// +-------------+----------------------------------------------------------------+
	// | 1           | A regular file exists.                                         |
	// +-------------+----------------------------------------------------------------+
	// | 2           | A directory exists.                                            |
	// +-------------+----------------------------------------------------------------+
	// | 3           | A symbolic link exists. This is possible only when followLinks |
	// |             | is false.                                                    |
	// +-------------+----------------------------------------------------------------+
	// | 4           | A special filesystem entry exists.                             |
	// +-------------+----------------------------------------------------------------+
	// | 5           | An entry of unknown type exists.                               |
	// +-------------+----------------------------------------------------------------+
	// | 6           | A socket exists.                                               |
	// +-------------+----------------------------------------------------------------+
	// | 7           | A character device exists.                                     |
	// +-------------+----------------------------------------------------------------+
	// | 8           | A block device exists.                                         |
	// +-------------+----------------------------------------------------------------+
	// | 9           | A FIFO exists.                                                 |
	// +-------------+----------------------------------------------------------------+
	// 
	// Positive values correspond to SFTP filesystem entry types. Some types are
	// platform-dependent.
	// For a dangling symbolic link, followLinks = false returns 3 for the link
	// itself, while followLinks = true returns 0 because the target does not exist.
	int FileExists(const wchar_t *remotePath, bool followLinks);

	// Creates an asynchronous task to call the FileExists method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FileExistsAsync(const wchar_t *remotePath, bool followLinks);

	// Requests that the server flush pending data for the open file identified by
	// handle to stable storage.
	// 
	// This method uses the OpenSSH fsync@openssh.com extension and succeeds only when
	// the server supports that extension.
	bool Fsync(const wchar_t *handle);

	// Creates an asynchronous task to call the Fsync method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FsyncAsync(const wchar_t *handle);

	// Deprecated: Use GetFileCreateTimeStr[1] instead.
	// 
	// Returns the remote file's creation date and time. pathOrHandle may contain a
	// remote path or a handle returned by OpenFile[2]. Set bIsHandle to true for a
	// handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// SFTP v3 and earlier do not provide a file creation time.
	// 
	// References:
	// [1] #GetFileCreateTimeStr
	// [2] #OpenFile
	// The caller is responsible for deleting the object returned by this method.
	CkDateTimeW *GetFileCreateDt(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Creates an asynchronous task to call the GetFileCreateDt method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetFileCreateDtAsync(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Returns the remote file's creation date and time. pathOrHandle may contain a
	// remote path or a handle returned by OpenFile[1]. Set bIsHandle to true for a
	// handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// SFTP v3 and earlier do not provide a file creation time.
	// 
	// The result is an RFC 822 formatted string, for example Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// 
	// References:
	// [1] #OpenFile
	bool GetFileCreateTimeStr(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle, CkString &outStr);
	// Returns the remote file's creation date and time. pathOrHandle may contain a
	// remote path or a handle returned by OpenFile[1]. Set bIsHandle to true for a
	// handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// SFTP v3 and earlier do not provide a file creation time.
	// 
	// The result is an RFC 822 formatted string, for example Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// 
	// References:
	// [1] #OpenFile
	const wchar_t *getFileCreateTimeStr(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);
	// Returns the remote file's creation date and time. pathOrHandle may contain a
	// remote path or a handle returned by OpenFile[1]. Set bIsHandle to true for a
	// handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// SFTP v3 and earlier do not provide a file creation time.
	// 
	// The result is an RFC 822 formatted string, for example Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// 
	// References:
	// [1] #OpenFile
	const wchar_t *fileCreateTimeStr(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Creates an asynchronous task to call the GetFileCreateTimeStr method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetFileCreateTimeStrAsync(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Returns the remote file's group ownership. pathOrHandle may contain a remote
	// path or a handle returned by OpenFile[1]. Set bIsHandle to true for a handle
	// and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// With SFTP v3 and earlier, the result is the decimal numeric GID because textual
	// group names are not supported.
	// 
	// References:
	// [1] #OpenFile
	bool GetFileGroup(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle, CkString &outStr);
	// Returns the remote file's group ownership. pathOrHandle may contain a remote
	// path or a handle returned by OpenFile[1]. Set bIsHandle to true for a handle
	// and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// With SFTP v3 and earlier, the result is the decimal numeric GID because textual
	// group names are not supported.
	// 
	// References:
	// [1] #OpenFile
	const wchar_t *getFileGroup(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);
	// Returns the remote file's group ownership. pathOrHandle may contain a remote
	// path or a handle returned by OpenFile[1]. Set bIsHandle to true for a handle
	// and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// With SFTP v3 and earlier, the result is the decimal numeric GID because textual
	// group names are not supported.
	// 
	// References:
	// [1] #OpenFile
	const wchar_t *fileGroup(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Creates an asynchronous task to call the GetFileGroup method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetFileGroupAsync(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Deprecated: Use GetFileLastAccessStr[1] instead.
	// 
	// Returns the remote file's last-access date and time. pathOrHandle may contain a
	// remote path or a handle returned by OpenFile[2]. Set bIsHandle to true for a
	// handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// 
	// References:
	// [1] #GetFileLastAccessStr
	// [2] #OpenFile
	// The caller is responsible for deleting the object returned by this method.
	CkDateTimeW *GetFileLastAccessDt(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Creates an asynchronous task to call the GetFileLastAccessDt method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetFileLastAccessDtAsync(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Returns the remote file's last-access date and time. pathOrHandle may contain a
	// remote path or a handle returned by OpenFile[1]. Set bIsHandle to true for a
	// handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// The result is an RFC 822 formatted string, for example Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// 
	// References:
	// [1] #OpenFile
	bool GetFileLastAccessStr(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle, CkString &outStr);
	// Returns the remote file's last-access date and time. pathOrHandle may contain a
	// remote path or a handle returned by OpenFile[1]. Set bIsHandle to true for a
	// handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// The result is an RFC 822 formatted string, for example Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// 
	// References:
	// [1] #OpenFile
	const wchar_t *getFileLastAccessStr(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);
	// Returns the remote file's last-access date and time. pathOrHandle may contain a
	// remote path or a handle returned by OpenFile[1]. Set bIsHandle to true for a
	// handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// The result is an RFC 822 formatted string, for example Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// 
	// References:
	// [1] #OpenFile
	const wchar_t *fileLastAccessStr(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Creates an asynchronous task to call the GetFileLastAccessStr method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetFileLastAccessStrAsync(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Deprecated: Use GetFileLastModifiedStr[1] instead.
	// 
	// Returns the remote file's last-modified date and time. pathOrHandle may contain
	// a remote path or a handle returned by OpenFile[2]. Set bIsHandle to true for a
	// handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// 
	// References:
	// [1] #GetFileLastModifiedStr
	// [2] #OpenFile
	// The caller is responsible for deleting the object returned by this method.
	CkDateTimeW *GetFileLastModifiedDt(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Creates an asynchronous task to call the GetFileLastModifiedDt method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetFileLastModifiedDtAsync(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Returns the remote file's last-modified date and time. pathOrHandle may contain
	// a remote path or a handle returned by OpenFile[1]. Set bIsHandle to true for a
	// handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// The result is an RFC 822 formatted string, for example Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// 
	// References:
	// [1] #OpenFile
	bool GetFileLastModifiedStr(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle, CkString &outStr);
	// Returns the remote file's last-modified date and time. pathOrHandle may contain
	// a remote path or a handle returned by OpenFile[1]. Set bIsHandle to true for a
	// handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// The result is an RFC 822 formatted string, for example Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// 
	// References:
	// [1] #OpenFile
	const wchar_t *getFileLastModifiedStr(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);
	// Returns the remote file's last-modified date and time. pathOrHandle may contain
	// a remote path or a handle returned by OpenFile[1]. Set bIsHandle to true for a
	// handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// The result is an RFC 822 formatted string, for example Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// 
	// References:
	// [1] #OpenFile
	const wchar_t *fileLastModifiedStr(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Creates an asynchronous task to call the GetFileLastModifiedStr method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetFileLastModifiedStrAsync(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Returns the remote file's owner. pathOrHandle may contain a remote path or a
	// handle returned by OpenFile[1]. Set bIsHandle to true for a handle and false
	// for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// With SFTP v3 and earlier, the result is the decimal numeric UID because textual
	// owner names are not supported.
	// 
	// References:
	// [1] #OpenFile
	bool GetFileOwner(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle, CkString &outStr);
	// Returns the remote file's owner. pathOrHandle may contain a remote path or a
	// handle returned by OpenFile[1]. Set bIsHandle to true for a handle and false
	// for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// With SFTP v3 and earlier, the result is the decimal numeric UID because textual
	// owner names are not supported.
	// 
	// References:
	// [1] #OpenFile
	const wchar_t *getFileOwner(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);
	// Returns the remote file's owner. pathOrHandle may contain a remote path or a
	// handle returned by OpenFile[1]. Set bIsHandle to true for a handle and false
	// for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// With SFTP v3 and earlier, the result is the decimal numeric UID because textual
	// owner names are not supported.
	// 
	// References:
	// [1] #OpenFile
	const wchar_t *fileOwner(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Creates an asynchronous task to call the GetFileOwner method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetFileOwnerAsync(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Returns the remote item's complete POSIX mode value. pathOrHandle may contain a
	// remote path or a handle returned by OpenFile[1]. Set bIsHandle to true for a
	// handle and false for a path. When bFollowLinks is true, the server follows a
	// symbolic link and returns metadata for its target.
	// 
	// The returned integer includes both the file-type bits and permission bits. For
	// example:
	// 
	// Regular file, mode 0664: octal 0100664, decimal 33204
	// Regular file, mode 0600: octal 0100600, decimal 33152
	// Regular file, mode 0644: octal 0100644, decimal 33188
	// 
	// Mask with octal 07777 to obtain permission and special bits, or 0777 for only
	// the traditional owner/group/other read, write, and execute bits. See
	// SetPermissions[2] to change the permissions.
	// 
	// 
	// References:
	// [1] #OpenFile
	// [2] #SetPermissions
	int GetFilePermissions(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Creates an asynchronous task to call the GetFilePermissions method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetFilePermissionsAsync(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Returns the remote file's size in bytes as a 32-bit integer. pathOrHandle may
	// contain a remote path or a handle returned by OpenFile[1]. Set bIsHandle to
	// true for a handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// Returns -1 when the size cannot be represented as a 32-bit integer. Use
	// GetFileSize64 or GetFileSizeStr for large files.
	// 
	// References:
	// [1] #OpenFile
	int GetFileSize32(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Creates an asynchronous task to call the GetFileSize32 method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetFileSize32Async(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Returns the remote file's size in bytes as a 64-bit integer. pathOrHandle may
	// contain a remote path or a handle returned by OpenFile[1]. Set bIsHandle to
	// true for a handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// 
	// References:
	// [1] #OpenFile
	__int64 GetFileSize64(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Creates an asynchronous task to call the GetFileSize64 method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetFileSize64Async(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Returns the remote file's size in bytes as a decimal string. pathOrHandle may
	// contain a remote path or a handle returned by OpenFile[1]. Set bIsHandle to
	// true for a handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// 
	// References:
	// [1] #OpenFile
	bool GetFileSizeStr(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle, CkString &outStr);
	// Returns the remote file's size in bytes as a decimal string. pathOrHandle may
	// contain a remote path or a handle returned by OpenFile[1]. Set bIsHandle to
	// true for a handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// 
	// References:
	// [1] #OpenFile
	const wchar_t *getFileSizeStr(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);
	// Returns the remote file's size in bytes as a decimal string. pathOrHandle may
	// contain a remote path or a handle returned by OpenFile[1]. Set bIsHandle to
	// true for a handle and false for a path.
	// 
	// When bFollowLinks is true, the server follows a symbolic link and returns
	// metadata for its target.
	// 
	// 
	// References:
	// [1] #OpenFile
	const wchar_t *fileSizeStr(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Creates an asynchronous task to call the GetFileSizeStr method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetFileSizeStrAsync(const wchar_t *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// Returns the connected server's host-key fingerprint using hashAlg. Common
	// choices include SHA256, SHA384, SHA512, SHA1, and MD5.
	// 
	// +----------------+-----------------+-----------------------------------------------------+
	// | includeKeyType | includeHashName |                   Example format                    |
	// +================+=================+=====================================================+
	// | true         | true          | ssh-rsa                                             |
	// |                |                 | SHA256:L7sQgnpnoBwRoyIYXAFBs8SdSnwtyYmhXs1p/mQDK... |
	// +----------------+-----------------+-----------------------------------------------------+
	// | true         | false         | ssh-rsa                                             |
	// |                |                 | L7sQgnpnoBwRoyIYXAFBs8SdSnwtyYmhXs1p/mQDK...        |
	// +----------------+-----------------+-----------------------------------------------------+
	// | false        | true          | SHA256:L7sQgnpnoBwRoyIYXAFBs8SdSnwtyYmhXs1p/mQDK... |
	// +----------------+-----------------+-----------------------------------------------------+
	// | false        | false         | L7sQgnpnoBwRoyIYXAFBs8SdSnwtyYmhXs1p/mQDK...        |
	// +----------------+-----------------+-----------------------------------------------------+
	// 
	// For server identity verification, compare a SHA-256 fingerprint with a value
	// obtained from a trusted source before sending credentials.
	bool GetHostKeyFP(const wchar_t *hashAlg, bool includeKeyType, bool includeHashName, CkString &outStr);
	// Returns the connected server's host-key fingerprint using hashAlg. Common
	// choices include SHA256, SHA384, SHA512, SHA1, and MD5.
	// 
	// +----------------+-----------------+-----------------------------------------------------+
	// | includeKeyType | includeHashName |                   Example format                    |
	// +================+=================+=====================================================+
	// | true         | true          | ssh-rsa                                             |
	// |                |                 | SHA256:L7sQgnpnoBwRoyIYXAFBs8SdSnwtyYmhXs1p/mQDK... |
	// +----------------+-----------------+-----------------------------------------------------+
	// | true         | false         | ssh-rsa                                             |
	// |                |                 | L7sQgnpnoBwRoyIYXAFBs8SdSnwtyYmhXs1p/mQDK...        |
	// +----------------+-----------------+-----------------------------------------------------+
	// | false        | true          | SHA256:L7sQgnpnoBwRoyIYXAFBs8SdSnwtyYmhXs1p/mQDK... |
	// +----------------+-----------------+-----------------------------------------------------+
	// | false        | false         | L7sQgnpnoBwRoyIYXAFBs8SdSnwtyYmhXs1p/mQDK...        |
	// +----------------+-----------------+-----------------------------------------------------+
	// 
	// For server identity verification, compare a SHA-256 fingerprint with a value
	// obtained from a trusted source before sending credentials.
	const wchar_t *getHostKeyFP(const wchar_t *hashAlg, bool includeKeyType, bool includeHashName);
	// Returns the connected server's host-key fingerprint using hashAlg. Common
	// choices include SHA256, SHA384, SHA512, SHA1, and MD5.
	// 
	// +----------------+-----------------+-----------------------------------------------------+
	// | includeKeyType | includeHashName |                   Example format                    |
	// +================+=================+=====================================================+
	// | true         | true          | ssh-rsa                                             |
	// |                |                 | SHA256:L7sQgnpnoBwRoyIYXAFBs8SdSnwtyYmhXs1p/mQDK... |
	// +----------------+-----------------+-----------------------------------------------------+
	// | true         | false         | ssh-rsa                                             |
	// |                |                 | L7sQgnpnoBwRoyIYXAFBs8SdSnwtyYmhXs1p/mQDK...        |
	// +----------------+-----------------+-----------------------------------------------------+
	// | false        | true          | SHA256:L7sQgnpnoBwRoyIYXAFBs8SdSnwtyYmhXs1p/mQDK... |
	// +----------------+-----------------+-----------------------------------------------------+
	// | false        | false         | L7sQgnpnoBwRoyIYXAFBs8SdSnwtyYmhXs1p/mQDK...        |
	// +----------------+-----------------+-----------------------------------------------------+
	// 
	// For server identity verification, compare a SHA-256 fingerprint with a value
	// obtained from a trusted source before sending credentials.
	const wchar_t *hostKeyFP(const wchar_t *hashAlg, bool includeKeyType, bool includeHashName);

	// Populates json with supplemental details produced by the most recent method when
	// such details are available. Many methods do not produce additional JSON
	// information.
	// 
	void GetLastJsonData(CkJsonObjectW &json);

	// Appends to strTab the relative paths processed by the most recent
	// SyncTreeUpload[1] or SyncTreeDownload[2] operation.
	// 
	// For downloads, entries can include local directories that were created.
	// Directory paths end with / so they can be distinguished from file paths.
	// 
	// Existing entries in strTab are preserved.
	// Clear strTab first when only the latest synchronization results are wanted.
	// Downloaded directory entries are reported with a trailing /; uploaded directory
	// entries are reported without one.
	// 
	// References:
	// [1] #SyncTreeUpload
	// [2] #SyncTreeDownload
	void GetSyncedFiles(CkStringTableW &strTab);

	// Creates a hard link from newPath to the existing remote file at oldPath.
	// 
	// This method uses the OpenSSH hardlink@openssh.com extension and succeeds only
	// when the server supports that extension.
	// A successful hard link refers to the same underlying file. Modifying the
	// existing file through either path changes the content observed through the other
	// path.
	bool HardLink(const wchar_t *oldPath, const wchar_t *newPath);

	// Creates an asynchronous task to call the HardLink method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *HardLinkAsync(const wchar_t *oldPath, const wchar_t *newPath);

	// Opens the SFTP subsystem and negotiates the SFTP protocol version. Call this
	// method after connecting and authenticating.
	// 
	// 1. Connect
	// 2. AuthenticatePw, AuthenticatePk, or another authentication method
	// 3. InitializeSftp
	// 
	// After success, read ProtocolVersion[1] to determine the negotiated SFTP version.
	// 
	// If opening the SFTP channel fails, inspect InitializeFailCode[2],
	// InitializeFailReason[3], and LastErrorText.
	// Call this method only once for a given SSH connection. A second call on the same
	// connection returns false. After disconnecting or replacing the connection,
	// authenticate the new connection and call this method again.
	// 
	// References:
	// [1] #ProtocolVersion
	// [2] #InitializeFailCode
	// [3] #InitializeFailReason
	bool InitializeSftp(void);

	// Creates an asynchronous task to call the InitializeSftp method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *InitializeSftpAsync(void);

	// Deprecated: Use GetLastJsonData[1] instead.
	// 
	// Returns a JsonObject containing supplemental details produced by the most recent
	// method when such details are available. Many methods do not produce additional
	// JSON information.
	// 
	// 
	// References:
	// [1] #GetLastJsonData
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObjectW *LastJsonData(void);

	// Returns true if the most recent read associated with handle failed; otherwise
	// returns false.
	// 
	// A normal end-of-file is not a read failure: the EOF read succeeds, returns zero
	// bytes, and this method returns false. For an empty, malformed, or
	// already-closed handle, this method returns true.
	// 
	bool LastReadFailed(const wchar_t *handle);

	// Returns the number of bytes received by the most recent read associated with
	// handle.
	// 
	// The initial value for a newly opened handle is 0. A normal EOF read and a failed
	// read report 0.
	// 
	int LastReadNumBytes(const wchar_t *handle);

	// Loads this object from the caller state associated with the completed
	// asynchronous task.
	// 
	// Use the same object type that originally started the asynchronous operation.
	bool LoadTaskCaller(CkTaskW &task);

	// Opens the remote directory specified by path and returns a handle for reading
	// its entries.
	// 
	// handle = OpenDir(path)
	// ReadDirListing(handle, dirObj)
	// CloseHandle(handle)
	// 
	// Remote paths use / as the separator. A path beginning with / is absolute; a
	// relative path is interpreted relative to the authenticated user's home
	// directory. An empty path refers to that default directory.
	// 
	// This method does not change a working directory. SFTP is not FTP and has no
	// persistent current-directory command.
	bool OpenDir(const wchar_t *path, CkString &outStr);
	// Opens the remote directory specified by path and returns a handle for reading
	// its entries.
	// 
	// handle = OpenDir(path)
	// ReadDirListing(handle, dirObj)
	// CloseHandle(handle)
	// 
	// Remote paths use / as the separator. A path beginning with / is absolute; a
	// relative path is interpreted relative to the authenticated user's home
	// directory. An empty path refers to that default directory.
	// 
	// This method does not change a working directory. SFTP is not FTP and has no
	// persistent current-directory command.
	const wchar_t *openDir(const wchar_t *path);

	// Creates an asynchronous task to call the OpenDir method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *OpenDirAsync(const wchar_t *path);

	// Opens or creates the remote file at remotePath and returns a handle for
	// subsequent read or write operations. Close the handle with CloseHandle when
	// finished.
	// 
	// access must be readOnly, writeOnly, or readWrite.
	// 
	// createDisposition is a comma-separated list. It must contain exactly one primary
	// disposition:
	// 
	// +---------------------+--------------------------------------------------------+
	// | Primary disposition |                        Behavior                        |
	// +=====================+========================================================+
	// | createNew           | Create a new file; fail if it already exists.          |
	// +---------------------+--------------------------------------------------------+
	// | createTruncate      | Create a new file, or open and truncate an existing    |
	// |                     | file.                                                  |
	// +---------------------+--------------------------------------------------------+
	// | openExisting        | Open an existing file; fail if it does not exist.      |
	// +---------------------+--------------------------------------------------------+
	// | openOrCreate        | Open the file if it exists, otherwise create it.       |
	// +---------------------+--------------------------------------------------------+
	// | truncateExisting    | Open and truncate an existing file; fail if it does    |
	// |                     | not exist.                                             |
	// +---------------------+--------------------------------------------------------+
	// 
	// Additional optional keywords are:
	// 
	// +----------------------+-------------------------------------------------------+
	// |        Option        |                       Behavior                        |
	// +======================+=======================================================+
	// | appendData           | Write at the end of the file. Appends are not         |
	// |                      | guaranteed to be atomic.                              |
	// +----------------------+-------------------------------------------------------+
	// | appendDataAtomic     | Append atomically so concurrent appenders do not      |
	// |                      | collide. SFTP v5 or later.                            |
	// +----------------------+-------------------------------------------------------+
	// | textMode             | Request server text-mode processing and canonical     |
	// |                      | newline conversion. SFTP v5 or later.                 |
	// +----------------------+-------------------------------------------------------+
	// | blockRead            | Request exclusive read access. SFTP v5 or later.      |
	// +----------------------+-------------------------------------------------------+
	// | blockWrite           | Request exclusive write access. SFTP v5 or later.     |
	// +----------------------+-------------------------------------------------------+
	// | blockDelete          | Prevent deletion while the handle is open. SFTP v5 or |
	// |                      | later.                                                |
	// +----------------------+-------------------------------------------------------+
	// | blockAdvisory        | Make the requested block modes advisory. SFTP v5 or   |
	// |                      | later.                                                |
	// +----------------------+-------------------------------------------------------+
	// | noFollow             | Fail if the final path component is a symbolic link.  |
	// |                      | SFTP v5 or later.                                     |
	// +----------------------+-------------------------------------------------------+
	// | deleteOnClose        | Request deletion when the last handle is closed. SFTP |
	// |                      | v5 or later.                                          |
	// +----------------------+-------------------------------------------------------+
	// | accessAuditAlarmInfo | Request privileges needed to read or write AUDIT or   |
	// |                      | ALARM ACL entries. SFTP v5 or later.                  |
	// +----------------------+-------------------------------------------------------+
	// | accessBackup         | Request backup/restore privileges that may bypass     |
	// |                      | normal access checks. SFTP v5 or later.               |
	// +----------------------+-------------------------------------------------------+
	// | backupStream         | Read or write a server-specific backup stream. SFTP   |
	// |                      | v5 or later.                                          |
	// +----------------------+-------------------------------------------------------+
	// 
	// Options marked SFTP v5 or later require ForceV3[1] to be false and a
	// negotiated ProtocolVersion[2] of at least 5.
	// An absolute remote path begins with /. A relative path is interpreted from the
	// authenticated user's home directory. Some servers require a filename in the home
	// directory to be written as./filename.
	// Use only documented values: Some servers or Chilkat versions may tolerate an
	// unknown access value, an unknown option, or conflicting primary dispositions,
	// but the resulting behavior is unspecified. Supply one documented access value
	// and exactly one primary disposition.
	// appendData forces writes to the end of the file, including explicit-offset
	// writes. By itself it opens an existing file but does not create a missing file;
	// combine it with an appropriate primary disposition when creation is required.
	// Options defined for SFTP v5 or later must not be assumed to take effect when an
	// older version is negotiated, even if the open request succeeds.
	// 
	// References:
	// [1] #ForceV3
	// [2] #ProtocolVersion
	bool OpenFile(const wchar_t *remotePath, const wchar_t *access, const wchar_t *createDisposition, CkString &outStr);
	// Opens or creates the remote file at remotePath and returns a handle for
	// subsequent read or write operations. Close the handle with CloseHandle when
	// finished.
	// 
	// access must be readOnly, writeOnly, or readWrite.
	// 
	// createDisposition is a comma-separated list. It must contain exactly one primary
	// disposition:
	// 
	// +---------------------+--------------------------------------------------------+
	// | Primary disposition |                        Behavior                        |
	// +=====================+========================================================+
	// | createNew           | Create a new file; fail if it already exists.          |
	// +---------------------+--------------------------------------------------------+
	// | createTruncate      | Create a new file, or open and truncate an existing    |
	// |                     | file.                                                  |
	// +---------------------+--------------------------------------------------------+
	// | openExisting        | Open an existing file; fail if it does not exist.      |
	// +---------------------+--------------------------------------------------------+
	// | openOrCreate        | Open the file if it exists, otherwise create it.       |
	// +---------------------+--------------------------------------------------------+
	// | truncateExisting    | Open and truncate an existing file; fail if it does    |
	// |                     | not exist.                                             |
	// +---------------------+--------------------------------------------------------+
	// 
	// Additional optional keywords are:
	// 
	// +----------------------+-------------------------------------------------------+
	// |        Option        |                       Behavior                        |
	// +======================+=======================================================+
	// | appendData           | Write at the end of the file. Appends are not         |
	// |                      | guaranteed to be atomic.                              |
	// +----------------------+-------------------------------------------------------+
	// | appendDataAtomic     | Append atomically so concurrent appenders do not      |
	// |                      | collide. SFTP v5 or later.                            |
	// +----------------------+-------------------------------------------------------+
	// | textMode             | Request server text-mode processing and canonical     |
	// |                      | newline conversion. SFTP v5 or later.                 |
	// +----------------------+-------------------------------------------------------+
	// | blockRead            | Request exclusive read access. SFTP v5 or later.      |
	// +----------------------+-------------------------------------------------------+
	// | blockWrite           | Request exclusive write access. SFTP v5 or later.     |
	// +----------------------+-------------------------------------------------------+
	// | blockDelete          | Prevent deletion while the handle is open. SFTP v5 or |
	// |                      | later.                                                |
	// +----------------------+-------------------------------------------------------+
	// | blockAdvisory        | Make the requested block modes advisory. SFTP v5 or   |
	// |                      | later.                                                |
	// +----------------------+-------------------------------------------------------+
	// | noFollow             | Fail if the final path component is a symbolic link.  |
	// |                      | SFTP v5 or later.                                     |
	// +----------------------+-------------------------------------------------------+
	// | deleteOnClose        | Request deletion when the last handle is closed. SFTP |
	// |                      | v5 or later.                                          |
	// +----------------------+-------------------------------------------------------+
	// | accessAuditAlarmInfo | Request privileges needed to read or write AUDIT or   |
	// |                      | ALARM ACL entries. SFTP v5 or later.                  |
	// +----------------------+-------------------------------------------------------+
	// | accessBackup         | Request backup/restore privileges that may bypass     |
	// |                      | normal access checks. SFTP v5 or later.               |
	// +----------------------+-------------------------------------------------------+
	// | backupStream         | Read or write a server-specific backup stream. SFTP   |
	// |                      | v5 or later.                                          |
	// +----------------------+-------------------------------------------------------+
	// 
	// Options marked SFTP v5 or later require ForceV3[1] to be false and a
	// negotiated ProtocolVersion[2] of at least 5.
	// An absolute remote path begins with /. A relative path is interpreted from the
	// authenticated user's home directory. Some servers require a filename in the home
	// directory to be written as./filename.
	// Use only documented values: Some servers or Chilkat versions may tolerate an
	// unknown access value, an unknown option, or conflicting primary dispositions,
	// but the resulting behavior is unspecified. Supply one documented access value
	// and exactly one primary disposition.
	// appendData forces writes to the end of the file, including explicit-offset
	// writes. By itself it opens an existing file but does not create a missing file;
	// combine it with an appropriate primary disposition when creation is required.
	// Options defined for SFTP v5 or later must not be assumed to take effect when an
	// older version is negotiated, even if the open request succeeds.
	// 
	// References:
	// [1] #ForceV3
	// [2] #ProtocolVersion
	const wchar_t *openFile(const wchar_t *remotePath, const wchar_t *access, const wchar_t *createDisposition);

	// Creates an asynchronous task to call the OpenFile method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *OpenFileAsync(const wchar_t *remotePath, const wchar_t *access, const wchar_t *createDisposition);

	// Deprecated: Use ReadDirListing[1] instead.
	// 
	// Reads directory entries from the handle returned by OpenDir[2] and returns an
	// SFtpDir object containing the listing.
	// 
	// 
	// References:
	// [1] #ReadDirListing
	// [2] #OpenDir
	// The caller is responsible for deleting the object returned by this method.
	CkSFtpDirW *ReadDir(const wchar_t *handle);

	// Creates an asynchronous task to call the ReadDir method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadDirAsync(const wchar_t *handle);

	// Reads all remaining directory entries from handle, which must have been returned
	// by OpenDir[1], and stores them in dirObj. Entries are returned in server order;
	// Chilkat does not sort the listing.
	// 
	// After end-of-directory has been reached, another call on the same handle returns
	// true, adds no entries, and sets LastStatusCode[2] to SSH_FX_EOF.
	// 
	// This method does not clear dirObj. Use a new or cleared SFtpDir object when an
	// empty result must replace an earlier listing. Close the directory handle when
	// finished.
	// 
	// References:
	// [1] #OpenDir
	// [2] #LastStatusCode
	bool ReadDirListing(const wchar_t *handle, CkSFtpDirW &dirObj);

	// Creates an asynchronous task to call the ReadDirListing method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadDirListingAsync(const wchar_t *handle, CkSFtpDirW &dirObj);

	// Reads up to numBytes bytes from the current position of the remote file
	// identified by handle and appends them to bd. The handle must have been returned
	// by OpenFile[1].
	// 
	// Fewer bytes can be read when end-of-file is reached. Repeat the call until
	// Eof(handle) returns true to read the entire file incrementally.
	// 
	// This method shares the handle's sequential read position with ReadFileBytes[2]
	// and ReadFileText[3]. Existing bytes in bd are preserved.
	// 
	// References:
	// [1] #OpenFile
	// [2] #ReadFileBytes
	// [3] #ReadFileText
	bool ReadFileBd(const wchar_t *handle, int numBytes, CkBinDataW &bd);

	// Creates an asynchronous task to call the ReadFileBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadFileBdAsync(const wchar_t *handle, int numBytes, CkBinDataW &bd);

	// Reads up to numBytes bytes from the current position of the remote file
	// identified by handle. The handle must have been returned by OpenFile[1].
	// 
	// Fewer bytes can be returned when end-of-file is reached. To read the entire file
	// incrementally, repeat the call until Eof(handle) returns true.
	// 
	// This is a sequential read and advances the handle's maintained read position by
	// the number of bytes returned. For predictable positioning, do not mix sequential
	// reads with explicit-offset reads on the same handle.
	// 
	// References:
	// [1] #OpenFile
	bool ReadFileBytes(const wchar_t *handle, int numBytes, CkByteData &outBytes);

	// Creates an asynchronous task to call the ReadFileBytes method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadFileBytesAsync(const wchar_t *handle, int numBytes);

	// Reads up to numBytes bytes from handle, beginning at the 32-bit byte offset from
	// the start of the file.
	// 
	// The offset is ignored when the file was opened with textMode. Use
	// ReadFileBytes64[1] or ReadFileBytes64s[2] for offsets outside the 32-bit range.
	// 
	// The read updates the per-handle read status and interacts with the handle's
	// maintained sequential position. Do not rely on the next sequential read position
	// after mixing explicit-offset and sequential reads; use one positioning style
	// consistently for a handle.
	// 
	// References:
	// [1] #ReadFileBytes64
	// [2] #ReadFileBytes64s
	bool ReadFileBytes32(const wchar_t *handle, int offset, int numBytes, CkByteData &outBytes);

	// Creates an asynchronous task to call the ReadFileBytes32 method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadFileBytes32Async(const wchar_t *handle, int offset, int numBytes);

	// Reads up to numBytes bytes from handle, beginning at the 64-bit byte offset from
	// the start of the file.
	// 
	// The offset is ignored when the file was opened with textMode. Fewer bytes can be
	// returned when end-of-file is reached.
	// 
	bool ReadFileBytes64(const wchar_t *handle, __int64 offset, int numBytes, CkByteData &outBytes);

	// Creates an asynchronous task to call the ReadFileBytes64 method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadFileBytes64Async(const wchar_t *handle, __int64 offset, int numBytes);

	// Reads up to numBytes bytes from handle, beginning at the byte offset supplied as
	// the decimal string offset.
	// 
	// This form is intended for environments without native 64-bit integer support.
	// The offset is ignored when the file was opened with textMode.
	// 
	bool ReadFileBytes64s(const wchar_t *handle, const wchar_t *offset, int numBytes, CkByteData &outBytes);

	// Creates an asynchronous task to call the ReadFileBytes64s method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadFileBytes64sAsync(const wchar_t *handle, const wchar_t *offset, int numBytes);

	// Reads up to numBytes bytes from the current position of handle, decodes the
	// bytes using charset, and returns the resulting text.
	// 
	// See Supported Charsets[1].
	// 
	// The requested size is measured in bytes, not characters. With a multibyte
	// encoding such as UTF-8 or Shift_JIS, the final character can be split across
	// calls. For robust streaming, read raw bytes and decode with
	// application-maintained state.
	// Multibyte boundaries: Chilkat does not retain an incomplete multibyte character
	// between calls. If numBytes ends in the middle of a UTF-8 sequence, the first
	// returned string ends with the incomplete bytes and the next call begins with the
	// remaining bytes. Choose byte counts that end on character boundaries, or read
	// bytes and perform streaming decoding in the application.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool ReadFileText(const wchar_t *handle, int numBytes, const wchar_t *charset, CkString &outStr);
	// Reads up to numBytes bytes from the current position of handle, decodes the
	// bytes using charset, and returns the resulting text.
	// 
	// See Supported Charsets[1].
	// 
	// The requested size is measured in bytes, not characters. With a multibyte
	// encoding such as UTF-8 or Shift_JIS, the final character can be split across
	// calls. For robust streaming, read raw bytes and decode with
	// application-maintained state.
	// Multibyte boundaries: Chilkat does not retain an incomplete multibyte character
	// between calls. If numBytes ends in the middle of a UTF-8 sequence, the first
	// returned string ends with the incomplete bytes and the next call begins with the
	// remaining bytes. Choose byte counts that end on character boundaries, or read
	// bytes and perform streaming decoding in the application.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	const wchar_t *readFileText(const wchar_t *handle, int numBytes, const wchar_t *charset);

	// Creates an asynchronous task to call the ReadFileText method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadFileTextAsync(const wchar_t *handle, int numBytes, const wchar_t *charset);

	// Reads up to numBytes bytes from handle at the 32-bit byte offset, decodes the
	// bytes using charset, and returns the resulting text.
	// 
	// See Supported Charsets[1].
	// 
	// The requested size is measured in bytes, not characters. With a multibyte
	// encoding such as UTF-8 or Shift_JIS, the final character can be split across
	// calls. For robust streaming, read raw bytes and decode with
	// application-maintained state.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool ReadFileText32(const wchar_t *handle, int offset, int numBytes, const wchar_t *charset, CkString &outStr);
	// Reads up to numBytes bytes from handle at the 32-bit byte offset, decodes the
	// bytes using charset, and returns the resulting text.
	// 
	// See Supported Charsets[1].
	// 
	// The requested size is measured in bytes, not characters. With a multibyte
	// encoding such as UTF-8 or Shift_JIS, the final character can be split across
	// calls. For robust streaming, read raw bytes and decode with
	// application-maintained state.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	const wchar_t *readFileText32(const wchar_t *handle, int offset, int numBytes, const wchar_t *charset);

	// Creates an asynchronous task to call the ReadFileText32 method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadFileText32Async(const wchar_t *handle, int offset, int numBytes, const wchar_t *charset);

	// Reads up to numBytes bytes from handle at the 64-bit byte offset, decodes the
	// bytes using charset, and returns the resulting text.
	// 
	// See Supported Charsets[1].
	// 
	// The requested size is measured in bytes, not characters. With a multibyte
	// encoding such as UTF-8 or Shift_JIS, the final character can be split across
	// calls. For robust streaming, read raw bytes and decode with
	// application-maintained state.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool ReadFileText64(const wchar_t *handle, __int64 offset, int numBytes, const wchar_t *charset, CkString &outStr);
	// Reads up to numBytes bytes from handle at the 64-bit byte offset, decodes the
	// bytes using charset, and returns the resulting text.
	// 
	// See Supported Charsets[1].
	// 
	// The requested size is measured in bytes, not characters. With a multibyte
	// encoding such as UTF-8 or Shift_JIS, the final character can be split across
	// calls. For robust streaming, read raw bytes and decode with
	// application-maintained state.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	const wchar_t *readFileText64(const wchar_t *handle, __int64 offset, int numBytes, const wchar_t *charset);

	// Creates an asynchronous task to call the ReadFileText64 method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadFileText64Async(const wchar_t *handle, __int64 offset, int numBytes, const wchar_t *charset);

	// Reads up to numBytes bytes from handle at the byte offset supplied as decimal
	// string offset, decodes the bytes using charset, and returns the resulting text.
	// 
	// See Supported Charsets[1].
	// 
	// The requested size is measured in bytes, not characters. With a multibyte
	// encoding, the final character can be split across calls.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool ReadFileText64s(const wchar_t *handle, const wchar_t *offset, int numBytes, const wchar_t *charset, CkString &outStr);
	// Reads up to numBytes bytes from handle at the byte offset supplied as decimal
	// string offset, decodes the bytes using charset, and returns the resulting text.
	// 
	// See Supported Charsets[1].
	// 
	// The requested size is measured in bytes, not characters. With a multibyte
	// encoding, the final character can be split across calls.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	const wchar_t *readFileText64s(const wchar_t *handle, const wchar_t *offset, int numBytes, const wchar_t *charset);

	// Creates an asynchronous task to call the ReadFileText64s method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadFileText64sAsync(const wchar_t *handle, const wchar_t *offset, int numBytes, const wchar_t *charset);

	// Returns the target path stored in the symbolic link at remote path.
	// 
	// The returned value is the target string stored in the link. It is not
	// automatically canonicalized and can be relative, absolute, or refer to a
	// nonexistent target.
	bool ReadLink(const wchar_t *path, CkString &outStr);
	// Returns the target path stored in the symbolic link at remote path.
	// 
	// The returned value is the target string stored in the link. It is not
	// automatically canonicalized and can be relative, absolute, or refer to a
	// nonexistent target.
	const wchar_t *readLink(const wchar_t *path);

	// Creates an asynchronous task to call the ReadLink method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadLinkAsync(const wchar_t *path);

	// Asks the server to canonicalize originalPath and returns the resulting absolute
	// remote path.
	// 
	// For SFTP v5 or later, composePath may optionally modify or extend the original
	// path; pass an empty string when no composition is needed. If composePath is
	// absolute, it replaces originalPath.
	// 
	// SFTP v3 and v4 do not support path composition. On those versions, composePath
	// is ignored and the method canonicalizes only originalPath.
	bool RealPath(const wchar_t *originalPath, const wchar_t *composePath, CkString &outStr);
	// Asks the server to canonicalize originalPath and returns the resulting absolute
	// remote path.
	// 
	// For SFTP v5 or later, composePath may optionally modify or extend the original
	// path; pass an empty string when no composition is needed. If composePath is
	// absolute, it replaces originalPath.
	// 
	// SFTP v3 and v4 do not support path composition. On those versions, composePath
	// is ignored and the method canonicalizes only originalPath.
	const wchar_t *realPath(const wchar_t *originalPath, const wchar_t *composePath);

	// Creates an asynchronous task to call the RealPath method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *RealPathAsync(const wchar_t *originalPath, const wchar_t *composePath);

	// Deletes the remote directory specified by path.
	// 
	// Most SFTP servers require the directory to be empty before it can be removed.
	bool RemoveDir(const wchar_t *path);

	// Creates an asynchronous task to call the RemoveDir method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *RemoveDirAsync(const wchar_t *path);

	// Deletes the remote file specified by filename.
	// 
	bool RemoveFile(const wchar_t *filename);

	// Creates an asynchronous task to call the RemoveFile method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *RemoveFileAsync(const wchar_t *filename);

	// Renames or moves a remote file or directory from oldPath to newPath.
	// 
	// oldPath: someDirA/filename
	// newPath: someDirB/abc/xyz/filename
	bool RenameFileOrDir(const wchar_t *oldPath, const wchar_t *newPath);

	// Creates an asynchronous task to call the RenameFileOrDir method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *RenameFileOrDirAsync(const wchar_t *oldPath, const wchar_t *newPath);

	// Resumes downloading remoteFilePath to the local filesystem path localFilePath.
	// Chilkat uses only the existing local file size as the remote starting offset.
	// 
	//     * If the local file is missing or empty, a normal download is performed.
	//     * If it is smaller, the remaining remote bytes are appended after the
	//     existing local length.
	//     * If it is the same size or larger, the method treats the download as
	//     complete and does not truncate or verify the local content.
	// Important: The existing local bytes are not compared with the remote source.
	// Before resuming, the application must ensure that the local file is the correct
	// prefix of the remote file.
	bool ResumeDownloadFileByName(const wchar_t *remoteFilePath, const wchar_t *localFilePath);

	// Creates an asynchronous task to call the ResumeDownloadFileByName method with
	// the arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ResumeDownloadFileByNameAsync(const wchar_t *remoteFilePath, const wchar_t *localFilePath);

	// Resumes uploading the local file at localFilePath to remoteFilePath. Chilkat
	// uses only the existing remote file size as the local starting offset.
	// 
	//     * If the remote file is missing or empty, a normal upload is performed.
	//     * If it is smaller, the remaining local bytes are appended after the
	//     existing remote length.
	//     * If it is the same size or larger, the method treats the upload as complete
	//     and does not truncate or verify the remote content.
	// Important: The existing remote bytes are not compared with the local source.
	// Before resuming, the application must ensure that the remote file is the correct
	// prefix of the local file.
	bool ResumeUploadFileByName(const wchar_t *remoteFilePath, const wchar_t *localFilePath);

	// Creates an asynchronous task to call the ResumeUploadFileByName method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ResumeUploadFileByNameAsync(const wchar_t *remoteFilePath, const wchar_t *localFilePath);

	// Sends an SSH IGNORE message. No SFTP file handle or channel is required.
	// 
	// The server does not send a reply, but a successful send helps verify that the
	// SSH connection is still writable.
	// 
	bool SendIgnore(void);

	// Creates an asynchronous task to call the SendIgnore method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendIgnoreAsync(void);

	// Configures the exact set of SSH algorithms permitted for subsequent connections
	// using the settings in json.
	// 
	// Call this method before Connect. The connection fails when no mutually supported
	// algorithm remains in a required category.
	bool SetAllowedAlgorithms(CkJsonObjectW &json);

	// Sets the remote file's creation date and time. pathOrHandle may contain a remote
	// path or an open handle. Set isHandle to true for a handle and false for a
	// path.
	// 
	// SFTP v3 and earlier do not support setting creation time.
	// 
	// createDateTime supplies the new value.
	// 
	bool SetCreateDt(const wchar_t *pathOrHandle, bool isHandle, CkDateTimeW &createDateTime);

	// Creates an asynchronous task to call the SetCreateDt method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SetCreateDtAsync(const wchar_t *pathOrHandle, bool isHandle, CkDateTimeW &createDateTime);

	// Sets the remote file's creation date and time. pathOrHandle may contain a remote
	// path or an open handle. Set bIsHandle to true for a handle and false for a
	// path.
	// 
	// Pass the value in dateTimeStr as an RFC 822 formatted string, for example Fri,
	// 21 Nov 1997 09:55:06 -0600.
	// 
	// SFTP v3 and earlier do not support setting creation time.
	bool SetCreateTimeStr(const wchar_t *pathOrHandle, bool bIsHandle, const wchar_t *dateTimeStr);

	// Creates an asynchronous task to call the SetCreateTimeStr method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SetCreateTimeStrAsync(const wchar_t *pathOrHandle, bool bIsHandle, const wchar_t *dateTimeStr);

	// Sets the remote file's last-access date and time. pathOrHandle may contain a
	// remote path or an open handle. Set isHandle to true for a handle and false
	// for a path.
	// 
	// accessDateTime supplies the new value.
	// 
	bool SetLastAccessDt(const wchar_t *pathOrHandle, bool isHandle, CkDateTimeW &accessDateTime);

	// Creates an asynchronous task to call the SetLastAccessDt method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SetLastAccessDtAsync(const wchar_t *pathOrHandle, bool isHandle, CkDateTimeW &accessDateTime);

	// Sets the remote file's last-access date and time. pathOrHandle may contain a
	// remote path or an open handle. Set bIsHandle to true for a handle and false
	// for a path.
	// 
	// Pass the value in dateTimeStr as an RFC 822 formatted string, for example Fri,
	// 21 Nov 1997 09:55:06 -0600.
	// 
	bool SetLastAccessTimeStr(const wchar_t *pathOrHandle, bool bIsHandle, const wchar_t *dateTimeStr);

	// Creates an asynchronous task to call the SetLastAccessTimeStr method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SetLastAccessTimeStrAsync(const wchar_t *pathOrHandle, bool bIsHandle, const wchar_t *dateTimeStr);

	// Sets the remote file's last-modified date and time. pathOrHandle may contain a
	// remote path or an open handle. Set isHandle to true for a handle and false
	// for a path.
	// 
	// modifiedDateTime supplies the new value.
	// 
	bool SetLastModifiedDt(const wchar_t *pathOrHandle, bool isHandle, CkDateTimeW &modifiedDateTime);

	// Creates an asynchronous task to call the SetLastModifiedDt method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SetLastModifiedDtAsync(const wchar_t *pathOrHandle, bool isHandle, CkDateTimeW &modifiedDateTime);

	// Sets the remote file's last-modified date and time. pathOrHandle may contain a
	// remote path or an open handle. Set bIsHandle to true for a handle and false
	// for a path.
	// 
	// Pass the value in dateTimeStr as an RFC 822 formatted string, for example Fri,
	// 21 Nov 1997 09:55:06 -0600.
	// 
	// When SFTP v3 is negotiated, the stored timestamp has whole-second precision.
	bool SetLastModifiedTimeStr(const wchar_t *pathOrHandle, bool bIsHandle, const wchar_t *dateTimeStr);

	// Creates an asynchronous task to call the SetLastModifiedTimeStr method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SetLastModifiedTimeStrAsync(const wchar_t *pathOrHandle, bool bIsHandle, const wchar_t *dateTimeStr);

	// Sets the owner and group of the remote item identified by pathOrHandle. Set
	// isHandle to true for an open handle and false for a remote path.
	// 
	// owner and group supply the new textual owner and group values.
	// 
	// SFTP v3 and earlier do not support textual owner and group names.
	bool SetOwnerAndGroup(const wchar_t *pathOrHandle, bool isHandle, const wchar_t *owner, const wchar_t *group);

	// Creates an asynchronous task to call the SetOwnerAndGroup method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SetOwnerAndGroupAsync(const wchar_t *pathOrHandle, bool isHandle, const wchar_t *owner, const wchar_t *group);

	// Sets the POSIX permission bits for the remote item identified by pathOrHandle.
	// Set isHandle to true for an open handle and false for a remote path.
	// 
	// Pass the permission bits, not the file-type bits. In languages supporting octal
	// integer literals, common values include 0600, 0644, and 0755. Their decimal
	// equivalents are 384, 420, and 493.
	// 
	// After setting permissions, GetFilePermissions[1] returns the complete mode,
	// including the file-type bits. For example, setting 0644 on a regular file can
	// subsequently return 0100644.
	// 
	// References:
	// [1] #GetFilePermissions
	bool SetPermissions(const wchar_t *pathOrHandle, bool isHandle, int permissions);

	// Creates an asynchronous task to call the SetPermissions method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SetPermissionsAsync(const wchar_t *pathOrHandle, bool isHandle, int permissions);

	// Begins keyboard-interactive authentication for login and returns XML describing
	// the server's prompts.
	// 
	// <infoRequest numPrompts="N">
	//   <name>name_string</name>
	//   <instruction>instruction_string</instruction>
	//   <prompt1 echo="1_or_0">prompt_string</prompt1>
	//   ...
	//   <promptN echo="1_or_0">prompt_string</promptN>
	// </infoRequest>
	// 
	// The echo attribute indicates whether the response may be displayed while
	// entered. A value of 0 normally identifies secret input such as a password.
	// 
	// If authentication immediately succeeds or fails, the result has one of these
	// forms:
	// 
	// <success>success message</success>
	// 
	// <error>error message</error>
	bool StartKeyboardAuth(const wchar_t *login, CkString &outStr);
	// Begins keyboard-interactive authentication for login and returns XML describing
	// the server's prompts.
	// 
	// <infoRequest numPrompts="N">
	//   <name>name_string</name>
	//   <instruction>instruction_string</instruction>
	//   <prompt1 echo="1_or_0">prompt_string</prompt1>
	//   ...
	//   <promptN echo="1_or_0">prompt_string</promptN>
	// </infoRequest>
	// 
	// The echo attribute indicates whether the response may be displayed while
	// entered. A value of 0 normally identifies secret input such as a password.
	// 
	// If authentication immediately succeeds or fails, the result has one of these
	// forms:
	// 
	// <success>success message</success>
	// 
	// <error>error message</error>
	const wchar_t *startKeyboardAuth(const wchar_t *login);

	// Creates an asynchronous task to call the StartKeyboardAuth method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *StartKeyboardAuthAsync(const wchar_t *login);

	// Creates a symbolic link on the server. oldPath identifies the link target and
	// newPath identifies the new symbolic-link path.
	// 
	// The server's SFTP implementation determines path interpretation and whether
	// symbolic links are permitted.
	bool SymLink(const wchar_t *oldPath, const wchar_t *newPath);

	// Creates an asynchronous task to call the SymLink method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SymLinkAsync(const wchar_t *oldPath, const wchar_t *newPath);

	// Synchronizes files from the remote directory remoteRoot to the local filesystem
	// directory localRoot.
	// 
	// +------+-----------------------------------------------------------------------+
	// | Mode |                               Behavior                                |
	// +======+=======================================================================+
	// | 0    | Download all files.                                                   |
	// +------+-----------------------------------------------------------------------+
	// | 1    | Download files that do not exist locally.                             |
	// +------+-----------------------------------------------------------------------+
	// | 2    | Download files that are newer remotely or missing locally.            |
	// +------+-----------------------------------------------------------------------+
	// | 3    | Download only files that are newer remotely; do not download missing  |
	// |      | local files.                                                          |
	// +------+-----------------------------------------------------------------------+
	// | 5    | Download files that are missing locally or differ in size.            |
	// +------+-----------------------------------------------------------------------+
	// | 6    | Mode 5 plus files that are newer remotely.                            |
	// +------+-----------------------------------------------------------------------+
	// | 99   | Do not download; delete remote files that do not exist locally.       |
	// +------+-----------------------------------------------------------------------+
	// 
	// Set recurse to true to descend into subdirectories. An absolute remote path
	// begins with /; a relative path is interpreted from the authenticated user's home
	// directory.
	// 
	// Use GetSyncedFiles[1] after the operation to retrieve the relative paths that
	// were downloaded or created.
	// 
	// With SyncCreateAllLocalDirs[2] set to true, mode 0 creates empty remote
	// directories locally. Mode 1 downloads only missing local files and preserves
	// existing local files. Mode 99 deletes files from the remote tree that are absent
	// locally; it does not delete extra local files.
	// 
	// References:
	// [1] #GetSyncedFiles
	// [2] #SyncCreateAllLocalDirs
	bool SyncTreeDownload(const wchar_t *remoteRoot, const wchar_t *localRoot, int mode, bool recurse);

	// Creates an asynchronous task to call the SyncTreeDownload method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SyncTreeDownloadAsync(const wchar_t *remoteRoot, const wchar_t *localRoot, int mode, bool recurse);

	// Synchronizes files from the local filesystem directory localBaseDir to the
	// remote directory remoteBaseDir.
	// 
	// +------+-----------------------------------------------------------------------+
	// | Mode |                               Behavior                                |
	// +======+=======================================================================+
	// | 0    | Upload all files.                                                     |
	// +------+-----------------------------------------------------------------------+
	// | 1    | Upload files that do not exist remotely.                              |
	// +------+-----------------------------------------------------------------------+
	// | 2    | Upload files that are newer locally or missing remotely.              |
	// +------+-----------------------------------------------------------------------+
	// | 3    | Upload only files that are newer locally; do not upload missing       |
	// |      | remote files.                                                         |
	// +------+-----------------------------------------------------------------------+
	// | 4    | Upload files that are missing remotely or differ in size.             |
	// +------+-----------------------------------------------------------------------+
	// | 5    | Mode 4 plus files that are newer locally.                             |
	// +------+-----------------------------------------------------------------------+
	// 
	// Set bRecurse to true to descend into subdirectories. An absolute remote path
	// begins with /; a relative path is interpreted from the authenticated user's home
	// directory.
	// 
	// Use GetSyncedFiles[1] after the operation to retrieve the relative paths that
	// were uploaded.
	// 
	// Mode 0 also creates empty remote directories. Mode 1 uploads only missing files
	// and does not replace an existing remote file merely because the local file is
	// newer; use mode 2 for missing-or-newer behavior. The filename and directory
	// filters are applied during recursive traversal.
	// 
	// References:
	// [1] #GetSyncedFiles
	bool SyncTreeUpload(const wchar_t *localBaseDir, const wchar_t *remoteBaseDir, int mode, bool bRecurse);

	// Creates an asynchronous task to call the SyncTreeUpload method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SyncTreeUploadAsync(const wchar_t *localBaseDir, const wchar_t *remoteBaseDir, int mode, bool bRecurse);

	// Uploads all bytes in binData to the remote file at remoteFilePath.
	// 
	// If the destination exists, it is truncated before the bytes are uploaded.
	bool UploadBd(CkBinDataW &binData, const wchar_t *remoteFilePath);

	// Creates an asynchronous task to call the UploadBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadBdAsync(CkBinDataW &binData, const wchar_t *remoteFilePath);

	// Streams the local filesystem file at fromLocalFilePath to the remote file
	// identified by handle. The handle must have been returned by OpenFile[1].
	// 
	// Close the remote handle when the upload is complete.
	// 
	// The upload begins at the handle's current sequential write position. Existing
	// bytes before that position are preserved unless the file was truncated when
	// opened.
	// 
	// References:
	// [1] #OpenFile
	bool UploadFile(const wchar_t *handle, const wchar_t *fromLocalFilePath);

	// Creates an asynchronous task to call the UploadFile method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadFileAsync(const wchar_t *handle, const wchar_t *fromLocalFilePath);

	// Uploads the local filesystem file at localFilePath to remoteFilePath.
	// 
	// When PreserveDate[1] is true, Chilkat preserves the local file's last-modified
	// time on the remote file.
	// 
	// An absolute remote path begins with / and is relative to the server filesystem
	// root. A relative path is interpreted relative to the authenticated user's home
	// directory.
	// If the destination exists, it is truncated before the upload. A zero-byte local
	// file creates or truncates the remote file to zero bytes. Missing remote parent
	// directories are not created automatically.
	// 
	// References:
	// [1] #PreserveDate
	bool UploadFileByName(const wchar_t *remoteFilePath, const wchar_t *localFilePath);

	// Creates an asynchronous task to call the UploadFileByName method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadFileByNameAsync(const wchar_t *remoteFilePath, const wchar_t *localFilePath);

	// Encodes the text in sb using charset and uploads it to remoteFilePath.
	// 
	// Set includeBom to true to prepend a byte-order mark when the selected encoding
	// supports one.
	// 
	// If the destination exists, it is truncated before the text is uploaded. For
	// utf-8, setting includeBom to true prepends the three bytes EF BB BF; setting
	// it to false omits them.
	bool UploadSb(CkStringBuilderW &sb, const wchar_t *remoteFilePath, const wchar_t *charset, bool includeBom);

	// Creates an asynchronous task to call the UploadSb method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UploadSbAsync(CkStringBuilderW &sb, const wchar_t *remoteFilePath, const wchar_t *charset, bool includeBom);

	// Appends all bytes in bd to the remote file identified by handle. The handle must
	// have been returned by OpenFile[1].
	// 
	// 
	// References:
	// [1] #OpenFile
	bool WriteFileBd(const wchar_t *handle, CkBinDataW &bd);

	// Creates an asynchronous task to call the WriteFileBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteFileBdAsync(const wchar_t *handle, CkBinDataW &bd);

	// Appends the exact bytes in byteData to the remote file identified by handle. The
	// handle must have been returned by OpenFile[1].
	// 
	// 
	// References:
	// [1] #OpenFile
	bool WriteFileBytes(const wchar_t *handle, CkByteData &byteData);

	// Creates an asynchronous task to call the WriteFileBytes method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteFileBytesAsync(const wchar_t *handle, CkByteData &byteData);

	// Writes the exact bytes in data to handle at the 32-bit byte offset from the
	// beginning of the remote file.
	// 
	bool WriteFileBytes32(const wchar_t *handle, int offset, CkByteData &data);

	// Creates an asynchronous task to call the WriteFileBytes32 method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteFileBytes32Async(const wchar_t *handle, int offset, CkByteData &data);

	// Writes the exact bytes in data to handle at the 64-bit byte offset64 from the
	// beginning of the remote file.
	// 
	bool WriteFileBytes64(const wchar_t *handle, __int64 offset64, CkByteData &data);

	// Creates an asynchronous task to call the WriteFileBytes64 method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteFileBytes64Async(const wchar_t *handle, __int64 offset64, CkByteData &data);

	// Writes the exact bytes in data to handle at the byte offset supplied as the
	// decimal string offset64.
	// 
	bool WriteFileBytes64s(const wchar_t *handle, const wchar_t *offset64, CkByteData &data);

	// Creates an asynchronous task to call the WriteFileBytes64s method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteFileBytes64sAsync(const wchar_t *handle, const wchar_t *offset64, CkByteData &data);

	// Encodes textData using charset and writes the resulting bytes at the current
	// sequential write position for handle.
	// 
	// The position is maintained by Chilkat for the handle. Opening an existing file
	// with openOrCreate positions sequential writes at the current end of the file. An
	// explicit-offset write can change the position used by the next sequential write.
	// When the file was opened with appendData, writes are forced to the end.
	// 
	// See Supported Charsets[1].
	// 
	// No byte-order mark or line ending is added unless it is present in the supplied
	// text or produced by the selected encoding.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool WriteFileText(const wchar_t *handle, const wchar_t *charset, const wchar_t *textData);

	// Creates an asynchronous task to call the WriteFileText method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteFileTextAsync(const wchar_t *handle, const wchar_t *charset, const wchar_t *textData);

	// Encodes textData using charset and writes the resulting bytes to handle at the
	// 32-bit byte offset offset32.
	// 
	// After a successful explicit-offset write, the next sequential write begins
	// immediately after the bytes written by this call. If the file was opened with
	// appendData, the server appends and the explicit offset does not control
	// placement.
	// 
	// See Supported Charsets[1].
	// 
	// offset32 must be nonnegative. A negative value can be interpreted as a very
	// large unsigned offset. Writing beyond end-of-file can create a sparse file;
	// whether the gap is sparse is determined by the server filesystem.
	// No byte-order mark or line ending is added unless it is present in the supplied
	// text or produced by the selected encoding.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool WriteFileText32(const wchar_t *handle, int offset32, const wchar_t *charset, const wchar_t *textData);

	// Creates an asynchronous task to call the WriteFileText32 method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteFileText32Async(const wchar_t *handle, int offset32, const wchar_t *charset, const wchar_t *textData);

	// Encodes textData using charset and writes the resulting bytes to handle at the
	// 64-bit byte offset offset64.
	// 
	// See Supported Charsets[1].
	// 
	// No byte-order mark or line ending is added unless it is present in the supplied
	// text or produced by the selected encoding.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool WriteFileText64(const wchar_t *handle, __int64 offset64, const wchar_t *charset, const wchar_t *textData);

	// Creates an asynchronous task to call the WriteFileText64 method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteFileText64Async(const wchar_t *handle, __int64 offset64, const wchar_t *charset, const wchar_t *textData);

	// Encodes textData using charset and writes the resulting bytes to handle at the
	// byte offset supplied as decimal string offset64.
	// 
	// See Supported Charsets[1].
	// 
	// No byte-order mark or line ending is added unless it is present in the supplied
	// text or produced by the selected encoding.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool WriteFileText64s(const wchar_t *handle, const wchar_t *offset64, const wchar_t *charset, const wchar_t *textData);

	// Creates an asynchronous task to call the WriteFileText64s method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteFileText64sAsync(const wchar_t *handle, const wchar_t *offset64, const wchar_t *charset, const wchar_t *textData);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
