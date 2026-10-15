// CkSsh.h: interface for the CkSsh class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkSsh_H
#define _CkSsh_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkSshKey;
class CkSecureString;
class CkStringArray;
class CkByteData;
class CkJsonObject;
class CkBinData;
class CkStringBuilder;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkSsh
class CK_VISIBLE_PUBLIC CkSsh  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkSsh(const CkSsh &);
	CkSsh &operator=(const CkSsh &);

    public:
	CkSsh(void);
	virtual ~CkSsh(void);

	static CkSsh *createNew(void);
	static CkSsh *createNew2(int progLang);
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
	// Set to true to request that the currently running Chilkat operation abort.
	// This applies to synchronous and asynchronous methods that may block on network
	// or lengthy processing.
	// 
	// A synchronous call can be interrupted by setting this property from another
	// thread. When the abort is observed, the current method returns failure, but the
	// SSH connection and channel are not automatically closed. Bytes already buffered
	// remain available, the remote process can continue running, and a later receive
	// call can continue on the same channel. The same object and connection can also
	// be used to open new channels afterward.
	// 
	// An aborted receive does not set DisconnectCode[1] or DisconnectReason[2], and
	// object-level configuration settings remain unchanged. An aborted Connect[3]
	// leaves the object disconnected but reusable for a later connection attempt.
	// 
	// When the abort is observed, Chilkat resets the property to false. If no
	// operation is running, it is reset when the next method begins.
	// 
	// 
	// References:
	// [1] #DisconnectCode
	// [2] #DisconnectReason
	// [3] #Connect
	bool get_AbortCurrent(void);
	// Set to true to request that the currently running Chilkat operation abort.
	// This applies to synchronous and asynchronous methods that may block on network
	// or lengthy processing.
	// 
	// A synchronous call can be interrupted by setting this property from another
	// thread. When the abort is observed, the current method returns failure, but the
	// SSH connection and channel are not automatically closed. Bytes already buffered
	// remain available, the remote process can continue running, and a later receive
	// call can continue on the same channel. The same object and connection can also
	// be used to open new channels afterward.
	// 
	// An aborted receive does not set DisconnectCode[1] or DisconnectReason[2], and
	// object-level configuration settings remain unchanged. An aborted Connect[3]
	// leaves the object disconnected but reusable for a later connection attempt.
	// 
	// When the abort is observed, Chilkat resets the property to false. If no
	// operation is running, it is reset when the next method begins.
	// 
	// 
	// References:
	// [1] #DisconnectCode
	// [2] #DisconnectReason
	// [3] #Connect
	void put_AbortCurrent(bool newVal);

	// Contains the result code from the most recent call to an SSH authentication
	// method, including AuthenticatePw[1], AuthenticatePk[2], AuthenticatePwPk[3], and
	// their SecureString variants. The initial value is 0, and a successful
	// authentication resets it to 0. A failed attempt sets one of the following
	// values.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                               Meaning                                |
	// +=======+======================================================================+
	// | 1     | Transport failure. The connection is unavailable, communication was  |
	// |       | lost, or a read operation failed or timed out. Calling an            |
	// |       | authentication method before Connect[4] also produces this value.    |
	// +-------+----------------------------------------------------------------------+
	// | 2     | Invalid key for public-key authentication. For example, the SshKey   |
	// |       | is empty, public-only, malformed, unsupported, or otherwise          |
	// |       | unsuitable.                                                          |
	// +-------+----------------------------------------------------------------------+
	// | 3     | No mutually supported authentication method was available.           |
	// +-------+----------------------------------------------------------------------+
	// | 4     | SSH authentication protocol error. An unexpected or invalid message  |
	// |       | was received.                                                        |
	// +-------+----------------------------------------------------------------------+
	// | 5     | The password or private key was rejected by the server.              |
	// +-------+----------------------------------------------------------------------+
	// | 6     | The SSH session is already authenticated.                            |
	// +-------+----------------------------------------------------------------------+
	// | 7     | The server requires a password change. See                           |
	// |       | PasswordChangeRequested[5] .                                         |
	// +-------+----------------------------------------------------------------------+
	// 
	// This property is not cleared by unrelated operations such as SendIgnore[6] or
	// Disconnect[7]. Read it immediately after an authentication method returns. If
	// the server closes the connection because of an authentication-attempt limit, the
	// result may be 1; inspect DisconnectCode[8], DisconnectReason[9], and
	// LastErrorText.
	// 
	// References:
	// [1] #AuthenticatePw
	// [2] #AuthenticatePk
	// [3] #AuthenticatePwPk
	// [4] #Connect
	// [5] #PasswordChangeRequested
	// [6] #SendIgnore
	// [7] #Disconnect
	// [8] #DisconnectCode
	// [9] #DisconnectReason
	int get_AuthFailReason(void);

	// Controls whether recognized caret notation is converted to ASCII control
	// characters in strings passed to SendReqExec[1] and ChannelSendString[2]. The
	// default is false.
	// 
	// When set to true, recognized uppercase sequences such as ^C, ^M, ^?, and ^^
	// are translated before the text is sent. An unrecognized sequence, such as
	// lowercase ^a, is sent literally.
	// Caret  Dec  Hex  Name  Description
	// ^@       0   00   NUL   Null
	// ^A       1   01   SOH   Start of Heading
	// ^B       2   02   STX   Start of Text
	// ^C       3   03   ETX   End of Text
	// ^D       4   04   EOT   End of Transmission
	// ^E       5   05   ENQ   Enquiry
	// ^F       6   06   ACK   Acknowledge
	// ^G       7   07   BEL   Bell
	// ^H       8   08   BS    Backspace
	// ^I       9   09   HT    Horizontal Tab
	// ^J      10   0A   LF    Line Feed
	// ^K      11   0B   VT    Vertical Tab
	// ^L      12   0C   FF    Form Feed
	// ^M      13   0D   CR    Carriage Return
	// ^N      14   0E   SO    Shift Out
	// ^O      15   0F   SI    Shift In
	// ^P      16   10   DLE   Data Link Escape
	// ^Q      17   11   DC1   Device Control One (XON)
	// ^R      18   12   DC2   Device Control Two
	// ^S      19   13   DC3   Device Control Three (XOFF)
	// ^T      20   14   DC4   Device Control Four
	// ^U      21   15   NAK   Negative Acknowledge
	// ^V      22   16   SYN   Synchronous Idle
	// ^W      23   17   ETB   End of Transmission Block
	// ^X      24   18   CAN   Cancel
	// ^Y      25   19   EM    End of Medium
	// ^Z      26   1A   SUB   Substitute
	// ^[      27   1B   ESC   Escape
	// ^\      28   1C   FS    File Separator
	// ^]      29   1D   GS    Group Separator
	// ^^      30   1E   RS    Record Separator
	// ^_      31   1F   US    Unit Separator
	// ^?     127   7F   DEL   Delete
	// 
	// References:
	// [1] #SendReqExec
	// [2] #ChannelSendString
	bool get_CaretControl(void);
	// Controls whether recognized caret notation is converted to ASCII control
	// characters in strings passed to SendReqExec[1] and ChannelSendString[2]. The
	// default is false.
	// 
	// When set to true, recognized uppercase sequences such as ^C, ^M, ^?, and ^^
	// are translated before the text is sent. An unrecognized sequence, such as
	// lowercase ^a, is sent literally.
	// Caret  Dec  Hex  Name  Description
	// ^@       0   00   NUL   Null
	// ^A       1   01   SOH   Start of Heading
	// ^B       2   02   STX   Start of Text
	// ^C       3   03   ETX   End of Text
	// ^D       4   04   EOT   End of Transmission
	// ^E       5   05   ENQ   Enquiry
	// ^F       6   06   ACK   Acknowledge
	// ^G       7   07   BEL   Bell
	// ^H       8   08   BS    Backspace
	// ^I       9   09   HT    Horizontal Tab
	// ^J      10   0A   LF    Line Feed
	// ^K      11   0B   VT    Vertical Tab
	// ^L      12   0C   FF    Form Feed
	// ^M      13   0D   CR    Carriage Return
	// ^N      14   0E   SO    Shift Out
	// ^O      15   0F   SI    Shift In
	// ^P      16   10   DLE   Data Link Escape
	// ^Q      17   11   DC1   Device Control One (XON)
	// ^R      18   12   DC2   Device Control Two
	// ^S      19   13   DC3   Device Control Three (XOFF)
	// ^T      20   14   DC4   Device Control Four
	// ^U      21   15   NAK   Negative Acknowledge
	// ^V      22   16   SYN   Synchronous Idle
	// ^W      23   17   ETB   End of Transmission Block
	// ^X      24   18   CAN   Cancel
	// ^Y      25   19   EM    End of Medium
	// ^Z      26   1A   SUB   Substitute
	// ^[      27   1B   ESC   Escape
	// ^\      28   1C   FS    File Separator
	// ^]      29   1D   GS    Group Separator
	// ^^      30   1E   RS    Record Separator
	// ^_      31   1F   US    Unit Separator
	// ^?     127   7F   DEL   Delete
	// 
	// References:
	// [1] #SendReqExec
	// [2] #ChannelSendString
	void put_CaretControl(bool newVal);

	// Contains the SSH channel-open failure code when the server rejects a request to
	// open a channel. The values are defined by RFC 4254.
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
	// The initial value is 0. A local failure, such as attempting to open a channel
	// before connecting, can also leave this property at 0 because no SSH channel-open
	// failure message was received. Read this property immediately after a
	// channel-open method returns -1.
	// 
	int get_ChannelOpenFailCode(void);

	// Contains the descriptive text associated with ChannelOpenFailCode[1] when the
	// server rejects a channel-open request. The text is supplied by the server and
	// may be empty or generic. The initial value is an empty string.
	// 
	// A rejected channel-open request normally leaves the underlying SSH connection
	// open. Local failures that occur before a request reaches the server may leave
	// both this property and ChannelOpenFailCode[1] unchanged.
	// 
	// 
	// References:
	// [1] #ChannelOpenFailCode
	void get_ChannelOpenFailReason(CkString &str);
	// Contains the descriptive text associated with ChannelOpenFailCode[1] when the
	// server rejects a channel-open request. The text is supplied by the server and
	// may be empty or generic. The initial value is an empty string.
	// 
	// A rejected channel-open request normally leaves the underlying SSH connection
	// open. Local failures that occur before a request reaches the server may leave
	// both this property and ChannelOpenFailCode[1] unchanged.
	// 
	// 
	// References:
	// [1] #ChannelOpenFailCode
	const char *channelOpenFailReason(void);

	// Specifies the SSH client-identification string sent when a connection is
	// established. The default is SSH-2.0-Chilkat_ followed by the Chilkat version,
	// for example SSH-2.0-Chilkat_11.6.0.
	// 
	// The value should begin with SSH-2.0-. A server may disconnect if the
	// identification string is not valid.
	void get_ClientIdentifier(CkString &str);
	// Specifies the SSH client-identification string sent when a connection is
	// established. The default is SSH-2.0-Chilkat_ followed by the Chilkat version,
	// for example SSH-2.0-Chilkat_11.6.0.
	// 
	// The value should begin with SSH-2.0-. A server may disconnect if the
	// identification string is not valid.
	const char *clientIdentifier(void);
	// Specifies the SSH client-identification string sent when a connection is
	// established. The default is SSH-2.0-Chilkat_ followed by the Chilkat version,
	// for example SSH-2.0-Chilkat_11.6.0.
	// 
	// The value should begin with SSH-2.0-. A server may disconnect if the
	// identification string is not valid.
	void put_ClientIdentifier(const char *newVal);

	// This property is normally left unset. Set it only when the computer has multiple
	// network interfaces or multiple local IP addresses and the application needs to
	// use a specific one.
	// 
	// The value may be a numeric IPv4 or IPv6 address. Do not specify a domain name.
	// When this property is empty, Chilkat and the operating system automatically
	// select the appropriate local address.
	// 
	// The specified address must be available on the local computer and must be
	// compatible with the address family used for the connection. If the address is
	// invalid or unavailable, the connection fails.
	// 
	// This setting applies to all connection paths, including direct SSH connections,
	// HTTP and SOCKS proxy connections, ConnectThroughSsh[1], and multi-hop SSH
	// connections.
	// 
	// 
	// References:
	// [1] #ConnectThroughSsh
	void get_ClientIpAddress(CkString &str);
	// This property is normally left unset. Set it only when the computer has multiple
	// network interfaces or multiple local IP addresses and the application needs to
	// use a specific one.
	// 
	// The value may be a numeric IPv4 or IPv6 address. Do not specify a domain name.
	// When this property is empty, Chilkat and the operating system automatically
	// select the appropriate local address.
	// 
	// The specified address must be available on the local computer and must be
	// compatible with the address family used for the connection. If the address is
	// invalid or unavailable, the connection fails.
	// 
	// This setting applies to all connection paths, including direct SSH connections,
	// HTTP and SOCKS proxy connections, ConnectThroughSsh[1], and multi-hop SSH
	// connections.
	// 
	// 
	// References:
	// [1] #ConnectThroughSsh
	const char *clientIpAddress(void);
	// This property is normally left unset. Set it only when the computer has multiple
	// network interfaces or multiple local IP addresses and the application needs to
	// use a specific one.
	// 
	// The value may be a numeric IPv4 or IPv6 address. Do not specify a domain name.
	// When this property is empty, Chilkat and the operating system automatically
	// select the appropriate local address.
	// 
	// The specified address must be available on the local computer and must be
	// compatible with the address family used for the connection. If the address is
	// invalid or unavailable, the connection fails.
	// 
	// This setting applies to all connection paths, including direct SSH connections,
	// HTTP and SOCKS proxy connections, ConnectThroughSsh[1], and multi-hop SSH
	// connections.
	// 
	// 
	// References:
	// [1] #ConnectThroughSsh
	void put_ClientIpAddress(const char *newVal);

	// This property is normally left at its default value of 0. In this case, the
	// operating system automatically chooses an unused local port from its
	// ephemeral-port range. Applications should set a specific local port only when a
	// remote system or network policy requires the connection to originate from that
	// port.
	// 
	// When set to a nonzero value, Chilkat requests that exact local port. The
	// connection fails if the port is already in use or is otherwise unavailable. A
	// specifically chosen port might also be temporarily unavailable for reuse after a
	// connection closes because of operating-system TCP connection management. These
	// port-reuse concerns do not normally apply when this property remains 0.
	// 
	// This property applies to all connection paths, including direct SSH connections,
	// HTTP and SOCKS proxy connections, ConnectThroughSsh[1], and multi-hop SSH
	// connections.
	// 
	// Starting in Chilkat v11.6.0, assigned values must be in the range 0 through
	// 65535. If a negative value or a value greater than 65535 is assigned, it is
	// ignored and the existing property value remains unchanged.
	// 
	// 
	// References:
	// [1] #ConnectThroughSsh
	int get_ClientPort(void);
	// This property is normally left at its default value of 0. In this case, the
	// operating system automatically chooses an unused local port from its
	// ephemeral-port range. Applications should set a specific local port only when a
	// remote system or network policy requires the connection to originate from that
	// port.
	// 
	// When set to a nonzero value, Chilkat requests that exact local port. The
	// connection fails if the port is already in use or is otherwise unavailable. A
	// specifically chosen port might also be temporarily unavailable for reuse after a
	// connection closes because of operating-system TCP connection management. These
	// port-reuse concerns do not normally apply when this property remains 0.
	// 
	// This property applies to all connection paths, including direct SSH connections,
	// HTTP and SOCKS proxy connections, ConnectThroughSsh[1], and multi-hop SSH
	// connections.
	// 
	// Starting in Chilkat v11.6.0, assigned values must be in the range 0 through
	// 65535. If a negative value or a value greater than 65535 is assigned, it is
	// ignored and the existing property value remains unchanged.
	// 
	// 
	// References:
	// [1] #ConnectThroughSsh
	void put_ClientPort(int newVal);

	// Specifies the maximum number of milliseconds allowed for the remote endpoint to
	// accept the TCP connection. The default is 30000 (30 seconds).
	// 
	// A value of 0 removes the Chilkat-imposed connect timeout; in practice, the
	// attempt ends when the operating system reports that the connection failed.
	// Negative values are treated as 0.
	// 
	// This timeout applies whether the destination is specified by a DNS hostname or
	// an IP address, and to direct connections and connections made through HTTP
	// proxies, SOCKS proxies, and ConnectThroughSsh[1]. For ConnectThroughSsh, the
	// inner Ssh object’s value is used.
	// 
	// Scope: This property covers only TCP connection establishment. Proxy
	// authentication, the SSH identification exchange, key exchange, and other server
	// communication are controlled by ReadTimeoutMs[2].
	// 
	// References:
	// [1] #ConnectThroughSsh
	// [2] #ReadTimeoutMs
	int get_ConnectTimeoutMs(void);
	// Specifies the maximum number of milliseconds allowed for the remote endpoint to
	// accept the TCP connection. The default is 30000 (30 seconds).
	// 
	// A value of 0 removes the Chilkat-imposed connect timeout; in practice, the
	// attempt ends when the operating system reports that the connection failed.
	// Negative values are treated as 0.
	// 
	// This timeout applies whether the destination is specified by a DNS hostname or
	// an IP address, and to direct connections and connections made through HTTP
	// proxies, SOCKS proxies, and ConnectThroughSsh[1]. For ConnectThroughSsh, the
	// inner Ssh object’s value is used.
	// 
	// Scope: This property covers only TCP connection establishment. Proxy
	// authentication, the SSH identification exchange, key exchange, and other server
	// communication are controlled by ReadTimeoutMs[2].
	// 
	// References:
	// [1] #ConnectThroughSsh
	// [2] #ReadTimeoutMs
	void put_ConnectTimeoutMs(int newVal);

	// Contains the reason code from the most recent SSH DISCONNECT message received
	// from the server. The values are defined by RFC 4253.
	// 
	// The initial value is 0. It also remains 0 after a normal local Disconnect[1], an
	// ordinary TCP connection loss that did not include an SSH DISCONNECT message, a
	// failed connection attempt, authentication rejection, receive timeout, receive
	// abort, or rejected channel-open request.
	// 
	// When the server sends an SSH DISCONNECT, this property contains the
	// server-provided code and remains available after CheckConnection[2]. A
	// subsequent call to Connect[3] clears the value to 0, whether that new attempt
	// succeeds or fails.
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
	// 
	// References:
	// [1] #Disconnect
	// [2] #CheckConnection
	// [3] #Connect
	int get_DisconnectCode(void);

	// Contains the descriptive text sent with the most recent server SSH DISCONNECT
	// message. See DisconnectCode[1] for the corresponding RFC 4253 reason code.
	// 
	// The initial value is an empty string. It remains empty after a normal local
	// Disconnect[2], an ordinary TCP connection loss without an SSH DISCONNECT
	// message, a failed connection attempt, authentication rejection, receive timeout,
	// receive abort, or rejected channel-open request.
	// 
	// When a server-sent SSH DISCONNECT is received, the text remains available after
	// CheckConnection[3]. A subsequent call to Connect[4] clears it, whether the new
	// attempt succeeds or fails. The returned string is empty rather than null when no
	// reason is available.
	// 
	// 
	// References:
	// [1] #DisconnectCode
	// [2] #Disconnect
	// [3] #CheckConnection
	// [4] #Connect
	void get_DisconnectReason(CkString &str);
	// Contains the descriptive text sent with the most recent server SSH DISCONNECT
	// message. See DisconnectCode[1] for the corresponding RFC 4253 reason code.
	// 
	// The initial value is an empty string. It remains empty after a normal local
	// Disconnect[2], an ordinary TCP connection loss without an SSH DISCONNECT
	// message, a failed connection attempt, authentication rejection, receive timeout,
	// receive abort, or rejected channel-open request.
	// 
	// When a server-sent SSH DISCONNECT is received, the text remains available after
	// CheckConnection[3]. A subsequent call to Connect[4] clears it, whether the new
	// attempt succeeds or fails. The returned string is empty rather than null when no
	// reason is available.
	// 
	// 
	// References:
	// [1] #DisconnectCode
	// [2] #Disconnect
	// [3] #CheckConnection
	// [4] #Connect
	const char *disconnectReason(void);

	// Controls whether SSH compression may be negotiated. The default is true,
	// meaning compression is used when the server supports it.
	// 
	// Some older servers advertise compression but fail when it is enabled. If the
	// server disconnects during or immediately after connection/authentication, try
	// setting this property to false.
	bool get_EnableCompression(void);
	// Controls whether SSH compression may be negotiated. The default is true,
	// meaning compression is used when the server supports it.
	// 
	// Some older servers advertise compression but fail when it is enabled. If the
	// server disconnects during or immediately after connection/authentication, try
	// setting this property to false.
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

	// Restricts SSH cipher negotiation to one cipher or a comma-separated preference
	// list. Leave this property empty to let Chilkat choose the first mutually
	// supported cipher from its normal preference order.
	// 
	// +-------------------------------------------------+
	// |             Supported cipher names              |
	// +=================================================+
	// | chacha20-poly1305@openssh.com                   |
	// +-------------------------------------------------+
	// | aes128-ctr , aes192-ctr , aes256-ctr            |
	// +-------------------------------------------------+
	// | aes128-cbc , aes192-cbc , aes256-cbc            |
	// +-------------------------------------------------+
	// | aes128-gcm@openssh.com , aes256-gcm@openssh.com |
	// +-------------------------------------------------+
	// | twofish128-cbc , twofish256-cbc                 |
	// +-------------------------------------------------+
	// | blowfish-cbc , 3des-cbc                         |
	// +-------------------------------------------------+
	// | arcfour128 , arcfour256                         |
	// +-------------------------------------------------+
	// 
	// Cipher names must use the exact lowercase spelling shown above. If none of the
	// specified ciphers is supported by the server, Connect[1] fails.
	// 
	// References:
	// [1] #Connect
	void get_ForceCipher(CkString &str);
	// Restricts SSH cipher negotiation to one cipher or a comma-separated preference
	// list. Leave this property empty to let Chilkat choose the first mutually
	// supported cipher from its normal preference order.
	// 
	// +-------------------------------------------------+
	// |             Supported cipher names              |
	// +=================================================+
	// | chacha20-poly1305@openssh.com                   |
	// +-------------------------------------------------+
	// | aes128-ctr , aes192-ctr , aes256-ctr            |
	// +-------------------------------------------------+
	// | aes128-cbc , aes192-cbc , aes256-cbc            |
	// +-------------------------------------------------+
	// | aes128-gcm@openssh.com , aes256-gcm@openssh.com |
	// +-------------------------------------------------+
	// | twofish128-cbc , twofish256-cbc                 |
	// +-------------------------------------------------+
	// | blowfish-cbc , 3des-cbc                         |
	// +-------------------------------------------------+
	// | arcfour128 , arcfour256                         |
	// +-------------------------------------------------+
	// 
	// Cipher names must use the exact lowercase spelling shown above. If none of the
	// specified ciphers is supported by the server, Connect[1] fails.
	// 
	// References:
	// [1] #Connect
	const char *forceCipher(void);
	// Restricts SSH cipher negotiation to one cipher or a comma-separated preference
	// list. Leave this property empty to let Chilkat choose the first mutually
	// supported cipher from its normal preference order.
	// 
	// +-------------------------------------------------+
	// |             Supported cipher names              |
	// +=================================================+
	// | chacha20-poly1305@openssh.com                   |
	// +-------------------------------------------------+
	// | aes128-ctr , aes192-ctr , aes256-ctr            |
	// +-------------------------------------------------+
	// | aes128-cbc , aes192-cbc , aes256-cbc            |
	// +-------------------------------------------------+
	// | aes128-gcm@openssh.com , aes256-gcm@openssh.com |
	// +-------------------------------------------------+
	// | twofish128-cbc , twofish256-cbc                 |
	// +-------------------------------------------------+
	// | blowfish-cbc , 3des-cbc                         |
	// +-------------------------------------------------+
	// | arcfour128 , arcfour256                         |
	// +-------------------------------------------------+
	// 
	// Cipher names must use the exact lowercase spelling shown above. If none of the
	// specified ciphers is supported by the server, Connect[1] fails.
	// 
	// References:
	// [1] #Connect
	void put_ForceCipher(const char *newVal);

	// Specifies the interval, in milliseconds, between AbortCheck[1] event callbacks
	// during operations that support progress events. The callback gives the
	// application an opportunity to abort an operation before it completes.
	// 
	// The default is 0, which disables periodic AbortCheck callbacks.
	// 
	// 
	// References:
	// [1] #AbortCheck
	int get_HeartbeatMs(void);
	// Specifies the interval, in milliseconds, between AbortCheck[1] event callbacks
	// during operations that support progress events. The callback gives the
	// application an opportunity to abort an operation before it completes.
	// 
	// The default is 0, which disables periodic AbortCheck callbacks.
	// 
	// 
	// References:
	// [1] #AbortCheck
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
	const char *hostKeyAlg(void);
	// Specifies the preferred host-key algorithm used during SSH connection
	// establishment. The default is DSS; set it to RSA only when required for
	// compatibility with a particular server.
	// 
	// Normally this property should be left unchanged.
	void put_HostKeyAlg(const char *newVal);

	// Contains the connected server’s host-key fingerprint in Chilkat’s legacy MD5
	// format:
	// 
	// ssh-ed25519 256 c8:73:22:c7:82:aa:09:f1:1c:4e:99:8a:a0:62:a7:87
	// 
	// The value consists of the SSH host-key type, key size, and the MD5 digest
	// represented as colon-separated hexadecimal bytes. It is empty before a
	// successful connection and after a normal Disconnect[1], a server-sent SSH
	// DISCONNECT, or a failed connection attempt.
	// 
	// After an abrupt TCP loss, a previously obtained fingerprint can temporarily
	// remain even when IsConnected[2] is false. Therefore, a nonempty value is not
	// proof that the connection is currently usable. Check IsConnected before relying
	// on per-session state.
	// 
	// Server identity: Compare the fingerprint with a value obtained from a trusted
	// source before sending credentials. For new applications, use GetHostKeyFP[3]
	// with SHA256.
	// 
	// References:
	// [1] #Disconnect
	// [2] #IsConnected
	// [3] #GetHostKeyFP
	void get_HostKeyFingerprint(CkString &str);
	// Contains the connected server’s host-key fingerprint in Chilkat’s legacy MD5
	// format:
	// 
	// ssh-ed25519 256 c8:73:22:c7:82:aa:09:f1:1c:4e:99:8a:a0:62:a7:87
	// 
	// The value consists of the SSH host-key type, key size, and the MD5 digest
	// represented as colon-separated hexadecimal bytes. It is empty before a
	// successful connection and after a normal Disconnect[1], a server-sent SSH
	// DISCONNECT, or a failed connection attempt.
	// 
	// After an abrupt TCP loss, a previously obtained fingerprint can temporarily
	// remain even when IsConnected[2] is false. Therefore, a nonempty value is not
	// proof that the connection is currently usable. Check IsConnected before relying
	// on per-session state.
	// 
	// Server identity: Compare the fingerprint with a value obtained from a trusted
	// source before sending credentials. For new applications, use GetHostKeyFP[3]
	// with SHA256.
	// 
	// References:
	// [1] #Disconnect
	// [2] #IsConnected
	// [3] #GetHostKeyFP
	const char *hostKeyFingerprint(void);

	// Specifies the authentication method used by an HTTP proxy. Matching is
	// case-insensitive.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                               Behavior                               |
	// +=======+======================================================================+
	// | empty | Automatically negotiate a supported authentication method with the   |
	// |       | proxy.                                                               |
	// +-------+----------------------------------------------------------------------+
	// | Basic | Use HTTP Basic authentication.                                       |
	// +-------+----------------------------------------------------------------------+
	// | NTLM  | Use NTLM authentication.                                             |
	// +-------+----------------------------------------------------------------------+
	// 
	// Basic and NTLM are the supported methods. Chilkat automatically handles a 407
	// Proxy Authentication Required response and performs the required authentication
	// exchange.
	// 
	// NTLMv2 is used unless NTLMv1 is explicitly selected by setting
	// Global.DefaultNtlmVersion to 1.
	// 
	void get_HttpProxyAuthMethod(CkString &str);
	// Specifies the authentication method used by an HTTP proxy. Matching is
	// case-insensitive.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                               Behavior                               |
	// +=======+======================================================================+
	// | empty | Automatically negotiate a supported authentication method with the   |
	// |       | proxy.                                                               |
	// +-------+----------------------------------------------------------------------+
	// | Basic | Use HTTP Basic authentication.                                       |
	// +-------+----------------------------------------------------------------------+
	// | NTLM  | Use NTLM authentication.                                             |
	// +-------+----------------------------------------------------------------------+
	// 
	// Basic and NTLM are the supported methods. Chilkat automatically handles a 407
	// Proxy Authentication Required response and performs the required authentication
	// exchange.
	// 
	// NTLMv2 is used unless NTLMv1 is explicitly selected by setting
	// Global.DefaultNtlmVersion to 1.
	// 
	const char *httpProxyAuthMethod(void);
	// Specifies the authentication method used by an HTTP proxy. Matching is
	// case-insensitive.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                               Behavior                               |
	// +=======+======================================================================+
	// | empty | Automatically negotiate a supported authentication method with the   |
	// |       | proxy.                                                               |
	// +-------+----------------------------------------------------------------------+
	// | Basic | Use HTTP Basic authentication.                                       |
	// +-------+----------------------------------------------------------------------+
	// | NTLM  | Use NTLM authentication.                                             |
	// +-------+----------------------------------------------------------------------+
	// 
	// Basic and NTLM are the supported methods. Chilkat automatically handles a 407
	// Proxy Authentication Required response and performs the required authentication
	// exchange.
	// 
	// NTLMv2 is used unless NTLMv1 is explicitly selected by setting
	// Global.DefaultNtlmVersion to 1.
	// 
	void put_HttpProxyAuthMethod(const char *newVal);

	// Specifies the optional Windows domain used for NTLM authentication with an HTTP
	// proxy.
	// 
	// The value is the legacy Windows NetBIOS domain name. It is not a DNS domain name
	// and is not the workstation name. This property is ignored unless NTLM proxy
	// authentication is used.
	// 
	void get_HttpProxyDomain(CkString &str);
	// Specifies the optional Windows domain used for NTLM authentication with an HTTP
	// proxy.
	// 
	// The value is the legacy Windows NetBIOS domain name. It is not a DNS domain name
	// and is not the workstation name. This property is ignored unless NTLM proxy
	// authentication is used.
	// 
	const char *httpProxyDomain(void);
	// Specifies the optional Windows domain used for NTLM authentication with an HTTP
	// proxy.
	// 
	// The value is the legacy Windows NetBIOS domain name. It is not a DNS domain name
	// and is not the workstation name. This property is ignored unless NTLM proxy
	// authentication is used.
	// 
	void put_HttpProxyDomain(const char *newVal);

	// Specifies the hostname or numeric IP address of an HTTP proxy.
	// 
	// Chilkat uses the HTTP CONNECT method to establish the SSH tunnel through the
	// proxy. The TCP connection to the proxy is not itself protected by TLS for this
	// SSH use case.
	// 
	// The HTTP proxy is used only when SocksVersion[1] is 0, this property is
	// nonempty, and HttpProxyPort[2] is nonzero. A configured SOCKS proxy takes
	// precedence. These settings apply to both Connect[3] and ConnectThroughSsh[4].
	// 
	// 
	// References:
	// [1] #SocksVersion
	// [2] #HttpProxyPort
	// [3] #Connect
	// [4] #ConnectThroughSsh
	void get_HttpProxyHostname(CkString &str);
	// Specifies the hostname or numeric IP address of an HTTP proxy.
	// 
	// Chilkat uses the HTTP CONNECT method to establish the SSH tunnel through the
	// proxy. The TCP connection to the proxy is not itself protected by TLS for this
	// SSH use case.
	// 
	// The HTTP proxy is used only when SocksVersion[1] is 0, this property is
	// nonempty, and HttpProxyPort[2] is nonzero. A configured SOCKS proxy takes
	// precedence. These settings apply to both Connect[3] and ConnectThroughSsh[4].
	// 
	// 
	// References:
	// [1] #SocksVersion
	// [2] #HttpProxyPort
	// [3] #Connect
	// [4] #ConnectThroughSsh
	const char *httpProxyHostname(void);
	// Specifies the hostname or numeric IP address of an HTTP proxy.
	// 
	// Chilkat uses the HTTP CONNECT method to establish the SSH tunnel through the
	// proxy. The TCP connection to the proxy is not itself protected by TLS for this
	// SSH use case.
	// 
	// The HTTP proxy is used only when SocksVersion[1] is 0, this property is
	// nonempty, and HttpProxyPort[2] is nonzero. A configured SOCKS proxy takes
	// precedence. These settings apply to both Connect[3] and ConnectThroughSsh[4].
	// 
	// 
	// References:
	// [1] #SocksVersion
	// [2] #HttpProxyPort
	// [3] #Connect
	// [4] #ConnectThroughSsh
	void put_HttpProxyHostname(const char *newVal);

	// Specifies the password used to authenticate with an HTTP proxy.
	// 
	// If the proxy requires authentication and this property is empty, the connection
	// fails.
	// 
	void get_HttpProxyPassword(CkString &str);
	// Specifies the password used to authenticate with an HTTP proxy.
	// 
	// If the proxy requires authentication and this property is empty, the connection
	// fails.
	// 
	const char *httpProxyPassword(void);
	// Specifies the password used to authenticate with an HTTP proxy.
	// 
	// If the proxy requires authentication and this property is empty, the connection
	// fails.
	// 
	void put_HttpProxyPassword(const char *newVal);

	// Specifies the HTTP proxy port.
	// 
	// An HTTP proxy is used only when SocksVersion[1] is 0, HttpProxyHostname[2] is
	// nonempty, and this property is nonzero. A configured SOCKS proxy takes
	// precedence.
	// 
	// Common proxy ports are:
	// 
	//     * 8080 — the most common general-purpose HTTP proxy port. It is
	//     non-privileged, so the proxy service typically does not require administrator or
	//     root privileges to bind to it.
	//     * 3128 — commonly used by Squid and enterprise proxy infrastructure.
	//     * 8888 — commonly used by development and debugging proxies such as Charles
	//     Proxy, Fiddler, and Burp Suite.
	// 
	// References:
	// [1] #SocksVersion
	// [2] #HttpProxyHostname
	int get_HttpProxyPort(void);
	// Specifies the HTTP proxy port.
	// 
	// An HTTP proxy is used only when SocksVersion[1] is 0, HttpProxyHostname[2] is
	// nonempty, and this property is nonzero. A configured SOCKS proxy takes
	// precedence.
	// 
	// Common proxy ports are:
	// 
	//     * 8080 — the most common general-purpose HTTP proxy port. It is
	//     non-privileged, so the proxy service typically does not require administrator or
	//     root privileges to bind to it.
	//     * 3128 — commonly used by Squid and enterprise proxy infrastructure.
	//     * 8888 — commonly used by development and debugging proxies such as Charles
	//     Proxy, Fiddler, and Burp Suite.
	// 
	// References:
	// [1] #SocksVersion
	// [2] #HttpProxyHostname
	void put_HttpProxyPort(int newVal);

	// Specifies the username used to authenticate with an HTTP proxy.
	// 
	// If the proxy requires authentication and this property is empty, the connection
	// fails.
	// 
	void get_HttpProxyUsername(CkString &str);
	// Specifies the username used to authenticate with an HTTP proxy.
	// 
	// If the proxy requires authentication and this property is empty, the connection
	// fails.
	// 
	const char *httpProxyUsername(void);
	// Specifies the username used to authenticate with an HTTP proxy.
	// 
	// If the proxy requires authentication and this property is empty, the connection
	// fails.
	// 
	void put_HttpProxyUsername(const char *newVal);

	// Specifies an inactivity interval, in milliseconds, for SSH receive waits that
	// use this property. The default is 0, meaning no inactivity limit.
	// 
	// This is not simply an application-output timeout. Receiving any SSH packet,
	// including transport or channel-control traffic that contains no stdout or stderr
	// bytes, counts as communication and restarts the interval. A remote command can
	// therefore remain silent longer than this value without necessarily causing a
	// timeout.
	// 
	// Timeout handling is method-specific. Methods having an explicit timeout
	// argument, such as ChannelPoll[1] and WaitForChannelMessage[2], use that argument
	// for the corresponding wait. In v11.6.0 testing, ChannelReadAndPoll[3] used
	// IdleTimeoutMs for its initial read when ReadTimeoutMs[4] was 0.
	// 
	// This property governs receiving. It is not a send-progress timeout.
	// 
	// 
	// References:
	// [1] #ChannelPoll
	// [2] #WaitForChannelMessage
	// [3] #ChannelReadAndPoll
	// [4] #ReadTimeoutMs
	int get_IdleTimeoutMs(void);
	// Specifies an inactivity interval, in milliseconds, for SSH receive waits that
	// use this property. The default is 0, meaning no inactivity limit.
	// 
	// This is not simply an application-output timeout. Receiving any SSH packet,
	// including transport or channel-control traffic that contains no stdout or stderr
	// bytes, counts as communication and restarts the interval. A remote command can
	// therefore remain silent longer than this value without necessarily causing a
	// timeout.
	// 
	// Timeout handling is method-specific. Methods having an explicit timeout
	// argument, such as ChannelPoll[1] and WaitForChannelMessage[2], use that argument
	// for the corresponding wait. In v11.6.0 testing, ChannelReadAndPoll[3] used
	// IdleTimeoutMs for its initial read when ReadTimeoutMs[4] was 0.
	// 
	// This property governs receiving. It is not a send-progress timeout.
	// 
	// 
	// References:
	// [1] #ChannelPoll
	// [2] #WaitForChannelMessage
	// [3] #ChannelReadAndPoll
	// [4] #ReadTimeoutMs
	void put_IdleTimeoutMs(int newVal);

	// Returns true when Chilkat currently considers the SSH transport connected. It
	// becomes true after Connect[1] establishes the secure transport. It is false
	// before connecting, after Disconnect[2], after a failed connection attempt, after
	// a server-sent SSH DISCONNECT, or when socket closure is detected.
	// 
	// An authentication failure, channel-open rejection, receive timeout, or aborted
	// receive does not by itself set this property to false. If the underlying
	// transport remains usable, the application can retry the operation on the same
	// connection.
	// 
	// Reading this property can reflect a remote close that the operating system has
	// already reported. In testing, it became false before CheckConnection[3] was
	// called. However, true does not prove that the remote server is responsive or
	// that a silent network failure has not occurred.
	// 
	// To verify that SSH traffic can still be exchanged, call SendIgnore[4] and check
	// its return value.
	// 
	// After abrupt transport loss or a server protocol disconnect, retained
	// per-channel state can be stale even though this property is false. Treat
	// IsConnected = false as authoritative for network I/O. Bytes received before
	// the loss can remain available in a retained channel buffer.
	// 
	// 
	// References:
	// [1] #Connect
	// [2] #Disconnect
	// [3] #CheckConnection
	// [4] #SendIgnore
	bool get_IsConnected(void);

	// Controls whether SSH protocol traffic is accumulated in SessionLog[1]. The
	// default is false. This object-level setting persists across disconnects,
	// failed operations, and subsequent connections until changed by the application.
	// 
	// The log for a completed session remains available after disconnect or transport
	// loss. A later successful connection begins a new session log.
	// 
	// Session logging is intended for diagnostics. The log grows as a session
	// proceeds, so disable it when no longer needed. Chilkat does not write literal
	// authentication passwords or private-key passphrases to the session log, but
	// diagnostic logs should still be handled as potentially sensitive.
	// 
	// References:
	// [1] #SessionLog
	bool get_KeepSessionLog(void);
	// Controls whether SSH protocol traffic is accumulated in SessionLog[1]. The
	// default is false. This object-level setting persists across disconnects,
	// failed operations, and subsequent connections until changed by the application.
	// 
	// The log for a completed session remains available after disconnect or transport
	// loss. A later successful connection begins a new session log.
	// 
	// Session logging is intended for diagnostics. The log grows as a session
	// proceeds, so disable it when no longer needed. Chilkat does not write literal
	// authentication passwords or private-key passphrases to the session log, but
	// diagnostic logs should still be handled as potentially sensitive.
	// 
	// References:
	// [1] #SessionLog
	void put_KeepSessionLog(bool newVal);

	// Specifies the maximum SSH channel packet size advertised in the
	// SSH_MSG_CHANNEL_OPEN message. The default is 8192.
	// 
	// For high-volume transfers, a value such as 32768 may improve performance.
	// 
	int get_MaxPacketSize(void);
	// Specifies the maximum SSH channel packet size advertised in the
	// SSH_MSG_CHANNEL_OPEN message. The default is 8192.
	// 
	// For high-volume transfers, a value such as 32768 may improve performance.
	// 
	void put_MaxPacketSize(int newVal);

	// Returns the number of channel records in the active SSH channel collection. A
	// channel is normally added after its open request is accepted and removed when
	// final remote-close processing occurs.
	// 
	// After Disconnect[1] or transport loss, this property returns 0 because former
	// channels are no longer active or enumerable. Buffered data for a former channel
	// can nevertheless remain retrievable by its channel number until it is released
	// or a new connection clears it.
	// 
	// A channel closed locally with ChannelSendClose[2] can have ChannelIsOpen[3]
	// return false while it is still counted until final cleanup. Conversely, a
	// remotely closed channel can cease to be counted while its results are only
	// temporarily retained.
	// 
	// Result-lifetime warning: Querying this property is an SSH operation that can
	// process pending final cleanup. After ChannelReceiveToClose[4] or another
	// completion receive returns, retrieve stdout, stderr, and exit status before
	// reading NumOpenChannels; otherwise the completed channel record can be
	// discarded.
	// 
	// Use GetChannelNumber[5] and GetChannelType[6] with zero-based indexes from 0
	// through NumOpenChannels - 1. Do not assume every enumerated channel is still
	// open for application I/O.
	// 
	// 
	// References:
	// [1] #Disconnect
	// [2] #ChannelSendClose
	// [3] #ChannelIsOpen
	// [4] #ChannelReceiveToClose
	// [5] #GetChannelNumber
	// [6] #GetChannelType
	int get_NumOpenChannels(void);

	// Indicates that the server rejected password authentication because it requires
	// the user to change the password. This property is set by AuthenticatePw[1] and
	// AuthenticatePwPk[2].
	// 
	// When true, call the authentication method again and pass both passwords in
	// this form:
	// 
	// |oldPassword|newPassword|
	// 
	// References:
	// [1] #AuthenticatePw
	// [2] #AuthenticatePwPk
	bool get_PasswordChangeRequested(void);

	// Controls which address family is selected when DNS resolution for a hostname
	// returns both an IPv4 address and an IPv6 address.
	// 
	//     * When false (the default), Chilkat selects the IPv4 address when one is
	//     available.
	//     * When true, Chilkat selects the IPv6 address when one is available.
	// 
	// This property expresses a preference; it does not prohibit use of the other
	// address family when the preferred family is unavailable.
	// 
	// No address fallback: Chilkat attempts only the first address selected from the
	// DNS results. If that connection attempt fails, it does not automatically try
	// another resolved address or fall back to the other address family. For example,
	// when IPv6 is preferred and the selected IPv6 connection fails, an available IPv4
	// address is not subsequently tried.
	bool get_PreferIpv6(void);
	// Controls which address family is selected when DNS resolution for a hostname
	// returns both an IPv4 address and an IPv6 address.
	// 
	//     * When false (the default), Chilkat selects the IPv4 address when one is
	//     available.
	//     * When true, Chilkat selects the IPv6 address when one is available.
	// 
	// This property expresses a preference; it does not prohibit use of the other
	// address family when the preferred family is unavailable.
	// 
	// No address fallback: Chilkat attempts only the first address selected from the
	// DNS results. If that connection attempt fails, it does not automatically try
	// another resolved address or fall back to the other address family. For example,
	// when IPv6 is preferred and the selected IPv6 connection fails, an available IPv4
	// address is not subsequently tried.
	void put_PreferIpv6(bool newVal);

	// Specifies a receive timeout, in milliseconds, for SSH methods that use this
	// property. The default is 0, meaning no ReadTimeoutMs limit.
	// 
	// The exact scope is method-specific:
	// 
	// +--------------------------------------+---------------------------------------+
	// |                Method                |        Observed timeout scope         |
	// +======================================+=======================================+
	// | ChannelRead[1]                       | Limits the wait for channel input.    |
	// +--------------------------------------+---------------------------------------+
	// | ChannelReadAndPoll[2]                | Limits the initial wait when nonzero. |
	// |                                      | After the first data arrives,         |
	// |                                      | pollTimeoutMs controls the additional |
	// |                                      | quiet-period wait.                    |
	// +--------------------------------------+---------------------------------------+
	// | ChannelReceiveToClose[3]             | Limits the receive operation while    |
	// |                                      | waiting for channel closure.          |
	// +--------------------------------------+---------------------------------------+
	// | ChannelReceiveUntilMatch[4] and      | Limits the wait for a matching        |
	// | ChannelReceiveUntilMatchN[5]         | pattern.                              |
	// +--------------------------------------+---------------------------------------+
	// | ChannelPoll[6] and                   | Use their explicit pollTimeoutMs      |
	// | WaitForChannelMessage[7]             | arguments instead.                    |
	// +--------------------------------------+---------------------------------------+
	// 
	// A receive timeout does not discard bytes already received. The connection and
	// channel can remain usable, and a later receive call can continue. Always inspect
	// and preserve buffered stdout and stderr after a timeout.
	// 
	// 
	// References:
	// [1] #ChannelRead
	// [2] #ChannelReadAndPoll
	// [3] #ChannelReceiveToClose
	// [4] #ChannelReceiveUntilMatch
	// [5] #ChannelReceiveUntilMatchN
	// [6] #ChannelPoll
	// [7] #WaitForChannelMessage
	int get_ReadTimeoutMs(void);
	// Specifies a receive timeout, in milliseconds, for SSH methods that use this
	// property. The default is 0, meaning no ReadTimeoutMs limit.
	// 
	// The exact scope is method-specific:
	// 
	// +--------------------------------------+---------------------------------------+
	// |                Method                |        Observed timeout scope         |
	// +======================================+=======================================+
	// | ChannelRead[1]                       | Limits the wait for channel input.    |
	// +--------------------------------------+---------------------------------------+
	// | ChannelReadAndPoll[2]                | Limits the initial wait when nonzero. |
	// |                                      | After the first data arrives,         |
	// |                                      | pollTimeoutMs controls the additional |
	// |                                      | quiet-period wait.                    |
	// +--------------------------------------+---------------------------------------+
	// | ChannelReceiveToClose[3]             | Limits the receive operation while    |
	// |                                      | waiting for channel closure.          |
	// +--------------------------------------+---------------------------------------+
	// | ChannelReceiveUntilMatch[4] and      | Limits the wait for a matching        |
	// | ChannelReceiveUntilMatchN[5]         | pattern.                              |
	// +--------------------------------------+---------------------------------------+
	// | ChannelPoll[6] and                   | Use their explicit pollTimeoutMs      |
	// | WaitForChannelMessage[7]             | arguments instead.                    |
	// +--------------------------------------+---------------------------------------+
	// 
	// A receive timeout does not discard bytes already received. The connection and
	// channel can remain usable, and a later receive call can continue. Always inspect
	// and preserve buffered stdout and stderr after a timeout.
	// 
	// 
	// References:
	// [1] #ChannelRead
	// [2] #ChannelReadAndPoll
	// [3] #ChannelReceiveToClose
	// [4] #ChannelReceiveUntilMatch
	// [5] #ChannelReceiveUntilMatchN
	// [6] #ChannelPoll
	// [7] #WaitForChannelMessage
	void put_ReadTimeoutMs(int newVal);

	// Specifies the character encoding used for command text sent by SendReqExec[1],
	// QuickCommand[2], and QuickCmdSend[3]. The default is ANSI.
	// 
	// On Windows, ANSI uses the Windows ANSI code page returned by GetACP, not the OEM
	// code page. Its exact meaning on non-Windows platforms is environment-dependent.
	// For portable behavior, specify an explicit charset such as utf-8 or
	// windows-1252.
	// 
	// This property applies to the command string itself. It does not override the
	// explicit charset argument passed to ChannelSendString[4].
	// 
	// Use a supported charset name. In v11.6.0, an unrecognized charset name was
	// observed to fall back to UTF-8 rather than fail; applications should not rely on
	// that fallback.
	// 
	// References:
	// [1] #SendReqExec
	// [2] #QuickCommand
	// [3] #QuickCmdSend
	// [4] #ChannelSendString
	void get_ReqExecCharset(CkString &str);
	// Specifies the character encoding used for command text sent by SendReqExec[1],
	// QuickCommand[2], and QuickCmdSend[3]. The default is ANSI.
	// 
	// On Windows, ANSI uses the Windows ANSI code page returned by GetACP, not the OEM
	// code page. Its exact meaning on non-Windows platforms is environment-dependent.
	// For portable behavior, specify an explicit charset such as utf-8 or
	// windows-1252.
	// 
	// This property applies to the command string itself. It does not override the
	// explicit charset argument passed to ChannelSendString[4].
	// 
	// Use a supported charset name. In v11.6.0, an unrecognized charset name was
	// observed to fall back to UTF-8 rather than fail; applications should not rely on
	// that fallback.
	// 
	// References:
	// [1] #SendReqExec
	// [2] #QuickCommand
	// [3] #QuickCmdSend
	// [4] #ChannelSendString
	const char *reqExecCharset(void);
	// Specifies the character encoding used for command text sent by SendReqExec[1],
	// QuickCommand[2], and QuickCmdSend[3]. The default is ANSI.
	// 
	// On Windows, ANSI uses the Windows ANSI code page returned by GetACP, not the OEM
	// code page. Its exact meaning on non-Windows platforms is environment-dependent.
	// For portable behavior, specify an explicit charset such as utf-8 or
	// windows-1252.
	// 
	// This property applies to the command string itself. It does not override the
	// explicit charset argument passed to ChannelSendString[4].
	// 
	// Use a supported charset name. In v11.6.0, an unrecognized charset name was
	// observed to fall back to UTF-8 rather than fail; applications should not rely on
	// that fallback.
	// 
	// References:
	// [1] #SendReqExec
	// [2] #QuickCommand
	// [3] #QuickCmdSend
	// [4] #ChannelSendString
	void put_ReqExecCharset(const char *newVal);

	// Contains the SSH server-identification string received during connection
	// establishment. For example:
	// 
	// SSH-2.0-OpenSSH_8.9p1 Ubuntu-3ubuntu0.16
	// 
	// The initial value is an empty string. After a successful connection, the value
	// remains available after a normal Disconnect[1], a server-sent SSH DISCONNECT, or
	// an abrupt transport loss.
	// 
	// A subsequent failed connection attempt clears this property rather than
	// retaining the identifier from an earlier session. A successful reconnect
	// replaces it with the newly received identifier. The empty result is an empty
	// string, not null.
	// 
	// 
	// References:
	// [1] #Disconnect
	void get_ServerIdentifier(CkString &str);
	// Contains the SSH server-identification string received during connection
	// establishment. For example:
	// 
	// SSH-2.0-OpenSSH_8.9p1 Ubuntu-3ubuntu0.16
	// 
	// The initial value is an empty string. After a successful connection, the value
	// remains available after a normal Disconnect[1], a server-sent SSH DISCONNECT, or
	// an abrupt transport loss.
	// 
	// A subsequent failed connection attempt clears this property rather than
	// retaining the identifier from an earlier session. A successful reconnect
	// replaces it with the newly received identifier. The empty result is an empty
	// string, not null.
	// 
	// 
	// References:
	// [1] #Disconnect
	const char *serverIdentifier(void);

	// Contains the in-memory SSH protocol log for the current or most recently
	// completed successful session. Enable logging by setting KeepSessionLog[1] to
	// true.
	// 
	// The initial value is an empty string. A normal disconnect, server disconnect, or
	// transport loss leaves the existing session log available. A later successful
	// Connect[2] starts a new session log rather than appending indefinitely to the
	// previous session. A failed TCP connection attempt does not necessarily replace
	// an existing session log; inspect LastErrorText for the failed call.
	// 
	// Authentication passwords and private-key passphrases are not included in the
	// log. The log may contain server identifiers, negotiated algorithms,
	// authentication method names, and other connection diagnostics.
	// 
	// This property contains log text; it is not a file path. Treat diagnostic output
	// as potentially sensitive and avoid retaining it longer than necessary.
	// 
	// References:
	// [1] #KeepSessionLog
	// [2] #Connect
	void get_SessionLog(CkString &str);
	// Contains the in-memory SSH protocol log for the current or most recently
	// completed successful session. Enable logging by setting KeepSessionLog[1] to
	// true.
	// 
	// The initial value is an empty string. A normal disconnect, server disconnect, or
	// transport loss leaves the existing session log available. A later successful
	// Connect[2] starts a new session log rather than appending indefinitely to the
	// previous session. A failed TCP connection attempt does not necessarily replace
	// an existing session log; inspect LastErrorText for the failed call.
	// 
	// Authentication passwords and private-key passphrases are not included in the
	// log. The log may contain server identifiers, negotiated algorithms,
	// authentication method names, and other connection diagnostics.
	// 
	// This property contains log text; it is not a file path. Treat diagnostic output
	// as potentially sensitive and avoid retaining it longer than necessary.
	// 
	// References:
	// [1] #KeepSessionLog
	// [2] #Connect
	const char *sessionLog(void);

	// Specifies the SOCKS proxy hostname or IPv4 address. This property is used only
	// when SocksVersion[1] is 4 or 5. An IPv6 address cannot be used for the SOCKS
	// proxy.
	// 
	// SOCKS4a is not supported. With SOCKS5, the destination hostname is sent to the
	// proxy and resolved remotely by the proxy. IPv6 destination addresses are not
	// supported through SOCKS5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksHostname(CkString &str);
	// Specifies the SOCKS proxy hostname or IPv4 address. This property is used only
	// when SocksVersion[1] is 4 or 5. An IPv6 address cannot be used for the SOCKS
	// proxy.
	// 
	// SOCKS4a is not supported. With SOCKS5, the destination hostname is sent to the
	// proxy and resolved remotely by the proxy. IPv6 destination addresses are not
	// supported through SOCKS5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const char *socksHostname(void);
	// Specifies the SOCKS proxy hostname or IPv4 address. This property is used only
	// when SocksVersion[1] is 4 or 5. An IPv6 address cannot be used for the SOCKS
	// proxy.
	// 
	// SOCKS4a is not supported. With SOCKS5, the destination hostname is sent to the
	// proxy and resolved remotely by the proxy. IPv6 destination addresses are not
	// supported through SOCKS5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksHostname(const char *newVal);

	// Specifies the SOCKS5 password when username/password authentication is required.
	// SOCKS4 does not define password authentication, so this property is ignored for
	// SOCKS4.
	// 
	// SOCKS5 supports either no authentication or username/password authentication.
	// Leave both SocksUsername[1] and this property empty to request no
	// authentication. The connection fails if the proxy requires an unsupported
	// authentication method.
	// 
	// 
	// References:
	// [1] #SocksUsername
	void get_SocksPassword(CkString &str);
	// Specifies the SOCKS5 password when username/password authentication is required.
	// SOCKS4 does not define password authentication, so this property is ignored for
	// SOCKS4.
	// 
	// SOCKS5 supports either no authentication or username/password authentication.
	// Leave both SocksUsername[1] and this property empty to request no
	// authentication. The connection fails if the proxy requires an unsupported
	// authentication method.
	// 
	// 
	// References:
	// [1] #SocksUsername
	const char *socksPassword(void);
	// Specifies the SOCKS5 password when username/password authentication is required.
	// SOCKS4 does not define password authentication, so this property is ignored for
	// SOCKS4.
	// 
	// SOCKS5 supports either no authentication or username/password authentication.
	// Leave both SocksUsername[1] and this property empty to request no
	// authentication. The connection fails if the proxy requires an unsupported
	// authentication method.
	// 
	// 
	// References:
	// [1] #SocksUsername
	void put_SocksPassword(const char *newVal);

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

	// Specifies the SOCKS username. For SOCKS4, it is sent as the SOCKS user ID. For
	// SOCKS5, it is used with SocksPassword[1] for username/password authentication.
	// 
	// For SOCKS5, leave both properties empty to request no authentication.
	// 
	// 
	// References:
	// [1] #SocksPassword
	void get_SocksUsername(CkString &str);
	// Specifies the SOCKS username. For SOCKS4, it is sent as the SOCKS user ID. For
	// SOCKS5, it is used with SocksPassword[1] for username/password authentication.
	// 
	// For SOCKS5, leave both properties empty to request no authentication.
	// 
	// 
	// References:
	// [1] #SocksPassword
	const char *socksUsername(void);
	// Specifies the SOCKS username. For SOCKS4, it is sent as the SOCKS user ID. For
	// SOCKS5, it is used with SocksPassword[1] for username/password authentication.
	// 
	// For SOCKS5, leave both properties empty to request no authentication.
	// 
	// 
	// References:
	// [1] #SocksPassword
	void put_SocksUsername(const char *newVal);

	// Selects whether and how a SOCKS proxy is used.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                               Behavior                               |
	// +=======+======================================================================+
	// | 0     | Do not use a SOCKS proxy. This is the default. Chilkat may still use |
	// |       | an HTTP proxy if both HttpProxyHostname[1] and HttpProxyPort[2] are  |
	// |       | set.                                                                 |
	// +-------+----------------------------------------------------------------------+
	// | 4     | Connect through a SOCKS4 proxy. SOCKS4a is not supported.            |
	// +-------+----------------------------------------------------------------------+
	// | 5     | Connect through a SOCKS5 proxy.                                      |
	// +-------+----------------------------------------------------------------------+
	// 
	// Proxy selection: A SOCKS proxy takes precedence over an HTTP proxy. When this
	// property is 4 or 5, Chilkat uses the configured SOCKS proxy. When it is 0,
	// Chilkat uses an HTTP proxy only if HttpProxyHostname is nonempty and
	// HttpProxyPort is nonzero. Otherwise, Chilkat connects directly to the SSH
	// server.
	// 
	// Assigning a value other than 4 or 5 sets the property to 0. These proxy settings
	// apply to both Connect[3] and ConnectThroughSsh[4].
	// 
	// 
	// References:
	// [1] #HttpProxyHostname
	// [2] #HttpProxyPort
	// [3] #Connect
	// [4] #ConnectThroughSsh
	int get_SocksVersion(void);
	// Selects whether and how a SOCKS proxy is used.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                               Behavior                               |
	// +=======+======================================================================+
	// | 0     | Do not use a SOCKS proxy. This is the default. Chilkat may still use |
	// |       | an HTTP proxy if both HttpProxyHostname[1] and HttpProxyPort[2] are  |
	// |       | set.                                                                 |
	// +-------+----------------------------------------------------------------------+
	// | 4     | Connect through a SOCKS4 proxy. SOCKS4a is not supported.            |
	// +-------+----------------------------------------------------------------------+
	// | 5     | Connect through a SOCKS5 proxy.                                      |
	// +-------+----------------------------------------------------------------------+
	// 
	// Proxy selection: A SOCKS proxy takes precedence over an HTTP proxy. When this
	// property is 4 or 5, Chilkat uses the configured SOCKS proxy. When it is 0,
	// Chilkat uses an HTTP proxy only if HttpProxyHostname is nonempty and
	// HttpProxyPort is nonzero. Otherwise, Chilkat connects directly to the SSH
	// server.
	// 
	// Assigning a value other than 4 or 5 sets the property to 0. These proxy settings
	// apply to both Connect[3] and ConnectThroughSsh[4].
	// 
	// 
	// References:
	// [1] #HttpProxyHostname
	// [2] #HttpProxyPort
	// [3] #Connect
	// [4] #ConnectThroughSsh
	void put_SocksVersion(int newVal);

	// Specifies the socket receive-buffer size. The default is 4194304 bytes. Normally
	// this property should remain unchanged.
	// 
	// When download throughput is unexpectedly low, testing a larger value may help.
	// Values should generally be multiples of 4096.
	// 
	// When a proxy is used, this setting applies to the TCP connection made to the
	// proxy.
	// 
	int get_SoRcvBuf(void);
	// Specifies the socket receive-buffer size. The default is 4194304 bytes. Normally
	// this property should remain unchanged.
	// 
	// When download throughput is unexpectedly low, testing a larger value may help.
	// Values should generally be multiples of 4096.
	// 
	// When a proxy is used, this setting applies to the TCP connection made to the
	// proxy.
	// 
	void put_SoRcvBuf(int newVal);

	// Specifies the socket send-buffer size. The default is 262144 bytes. Normally
	// this property should remain unchanged.
	// 
	// When upload throughput is unexpectedly low, testing values such as 524288 or
	// 1048576 may help. Values should generally be multiples of 4096.
	// 
	// When a proxy is used, this setting applies to the TCP connection made to the
	// proxy.
	// 
	int get_SoSndBuf(void);
	// Specifies the socket send-buffer size. The default is 262144 bytes. Normally
	// this property should remain unchanged.
	// 
	// When upload throughput is unexpectedly low, testing values such as 524288 or
	// 1048576 may help. Values should generally be multiples of 4096.
	// 
	// When a proxy is used, this setting applies to the TCP connection made to the
	// proxy.
	// 
	void put_SoSndBuf(int newVal);

	// Controls whether SSH extended-data received as stderr is merged into the normal
	// channel receive buffer. The default is true.
	// 
	// When true, retrieve combined stdout and stderr with GetReceivedData[1],
	// GetReceivedDataN[2], GetReceivedText[3], or GetReceivedTextS[4]. When false,
	// retrieve SSH stderr separately with GetReceivedStderr[5] or
	// GetReceivedStderrText[6].
	// 
	// The setting is applied when each incoming stderr packet is processed. Changing
	// it while a channel is active affects only stderr received afterward. Already
	// separated stderr is not moved into stdout, and already merged stderr cannot
	// later be separated.
	// 
	// Read-method return values count bytes in both the normal and separate stderr
	// buffers. GetReceivedNumBytes[7] counts only the normal receive buffer.
	// 
	// This setting also affects QuickCommand[8]. When false, its returned string
	// contains stdout but does not include separately received stderr.
	// 
	// PTY channels: When a pseudo-terminal is allocated, the remote terminal normally
	// combines the process's stdout and stderr into a single PTY byte stream before
	// SSH transports it. In that case both appear in the normal receive buffer and the
	// stderr buffer is empty regardless of this property.
	// 
	// References:
	// [1] #GetReceivedData
	// [2] #GetReceivedDataN
	// [3] #GetReceivedText
	// [4] #GetReceivedTextS
	// [5] #GetReceivedStderr
	// [6] #GetReceivedStderrText
	// [7] #GetReceivedNumBytes
	// [8] #QuickCommand
	bool get_StderrToStdout(void);
	// Controls whether SSH extended-data received as stderr is merged into the normal
	// channel receive buffer. The default is true.
	// 
	// When true, retrieve combined stdout and stderr with GetReceivedData[1],
	// GetReceivedDataN[2], GetReceivedText[3], or GetReceivedTextS[4]. When false,
	// retrieve SSH stderr separately with GetReceivedStderr[5] or
	// GetReceivedStderrText[6].
	// 
	// The setting is applied when each incoming stderr packet is processed. Changing
	// it while a channel is active affects only stderr received afterward. Already
	// separated stderr is not moved into stdout, and already merged stderr cannot
	// later be separated.
	// 
	// Read-method return values count bytes in both the normal and separate stderr
	// buffers. GetReceivedNumBytes[7] counts only the normal receive buffer.
	// 
	// This setting also affects QuickCommand[8]. When false, its returned string
	// contains stdout but does not include separately received stderr.
	// 
	// PTY channels: When a pseudo-terminal is allocated, the remote terminal normally
	// combines the process's stdout and stderr into a single PTY byte stream before
	// SSH transports it. In that case both appear in the normal receive buffer and the
	// stderr buffer is empty regardless of this property.
	// 
	// References:
	// [1] #GetReceivedData
	// [2] #GetReceivedDataN
	// [3] #GetReceivedText
	// [4] #GetReceivedTextS
	// [5] #GetReceivedStderr
	// [6] #GetReceivedStderrText
	// [7] #GetReceivedNumBytes
	// [8] #QuickCommand
	void put_StderrToStdout(bool newVal);

	// Controls whether ANSI SGR color and text-style sequences are removed from normal
	// received text returned by GetReceivedText[1] and GetReceivedTextS[2]. The
	// default is true.
	// 
	// It removes ESC-prefixed CSI sequences ending in m, including empty,
	// semicolon-separated, and colon-separated parameter forms such as ESC[m,
	// ESC[1;31m, ESC[38;5;196m, and ESC[38:5:196m.
	// 
	// It does not remove non-SGR CSI sequences such as ESC[2J, OSC sequences, 8-bit C1
	// CSI sequences beginning with byte 0x9B, or an incomplete trailing SGR sequence.
	// 
	// For GetReceivedTextS, stripping applies to both the literal substring search and
	// the returned value; the corresponding original raw escape-sequence bytes are
	// consumed.
	// 
	// It does not affect raw-byte getters, PeekReceivedText[3],
	// GetReceivedStderrText[4], pattern matching in ChannelReceiveUntilMatch[5], or
	// the string returned by QuickCommand[6].
	// 
	// An SGR sequence split across SSH packets can still be removed if all of its
	// bytes remain buffered until the text is retrieved.
	// 
	// References:
	// [1] #GetReceivedText
	// [2] #GetReceivedTextS
	// [3] #PeekReceivedText
	// [4] #GetReceivedStderrText
	// [5] #ChannelReceiveUntilMatch
	// [6] #QuickCommand
	bool get_StripColorCodes(void);
	// Controls whether ANSI SGR color and text-style sequences are removed from normal
	// received text returned by GetReceivedText[1] and GetReceivedTextS[2]. The
	// default is true.
	// 
	// It removes ESC-prefixed CSI sequences ending in m, including empty,
	// semicolon-separated, and colon-separated parameter forms such as ESC[m,
	// ESC[1;31m, ESC[38;5;196m, and ESC[38:5:196m.
	// 
	// It does not remove non-SGR CSI sequences such as ESC[2J, OSC sequences, 8-bit C1
	// CSI sequences beginning with byte 0x9B, or an incomplete trailing SGR sequence.
	// 
	// For GetReceivedTextS, stripping applies to both the literal substring search and
	// the returned value; the corresponding original raw escape-sequence bytes are
	// consumed.
	// 
	// It does not affect raw-byte getters, PeekReceivedText[3],
	// GetReceivedStderrText[4], pattern matching in ChannelReceiveUntilMatch[5], or
	// the string returned by QuickCommand[6].
	// 
	// An SGR sequence split across SSH packets can still be removed if all of its
	// bytes remain buffered until the text is retrieved.
	// 
	// References:
	// [1] #GetReceivedText
	// [2] #GetReceivedTextS
	// [3] #PeekReceivedText
	// [4] #GetReceivedStderrText
	// [5] #ChannelReceiveUntilMatch
	// [6] #QuickCommand
	void put_StripColorCodes(bool newVal);

	// Controls the TCP_NODELAY setting for the underlying TCP connection. The default
	// is true, which disables the Nagle algorithm and generally improves
	// responsiveness when many small messages are exchanged.
	// 
	// When a proxy is used, this setting applies to the TCP connection made to the
	// proxy.
	// 
	bool get_TcpNoDelay(void);
	// Controls the TCP_NODELAY setting for the underlying TCP connection. The default
	// is true, which disables the Nagle algorithm and generally improves
	// responsiveness when many small messages are exchanged.
	// 
	// When a proxy is used, this setting applies to the TCP connection made to the
	// proxy.
	// 
	void put_TcpNoDelay(bool newVal);

	// Provides comma-separated compatibility and security options for uncommon SSH
	// scenarios. The default is an empty string, which is appropriate for most
	// applications.
	// 
	// +--------------------------------+---------------------------------------------+
	// |            Keyword             |                   Effect                    |
	// +================================+=============================================+
	// | ForceUserAuthRsaSha1           | Forces ssh-rsa /SHA-1 for RSA user          |
	// |                                | authentication. Set before connecting when  |
	// |                                | a server advertises RSA-SHA2 but still      |
	// |                                | requires the legacy SHA-1 user-auth         |
	// |                                | signature.                                  |
	// +--------------------------------+---------------------------------------------+
	// | no-weak-mac-algs               | Removes hmac-sha1-96 , hmac-sha1 , hmac-md5 |
	// |                                | , and hmac-ripemd160 from the offered MAC   |
	// |                                | algorithms.                                 |
	// +--------------------------------+---------------------------------------------+
	// | ProtectFromVpn                 | On Android, bypasses an installed or active |
	// |                                | VPN.                                        |
	// +--------------------------------+---------------------------------------------+
	// | +ssh-hmac-etm                  | Re-enables Encrypt-then-MAC algorithms that |
	// |                                | are disabled by default as a Terrapin       |
	// |                                | mitigation.                                 |
	// +--------------------------------+---------------------------------------------+
	// | +chacha20-poly1305@openssh.com | Re-enables chacha20-poly1305@openssh.com ,  |
	// |                                | which is disabled by default as a Terrapin  |
	// |                                | mitigation.                                 |
	// +--------------------------------+---------------------------------------------+
	// 
	// Set connection-negotiation options before calling Connect[1].
	// 
	// References:
	// [1] #Connect
	void get_UncommonOptions(CkString &str);
	// Provides comma-separated compatibility and security options for uncommon SSH
	// scenarios. The default is an empty string, which is appropriate for most
	// applications.
	// 
	// +--------------------------------+---------------------------------------------+
	// |            Keyword             |                   Effect                    |
	// +================================+=============================================+
	// | ForceUserAuthRsaSha1           | Forces ssh-rsa /SHA-1 for RSA user          |
	// |                                | authentication. Set before connecting when  |
	// |                                | a server advertises RSA-SHA2 but still      |
	// |                                | requires the legacy SHA-1 user-auth         |
	// |                                | signature.                                  |
	// +--------------------------------+---------------------------------------------+
	// | no-weak-mac-algs               | Removes hmac-sha1-96 , hmac-sha1 , hmac-md5 |
	// |                                | , and hmac-ripemd160 from the offered MAC   |
	// |                                | algorithms.                                 |
	// +--------------------------------+---------------------------------------------+
	// | ProtectFromVpn                 | On Android, bypasses an installed or active |
	// |                                | VPN.                                        |
	// +--------------------------------+---------------------------------------------+
	// | +ssh-hmac-etm                  | Re-enables Encrypt-then-MAC algorithms that |
	// |                                | are disabled by default as a Terrapin       |
	// |                                | mitigation.                                 |
	// +--------------------------------+---------------------------------------------+
	// | +chacha20-poly1305@openssh.com | Re-enables chacha20-poly1305@openssh.com ,  |
	// |                                | which is disabled by default as a Terrapin  |
	// |                                | mitigation.                                 |
	// +--------------------------------+---------------------------------------------+
	// 
	// Set connection-negotiation options before calling Connect[1].
	// 
	// References:
	// [1] #Connect
	const char *uncommonOptions(void);
	// Provides comma-separated compatibility and security options for uncommon SSH
	// scenarios. The default is an empty string, which is appropriate for most
	// applications.
	// 
	// +--------------------------------+---------------------------------------------+
	// |            Keyword             |                   Effect                    |
	// +================================+=============================================+
	// | ForceUserAuthRsaSha1           | Forces ssh-rsa /SHA-1 for RSA user          |
	// |                                | authentication. Set before connecting when  |
	// |                                | a server advertises RSA-SHA2 but still      |
	// |                                | requires the legacy SHA-1 user-auth         |
	// |                                | signature.                                  |
	// +--------------------------------+---------------------------------------------+
	// | no-weak-mac-algs               | Removes hmac-sha1-96 , hmac-sha1 , hmac-md5 |
	// |                                | , and hmac-ripemd160 from the offered MAC   |
	// |                                | algorithms.                                 |
	// +--------------------------------+---------------------------------------------+
	// | ProtectFromVpn                 | On Android, bypasses an installed or active |
	// |                                | VPN.                                        |
	// +--------------------------------+---------------------------------------------+
	// | +ssh-hmac-etm                  | Re-enables Encrypt-then-MAC algorithms that |
	// |                                | are disabled by default as a Terrapin       |
	// |                                | mitigation.                                 |
	// +--------------------------------+---------------------------------------------+
	// | +chacha20-poly1305@openssh.com | Re-enables chacha20-poly1305@openssh.com ,  |
	// |                                | which is disabled by default as a Terrapin  |
	// |                                | mitigation.                                 |
	// +--------------------------------+---------------------------------------------+
	// 
	// Set connection-negotiation options before calling Connect[1].
	// 
	// References:
	// [1] #Connect
	void put_UncommonOptions(const char *newVal);

	// Contains a user-authentication banner received from the server during
	// authentication. Check this property after StartKeyboardAuth[1] or another
	// authentication attempt and display it to the user when appropriate.
	// 
	// This is per-authentication runtime state, not a persistent connection setting. A
	// value assigned by the application can remain before authentication begins,
	// including across a failed connection attempt, but an authentication attempt
	// clears or replaces the value. In testing, both successful and rejected password
	// authentication cleared a previously assigned value when the server sent no
	// banner.
	// 
	// When no banner is available, the property returns an empty string rather than
	// null.
	// 
	// 
	// References:
	// [1] #StartKeyboardAuth
	void get_UserAuthBanner(CkString &str);
	// Contains a user-authentication banner received from the server during
	// authentication. Check this property after StartKeyboardAuth[1] or another
	// authentication attempt and display it to the user when appropriate.
	// 
	// This is per-authentication runtime state, not a persistent connection setting. A
	// value assigned by the application can remain before authentication begins,
	// including across a failed connection attempt, but an authentication attempt
	// clears or replaces the value. In testing, both successful and rejected password
	// authentication cleared a previously assigned value when the server sent no
	// banner.
	// 
	// When no banner is available, the property returns an empty string rather than
	// null.
	// 
	// 
	// References:
	// [1] #StartKeyboardAuth
	const char *userAuthBanner(void);
	// Contains a user-authentication banner received from the server during
	// authentication. Check this property after StartKeyboardAuth[1] or another
	// authentication attempt and display it to the user when appropriate.
	// 
	// This is per-authentication runtime state, not a persistent connection setting. A
	// value assigned by the application can remain before authentication begins,
	// including across a failed connection attempt, but an authentication attempt
	// clears or replaces the value. In testing, both successful and rejected password
	// authentication cleared a previously assigned value when the server sent no
	// banner.
	// 
	// When no banner is available, the property returns an empty string rather than
	// null.
	// 
	// 
	// References:
	// [1] #StartKeyboardAuth
	void put_UserAuthBanner(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Authenticates an active, unauthenticated SSH connection using public-key
	// authentication. username identifies the server account, and privateKey must contain the
	// corresponding private key. The public key must already be authorized for that
	// account on the server.
	// 
	// An empty or public-only SshKey is rejected locally with AuthFailReason[1] equal
	// to 2; this local validation failure does not close the SSH connection.
	// 
	// If the server rejects the key but keeps the connection open, the application may
	// retry on the same connection with another private key or a different
	// authentication method. The server may instead disconnect after an
	// authentication-attempt limit is reached. Reconnect before retrying when
	// IsConnected[2] is false.
	// 
	// Calling this method before Connect[3] fails with reason 1. Calling it after the
	// session is already authenticated fails with reason 6.
	// 
	// After a failure, inspect AuthFailReason[1], LastErrorText, and, if the
	// connection was closed, DisconnectReason[4].
	// 
	// References:
	// [1] #AuthFailReason
	// [2] #IsConnected
	// [3] #Connect
	// [4] #DisconnectReason
	bool AuthenticatePk(const char *username, CkSshKey &privateKey);

	// Authenticates an active, unauthenticated SSH connection using public-key
	// authentication. username identifies the server account, and privateKey must contain the
	// corresponding private key. The public key must already be authorized for that
	// account on the server.
	// 
	// An empty or public-only SshKey is rejected locally with AuthFailReason[1] equal
	// to 2; this local validation failure does not close the SSH connection.
	// 
	// If the server rejects the key but keeps the connection open, the application may
	// retry on the same connection with another private key or a different
	// authentication method. The server may instead disconnect after an
	// authentication-attempt limit is reached. Reconnect before retrying when
	// IsConnected[2] is false.
	// 
	// Calling this method before Connect[3] fails with reason 1. Calling it after the
	// session is already authenticated fails with reason 6.
	// 
	// After a failure, inspect AuthFailReason[1], LastErrorText, and, if the
	// connection was closed, DisconnectReason[4].
	// 
	// References:
	// [1] #AuthFailReason
	// [2] #IsConnected
	// [3] #Connect
	// [4] #DisconnectReason
	CkTask *AuthenticatePkAsync(const char *username, CkSshKey &privateKey);


	// Authenticates an active, unauthenticated SSH connection using login and
	// password.
	// 
	// Call Connect[1] first. Calling this method without a connection fails with
	// AuthFailReason[2] equal to 1. Calling it after the session is already
	// authenticated fails with reason 6.
	// 
	// If authentication fails and the server keeps the SSH connection open,
	// IsConnected[3] remains true and the application may retry on the same
	// connection with corrected credentials or a different authentication method. A
	// later correct password succeeded on the same connection in testing. A server can
	// disconnect after too many failed attempts; reconnect before retrying when
	// IsConnected is false.
	// 
	// An authentication attempt clears or replaces UserAuthBanner[4]. Object-level
	// configuration settings remain unchanged.
	// 
	// If the server requests a password change, see PasswordChangeRequested[5].
	// 
	// After a failure, inspect AuthFailReason[2] and LastErrorText. DisconnectCode[6]
	// and DisconnectReason[7] remain zero and empty unless the server actually sends
	// an SSH DISCONNECT.
	// 
	// References:
	// [1] #Connect
	// [2] #AuthFailReason
	// [3] #IsConnected
	// [4] #UserAuthBanner
	// [5] #PasswordChangeRequested
	// [6] #DisconnectCode
	// [7] #DisconnectReason
	bool AuthenticatePw(const char *login, const char *password);

	// Authenticates an active, unauthenticated SSH connection using login and
	// password.
	// 
	// Call Connect[1] first. Calling this method without a connection fails with
	// AuthFailReason[2] equal to 1. Calling it after the session is already
	// authenticated fails with reason 6.
	// 
	// If authentication fails and the server keeps the SSH connection open,
	// IsConnected[3] remains true and the application may retry on the same
	// connection with corrected credentials or a different authentication method. A
	// later correct password succeeded on the same connection in testing. A server can
	// disconnect after too many failed attempts; reconnect before retrying when
	// IsConnected is false.
	// 
	// An authentication attempt clears or replaces UserAuthBanner[4]. Object-level
	// configuration settings remain unchanged.
	// 
	// If the server requests a password change, see PasswordChangeRequested[5].
	// 
	// After a failure, inspect AuthFailReason[2] and LastErrorText. DisconnectCode[6]
	// and DisconnectReason[7] remain zero and empty unless the server actually sends
	// an SSH DISCONNECT.
	// 
	// References:
	// [1] #Connect
	// [2] #AuthFailReason
	// [3] #IsConnected
	// [4] #UserAuthBanner
	// [5] #PasswordChangeRequested
	// [6] #DisconnectCode
	// [7] #DisconnectReason
	CkTask *AuthenticatePwAsync(const char *login, const char *password);


	// Authenticates with a server that requires both a password and a private key.
	// username is the username, password is the password, and privateKey is the private key.
	// 
	// Most servers require either password or public-key authentication rather than
	// both. After a failure, inspect AuthFailReason[1] and LastErrorText.
	// 
	// References:
	// [1] #AuthFailReason
	bool AuthenticatePwPk(const char *username, const char *password, CkSshKey &privateKey);

	// Authenticates with a server that requires both a password and a private key.
	// username is the username, password is the password, and privateKey is the private key.
	// 
	// Most servers require either password or public-key authentication rather than
	// both. After a failure, inspect AuthFailReason[1] and LastErrorText.
	// 
	// References:
	// [1] #AuthFailReason
	CkTask *AuthenticatePwPkAsync(const char *username, const char *password, CkSshKey &privateKey);


	// Performs the same authentication as AuthenticatePw[1], but receives the login
	// and password in SecureString objects.
	// 
	// The connection-state, retry, timeout, and AuthFailReason[2] behavior is the same
	// as for AuthenticatePw.
	// 
	// 
	// References:
	// [1] #AuthenticatePw
	// [2] #AuthFailReason
	bool AuthenticateSecPw(CkSecureString &login, CkSecureString &password);

	// Performs the same authentication as AuthenticatePw[1], but receives the login
	// and password in SecureString objects.
	// 
	// The connection-state, retry, timeout, and AuthFailReason[2] behavior is the same
	// as for AuthenticatePw.
	// 
	// 
	// References:
	// [1] #AuthenticatePw
	// [2] #AuthFailReason
	CkTask *AuthenticateSecPwAsync(CkSecureString &login, CkSecureString &password);


	// Performs the same combined password/private-key authentication as
	// AuthenticatePwPk[1], but receives the username and password in SecureString
	// objects.
	// 
	// 
	// References:
	// [1] #AuthenticatePwPk
	bool AuthenticateSecPwPk(CkSecureString &username, CkSecureString &password, CkSshKey &privateKey);

	// Performs the same combined password/private-key authentication as
	// AuthenticatePwPk[1], but receives the username and password in SecureString
	// objects.
	// 
	// 
	// References:
	// [1] #AuthenticatePwPk
	CkTask *AuthenticateSecPwPkAsync(CkSecureString &username, CkSecureString &password, CkSshKey &privateKey);


	// Returns true when channelNum identifies a channel that Chilkat currently
	// considers open for application I/O; otherwise returns false. It returns
	// false for invalid or nonexistent channel numbers, after a normal local
	// Disconnect[1], after remote closure is processed, and immediately after
	// ChannelSendClose[2] closes the channel locally.
	// 
	// NumOpenChannels[3] can temporarily continue counting a locally closed channel
	// until final remote-close processing occurs.
	// 
	// Connection loss: After abrupt transport loss or a server-sent SSH DISCONNECT, a
	// retained channel record can temporarily cause this method to return true even
	// though IsConnected[4] is false. Treat IsConnected = false as authoritative.
	// Buffered bytes from before the loss can still be retrievable.
	// 
	// References:
	// [1] #Disconnect
	// [2] #ChannelSendClose
	// [3] #NumOpenChannels
	// [4] #IsConnected
	bool ChannelIsOpen(int channelNum);


	// Polls channelNum for incoming SSH channel messages, waiting at most
	// pollTimeoutMs milliseconds. Pass 0 for a nonblocking poll. The explicit
	// pollTimeoutMs controls this wait; shorter values of ReadTimeoutMs[1] or
	// IdleTimeoutMs[2] do not shorten it.
	// 
	// Data received is appended to the normal receive buffer or separate stderr buffer
	// according to StderrToStdout[3].
	// 
	// +----------+-------------------------------------------------------------------+
	// |  Return  |                              Meaning                              |
	// |  value   |                                                                   |
	// +==========+===================================================================+
	// | -1       | An error occurred. Inspect LastErrorText , IsConnected[4] , and   |
	// |          | ChannelIsOpen[5] .                                                |
	// +----------+-------------------------------------------------------------------+
	// | -2       | No additional applicable channel message arrived before the       |
	// |          | applicable timeout. Previously buffered stdout or stderr can      |
	// |          | still be available.                                               |
	// +----------+-------------------------------------------------------------------+
	// | 0        | EOF or channel closure was processed. Buffered data can still     |
	// |          | remain and should be drained.                                     |
	// +----------+-------------------------------------------------------------------+
	// | > 0      | The total number of bytes currently buffered for the channel,     |
	// |          | counting both the normal receive buffer and a separate stderr     |
	// |          | buffer. It is not the number of bytes newly received by this      |
	// |          | call.                                                             |
	// +----------+-------------------------------------------------------------------+
	// 
	// The return value is not a newly received byte count. Inspect
	// GetReceivedNumBytes[6], retrieve separate stderr when applicable, and check EOF,
	// CLOSE, and exit-status flags. Processing a final channel message can remove a
	// completed channel record, so drain buffered output before polling again.
	// 
	// References:
	// [1] #ReadTimeoutMs
	// [2] #IdleTimeoutMs
	// [3] #StderrToStdout
	// [4] #IsConnected
	// [5] #ChannelIsOpen
	// [6] #GetReceivedNumBytes
	int ChannelPoll(int channelNum, int pollTimeoutMs);

	// Polls channelNum for incoming SSH channel messages, waiting at most
	// pollTimeoutMs milliseconds. Pass 0 for a nonblocking poll. The explicit
	// pollTimeoutMs controls this wait; shorter values of ReadTimeoutMs[1] or
	// IdleTimeoutMs[2] do not shorten it.
	// 
	// Data received is appended to the normal receive buffer or separate stderr buffer
	// according to StderrToStdout[3].
	// 
	// +----------+-------------------------------------------------------------------+
	// |  Return  |                              Meaning                              |
	// |  value   |                                                                   |
	// +==========+===================================================================+
	// | -1       | An error occurred. Inspect LastErrorText , IsConnected[4] , and   |
	// |          | ChannelIsOpen[5] .                                                |
	// +----------+-------------------------------------------------------------------+
	// | -2       | No additional applicable channel message arrived before the       |
	// |          | applicable timeout. Previously buffered stdout or stderr can      |
	// |          | still be available.                                               |
	// +----------+-------------------------------------------------------------------+
	// | 0        | EOF or channel closure was processed. Buffered data can still     |
	// |          | remain and should be drained.                                     |
	// +----------+-------------------------------------------------------------------+
	// | > 0      | The total number of bytes currently buffered for the channel,     |
	// |          | counting both the normal receive buffer and a separate stderr     |
	// |          | buffer. It is not the number of bytes newly received by this      |
	// |          | call.                                                             |
	// +----------+-------------------------------------------------------------------+
	// 
	// The return value is not a newly received byte count. Inspect
	// GetReceivedNumBytes[6], retrieve separate stderr when applicable, and check EOF,
	// CLOSE, and exit-status flags. Processing a final channel message can remove a
	// completed channel record, so drain buffered output before polling again.
	// 
	// References:
	// [1] #ReadTimeoutMs
	// [2] #IdleTimeoutMs
	// [3] #StderrToStdout
	// [4] #IsConnected
	// [5] #ChannelIsOpen
	// [6] #GetReceivedNumBytes
	CkTask *ChannelPollAsync(int channelNum, int pollTimeoutMs);


	// Reads incoming SSH channel messages for channelNum. A nonzero ReadTimeoutMs[1]
	// limits the wait for channel input. Received data is appended to the normal
	// receive buffer or separate stderr buffer according to StderrToStdout[2].
	// 
	// +----------+-------------------------------------------------------------------+
	// |  Return  |                              Meaning                              |
	// |  value   |                                                                   |
	// +==========+===================================================================+
	// | -1       | An error occurred. Inspect LastErrorText , IsConnected[3] , and   |
	// |          | ChannelIsOpen[4] .                                                |
	// +----------+-------------------------------------------------------------------+
	// | -2       | No additional applicable channel message arrived before the       |
	// |          | applicable timeout. Previously buffered stdout or stderr can      |
	// |          | still be available.                                               |
	// +----------+-------------------------------------------------------------------+
	// | 0        | EOF or channel closure was processed. Buffered data can still     |
	// |          | remain and should be drained.                                     |
	// +----------+-------------------------------------------------------------------+
	// | > 0      | The total number of bytes currently buffered for the channel,     |
	// |          | counting both the normal receive buffer and a separate stderr     |
	// |          | buffer. It is not the number of bytes newly received by this      |
	// |          | call.                                                             |
	// +----------+-------------------------------------------------------------------+
	// 
	// A timeout returns -2 rather than closing the channel. A later read can continue
	// on the same channel.
	// 
	// Because all channels share one SSH transport, this method can also process and
	// buffer packets for other open channels while waiting for channelNum.
	// 
	// References:
	// [1] #ReadTimeoutMs
	// [2] #StderrToStdout
	// [3] #IsConnected
	// [4] #ChannelIsOpen
	int ChannelRead(int channelNum);

	// Reads incoming SSH channel messages for channelNum. A nonzero ReadTimeoutMs[1]
	// limits the wait for channel input. Received data is appended to the normal
	// receive buffer or separate stderr buffer according to StderrToStdout[2].
	// 
	// +----------+-------------------------------------------------------------------+
	// |  Return  |                              Meaning                              |
	// |  value   |                                                                   |
	// +==========+===================================================================+
	// | -1       | An error occurred. Inspect LastErrorText , IsConnected[3] , and   |
	// |          | ChannelIsOpen[4] .                                                |
	// +----------+-------------------------------------------------------------------+
	// | -2       | No additional applicable channel message arrived before the       |
	// |          | applicable timeout. Previously buffered stdout or stderr can      |
	// |          | still be available.                                               |
	// +----------+-------------------------------------------------------------------+
	// | 0        | EOF or channel closure was processed. Buffered data can still     |
	// |          | remain and should be drained.                                     |
	// +----------+-------------------------------------------------------------------+
	// | > 0      | The total number of bytes currently buffered for the channel,     |
	// |          | counting both the normal receive buffer and a separate stderr     |
	// |          | buffer. It is not the number of bytes newly received by this      |
	// |          | call.                                                             |
	// +----------+-------------------------------------------------------------------+
	// 
	// A timeout returns -2 rather than closing the channel. A later read can continue
	// on the same channel.
	// 
	// Because all channels share one SSH transport, this method can also process and
	// buffer packets for other open channels while waiting for channelNum.
	// 
	// References:
	// [1] #ReadTimeoutMs
	// [2] #StderrToStdout
	// [3] #IsConnected
	// [4] #ChannelIsOpen
	CkTask *ChannelReadAsync(int channelNum);


	// Reads channelNum in two phases:
	// 
	//     1. Waits for the first applicable channel message. A nonzero
	//     ReadTimeoutMs[1] limits this initial wait. When ReadTimeoutMs is 0,
	//     IdleTimeoutMs[2] can provide the initial-read timeout.
	//     2. After data begins arriving, continues processing until no additional data
	//     arrives for pollTimeoutMs milliseconds.
	// 
	// The second phase is governed by pollTimeoutMs; a shorter ReadTimeoutMs does not
	// shorten that quiet-period wait.
	// 
	// This pattern is useful for shell commands: allow a longer wait for the first
	// output, then stop shortly after the output stream becomes idle.
	// 
	// +----------+-------------------------------------------------------------------+
	// |  Return  |                              Meaning                              |
	// |  value   |                                                                   |
	// +==========+===================================================================+
	// | -1       | An error occurred. Inspect LastErrorText , IsConnected[3] , and   |
	// |          | ChannelIsOpen[4] .                                                |
	// +----------+-------------------------------------------------------------------+
	// | -2       | No additional applicable channel message arrived before the       |
	// |          | applicable timeout. Previously buffered stdout or stderr can      |
	// |          | still be available.                                               |
	// +----------+-------------------------------------------------------------------+
	// | 0        | EOF or channel closure was processed. Buffered data can still     |
	// |          | remain and should be drained.                                     |
	// +----------+-------------------------------------------------------------------+
	// | > 0      | The total number of bytes currently buffered for the channel,     |
	// |          | counting both the normal receive buffer and a separate stderr     |
	// |          | buffer. It is not the number of bytes newly received by this      |
	// |          | call.                                                             |
	// +----------+-------------------------------------------------------------------+
	// 
	// The method can return 0 or -2 while bytes remain buffered. Drain the normal and
	// stderr buffers based on their actual contents, not solely on the method return
	// value.
	// 
	// 
	// References:
	// [1] #ReadTimeoutMs
	// [2] #IdleTimeoutMs
	// [3] #IsConnected
	// [4] #ChannelIsOpen
	int ChannelReadAndPoll(int channelNum, int pollTimeoutMs);

	// Reads channelNum in two phases:
	// 
	//     1. Waits for the first applicable channel message. A nonzero
	//     ReadTimeoutMs[1] limits this initial wait. When ReadTimeoutMs is 0,
	//     IdleTimeoutMs[2] can provide the initial-read timeout.
	//     2. After data begins arriving, continues processing until no additional data
	//     arrives for pollTimeoutMs milliseconds.
	// 
	// The second phase is governed by pollTimeoutMs; a shorter ReadTimeoutMs does not
	// shorten that quiet-period wait.
	// 
	// This pattern is useful for shell commands: allow a longer wait for the first
	// output, then stop shortly after the output stream becomes idle.
	// 
	// +----------+-------------------------------------------------------------------+
	// |  Return  |                              Meaning                              |
	// |  value   |                                                                   |
	// +==========+===================================================================+
	// | -1       | An error occurred. Inspect LastErrorText , IsConnected[3] , and   |
	// |          | ChannelIsOpen[4] .                                                |
	// +----------+-------------------------------------------------------------------+
	// | -2       | No additional applicable channel message arrived before the       |
	// |          | applicable timeout. Previously buffered stdout or stderr can      |
	// |          | still be available.                                               |
	// +----------+-------------------------------------------------------------------+
	// | 0        | EOF or channel closure was processed. Buffered data can still     |
	// |          | remain and should be drained.                                     |
	// +----------+-------------------------------------------------------------------+
	// | > 0      | The total number of bytes currently buffered for the channel,     |
	// |          | counting both the normal receive buffer and a separate stderr     |
	// |          | buffer. It is not the number of bytes newly received by this      |
	// |          | call.                                                             |
	// +----------+-------------------------------------------------------------------+
	// 
	// The method can return 0 or -2 while bytes remain buffered. Drain the normal and
	// stderr buffers based on their actual contents, not solely on the method return
	// value.
	// 
	// 
	// References:
	// [1] #ReadTimeoutMs
	// [2] #IdleTimeoutMs
	// [3] #IsConnected
	// [4] #ChannelIsOpen
	CkTask *ChannelReadAndPollAsync(int channelNum, int pollTimeoutMs);


	// Works like ChannelReadAndPoll[1], but also returns after newly processed data
	// causes the total buffered channel data to reach or exceed maxNumBytes.
	// 
	// maxNumBytes is a return threshold, not a hard receive-buffer limit. An entire
	// SSH packet can be buffered, so the amount returned can exceed the requested
	// threshold. Data already buffered before the call does not by itself cause an
	// immediate threshold return.
	// 
	// A value of 0 or a negative value does not impose a useful threshold. For
	// streaming large output, use a positive threshold, drain the buffer after each
	// call, and perform a final drain when EOF or CLOSE is observed.
	// 
	// +----------+-------------------------------------------------------------------+
	// |  Return  |                              Meaning                              |
	// |  value   |                                                                   |
	// +==========+===================================================================+
	// | -1       | An error occurred. Inspect LastErrorText , IsConnected[2] , and   |
	// |          | ChannelIsOpen[3] .                                                |
	// +----------+-------------------------------------------------------------------+
	// | -2       | No additional applicable channel message arrived before the       |
	// |          | timeout. Previously buffered stdout or stderr can still be        |
	// |          | available.                                                        |
	// +----------+-------------------------------------------------------------------+
	// | 0        | EOF or channel closure was processed. Buffered data can still     |
	// |          | remain and should be drained.                                     |
	// +----------+-------------------------------------------------------------------+
	// | > 0      | The total number of bytes currently buffered for the channel,     |
	// |          | counting both the normal receive buffer and a separate stderr     |
	// |          | buffer. It is not the number of bytes newly received by this      |
	// |          | call.                                                             |
	// +----------+-------------------------------------------------------------------+
	// 
	// 
	// References:
	// [1] #ChannelReadAndPoll
	// [2] #IsConnected
	// [3] #ChannelIsOpen
	int ChannelReadAndPoll2(int channelNum, int pollTimeoutMs, int maxNumBytes);

	// Works like ChannelReadAndPoll[1], but also returns after newly processed data
	// causes the total buffered channel data to reach or exceed maxNumBytes.
	// 
	// maxNumBytes is a return threshold, not a hard receive-buffer limit. An entire
	// SSH packet can be buffered, so the amount returned can exceed the requested
	// threshold. Data already buffered before the call does not by itself cause an
	// immediate threshold return.
	// 
	// A value of 0 or a negative value does not impose a useful threshold. For
	// streaming large output, use a positive threshold, drain the buffer after each
	// call, and perform a final drain when EOF or CLOSE is observed.
	// 
	// +----------+-------------------------------------------------------------------+
	// |  Return  |                              Meaning                              |
	// |  value   |                                                                   |
	// +==========+===================================================================+
	// | -1       | An error occurred. Inspect LastErrorText , IsConnected[2] , and   |
	// |          | ChannelIsOpen[3] .                                                |
	// +----------+-------------------------------------------------------------------+
	// | -2       | No additional applicable channel message arrived before the       |
	// |          | timeout. Previously buffered stdout or stderr can still be        |
	// |          | available.                                                        |
	// +----------+-------------------------------------------------------------------+
	// | 0        | EOF or channel closure was processed. Buffered data can still     |
	// |          | remain and should be drained.                                     |
	// +----------+-------------------------------------------------------------------+
	// | > 0      | The total number of bytes currently buffered for the channel,     |
	// |          | counting both the normal receive buffer and a separate stderr     |
	// |          | buffer. It is not the number of bytes newly received by this      |
	// |          | call.                                                             |
	// +----------+-------------------------------------------------------------------+
	// 
	// 
	// References:
	// [1] #ChannelReadAndPoll
	// [2] #IsConnected
	// [3] #ChannelIsOpen
	CkTask *ChannelReadAndPoll2Async(int channelNum, int pollTimeoutMs, int maxNumBytes);


	// Returns true if an SSH CLOSE message has been received for channelNum. Remote
	// CLOSE is distinct from EOF and closes the channel in both directions. When it is
	// processed, ChannelIsOpen[1] becomes false and the channel is normally removed
	// from NumOpenChannels[2].
	// 
	// Returns false for an invalid, released, locally disconnected, or
	// no-longer-retained channel number. A transport can be lost without receiving a
	// channel CLOSE; check IsConnected[3] separately.
	// 
	// Retrieve buffered output, stderr, and exit status promptly after the receive
	// method completes and before calling ChannelRelease[4].
	// 
	// 
	// References:
	// [1] #ChannelIsOpen
	// [2] #NumOpenChannels
	// [3] #IsConnected
	// [4] #ChannelRelease
	bool ChannelReceivedClose(int channelNum);


	// Returns true if an SSH EOF message has been received for channelNum. EOF means
	// the server will send no more ordinary channel data. It does not close the
	// channel.
	// 
	// The server can send EOF before it sends CLOSE. During that interval, this method
	// is true, ChannelReceivedClose[1] is false, and the channel can remain open
	// and counted by NumOpenChannels[2]. Exit status and CLOSE can arrive later.
	// 
	// Returns false for an invalid, released, disconnected, or no-longer-retained
	// channel number. After transport failure, channel flags can be stale or
	// unavailable; check IsConnected[3] first.
	// 
	// 
	// References:
	// [1] #ChannelReceivedClose
	// [2] #NumOpenChannels
	// [3] #IsConnected
	bool ChannelReceivedEof(int channelNum);


	// Returns true if the server supplied an exit-status value for channelNum. When
	// true, call GetChannelExitStatus[1].
	// 
	// Exit status is independent of EOF and CLOSE. It can arrive after EOF and before
	// or with CLOSE. The server is not required to send an exit status for every
	// channel type or command.
	// 
	// Returns false for an invalid, released, disconnected, or no-longer-retained
	// channel number. A connection failure does not synthesize an exit status.
	// 
	// Check this flag and retrieve the value immediately after the receive method
	// completes. A later unrelated SSH operation, including channel enumeration, can
	// finalize and remove the completed channel record.
	// 
	// References:
	// [1] #GetChannelExitStatus
	bool ChannelReceivedExitStatus(int channelNum);


	// Receives data on channelNum until the server sends and Chilkat processes channel
	// CLOSE. The server can send EOF earlier; EOF alone does not complete this method.
	// 
	// Both normal data and stderr are processed. Stderr is merged or kept separate
	// according to StderrToStdout[1]. A nonzero ReadTimeoutMs[2] limits the receive
	// operation. IdleTimeoutMs[3] is not a simple stdout/stderr inactivity timer
	// because any SSH communication can restart it.
	// 
	// If the method times out or is canceled, bytes received before the failure remain
	// buffered, the SSH connection and channel can remain open, and a later call can
	// continue receiving on the same channel. These outcomes do not set
	// DisconnectCode[4] or DisconnectReason[5]. If the SSH transport is lost, the
	// method fails and IsConnected[6] becomes false, but bytes received before the
	// loss can still remain retrievable.
	// 
	// This method buffers all received output in memory. It successfully accumulated
	// at least 8 MiB in testing, but no upper limit was established. For potentially
	// large or unbounded output, use incremental reads and drain the buffers as data
	// arrives.
	// 
	// Retrieve completed-channel results immediately. After this method returns, get
	// stdout, stderr, and exit status before calling unrelated SSH methods or querying
	// NumOpenChannels[7]. A later SSH operation can finalize and discard the completed
	// channel record.
	// 
	// A true return means the SSH receive operation completed. It does not mean the
	// remote command exited successfully.
	// 
	// 
	// References:
	// [1] #StderrToStdout
	// [2] #ReadTimeoutMs
	// [3] #IdleTimeoutMs
	// [4] #DisconnectCode
	// [5] #DisconnectReason
	// [6] #IsConnected
	// [7] #NumOpenChannels
	bool ChannelReceiveToClose(int channelNum);

	// Receives data on channelNum until the server sends and Chilkat processes channel
	// CLOSE. The server can send EOF earlier; EOF alone does not complete this method.
	// 
	// Both normal data and stderr are processed. Stderr is merged or kept separate
	// according to StderrToStdout[1]. A nonzero ReadTimeoutMs[2] limits the receive
	// operation. IdleTimeoutMs[3] is not a simple stdout/stderr inactivity timer
	// because any SSH communication can restart it.
	// 
	// If the method times out or is canceled, bytes received before the failure remain
	// buffered, the SSH connection and channel can remain open, and a later call can
	// continue receiving on the same channel. These outcomes do not set
	// DisconnectCode[4] or DisconnectReason[5]. If the SSH transport is lost, the
	// method fails and IsConnected[6] becomes false, but bytes received before the
	// loss can still remain retrievable.
	// 
	// This method buffers all received output in memory. It successfully accumulated
	// at least 8 MiB in testing, but no upper limit was established. For potentially
	// large or unbounded output, use incremental reads and drain the buffers as data
	// arrives.
	// 
	// Retrieve completed-channel results immediately. After this method returns, get
	// stdout, stderr, and exit status before calling unrelated SSH methods or querying
	// NumOpenChannels[7]. A later SSH operation can finalize and discard the completed
	// channel record.
	// 
	// A true return means the SSH receive operation completed. It does not mean the
	// remote command exited successfully.
	// 
	// 
	// References:
	// [1] #StderrToStdout
	// [2] #ReadTimeoutMs
	// [3] #IdleTimeoutMs
	// [4] #DisconnectCode
	// [5] #DisconnectReason
	// [6] #IsConnected
	// [7] #NumOpenChannels
	CkTask *ChannelReceiveToCloseAsync(int channelNum);


	// Receives text on channelNum until the accumulated text matches matchPattern.
	// Existing buffered text is checked before waiting for additional network data.
	// 
	// The supported pattern syntax consists of literal characters plus *, which
	// matches zero or more characters and can span line breaks. It can appear anywhere
	// in the pattern. The? wildcard and bracket character classes are not supported,
	// and backslash does not escape a literal *. A pattern containing only * waits
	// until at least some text has arrived rather than matching an empty buffer
	// immediately.
	// 
	// charset specifies the character encoding, and caseSensitive controls comparison.
	// The method can read beyond the matched text because an entire SSH packet may
	// already be available.
	// 
	// Matching considers stderr even when StderrToStdout[1] is false.
	// StripColorCodes[2] is not applied before matching.
	// 
	// A nonzero ReadTimeoutMs[3] limits the wait. IdleTimeoutMs[4] is not a substitute
	// for this limit because unrelated SSH traffic can restart the inactivity
	// interval.
	// 
	// Usage notes:
	//     * Use distinctive literal sentinels when exact command boundaries are
	//     required.
	//     * After success, GetReceivedTextS[5] can remove and return text through a
	//     known literal terminator.
	//     * Avoid an empty matchPattern; it does not define a useful boundary.
	// 
	// References:
	// [1] #StderrToStdout
	// [2] #StripColorCodes
	// [3] #ReadTimeoutMs
	// [4] #IdleTimeoutMs
	// [5] #GetReceivedTextS
	bool ChannelReceiveUntilMatch(int channelNum, const char *matchPattern, const char *charset, bool caseSensitive);

	// Receives text on channelNum until the accumulated text matches matchPattern.
	// Existing buffered text is checked before waiting for additional network data.
	// 
	// The supported pattern syntax consists of literal characters plus *, which
	// matches zero or more characters and can span line breaks. It can appear anywhere
	// in the pattern. The? wildcard and bracket character classes are not supported,
	// and backslash does not escape a literal *. A pattern containing only * waits
	// until at least some text has arrived rather than matching an empty buffer
	// immediately.
	// 
	// charset specifies the character encoding, and caseSensitive controls comparison.
	// The method can read beyond the matched text because an entire SSH packet may
	// already be available.
	// 
	// Matching considers stderr even when StderrToStdout[1] is false.
	// StripColorCodes[2] is not applied before matching.
	// 
	// A nonzero ReadTimeoutMs[3] limits the wait. IdleTimeoutMs[4] is not a substitute
	// for this limit because unrelated SSH traffic can restart the inactivity
	// interval.
	// 
	// Usage notes:
	//     * Use distinctive literal sentinels when exact command boundaries are
	//     required.
	//     * After success, GetReceivedTextS[5] can remove and return text through a
	//     known literal terminator.
	//     * Avoid an empty matchPattern; it does not define a useful boundary.
	// 
	// References:
	// [1] #StderrToStdout
	// [2] #StripColorCodes
	// [3] #ReadTimeoutMs
	// [4] #IdleTimeoutMs
	// [5] #GetReceivedTextS
	CkTask *ChannelReceiveUntilMatchAsync(int channelNum, const char *matchPattern, const char *charset, bool caseSensitive);


	// Works like ChannelReceiveUntilMatch[1], but returns when any pattern in
	// matchPatterns is matched. The array must contain at least one element.
	// 
	// The first matching content encountered in the received stream determines when
	// the method returns; array order does not override an earlier token in the
	// stream. Existing buffered text is checked before waiting. Empty elements are
	// ignored, and duplicate patterns are allowed.
	// 
	// The method does not return the index or value of the pattern that matched, and
	// GetLastJsonData[2] does not identify it. After success, inspect the buffered
	// text or use distinct nonoverlapping sentinels that the application can identify
	// reliably.
	// 
	// The same pattern grammar, stderr behavior, and ReadTimeoutMs[3] behavior
	// described for ChannelReceiveUntilMatch apply.
	// 
	// 
	// References:
	// [1] #ChannelReceiveUntilMatch
	// [2] #GetLastJsonData
	// [3] #ReadTimeoutMs
	bool ChannelReceiveUntilMatchN(int channelNum, CkStringArray &matchPatterns, const char *charset, bool caseSensitive);

	// Works like ChannelReceiveUntilMatch[1], but returns when any pattern in
	// matchPatterns is matched. The array must contain at least one element.
	// 
	// The first matching content encountered in the received stream determines when
	// the method returns; array order does not override an earlier token in the
	// stream. Existing buffered text is checked before waiting. Empty elements are
	// ignored, and duplicate patterns are allowed.
	// 
	// The method does not return the index or value of the pattern that matched, and
	// GetLastJsonData[2] does not identify it. After success, inspect the buffered
	// text or use distinct nonoverlapping sentinels that the application can identify
	// reliably.
	// 
	// The same pattern grammar, stderr behavior, and ReadTimeoutMs[3] behavior
	// described for ChannelReceiveUntilMatch apply.
	// 
	// 
	// References:
	// [1] #ChannelReceiveUntilMatch
	// [2] #GetLastJsonData
	// [3] #ReadTimeoutMs
	CkTask *ChannelReceiveUntilMatchNAsync(int channelNum, CkStringArray &matchPatterns, const char *charset, bool caseSensitive);


	// Releases Chilkat’s retained local resources for channelNum after all required
	// output and exit information has been retrieved. It does not send EOF or CLOSE
	// and is not a channel-closing method.
	// 
	// Calling it while a channel is still protocol-open has no effect. It can also be
	// called after Disconnect[1] to discard buffered data retained for a former
	// channel. After release, methods such as GetReceivedNumBytes[2] report that the
	// channel is unavailable.
	// 
	// Calling this method with an invalid channel number is a harmless no-op. Repeated
	// calls are harmless.
	// 
	// Do not release a completed channel until stdout, stderr, and exit status have
	// been retrieved. Also avoid unrelated SSH calls between completion and result
	// retrieval because they can finalize and remove the completed channel record.
	// ChannelReceiveToClose(channelNum)
	// GetReceivedText(...)
	// GetReceivedStderrText(...)
	// if (ChannelReceivedExitStatus(channelNum))
	//     GetChannelExitStatus(channelNum)
	// ChannelRelease(channelNum)
	// 
	// References:
	// [1] #Disconnect
	// [2] #GetReceivedNumBytes
	void ChannelRelease(int channelNum);


	// Sends an SSH CLOSE message for channelNum and immediately marks the channel
	// locally closed. The method does not wait for remote EOF, remote CLOSE, or an
	// exit status, and it does not guarantee that the remote process has terminated.
	// 
	// After a successful call, ChannelIsOpen[1] returns false, but
	// NumOpenChannels[2] can continue counting the channel until final remote-close
	// processing occurs. A repeated call can succeed while the local channel record
	// remains; after the remote CLOSE removes the channel, another call fails because
	// the channel no longer exists.
	// 
	// For normal exec completion, prefer receiving through the remote CLOSE so all
	// output and exit information can be collected. Use this method when the
	// application intentionally abandons or closes the channel early.
	// 
	// 
	// References:
	// [1] #ChannelIsOpen
	// [2] #NumOpenChannels
	bool ChannelSendClose(int channelNum);

	// Sends an SSH CLOSE message for channelNum and immediately marks the channel
	// locally closed. The method does not wait for remote EOF, remote CLOSE, or an
	// exit status, and it does not guarantee that the remote process has terminated.
	// 
	// After a successful call, ChannelIsOpen[1] returns false, but
	// NumOpenChannels[2] can continue counting the channel until final remote-close
	// processing occurs. A repeated call can succeed while the local channel record
	// remains; after the remote CLOSE removes the channel, another call fails because
	// the channel no longer exists.
	// 
	// For normal exec completion, prefer receiving through the remote CLOSE so all
	// output and exit information can be collected. Use this method when the
	// application intentionally abandons or closes the channel early.
	// 
	// 
	// References:
	// [1] #ChannelIsOpen
	// [2] #NumOpenChannels
	CkTask *ChannelSendCloseAsync(int channelNum);


	// Sends the exact bytes in byteData on channelNum. Binary values, including
	// embedded zero bytes, are preserved. A zero-length byte array is valid and sends
	// no data.
	// 
	// Chilkat splits large inputs into SSH packets and waits for channel-window
	// adjustments as needed. A multi-megabyte input can be passed in one call.
	// 
	// Partial delivery on failure: A false return does not mean that zero bytes were
	// delivered. If the remote side closes the channel during a large send, an
	// indeterminate prefix can already have been transmitted. The method does not
	// report the partial byte count. Do not automatically resend the complete payload
	// unless the application protocol can safely detect and recover from partial or
	// duplicate data.
	// 
	// Do not call this method after ChannelSendEof[1]. A successful return after EOF
	// does not guarantee delivery.
	// 
	// 
	// References:
	// [1] #ChannelSendEof
	bool ChannelSendData(int channelNum, CkByteData &byteData);

	// Sends the exact bytes in byteData on channelNum. Binary values, including
	// embedded zero bytes, are preserved. A zero-length byte array is valid and sends
	// no data.
	// 
	// Chilkat splits large inputs into SSH packets and waits for channel-window
	// adjustments as needed. A multi-megabyte input can be passed in one call.
	// 
	// Partial delivery on failure: A false return does not mean that zero bytes were
	// delivered. If the remote side closes the channel during a large send, an
	// indeterminate prefix can already have been transmitted. The method does not
	// report the partial byte count. Do not automatically resend the complete payload
	// unless the application protocol can safely detect and recover from partial or
	// duplicate data.
	// 
	// Do not call this method after ChannelSendEof[1]. A successful return after EOF
	// does not guarantee delivery.
	// 
	// 
	// References:
	// [1] #ChannelSendEof
	CkTask *ChannelSendDataAsync(int channelNum, CkByteData &byteData);


	// Sends an SSH EOF message on channelNum. This closes only the client-to-server
	// data direction. The application may continue receiving stdout, stderr, exit
	// status, EOF, and CLOSE from the server.
	// 
	// After EOF is sent, do not call ChannelSendData[1] or ChannelSendString[2] again
	// for that channel. A later send call can return true even though the data is
	// not delivered to the remote process. Repeated calls to ChannelSendEof are
	// harmless but unnecessary.
	// 
	// For an exec request that reads standard input, EOF is the normal way to indicate
	// that all input has been supplied.
	// 
	// 
	// References:
	// [1] #ChannelSendData
	// [2] #ChannelSendString
	bool ChannelSendEof(int channelNum);

	// Sends an SSH EOF message on channelNum. This closes only the client-to-server
	// data direction. The application may continue receiving stdout, stderr, exit
	// status, EOF, and CLOSE from the server.
	// 
	// After EOF is sent, do not call ChannelSendData[1] or ChannelSendString[2] again
	// for that channel. A later send call can return true even though the data is
	// not delivered to the remote process. Repeated calls to ChannelSendEof are
	// harmless but unnecessary.
	// 
	// For an exec request that reads standard input, EOF is the normal way to indicate
	// that all input has been supplied.
	// 
	// 
	// References:
	// [1] #ChannelSendData
	// [2] #ChannelSendString
	CkTask *ChannelSendEofAsync(int channelNum);


	// Encodes textData using charset, then sends the resulting bytes on channelNum. No
	// line ending or terminator is added automatically.
	// 
	// An empty string is valid and sends zero bytes. When CaretControl[1] is true,
	// recognized caret sequences are translated to control characters before sending.
	// 
	// On Windows, ANSI uses the Windows ANSI code page returned by GetACP, not the OEM
	// code page. Its meaning on other platforms is environment-dependent. Use an
	// explicit charset such as utf-8 or windows-1252 for portable behavior.
	// 
	// Use a supported charset name. In v11.6.0, an unrecognized charset name was
	// observed to fall back to UTF-8 rather than fail; applications should not rely on
	// that fallback.
	// 
	// The method handles SSH packet sizing and channel-window flow control internally.
	// It does not expose a partial-byte count if an error occurs.
	// 
	// Do not call this method after ChannelSendEof[2]. A successful return after EOF
	// does not guarantee that the text was delivered.
	// 
	// See Supported Charsets[3].
	// 
	// 
	// References:
	// [1] #CaretControl
	// [2] #ChannelSendEof
	// [3] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool ChannelSendString(int channelNum, const char *textData, const char *charset);

	// Encodes textData using charset, then sends the resulting bytes on channelNum. No
	// line ending or terminator is added automatically.
	// 
	// An empty string is valid and sends zero bytes. When CaretControl[1] is true,
	// recognized caret sequences are translated to control characters before sending.
	// 
	// On Windows, ANSI uses the Windows ANSI code page returned by GetACP, not the OEM
	// code page. Its meaning on other platforms is environment-dependent. Use an
	// explicit charset such as utf-8 or windows-1252 for portable behavior.
	// 
	// Use a supported charset name. In v11.6.0, an unrecognized charset name was
	// observed to fall back to UTF-8 rather than fail; applications should not rely on
	// that fallback.
	// 
	// The method handles SSH packet sizing and channel-window flow control internally.
	// It does not expose a partial-byte count if an error occurs.
	// 
	// Do not call this method after ChannelSendEof[2]. A successful return after EOF
	// does not guarantee that the text was delivered.
	// 
	// See Supported Charsets[3].
	// 
	// 
	// References:
	// [1] #CaretControl
	// [2] #ChannelSendEof
	// [3] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	CkTask *ChannelSendStringAsync(int channelNum, const char *textData, const char *charset);


	// Returns true when the underlying SSH transport currently appears connected,
	// and false when the object is unconnected, has been disconnected, a connection
	// attempt failed, or transport loss has already been detected.
	// 
	// In testing, this method returned immediately and matched IsConnected[1]. It
	// should not be treated as an end-to-end SSH round trip or proof that the remote
	// server is responsive. Use SendIgnore[2] when an active SSH exchange is required.
	// 
	// This method does not authenticate the session. A failed authentication, receive
	// timeout, receive abort, or rejected channel-open request can leave it returning
	// true because those failures do not necessarily close the transport.
	// 
	// A false result can simply mean that no connection exists. The method does not
	// necessarily replace LastErrorText, so an existing error string may describe an
	// earlier operation.
	// 
	// Returns true if the underlying TCP socket does not currently appear to be
	// closed, or false if the connection is known to be closed or invalid.
	// 
	// Unlike IsConnected[1], which reports the connection state already known by the
	// Ssh object, this method performs an additional non-consuming check of the
	// socket. It calls the operating system's recv function with MSG_PEEK to inspect
	// up to one byte without removing any data from the socket's receive buffer.
	// 
	// Important: This is a local socket-state check. It does not send an SSH message,
	// wait for an SSH response, authenticate the session, or prove that the remote SSH
	// server is responsive. For example, it may still return true when the network
	// path is silently broken but the operating system has not yet detected the
	// failure. Use SendIgnore[2] when an active SSH round trip is required.
	// 
	// A receive timeout, aborted operation, authentication failure, or rejected
	// channel request does not necessarily close the socket. In those cases,
	// CheckConnection may continue to return true.
	// 
	// A false result can simply mean that no connection exists. This method may not
	// replace LastErrorText when no new socket error is generated, so the existing
	// diagnostic text can describe an earlier operation.
	// 
	// 
	// References:
	// [1] #IsConnected
	// [2] #SendIgnore
	bool CheckConnection(void);


	// Clears all TTY mode settings previously added with SetTtyMode[1]. The next
	// SendReqPty[2] request will not include those cleared modes.
	// 
	// 
	// References:
	// [1] #SetTtyMode
	// [2] #SendReqPty
	void ClearTtyModes(void);


	// Establishes an SSH connection to domainName on the TCP port specified by port.
	// The domainName may be a DNS hostname or a numeric IPv4 or IPv6 address. A null
	// or empty domainName is treated as a zero-length hostname and causes the call to
	// fail.
	// 
	// Proxy selection: If SocksVersion[1] is 4 or 5, Chilkat connects through the
	// configured SOCKS proxy. Otherwise, if HttpProxyHostname[2] is nonempty and
	// HttpProxyPort[3] is nonzero, Chilkat connects through the HTTP proxy. If neither
	// condition applies, Chilkat connects directly to the SSH server.
	// 
	// Connection state after success: A successful call means the TCP connection and
	// secure SSH transport are established. The client and server identification
	// strings have been exchanged, key exchange has completed, and the server host key
	// has been received and cryptographically verified as part of the SSH key
	// exchange. User authentication has not yet started, so every newly connected
	// session is unauthenticated. Next call an authentication method such as
	// AuthenticatePw[4], AuthenticatePk[5], AuthenticatePwPk[6], or
	// StartKeyboardAuth[7].
	// 
	// If this method is called while the object is already connected, Chilkat first
	// disconnects the existing session and then establishes a new connection. This
	// occurs even when connecting again to the same server. The existing connection
	// and active channel collection are replaced. A new connection attempt also clears
	// retained data belonging to channels from an earlier disconnected or lost
	// session.
	// 
	// The same Ssh object may be reused after Disconnect[8], connection refusal,
	// connect timeout, connect abort, server protocol disconnect, or abrupt transport
	// loss. A failed call leaves IsConnected[9] equal to false. Every successful new
	// connection is unauthenticated and must be authenticated again. Channel numbers
	// are opaque and can continue increasing across reconnects; do not assume they
	// restart at zero.
	// 
	// Persistent configuration: Representative writable settings remained unchanged
	// across normal disconnects, failed connection attempts, authentication failures,
	// receive timeouts and aborts, rejected channel opens, server disconnects,
	// transport loss, and subsequent reconnects. Tested settings included connection
	// and receive timeouts, socket settings, proxy-independent client settings,
	// logging options, character-set and output options, compression, and uncommon
	// options. Runtime state such as authentication, channels, disconnect diagnostics,
	// host-key state, authentication banners, and session-log contents has a separate
	// lifecycle.
	// Typical state sequence: disconnected → SSH transport connected →
	// authenticated → channels open. The operations valid in each state follow
	// the SSH protocol.
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
	// |              | DH group 1/14/16/18, and group-exchange SHA-1/SHA-256         |
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
	// Connection failures: Every Internet protocol begins with a TCP connection.
	// Firewalls, endpoint security software, network ACLs, routing, proxies, or
	// server-side policy may block the connection before SSH negotiation begins.
	// 
	// References:
	// [1] #SocksVersion
	// [2] #HttpProxyHostname
	// [3] #HttpProxyPort
	// [4] #AuthenticatePw
	// [5] #AuthenticatePk
	// [6] #AuthenticatePwPk
	// [7] #StartKeyboardAuth
	// [8] #Disconnect
	// [9] #IsConnected
	bool Connect(const char *domainName, int port);

	// Establishes an SSH connection to domainName on the TCP port specified by port.
	// The domainName may be a DNS hostname or a numeric IPv4 or IPv6 address. A null
	// or empty domainName is treated as a zero-length hostname and causes the call to
	// fail.
	// 
	// Proxy selection: If SocksVersion[1] is 4 or 5, Chilkat connects through the
	// configured SOCKS proxy. Otherwise, if HttpProxyHostname[2] is nonempty and
	// HttpProxyPort[3] is nonzero, Chilkat connects through the HTTP proxy. If neither
	// condition applies, Chilkat connects directly to the SSH server.
	// 
	// Connection state after success: A successful call means the TCP connection and
	// secure SSH transport are established. The client and server identification
	// strings have been exchanged, key exchange has completed, and the server host key
	// has been received and cryptographically verified as part of the SSH key
	// exchange. User authentication has not yet started, so every newly connected
	// session is unauthenticated. Next call an authentication method such as
	// AuthenticatePw[4], AuthenticatePk[5], AuthenticatePwPk[6], or
	// StartKeyboardAuth[7].
	// 
	// If this method is called while the object is already connected, Chilkat first
	// disconnects the existing session and then establishes a new connection. This
	// occurs even when connecting again to the same server. The existing connection
	// and active channel collection are replaced. A new connection attempt also clears
	// retained data belonging to channels from an earlier disconnected or lost
	// session.
	// 
	// The same Ssh object may be reused after Disconnect[8], connection refusal,
	// connect timeout, connect abort, server protocol disconnect, or abrupt transport
	// loss. A failed call leaves IsConnected[9] equal to false. Every successful new
	// connection is unauthenticated and must be authenticated again. Channel numbers
	// are opaque and can continue increasing across reconnects; do not assume they
	// restart at zero.
	// 
	// Persistent configuration: Representative writable settings remained unchanged
	// across normal disconnects, failed connection attempts, authentication failures,
	// receive timeouts and aborts, rejected channel opens, server disconnects,
	// transport loss, and subsequent reconnects. Tested settings included connection
	// and receive timeouts, socket settings, proxy-independent client settings,
	// logging options, character-set and output options, compression, and uncommon
	// options. Runtime state such as authentication, channels, disconnect diagnostics,
	// host-key state, authentication banners, and session-log contents has a separate
	// lifecycle.
	// Typical state sequence: disconnected → SSH transport connected →
	// authenticated → channels open. The operations valid in each state follow
	// the SSH protocol.
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
	// |              | DH group 1/14/16/18, and group-exchange SHA-1/SHA-256         |
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
	// Connection failures: Every Internet protocol begins with a TCP connection.
	// Firewalls, endpoint security software, network ACLs, routing, proxies, or
	// server-side policy may block the connection before SSH negotiation begins.
	// 
	// References:
	// [1] #SocksVersion
	// [2] #HttpProxyHostname
	// [3] #HttpProxyPort
	// [4] #AuthenticatePw
	// [5] #AuthenticatePk
	// [6] #AuthenticatePwPk
	// [7] #StartKeyboardAuth
	// [8] #Disconnect
	// [9] #IsConnected
	CkTask *ConnectAsync(const char *domainName, int port);


	// Connects to another SSH server through the already connected and authenticated
	// Ssh object in ssh. hostname and port identify the destination host and port.
	// 
	// application  →  first SSH server  →  destination SSH server
	// 
	// After this method succeeds, authenticate separately with the destination server
	// by calling one of its Authenticate* methods.
	// 
	// The proxy properties, ClientIpAddress[1], ClientPort[2], and socket options on
	// the inner object apply to this connection. SOCKS takes precedence over HTTP
	// proxy settings, using the same selection rules as Connect[3].
	// 
	// The inner object’s ConnectTimeoutMs[4] controls the timeout for establishing
	// this connection.
	// 
	// 
	// References:
	// [1] #ClientIpAddress
	// [2] #ClientPort
	// [3] #Connect
	// [4] #ConnectTimeoutMs
	bool ConnectThroughSsh(CkSsh &ssh, const char *hostname, int port);

	// Connects to another SSH server through the already connected and authenticated
	// Ssh object in ssh. hostname and port identify the destination host and port.
	// 
	// application  →  first SSH server  →  destination SSH server
	// 
	// After this method succeeds, authenticate separately with the destination server
	// by calling one of its Authenticate* methods.
	// 
	// The proxy properties, ClientIpAddress[1], ClientPort[2], and socket options on
	// the inner object apply to this connection. SOCKS takes precedence over HTTP
	// proxy settings, using the same selection rules as Connect[3].
	// 
	// The inner object’s ConnectTimeoutMs[4] controls the timeout for establishing
	// this connection.
	// 
	// 
	// References:
	// [1] #ClientIpAddress
	// [2] #ClientPort
	// [3] #Connect
	// [4] #ConnectTimeoutMs
	CkTask *ConnectThroughSshAsync(CkSsh &ssh, const char *hostname, int port);


	// Continues keyboard-interactive authentication by submitting the response in
	// response. For a single prompt, response may be the response text. When the preceding
	// information request contains multiple prompts, supply an XML response:
	// 
	// <response>
	//   <response1>response to first prompt</response1>
	//   <response2>response to second prompt</response2>
	//   ...
	// </response>
	// 
	// The returned XML has one of three forms: authentication success, authentication
	// failure, or another information request containing additional prompts.
	// 
	// <success>success message</success>
	// 
	// <error>error message</error>
	// 
	// <infoRequest numPrompts="N">
	//   <name>name</name>
	//   <instruction>instructions</instruction>
	//   <prompt1 echo="1_or_0">prompt text</prompt1>
	//   ...
	// </infoRequest>
	bool ContinueKeyboardAuth(const char *response, CkString &outStr);

	// Continues keyboard-interactive authentication by submitting the response in
	// response. For a single prompt, response may be the response text. When the preceding
	// information request contains multiple prompts, supply an XML response:
	// 
	// <response>
	//   <response1>response to first prompt</response1>
	//   <response2>response to second prompt</response2>
	//   ...
	// </response>
	// 
	// The returned XML has one of three forms: authentication success, authentication
	// failure, or another information request containing additional prompts.
	// 
	// <success>success message</success>
	// 
	// <error>error message</error>
	// 
	// <infoRequest numPrompts="N">
	//   <name>name</name>
	//   <instruction>instructions</instruction>
	//   <prompt1 echo="1_or_0">prompt text</prompt1>
	//   ...
	// </infoRequest>
	const char *continueKeyboardAuth(const char *response);
	// Continues keyboard-interactive authentication by submitting the response in
	// response. For a single prompt, response may be the response text. When the preceding
	// information request contains multiple prompts, supply an XML response:
	// 
	// <response>
	//   <response1>response to first prompt</response1>
	//   <response2>response to second prompt</response2>
	//   ...
	// </response>
	// 
	// The returned XML has one of three forms: authentication success, authentication
	// failure, or another information request containing additional prompts.
	// 
	// <success>success message</success>
	// 
	// <error>error message</error>
	// 
	// <infoRequest numPrompts="N">
	//   <name>name</name>
	//   <instruction>instructions</instruction>
	//   <prompt1 echo="1_or_0">prompt text</prompt1>
	//   ...
	// </infoRequest>
	CkTask *ContinueKeyboardAuthAsync(const char *response);


	// Closes the current SSH transport. It is harmless to call when no connection
	// exists and may be called repeatedly.
	// 
	// After this method returns, IsConnected[1] is false, NumOpenChannels[2] is 0,
	// and former channels are no longer open or enumerated. However, bytes that were
	// already buffered for a former channel can remain retrievable by its channel
	// number after the disconnect. Retrieve the data and call ChannelRelease[3], or
	// allow the next Connect[4] call to clear retained old-channel data.
	// 
	// A local disconnect does not set DisconnectCode[5] or DisconnectReason[6]; they
	// remain 0 and an empty string. ServerIdentifier[7] remains available, while
	// HostKeyFingerprint[8] is cleared.
	// 
	// The Ssh object remains reusable. Writable configuration settings are not reset
	// and remain in effect for subsequent calls to Connect[4]. Every new connection
	// begins unauthenticated.
	// 
	// 
	// References:
	// [1] #IsConnected
	// [2] #NumOpenChannels
	// [3] #ChannelRelease
	// [4] #Connect
	// [5] #DisconnectCode
	// [6] #DisconnectReason
	// [7] #ServerIdentifier
	// [8] #HostKeyFingerprint
	void Disconnect(void);


	// Queries a connected, unauthenticated SSH server for its advertised
	// user-authentication methods. The result is a lowercase, comma-separated list
	// without spaces, such as publickey,password,keyboard-interactive.
	// 
	// Connection side effect: Call this method after Connect[1] and before
	// authenticating. It intentionally disconnects after the query, so call Connect
	// again before authenticating. Calling it after successful authentication fails
	// and also leaves the object disconnected.
	// 
	// References:
	// [1] #Connect
	bool GetAuthMethods(CkString &outStr);

	// Queries a connected, unauthenticated SSH server for its advertised
	// user-authentication methods. The result is a lowercase, comma-separated list
	// without spaces, such as publickey,password,keyboard-interactive.
	// 
	// Connection side effect: Call this method after Connect[1] and before
	// authenticating. It intentionally disconnects after the query, so call Connect
	// again before authenticating. Calling it after successful authentication fails
	// and also leaves the object disconnected.
	// 
	// References:
	// [1] #Connect
	const char *getAuthMethods(void);
	// Queries a connected, unauthenticated SSH server for its advertised
	// user-authentication methods. The result is a lowercase, comma-separated list
	// without spaces, such as publickey,password,keyboard-interactive.
	// 
	// Connection side effect: Call this method after Connect[1] and before
	// authenticating. It intentionally disconnects after the query, so call Connect
	// again before authenticating. Calling it after successful authentication fails
	// and also leaves the object disconnected.
	// 
	// References:
	// [1] #Connect
	const char *authMethods(void);

	// Queries a connected, unauthenticated SSH server for its advertised
	// user-authentication methods. The result is a lowercase, comma-separated list
	// without spaces, such as publickey,password,keyboard-interactive.
	// 
	// Connection side effect: Call this method after Connect[1] and before
	// authenticating. It intentionally disconnects after the query, so call Connect
	// again before authenticating. Calling it after successful authentication fails
	// and also leaves the object disconnected.
	// 
	// References:
	// [1] #Connect
	CkTask *GetAuthMethodsAsync(void);


	// Returns the remote process exit status received for channelNum. Call this method
	// only after ChannelReceivedExitStatus[1] returns true.
	// 
	// Retrieve the value immediately after the receive operation and before calling
	// unrelated SSH methods, querying NumOpenChannels[2], or releasing the channel.
	// After the completed channel record is removed, a returned numeric 0 is not a
	// valid substitute for checking method success.
	// 
	// An exit status of 0 conventionally indicates success on Unix-like systems;
	// nonzero meanings are determined by the remote program and operating system. A
	// nonzero exit status is not a Chilkat API failure and does not cause
	// SendReqExec[3] or ChannelReceiveToClose[4] to fail.
	// 
	// 
	// References:
	// [1] #ChannelReceivedExitStatus
	// [2] #NumOpenChannels
	// [3] #SendReqExec
	// [4] #ChannelReceiveToClose
	int GetChannelExitStatus(int channelNum);


	// Returns the channel number at zero-based enumeration index in the active channel
	// collection. The index is an enumeration position, not a channel number. Use
	// NumOpenChannels[1] to determine the valid range from 0 through NumOpenChannels -
	// 1.
	// 
	// Returns -1 when index is negative or otherwise out of range, including index 0
	// when the collection is empty. Channel numbers are opaque identifiers; do not
	// assume they start at 0, reset after reconnect, are sequential, or are reused
	// predictably.
	// 
	// The active collection can temporarily include a channel that was closed locally
	// and is awaiting final remote-close processing. Former channels retained only for
	// buffered-result retrieval after disconnect are not enumerated.
	// 
	// 
	// References:
	// [1] #NumOpenChannels
	int GetChannelNumber(int index);


	// Returns the type of the channel at zero-based enumeration index in the active
	// channel collection. The index is an enumeration position, not a channel number.
	// Possible values include session, x11, forwarded-tcpip, and direct-tcpip.
	// 
	// If index is negative or otherwise out of range, the string-returning method
	// reports failure, returns null, and sets LastMethodSuccess to false. This
	// includes index 0 when NumOpenChannels[1] is 0.
	// 
	// The active collection can temporarily include a channel that was closed locally
	// but is still awaiting final remote-close processing. Former channels retained
	// only for buffered-result retrieval after disconnect are not enumerated.
	// 
	// 
	// References:
	// [1] #NumOpenChannels
	bool GetChannelType(int index, CkString &outStr);

	// Returns the type of the channel at zero-based enumeration index in the active
	// channel collection. The index is an enumeration position, not a channel number.
	// Possible values include session, x11, forwarded-tcpip, and direct-tcpip.
	// 
	// If index is negative or otherwise out of range, the string-returning method
	// reports failure, returns null, and sets LastMethodSuccess to false. This
	// includes index 0 when NumOpenChannels[1] is 0.
	// 
	// The active collection can temporarily include a channel that was closed locally
	// but is still awaiting final remote-close processing. Former channels retained
	// only for buffered-result retrieval after disconnect are not enumerated.
	// 
	// 
	// References:
	// [1] #NumOpenChannels
	const char *getChannelType(int index);
	// Returns the type of the channel at zero-based enumeration index in the active
	// channel collection. The index is an enumeration position, not a channel number.
	// Possible values include session, x11, forwarded-tcpip, and direct-tcpip.
	// 
	// If index is negative or otherwise out of range, the string-returning method
	// reports failure, returns null, and sets LastMethodSuccess to false. This
	// includes index 0 when NumOpenChannels[1] is 0.
	// 
	// The active collection can temporarily include a channel that was closed locally
	// but is still awaiting final remote-close processing. Former channels retained
	// only for buffered-result retrieval after disconnect are not enumerated.
	// 
	// 
	// References:
	// [1] #NumOpenChannels
	const char *channelType(int index);


	// Returns the active connection’s server host-key fingerprint. hashAlg specifies the
	// hash algorithm. Hash-algorithm names are case-insensitive. Common choices
	// include SHA256, SHA384, SHA512, SHA1, MD5, and the supported SHA-3 algorithms.
	// 
	// The digest is Base64 encoded without trailing padding characters. includeKeyType controls
	// whether the host-key type is included, and includeHashName controls whether the canonical
	// hash name is included.
	// 
	// +---------+---------+----------------------------------------------------------+
	// |  includeKeyType   |  includeHashName   |                      Example format                      |
	// +=========+=========+==========================================================+
	// | true  | true  | ssh-ed25519                                              |
	// |         |         | SHA256:S1GreiGjlHBf1QlPPaHs2qxor4nDYl9bhFcPRN4FwF0       |
	// +---------+---------+----------------------------------------------------------+
	// | true  | false | ssh-ed25519 S1GreiGjlHBf1QlPPaHs2qxor4nDYl9bhFcPRN4FwF0  |
	// +---------+---------+----------------------------------------------------------+
	// | false | true  | SHA256:S1GreiGjlHBf1QlPPaHs2qxor4nDYl9bhFcPRN4FwF0       |
	// +---------+---------+----------------------------------------------------------+
	// | false | false | S1GreiGjlHBf1QlPPaHs2qxor4nDYl9bhFcPRN4FwF0              |
	// +---------+---------+----------------------------------------------------------+
	// 
	// An active SSH connection is required. The method fails when called before
	// connecting or after disconnecting. For MD5, this method still returns an
	// unpadded Base64 digest; it does not return the colon-separated hexadecimal form
	// used by HostKeyFingerprint[1].
	// 
	// Important: If hashAlg is not recognized, Chilkat falls back to SHA1. Applications
	// should therefore pass a known algorithm name explicitly. Compare the returned
	// fingerprint with a value obtained from a trusted source before sending
	// credentials.
	// 
	// References:
	// [1] #HostKeyFingerprint
	bool GetHostKeyFP(const char *hashAlg, bool includeKeyType, bool includeHashName, CkString &outStr);

	// Returns the active connection’s server host-key fingerprint. hashAlg specifies the
	// hash algorithm. Hash-algorithm names are case-insensitive. Common choices
	// include SHA256, SHA384, SHA512, SHA1, MD5, and the supported SHA-3 algorithms.
	// 
	// The digest is Base64 encoded without trailing padding characters. includeKeyType controls
	// whether the host-key type is included, and includeHashName controls whether the canonical
	// hash name is included.
	// 
	// +---------+---------+----------------------------------------------------------+
	// |  includeKeyType   |  includeHashName   |                      Example format                      |
	// +=========+=========+==========================================================+
	// | true  | true  | ssh-ed25519                                              |
	// |         |         | SHA256:S1GreiGjlHBf1QlPPaHs2qxor4nDYl9bhFcPRN4FwF0       |
	// +---------+---------+----------------------------------------------------------+
	// | true  | false | ssh-ed25519 S1GreiGjlHBf1QlPPaHs2qxor4nDYl9bhFcPRN4FwF0  |
	// +---------+---------+----------------------------------------------------------+
	// | false | true  | SHA256:S1GreiGjlHBf1QlPPaHs2qxor4nDYl9bhFcPRN4FwF0       |
	// +---------+---------+----------------------------------------------------------+
	// | false | false | S1GreiGjlHBf1QlPPaHs2qxor4nDYl9bhFcPRN4FwF0              |
	// +---------+---------+----------------------------------------------------------+
	// 
	// An active SSH connection is required. The method fails when called before
	// connecting or after disconnecting. For MD5, this method still returns an
	// unpadded Base64 digest; it does not return the colon-separated hexadecimal form
	// used by HostKeyFingerprint[1].
	// 
	// Important: If hashAlg is not recognized, Chilkat falls back to SHA1. Applications
	// should therefore pass a known algorithm name explicitly. Compare the returned
	// fingerprint with a value obtained from a trusted source before sending
	// credentials.
	// 
	// References:
	// [1] #HostKeyFingerprint
	const char *getHostKeyFP(const char *hashAlg, bool includeKeyType, bool includeHashName);
	// Returns the active connection’s server host-key fingerprint. hashAlg specifies the
	// hash algorithm. Hash-algorithm names are case-insensitive. Common choices
	// include SHA256, SHA384, SHA512, SHA1, MD5, and the supported SHA-3 algorithms.
	// 
	// The digest is Base64 encoded without trailing padding characters. includeKeyType controls
	// whether the host-key type is included, and includeHashName controls whether the canonical
	// hash name is included.
	// 
	// +---------+---------+----------------------------------------------------------+
	// |  includeKeyType   |  includeHashName   |                      Example format                      |
	// +=========+=========+==========================================================+
	// | true  | true  | ssh-ed25519                                              |
	// |         |         | SHA256:S1GreiGjlHBf1QlPPaHs2qxor4nDYl9bhFcPRN4FwF0       |
	// +---------+---------+----------------------------------------------------------+
	// | true  | false | ssh-ed25519 S1GreiGjlHBf1QlPPaHs2qxor4nDYl9bhFcPRN4FwF0  |
	// +---------+---------+----------------------------------------------------------+
	// | false | true  | SHA256:S1GreiGjlHBf1QlPPaHs2qxor4nDYl9bhFcPRN4FwF0       |
	// +---------+---------+----------------------------------------------------------+
	// | false | false | S1GreiGjlHBf1QlPPaHs2qxor4nDYl9bhFcPRN4FwF0              |
	// +---------+---------+----------------------------------------------------------+
	// 
	// An active SSH connection is required. The method fails when called before
	// connecting or after disconnecting. For MD5, this method still returns an
	// unpadded Base64 digest; it does not return the colon-separated hexadecimal form
	// used by HostKeyFingerprint[1].
	// 
	// Important: If hashAlg is not recognized, Chilkat falls back to SHA1. Applications
	// should therefore pass a known algorithm name explicitly. Compare the returned
	// fingerprint with a value obtained from a trusted source before sending
	// credentials.
	// 
	// References:
	// [1] #HostKeyFingerprint
	const char *hostKeyFP(const char *hashAlg, bool includeKeyType, bool includeHashName);


	// Copies structured diagnostic information from the most recently called method
	// into the JsonObject in json. Many methods do not produce additional JSON
	// details; in those cases the object may contain little or no information.
	// 
	// Authentication passwords and private-key passphrases are not included in this
	// diagnostic JSON.
	// 
	void GetLastJsonData(CkJsonObject &json);


	// Appends all bytes currently accumulated in the normal receive buffer for
	// channelNum to bd, then clears the channel receive buffer.
	// 
	// Existing bytes in bd are preserved and the received bytes are appended. If the
	// method fails, such as for an invalid channel, bd is left unchanged.
	// 
	bool GetReceivedBd(int channelNum, CkBinData &bd);


	// Returns all bytes currently accumulated in the normal receive buffer for
	// channelNum, then clears that buffer.
	// 
	// For a valid retained channel with no buffered data, the method succeeds and
	// returns a zero-length byte array. For an invalid or no-longer-retained channel,
	// it fails. The separate stderr buffer is not affected.
	// 
	// Data received before a timeout, cancellation, or abrupt transport loss can still
	// be returned. After normal channel completion, call this method before unrelated
	// SSH operations that can finalize and remove the completed channel record.
	// 
	bool GetReceivedData(int channelNum, CkByteData &outBytes);


	// Returns and removes up to maxNumBytes bytes from the beginning of the normal
	// receive buffer for channelNum. Any remaining bytes stay buffered.
	// 
	// If maxNumBytes is 0, the method succeeds, returns zero bytes, and consumes
	// nothing. If it is negative or greater than the available amount, all currently
	// buffered bytes are returned and removed. An empty valid buffer returns success
	// with a zero-length result.
	// 
	bool GetReceivedDataN(int channelNum, int maxNumBytes, CkByteData &outBytes);


	// Returns the number of bytes currently available in the normal receive buffer for
	// channelNum. It does not include bytes in the separate stderr buffer when
	// StderrToStdout[1] is false.
	// 
	// Returns -1 when the channel number is invalid or its retained resources have
	// been released. After a normal Disconnect[2] or abrupt transport loss, bytes
	// received earlier can remain available and this method can still return their
	// count even though the channel is no longer active or enumerable. A subsequent
	// Connect[3] clears retained data from the previous session.
	// 
	// Buffered bytes can also remain after a timeout or cancellation. After normal
	// channel completion, a later unrelated SSH operation can finalize and discard the
	// completed channel record. Query and drain the buffer promptly.
	// 
	// Retrieve normal bytes with GetReceivedData[4], GetReceivedDataN[5],
	// GetReceivedBd[6], or a text getter. Retrieve separate stderr with
	// GetReceivedStderr[7] or GetReceivedStderrText[8].
	// 
	// 
	// References:
	// [1] #StderrToStdout
	// [2] #Disconnect
	// [3] #Connect
	// [4] #GetReceivedData
	// [5] #GetReceivedDataN
	// [6] #GetReceivedBd
	// [7] #GetReceivedStderr
	// [8] #GetReceivedStderrText
	int GetReceivedNumBytes(int channelNum);


	// Decodes and appends to sb all text currently accumulated in the normal receive
	// buffer for channelNum, using charset. The receive buffer is cleared after the
	// text is returned.
	// 
	// For a valid retained channel with no buffered data, an empty string is returned
	// successfully. For an invalid or no-longer-retained channel, the string-returning
	// API reports failure. After channel completion, retrieve text immediately before
	// unrelated SSH operations can discard the completed channel record.
	// 
	// When StripColorCodes[1] is true, ANSI SGR color/style sequences are removed
	// from the returned normal text. Other terminal-control sequences can remain.
	// 
	// See Supported Charsets[2].
	// 
	// 
	// References:
	// [1] #StripColorCodes
	// [2] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool GetReceivedSb(int channelNum, const char *charset, CkStringBuilder &sb);


	// Returns all bytes currently accumulated in the separate stderr buffer for
	// channelNum, then clears that buffer.
	// 
	// For a valid retained channel with no separate stderr, the method succeeds and
	// returns a zero-length byte array. For an invalid or no-longer-retained channel,
	// it fails. Retrieve stderr immediately after completion, before another SSH
	// operation can discard the completed channel record.
	// 
	// When StderrToStdout[1] is true - the default - stderr is merged into the
	// normal receive buffer instead. A PTY normally combines stdout and stderr before
	// SSH transports them, regardless of this property.
	// 
	// References:
	// [1] #StderrToStdout
	bool GetReceivedStderr(int channelNum, CkByteData &outBytes);


	// Decodes and returns all text currently accumulated in the separate stderr buffer
	// for channelNum, using charset. The stderr buffer is cleared after the text is
	// returned.
	// 
	// For a valid retained channel with no separate stderr, an empty string is
	// returned successfully. For an invalid or no-longer-retained channel, the
	// string-returning API reports failure. Retrieve stderr immediately after
	// completion, before another SSH operation can discard the completed channel
	// record.
	// 
	// StripColorCodes[1] is not applied to stderr text. Text getters do not retain an
	// incomplete multibyte sequence for a later call; use raw bytes and a stateful
	// application decoder for streaming multibyte data.
	// 
	// See Supported Charsets[2].
	// 
	// 
	// References:
	// [1] #StripColorCodes
	// [2] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool GetReceivedStderrText(int channelNum, const char *charset, CkString &outStr);

	// Decodes and returns all text currently accumulated in the separate stderr buffer
	// for channelNum, using charset. The stderr buffer is cleared after the text is
	// returned.
	// 
	// For a valid retained channel with no separate stderr, an empty string is
	// returned successfully. For an invalid or no-longer-retained channel, the
	// string-returning API reports failure. Retrieve stderr immediately after
	// completion, before another SSH operation can discard the completed channel
	// record.
	// 
	// StripColorCodes[1] is not applied to stderr text. Text getters do not retain an
	// incomplete multibyte sequence for a later call; use raw bytes and a stateful
	// application decoder for streaming multibyte data.
	// 
	// See Supported Charsets[2].
	// 
	// 
	// References:
	// [1] #StripColorCodes
	// [2] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	const char *getReceivedStderrText(int channelNum, const char *charset);
	// Decodes and returns all text currently accumulated in the separate stderr buffer
	// for channelNum, using charset. The stderr buffer is cleared after the text is
	// returned.
	// 
	// For a valid retained channel with no separate stderr, an empty string is
	// returned successfully. For an invalid or no-longer-retained channel, the
	// string-returning API reports failure. Retrieve stderr immediately after
	// completion, before another SSH operation can discard the completed channel
	// record.
	// 
	// StripColorCodes[1] is not applied to stderr text. Text getters do not retain an
	// incomplete multibyte sequence for a later call; use raw bytes and a stateful
	// application decoder for streaming multibyte data.
	// 
	// See Supported Charsets[2].
	// 
	// 
	// References:
	// [1] #StripColorCodes
	// [2] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	const char *receivedStderrText(int channelNum, const char *charset);


	// Decodes and returns all text currently accumulated in the normal receive buffer
	// for channelNum, using charset. The receive buffer is cleared after the text is
	// returned.
	// 
	// For a valid retained channel with no buffered data, an empty string is returned
	// successfully. For an invalid or no-longer-retained channel, the string-returning
	// API reports failure. After channel completion, retrieve text immediately before
	// unrelated SSH operations can discard the completed channel record.
	// 
	// When StripColorCodes[1] is true, ANSI SGR color/style sequences are removed
	// from the returned normal text. Other terminal-control sequences can remain.
	// 
	// See Supported Charsets[2].
	// 
	// 
	// References:
	// [1] #StripColorCodes
	// [2] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	bool GetReceivedText(int channelNum, const char *charset, CkString &outStr);

	// Decodes and returns all text currently accumulated in the normal receive buffer
	// for channelNum, using charset. The receive buffer is cleared after the text is
	// returned.
	// 
	// For a valid retained channel with no buffered data, an empty string is returned
	// successfully. For an invalid or no-longer-retained channel, the string-returning
	// API reports failure. After channel completion, retrieve text immediately before
	// unrelated SSH operations can discard the completed channel record.
	// 
	// When StripColorCodes[1] is true, ANSI SGR color/style sequences are removed
	// from the returned normal text. Other terminal-control sequences can remain.
	// 
	// See Supported Charsets[2].
	// 
	// 
	// References:
	// [1] #StripColorCodes
	// [2] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	const char *getReceivedText(int channelNum, const char *charset);
	// Decodes and returns all text currently accumulated in the normal receive buffer
	// for channelNum, using charset. The receive buffer is cleared after the text is
	// returned.
	// 
	// For a valid retained channel with no buffered data, an empty string is returned
	// successfully. For an invalid or no-longer-retained channel, the string-returning
	// API reports failure. After channel completion, retrieve text immediately before
	// unrelated SSH operations can discard the completed channel record.
	// 
	// When StripColorCodes[1] is true, ANSI SGR color/style sequences are removed
	// from the returned normal text. Other terminal-control sequences can remain.
	// 
	// See Supported Charsets[2].
	// 
	// 
	// References:
	// [1] #StripColorCodes
	// [2] https://www.chilkatsoft.com/charsets_supported_by_chilkat.asp
	const char *receivedText(int channelNum, const char *charset);


	// Decodes text in the normal receive buffer for channelNum and performs a literal,
	// case-sensitive search for substr using charset.
	// 
	// If found, the method returns and removes everything through and including the
	// first occurrence. If not found, it returns an empty string successfully and
	// leaves the buffer unchanged. An empty substr is invalid and causes failure
	// without consuming the buffer.
	// 
	// When StripColorCodes[1] is true, SGR sequences are removed for both the
	// substring search and the returned value. The method consumes the corresponding
	// original raw bytes, including the stripped escape sequences.
	// 
	// As with other destructive text getters, incomplete multibyte sequences are not
	// retained as decoder state for a later call. Retrieve completed-channel text
	// before unrelated SSH operations can remove the retained channel record.
	// 
	// 
	// References:
	// [1] #StripColorCodes
	bool GetReceivedTextS(int channelNum, const char *substr, const char *charset, CkString &outStr);

	// Decodes text in the normal receive buffer for channelNum and performs a literal,
	// case-sensitive search for substr using charset.
	// 
	// If found, the method returns and removes everything through and including the
	// first occurrence. If not found, it returns an empty string successfully and
	// leaves the buffer unchanged. An empty substr is invalid and causes failure
	// without consuming the buffer.
	// 
	// When StripColorCodes[1] is true, SGR sequences are removed for both the
	// substring search and the returned value. The method consumes the corresponding
	// original raw bytes, including the stripped escape sequences.
	// 
	// As with other destructive text getters, incomplete multibyte sequences are not
	// retained as decoder state for a later call. Retrieve completed-channel text
	// before unrelated SSH operations can remove the retained channel record.
	// 
	// 
	// References:
	// [1] #StripColorCodes
	const char *getReceivedTextS(int channelNum, const char *substr, const char *charset);
	// Decodes text in the normal receive buffer for channelNum and performs a literal,
	// case-sensitive search for substr using charset.
	// 
	// If found, the method returns and removes everything through and including the
	// first occurrence. If not found, it returns an empty string successfully and
	// leaves the buffer unchanged. An empty substr is invalid and causes failure
	// without consuming the buffer.
	// 
	// When StripColorCodes[1] is true, SGR sequences are removed for both the
	// substring search and the returned value. The method consumes the corresponding
	// original raw bytes, including the stripped escape sequences.
	// 
	// As with other destructive text getters, incomplete multibyte sequences are not
	// retained as decoder state for a later call. Retrieve completed-channel text
	// before unrelated SSH operations can remove the retained channel record.
	// 
	// 
	// References:
	// [1] #StripColorCodes
	const char *receivedTextS(int channelNum, const char *substr, const char *charset);


	// This method is deprecated. Call GetLastJsonData[1] instead.
	// 
	// Returns structured diagnostic information about the most recently called method
	// when such information is available. Authentication passwords and private-key
	// passphrases are not included.
	// 
	// 
	// References:
	// [1] #GetLastJsonData
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *LastJsonData(void);


	// Loads into this object the caller state associated with the asynchronous method
	// represented by task. This is used by generated asynchronous wrappers to recover
	// the object that initiated the task.
	// 
	bool LoadTaskCaller(CkTask &task);


	// Requests a custom SSH channel whose application-defined channel type is supplied
	// in channelType. The SSH server must implement that channel type. On success,
	// returns the channel number used by the normal channel send, receive, EOF, CLOSE,
	// and release methods.
	// 
	// Returns -1 if the server rejects the channel. In that case,
	// ChannelOpenFailCode[1] and ChannelOpenFailReason[2] contain the server-provided
	// failure information. The underlying SSH connection normally remains open,
	// CheckConnection[3] remains true, and other channels can be opened and used
	// afterward.
	// 
	// A channel-open rejection does not set DisconnectCode[4] or DisconnectReason[5]
	// unless the server also sends an SSH DISCONNECT. Object-level configuration
	// settings are unchanged.
	// 
	// 
	// References:
	// [1] #ChannelOpenFailCode
	// [2] #ChannelOpenFailReason
	// [3] #CheckConnection
	// [4] #DisconnectCode
	// [5] #DisconnectReason
	int OpenCustomChannel(const char *channelType);

	// Requests a custom SSH channel whose application-defined channel type is supplied
	// in channelType. The SSH server must implement that channel type. On success,
	// returns the channel number used by the normal channel send, receive, EOF, CLOSE,
	// and release methods.
	// 
	// Returns -1 if the server rejects the channel. In that case,
	// ChannelOpenFailCode[1] and ChannelOpenFailReason[2] contain the server-provided
	// failure information. The underlying SSH connection normally remains open,
	// CheckConnection[3] remains true, and other channels can be opened and used
	// afterward.
	// 
	// A channel-open rejection does not set DisconnectCode[4] or DisconnectReason[5]
	// unless the server also sends an SSH DISCONNECT. Object-level configuration
	// settings are unchanged.
	// 
	// 
	// References:
	// [1] #ChannelOpenFailCode
	// [2] #ChannelOpenFailReason
	// [3] #CheckConnection
	// [4] #DisconnectCode
	// [5] #DisconnectReason
	CkTask *OpenCustomChannelAsync(const char *channelType);


	// Opens a direct-tcpip channel through the SSH server to targetHostname and
	// targetPort. The target name is sent to and resolved by the SSH server, not by
	// the client computer. It must therefore be resolvable and reachable from the
	// server's network environment. A numeric IPv4 address may be supplied to avoid
	// remote DNS-name resolution.
	// 
	// Each successful call creates one independent raw TCP byte stream. Multiple
	// channels to the same target may be open concurrently. Bytes sent with
	// ChannelSend* methods are forwarded to the target, and bytes returned by the
	// target are read with ChannelRead* or ChannelReceive* methods. For example, when
	// the target is an SSH server, its SSH identification line is received as ordinary
	// channel data. The channel is enumerated with type direct-tcpip.
	// 
	// Returns the new channel number on success, or -1 if the SSH server rejects or
	// cannot establish the target connection. On server rejection, inspect
	// ChannelOpenFailCode[1] and ChannelOpenFailReason[2]. Name-resolution and
	// target-connection failures normally leave the underlying SSH connection open.
	// 
	// 
	// References:
	// [1] #ChannelOpenFailCode
	// [2] #ChannelOpenFailReason
	int OpenDirectTcpIpChannel(const char *targetHostname, int targetPort);

	// Opens a direct-tcpip channel through the SSH server to targetHostname and
	// targetPort. The target name is sent to and resolved by the SSH server, not by
	// the client computer. It must therefore be resolvable and reachable from the
	// server's network environment. A numeric IPv4 address may be supplied to avoid
	// remote DNS-name resolution.
	// 
	// Each successful call creates one independent raw TCP byte stream. Multiple
	// channels to the same target may be open concurrently. Bytes sent with
	// ChannelSend* methods are forwarded to the target, and bytes returned by the
	// target are read with ChannelRead* or ChannelReceive* methods. For example, when
	// the target is an SSH server, its SSH identification line is received as ordinary
	// channel data. The channel is enumerated with type direct-tcpip.
	// 
	// Returns the new channel number on success, or -1 if the SSH server rejects or
	// cannot establish the target connection. On server rejection, inspect
	// ChannelOpenFailCode[1] and ChannelOpenFailReason[2]. Name-resolution and
	// target-connection failures normally leave the underlying SSH connection open.
	// 
	// 
	// References:
	// [1] #ChannelOpenFailCode
	// [2] #ChannelOpenFailReason
	CkTask *OpenDirectTcpIpChannelAsync(const char *targetHostname, int targetPort);


	// Opens a new SSH session channel. The SSH transport must already be connected and
	// user authentication must have completed successfully. Calling this method before
	// Connect[1] or before authentication returns -1. A failure caused by missing
	// authentication does not by itself close the SSH transport.
	// 
	// Opening a session channel does not start a shell, execute a command, or start a
	// subsystem. After opening the channel, send the appropriate session request.
	// 
	// 1. Connect
	// 2. Authenticate
	// 3. OpenSessionChannel
	// 4. Optionally send preparatory requests such as SendReqPty or SendReqSetEnv
	// 5. Send one primary request: SendReqExec, SendReqShell, or SendReqSubsystem
	// 
	// Returns an opaque channel number on success, or -1 on failure. Do not assume
	// channel numbers start at 0, are sequential, or are reused in a predictable way.
	// 
	// 
	// References:
	// [1] #Connect
	int OpenSessionChannel(void);

	// Opens a new SSH session channel. The SSH transport must already be connected and
	// user authentication must have completed successfully. Calling this method before
	// Connect[1] or before authentication returns -1. A failure caused by missing
	// authentication does not by itself close the SSH transport.
	// 
	// Opening a session channel does not start a shell, execute a command, or start a
	// subsystem. After opening the channel, send the appropriate session request.
	// 
	// 1. Connect
	// 2. Authenticate
	// 3. OpenSessionChannel
	// 4. Optionally send preparatory requests such as SendReqPty or SendReqSetEnv
	// 5. Send one primary request: SendReqExec, SendReqShell, or SendReqSubsystem
	// 
	// Returns an opaque channel number on success, or -1 on failure. Do not assume
	// channel numbers start at 0, are sequential, or are reused in a predictable way.
	// 
	// 
	// References:
	// [1] #Connect
	CkTask *OpenSessionChannelAsync(void);


	// Returns the text currently buffered in the normal receive buffer for channelNum,
	// decoded using charset, without removing any bytes.
	// 
	// For a valid empty buffer, it returns an empty string successfully.
	// StripColorCodes[1] is not applied; terminal escape sequences are returned as
	// buffered. Because the operation is nondestructive, it is useful for checking
	// whether a complete multibyte sequence or logical delimiter has arrived before
	// calling a destructive text getter.
	// 
	// 
	// References:
	// [1] #StripColorCodes
	bool PeekReceivedText(int channelNum, const char *charset, CkString &outStr);

	// Returns the text currently buffered in the normal receive buffer for channelNum,
	// decoded using charset, without removing any bytes.
	// 
	// For a valid empty buffer, it returns an empty string successfully.
	// StripColorCodes[1] is not applied; terminal escape sequences are returned as
	// buffered. Because the operation is nondestructive, it is useful for checking
	// whether a complete multibyte sequence or logical delimiter has arrived before
	// calling a destructive text getter.
	// 
	// 
	// References:
	// [1] #StripColorCodes
	const char *peekReceivedText(int channelNum, const char *charset);

	// Waits up to pollTimeoutMs milliseconds for any command previously started by
	// QuickCmdSend[1] to complete. A value of 0 performs a nonblocking check. Manually
	// opened exec channels are not returned by this method.
	// 
	// +----------+-------------------------------------------------------------------+
	// |  Return  |                              Meaning                              |
	// |  value   |                                                                   |
	// +==========+===================================================================+
	// | >= 0     | The channel number of a completed quick command. Each completed   |
	// |          | channel is returned only once.                                    |
	// +----------+-------------------------------------------------------------------+
	// | -1       | Pending quick commands exist, but none completed before the       |
	// |          | timeout.                                                          |
	// +----------+-------------------------------------------------------------------+
	// | -2       | No quick commands remain to be checked, or an error occurred such |
	// |          | as loss of the SSH connection. Examine LastErrorText and the      |
	// |          | connection state when the distinction matters.                    |
	// +----------+-------------------------------------------------------------------+
	// 
	// After a channel number is returned, retrieve its stdout, stderr, and exit status
	// with the normal channel methods. The channel is not returned again on the next
	// check, even before ChannelRelease[2] is called.
	// 
	// 
	// References:
	// [1] #QuickCmdSend
	// [2] #ChannelRelease
	int QuickCmdCheck(int pollTimeoutMs);

	// Waits up to pollTimeoutMs milliseconds for any command previously started by
	// QuickCmdSend[1] to complete. A value of 0 performs a nonblocking check. Manually
	// opened exec channels are not returned by this method.
	// 
	// +----------+-------------------------------------------------------------------+
	// |  Return  |                              Meaning                              |
	// |  value   |                                                                   |
	// +==========+===================================================================+
	// | >= 0     | The channel number of a completed quick command. Each completed   |
	// |          | channel is returned only once.                                    |
	// +----------+-------------------------------------------------------------------+
	// | -1       | Pending quick commands exist, but none completed before the       |
	// |          | timeout.                                                          |
	// +----------+-------------------------------------------------------------------+
	// | -2       | No quick commands remain to be checked, or an error occurred such |
	// |          | as loss of the SSH connection. Examine LastErrorText and the      |
	// |          | connection state when the distinction matters.                    |
	// +----------+-------------------------------------------------------------------+
	// 
	// After a channel number is returned, retrieve its stdout, stderr, and exit status
	// with the normal channel methods. The channel is not returned again on the next
	// check, even before ChannelRelease[2] is called.
	// 
	// 
	// References:
	// [1] #QuickCmdSend
	// [2] #ChannelRelease
	CkTask *QuickCmdCheckAsync(int pollTimeoutMs);


	// Starts a remote command and immediately returns its channel number, allowing
	// multiple commands to run concurrently on the same authenticated SSH connection.
	// Internally, this method opens a session channel and sends an exec request.
	// 
	// command is encoded according to ReqExecCharset[1]. The returned channel is
	// visible through NumOpenChannels[2], GetChannelNumber[3], and GetChannelType[4],
	// and remains owned by the application. Use QuickCmdCheck[5] to detect completion,
	// retrieve output and exit status with the normal channel methods, and then call
	// ChannelRelease[6]. Returns -1 on failure.
	// 
	// 
	// References:
	// [1] #ReqExecCharset
	// [2] #NumOpenChannels
	// [3] #GetChannelNumber
	// [4] #GetChannelType
	// [5] #QuickCmdCheck
	// [6] #ChannelRelease
	int QuickCmdSend(const char *command);

	// Starts a remote command and immediately returns its channel number, allowing
	// multiple commands to run concurrently on the same authenticated SSH connection.
	// Internally, this method opens a session channel and sends an exec request.
	// 
	// command is encoded according to ReqExecCharset[1]. The returned channel is
	// visible through NumOpenChannels[2], GetChannelNumber[3], and GetChannelType[4],
	// and remains owned by the application. Use QuickCmdCheck[5] to detect completion,
	// retrieve output and exit status with the normal channel methods, and then call
	// ChannelRelease[6]. Returns -1 on failure.
	// 
	// 
	// References:
	// [1] #ReqExecCharset
	// [2] #NumOpenChannels
	// [3] #GetChannelNumber
	// [4] #GetChannelType
	// [5] #QuickCmdCheck
	// [6] #ChannelRelease
	CkTask *QuickCmdSendAsync(const char *command);


	// Executes one noninteractive remote command and returns the stdout collected as
	// text. Internally, this method opens a session channel, sends an exec request,
	// receives the command output through EOF, and decodes the stdout using charset.
	// ReqExecCharset[1] controls the encoding used to send command.
	// 
	// The final SSH channel CLOSE can still be pending when this method returns. The
	// internal channel may therefore remain temporarily visible in NumOpenChannels[2],
	// often with EOF already received but CLOSE not yet processed. Simply sleeping
	// does not process pending SSH messages. A later SSH operation, such as
	// WaitForChannelMessage[3] or another QuickCommand, processes the final close and
	// removes the previous channel.
	// 
	// Remote exit status is not reflected in the return value: A command that exits
	// nonzero may still return its stdout normally. An empty string can mean a
	// successful command produced no stdout, or that a failed command wrote only to
	// stderr. When StderrToStdout[4] is false, separately received stderr is not
	// included in the returned text. Exit status may or may not have arrived at the
	// instant this method returns.
	// 
	// Use QuickCmdSend[5] / QuickCmdCheck[6] or the explicit channel workflow when the
	// application must reliably inspect stderr, provide stdin, or obtain the remote
	// exit status. Do not depend on the temporary internal channel created by this
	// convenience method.
	// 
	// 
	// References:
	// [1] #ReqExecCharset
	// [2] #NumOpenChannels
	// [3] #WaitForChannelMessage
	// [4] #StderrToStdout
	// [5] #QuickCmdSend
	// [6] #QuickCmdCheck
	bool QuickCommand(const char *command, const char *charset, CkString &outStr);

	// Executes one noninteractive remote command and returns the stdout collected as
	// text. Internally, this method opens a session channel, sends an exec request,
	// receives the command output through EOF, and decodes the stdout using charset.
	// ReqExecCharset[1] controls the encoding used to send command.
	// 
	// The final SSH channel CLOSE can still be pending when this method returns. The
	// internal channel may therefore remain temporarily visible in NumOpenChannels[2],
	// often with EOF already received but CLOSE not yet processed. Simply sleeping
	// does not process pending SSH messages. A later SSH operation, such as
	// WaitForChannelMessage[3] or another QuickCommand, processes the final close and
	// removes the previous channel.
	// 
	// Remote exit status is not reflected in the return value: A command that exits
	// nonzero may still return its stdout normally. An empty string can mean a
	// successful command produced no stdout, or that a failed command wrote only to
	// stderr. When StderrToStdout[4] is false, separately received stderr is not
	// included in the returned text. Exit status may or may not have arrived at the
	// instant this method returns.
	// 
	// Use QuickCmdSend[5] / QuickCmdCheck[6] or the explicit channel workflow when the
	// application must reliably inspect stderr, provide stdin, or obtain the remote
	// exit status. Do not depend on the temporary internal channel created by this
	// convenience method.
	// 
	// 
	// References:
	// [1] #ReqExecCharset
	// [2] #NumOpenChannels
	// [3] #WaitForChannelMessage
	// [4] #StderrToStdout
	// [5] #QuickCmdSend
	// [6] #QuickCmdCheck
	const char *quickCommand(const char *command, const char *charset);
	// Executes one noninteractive remote command and returns the stdout collected as
	// text. Internally, this method opens a session channel, sends an exec request,
	// receives the command output through EOF, and decodes the stdout using charset.
	// ReqExecCharset[1] controls the encoding used to send command.
	// 
	// The final SSH channel CLOSE can still be pending when this method returns. The
	// internal channel may therefore remain temporarily visible in NumOpenChannels[2],
	// often with EOF already received but CLOSE not yet processed. Simply sleeping
	// does not process pending SSH messages. A later SSH operation, such as
	// WaitForChannelMessage[3] or another QuickCommand, processes the final close and
	// removes the previous channel.
	// 
	// Remote exit status is not reflected in the return value: A command that exits
	// nonzero may still return its stdout normally. An empty string can mean a
	// successful command produced no stdout, or that a failed command wrote only to
	// stderr. When StderrToStdout[4] is false, separately received stderr is not
	// included in the returned text. Exit status may or may not have arrived at the
	// instant this method returns.
	// 
	// Use QuickCmdSend[5] / QuickCmdCheck[6] or the explicit channel workflow when the
	// application must reliably inspect stderr, provide stdin, or obtain the remote
	// exit status. Do not depend on the temporary internal channel created by this
	// convenience method.
	// 
	// 
	// References:
	// [1] #ReqExecCharset
	// [2] #NumOpenChannels
	// [3] #WaitForChannelMessage
	// [4] #StderrToStdout
	// [5] #QuickCmdSend
	// [6] #QuickCmdCheck
	CkTask *QuickCommandAsync(const char *command, const char *charset);


	// Starts a remote shell using the simplified sequence OpenSessionChannel →
	// SendReqPty → SendReqShell. The default PTY size is 80 columns by 24 rows.
	// Returns the open shell channel number on success, or -1 on failure.
	// 
	// The method returns after the shell request is accepted; it does not wait for or
	// consume the initial login text or shell prompt. Use the returned channel with
	// the normal send and receive methods, then allow the shell to close and call
	// ChannelRelease[1] after retrieving the required output and exit information.
	// 
	// 
	// References:
	// [1] #ChannelRelease
	int QuickShell(void);

	// Starts a remote shell using the simplified sequence OpenSessionChannel →
	// SendReqPty → SendReqShell. The default PTY size is 80 columns by 24 rows.
	// Returns the open shell channel number on success, or -1 on failure.
	// 
	// The method returns after the shell request is accepted; it does not wait for or
	// consume the initial login text or shell prompt. Use the returned channel with
	// the normal send and receive methods, then allow the shell to close and call
	// ChannelRelease[1] after retrieving the required output and exit information.
	// 
	// 
	// References:
	// [1] #ChannelRelease
	CkTask *QuickShellAsync(void);


	// Initiates SSH key re-exchange and waits for it to complete. Either client or
	// server may initiate rekeying at any time.
	// 
	// RFC 4253 recommends changing keys after approximately one gigabyte of
	// transferred data or one hour of connection time, whichever occurs first. In
	// normal use, servers initiate rekeying as needed and Chilkat handles it
	// transparently.
	// 
	bool ReKey(void);

	// Initiates SSH key re-exchange and waits for it to complete. Either client or
	// server may initiate rekeying at any time.
	// 
	// RFC 4253 recommends changing keys after approximately one gigabyte of
	// transferred data or one hour of connection time, whichever occurs first. In
	// normal use, servers initiate rekeying as needed and Chilkat handles it
	// transparently.
	// 
	CkTask *ReKeyAsync(void);


	// Sends an SSH IGNORE message. The server does not reply, but a successful send
	// helps verify that the connection is still writable. No channel is required.
	// 
	bool SendIgnore(void);

	// Sends an SSH IGNORE message. The server does not reply, but a successful send
	// helps verify that the connection is still writable. No channel is required.
	// 
	CkTask *SendIgnoreAsync(void);


	// Requests execution of commandLine on the session channel identified by
	// channelNum. The command text is sent using ReqExecCharset[1].
	// 
	// Request acceptance is not command success: A true return means the SSH server
	// accepted the exec request. The remote command can still fail, be missing, or
	// exit with a nonzero status. Receive the channel to completion, then use
	// ChannelReceivedExitStatus[2] and GetChannelExitStatus[3] to determine the remote
	// process result.
	// 
	// An exec channel is used for one command. Open a new session channel for each
	// independent command. A second exec request on the same channel is normally
	// rejected, while the first command continues running.
	// 
	// After the request is accepted, data sent with ChannelSendData[4] or
	// ChannelSendString[5] becomes the command’s standard input. Call
	// ChannelSendEof[6] when no more input will be sent; stdout and stderr may still
	// be received afterward.
	// 
	// 
	// References:
	// [1] #ReqExecCharset
	// [2] #ChannelReceivedExitStatus
	// [3] #GetChannelExitStatus
	// [4] #ChannelSendData
	// [5] #ChannelSendString
	// [6] #ChannelSendEof
	bool SendReqExec(int channelNum, const char *commandLine);

	// Requests execution of commandLine on the session channel identified by
	// channelNum. The command text is sent using ReqExecCharset[1].
	// 
	// Request acceptance is not command success: A true return means the SSH server
	// accepted the exec request. The remote command can still fail, be missing, or
	// exit with a nonzero status. Receive the channel to completion, then use
	// ChannelReceivedExitStatus[2] and GetChannelExitStatus[3] to determine the remote
	// process result.
	// 
	// An exec channel is used for one command. Open a new session channel for each
	// independent command. A second exec request on the same channel is normally
	// rejected, while the first command continues running.
	// 
	// After the request is accepted, data sent with ChannelSendData[4] or
	// ChannelSendString[5] becomes the command’s standard input. Call
	// ChannelSendEof[6] when no more input will be sent; stdout and stderr may still
	// be received afterward.
	// 
	// 
	// References:
	// [1] #ReqExecCharset
	// [2] #ChannelReceivedExitStatus
	// [3] #GetChannelExitStatus
	// [4] #ChannelSendData
	// [5] #ChannelSendString
	// [6] #ChannelSendEof
	CkTask *SendReqExecAsync(int channelNum, const char *commandLine);


	// Recommendation for automation: Do not request a pseudo-terminal unless the
	// remote command or application specifically requires terminal behavior. Most
	// automated SSH applications should operate without a PTY so that stdout and
	// stderr remain clean, predictable, and easier to parse.
	// 
	// Requests a pseudo-terminal for session channel channelNum. The request must be
	// sent before the primary SendReqExec[1] or SendReqShell[2] request.
	// 
	// The termType argument identifies the terminal type and normally becomes the
	// remote session's TERM environment variable. The server and remote applications
	// use this value to look up terminal capabilities in their terminfo or termcap
	// database. The character and pixel dimensions describe the terminal window.
	// Terminal modes previously added with SetTtyMode[3] are included in the request.
	// 
	// When no PTY is requested, the remote shell or command normally sees standard
	// input and output as pipes rather than a terminal. Shells and programs commonly
	// detect this using a check such as isatty() and operate in non-interactive mode.
	// In that mode, the server normally does not send a shell prompt, does not echo
	// submitted commands, and avoids terminal-oriented output such as ANSI color and
	// cursor-control sequences. Shell startup behavior can vary according to the
	// remote shell and its configuration.
	// 
	// +--------------+---------------------------------------------------------------+
	// | Request type |                       Typical behavior                        |
	// |  without a   |                                                               |
	// |     PTY      |                                                               |
	// +==============+===============================================================+
	// | exec         | The server runs the requested command, returns its stdout and |
	// |              | stderr, supplies EOF/CLOSE and usually an exit status, and    |
	// |              | then ends the channel. No command prompt is included.         |
	// +--------------+---------------------------------------------------------------+
	// | shell        | The application may stream multiple newline-terminated        |
	// |              | commands through the channel as through a raw pipe. The       |
	// |              | server normally returns only command output, without prompts  |
	// |              | or echoed input.                                              |
	// +--------------+---------------------------------------------------------------+
	// 
	// Without a prompt, an application must not wait for text such as user@host:~$ to
	// determine when a command is finished. For an exec request, use the SSH protocol
	// state: receive through channel EOF/CLOSE and inspect the exit status with
	// ChannelReceivedExitStatus[4] and GetChannelExitStatus[5]. For a long-lived shell
	// channel, append a unique sentinel to each submitted command and receive until
	// that sentinel is found.
	// 
	// If a PTY is required for automation: Prefer dumb for termType unless the remote
	// program genuinely needs a more capable terminal. A dumb terminal advertises
	// little more than sequential text input and output, so well-behaved programs
	// generally avoid color, cursor movement, screen clearing, and other
	// terminal-control sequences. This is often the best choice for commands such as
	// sudo prompts or network-device CLIs that require a PTY but whose output still
	// needs to be parsed.
	// 
	// +------------------+-----------------------------------------------------------+
	// |  Terminal type   |                      When to use it                       |
	// +==================+===========================================================+
	// | dumb             | Recommended when a PTY is mandatory but plain, sequential |
	// |                  | text is preferred. Full-screen programs such as vim , top |
	// |                  | , or htop may refuse to run or work poorly because cursor |
	// |                  | addressing is unavailable.                                |
	// +------------------+-----------------------------------------------------------+
	// | xterm or         | Use only when the client is prepared to handle a capable  |
	// | xterm-256color   | terminal stream containing cursor movement,               |
	// |                  | screen-control sequences, text attributes, and possibly   |
	// |                  | color. Chilkat does not emulate an xterm terminal.        |
	// +------------------+-----------------------------------------------------------+
	// | vt100 or vt220   | Useful for compatibility with older terminal-oriented     |
	// |                  | systems or devices. These still support cursor movement   |
	// |                  | and control sequences.                                    |
	// +------------------+-----------------------------------------------------------+
	// | linux or console | Describe operating-system console terminals and should be |
	// |                  | used only when the application behaves like that console. |
	// +------------------+-----------------------------------------------------------+
	// | screen or tmux   | Describe terminal-multiplexer environments and are        |
	// |                  | appropriate only when their capabilities are actually     |
	// |                  | expected.                                                 |
	// +------------------+-----------------------------------------------------------+
	// 
	// The terminal type is a declaration of capabilities, not a filter applied by
	// Chilkat. A remote application can ignore TERM, force color, or emit escape
	// sequences regardless of the selected type. If needed, also try sending
	// environment requests such as NO_COLOR=1 with SendReqSetEnv[6]. Servers commonly
	// restrict client-supplied environment variables, so setting termType to dumb in
	// the PTY request is generally more reliable than attempting to set TERM
	// separately.
	// 
	// A PTY changes remote-process behavior. Programs may display prompts, echo input,
	// enable line buffering, execute interactive startup logic, emit terminal-control
	// sequences, or alter formatting. Chilkat does not perform terminal emulation. A
	// PTY also normally combines the remote process's stdout and stderr into one
	// terminal stream, so StderrToStdout[7] cannot preserve separate stderr on such a
	// channel.
	// 
	// Only one PTY request per channel: Do not call this method a second time for the
	// same channel. Some SSH servers treat a duplicate PTY request as a protocol error
	// and disconnect the entire SSH session.
	// Recommended automation workflow:
	// 1. OpenSessionChannel
	// 2. Do not call SendReqPty unless terminal behavior is required
	// 3. If a PTY is required but plain text is preferred, use termType = "dumb"
	// 4. SendReqExec, or SendReqShell when multiple commands are required
	// 5. Receive output and use SSH channel state, exit status, or a unique sentinel to detect completion
	// 
	// References:
	// [1] #SendReqExec
	// [2] #SendReqShell
	// [3] #SetTtyMode
	// [4] #ChannelReceivedExitStatus
	// [5] #GetChannelExitStatus
	// [6] #SendReqSetEnv
	// [7] #StderrToStdout
	bool SendReqPty(int channelNum, const char *termType, int widthInChars, int heightInChars, int widthInPixels, int heightInPixels);

	// Recommendation for automation: Do not request a pseudo-terminal unless the
	// remote command or application specifically requires terminal behavior. Most
	// automated SSH applications should operate without a PTY so that stdout and
	// stderr remain clean, predictable, and easier to parse.
	// 
	// Requests a pseudo-terminal for session channel channelNum. The request must be
	// sent before the primary SendReqExec[1] or SendReqShell[2] request.
	// 
	// The termType argument identifies the terminal type and normally becomes the
	// remote session's TERM environment variable. The server and remote applications
	// use this value to look up terminal capabilities in their terminfo or termcap
	// database. The character and pixel dimensions describe the terminal window.
	// Terminal modes previously added with SetTtyMode[3] are included in the request.
	// 
	// When no PTY is requested, the remote shell or command normally sees standard
	// input and output as pipes rather than a terminal. Shells and programs commonly
	// detect this using a check such as isatty() and operate in non-interactive mode.
	// In that mode, the server normally does not send a shell prompt, does not echo
	// submitted commands, and avoids terminal-oriented output such as ANSI color and
	// cursor-control sequences. Shell startup behavior can vary according to the
	// remote shell and its configuration.
	// 
	// +--------------+---------------------------------------------------------------+
	// | Request type |                       Typical behavior                        |
	// |  without a   |                                                               |
	// |     PTY      |                                                               |
	// +==============+===============================================================+
	// | exec         | The server runs the requested command, returns its stdout and |
	// |              | stderr, supplies EOF/CLOSE and usually an exit status, and    |
	// |              | then ends the channel. No command prompt is included.         |
	// +--------------+---------------------------------------------------------------+
	// | shell        | The application may stream multiple newline-terminated        |
	// |              | commands through the channel as through a raw pipe. The       |
	// |              | server normally returns only command output, without prompts  |
	// |              | or echoed input.                                              |
	// +--------------+---------------------------------------------------------------+
	// 
	// Without a prompt, an application must not wait for text such as user@host:~$ to
	// determine when a command is finished. For an exec request, use the SSH protocol
	// state: receive through channel EOF/CLOSE and inspect the exit status with
	// ChannelReceivedExitStatus[4] and GetChannelExitStatus[5]. For a long-lived shell
	// channel, append a unique sentinel to each submitted command and receive until
	// that sentinel is found.
	// 
	// If a PTY is required for automation: Prefer dumb for termType unless the remote
	// program genuinely needs a more capable terminal. A dumb terminal advertises
	// little more than sequential text input and output, so well-behaved programs
	// generally avoid color, cursor movement, screen clearing, and other
	// terminal-control sequences. This is often the best choice for commands such as
	// sudo prompts or network-device CLIs that require a PTY but whose output still
	// needs to be parsed.
	// 
	// +------------------+-----------------------------------------------------------+
	// |  Terminal type   |                      When to use it                       |
	// +==================+===========================================================+
	// | dumb             | Recommended when a PTY is mandatory but plain, sequential |
	// |                  | text is preferred. Full-screen programs such as vim , top |
	// |                  | , or htop may refuse to run or work poorly because cursor |
	// |                  | addressing is unavailable.                                |
	// +------------------+-----------------------------------------------------------+
	// | xterm or         | Use only when the client is prepared to handle a capable  |
	// | xterm-256color   | terminal stream containing cursor movement,               |
	// |                  | screen-control sequences, text attributes, and possibly   |
	// |                  | color. Chilkat does not emulate an xterm terminal.        |
	// +------------------+-----------------------------------------------------------+
	// | vt100 or vt220   | Useful for compatibility with older terminal-oriented     |
	// |                  | systems or devices. These still support cursor movement   |
	// |                  | and control sequences.                                    |
	// +------------------+-----------------------------------------------------------+
	// | linux or console | Describe operating-system console terminals and should be |
	// |                  | used only when the application behaves like that console. |
	// +------------------+-----------------------------------------------------------+
	// | screen or tmux   | Describe terminal-multiplexer environments and are        |
	// |                  | appropriate only when their capabilities are actually     |
	// |                  | expected.                                                 |
	// +------------------+-----------------------------------------------------------+
	// 
	// The terminal type is a declaration of capabilities, not a filter applied by
	// Chilkat. A remote application can ignore TERM, force color, or emit escape
	// sequences regardless of the selected type. If needed, also try sending
	// environment requests such as NO_COLOR=1 with SendReqSetEnv[6]. Servers commonly
	// restrict client-supplied environment variables, so setting termType to dumb in
	// the PTY request is generally more reliable than attempting to set TERM
	// separately.
	// 
	// A PTY changes remote-process behavior. Programs may display prompts, echo input,
	// enable line buffering, execute interactive startup logic, emit terminal-control
	// sequences, or alter formatting. Chilkat does not perform terminal emulation. A
	// PTY also normally combines the remote process's stdout and stderr into one
	// terminal stream, so StderrToStdout[7] cannot preserve separate stderr on such a
	// channel.
	// 
	// Only one PTY request per channel: Do not call this method a second time for the
	// same channel. Some SSH servers treat a duplicate PTY request as a protocol error
	// and disconnect the entire SSH session.
	// Recommended automation workflow:
	// 1. OpenSessionChannel
	// 2. Do not call SendReqPty unless terminal behavior is required
	// 3. If a PTY is required but plain text is preferred, use termType = "dumb"
	// 4. SendReqExec, or SendReqShell when multiple commands are required
	// 5. Receive output and use SSH channel state, exit status, or a unique sentinel to detect completion
	// 
	// References:
	// [1] #SendReqExec
	// [2] #SendReqShell
	// [3] #SetTtyMode
	// [4] #ChannelReceivedExitStatus
	// [5] #GetChannelExitStatus
	// [6] #SendReqSetEnv
	// [7] #StderrToStdout
	CkTask *SendReqPtyAsync(int channelNum, const char *termType, int widthInChars, int heightInChars, int widthInPixels, int heightInPixels);


	// Requests that the server set environment variable name to value for the session
	// channel identified by channelNum. Send environment requests before the primary
	// exec, shell, or subsystem request.
	// 
	// Multiple variables may be requested. If the server accepts repeated requests for
	// the same name, the later value is used. An empty value is allowed. The server
	// controls which names are accepted; for example, an OpenSSH configuration can
	// accept selected locale variables while rejecting arbitrary names.
	// 
	// A true return means the server accepted this environment request. A rejected
	// request returns false but normally leaves the channel and SSH connection
	// usable, so the application can continue with the primary request. A request sent
	// after the primary request has started is normally rejected.
	// 
	bool SendReqSetEnv(int channelNum, const char *name, const char *value);

	// Requests that the server set environment variable name to value for the session
	// channel identified by channelNum. Send environment requests before the primary
	// exec, shell, or subsystem request.
	// 
	// Multiple variables may be requested. If the server accepts repeated requests for
	// the same name, the later value is used. An empty value is allowed. The server
	// controls which names are accepted; for example, an OpenSSH configuration can
	// accept selected locale variables while rejecting arbitrary names.
	// 
	// A true return means the server accepted this environment request. A rejected
	// request returns false but normally leaves the channel and SSH connection
	// usable, so the application can continue with the primary request. A request sent
	// after the primary request has started is normally rejected.
	// 
	CkTask *SendReqSetEnvAsync(int channelNum, const char *name, const char *value);


	// Starts a remote shell on the open session channel identified by channelNum. A
	// shell can be requested without a PTY when the server permits it. For an
	// interactive terminal session, call SendReqPty[1] first.
	// 
	// A true return means the server accepted the shell request. This method does
	// not wait for, detect, or remove a shell prompt. Login messages, prompts, command
	// echo, and command output all arrive as ordinary channel data.
	// 
	// Command boundaries are application-defined: SSH does not identify when an
	// individual shell command finishes. Use a prompt pattern only when it is reliably
	// known, or append a unique sentinel to each command and receive until that
	// sentinel is found.
	// 
	// Send commands with ChannelSendString[2] using the line ending expected by the
	// remote shell or device. Unix-like shells normally accept LF; other systems may
	// require CRLF or another terminator. Multiple commands may be sent sequentially
	// until the shell exits or the channel closes.
	// 
	// 
	// References:
	// [1] #SendReqPty
	// [2] #ChannelSendString
	bool SendReqShell(int channelNum);

	// Starts a remote shell on the open session channel identified by channelNum. A
	// shell can be requested without a PTY when the server permits it. For an
	// interactive terminal session, call SendReqPty[1] first.
	// 
	// A true return means the server accepted the shell request. This method does
	// not wait for, detect, or remove a shell prompt. Login messages, prompts, command
	// echo, and command output all arrive as ordinary channel data.
	// 
	// Command boundaries are application-defined: SSH does not identify when an
	// individual shell command finishes. Use a prompt pattern only when it is reliably
	// known, or append a unique sentinel to each command and receive until that
	// sentinel is found.
	// 
	// Send commands with ChannelSendString[2] using the line ending expected by the
	// remote shell or device. Unix-like shells normally accept LF; other systems may
	// require CRLF or another terminator. Multiple commands may be sent sequentially
	// until the shell exits or the channel closes.
	// 
	// 
	// References:
	// [1] #SendReqPty
	// [2] #ChannelSendString
	CkTask *SendReqShellAsync(int channelNum);


	// Requests delivery of signalName to the remote process running on channelNum.
	// Send the request after the exec process, shell, or subsystem has started.
	// Supported signal names are:
	// 
	// ABRT  ALRM  FPE  HUP  ILL  INT  KILL
	// PIPE  QUIT  SEGV TERM USR1 USR2
	// 
	// These are Unix-style signals and are effective only when supported by the SSH
	// server, remote operating system, and target process. A true return indicates
	// that the SSH request succeeded; the process may handle, ignore, or otherwise
	// respond to the signal according to remote behavior.
	// 
	bool SendReqSignal(int channelNum, const char *signalName);

	// Requests delivery of signalName to the remote process running on channelNum.
	// Send the request after the exec process, shell, or subsystem has started.
	// Supported signal names are:
	// 
	// ABRT  ALRM  FPE  HUP  ILL  INT  KILL
	// PIPE  QUIT  SEGV TERM USR1 USR2
	// 
	// These are Unix-style signals and are effective only when supported by the SSH
	// server, remote operating system, and target process. A true return indicates
	// that the SSH request succeeded; the process may handle, ignore, or otherwise
	// respond to the signal according to remote behavior.
	// 
	CkTask *SendReqSignalAsync(int channelNum, const char *signalName);


	// Requests the predefined subsystem named by subsystemName on session channel
	// channelNum. A true return means the server accepted the subsystem request;
	// subsequent protocol data is exchanged with the normal channel send and receive
	// methods.
	// 
	// If the server rejects the subsystem, this method returns false and the channel
	// normally remains open and reusable for another primary request such as
	// SendReqExec[1]. Once a subsystem request is accepted, do not send an exec,
	// shell, or second subsystem request on that channel.
	// 
	// For example, the SSH sftp subsystem can be started this way, but applications
	// should normally use the SFtp class instead of implementing the SFTP protocol
	// directly over an Ssh channel.
	// 
	// 
	// References:
	// [1] #SendReqExec
	bool SendReqSubsystem(int channelNum, const char *subsystemName);

	// Requests the predefined subsystem named by subsystemName on session channel
	// channelNum. A true return means the server accepted the subsystem request;
	// subsequent protocol data is exchanged with the normal channel send and receive
	// methods.
	// 
	// If the server rejects the subsystem, this method returns false and the channel
	// normally remains open and reusable for another primary request such as
	// SendReqExec[1]. Once a subsystem request is accepted, do not send an exec,
	// shell, or second subsystem request on that channel.
	// 
	// For example, the SSH sftp subsystem can be started this way, but applications
	// should normally use the SFtp class instead of implementing the SFTP protocol
	// directly over an Ssh channel.
	// 
	// 
	// References:
	// [1] #SendReqExec
	CkTask *SendReqSubsystemAsync(int channelNum, const char *subsystemName);


	// Notifies the server that the terminal dimensions changed for the PTY associated
	// with channelNum. widthInChars and heightInRows specify the character dimensions;
	// pixWidth and pixHeight specify the pixel dimensions.
	// 
	// This request may be sent after the PTY is allocated, either before or after
	// starting the shell or exec process. The tested OpenSSH servers applied the new
	// character dimensions to an active shell.
	// 
	bool SendReqWindowChange(int channelNum, int widthInChars, int heightInRows, int pixWidth, int pixHeight);

	// Notifies the server that the terminal dimensions changed for the PTY associated
	// with channelNum. widthInChars and heightInRows specify the character dimensions;
	// pixWidth and pixHeight specify the pixel dimensions.
	// 
	// This request may be sent after the PTY is allocated, either before or after
	// starting the shell or exec process. The tested OpenSSH servers applied the new
	// character dimensions to an active shell.
	// 
	CkTask *SendReqWindowChangeAsync(int channelNum, int widthInChars, int heightInRows, int pixWidth, int pixHeight);


	// Sends an SSH X11-forwarding request on the session channel in channelNum. singleConnection
	// controls whether forwarding is limited to a single connection; authProt through screenNum
	// provide the X11 authentication protocol, cookie, and screen number.
	// 
	// This low-level method exposes the SSH connection-protocol request. The
	// application is responsible for supplying appropriate X11 values and handling
	// forwarded X11 channels.
	bool SendReqX11Forwarding(int channelNum, bool singleConnection, const char *authProt, const char *authCookie, int screenNum);

	// Sends an SSH X11-forwarding request on the session channel in channelNum. singleConnection
	// controls whether forwarding is limited to a single connection; authProt through screenNum
	// provide the X11 authentication protocol, cookie, and screen number.
	// 
	// This low-level method exposes the SSH connection-protocol request. The
	// application is responsible for supplying appropriate X11 values and handling
	// forwarded X11 channels.
	CkTask *SendReqX11ForwardingAsync(int channelNum, bool singleConnection, const char *authProt, const char *authCookie, int screenNum);


	// Deprecated for practical use. This method should not be used.
	// 
	bool SendReqXonXoff(int channelNum, bool clientCanDo);

	// Deprecated for practical use. This method should not be used.
	// 
	CkTask *SendReqXonXoffAsync(int channelNum, bool clientCanDo);


	// Applies an explicit allow-list of SSH negotiation algorithms supplied in json.
	// Use this method before Connect[1] when security policy or server compatibility
	// requires precise control over accepted host-key, key-exchange, cipher, MAC, or
	// compression algorithms.
	// 
	// 
	// References:
	// [1] #Connect
	bool SetAllowedAlgorithms(CkJsonObject &json);


	// Adds or updates one TTY mode to be included in a later SendReqPty[1] request.
	// ttyName is the mode name and ttyValue is its integer value. Call this method
	// before SendReqPty, once for each mode to set. For example, SetTtyMode("ECHO", 0)
	// requests that command input not be echoed by the allocated terminal.
	// 
	// Supported mode names include:
	// 
	// VINTR VQUIT VERASE VKILL VEOF VEOL VEOL2 VSTART VSTOP
	// VSUSP VDSUSP VREPRINT VWERASE VLNEXT VFLUSH VSWTCH VSTATUS
	// VDISCARD IGNPAR PARMRK INPCK ISTRIP INLCR IGNCR ICRNL IUCLC
	// IXON IXANY IXOFF IMAXBEL ISIG ICANON XCASE ECHO ECHOE ECHOK
	// ECHONL NOFLSH TOSTOP IEXTEN ECHOCTL ECHOKE PENDIN OPOST OLCUC
	// ONLCR OCRNL ONOCR ONLRET CS7 CS8 PARENB PARODD
	// TTY_OP_ISPEED TTY_OP_OSPEED
	// Most applications do not need to set TTY modes explicitly. Use ClearTtyModes[2]
	// before a later PTY request when previously configured modes should no longer be
	// included.
	// 
	// References:
	// [1] #SendReqPty
	// [2] #ClearTtyModes
	bool SetTtyMode(const char *ttyName, int ttyValue);


	// Begins keyboard-interactive authentication for the login in login. The returned
	// XML describes the server’s prompts and whether each response should be echoed.
	// 
	// <infoRequest numPrompts="N">
	//   <name>name</name>
	//   <instruction>instructions</instruction>
	//   <prompt1 echo="1_or_0">prompt text</prompt1>
	//   ...
	// </infoRequest>
	// 
	// If authentication immediately succeeds or fails, the returned XML instead has
	// one of these forms:
	// 
	// <success>success message</success>
	// 
	// <error>error message</error>
	// 
	// Submit responses with ContinueKeyboardAuth[1].
	// 
	// 
	// References:
	// [1] #ContinueKeyboardAuth
	bool StartKeyboardAuth(const char *login, CkString &outStr);

	// Begins keyboard-interactive authentication for the login in login. The returned
	// XML describes the server’s prompts and whether each response should be echoed.
	// 
	// <infoRequest numPrompts="N">
	//   <name>name</name>
	//   <instruction>instructions</instruction>
	//   <prompt1 echo="1_or_0">prompt text</prompt1>
	//   ...
	// </infoRequest>
	// 
	// If authentication immediately succeeds or fails, the returned XML instead has
	// one of these forms:
	// 
	// <success>success message</success>
	// 
	// <error>error message</error>
	// 
	// Submit responses with ContinueKeyboardAuth[1].
	// 
	// 
	// References:
	// [1] #ContinueKeyboardAuth
	const char *startKeyboardAuth(const char *login);
	// Begins keyboard-interactive authentication for the login in login. The returned
	// XML describes the server’s prompts and whether each response should be echoed.
	// 
	// <infoRequest numPrompts="N">
	//   <name>name</name>
	//   <instruction>instructions</instruction>
	//   <prompt1 echo="1_or_0">prompt text</prompt1>
	//   ...
	// </infoRequest>
	// 
	// If authentication immediately succeeds or fails, the returned XML instead has
	// one of these forms:
	// 
	// <success>success message</success>
	// 
	// <error>error message</error>
	// 
	// Submit responses with ContinueKeyboardAuth[1].
	// 
	// 
	// References:
	// [1] #ContinueKeyboardAuth
	CkTask *StartKeyboardAuthAsync(const char *login);


	// Waits for the next SSH channel message on any channel. The pollTimeoutMs
	// argument controls this method:
	// 
	//     * 0: nonblocking check.
	//     * > 0: wait up to the specified number of milliseconds.
	//     * < 0: wait without a method-level timeout.
	// 
	// The explicit argument governs the wait; shorter values of ReadTimeoutMs[1] or
	// IdleTimeoutMs[2] do not shorten it.
	// 
	// +--------------+---------------------------------------------------------------+
	// | Return value |                            Meaning                            |
	// +==============+===============================================================+
	// | >= 0         | The channel number associated with the message that was       |
	// |              | processed.                                                    |
	// +--------------+---------------------------------------------------------------+
	// | -1           | No channel message arrived before the timeout.                |
	// +--------------+---------------------------------------------------------------+
	// | -2           | Another error occurred, such as a lost connection.            |
	// +--------------+---------------------------------------------------------------+
	// 
	// The method processes one pending channel message. Ordinary data is appended to
	// the appropriate channel buffer, and control messages can update EOF, CLOSE, and
	// exit-status state. It does not consume bytes already buffered for the
	// application.
	// 
	// A channel is not returned again merely because unread bytes remain buffered, but
	// it can be returned again for a later stderr, EOF, exit-status, or CLOSE message.
	// 
	// Drain available stdout and stderr promptly after a channel number is returned. A
	// later wait or poll that processes final closure can remove the completed channel
	// record and make its buffered data and status unavailable.
	// 
	// References:
	// [1] #ReadTimeoutMs
	// [2] #IdleTimeoutMs
	int WaitForChannelMessage(int pollTimeoutMs);

	// Waits for the next SSH channel message on any channel. The pollTimeoutMs
	// argument controls this method:
	// 
	//     * 0: nonblocking check.
	//     * > 0: wait up to the specified number of milliseconds.
	//     * < 0: wait without a method-level timeout.
	// 
	// The explicit argument governs the wait; shorter values of ReadTimeoutMs[1] or
	// IdleTimeoutMs[2] do not shorten it.
	// 
	// +--------------+---------------------------------------------------------------+
	// | Return value |                            Meaning                            |
	// +==============+===============================================================+
	// | >= 0         | The channel number associated with the message that was       |
	// |              | processed.                                                    |
	// +--------------+---------------------------------------------------------------+
	// | -1           | No channel message arrived before the timeout.                |
	// +--------------+---------------------------------------------------------------+
	// | -2           | Another error occurred, such as a lost connection.            |
	// +--------------+---------------------------------------------------------------+
	// 
	// The method processes one pending channel message. Ordinary data is appended to
	// the appropriate channel buffer, and control messages can update EOF, CLOSE, and
	// exit-status state. It does not consume bytes already buffered for the
	// application.
	// 
	// A channel is not returned again merely because unread bytes remain buffered, but
	// it can be returned again for a later stderr, EOF, exit-status, or CLOSE message.
	// 
	// Drain available stdout and stderr promptly after a channel number is returned. A
	// later wait or poll that processes final closure can remove the completed channel
	// record and make its buffered data and status unavailable.
	// 
	// References:
	// [1] #ReadTimeoutMs
	// [2] #IdleTimeoutMs
	CkTask *WaitForChannelMessageAsync(int pollTimeoutMs);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
