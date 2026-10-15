// CkSshTunnelW.h: interface for the CkSshTunnelW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkSshTunnelW_H
#define _CkSshTunnelW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkSshKeyW;
class CkTaskW;
class CkSecureStringW;
class CkSshW;
class CkJsonObjectW;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkSshTunnelW
class CK_VISIBLE_PUBLIC CkSshTunnelW  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkSshTunnelW(const CkSshTunnelW &);
	CkSshTunnelW &operator=(const CkSshTunnelW &);

    public:
	CkSshTunnelW(void);
	virtual ~CkSshTunnelW(void);

	

	static CkSshTunnelW *createNew(void);
	

	CkSshTunnelW(bool bCallbackOwned);
	static CkSshTunnelW *createNew(bool bCallbackOwned);

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkBaseProgressW *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgressW *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Set this property to true from another thread to request that the currently
	// running foreground operation be aborted. For example, it can interrupt a
	// synchronous Connect[1] that is waiting for an SSH server response.
	// 
	// This property does not stop the background listener or terminate established
	// background tunnel clients.
	// 
	// Do not assume the property is automatically reset after an operation is aborted.
	// It may remain true; set it back to false before starting another operation.
	// 
	// References:
	// [1] #Connect
	bool get_AbortCurrent(void);
	// Set this property to true from another thread to request that the currently
	// running foreground operation be aborted. For example, it can interrupt a
	// synchronous Connect[1] that is waiting for an SSH server response.
	// 
	// This property does not stop the background listener or terminate established
	// background tunnel clients.
	// 
	// Do not assume the property is automatically reset after an operation is aborted.
	// It may remain true; set it back to false before starting another operation.
	// 
	// References:
	// [1] #Connect
	void put_AbortCurrent(bool newVal);

	// Contains the in-memory activity log for the background listener thread started
	// by BeginAccepting[1].
	// 
	// The log is populated only when KeepAcceptLog[2] is true.
	// 
	// 
	// References:
	// [1] #BeginAccepting
	// [2] #KeepAcceptLog
	void get_AcceptLog(CkString &str);
	// Contains the in-memory activity log for the background listener thread started
	// by BeginAccepting[1].
	// 
	// The log is populated only when KeepAcceptLog[2] is true.
	// 
	// 
	// References:
	// [1] #BeginAccepting
	// [2] #KeepAcceptLog
	const wchar_t *acceptLog(void);
	// Contains the in-memory activity log for the background listener thread started
	// by BeginAccepting[1].
	// 
	// The log is populated only when KeepAcceptLog[2] is true.
	// 
	// 
	// References:
	// [1] #BeginAccepting
	// [2] #KeepAcceptLog
	void put_AcceptLog(const wchar_t *newVal);

	// Specifies the local file path where activity from the background listener thread
	// is written.
	// 
	// This file-based log is separate from the in-memory AcceptLog[1].
	// 
	// 
	// References:
	// [1] #AcceptLog
	void get_AcceptLogPath(CkString &str);
	// Specifies the local file path where activity from the background listener thread
	// is written.
	// 
	// This file-based log is separate from the in-memory AcceptLog[1].
	// 
	// 
	// References:
	// [1] #AcceptLog
	const wchar_t *acceptLogPath(void);
	// Specifies the local file path where activity from the background listener thread
	// is written.
	// 
	// This file-based log is separate from the in-memory AcceptLog[1].
	// 
	// 
	// References:
	// [1] #AcceptLog
	void put_AcceptLogPath(const wchar_t *newVal);

	// Specifies the SSH client-identification string sent when connecting to the SSH
	// server.
	// 
	// Starting in Chilkat v9.5.0.99, the default is SSH-2.0-Chilkat_ followed by the
	// Chilkat version number, such as SSH-2.0-Chilkat_9.5.0.99.
	// 
	// The identifier should begin with SSH-2.0-. Some SSH servers disconnect clients
	// that send an invalid identification string.
	void get_ClientIdentifier(CkString &str);
	// Specifies the SSH client-identification string sent when connecting to the SSH
	// server.
	// 
	// Starting in Chilkat v9.5.0.99, the default is SSH-2.0-Chilkat_ followed by the
	// Chilkat version number, such as SSH-2.0-Chilkat_9.5.0.99.
	// 
	// The identifier should begin with SSH-2.0-. Some SSH servers disconnect clients
	// that send an invalid identification string.
	const wchar_t *clientIdentifier(void);
	// Specifies the SSH client-identification string sent when connecting to the SSH
	// server.
	// 
	// Starting in Chilkat v9.5.0.99, the default is SSH-2.0-Chilkat_ followed by the
	// Chilkat version number, such as SSH-2.0-Chilkat_9.5.0.99.
	// 
	// The identifier should begin with SSH-2.0-. Some SSH servers disconnect clients
	// that send an invalid identification string.
	void put_ClientIdentifier(const wchar_t *newVal);

	// Specifies the local directory where a separate log file is created for each
	// tunnel client.
	// 
	// When this property is not empty, files are named using the pattern
	// tunnel_client_log_{random_id}.txt.
	// 
	void get_ClientLogDir(CkString &str);
	// Specifies the local directory where a separate log file is created for each
	// tunnel client.
	// 
	// When this property is not empty, files are named using the pattern
	// tunnel_client_log_{random_id}.txt.
	// 
	const wchar_t *clientLogDir(void);
	// Specifies the local directory where a separate log file is created for each
	// tunnel client.
	// 
	// When this property is not empty, files are named using the pattern
	// tunnel_client_log_{random_id}.txt.
	// 
	void put_ClientLogDir(const wchar_t *newVal);

	// Specifies the maximum number of milliseconds allowed for establishing the SSH
	// connection.
	// 
	//     * The default value is 30000 milliseconds (30 seconds).
	//     * A value of 0 disables the connection timeout and allows an unlimited wait.
	// 
	// The timeout applies to more than the initial TCP connection. It also covers
	// connection setup performed through an HTTP or SOCKS proxy and waiting for the
	// SSH server identification string after the TCP connection has been established.
	// 
	int get_ConnectTimeoutMs(void);
	// Specifies the maximum number of milliseconds allowed for establishing the SSH
	// connection.
	// 
	//     * The default value is 30000 milliseconds (30 seconds).
	//     * A value of 0 disables the connection timeout and allows an unlimited wait.
	// 
	// The timeout applies to more than the initial TCP connection. It also covers
	// connection setup performed through an HTTP or SOCKS proxy and waiting for the
	// SSH server identification string after the TCP connection has been established.
	// 
	void put_ConnectTimeoutMs(int newVal);

	// Specifies the destination hostname or IP address for fixed-destination port
	// forwarding. This is typically the host running the database server or other TCP
	// service that local clients need to reach.
	// 
	// The destination is interpreted from the SSH server's network environment. For
	// example, localhost and 127.0.0.1 refer to the SSH server itself, not the
	// computer running the application. Hostname resolution is therefore performed as
	// part of the forwarding request on the SSH-server side.
	// 
	// Traffic accepted by the local listener is carried through SSH, forwarded by the
	// SSH server to this destination, and returned through the same tunnel.
	// 
	// This property is ignored when DynamicPortForwarding[1] is true. Changing the
	// destination while the listener is running affects new clients only; existing
	// clients remain connected to the destination selected when they were accepted.
	// 
	// References:
	// [1] #DynamicPortForwarding
	void get_DestHostname(CkString &str);
	// Specifies the destination hostname or IP address for fixed-destination port
	// forwarding. This is typically the host running the database server or other TCP
	// service that local clients need to reach.
	// 
	// The destination is interpreted from the SSH server's network environment. For
	// example, localhost and 127.0.0.1 refer to the SSH server itself, not the
	// computer running the application. Hostname resolution is therefore performed as
	// part of the forwarding request on the SSH-server side.
	// 
	// Traffic accepted by the local listener is carried through SSH, forwarded by the
	// SSH server to this destination, and returned through the same tunnel.
	// 
	// This property is ignored when DynamicPortForwarding[1] is true. Changing the
	// destination while the listener is running affects new clients only; existing
	// clients remain connected to the destination selected when they were accepted.
	// 
	// References:
	// [1] #DynamicPortForwarding
	const wchar_t *destHostname(void);
	// Specifies the destination hostname or IP address for fixed-destination port
	// forwarding. This is typically the host running the database server or other TCP
	// service that local clients need to reach.
	// 
	// The destination is interpreted from the SSH server's network environment. For
	// example, localhost and 127.0.0.1 refer to the SSH server itself, not the
	// computer running the application. Hostname resolution is therefore performed as
	// part of the forwarding request on the SSH-server side.
	// 
	// Traffic accepted by the local listener is carried through SSH, forwarded by the
	// SSH server to this destination, and returned through the same tunnel.
	// 
	// This property is ignored when DynamicPortForwarding[1] is true. Changing the
	// destination while the listener is running affects new clients only; existing
	// clients remain connected to the destination selected when they were accepted.
	// 
	// References:
	// [1] #DynamicPortForwarding
	void put_DestHostname(const wchar_t *newVal);

	// Specifies the TCP port of the destination service used for fixed-destination
	// forwarding, such as the port of a database server.
	// 
	// It is used together with DestHostname[1] and is ignored when
	// DynamicPortForwarding[2] is true.
	// 
	// 
	// References:
	// [1] #DestHostname
	// [2] #DynamicPortForwarding
	int get_DestPort(void);
	// Specifies the TCP port of the destination service used for fixed-destination
	// forwarding, such as the port of a database server.
	// 
	// It is used together with DestHostname[1] and is ignored when
	// DynamicPortForwarding[2] is true.
	// 
	// 
	// References:
	// [1] #DestHostname
	// [2] #DynamicPortForwarding
	void put_DestPort(int newVal);

	// Controls whether the listener performs fixed-destination or dynamic port
	// forwarding.
	// 
	//     * When false (the default), every accepted connection is forwarded to
	//     DestHostname[1] and DestPort[2].
	//     * When true, the listener acts as a SOCKS proxy and each inbound client
	//     supplies its own destination.
	// 
	// The SOCKS version is detected independently from each inbound client handshake;
	// there is no separate inbound SOCKS-version property. SOCKS4 and SOCKS5 CONNECT
	// requests are supported. SOCKS5 BIND and UDP association are not supported.
	// 
	// Leave InboundSocksUsername[3] empty to allow SOCKS5 clients to use the
	// no-authentication method. Set the inbound username and password to require
	// SOCKS5 username/password authentication. For SOCKS4, only the user ID can be
	// checked because SOCKS4 has no password field.
	// 
	// SOCKS4a hostname-form requests are not supported. Use a numeric IPv4 address
	// with SOCKS4, or use SOCKS5 when the client needs to supply a domain name.
	// 
	// References:
	// [1] #DestHostname
	// [2] #DestPort
	// [3] #InboundSocksUsername
	bool get_DynamicPortForwarding(void);
	// Controls whether the listener performs fixed-destination or dynamic port
	// forwarding.
	// 
	//     * When false (the default), every accepted connection is forwarded to
	//     DestHostname[1] and DestPort[2].
	//     * When true, the listener acts as a SOCKS proxy and each inbound client
	//     supplies its own destination.
	// 
	// The SOCKS version is detected independently from each inbound client handshake;
	// there is no separate inbound SOCKS-version property. SOCKS4 and SOCKS5 CONNECT
	// requests are supported. SOCKS5 BIND and UDP association are not supported.
	// 
	// Leave InboundSocksUsername[3] empty to allow SOCKS5 clients to use the
	// no-authentication method. Set the inbound username and password to require
	// SOCKS5 username/password authentication. For SOCKS4, only the user ID can be
	// checked because SOCKS4 has no password field.
	// 
	// SOCKS4a hostname-form requests are not supported. Use a numeric IPv4 address
	// with SOCKS4, or use SOCKS5 when the client needs to supply a domain name.
	// 
	// References:
	// [1] #DestHostname
	// [2] #DestPort
	// [3] #InboundSocksUsername
	void put_DynamicPortForwarding(bool newVal);

	// Enables automatic resolution of credentials from secure storage provided by the
	// operating system.
	// 
	// When set to true, supported password properties and methods may receive a
	// secret specification string beginning with!! instead of a literal password.
	// Chilkat resolves the secret from:
	// 
	//     * Windows Credential Manager on Windows.
	//     * Apple Keychain on macOS.
	// 
	// The specification format is:!![appName|]service[|domain]|username
	// 
	// This applies to HttpProxyPassword[1], SocksPassword[2], AuthenticatePw[3], and
	// AuthenticatePwPk[4].
	// 
	// The default value is false.
	// 
	// 
	// References:
	// [1] #HttpProxyPassword
	// [2] #SocksPassword
	// [3] #AuthenticatePw
	// [4] #AuthenticatePwPk
	bool get_EnableSecrets(void);
	// Enables automatic resolution of credentials from secure storage provided by the
	// operating system.
	// 
	// When set to true, supported password properties and methods may receive a
	// secret specification string beginning with!! instead of a literal password.
	// Chilkat resolves the secret from:
	// 
	//     * Windows Credential Manager on Windows.
	//     * Apple Keychain on macOS.
	// 
	// The specification format is:!![appName|]service[|domain]|username
	// 
	// This applies to HttpProxyPassword[1], SocksPassword[2], AuthenticatePw[3], and
	// AuthenticatePwPk[4].
	// 
	// The default value is false.
	// 
	// 
	// References:
	// [1] #HttpProxyPassword
	// [2] #SocksPassword
	// [3] #AuthenticatePw
	// [4] #AuthenticatePwPk
	void put_EnableSecrets(bool newVal);

	// Contains the SSH server host-key fingerprint after Connect[1] or
	// ConnectThroughSsh[2] establishes the SSH connection. The value is available
	// before user authentication.
	// 
	// Example: ssh-ed25519 256 e0:33:b1:81:a5:c6:9a:d2:2e:c9:d3:15:60:ea:cf:4c
	// 
	// Compare this value with a trusted expected fingerprint to verify the identity of
	// the SSH server. For ConnectThroughSsh[2], the fingerprint is for the final SSH
	// server, not the first-hop server.
	// 
	// The value may remain populated after CloseTunnel[3] or after the connection is
	// lost. Use IsSshConnected[4] to determine current connection state.
	// 
	// References:
	// [1] #Connect
	// [2] #ConnectThroughSsh
	// [3] #CloseTunnel
	// [4] #IsSshConnected
	void get_HostKeyFingerprint(CkString &str);
	// Contains the SSH server host-key fingerprint after Connect[1] or
	// ConnectThroughSsh[2] establishes the SSH connection. The value is available
	// before user authentication.
	// 
	// Example: ssh-ed25519 256 e0:33:b1:81:a5:c6:9a:d2:2e:c9:d3:15:60:ea:cf:4c
	// 
	// Compare this value with a trusted expected fingerprint to verify the identity of
	// the SSH server. For ConnectThroughSsh[2], the fingerprint is for the final SSH
	// server, not the first-hop server.
	// 
	// The value may remain populated after CloseTunnel[3] or after the connection is
	// lost. Use IsSshConnected[4] to determine current connection state.
	// 
	// References:
	// [1] #Connect
	// [2] #ConnectThroughSsh
	// [3] #CloseTunnel
	// [4] #IsSshConnected
	const wchar_t *hostKeyFingerprint(void);

	// Specifies the authentication method to use when the outbound connection to the
	// SSH server passes through an HTTP proxy that requires authentication.
	// 
	// Valid values are Basic and NTLM.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_HttpProxyAuthMethod(CkString &str);
	// Specifies the authentication method to use when the outbound connection to the
	// SSH server passes through an HTTP proxy that requires authentication.
	// 
	// Valid values are Basic and NTLM.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const wchar_t *httpProxyAuthMethod(void);
	// Specifies the authentication method to use when the outbound connection to the
	// SSH server passes through an HTTP proxy that requires authentication.
	// 
	// Valid values are Basic and NTLM.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_HttpProxyAuthMethod(const wchar_t *newVal);

	// Specifies the optional Windows domain used for NTLM authentication with the HTTP
	// proxy.
	// 
	// This applies only to the outbound proxy connection used to reach the SSH server,
	// and only when HttpProxyAuthMethod[1] is NTLM.
	// 
	// If SocksVersion[2] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #HttpProxyAuthMethod
	// [2] #SocksVersion
	void get_HttpProxyDomain(CkString &str);
	// Specifies the optional Windows domain used for NTLM authentication with the HTTP
	// proxy.
	// 
	// This applies only to the outbound proxy connection used to reach the SSH server,
	// and only when HttpProxyAuthMethod[1] is NTLM.
	// 
	// If SocksVersion[2] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #HttpProxyAuthMethod
	// [2] #SocksVersion
	const wchar_t *httpProxyDomain(void);
	// Specifies the optional Windows domain used for NTLM authentication with the HTTP
	// proxy.
	// 
	// This applies only to the outbound proxy connection used to reach the SSH server,
	// and only when HttpProxyAuthMethod[1] is NTLM.
	// 
	// If SocksVersion[2] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #HttpProxyAuthMethod
	// [2] #SocksVersion
	void put_HttpProxyDomain(const wchar_t *newVal);

	// Specifies the hostname or IPv4 address of the HTTP proxy through which the
	// outbound connection to the SSH server is made.
	// 
	// Leave this property empty when no HTTP proxy is required.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_HttpProxyHostname(CkString &str);
	// Specifies the hostname or IPv4 address of the HTTP proxy through which the
	// outbound connection to the SSH server is made.
	// 
	// Leave this property empty when no HTTP proxy is required.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const wchar_t *httpProxyHostname(void);
	// Specifies the hostname or IPv4 address of the HTTP proxy through which the
	// outbound connection to the SSH server is made.
	// 
	// Leave this property empty when no HTTP proxy is required.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_HttpProxyHostname(const wchar_t *newVal);

	// Specifies the password used to authenticate with the HTTP proxy for the outbound
	// connection to the SSH server.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_HttpProxyPassword(CkString &str);
	// Specifies the password used to authenticate with the HTTP proxy for the outbound
	// connection to the SSH server.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const wchar_t *httpProxyPassword(void);
	// Specifies the password used to authenticate with the HTTP proxy for the outbound
	// connection to the SSH server.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_HttpProxyPassword(const wchar_t *newVal);

	// Specifies the TCP port of the HTTP proxy used for the outbound connection to the
	// SSH server.
	// 
	// Common HTTP proxy ports include 8080 and 3128.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	int get_HttpProxyPort(void);
	// Specifies the TCP port of the HTTP proxy used for the outbound connection to the
	// SSH server.
	// 
	// Common HTTP proxy ports include 8080 and 3128.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_HttpProxyPort(int newVal);

	// Specifies the username used to authenticate with the HTTP proxy for the outbound
	// connection to the SSH server.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_HttpProxyUsername(CkString &str);
	// Specifies the username used to authenticate with the HTTP proxy for the outbound
	// connection to the SSH server.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const wchar_t *httpProxyUsername(void);
	// Specifies the username used to authenticate with the HTTP proxy for the outbound
	// connection to the SSH server.
	// 
	// If SocksVersion[1] is set to 4 or 5, the SOCKS proxy takes precedence and these
	// HTTP proxy settings are ignored. The proxies are not chained.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_HttpProxyUsername(const wchar_t *newVal);

	// Specifies a stall timeout, in milliseconds, for tunnel data-transfer operations.
	// The default value is 30000 milliseconds (30 seconds). A value of 0 disables the
	// timeout.
	// 
	// This property is not a general inactivity timer for established background
	// tunnel clients. An otherwise idle client, or a client with data queued while an
	// SSH channel is flow-controlled, may remain connected beyond this interval.
	// Applications should not rely on this property to disconnect clients merely
	// because no application data is flowing.
	int get_IdleTimeoutMs(void);
	// Specifies a stall timeout, in milliseconds, for tunnel data-transfer operations.
	// The default value is 30000 milliseconds (30 seconds). A value of 0 disables the
	// timeout.
	// 
	// This property is not a general inactivity timer for established background
	// tunnel clients. An otherwise idle client, or a client with data queued while an
	// SSH channel is flow-controlled, may remain connected beyond this interval.
	// Applications should not rely on this property to disconnect clients merely
	// because no application data is flowing.
	void put_IdleTimeoutMs(int newVal);

	// Specifies the password required from inbound SOCKS5 clients when
	// DynamicPortForwarding[1] is true.
	// 
	// This property is used together with InboundSocksUsername[2]. It does not apply
	// to SOCKS4 because the SOCKS4 protocol has no password field.
	// 
	// 
	// References:
	// [1] #DynamicPortForwarding
	// [2] #InboundSocksUsername
	void get_InboundSocksPassword(CkString &str);
	// Specifies the password required from inbound SOCKS5 clients when
	// DynamicPortForwarding[1] is true.
	// 
	// This property is used together with InboundSocksUsername[2]. It does not apply
	// to SOCKS4 because the SOCKS4 protocol has no password field.
	// 
	// 
	// References:
	// [1] #DynamicPortForwarding
	// [2] #InboundSocksUsername
	const wchar_t *inboundSocksPassword(void);
	// Specifies the password required from inbound SOCKS5 clients when
	// DynamicPortForwarding[1] is true.
	// 
	// This property is used together with InboundSocksUsername[2]. It does not apply
	// to SOCKS4 because the SOCKS4 protocol has no password field.
	// 
	// 
	// References:
	// [1] #DynamicPortForwarding
	// [2] #InboundSocksUsername
	void put_InboundSocksPassword(const wchar_t *newVal);

	// Specifies the username required from inbound SOCKS clients when
	// DynamicPortForwarding[1] is true.
	// 
	//     * For SOCKS5, setting this property enables username/password
	//     authentication.
	//     * For SOCKS4, the value is compared with the client-supplied user ID.
	//     * Leave it empty to require no inbound SOCKS username.
	// 
	// References:
	// [1] #DynamicPortForwarding
	void get_InboundSocksUsername(CkString &str);
	// Specifies the username required from inbound SOCKS clients when
	// DynamicPortForwarding[1] is true.
	// 
	//     * For SOCKS5, setting this property enables username/password
	//     authentication.
	//     * For SOCKS4, the value is compared with the client-supplied user ID.
	//     * Leave it empty to require no inbound SOCKS username.
	// 
	// References:
	// [1] #DynamicPortForwarding
	const wchar_t *inboundSocksUsername(void);
	// Specifies the username required from inbound SOCKS clients when
	// DynamicPortForwarding[1] is true.
	// 
	//     * For SOCKS5, setting this property enables username/password
	//     authentication.
	//     * For SOCKS4, the value is compared with the client-supplied user ID.
	//     * Leave it empty to require no inbound SOCKS username.
	// 
	// References:
	// [1] #DynamicPortForwarding
	void put_InboundSocksUsername(const wchar_t *newVal);

	// true when the local listener thread is running and accepting inbound TCP
	// connections; otherwise false.
	// 
	// This property describes only the local listener. It can remain true after the
	// SSH connection is lost or after CloseTunnel[1] is called. In those states a
	// client may connect to the local port even though its traffic cannot be
	// forwarded.
	// 
	// Use IsSshConnected[2] separately when the application also needs to know whether
	// the SSH transport is available.
	// 
	// 
	// References:
	// [1] #CloseTunnel
	// [2] #IsSshConnected
	bool get_IsAccepting(void);

	// Controls whether activity from the background listener thread is retained in
	// memory.
	// 
	// The default value is false. When enabled, retrieve the log from AcceptLog[1].
	// 
	// 
	// References:
	// [1] #AcceptLog
	bool get_KeepAcceptLog(void);
	// Controls whether activity from the background listener thread is retained in
	// memory.
	// 
	// The default value is false. When enabled, retrieve the log from AcceptLog[1].
	// 
	// 
	// References:
	// [1] #AcceptLog
	void put_KeepAcceptLog(bool newVal);

	// Controls whether SSH tunnel-thread activity is retained in memory.
	// 
	// The default value is false. When enabled, retrieve the log from TunnelLog[1].
	// 
	// 
	// References:
	// [1] #TunnelLog
	bool get_KeepTunnelLog(void);
	// Controls whether SSH tunnel-thread activity is retained in memory.
	// 
	// The default value is false. When enabled, retrieve the log from TunnelLog[1].
	// 
	// 
	// References:
	// [1] #TunnelLog
	void put_KeepTunnelLog(bool newVal);

	// Specifies the local IPv4 address to which the tunnel's listening socket is
	// bound.
	// 
	// +---------------------+--------------------------------------------------------+
	// |        Value        |                   Listener exposure                    |
	// +=====================+========================================================+
	// | Empty string        | Binds to 0.0.0.0 and accepts connections on all local  |
	// |                     | IPv4 interfaces, subject to firewall rules.            |
	// +---------------------+--------------------------------------------------------+
	// | 127.0.0.1           | Accepts connections only from the local computer       |
	// |                     | through loopback.                                      |
	// +---------------------+--------------------------------------------------------+
	// | A specific local    | Accepts connections through that interface only;       |
	// | LAN address         | loopback is not included automatically.                |
	// +---------------------+--------------------------------------------------------+
	// 
	// For a tunnel intended only for local applications, explicitly set this property
	// to 127.0.0.1. Leaving it empty may expose the listening port to other computers
	// on the network.
	// 
	// If the value is malformed or is not assigned to a local interface,
	// BeginAccepting[1] returns false and the bind failure is available in
	// LastErrorText and the accept log.
	// 
	// 
	// References:
	// [1] #BeginAccepting
	void get_ListenBindIpAddress(CkString &str);
	// Specifies the local IPv4 address to which the tunnel's listening socket is
	// bound.
	// 
	// +---------------------+--------------------------------------------------------+
	// |        Value        |                   Listener exposure                    |
	// +=====================+========================================================+
	// | Empty string        | Binds to 0.0.0.0 and accepts connections on all local  |
	// |                     | IPv4 interfaces, subject to firewall rules.            |
	// +---------------------+--------------------------------------------------------+
	// | 127.0.0.1           | Accepts connections only from the local computer       |
	// |                     | through loopback.                                      |
	// +---------------------+--------------------------------------------------------+
	// | A specific local    | Accepts connections through that interface only;       |
	// | LAN address         | loopback is not included automatically.                |
	// +---------------------+--------------------------------------------------------+
	// 
	// For a tunnel intended only for local applications, explicitly set this property
	// to 127.0.0.1. Leaving it empty may expose the listening port to other computers
	// on the network.
	// 
	// If the value is malformed or is not assigned to a local interface,
	// BeginAccepting[1] returns false and the bind failure is available in
	// LastErrorText and the accept log.
	// 
	// 
	// References:
	// [1] #BeginAccepting
	const wchar_t *listenBindIpAddress(void);
	// Specifies the local IPv4 address to which the tunnel's listening socket is
	// bound.
	// 
	// +---------------------+--------------------------------------------------------+
	// |        Value        |                   Listener exposure                    |
	// +=====================+========================================================+
	// | Empty string        | Binds to 0.0.0.0 and accepts connections on all local  |
	// |                     | IPv4 interfaces, subject to firewall rules.            |
	// +---------------------+--------------------------------------------------------+
	// | 127.0.0.1           | Accepts connections only from the local computer       |
	// |                     | through loopback.                                      |
	// +---------------------+--------------------------------------------------------+
	// | A specific local    | Accepts connections through that interface only;       |
	// | LAN address         | loopback is not included automatically.                |
	// +---------------------+--------------------------------------------------------+
	// 
	// For a tunnel intended only for local applications, explicitly set this property
	// to 127.0.0.1. Leaving it empty may expose the listening port to other computers
	// on the network.
	// 
	// If the value is malformed or is not assigned to a local interface,
	// BeginAccepting[1] returns false and the bind failure is available in
	// LastErrorText and the accept log.
	// 
	// 
	// References:
	// [1] #BeginAccepting
	void put_ListenBindIpAddress(const wchar_t *newVal);

	// Contains the local TCP port used by the listener started by BeginAccepting[1].
	// 
	//     * If BeginAccepting succeeds with a nonzero requested port, this property
	//     contains that port.
	//     * If BeginAccepting succeeds with 0, the operating system chooses an
	//     available port and this property contains the allocated port when the method
	//     returns.
	//     * After a bind failure for an explicitly requested port, this property may
	//     still contain the requested port even though IsAccepting[2] is false.
	//     * The value is initially 0.
	// 
	// References:
	// [1] #BeginAccepting
	// [2] #IsAccepting
	int get_ListenPort(void);

	// Specifies the local IP address to which the outbound socket is bound before
	// connecting to the SSH server.
	// 
	// Most applications should leave this property empty. Set it only on a multihomed
	// computer when the SSH connection must originate from a specific local network
	// interface or IP address.
	// 
	void get_OutboundBindIpAddress(CkString &str);
	// Specifies the local IP address to which the outbound socket is bound before
	// connecting to the SSH server.
	// 
	// Most applications should leave this property empty. Set it only on a multihomed
	// computer when the SSH connection must originate from a specific local network
	// interface or IP address.
	// 
	const wchar_t *outboundBindIpAddress(void);
	// Specifies the local IP address to which the outbound socket is bound before
	// connecting to the SSH server.
	// 
	// Most applications should leave this property empty. Set it only on a multihomed
	// computer when the SSH connection must originate from a specific local network
	// interface or IP address.
	// 
	void put_OutboundBindIpAddress(const wchar_t *newVal);

	// Specifies the local TCP port to bind before making the outbound connection to
	// the SSH server.
	// 
	// The default value is 0, which allows the operating system to choose an available
	// ephemeral port. Nearly all applications should leave this property unchanged.
	// 
	int get_OutboundBindPort(void);
	// Specifies the local TCP port to bind before making the outbound connection to
	// the SSH server.
	// 
	// The default value is 0, which allows the operating system to choose an available
	// ephemeral port. Nearly all applications should leave this property unchanged.
	// 
	void put_OutboundBindPort(int newVal);

	// Controls which IP version is preferred when a hostname resolves to both IPv4 and
	// IPv6 addresses.
	// 
	//     * false (the default) prefers IPv4.
	//     * true prefers IPv6.
	bool get_PreferIpv6(void);
	// Controls which IP version is preferred when a hostname resolves to both IPv4 and
	// IPv6 addresses.
	// 
	//     * false (the default) prefers IPv4.
	//     * true prefers IPv6.
	void put_PreferIpv6(bool newVal);

	// Specifies the hostname or IPv4 address of the outbound SOCKS4 or SOCKS5 proxy
	// used to reach the SSH server.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksHostname(CkString &str);
	// Specifies the hostname or IPv4 address of the outbound SOCKS4 or SOCKS5 proxy
	// used to reach the SSH server.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const wchar_t *socksHostname(void);
	// Specifies the hostname or IPv4 address of the outbound SOCKS4 or SOCKS5 proxy
	// used to reach the SSH server.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksHostname(const wchar_t *newVal);

	// Specifies the password for authenticating with an outbound SOCKS5 proxy used to
	// reach the SSH server.
	// 
	// SOCKS4 does not support password authentication, so this property does not apply
	// when SocksVersion[1] is 4.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksPassword(CkString &str);
	// Specifies the password for authenticating with an outbound SOCKS5 proxy used to
	// reach the SSH server.
	// 
	// SOCKS4 does not support password authentication, so this property does not apply
	// when SocksVersion[1] is 4.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const wchar_t *socksPassword(void);
	// Specifies the password for authenticating with an outbound SOCKS5 proxy used to
	// reach the SSH server.
	// 
	// SOCKS4 does not support password authentication, so this property does not apply
	// when SocksVersion[1] is 4.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksPassword(const wchar_t *newVal);

	// Specifies the TCP port of the outbound SOCKS4 or SOCKS5 proxy used to reach the
	// SSH server.
	// 
	// The default value is 1080. This property is used only when SocksVersion[1] is 4
	// or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	int get_SocksPort(void);
	// Specifies the TCP port of the outbound SOCKS4 or SOCKS5 proxy used to reach the
	// SSH server.
	// 
	// The default value is 1080. This property is used only when SocksVersion[1] is 4
	// or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksPort(int newVal);

	// Specifies the username for the outbound SOCKS4 or SOCKS5 proxy used to reach the
	// SSH server.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksUsername(CkString &str);
	// Specifies the username for the outbound SOCKS4 or SOCKS5 proxy used to reach the
	// SSH server.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const wchar_t *socksUsername(void);
	// Specifies the username for the outbound SOCKS4 or SOCKS5 proxy used to reach the
	// SSH server.
	// 
	// This property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksUsername(const wchar_t *newVal);

	// Selects whether the outbound connection to the SSH server is made through a
	// SOCKS proxy.
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
	// When this property is 4 or 5, the SOCKS proxy settings take precedence over the
	// HTTP proxy settings. The SOCKS and HTTP proxies are not chained.
	// 
	int get_SocksVersion(void);
	// Selects whether the outbound connection to the SSH server is made through a
	// SOCKS proxy.
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
	// When this property is 4 or 5, the SOCKS proxy settings take precedence over the
	// HTTP proxy settings. The SOCKS and HTTP proxies are not chained.
	// 
	void put_SocksVersion(int newVal);

	// Sets the receive-buffer size for the underlying TCP socket.
	// 
	// The default value is 4194304 bytes. Normally this property should remain
	// unchanged. If receive performance is unusually slow, testing a larger value that
	// is a multiple of 4096 may help.
	// 
	int get_SoRcvBuf(void);
	// Sets the receive-buffer size for the underlying TCP socket.
	// 
	// The default value is 4194304 bytes. Normally this property should remain
	// unchanged. If receive performance is unusually slow, testing a larger value that
	// is a multiple of 4096 may help.
	// 
	void put_SoRcvBuf(int newVal);

	// Sets the send-buffer size for the underlying TCP socket.
	// 
	// The default value is 262144 bytes. Normally this property should remain
	// unchanged. If send performance is unusually slow, testing values such as 524288
	// or 1048576 may help. A multiple of 4096 is recommended.
	// 
	int get_SoSndBuf(void);
	// Sets the send-buffer size for the underlying TCP socket.
	// 
	// The default value is 262144 bytes. Normally this property should remain
	// unchanged. If send performance is unusually slow, testing values such as 524288
	// or 1048576 may help. A multiple of 4096 is recommended.
	// 
	void put_SoSndBuf(int newVal);

	// Controls the TCP_NODELAY socket option for the underlying TCP connection.
	// 
	// The default value is false. Setting it to true disables the Nagle algorithm,
	// which can reduce latency when many small amounts of data are sent.
	// 
	bool get_TcpNoDelay(void);
	// Controls the TCP_NODELAY socket option for the underlying TCP connection.
	// 
	// The default value is false. Setting it to true disables the Nagle algorithm,
	// which can reduce latency when many small amounts of data are sent.
	// 
	void put_TcpNoDelay(bool newVal);

	// Contains the in-memory activity log for the SSH tunnel and client-manager
	// threads. The log is populated only when KeepTunnelLog[1] is true.
	// 
	// Treat this log as sensitive diagnostic data. It can contain hostnames, ports,
	// usernames, proxy details, SOCKS handshake information, and authentication
	// failure values. Do not publish or persist it without reviewing and protecting
	// its contents.
	// 
	// References:
	// [1] #KeepTunnelLog
	void get_TunnelLog(CkString &str);
	// Contains the in-memory activity log for the SSH tunnel and client-manager
	// threads. The log is populated only when KeepTunnelLog[1] is true.
	// 
	// Treat this log as sensitive diagnostic data. It can contain hostnames, ports,
	// usernames, proxy details, SOCKS handshake information, and authentication
	// failure values. Do not publish or persist it without reviewing and protecting
	// its contents.
	// 
	// References:
	// [1] #KeepTunnelLog
	const wchar_t *tunnelLog(void);
	// Contains the in-memory activity log for the SSH tunnel and client-manager
	// threads. The log is populated only when KeepTunnelLog[1] is true.
	// 
	// Treat this log as sensitive diagnostic data. It can contain hostnames, ports,
	// usernames, proxy details, SOCKS handshake information, and authentication
	// failure values. Do not publish or persist it without reviewing and protecting
	// its contents.
	// 
	// References:
	// [1] #KeepTunnelLog
	void put_TunnelLog(const wchar_t *newVal);

	// Specifies the local file path where SSH tunnel-thread activity is written.
	// 
	// This file-based log is separate from the in-memory TunnelLog[1].
	// 
	// 
	// References:
	// [1] #TunnelLog
	void get_TunnelLogPath(CkString &str);
	// Specifies the local file path where SSH tunnel-thread activity is written.
	// 
	// This file-based log is separate from the in-memory TunnelLog[1].
	// 
	// 
	// References:
	// [1] #TunnelLog
	const wchar_t *tunnelLogPath(void);
	// Specifies the local file path where SSH tunnel-thread activity is written.
	// 
	// This file-based log is separate from the in-memory TunnelLog[1].
	// 
	// 
	// References:
	// [1] #TunnelLog
	void put_TunnelLogPath(const wchar_t *newVal);

	// Provides optional behavior for uncommon requirements. The default value is an
	// empty string, which is appropriate for most applications.
	// 
	// To enable more than one option, provide a comma-separated list of keywords.
	// 
	// +--------------------------------+---------------------------------------------+
	// |            Keyword             |                   Effect                    |
	// +================================+=============================================+
	// | ForceUserAuthRsaSha1           | Forces rsa-sha1 for public-key user         |
	// |                                | authentication. Set this before connecting. |
	// |                                | Added in v9.5.0.98.                         |
	// +--------------------------------+---------------------------------------------+
	// | NoKeepAliveIgnoreMsg           | Disables the default SSH ignore message     |
	// |                                | sent every 20 seconds to keep an idle       |
	// |                                | connection alive. Added in v9.5.0.76.       |
	// +--------------------------------+---------------------------------------------+
	// | no-weak-mac-algs               | Removes hmac-sha1-96 , hmac-sha1 , hmac-md5 |
	// |                                | , and hmac-ripemd160 from the offered MAC   |
	// |                                | algorithms. Added in v9.5.0.98.             |
	// +--------------------------------+---------------------------------------------+
	// | ProtectFromVpn                 | On Android, bypasses an installed or active |
	// |                                | VPN. Added in v9.5.0.80.                    |
	// +--------------------------------+---------------------------------------------+
	// | +ssh-hmac-etm                  | Re-enables SSH encrypt-then-MAC algorithms  |
	// |                                | that were disabled by default in v9.5.0.97  |
	// |                                | as part of the Terrapin mitigation.         |
	// +--------------------------------+---------------------------------------------+
	// | +chacha20-poly1305@openssh.com | Re-enables chacha20-poly1305@openssh.com ,  |
	// |                                | which was removed from the default offer in |
	// |                                | v9.5.0.97 as part of the Terrapin           |
	// |                                | mitigation.                                 |
	// +--------------------------------+---------------------------------------------+
	// 
	void get_UncommonOptions(CkString &str);
	// Provides optional behavior for uncommon requirements. The default value is an
	// empty string, which is appropriate for most applications.
	// 
	// To enable more than one option, provide a comma-separated list of keywords.
	// 
	// +--------------------------------+---------------------------------------------+
	// |            Keyword             |                   Effect                    |
	// +================================+=============================================+
	// | ForceUserAuthRsaSha1           | Forces rsa-sha1 for public-key user         |
	// |                                | authentication. Set this before connecting. |
	// |                                | Added in v9.5.0.98.                         |
	// +--------------------------------+---------------------------------------------+
	// | NoKeepAliveIgnoreMsg           | Disables the default SSH ignore message     |
	// |                                | sent every 20 seconds to keep an idle       |
	// |                                | connection alive. Added in v9.5.0.76.       |
	// +--------------------------------+---------------------------------------------+
	// | no-weak-mac-algs               | Removes hmac-sha1-96 , hmac-sha1 , hmac-md5 |
	// |                                | , and hmac-ripemd160 from the offered MAC   |
	// |                                | algorithms. Added in v9.5.0.98.             |
	// +--------------------------------+---------------------------------------------+
	// | ProtectFromVpn                 | On Android, bypasses an installed or active |
	// |                                | VPN. Added in v9.5.0.80.                    |
	// +--------------------------------+---------------------------------------------+
	// | +ssh-hmac-etm                  | Re-enables SSH encrypt-then-MAC algorithms  |
	// |                                | that were disabled by default in v9.5.0.97  |
	// |                                | as part of the Terrapin mitigation.         |
	// +--------------------------------+---------------------------------------------+
	// | +chacha20-poly1305@openssh.com | Re-enables chacha20-poly1305@openssh.com ,  |
	// |                                | which was removed from the default offer in |
	// |                                | v9.5.0.97 as part of the Terrapin           |
	// |                                | mitigation.                                 |
	// +--------------------------------+---------------------------------------------+
	// 
	const wchar_t *uncommonOptions(void);
	// Provides optional behavior for uncommon requirements. The default value is an
	// empty string, which is appropriate for most applications.
	// 
	// To enable more than one option, provide a comma-separated list of keywords.
	// 
	// +--------------------------------+---------------------------------------------+
	// |            Keyword             |                   Effect                    |
	// +================================+=============================================+
	// | ForceUserAuthRsaSha1           | Forces rsa-sha1 for public-key user         |
	// |                                | authentication. Set this before connecting. |
	// |                                | Added in v9.5.0.98.                         |
	// +--------------------------------+---------------------------------------------+
	// | NoKeepAliveIgnoreMsg           | Disables the default SSH ignore message     |
	// |                                | sent every 20 seconds to keep an idle       |
	// |                                | connection alive. Added in v9.5.0.76.       |
	// +--------------------------------+---------------------------------------------+
	// | no-weak-mac-algs               | Removes hmac-sha1-96 , hmac-sha1 , hmac-md5 |
	// |                                | , and hmac-ripemd160 from the offered MAC   |
	// |                                | algorithms. Added in v9.5.0.98.             |
	// +--------------------------------+---------------------------------------------+
	// | ProtectFromVpn                 | On Android, bypasses an installed or active |
	// |                                | VPN. Added in v9.5.0.80.                    |
	// +--------------------------------+---------------------------------------------+
	// | +ssh-hmac-etm                  | Re-enables SSH encrypt-then-MAC algorithms  |
	// |                                | that were disabled by default in v9.5.0.97  |
	// |                                | as part of the Terrapin mitigation.         |
	// +--------------------------------+---------------------------------------------+
	// | +chacha20-poly1305@openssh.com | Re-enables chacha20-poly1305@openssh.com ,  |
	// |                                | which was removed from the default offer in |
	// |                                | v9.5.0.97 as part of the Terrapin           |
	// |                                | mitigation.                                 |
	// +--------------------------------+---------------------------------------------+
	// 
	void put_UncommonOptions(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Authenticates with the SSH server using public-key authentication.
	// 
	// The public key corresponding to privateKey must already be installed for
	// username on the SSH server.
	// 
	// Call Connect[1] or ConnectThroughSsh[2] before calling this method.
	// 
	// When requesting support for an authentication failure, include the complete
	// LastErrorText.
	// 
	// References:
	// [1] #Connect
	// [2] #ConnectThroughSsh
	bool AuthenticatePk(const wchar_t *username, CkSshKeyW &privateKey);

	// Creates an asynchronous task to call the AuthenticatePk method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AuthenticatePkAsync(const wchar_t *username, CkSshKeyW &privateKey);

	// Authenticates with the SSH server using login and password.
	// 
	// Establish the SSH connection first by calling Connect[1] or
	// ConnectThroughSsh[2]. After authentication succeeds, call BeginAccepting[3] to
	// begin accepting tunnel clients.
	// 
	//     * A rejected username or password does not close the SSH connection; the
	//     application may correct the credentials and call this method again.
	//     * Calling this method again after authentication has already succeeded
	//     returns false with an “Already authenticated” error.
	// When requesting support for an authentication failure, include the complete
	// LastErrorText captured immediately after the failed call.
	// 
	// References:
	// [1] #Connect
	// [2] #ConnectThroughSsh
	// [3] #BeginAccepting
	bool AuthenticatePw(const wchar_t *login, const wchar_t *password);

	// Creates an asynchronous task to call the AuthenticatePw method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AuthenticatePwAsync(const wchar_t *login, const wchar_t *password);

	// Authenticates with an SSH server that requires both a password and a private
	// key.
	// 
	// The public key corresponding to privateKey must already be installed for
	// username on the SSH server. Most SSH servers require either password
	// authentication or public-key authentication rather than both.
	// 
	// When requesting support for an authentication failure, include the complete
	// LastErrorText.
	bool AuthenticatePwPk(const wchar_t *username, const wchar_t *password, CkSshKeyW &privateKey);

	// Creates an asynchronous task to call the AuthenticatePwPk method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AuthenticatePwPkAsync(const wchar_t *username, const wchar_t *password, CkSshKeyW &privateKey);

	// Performs the same password authentication as AuthenticatePw[1], but receives the
	// login and password in SecureString objects.
	// 
	// 
	// References:
	// [1] #AuthenticatePw
	bool AuthenticateSecPw(CkSecureStringW &login, CkSecureStringW &password);

	// Creates an asynchronous task to call the AuthenticateSecPw method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AuthenticateSecPwAsync(CkSecureStringW &login, CkSecureStringW &password);

	// Performs the same combined password-and-private-key authentication as
	// AuthenticatePwPk[1], but receives the username and password in SecureString
	// objects.
	// 
	// 
	// References:
	// [1] #AuthenticatePwPk
	bool AuthenticateSecPwPk(CkSecureStringW &username, CkSecureStringW &password, CkSshKeyW &privateKey);

	// Creates an asynchronous task to call the AuthenticateSecPwPk method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AuthenticateSecPwPkAsync(CkSecureStringW &username, CkSecureStringW &password, CkSshKeyW &privateKey);

	// Creates and starts the local listener on listenPort.
	// 
	// The SSH connection must already have been established. Although the listener can
	// be started before user authentication, clients accepted in that state cannot be
	// forwarded. The recommended sequence is to connect, authenticate, and then call
	// this method.
	// 
	//     * The requested port must not already be in use on the selected local
	//     interface.
	//     * Pass 0 to let the operating system choose an available port, then read
	//     ListenPort[1].
	//     * Calling this method while the listener is already running returns false.
	// 
	// The method waits for the initial bind-and-listen result. It returns false for
	// errors such as an occupied port, a malformed bind address, or an address that is
	// not assigned to the local computer. Details are available immediately in
	// LastErrorText and, when enabled, the accept log.
	// 
	// A successful return means the listener was bound and started. No additional
	// fixed delay is required merely to discover an initial bind failure.
	// 
	// References:
	// [1] #ListenPort
	bool BeginAccepting(int listenPort);

	// Creates an asynchronous task to call the BeginAccepting method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *BeginAcceptingAsync(int listenPort);

	// Disconnects active tunnel clients and stops the tunnel-manager thread.
	// 
	// When waitForThreads is true, the method waits for the client and
	// tunnel-manager threads to exit. It returns false if a worker thread does not
	// stop; capture LastErrorText immediately for details.
	// 
	// This method does not stop the local listener and does not disconnect or reset
	// the underlying SSH transport. Call StopAccepting[1] separately to stop accepting
	// local TCP connections. After this method returns, the listener may still accept
	// a local connection even though the connection cannot be forwarded.
	// 
	// Calling this method more than once is allowed. However, it does not reset the
	// object for a new call to Connect[2]. Use a new SshTunnel object when connecting
	// to a different SSH server.
	// 
	// 
	// References:
	// [1] #StopAccepting
	// [2] #Connect
	bool CloseTunnel(bool waitForThreads);

	// Establishes the SSH connection that will carry tunneled traffic. This method
	// performs the TCP or proxy connection, the SSH protocol handshake, and host-key
	// negotiation, but it does not authenticate the SSH user.
	// 
	// After connecting, verify HostKeyFingerprint[1], then authenticate by calling one
	// of the Authenticate* methods. Finally, call BeginAccepting[2] to start the local
	// listener.
	// 
	// The host-key fingerprint is available immediately after this method succeeds,
	// before user authentication. Calling Connect again while an SSH tunnel already
	// exists returns false.
	// 
	// Chilkat sends an SSH ignore message every 20 seconds to help keep an unused SSH
	// connection alive. To disable this behavior, add NoKeepAliveIgnoreMsg to
	// UncommonOptions[3] before connecting.
	// 
	// 
	// References:
	// [1] #HostKeyFingerprint
	// [2] #BeginAccepting
	// [3] #UncommonOptions
	bool Connect(const wchar_t *hostname, int port);

	// Creates an asynchronous task to call the Connect method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ConnectAsync(const wchar_t *hostname, int port);

	// Connects to a second SSH server through the existing connected and authenticated
	// Ssh object supplied in ssh.
	// 
	// application -> first SSH server -> second SSH server
	// 
	// hostname and port identify the second SSH server. After this method succeeds,
	// call an authentication method on this SshTunnel object to authenticate with the
	// second server.
	// 
	// The supplied Ssh object is borrowed, not copied. It must remain alive,
	// connected, and authenticated for as long as this tunnel is used. If the
	// first-hop object is disconnected, existing forwarded clients stop working and
	// new local connections cannot be forwarded. The local listener may nevertheless
	// remain active until explicitly stopped.
	// 
	// HostKeyFingerprint[1] reports the fingerprint of the second SSH server. After
	// the connection is established, fixed forwarding destinations such as 127.0.0.1
	// are interpreted from the second server's network environment.
	// 
	// 
	// References:
	// [1] #HostKeyFingerprint
	bool ConnectThroughSsh(CkSshW &ssh, const wchar_t *hostname, int port);

	// Creates an asynchronous task to call the ConnectThroughSsh method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ConnectThroughSshAsync(CkSshW &ssh, const wchar_t *hostname, int port);

	// Continues a keyboard-interactive authentication exchange started by
	// StartKeyboardAuth[1].
	// 
	// If the server requested one response, pass that value directly in response. If
	// it requested multiple responses, pass XML in the following form:
	// 
	// _LT_response_GT_
	//   _LT_response1_GT_response to first prompt_LT_/response1_GT_
	//   _LT_response2_GT_response to second prompt_LT_/response2_GT_
	//   ...
	//   _LT_responseN_GT_response to Nth prompt_LT_/responseN_GT_
	// _LT_/response_GT_
	// 
	// When authentication completes, the returned XML indicates success or failure:
	// 
	// _LT_success_GT_success message_LT_/success_GT_
	// 
	// _LT_error_GT_error message_LT_/error_GT_
	// 
	// If another challenge is required, the method returns another infoRequest XML
	// document containing the next set of prompts.
	// 
	// 
	// References:
	// [1] #StartKeyboardAuth
	bool ContinueKeyboardAuth(const wchar_t *response, CkString &outStr);
	// Continues a keyboard-interactive authentication exchange started by
	// StartKeyboardAuth[1].
	// 
	// If the server requested one response, pass that value directly in response. If
	// it requested multiple responses, pass XML in the following form:
	// 
	// _LT_response_GT_
	//   _LT_response1_GT_response to first prompt_LT_/response1_GT_
	//   _LT_response2_GT_response to second prompt_LT_/response2_GT_
	//   ...
	//   _LT_responseN_GT_response to Nth prompt_LT_/responseN_GT_
	// _LT_/response_GT_
	// 
	// When authentication completes, the returned XML indicates success or failure:
	// 
	// _LT_success_GT_success message_LT_/success_GT_
	// 
	// _LT_error_GT_error message_LT_/error_GT_
	// 
	// If another challenge is required, the method returns another infoRequest XML
	// document containing the next set of prompts.
	// 
	// 
	// References:
	// [1] #StartKeyboardAuth
	const wchar_t *continueKeyboardAuth(const wchar_t *response);

	// Creates an asynchronous task to call the ContinueKeyboardAuth method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ContinueKeyboardAuthAsync(const wchar_t *response);

	// Disconnects all active tunnel clients while leaving the local listener and SSH
	// connection available.
	// 
	// When waitForThreads is true, the method waits for the current client threads
	// to exit before returning. The listener continues accepting new clients, and
	// newly accepted clients can be forwarded normally.
	// 
	bool DisconnectAllClients(bool waitForThreads);

	// Returns an XML snapshot describing the tunnel manager, SSH channels, and current
	// tunnel clients. The returned data is intended for diagnostics and monitoring.
	// 
	// A typical result has the following structure:
	// 
	// _LT_CurrentState_GT_
	//   _LT_tunnelManager rcvByteCount="433" sndByteCount="34"
	//       threadRunning="1" dynamicPortForwarding="0"
	//       staticDestHost="localhost" staticDestPort="18080"_GT_
	//     _LT_openChannels count="1"_GT_
	//       _LT_channel num="101" channelType="direct-tcpip"
	//           clientWinSize="2096927" serverWinSize="2097127" /_GT_
	//     _LT_/openChannels_GT_
	//     _LT_closedChannels count="0" /_GT_
	//   _LT_/tunnelManager_GT_
	//   _LT_clients count="1"_GT_
	//     _LT_client destIp="localhost" destPort="18080"
	//         sshChannelNum="101" threadRunning="1"
	//         rcvByteCount="25" sndByteCount="225" /_GT_
	//   _LT_/clients_GT_
	// _LT_/CurrentState_GT_
	// 
	// The exact child elements can vary with state. For example, channel collections
	// may be empty, and some transport details may be omitted before the tunnel is
	// started or after it stops.
	// 
	// +-----------------------+------------------------------------------------------+
	// |        Section        |                     Information                      |
	// +=======================+======================================================+
	// | tunnelManager         | Aggregate byte counts, worker-thread state,          |
	// |                       | forwarding mode, and configured fixed destination.   |
	// +-----------------------+------------------------------------------------------+
	// | openChannels and      | SSH channel numbers, close/EOF flags, packet sizes,  |
	// | closedChannels        | and flow-control window sizes.                       |
	// +-----------------------+------------------------------------------------------+
	// | clients               | Per-client destination, SSH channel number, worker   |
	// |                       | state, age/activity counters, pending-data flags,    |
	// |                       | and byte counts.                                     |
	// +-----------------------+------------------------------------------------------+
	// 
	bool GetCurrentState(CkString &outStr);
	// Returns an XML snapshot describing the tunnel manager, SSH channels, and current
	// tunnel clients. The returned data is intended for diagnostics and monitoring.
	// 
	// A typical result has the following structure:
	// 
	// _LT_CurrentState_GT_
	//   _LT_tunnelManager rcvByteCount="433" sndByteCount="34"
	//       threadRunning="1" dynamicPortForwarding="0"
	//       staticDestHost="localhost" staticDestPort="18080"_GT_
	//     _LT_openChannels count="1"_GT_
	//       _LT_channel num="101" channelType="direct-tcpip"
	//           clientWinSize="2096927" serverWinSize="2097127" /_GT_
	//     _LT_/openChannels_GT_
	//     _LT_closedChannels count="0" /_GT_
	//   _LT_/tunnelManager_GT_
	//   _LT_clients count="1"_GT_
	//     _LT_client destIp="localhost" destPort="18080"
	//         sshChannelNum="101" threadRunning="1"
	//         rcvByteCount="25" sndByteCount="225" /_GT_
	//   _LT_/clients_GT_
	// _LT_/CurrentState_GT_
	// 
	// The exact child elements can vary with state. For example, channel collections
	// may be empty, and some transport details may be omitted before the tunnel is
	// started or after it stops.
	// 
	// +-----------------------+------------------------------------------------------+
	// |        Section        |                     Information                      |
	// +=======================+======================================================+
	// | tunnelManager         | Aggregate byte counts, worker-thread state,          |
	// |                       | forwarding mode, and configured fixed destination.   |
	// +-----------------------+------------------------------------------------------+
	// | openChannels and      | SSH channel numbers, close/EOF flags, packet sizes,  |
	// | closedChannels        | and flow-control window sizes.                       |
	// +-----------------------+------------------------------------------------------+
	// | clients               | Per-client destination, SSH channel number, worker   |
	// |                       | state, age/activity counters, pending-data flags,    |
	// |                       | and byte counts.                                     |
	// +-----------------------+------------------------------------------------------+
	// 
	const wchar_t *getCurrentState(void);
	// Returns an XML snapshot describing the tunnel manager, SSH channels, and current
	// tunnel clients. The returned data is intended for diagnostics and monitoring.
	// 
	// A typical result has the following structure:
	// 
	// _LT_CurrentState_GT_
	//   _LT_tunnelManager rcvByteCount="433" sndByteCount="34"
	//       threadRunning="1" dynamicPortForwarding="0"
	//       staticDestHost="localhost" staticDestPort="18080"_GT_
	//     _LT_openChannels count="1"_GT_
	//       _LT_channel num="101" channelType="direct-tcpip"
	//           clientWinSize="2096927" serverWinSize="2097127" /_GT_
	//     _LT_/openChannels_GT_
	//     _LT_closedChannels count="0" /_GT_
	//   _LT_/tunnelManager_GT_
	//   _LT_clients count="1"_GT_
	//     _LT_client destIp="localhost" destPort="18080"
	//         sshChannelNum="101" threadRunning="1"
	//         rcvByteCount="25" sndByteCount="225" /_GT_
	//   _LT_/clients_GT_
	// _LT_/CurrentState_GT_
	// 
	// The exact child elements can vary with state. For example, channel collections
	// may be empty, and some transport details may be omitted before the tunnel is
	// started or after it stops.
	// 
	// +-----------------------+------------------------------------------------------+
	// |        Section        |                     Information                      |
	// +=======================+======================================================+
	// | tunnelManager         | Aggregate byte counts, worker-thread state,          |
	// |                       | forwarding mode, and configured fixed destination.   |
	// +-----------------------+------------------------------------------------------+
	// | openChannels and      | SSH channel numbers, close/EOF flags, packet sizes,  |
	// | closedChannels        | and flow-control window sizes.                       |
	// +-----------------------+------------------------------------------------------+
	// | clients               | Per-client destination, SSH channel number, worker   |
	// |                       | state, age/activity counters, pending-data flags,    |
	// |                       | and byte counts.                                     |
	// +-----------------------+------------------------------------------------------+
	// 
	const wchar_t *currentState(void);

	// Returns true when the SSH transport used by this tunnel is connected;
	// otherwise returns false.
	// 
	// This is independent of the local listener state. The listener may still be
	// accepting local TCP connections when this method returns false, but those
	// connections cannot be forwarded until a usable SSH transport exists.
	// 
	// For a tunnel created with ConnectThroughSsh[1], this method becomes false when
	// the borrowed first-hop Ssh connection is disconnected.
	// 
	// 
	// References:
	// [1] #ConnectThroughSsh
	bool IsSshConnected(void);

	// Loads this object with the SshTunnel instance that initiated the asynchronous
	// operation represented by task.
	// 
	bool LoadTaskCaller(CkTaskW &task);

	// Restricts the SSH connection to the algorithms specified in json.
	// 
	// This allows an application to define the exact algorithm set that may be used
	// during SSH negotiation.
	// 
	bool SetAllowedAlgorithms(CkJsonObjectW &json);

	// Begins keyboard-interactive authentication for login.
	// 
	// When the server requests one or more responses, the returned XML contains the
	// request name, instructions, and prompts:
	// 
	// _LT_infoRequest numPrompts="N"_GT_
	//   _LT_name_GT_name text_LT_/name_GT_
	//   _LT_instruction_GT_instruction text_LT_/instruction_GT_
	//   _LT_prompt1 echo="1_or_0"_GT_prompt text_LT_/prompt1_GT_
	//   ...
	//   _LT_promptN echo="1_or_0"_GT_prompt text_LT_/promptN_GT_
	// _LT_/infoRequest_GT_
	// 
	// The echo attribute indicates whether the response should be displayed while
	// entered.
	// 
	// If authentication immediately succeeds or fails without requiring a response,
	// the returned XML has one of these forms:
	// 
	// _LT_success_GT_success message_LT_/success_GT_
	// 
	// _LT_error_GT_error message_LT_/error_GT_
	// 
	// Pass the requested response or responses to ContinueKeyboardAuth[1].
	// 
	// 
	// References:
	// [1] #ContinueKeyboardAuth
	bool StartKeyboardAuth(const wchar_t *login, CkString &outStr);
	// Begins keyboard-interactive authentication for login.
	// 
	// When the server requests one or more responses, the returned XML contains the
	// request name, instructions, and prompts:
	// 
	// _LT_infoRequest numPrompts="N"_GT_
	//   _LT_name_GT_name text_LT_/name_GT_
	//   _LT_instruction_GT_instruction text_LT_/instruction_GT_
	//   _LT_prompt1 echo="1_or_0"_GT_prompt text_LT_/prompt1_GT_
	//   ...
	//   _LT_promptN echo="1_or_0"_GT_prompt text_LT_/promptN_GT_
	// _LT_/infoRequest_GT_
	// 
	// The echo attribute indicates whether the response should be displayed while
	// entered.
	// 
	// If authentication immediately succeeds or fails without requiring a response,
	// the returned XML has one of these forms:
	// 
	// _LT_success_GT_success message_LT_/success_GT_
	// 
	// _LT_error_GT_error message_LT_/error_GT_
	// 
	// Pass the requested response or responses to ContinueKeyboardAuth[1].
	// 
	// 
	// References:
	// [1] #ContinueKeyboardAuth
	const wchar_t *startKeyboardAuth(const wchar_t *login);

	// Creates an asynchronous task to call the StartKeyboardAuth method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *StartKeyboardAuthAsync(const wchar_t *login);

	// Stops the local listener so that no new client connections are accepted.
	// Existing forwarded clients remain connected and continue exchanging data.
	// 
	//     * When waitForThread is true, the method waits for the listener thread to
	//     exit before returning.
	//     * When it is false, shutdown is asynchronous and IsAccepting[1] may remain
	//     true briefly after the method returns.
	// 
	// Call BeginAccepting[2] again to resume accepting connections. The listener can
	// be restarted on the same port after the previous listener has stopped.
	// 
	// 
	// References:
	// [1] #IsAccepting
	// [2] #BeginAccepting
	bool StopAccepting(bool waitForThread);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
