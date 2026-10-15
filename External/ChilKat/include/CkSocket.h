// CkSocket.h: interface for the CkSocket class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkSocket_H
#define _CkSocket_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkJsonObject;
class CkCert;
class CkBinData;
class CkByteData;
class CkStringBuilder;
class CkSshKey;
class CkSsh;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkSocket
class CK_VISIBLE_PUBLIC CkSocket  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkSocket(const CkSocket &);
	CkSocket &operator=(const CkSocket &);

    public:
	CkSocket(void);
	virtual ~CkSocket(void);

	static CkSocket *createNew(void);
	static CkSocket *createNew2(int progLang);
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
	// Set this property to true to request cancellation of the method currently
	// executing on this object. It affects operations that can block or take
	// significant time, such as network reads, writes, connection establishment, and
	// long-running asynchronous methods. Fast, nonblocking methods may finish before
	// the cancellation request is observed.
	// 
	// After an operation aborts, Chilkat automatically resets this property to
	// false. If no operation is running, the next method call clears a previously
	// set value before it begins.
	// 
	// Note: A synchronous call can be cancelled from another thread by setting this
	// property on the same object. The method returns its normal failure value, and
	// LastErrorText describes the abort.
	bool get_AbortCurrent(void);
	// Set this property to true to request cancellation of the method currently
	// executing on this object. It affects operations that can block or take
	// significant time, such as network reads, writes, connection establishment, and
	// long-running asynchronous methods. Fast, nonblocking methods may finish before
	// the cancellation request is observed.
	// 
	// After an operation aborts, Chilkat automatically resets this property to
	// false. If no operation is running, the next method call clears a previously
	// set value before it begins.
	// 
	// Note: A synchronous call can be cancelled from another thread by setting this
	// property on the same object. The method returns its normal failure value, and
	// LastErrorText describes the abort.
	void put_AbortCurrent(bool newVal);

	// Contains the numeric result for the most recent AcceptNext or deprecated
	// AcceptNextConnection operation. The initial value is 0. It is reset to 0 when an
	// accept begins, remains 0 on success, and is set to a reason code on failure.
	// 
	// May describe an older accept: Connect, send, receive, and ordinary property
	// operations do not clear this property. Read it immediately after the accept
	// operation whose result is being examined.
	// 
	// +------+-----------------------------------------------------------------------+
	// | Code |                                Meaning                                |
	// +======+=======================================================================+
	// | 0    | Success.                                                              |
	// +------+-----------------------------------------------------------------------+
	// | 1    | An asynchronous accept operation is already in progress.              |
	// +------+-----------------------------------------------------------------------+
	// | 3    | Internal failure, such as an allocation failure.                      |
	// +------+-----------------------------------------------------------------------+
	// | 5    | No incoming connection was accepted before the wait interval expired. |
	// +------+-----------------------------------------------------------------------+
	// | 6    | The operation was aborted by the application.                         |
	// +------+-----------------------------------------------------------------------+
	// | 9    | An unspecified fatal socket error occurred.                           |
	// +------+-----------------------------------------------------------------------+
	// | 20   | The socket has not first been bound and placed into listening mode.   |
	// +------+-----------------------------------------------------------------------+
	// | 99   | The Chilkat component is not unlocked.                                |
	// +------+-----------------------------------------------------------------------+
	// | 100  | TLS internal error.                                                   |
	// +------+-----------------------------------------------------------------------+
	// | 102  | Unexpected TLS handshake message.                                     |
	// +------+-----------------------------------------------------------------------+
	// | 109  | Failed to read TLS handshake messages.                                |
	// +------+-----------------------------------------------------------------------+
	// | 114  | Failed to send the ChangeCipherSpec message.                          |
	// +------+-----------------------------------------------------------------------+
	// | 115  | Failed to send the Finished message.                                  |
	// +------+-----------------------------------------------------------------------+
	// | 116  | The client's Finished message was invalid.                            |
	// +------+-----------------------------------------------------------------------+
	// | 117  | Unable to agree on a TLS protocol version.                            |
	// +------+-----------------------------------------------------------------------+
	// | 118  | Unable to agree on a cipher suite.                                    |
	// +------+-----------------------------------------------------------------------+
	// | 119  | Failed to read the client's ClientHello message.                      |
	// +------+-----------------------------------------------------------------------+
	// | 120  | Failed to send TLS handshake messages.                                |
	// +------+-----------------------------------------------------------------------+
	// | 121  | Failed to process the client certificate message.                     |
	// +------+-----------------------------------------------------------------------+
	// | 122  | Failed to process the client certificate URL message.                 |
	// +------+-----------------------------------------------------------------------+
	// | 123  | Failed to process the client key-exchange message.                    |
	// +------+-----------------------------------------------------------------------+
	// | 124  | Failed to process the CertificateVerify message.                      |
	// +------+-----------------------------------------------------------------------+
	// | 125  | An SSL 2.0 connection attempt was received and rejected.              |
	// +------+-----------------------------------------------------------------------+
	// 
	int get_AcceptFailReason(void);

	// Specifies the application-layer protocol name offered in the TLS ALPN extension,
	// such as h2 or http/1.1. Leave it empty when ALPN is not required.
	// 
	// Note: ALPN negotiation does not implement the selected application protocol. The
	// application must still speak that protocol over the established TLS connection.
	void get_AlpnProtocol(CkString &str);
	// Specifies the application-layer protocol name offered in the TLS ALPN extension,
	// such as h2 or http/1.1. Leave it empty when ALPN is not required.
	// 
	// Note: ALPN negotiation does not implement the selected application protocol. The
	// application must still speak that protocol over the established TLS connection.
	const char *alpnProtocol(void);
	// Specifies the application-layer protocol name offered in the TLS ALPN extension,
	// such as h2 or http/1.1. Leave it empty when ALPN is not required.
	// 
	// Note: ALPN negotiation does not implement the selected application protocol. The
	// application must still speak that protocol over the established TLS connection.
	void put_AlpnProtocol(const char *newVal);

	// Limits receive throughput to approximately the specified number of bytes per
	// second. The default value is 0, which disables receive throttling.
	// 
	// Note: The limit is approximate and is applied over time; it does not define
	// socket packet sizes or message boundaries.
	int get_BandwidthThrottleDown(void);
	// Limits receive throughput to approximately the specified number of bytes per
	// second. The default value is 0, which disables receive throttling.
	// 
	// Note: The limit is approximate and is applied over time; it does not define
	// socket packet sizes or message boundaries.
	void put_BandwidthThrottleDown(int newVal);

	// Limits send throughput to approximately the specified number of bytes per
	// second. The default value is 0, which disables send throttling.
	// 
	// Note: The limit is approximate and is applied over time; it does not define
	// socket packet sizes or message boundaries.
	int get_BandwidthThrottleUp(void);
	// Limits send throughput to approximately the specified number of bytes per
	// second. The default value is 0, which disables send throttling.
	// 
	// Note: The limit is approximate and is applied over time; it does not define
	// socket packet sizes or message boundaries.
	void put_BandwidthThrottleUp(int newVal);

	// Controls the byte order used by SendCount and ReceiveCount. The default is
	// true, which uses big-endian byte order (network byte order). Set it to false
	// to use little-endian byte order.
	// 
	// Note: This property applies only to the four-byte count methods. The SendInt16,
	// SendInt32, ReceiveInt16, and ReceiveInt32 methods receive their byte-order
	// choice as an argument.
	bool get_BigEndian(void);
	// Controls the byte order used by SendCount and ReceiveCount. The default is
	// true, which uses big-endian byte order (network byte order). Set it to false
	// to use little-endian byte order.
	// 
	// Note: This property applies only to the four-byte count methods. The SendInt16,
	// SendInt32, ReceiveInt16, and ReceiveInt32 methods receive their byte-order
	// choice as an argument.
	void put_BigEndian(bool newVal);

	// Specifies a numeric local IP address to use when binding the socket to a local
	// interface.
	// 
	//     * Outbound connections: Before Connect establishes the connection, the local
	//     socket is bound to this address. Leave the property empty to let the operating
	//     system choose the local source address.
	//     * Listeners: BindAndListen and BindAndListenPortRange bind to exactly this
	//     address. Leave the property empty to listen on all interfaces: 0.0.0.0 for
	//     IPv4 or:: for IPv6.
	// 
	// +------------------+----------------------------+------------------------------+
	// | ClientIpAddress  |      IPv6 preference       |    Listener bind address     |
	// +==================+============================+==============================+
	// | Empty            | false                    | 0.0.0.0 (all IPv4            |
	// |                  |                            | interfaces)                  |
	// +------------------+----------------------------+------------------------------+
	// | Empty            | true                     | :: (all IPv6 interfaces)     |
	// +------------------+----------------------------+------------------------------+
	// | Explicit address | Not used to choose the     | Exactly the specified        |
	// |                  | family                     | address                      |
	// +------------------+----------------------------+------------------------------+
	// 
	// Important: Supply a numeric IPv4 or IPv6 address assigned to the local computer,
	// not a DNS hostname or remote address. Setting 127.0.0.1 or::1 creates a
	// loopback-only listener that remote computers cannot reach.
	void get_ClientIpAddress(CkString &str);
	// Specifies a numeric local IP address to use when binding the socket to a local
	// interface.
	// 
	//     * Outbound connections: Before Connect establishes the connection, the local
	//     socket is bound to this address. Leave the property empty to let the operating
	//     system choose the local source address.
	//     * Listeners: BindAndListen and BindAndListenPortRange bind to exactly this
	//     address. Leave the property empty to listen on all interfaces: 0.0.0.0 for
	//     IPv4 or:: for IPv6.
	// 
	// +------------------+----------------------------+------------------------------+
	// | ClientIpAddress  |      IPv6 preference       |    Listener bind address     |
	// +==================+============================+==============================+
	// | Empty            | false                    | 0.0.0.0 (all IPv4            |
	// |                  |                            | interfaces)                  |
	// +------------------+----------------------------+------------------------------+
	// | Empty            | true                     | :: (all IPv6 interfaces)     |
	// +------------------+----------------------------+------------------------------+
	// | Explicit address | Not used to choose the     | Exactly the specified        |
	// |                  | family                     | address                      |
	// +------------------+----------------------------+------------------------------+
	// 
	// Important: Supply a numeric IPv4 or IPv6 address assigned to the local computer,
	// not a DNS hostname or remote address. Setting 127.0.0.1 or::1 creates a
	// loopback-only listener that remote computers cannot reach.
	const char *clientIpAddress(void);
	// Specifies a numeric local IP address to use when binding the socket to a local
	// interface.
	// 
	//     * Outbound connections: Before Connect establishes the connection, the local
	//     socket is bound to this address. Leave the property empty to let the operating
	//     system choose the local source address.
	//     * Listeners: BindAndListen and BindAndListenPortRange bind to exactly this
	//     address. Leave the property empty to listen on all interfaces: 0.0.0.0 for
	//     IPv4 or:: for IPv6.
	// 
	// +------------------+----------------------------+------------------------------+
	// | ClientIpAddress  |      IPv6 preference       |    Listener bind address     |
	// +==================+============================+==============================+
	// | Empty            | false                    | 0.0.0.0 (all IPv4            |
	// |                  |                            | interfaces)                  |
	// +------------------+----------------------------+------------------------------+
	// | Empty            | true                     | :: (all IPv6 interfaces)     |
	// +------------------+----------------------------+------------------------------+
	// | Explicit address | Not used to choose the     | Exactly the specified        |
	// |                  | family                     | address                      |
	// +------------------+----------------------------+------------------------------+
	// 
	// Important: Supply a numeric IPv4 or IPv6 address assigned to the local computer,
	// not a DNS hostname or remote address. Setting 127.0.0.1 or::1 creates a
	// loopback-only listener that remote computers cannot reach.
	void put_ClientIpAddress(const char *newVal);

	// Specifies the local TCP port to bind before initiating an outbound connection.
	// The default value is 0, which asks the operating system to choose an available
	// ephemeral port.
	// 
	// Important: Setting a fixed client port is unusual and can cause connection
	// failures when the port is already in use or unavailable. Use a nonzero value
	// only when the remote system or network policy explicitly requires a particular
	// source port.
	int get_ClientPort(void);
	// Specifies the local TCP port to bind before initiating an outbound connection.
	// The default value is 0, which asks the operating system to choose an available
	// ephemeral port.
	// 
	// Important: Setting a fixed client port is unusual and can cause connection
	// failures when the port is already in use or unavailable. Use a nonzero value
	// only when the remote system or network policy explicitly requires a particular
	// source port.
	void put_ClientPort(int newVal);

	// Contains the numeric result for the most recent connect-family operation,
	// including TCP connection and SSH connection/channel setup. The initial value is
	// 0. It is reset to 0 when a connect-family call begins, remains 0 on success, and
	// is set to a reason code on failure.
	// 
	// May describe an older connection attempt: Send, receive, accept, and ordinary
	// property operations do not clear this property. Read it immediately after the
	// connect-family operation whose result is being examined; otherwise it may still
	// contain a reason from an earlier attempt.
	// 
	// +------+--------------------------------------------------------------------+
	// | Code |                              Meaning                               |
	// +======+====================================================================+
	// | 0    | Success.                                                           |
	// +------+--------------------------------------------------------------------+
	// | 1    | The hostname is empty.                                             |
	// +------+--------------------------------------------------------------------+
	// | 2    | DNS lookup failed.                                                 |
	// +------+--------------------------------------------------------------------+
	// | 3    | DNS lookup timed out.                                              |
	// +------+--------------------------------------------------------------------+
	// | 4    | The operation was aborted by the application.                      |
	// +------+--------------------------------------------------------------------+
	// | 5    | Internal failure.                                                  |
	// +------+--------------------------------------------------------------------+
	// | 6    | The TCP connection attempt timed out.                              |
	// +------+--------------------------------------------------------------------+
	// | 7    | The connection was rejected or otherwise could not be established. |
	// +------+--------------------------------------------------------------------+
	// | 100  | TLS internal error.                                                |
	// +------+--------------------------------------------------------------------+
	// | 101  | Failed to send ClientHello.                                        |
	// +------+--------------------------------------------------------------------+
	// | 102  | Unexpected TLS handshake message.                                  |
	// +------+--------------------------------------------------------------------+
	// | 103  | Failed to read ServerHello.                                        |
	// +------+--------------------------------------------------------------------+
	// | 104  | The server did not provide a certificate.                          |
	// +------+--------------------------------------------------------------------+
	// | 105  | Unexpected TLS protocol version.                                   |
	// +------+--------------------------------------------------------------------+
	// | 106  | Server-certificate verification failed.                            |
	// +------+--------------------------------------------------------------------+
	// | 107  | The negotiated TLS protocol version was not permitted.             |
	// +------+--------------------------------------------------------------------+
	// | 108  | An application-defined server-certificate requirement failed.      |
	// +------+--------------------------------------------------------------------+
	// | 109  | Failed to read TLS handshake messages.                             |
	// +------+--------------------------------------------------------------------+
	// | 110  | Failed to send the client-certificate message.                     |
	// +------+--------------------------------------------------------------------+
	// | 111  | Failed to send the client key-exchange message.                    |
	// +------+--------------------------------------------------------------------+
	// | 112  | The client certificate's private key was not accessible.           |
	// +------+--------------------------------------------------------------------+
	// | 113  | Failed to send the client CertificateVerify message.               |
	// +------+--------------------------------------------------------------------+
	// | 114  | Failed to send the ChangeCipherSpec message.                       |
	// +------+--------------------------------------------------------------------+
	// | 115  | Failed to send the Finished message.                               |
	// +------+--------------------------------------------------------------------+
	// | 116  | The server's Finished message was invalid.                         |
	// +------+--------------------------------------------------------------------+
	// 
	// Note: The TCP connection timeout supplied to Connect is distinct from DNS,
	// proxy, and TLS-handshake inactivity limits. See MaxReadIdleMs and MaxSendIdleMs.
	int get_ConnectFailReason(void);

	// Returns the whole number of seconds elapsed since the most recent call to
	// StartTiming. It returns 0 if timing has not been started or less than one second
	// has elapsed.
	// 
	// Note: This convenience timer is associated with the object; it is not a network
	// timeout and does not affect socket operations.
	int get_ElapsedSeconds(void);

	// Specifies the interval, in milliseconds, between AbortCheck callbacks during
	// supported long-running operations. The default is 0, which disables periodic
	// AbortCheck callbacks.
	// 
	// Note: This setting does not send network heartbeat packets and does not
	// implement TCP keepalive. It only controls application callbacks that provide an
	// opportunity to cancel an operation.
	int get_HeartbeatMs(void);
	// Specifies the interval, in milliseconds, between AbortCheck callbacks during
	// supported long-running operations. The default is 0, which disables periodic
	// AbortCheck callbacks.
	// 
	// Note: This setting does not send network heartbeat packets and does not
	// implement TCP keepalive. It only controls application callbacks that provide an
	// opportunity to cancel an operation.
	void put_HeartbeatMs(int newVal);

	// Specifies the authentication method used with an HTTP proxy. Supported values
	// are Basic and NTLM. Leave it empty when the proxy does not require
	// authentication.
	// 
	// Important: Basic proxy credentials are only encoded, not encrypted. Protect them
	// by using an appropriate secure network path to the proxy.
	void get_HttpProxyAuthMethod(CkString &str);
	// Specifies the authentication method used with an HTTP proxy. Supported values
	// are Basic and NTLM. Leave it empty when the proxy does not require
	// authentication.
	// 
	// Important: Basic proxy credentials are only encoded, not encrypted. Protect them
	// by using an appropriate secure network path to the proxy.
	const char *httpProxyAuthMethod(void);
	// Specifies the authentication method used with an HTTP proxy. Supported values
	// are Basic and NTLM. Leave it empty when the proxy does not require
	// authentication.
	// 
	// Important: Basic proxy credentials are only encoded, not encrypted. Protect them
	// by using an appropriate secure network path to the proxy.
	void put_HttpProxyAuthMethod(const char *newVal);

	// Specifies the optional Windows domain used for NTLM authentication to an HTTP
	// proxy. It is ignored unless HttpProxyAuthMethod is NTLM.
	// 
	void get_HttpProxyDomain(CkString &str);
	// Specifies the optional Windows domain used for NTLM authentication to an HTTP
	// proxy. It is ignored unless HttpProxyAuthMethod is NTLM.
	// 
	const char *httpProxyDomain(void);
	// Specifies the optional Windows domain used for NTLM authentication to an HTTP
	// proxy. It is ignored unless HttpProxyAuthMethod is NTLM.
	// 
	void put_HttpProxyDomain(const char *newVal);

	// Set this property to true when the proxied connection will carry HTTP
	// requests, such as when a Rest object uses this socket through UseConnection. The
	// default is false.
	// 
	// An HTTP client can communicate with a proxy differently from a non-HTTP
	// protocol. For example, plain HTTP commonly sends an absolute request URI to the
	// proxy, whereas other protocols generally require an HTTP CONNECT tunnel.
	// 
	// Important: Set this before connecting through the HTTP proxy. An incorrect value
	// can produce a connection that is established using the wrong proxy mode for the
	// application protocol.
	bool get_HttpProxyForHttp(void);
	// Set this property to true when the proxied connection will carry HTTP
	// requests, such as when a Rest object uses this socket through UseConnection. The
	// default is false.
	// 
	// An HTTP client can communicate with a proxy differently from a non-HTTP
	// protocol. For example, plain HTTP commonly sends an absolute request URI to the
	// proxy, whereas other protocols generally require an HTTP CONNECT tunnel.
	// 
	// Important: Set this before connecting through the HTTP proxy. An incorrect value
	// can produce a connection that is established using the wrong proxy mode for the
	// application protocol.
	void put_HttpProxyForHttp(bool newVal);

	// Specifies the hostname or numeric IP address of the HTTP proxy. Leave it empty
	// to connect directly without an HTTP proxy.
	// 
	void get_HttpProxyHostname(CkString &str);
	// Specifies the hostname or numeric IP address of the HTTP proxy. Leave it empty
	// to connect directly without an HTTP proxy.
	// 
	const char *httpProxyHostname(void);
	// Specifies the hostname or numeric IP address of the HTTP proxy. Leave it empty
	// to connect directly without an HTTP proxy.
	// 
	void put_HttpProxyHostname(const char *newVal);

	// Specifies the password used to authenticate with the HTTP proxy. It is used
	// together with HttpProxyUsername and the selected HttpProxyAuthMethod.
	// 
	// Important: Do not write proxy passwords to logs or expose them in diagnostic
	// output.
	void get_HttpProxyPassword(CkString &str);
	// Specifies the password used to authenticate with the HTTP proxy. It is used
	// together with HttpProxyUsername and the selected HttpProxyAuthMethod.
	// 
	// Important: Do not write proxy passwords to logs or expose them in diagnostic
	// output.
	const char *httpProxyPassword(void);
	// Specifies the password used to authenticate with the HTTP proxy. It is used
	// together with HttpProxyUsername and the selected HttpProxyAuthMethod.
	// 
	// Important: Do not write proxy passwords to logs or expose them in diagnostic
	// output.
	void put_HttpProxyPassword(const char *newVal);

	// Specifies the TCP port of the HTTP proxy. Common values include 8080 and 3128,
	// but the correct port is determined by the proxy configuration.
	// 
	int get_HttpProxyPort(void);
	// Specifies the TCP port of the HTTP proxy. Common values include 8080 and 3128,
	// but the correct port is determined by the proxy configuration.
	// 
	void put_HttpProxyPort(int newVal);

	// Specifies the username used to authenticate with the HTTP proxy. It is ignored
	// when the proxy does not require authentication.
	// 
	void get_HttpProxyUsername(CkString &str);
	// Specifies the username used to authenticate with the HTTP proxy. It is ignored
	// when the proxy does not require authentication.
	// 
	const char *httpProxyUsername(void);
	// Specifies the username used to authenticate with the HTTP proxy. It is ignored
	// when the proxy does not require authentication.
	// 
	void put_HttpProxyUsername(const char *newVal);

	// Returns true when the socket is in its last known connected state; otherwise
	// returns false. Explicitly closing the socket updates this property
	// immediately.
	// 
	// Important: TCP does not continuously notify an idle application that a peer or
	// network path has disappeared. This property can remain true until a read,
	// write, or other socket operation detects the loss. Treat it as a cached state
	// indicator, not a guarantee that the next operation will succeed.
	bool get_IsConnected(void);

	// Controls the operating system SO_KEEPALIVE option for the underlying TCP socket.
	// The default is true.
	// 
	// Note: TCP keepalive is distinct from an application-protocol heartbeat. The
	// operating system controls the keepalive timing and retry policy unless
	// configured by platform-specific means.
	bool get_KeepAlive(void);
	// Controls the operating system SO_KEEPALIVE option for the underlying TCP socket.
	// The default is true.
	// 
	// Note: TCP keepalive is distinct from an application-protocol heartbeat. The
	// operating system controls the keepalive timing and retry policy unless
	// configured by platform-specific means.
	void put_KeepAlive(bool newVal);

	// Set this property to true to record bytes sent and received through this
	// wrapper in SessionLog. The default is false. Use SessionLogEncoding to choose
	// how bytes are rendered.
	// 
	// Important: Session logs can contain credentials, tokens, private application
	// data, or decrypted TLS payloads. Enable logging only for diagnostics and protect
	// or remove the resulting data.
	bool get_KeepSessionLog(void);
	// Set this property to true to record bytes sent and received through this
	// wrapper in SessionLog. The default is false. Use SessionLogEncoding to choose
	// how bytes are rendered.
	// 
	// Important: Session logs can contain credentials, tokens, private application
	// data, or decrypted TLS payloads. Enable logging only for diagnostics and protect
	// or remove the resulting data.
	void put_KeepSessionLog(bool newVal);

	// Returns true if the most recent action method called through this wrapper
	// failed; otherwise returns false. The initial value is false. An action
	// method clears this state when it begins and leaves it false on success or sets
	// it to true on failure.
	// 
	// Ordinary value-property getters, such as the local and remote address/port
	// properties, timeout properties, Ssl, BigEndian, and the failure-reason
	// properties, do not change this state. Methods that perform work do change it,
	// including certificate-retrieval methods, BuildHttpGetRequest, and
	// ClearSessionLog.
	// 
	// Check immediately: This property describes only the most recent action method.
	// Another method call may overwrite it before it is examined. Prefer the method's
	// own Boolean return value when one is available.
	bool get_LastMethodFailed(void);

	// This property and PreferIpv6 are two names for the same underlying setting.
	// Reading or writing either property reads or changes the same value.
	// 
	// For a listener, when ClientIpAddress is empty, the default false value causes
	// BindAndListen and BindAndListenPortRange to bind to 0.0.0.0. Set it to true to
	// bind to::. When ClientIpAddress contains an explicit address, that address
	// determines both the bind address and its IPv4 or IPv6 family.
	// 
	// Shared setting: Because this is the same setting as PreferIpv6, changing
	// ListenIpv6 also changes the address-family preference used when an outbound
	// hostname resolves to both IPv4 and IPv6 addresses.
	bool get_ListenIpv6(void);
	// This property and PreferIpv6 are two names for the same underlying setting.
	// Reading or writing either property reads or changes the same value.
	// 
	// For a listener, when ClientIpAddress is empty, the default false value causes
	// BindAndListen and BindAndListenPortRange to bind to 0.0.0.0. Set it to true to
	// bind to::. When ClientIpAddress contains an explicit address, that address
	// determines both the bind address and its IPv4 or IPv6 family.
	// 
	// Shared setting: Because this is the same setting as PreferIpv6, changing
	// ListenIpv6 also changes the address-family preference used when an outbound
	// hostname resolves to both IPv4 and IPv6 addresses.
	void put_ListenIpv6(bool newVal);

	// Returns the port on which the socket is listening. This is especially useful
	// after calling BindAndListen with port 0, which asks the operating system to
	// select an available port.
	// 
	int get_ListenPort(void);

	// Returns the local numeric IP address for the socket connection currently held by
	// this object. For an outbound connection, this is the source address selected or
	// explicitly bound. For a listener, it is the address on which the socket is
	// listening.
	// 
	// Returns an empty string when the object holds no connection or listener. The
	// value is read from the current connection and is never retained from an earlier
	// connection.
	// 
	void get_LocalIpAddress(CkString &str);
	// Returns the local numeric IP address for the socket connection currently held by
	// this object. For an outbound connection, this is the source address selected or
	// explicitly bound. For a listener, it is the address on which the socket is
	// listening.
	// 
	// Returns an empty string when the object holds no connection or listener. The
	// value is read from the current connection and is never retained from an earlier
	// connection.
	// 
	const char *localIpAddress(void);

	// Returns the local TCP port for the socket connection or listener currently held
	// by this object. When binding to port 0, read this property or ListenPort after
	// success to discover the operating-system-selected port.
	// 
	// Returns 0 when the object holds no connection or listener. The value is read
	// from the current connection and is never retained from an earlier connection.
	// 
	int get_LocalPort(void);

	// Specifies the maximum number of milliseconds that a read-related operation may
	// make no receive progress. A positive value is an inactivity timeout, not a
	// total-operation deadline. The timer restarts each time a successful low-level
	// read transfers at least one byte.
	// 
	//     * 0 means no read-idle timeout and permits an indefinite wait.
	//     * A positive value limits the longest continuous period with no received
	//     data.
	//     * Negative values have no defined meaning and should not be used.
	// 
	// This property applies to socket receive methods and to protocol exchanges that
	// read from the connection, including TLS handshakes. It also ordinarily governs
	// read inactivity during HTTP/SOCKS proxy negotiation and SSH tunnel setup when no
	// separate timeout is provided.
	// 
	// Idle timeout versus total duration: A long transfer can continue for longer than
	// this value as long as data keeps arriving. The timeout occurs only when no read
	// progress is made for the full configured interval.
	// Indefinite waits: The default is 0. For operations involving an externally
	// controlled peer, proxy, TLS handshake, or SSH service, consider setting a finite
	// value so an unresponsive endpoint cannot block the operation forever.
	int get_MaxReadIdleMs(void);
	// Specifies the maximum number of milliseconds that a read-related operation may
	// make no receive progress. A positive value is an inactivity timeout, not a
	// total-operation deadline. The timer restarts each time a successful low-level
	// read transfers at least one byte.
	// 
	//     * 0 means no read-idle timeout and permits an indefinite wait.
	//     * A positive value limits the longest continuous period with no received
	//     data.
	//     * Negative values have no defined meaning and should not be used.
	// 
	// This property applies to socket receive methods and to protocol exchanges that
	// read from the connection, including TLS handshakes. It also ordinarily governs
	// read inactivity during HTTP/SOCKS proxy negotiation and SSH tunnel setup when no
	// separate timeout is provided.
	// 
	// Idle timeout versus total duration: A long transfer can continue for longer than
	// this value as long as data keeps arriving. The timeout occurs only when no read
	// progress is made for the full configured interval.
	// Indefinite waits: The default is 0. For operations involving an externally
	// controlled peer, proxy, TLS handshake, or SSH service, consider setting a finite
	// value so an unresponsive endpoint cannot block the operation forever.
	void put_MaxReadIdleMs(int newVal);

	// Specifies the maximum number of milliseconds that a send-related operation may
	// make no write progress. A positive value is an inactivity timeout, not a
	// total-operation deadline. The timer restarts each time a successful low-level
	// write transfers at least one byte.
	// 
	//     * 0 means no send-idle timeout and permits an indefinite wait.
	//     * A positive value limits the longest continuous period with no send
	//     progress.
	//     * Negative values have no defined meaning and should not be used.
	// 
	// This property applies to socket send methods and to protocol exchanges that
	// write to the connection, including TLS handshakes. It also ordinarily governs
	// write inactivity during HTTP/SOCKS proxy negotiation and SSH tunnel setup when
	// no separate timeout is provided.
	// 
	// Idle timeout versus total duration: A large send can continue for longer than
	// this value while bytes continue to move. The timeout occurs only after the full
	// configured interval passes with no write progress.
	int get_MaxSendIdleMs(void);
	// Specifies the maximum number of milliseconds that a send-related operation may
	// make no write progress. A positive value is an inactivity timeout, not a
	// total-operation deadline. The timer restarts each time a successful low-level
	// write transfers at least one byte.
	// 
	//     * 0 means no send-idle timeout and permits an indefinite wait.
	//     * A positive value limits the longest continuous period with no send
	//     progress.
	//     * Negative values have no defined meaning and should not be used.
	// 
	// This property applies to socket send methods and to protocol exchanges that
	// write to the connection, including TLS handshakes. It also ordinarily governs
	// write inactivity during HTTP/SOCKS proxy negotiation and SSH tunnel setup when
	// no separate timeout is provided.
	// 
	// Idle timeout versus total duration: A large send can continue for longer than
	// this value while bytes continue to move. The timeout occurs only after the full
	// configured interval passes with no write progress.
	void put_MaxSendIdleMs(int newVal);

	// Returns a local IP address for the computer. On a multihomed system, this is a
	// default or preferred local address and may not be the address used by a
	// particular connection.
	// 
	// Note: This is normally a private or internal address and is not a reliable way
	// to discover a public Internet address behind NAT. For an actual bound or
	// connected socket, use LocalIpAddress and LocalPort.
	void get_MyIpAddress(CkString &str);
	// Returns a local IP address for the computer. On a multihomed system, this is a
	// default or preferred local address and may not be the address used by a
	// particular connection.
	// 
	// Note: This is normally a private or internal address and is not a reliable way
	// to discover a public Internet address behind NAT. For an actual bound or
	// connected socket, use LocalIpAddress and LocalPort.
	const char *myIpAddress(void);

	// Returns the number of bytes immediately available to the socket layer without
	// waiting. On a TLS connection, the value can include encrypted TLS record
	// overhead and therefore does not necessarily equal the amount of application
	// plaintext available.
	// 
	// Important: Do not use this value as a message length. TCP is a byte stream, and
	// a complete application message can arrive in multiple reads or multiple messages
	// can be available together.
	int get_NumBytesAvailable(void);

	// Returns the number of client certificates associated with the connection
	// currently held by this object. On a TLS server, read this property on the
	// accepted connection populated by AcceptNext, then call GetRcvdClientCert with
	// indexes from 0 through NumReceivedClientCerts - 1.
	// 
	// Returns 0 when the current connection has no received client certificates or
	// when the object holds no connection. The value is read from the current
	// connection and is never retained from an earlier connection. If ConvertFromSsl
	// removes TLS while preserving the underlying connection, the certificate
	// information can remain associated with that same connection.
	// 
	// Important: Read this property on the accepted connection, not on the listener.
	// Client certificates are normally present only when the server requested mutual
	// TLS authentication.
	int get_NumReceivedClientCerts(void);

	// Returns the number of sockets contained in this object's socket set. A normal
	// Socket object becomes a socket set after one or more successful calls to
	// TakeSocket. Listener sockets and connected sockets may coexist in the same set.
	// 
	// A socket whose peer has closed may remain in the set, and remain included in
	// this count, until the next SelectForReading or SelectForWriting. A select
	// operation rebuilds the set and automatically prunes members that no longer have
	// a usable descriptor.
	// 
	// Selection: Use SelectorIndex for a direct set position. After a select call, use
	// SelectorReadIndex or SelectorWriteIndex directly; do not translate the ready
	// index into SelectorIndex.
	// Socket sets overview: See Socket Sets Overview[1] for an explanation of socket
	// sets, selectors, readiness, ownership, and common usage patterns.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/socket_sets.asp
	int get_NumSocketsInSet(void);

	// Returns the number of acceptable certificate-authority distinguished names
	// supplied by the TLS server for the connection currently held by this object. Use
	// GetSslAcceptableClientCaDn to retrieve each DN by zero-based index.
	// 
	// Returns 0 when the current connection supplied no acceptable-CA list or when the
	// object holds no connection. This value is read from the current connection and
	// is never retained from an earlier connection.
	// 
	// Note: The list is guidance from the server for selecting a client certificate.
	// It does not itself authenticate the server or guarantee that a particular client
	// certificate will be accepted.
	int get_NumSslAcceptableClientCAs(void);

	// Returns the unique identifier assigned to this socket object. The identifier is
	// included in event callbacks so an application can associate a callback with the
	// originating object.
	// 
	// Note: The value is for runtime correlation only and should not be persisted as a
	// durable identifier.
	int get_ObjectId(void);

	// Defines the numeric value that represents 100 percent in PercentDone callbacks.
	// The default is 100. For example, a scale of 1000 permits tenths-of-a-percent
	// values, so 453 represents 45.3 percent.
	// 
	// Values are clamped to the range 10 through 100000. The property affects only
	// operations whose progress can be measured and only language bindings that expose
	// callbacks.
	// 
	int get_PercentDoneScale(void);
	// Defines the numeric value that represents 100 percent in PercentDone callbacks.
	// The default is 100. For example, a scale of 1000 permits tenths-of-a-percent
	// values, so 453 represents 45.3 percent.
	// 
	// Values are clamped to the range 10 through 100000. The property affects only
	// operations whose progress can be measured and only language bindings that expose
	// callbacks.
	// 
	void put_PercentDoneScale(int newVal);

	// This property and ListenIpv6 are two names for the same underlying setting.
	// Reading or writing either property reads or changes the same value. The default
	// is false.
	// 
	//     * Outbound connections: When a hostname resolves to both IPv4 and IPv6
	//     addresses, false prefers IPv4 and true prefers IPv6.
	//     * Listeners: When ClientIpAddress is empty, false binds to 0.0.0.0 and
	//     true binds to::. When an explicit ClientIpAddress is set, its literal
	//     address determines the family.
	// Note: A preference does not guarantee that the selected address family is
	// usable. Connection success still depends on DNS results, local routing, firewall
	// policy, and peer availability.
	bool get_PreferIpv6(void);
	// This property and ListenIpv6 are two names for the same underlying setting.
	// Reading or writing either property reads or changes the same value. The default
	// is false.
	// 
	//     * Outbound connections: When a hostname resolves to both IPv4 and IPv6
	//     addresses, false prefers IPv4 and true prefers IPv6.
	//     * Listeners: When ClientIpAddress is empty, false binds to 0.0.0.0 and
	//     true binds to::. When an explicit ClientIpAddress is set, its literal
	//     address determines the family.
	// Note: A preference does not guarantee that the selected address family is
	// usable. Connection success still depends on DNS results, local routing, firewall
	// policy, and peer availability.
	void put_PreferIpv6(bool newVal);

	// Returns the average raw receive rate, in bytes per second, since receive
	// performance measurement began or was last reset. The measurement includes TLS or
	// SSH framing overhead. Call ResetPerf with true to restart receive measurement.
	// 
	int get_RcvBytesPerSec(void);

	// Tracks the cumulative number of application bytes actually received from the
	// connection by receive operations. The application may assign 0 at any time to
	// restart the count.
	// 
	// Bytes pulled from the connection remain included even when the receive method
	// ultimately returns failure. A failed call does not roll the counter back. For
	// example, partial bytes consumed before a timeout, abort, close, or reset are
	// still counted, even when the method does not return those bytes to the caller.
	// 
	// The count can be greater than the number of bytes returned by a particular
	// method because Chilkat may read beyond a delimiter or exact requested length and
	// buffer the excess for a later receive call. TLS and SSH framing overhead is not
	// included.
	// 
	// Note: Use RcvBytesPerSec when measuring raw transfer rate including protocol
	// overhead.
	int get_ReceivedCount(void);
	// Tracks the cumulative number of application bytes actually received from the
	// connection by receive operations. The application may assign 0 at any time to
	// restart the count.
	// 
	// Bytes pulled from the connection remain included even when the receive method
	// ultimately returns failure. A failed call does not roll the counter back. For
	// example, partial bytes consumed before a timeout, abort, close, or reset are
	// still counted, even when the method does not return those bytes to the caller.
	// 
	// The count can be greater than the number of bytes returned by a particular
	// method because Chilkat may read beyond a delimiter or exact requested length and
	// buffer the excess for a later receive call. TLS and SSH framing overhead is not
	// included.
	// 
	// Note: Use RcvBytesPerSec when measuring raw transfer rate including protocol
	// overhead.
	void put_ReceivedCount(int newVal);

	// Contains the value produced by the most recent successful call through this
	// wrapper to ReceiveByte, ReceiveInt16, or ReceiveInt32. The initial value is 0.
	// The signedness and byte order are determined by the arguments supplied to the
	// receive method.
	// 
	// This property is never cleared automatically. It changes only after a successful
	// integer receive or when the application explicitly assigns a value to it. A
	// failed integer receive leaves the previous value unchanged.
	// 
	// May contain a stale value: Read ReceivedInt only after the corresponding receive
	// method has returned success. After a failed call it may still contain a
	// valid-looking value from an earlier operation.
	int get_ReceivedInt(void);
	// Contains the value produced by the most recent successful call through this
	// wrapper to ReceiveByte, ReceiveInt16, or ReceiveInt32. The initial value is 0.
	// The signedness and byte order are determined by the arguments supplied to the
	// receive method.
	// 
	// This property is never cleared automatically. It changes only after a successful
	// integer receive or when the application explicitly assigns a value to it. A
	// failed integer receive leaves the previous value unchanged.
	// 
	// May contain a stale value: Read ReceivedInt only after the corresponding receive
	// method has returned success. After a failed call it may still contain a
	// valid-looking value from an earlier operation.
	void put_ReceivedInt(int newVal);

	// Contains the numeric result for the most recent receive-side operation. The
	// initial value is 0. It is reset to 0 when a receive begins, remains 0 on
	// success, and is set to a reason code on failure.
	// 
	// May describe an older receive: Connect, accept, send, and ordinary property
	// operations do not clear this property. Read it immediately after the receive
	// operation whose result is being examined.
	// 
	// +------+-----------------------------------------------------------------------+
	// | Code |                                Meaning                                |
	// +======+=======================================================================+
	// | 0    | Success.                                                              |
	// +------+-----------------------------------------------------------------------+
	// | 1    | An asynchronous receive operation is already in progress.             |
	// +------+-----------------------------------------------------------------------+
	// | 2    | The socket is not connected.                                          |
	// +------+-----------------------------------------------------------------------+
	// | 3    | Internal failure, such as an allocation failure.                      |
	// +------+-----------------------------------------------------------------------+
	// | 4    | Invalid parameters were supplied. For delimiter-based receives, this  |
	// |      | includes an empty match string or a match string that encodes to zero |
	// |      | bytes.                                                                |
	// +------+-----------------------------------------------------------------------+
	// | 5    | No additional data arrived within MaxReadIdleMs .                     |
	// +------+-----------------------------------------------------------------------+
	// | 6    | The operation was aborted by the application.                         |
	// +------+-----------------------------------------------------------------------+
	// | 7    | The peer reset the connection.                                        |
	// +------+-----------------------------------------------------------------------+
	// | 8    | The host operating system aborted the established connection.         |
	// +------+-----------------------------------------------------------------------+
	// | 9    | An unspecified fatal socket error occurred.                           |
	// +------+-----------------------------------------------------------------------+
	// | 10   | The peer closed the connection normally. The method reports failure,  |
	// |      | but its output may still contain final data received immediately      |
	// |      | before the close.                                                     |
	// +------+-----------------------------------------------------------------------+
	// 
	// Failure does not imply zero received bytes: A receive method may consume bytes
	// before it fails. Those bytes remain counted by ReceivedCount. Depending on the
	// receive method, partial data may be returned, appended to the destination, or
	// discarded. Consult the specific method description.
	// Connection state after failure: A timeout or application abort generally leaves
	// the connection open. A peer close or reset leaves it unavailable for further
	// I/O, although the Socket object may still be closed or reused for a new Connect
	// operation.
	int get_ReceiveFailReason(void);

	// Controls the maximum number of bytes requested by availability-based receive
	// methods when Chilkat must perform a direct read from a plain TCP connection. The
	// default value is 4096.
	// 
	//     * For plain TCP, methods such as ReceiveBytes, ReceiveBd, ReceiveString, and
	//     ReceiveSb obtain at most this many bytes from one underlying socket read.
	//     * For TLS and SSH connections, the amount returned is governed by the TLS
	//     record or SSH packet and is not limited by this property.
	//     * Data already buffered internally by Chilkat is returned in full, even when
	//     it exceeds ReceivePacketSize.
	// TCP framing: This property is not a message-size setting. TCP is a byte stream
	// and does not preserve application message boundaries.
	int get_ReceivePacketSize(void);
	// Controls the maximum number of bytes requested by availability-based receive
	// methods when Chilkat must perform a direct read from a plain TCP connection. The
	// default value is 4096.
	// 
	//     * For plain TCP, methods such as ReceiveBytes, ReceiveBd, ReceiveString, and
	//     ReceiveSb obtain at most this many bytes from one underlying socket read.
	//     * For TLS and SSH connections, the amount returned is governed by the TLS
	//     record or SSH packet and is not limited by this property.
	//     * Data already buffered internally by Chilkat is returned in full, even when
	//     it exceeds ReceivePacketSize.
	// TCP framing: This property is not a message-size setting. TCP is a byte stream
	// and does not preserve application message boundaries.
	void put_ReceivePacketSize(int newVal);

	// Returns the numeric IP address of the peer for the connection currently held by
	// this object. This is the address actually used by the established connection,
	// which may differ from the hostname originally supplied to Connect.
	// 
	// Returns an empty string when the object holds no connected peer. The value is
	// read from the current connection and is never retained from an earlier
	// connection.
	// 
	void get_RemoteIpAddress(CkString &str);
	// Returns the numeric IP address of the peer for the connection currently held by
	// this object. This is the address actually used by the established connection,
	// which may differ from the hostname originally supplied to Connect.
	// 
	// Returns an empty string when the object holds no connected peer. The value is
	// read from the current connection and is never retained from an earlier
	// connection.
	// 
	const char *remoteIpAddress(void);

	// Returns the TCP port of the peer for the connection currently held by this
	// object.
	// 
	// Returns 0 when the object holds no connected peer. The value is read from the
	// current connection and is never retained from an earlier connection.
	// 
	int get_RemotePort(void);

	// Controls verification of a server certificate when this object acts as a TLS
	// client. The default is false.
	// 
	// When true, the TLS connection is rejected if the server certificate is
	// expired, not yet valid, has an invalid signature, or cannot be verified through
	// a trusted certificate chain. When false, these normal certificate-validity and
	// trust-chain checks are not required.
	// 
	// Independent checks: RequireSslCertVerify controls normal certificate
	// verification. Public-key pinning configured by TlsPinSet is a separate check and
	// is enforced whenever a pin set is present, even when this property is false.
	bool get_RequireSslCertVerify(void);
	// Controls verification of a server certificate when this object acts as a TLS
	// client. The default is false.
	// 
	// When true, the TLS connection is rejected if the server certificate is
	// expired, not yet valid, has an invalid signature, or cannot be verified through
	// a trusted certificate chain. When false, these normal certificate-validity and
	// trust-chain checks are not required.
	// 
	// Independent checks: RequireSslCertVerify controls normal certificate
	// verification. Public-key pinning configured by TlsPinSet is a separate check and
	// is enforced whenever a pin set is present, even when this property is false.
	void put_RequireSslCertVerify(bool newVal);

	// Selects a socket by its direct zero-based position in this object's socket set.
	// Valid values range from 0 through NumSocketsInSet - 1. While this selector is
	// active, ordinary connection methods and properties are routed to that contained
	// socket.
	// 
	// Mutually exclusive selectors: SelectorIndex, SelectorReadIndex, and
	// SelectorWriteIndex are mutually exclusive. Assigning any one clears the other
	// two. Do not copy a read-ready or write-ready index into SelectorIndex; setting
	// SelectorReadIndex or SelectorWriteIndex already routes operations to the
	// corresponding ready socket.
	// Index lifetime: Direct set positions are renumbered whenever a member is
	// removed. After a selected member is closed or another member is pruned, later
	// positions shift down and an old SelectorIndex can identify a different socket or
	// become out of range.
	// Socket sets overview: See Socket Sets Overview[1] for an explanation of socket
	// sets, selectors, readiness, ownership, and common usage patterns.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/socket_sets.asp
	int get_SelectorIndex(void);
	// Selects a socket by its direct zero-based position in this object's socket set.
	// Valid values range from 0 through NumSocketsInSet - 1. While this selector is
	// active, ordinary connection methods and properties are routed to that contained
	// socket.
	// 
	// Mutually exclusive selectors: SelectorIndex, SelectorReadIndex, and
	// SelectorWriteIndex are mutually exclusive. Assigning any one clears the other
	// two. Do not copy a read-ready or write-ready index into SelectorIndex; setting
	// SelectorReadIndex or SelectorWriteIndex already routes operations to the
	// corresponding ready socket.
	// Index lifetime: Direct set positions are renumbered whenever a member is
	// removed. After a selected member is closed or another member is pruned, later
	// positions shift down and an old SelectorIndex can identify a different socket or
	// become out of range.
	// Socket sets overview: See Socket Sets Overview[1] for an explanation of socket
	// sets, selectors, readiness, ownership, and common usage patterns.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/socket_sets.asp
	void put_SelectorIndex(int newVal);

	// Selects a zero-based position in the read-ready result produced by the most
	// recent call to SelectForReading. If that call returned n, valid values are 0
	// through n - 1. After assigning this property, call AcceptNext, a receive method,
	// or another ordinary connection operation on this socket-set object; the
	// operation is routed directly to that ready socket.
	// 
	// Reading this property returns exactly the ready-set position last assigned. It
	// does not return or translate to the socket's direct position in the contained
	// set, and no such translation is required.
	// 
	// Mutually exclusive selectors: Assigning SelectorReadIndex clears SelectorIndex
	// and SelectorWriteIndex. Do not set SelectorIndex afterward, because doing so
	// discards the read selection and interprets the number as a direct set position.
	// Ready-set lifetime: The ready-set and its ordering remain stable for the current
	// select result, but the order is arbitrary and need not match insertion order.
	// The next call to SelectForReading or SelectForWriting invalidates prior ready
	// indices.
	// Socket sets overview: See Socket Sets Overview[1] for an explanation of socket
	// sets, selectors, readiness, ownership, and common usage patterns.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/socket_sets.asp
	int get_SelectorReadIndex(void);
	// Selects a zero-based position in the read-ready result produced by the most
	// recent call to SelectForReading. If that call returned n, valid values are 0
	// through n - 1. After assigning this property, call AcceptNext, a receive method,
	// or another ordinary connection operation on this socket-set object; the
	// operation is routed directly to that ready socket.
	// 
	// Reading this property returns exactly the ready-set position last assigned. It
	// does not return or translate to the socket's direct position in the contained
	// set, and no such translation is required.
	// 
	// Mutually exclusive selectors: Assigning SelectorReadIndex clears SelectorIndex
	// and SelectorWriteIndex. Do not set SelectorIndex afterward, because doing so
	// discards the read selection and interprets the number as a direct set position.
	// Ready-set lifetime: The ready-set and its ordering remain stable for the current
	// select result, but the order is arbitrary and need not match insertion order.
	// The next call to SelectForReading or SelectForWriting invalidates prior ready
	// indices.
	// Socket sets overview: See Socket Sets Overview[1] for an explanation of socket
	// sets, selectors, readiness, ownership, and common usage patterns.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/socket_sets.asp
	void put_SelectorReadIndex(int newVal);

	// Selects a zero-based position in the write-ready result produced by the most
	// recent call to SelectForWriting. If that call returned n, valid values are 0
	// through n - 1. After assigning this property, ordinary connection operations on
	// this socket-set object are routed directly to that ready socket.
	// 
	// Reading this property returns exactly the ready-set position last assigned. It
	// does not return or translate to the socket's direct position in the contained
	// set.
	// 
	// Mutually exclusive selectors: Assigning SelectorWriteIndex clears SelectorIndex
	// and SelectorReadIndex. Do not set SelectorIndex afterward.
	// Ready-set lifetime: The ready-set and its ordering remain stable for the current
	// select result, but the order is arbitrary and need not match insertion order.
	// The next select call invalidates prior ready indices.
	// Socket sets overview: See Socket Sets Overview[1] for an explanation of socket
	// sets, selectors, readiness, ownership, and common usage patterns.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/socket_sets.asp
	int get_SelectorWriteIndex(void);
	// Selects a zero-based position in the write-ready result produced by the most
	// recent call to SelectForWriting. If that call returned n, valid values are 0
	// through n - 1. After assigning this property, ordinary connection operations on
	// this socket-set object are routed directly to that ready socket.
	// 
	// Reading this property returns exactly the ready-set position last assigned. It
	// does not return or translate to the socket's direct position in the contained
	// set.
	// 
	// Mutually exclusive selectors: Assigning SelectorWriteIndex clears SelectorIndex
	// and SelectorReadIndex. Do not set SelectorIndex afterward.
	// Ready-set lifetime: The ready-set and its ordering remain stable for the current
	// select result, but the order is arbitrary and need not match insertion order.
	// The next select call invalidates prior ready indices.
	// Socket sets overview: See Socket Sets Overview[1] for an explanation of socket
	// sets, selectors, readiness, ownership, and common usage patterns.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/socket_sets.asp
	void put_SelectorWriteIndex(int newVal);

	// Returns the average raw send rate, in bytes per second, since send performance
	// measurement began or was last reset. The measurement includes TLS or SSH framing
	// overhead. Call ResetPerf with false to restart send measurement.
	// 
	int get_SendBytesPerSec(void);

	// Contains the numeric result for the most recent send-side operation. The initial
	// value is 0. It is reset to 0 when a send begins, remains 0 on success, and is
	// set to a reason code on failure.
	// 
	// May describe an older send: Connect, accept, receive, and ordinary property
	// operations do not clear this property. Read it immediately after the send
	// operation whose result is being examined.
	// 
	// +------+-----------------------------------------------------------------------+
	// | Code |                                Meaning                                |
	// +======+=======================================================================+
	// | 0    | Success.                                                              |
	// +------+-----------------------------------------------------------------------+
	// | 1    | An asynchronous send operation is already in progress.                |
	// +------+-----------------------------------------------------------------------+
	// | 2    | The socket is not connected.                                          |
	// +------+-----------------------------------------------------------------------+
	// | 3    | Internal failure, such as an allocation failure.                      |
	// +------+-----------------------------------------------------------------------+
	// | 4    | Invalid parameters were supplied.                                     |
	// +------+-----------------------------------------------------------------------+
	// | 5    | The socket made no send progress for longer than MaxSendIdleMs .      |
	// +------+-----------------------------------------------------------------------+
	// | 6    | The operation was aborted by the application.                         |
	// +------+-----------------------------------------------------------------------+
	// | 7    | The peer reset the connection.                                        |
	// +------+-----------------------------------------------------------------------+
	// | 8    | The host operating system aborted the established connection.         |
	// +------+-----------------------------------------------------------------------+
	// | 9    | An unspecified fatal socket error occurred.                           |
	// +------+-----------------------------------------------------------------------+
	// | 10   | The peer closed the connection.                                       |
	// +------+-----------------------------------------------------------------------+
	// | 11   | Text or encoded input could not be converted or decoded, such as an   |
	// |      | invalid StringCharset conversion or malformed encoded data.           |
	// +------+-----------------------------------------------------------------------+
	// 
	// A failed send may be partial: Failure does not prove that zero bytes were sent.
	// Chilkat does not retain the unsent remainder and does not report how much was
	// transmitted. After a failed send, a framed protocol should normally discard the
	// connection because the peer may have received a truncated message.
	// Connection state after failure: A timeout or application abort generally leaves
	// the TCP connection open, even though the protocol stream may no longer be safe
	// to reuse. A peer close or reset leaves the connection unavailable for further
	// I/O.
	int get_SendFailReason(void);

	// Specifies the internal chunk size used when sending a large amount of data over
	// a plain TCP connection. The default is 65535 bytes. TLS connections use TLS
	// record handling rather than this setting.
	// 
	// Note: This value does not preserve message boundaries and does not determine IP
	// packet sizes. TCP remains a continuous byte stream.
	int get_SendPacketSize(void);
	// Specifies the internal chunk size used when sending a large amount of data over
	// a plain TCP connection. The default is 65535 bytes. TLS connections use TLS
	// record handling rather than this setting.
	// 
	// Note: This value does not preserve message boundaries and does not determine IP
	// packet sizes. TCP remains a continuous byte stream.
	void put_SendPacketSize(int newVal);

	// Returns the accumulated send/receive session log for this wrapper when
	// KeepSessionLog is true. Use SessionLogEncoding to choose an escaped or
	// hexadecimal representation and ClearSessionLog to reset it.
	// 
	// Important: The log can contain sensitive plaintext even when the network
	// connection uses TLS. Treat it as diagnostic data and protect it accordingly.
	void get_SessionLog(CkString &str);
	// Returns the accumulated send/receive session log for this wrapper when
	// KeepSessionLog is true. Use SessionLogEncoding to choose an escaped or
	// hexadecimal representation and ClearSessionLog to reset it.
	// 
	// Important: The log can contain sensitive plaintext even when the network
	// connection uses TLS. Treat it as diagnostic data and protect it accordingly.
	const char *sessionLog(void);

	// Controls how bytes are rendered in SessionLog. The default is esc.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                                Format                                |
	// +=======+======================================================================+
	// | esc   | Compact C-style escaped text. Printable ASCII remains readable;      |
	// |       | control and nonprintable bytes are escaped, such as \r , \n , and    |
	// |       | \xHH .                                                               |
	// +-------+----------------------------------------------------------------------+
	// | hex   | Every byte is represented in hexadecimal, which is larger but        |
	// |       | unambiguous for binary protocols.                                    |
	// +-------+----------------------------------------------------------------------+
	// 
	void get_SessionLogEncoding(CkString &str);
	// Controls how bytes are rendered in SessionLog. The default is esc.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                                Format                                |
	// +=======+======================================================================+
	// | esc   | Compact C-style escaped text. Printable ASCII remains readable;      |
	// |       | control and nonprintable bytes are escaped, such as \r , \n , and    |
	// |       | \xHH .                                                               |
	// +-------+----------------------------------------------------------------------+
	// | hex   | Every byte is represented in hexadecimal, which is larger but        |
	// |       | unambiguous for binary protocols.                                    |
	// +-------+----------------------------------------------------------------------+
	// 
	const char *sessionLogEncoding(void);
	// Controls how bytes are rendered in SessionLog. The default is esc.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                                Format                                |
	// +=======+======================================================================+
	// | esc   | Compact C-style escaped text. Printable ASCII remains readable;      |
	// |       | control and nonprintable bytes are escaped, such as \r , \n , and    |
	// |       | \xHH .                                                               |
	// +-------+----------------------------------------------------------------------+
	// | hex   | Every byte is represented in hexadecimal, which is larger but        |
	// |       | unambiguous for binary protocols.                                    |
	// +-------+----------------------------------------------------------------------+
	// 
	void put_SessionLogEncoding(const char *newVal);

	// Sets the Server Name Indication (SNI) hostname sent in the TLS ClientHello. By
	// default, Chilkat uses the hostname passed to Connect. Set this property when
	// connecting to a numeric IP address or alternate network endpoint while the TLS
	// server expects a particular virtual-host name.
	// 
	// Scope: This property changes only the SNI name in the TLS handshake. It does not
	// change the DNS lookup, TCP destination, or any hostname carried by the
	// application protocol.
	void get_SniHostname(CkString &str);
	// Sets the Server Name Indication (SNI) hostname sent in the TLS ClientHello. By
	// default, Chilkat uses the hostname passed to Connect. Set this property when
	// connecting to a numeric IP address or alternate network endpoint while the TLS
	// server expects a particular virtual-host name.
	// 
	// Scope: This property changes only the SNI name in the TLS handshake. It does not
	// change the DNS lookup, TCP destination, or any hostname carried by the
	// application protocol.
	const char *sniHostname(void);
	// Sets the Server Name Indication (SNI) hostname sent in the TLS ClientHello. By
	// default, Chilkat uses the hostname passed to Connect. Set this property when
	// connecting to a numeric IP address or alternate network endpoint while the TLS
	// server expects a particular virtual-host name.
	// 
	// Scope: This property changes only the SNI name in the TLS handshake. It does not
	// change the DNS lookup, TCP destination, or any hostname carried by the
	// application protocol.
	void put_SniHostname(const char *newVal);

	// Specifies the hostname or numeric IP address of the SOCKS proxy. It is used only
	// when SocksVersion is 4 or 5.
	// 
	void get_SocksHostname(CkString &str);
	// Specifies the hostname or numeric IP address of the SOCKS proxy. It is used only
	// when SocksVersion is 4 or 5.
	// 
	const char *socksHostname(void);
	// Specifies the hostname or numeric IP address of the SOCKS proxy. It is used only
	// when SocksVersion is 4 or 5.
	// 
	void put_SocksHostname(const char *newVal);

	// Specifies the password for SOCKS5 username/password authentication. SOCKS4 does
	// not define a password field, so this property is ignored for SOCKS4.
	// 
	// Important: SOCKS5 username/password authentication does not itself encrypt
	// credentials. Security depends on the network path to the proxy.
	void get_SocksPassword(CkString &str);
	// Specifies the password for SOCKS5 username/password authentication. SOCKS4 does
	// not define a password field, so this property is ignored for SOCKS4.
	// 
	// Important: SOCKS5 username/password authentication does not itself encrypt
	// credentials. Security depends on the network path to the proxy.
	const char *socksPassword(void);
	// Specifies the password for SOCKS5 username/password authentication. SOCKS4 does
	// not define a password field, so this property is ignored for SOCKS4.
	// 
	// Important: SOCKS5 username/password authentication does not itself encrypt
	// credentials. Security depends on the network path to the proxy.
	void put_SocksPassword(const char *newVal);

	// Specifies the TCP port of the SOCKS proxy. The default is 1080. It is used only
	// when SocksVersion is 4 or 5.
	// 
	int get_SocksPort(void);
	// Specifies the TCP port of the SOCKS proxy. The default is 1080. It is used only
	// when SocksVersion is 4 or 5.
	// 
	void put_SocksPort(int newVal);

	// Specifies the SOCKS proxy username. For SOCKS4 it is the user ID sent in the
	// request; for SOCKS5 it is used when username/password authentication is
	// negotiated.
	// 
	void get_SocksUsername(CkString &str);
	// Specifies the SOCKS proxy username. For SOCKS4 it is the user ID sent in the
	// request; for SOCKS5 it is used when username/password authentication is
	// negotiated.
	// 
	const char *socksUsername(void);
	// Specifies the SOCKS proxy username. For SOCKS4 it is the user ID sent in the
	// request; for SOCKS5 it is used when username/password authentication is
	// negotiated.
	// 
	void put_SocksUsername(const char *newVal);

	// Selects whether connections are routed through a SOCKS proxy.
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
	// Selects whether connections are routed through a SOCKS proxy.
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

	// Requests the operating-system receive-buffer size for the TCP socket. The
	// default requested value is 4194304 bytes. Most applications should leave it
	// unchanged.
	// 
	// Note: The operating system may round, clamp, or internally scale the requested
	// value. Increasing the buffer does not by itself guarantee higher throughput;
	// measure performance before changing it.
	int get_SoRcvBuf(void);
	// Requests the operating-system receive-buffer size for the TCP socket. The
	// default requested value is 4194304 bytes. Most applications should leave it
	// unchanged.
	// 
	// Note: The operating system may round, clamp, or internally scale the requested
	// value. Increasing the buffer does not by itself guarantee higher throughput;
	// measure performance before changing it.
	void put_SoRcvBuf(int newVal);

	// Controls the SO_REUSEADDR option for a socket that will bind and listen. The
	// default is true. Set it before BindAndListen, BindAndListenPortRange, or
	// InitSslServer.
	// 
	// Important: The exact meaning of SO_REUSEADDR differs across operating systems.
	// It can help restart a listener after a previous connection, but it is not a
	// portable substitute for exclusive-port ownership.
	bool get_SoReuseAddr(void);
	// Controls the SO_REUSEADDR option for a socket that will bind and listen. The
	// default is true. Set it before BindAndListen, BindAndListenPortRange, or
	// InitSslServer.
	// 
	// Important: The exact meaning of SO_REUSEADDR differs across operating systems.
	// It can help restart a listener after a previous connection, but it is not a
	// portable substitute for exclusive-port ownership.
	void put_SoReuseAddr(bool newVal);

	// Requests the operating-system send-buffer size for the TCP socket. The default
	// requested value is 262144 bytes. Most applications should leave it unchanged.
	// 
	// Note: The operating system may round, clamp, or internally scale the value. Test
	// representative workloads before increasing it.
	int get_SoSndBuf(void);
	// Requests the operating-system send-buffer size for the TCP socket. The default
	// requested value is 262144 bytes. Most applications should leave it unchanged.
	// 
	// Note: The operating system may round, clamp, or internally scale the value. Test
	// representative workloads before increasing it.
	void put_SoSndBuf(int newVal);

	// Controls whether incoming connections accepted by this listener must complete a
	// TLS handshake. The default is false. Set it to true for a TLS server
	// listener.
	// 
	// Important: This is a listener requirement, not a connection-state indicator.
	// Configure the server certificate with InitSslServer before accepting TLS
	// clients. Do not use TlsVersion or TlsCipherSuite alone to determine whether the
	// current connection is protected by TLS, because those properties retain the
	// results of the object's most recent successful TLS handshake even after the
	// connection changes.
	bool get_Ssl(void);
	// Controls whether incoming connections accepted by this listener must complete a
	// TLS handshake. The default is false. Set it to true for a TLS server
	// listener.
	// 
	// Important: This is a listener requirement, not a connection-state indicator.
	// Configure the server certificate with InitSslServer before accepting TLS
	// clients. Do not use TlsVersion or TlsCipherSuite alone to determine whether the
	// current connection is protected by TLS, because those properties retain the
	// results of the object's most recent successful TLS handshake even after the
	// connection changes.
	void put_Ssl(bool newVal);

	// Restricts the cipher suites permitted for TLS connections. This property has the
	// same behavior as Chilkat.Http.SslAllowedCiphers and applies to TLS client
	// connections and TLS server handshakes.
	// 
	// The default empty string allows all cipher suites implemented and enabled by the
	// Chilkat build. To restrict negotiation, provide a comma-separated list of
	// cipher-suite names in preference order, for example:
	// 
	// TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384, TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384
	// 
	// The negotiated suite must be in the intersection supported by both peers. A TLS
	// client supplies its allowed list to the server; the server ultimately chooses
	// from that list.
	// 
	// The following policy keywords are also recognized:
	// 
	//     * rsa1024 — when acting as a client, reject a server certificate whose RSA
	//     key is smaller than 1024 bits.
	//     * rsa2048 — when acting as a client, reject a server certificate whose RSA
	//     key is smaller than 2048 bits.
	//     * secure-renegotiation — require secure renegotiation.
	//     * best-practices — use Chilkat's current best-practices policy. The exact
	//     policy may change in later Chilkat versions.
	// 
	// Legacy filter keywords such as aes256-cbc, aes128-cbc, 3des-cbc, and rc4 remain
	// recognized for compatibility.
	// 
	// Security: Avoid obsolete suites based on RC4, DES, or 3DES. The set of
	// implemented suites and the meaning of best-practices can change with Chilkat
	// versions and platform capabilities.
	void get_SslAllowedCiphers(CkString &str);
	// Restricts the cipher suites permitted for TLS connections. This property has the
	// same behavior as Chilkat.Http.SslAllowedCiphers and applies to TLS client
	// connections and TLS server handshakes.
	// 
	// The default empty string allows all cipher suites implemented and enabled by the
	// Chilkat build. To restrict negotiation, provide a comma-separated list of
	// cipher-suite names in preference order, for example:
	// 
	// TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384, TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384
	// 
	// The negotiated suite must be in the intersection supported by both peers. A TLS
	// client supplies its allowed list to the server; the server ultimately chooses
	// from that list.
	// 
	// The following policy keywords are also recognized:
	// 
	//     * rsa1024 — when acting as a client, reject a server certificate whose RSA
	//     key is smaller than 1024 bits.
	//     * rsa2048 — when acting as a client, reject a server certificate whose RSA
	//     key is smaller than 2048 bits.
	//     * secure-renegotiation — require secure renegotiation.
	//     * best-practices — use Chilkat's current best-practices policy. The exact
	//     policy may change in later Chilkat versions.
	// 
	// Legacy filter keywords such as aes256-cbc, aes128-cbc, 3des-cbc, and rc4 remain
	// recognized for compatibility.
	// 
	// Security: Avoid obsolete suites based on RC4, DES, or 3DES. The set of
	// implemented suites and the meaning of best-practices can change with Chilkat
	// versions and platform capabilities.
	const char *sslAllowedCiphers(void);
	// Restricts the cipher suites permitted for TLS connections. This property has the
	// same behavior as Chilkat.Http.SslAllowedCiphers and applies to TLS client
	// connections and TLS server handshakes.
	// 
	// The default empty string allows all cipher suites implemented and enabled by the
	// Chilkat build. To restrict negotiation, provide a comma-separated list of
	// cipher-suite names in preference order, for example:
	// 
	// TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384, TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384
	// 
	// The negotiated suite must be in the intersection supported by both peers. A TLS
	// client supplies its allowed list to the server; the server ultimately chooses
	// from that list.
	// 
	// The following policy keywords are also recognized:
	// 
	//     * rsa1024 — when acting as a client, reject a server certificate whose RSA
	//     key is smaller than 1024 bits.
	//     * rsa2048 — when acting as a client, reject a server certificate whose RSA
	//     key is smaller than 2048 bits.
	//     * secure-renegotiation — require secure renegotiation.
	//     * best-practices — use Chilkat's current best-practices policy. The exact
	//     policy may change in later Chilkat versions.
	// 
	// Legacy filter keywords such as aes256-cbc, aes128-cbc, 3des-cbc, and rc4 remain
	// recognized for compatibility.
	// 
	// Security: Avoid obsolete suites based on RC4, DES, or 3DES. The set of
	// implemented suites and the meaning of best-practices can change with Chilkat
	// versions and platform capabilities.
	void put_SslAllowedCiphers(const char *newVal);

	// Selects the SSL/TLS protocol version allowed for secure connections. This
	// property has the same behavior as Chilkat.Http.SslProtocol and applies to TLS
	// client connections and TLS server handshakes.
	// 
	// Accepted values are:
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
	// The default value is default, which allows the protocol to be selected
	// dynamically according to what the peer and Chilkat support. Choosing an exact
	// version causes the connection to fail unless that exact version is negotiated. A
	// minimum-version form such as TLS 1.2 or higher is generally preferable to an
	// exact version.
	// 
	// Security: Avoid SSL 3.0, TLS 1.0, and TLS 1.1 unless compatibility with a legacy
	// peer is unavoidable.
	void get_SslProtocol(CkString &str);
	// Selects the SSL/TLS protocol version allowed for secure connections. This
	// property has the same behavior as Chilkat.Http.SslProtocol and applies to TLS
	// client connections and TLS server handshakes.
	// 
	// Accepted values are:
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
	// The default value is default, which allows the protocol to be selected
	// dynamically according to what the peer and Chilkat support. Choosing an exact
	// version causes the connection to fail unless that exact version is negotiated. A
	// minimum-version form such as TLS 1.2 or higher is generally preferable to an
	// exact version.
	// 
	// Security: Avoid SSL 3.0, TLS 1.0, and TLS 1.1 unless compatibility with a legacy
	// peer is unavoidable.
	const char *sslProtocol(void);
	// Selects the SSL/TLS protocol version allowed for secure connections. This
	// property has the same behavior as Chilkat.Http.SslProtocol and applies to TLS
	// client connections and TLS server handshakes.
	// 
	// Accepted values are:
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
	// The default value is default, which allows the protocol to be selected
	// dynamically according to what the peer and Chilkat support. Choosing an exact
	// version causes the connection to fail unless that exact version is negotiated. A
	// minimum-version form such as TLS 1.2 or higher is generally preferable to an
	// exact version.
	// 
	// Security: Avoid SSL 3.0, TLS 1.0, and TLS 1.1 unless compatibility with a legacy
	// peer is unavoidable.
	void put_SslProtocol(const char *newVal);

	// Specifies the character encoding used by text-oriented socket methods. Examples
	// include utf-8, windows-1252, shift_jis, and iso-8859-1. The default is ansi.
	// 
	// The value ansi means the system default encoding determined by the default
	// system locale. It is not a fixed encoding such as Windows-1252, ISO-8859-1, or
	// ASCII; the actual encoding is platform- and system-configuration-dependent.
	// 
	// Sending methods such as SendString and SendSb encode text using this charset.
	// String receive methods decode incoming bytes from this charset, including
	// ReceiveString, ReceiveSb, ReceiveToCRLF, and delimiter-based string methods.
	// 
	// Important: TCP transports bytes, not text. Both peers must agree on the encoding
	// and message framing. For portable protocols, prefer an explicit charset such as
	// utf-8 rather than ansi. Use byte-oriented methods when the protocol is binary or
	// exact byte preservation is required.
	void get_StringCharset(CkString &str);
	// Specifies the character encoding used by text-oriented socket methods. Examples
	// include utf-8, windows-1252, shift_jis, and iso-8859-1. The default is ansi.
	// 
	// The value ansi means the system default encoding determined by the default
	// system locale. It is not a fixed encoding such as Windows-1252, ISO-8859-1, or
	// ASCII; the actual encoding is platform- and system-configuration-dependent.
	// 
	// Sending methods such as SendString and SendSb encode text using this charset.
	// String receive methods decode incoming bytes from this charset, including
	// ReceiveString, ReceiveSb, ReceiveToCRLF, and delimiter-based string methods.
	// 
	// Important: TCP transports bytes, not text. Both peers must agree on the encoding
	// and message framing. For portable protocols, prefer an explicit charset such as
	// utf-8 rather than ansi. Use byte-oriented methods when the protocol is binary or
	// exact byte preservation is required.
	const char *stringCharset(void);
	// Specifies the character encoding used by text-oriented socket methods. Examples
	// include utf-8, windows-1252, shift_jis, and iso-8859-1. The default is ansi.
	// 
	// The value ansi means the system default encoding determined by the default
	// system locale. It is not a fixed encoding such as Windows-1252, ISO-8859-1, or
	// ASCII; the actual encoding is platform- and system-configuration-dependent.
	// 
	// Sending methods such as SendString and SendSb encode text using this charset.
	// String receive methods decode incoming bytes from this charset, including
	// ReceiveString, ReceiveSb, ReceiveToCRLF, and delimiter-based string methods.
	// 
	// Important: TCP transports bytes, not text. Both peers must agree on the encoding
	// and message framing. For portable protocols, prefer an explicit charset such as
	// utf-8 rather than ansi. Use byte-oriented methods when the protocol is binary or
	// exact byte preservation is required.
	void put_StringCharset(const char *newVal);

	// Controls the TCP_NODELAY option. The default is false, allowing the Nagle
	// algorithm. Set it to true to send small writes with lower latency rather than
	// waiting to coalesce them.
	// 
	// Note: Disabling Nagle can improve interactive request/response latency but may
	// increase packet overhead. It is not universally faster for bulk transfers.
	bool get_TcpNoDelay(void);
	// Controls the TCP_NODELAY option. The default is false, allowing the Nagle
	// algorithm. Set it to true to send small writes with lower latency rather than
	// waiting to coalesce them.
	// 
	// Note: Disabling Nagle can improve interactive request/response latency but may
	// increase packet overhead. It is not universally faster for bulk transfers.
	void put_TcpNoDelay(bool newVal);

	// Returns the cipher suite from the most recent successful TLS handshake performed
	// by this Socket object, for example TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384. It is
	// empty until the object has completed its first successful TLS handshake.
	// 
	// Cached handshake result: This property does not necessarily describe the current
	// connection. Its value is retained after Close, a failed connection attempt, a
	// later plain-TCP connection, and ConvertFromSsl. It is replaced only when this
	// object completes another successful TLS handshake. Do not use this property
	// alone to determine whether the current connection is protected by TLS.
	void get_TlsCipherSuite(CkString &str);
	// Returns the cipher suite from the most recent successful TLS handshake performed
	// by this Socket object, for example TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384. It is
	// empty until the object has completed its first successful TLS handshake.
	// 
	// Cached handshake result: This property does not necessarily describe the current
	// connection. Its value is retained after Close, a failed connection attempt, a
	// later plain-TCP connection, and ConvertFromSsl. It is replaced only when this
	// object completes another successful TLS handshake. Do not use this property
	// alone to determine whether the current connection is protected by TLS.
	const char *tlsCipherSuite(void);

	// Specifies one or more expected SubjectPublicKeyInfo (SPKI) fingerprints for TLS
	// public-key pinning. If the certificate presented by the server does not match
	// any configured fingerprint, the TLS handshake is aborted and the connection
	// fails.
	// 
	// The format is:
	// 
	// hash_algorithm, encoding, fingerprint1, fingerprint2, ...
	// 
	// For example, a single SHA-256 base64 pin is:
	// 
	// sha256, base64, lKg1SIqyhPSK19tlPbjl8s02yChsVTDklQpkMCHvsTE=
	// 
	// Supported hash algorithms include sha1, sha256, sha384, sha512, md2, md5, haval,
	// ripemd128, ripemd160, ripemd256, and ripemd320. Supported encodings include
	// base64, hex, and other Chilkat-supported binary encodings.
	// 
	// Independent enforcement: Pin matching is enforced whenever this property is
	// nonempty, even if RequireSslCertVerify is false. Normal certificate validity
	// and trust-chain verification remain separately controlled by
	// RequireSslCertVerify.
	// Key rotation: Pinning is operationally strict. Add backup pins before rotating
	// the server key, or a legitimate certificate replacement can break connectivity.
	void get_TlsPinSet(CkString &str);
	// Specifies one or more expected SubjectPublicKeyInfo (SPKI) fingerprints for TLS
	// public-key pinning. If the certificate presented by the server does not match
	// any configured fingerprint, the TLS handshake is aborted and the connection
	// fails.
	// 
	// The format is:
	// 
	// hash_algorithm, encoding, fingerprint1, fingerprint2, ...
	// 
	// For example, a single SHA-256 base64 pin is:
	// 
	// sha256, base64, lKg1SIqyhPSK19tlPbjl8s02yChsVTDklQpkMCHvsTE=
	// 
	// Supported hash algorithms include sha1, sha256, sha384, sha512, md2, md5, haval,
	// ripemd128, ripemd160, ripemd256, and ripemd320. Supported encodings include
	// base64, hex, and other Chilkat-supported binary encodings.
	// 
	// Independent enforcement: Pin matching is enforced whenever this property is
	// nonempty, even if RequireSslCertVerify is false. Normal certificate validity
	// and trust-chain verification remain separately controlled by
	// RequireSslCertVerify.
	// Key rotation: Pinning is operationally strict. Add backup pins before rotating
	// the server key, or a legitimate certificate replacement can break connectivity.
	const char *tlsPinSet(void);
	// Specifies one or more expected SubjectPublicKeyInfo (SPKI) fingerprints for TLS
	// public-key pinning. If the certificate presented by the server does not match
	// any configured fingerprint, the TLS handshake is aborted and the connection
	// fails.
	// 
	// The format is:
	// 
	// hash_algorithm, encoding, fingerprint1, fingerprint2, ...
	// 
	// For example, a single SHA-256 base64 pin is:
	// 
	// sha256, base64, lKg1SIqyhPSK19tlPbjl8s02yChsVTDklQpkMCHvsTE=
	// 
	// Supported hash algorithms include sha1, sha256, sha384, sha512, md2, md5, haval,
	// ripemd128, ripemd160, ripemd256, and ripemd320. Supported encodings include
	// base64, hex, and other Chilkat-supported binary encodings.
	// 
	// Independent enforcement: Pin matching is enforced whenever this property is
	// nonempty, even if RequireSslCertVerify is false. Normal certificate validity
	// and trust-chain verification remain separately controlled by
	// RequireSslCertVerify.
	// Key rotation: Pinning is operationally strict. Add backup pins before rotating
	// the server key, or a legitimate certificate replacement can break connectivity.
	void put_TlsPinSet(const char *newVal);

	// Returns the protocol version from the most recent successful TLS handshake
	// performed by this Socket object, such as TLS 1.2 or TLS 1.3. It is empty until
	// the object has completed its first successful TLS handshake.
	// 
	// Cached handshake result: This property does not necessarily describe the current
	// connection. Its value is retained after Close, a failed connection attempt, a
	// later plain-TCP connection, and ConvertFromSsl. It is replaced only when this
	// object completes another successful TLS handshake. Do not use this property
	// alone to determine whether the current connection is protected by TLS.
	void get_TlsVersion(CkString &str);
	// Returns the protocol version from the most recent successful TLS handshake
	// performed by this Socket object, such as TLS 1.2 or TLS 1.3. It is empty until
	// the object has completed its first successful TLS handshake.
	// 
	// Cached handshake result: This property does not necessarily describe the current
	// connection. Its value is retained after Close, a failed connection attempt, a
	// later plain-TCP connection, and ConvertFromSsl. It is replaced only when this
	// object completes another successful TLS handshake. Do not use this property
	// alone to determine whether the current connection is protected by TLS.
	const char *tlsVersion(void);

	// Provides comma-separated compatibility or platform-specific options. The default
	// is the empty string and should normally remain unchanged.
	// 
	// +----------------+-------------------------------------------------------------+
	// |    Keyword     |                          Behavior                           |
	// +================+=============================================================+
	// | ProtectFromVpn | On Android, attempts to route the socket outside an active  |
	// |                | VPN.                                                        |
	// +----------------+-------------------------------------------------------------+
	// | EnableTls13    | Historical compatibility option introduced when TLS 1.3 was |
	// |                | not yet enabled by default. It is generally unnecessary in  |
	// |                | current versions.                                           |
	// +----------------+-------------------------------------------------------------+
	// 
	// Important: These options are intentionally uncommon and may be platform- or
	// version-specific. Use only when the documented behavior is required.
	void get_UncommonOptions(CkString &str);
	// Provides comma-separated compatibility or platform-specific options. The default
	// is the empty string and should normally remain unchanged.
	// 
	// +----------------+-------------------------------------------------------------+
	// |    Keyword     |                          Behavior                           |
	// +================+=============================================================+
	// | ProtectFromVpn | On Android, attempts to route the socket outside an active  |
	// |                | VPN.                                                        |
	// +----------------+-------------------------------------------------------------+
	// | EnableTls13    | Historical compatibility option introduced when TLS 1.3 was |
	// |                | not yet enabled by default. It is generally unnecessary in  |
	// |                | current versions.                                           |
	// +----------------+-------------------------------------------------------------+
	// 
	// Important: These options are intentionally uncommon and may be platform- or
	// version-specific. Use only when the documented behavior is required.
	const char *uncommonOptions(void);
	// Provides comma-separated compatibility or platform-specific options. The default
	// is the empty string and should normally remain unchanged.
	// 
	// +----------------+-------------------------------------------------------------+
	// |    Keyword     |                          Behavior                           |
	// +================+=============================================================+
	// | ProtectFromVpn | On Android, attempts to route the socket outside an active  |
	// |                | VPN.                                                        |
	// +----------------+-------------------------------------------------------------+
	// | EnableTls13    | Historical compatibility option introduced when TLS 1.3 was |
	// |                | not yet enabled by default. It is generally unnecessary in  |
	// |                | current versions.                                           |
	// +----------------+-------------------------------------------------------------+
	// 
	// Important: These options are intentionally uncommon and may be platform- or
	// version-specific. Use only when the documented behavior is required.
	void put_UncommonOptions(const char *newVal);

	// Stores arbitrary application text with the socket object. Chilkat does not
	// transmit, interpret, or otherwise use this value. It is useful for associating a
	// label, connection ID, or other application metadata with a socket.
	// 
	void get_UserData(CkString &str);
	// Stores arbitrary application text with the socket object. Chilkat does not
	// transmit, interpret, or otherwise use this value. It is useful for associating a
	// label, connection ID, or other application metadata with a socket.
	// 
	const char *userData(void);
	// Stores arbitrary application text with the socket object. Chilkat does not
	// transmit, interpret, or otherwise use this value. It is useful for associating a
	// label, connection ID, or other application metadata with a socket.
	// 
	void put_UserData(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Waits for and accepts the next incoming connection on a socket previously
	// configured by BindAndListen or BindAndListenPortRange. For a TLS listener,
	// acceptance includes the server-side TLS handshake.
	// 
	//     * maxWaitMs = 0 waits indefinitely for an incoming connection.
	//     * A positive value waits up to that many milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// Destination replacement: On success, the accepted connection replaces any
	// connection already owned by socket; a prior call to Close is not required. The
	// destination keeps its existing property values, while only its connection is
	// replaced. If the destination is actively performing another operation, the
	// accept fails rather than interrupting that operation.
	// Failure is non-destructive: On any failure, including a timeout, missing
	// listener, or TLS handshake failure, the destination socket is left completely
	// unchanged. The listening socket also remains active after a timeout or a
	// per-client TLS failure, so the application may immediately call AcceptNext again
	// without rebinding.
	// 
	// The accepted connection is independent of the listener and all other accepted
	// connections. Listener properties are not copied to the accepted socket.
	// Configure the destination before or after a successful accept as needed.
	// 
	// +-----------------------------------------+--------------------------+
	// |                 Setting                 | Inherited from listener? |
	// +=========================================+==========================+
	// | MaxReadIdleMs / MaxSendIdleMs           | No                       |
	// +-----------------------------------------+--------------------------+
	// | Verbose logging and debug-log path      | No                       |
	// +-----------------------------------------+--------------------------+
	// | Upload/download bandwidth throttling    | No                       |
	// +-----------------------------------------+--------------------------+
	// | Socket buffers and TCP no-delay options | No                       |
	// +-----------------------------------------+--------------------------+
	// | SslAllowedCiphers / SslProtocol         | No                       |
	// +-----------------------------------------+--------------------------+
	// 
	// TLS state: The server certificate configuration created by InitSslServer remains
	// on the listener and is used for each handshake. The accepted socket contains
	// that connection's negotiated TLS state, peer information, and any received
	// client certificate. Examine those values on the accepted socket.
	// TLS handshake timeout: maxWaitMs governs the wait for the incoming TCP
	// connection. Handshake inactivity is governed by MaxReadIdleMs and MaxSendIdleMs
	// on the listener.
	bool AcceptNext(int maxWaitMs, CkSocket &socket);

	// Waits for and accepts the next incoming connection on a socket previously
	// configured by BindAndListen or BindAndListenPortRange. For a TLS listener,
	// acceptance includes the server-side TLS handshake.
	// 
	//     * maxWaitMs = 0 waits indefinitely for an incoming connection.
	//     * A positive value waits up to that many milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// Destination replacement: On success, the accepted connection replaces any
	// connection already owned by socket; a prior call to Close is not required. The
	// destination keeps its existing property values, while only its connection is
	// replaced. If the destination is actively performing another operation, the
	// accept fails rather than interrupting that operation.
	// Failure is non-destructive: On any failure, including a timeout, missing
	// listener, or TLS handshake failure, the destination socket is left completely
	// unchanged. The listening socket also remains active after a timeout or a
	// per-client TLS failure, so the application may immediately call AcceptNext again
	// without rebinding.
	// 
	// The accepted connection is independent of the listener and all other accepted
	// connections. Listener properties are not copied to the accepted socket.
	// Configure the destination before or after a successful accept as needed.
	// 
	// +-----------------------------------------+--------------------------+
	// |                 Setting                 | Inherited from listener? |
	// +=========================================+==========================+
	// | MaxReadIdleMs / MaxSendIdleMs           | No                       |
	// +-----------------------------------------+--------------------------+
	// | Verbose logging and debug-log path      | No                       |
	// +-----------------------------------------+--------------------------+
	// | Upload/download bandwidth throttling    | No                       |
	// +-----------------------------------------+--------------------------+
	// | Socket buffers and TCP no-delay options | No                       |
	// +-----------------------------------------+--------------------------+
	// | SslAllowedCiphers / SslProtocol         | No                       |
	// +-----------------------------------------+--------------------------+
	// 
	// TLS state: The server certificate configuration created by InitSslServer remains
	// on the listener and is used for each handshake. The accepted socket contains
	// that connection's negotiated TLS state, peer information, and any received
	// client certificate. Examine those values on the accepted socket.
	// TLS handshake timeout: maxWaitMs governs the wait for the incoming TCP
	// connection. Handshake inactivity is governed by MaxReadIdleMs and MaxSendIdleMs
	// on the listener.
	CkTask *AcceptNextAsync(int maxWaitMs, CkSocket &socket);


	// Deprecated: This method is deprecated. Use AcceptNext instead.
	// 
	// Waits for and accepts the next incoming connection on a listening socket. On
	// success, a new Socket object is returned.
	// 
	//     * maxWaitMs = 0 waits indefinitely for an incoming connection.
	//     * A positive value waits up to that many milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// TLS listeners: Accepting a TLS connection also performs the TLS handshake. The
	// wait for an incoming TCP connection uses maxWaitMs; handshake inactivity uses
	// MaxReadIdleMs and MaxSendIdleMs. Leaving the idle timeouts at 0 permits an
	// unresponsive client to keep the handshake waiting indefinitely.
	// The caller is responsible for deleting the object returned by this method.
	CkSocket *AcceptNextConnection(int maxWaitMs);

	// Deprecated: This method is deprecated. Use AcceptNext instead.
	// 
	// Waits for and accepts the next incoming connection on a listening socket. On
	// success, a new Socket object is returned.
	// 
	//     * maxWaitMs = 0 waits indefinitely for an incoming connection.
	//     * A positive value waits up to that many milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// TLS listeners: Accepting a TLS connection also performs the TLS handshake. The
	// wait for an incoming TCP connection uses maxWaitMs; handshake inactivity uses
	// MaxReadIdleMs and MaxSendIdleMs. Leaving the idle timeouts at 0 permits an
	// unresponsive client to keep the handshake waiting indefinitely.
	CkTask *AcceptNextConnectionAsync(int maxWaitMs);


	// Adds a certificate-authority distinguished name to the list advertised by a TLS
	// server when requesting a client certificate for mutual TLS. Call this method
	// once for each acceptable CA distinguished name.
	// 
	// Required order: Call every AddSslAcceptableClientCaDn before InitSslServer. The
	// acceptable-CA list is captured when InitSslServer creates the TLS server
	// configuration. Names added afterward are not included in that configuration's
	// CertificateRequest and therefore do not affect its handshakes.
	// 
	// Skip this method when the server does not request client certificates. If no CA
	// distinguished names are added, client certificates issued by any root CA are
	// accepted by this CA-name filter.
	// 
	// Authorization remains application-defined: The CA-name list is only one part of
	// mutual TLS. After AcceptNext succeeds, inspect the client certificates on the
	// accepted socket and apply the application's authorization policy.
	bool AddSslAcceptableClientCaDn(const char *certAuthDN);


	// Binds a TCP listener to port and places it into listening mode. After this
	// method succeeds, call AcceptNext to accept incoming connections.
	// 
	// When ClientIpAddress is empty, the listener binds to all interfaces: 0.0.0.0
	// when the shared ListenIpv6 / PreferIpv6 setting is false, or:: when it is
	// true. To restrict the listener to one local interface, set ClientIpAddress to
	// that interface's numeric address before calling this method. The explicit
	// address also determines whether the listener is IPv4 or IPv6.
	// 
	// backLog is the requested operating-system queue length for connections that have
	// completed or are completing the TCP handshake but have not yet been accepted. It
	// is a queue hint, not a limit on the total number of clients the application can
	// serve.
	// 
	// Pass 0 for port to let the operating system choose an available port, then read
	// ListenPort.
	// 
	// Remote access by default: Because an empty ClientIpAddress binds to all
	// interfaces, remote computers can connect by default, subject to routing and
	// firewall rules. Set ClientIpAddress to 127.0.0.1 or::1 for a loopback-only
	// listener.
	// State replacement: If this object currently has an outbound connection, that
	// connection is discarded and the object becomes a listener. A prior call to Close
	// is not required. If another operation is actively using the socket, this call
	// fails with an in-use error.
	// TLS server call order: When client-certificate CA names are needed, call
	// AddSslAcceptableClientCaDn first. Then call InitSslServer, BindAndListen, and
	// AcceptNext, in that order. Calling InitSslServer after binding discards the
	// listener and leaves the object unbound.
	// Backlog: The operating system may cap or adjust the requested backlog. Choose a
	// value based on burst arrival rate and how quickly the application returns to
	// accepting connections.
	bool BindAndListen(int port, int backLog);

	// Binds a TCP listener to port and places it into listening mode. After this
	// method succeeds, call AcceptNext to accept incoming connections.
	// 
	// When ClientIpAddress is empty, the listener binds to all interfaces: 0.0.0.0
	// when the shared ListenIpv6 / PreferIpv6 setting is false, or:: when it is
	// true. To restrict the listener to one local interface, set ClientIpAddress to
	// that interface's numeric address before calling this method. The explicit
	// address also determines whether the listener is IPv4 or IPv6.
	// 
	// backLog is the requested operating-system queue length for connections that have
	// completed or are completing the TCP handshake but have not yet been accepted. It
	// is a queue hint, not a limit on the total number of clients the application can
	// serve.
	// 
	// Pass 0 for port to let the operating system choose an available port, then read
	// ListenPort.
	// 
	// Remote access by default: Because an empty ClientIpAddress binds to all
	// interfaces, remote computers can connect by default, subject to routing and
	// firewall rules. Set ClientIpAddress to 127.0.0.1 or::1 for a loopback-only
	// listener.
	// State replacement: If this object currently has an outbound connection, that
	// connection is discarded and the object becomes a listener. A prior call to Close
	// is not required. If another operation is actively using the socket, this call
	// fails with an in-use error.
	// TLS server call order: When client-certificate CA names are needed, call
	// AddSslAcceptableClientCaDn first. Then call InitSslServer, BindAndListen, and
	// AcceptNext, in that order. Calling InitSslServer after binding discards the
	// listener and leaves the object unbound.
	// Backlog: The operating system may cap or adjust the requested backlog. Choose a
	// value based on burst arrival rate and how quickly the application returns to
	// accepting connections.
	CkTask *BindAndListenAsync(int port, int backLog);


	// Searches the inclusive range beginPort through endPort for an available TCP
	// port, binds it, and begins listening. The method returns the selected port, or
	// -1 when no port can be bound or another error occurs.
	// 
	// When ClientIpAddress is empty, the listener binds to all interfaces: 0.0.0.0
	// when the shared ListenIpv6 / PreferIpv6 setting is false, or:: when it is
	// true. Set ClientIpAddress to a numeric local address to bind only to that
	// interface; the explicit address determines the address family.
	// 
	// backLog is the requested operating-system pending-connection queue length. The
	// operating system may cap or adjust it.
	// 
	// Next step: After a port is successfully selected, call AcceptNext to accept
	// incoming connections. For TLS listeners, complete AddSslAcceptableClientCaDn, if
	// needed, and InitSslServer before calling this method.
	int BindAndListenPortRange(int beginPort, int endPort, int backLog);

	// Searches the inclusive range beginPort through endPort for an available TCP
	// port, binds it, and begins listening. The method returns the selected port, or
	// -1 when no port can be bound or another error occurs.
	// 
	// When ClientIpAddress is empty, the listener binds to all interfaces: 0.0.0.0
	// when the shared ListenIpv6 / PreferIpv6 setting is false, or:: when it is
	// true. Set ClientIpAddress to a numeric local address to bind only to that
	// interface; the explicit address determines the address family.
	// 
	// backLog is the requested operating-system pending-connection queue length. The
	// operating system may cap or adjust it.
	// 
	// Next step: After a port is successfully selected, call AcceptNext to accept
	// incoming connections. For TLS listeners, complete AddSslAcceptableClientCaDn, if
	// needed, and InitSslServer before calling this method.
	CkTask *BindAndListenPortRangeAsync(int beginPort, int endPort, int backLog);


	// Builds and returns a simple HTTP GET request for url. The method only constructs
	// the request text; it does not connect, send the request, follow redirects, or
	// read a response.
	// 
	// Tip: Use the higher-level Http or Rest class for normal HTTP work. This helper
	// is intended for low-level socket examples or custom HTTP handling.
	bool BuildHttpGetRequest(const char *url, CkString &outStr);

	// Builds and returns a simple HTTP GET request for url. The method only constructs
	// the request text; it does not connect, send the request, follow redirects, or
	// read a response.
	// 
	// Tip: Use the higher-level Http or Rest class for normal HTTP work. This helper
	// is intended for low-level socket examples or custom HTTP handling.
	const char *buildHttpGetRequest(const char *url);

	// Waits for the connected socket to become writable.
	// 
	//     * maxWaitMs = 0 performs a nonblocking poll and returns immediately.
	//     * A positive value waits up to that many milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// 
	// +-------------+----------------------------------------------------------------+
	// |   Return    |                            Meaning                             |
	// |    value    |                                                                |
	// +=============+================================================================+
	// | 1           | The socket is connected and currently writable.                |
	// +-------------+----------------------------------------------------------------+
	// | 0           | The socket was not writable before the timeout, or the         |
	// |             | operation was aborted.                                         |
	// +-------------+----------------------------------------------------------------+
	// | -1          | The socket is not connected or an error occurred.              |
	// +-------------+----------------------------------------------------------------+
	// 
	// Write readiness: Writable means the operating system can presently accept more
	// bytes into its send buffer. It does not mean the remote application has received
	// or processed them.
	int CheckWriteable(int maxWaitMs);

	// Waits for the connected socket to become writable.
	// 
	//     * maxWaitMs = 0 performs a nonblocking poll and returns immediately.
	//     * A positive value waits up to that many milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// 
	// +-------------+----------------------------------------------------------------+
	// |   Return    |                            Meaning                             |
	// |    value    |                                                                |
	// +=============+================================================================+
	// | 1           | The socket is connected and currently writable.                |
	// +-------------+----------------------------------------------------------------+
	// | 0           | The socket was not writable before the timeout, or the         |
	// |             | operation was aborted.                                         |
	// +-------------+----------------------------------------------------------------+
	// | -1          | The socket is not connected or an error occurred.              |
	// +-------------+----------------------------------------------------------------+
	// 
	// Write readiness: Writable means the operating system can presently accept more
	// bytes into its send buffer. It does not mean the remote application has received
	// or processed them.
	CkTask *CheckWriteableAsync(int maxWaitMs);


	// Clears the accumulated text returned by SessionLog for this wrapper. It does not
	// change KeepSessionLog or close the connection.
	// 
	void ClearSessionLog(void);


	// Deprecated: This method is deprecated. Use DupSocket instead.
	// 
	// Returns another Socket object that shares the same underlying TCP or TLS
	// connection. Reads and writes made through either object operate on the same byte
	// stream.
	// 
	// Important: Sharing a connection does not create a second independent protocol
	// session. Coordinate reads, writes, and closing carefully so that one object does
	// not consume bytes or close the connection unexpectedly for the other.
	// The caller is responsible for deleting the object returned by this method.
	CkSocket *CloneSocket(void);


	// Attempts to gracefully terminate and close the current TCP, TLS, or SSH channel
	// connection. maxWaitMs controls how long the method waits for clean shutdown
	// processing.
	// 
	//     * 0 waits indefinitely for the clean close.
	//     * A positive value waits up to that many milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// 
	// The method is safe and idempotent. Calling it on an already closed or
	// never-connected object does nothing and returns true. Repeated calls are
	// harmless; the diagnostic log may note that there was no connection to close.
	// 
	// Socket-set removal: When a socket-set selector is active, Close is routed to the
	// selected member, closes it, and removes it from the set immediately. There is no
	// separate remove-without-closing method. Direct SelectorIndex positions after the
	// removed member shift down.
	// Duplicated connections: When the connection is shared by objects created through
	// DupSocket, calling Close on any wrapper closes the connection for all wrappers.
	// Merely destroying one duplicate without calling Close releases only that
	// wrapper's reference.
	// Note: After this call, IsConnected is false for the closed connection. A
	// graceful transport close cannot guarantee that the remote application processed
	// all data sent before the close.
	bool Close(int maxWaitMs);

	// Attempts to gracefully terminate and close the current TCP, TLS, or SSH channel
	// connection. maxWaitMs controls how long the method waits for clean shutdown
	// processing.
	// 
	//     * 0 waits indefinitely for the clean close.
	//     * A positive value waits up to that many milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// 
	// The method is safe and idempotent. Calling it on an already closed or
	// never-connected object does nothing and returns true. Repeated calls are
	// harmless; the diagnostic log may note that there was no connection to close.
	// 
	// Socket-set removal: When a socket-set selector is active, Close is routed to the
	// selected member, closes it, and removes it from the set immediately. There is no
	// separate remove-without-closing method. Direct SelectorIndex positions after the
	// removed member shift down.
	// Duplicated connections: When the connection is shared by objects created through
	// DupSocket, calling Close on any wrapper closes the connection for all wrappers.
	// Merely destroying one duplicate without calling Close releases only that
	// wrapper's reference.
	// Note: After this call, IsConnected is false for the closed connection. A
	// graceful transport close cannot guarantee that the remote application processed
	// all data sent before the close.
	CkTask *CloseAsync(int maxWaitMs);


	// Establishes a TCP connection to hostname: port. Set ssl to true to perform a
	// TLS handshake after the TCP connection succeeds; set it to false for plain
	// TCP. hostname may be a DNS name or a numeric IPv4 or IPv6 address.
	// 
	// maxWaitMs is the overall wait budget for DNS resolution performed by this call
	// and establishment of the TCP connection. Its special values are:
	// 
	//     * 0 waits indefinitely, subject to an internal effective ceiling of
	//     approximately six hours.
	//     * A positive value below 100 milliseconds is treated as 100 milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// 
	// The later TLS handshake is governed by MaxReadIdleMs and MaxSendIdleMs, not by
	// maxWaitMs. HTTP and SOCKS proxy protocol exchanges ordinarily use those
	// read/write idle timeouts as well; there is no separate proxy-negotiation timeout
	// property.
	// 
	// Connection options such as ClientIpAddress, ClientPort, proxy settings,
	// PreferIpv6, TLS policy, SNI, ALPN, certificate verification, pinning, and client
	// certificates must be configured before calling this method.
	// 
	// +----------------------------+-------------------------------------------------+
	// |      Connection phase      |                     Timeout                     |
	// +============================+=================================================+
	// | DNS resolution performed   | maxWaitMs overall budget                        |
	// | by Connect                 |                                                 |
	// +----------------------------+-------------------------------------------------+
	// | TCP connection             | maxWaitMs                                       |
	// | establishment              |                                                 |
	// +----------------------------+-------------------------------------------------+
	// | TLS handshake              | MaxReadIdleMs and MaxSendIdleMs                 |
	// +----------------------------+-------------------------------------------------+
	// | HTTP/SOCKS proxy exchanges | Ordinarily the read/write idle timeouts; no     |
	// |                            | separate setting is provided                    |
	// +----------------------------+-------------------------------------------------+
	// 
	// Reusing the object: A prior call to Close is not required. If this object is
	// already connected, listening, or contains leftover state from a failed
	// connection or TLS upgrade, Connect discards that state and establishes the new
	// connection. An existing TCP or TLS connection is torn down immediately rather
	// than closed gracefully, and an existing listener is stopped. If another
	// operation is actively using the socket, the call fails with an in-use error
	// instead of interrupting that operation.
	// SSH tunnel exception: When this object has a live SSH tunnel, the SSH session is
	// preserved. The previous tunneled channel is closed, and the new destination
	// connection is opened through the same SSH tunnel.
	// Socket sets: If SelectorIndex, SelectorReadIndex, or SelectorWriteIndex selects
	// a member, this method is routed to that selected member. With no active
	// selector, it creates or replaces the set container object's own direct
	// connection and leaves the contained members unchanged.
	// Security: A successful TCP connection only establishes a byte stream. For TLS,
	// enable the certificate-verification and/or pinning policy required by the
	// application. A completed connection does not by itself authenticate an
	// application-level protocol.
	// Idle connections: A connected socket does not automatically close merely because
	// no application data is sent. Peers, NAT devices, proxies, firewalls, and
	// operating-system TCP keepalive policies can still close an idle path.
	bool Connect(const char *hostname, int port, bool ssl, int maxWaitMs);

	// Establishes a TCP connection to hostname: port. Set ssl to true to perform a
	// TLS handshake after the TCP connection succeeds; set it to false for plain
	// TCP. hostname may be a DNS name or a numeric IPv4 or IPv6 address.
	// 
	// maxWaitMs is the overall wait budget for DNS resolution performed by this call
	// and establishment of the TCP connection. Its special values are:
	// 
	//     * 0 waits indefinitely, subject to an internal effective ceiling of
	//     approximately six hours.
	//     * A positive value below 100 milliseconds is treated as 100 milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// 
	// The later TLS handshake is governed by MaxReadIdleMs and MaxSendIdleMs, not by
	// maxWaitMs. HTTP and SOCKS proxy protocol exchanges ordinarily use those
	// read/write idle timeouts as well; there is no separate proxy-negotiation timeout
	// property.
	// 
	// Connection options such as ClientIpAddress, ClientPort, proxy settings,
	// PreferIpv6, TLS policy, SNI, ALPN, certificate verification, pinning, and client
	// certificates must be configured before calling this method.
	// 
	// +----------------------------+-------------------------------------------------+
	// |      Connection phase      |                     Timeout                     |
	// +============================+=================================================+
	// | DNS resolution performed   | maxWaitMs overall budget                        |
	// | by Connect                 |                                                 |
	// +----------------------------+-------------------------------------------------+
	// | TCP connection             | maxWaitMs                                       |
	// | establishment              |                                                 |
	// +----------------------------+-------------------------------------------------+
	// | TLS handshake              | MaxReadIdleMs and MaxSendIdleMs                 |
	// +----------------------------+-------------------------------------------------+
	// | HTTP/SOCKS proxy exchanges | Ordinarily the read/write idle timeouts; no     |
	// |                            | separate setting is provided                    |
	// +----------------------------+-------------------------------------------------+
	// 
	// Reusing the object: A prior call to Close is not required. If this object is
	// already connected, listening, or contains leftover state from a failed
	// connection or TLS upgrade, Connect discards that state and establishes the new
	// connection. An existing TCP or TLS connection is torn down immediately rather
	// than closed gracefully, and an existing listener is stopped. If another
	// operation is actively using the socket, the call fails with an in-use error
	// instead of interrupting that operation.
	// SSH tunnel exception: When this object has a live SSH tunnel, the SSH session is
	// preserved. The previous tunneled channel is closed, and the new destination
	// connection is opened through the same SSH tunnel.
	// Socket sets: If SelectorIndex, SelectorReadIndex, or SelectorWriteIndex selects
	// a member, this method is routed to that selected member. With no active
	// selector, it creates or replaces the set container object's own direct
	// connection and leaves the contained members unchanged.
	// Security: A successful TCP connection only establishes a byte stream. For TLS,
	// enable the certificate-verification and/or pinning policy required by the
	// application. A completed connection does not by itself authenticate an
	// application-level protocol.
	// Idle connections: A connected socket does not automatically close merely because
	// no application data is sent. Peers, NAT devices, proxies, firewalls, and
	// operating-system TCP keepalive policies can still close an idle path.
	CkTask *ConnectAsync(const char *hostname, int port, bool ssl, int maxWaitMs);


	// Ends the TLS layer while leaving the underlying TCP connection open for
	// subsequent unencrypted communication. This is the reverse of a STARTTLS-style
	// upgrade and is valid only when TLS is currently active.
	// 
	// If called on a connected plain TCP socket, the method returns false because
	// there is no TLS layer to remove. The plain connection remains unchanged.
	// 
	// Important: The peer and application protocol must explicitly support returning
	// to plaintext. Arbitrarily removing TLS from a normal secure protocol will
	// usually break the session and can expose data.
	bool ConvertFromSsl(void);

	// Ends the TLS layer while leaving the underlying TCP connection open for
	// subsequent unencrypted communication. This is the reverse of a STARTTLS-style
	// upgrade and is valid only when TLS is currently active.
	// 
	// If called on a connected plain TCP socket, the method returns false because
	// there is no TLS layer to remove. The plain connection remains unchanged.
	// 
	// Important: The peer and application protocol must explicitly support returning
	// to plaintext. Arbitrarily removing TLS from a normal secure protocol will
	// usually break the session and can expose data.
	CkTask *ConvertFromSslAsync(void);


	// Upgrades an already connected plain TCP socket to TLS by performing a
	// client-side TLS handshake over the existing connection.
	// 
	// Important: Use this only at the point where the application protocol permits a
	// STARTTLS-style upgrade. Configure TLS policy, SNI, certificate verification,
	// pinning, and any client certificate before calling it.
	// Already-TLS connections: Calling ConvertToSsl on a connection that is already
	// protected by TLS is unsupported. The method checks that a connection exists but
	// does not define a second TLS-upgrade operation. Call it only for an established
	// plain connection.
	bool ConvertToSsl(void);

	// Upgrades an already connected plain TCP socket to TLS by performing a
	// client-side TLS handshake over the existing connection.
	// 
	// Important: Use this only at the point where the application protocol permits a
	// STARTTLS-style upgrade. Configure TLS policy, SNI, certificate verification,
	// pinning, and any client certificate before calling it.
	// Already-TLS connections: Calling ConvertToSsl on a connection that is already
	// protected by TLS is unsupported. The method checks that a connection exists but
	// does not define a second TLS-upgrade operation. Call it only for an established
	// plain connection.
	CkTask *ConvertToSslAsync(void);


	// Clears Chilkat's process-wide in-memory DNS cache. Subsequent hostname
	// resolutions perform a new lookup as needed.
	// 
	// Important: The cache is shared by Chilkat objects in the process, so clearing it
	// can affect unrelated connections. Normally the cache should be left intact
	// because Chilkat observes DNS record TTL expiration.
	void DnsCacheClear(void);


	// Resolves hostname and returns one numeric IP address.
	// 
	//     * maxWaitMs = 0 waits indefinitely.
	//     * A positive value waits up to that many milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// Multiple addresses: A hostname can resolve to multiple IPv4 and IPv6 addresses.
	// This method returns one selected address, influenced by settings such as
	// PreferIpv6; it is not a complete DNS-record enumeration.
	bool DnsLookup(const char *hostname, int maxWaitMs, CkString &outStr);

	// Resolves hostname and returns one numeric IP address.
	// 
	//     * maxWaitMs = 0 waits indefinitely.
	//     * A positive value waits up to that many milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// Multiple addresses: A hostname can resolve to multiple IPv4 and IPv6 addresses.
	// This method returns one selected address, influenced by settings such as
	// PreferIpv6; it is not a complete DNS-record enumeration.
	const char *dnsLookup(const char *hostname, int maxWaitMs);
	// Resolves hostname and returns one numeric IP address.
	// 
	//     * maxWaitMs = 0 waits indefinitely.
	//     * A positive value waits up to that many milliseconds.
	//     * Negative values have no defined meaning and should not be used.
	// Multiple addresses: A hostname can resolve to multiple IPv4 and IPv6 addresses.
	// This method returns one selected address, influenced by settings such as
	// PreferIpv6; it is not a complete DNS-record enumeration.
	CkTask *DnsLookupAsync(const char *hostname, int maxWaitMs);


	// Populates dest with another Socket wrapper that shares this object's underlying
	// connection. The destination first releases its reference to any connection it
	// previously held. The shared connection object is reference-counted, but all
	// wrappers operate on the same live connection and byte stream.
	// 
	// The reference count keeps the underlying connection object alive while wrappers
	// still refer to it; it does not prevent an explicit Close from shutting down the
	// connection. TLS state, TLS conversion state, and the internal receive/over-read
	// buffer are shared. A TLS renegotiation, ConvertToSsl, or ConvertFromSsl through
	// one wrapper changes the connection seen by every duplicate. Bytes buffered
	// through one wrapper may be consumed by a receive through another.
	// 
	// +------------------------------+-----------------------------------------------+
	// |  State, setting, or result   |             Scope after DupSocket             |
	// +==============================+===============================================+
	// | Underlying connection, byte  | Shared by all duplicates.                     |
	// | stream, TLS session, TLS     |                                               |
	// | conversion state, and        |                                               |
	// | receive buffer               |                                               |
	// +------------------------------+-----------------------------------------------+
	// | ReceivedCount                | Shared connection-level counter. All          |
	// |                              | duplicates report the same cumulative value,  |
	// |                              | and resetting it through one wrapper resets   |
	// |                              | the value seen by the others.                 |
	// +------------------------------+-----------------------------------------------+
	// | SendBytesPerSec and          | Shared connection-level measurements. Calling |
	// | RcvBytesPerSec               | ResetPerf through one wrapper resets the      |
	// |                              | selected measurement for every duplicate.     |
	// +------------------------------+-----------------------------------------------+
	// | KeepSessionLog , SessionLog  | Per wrapper. Enabling logging on one          |
	// | , and session logging        | duplicate does not enable it on another. Each |
	// |                              | wrapper logs only traffic that passes through |
	// |                              | it, and reading or clearing one wrapper's log |
	// |                              | does not affect another wrapper's log.        |
	// +------------------------------+-----------------------------------------------+
	// | LastMethodFailed ,           | Per wrapper. An operation performed through   |
	// | AcceptFailReason ,           | one duplicate does not update these values on |
	// | ReceiveFailReason ,          | another duplicate.                            |
	// | SendFailReason , and         |                                               |
	// | ReceivedInt                  |                                               |
	// +------------------------------+-----------------------------------------------+
	// 
	// Close affects every duplicate: Calling Close on any wrapper actively closes the
	// shared connection for all wrappers. The other wrapper objects remain alive, but
	// subsequent I/O through them fails because the shared connection is closed.
	// Threading pattern: Duplicates are intended to permit one reader and one writer
	// to use the same connection. Two concurrent readers compete for the same stream
	// and shared receive buffer and should be avoided.
	// Release rule: When one duplicate is no longer needed but another must continue
	// using the connection, release, destroy, delete, or allow the unused wrapper to
	// be garbage-collected without calling Close. This drops only that wrapper's
	// reference and leaves the connection usable through the remaining duplicates.
	// Call Close on any one wrapper only when the shared connection should end for
	// everyone.
	bool DupSocket(CkSocket &dest);


	// Populates json with information about local network adapters, including IPv4
	// addresses, IPv6 addresses, and MAC addresses. Existing contents of the
	// destination JSON object are replaced or populated according to the returned
	// structure.
	// 
	// Note: Adapter data is local system configuration. It does not identify the
	// public Internet address seen through NAT.
	bool GetAdaptersAddresses(CkJsonObject &json);


	// Copies additional JSON details from the most recently called method into json,
	// when that method produced such information. Many methods produce an empty
	// result.
	// 
	// Important: Call this immediately after the operation of interest. Any
	// intervening method call can replace the stored details.
	void GetLastJsonData(CkJsonObject &json);


	// Deprecated: This method is deprecated. Use GetMyServerCert instead.
	// 
	// Returns the certificate configured for this object when it is acting as a TLS
	// server. The certificate is initially supplied to InitSslServer.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetMyCert(void);


	// Copies the TLS server certificate configured by InitSslServer into cert. This
	// method is intended for a socket acting as a TLS server and returns false when
	// no server certificate has been configured.
	// 
	bool GetMyServerCert(CkCert &cert);


	// Copies the client certificate at zero-based index into cert from the TLS
	// handshake of an accepted server-side connection. Use NumReceivedClientCerts to
	// determine the valid index range.
	// 
	// Client certificates are normally supplied only when the server requests mutual
	// TLS authentication. The application can inspect the returned certificate and
	// close the connection when it does not satisfy authorization requirements.
	// 
	// Important: Call this method on the accepted connection object populated by
	// AcceptNext, not on the listener socket.
	bool GetRcvdClientCert(int index, CkCert &cert);


	// Deprecated: This method is deprecated. Use GetRcvdClientCert instead.
	// 
	// Returns the client certificate at the zero-based index received during the TLS
	// handshake on an accepted server-side connection. Use NumReceivedClientCerts to
	// determine the valid range.
	// 
	// Important: Call this on the accepted connection object returned by
	// AcceptNextConnection, not on the listener. The server application remains
	// responsible for deciding whether the certificate authorizes the client.
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetReceivedClientCert(int index);


	// Copies the certificate presented by the remote TLS server into cert for the
	// current client-side TLS connection. The method returns false when the socket
	// is not connected, is not using TLS, or no server certificate is available.
	// 
	// Note: Retrieving the certificate does not itself establish trust. Use
	// RequireSslCertVerify and/or TlsPinSet when validation is required.
	bool GetServerCert(CkCert &cert);


	// Returns the certificate-authority distinguished name at zero-based index from
	// the list sent by a TLS server when it requests a client certificate. Valid
	// indexes range from 0 through NumSslAcceptableClientCAs - 1.
	// 
	bool GetSslAcceptableClientCaDn(int index, CkString &outStr);

	// Returns the certificate-authority distinguished name at zero-based index from
	// the list sent by a TLS server when it requests a client certificate. Valid
	// indexes range from 0 through NumSslAcceptableClientCAs - 1.
	// 
	const char *getSslAcceptableClientCaDn(int index);
	// Returns the certificate-authority distinguished name at zero-based index from
	// the list sent by a TLS server when it requests a client certificate. Valid
	// indexes range from 0 through NumSslAcceptableClientCAs - 1.
	// 
	const char *sslAcceptableClientCaDn(int index);


	// Deprecated: This method is deprecated. Use GetServerCert instead.
	// 
	// Returns the certificate presented by the remote TLS server for the current
	// client-side TLS connection. It returns a null reference when the socket is not
	// connected or the connection is not using TLS.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetSslServerCert(void);


	// Configures this object for server-side TLS using cert as the server certificate.
	// The certificate must have access to its corresponding private key.
	// 
	// For a TLS listener that requests client certificates, the required sequence is:
	// 
	// AddSslAcceptableClientCaDn   (once for each acceptable CA)
	// InitSslServer
	// BindAndListen
	// AcceptNext
	// 
	// For a TLS listener without client-certificate requests, omit
	// AddSslAcceptableClientCaDn. For a plain non-TLS listener, omit both TLS setup
	// steps.
	// 
	// When the object is not already connected, this method also sets Ssl to true.
	// It may also be used on an already connected socket to begin server-side TLS on
	// that live connection.
	// 
	// Call order: Do not call InitSslServer after BindAndListen. A listening socket is
	// not treated as a connected socket, so this method replaces it with a new,
	// unbound TLS-server socket and the existing bind is lost. All calls to
	// AddSslAcceptableClientCaDn must also occur before this method.
	// Listener versus accepted socket: The server certificate configuration remains on
	// the listener and is used for each accepted TLS handshake. Per-connection
	// negotiated TLS information and received client certificates are stored on the
	// accepted socket.
	bool InitSslServer(CkCert &cert);


	// Deprecated: This method is deprecated. Use GetLastJsonData instead.
	// 
	// Returns a JSON object containing additional details produced by the most
	// recently called method when such details are available.
	// 
	// Important: Retrieve the data immediately after the operation of interest. A
	// later method call can replace it, and many methods do not produce additional
	// JSON details.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *LastJsonData(void);


	// Loads this object with the state of the object that initiated the asynchronous
	// operation represented by task. This is useful when the task has completed on a
	// worker thread and the caller state must be recovered into another wrapper
	// object.
	// 
	// Important: Use a task created by a compatible Socket asynchronous method and
	// call this after completion.
	bool LoadTaskCaller(CkTask &task);


	// Loads this socket object with the result state produced by a completed
	// asynchronous task whose result is a socket. Call it only after the task has
	// completed successfully.
	// 
	// Important: The task and result type must correspond to a compatible socket
	// operation. Check the task result and LastErrorText when loading fails.
	bool LoadTaskResult(CkTask &task);


	// Performs a nonblocking check for readable activity on the socket. It returns
	// true when data or another read-ready condition is present and false when
	// nothing is immediately available.
	// 
	// Note: A socket can become read-ready because the peer closed or reset the
	// connection. The next receive operation determines whether bytes are available or
	// the connection ended.
	bool PollDataAvailable(void);

	// Performs a nonblocking check for readable activity on the socket. It returns
	// true when data or another read-ready condition is present and false when
	// nothing is immediately available.
	// 
	// Note: A socket can become read-ready because the peer closed or reset the
	// connection. The next receive operation determines whether bytes are available or
	// the connection ended.
	CkTask *PollDataAvailableAsync(void);


	// Receives one delivery of binary data and appends it to binData. Chilkat first
	// appends any data already buffered internally. If no buffered data exists, the
	// method performs one receive operation; it does not loop to drain everything that
	// may be available.
	// 
	//     * For plain TCP, a direct read obtains at most ReceivePacketSize bytes.
	//     * For TLS or SSH, the amount is governed by the TLS record or SSH packet and
	//     is not limited by ReceivePacketSize.
	//     * Already-buffered data is appended in full, even if it exceeds
	//     ReceivePacketSize.
	//     * A successful call can append zero bytes during TLS renegotiation. Treat
	//     this as no application data yet and call the receive method again.
	// Inspect the destination even on failure: An orderly peer close reports
	// ReceiveFailReason = 10, but binData may contain final bytes received immediately
	// before the close.
	// TCP framing: TCP does not preserve message boundaries. Define framing in the
	// application protocol, such as an exact length, delimiter, fixed-size record, or
	// connection close.
	bool ReceiveBd(CkBinData &binData);

	// Receives one delivery of binary data and appends it to binData. Chilkat first
	// appends any data already buffered internally. If no buffered data exists, the
	// method performs one receive operation; it does not loop to drain everything that
	// may be available.
	// 
	//     * For plain TCP, a direct read obtains at most ReceivePacketSize bytes.
	//     * For TLS or SSH, the amount is governed by the TLS record or SSH packet and
	//     is not limited by ReceivePacketSize.
	//     * Already-buffered data is appended in full, even if it exceeds
	//     ReceivePacketSize.
	//     * A successful call can append zero bytes during TLS renegotiation. Treat
	//     this as no application data yet and call the receive method again.
	// Inspect the destination even on failure: An orderly peer close reports
	// ReceiveFailReason = 10, but binData may contain final bytes received immediately
	// before the close.
	// TCP framing: TCP does not preserve message boundaries. Define framing in the
	// application protocol, such as an exact length, delimiter, fixed-size record, or
	// connection close.
	CkTask *ReceiveBdAsync(CkBinData &binData);


	// Receives exactly numBytes bytes and appends them to binData. The method
	// continues receiving until the requested count is satisfied or a receive failure
	// occurs. Inactivity is controlled by MaxReadIdleMs.
	// 
	// The destination changes on failure: If a timeout, application abort, connection
	// close, or reset occurs after only part of the requested data is received, the
	// method returns false, but the partial bytes remain appended to binData. Those
	// bytes have been consumed from the connection, are included in ReceivedCount, and
	// are not retained internally for a later receive call.
	// 
	// A timeout or application abort generally leaves the connection open. A peer
	// close or reset leaves it unavailable for further I/O. When the requested count
	// is successfully completed, bytes read beyond that count may remain buffered
	// internally for the next receive operation.
	// 
	bool ReceiveBdN(unsigned long numBytes, CkBinData &binData);

	// Receives exactly numBytes bytes and appends them to binData. The method
	// continues receiving until the requested count is satisfied or a receive failure
	// occurs. Inactivity is controlled by MaxReadIdleMs.
	// 
	// The destination changes on failure: If a timeout, application abort, connection
	// close, or reset occurs after only part of the requested data is received, the
	// method returns false, but the partial bytes remain appended to binData. Those
	// bytes have been consumed from the connection, are included in ReceivedCount, and
	// are not retained internally for a later receive call.
	// 
	// A timeout or application abort generally leaves the connection open. A peer
	// close or reset leaves it unavailable for further I/O. When the requested count
	// is successfully completed, bytes read beyond that count may remain buffered
	// internally for the next receive operation.
	// 
	CkTask *ReceiveBdNAsync(unsigned long numBytes, CkBinData &binData);


	// Reads exactly one byte from the connection and stores its numeric value in
	// ReceivedInt. If bUnsigned is true, the result is in the range 0 through 255;
	// otherwise it is interpreted as a signed two's-complement byte in the range -128
	// through 127.
	// 
	// The method waits according to MaxReadIdleMs and returns false on timeout,
	// closure, or another receive failure. On failure, ReceivedInt is not cleared or
	// changed; it retains the value from the last successful integer receive.
	// 
	// Check the return value: Use this method's Boolean result to determine whether
	// ReceivedInt contains a newly received byte.
	bool ReceiveByte(bool bUnsigned);

	// Reads exactly one byte from the connection and stores its numeric value in
	// ReceivedInt. If bUnsigned is true, the result is in the range 0 through 255;
	// otherwise it is interpreted as a signed two's-complement byte in the range -128
	// through 127.
	// 
	// The method waits according to MaxReadIdleMs and returns false on timeout,
	// closure, or another receive failure. On failure, ReceivedInt is not cleared or
	// changed; it retains the value from the last successful integer receive.
	// 
	// Check the return value: Use this method's Boolean result to determine whether
	// ReceivedInt contains a newly received byte.
	CkTask *ReceiveByteAsync(bool bUnsigned);


	// Receives binary data and returns one delivery of bytes. Chilkat first returns
	// any data already buffered internally. If no buffered data exists, the method
	// performs one receive operation; it does not loop to drain everything that may be
	// available.
	// 
	//     * For plain TCP, a direct read returns at most ReceivePacketSize bytes.
	//     * For TLS or SSH, the returned amount is governed by the TLS record or SSH
	//     packet rather than ReceivePacketSize.
	//     * Already-buffered data is returned in full, even if it exceeds
	//     ReceivePacketSize.
	//     * A successful call can return zero bytes during TLS renegotiation. Treat
	//     this as no application data yet and call the receive method again.
	// Inspect data even on failure: An orderly peer close reports ReceiveFailReason =
	// 10, but the returned byte data may contain final bytes received immediately
	// before the close. Process those bytes before finishing the receive loop.
	// TCP framing: TCP does not preserve message boundaries. Define framing in the
	// application protocol, such as an exact length, delimiter, fixed-size record, or
	// connection close.
	bool ReceiveBytes(CkByteData &outData);

	// Receives binary data and returns one delivery of bytes. Chilkat first returns
	// any data already buffered internally. If no buffered data exists, the method
	// performs one receive operation; it does not loop to drain everything that may be
	// available.
	// 
	//     * For plain TCP, a direct read returns at most ReceivePacketSize bytes.
	//     * For TLS or SSH, the returned amount is governed by the TLS record or SSH
	//     packet rather than ReceivePacketSize.
	//     * Already-buffered data is returned in full, even if it exceeds
	//     ReceivePacketSize.
	//     * A successful call can return zero bytes during TLS renegotiation. Treat
	//     this as no application data yet and call the receive method again.
	// Inspect data even on failure: An orderly peer close reports ReceiveFailReason =
	// 10, but the returned byte data may contain final bytes received immediately
	// before the close. Process those bytes before finishing the receive loop.
	// TCP framing: TCP does not preserve message boundaries. Define framing in the
	// application protocol, such as an exact length, delimiter, fixed-size record, or
	// connection close.
	CkTask *ReceiveBytesAsync(void);


	// Receives binary data and returns one delivery encoded as text using encodingAlg.
	// Chilkat first returns any data already buffered internally. If no buffered data
	// exists, the method performs one receive operation; it does not loop to drain
	// everything that may be available.
	// 
	//     * For plain TCP, a direct read returns at most ReceivePacketSize bytes.
	//     * For TLS or SSH, the returned amount is governed by the TLS record or SSH
	//     packet rather than ReceivePacketSize.
	//     * Already-buffered data is returned in full, even if it exceeds
	//     ReceivePacketSize.
	//     * A successful call can receive zero bytes during TLS renegotiation,
	//     producing an empty encoded result. Treat this as no application data yet and
	//     call the receive method again.
	// 
	// Common encoding names include base64, modBase64, base32, uu, qp, url, hex, q, b,
	// url_oauth, url_rfc1738, url_rfc2396, and url_rfc3986. See all supported Chilkat
	// binary encodings[1].
	// 
	// Inspect the result even on failure: An orderly peer close reports
	// ReceiveFailReason = 10, but the returned encoded string may contain final bytes
	// received immediately before the close. Process those bytes before finishing the
	// receive loop.
	// Encoding: The encoding affects only the textual representation returned by this
	// method. It does not change the bytes received from the network.
	// TCP framing: TCP does not preserve message boundaries. Define framing in the
	// application protocol, such as an exact length, delimiter, fixed-size record, or
	// connection close.
	// 
	// References:
	// [1] https://cknotes.com/chilkat-binary-encoding-list/
	bool ReceiveBytesENC(const char *encodingAlg, CkString &outStr);

	// Receives binary data and returns one delivery encoded as text using encodingAlg.
	// Chilkat first returns any data already buffered internally. If no buffered data
	// exists, the method performs one receive operation; it does not loop to drain
	// everything that may be available.
	// 
	//     * For plain TCP, a direct read returns at most ReceivePacketSize bytes.
	//     * For TLS or SSH, the returned amount is governed by the TLS record or SSH
	//     packet rather than ReceivePacketSize.
	//     * Already-buffered data is returned in full, even if it exceeds
	//     ReceivePacketSize.
	//     * A successful call can receive zero bytes during TLS renegotiation,
	//     producing an empty encoded result. Treat this as no application data yet and
	//     call the receive method again.
	// 
	// Common encoding names include base64, modBase64, base32, uu, qp, url, hex, q, b,
	// url_oauth, url_rfc1738, url_rfc2396, and url_rfc3986. See all supported Chilkat
	// binary encodings[1].
	// 
	// Inspect the result even on failure: An orderly peer close reports
	// ReceiveFailReason = 10, but the returned encoded string may contain final bytes
	// received immediately before the close. Process those bytes before finishing the
	// receive loop.
	// Encoding: The encoding affects only the textual representation returned by this
	// method. It does not change the bytes received from the network.
	// TCP framing: TCP does not preserve message boundaries. Define framing in the
	// application protocol, such as an exact length, delimiter, fixed-size record, or
	// connection close.
	// 
	// References:
	// [1] https://cknotes.com/chilkat-binary-encoding-list/
	const char *receiveBytesENC(const char *encodingAlg);
	// Receives binary data and returns one delivery encoded as text using encodingAlg.
	// Chilkat first returns any data already buffered internally. If no buffered data
	// exists, the method performs one receive operation; it does not loop to drain
	// everything that may be available.
	// 
	//     * For plain TCP, a direct read returns at most ReceivePacketSize bytes.
	//     * For TLS or SSH, the returned amount is governed by the TLS record or SSH
	//     packet rather than ReceivePacketSize.
	//     * Already-buffered data is returned in full, even if it exceeds
	//     ReceivePacketSize.
	//     * A successful call can receive zero bytes during TLS renegotiation,
	//     producing an empty encoded result. Treat this as no application data yet and
	//     call the receive method again.
	// 
	// Common encoding names include base64, modBase64, base32, uu, qp, url, hex, q, b,
	// url_oauth, url_rfc1738, url_rfc2396, and url_rfc3986. See all supported Chilkat
	// binary encodings[1].
	// 
	// Inspect the result even on failure: An orderly peer close reports
	// ReceiveFailReason = 10, but the returned encoded string may contain final bytes
	// received immediately before the close. Process those bytes before finishing the
	// receive loop.
	// Encoding: The encoding affects only the textual representation returned by this
	// method. It does not change the bytes received from the network.
	// TCP framing: TCP does not preserve message boundaries. Define framing in the
	// application protocol, such as an exact length, delimiter, fixed-size record, or
	// connection close.
	// 
	// References:
	// [1] https://cknotes.com/chilkat-binary-encoding-list/
	CkTask *ReceiveBytesENCAsync(const char *encodingAlg);


	// Receives exactly numBytes bytes. The method continues receiving until the
	// requested count is satisfied or a receive failure occurs. Inactivity is
	// controlled by MaxReadIdleMs.
	// 
	// Partial data is returned on failure: If a timeout or connection close occurs
	// after only part of the requested data is received, the method reports failure
	// but the byte output contains those partial bytes. The bytes have been consumed
	// from the connection and are not retained internally for a later receive call.
	// Therefore, inspect both the failure status and the amount of returned data.
	// 
	// When the requested count is successfully completed, bytes read beyond that count
	// may remain buffered internally for the next receive operation.
	// 
	// Validate lengths: Validate any peer-supplied length before receiving or
	// allocating a large amount of data. If the peer sends too few bytes while keeping
	// the connection open, the method waits until the inactivity timeout.
	bool ReceiveBytesN(unsigned long numBytes, CkByteData &outData);

	// Receives exactly numBytes bytes. The method continues receiving until the
	// requested count is satisfied or a receive failure occurs. Inactivity is
	// controlled by MaxReadIdleMs.
	// 
	// Partial data is returned on failure: If a timeout or connection close occurs
	// after only part of the requested data is received, the method reports failure
	// but the byte output contains those partial bytes. The bytes have been consumed
	// from the connection and are not retained internally for a later receive call.
	// Therefore, inspect both the failure status and the amount of returned data.
	// 
	// When the requested count is successfully completed, bytes read beyond that count
	// may remain buffered internally for the next receive operation.
	// 
	// Validate lengths: Validate any peer-supplied length before receiving or
	// allocating a large amount of data. If the peer sends too few bytes while keeping
	// the connection open, the method waits until the inactivity timeout.
	CkTask *ReceiveBytesNAsync(unsigned long numBytes);


	// Receives one available block of bytes and appends it to the file named by
	// appendFilename. If Chilkat already has buffered data, that data is used first.
	// Otherwise, the method performs one receive operation; it does not loop until the
	// peer closes or until an entire file has arrived. If no data is immediately
	// available, it waits according to MaxReadIdleMs.
	// 
	// The file is appended to, not replaced: Existing file content is preserved and
	// newly received bytes are written at the end of the file.
	// Failure and partial-file behavior: A network receive failure leaves the file
	// unchanged. However, if the network read succeeds and a later file-writing error
	// occurs, such as a disk-full or other filesystem error, the file may contain a
	// partially written block. Bytes consumed by the receive are included in
	// ReceivedCount even when the overall method fails.
	// 
	// After a timeout or application abort, the connection is generally still open.
	// After a peer close or reset, the connection is no longer usable for I/O.
	// 
	bool ReceiveBytesToFile(const char *appendFilename);

	// Receives one available block of bytes and appends it to the file named by
	// appendFilename. If Chilkat already has buffered data, that data is used first.
	// Otherwise, the method performs one receive operation; it does not loop until the
	// peer closes or until an entire file has arrived. If no data is immediately
	// available, it waits according to MaxReadIdleMs.
	// 
	// The file is appended to, not replaced: Existing file content is preserved and
	// newly received bytes are written at the end of the file.
	// Failure and partial-file behavior: A network receive failure leaves the file
	// unchanged. However, if the network read succeeds and a later file-writing error
	// occurs, such as a disk-full or other filesystem error, the file may contain a
	// partially written block. Bytes consumed by the receive are included in
	// ReceivedCount even when the overall method fails.
	// 
	// After a timeout or application abort, the connection is generally still open.
	// After a peer close or reset, the connection is no longer usable for I/O.
	// 
	CkTask *ReceiveBytesToFileAsync(const char *appendFilename);


	// Reads exactly four bytes and interprets them as a signed 32-bit two's-complement
	// integer. Byte order is controlled by BigEndian, whose default is true for
	// network byte order.
	// 
	// Negative values are returned unchanged, with one exception: -1 is reserved as
	// the failure result. If the incoming four-byte value is 0xFFFFFFFF, the method
	// deliberately reports failure, sets LastMethodFailed, and returns -1. A
	// legitimately transmitted value of -1 therefore cannot be received as ordinary
	// data. There is no unsigned variant, so wire values from 0x80000000 through
	// 0xFFFFFFFE are returned as negative signed integers.
	// 
	// Partial integer reads: If the operation fails after receiving only part of the
	// four-byte value, those bytes are consumed and discarded. They cannot be
	// recovered by a later receive call, and the protocol stream may now be
	// misaligned.
	// Round-trip rule: SendCount(N) followed by ReceiveCount round-trips every signed
	// 32-bit value except -1.
	int ReceiveCount(void);

	// Reads exactly four bytes and interprets them as a signed 32-bit two's-complement
	// integer. Byte order is controlled by BigEndian, whose default is true for
	// network byte order.
	// 
	// Negative values are returned unchanged, with one exception: -1 is reserved as
	// the failure result. If the incoming four-byte value is 0xFFFFFFFF, the method
	// deliberately reports failure, sets LastMethodFailed, and returns -1. A
	// legitimately transmitted value of -1 therefore cannot be received as ordinary
	// data. There is no unsigned variant, so wire values from 0x80000000 through
	// 0xFFFFFFFE are returned as negative signed integers.
	// 
	// Partial integer reads: If the operation fails after receiving only part of the
	// four-byte value, those bytes are consumed and discarded. They cannot be
	// recovered by a later receive call, and the protocol stream may now be
	// misaligned.
	// Round-trip rule: SendCount(N) followed by ReceiveCount round-trips every signed
	// 32-bit value except -1.
	CkTask *ReceiveCountAsync(void);


	// Reads exactly two bytes, interprets them as a two's-complement integer, and
	// stores the result in ReceivedInt. Set bigEndian to true for network byte order
	// or false for little-endian order. Set bUnsigned to true for a value from 0
	// through 65535; otherwise the result ranges from -32768 through 32767.
	// 
	// Partial integer reads: If the operation fails after receiving only part of the
	// two-byte value, the partial bytes are consumed and discarded. They are not
	// retained for a later receive, and the protocol stream may now be misaligned.
	// ReceivedInt remains unchanged on failure, so use the Boolean return value before
	// reading it.
	bool ReceiveInt16(bool bigEndian, bool bUnsigned);

	// Reads exactly two bytes, interprets them as a two's-complement integer, and
	// stores the result in ReceivedInt. Set bigEndian to true for network byte order
	// or false for little-endian order. Set bUnsigned to true for a value from 0
	// through 65535; otherwise the result ranges from -32768 through 32767.
	// 
	// Partial integer reads: If the operation fails after receiving only part of the
	// two-byte value, the partial bytes are consumed and discarded. They are not
	// retained for a later receive, and the protocol stream may now be misaligned.
	// ReceivedInt remains unchanged on failure, so use the Boolean return value before
	// reading it.
	CkTask *ReceiveInt16Async(bool bigEndian, bool bUnsigned);


	// Reads exactly four bytes, interprets them as a signed two's-complement integer,
	// and stores the result in ReceivedInt. Set bigEndian to true for network byte
	// order or false for little-endian order.
	// 
	// Partial integer reads: If the operation fails after receiving only part of the
	// four-byte value, the partial bytes are consumed and discarded. They are not
	// retained for a later receive, and the protocol stream may now be misaligned.
	// ReceivedInt remains unchanged on failure, so use the Boolean return value before
	// reading it.
	bool ReceiveInt32(bool bigEndian);

	// Reads exactly four bytes, interprets them as a signed two's-complement integer,
	// and stores the result in ReceivedInt. Set bigEndian to true for network byte
	// order or false for little-endian order.
	// 
	// Partial integer reads: If the operation fails after receiving only part of the
	// four-byte value, the partial bytes are consumed and discarded. They are not
	// retained for a later receive, and the protocol stream may now be misaligned.
	// ReceivedInt remains unchanged on failure, so use the Boolean return value before
	// reading it.
	CkTask *ReceiveInt32Async(bool bigEndian);


	// Receives exactly numBytes bytes and returns them encoded using encodingAlg.
	// Supported encoding names include base64, modBase64, base32, uu, qp, url, hex, q,
	// b, url_oauth, url_rfc1738, url_rfc2396, and url_rfc3986. See all supported
	// Chilkat binary encodings[1]. Inactivity is controlled by MaxReadIdleMs.
	// 
	// Partial data is discarded on failure: If the exact byte count cannot be
	// obtained, no partial encoded result is returned and the output string is empty.
	// Any partial bytes already read are consumed from the connection and discarded;
	// they are not retained internally and cannot be recovered by a later receive
	// call. This differs from ReceiveBytesN and ReceiveBdN, which expose partial data
	// on failure.
	// Validate lengths: Validate any peer-supplied length before requesting a large
	// amount of data. If the peer sends too few bytes while keeping the connection
	// open, the method waits until the inactivity timeout.
	// 
	// References:
	// [1] https://cknotes.com/chilkat-binary-encoding-list/
	bool ReceiveNBytesENC(unsigned long numBytes, const char *encodingAlg, CkString &outStr);

	// Receives exactly numBytes bytes and returns them encoded using encodingAlg.
	// Supported encoding names include base64, modBase64, base32, uu, qp, url, hex, q,
	// b, url_oauth, url_rfc1738, url_rfc2396, and url_rfc3986. See all supported
	// Chilkat binary encodings[1]. Inactivity is controlled by MaxReadIdleMs.
	// 
	// Partial data is discarded on failure: If the exact byte count cannot be
	// obtained, no partial encoded result is returned and the output string is empty.
	// Any partial bytes already read are consumed from the connection and discarded;
	// they are not retained internally and cannot be recovered by a later receive
	// call. This differs from ReceiveBytesN and ReceiveBdN, which expose partial data
	// on failure.
	// Validate lengths: Validate any peer-supplied length before requesting a large
	// amount of data. If the peer sends too few bytes while keeping the connection
	// open, the method waits until the inactivity timeout.
	// 
	// References:
	// [1] https://cknotes.com/chilkat-binary-encoding-list/
	const char *receiveNBytesENC(unsigned long numBytes, const char *encodingAlg);
	// Receives exactly numBytes bytes and returns them encoded using encodingAlg.
	// Supported encoding names include base64, modBase64, base32, uu, qp, url, hex, q,
	// b, url_oauth, url_rfc1738, url_rfc2396, and url_rfc3986. See all supported
	// Chilkat binary encodings[1]. Inactivity is controlled by MaxReadIdleMs.
	// 
	// Partial data is discarded on failure: If the exact byte count cannot be
	// obtained, no partial encoded result is returned and the output string is empty.
	// Any partial bytes already read are consumed from the connection and discarded;
	// they are not retained internally and cannot be recovered by a later receive
	// call. This differs from ReceiveBytesN and ReceiveBdN, which expose partial data
	// on failure.
	// Validate lengths: Validate any peer-supplied length before requesting a large
	// amount of data. If the peer sends too few bytes while keeping the connection
	// open, the method waits until the inactivity timeout.
	// 
	// References:
	// [1] https://cknotes.com/chilkat-binary-encoding-list/
	CkTask *ReceiveNBytesENCAsync(unsigned long numBytes, const char *encodingAlg);


	// Receives text, decodes it using StringCharset, and appends it to sb. Chilkat
	// first uses any plaintext already buffered internally. Otherwise, it receives
	// until it can append the first nonempty decoded result. The method does not
	// continue reading merely to drain all data that may be available.
	// 
	//     * For plain TCP, the underlying direct read obtains at most
	//     ReceivePacketSize bytes.
	//     * For TLS or SSH, the amount is governed by the TLS record or SSH packet and
	//     is not limited by ReceivePacketSize.
	//     * Already-buffered plaintext is appended in full, even if it exceeds
	//     ReceivePacketSize.
	//     * On success, at least one received byte contributes to the appended text;
	//     this method does not return success with an empty receive result.
	// Inspect the destination even on failure: An orderly peer close reports
	// ReceiveFailReason = 10, but sb may contain final text received immediately
	// before the close.
	// TCP framing: TCP does not preserve message boundaries. Use a protocol-defined
	// length or delimiter when a complete text message is required.
	bool ReceiveSb(CkStringBuilder &sb);

	// Receives text, decodes it using StringCharset, and appends it to sb. Chilkat
	// first uses any plaintext already buffered internally. Otherwise, it receives
	// until it can append the first nonempty decoded result. The method does not
	// continue reading merely to drain all data that may be available.
	// 
	//     * For plain TCP, the underlying direct read obtains at most
	//     ReceivePacketSize bytes.
	//     * For TLS or SSH, the amount is governed by the TLS record or SSH packet and
	//     is not limited by ReceivePacketSize.
	//     * Already-buffered plaintext is appended in full, even if it exceeds
	//     ReceivePacketSize.
	//     * On success, at least one received byte contributes to the appended text;
	//     this method does not return success with an empty receive result.
	// Inspect the destination even on failure: An orderly peer close reports
	// ReceiveFailReason = 10, but sb may contain final text received immediately
	// before the close.
	// TCP framing: TCP does not preserve message boundaries. Use a protocol-defined
	// length or delimiter when a complete text message is required.
	CkTask *ReceiveSbAsync(CkStringBuilder &sb);


	// Receives text and decodes it using StringCharset. Chilkat first uses any
	// plaintext already buffered internally. Otherwise, it receives until it can
	// return the first nonempty decoded result. The method does not continue reading
	// merely to drain all data that may be available.
	// 
	//     * For plain TCP, the underlying direct read obtains at most
	//     ReceivePacketSize bytes.
	//     * For TLS or SSH, the amount is governed by the TLS record or SSH packet and
	//     is not limited by ReceivePacketSize.
	//     * Already-buffered plaintext is returned in full, even if it exceeds
	//     ReceivePacketSize.
	//     * On success, the returned text represents at least one received byte; this
	//     method does not produce a successful empty result.
	// Inspect the returned text even on failure: An orderly peer close reports
	// ReceiveFailReason = 10, but the returned string may contain final text received
	// immediately before the close. For APIs that return a string directly, check
	// LastMethodFailed without discarding the returned value.
	// Text framing: A receive can end in the middle of an application message or
	// multibyte text sequence. For framed text protocols, prefer an exact-length or
	// delimiter-based receive method.
	bool ReceiveString(CkString &outStr);

	// Receives text and decodes it using StringCharset. Chilkat first uses any
	// plaintext already buffered internally. Otherwise, it receives until it can
	// return the first nonempty decoded result. The method does not continue reading
	// merely to drain all data that may be available.
	// 
	//     * For plain TCP, the underlying direct read obtains at most
	//     ReceivePacketSize bytes.
	//     * For TLS or SSH, the amount is governed by the TLS record or SSH packet and
	//     is not limited by ReceivePacketSize.
	//     * Already-buffered plaintext is returned in full, even if it exceeds
	//     ReceivePacketSize.
	//     * On success, the returned text represents at least one received byte; this
	//     method does not produce a successful empty result.
	// Inspect the returned text even on failure: An orderly peer close reports
	// ReceiveFailReason = 10, but the returned string may contain final text received
	// immediately before the close. For APIs that return a string directly, check
	// LastMethodFailed without discarding the returned value.
	// Text framing: A receive can end in the middle of an application message or
	// multibyte text sequence. For framed text protocols, prefer an exact-length or
	// delimiter-based receive method.
	const char *receiveString(void);
	// Receives text and decodes it using StringCharset. Chilkat first uses any
	// plaintext already buffered internally. Otherwise, it receives until it can
	// return the first nonempty decoded result. The method does not continue reading
	// merely to drain all data that may be available.
	// 
	//     * For plain TCP, the underlying direct read obtains at most
	//     ReceivePacketSize bytes.
	//     * For TLS or SSH, the amount is governed by the TLS record or SSH packet and
	//     is not limited by ReceivePacketSize.
	//     * Already-buffered plaintext is returned in full, even if it exceeds
	//     ReceivePacketSize.
	//     * On success, the returned text represents at least one received byte; this
	//     method does not produce a successful empty result.
	// Inspect the returned text even on failure: An orderly peer close reports
	// ReceiveFailReason = 10, but the returned string may contain final text received
	// immediately before the close. For APIs that return a string directly, check
	// LastMethodFailed without discarding the returned value.
	// Text framing: A receive can end in the middle of an application message or
	// multibyte text sequence. For framed text protocols, prefer an exact-length or
	// delimiter-based receive method.
	CkTask *ReceiveStringAsync(void);


	// Receives and decodes text like ReceiveString, but returns at most maxByteCount
	// input bytes. The limit is measured in bytes, not Unicode characters.
	// 
	// Important: A byte limit can split a multibyte character or a protocol message.
	// Choose a limit compatible with the encoding and framing used by the peer.
	bool ReceiveStringMaxN(int maxByteCount, CkString &outStr);

	// Receives and decodes text like ReceiveString, but returns at most maxByteCount
	// input bytes. The limit is measured in bytes, not Unicode characters.
	// 
	// Important: A byte limit can split a multibyte character or a protocol message.
	// Choose a limit compatible with the encoding and framing used by the peer.
	const char *receiveStringMaxN(int maxByteCount);
	// Receives and decodes text like ReceiveString, but returns at most maxByteCount
	// input bytes. The limit is measured in bytes, not Unicode characters.
	// 
	// Important: A byte limit can split a multibyte character or a protocol message.
	// Choose a limit compatible with the encoding and framing used by the peer.
	CkTask *ReceiveStringMaxNAsync(int maxByteCount);


	// Receives bytes until the raw byte value lookForByte is found. The delimiter is
	// excluded from the returned string. The bytes preceding the delimiter are then
	// decoded using StringCharset.
	// 
	// The delimiter search is purely byte-oriented and does not recognize character
	// boundaries. A match may therefore occur inside the encoded representation of a
	// multibyte character.
	// 
	// Multibyte character boundary: With a multibyte encoding, a non-ASCII delimiter
	// byte can occur inside an encoded character. The receive can stop in the middle
	// of that character, and the incomplete character may be dropped, replaced, or
	// decoded incorrectly. Prefer an ASCII delimiter value below 0x80 with an
	// ASCII-compatible charset such as UTF-8, an ISO-8859 encoding, a Windows-125x
	// encoding, or Shift-JIS.
	bool ReceiveStringUntilByte(int lookForByte, CkString &outStr);

	// Receives bytes until the raw byte value lookForByte is found. The delimiter is
	// excluded from the returned string. The bytes preceding the delimiter are then
	// decoded using StringCharset.
	// 
	// The delimiter search is purely byte-oriented and does not recognize character
	// boundaries. A match may therefore occur inside the encoded representation of a
	// multibyte character.
	// 
	// Multibyte character boundary: With a multibyte encoding, a non-ASCII delimiter
	// byte can occur inside an encoded character. The receive can stop in the middle
	// of that character, and the incomplete character may be dropped, replaced, or
	// decoded incorrectly. Prefer an ASCII delimiter value below 0x80 with an
	// ASCII-compatible charset such as UTF-8, an ISO-8859 encoding, a Windows-125x
	// encoding, or Shift-JIS.
	const char *receiveStringUntilByte(int lookForByte);
	// Receives bytes until the raw byte value lookForByte is found. The delimiter is
	// excluded from the returned string. The bytes preceding the delimiter are then
	// decoded using StringCharset.
	// 
	// The delimiter search is purely byte-oriented and does not recognize character
	// boundaries. A match may therefore occur inside the encoded representation of a
	// multibyte character.
	// 
	// Multibyte character boundary: With a multibyte encoding, a non-ASCII delimiter
	// byte can occur inside an encoded character. The receive can stop in the middle
	// of that character, and the incomplete character may be dropped, replaced, or
	// decoded incorrectly. Prefer an ASCII delimiter value below 0x80 with an
	// ASCII-compatible charset such as UTF-8, an ISO-8859 encoding, a Windows-125x
	// encoding, or Shift-JIS.
	CkTask *ReceiveStringUntilByteAsync(int lookForByte);


	// Receives text through a CRLF line terminator and returns the text including the
	// terminator. Chilkat encodes the CR followed by LF characters using
	// StringCharset, then searches the incoming byte stream for that exact encoded
	// sequence. The accumulated bytes are decoded using the same charset after the
	// delimiter is found.
	// 
	// Charset-dependent delimiter: For ASCII-compatible charsets such as UTF-8,
	// US-ASCII, ISO-8859 encodings, Windows-125x encodings, and Shift-JIS, the
	// delimiter bytes are the usual 0D 0A. With a wide charset such as UTF-16LE, the
	// encoded delimiter is different, for example 0D 00 0A 00.
	// Tip: This method is useful for line-oriented text protocols. Do not use it for
	// protocols that permit bare LF, binary data, or a different line terminator.
	bool ReceiveToCRLF(CkString &outStr);

	// Receives text through a CRLF line terminator and returns the text including the
	// terminator. Chilkat encodes the CR followed by LF characters using
	// StringCharset, then searches the incoming byte stream for that exact encoded
	// sequence. The accumulated bytes are decoded using the same charset after the
	// delimiter is found.
	// 
	// Charset-dependent delimiter: For ASCII-compatible charsets such as UTF-8,
	// US-ASCII, ISO-8859 encodings, Windows-125x encodings, and Shift-JIS, the
	// delimiter bytes are the usual 0D 0A. With a wide charset such as UTF-16LE, the
	// encoded delimiter is different, for example 0D 00 0A 00.
	// Tip: This method is useful for line-oriented text protocols. Do not use it for
	// protocols that permit bare LF, binary data, or a different line terminator.
	const char *receiveToCRLF(void);
	// Receives text through a CRLF line terminator and returns the text including the
	// terminator. Chilkat encodes the CR followed by LF characters using
	// StringCharset, then searches the incoming byte stream for that exact encoded
	// sequence. The accumulated bytes are decoded using the same charset after the
	// delimiter is found.
	// 
	// Charset-dependent delimiter: For ASCII-compatible charsets such as UTF-8,
	// US-ASCII, ISO-8859 encodings, Windows-125x encodings, and Shift-JIS, the
	// delimiter bytes are the usual 0D 0A. With a wide charset such as UTF-16LE, the
	// encoded delimiter is different, for example 0D 00 0A 00.
	// Tip: This method is useful for line-oriented text protocols. Do not use it for
	// protocols that permit bare LF, binary data, or a different line terminator.
	CkTask *ReceiveToCRLFAsync(void);


	// Reads bytes until lookForByte is encountered and returns all bytes up to and
	// including that byte. The argument must identify a one-byte value from 0 through
	// 255.
	// 
	bool ReceiveUntilByte(int lookForByte, CkByteData &outBytes);

	// Reads bytes until lookForByte is encountered and returns all bytes up to and
	// including that byte. The argument must identify a one-byte value from 0 through
	// 255.
	// 
	CkTask *ReceiveUntilByteAsync(int lookForByte);


	// Reads bytes until lookForByte is encountered and appends all bytes up to and
	// including the matching byte to bd. The delimiter must be an integer from 0
	// through 255 and is matched as a raw byte value.
	// 
	// Partial data remains on failure: If the delimiter is not found before a timeout,
	// application abort, peer close, or connection reset, the method returns false,
	// but everything received while searching remains appended to bd. These bytes are
	// included in ReceivedCount, have been consumed from the connection, and are not
	// retained internally for a later receive call.
	// 
	// A timeout or application abort generally leaves the connection open. A peer
	// close or reset leaves it unavailable for further I/O.
	// 
	bool ReceiveUntilByteBd(int lookForByte, CkBinData &bd);

	// Reads bytes until lookForByte is encountered and appends all bytes up to and
	// including the matching byte to bd. The delimiter must be an integer from 0
	// through 255 and is matched as a raw byte value.
	// 
	// Partial data remains on failure: If the delimiter is not found before a timeout,
	// application abort, peer close, or connection reset, the method returns false,
	// but everything received while searching remains appended to bd. These bytes are
	// included in ReceivedCount, have been consumed from the connection, and are not
	// retained internally for a later receive call.
	// 
	// A timeout or application abort generally leaves the connection open. A peer
	// close or reset leaves it unavailable for further I/O.
	// 
	CkTask *ReceiveUntilByteBdAsync(int lookForByte, CkBinData &bd);


	// Receives bytes until the exact byte sequence represented by matchStr is found.
	// Chilkat first encodes matchStr using StringCharset, then performs a
	// case-sensitive, byte-for-byte comparison against the incoming stream. No case
	// folding, Unicode normalization, or text-level comparison is performed.
	// 
	// The match may span multiple underlying network reads. After the delimiter is
	// found, the complete accumulated byte sequence is decoded using StringCharset and
	// returned as text. The returned text includes the matching delimiter.
	// 
	// Empty match strings: If matchStr is empty, or if it encodes to zero bytes under
	// the current StringCharset, the method fails immediately with ReceiveFailReason =
	// 4. No data is read from the connection and the returned string is empty.
	// Partial content is discarded on failure: If the delimiter is not found before a
	// timeout, application abort, peer close, connection reset, or other failure, the
	// returned string is empty. Bytes already consumed while searching are discarded,
	// are not retained for a later receive, and cannot be recovered. If an orderly
	// peer close is detected, ReceiveFailReason is 10.
	// 
	// On success, bytes read beyond the delimiter may remain buffered internally for
	// the next receive call. This is why ReceivedCount can increase by more than the
	// number of bytes represented by the returned string.
	// 
	bool ReceiveUntilMatch(const char *matchStr, CkString &outStr);

	// Receives bytes until the exact byte sequence represented by matchStr is found.
	// Chilkat first encodes matchStr using StringCharset, then performs a
	// case-sensitive, byte-for-byte comparison against the incoming stream. No case
	// folding, Unicode normalization, or text-level comparison is performed.
	// 
	// The match may span multiple underlying network reads. After the delimiter is
	// found, the complete accumulated byte sequence is decoded using StringCharset and
	// returned as text. The returned text includes the matching delimiter.
	// 
	// Empty match strings: If matchStr is empty, or if it encodes to zero bytes under
	// the current StringCharset, the method fails immediately with ReceiveFailReason =
	// 4. No data is read from the connection and the returned string is empty.
	// Partial content is discarded on failure: If the delimiter is not found before a
	// timeout, application abort, peer close, connection reset, or other failure, the
	// returned string is empty. Bytes already consumed while searching are discarded,
	// are not retained for a later receive, and cannot be recovered. If an orderly
	// peer close is detected, ReceiveFailReason is 10.
	// 
	// On success, bytes read beyond the delimiter may remain buffered internally for
	// the next receive call. This is why ReceivedCount can increase by more than the
	// number of bytes represented by the returned string.
	// 
	const char *receiveUntilMatch(const char *matchStr);
	// Receives bytes until the exact byte sequence represented by matchStr is found.
	// Chilkat first encodes matchStr using StringCharset, then performs a
	// case-sensitive, byte-for-byte comparison against the incoming stream. No case
	// folding, Unicode normalization, or text-level comparison is performed.
	// 
	// The match may span multiple underlying network reads. After the delimiter is
	// found, the complete accumulated byte sequence is decoded using StringCharset and
	// returned as text. The returned text includes the matching delimiter.
	// 
	// Empty match strings: If matchStr is empty, or if it encodes to zero bytes under
	// the current StringCharset, the method fails immediately with ReceiveFailReason =
	// 4. No data is read from the connection and the returned string is empty.
	// Partial content is discarded on failure: If the delimiter is not found before a
	// timeout, application abort, peer close, connection reset, or other failure, the
	// returned string is empty. Bytes already consumed while searching are discarded,
	// are not retained for a later receive, and cannot be recovered. If an orderly
	// peer close is detected, ReceiveFailReason is 10.
	// 
	// On success, bytes read beyond the delimiter may remain buffered internally for
	// the next receive call. This is why ReceivedCount can increase by more than the
	// number of bytes represented by the returned string.
	// 
	CkTask *ReceiveUntilMatchAsync(const char *matchStr);


	// Receives bytes until the exact byte sequence represented by matchStr is found.
	// Chilkat first encodes matchStr using StringCharset, then performs a
	// case-sensitive, byte-for-byte comparison against the incoming stream. The match
	// may span multiple underlying network reads.
	// 
	// After the delimiter is found, the accumulated bytes are decoded using
	// StringCharset and appended to sb. The appended text includes the matching
	// delimiter.
	// 
	// Empty match strings: If matchStr is empty, or if it encodes to zero bytes under
	// the current StringCharset, the method fails immediately with ReceiveFailReason =
	// 4. No data is read and sb is left unchanged.
	// The destination remains unchanged on failure: If the match is not found before a
	// timeout, application abort, peer close, connection reset, or other failure, the
	// method returns false and does not modify sb. Bytes consumed while searching are
	// included in ReceivedCount, are discarded, are not retained for a later receive,
	// and cannot be recovered. If an orderly peer close is detected, ReceiveFailReason
	// is 10.
	// 
	// On success, bytes read beyond the delimiter may remain buffered internally for
	// the next receive operation.
	// 
	bool ReceiveUntilMatchSb(const char *matchStr, CkStringBuilder &sb);

	// Receives bytes until the exact byte sequence represented by matchStr is found.
	// Chilkat first encodes matchStr using StringCharset, then performs a
	// case-sensitive, byte-for-byte comparison against the incoming stream. The match
	// may span multiple underlying network reads.
	// 
	// After the delimiter is found, the accumulated bytes are decoded using
	// StringCharset and appended to sb. The appended text includes the matching
	// delimiter.
	// 
	// Empty match strings: If matchStr is empty, or if it encodes to zero bytes under
	// the current StringCharset, the method fails immediately with ReceiveFailReason =
	// 4. No data is read and sb is left unchanged.
	// The destination remains unchanged on failure: If the match is not found before a
	// timeout, application abort, peer close, connection reset, or other failure, the
	// method returns false and does not modify sb. Bytes consumed while searching are
	// included in ReceivedCount, are discarded, are not retained for a later receive,
	// and cannot be recovered. If an orderly peer close is detected, ReceiveFailReason
	// is 10.
	// 
	// On success, bytes read beyond the delimiter may remain buffered internally for
	// the next receive operation.
	// 
	CkTask *ReceiveUntilMatchSbAsync(const char *matchStr, CkStringBuilder &sb);


	// Restarts one direction of connection-level transfer-rate measurement. Set
	// rcvPerf to true to reset receive measurement for RcvBytesPerSec; set it to
	// false to reset send measurement for SendBytesPerSec.
	// 
	void ResetPerf(bool rcvPerf);


	// Waits for read-ready activity on this socket or, when this object is a socket
	// set, on any contained socket.
	// 
	//     * timeoutMs = 0 performs a nonblocking poll and returns immediately.
	//     * A positive value waits up to that many milliseconds.
	//     * A negative value currently produces an effectively very long wait.
	//     Applications should normally use 0 or a positive value rather than depend on
	//     this behavior.
	// 
	// +--------------+---------------------------------------------------------------+
	// | Return value |                            Meaning                            |
	// +==============+===============================================================+
	// | Positive     | The number of sockets in the read-ready result.               |
	// +--------------+---------------------------------------------------------------+
	// | 0            | No socket was ready at the time of the poll or before the     |
	// |              | timeout.                                                      |
	// +--------------+---------------------------------------------------------------+
	// | -1           | An error occurred.                                            |
	// +--------------+---------------------------------------------------------------+
	// 
	// A connected socket is read-ready when data is available or when a close/error
	// condition can be detected. A listener is read-ready when an incoming connection
	// is pending. Listener and connected sockets may coexist in one set, but the set
	// does not identify which type a ready member is; the application must track that
	// information and call AcceptNext or a receive method as appropriate.
	// 
	// Correct socket-set loop: If this method returns n, iterate from 0 through n - 1,
	// assign each value directly to SelectorReadIndex, and then operate on this
	// socket-set object. Do not assign the value to SelectorIndex.
	// Ready-set lifetime: The ready-set is fixed for this result, so it can be
	// iterated safely. Its order is arbitrary, is not guaranteed to match insertion
	// order, and can differ on the next select call. Calling either select method
	// again invalidates all prior read/write indices.
	// Automatic pruning: Each select rebuilds the underlying descriptor set and
	// removes contained sockets that can no longer contribute a valid descriptor. A
	// dead socket can therefore remain counted only until the next select.
	// Readiness is not data: A receive may report that the peer closed or reset the
	// connection instead of returning application data. Within one ready-set
	// iteration, closing a selected socket does not renumber the other ready
	// positions, but the closed socket's own position no longer resolves.
	// Socket sets overview: See Socket Sets Overview[1] for an explanation of socket
	// sets, selectors, readiness, ownership, and common usage patterns.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/socket_sets.asp
	int SelectForReading(int timeoutMs);

	// Waits for read-ready activity on this socket or, when this object is a socket
	// set, on any contained socket.
	// 
	//     * timeoutMs = 0 performs a nonblocking poll and returns immediately.
	//     * A positive value waits up to that many milliseconds.
	//     * A negative value currently produces an effectively very long wait.
	//     Applications should normally use 0 or a positive value rather than depend on
	//     this behavior.
	// 
	// +--------------+---------------------------------------------------------------+
	// | Return value |                            Meaning                            |
	// +==============+===============================================================+
	// | Positive     | The number of sockets in the read-ready result.               |
	// +--------------+---------------------------------------------------------------+
	// | 0            | No socket was ready at the time of the poll or before the     |
	// |              | timeout.                                                      |
	// +--------------+---------------------------------------------------------------+
	// | -1           | An error occurred.                                            |
	// +--------------+---------------------------------------------------------------+
	// 
	// A connected socket is read-ready when data is available or when a close/error
	// condition can be detected. A listener is read-ready when an incoming connection
	// is pending. Listener and connected sockets may coexist in one set, but the set
	// does not identify which type a ready member is; the application must track that
	// information and call AcceptNext or a receive method as appropriate.
	// 
	// Correct socket-set loop: If this method returns n, iterate from 0 through n - 1,
	// assign each value directly to SelectorReadIndex, and then operate on this
	// socket-set object. Do not assign the value to SelectorIndex.
	// Ready-set lifetime: The ready-set is fixed for this result, so it can be
	// iterated safely. Its order is arbitrary, is not guaranteed to match insertion
	// order, and can differ on the next select call. Calling either select method
	// again invalidates all prior read/write indices.
	// Automatic pruning: Each select rebuilds the underlying descriptor set and
	// removes contained sockets that can no longer contribute a valid descriptor. A
	// dead socket can therefore remain counted only until the next select.
	// Readiness is not data: A receive may report that the peer closed or reset the
	// connection instead of returning application data. Within one ready-set
	// iteration, closing a selected socket does not renumber the other ready
	// positions, but the closed socket's own position no longer resolves.
	// Socket sets overview: See Socket Sets Overview[1] for an explanation of socket
	// sets, selectors, readiness, ownership, and common usage patterns.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/socket_sets.asp
	CkTask *SelectForReadingAsync(int timeoutMs);


	// Waits for this socket, or sockets in a socket set, to become writable without
	// blocking.
	// 
	//     * timeoutMs = 0 performs a nonblocking poll and returns immediately.
	//     * A positive value waits up to that many milliseconds.
	//     * A negative value currently produces an effectively very long wait.
	//     Applications should normally use 0 or a positive value rather than depend on
	//     this behavior.
	// 
	// +--------------+---------------------------------------------------------------+
	// | Return value |                            Meaning                            |
	// +==============+===============================================================+
	// | Positive     | The number of sockets in the write-ready result.              |
	// +--------------+---------------------------------------------------------------+
	// | 0            | No socket was writable at the time of the poll or before the  |
	// |              | timeout.                                                      |
	// +--------------+---------------------------------------------------------------+
	// | -1           | An error occurred.                                            |
	// +--------------+---------------------------------------------------------------+
	// 
	// Correct socket-set loop: If this method returns n, iterate from 0 through n - 1,
	// assign each value directly to SelectorWriteIndex, and then operate on this
	// socket-set object. Do not assign the value to SelectorIndex.
	// Ready-set lifetime: The result remains stable for the current iteration, but its
	// order is arbitrary and need not match insertion order. Calling either select
	// method again invalidates all prior read/write indices. Each select also prunes
	// contained sockets that no longer have a usable descriptor.
	// Write readiness: TCP writes normally complete into the operating-system send
	// buffer. Readiness does not mean the remote application has received or processed
	// the data.
	// Socket sets overview: See Socket Sets Overview[1] for an explanation of socket
	// sets, selectors, readiness, ownership, and common usage patterns.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/socket_sets.asp
	int SelectForWriting(int timeoutMs);

	// Waits for this socket, or sockets in a socket set, to become writable without
	// blocking.
	// 
	//     * timeoutMs = 0 performs a nonblocking poll and returns immediately.
	//     * A positive value waits up to that many milliseconds.
	//     * A negative value currently produces an effectively very long wait.
	//     Applications should normally use 0 or a positive value rather than depend on
	//     this behavior.
	// 
	// +--------------+---------------------------------------------------------------+
	// | Return value |                            Meaning                            |
	// +==============+===============================================================+
	// | Positive     | The number of sockets in the write-ready result.              |
	// +--------------+---------------------------------------------------------------+
	// | 0            | No socket was writable at the time of the poll or before the  |
	// |              | timeout.                                                      |
	// +--------------+---------------------------------------------------------------+
	// | -1           | An error occurred.                                            |
	// +--------------+---------------------------------------------------------------+
	// 
	// Correct socket-set loop: If this method returns n, iterate from 0 through n - 1,
	// assign each value directly to SelectorWriteIndex, and then operate on this
	// socket-set object. Do not assign the value to SelectorIndex.
	// Ready-set lifetime: The result remains stable for the current iteration, but its
	// order is arbitrary and need not match insertion order. Calling either select
	// method again invalidates all prior read/write indices. Each select also prunes
	// contained sockets that no longer have a usable descriptor.
	// Write readiness: TCP writes normally complete into the operating-system send
	// buffer. Readiness does not mean the remote application has received or processed
	// the data.
	// Socket sets overview: See Socket Sets Overview[1] for an explanation of socket
	// sets, selectors, readiness, ownership, and common usage patterns.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/socket_sets.asp
	CkTask *SelectForWritingAsync(int timeoutMs);


	// Sends bytes from binData, beginning at offset. If numBytes is greater than 0,
	// that many bytes are selected; if it is 0, bytes are selected from offset through
	// the end. When both values are 0, the entire BinData is selected. The selected
	// range must be valid.
	// 
	// The method is synchronous and uses MaxSendIdleMs as the maximum period during
	// which no send progress may occur. No application message framing is added.
	// 
	// Partial transmission on failure: A failed call may already have sent part of the
	// selected range. Chilkat does not retain or queue the unsent remainder and does
	// not report the number of bytes sent. A timeout or application abort may leave
	// the TCP connection open, but the protocol stream may contain a truncated
	// message. For a framed protocol, normally close the connection and reconnect
	// rather than sending the next message on the same stream. A peer close or reset
	// leaves the connection unusable for further I/O.
	bool SendBd(CkBinData &binData, unsigned long offset, unsigned long numBytes);

	// Sends bytes from binData, beginning at offset. If numBytes is greater than 0,
	// that many bytes are selected; if it is 0, bytes are selected from offset through
	// the end. When both values are 0, the entire BinData is selected. The selected
	// range must be valid.
	// 
	// The method is synchronous and uses MaxSendIdleMs as the maximum period during
	// which no send progress may occur. No application message framing is added.
	// 
	// Partial transmission on failure: A failed call may already have sent part of the
	// selected range. Chilkat does not retain or queue the unsent remainder and does
	// not report the number of bytes sent. A timeout or application abort may leave
	// the TCP connection open, but the protocol stream may contain a truncated
	// message. For a framed protocol, normally close the connection and reconnect
	// rather than sending the next message on the same stream. A peer close or reset
	// leaves the connection unusable for further I/O.
	CkTask *SendBdAsync(CkBinData &binData, unsigned long offset, unsigned long numBytes);


	// Sends one byte whose value is specified by value. The value must be in the range
	// 0 through 255. The method returns after the byte has been accepted for
	// transmission or a send failure occurs.
	// 
	bool SendByte(int value);

	// Sends one byte whose value is specified by value. The value must be in the range
	// 0 through 255. The method returns after the byte has been accepted for
	// transmission or a send failure occurs.
	// 
	CkTask *SendByteAsync(int value);


	// Sends the bytes in data over the connected TCP or TLS socket. The method is
	// synchronous and uses MaxSendIdleMs as the maximum period during which no send
	// progress may occur.
	// 
	// Partial transmission on failure: A return value of false does not mean that no
	// bytes were sent. Part of data may already have reached the peer. Chilkat does
	// not retain or queue the unsent remainder and does not report how many bytes were
	// sent. Although a timeout or application abort may leave the TCP connection open,
	// the application-protocol stream may contain a truncated message. For a
	// length-prefixed, delimited, or otherwise framed protocol, the safest response is
	// normally to close the connection and reconnect before sending another message. A
	// peer close or reset leaves the connection unusable for further I/O.
	// Transport versus application acknowledgment: A successful send means that
	// Chilkat completed the local socket send. It does not prove that the remote
	// application received, parsed, or accepted the data.
	bool SendBytes(CkByteData &data);

	// Sends the bytes in data over the connected TCP or TLS socket. The method is
	// synchronous and uses MaxSendIdleMs as the maximum period during which no send
	// progress may occur.
	// 
	// Partial transmission on failure: A return value of false does not mean that no
	// bytes were sent. Part of data may already have reached the peer. Chilkat does
	// not retain or queue the unsent remainder and does not report how many bytes were
	// sent. Although a timeout or application abort may leave the TCP connection open,
	// the application-protocol stream may contain a truncated message. For a
	// length-prefixed, delimited, or otherwise framed protocol, the safest response is
	// normally to close the connection and reconnect before sending another message. A
	// peer close or reset leaves the connection unusable for further I/O.
	// Transport versus application acknowledgment: A successful send means that
	// Chilkat completed the local socket send. It does not prove that the remote
	// application received, parsed, or accepted the data.
	CkTask *SendBytesAsync(CkByteData &data);


	// Sends szByteData bytes beginning at the memory address pByteData. This is the
	// C/C++ pointer-and-length form of SendBytes.
	// 
	// Important: The caller must provide a valid buffer containing at least szByteData
	// readable bytes for the duration of the call.
	bool SendBytes2(const void *pByteData, unsigned long szByteData);


	// Decodes encodedBytes using encodingAlg, then sends the resulting binary bytes.
	// Supported Chilkat encoding names include base64, modBase64, base32, base58, uu,
	// qp, url, hex, q, b, url_oauth, url_rfc1738, url_rfc2396, and url_rfc3986. See
	// all supported Chilkat binary encodings[1].
	// 
	// For example, encodedBytes="00010203040506" with encodingAlg="hex" sends seven
	// bytes with values 00 through 06.
	// 
	// Important: Malformed encoded input causes the method to fail before or during
	// sending. Check SendFailReason and LastErrorText.
	// 
	// References:
	// [1] https://cknotes.com/chilkat-binary-encoding-list/
	bool SendBytesENC(const char *encodedBytes, const char *encodingAlg);

	// Decodes encodedBytes using encodingAlg, then sends the resulting binary bytes.
	// Supported Chilkat encoding names include base64, modBase64, base32, base58, uu,
	// qp, url, hex, q, b, url_oauth, url_rfc1738, url_rfc2396, and url_rfc3986. See
	// all supported Chilkat binary encodings[1].
	// 
	// For example, encodedBytes="00010203040506" with encodingAlg="hex" sends seven
	// bytes with values 00 through 06.
	// 
	// Important: Malformed encoded input causes the method to fail before or during
	// sending. Check SendFailReason and LastErrorText.
	// 
	// References:
	// [1] https://cknotes.com/chilkat-binary-encoding-list/
	CkTask *SendBytesENCAsync(const char *encodedBytes, const char *encodingAlg);


	// Sends byteCount as its four-byte signed two's-complement bit pattern. Byte order
	// is controlled by BigEndian, whose default is true for network byte order. Any
	// signed 32-bit value is serialized without validation.
	// 
	// The peer can read the value using ReceiveCount, except that -1 is not usable as
	// an ordinary count because ReceiveCount reserves -1 as its failure result.
	// 
	// Tip: A length prefix is a common way to frame messages over TCP: send the count
	// first, then exactly that many payload bytes. Validate received lengths before
	// allocating memory or waiting for data.
	bool SendCount(int byteCount);

	// Sends byteCount as its four-byte signed two's-complement bit pattern. Byte order
	// is controlled by BigEndian, whose default is true for network byte order. Any
	// signed 32-bit value is serialized without validation.
	// 
	// The peer can read the value using ReceiveCount, except that -1 is not usable as
	// an ordinary count because ReceiveCount reserves -1 as its failure result.
	// 
	// Tip: A length prefix is a common way to frame messages over TCP: send the count
	// first, then exactly that many payload bytes. Validate received lengths before
	// allocating memory or waiting for data.
	CkTask *SendCountAsync(int byteCount);


	// Sends the low 16 bits of value as a two-byte two's-complement bit pattern. Set
	// bigEndian to true for network byte order or false for little-endian order.
	// 
	// No range validation is performed. Signed values from -32768 through 32767 and
	// unsigned values from 0 through 65535 can be represented directly. Any other
	// integer is silently truncated to its low 16 bits, equivalent to taking the value
	// modulo 65536.
	// 
	// Examples: 40000 writes 0x9C40, -1 writes 0xFFFF, 65536 writes 0x0000, and 70000
	// writes 0x1170.
	bool SendInt16(int value, bool bigEndian);

	// Sends the low 16 bits of value as a two-byte two's-complement bit pattern. Set
	// bigEndian to true for network byte order or false for little-endian order.
	// 
	// No range validation is performed. Signed values from -32768 through 32767 and
	// unsigned values from 0 through 65535 can be represented directly. Any other
	// integer is silently truncated to its low 16 bits, equivalent to taking the value
	// modulo 65536.
	// 
	// Examples: 40000 writes 0x9C40, -1 writes 0xFFFF, 65536 writes 0x0000, and 70000
	// writes 0x1170.
	CkTask *SendInt16Async(int value, bool bigEndian);


	// Sends value as its complete four-byte signed two's-complement bit pattern. Set
	// bigEndian to true for network byte order or false for little-endian order.
	// 
	// The parameter is a signed 32-bit integer and there is no unsigned overload, but
	// every 32-bit wire pattern can be represented by passing the signed integer
	// having that bit pattern. For example, passing -1 writes 0xFFFFFFFF. Because the
	// input is already 32 bits, no bits are truncated.
	// 
	bool SendInt32(int value, bool bigEndian);

	// Sends value as its complete four-byte signed two's-complement bit pattern. Set
	// bigEndian to true for network byte order or false for little-endian order.
	// 
	// The parameter is a signed 32-bit integer and there is no unsigned overload, but
	// every 32-bit wire pattern can be represented by passing the signed integer
	// having that bit pattern. For example, passing -1 writes 0xFFFFFFFF. Because the
	// input is already 32 bits, no bits are truncated.
	// 
	CkTask *SendInt32Async(int value, bool bigEndian);


	// Encodes the contents of sb using StringCharset and sends the resulting bytes.
	// The method is synchronous and uses MaxSendIdleMs as the send-progress inactivity
	// limit.
	// 
	// Important: No terminator or length prefix is added. Include any protocol framing
	// in the StringBuilder content.
	bool SendSb(CkStringBuilder &sb);

	// Encodes the contents of sb using StringCharset and sends the resulting bytes.
	// The method is synchronous and uses MaxSendIdleMs as the send-progress inactivity
	// limit.
	// 
	// Important: No terminator or length prefix is added. Include any protocol framing
	// in the StringBuilder content.
	CkTask *SendSbAsync(CkStringBuilder &sb);


	// Encodes stringToSend using StringCharset and sends the resulting bytes over the
	// connected TCP or TLS socket. The method is synchronous and uses MaxSendIdleMs as
	// the maximum period during which no send progress may occur. No delimiter,
	// terminator, or length prefix is added automatically.
	// 
	// Partial transmission on failure: A failed call may already have sent part of the
	// encoded byte sequence. Chilkat does not retain or queue the unsent remainder and
	// does not report how many bytes were sent. A timeout or application abort may
	// leave the TCP connection open, but the application-protocol stream may contain a
	// truncated message. For a framed protocol, normally close the connection and
	// reconnect before sending another message. A peer close or reset leaves the
	// connection unusable for further I/O.
	bool SendString(const char *stringToSend);

	// Encodes stringToSend using StringCharset and sends the resulting bytes over the
	// connected TCP or TLS socket. The method is synchronous and uses MaxSendIdleMs as
	// the maximum period during which no send progress may occur. No delimiter,
	// terminator, or length prefix is added automatically.
	// 
	// Partial transmission on failure: A failed call may already have sent part of the
	// encoded byte sequence. Chilkat does not retain or queue the unsent remainder and
	// does not report how many bytes were sent. A timeout or application abort may
	// leave the TCP connection open, but the application-protocol stream may contain a
	// truncated message. For a framed protocol, normally close the connection and
	// reconnect before sending another message. A peer close or reset leaves the
	// connection unusable for further I/O.
	CkTask *SendStringAsync(const char *stringToSend);


	// Sends a Wake-on-LAN magic packet for macAddress to the UDP broadcast address
	// ipBroadcastAddr and port. The MAC address is six bytes written as hexadecimal,
	// for example 000102030405. Ports 7 and 9 are commonly used.
	// 
	// Call this method without first calling Connect. The target computer must have
	// Wake-on-LAN enabled in firmware, the network adapter, and the operating system,
	// and the network must permit the broadcast packet.
	// 
	// Important: Wake-on-LAN generally works within a local network segment. Routers
	// commonly block directed broadcasts, and a successful send does not confirm that
	// the target powered on.
	bool SendWakeOnLan(const char *macAddress, int port, const char *ipBroadcastAddr);


	// Sends the same Wake-on-LAN magic packet as SendWakeOnLan and appends a SecureOn
	// password. password is a hexadecimal string representing four or six bytes.
	// 
	// Important: SecureOn is an optional Wake-on-LAN password field, not encryption
	// and not strong authentication. Support and expected length are device-specific.
	bool SendWakeOnLan2(const char *macAddress, int port, const char *ipBroadcastAddr, const char *password);


	// Configures cert as the client certificate for subsequent TLS connections. The
	// certificate must have access to its private key. Use this only when the server
	// requests or requires client-certificate authentication.
	// 
	// Important: Configure the client certificate before Connect or ConvertToSsl. A
	// certificate without its private key cannot prove client identity.
	bool SetSslClientCert(CkCert &cert);


	// Loads and configures a TLS client certificate and private key from PEM data or a
	// PEM filename supplied in pemDataOrFilename. Use pemPassword when the private key
	// is encrypted.
	// 
	// Important: The PEM material must include or make available the private key
	// corresponding to the certificate. Configure it before the TLS handshake begins.
	bool SetSslClientCertPem(const char *pemDataOrFilename, const char *pemPassword);


	// Loads and configures a TLS client certificate and private key from the PFX/P12
	// file pfxFilename, using pfxPassword. Use this only when the server requests or
	// requires client-certificate authentication.
	// 
	// Important: Protect PFX files and passwords because they contain private-key
	// material.
	bool SetSslClientCertPfx(const char *pfxFilename, const char *pfxPassword);


	// Pauses the calling thread for approximately millisec milliseconds. This is a
	// convenience method and does not perform network I/O or keep a connection alive.
	// 
	// Important: Sleeping blocks the current thread. It is not a substitute for socket
	// readiness methods, asynchronous I/O, or protocol timers.
	void SleepMs(int millisec);


	// Authenticates the SSH tunnel session as sshLogin using privateKey. Call
	// SshOpenTunnel first. The SSH server must have the corresponding public key
	// authorized for that account.
	// 
	// Important: This authenticates the SSH transport used by the socket tunnel. It
	// does not authenticate the final destination protocol reached through a forwarded
	// channel.
	bool SshAuthenticatePk(const char *sshLogin, CkSshKey &privateKey);

	// Authenticates the SSH tunnel session as sshLogin using privateKey. Call
	// SshOpenTunnel first. The SSH server must have the corresponding public key
	// authorized for that account.
	// 
	// Important: This authenticates the SSH transport used by the socket tunnel. It
	// does not authenticate the final destination protocol reached through a forwarded
	// channel.
	CkTask *SshAuthenticatePkAsync(const char *sshLogin, CkSshKey &privateKey);


	// Authenticates the SSH tunnel session using sshLogin and sshPassword. Call
	// SshOpenTunnel first and authenticate before opening forwarded channels.
	// 
	// Important: Do not log or expose the SSH password. Public-key authentication is
	// generally preferable when supported.
	bool SshAuthenticatePw(const char *sshLogin, const char *sshPassword);

	// Authenticates the SSH tunnel session using sshLogin and sshPassword. Call
	// SshOpenTunnel first and authenticate before opening forwarded channels.
	// 
	// Important: Do not log or expose the SSH password. Public-key authentication is
	// generally preferable when supported.
	CkTask *SshAuthenticatePwAsync(const char *sshLogin, const char *sshPassword);


	// Closes the SSH tunnel opened by SshOpenTunnel and terminates its forwarded
	// channels. It does not close unrelated SSH objects or connections.
	// 
	bool SshCloseTunnel(void);

	// Closes the SSH tunnel opened by SshOpenTunnel and terminates its forwarded
	// channels. It does not close unrelated SSH objects or connections.
	// 
	CkTask *SshCloseTunnelAsync(void);


	// Opens a new port-forwarded channel through the authenticated SSH tunnel to
	// hostname: port and populates channel with the connected socket. If ssl is
	// true, Chilkat establishes TLS to the destination inside the SSH tunnel.
	// 
	//     * maxWaitMs = 0 waits indefinitely for the channel/destination connection to
	//     open.
	//     * A positive value is used as supplied; unlike Connect, values below 100
	//     milliseconds are not raised to a 100-millisecond minimum.
	//     * Negative values have no defined meaning and should not be used.
	// 
	// Multiple channels can share one authenticated SSH tunnel and can target
	// different destination host/port pairs.
	// 
	// Required sequence: Call SshOpenTunnel and authenticate successfully before
	// opening channels.
	bool SshNewChannel(const char *hostname, int port, bool ssl, int maxWaitMs, CkSocket &channel);

	// Opens a new port-forwarded channel through the authenticated SSH tunnel to
	// hostname: port and populates channel with the connected socket. If ssl is
	// true, Chilkat establishes TLS to the destination inside the SSH tunnel.
	// 
	//     * maxWaitMs = 0 waits indefinitely for the channel/destination connection to
	//     open.
	//     * A positive value is used as supplied; unlike Connect, values below 100
	//     milliseconds are not raised to a 100-millisecond minimum.
	//     * Negative values have no defined meaning and should not be used.
	// 
	// Multiple channels can share one authenticated SSH tunnel and can target
	// different destination host/port pairs.
	// 
	// Required sequence: Call SshOpenTunnel and authenticate successfully before
	// opening channels.
	CkTask *SshNewChannelAsync(const char *hostname, int port, bool ssl, int maxWaitMs, CkSocket &channel);


	// Deprecated: This method is deprecated. Use SshNewChannel instead.
	// 
	// Opens a port-forwarded channel through the authenticated SSH tunnel to hostname:
	// port. If ssl is true, Chilkat performs TLS to the destination inside the SSH
	// tunnel. maxWaitMs limits destination connection establishment.
	// 
	// Note: Multiple channels can share one authenticated SSH tunnel and can target
	// different destination endpoints.
	// The caller is responsible for deleting the object returned by this method.
	CkSocket *SshOpenChannel(const char *hostname, int port, bool ssl, int maxWaitMs);

	// Deprecated: This method is deprecated. Use SshNewChannel instead.
	// 
	// Opens a port-forwarded channel through the authenticated SSH tunnel to hostname:
	// port. If ssl is true, Chilkat performs TLS to the destination inside the SSH
	// tunnel. maxWaitMs limits destination connection establishment.
	// 
	// Note: Multiple channels can share one authenticated SSH tunnel and can target
	// different destination endpoints.
	CkTask *SshOpenChannelAsync(const char *hostname, int port, bool ssl, int maxWaitMs);


	// Connects to the SSH server at sshHostname: sshPort and initializes an SSH
	// tunneling session. Port 22 is conventional but not required.
	// 
	// After this succeeds, authenticate with SshAuthenticatePw or SshAuthenticatePk,
	// then open forwarded destination channels with SshNewChannel. Multiple channels
	// can share the same authenticated tunnel.
	// 
	// Timeouts: This method has no dedicated wait argument. SSH protocol read and
	// write inactivity are governed by MaxReadIdleMs and MaxSendIdleMs. The default
	// value of 0 for those properties permits an indefinite wait while no progress is
	// made.
	bool SshOpenTunnel(const char *sshHostname, int sshPort);

	// Connects to the SSH server at sshHostname: sshPort and initializes an SSH
	// tunneling session. Port 22 is conventional but not required.
	// 
	// After this succeeds, authenticate with SshAuthenticatePw or SshAuthenticatePk,
	// then open forwarded destination channels with SshNewChannel. Multiple channels
	// can share the same authenticated tunnel.
	// 
	// Timeouts: This method has no dedicated wait argument. SSH protocol read and
	// write inactivity are governed by MaxReadIdleMs and MaxSendIdleMs. The default
	// value of 0 for those properties permits an indefinite wait while no progress is
	// made.
	CkTask *SshOpenTunnelAsync(const char *sshHostname, int sshPort);


	// Starts or restarts the object's convenience timer. Read ElapsedSeconds to obtain
	// the whole number of seconds since this call.
	// 
	// Note: This timer does not affect connection, send, or receive timeouts.
	void StartTiming(void);


	// Moves the active connection from cSocket into this object. This object first
	// releases its reference to any connection it previously held. Unlike TakeSocket,
	// this method does not add a member to a socket set.
	// 
	// After success, cSocket holds no connection. It may be closed, destroyed, or
	// reused immediately without affecting the transferred connection. Ownership is
	// exclusive after the move; only this destination object controls the transferred
	// connection.
	// 
	// Move semantics: This method transfers ownership rather than sharing the
	// connection. Use DupSocket only when two wrappers must refer to the same
	// underlying connection.
	bool TakeConnection(CkSocket &sock);


	// Moves the connection out of sock and into a newly created member of this
	// object's socket set. After one or more successful calls, this object acts as a
	// set of connected and/or listener sockets.
	// 
	// After success, sock holds no connection. It may be closed, destroyed, or reused
	// immediately without affecting the transferred connection. The new set member
	// owns the connection independently; there is no shared ownership to coordinate.
	// 
	// Set workflow: Use SelectorIndex to select a direct member. After
	// SelectForReading or SelectForWriting, assign the ready position directly to
	// SelectorReadIndex or SelectorWriteIndex.
	// Different from TakeConnection: TakeSocket adds a new member to the socket set.
	// TakeConnection moves a connection into the receiving object itself and is not a
	// set-building method.
	// Socket sets overview: See Socket Sets Overview[1] for an explanation of socket
	// sets, selectors, readiness, ownership, and common usage patterns.
	// 
	// References:
	// [1] https://www.chilkatsoft.com/socket_sets.asp
	bool TakeSocket(CkSocket &sock);


	// Requests TLS renegotiation on an established TLS connection, causing another
	// handshake to negotiate new security parameters where the protocol and peer
	// support it.
	// 
	// Important: TLS 1.3 does not use legacy renegotiation, and many modern TLS 1.2
	// servers disable it. The method can therefore fail even on an otherwise healthy
	// TLS connection.
	bool TlsRenegotiate(void);

	// Requests TLS renegotiation on an established TLS connection, causing another
	// handshake to negotiate new security parameters where the protocol and peer
	// support it.
	// 
	// Important: TLS 1.3 does not use legacy renegotiation, and many modern TLS 1.2
	// servers disable it. The method can therefore fail even on an otherwise healthy
	// TLS connection.
	CkTask *TlsRenegotiateAsync(void);


	// Configures this socket to route subsequent Connect calls through the already
	// connected and authenticated Ssh object. The destination host and port passed to
	// Connect are reached by SSH port forwarding rather than by a direct TCP
	// connection.
	// 
	// This is one of several SSH-tunneling models in Chilkat. Alternatives include
	// this class's SshOpenTunnel / SshNewChannel workflow and the separate SshTunnel
	// class for background static or dynamic forwarding.
	// 
	// Important: The supplied Ssh object must remain connected and authenticated while
	// the forwarded socket connection is being established and used.
	bool UseSsh(CkSsh &ssh);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
