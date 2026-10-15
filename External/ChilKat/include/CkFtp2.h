// CkFtp2.h: interface for the CkFtp2 class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkFtp2_H
#define _CkFtp2_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkBinData;
class CkByteData;
class CkStringBuilder;
class CkDateTime;
class CkStream;
class CkJsonObject;
class CkCert;
class CkStringTable;
class CkSecureString;
class CkFtp2Progress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkFtp2
class CK_VISIBLE_PUBLIC CkFtp2  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkFtp2(const CkFtp2 &);
	CkFtp2 &operator=(const CkFtp2 &);

    public:
	CkFtp2(void);
	virtual ~CkFtp2(void);

	static CkFtp2 *createNew(void);
	static CkFtp2 *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	CkFtp2Progress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkFtp2Progress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Set to true to request cancellation of the operation currently running on this
	// object. Long-running network and file-transfer methods periodically check this
	// property; methods that complete quickly may finish before the request is
	// observed.
	// 
	// A synchronous call can be cancelled from another thread by setting this property
	// on the same object. The property is reset to false after cancellation is
	// processed, and a stale request is cleared when a later method begins.
	// 
	// Cancellation behavior: Treat this as a cancellation request, not a guarantee of
	// immediate termination. Use the method's normal return value and diagnostic
	// properties to determine the outcome.
	bool get_AbortCurrent(void);
	// Set to true to request cancellation of the operation currently running on this
	// object. Long-running network and file-transfer methods periodically check this
	// property; methods that complete quickly may finish before the request is
	// observed.
	// 
	// A synchronous call can be cancelled from another thread by setting this property
	// on the same object. The property is reset to false after cancellation is
	// processed, and a stale request is cleared when a later method begins.
	// 
	// Cancellation behavior: Treat this as a cancellation request, not a guarantee of
	// immediate termination. Use the method's normal return value and diagnostic
	// properties to determine the outcome.
	void put_AbortCurrent(bool newVal);

	// Very rarely needed today: Almost all modern FTP servers rely exclusively on the
	// USER and PASS commands for authentication and access control.
	// 
	// The ACCT command is a legacy feature from early computing systems that sometimes
	// required a separate account code for billing or resource allocation. Today,
	// those details are usually associated directly with the user's server-side
	// profile, making ACCT obsolete for most applications. Leave this property empty
	// unless the server administrator or login instructions explicitly require an FTP
	// account value.
	// 
	// Specifies the FTP account string sent with the ACCT command when a server
	// requires an account in addition to the username and password.
	// 
	void get_Account(CkString &str);
	// Very rarely needed today: Almost all modern FTP servers rely exclusively on the
	// USER and PASS commands for authentication and access control.
	// 
	// The ACCT command is a legacy feature from early computing systems that sometimes
	// required a separate account code for billing or resource allocation. Today,
	// those details are usually associated directly with the user's server-side
	// profile, making ACCT obsolete for most applications. Leave this property empty
	// unless the server administrator or login instructions explicitly require an FTP
	// account value.
	// 
	// Specifies the FTP account string sent with the ACCT command when a server
	// requires an account in addition to the username and password.
	// 
	const char *account(void);
	// Very rarely needed today: Almost all modern FTP servers rely exclusively on the
	// USER and PASS commands for authentication and access control.
	// 
	// The ACCT command is a legacy feature from early computing systems that sometimes
	// required a separate account code for billing or resource allocation. Today,
	// those details are usually associated directly with the user's server-side
	// profile, making ACCT obsolete for most applications. Leave this property empty
	// unless the server administrator or login instructions explicitly require an FTP
	// account value.
	// 
	// Specifies the FTP account string sent with the ACCT command when a server
	// requires an account in addition to the username and password.
	// 
	void put_Account(const char *newVal);

	// Specifies the last local TCP port that may be used for active-mode data
	// connections. The default is 0. Valid nonzero values are 1 through 65535.
	// 
	// The range beginning with ActivePortRangeStart[1] is inclusive. If
	// ActivePortRangeStart is 0, this property is ignored and the operating system
	// chooses an ephemeral listening port. If this value is 0 or is less than
	// ActivePortRangeStart, Chilkat behaves as though both endpoints equal
	// ActivePortRangeStart.
	// 
	// Unavailable ports are skipped. Chilkat tries each port in the effective range
	// until binding succeeds, and fails only after all ports have been tried. The
	// range applies to both PORT and EPRT and may be changed while the control
	// connection is already established.
	// 
	// Active mode setting: This property is used only when Passive[2] is false.
	// Passive mode is typically preferred because it avoids the server-initiated
	// connection back to the client that many client-side firewalls block. When active
	// mode is required, any fixed port range must be allowed by the client-side
	// firewall and reachable through intervening NAT.
	// 
	// References:
	// [1] #ActivePortRangeStart
	// [2] #Passive
	int get_ActivePortRangeEnd(void);
	// Specifies the last local TCP port that may be used for active-mode data
	// connections. The default is 0. Valid nonzero values are 1 through 65535.
	// 
	// The range beginning with ActivePortRangeStart[1] is inclusive. If
	// ActivePortRangeStart is 0, this property is ignored and the operating system
	// chooses an ephemeral listening port. If this value is 0 or is less than
	// ActivePortRangeStart, Chilkat behaves as though both endpoints equal
	// ActivePortRangeStart.
	// 
	// Unavailable ports are skipped. Chilkat tries each port in the effective range
	// until binding succeeds, and fails only after all ports have been tried. The
	// range applies to both PORT and EPRT and may be changed while the control
	// connection is already established.
	// 
	// Active mode setting: This property is used only when Passive[2] is false.
	// Passive mode is typically preferred because it avoids the server-initiated
	// connection back to the client that many client-side firewalls block. When active
	// mode is required, any fixed port range must be allowed by the client-side
	// firewall and reachable through intervening NAT.
	// 
	// References:
	// [1] #ActivePortRangeStart
	// [2] #Passive
	void put_ActivePortRangeEnd(int newVal);

	// Specifies the first local TCP port that may be used for active-mode data
	// connections. The default is 0. Valid nonzero values are 1 through 65535.
	// 
	// When this property is 0, ActivePortRangeEnd[1] is ignored and Chilkat binds the
	// listening socket to port 0, allowing the operating system to choose an available
	// ephemeral port. When this property is nonzero, the effective range is inclusive.
	// If the ending value is 0 or is less than the starting value, Chilkat tries only
	// the starting port.
	// 
	// For each active-mode data connection, Chilkat tries the ports in the effective
	// range in ascending order, skipping any port for which the listening socket
	// cannot be bound. The operation fails only after every port in the range has been
	// tried.
	// 
	// Scope: The range applies to both PORT and EPRT operation and may be changed
	// after the FTP control connection has been established.
	// Active mode setting: This property is used only when Passive[2] is false.
	// Passive mode is typically preferred because the client initiates both the
	// control and data connections, making it much friendlier to client-side firewalls
	// and NAT.
	// 
	// References:
	// [1] #ActivePortRangeEnd
	// [2] #Passive
	int get_ActivePortRangeStart(void);
	// Specifies the first local TCP port that may be used for active-mode data
	// connections. The default is 0. Valid nonzero values are 1 through 65535.
	// 
	// When this property is 0, ActivePortRangeEnd[1] is ignored and Chilkat binds the
	// listening socket to port 0, allowing the operating system to choose an available
	// ephemeral port. When this property is nonzero, the effective range is inclusive.
	// If the ending value is 0 or is less than the starting value, Chilkat tries only
	// the starting port.
	// 
	// For each active-mode data connection, Chilkat tries the ports in the effective
	// range in ascending order, skipping any port for which the listening socket
	// cannot be bound. The operation fails only after every port in the range has been
	// tried.
	// 
	// Scope: The range applies to both PORT and EPRT operation and may be changed
	// after the FTP control connection has been established.
	// Active mode setting: This property is used only when Passive[2] is false.
	// Passive mode is typically preferred because the client initiates both the
	// control and data connections, making it much friendlier to client-side firewalls
	// and NAT.
	// 
	// References:
	// [1] #ActivePortRangeEnd
	// [2] #Passive
	void put_ActivePortRangeStart(int newVal);

	// Rarely needed: The FTP ALLO command pre-allocates disk space on the server
	// before an upload. It is generally needed only by certain legacy systems, such as
	// older mainframes, that require the exact file size in advance to reserve
	// storage. Most modern FTP servers allocate space dynamically and either ignore
	// ALLO or do not require it. Leave this property at its default value of 0 unless
	// the server explicitly requires pre-allocation.
	// 
	// Specifies the size, in bytes, to send in an ALLO command before the next
	// applicable upload. For example, a value of 20 sends ALLO 20. The default value
	// of 0 disables the command.
	// 
	// This is a one-shot setting. It is consumed by the next applicable upload and
	// automatically reset to 0. It applies to normal, in-memory, text, and append
	// uploads. A successful FTP reply indicating that allocation is unnecessary, such
	// as reply code 202, does not prevent the upload from continuing.
	// 
	unsigned long get_AllocateSize(void);
	// Rarely needed: The FTP ALLO command pre-allocates disk space on the server
	// before an upload. It is generally needed only by certain legacy systems, such as
	// older mainframes, that require the exact file size in advance to reserve
	// storage. Most modern FTP servers allocate space dynamically and either ignore
	// ALLO or do not require it. Leave this property at its default value of 0 unless
	// the server explicitly requires pre-allocation.
	// 
	// Specifies the size, in bytes, to send in an ALLO command before the next
	// applicable upload. For example, a value of 20 sends ALLO 20. The default value
	// of 0 disables the command.
	// 
	// This is a one-shot setting. It is consumed by the next applicable upload and
	// automatically reset to 0. It applies to normal, in-memory, text, and append
	// uploads. A successful FTP reply indicating that allocation is unnecessary, such
	// as reply code 202, does not prevent the upload from continuing.
	// 
	void put_AllocateSize(unsigned long newVal);

	// Controls whether machine-readable directory listings are requested with MLSD
	// when the server advertises support. The default is true.
	// 
	// When this property is true and MLSD is advertised, Chilkat uses MLSD.
	// Otherwise, a legacy listing is used: NLST when PreferNlst[1] is true, or LIST
	// when it is false.
	// 
	// MLSD provides standardized facts such as type, size, and modification time and
	// is generally more reliable than parsing server-specific LIST output. Facts not
	// supplied by the server remain unavailable. When a perm fact is present,
	// GetPermissions[2] returns it rather than a UNIX-style permission string.
	// 
	// Recommended setting: Keep this property enabled unless a particular server has a
	// broken MLSD implementation. Disabling it can reduce the accuracy or availability
	// of timestamps, sizes, and other listing information.
	// 
	// References:
	// [1] #PreferNlst
	// [2] #GetPermissions
	bool get_AllowMlsd(void);
	// Controls whether machine-readable directory listings are requested with MLSD
	// when the server advertises support. The default is true.
	// 
	// When this property is true and MLSD is advertised, Chilkat uses MLSD.
	// Otherwise, a legacy listing is used: NLST when PreferNlst[1] is true, or LIST
	// when it is false.
	// 
	// MLSD provides standardized facts such as type, size, and modification time and
	// is generally more reliable than parsing server-specific LIST output. Facts not
	// supplied by the server remain unavailable. When a perm fact is present,
	// GetPermissions[2] returns it rather than a UNIX-style permission string.
	// 
	// Recommended setting: Keep this property enabled unless a particular server has a
	// broken MLSD implementation. Disabling it can reduce the accuracy or availability
	// of timestamps, sizes, and other listing information.
	// 
	// References:
	// [1] #PreferNlst
	// [2] #GetPermissions
	void put_AllowMlsd(bool newVal);

	// Deprecated. Returns the number of bytes received during the current FTP download
	// as a 32-bit unsigned integer. The value is updated while the transfer is
	// running. Use CurBytesReceived[1] instead.
	// 
	// References:
	// [1] #CurBytesReceived
	unsigned long get_AsyncBytesReceived(void);

	// Deprecated. Returns the number of bytes received during the current FTP download
	// as a 64-bit integer. The value is updated while the transfer is running. Use
	// CurBytesReceived64[1] instead.
	// 
	// References:
	// [1] #CurBytesReceived64
	__int64 get_AsyncBytesReceived64(void);

	// Deprecated. Returns the number of bytes received during the current FTP download
	// as a decimal string. The value is updated while the transfer is running. Use
	// CurBytesReceivedStr[1] instead.
	// 
	// References:
	// [1] #CurBytesReceivedStr
	void get_AsyncBytesReceivedStr(CkString &str);
	// Deprecated. Returns the number of bytes received during the current FTP download
	// as a decimal string. The value is updated while the transfer is running. Use
	// CurBytesReceivedStr[1] instead.
	// 
	// References:
	// [1] #CurBytesReceivedStr
	const char *asyncBytesReceivedStr(void);

	// Deprecated. Returns the number of bytes sent during the current FTP upload as a
	// 32-bit unsigned integer. The value is updated while the transfer is running. Use
	// CurBytesSent[1] instead.
	// 
	// References:
	// [1] #CurBytesSent
	unsigned long get_AsyncBytesSent(void);

	// Deprecated. Returns the number of bytes sent during the current FTP upload as a
	// 64-bit integer. The value is updated while the transfer is running. Use
	// CurBytesSent64[1] instead.
	// 
	// References:
	// [1] #CurBytesSent64
	__int64 get_AsyncBytesSent64(void);

	// Deprecated. Returns the number of bytes sent during the current FTP upload as a
	// decimal string. The value is updated while the transfer is running. Use
	// CurBytesSentStr[1] instead.
	// 
	// References:
	// [1] #CurBytesSentStr
	void get_AsyncBytesSentStr(CkString &str);
	// Deprecated. Returns the number of bytes sent during the current FTP upload as a
	// decimal string. The value is updated while the transfer is running. Use
	// CurBytesSentStr[1] instead.
	// 
	// References:
	// [1] #CurBytesSentStr
	const char *asyncBytesSentStr(void);

	// Legacy and very uncommon: AUTH SSL originated in early FTP security drafts from
	// the era when SSL was the standard encryption protocol. For modern FTP servers,
	// use AuthTls[1] instead. Most security-conscious servers require AUTH TLS and may
	// reject AUTH SSL to enforce current security policies and prevent protocol
	// downgrades. This property is normally needed only for a decades-old legacy
	// server that was never updated to support AUTH TLS.
	// Set to true to use explicit FTP over TLS by sending AUTH SSL on the FTP
	// control channel. The client first establishes a plain FTP control connection,
	// receives the server greeting, and then upgrades that connection to TLS.
	// 
	// The TLS upgrade is completed before USER and PASS are sent. ConnectOnly[2]
	// performs the explicit TLS upgrade but does not log in. During Connect[3],
	// Chilkat sends PBSZ and PROT as required by DataProtection[4]. If the server
	// responds with 530 Please login with USER and PASS, Chilkat logs in and
	// automatically retries those commands.
	// 
	// If the server accepts the AUTH command but rejects a required PBSZ or PROT
	// command, the connection attempt fails. A failed connection attempt does not
	// leave the underlying plain FTP connection open.
	// 
	// AUTH SSL is the alternative explicit-TLS command used by this property. If
	// Ssl[5] is true, implicit TLS takes priority. If both this property and
	// AuthTls[1] are true while Ssl is false, AuthTls takes priority and Chilkat
	// sends AUTH TLS.
	// 
	// 
	// References:
	// [1] #AuthTls
	// [2] #ConnectOnly
	// [3] #Connect
	// [4] #DataProtection
	// [5] #Ssl
	bool get_AuthSsl(void);
	// Legacy and very uncommon: AUTH SSL originated in early FTP security drafts from
	// the era when SSL was the standard encryption protocol. For modern FTP servers,
	// use AuthTls[1] instead. Most security-conscious servers require AUTH TLS and may
	// reject AUTH SSL to enforce current security policies and prevent protocol
	// downgrades. This property is normally needed only for a decades-old legacy
	// server that was never updated to support AUTH TLS.
	// Set to true to use explicit FTP over TLS by sending AUTH SSL on the FTP
	// control channel. The client first establishes a plain FTP control connection,
	// receives the server greeting, and then upgrades that connection to TLS.
	// 
	// The TLS upgrade is completed before USER and PASS are sent. ConnectOnly[2]
	// performs the explicit TLS upgrade but does not log in. During Connect[3],
	// Chilkat sends PBSZ and PROT as required by DataProtection[4]. If the server
	// responds with 530 Please login with USER and PASS, Chilkat logs in and
	// automatically retries those commands.
	// 
	// If the server accepts the AUTH command but rejects a required PBSZ or PROT
	// command, the connection attempt fails. A failed connection attempt does not
	// leave the underlying plain FTP connection open.
	// 
	// AUTH SSL is the alternative explicit-TLS command used by this property. If
	// Ssl[5] is true, implicit TLS takes priority. If both this property and
	// AuthTls[1] are true while Ssl is false, AuthTls takes priority and Chilkat
	// sends AUTH TLS.
	// 
	// 
	// References:
	// [1] #AuthTls
	// [2] #ConnectOnly
	// [3] #Connect
	// [4] #DataProtection
	// [5] #Ssl
	void put_AuthSsl(bool newVal);

	// Set to true to use explicit FTP over TLS by sending AUTH TLS on the FTP
	// control channel. The client first establishes a plain FTP control connection,
	// receives the server greeting, and then upgrades that connection to TLS. Port 21
	// is conventionally used.
	// 
	// The TLS upgrade is completed before USER and PASS are sent. ConnectOnly[1]
	// performs the explicit TLS upgrade but does not log in. During Connect[2],
	// Chilkat sends PBSZ and PROT as required by DataProtection[3]. If the server
	// responds with 530 Please login with USER and PASS, Chilkat logs in and
	// automatically retries those commands.
	// 
	// If the server accepts the AUTH command but rejects a required PBSZ or PROT
	// command, the connection attempt fails. A failed connection attempt does not
	// leave the underlying plain FTP connection open.
	// 
	// If Ssl[4] is true, implicit TLS takes priority and this property is ignored.
	// If both AuthTls and AuthSsl[5] are true while Ssl is false, AuthTls takes
	// priority.
	// 
	// AuthTls versus AuthSsl: Both properties select explicit FTPS. Their only
	// difference is the command sent to initiate TLS: AUTH TLS for this property and
	// AUTH SSL for AuthSsl.
	// 
	// References:
	// [1] #ConnectOnly
	// [2] #Connect
	// [3] #DataProtection
	// [4] #Ssl
	// [5] #AuthSsl
	bool get_AuthTls(void);
	// Set to true to use explicit FTP over TLS by sending AUTH TLS on the FTP
	// control channel. The client first establishes a plain FTP control connection,
	// receives the server greeting, and then upgrades that connection to TLS. Port 21
	// is conventionally used.
	// 
	// The TLS upgrade is completed before USER and PASS are sent. ConnectOnly[1]
	// performs the explicit TLS upgrade but does not log in. During Connect[2],
	// Chilkat sends PBSZ and PROT as required by DataProtection[3]. If the server
	// responds with 530 Please login with USER and PASS, Chilkat logs in and
	// automatically retries those commands.
	// 
	// If the server accepts the AUTH command but rejects a required PBSZ or PROT
	// command, the connection attempt fails. A failed connection attempt does not
	// leave the underlying plain FTP connection open.
	// 
	// If Ssl[4] is true, implicit TLS takes priority and this property is ignored.
	// If both AuthTls and AuthSsl[5] are true while Ssl is false, AuthTls takes
	// priority.
	// 
	// AuthTls versus AuthSsl: Both properties select explicit FTPS. Their only
	// difference is the command sent to initiate TLS: AUTH TLS for this property and
	// AUTH SSL for AuthSsl.
	// 
	// References:
	// [1] #ConnectOnly
	// [2] #Connect
	// [3] #DataProtection
	// [4] #Ssl
	// [5] #AuthSsl
	void put_AuthTls(bool newVal);

	// Rarely changed: Leave this property at its default value of true for nearly
	// all modern FTP servers. The FEAT command was standardized in RFC 2389 in 1998
	// and is broadly supported by mainstream FTP software, including FileZilla Server,
	// vsftpd, ProFTPD, and IIS. Set it to false only for a legacy or nonconforming
	// server that mishandles FEAT.
	// Controls whether a FEAT command is sent automatically after login. The default
	// is true. The response is processed to detect capabilities such as MLSD, UTF8,
	// EPSV, MODE Z, and server-specific extensions.
	// 
	// When AutoSyst[1] is also true, automatic SYST is sent first. If UTF8 is
	// advertised and AutoOptsUtf8[2] is true, capability processing is followed by
	// OPTS UTF8 ON.
	// 
	// The same capability processing can be performed later by calling Feat[3]
	// explicitly.
	// 
	// 
	// References:
	// [1] #AutoSyst
	// [2] #AutoOptsUtf8
	// [3] #Feat
	bool get_AutoFeat(void);
	// Rarely changed: Leave this property at its default value of true for nearly
	// all modern FTP servers. The FEAT command was standardized in RFC 2389 in 1998
	// and is broadly supported by mainstream FTP software, including FileZilla Server,
	// vsftpd, ProFTPD, and IIS. Set it to false only for a legacy or nonconforming
	// server that mishandles FEAT.
	// Controls whether a FEAT command is sent automatically after login. The default
	// is true. The response is processed to detect capabilities such as MLSD, UTF8,
	// EPSV, MODE Z, and server-specific extensions.
	// 
	// When AutoSyst[1] is also true, automatic SYST is sent first. If UTF8 is
	// advertised and AutoOptsUtf8[2] is true, capability processing is followed by
	// OPTS UTF8 ON.
	// 
	// The same capability processing can be performed later by calling Feat[3]
	// explicitly.
	// 
	// 
	// References:
	// [1] #AutoSyst
	// [2] #AutoOptsUtf8
	// [3] #Feat
	void put_AutoFeat(bool newVal);

	// Controls automatic adjustment of Ssl[1], AuthSsl[2], and AuthTls[3] based solely
	// on Port[4]. The default is true. The only recognized ports are 21 and 990.
	// 
	// +------------+-----------------------------------------------------------------+
	// |    Port    |                      Automatic adjustment                       |
	// +============+=================================================================+
	// | 21         | Sets Ssl[1] to false. AuthTls[3] and AuthSsl[2] continue to   |
	// |            | determine whether explicit TLS is requested.                    |
	// +------------+-----------------------------------------------------------------+
	// | 990        | Sets Ssl[1] to true and sets AuthTls[3] and AuthSsl[2] to     |
	// |            | false.                                                        |
	// +------------+-----------------------------------------------------------------+
	// | Any other  | Makes no changes because the intended plain, explicit-TLS, or   |
	// | port       | implicit-TLS mode cannot be inferred from a custom port number. |
	// +------------+-----------------------------------------------------------------+
	// 
	// Scope: AutoFix does not probe the server or resolve arbitrary conflicting
	// settings. It only applies the conventional meaning of ports 21 and 990.
	// 
	// References:
	// [1] #Ssl
	// [2] #AuthSsl
	// [3] #AuthTls
	// [4] #Port
	bool get_AutoFix(void);
	// Controls automatic adjustment of Ssl[1], AuthSsl[2], and AuthTls[3] based solely
	// on Port[4]. The default is true. The only recognized ports are 21 and 990.
	// 
	// +------------+-----------------------------------------------------------------+
	// |    Port    |                      Automatic adjustment                       |
	// +============+=================================================================+
	// | 21         | Sets Ssl[1] to false. AuthTls[3] and AuthSsl[2] continue to   |
	// |            | determine whether explicit TLS is requested.                    |
	// +------------+-----------------------------------------------------------------+
	// | 990        | Sets Ssl[1] to true and sets AuthTls[3] and AuthSsl[2] to     |
	// |            | false.                                                        |
	// +------------+-----------------------------------------------------------------+
	// | Any other  | Makes no changes because the intended plain, explicit-TLS, or   |
	// | port       | implicit-TLS mode cannot be inferred from a custom port number. |
	// +------------+-----------------------------------------------------------------+
	// 
	// Scope: AutoFix does not probe the server or resolve arbitrary conflicting
	// settings. It only applies the conventional meaning of ports 21 and 990.
	// 
	// References:
	// [1] #Ssl
	// [2] #AuthSsl
	// [3] #AuthTls
	// [4] #Port
	void put_AutoFix(bool newVal);

	// Controls whether Chilkat sends a SIZE command before a download so
	// percentage-based progress can be calculated. The default is false. Each size
	// query adds a control-channel round trip.
	// 
	// A nonzero one-shot value in ProgressMonSize[1] or ProgressMonSize64[2] supplies
	// the expected size directly and avoids this additional query. Even when this
	// property is false, percentage progress may be available if the server includes
	// a usable size in its preliminary transfer reply.
	// 
	// 
	// References:
	// [1] #ProgressMonSize
	// [2] #ProgressMonSize64
	bool get_AutoGetSizeForProgress(void);
	// Controls whether Chilkat sends a SIZE command before a download so
	// percentage-based progress can be calculated. The default is false. Each size
	// query adds a control-channel round trip.
	// 
	// A nonzero one-shot value in ProgressMonSize[1] or ProgressMonSize64[2] supplies
	// the expected size directly and avoids this additional query. Even when this
	// property is false, percentage progress may be available if the server includes
	// a usable size in its preliminary transfer reply.
	// 
	// 
	// References:
	// [1] #ProgressMonSize
	// [2] #ProgressMonSize64
	void put_AutoGetSizeForProgress(bool newVal);

	// Controls whether OPTS UTF8 ON is sent automatically when a processed FEAT
	// response advertises UTF8. The default is true. When UTF-8 is advertised,
	// Chilkat sets CommandCharset[1] and DirListingCharset[2] to utf-8, overwriting
	// values previously assigned by the application.
	// 
	// If UTF8 is not advertised, the existing charset property values are left
	// unchanged. This behavior applies both during automatic capability discovery and
	// when Feat[3] is called explicitly.
	// 
	// Set to false for a server that advertises UTF-8 but rejects the option or uses
	// a different encoding in practice.
	// 
	// 
	// References:
	// [1] #CommandCharset
	// [2] #DirListingCharset
	// [3] #Feat
	bool get_AutoOptsUtf8(void);
	// Controls whether OPTS UTF8 ON is sent automatically when a processed FEAT
	// response advertises UTF8. The default is true. When UTF-8 is advertised,
	// Chilkat sets CommandCharset[1] and DirListingCharset[2] to utf-8, overwriting
	// values previously assigned by the application.
	// 
	// If UTF8 is not advertised, the existing charset property values are left
	// unchanged. This behavior applies both during automatic capability discovery and
	// when Feat[3] is called explicitly.
	// 
	// Set to false for a server that advertises UTF-8 but rejects the option or uses
	// a different encoding in practice.
	// 
	// 
	// References:
	// [1] #CommandCharset
	// [2] #DirListingCharset
	// [3] #Feat
	void put_AutoOptsUtf8(bool newVal);

	// Recommended setting: Applications should set this property to true. The
	// default is false in current versions, but will change to true in Chilkat
	// v12.0.0.
	// 
	// EPSV is preferred on modern networks because it supports both IPv4 and IPv6,
	// whereas PASV cannot represent an IPv6 address. It is also more reliable through
	// NAT and firewalls because the EPSV reply contains only a port number and relies
	// on the address of the existing control connection. In contrast, a PASV reply
	// includes an IP address, which can fail when a server behind NAT returns its
	// private internal address.
	// 
	// Virtually all modern FTP servers, including vsftpd, ProFTPD, FileZilla Server,
	// and IIS, support EPSV. It was standardized in RFC 2428 in 1998 and is widely
	// implemented.
	// 
	// Controls whether UseEpsv[1] is recalculated when server capabilities are
	// processed. The default is false. Processing occurs during the initial
	// connection when AutoFeat[2] is true, or when Feat[3] is called explicitly.
	// 
	// The result is based on both the advertised capabilities and the connection
	// context; it is not simply a copy of whether EPSV appears in the FEAT reply. For
	// example, an IPv4 connection may retain UseEpsv = FALSE even when the server
	// advertises EPSV. Automatic recalculation can overwrite an explicitly assigned
	// value, and each new connection recalculates it for the new session.
	// 
	// If an attempted EPSV command is rejected, Chilkat falls back to PASV for that
	// data connection. The failed attempt is not remembered as a session-wide reason
	// to disable future EPSV attempts.
	// 
	// 
	// References:
	// [1] #UseEpsv
	// [2] #AutoFeat
	// [3] #Feat
	bool get_AutoSetUseEpsv(void);
	// Recommended setting: Applications should set this property to true. The
	// default is false in current versions, but will change to true in Chilkat
	// v12.0.0.
	// 
	// EPSV is preferred on modern networks because it supports both IPv4 and IPv6,
	// whereas PASV cannot represent an IPv6 address. It is also more reliable through
	// NAT and firewalls because the EPSV reply contains only a port number and relies
	// on the address of the existing control connection. In contrast, a PASV reply
	// includes an IP address, which can fail when a server behind NAT returns its
	// private internal address.
	// 
	// Virtually all modern FTP servers, including vsftpd, ProFTPD, FileZilla Server,
	// and IIS, support EPSV. It was standardized in RFC 2428 in 1998 and is widely
	// implemented.
	// 
	// Controls whether UseEpsv[1] is recalculated when server capabilities are
	// processed. The default is false. Processing occurs during the initial
	// connection when AutoFeat[2] is true, or when Feat[3] is called explicitly.
	// 
	// The result is based on both the advertised capabilities and the connection
	// context; it is not simply a copy of whether EPSV appears in the FEAT reply. For
	// example, an IPv4 connection may retain UseEpsv = FALSE even when the server
	// advertises EPSV. Automatic recalculation can overwrite an explicitly assigned
	// value, and each new connection recalculates it for the new session.
	// 
	// If an attempted EPSV command is rejected, Chilkat falls back to PASV for that
	// data connection. The failed attempt is not remembered as a session-wide reason
	// to disable future EPSV attempts.
	// 
	// 
	// References:
	// [1] #UseEpsv
	// [2] #AutoFeat
	// [3] #Feat
	void put_AutoSetUseEpsv(bool newVal);

	// Controls whether a SYST command is sent automatically after login. The default
	// is true. The server's operating-system type can help Chilkat interpret legacy
	// LIST output and other server-specific behavior.
	// 
	// When both this property and AutoFeat[1] are true, automatic SYST occurs before
	// automatic FEAT.
	// 
	// Set to false only when a particular server rejects or mishandles SYST.
	// 
	// 
	// References:
	// [1] #AutoFeat
	bool get_AutoSyst(void);
	// Controls whether a SYST command is sent automatically after login. The default
	// is true. The server's operating-system type can help Chilkat interpret legacy
	// LIST output and other server-specific behavior.
	// 
	// When both this property and AutoFeat[1] are true, automatic SYST occurs before
	// automatic FEAT.
	// 
	// Set to false only when a particular server rejects or mishandles SYST.
	// 
	// 
	// References:
	// [1] #AutoFeat
	void put_AutoSyst(bool newVal);

	// Controls automatic post-upload verification with the server-specific XCRC
	// command. The default is false. When enabled and the server supports XCRC,
	// Chilkat requests a CRC after an upload and treats a mismatch as transfer
	// failure.
	// 
	// If XCRC support is not detected, Chilkat does not send the verification command
	// and the upload proceeds normally. This extension is not part of the core FTP
	// standard and is not supported by every server. Capability detection normally
	// depends on a processed FEAT response.
	// 
	// Integrity scope: CRC verification can detect accidental corruption in transit or
	// storage, but it is not a cryptographic authenticity check.
	bool get_AutoXcrc(void);
	// Controls automatic post-upload verification with the server-specific XCRC
	// command. The default is false. When enabled and the server supports XCRC,
	// Chilkat requests a CRC after an upload and treats a mismatch as transfer
	// failure.
	// 
	// If XCRC support is not detected, Chilkat does not send the verification command
	// and the upload proceeds normally. This extension is not part of the core FTP
	// standard and is not supported by every server. Capability detection normally
	// depends on a processed FEAT response.
	// 
	// Integrity scope: CRC verification can detect accidental corruption in transit or
	// storage, but it is not a cryptographic authenticity check.
	void put_AutoXcrc(bool newVal);

	// Specifies the approximate maximum download rate in bytes per second. The default
	// value of 0 disables throttling.
	// 
	// Client-side download throttling is approximate because the server continues
	// sending as permitted by TCP. The operating system's socket buffers absorb data
	// between reads, so very small transfers may complete before the configured rate
	// can be meaningfully enforced.
	// 
	int get_BandwidthThrottleDown(void);
	// Specifies the approximate maximum download rate in bytes per second. The default
	// value of 0 disables throttling.
	// 
	// Client-side download throttling is approximate because the server continues
	// sending as permitted by TCP. The operating system's socket buffers absorb data
	// between reads, so very small transfers may complete before the configured rate
	// can be meaningfully enforced.
	// 
	void put_BandwidthThrottleDown(int newVal);

	// Specifies the approximate maximum upload rate in bytes per second. The default
	// value of 0 disables throttling.
	// 
	// The limit is averaged over the transfer. Very small uploads may complete before
	// the configured rate can be closely approximated.
	// 
	int get_BandwidthThrottleUp(void);
	// Specifies the approximate maximum upload rate in bytes per second. The default
	// value of 0 disables throttling.
	// 
	// The limit is averaged over the transfer. Very small uploads may complete before
	// the configured rate can be closely approximated.
	// 
	void put_BandwidthThrottleUp(int newVal);

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
	const char *clientIpAddress(void);
	// This property is normally left unset. Set it only on a multihomed computer when
	// the application must bind the outgoing connection to a specific local network
	// interface.
	// 
	// Specify a numeric IPv4 or IPv6 address, not a hostname. When the property is
	// empty, the operating system automatically chooses the local address.
	// 
	void put_ClientIpAddress(const char *newVal);

	// Specifies the character encoding used by high-level FTP operations for commands
	// containing non-ASCII text, including remote paths and filenames. The default is
	// ANSI. Charset names and the keyword ANSI are case-insensitive. An unrecognized
	// charset name is clamped to utf-8, and the getter returns utf-8.
	// Usually changed automatically to UTF-8: Although the default value is ANSI, when
	// the server advertises UTF-8 and AutoOptsUtf8[1] is enabled, Chilkat
	// automatically changes this property to utf-8. Nearly all modern FTP servers
	// support UTF-8, so utf-8 is typically the effective value after connecting. If
	// UTF-8 is not advertised, the existing value is left unchanged.
	// What ANSI means: It does not name one specific charset. It tells Chilkat to use
	// the system-default encoding or default system locale. Typical examples include
	// windows-1252 on Western-language Windows systems, windows-1251 for Cyrillic,
	// windows-1256 for Arabic, and windows-932 (Shift_JIS) for Japanese. On many
	// modern Unix-like systems, the default locale encoding is utf-8. The actual
	// encoding therefore depends on the computer on which the application runs.
	// 
	// Changing this property after connecting affects subsequent high-level FTP
	// commands. If a character cannot be represented in a selected single-byte
	// encoding, the character is omitted from the transmitted command; use utf-8 to
	// preserve full Unicode names.
	// 
	// FTP filename encoding: The original FTP protocol did not define one universal
	// encoding for path names. The client and server must use the same encoding; UTF-8
	// is preferred when the server supports it.
	// 
	// References:
	// [1] #AutoOptsUtf8
	void get_CommandCharset(CkString &str);
	// Specifies the character encoding used by high-level FTP operations for commands
	// containing non-ASCII text, including remote paths and filenames. The default is
	// ANSI. Charset names and the keyword ANSI are case-insensitive. An unrecognized
	// charset name is clamped to utf-8, and the getter returns utf-8.
	// Usually changed automatically to UTF-8: Although the default value is ANSI, when
	// the server advertises UTF-8 and AutoOptsUtf8[1] is enabled, Chilkat
	// automatically changes this property to utf-8. Nearly all modern FTP servers
	// support UTF-8, so utf-8 is typically the effective value after connecting. If
	// UTF-8 is not advertised, the existing value is left unchanged.
	// What ANSI means: It does not name one specific charset. It tells Chilkat to use
	// the system-default encoding or default system locale. Typical examples include
	// windows-1252 on Western-language Windows systems, windows-1251 for Cyrillic,
	// windows-1256 for Arabic, and windows-932 (Shift_JIS) for Japanese. On many
	// modern Unix-like systems, the default locale encoding is utf-8. The actual
	// encoding therefore depends on the computer on which the application runs.
	// 
	// Changing this property after connecting affects subsequent high-level FTP
	// commands. If a character cannot be represented in a selected single-byte
	// encoding, the character is omitted from the transmitted command; use utf-8 to
	// preserve full Unicode names.
	// 
	// FTP filename encoding: The original FTP protocol did not define one universal
	// encoding for path names. The client and server must use the same encoding; UTF-8
	// is preferred when the server supports it.
	// 
	// References:
	// [1] #AutoOptsUtf8
	const char *commandCharset(void);
	// Specifies the character encoding used by high-level FTP operations for commands
	// containing non-ASCII text, including remote paths and filenames. The default is
	// ANSI. Charset names and the keyword ANSI are case-insensitive. An unrecognized
	// charset name is clamped to utf-8, and the getter returns utf-8.
	// Usually changed automatically to UTF-8: Although the default value is ANSI, when
	// the server advertises UTF-8 and AutoOptsUtf8[1] is enabled, Chilkat
	// automatically changes this property to utf-8. Nearly all modern FTP servers
	// support UTF-8, so utf-8 is typically the effective value after connecting. If
	// UTF-8 is not advertised, the existing value is left unchanged.
	// What ANSI means: It does not name one specific charset. It tells Chilkat to use
	// the system-default encoding or default system locale. Typical examples include
	// windows-1252 on Western-language Windows systems, windows-1251 for Cyrillic,
	// windows-1256 for Arabic, and windows-932 (Shift_JIS) for Japanese. On many
	// modern Unix-like systems, the default locale encoding is utf-8. The actual
	// encoding therefore depends on the computer on which the application runs.
	// 
	// Changing this property after connecting affects subsequent high-level FTP
	// commands. If a character cannot be represented in a selected single-byte
	// encoding, the character is omitted from the transmitted command; use utf-8 to
	// preserve full Unicode names.
	// 
	// FTP filename encoding: The original FTP protocol did not define one universal
	// encoding for path names. The client and server must use the same encoding; UTF-8
	// is preferred when the server supports it.
	// 
	// References:
	// [1] #AutoOptsUtf8
	void put_CommandCharset(const char *newVal);

	// Contains a numeric reason code after Connect[1] or ConnectOnly[2] fails. Use
	// this value for broad classification and inspect LastErrorText for detailed
	// diagnostics.
	// 
	// +------+----------------------------------------------------------+
	// | Code |                         Meaning                          |
	// +======+==========================================================+
	// | 0    | Success.                                                 |
	// +------+----------------------------------------------------------+
	// | 1    | The hostname is empty.                                   |
	// +------+----------------------------------------------------------+
	// | 2    | DNS lookup failed.                                       |
	// +------+----------------------------------------------------------+
	// | 3    | DNS lookup timed out.                                    |
	// +------+----------------------------------------------------------+
	// | 4    | Cancelled by the application.                            |
	// +------+----------------------------------------------------------+
	// | 5    | Internal failure.                                        |
	// +------+----------------------------------------------------------+
	// | 6    | TCP connection timed out.                                |
	// +------+----------------------------------------------------------+
	// | 7    | TCP connection was rejected or otherwise failed.         |
	// +------+----------------------------------------------------------+
	// | 100  | Internal TLS failure.                                    |
	// +------+----------------------------------------------------------+
	// | 101  | Failed to send the TLS ClientHello.                      |
	// +------+----------------------------------------------------------+
	// | 102  | An unexpected TLS handshake message was received.        |
	// +------+----------------------------------------------------------+
	// | 103  | Failed to read the ServerHello.                          |
	// +------+----------------------------------------------------------+
	// | 104  | The server did not provide a certificate.                |
	// +------+----------------------------------------------------------+
	// | 105  | Unexpected TLS protocol version.                         |
	// +------+----------------------------------------------------------+
	// | 106  | Server certificate verification failed.                  |
	// +------+----------------------------------------------------------+
	// | 107  | The negotiated TLS version is not allowed.               |
	// +------+----------------------------------------------------------+
	// | 109  | Failed while reading TLS handshake messages.             |
	// +------+----------------------------------------------------------+
	// | 110  | Failed to send the client-certificate handshake message. |
	// +------+----------------------------------------------------------+
	// | 111  | Failed to send the client key exchange.                  |
	// +------+----------------------------------------------------------+
	// | 112  | The client certificate private key is not accessible.    |
	// +------+----------------------------------------------------------+
	// | 113  | Failed to send client certificate verification.          |
	// +------+----------------------------------------------------------+
	// | 114  | Failed to send ChangeCipherSpec.                         |
	// +------+----------------------------------------------------------+
	// | 115  | Failed to send the Finished handshake message.           |
	// +------+----------------------------------------------------------+
	// | 116  | The server Finished message is invalid.                  |
	// +------+----------------------------------------------------------+
	// | 200  | Connected, but the FTP greeting was not received.        |
	// +------+----------------------------------------------------------+
	// | 201  | The AUTH TLS or AUTH SSL upgrade failed.                 |
	// +------+----------------------------------------------------------+
	// | 300  | An asynchronous operation is already in progress.        |
	// +------+----------------------------------------------------------+
	// | 301  | FTP authentication failed.                               |
	// +------+----------------------------------------------------------+
	// 
	// A successful connection sets this property to 0. An authentication failure can
	// set it to 301 while ConnectVerified[3] remains true, because the TCP and FTP
	// connection succeeded before the login was rejected.
	// 
	// 
	// References:
	// [1] #Connect
	// [2] #ConnectOnly
	// [3] #ConnectVerified
	int get_ConnectFailReason(void);

	// Specifies the maximum number of seconds to wait for a remote endpoint to accept
	// a TCP connection. The default is 30. A value of 0 or any negative value waits
	// indefinitely.
	// 
	// This timeout applies whenever Ftp2 establishes a TCP connection, including the
	// FTP control connection, FTP data connections, and connections to configured
	// proxy servers.
	// 
	// It covers only TCP connection establishment. It does not apply to TLS
	// handshakes, FTP greetings or replies, authentication, file data, or any other
	// communication after the TCP connection has been accepted.
	// 
	int get_ConnectTimeout(void);
	// Specifies the maximum number of seconds to wait for a remote endpoint to accept
	// a TCP connection. The default is 30. A value of 0 or any negative value waits
	// indefinitely.
	// 
	// This timeout applies whenever Ftp2 establishes a TCP connection, including the
	// FTP control connection, FTP data connections, and connections to configured
	// proxy servers.
	// 
	// It covers only TCP connection establishment. It does not apply to TLS
	// handshakes, FTP greetings or replies, authentication, file data, or any other
	// communication after the TCP connection has been accepted.
	// 
	void put_ConnectTimeout(int newVal);

	// Indicates whether the TCP connection to the FTP server was successfully
	// established during the most recent connection attempt. It does not indicate that
	// FTP authentication succeeded; see LoginVerified[1].
	// 
	// This is a verification result, not a current-socket-state property. It remains
	// true after Disconnect[2] if the preceding connection was successfully
	// established.
	// 
	// 
	// References:
	// [1] #LoginVerified
	// [2] #Disconnect
	bool get_ConnectVerified(void);

	// Controls line-ending conversion when downloading in ASCII transfer mode. The
	// default is 0.
	// 
	// +-------+----------------------------------+
	// | Value |         Downloaded text          |
	// +=======+==================================+
	// | 0     | Leaves line endings as received. |
	// +-------+----------------------------------+
	// | 1     | Converts line endings to CRLF.   |
	// +-------+----------------------------------+
	// | 2     | Converts line endings to LF.     |
	// +-------+----------------------------------+
	// | 3     | Converts line endings to CR.     |
	// +-------+----------------------------------+
	// 
	// Binary mode: This property has no effect on binary transfers. Use binary mode
	// for files whose bytes must be preserved exactly.
	int get_CrlfMode(void);
	// Controls line-ending conversion when downloading in ASCII transfer mode. The
	// default is 0.
	// 
	// +-------+----------------------------------+
	// | Value |         Downloaded text          |
	// +=======+==================================+
	// | 0     | Leaves line endings as received. |
	// +-------+----------------------------------+
	// | 1     | Converts line endings to CRLF.   |
	// +-------+----------------------------------+
	// | 2     | Converts line endings to LF.     |
	// +-------+----------------------------------+
	// | 3     | Converts line endings to CR.     |
	// +-------+----------------------------------+
	// 
	// Binary mode: This property has no effect on binary transfers. Use binary mode
	// for files whose bytes must be preserved exactly.
	void put_CrlfMode(int newVal);

	// Returns the number of bytes received by the current or most recently completed
	// FTP download as a 32-bit unsigned integer. The value is updated while the
	// transfer is in progress and may be read from another thread to display progress.
	// A subsequent upload does not clear the retained download count.
	unsigned long get_CurBytesReceived(void);

	// Returns the number of bytes received by the current or most recently completed
	// FTP download as a 64-bit integer. The value is updated while the transfer is in
	// progress and may be read from another thread to display progress. A subsequent
	// upload does not clear the retained download count.
	__int64 get_CurBytesReceived64(void);

	// Returns the number of bytes received by the current or most recently completed
	// FTP download as a decimal string. The value is updated while the transfer is in
	// progress and may be read from another thread to display progress. A subsequent
	// upload does not clear the retained download count.
	void get_CurBytesReceivedStr(CkString &str);
	// Returns the number of bytes received by the current or most recently completed
	// FTP download as a decimal string. The value is updated while the transfer is in
	// progress and may be read from another thread to display progress. A subsequent
	// upload does not clear the retained download count.
	const char *curBytesReceivedStr(void);

	// Returns the number of bytes sent by the current or most recently completed FTP
	// upload as a 32-bit unsigned integer. The value is updated while the transfer is
	// in progress and may be read from another thread to display progress. A
	// subsequent download does not clear the retained upload count.
	unsigned long get_CurBytesSent(void);

	// Returns the number of bytes sent by the current or most recently completed FTP
	// upload as a 64-bit integer. The value is updated while the transfer is in
	// progress and may be read from another thread to display progress. A subsequent
	// download does not clear the retained upload count.
	__int64 get_CurBytesSent64(void);

	// Returns the number of bytes sent by the current or most recently completed FTP
	// upload as a decimal string. The value is updated while the transfer is in
	// progress and may be read from another thread to display progress. A subsequent
	// download does not clear the retained upload count.
	void get_CurBytesSentStr(CkString &str);
	// Returns the number of bytes sent by the current or most recently completed FTP
	// upload as a decimal string. The value is updated while the transfer is in
	// progress and may be read from another thread to display progress. A subsequent
	// download does not clear the retained upload count.
	const char *curBytesSentStr(void);

	// Specifies the protection level for FTP data connections. The value is compared
	// case-insensitively. The default is control.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | control | Data connections use the same protection state as the control      |
	// |         | connection. If the control connection is unencrypted, no PBSZ or   |
	// |         | PROT commands are sent.                                            |
	// +---------+--------------------------------------------------------------------+
	// | clear   | Data connections are requested as unencrypted. If the control      |
	// |         | connection is also unencrypted, no PBSZ or PROT commands are sent. |
	// |         | If the control connection uses TLS, Chilkat sends PBSZ 0 followed  |
	// |         | by PROT C . If the server rejects PROT C but accepts PROT P ,      |
	// |         | Chilkat falls back to private data protection.                     |
	// +---------+--------------------------------------------------------------------+
	// | private | Data connections are protected with TLS. For an encrypted control  |
	// |         | connection, Chilkat sends PBSZ 0 followed by PROT P .              |
	// +---------+--------------------------------------------------------------------+
	// 
	// Connect[1] sends the required PBSZ and PROT commands. If the server requires
	// login first and replies with 530 Please login with USER and PASS, Chilkat
	// authenticates and automatically retries them. A required protection setup fails
	// only when no acceptable protection level can be established.
	// 
	// Control and data channels: FTP uses one long-lived control connection and a
	// separate data connection for each listing, upload, or download. FTPS can protect
	// these channels independently.
	// 
	// References:
	// [1] #Connect
	void get_DataProtection(CkString &str);
	// Specifies the protection level for FTP data connections. The value is compared
	// case-insensitively. The default is control.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | control | Data connections use the same protection state as the control      |
	// |         | connection. If the control connection is unencrypted, no PBSZ or   |
	// |         | PROT commands are sent.                                            |
	// +---------+--------------------------------------------------------------------+
	// | clear   | Data connections are requested as unencrypted. If the control      |
	// |         | connection is also unencrypted, no PBSZ or PROT commands are sent. |
	// |         | If the control connection uses TLS, Chilkat sends PBSZ 0 followed  |
	// |         | by PROT C . If the server rejects PROT C but accepts PROT P ,      |
	// |         | Chilkat falls back to private data protection.                     |
	// +---------+--------------------------------------------------------------------+
	// | private | Data connections are protected with TLS. For an encrypted control  |
	// |         | connection, Chilkat sends PBSZ 0 followed by PROT P .              |
	// +---------+--------------------------------------------------------------------+
	// 
	// Connect[1] sends the required PBSZ and PROT commands. If the server requires
	// login first and replies with 530 Please login with USER and PASS, Chilkat
	// authenticates and automatically retries them. A required protection setup fails
	// only when no acceptable protection level can be established.
	// 
	// Control and data channels: FTP uses one long-lived control connection and a
	// separate data connection for each listing, upload, or download. FTPS can protect
	// these channels independently.
	// 
	// References:
	// [1] #Connect
	const char *dataProtection(void);
	// Specifies the protection level for FTP data connections. The value is compared
	// case-insensitively. The default is control.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | control | Data connections use the same protection state as the control      |
	// |         | connection. If the control connection is unencrypted, no PBSZ or   |
	// |         | PROT commands are sent.                                            |
	// +---------+--------------------------------------------------------------------+
	// | clear   | Data connections are requested as unencrypted. If the control      |
	// |         | connection is also unencrypted, no PBSZ or PROT commands are sent. |
	// |         | If the control connection uses TLS, Chilkat sends PBSZ 0 followed  |
	// |         | by PROT C . If the server rejects PROT C but accepts PROT P ,      |
	// |         | Chilkat falls back to private data protection.                     |
	// +---------+--------------------------------------------------------------------+
	// | private | Data connections are protected with TLS. For an encrypted control  |
	// |         | connection, Chilkat sends PBSZ 0 followed by PROT P .              |
	// +---------+--------------------------------------------------------------------+
	// 
	// Connect[1] sends the required PBSZ and PROT commands. If the server requires
	// login first and replies with 530 Please login with USER and PASS, Chilkat
	// authenticates and automatically retries them. A required protection setup fails
	// only when no acceptable protection level can be established.
	// 
	// Control and data channels: FTP uses one long-lived control connection and a
	// separate data connection for each listing, upload, or download. FTPS can protect
	// these channels independently.
	// 
	// References:
	// [1] #Connect
	void put_DataProtection(const char *newVal);

	// Specifies the character encoding used only to decode directory-listing and
	// related server-response bytes. It applies to responses from LIST, NLST, and
	// MLSD. It does not affect commands, remote paths, filenames, usernames,
	// passwords, or other text sent to the server.
	// 
	// The default is ANSI. Charset names and the keyword ANSI are case-insensitive.
	// ANSI means the platform's system-default single-byte encoding or default system
	// locale; on Windows, this is the active code page (ACP).
	// 
	// What ANSI means: It does not name one specific charset. It tells Chilkat to use
	// the system-default encoding or default system locale. Typical examples include
	// windows-1252 on Western-language Windows systems, windows-1251 for Cyrillic,
	// windows-1256 for Arabic, and windows-932 (Shift_JIS) for Japanese. On many
	// modern Unix-like systems, the default locale encoding is utf-8. The actual
	// encoding therefore depends on the computer on which the application runs.
	// 
	// Using the wrong encoding can produce incorrectly decoded names without causing
	// the listing operation itself to fail. When AutoOptsUtf8[1] is enabled and UTF-8
	// support is advertised, Chilkat changes this property to utf-8, even if the
	// application previously assigned another value. If UTF-8 is not advertised, the
	// existing value is left unchanged.
	// 
	// 
	// References:
	// [1] #AutoOptsUtf8
	void get_DirListingCharset(CkString &str);
	// Specifies the character encoding used only to decode directory-listing and
	// related server-response bytes. It applies to responses from LIST, NLST, and
	// MLSD. It does not affect commands, remote paths, filenames, usernames,
	// passwords, or other text sent to the server.
	// 
	// The default is ANSI. Charset names and the keyword ANSI are case-insensitive.
	// ANSI means the platform's system-default single-byte encoding or default system
	// locale; on Windows, this is the active code page (ACP).
	// 
	// What ANSI means: It does not name one specific charset. It tells Chilkat to use
	// the system-default encoding or default system locale. Typical examples include
	// windows-1252 on Western-language Windows systems, windows-1251 for Cyrillic,
	// windows-1256 for Arabic, and windows-932 (Shift_JIS) for Japanese. On many
	// modern Unix-like systems, the default locale encoding is utf-8. The actual
	// encoding therefore depends on the computer on which the application runs.
	// 
	// Using the wrong encoding can produce incorrectly decoded names without causing
	// the listing operation itself to fail. When AutoOptsUtf8[1] is enabled and UTF-8
	// support is advertised, Chilkat changes this property to utf-8, even if the
	// application previously assigned another value. If UTF-8 is not advertised, the
	// existing value is left unchanged.
	// 
	// 
	// References:
	// [1] #AutoOptsUtf8
	const char *dirListingCharset(void);
	// Specifies the character encoding used only to decode directory-listing and
	// related server-response bytes. It applies to responses from LIST, NLST, and
	// MLSD. It does not affect commands, remote paths, filenames, usernames,
	// passwords, or other text sent to the server.
	// 
	// The default is ANSI. Charset names and the keyword ANSI are case-insensitive.
	// ANSI means the platform's system-default single-byte encoding or default system
	// locale; on Windows, this is the active code page (ACP).
	// 
	// What ANSI means: It does not name one specific charset. It tells Chilkat to use
	// the system-default encoding or default system locale. Typical examples include
	// windows-1252 on Western-language Windows systems, windows-1251 for Cyrillic,
	// windows-1256 for Arabic, and windows-932 (Shift_JIS) for Japanese. On many
	// modern Unix-like systems, the default locale encoding is utf-8. The actual
	// encoding therefore depends on the computer on which the application runs.
	// 
	// Using the wrong encoding can produce incorrectly decoded names without causing
	// the listing operation itself to fail. When AutoOptsUtf8[1] is enabled and UTF-8
	// support is advertised, Chilkat changes this property to utf-8, even if the
	// application previously assigned another value. If UTF-8 is not advertised, the
	// existing value is left unchanged.
	// 
	// 
	// References:
	// [1] #AutoOptsUtf8
	void put_DirListingCharset(const char *newVal);

	// Returns the current average download rate in bytes per second. The value is
	// updated during synchronous and asynchronous downloads and describes the download
	// in progress or the most recently completed download. A subsequent upload does
	// not clear the retained download rate.
	int get_DownloadTransferRate(void);

	// Controls automatic resolution of credential values from secure operating-system
	// storage. The default is false. When enabled, supported password properties may
	// contain a secret specification beginning with!! instead of the literal
	// password.!![appName|]service[|domain]|username
	// 
	// Secret specifications are supported by Password[1], HttpProxyPassword[2],
	// ProxyPassword[3], and SocksPassword[4]. Chilkat resolves them through Windows
	// Credential Manager on Windows or Apple Keychain on macOS.
	// 
	// Credential handling: This feature avoids embedding plaintext credentials in
	// source code or configuration. Access to the secret still depends on the
	// permissions of the process and operating-system account.
	// 
	// References:
	// [1] #Password
	// [2] #HttpProxyPassword
	// [3] #ProxyPassword
	// [4] #SocksPassword
	bool get_EnableSecrets(void);
	// Controls automatic resolution of credential values from secure operating-system
	// storage. The default is false. When enabled, supported password properties may
	// contain a secret specification beginning with!! instead of the literal
	// password.!![appName|]service[|domain]|username
	// 
	// Secret specifications are supported by Password[1], HttpProxyPassword[2],
	// ProxyPassword[3], and SocksPassword[4]. Chilkat resolves them through Windows
	// Credential Manager on Windows or Apple Keychain on macOS.
	// 
	// Credential handling: This feature avoids embedding plaintext credentials in
	// source code or configuration. Access to the secret still depends on the
	// permissions of the process and operating-system account.
	// 
	// References:
	// [1] #Password
	// [2] #HttpProxyPassword
	// [3] #ProxyPassword
	// [4] #SocksPassword
	void put_EnableSecrets(bool newVal);

	// Specifies the IPv4 address advertised to the server for active-mode data
	// connections. This property affects both PORT and EPRT. Supply a numeric IPv4
	// address, the keyword control, or an IPv4 address prefixed with bind-. IPv6
	// values are not accepted. Keywords and prefixes are case-insensitive.
	//     * control uses the local IPv4 address of the established FTP control socket.
	//     * bind-192.0.2.10 advertises the address and also binds the local
	//     data-listener socket to that address.
	//     * A plain IPv4 address changes the address sent in PORT or EPRT without
	//     explicitly binding the listener to that address.
	// 
	// If ClientIpAddress[1] is set, this property should specify the same local
	// address. When a bind- value is used with ActivePortRangeStart[2] and
	// ActivePortRangeEnd[3], Chilkat binds to the specified address while searching
	// the effective range for an available port.
	// 
	// Active mode setting: This property is used only when Passive[4] is false.
	// Passive mode is typically preferred because the client initiates both the
	// control and data connections, making it much friendlier to client-side firewalls
	// and NAT.
	// NAT caution: The advertised address must be reachable from the FTP server.
	// Incorrect active-mode addressing commonly causes the control command to succeed
	// while the subsequent data connection fails.
	// 
	// References:
	// [1] #ClientIpAddress
	// [2] #ActivePortRangeStart
	// [3] #ActivePortRangeEnd
	// [4] #Passive
	void get_ForcePortIpAddress(CkString &str);
	// Specifies the IPv4 address advertised to the server for active-mode data
	// connections. This property affects both PORT and EPRT. Supply a numeric IPv4
	// address, the keyword control, or an IPv4 address prefixed with bind-. IPv6
	// values are not accepted. Keywords and prefixes are case-insensitive.
	//     * control uses the local IPv4 address of the established FTP control socket.
	//     * bind-192.0.2.10 advertises the address and also binds the local
	//     data-listener socket to that address.
	//     * A plain IPv4 address changes the address sent in PORT or EPRT without
	//     explicitly binding the listener to that address.
	// 
	// If ClientIpAddress[1] is set, this property should specify the same local
	// address. When a bind- value is used with ActivePortRangeStart[2] and
	// ActivePortRangeEnd[3], Chilkat binds to the specified address while searching
	// the effective range for an available port.
	// 
	// Active mode setting: This property is used only when Passive[4] is false.
	// Passive mode is typically preferred because the client initiates both the
	// control and data connections, making it much friendlier to client-side firewalls
	// and NAT.
	// NAT caution: The advertised address must be reachable from the FTP server.
	// Incorrect active-mode addressing commonly causes the control command to succeed
	// while the subsequent data connection fails.
	// 
	// References:
	// [1] #ClientIpAddress
	// [2] #ActivePortRangeStart
	// [3] #ActivePortRangeEnd
	// [4] #Passive
	const char *forcePortIpAddress(void);
	// Specifies the IPv4 address advertised to the server for active-mode data
	// connections. This property affects both PORT and EPRT. Supply a numeric IPv4
	// address, the keyword control, or an IPv4 address prefixed with bind-. IPv6
	// values are not accepted. Keywords and prefixes are case-insensitive.
	//     * control uses the local IPv4 address of the established FTP control socket.
	//     * bind-192.0.2.10 advertises the address and also binds the local
	//     data-listener socket to that address.
	//     * A plain IPv4 address changes the address sent in PORT or EPRT without
	//     explicitly binding the listener to that address.
	// 
	// If ClientIpAddress[1] is set, this property should specify the same local
	// address. When a bind- value is used with ActivePortRangeStart[2] and
	// ActivePortRangeEnd[3], Chilkat binds to the specified address while searching
	// the effective range for an available port.
	// 
	// Active mode setting: This property is used only when Passive[4] is false.
	// Passive mode is typically preferred because the client initiates both the
	// control and data connections, making it much friendlier to client-side firewalls
	// and NAT.
	// NAT caution: The advertised address must be reachable from the FTP server.
	// Incorrect active-mode addressing commonly causes the control command to succeed
	// while the subsequent data connection fails.
	// 
	// References:
	// [1] #ClientIpAddress
	// [2] #ActivePortRangeStart
	// [3] #ActivePortRangeEnd
	// [4] #Passive
	void put_ForcePortIpAddress(const char *newVal);

	// Contains the initial FTP server greeting received for the most recent connection
	// immediately after the TCP or implicit-TLS connection was established. It
	// normally begins with reply code 220 and may include server identification or
	// policy information.
	// 
	// The value remains available after Disconnect[1].
	// 
	// 
	// References:
	// [1] #Disconnect
	void get_Greeting(CkString &str);
	// Contains the initial FTP server greeting received for the most recent connection
	// immediately after the TCP or implicit-TLS connection was established. It
	// normally begins with reply code 220 and may include server identification or
	// policy information.
	// 
	// The value remains available after Disconnect[1].
	// 
	// 
	// References:
	// [1] #Disconnect
	const char *greeting(void);

	// Indicates whether the FTP server advertised support for MODE Z, which compresses
	// FTP data streams using the DEFLATE algorithm.
	// 
	// This property becomes meaningful after Chilkat has processed a successful FEAT
	// response, either automatically because AutoFeat[1] is true or through an
	// explicit call to Feat[2]. Before capability discovery, a value of false does
	// not establish that the server lacks MODE Z support.
	// 
	// Call SetModeZ[3] after connecting to enable or disable compressed transfer mode.
	// 
	// 
	// References:
	// [1] #AutoFeat
	// [2] #Feat
	// [3] #SetModeZ
	bool get_HasModeZ(void);

	// Specifies the interval, in milliseconds, between AbortCheck[1] callbacks during
	// methods that support periodic cancellation checks. The default is 0, which
	// disables these callbacks.
	// 
	// Smaller values can improve cancellation responsiveness but increase callback
	// overhead. Methods that complete quickly may not generate a callback.
	// 
	// 
	// References:
	// [1] #AbortCheck
	int get_HeartbeatMs(void);
	// Specifies the interval, in milliseconds, between AbortCheck[1] callbacks during
	// methods that support periodic cancellation checks. The default is 0, which
	// disables these callbacks.
	// 
	// Smaller values can improve cancellation responsiveness but increase callback
	// overhead. Methods that complete quickly may not generate a callback.
	// 
	// 
	// References:
	// [1] #AbortCheck
	void put_HeartbeatMs(int newVal);

	// Specifies the FTP server hostname or numeric IPv4/IPv6 address. Do not include a
	// URL scheme, path, or port; configure the port separately with Port.
	void get_Hostname(CkString &str);
	// Specifies the FTP server hostname or numeric IPv4/IPv6 address. Do not include a
	// URL scheme, path, or port; configure the port separately with Port.
	const char *hostname(void);
	// Specifies the FTP server hostname or numeric IPv4/IPv6 address. Do not include a
	// URL scheme, path, or port; configure the port separately with Port.
	void put_Hostname(const char *newVal);

	// Specifies the authentication method used with an HTTP proxy. Supported values
	// are Basic and NTLM. Leave empty when the proxy does not require authentication.
	void get_HttpProxyAuthMethod(CkString &str);
	// Specifies the authentication method used with an HTTP proxy. Supported values
	// are Basic and NTLM. Leave empty when the proxy does not require authentication.
	const char *httpProxyAuthMethod(void);
	// Specifies the authentication method used with an HTTP proxy. Supported values
	// are Basic and NTLM. Leave empty when the proxy does not require authentication.
	void put_HttpProxyAuthMethod(const char *newVal);

	// Specifies the Windows domain used for NTLM authentication to the HTTP proxy. It
	// is ignored for Basic authentication and may be left empty when the username
	// already includes the required domain information.
	void get_HttpProxyDomain(CkString &str);
	// Specifies the Windows domain used for NTLM authentication to the HTTP proxy. It
	// is ignored for Basic authentication and may be left empty when the username
	// already includes the required domain information.
	const char *httpProxyDomain(void);
	// Specifies the Windows domain used for NTLM authentication to the HTTP proxy. It
	// is ignored for Basic authentication and may be left empty when the username
	// already includes the required domain information.
	void put_HttpProxyDomain(const char *newVal);

	// Specifies the hostname or numeric IP address of an HTTP proxy used to establish
	// the FTP control connection. Leave empty to connect directly.
	void get_HttpProxyHostname(CkString &str);
	// Specifies the hostname or numeric IP address of an HTTP proxy used to establish
	// the FTP control connection. Leave empty to connect directly.
	const char *httpProxyHostname(void);
	// Specifies the hostname or numeric IP address of an HTTP proxy used to establish
	// the FTP control connection. Leave empty to connect directly.
	void put_HttpProxyHostname(const char *newVal);

	// Specifies the password used to authenticate to the HTTP proxy. It is used
	// together with HttpProxyUsername and HttpProxyAuthMethod.
	void get_HttpProxyPassword(CkString &str);
	// Specifies the password used to authenticate to the HTTP proxy. It is used
	// together with HttpProxyUsername and HttpProxyAuthMethod.
	const char *httpProxyPassword(void);
	// Specifies the password used to authenticate to the HTTP proxy. It is used
	// together with HttpProxyUsername and HttpProxyAuthMethod.
	void put_HttpProxyPassword(const char *newVal);

	// Specifies the TCP port of the HTTP proxy. Common values include 8080 and 3128,
	// but the correct value is determined by the proxy configuration.
	int get_HttpProxyPort(void);
	// Specifies the TCP port of the HTTP proxy. Common values include 8080 and 3128,
	// but the correct value is determined by the proxy configuration.
	void put_HttpProxyPort(int newVal);

	// Specifies the username used to authenticate to the HTTP proxy. Leave empty when
	// the proxy allows unauthenticated connections.
	void get_HttpProxyUsername(CkString &str);
	// Specifies the username used to authenticate to the HTTP proxy. Leave empty when
	// the proxy allows unauthenticated connections.
	const char *httpProxyUsername(void);
	// Specifies the username used to authenticate to the HTTP proxy. Leave empty when
	// the proxy allows unauthenticated connections.
	void put_HttpProxyUsername(const char *newVal);

	// Specifies the maximum period, in milliseconds, during which no control-channel
	// response or forward upload progress is observed. The default is 60000. A value
	// of 0 or any negative value waits indefinitely.
	// 
	// During an upload, the same limit applies when the operating-system send buffer
	// remains full because the server is not consuming data.
	// 
	int get_IdleTimeoutMs(void);
	// Specifies the maximum period, in milliseconds, during which no control-channel
	// response or forward upload progress is observed. The default is 60000. A value
	// of 0 or any negative value waits indefinitely.
	// 
	// During an upload, the same limit applies when the operating-system send buffer
	// remains full because the server is not consuming data.
	// 
	void put_IdleTimeoutMs(int newVal);

	// Deprecated. Indicates whether the object appears to be connected and
	// authenticated. Reading this property may send NOOP to test the session. Use
	// CheckConnection[1] instead.
	// 
	// References:
	// [1] #CheckConnection
	bool get_IsConnected(void);

	// Controls collection of an in-memory FTP protocol log. When enabled, commands and
	// server replies are available in SessionLog[1]. Use ClearSessionLog[2] to discard
	// previously collected text.
	// 
	// References:
	// [1] #SessionLog
	// [2] #ClearSessionLog
	bool get_KeepSessionLog(void);
	// Controls collection of an in-memory FTP protocol log. When enabled, commands and
	// server replies are available in SessionLog[1]. Use ClearSessionLog[2] to discard
	// previously collected text.
	// 
	// References:
	// [1] #SessionLog
	// [2] #ClearSessionLog
	void put_KeepSessionLog(bool newVal);

	// Controls an additional keepalive measure for very long uploads and downloads.
	// The default is false. When enabled, Chilkat sends NOOP on the FTP control
	// channel once per minute while a long-running file transfer is in progress.
	// 
	// This helps prevent the otherwise idle control connection from being closed by
	// the server, a firewall, or a NAT device while file data continues on the
	// separate data connection.
	// 
	// FTP connection model: File contents travel over a data connection, while FTP
	// commands and replies use the control connection. During a long transfer, the
	// control connection may appear idle even though the data connection remains
	// active.
	bool get_LargeFileMeasures(void);
	// Controls an additional keepalive measure for very long uploads and downloads.
	// The default is false. When enabled, Chilkat sends NOOP on the FTP control
	// channel once per minute while a long-running file transfer is in progress.
	// 
	// This helps prevent the otherwise idle control connection from being closed by
	// the server, a firewall, or a NAT device while file data continues on the
	// separate data connection.
	// 
	// FTP connection model: File contents travel over a data connection, while FTP
	// commands and replies use the control connection. During a long transfer, the
	// control connection may appear idle even though the data connection remains
	// active.
	void put_LargeFileMeasures(bool newVal);

	// Contains the most recent FTP control-channel reply, including its three-digit
	// status code and message. Examples include 250 Directory successfully changed.
	// and 550 Failed to change directory.
	// 
	// The value is updated by successful as well as failed commands. After
	// Disconnect[1], it normally contains the server's reply to QUIT, such as 221
	// Goodbye.. Some replies are multiline; use this property together with the method
	// return value and LastErrorText when diagnosing a failure.
	// 
	// 
	// References:
	// [1] #Disconnect
	void get_LastReply(CkString &str);
	// Contains the most recent FTP control-channel reply, including its three-digit
	// status code and message. Examples include 250 Directory successfully changed.
	// and 550 Failed to change directory.
	// 
	// The value is updated by successful as well as failed commands. After
	// Disconnect[1], it normally contains the server's reply to QUIT, such as 221
	// Goodbye.. Some replies are multiline; use this property together with the method
	// return value and LastErrorText when diagnosing a failure.
	// 
	// 
	// References:
	// [1] #Disconnect
	const char *lastReply(void);

	// Specifies an option string appended literally to the legacy LIST command, such
	// as -a. For example, setting this property to -a sends LIST -a. Chilkat does not
	// interpret the option locally. It has no effect when AllowMlsd[1] causes MLSD to
	// be used or when PreferNlst[2] causes NLST to be used.
	// 
	// LIST options and output formats are not standardized by FTP. Many UNIX-like
	// servers pass the option to an underlying ls implementation, while other servers
	// may reject or interpret it differently.
	// 
	// 
	// References:
	// [1] #AllowMlsd
	// [2] #PreferNlst
	void get_ListOption(CkString &str);
	// Specifies an option string appended literally to the legacy LIST command, such
	// as -a. For example, setting this property to -a sends LIST -a. Chilkat does not
	// interpret the option locally. It has no effect when AllowMlsd[1] causes MLSD to
	// be used or when PreferNlst[2] causes NLST to be used.
	// 
	// LIST options and output formats are not standardized by FTP. Many UNIX-like
	// servers pass the option to an underlying ls implementation, while other servers
	// may reject or interpret it differently.
	// 
	// 
	// References:
	// [1] #AllowMlsd
	// [2] #PreferNlst
	const char *listOption(void);
	// Specifies an option string appended literally to the legacy LIST command, such
	// as -a. For example, setting this property to -a sends LIST -a. Chilkat does not
	// interpret the option locally. It has no effect when AllowMlsd[1] causes MLSD to
	// be used or when PreferNlst[2] causes NLST to be used.
	// 
	// LIST options and output formats are not standardized by FTP. Many UNIX-like
	// servers pass the option to an underlying ls implementation, while other servers
	// may reject or interpret it differently.
	// 
	// 
	// References:
	// [1] #AllowMlsd
	// [2] #PreferNlst
	void put_ListOption(const char *newVal);

	// Specifies the case-insensitive wildcard pattern applied to the cached listing of
	// the current remote directory. The default is *. It affects methods such as
	// GetDirCount[1], GetFilename[2], GetIsDirectory[3], GetSize[4], and the listing
	// timestamp methods.
	// 
	// Chilkat retrieves the full directory listing and applies this pattern locally;
	// the pattern is not appended to LIST, NLST, or MLSD. For example, *.txt also
	// matches a name such as UPPER.TXT.
	// 
	// Specify only a name pattern, such as *.txt. To list subdir/*.txt, first call
	// ChangeRemoteDir[5] for subdir, then set this property to *.txt.
	// 
	// Listing cache: Changing this property invalidates the cached directory listing,
	// so the next indexed listing call retrieves a fresh listing from the server.
	// 
	// References:
	// [1] #GetDirCount
	// [2] #GetFilename
	// [3] #GetIsDirectory
	// [4] #GetSize
	// [5] #ChangeRemoteDir
	void get_ListPattern(CkString &str);
	// Specifies the case-insensitive wildcard pattern applied to the cached listing of
	// the current remote directory. The default is *. It affects methods such as
	// GetDirCount[1], GetFilename[2], GetIsDirectory[3], GetSize[4], and the listing
	// timestamp methods.
	// 
	// Chilkat retrieves the full directory listing and applies this pattern locally;
	// the pattern is not appended to LIST, NLST, or MLSD. For example, *.txt also
	// matches a name such as UPPER.TXT.
	// 
	// Specify only a name pattern, such as *.txt. To list subdir/*.txt, first call
	// ChangeRemoteDir[5] for subdir, then set this property to *.txt.
	// 
	// Listing cache: Changing this property invalidates the cached directory listing,
	// so the next indexed listing call retrieves a fresh listing from the server.
	// 
	// References:
	// [1] #GetDirCount
	// [2] #GetFilename
	// [3] #GetIsDirectory
	// [4] #GetSize
	// [5] #ChangeRemoteDir
	const char *listPattern(void);
	// Specifies the case-insensitive wildcard pattern applied to the cached listing of
	// the current remote directory. The default is *. It affects methods such as
	// GetDirCount[1], GetFilename[2], GetIsDirectory[3], GetSize[4], and the listing
	// timestamp methods.
	// 
	// Chilkat retrieves the full directory listing and applies this pattern locally;
	// the pattern is not appended to LIST, NLST, or MLSD. For example, *.txt also
	// matches a name such as UPPER.TXT.
	// 
	// Specify only a name pattern, such as *.txt. To list subdir/*.txt, first call
	// ChangeRemoteDir[5] for subdir, then set this property to *.txt.
	// 
	// Listing cache: Changing this property invalidates the cached directory listing,
	// so the next indexed listing call retrieves a fresh listing from the server.
	// 
	// References:
	// [1] #GetDirCount
	// [2] #GetFilename
	// [3] #GetIsDirectory
	// [4] #GetSize
	// [5] #ChangeRemoteDir
	void put_ListPattern(const char *newVal);

	// Indicates whether FTP authentication succeeded during the most recent login
	// attempt. A TCP connection may be established even when this property is false;
	// for example, rejected credentials leave ConnectVerified[1] true and this
	// property false.
	// 
	// This is a verification result, not a current-socket-state property. It remains
	// true after Disconnect[2] if the preceding session was successfully
	// authenticated.
	// 
	// 
	// References:
	// [1] #ConnectVerified
	// [2] #Disconnect
	bool get_LoginVerified(void);

	// Indicates whether the most recent download method received some, but not all, of
	// the remote file. It is false when no data was received or when the complete
	// file was received.
	// 
	// This property helps distinguish a mid-transfer failure from a failure that
	// occurred before any file data arrived.
	// 
	bool get_PartialTransfer(void);

	// Selects the FTP data-connection mode. The default is true for passive mode.
	// Set to false for active mode.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Mode   |                        Connection direction                        |
	// +=========+====================================================================+
	// | Passive | The server listens and the client connects to the server for each  |
	// |         | data transfer.                                                     |
	// +---------+--------------------------------------------------------------------+
	// | Active  | The client listens and the server connects back to the client.     |
	// +---------+--------------------------------------------------------------------+
	// 
	// Typical choice: Passive mode. Passive mode is typically used because it is much
	// friendlier to client-side firewalls and NAT (Network Address Translation). In
	// active mode, the server attempts to initiate a data connection back to the
	// client, which many client-side firewalls block. In passive mode, the client
	// initiates both the control and data connections to the server.
	bool get_Passive(void);
	// Selects the FTP data-connection mode. The default is true for passive mode.
	// Set to false for active mode.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Mode   |                        Connection direction                        |
	// +=========+====================================================================+
	// | Passive | The server listens and the client connects to the server for each  |
	// |         | data transfer.                                                     |
	// +---------+--------------------------------------------------------------------+
	// | Active  | The client listens and the server connects back to the client.     |
	// +---------+--------------------------------------------------------------------+
	// 
	// Typical choice: Passive mode. Passive mode is typically used because it is much
	// friendlier to client-side firewalls and NAT (Network Address Translation). In
	// active mode, the server attempts to initiate a data connection back to the
	// client, which many client-side firewalls block. In passive mode, the client
	// initiates both the control and data connections to the server.
	void put_Passive(bool newVal);

	// Controls how the address returned by PASV is handled. The default is true.
	// When enabled, Chilkat ignores the IP address embedded in the server's PASV reply
	// and connects to the control connection's server address using only the returned
	// port.
	// 
	// This avoids private or otherwise unreachable addresses returned by FTP servers
	// behind NAT, especially when TLS prevents a network device from rewriting the
	// reply.
	// 
	bool get_PassiveUseHostAddr(void);
	// Controls how the address returned by PASV is handled. The default is true.
	// When enabled, Chilkat ignores the IP address embedded in the server's PASV reply
	// and connects to the control connection's server address using only the returned
	// port.
	// 
	// This avoids private or otherwise unreachable addresses returned by FTP servers
	// behind NAT, especially when TLS prevents a network device from rewriting the
	// reply.
	// 
	void put_PassiveUseHostAddr(bool newVal);

	// Specifies the password used for FTP authentication. For anonymous FTP, this is
	// commonly an email address or arbitrary identifying string. Applications that
	// already store the password in a SecureString should use SetSecurePassword[1]
	// instead.
	// 
	// References:
	// [1] #SetSecurePassword
	void get_Password(CkString &str);
	// Specifies the password used for FTP authentication. For anonymous FTP, this is
	// commonly an email address or arbitrary identifying string. Applications that
	// already store the password in a SecureString should use SetSecurePassword[1]
	// instead.
	// 
	// References:
	// [1] #SetSecurePassword
	const char *password(void);
	// Specifies the password used for FTP authentication. For anonymous FTP, this is
	// commonly an email address or arbitrary identifying string. Applications that
	// already store the password in a SecureString should use SetSecurePassword[1]
	// instead.
	// 
	// References:
	// [1] #SetSecurePassword
	void put_Password(const char *newVal);

	// Specifies the integer value that represents 100 percent in PercentDone
	// callbacks. The default is 100. For example, a scale of 1000 allows
	// one-tenth-percent resolution, where callback value 453 represents 45.3 percent.
	// 
	// The value is limited to the range 10 through 100000. This property is relevant
	// only in environments that support event callbacks and only for operations whose
	// total work can be measured.
	// 
	int get_PercentDoneScale(void);
	// Specifies the integer value that represents 100 percent in PercentDone
	// callbacks. The default is 100. For example, a scale of 1000 allows
	// one-tenth-percent resolution, where callback value 453 represents 45.3 percent.
	// 
	// The value is limited to the range 10 through 100000. This property is relevant
	// only in environments that support event callbacks and only for operations whose
	// total work can be measured.
	// 
	void put_PercentDoneScale(int newVal);

	// Specifies the FTP server port. Port 21 is conventionally used for plain FTP or
	// explicit FTPS, and port 990 is conventionally used for implicit FTPS.
	// 
	// When AutoFix[1] is true, only these two port numbers cause automatic changes
	// to Ssl[2], AuthSsl[3], and AuthTls[4]. A custom port leaves all three TLS-mode
	// properties unchanged.
	// 
	// 
	// References:
	// [1] #AutoFix
	// [2] #Ssl
	// [3] #AuthSsl
	// [4] #AuthTls
	int get_Port(void);
	// Specifies the FTP server port. Port 21 is conventionally used for plain FTP or
	// explicit FTPS, and port 990 is conventionally used for implicit FTPS.
	// 
	// When AutoFix[1] is true, only these two port numbers cause automatic changes
	// to Ssl[2], AuthSsl[3], and AuthTls[4]. A custom port leaves all three TLS-mode
	// properties unchanged.
	// 
	// 
	// References:
	// [1] #AutoFix
	// [2] #Ssl
	// [3] #AuthSsl
	// [4] #AuthTls
	void put_Port(int newVal);

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

	// Controls whether NLST is preferred over LIST when a legacy directory listing is
	// required. The default is false. This property is consulted only when
	// AllowMlsd[1] does not result in MLSD being used.
	// 
	// NLST generally returns names only. Do not rely on indexed sizes, timestamps,
	// ownership, group, or permission information after an NLST listing. Because NLST
	// does not reliably identify entry types, Chilkat may send additional commands,
	// such as directory-change tests, to determine which names are directories.
	// 
	// When to use: Enable this only for a server whose LIST output truncates or
	// corrupts names. Keep AllowMlsd[1] enabled whenever possible because MLSD is the
	// standardized machine-readable listing command.
	// 
	// References:
	// [1] #AllowMlsd
	bool get_PreferNlst(void);
	// Controls whether NLST is preferred over LIST when a legacy directory listing is
	// required. The default is false. This property is consulted only when
	// AllowMlsd[1] does not result in MLSD being used.
	// 
	// NLST generally returns names only. Do not rely on indexed sizes, timestamps,
	// ownership, group, or permission information after an NLST listing. Because NLST
	// does not reliably identify entry types, Chilkat may send additional commands,
	// such as directory-change tests, to determine which names are directories.
	// 
	// When to use: Enable this only for a server whose LIST output truncates or
	// corrupts names. Keep AllowMlsd[1] enabled whenever possible because MLSD is the
	// standardized machine-readable listing command.
	// 
	// References:
	// [1] #AllowMlsd
	void put_PreferNlst(bool newVal);

	// Specifies the expected size, in bytes, of the next file downloaded by GetFile[1]
	// when the size is not otherwise known. Chilkat uses the value to calculate
	// percentage progress.
	// 
	// This is a one-shot setting. It is consumed by the next applicable download and
	// automatically reset to 0. Set it immediately before the download. When a nonzero
	// value is supplied, Chilkat does not need the additional size query controlled by
	// AutoGetSizeForProgress[2].
	// 
	// If this property is zero, percentage progress may still be available when the
	// server's preliminary transfer reply includes the file size.
	// 
	// 
	// References:
	// [1] #GetFile
	// [2] #AutoGetSizeForProgress
	int get_ProgressMonSize(void);
	// Specifies the expected size, in bytes, of the next file downloaded by GetFile[1]
	// when the size is not otherwise known. Chilkat uses the value to calculate
	// percentage progress.
	// 
	// This is a one-shot setting. It is consumed by the next applicable download and
	// automatically reset to 0. Set it immediately before the download. When a nonzero
	// value is supplied, Chilkat does not need the additional size query controlled by
	// AutoGetSizeForProgress[2].
	// 
	// If this property is zero, percentage progress may still be available when the
	// server's preliminary transfer reply includes the file size.
	// 
	// 
	// References:
	// [1] #GetFile
	// [2] #AutoGetSizeForProgress
	void put_ProgressMonSize(int newVal);

	// The 64-bit form of ProgressMonSize[1]. Specifies the expected size, in bytes, of
	// the next download when the value may exceed the 32-bit integer range. It is
	// consumed by the next applicable download and automatically reset to 0.
	// 
	// References:
	// [1] #ProgressMonSize
	__int64 get_ProgressMonSize64(void);
	// The 64-bit form of ProgressMonSize[1]. Specifies the expected size, in bytes, of
	// the next download when the value may exceed the 32-bit integer range. It is
	// consumed by the next applicable download and automatically reset to 0.
	// 
	// References:
	// [1] #ProgressMonSize
	void put_ProgressMonSize64(__int64 newVal);

	// Specifies the hostname or IP address of a traditional FTP application proxy or
	// firewall. This is distinct from an HTTP CONNECT proxy and from a SOCKS proxy.
	// The login sequence is selected by ProxyMethod.
	void get_ProxyHostname(CkString &str);
	// Specifies the hostname or IP address of a traditional FTP application proxy or
	// firewall. This is distinct from an HTTP CONNECT proxy and from a SOCKS proxy.
	// The login sequence is selected by ProxyMethod.
	const char *proxyHostname(void);
	// Specifies the hostname or IP address of a traditional FTP application proxy or
	// firewall. This is distinct from an HTTP CONNECT proxy and from a SOCKS proxy.
	// The login sequence is selected by ProxyMethod.
	void put_ProxyHostname(const char *newVal);

	// Selects the login sequence required by a traditional FTP proxy or firewall. The
	// default is 0, meaning no FTP proxy. Configure ProxyHostname[1], ProxyPort[2],
	// and the required proxy credentials before connecting.
	// 
	// +---------------------------+-------------------------------------------+
	// |           Value           |               Sequence sent               |
	// +===========================+===========================================+
	// | 1 — SITE                  | USER ProxyUsername                        |
	// |                           | PASS ProxyPassword                        |
	// |                           | SITE Hostname                             |
	// |                           | USER Username                             |
	// |                           | PASS Password                             |
	// +---------------------------+-------------------------------------------+
	// | 2 — USER user@site        | USER Username@Hostname:Port               |
	// |                           | PASS Password                             |
	// +---------------------------+-------------------------------------------+
	// | 3 — USER with proxy login | USER ProxyUsername                        |
	// |                           | PASS ProxyPassword                        |
	// |                           | USER Username@Hostname:Port               |
	// |                           | PASS Password                             |
	// +---------------------------+-------------------------------------------+
	// | 4 — USER/PASS/ACCT        | USER Username@Hostname:Port ProxyUsername |
	// |                           | PASS Password                             |
	// |                           | ACCT ProxyPassword                        |
	// +---------------------------+-------------------------------------------+
	// | 5 — OPEN                  | USER ProxyUsername                        |
	// |                           | PASS ProxyPassword                        |
	// |                           | OPEN Hostname                             |
	// |                           | USER Username                             |
	// |                           | PASS Password                             |
	// +---------------------------+-------------------------------------------+
	// | 6 — firewall ID           | USER ProxyUsername@Hostname               |
	// |                           | USER Username                             |
	// |                           | PASS Password                             |
	// +---------------------------+-------------------------------------------+
	// | 7                         | USER ProxyUsername                        |
	// |                           | USER ProxyPassword                        |
	// |                           | SITE Hostname:Port                        |
	// |                           | USER Username                             |
	// |                           | PASS Password                             |
	// +---------------------------+-------------------------------------------+
	// | 8                         | USER Username@ProxyUsername@Hostname      |
	// |                           | PASS Password@ProxyPassword               |
	// +---------------------------+-------------------------------------------+
	// | 9                         | ProxyUsername                             |
	// |                           | ProxyPassword                             |
	// |                           | Username                                  |
	// |                           | Password                                  |
	// +---------------------------+-------------------------------------------+
	// 
	// Server-specific feature: These sequences describe historical FTP firewall
	// conventions, not one standardized proxy protocol. Use the value required by the
	// proxy administrator.
	// 
	// References:
	// [1] #ProxyHostname
	// [2] #ProxyPort
	int get_ProxyMethod(void);
	// Selects the login sequence required by a traditional FTP proxy or firewall. The
	// default is 0, meaning no FTP proxy. Configure ProxyHostname[1], ProxyPort[2],
	// and the required proxy credentials before connecting.
	// 
	// +---------------------------+-------------------------------------------+
	// |           Value           |               Sequence sent               |
	// +===========================+===========================================+
	// | 1 — SITE                  | USER ProxyUsername                        |
	// |                           | PASS ProxyPassword                        |
	// |                           | SITE Hostname                             |
	// |                           | USER Username                             |
	// |                           | PASS Password                             |
	// +---------------------------+-------------------------------------------+
	// | 2 — USER user@site        | USER Username@Hostname:Port               |
	// |                           | PASS Password                             |
	// +---------------------------+-------------------------------------------+
	// | 3 — USER with proxy login | USER ProxyUsername                        |
	// |                           | PASS ProxyPassword                        |
	// |                           | USER Username@Hostname:Port               |
	// |                           | PASS Password                             |
	// +---------------------------+-------------------------------------------+
	// | 4 — USER/PASS/ACCT        | USER Username@Hostname:Port ProxyUsername |
	// |                           | PASS Password                             |
	// |                           | ACCT ProxyPassword                        |
	// +---------------------------+-------------------------------------------+
	// | 5 — OPEN                  | USER ProxyUsername                        |
	// |                           | PASS ProxyPassword                        |
	// |                           | OPEN Hostname                             |
	// |                           | USER Username                             |
	// |                           | PASS Password                             |
	// +---------------------------+-------------------------------------------+
	// | 6 — firewall ID           | USER ProxyUsername@Hostname               |
	// |                           | USER Username                             |
	// |                           | PASS Password                             |
	// +---------------------------+-------------------------------------------+
	// | 7                         | USER ProxyUsername                        |
	// |                           | USER ProxyPassword                        |
	// |                           | SITE Hostname:Port                        |
	// |                           | USER Username                             |
	// |                           | PASS Password                             |
	// +---------------------------+-------------------------------------------+
	// | 8                         | USER Username@ProxyUsername@Hostname      |
	// |                           | PASS Password@ProxyPassword               |
	// +---------------------------+-------------------------------------------+
	// | 9                         | ProxyUsername                             |
	// |                           | ProxyPassword                             |
	// |                           | Username                                  |
	// |                           | Password                                  |
	// +---------------------------+-------------------------------------------+
	// 
	// Server-specific feature: These sequences describe historical FTP firewall
	// conventions, not one standardized proxy protocol. Use the value required by the
	// proxy administrator.
	// 
	// References:
	// [1] #ProxyHostname
	// [2] #ProxyPort
	void put_ProxyMethod(int newVal);

	// Specifies the password used to authenticate to a traditional FTP proxy or
	// firewall. Its placement in the login exchange depends on ProxyMethod.
	void get_ProxyPassword(CkString &str);
	// Specifies the password used to authenticate to a traditional FTP proxy or
	// firewall. Its placement in the login exchange depends on ProxyMethod.
	const char *proxyPassword(void);
	// Specifies the password used to authenticate to a traditional FTP proxy or
	// firewall. Its placement in the login exchange depends on ProxyMethod.
	void put_ProxyPassword(const char *newVal);

	// Specifies the TCP port on which the traditional FTP proxy or firewall accepts
	// connections.
	int get_ProxyPort(void);
	// Specifies the TCP port on which the traditional FTP proxy or firewall accepts
	// connections.
	void put_ProxyPort(int newVal);

	// Specifies the username used to authenticate to a traditional FTP proxy or
	// firewall. Its placement in the login exchange depends on ProxyMethod.
	void get_ProxyUsername(CkString &str);
	// Specifies the username used to authenticate to a traditional FTP proxy or
	// firewall. Its placement in the login exchange depends on ProxyMethod.
	const char *proxyUsername(void);
	// Specifies the username used to authenticate to a traditional FTP proxy or
	// firewall. Its placement in the login exchange depends on ProxyMethod.
	void put_ProxyUsername(const char *newVal);

	// Specifies the maximum number of seconds that a data connection may remain
	// without receiving another byte. The default is 60. A value of 0 or any negative
	// value waits indefinitely.
	// 
	// This is an inactivity timeout, not a limit on total transfer duration. Receiving
	// any data, even a single byte, resets the timer and begins a new full timeout
	// interval. A large download may therefore continue indefinitely as long as data
	// keeps arriving within the configured interval.
	// 
	int get_ReadTimeout(void);
	// Specifies the maximum number of seconds that a data connection may remain
	// without receiving another byte. The default is 60. A value of 0 or any negative
	// value waits indefinitely.
	// 
	// This is an inactivity timeout, not a limit on total transfer duration. Receiving
	// any data, even a single byte, resets the timer and begins a new full timeout
	// interval. A large download may therefore continue indefinitely as long as data
	// keeps arriving within the configured interval.
	// 
	void put_ReadTimeout(int newVal);

	// Controls verification of the FTP server's TLS certificate chain.
	// 
	// +--------------+---------------------------------------------------------------+
	// |    Value     |                           Behavior                            |
	// +==============+===============================================================+
	// | false      | A connection is not rejected solely because normal            |
	// | (default)    | certificate-chain verification fails.                         |
	// +--------------+---------------------------------------------------------------+
	// | true       | The connection fails when the certificate is expired, is not  |
	// |              | yet valid, its signature is invalid, or its chain cannot be   |
	// |              | verified to a trusted root.                                   |
	// +--------------+---------------------------------------------------------------+
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
	// Controls verification of the FTP server's TLS certificate chain.
	// 
	// +--------------+---------------------------------------------------------------+
	// |    Value     |                           Behavior                            |
	// +==============+===============================================================+
	// | false      | A connection is not rejected solely because normal            |
	// | (default)    | certificate-chain verification fails.                         |
	// +--------------+---------------------------------------------------------------+
	// | true       | The connection fails when the certificate is expired, is not  |
	// |              | yet valid, its signature is invalid, or its chain cannot be   |
	// |              | verified to a trusted root.                                   |
	// +--------------+---------------------------------------------------------------+
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

	// Set to true to request that the next applicable upload or download resume from
	// existing content instead of starting over. Unrelated FTP commands do not consume
	// the setting. The next applicable transfer consumes it and automatically resets
	// it to false.
	// 
	// For a resumed upload, Chilkat obtains the existing remote size, begins reading
	// the local content at that offset, and appends the remaining bytes. For a resumed
	// download, Chilkat uses the existing destination length as the REST offset and
	// appends the remaining remote bytes.
	// 
	// The setting applies to the ordinary file, BinData, and StringBuilder upload and
	// download methods, including PutFile[1], PutFileBd[2], PutFileSb[3], GetFile[4],
	// GetFileBd[5], and GetFileSb[6].
	// 
	// Resume requires compatible server support and a correct partial local or remote
	// file. The application should verify that the existing content belongs to the
	// same file version before resuming.
	// 
	// 
	// References:
	// [1] #PutFile
	// [2] #PutFileBd
	// [3] #PutFileSb
	// [4] #GetFile
	// [5] #GetFileBd
	// [6] #GetFileSb
	bool get_RestartNext(void);
	// Set to true to request that the next applicable upload or download resume from
	// existing content instead of starting over. Unrelated FTP commands do not consume
	// the setting. The next applicable transfer consumes it and automatically resets
	// it to false.
	// 
	// For a resumed upload, Chilkat obtains the existing remote size, begins reading
	// the local content at that offset, and appends the remaining bytes. For a resumed
	// download, Chilkat uses the existing destination length as the REST offset and
	// appends the remaining remote bytes.
	// 
	// The setting applies to the ordinary file, BinData, and StringBuilder upload and
	// download methods, including PutFile[1], PutFileBd[2], PutFileSb[3], GetFile[4],
	// GetFileBd[5], and GetFileSb[6].
	// 
	// Resume requires compatible server support and a correct partial local or remote
	// file. The application should verify that the existing content belongs to the
	// same file version before resuming.
	// 
	// 
	// References:
	// [1] #PutFile
	// [2] #PutFileBd
	// [3] #PutFileSb
	// [4] #GetFile
	// [5] #GetFileBd
	// [6] #GetFileSb
	void put_RestartNext(bool newVal);

	// Contains the in-memory FTP session log collected while KeepSessionLog[1] is
	// true. The log includes protocol commands and server replies and is useful for
	// troubleshooting. Passwords and other sensitive information may appear; handle
	// the text accordingly.
	// 
	// References:
	// [1] #KeepSessionLog
	void get_SessionLog(CkString &str);
	// Contains the in-memory FTP session log collected while KeepSessionLog[1] is
	// true. The log includes protocol commands and server replies and is useful for
	// troubleshooting. Passwords and other sensitive information may appear; handle
	// the text accordingly.
	// 
	// References:
	// [1] #KeepSessionLog
	const char *sessionLog(void);

	// Specifies the hostname or IP address of the SOCKS proxy. It is used only when
	// SocksVersion[1] is 4 or 5.
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksHostname(CkString &str);
	// Specifies the hostname or IP address of the SOCKS proxy. It is used only when
	// SocksVersion[1] is 4 or 5.
	// 
	// References:
	// [1] #SocksVersion
	const char *socksHostname(void);
	// Specifies the hostname or IP address of the SOCKS proxy. It is used only when
	// SocksVersion[1] is 4 or 5.
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksHostname(const char *newVal);

	// Specifies the password for SOCKS5 username/password authentication. It is
	// ignored for SOCKS4, which has no password-authentication field.
	void get_SocksPassword(CkString &str);
	// Specifies the password for SOCKS5 username/password authentication. It is
	// ignored for SOCKS4, which has no password-authentication field.
	const char *socksPassword(void);
	// Specifies the password for SOCKS5 username/password authentication. It is
	// ignored for SOCKS4, which has no password-authentication field.
	void put_SocksPassword(const char *newVal);

	// Specifies the SOCKS proxy port. The default is 1080. It is used only when
	// SocksVersion[1] is 4 or 5.
	// 
	// References:
	// [1] #SocksVersion
	int get_SocksPort(void);
	// Specifies the SOCKS proxy port. The default is 1080. It is used only when
	// SocksVersion[1] is 4 or 5.
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksPort(int newVal);

	// Specifies the SOCKS user identifier. SOCKS5 may use it with password
	// authentication; SOCKS4 sends it as the protocol user ID. It is used only when
	// SocksVersion[1] is 4 or 5.
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksUsername(CkString &str);
	// Specifies the SOCKS user identifier. SOCKS5 may use it with password
	// authentication; SOCKS4 sends it as the protocol user ID. It is used only when
	// SocksVersion[1] is 4 or 5.
	// 
	// References:
	// [1] #SocksVersion
	const char *socksUsername(void);
	// Specifies the SOCKS user identifier. SOCKS5 may use it with password
	// authentication; SOCKS4 sends it as the protocol user ID. It is used only when
	// SocksVersion[1] is 4 or 5.
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksUsername(const char *newVal);

	// Selects SOCKS proxy usage.
	// 
	// +-------+--------------------------------------------------+
	// | Value |                     Behavior                     |
	// +=======+==================================================+
	// | 0     | Default. Connect directly without a SOCKS proxy. |
	// +-------+--------------------------------------------------+
	// | 4     | Connect through a SOCKS4 proxy.                  |
	// +-------+--------------------------------------------------+
	// | 5     | Connect through a SOCKS5 proxy.                  |
	// +-------+--------------------------------------------------+
	// 
	int get_SocksVersion(void);
	// Selects SOCKS proxy usage.
	// 
	// +-------+--------------------------------------------------+
	// | Value |                     Behavior                     |
	// +=======+==================================================+
	// | 0     | Default. Connect directly without a SOCKS proxy. |
	// +-------+--------------------------------------------------+
	// | 4     | Connect through a SOCKS4 proxy.                  |
	// +-------+--------------------------------------------------+
	// | 5     | Connect through a SOCKS5 proxy.                  |
	// +-------+--------------------------------------------------+
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

	// Set to true to use implicit FTP over TLS. TLS begins immediately after the TCP
	// connection is established, before the FTP greeting is received. Port 990 is
	// conventionally used for implicit FTPS.
	// 
	// This property has priority over AuthTls[1] and AuthSsl[2]. If Ssl is true,
	// implicit TLS is used even when either explicit-TLS property is also true.
	// ConnectOnly[3] performs the implicit TLS handshake but does not send USER or
	// PASS.
	// 
	// TLS-mode precedence: Ssl has highest priority. When it is false, AuthTls takes
	// priority over AuthSsl. When all three properties are false, plain FTP is used.
	// Protocol distinction: FTPS is FTP protected by TLS. SFTP is a different protocol
	// carried by SSH and is implemented by the SFtp class.
	// 
	// References:
	// [1] #AuthTls
	// [2] #AuthSsl
	// [3] #ConnectOnly
	bool get_Ssl(void);
	// Set to true to use implicit FTP over TLS. TLS begins immediately after the TCP
	// connection is established, before the FTP greeting is received. Port 990 is
	// conventionally used for implicit FTPS.
	// 
	// This property has priority over AuthTls[1] and AuthSsl[2]. If Ssl is true,
	// implicit TLS is used even when either explicit-TLS property is also true.
	// ConnectOnly[3] performs the implicit TLS handshake but does not send USER or
	// PASS.
	// 
	// TLS-mode precedence: Ssl has highest priority. When it is false, AuthTls takes
	// priority over AuthSsl. When all three properties are false, plain FTP is used.
	// Protocol distinction: FTPS is FTP protected by TLS. SFTP is a different protocol
	// carried by SSH and is implemented by the SFtp class.
	// 
	// References:
	// [1] #AuthTls
	// [2] #AuthSsl
	// [3] #ConnectOnly
	void put_Ssl(bool newVal);

	// Restricts the cipher suites and selected TLS security requirements offered for
	// FTP TLS connections.
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
	// FTP TLS connections.
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
	// FTP TLS connections.
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

	// Selects the TLS protocol version or minimum version allowed for secure FTP
	// connections.
	// 
	// The complete list of accepted values is:
	// 
	// default
	// TLS 1.3
	// TLS 1.2
	// TLS 1.1
	// TLS 1.0
	// SSL 3.0
	// TLS 1.3 or higher
	// TLS 1.2 or higher
	// TLS 1.1 or higher
	// TLS 1.0 or higher
	// 
	// The default is default, which allows Chilkat to negotiate a protocol supported
	// by both client and server. A minimum-version setting is generally more
	// interoperable than requiring one exact version.
	// 
	void get_SslProtocol(CkString &str);
	// Selects the TLS protocol version or minimum version allowed for secure FTP
	// connections.
	// 
	// The complete list of accepted values is:
	// 
	// default
	// TLS 1.3
	// TLS 1.2
	// TLS 1.1
	// TLS 1.0
	// SSL 3.0
	// TLS 1.3 or higher
	// TLS 1.2 or higher
	// TLS 1.1 or higher
	// TLS 1.0 or higher
	// 
	// The default is default, which allows Chilkat to negotiate a protocol supported
	// by both client and server. A minimum-version setting is generally more
	// interoperable than requiring one exact version.
	// 
	const char *sslProtocol(void);
	// Selects the TLS protocol version or minimum version allowed for secure FTP
	// connections.
	// 
	// The complete list of accepted values is:
	// 
	// default
	// TLS 1.3
	// TLS 1.2
	// TLS 1.1
	// TLS 1.0
	// SSL 3.0
	// TLS 1.3 or higher
	// TLS 1.2 or higher
	// TLS 1.1 or higher
	// TLS 1.0 or higher
	// 
	// The default is default, which allows Chilkat to negotiate a protocol supported
	// by both client and server. A minimum-version setting is generally more
	// interoperable than requiring one exact version.
	// 
	void put_SslProtocol(const char *newVal);

	// Indicates whether the FTP server certificate chain was successfully verified for
	// the current or most recent TLS connection.
	// 
	// This property reports certificate-chain verification only. It does not report
	// hostname matching or public-key pinning. If hostname matching or TlsPinSet[1]
	// pinning is required and the check fails, the TLS connection itself fails.
	// 
	// 
	// References:
	// [1] #TlsPinSet
	bool get_SslServerCertVerified(void);

	// Controls whether download synchronization creates empty remote directories on
	// the local filesystem. The default is true. When false, a local directory is
	// created only when it is needed to contain a downloaded file.
	bool get_SyncCreateAllLocalDirs(void);
	// Controls whether download synchronization creates empty remote directories on
	// the local filesystem. The default is true. When false, a local directory is
	// created only when it is needed to contain a downloaded file.
	void put_SyncCreateAllLocalDirs(bool newVal);

	// Specifies a semicolon-separated list of case-insensitive wildcard patterns for
	// files that are eligible for synchronization and tree operations. For example:
	// *.xml;*.txt;*.csv.
	// 
	// When nonempty, a file must match at least one pattern. Matching is performed
	// against the file's basename, not its relative path. Thus keep.txt can match a
	// file in any traversed subdirectory, while a pattern such as subdir/*.txt does
	// not match a nested relative path.
	// 
	// This filter applies to synchronization methods and also to PutTree[1],
	// DownloadTree[2], and DirTreeXml[3].
	// 
	// 
	// References:
	// [1] #PutTree
	// [2] #DownloadTree
	// [3] #DirTreeXml
	void get_SyncMustMatch(CkString &str);
	// Specifies a semicolon-separated list of case-insensitive wildcard patterns for
	// files that are eligible for synchronization and tree operations. For example:
	// *.xml;*.txt;*.csv.
	// 
	// When nonempty, a file must match at least one pattern. Matching is performed
	// against the file's basename, not its relative path. Thus keep.txt can match a
	// file in any traversed subdirectory, while a pattern such as subdir/*.txt does
	// not match a nested relative path.
	// 
	// This filter applies to synchronization methods and also to PutTree[1],
	// DownloadTree[2], and DirTreeXml[3].
	// 
	// 
	// References:
	// [1] #PutTree
	// [2] #DownloadTree
	// [3] #DirTreeXml
	const char *syncMustMatch(void);
	// Specifies a semicolon-separated list of case-insensitive wildcard patterns for
	// files that are eligible for synchronization and tree operations. For example:
	// *.xml;*.txt;*.csv.
	// 
	// When nonempty, a file must match at least one pattern. Matching is performed
	// against the file's basename, not its relative path. Thus keep.txt can match a
	// file in any traversed subdirectory, while a pattern such as subdir/*.txt does
	// not match a nested relative path.
	// 
	// This filter applies to synchronization methods and also to PutTree[1],
	// DownloadTree[2], and DirTreeXml[3].
	// 
	// 
	// References:
	// [1] #PutTree
	// [2] #DownloadTree
	// [3] #DirTreeXml
	void put_SyncMustMatch(const char *newVal);

	// Specifies a semicolon-separated list of case-insensitive wildcard patterns for
	// directories that synchronization methods are allowed to enter. For example:
	// src;data_*;reports. When nonempty, a directory must match at least one pattern
	// before its contents are traversed.
	void get_SyncMustMatchDir(CkString &str);
	// Specifies a semicolon-separated list of case-insensitive wildcard patterns for
	// directories that synchronization methods are allowed to enter. For example:
	// src;data_*;reports. When nonempty, a directory must match at least one pattern
	// before its contents are traversed.
	const char *syncMustMatchDir(void);
	// Specifies a semicolon-separated list of case-insensitive wildcard patterns for
	// directories that synchronization methods are allowed to enter. For example:
	// src;data_*;reports. When nonempty, a directory must match at least one pattern
	// before its contents are traversed.
	void put_SyncMustMatchDir(const char *newVal);

	// Specifies a semicolon-separated list of case-insensitive wildcard patterns for
	// files that must be excluded from synchronization and tree operations. For
	// example: *.tmp;*.bak;~*.
	// 
	// Matching is performed against the file's basename, not its relative path.
	// Exclusion is applied in addition to SyncMustMatch[1].
	// 
	// This filter also applies to PutTree[2], DownloadTree[3], and DirTreeXml[4].
	// 
	// 
	// References:
	// [1] #SyncMustMatch
	// [2] #PutTree
	// [3] #DownloadTree
	// [4] #DirTreeXml
	void get_SyncMustNotMatch(CkString &str);
	// Specifies a semicolon-separated list of case-insensitive wildcard patterns for
	// files that must be excluded from synchronization and tree operations. For
	// example: *.tmp;*.bak;~*.
	// 
	// Matching is performed against the file's basename, not its relative path.
	// Exclusion is applied in addition to SyncMustMatch[1].
	// 
	// This filter also applies to PutTree[2], DownloadTree[3], and DirTreeXml[4].
	// 
	// 
	// References:
	// [1] #SyncMustMatch
	// [2] #PutTree
	// [3] #DownloadTree
	// [4] #DirTreeXml
	const char *syncMustNotMatch(void);
	// Specifies a semicolon-separated list of case-insensitive wildcard patterns for
	// files that must be excluded from synchronization and tree operations. For
	// example: *.tmp;*.bak;~*.
	// 
	// Matching is performed against the file's basename, not its relative path.
	// Exclusion is applied in addition to SyncMustMatch[1].
	// 
	// This filter also applies to PutTree[2], DownloadTree[3], and DirTreeXml[4].
	// 
	// 
	// References:
	// [1] #SyncMustMatch
	// [2] #PutTree
	// [3] #DownloadTree
	// [4] #DirTreeXml
	void put_SyncMustNotMatch(const char *newVal);

	// Specifies a semicolon-separated list of case-insensitive wildcard patterns for
	// directories that synchronization methods must not enter. For
	// example:.git;temp;archive_*. Exclusion is applied in addition to
	// SyncMustMatchDir.
	void get_SyncMustNotMatchDir(CkString &str);
	// Specifies a semicolon-separated list of case-insensitive wildcard patterns for
	// directories that synchronization methods must not enter. For
	// example:.git;temp;archive_*. Exclusion is applied in addition to
	// SyncMustMatchDir.
	const char *syncMustNotMatchDir(void);
	// Specifies a semicolon-separated list of case-insensitive wildcard patterns for
	// directories that synchronization methods must not enter. For
	// example:.git;temp;archive_*. Exclusion is applied in addition to
	// SyncMustMatchDir.
	void put_SyncMustNotMatchDir(const char *newVal);

	// Contains the preview produced by SyncRemoteTree2[1] when ARG4 is true. Each
	// CRLF-delimited line is an absolute local path that would be uploaded if preview
	// mode were disabled.
	// 
	// The value is replaced at the start of each preview operation. It is empty when
	// no files qualify, when the preview fails, or when ARG2 is not a valid
	// synchronization mode. A subsequent non-preview synchronization operation also
	// clears it. Unrelated methods do not clear the most recent preview.
	// 
	// 
	// References:
	// [1] #SyncRemoteTree2
	void get_SyncPreview(CkString &str);
	// Contains the preview produced by SyncRemoteTree2[1] when ARG4 is true. Each
	// CRLF-delimited line is an absolute local path that would be uploaded if preview
	// mode were disabled.
	// 
	// The value is replaced at the start of each preview operation. It is empty when
	// no files qualify, when the preview fails, or when ARG2 is not a valid
	// synchronization mode. A subsequent non-preview synchronization operation also
	// clears it. Unrelated methods do not clear the most recent preview.
	// 
	// 
	// References:
	// [1] #SyncRemoteTree2
	const char *syncPreview(void);

	// Contains the cipher suite negotiated for the current or most recent successful
	// TLS connection, such as TLS_AES_256_GCM_SHA384. It is empty before a TLS session
	// has been established or after a failed attempt that produced no negotiated
	// suite.
	void get_TlsCipherSuite(CkString &str);
	// Contains the cipher suite negotiated for the current or most recent successful
	// TLS connection, such as TLS_AES_256_GCM_SHA384. It is empty before a TLS session
	// has been established or after a failed attempt that produced no negotiated
	// suite.
	const char *tlsCipherSuite(void);

	// Specifies one or more expected Subject Public Key Info (SPKI) fingerprints for
	// TLS public-key pinning. If none of the configured pins matches the server
	// certificate, the TLS handshake fails.
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
	// FTP connection scope: Pin matching is enforced for every TLS connection
	// established by this object, including the FTPS control connection and all
	// TLS-protected data connections.
	// 
	// References:
	// [1] #RequireSslCertVerify
	void get_TlsPinSet(CkString &str);
	// Specifies one or more expected Subject Public Key Info (SPKI) fingerprints for
	// TLS public-key pinning. If none of the configured pins matches the server
	// certificate, the TLS handshake fails.
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
	// FTP connection scope: Pin matching is enforced for every TLS connection
	// established by this object, including the FTPS control connection and all
	// TLS-protected data connections.
	// 
	// References:
	// [1] #RequireSslCertVerify
	const char *tlsPinSet(void);
	// Specifies one or more expected Subject Public Key Info (SPKI) fingerprints for
	// TLS public-key pinning. If none of the configured pins matches the server
	// certificate, the TLS handshake fails.
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
	// FTP connection scope: Pin matching is enforced for every TLS connection
	// established by this object, including the FTPS control connection and all
	// TLS-protected data connections.
	// 
	// References:
	// [1] #RequireSslCertVerify
	void put_TlsPinSet(const char *newVal);

	// Contains the protocol version negotiated for the current or most recent
	// successful TLS connection, such as TLS 1.2 or TLS 1.3. It is empty when no TLS
	// session has been established.
	void get_TlsVersion(CkString &str);
	// Contains the protocol version negotiated for the current or most recent
	// successful TLS connection, such as TLS 1.2 or TLS 1.3. It is empty when no TLS
	// session has been established.
	const char *tlsVersion(void);

	// Provides a comma-separated list of compatibility options for uncommon platform
	// or server requirements. The default is empty and should normally remain empty.
	// 
	// +--------------------+---------------------------------------------------------+
	// |      Keyword       |                         Effect                          |
	// +====================+=========================================================+
	// | OpenNonExclusive   | On Windows, opens a local download file without         |
	// |                    | exclusive sharing so another process may access it      |
	// |                    | while data is being written.                            |
	// +--------------------+---------------------------------------------------------+
	// | ProtectFromVpn     | On Android, requests that FTP sockets bypass an active  |
	// |                    | VPN.                                                    |
	// +--------------------+---------------------------------------------------------+
	// | EnableTls13        | Compatibility switch that explicitly enables offering   |
	// |                    | TLS 1.3 in builds where it is not already enabled by    |
	// |                    | policy.                                                 |
	// +--------------------+---------------------------------------------------------+
	// | DisableTls13       | Prevents TLS 1.3 negotiation for compatibility with a   |
	// |                    | problematic peer.                                       |
	// +--------------------+---------------------------------------------------------+
	// | NoPreserveFileTime | Leaves downloaded files with the current local time     |
	// |                    | instead of attempting to preserve the remote            |
	// |                    | modification time.                                      |
	// +--------------------+---------------------------------------------------------+
	// 
	// Use sparingly: These options alter low-level behavior and may be
	// platform-specific. Configure one only when the documented default causes a known
	// interoperability problem.
	void get_UncommonOptions(CkString &str);
	// Provides a comma-separated list of compatibility options for uncommon platform
	// or server requirements. The default is empty and should normally remain empty.
	// 
	// +--------------------+---------------------------------------------------------+
	// |      Keyword       |                         Effect                          |
	// +====================+=========================================================+
	// | OpenNonExclusive   | On Windows, opens a local download file without         |
	// |                    | exclusive sharing so another process may access it      |
	// |                    | while data is being written.                            |
	// +--------------------+---------------------------------------------------------+
	// | ProtectFromVpn     | On Android, requests that FTP sockets bypass an active  |
	// |                    | VPN.                                                    |
	// +--------------------+---------------------------------------------------------+
	// | EnableTls13        | Compatibility switch that explicitly enables offering   |
	// |                    | TLS 1.3 in builds where it is not already enabled by    |
	// |                    | policy.                                                 |
	// +--------------------+---------------------------------------------------------+
	// | DisableTls13       | Prevents TLS 1.3 negotiation for compatibility with a   |
	// |                    | problematic peer.                                       |
	// +--------------------+---------------------------------------------------------+
	// | NoPreserveFileTime | Leaves downloaded files with the current local time     |
	// |                    | instead of attempting to preserve the remote            |
	// |                    | modification time.                                      |
	// +--------------------+---------------------------------------------------------+
	// 
	// Use sparingly: These options alter low-level behavior and may be
	// platform-specific. Configure one only when the documented default causes a known
	// interoperability problem.
	const char *uncommonOptions(void);
	// Provides a comma-separated list of compatibility options for uncommon platform
	// or server requirements. The default is empty and should normally remain empty.
	// 
	// +--------------------+---------------------------------------------------------+
	// |      Keyword       |                         Effect                          |
	// +====================+=========================================================+
	// | OpenNonExclusive   | On Windows, opens a local download file without         |
	// |                    | exclusive sharing so another process may access it      |
	// |                    | while data is being written.                            |
	// +--------------------+---------------------------------------------------------+
	// | ProtectFromVpn     | On Android, requests that FTP sockets bypass an active  |
	// |                    | VPN.                                                    |
	// +--------------------+---------------------------------------------------------+
	// | EnableTls13        | Compatibility switch that explicitly enables offering   |
	// |                    | TLS 1.3 in builds where it is not already enabled by    |
	// |                    | policy.                                                 |
	// +--------------------+---------------------------------------------------------+
	// | DisableTls13       | Prevents TLS 1.3 negotiation for compatibility with a   |
	// |                    | problematic peer.                                       |
	// +--------------------+---------------------------------------------------------+
	// | NoPreserveFileTime | Leaves downloaded files with the current local time     |
	// |                    | instead of attempting to preserve the remote            |
	// |                    | modification time.                                      |
	// +--------------------+---------------------------------------------------------+
	// 
	// Use sparingly: These options alter low-level behavior and may be
	// platform-specific. Configure one only when the documented default causes a known
	// interoperability problem.
	void put_UncommonOptions(const char *newVal);

	// Returns the current average upload rate in bytes per second. The value is
	// updated during synchronous and asynchronous uploads and describes the upload in
	// progress or the most recently completed upload. A subsequent download does not
	// clear the retained upload rate.
	int get_UploadTransferRate(void);

	// Controls whether passive data connections first use EPSV instead of PASV. The
	// default is false. This property has no effect when Passive[1] is false.
	// 
	// If EPSV is rejected, Chilkat automatically retries the data connection using
	// PASV. The rejection does not disable EPSV for the remainder of the session, so a
	// later passive data connection may try EPSV again.
	// 
	// AutoSetUseEpsv[2] can change this property automatically when server
	// capabilities are examined.
	// 
	// Compatibility: EPSV avoids embedding an IP address in the server reply and is
	// the passive-mode command defined for IPv6. Some legacy FTP-aware firewalls
	// mishandle it.
	// 
	// References:
	// [1] #Passive
	// [2] #AutoSetUseEpsv
	bool get_UseEpsv(void);
	// Controls whether passive data connections first use EPSV instead of PASV. The
	// default is false. This property has no effect when Passive[1] is false.
	// 
	// If EPSV is rejected, Chilkat automatically retries the data connection using
	// PASV. The rejection does not disable EPSV for the remainder of the session, so a
	// later passive data connection may try EPSV again.
	// 
	// AutoSetUseEpsv[2] can change this property automatically when server
	// capabilities are examined.
	// 
	// Compatibility: EPSV avoids embedding an IP address in the server reply and is
	// the passive-mode command defined for IPv6. Some legacy FTP-aware firewalls
	// mishandle it.
	// 
	// References:
	// [1] #Passive
	// [2] #AutoSetUseEpsv
	void put_UseEpsv(bool newVal);

	// Specifies the FTP login name. The default is anonymous. Set it to an empty
	// string to have Connect[1] establish the connection without performing
	// authentication; authentication may then be handled separately with
	// LoginAfterConnectOnly[2].
	// 
	// References:
	// [1] #Connect
	// [2] #LoginAfterConnectOnly
	void get_Username(CkString &str);
	// Specifies the FTP login name. The default is anonymous. Set it to an empty
	// string to have Connect[1] establish the connection without performing
	// authentication; authentication may then be handled separately with
	// LoginAfterConnectOnly[2].
	// 
	// References:
	// [1] #Connect
	// [2] #LoginAfterConnectOnly
	const char *username(void);
	// Specifies the FTP login name. The default is anonymous. Set it to an empty
	// string to have Connect[1] establish the connection without performing
	// authentication; authentication may then be handled separately with
	// LoginAfterConnectOnly[2].
	// 
	// References:
	// [1] #Connect
	// [2] #LoginAfterConnectOnly
	void put_Username(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Appends the contents of the local file at localFilePath to the remote file at remoteFilePath. Both
	// arguments are paths in their respective local and remote filesystems.
	// 
	// Uses the FTP APPE command. On servers with normal APPE behavior, a missing
	// remote file is created and an existing file is extended. A failed or interrupted
	// append can leave the bytes already accepted by the server in place; the
	// operation is not transactional.
	// 
	bool AppendFile(const char *localFilePath, const char *remoteFilePath);

	// Appends the contents of the local file at localFilePath to the remote file at remoteFilePath. Both
	// arguments are paths in their respective local and remote filesystems.
	// 
	// Uses the FTP APPE command. On servers with normal APPE behavior, a missing
	// remote file is created and an existing file is extended. A failed or interrupted
	// append can leave the bytes already accepted by the server in place; the
	// operation is not transactional.
	// 
	CkTask *AppendFileAsync(const char *localFilePath, const char *remoteFilePath);


	// Appends the bytes in the BinData object bd to the remote file at remoteFilename. No text
	// encoding or line-ending conversion is performed.
	// 
	// Uses the FTP APPE command. On servers with normal APPE behavior, a missing
	// remote file is created and an existing file is extended. A failed or interrupted
	// append can leave the bytes already accepted by the server in place; the
	// operation is not transactional.
	// 
	bool AppendFileBd(const char *remoteFilename, CkBinData &bd);

	// Appends the bytes in the BinData object bd to the remote file at remoteFilename. No text
	// encoding or line-ending conversion is performed.
	// 
	// Uses the FTP APPE command. On servers with normal APPE behavior, a missing
	// remote file is created and an existing file is extended. A failed or interrupted
	// append can leave the bytes already accepted by the server in place; the
	// operation is not transactional.
	// 
	CkTask *AppendFileBdAsync(const char *remoteFilename, CkBinData &bd);


	// Appends the bytes in content to the remote file named by remoteFilename. No character
	// encoding or line-ending conversion is performed.
	bool AppendFileFromBinaryData(const char *remoteFilename, CkByteData &content);

	// Appends the bytes in content to the remote file named by remoteFilename. No character
	// encoding or line-ending conversion is performed.
	CkTask *AppendFileFromBinaryDataAsync(const char *remoteFilename, CkByteData &content);


	// Encodes the text in textData using the character encoding named by charset and appends
	// the resulting bytes to the remote file at remoteFilename.
	// 
	// This method controls the encoding of the file content. The encoding used for the
	// remote filename itself is controlled separately by CommandCharset[1].
	// 
	// Uses the FTP APPE command. On servers with normal APPE behavior, a missing
	// remote file is created and an existing file is extended. A failed or interrupted
	// append can leave the bytes already accepted by the server in place; the
	// operation is not transactional.
	// 
	// 
	// References:
	// [1] #CommandCharset
	bool AppendFileFromTextData(const char *remoteFilename, const char *textData, const char *charset);

	// Encodes the text in textData using the character encoding named by charset and appends
	// the resulting bytes to the remote file at remoteFilename.
	// 
	// This method controls the encoding of the file content. The encoding used for the
	// remote filename itself is controlled separately by CommandCharset[1].
	// 
	// Uses the FTP APPE command. On servers with normal APPE behavior, a missing
	// remote file is created and an existing file is extended. A failed or interrupted
	// append can leave the bytes already accepted by the server in place; the
	// operation is not transactional.
	// 
	// 
	// References:
	// [1] #CommandCharset
	CkTask *AppendFileFromTextDataAsync(const char *remoteFilename, const char *textData, const char *charset);


	// Encodes the text in the StringBuilder sb using the charset named by charset and
	// appends the resulting bytes to the remote file at remoteFilename.
	// 
	// Uses the FTP APPE command. On servers with normal APPE behavior, a missing
	// remote file is created and an existing file is extended. A failed or interrupted
	// append can leave the bytes already accepted by the server in place; the
	// operation is not transactional.
	// 
	bool AppendFileSb(const char *remoteFilename, CkStringBuilder &sb, const char *charset);

	// Encodes the text in the StringBuilder sb using the charset named by charset and
	// appends the resulting bytes to the remote file at remoteFilename.
	// 
	// Uses the FTP APPE command. On servers with normal APPE behavior, a missing
	// remote file is created and an existing file is extended. A failed or interrupted
	// append can leave the bytes already accepted by the server in place; the
	// operation is not transactional.
	// 
	CkTask *AppendFileSbAsync(const char *remoteFilename, CkStringBuilder &sb, const char *charset);


	// Changes the current working directory on the FTP server to remoteDirPath. A relative path
	// is resolved from the current remote directory; an absolute path is interpreted
	// according to the server's path syntax.
	// 
	// Chilkat sends one CWD command containing remoteDirPath. It does not split a multi-level
	// path into separate directory changes. A server may accept a path such as a/b/c
	// in one command or may require the application to change one level at a time.
	// 
	// If the CWD command fails, the current remote directory remains unchanged.
	// 
	// Current directory: Many Ftp2 methods operate relative to the current remote
	// directory. Use GetCurrentRemoteDir[1] to inspect it.
	// 
	// References:
	// [1] #GetCurrentRemoteDir
	bool ChangeRemoteDir(const char *remoteDirPath);

	// Changes the current working directory on the FTP server to remoteDirPath. A relative path
	// is resolved from the current remote directory; an absolute path is interpreted
	// according to the server's path syntax.
	// 
	// Chilkat sends one CWD command containing remoteDirPath. It does not split a multi-level
	// path into separate directory changes. A server may accept a path such as a/b/c
	// in one command or may require the application to change one level at a time.
	// 
	// If the CWD command fails, the current remote directory remains unchanged.
	// 
	// Current directory: Many Ftp2 methods operate relative to the current remote
	// directory. Use GetCurrentRemoteDir[1] to inspect it.
	// 
	// References:
	// [1] #GetCurrentRemoteDir
	CkTask *ChangeRemoteDirAsync(const char *remoteDirPath);


	// Returns whether Chilkat currently considers the FTP control connection to be
	// open. It does not require that the session be authenticated: it can return
	// true after ConnectOnly[1] and before LoginAfterConnectOnly[2].
	// 
	// This is a local connection-state check. It does not send NOOP, reconnect
	// automatically, or prove that a silently broken network path will carry the next
	// command.
	// 
	// 
	// References:
	// [1] #ConnectOnly
	// [2] #LoginAfterConnectOnly
	bool CheckConnection(void);

	// Returns whether Chilkat currently considers the FTP control connection to be
	// open. It does not require that the session be authenticated: it can return
	// true after ConnectOnly[1] and before LoginAfterConnectOnly[2].
	// 
	// This is a local connection-state check. It does not send NOOP, reconnect
	// automatically, or prove that a silently broken network path will carry the next
	// command.
	// 
	// 
	// References:
	// [1] #ConnectOnly
	// [2] #LoginAfterConnectOnly
	CkTask *CheckConnectionAsync(void);


	// Requests that an explicit-FTPS control connection return to clear text after
	// authentication. Data connections may remain protected according to
	// DataProtection[1].
	// Security and compatibility: This is a legacy workaround for FTP-aware NAT
	// devices that must inspect PORT or PASV commands. It exposes FTP commands and
	// replies, including path names, and should not be used unless required by the
	// network environment.
	// 
	// References:
	// [1] #DataProtection
	bool ClearControlChannel(void);

	// Requests that an explicit-FTPS control connection return to clear text after
	// authentication. Data connections may remain protected according to
	// DataProtection[1].
	// Security and compatibility: This is a legacy workaround for FTP-aware NAT
	// devices that must inspect PORT or PASV commands. It exposes FTP commands and
	// replies, including path names, and should not be used unless required by the
	// network environment.
	// 
	// References:
	// [1] #DataProtection
	CkTask *ClearControlChannelAsync(void);


	// Clears the cached listing for the current remote directory. The next call to
	// GetDirCount[1] or another indexed listing method retrieves a fresh listing from
	// the server.
	// 
	// The cache is automatically invalidated when the current remote directory or
	// ListPattern[2] changes. Uploading, deleting, renaming, creating, or removing a
	// remote item does not automatically refresh the cache. Changing AllowMlsd[3],
	// PreferNlst[4], ListOption[5], or DirListingCharset[6] also leaves the existing
	// cache intact.
	// 
	// After a remote change: Call this method before relying on indexed listing
	// methods when the application has uploaded, renamed, deleted, created, or removed
	// an item in the current remote directory.
	// 
	// References:
	// [1] #GetDirCount
	// [2] #ListPattern
	// [3] #AllowMlsd
	// [4] #PreferNlst
	// [5] #ListOption
	// [6] #DirListingCharset
	void ClearDirCache(void);


	// Clears the in-memory FTP protocol log collected while KeepSessionLog[1] is
	// enabled.
	// 
	// References:
	// [1] #KeepSessionLog
	void ClearSessionLog(void);


	// Connects to the server specified by Hostname[1] and Port[2], negotiates any
	// configured proxy and TLS layer, receives the FTP greeting, and authenticates
	// using Username[3], Password[4], and Account[5].
	// 
	// For implicit or explicit FTPS, TLS is established before USER and PASS are sent.
	// Chilkat sends PBSZ 0 and the PROT command required by DataProtection[6]. If the
	// server requires login before accepting those protection commands, Chilkat
	// authenticates and retries them. Rejection of a required protection command
	// causes the connection attempt to fail.
	// 
	// After login, Chilkat sets binary transfer mode with TYPE I, requests SYST, sends
	// FEAT when AutoFeat[7] is enabled, and may send OPTS UTF8 ON when UTF-8 support
	// is advertised and AutoOptsUtf8[8] is enabled. It also obtains the initial
	// current remote directory.
	// 
	// Calling this method while already connected establishes a new FTP session and
	// replaces the previous session state. The current remote directory, capability
	// state, and listing cache are initialized for the new login.
	// 
	// A failed connection attempt does not leave an underlying plain FTP connection
	// open. To separate connection establishment from authentication, call
	// ConnectOnly[9] followed by LoginAfterConnectOnly[10].
	// 
	// Failure diagnosis: After failure, inspect ConnectFailReason[11], LastReply[12],
	// and LastErrorText. A failure before the FTP greeting is usually DNS, routing,
	// firewall, proxy, TCP, or implicit-TLS related; a failure after the greeting may
	// involve explicit TLS, data-protection setup, authentication, or server policy.
	// 
	// References:
	// [1] #Hostname
	// [2] #Port
	// [3] #Username
	// [4] #Password
	// [5] #Account
	// [6] #DataProtection
	// [7] #AutoFeat
	// [8] #AutoOptsUtf8
	// [9] #ConnectOnly
	// [10] #LoginAfterConnectOnly
	// [11] #ConnectFailReason
	// [12] #LastReply
	bool Connect(void);

	// Connects to the server specified by Hostname[1] and Port[2], negotiates any
	// configured proxy and TLS layer, receives the FTP greeting, and authenticates
	// using Username[3], Password[4], and Account[5].
	// 
	// For implicit or explicit FTPS, TLS is established before USER and PASS are sent.
	// Chilkat sends PBSZ 0 and the PROT command required by DataProtection[6]. If the
	// server requires login before accepting those protection commands, Chilkat
	// authenticates and retries them. Rejection of a required protection command
	// causes the connection attempt to fail.
	// 
	// After login, Chilkat sets binary transfer mode with TYPE I, requests SYST, sends
	// FEAT when AutoFeat[7] is enabled, and may send OPTS UTF8 ON when UTF-8 support
	// is advertised and AutoOptsUtf8[8] is enabled. It also obtains the initial
	// current remote directory.
	// 
	// Calling this method while already connected establishes a new FTP session and
	// replaces the previous session state. The current remote directory, capability
	// state, and listing cache are initialized for the new login.
	// 
	// A failed connection attempt does not leave an underlying plain FTP connection
	// open. To separate connection establishment from authentication, call
	// ConnectOnly[9] followed by LoginAfterConnectOnly[10].
	// 
	// Failure diagnosis: After failure, inspect ConnectFailReason[11], LastReply[12],
	// and LastErrorText. A failure before the FTP greeting is usually DNS, routing,
	// firewall, proxy, TCP, or implicit-TLS related; a failure after the greeting may
	// involve explicit TLS, data-protection setup, authentication, or server policy.
	// 
	// References:
	// [1] #Hostname
	// [2] #Port
	// [3] #Username
	// [4] #Password
	// [5] #Account
	// [6] #DataProtection
	// [7] #AutoFeat
	// [8] #AutoOptsUtf8
	// [9] #ConnectOnly
	// [10] #LoginAfterConnectOnly
	// [11] #ConnectFailReason
	// [12] #LastReply
	CkTask *ConnectAsync(void);


	// Establishes the configured proxy and TCP connection, performs any configured
	// implicit or explicit TLS setup, and receives the FTP server greeting, but does
	// not send USER or PASS. Complete authentication by calling
	// LoginAfterConnectOnly[1].
	// 
	// With implicit FTPS, the TLS handshake occurs immediately after the TCP
	// connection is established and before the greeting is received. With explicit
	// FTPS, Chilkat first receives the greeting, sends AUTH TLS or AUTH SSL, and then
	// performs the TLS handshake. When the control channel is protected, Chilkat also
	// sends PBSZ 0 and the PROT command required by DataProtection[2], even though
	// login has not yet occurred.
	// 
	// After success, ConnectVerified[3] is true and LoginVerified[4] remains
	// false. The current remote directory may be unavailable until login because
	// many servers reject PWD before authentication.
	// 
	// 
	// References:
	// [1] #LoginAfterConnectOnly
	// [2] #DataProtection
	// [3] #ConnectVerified
	// [4] #LoginVerified
	bool ConnectOnly(void);

	// Establishes the configured proxy and TCP connection, performs any configured
	// implicit or explicit TLS setup, and receives the FTP server greeting, but does
	// not send USER or PASS. Complete authentication by calling
	// LoginAfterConnectOnly[1].
	// 
	// With implicit FTPS, the TLS handshake occurs immediately after the TCP
	// connection is established and before the greeting is received. With explicit
	// FTPS, Chilkat first receives the greeting, sends AUTH TLS or AUTH SSL, and then
	// performs the TLS handshake. When the control channel is protected, Chilkat also
	// sends PBSZ 0 and the PROT command required by DataProtection[2], even though
	// login has not yet occurred.
	// 
	// After success, ConnectVerified[3] is true and LoginVerified[4] remains
	// false. The current remote directory may be unavailable until login because
	// many servers reject PWD before authentication.
	// 
	// 
	// References:
	// [1] #LoginAfterConnectOnly
	// [2] #DataProtection
	// [3] #ConnectVerified
	// [4] #LoginVerified
	CkTask *ConnectOnlyAsync(void);


	// Upgrades an already-connected clear FTP control channel to explicit TLS. This
	// method is intended for a manually staged connection created with ConnectOnly[1]
	// while Ssl[2], AuthTls[3], and AuthSsl[4] were disabled.
	// 
	// Chilkat sends AUTH TLS, performs the TLS handshake, sends PBSZ 0, and then sends
	// the PROT command required by DataProtection[5]. The method does not
	// authenticate; call LoginAfterConnectOnly[6] afterward.
	// 
	// Do not call it when explicit or implicit FTPS was already enabled before
	// connecting.
	// 
	// 
	// References:
	// [1] #ConnectOnly
	// [2] #Ssl
	// [3] #AuthTls
	// [4] #AuthSsl
	// [5] #DataProtection
	// [6] #LoginAfterConnectOnly
	bool ConvertToTls(void);

	// Upgrades an already-connected clear FTP control channel to explicit TLS. This
	// method is intended for a manually staged connection created with ConnectOnly[1]
	// while Ssl[2], AuthTls[3], and AuthSsl[4] were disabled.
	// 
	// Chilkat sends AUTH TLS, performs the TLS handshake, sends PBSZ 0, and then sends
	// the PROT command required by DataProtection[5]. The method does not
	// authenticate; call LoginAfterConnectOnly[6] afterward.
	// 
	// Do not call it when explicit or implicit FTPS was already enabled before
	// connecting.
	// 
	// 
	// References:
	// [1] #ConnectOnly
	// [2] #Ssl
	// [3] #AuthTls
	// [4] #AuthSsl
	// [5] #DataProtection
	// [6] #LoginAfterConnectOnly
	CkTask *ConvertToTlsAsync(void);


	// Creates and returns a textual upload plan for the local directory at localDir. The
	// object must be connected because the plan records the current absolute remote
	// directory together with the local source paths.
	// 
	// The generated plan contains absolute local paths and absolute remote directory
	// operations. Treat the text as a Chilkat-generated plan for PutPlan[1] rather
	// than as a portable or stable interchange format.
	// 
	// The plan records what to do, not a snapshot of file contents. If a local file
	// changes before PutPlan executes, the current file contents are uploaded.
	// 
	// Resumable bulk upload: PutPlan records completed operations in a log file.
	// Reusing the plan and log after interruption allows already completed steps to be
	// skipped.
	// 
	// References:
	// [1] #PutPlan
	bool CreatePlan(const char *localDir, CkString &outStr);

	// Creates and returns a textual upload plan for the local directory at localDir. The
	// object must be connected because the plan records the current absolute remote
	// directory together with the local source paths.
	// 
	// The generated plan contains absolute local paths and absolute remote directory
	// operations. Treat the text as a Chilkat-generated plan for PutPlan[1] rather
	// than as a portable or stable interchange format.
	// 
	// The plan records what to do, not a snapshot of file contents. If a local file
	// changes before PutPlan executes, the current file contents are uploaded.
	// 
	// Resumable bulk upload: PutPlan records completed operations in a log file.
	// Reusing the plan and log after interruption allows already completed steps to be
	// skipped.
	// 
	// References:
	// [1] #PutPlan
	const char *createPlan(const char *localDir);
	// Creates and returns a textual upload plan for the local directory at localDir. The
	// object must be connected because the plan records the current absolute remote
	// directory together with the local source paths.
	// 
	// The generated plan contains absolute local paths and absolute remote directory
	// operations. Treat the text as a Chilkat-generated plan for PutPlan[1] rather
	// than as a portable or stable interchange format.
	// 
	// The plan records what to do, not a snapshot of file contents. If a local file
	// changes before PutPlan executes, the current file contents are uploaded.
	// 
	// Resumable bulk upload: PutPlan records completed operations in a log file.
	// Reusing the plan and log after interruption allows already completed steps to be
	// skipped.
	// 
	// References:
	// [1] #PutPlan
	CkTask *CreatePlanAsync(const char *localDir);


	// Creates the remote directory at remoteDirPath by sending one MKD command. The path is
	// interpreted relative to the current remote directory unless the server
	// recognizes it as absolute.
	// 
	// Chilkat does not split a multi-level path and does not issue separate commands
	// to create missing parent directories. Some servers create all levels from one
	// MKD a/b/c command, while others require the parent directories to exist.
	// 
	// If the directory already exists, the server commonly returns an error. A
	// successful call does not refresh the cached indexed listing; call
	// ClearDirCache[1] when a fresh listing is required.
	// 
	// 
	// References:
	// [1] #ClearDirCache
	bool CreateRemoteDir(const char *remoteDirPath);

	// Creates the remote directory at remoteDirPath by sending one MKD command. The path is
	// interpreted relative to the current remote directory unless the server
	// recognizes it as absolute.
	// 
	// Chilkat does not split a multi-level path and does not issue separate commands
	// to create missing parent directories. Some servers create all levels from one
	// MKD a/b/c command, while others require the parent directories to exist.
	// 
	// If the directory already exists, the server commonly returns an error. A
	// successful call does not refresh the cached indexed listing; call
	// ClearDirCache[1] when a fresh listing is required.
	// 
	// 
	// References:
	// [1] #ClearDirCache
	CkTask *CreateRemoteDirAsync(const char *remoteDirPath);


	// Deletes files in the current remote directory whose names match the wildcard
	// pattern in remotePattern. The method returns the number deleted, or -1 if the operation
	// fails.
	// 
	// Chilkat sends a server-side legacy listing request such as LIST *.txt, parses
	// the returned entries, and sends DELE for matching files. Matching case
	// sensitivity and wildcard behavior therefore depend on the server. Matching
	// directories are not removed by this method.
	// 
	int DeleteMatching(const char *remotePattern);

	// Deletes files in the current remote directory whose names match the wildcard
	// pattern in remotePattern. The method returns the number deleted, or -1 if the operation
	// fails.
	// 
	// Chilkat sends a server-side legacy listing request such as LIST *.txt, parses
	// the returned entries, and sends DELE for matching files. Matching case
	// sensitivity and wildcard behavior therefore depend on the server. Matching
	// directories are not removed by this method.
	// 
	CkTask *DeleteMatchingAsync(const char *remotePattern);


	// Deletes the remote file at remoteFilePath. The path may be relative to the current remote
	// directory or absolute according to the server's path syntax.
	// 
	// A successful deletion does not refresh the cached indexed listing. Call
	// ClearDirCache[1] when a fresh listing is required.
	// 
	// 
	// References:
	// [1] #ClearDirCache
	bool DeleteRemoteFile(const char *remoteFilePath);

	// Deletes the remote file at remoteFilePath. The path may be relative to the current remote
	// directory or absolute according to the server's path syntax.
	// 
	// A successful deletion does not refresh the cached indexed listing. Call
	// ClearDirCache[1] when a fresh listing is required.
	// 
	// 
	// References:
	// [1] #ClearDirCache
	CkTask *DeleteRemoteFileAsync(const char *remoteFilePath);


	// Recursively deletes the files and subdirectories beneath the current remote
	// directory. Child directories are removed after their contents are deleted, but
	// the current root directory itself remains in place and remains the current
	// remote directory.
	// Destructive operation: Set the current remote directory carefully before calling
	// this method. The VerifyDeleteFile and VerifyDeleteDir callbacks can set their
	// skip output to prevent selected items from being deleted.
	bool DeleteTree(void);

	// Recursively deletes the files and subdirectories beneath the current remote
	// directory. Child directories are removed after their contents are deleted, but
	// the current root directory itself remains in place and remains the current
	// remote directory.
	// Destructive operation: Set the current remote directory carefully before calling
	// this method. The VerifyDeleteFile and VerifyDeleteDir callbacks can set their
	// skip output to prevent selected items from being deleted.
	CkTask *DeleteTreeAsync(void);


	// Deprecated. Tries the supported traditional FTP-proxy login sequences and
	// returns the first successful ProxyMethod[1] value. Returns 0 when none succeeds
	// and -1 when the test cannot be completed.
	// 
	// References:
	// [1] #ProxyMethod
	int DetermineProxyMethod(void);

	// Deprecated. Tries the supported traditional FTP-proxy login sequences and
	// returns the first successful ProxyMethod[1] value. Returns 0 when none succeeds
	// and -1 when the test cannot be completed.
	// 
	// References:
	// [1] #ProxyMethod
	CkTask *DetermineProxyMethodAsync(void);


	// Deprecated. Tests combinations of Ssl[1], AuthTls[2], AuthSsl[3], Port[4],
	// Passive[5], and PassiveUseHostAddr[6] by attempting a directory listing, then
	// returns an XML report.
	// 
	// The method performs multiple network attempts and can take significant time.
	// Prefer configuring the connection explicitly from the server's documented
	// FTP/FTPS settings.
	// 
	// 
	// References:
	// [1] #Ssl
	// [2] #AuthTls
	// [3] #AuthSsl
	// [4] #Port
	// [5] #Passive
	// [6] #PassiveUseHostAddr
	bool DetermineSettings(CkString &outXmlReport);

	// Deprecated. Tests combinations of Ssl[1], AuthTls[2], AuthSsl[3], Port[4],
	// Passive[5], and PassiveUseHostAddr[6] by attempting a directory listing, then
	// returns an XML report.
	// 
	// The method performs multiple network attempts and can take significant time.
	// Prefer configuring the connection explicitly from the server's documented
	// FTP/FTPS settings.
	// 
	// 
	// References:
	// [1] #Ssl
	// [2] #AuthTls
	// [3] #AuthSsl
	// [4] #Port
	// [5] #Passive
	// [6] #PassiveUseHostAddr
	const char *determineSettings(void);
	// Deprecated. Tests combinations of Ssl[1], AuthTls[2], AuthSsl[3], Port[4],
	// Passive[5], and PassiveUseHostAddr[6] by attempting a directory listing, then
	// returns an XML report.
	// 
	// The method performs multiple network attempts and can take significant time.
	// Prefer configuring the connection explicitly from the server's documented
	// FTP/FTPS settings.
	// 
	// 
	// References:
	// [1] #Ssl
	// [2] #AuthTls
	// [3] #AuthSsl
	// [4] #Port
	// [5] #Passive
	// [6] #PassiveUseHostAddr
	CkTask *DetermineSettingsAsync(void);


	// Returns an XML representation of the complete remote directory tree rooted at
	// the current remote directory. The result uses a <dirTree> root, nested <dir
	// name="..."> elements, and file elements containing the name, size, and available
	// modification time.<dirTree>
	//   <file sz="123" dt="Mon, 27 Jul 2026 06:55:00 -0500">root.txt</file>
	//   <dir name="subdir">
	//     <file sz="456" dt="...">nested.txt</file>
	//   </dir>
	// </dirTree>
	// 
	// Chilkat traverses by listing each directory and temporarily changing the
	// server's current directory. Empty directories are included, and the original
	// current remote directory is restored after successful traversal.
	// 
	// Traversal is affected by SyncMustMatch[1], SyncMustNotMatch[2],
	// SyncMustMatchDir[3], and SyncMustNotMatchDir[4]. This method retrieves metadata;
	// it does not download file content.
	// 
	// 
	// References:
	// [1] #SyncMustMatch
	// [2] #SyncMustNotMatch
	// [3] #SyncMustMatchDir
	// [4] #SyncMustNotMatchDir
	bool DirTreeXml(CkString &outStrXml);

	// Returns an XML representation of the complete remote directory tree rooted at
	// the current remote directory. The result uses a <dirTree> root, nested <dir
	// name="..."> elements, and file elements containing the name, size, and available
	// modification time.<dirTree>
	//   <file sz="123" dt="Mon, 27 Jul 2026 06:55:00 -0500">root.txt</file>
	//   <dir name="subdir">
	//     <file sz="456" dt="...">nested.txt</file>
	//   </dir>
	// </dirTree>
	// 
	// Chilkat traverses by listing each directory and temporarily changing the
	// server's current directory. Empty directories are included, and the original
	// current remote directory is restored after successful traversal.
	// 
	// Traversal is affected by SyncMustMatch[1], SyncMustNotMatch[2],
	// SyncMustMatchDir[3], and SyncMustNotMatchDir[4]. This method retrieves metadata;
	// it does not download file content.
	// 
	// 
	// References:
	// [1] #SyncMustMatch
	// [2] #SyncMustNotMatch
	// [3] #SyncMustMatchDir
	// [4] #SyncMustNotMatchDir
	const char *dirTreeXml(void);
	// Returns an XML representation of the complete remote directory tree rooted at
	// the current remote directory. The result uses a <dirTree> root, nested <dir
	// name="..."> elements, and file elements containing the name, size, and available
	// modification time.<dirTree>
	//   <file sz="123" dt="Mon, 27 Jul 2026 06:55:00 -0500">root.txt</file>
	//   <dir name="subdir">
	//     <file sz="456" dt="...">nested.txt</file>
	//   </dir>
	// </dirTree>
	// 
	// Chilkat traverses by listing each directory and temporarily changing the
	// server's current directory. Empty directories are included, and the original
	// current remote directory is restored after successful traversal.
	// 
	// Traversal is affected by SyncMustMatch[1], SyncMustNotMatch[2],
	// SyncMustMatchDir[3], and SyncMustNotMatchDir[4]. This method retrieves metadata;
	// it does not download file content.
	// 
	// 
	// References:
	// [1] #SyncMustMatch
	// [2] #SyncMustNotMatch
	// [3] #SyncMustMatchDir
	// [4] #SyncMustNotMatchDir
	CkTask *DirTreeXmlAsync(void);


	// Ends the FTP session and closes the control connection. When connected, Chilkat
	// sends QUIT when possible and then closes the socket.
	// 
	// The method is idempotent. Calling it before a connection exists or calling it
	// again after the session is already closed succeeds without sending another FTP
	// command. Historical properties such as ConnectVerified[1], LoginVerified[2],
	// Greeting[3], and LastReply[4] may retain information from the completed session;
	// use CheckConnection[5] for current connection state.
	// 
	// 
	// References:
	// [1] #ConnectVerified
	// [2] #LoginVerified
	// [3] #Greeting
	// [4] #LastReply
	// [5] #CheckConnection
	bool Disconnect(void);

	// Ends the FTP session and closes the control connection. When connected, Chilkat
	// sends QUIT when possible and then closes the socket.
	// 
	// The method is idempotent. Calling it before a connection exists or calling it
	// again after the session is already closed succeeds without sending another FTP
	// command. Historical properties such as ConnectVerified[1], LoginVerified[2],
	// Greeting[3], and LastReply[4] may retain information from the completed session;
	// use CheckConnection[5] for current connection state.
	// 
	// 
	// References:
	// [1] #ConnectVerified
	// [2] #LoginVerified
	// [3] #Greeting
	// [4] #LastReply
	// [5] #CheckConnection
	CkTask *DisconnectAsync(void);


	// Downloads all selected files and subdirectories beneath the current remote
	// directory and recreates the tree under the local directory at localRoot. Existing
	// local files are overwritten, and eligible empty remote directories are created
	// locally.
	// 
	// The file and directory filters in SyncMustMatch[1], SyncMustNotMatch[2],
	// SyncMustMatchDir[3], and SyncMustNotMatchDir[4] apply. Use SetOldestDateStr[5]
	// to exclude files older than a chosen date.
	// 
	// Windows filenames: Remote names that contain characters invalid in a Windows
	// filename are sanitized when creating the local tree. Invalid characters are
	// replaced with underscores and trailing periods are removed. For example,
	// a<b>c:d|e?f*g.txt is saved as a_b_c_d_e_f_g.txt. Different remote names can
	// potentially map to the same local path.
	// 
	// References:
	// [1] #SyncMustMatch
	// [2] #SyncMustNotMatch
	// [3] #SyncMustMatchDir
	// [4] #SyncMustNotMatchDir
	// [5] #SetOldestDateStr
	bool DownloadTree(const char *localRoot);

	// Downloads all selected files and subdirectories beneath the current remote
	// directory and recreates the tree under the local directory at localRoot. Existing
	// local files are overwritten, and eligible empty remote directories are created
	// locally.
	// 
	// The file and directory filters in SyncMustMatch[1], SyncMustNotMatch[2],
	// SyncMustMatchDir[3], and SyncMustNotMatchDir[4] apply. Use SetOldestDateStr[5]
	// to exclude files older than a chosen date.
	// 
	// Windows filenames: Remote names that contain characters invalid in a Windows
	// filename are sanitized when creating the local tree. Invalid characters are
	// replaced with underscores and trailing periods are removed. For example,
	// a<b>c:d|e?f*g.txt is saved as a_b_c_d_e_f_g.txt. Different remote names can
	// potentially map to the same local path.
	// 
	// References:
	// [1] #SyncMustMatch
	// [2] #SyncMustNotMatch
	// [3] #SyncMustMatchDir
	// [4] #SyncMustNotMatchDir
	// [5] #SetOldestDateStr
	CkTask *DownloadTreeAsync(const char *localRoot);


	// Sends FEAT and returns the server's multiline capability reply. A server may
	// return an error when the command is unsupported or not permitted in the current
	// session state.
	// 
	// A successful explicit call performs the same capability processing as automatic
	// FEAT. It can update HasModeZ[1], listing-extension detection, UTF-8 handling
	// through AutoOptsUtf8[2], and UseEpsv[3] through AutoSetUseEpsv[4], even when
	// AutoFeat[5] is false.
	// 
	// Some servers permit FEAT before authentication and others do not.
	// 
	// 
	// References:
	// [1] #HasModeZ
	// [2] #AutoOptsUtf8
	// [3] #UseEpsv
	// [4] #AutoSetUseEpsv
	// [5] #AutoFeat
	bool Feat(CkString &outStr);

	// Sends FEAT and returns the server's multiline capability reply. A server may
	// return an error when the command is unsupported or not permitted in the current
	// session state.
	// 
	// A successful explicit call performs the same capability processing as automatic
	// FEAT. It can update HasModeZ[1], listing-extension detection, UTF-8 handling
	// through AutoOptsUtf8[2], and UseEpsv[3] through AutoSetUseEpsv[4], even when
	// AutoFeat[5] is false.
	// 
	// Some servers permit FEAT before authentication and others do not.
	// 
	// 
	// References:
	// [1] #HasModeZ
	// [2] #AutoOptsUtf8
	// [3] #UseEpsv
	// [4] #AutoSetUseEpsv
	// [5] #AutoFeat
	const char *feat(void);
	// Sends FEAT and returns the server's multiline capability reply. A server may
	// return an error when the command is unsupported or not permitted in the current
	// session state.
	// 
	// A successful explicit call performs the same capability processing as automatic
	// FEAT. It can update HasModeZ[1], listing-extension detection, UTF-8 handling
	// through AutoOptsUtf8[2], and UseEpsv[3] through AutoSetUseEpsv[4], even when
	// AutoFeat[5] is false.
	// 
	// Some servers permit FEAT before authentication and others do not.
	// 
	// 
	// References:
	// [1] #HasModeZ
	// [2] #AutoOptsUtf8
	// [3] #UseEpsv
	// [4] #AutoSetUseEpsv
	// [5] #AutoFeat
	CkTask *FeatAsync(void);


	// Deprecated. Returns a new DateTime containing the creation time for cached
	// directory-listing entry index. Use GetCreateTimeStr[1] when a string result is
	// preferred. index is a zero-based index from 0 through one less than
	// GetDirCount[2].
	// 
	// References:
	// [1] #GetCreateTimeStr
	// [2] #GetDirCount
	// The caller is responsible for deleting the object returned by this method.
	CkDateTime *GetCreateDt(int index);

	// Deprecated. Returns a new DateTime containing the creation time for cached
	// directory-listing entry index. Use GetCreateTimeStr[1] when a string result is
	// preferred. index is a zero-based index from 0 through one less than
	// GetDirCount[2].
	// 
	// References:
	// [1] #GetCreateTimeStr
	// [2] #GetDirCount
	CkTask *GetCreateDtAsync(int index);


	// Deprecated. Returns a new DateTime containing the creation time for the file or
	// directory named by filename in the current remote directory. Use
	// GetCreateTimeByNameStr[1] when a string result is preferred.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[2] matches the name so the item is present in the cached
	// listing.
	// 
	// Creation times: Many UNIX-like filesystems and FTP listing formats do not
	// provide a file creation time. In that case the server or parser may report the
	// modification time instead.
	// 
	// References:
	// [1] #GetCreateTimeByNameStr
	// [2] #ListPattern
	// The caller is responsible for deleting the object returned by this method.
	CkDateTime *GetCreateDtByName(const char *filename);

	// Deprecated. Returns a new DateTime containing the creation time for the file or
	// directory named by filename in the current remote directory. Use
	// GetCreateTimeByNameStr[1] when a string result is preferred.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[2] matches the name so the item is present in the cached
	// listing.
	// 
	// Creation times: Many UNIX-like filesystems and FTP listing formats do not
	// provide a file creation time. In that case the server or parser may report the
	// modification time instead.
	// 
	// References:
	// [1] #GetCreateTimeByNameStr
	// [2] #ListPattern
	CkTask *GetCreateDtByNameAsync(const char *filename);


	// Returns the creation time for the file or directory named by filename in the current
	// remote directory as an RFC 822 date-time string, such as Fri, 21 Nov 1997
	// 09:55:06 -0600.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[1] matches the name so the item is present in the cached
	// listing.
	// 
	// Creation times: Many UNIX-like filesystems and FTP listing formats do not
	// provide a file creation time. In that case the server or parser may report the
	// modification time instead.
	// 
	// References:
	// [1] #ListPattern
	bool GetCreateTimeByNameStr(const char *filename, CkString &outStr);

	// Returns the creation time for the file or directory named by filename in the current
	// remote directory as an RFC 822 date-time string, such as Fri, 21 Nov 1997
	// 09:55:06 -0600.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[1] matches the name so the item is present in the cached
	// listing.
	// 
	// Creation times: Many UNIX-like filesystems and FTP listing formats do not
	// provide a file creation time. In that case the server or parser may report the
	// modification time instead.
	// 
	// References:
	// [1] #ListPattern
	const char *getCreateTimeByNameStr(const char *filename);
	// Returns the creation time for the file or directory named by filename in the current
	// remote directory as an RFC 822 date-time string, such as Fri, 21 Nov 1997
	// 09:55:06 -0600.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[1] matches the name so the item is present in the cached
	// listing.
	// 
	// Creation times: Many UNIX-like filesystems and FTP listing formats do not
	// provide a file creation time. In that case the server or parser may report the
	// modification time instead.
	// 
	// References:
	// [1] #ListPattern
	const char *createTimeByNameStr(const char *filename);

	// Returns the creation time for the file or directory named by filename in the current
	// remote directory as an RFC 822 date-time string, such as Fri, 21 Nov 1997
	// 09:55:06 -0600.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[1] matches the name so the item is present in the cached
	// listing.
	// 
	// Creation times: Many UNIX-like filesystems and FTP listing formats do not
	// provide a file creation time. In that case the server or parser may report the
	// modification time instead.
	// 
	// References:
	// [1] #ListPattern
	CkTask *GetCreateTimeByNameStrAsync(const char *filename);


	// Returns the creation time for cached directory-listing entry index as an RFC 822
	// date-time string, such as Fri, 21 Nov 1997 09:55:06 -0600. index is a zero-based
	// index from 0 through one less than GetDirCount[1]. Creation-time availability
	// depends on the server and listing format.
	// 
	// An invalid index or unavailable creation time is a method failure and sets
	// LastMethodSuccess to false.
	// 
	// 
	// References:
	// [1] #GetDirCount
	bool GetCreateTimeStr(int index, CkString &outStr);

	// Returns the creation time for cached directory-listing entry index as an RFC 822
	// date-time string, such as Fri, 21 Nov 1997 09:55:06 -0600. index is a zero-based
	// index from 0 through one less than GetDirCount[1]. Creation-time availability
	// depends on the server and listing format.
	// 
	// An invalid index or unavailable creation time is a method failure and sets
	// LastMethodSuccess to false.
	// 
	// 
	// References:
	// [1] #GetDirCount
	const char *getCreateTimeStr(int index);
	// Returns the creation time for cached directory-listing entry index as an RFC 822
	// date-time string, such as Fri, 21 Nov 1997 09:55:06 -0600. index is a zero-based
	// index from 0 through one less than GetDirCount[1]. Creation-time availability
	// depends on the server and listing format.
	// 
	// An invalid index or unavailable creation time is a method failure and sets
	// LastMethodSuccess to false.
	// 
	// 
	// References:
	// [1] #GetDirCount
	const char *createTimeStr(int index);

	// Returns the creation time for cached directory-listing entry index as an RFC 822
	// date-time string, such as Fri, 21 Nov 1997 09:55:06 -0600. index is a zero-based
	// index from 0 through one less than GetDirCount[1]. Creation-time availability
	// depends on the server and listing format.
	// 
	// An invalid index or unavailable creation time is a method failure and sets
	// LastMethodSuccess to false.
	// 
	// 
	// References:
	// [1] #GetDirCount
	CkTask *GetCreateTimeStrAsync(int index);


	// Returns the current working directory reported by the FTP server, normally by
	// using the PWD command.
	bool GetCurrentRemoteDir(CkString &outStr);

	// Returns the current working directory reported by the FTP server, normally by
	// using the PWD command.
	const char *getCurrentRemoteDir(void);
	// Returns the current working directory reported by the FTP server, normally by
	// using the PWD command.
	const char *currentRemoteDir(void);

	// Returns the current working directory reported by the FTP server, normally by
	// using the PWD command.
	CkTask *GetCurrentRemoteDirAsync(void);


	// Returns the number of files and directories in the cached listing of the current
	// remote directory after applying the case-insensitive ListPattern[1]. On the
	// first call, Chilkat obtains and caches the full directory listing and then
	// applies the pattern locally. Repeated indexed listing calls use the cache until
	// it is invalidated. Returns -1 if the listing cannot be obtained or parsed.
	// 
	// The cache is not automatically refreshed by uploads, deletions, renames,
	// directory creation/removal, raw commands, or changes to the listing-command
	// selection properties. Call ClearDirCache[2] when the server contents or desired
	// listing format may have changed.
	// 
	// Directory listings use a data connection: An FTP listing is transferred over a
	// separate data connection, just like an upload or download. If this method
	// stalls, investigate passive/active mode, NAT, firewall rules, and the
	// data-connection details in LastErrorText.
	// 
	// References:
	// [1] #ListPattern
	// [2] #ClearDirCache
	int GetDirCount(void);

	// Returns the number of files and directories in the cached listing of the current
	// remote directory after applying the case-insensitive ListPattern[1]. On the
	// first call, Chilkat obtains and caches the full directory listing and then
	// applies the pattern locally. Repeated indexed listing calls use the cache until
	// it is invalidated. Returns -1 if the listing cannot be obtained or parsed.
	// 
	// The cache is not automatically refreshed by uploads, deletions, renames,
	// directory creation/removal, raw commands, or changes to the listing-command
	// selection properties. Call ClearDirCache[2] when the server contents or desired
	// listing format may have changed.
	// 
	// Directory listings use a data connection: An FTP listing is transferred over a
	// separate data connection, just like an upload or download. If this method
	// stalls, investigate passive/active mode, NAT, firewall rules, and the
	// data-connection details in LastErrorText.
	// 
	// References:
	// [1] #ListPattern
	// [2] #ClearDirCache
	CkTask *GetDirCountAsync(void);


	// Downloads the remote file at remoteFilePath to the local filesystem path at localFilePath. The
	// local parent directory must already exist; this method does not create missing
	// local directories.
	// 
	// When not resuming, the downloaded file replaces an existing destination after
	// the server accepts the transfer. If the server rejects the request before
	// transfer begins, such as when the remote file does not exist, an existing
	// destination file is preserved.
	// 
	// Use RestartNext[1] immediately before this call to resume from the existing
	// local file length. ReadTimeout[2] controls data-channel inactivity. If a
	// transfer fails after receiving some data, inspect PartialTransfer[3]; completed
	// bytes are not rolled back.
	// 
	// 
	// References:
	// [1] #RestartNext
	// [2] #ReadTimeout
	// [3] #PartialTransfer
	bool GetFile(const char *remoteFilePath, const char *localFilePath);

	// Downloads the remote file at remoteFilePath to the local filesystem path at localFilePath. The
	// local parent directory must already exist; this method does not create missing
	// local directories.
	// 
	// When not resuming, the downloaded file replaces an existing destination after
	// the server accepts the transfer. If the server rejects the request before
	// transfer begins, such as when the remote file does not exist, an existing
	// destination file is preserved.
	// 
	// Use RestartNext[1] immediately before this call to resume from the existing
	// local file length. ReadTimeout[2] controls data-channel inactivity. If a
	// transfer fails after receiving some data, inspect PartialTransfer[3]; completed
	// bytes are not rolled back.
	// 
	// 
	// References:
	// [1] #RestartNext
	// [2] #ReadTimeout
	// [3] #PartialTransfer
	CkTask *GetFileAsync(const char *remoteFilePath, const char *localFilePath);


	// Downloads the remote file at remoteFilePath and appends its bytes to the existing contents
	// of the BinData object in binData. The object is not cleared automatically. No text
	// decoding or line-ending conversion is performed.
	// 
	// When RestartNext[1] is true, the current byte count in binData is used as the
	// resume offset and only the remaining remote bytes are appended.
	// 
	// 
	// References:
	// [1] #RestartNext
	bool GetFileBd(const char *remoteFilePath, CkBinData &binData);

	// Downloads the remote file at remoteFilePath and appends its bytes to the existing contents
	// of the BinData object in binData. The object is not cleared automatically. No text
	// decoding or line-ending conversion is performed.
	// 
	// When RestartNext[1] is true, the current byte count in binData is used as the
	// resume offset and only the remaining remote bytes are appended.
	// 
	// 
	// References:
	// [1] #RestartNext
	CkTask *GetFileBdAsync(const char *remoteFilePath, CkBinData &binData);


	// Returns the name of cached directory-listing entry index. index is a zero-based
	// index from 0 through one less than GetDirCount[1]. The returned value is the
	// name from the listing, not necessarily a full remote path.
	// 
	// An out-of-range or negative index is a method failure and sets LastMethodSuccess
	// to false.
	// 
	// 
	// References:
	// [1] #GetDirCount
	bool GetFilename(int index, CkString &outStr);

	// Returns the name of cached directory-listing entry index. index is a zero-based
	// index from 0 through one less than GetDirCount[1]. The returned value is the
	// name from the listing, not necessarily a full remote path.
	// 
	// An out-of-range or negative index is a method failure and sets LastMethodSuccess
	// to false.
	// 
	// 
	// References:
	// [1] #GetDirCount
	const char *getFilename(int index);
	// Returns the name of cached directory-listing entry index. index is a zero-based
	// index from 0 through one less than GetDirCount[1]. The returned value is the
	// name from the listing, not necessarily a full remote path.
	// 
	// An out-of-range or negative index is a method failure and sets LastMethodSuccess
	// to false.
	// 
	// 
	// References:
	// [1] #GetDirCount
	const char *filename(int index);

	// Returns the name of cached directory-listing entry index. index is a zero-based
	// index from 0 through one less than GetDirCount[1]. The returned value is the
	// name from the listing, not necessarily a full remote path.
	// 
	// An out-of-range or negative index is a method failure and sets LastMethodSuccess
	// to false.
	// 
	// 
	// References:
	// [1] #GetDirCount
	CkTask *GetFilenameAsync(int index);


	// Downloads the remote file at remoteFilePath, decodes its bytes using the charset named by
	// charset, and appends the resulting text to the existing contents of the
	// StringBuilder in sb. The destination is not cleared automatically.
	// 
	// A byte-order mark for the selected encoding is recognized and removed from the
	// decoded text. Invalid byte sequences are replaced during decoding rather than
	// causing the transfer itself to fail.
	// 
	// When RestartNext[1] is true, the existing destination content is used to
	// determine the resume offset, and the remaining decoded content is appended.
	// 
	// 
	// References:
	// [1] #RestartNext
	bool GetFileSb(const char *remoteFilePath, const char *charset, CkStringBuilder &sb);

	// Downloads the remote file at remoteFilePath, decodes its bytes using the charset named by
	// charset, and appends the resulting text to the existing contents of the
	// StringBuilder in sb. The destination is not cleared automatically.
	// 
	// A byte-order mark for the selected encoding is recognized and removed from the
	// decoded text. Invalid byte sequences are replaced during decoding rather than
	// causing the transfer itself to fail.
	// 
	// When RestartNext[1] is true, the existing destination content is used to
	// determine the resume offset, and the remaining decoded content is appended.
	// 
	// 
	// References:
	// [1] #RestartNext
	CkTask *GetFileSbAsync(const char *remoteFilePath, const char *charset, CkStringBuilder &sb);


	// Downloads the remote file at remoteFilePath and writes its bytes to the Stream in toStream.
	// 
	// For a synchronous call, toStream must be configured with a destination sink before
	// the method begins. For an asynchronous call, application code may read from the
	// stream while the background download produces data.
	// 
	bool GetFileToStream(const char *remoteFilePath, CkStream &toStream);

	// Downloads the remote file at remoteFilePath and writes its bytes to the Stream in toStream.
	// 
	// For a synchronous call, toStream must be configured with a destination sink before
	// the method begins. For an asynchronous call, application code may read from the
	// stream while the background download produces data.
	// 
	CkTask *GetFileToStreamAsync(const char *remoteFilePath, CkStream &toStream);


	// Returns the group name or identifier for cached directory-listing entry index.
	// The value is empty when the server does not provide group metadata.
	// MLSD metadata: MLSD commonly provides accurate size and time facts but often
	// omits owner and group. On a UNIX-like server, disabling AllowMlsd[1] may expose
	// owner/group through LIST, at the cost of less standardized and potentially less
	// accurate listing data.
	// 
	// References:
	// [1] #AllowMlsd
	bool GetGroup(int index, CkString &outStr);

	// Returns the group name or identifier for cached directory-listing entry index.
	// The value is empty when the server does not provide group metadata.
	// MLSD metadata: MLSD commonly provides accurate size and time facts but often
	// omits owner and group. On a UNIX-like server, disabling AllowMlsd[1] may expose
	// owner/group through LIST, at the cost of less standardized and potentially less
	// accurate listing data.
	// 
	// References:
	// [1] #AllowMlsd
	const char *getGroup(int index);
	// Returns the group name or identifier for cached directory-listing entry index.
	// The value is empty when the server does not provide group metadata.
	// MLSD metadata: MLSD commonly provides accurate size and time facts but often
	// omits owner and group. On a UNIX-like server, disabling AllowMlsd[1] may expose
	// owner/group through LIST, at the cost of less standardized and potentially less
	// accurate listing data.
	// 
	// References:
	// [1] #AllowMlsd
	const char *group(int index);

	// Returns the group name or identifier for cached directory-listing entry index.
	// The value is empty when the server does not provide group metadata.
	// MLSD metadata: MLSD commonly provides accurate size and time facts but often
	// omits owner and group. On a UNIX-like server, disabling AllowMlsd[1] may expose
	// owner/group through LIST, at the cost of less standardized and potentially less
	// accurate listing data.
	// 
	// References:
	// [1] #AllowMlsd
	CkTask *GetGroupAsync(int index);


	// Returns true when cached directory-listing entry index is identified as a
	// directory. index is a zero-based index into the current cached listing.
	// 
	// For an invalid index the method returns false and sets LastMethodSuccess to
	// false. Check that property when false must be distinguished from a valid
	// non-directory entry.
	// 
	bool GetIsDirectory(int index);

	// Returns true when cached directory-listing entry index is identified as a
	// directory. index is a zero-based index into the current cached listing.
	// 
	// For an invalid index the method returns false and sets LastMethodSuccess to
	// false. Check that property when false must be distinguished from a valid
	// non-directory entry.
	// 
	CkTask *GetIsDirectoryAsync(int index);


	// Returns true when cached directory-listing entry index is identified as a
	// symbolic link. This information is available only when the server's listing
	// format reports it.
	// 
	// For an invalid index the method returns false and sets LastMethodSuccess to
	// false. A valid false result can also mean the entry is not a link or the
	// listing did not provide link metadata.
	// 
	bool GetIsSymbolicLink(int index);

	// Returns true when cached directory-listing entry index is identified as a
	// symbolic link. This information is available only when the server's listing
	// format reports it.
	// 
	// For an invalid index the method returns false and sets LastMethodSuccess to
	// false. A valid false result can also mean the entry is not a link or the
	// listing did not provide link metadata.
	// 
	CkTask *GetIsSymbolicLinkAsync(int index);


	// Copies structured supplemental JSON produced by the immediately preceding method
	// into the JsonObject in json. TLS connection and protected data-connection
	// operations can populate information such as the negotiated TLS version.
	// 
	// The data is transient. A later method may replace it or clear it to an empty
	// object, including ordinary commands such as NOOP, raw commands, or
	// Disconnect[1]. Call this method immediately after the operation whose details
	// are needed.
	// 
	// 
	// References:
	// [1] #Disconnect
	void GetLastJsonData(CkJsonObject &json);


	// Deprecated. Returns a new DateTime containing the last-modified time for cached
	// directory-listing entry index. Use GetLastModifiedTimeStr[1] when a string result
	// is preferred.
	// 
	// References:
	// [1] #GetLastModifiedTimeStr
	// The caller is responsible for deleting the object returned by this method.
	CkDateTime *GetLastModDt(int index);

	// Deprecated. Returns a new DateTime containing the last-modified time for cached
	// directory-listing entry index. Use GetLastModifiedTimeStr[1] when a string result
	// is preferred.
	// 
	// References:
	// [1] #GetLastModifiedTimeStr
	CkTask *GetLastModDtAsync(int index);


	// Deprecated. Returns a new DateTime containing the last-modified time for the
	// item named by filename in the current remote directory. Use
	// GetLastModifiedTimeByNameStr[1] when a string result is preferred.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[2] matches the name.
	// 
	// 
	// References:
	// [1] #GetLastModifiedTimeByNameStr
	// [2] #ListPattern
	// The caller is responsible for deleting the object returned by this method.
	CkDateTime *GetLastModDtByName(const char *filename);

	// Deprecated. Returns a new DateTime containing the last-modified time for the
	// item named by filename in the current remote directory. Use
	// GetLastModifiedTimeByNameStr[1] when a string result is preferred.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[2] matches the name.
	// 
	// 
	// References:
	// [1] #GetLastModifiedTimeByNameStr
	// [2] #ListPattern
	CkTask *GetLastModDtByNameAsync(const char *filename);


	// Returns the last-modified time for the item named by filename in the current remote
	// directory as an RFC 822 date-time string, such as Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[1] matches the name.
	// 
	// 
	// References:
	// [1] #ListPattern
	bool GetLastModifiedTimeByNameStr(const char *filename, CkString &outStr);

	// Returns the last-modified time for the item named by filename in the current remote
	// directory as an RFC 822 date-time string, such as Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[1] matches the name.
	// 
	// 
	// References:
	// [1] #ListPattern
	const char *getLastModifiedTimeByNameStr(const char *filename);
	// Returns the last-modified time for the item named by filename in the current remote
	// directory as an RFC 822 date-time string, such as Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[1] matches the name.
	// 
	// 
	// References:
	// [1] #ListPattern
	const char *lastModifiedTimeByNameStr(const char *filename);

	// Returns the last-modified time for the item named by filename in the current remote
	// directory as an RFC 822 date-time string, such as Fri, 21 Nov 1997 09:55:06
	// -0600.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[1] matches the name.
	// 
	// 
	// References:
	// [1] #ListPattern
	CkTask *GetLastModifiedTimeByNameStrAsync(const char *filename);


	// Returns the last-modified time for cached directory-listing entry index as an RFC
	// 822 date-time string, such as Fri, 21 Nov 1997 09:55:06 -0600. index is a
	// zero-based index into the current cached listing.
	// 
	// An invalid index or unavailable timestamp is a method failure and sets
	// LastMethodSuccess to false.
	// 
	bool GetLastModifiedTimeStr(int index, CkString &outStr);

	// Returns the last-modified time for cached directory-listing entry index as an RFC
	// 822 date-time string, such as Fri, 21 Nov 1997 09:55:06 -0600. index is a
	// zero-based index into the current cached listing.
	// 
	// An invalid index or unavailable timestamp is a method failure and sets
	// LastMethodSuccess to false.
	// 
	const char *getLastModifiedTimeStr(int index);
	// Returns the last-modified time for cached directory-listing entry index as an RFC
	// 822 date-time string, such as Fri, 21 Nov 1997 09:55:06 -0600. index is a
	// zero-based index into the current cached listing.
	// 
	// An invalid index or unavailable timestamp is a method failure and sets
	// LastMethodSuccess to false.
	// 
	const char *lastModifiedTimeStr(int index);

	// Returns the last-modified time for cached directory-listing entry index as an RFC
	// 822 date-time string, such as Fri, 21 Nov 1997 09:55:06 -0600. index is a
	// zero-based index into the current cached listing.
	// 
	// An invalid index or unavailable timestamp is a method failure and sets
	// LastMethodSuccess to false.
	// 
	CkTask *GetLastModifiedTimeStrAsync(int index);


	// Returns the owner name or identifier for cached directory-listing entry index.
	// The value is empty when a valid entry has no owner metadata. An invalid index is
	// a method failure and sets LastMethodSuccess to false.
	// MLSD metadata: MLSD commonly provides accurate size and time facts but often
	// omits owner and group. On a UNIX-like server, disabling AllowMlsd[1] may expose
	// owner/group through LIST, at the cost of less standardized and potentially less
	// accurate listing data.
	// 
	// References:
	// [1] #AllowMlsd
	bool GetOwner(int index, CkString &outStr);

	// Returns the owner name or identifier for cached directory-listing entry index.
	// The value is empty when a valid entry has no owner metadata. An invalid index is
	// a method failure and sets LastMethodSuccess to false.
	// MLSD metadata: MLSD commonly provides accurate size and time facts but often
	// omits owner and group. On a UNIX-like server, disabling AllowMlsd[1] may expose
	// owner/group through LIST, at the cost of less standardized and potentially less
	// accurate listing data.
	// 
	// References:
	// [1] #AllowMlsd
	const char *getOwner(int index);
	// Returns the owner name or identifier for cached directory-listing entry index.
	// The value is empty when a valid entry has no owner metadata. An invalid index is
	// a method failure and sets LastMethodSuccess to false.
	// MLSD metadata: MLSD commonly provides accurate size and time facts but often
	// omits owner and group. On a UNIX-like server, disabling AllowMlsd[1] may expose
	// owner/group through LIST, at the cost of less standardized and potentially less
	// accurate listing data.
	// 
	// References:
	// [1] #AllowMlsd
	const char *owner(int index);

	// Returns the owner name or identifier for cached directory-listing entry index.
	// The value is empty when a valid entry has no owner metadata. An invalid index is
	// a method failure and sets LastMethodSuccess to false.
	// MLSD metadata: MLSD commonly provides accurate size and time facts but often
	// omits owner and group. On a UNIX-like server, disabling AllowMlsd[1] may expose
	// owner/group through LIST, at the cost of less standardized and potentially less
	// accurate listing data.
	// 
	// References:
	// [1] #AllowMlsd
	CkTask *GetOwnerAsync(int index);


	// Returns the permissions or status string for cached directory-listing entry
	// index. The value is empty when the server provides no such metadata. Use
	// GetPermType[1] to determine how to interpret the result.
	// 
	// +------------------+-----------------------------------------------------------+
	// | Permission type  |                   Returned information                    |
	// +==================+===========================================================+
	// | mlsd             | The RFC 3659 perm fact. Letters describe FTP operations   |
	// |                  | available to the logged-in user, such as append, create,  |
	// |                  | delete, enter, list, rename, or write.                    |
	// +------------------+-----------------------------------------------------------+
	// | unix             | A UNIX-style string such as rwxr-xr-x .                   |
	// +------------------+-----------------------------------------------------------+
	// | netware          | NetWare trustee-right letters such as read, write,        |
	// |                  | create, erase, modify, file scan, access control, and     |
	// |                  | supervisor.                                               |
	// +------------------+-----------------------------------------------------------+
	// | openvms          | An OpenVMS protection string such as (RWED,RWED,R,R) .    |
	// +------------------+-----------------------------------------------------------+
	// | batchStatusFlags | A fixed-position Connect:Enterprise batch-status string   |
	// |                  | such as -CR--M---- .                                      |
	// +------------------+-----------------------------------------------------------+
	// 
	// MLSD perm is not a file mode: The MLSD perm fact describes operations the
	// current FTP account may perform. It is not equivalent to UNIX owner/group/other
	// permission bits.
	// 
	// References:
	// [1] #GetPermType
	bool GetPermissions(int index, CkString &outStr);

	// Returns the permissions or status string for cached directory-listing entry
	// index. The value is empty when the server provides no such metadata. Use
	// GetPermType[1] to determine how to interpret the result.
	// 
	// +------------------+-----------------------------------------------------------+
	// | Permission type  |                   Returned information                    |
	// +==================+===========================================================+
	// | mlsd             | The RFC 3659 perm fact. Letters describe FTP operations   |
	// |                  | available to the logged-in user, such as append, create,  |
	// |                  | delete, enter, list, rename, or write.                    |
	// +------------------+-----------------------------------------------------------+
	// | unix             | A UNIX-style string such as rwxr-xr-x .                   |
	// +------------------+-----------------------------------------------------------+
	// | netware          | NetWare trustee-right letters such as read, write,        |
	// |                  | create, erase, modify, file scan, access control, and     |
	// |                  | supervisor.                                               |
	// +------------------+-----------------------------------------------------------+
	// | openvms          | An OpenVMS protection string such as (RWED,RWED,R,R) .    |
	// +------------------+-----------------------------------------------------------+
	// | batchStatusFlags | A fixed-position Connect:Enterprise batch-status string   |
	// |                  | such as -CR--M---- .                                      |
	// +------------------+-----------------------------------------------------------+
	// 
	// MLSD perm is not a file mode: The MLSD perm fact describes operations the
	// current FTP account may perform. It is not equivalent to UNIX owner/group/other
	// permission bits.
	// 
	// References:
	// [1] #GetPermType
	const char *getPermissions(int index);
	// Returns the permissions or status string for cached directory-listing entry
	// index. The value is empty when the server provides no such metadata. Use
	// GetPermType[1] to determine how to interpret the result.
	// 
	// +------------------+-----------------------------------------------------------+
	// | Permission type  |                   Returned information                    |
	// +==================+===========================================================+
	// | mlsd             | The RFC 3659 perm fact. Letters describe FTP operations   |
	// |                  | available to the logged-in user, such as append, create,  |
	// |                  | delete, enter, list, rename, or write.                    |
	// +------------------+-----------------------------------------------------------+
	// | unix             | A UNIX-style string such as rwxr-xr-x .                   |
	// +------------------+-----------------------------------------------------------+
	// | netware          | NetWare trustee-right letters such as read, write,        |
	// |                  | create, erase, modify, file scan, access control, and     |
	// |                  | supervisor.                                               |
	// +------------------+-----------------------------------------------------------+
	// | openvms          | An OpenVMS protection string such as (RWED,RWED,R,R) .    |
	// +------------------+-----------------------------------------------------------+
	// | batchStatusFlags | A fixed-position Connect:Enterprise batch-status string   |
	// |                  | such as -CR--M---- .                                      |
	// +------------------+-----------------------------------------------------------+
	// 
	// MLSD perm is not a file mode: The MLSD perm fact describes operations the
	// current FTP account may perform. It is not equivalent to UNIX owner/group/other
	// permission bits.
	// 
	// References:
	// [1] #GetPermType
	const char *permissions(int index);

	// Returns the permissions or status string for cached directory-listing entry
	// index. The value is empty when the server provides no such metadata. Use
	// GetPermType[1] to determine how to interpret the result.
	// 
	// +------------------+-----------------------------------------------------------+
	// | Permission type  |                   Returned information                    |
	// +==================+===========================================================+
	// | mlsd             | The RFC 3659 perm fact. Letters describe FTP operations   |
	// |                  | available to the logged-in user, such as append, create,  |
	// |                  | delete, enter, list, rename, or write.                    |
	// +------------------+-----------------------------------------------------------+
	// | unix             | A UNIX-style string such as rwxr-xr-x .                   |
	// +------------------+-----------------------------------------------------------+
	// | netware          | NetWare trustee-right letters such as read, write,        |
	// |                  | create, erase, modify, file scan, access control, and     |
	// |                  | supervisor.                                               |
	// +------------------+-----------------------------------------------------------+
	// | openvms          | An OpenVMS protection string such as (RWED,RWED,R,R) .    |
	// +------------------+-----------------------------------------------------------+
	// | batchStatusFlags | A fixed-position Connect:Enterprise batch-status string   |
	// |                  | such as -CR--M---- .                                      |
	// +------------------+-----------------------------------------------------------+
	// 
	// MLSD perm is not a file mode: The MLSD perm fact describes operations the
	// current FTP account may perform. It is not equivalent to UNIX owner/group/other
	// permission bits.
	// 
	// References:
	// [1] #GetPermType
	CkTask *GetPermissionsAsync(int index);


	// Returns the format identifier for the permissions string available for cached
	// listing entry index. The value is empty when no permissions are available.
	// 
	// +------------------+----------------------------------------+
	// |      Value       |                 Format                 |
	// +==================+========================================+
	// | mlsd             | The RFC 3659 perm fact.                |
	// +------------------+----------------------------------------+
	// | unix             | A UNIX/POSIX-style mode string.        |
	// +------------------+----------------------------------------+
	// | netware          | NetWare trustee rights.                |
	// +------------------+----------------------------------------+
	// | openvms          | An OpenVMS protection string.          |
	// +------------------+----------------------------------------+
	// | batchStatusFlags | Connect:Enterprise batch status flags. |
	// +------------------+----------------------------------------+
	// 
	// Use GetPermissions[1] to obtain the corresponding value.
	// 
	// 
	// References:
	// [1] #GetPermissions
	bool GetPermType(int index, CkString &outStr);

	// Returns the format identifier for the permissions string available for cached
	// listing entry index. The value is empty when no permissions are available.
	// 
	// +------------------+----------------------------------------+
	// |      Value       |                 Format                 |
	// +==================+========================================+
	// | mlsd             | The RFC 3659 perm fact.                |
	// +------------------+----------------------------------------+
	// | unix             | A UNIX/POSIX-style mode string.        |
	// +------------------+----------------------------------------+
	// | netware          | NetWare trustee rights.                |
	// +------------------+----------------------------------------+
	// | openvms          | An OpenVMS protection string.          |
	// +------------------+----------------------------------------+
	// | batchStatusFlags | Connect:Enterprise batch status flags. |
	// +------------------+----------------------------------------+
	// 
	// Use GetPermissions[1] to obtain the corresponding value.
	// 
	// 
	// References:
	// [1] #GetPermissions
	const char *getPermType(int index);
	// Returns the format identifier for the permissions string available for cached
	// listing entry index. The value is empty when no permissions are available.
	// 
	// +------------------+----------------------------------------+
	// |      Value       |                 Format                 |
	// +==================+========================================+
	// | mlsd             | The RFC 3659 perm fact.                |
	// +------------------+----------------------------------------+
	// | unix             | A UNIX/POSIX-style mode string.        |
	// +------------------+----------------------------------------+
	// | netware          | NetWare trustee rights.                |
	// +------------------+----------------------------------------+
	// | openvms          | An OpenVMS protection string.          |
	// +------------------+----------------------------------------+
	// | batchStatusFlags | Connect:Enterprise batch status flags. |
	// +------------------+----------------------------------------+
	// 
	// Use GetPermissions[1] to obtain the corresponding value.
	// 
	// 
	// References:
	// [1] #GetPermissions
	const char *permType(int index);

	// Returns the format identifier for the permissions string available for cached
	// listing entry index. The value is empty when no permissions are available.
	// 
	// +------------------+----------------------------------------+
	// |      Value       |                 Format                 |
	// +==================+========================================+
	// | mlsd             | The RFC 3659 perm fact.                |
	// +------------------+----------------------------------------+
	// | unix             | A UNIX/POSIX-style mode string.        |
	// +------------------+----------------------------------------+
	// | netware          | NetWare trustee rights.                |
	// +------------------+----------------------------------------+
	// | openvms          | An OpenVMS protection string.          |
	// +------------------+----------------------------------------+
	// | batchStatusFlags | Connect:Enterprise batch status flags. |
	// +------------------+----------------------------------------+
	// 
	// Use GetPermissions[1] to obtain the corresponding value.
	// 
	// 
	// References:
	// [1] #GetPermissions
	CkTask *GetPermTypeAsync(int index);


	// Downloads the remote file at remoteFilename and returns its bytes. No character decoding
	// or line-ending conversion is performed.
	bool GetRemoteFileBinaryData(const char *remoteFilename, CkByteData &outData);

	// Downloads the remote file at remoteFilename and returns its bytes. No character decoding
	// or line-ending conversion is performed.
	CkTask *GetRemoteFileBinaryDataAsync(const char *remoteFilename);


	// Downloads the remote file at remoteFilename, decodes the bytes using the character
	// encoding named by charset, and returns the text. A byte-order mark for the selected
	// encoding is recognized and omitted from the returned text.
	// 
	// This method controls file-content decoding. The encoding used for the remote
	// path itself is controlled by CommandCharset[1].
	// 
	// 
	// References:
	// [1] #CommandCharset
	bool GetRemoteFileTextC(const char *remoteFilename, const char *charset, CkString &outStr);

	// Downloads the remote file at remoteFilename, decodes the bytes using the character
	// encoding named by charset, and returns the text. A byte-order mark for the selected
	// encoding is recognized and omitted from the returned text.
	// 
	// This method controls file-content decoding. The encoding used for the remote
	// path itself is controlled by CommandCharset[1].
	// 
	// 
	// References:
	// [1] #CommandCharset
	const char *getRemoteFileTextC(const char *remoteFilename, const char *charset);
	// Downloads the remote file at remoteFilename, decodes the bytes using the character
	// encoding named by charset, and returns the text. A byte-order mark for the selected
	// encoding is recognized and omitted from the returned text.
	// 
	// This method controls file-content decoding. The encoding used for the remote
	// path itself is controlled by CommandCharset[1].
	// 
	// 
	// References:
	// [1] #CommandCharset
	const char *remoteFileTextC(const char *remoteFilename, const char *charset);

	// Downloads the remote file at remoteFilename, decodes the bytes using the character
	// encoding named by charset, and returns the text. A byte-order mark for the selected
	// encoding is recognized and omitted from the returned text.
	// 
	// This method controls file-content decoding. The encoding used for the remote
	// path itself is controlled by CommandCharset[1].
	// 
	// 
	// References:
	// [1] #CommandCharset
	CkTask *GetRemoteFileTextCAsync(const char *remoteFilename, const char *charset);


	// Downloads the remote file at remoteFilename and returns its contents decoded using the
	// ANSI character encoding. Use GetRemoteFileTextC[1] when the file uses UTF-8 or
	// another explicitly known encoding.
	// 
	// References:
	// [1] #GetRemoteFileTextC
	bool GetRemoteFileTextData(const char *remoteFilename, CkString &outStr);

	// Downloads the remote file at remoteFilename and returns its contents decoded using the
	// ANSI character encoding. Use GetRemoteFileTextC[1] when the file uses UTF-8 or
	// another explicitly known encoding.
	// 
	// References:
	// [1] #GetRemoteFileTextC
	const char *getRemoteFileTextData(const char *remoteFilename);
	// Downloads the remote file at remoteFilename and returns its contents decoded using the
	// ANSI character encoding. Use GetRemoteFileTextC[1] when the file uses UTF-8 or
	// another explicitly known encoding.
	// 
	// References:
	// [1] #GetRemoteFileTextC
	const char *remoteFileTextData(const char *remoteFilename);

	// Downloads the remote file at remoteFilename and returns its contents decoded using the
	// ANSI character encoding. Use GetRemoteFileTextC[1] when the file uses UTF-8 or
	// another explicitly known encoding.
	// 
	// References:
	// [1] #GetRemoteFileTextC
	CkTask *GetRemoteFileTextDataAsync(const char *remoteFilename);


	// Loads into the Cert object in cert the leaf certificate presented on the
	// currently connected FTPS control channel.
	// 
	// The method requires an active TLS control connection. A protected data
	// connection does not replace the control-channel certificate returned here, and
	// the certificate is not retained for retrieval after Disconnect[1].
	// 
	// 
	// References:
	// [1] #Disconnect
	bool GetServerCert(CkCert &cert);


	// Returns the size in bytes of cached directory-listing entry index as a 32-bit
	// integer. Use GetSize64[1] for large files.
	// 
	// Returns -1 when index is invalid or the size is unavailable. Because this method
	// returns an integer, do not use LastMethodSuccess to interpret the result.
	// 
	// 
	// References:
	// [1] #GetSize64
	int GetSize(int index);

	// Returns the size in bytes of cached directory-listing entry index as a 32-bit
	// integer. Use GetSize64[1] for large files.
	// 
	// Returns -1 when index is invalid or the size is unavailable. Because this method
	// returns an integer, do not use LastMethodSuccess to interpret the result.
	// 
	// 
	// References:
	// [1] #GetSize64
	CkTask *GetSizeAsync(int index);


	// Returns the size in bytes of cached directory-listing entry index as a 64-bit
	// integer. Returns -1 when index is invalid or the size is unavailable.
	// 
	// Because this method returns an integer, do not use LastMethodSuccess to
	// interpret the result.
	// 
	__int64 GetSize64(int index);

	// Returns the size in bytes of cached directory-listing entry index as a 64-bit
	// integer. Returns -1 when index is invalid or the size is unavailable.
	// 
	// Because this method returns an integer, do not use LastMethodSuccess to
	// interpret the result.
	// 
	CkTask *GetSize64Async(int index);


	// Returns the size in bytes of the file named by filename in the current remote
	// directory as a 32-bit integer. Returns -1 when the file is not found or the size
	// cannot be obtained. Use GetSizeByName64[1] for large files.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[2] matches the name.
	// 
	// 
	// References:
	// [1] #GetSizeByName64
	// [2] #ListPattern
	int GetSizeByName(const char *filename);

	// Returns the size in bytes of the file named by filename in the current remote
	// directory as a 32-bit integer. Returns -1 when the file is not found or the size
	// cannot be obtained. Use GetSizeByName64[1] for large files.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[2] matches the name.
	// 
	// 
	// References:
	// [1] #GetSizeByName64
	// [2] #ListPattern
	CkTask *GetSizeByNameAsync(const char *filename);


	// Sends a SIZE command for filename and returns the remote size in bytes as a 64-bit
	// integer. Returns -1 when the server rejects the command, the item is not found,
	// or the size is unavailable.
	// 
	// This method does not depend on the indexed directory cache or ListPattern[1].
	// Filename and path case sensitivity are determined by the FTP server and its
	// filesystem.
	// 
	// 
	// References:
	// [1] #ListPattern
	__int64 GetSizeByName64(const char *filename);

	// Sends a SIZE command for filename and returns the remote size in bytes as a 64-bit
	// integer. Returns -1 when the server rejects the command, the item is not found,
	// or the size is unavailable.
	// 
	// This method does not depend on the indexed directory cache or ListPattern[1].
	// Filename and path case sensitivity are determined by the FTP server and its
	// filesystem.
	// 
	// 
	// References:
	// [1] #ListPattern
	CkTask *GetSizeByName64Async(const char *filename);


	// Returns the size in bytes of cached directory-listing entry index as a decimal
	// string. This form avoids integer-size limits in languages without a convenient
	// 64-bit type.
	// 
	// An out-of-range or negative index is a method failure and sets LastMethodSuccess
	// to false.
	// 
	bool GetSizeStr(int index, CkString &outStr);

	// Returns the size in bytes of cached directory-listing entry index as a decimal
	// string. This form avoids integer-size limits in languages without a convenient
	// 64-bit type.
	// 
	// An out-of-range or negative index is a method failure and sets LastMethodSuccess
	// to false.
	// 
	const char *getSizeStr(int index);
	// Returns the size in bytes of cached directory-listing entry index as a decimal
	// string. This form avoids integer-size limits in languages without a convenient
	// 64-bit type.
	// 
	// An out-of-range or negative index is a method failure and sets LastMethodSuccess
	// to false.
	// 
	const char *sizeStr(int index);

	// Returns the size in bytes of cached directory-listing entry index as a decimal
	// string. This form avoids integer-size limits in languages without a convenient
	// 64-bit type.
	// 
	// An out-of-range or negative index is a method failure and sets LastMethodSuccess
	// to false.
	// 
	CkTask *GetSizeStrAsync(int index);


	// Returns the size in bytes of the file named by filename in the current remote
	// directory as a decimal string. This form avoids language-specific integer
	// limits.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[1] matches the name.
	// 
	// 
	// References:
	// [1] #ListPattern
	bool GetSizeStrByName(const char *filename, CkString &outStr);

	// Returns the size in bytes of the file named by filename in the current remote
	// directory as a decimal string. This form avoids language-specific integer
	// limits.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[1] matches the name.
	// 
	// 
	// References:
	// [1] #ListPattern
	const char *getSizeStrByName(const char *filename);
	// Returns the size in bytes of the file named by filename in the current remote
	// directory as a decimal string. This form avoids language-specific integer
	// limits.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[1] matches the name.
	// 
	// 
	// References:
	// [1] #ListPattern
	const char *sizeStrByName(const char *filename);

	// Returns the size in bytes of the file named by filename in the current remote
	// directory as a decimal string. This form avoids language-specific integer
	// limits.
	// 
	// filename must be a name, not a path. Set the current remote directory first, and
	// ensure ListPattern[1] matches the name.
	// 
	// 
	// References:
	// [1] #ListPattern
	CkTask *GetSizeStrByNameAsync(const char *filename);


	// Deprecated. Returns a new Cert containing the certificate presented by the FTP
	// server during the current or most recent TLS connection. Use GetServerCert[1]
	// instead.
	// 
	// References:
	// [1] #GetServerCert
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetSslServerCert(void);


	// Appends to the StringTable in strTable the relative paths affected by the most
	// recent synchronization operation. Existing entries in strTable are preserved.
	// 
	// The appended paths include files uploaded, downloaded, or deleted by
	// SyncDeleteRemote[1], SyncLocalDir[2], SyncLocalTree[3], SyncRemoteTree[4], or
	// SyncRemoteTree2[5]. When a successful preview has no candidates, no placeholder
	// or empty-string entry is appended.
	// 
	// 
	// References:
	// [1] #SyncDeleteRemote
	// [2] #SyncLocalDir
	// [3] #SyncLocalTree
	// [4] #SyncRemoteTree
	// [5] #SyncRemoteTree2
	void GetSyncedFiles(CkStringTable &strTable);


	// Sends a legacy LIST request and returns the server's raw textual listing. pattern
	// is appended literally as a server-side listing argument. An empty pattern lists the
	// current remote directory; a value such as *.txt sends a command such as LIST
	// *.txt.
	// 
	// ListOption[1] is also appended literally before pattern. For example, ListOption =
	// "-a" and pattern equal to *.txt send LIST -a *.txt.
	// 
	// This method does not use MLSD, NLST, ListPattern[2], or the indexed directory
	// cache. Wildcard matching and case sensitivity are determined by the server. The
	// format of LIST output is server-specific.
	// 
	// 
	// References:
	// [1] #ListOption
	// [2] #ListPattern
	bool GetTextDirListing(const char *pattern, CkString &outStrRawListing);

	// Sends a legacy LIST request and returns the server's raw textual listing. pattern
	// is appended literally as a server-side listing argument. An empty pattern lists the
	// current remote directory; a value such as *.txt sends a command such as LIST
	// *.txt.
	// 
	// ListOption[1] is also appended literally before pattern. For example, ListOption =
	// "-a" and pattern equal to *.txt send LIST -a *.txt.
	// 
	// This method does not use MLSD, NLST, ListPattern[2], or the indexed directory
	// cache. Wildcard matching and case sensitivity are determined by the server. The
	// format of LIST output is server-specific.
	// 
	// 
	// References:
	// [1] #ListOption
	// [2] #ListPattern
	const char *getTextDirListing(const char *pattern);
	// Sends a legacy LIST request and returns the server's raw textual listing. pattern
	// is appended literally as a server-side listing argument. An empty pattern lists the
	// current remote directory; a value such as *.txt sends a command such as LIST
	// *.txt.
	// 
	// ListOption[1] is also appended literally before pattern. For example, ListOption =
	// "-a" and pattern equal to *.txt send LIST -a *.txt.
	// 
	// This method does not use MLSD, NLST, ListPattern[2], or the indexed directory
	// cache. Wildcard matching and case sensitivity are determined by the server. The
	// format of LIST output is server-specific.
	// 
	// 
	// References:
	// [1] #ListOption
	// [2] #ListPattern
	const char *textDirListing(const char *pattern);

	// Sends a legacy LIST request and returns the server's raw textual listing. pattern
	// is appended literally as a server-side listing argument. An empty pattern lists the
	// current remote directory; a value such as *.txt sends a command such as LIST
	// *.txt.
	// 
	// ListOption[1] is also appended literally before pattern. For example, ListOption =
	// "-a" and pattern equal to *.txt send LIST -a *.txt.
	// 
	// This method does not use MLSD, NLST, ListPattern[2], or the indexed directory
	// cache. Wildcard matching and case sensitivity are determined by the server. The
	// format of LIST output is server-specific.
	// 
	// 
	// References:
	// [1] #ListOption
	// [2] #ListPattern
	CkTask *GetTextDirListingAsync(const char *pattern);


	// Retrieves a directory listing for pattern and returns parsed entries as an XML
	// document rooted at <remoteDir>. Files are represented by <file> elements
	// containing <name>, <size>, and available time elements; directories are
	// represented by <dir> elements.<remoteDir>
	//   <file>
	//     <name>report.txt</name>
	//     <size>1234</size>
	//     <lastModTime full="20260727-065541" ... />
	//   </file>
	//   <dir lastModTime="20260727-065542" ...>archive</dir>
	// </remoteDir>
	// 
	// When pattern is empty, Chilkat uses the normal listing selection: MLSD when allowed
	// and advertised, otherwise LIST or NLST according to the listing properties. When
	// pattern is nonempty, Chilkat sends LIST pattern, so wildcard matching and case
	// sensitivity are server-dependent.
	// 
	// This method does not use or populate the indexed directory cache and
	// ListPattern[1] is not applied.
	// 
	// Timestamp interpretation: Returned last-modified values are expressed in the
	// client's local time. MLSD timestamps are standardized as UTC, while legacy LIST
	// timestamps may omit timezone and seconds, so exact conversion can be impossible
	// when the server timezone is unknown.
	// 
	// References:
	// [1] #ListPattern
	bool GetXmlDirListing(const char *pattern, CkString &outStrXmlListing);

	// Retrieves a directory listing for pattern and returns parsed entries as an XML
	// document rooted at <remoteDir>. Files are represented by <file> elements
	// containing <name>, <size>, and available time elements; directories are
	// represented by <dir> elements.<remoteDir>
	//   <file>
	//     <name>report.txt</name>
	//     <size>1234</size>
	//     <lastModTime full="20260727-065541" ... />
	//   </file>
	//   <dir lastModTime="20260727-065542" ...>archive</dir>
	// </remoteDir>
	// 
	// When pattern is empty, Chilkat uses the normal listing selection: MLSD when allowed
	// and advertised, otherwise LIST or NLST according to the listing properties. When
	// pattern is nonempty, Chilkat sends LIST pattern, so wildcard matching and case
	// sensitivity are server-dependent.
	// 
	// This method does not use or populate the indexed directory cache and
	// ListPattern[1] is not applied.
	// 
	// Timestamp interpretation: Returned last-modified values are expressed in the
	// client's local time. MLSD timestamps are standardized as UTC, while legacy LIST
	// timestamps may omit timezone and seconds, so exact conversion can be impossible
	// when the server timezone is unknown.
	// 
	// References:
	// [1] #ListPattern
	const char *getXmlDirListing(const char *pattern);
	// Retrieves a directory listing for pattern and returns parsed entries as an XML
	// document rooted at <remoteDir>. Files are represented by <file> elements
	// containing <name>, <size>, and available time elements; directories are
	// represented by <dir> elements.<remoteDir>
	//   <file>
	//     <name>report.txt</name>
	//     <size>1234</size>
	//     <lastModTime full="20260727-065541" ... />
	//   </file>
	//   <dir lastModTime="20260727-065542" ...>archive</dir>
	// </remoteDir>
	// 
	// When pattern is empty, Chilkat uses the normal listing selection: MLSD when allowed
	// and advertised, otherwise LIST or NLST according to the listing properties. When
	// pattern is nonempty, Chilkat sends LIST pattern, so wildcard matching and case
	// sensitivity are server-dependent.
	// 
	// This method does not use or populate the indexed directory cache and
	// ListPattern[1] is not applied.
	// 
	// Timestamp interpretation: Returned last-modified values are expressed in the
	// client's local time. MLSD timestamps are standardized as UTC, while legacy LIST
	// timestamps may omit timezone and seconds, so exact conversion can be impossible
	// when the server timezone is unknown.
	// 
	// References:
	// [1] #ListPattern
	const char *xmlDirListing(const char *pattern);

	// Retrieves a directory listing for pattern and returns parsed entries as an XML
	// document rooted at <remoteDir>. Files are represented by <file> elements
	// containing <name>, <size>, and available time elements; directories are
	// represented by <dir> elements.<remoteDir>
	//   <file>
	//     <name>report.txt</name>
	//     <size>1234</size>
	//     <lastModTime full="20260727-065541" ... />
	//   </file>
	//   <dir lastModTime="20260727-065542" ...>archive</dir>
	// </remoteDir>
	// 
	// When pattern is empty, Chilkat uses the normal listing selection: MLSD when allowed
	// and advertised, otherwise LIST or NLST according to the listing properties. When
	// pattern is nonempty, Chilkat sends LIST pattern, so wildcard matching and case
	// sensitivity are server-dependent.
	// 
	// This method does not use or populate the indexed directory cache and
	// ListPattern[1] is not applied.
	// 
	// Timestamp interpretation: Returned last-modified values are expressed in the
	// client's local time. MLSD timestamps are standardized as UTC, while legacy LIST
	// timestamps may omit timezone and seconds, so exact conversion can be impossible
	// when the server timezone is unknown.
	// 
	// References:
	// [1] #ListPattern
	CkTask *GetXmlDirListingAsync(const char *pattern);


	// Uploads the local file at localPath to the remote path at remotePath as a sequence of data
	// transfers, each containing up to chunkSize bytes. The first chunk is sent with STOR,
	// which creates or replaces remotePath, and each later chunk is sent with APPE.
	// 
	// This method addresses a specific FTP failure mode: during one very long data
	// transfer, the control connection is idle and may be silently dropped by a
	// firewall, NAT device, or server timeout. Completing the upload as multiple
	// shorter transfers periodically uses the control channel.
	// 
	// chunkSize is the in-memory chunk size. Larger chunks reduce FTP command overhead but
	// consume more memory and leave the control channel idle longer; smaller chunks
	// have the opposite tradeoff. Transfer counters represent the complete source
	// file, not only the final chunk.
	// 
	// Alternative: For ordinary large files, first consider enabling
	// LargeFileMeasures[1]. Use chunked upload when infrastructure still drops the
	// idle control session.
	// 
	// References:
	// [1] #LargeFileMeasures
	bool LargeFileUpload(const char *localPath, const char *remotePath, int chunkSize);

	// Uploads the local file at localPath to the remote path at remotePath as a sequence of data
	// transfers, each containing up to chunkSize bytes. The first chunk is sent with STOR,
	// which creates or replaces remotePath, and each later chunk is sent with APPE.
	// 
	// This method addresses a specific FTP failure mode: during one very long data
	// transfer, the control connection is idle and may be silently dropped by a
	// firewall, NAT device, or server timeout. Completing the upload as multiple
	// shorter transfers periodically uses the control channel.
	// 
	// chunkSize is the in-memory chunk size. Larger chunks reduce FTP command overhead but
	// consume more memory and leave the control channel idle longer; smaller chunks
	// have the opposite tradeoff. Transfer counters represent the complete source
	// file, not only the final chunk.
	// 
	// Alternative: For ordinary large files, first consider enabling
	// LargeFileMeasures[1]. Use chunked upload when infrastructure still drops the
	// idle control session.
	// 
	// References:
	// [1] #LargeFileMeasures
	CkTask *LargeFileUploadAsync(const char *localPath, const char *remotePath, int chunkSize);


	// Loads the original caller object associated with the asynchronous Task in task.
	// This is an internal support method for Chilkat's task infrastructure and is not
	// normally needed by application code.
	bool LoadTaskCaller(CkTask &task);


	// Authenticates an FTP control connection previously established by
	// ConnectOnly[1]. Chilkat sends USER, PASS, and ACCT when required, then performs
	// the normal post-login initialization such as TYPE I, SYST, capability discovery,
	// and UTF-8 setup.
	// 
	// If authentication is rejected, the same connection cannot be retried by simply
	// changing the credentials and calling this method again. Disconnect or reconnect
	// with ConnectOnly[1] before attempting another login.
	// 
	// 
	// References:
	// [1] #ConnectOnly
	bool LoginAfterConnectOnly(void);

	// Authenticates an FTP control connection previously established by
	// ConnectOnly[1]. Chilkat sends USER, PASS, and ACCT when required, then performs
	// the normal post-login initialization such as TYPE I, SYST, capability discovery,
	// and UTF-8 setup.
	// 
	// If authentication is rejected, the same connection cannot be retried by simply
	// changing the credentials and calling this method again. Disconnect or reconnect
	// with ConnectOnly[1] before attempting another login.
	// 
	// 
	// References:
	// [1] #ConnectOnly
	CkTask *LoginAfterConnectOnlyAsync(void);


	// Downloads files in the current remote directory that match remotePattern into the
	// existing local directory at localDir. Subdirectories are not traversed. The method
	// returns the number of files downloaded, or -1 on failure.
	// 
	// localDir must already exist; the method does not create it. Existing local files
	// with matching names are replaced. Chilkat sends a server-side listing request
	// for remotePattern, so wildcard matching and case sensitivity depend on the FTP server and
	// remote filesystem.
	// 
	// Windows filenames: Remote names that contain characters invalid in a Windows
	// filename are sanitized for the local file. Invalid characters are replaced with
	// underscores and trailing periods are removed. For example, a<b>c:d|e?f*g.txt is
	// saved as a_b_c_d_e_f_g.txt. Different remote names can potentially map to the
	// same local name.
	int MGetFiles(const char *remotePattern, const char *localDir);

	// Downloads files in the current remote directory that match remotePattern into the
	// existing local directory at localDir. Subdirectories are not traversed. The method
	// returns the number of files downloaded, or -1 on failure.
	// 
	// localDir must already exist; the method does not create it. Existing local files
	// with matching names are replaced. Chilkat sends a server-side listing request
	// for remotePattern, so wildcard matching and case sensitivity depend on the FTP server and
	// remote filesystem.
	// 
	// Windows filenames: Remote names that contain characters invalid in a Windows
	// filename are sanitized for the local file. Invalid characters are replaced with
	// underscores and trailing periods are removed. For example, a<b>c:d|e?f*g.txt is
	// saved as a_b_c_d_e_f_g.txt. Different remote names can potentially map to the
	// same local name.
	CkTask *MGetFilesAsync(const char *remotePattern, const char *localDir);


	// Uploads each local file matching pattern to the current remote directory. pattern may
	// include a local directory and wildcard, such as C:/data/*.txt. Subdirectories
	// are not traversed.
	// 
	// Local wildcard behavior follows the local operating system; for example, Windows
	// matching is case-insensitive. Only each matching file's basename is used as the
	// remote filename. Existing remote files are replaced using normal STOR behavior.
	// 
	// The method returns the number of files uploaded, or -1 on failure.
	// 
	int MPutFiles(const char *pattern);

	// Uploads each local file matching pattern to the current remote directory. pattern may
	// include a local directory and wildcard, such as C:/data/*.txt. Subdirectories
	// are not traversed.
	// 
	// Local wildcard behavior follows the local operating system; for example, Windows
	// matching is case-insensitive. Only each matching file's basename is used as the
	// remote filename. Existing remote files are replaced using normal STOR behavior.
	// 
	// The method returns the number of files uploaded, or -1 on failure.
	// 
	CkTask *MPutFilesAsync(const char *pattern);


	// Sends NLST with remoteDirPattern appended literally and returns the names in XML form. An
	// empty remoteDirPattern sends NLST; a value such as *.txt sends NLST *.txt.<nlst>
	//   <e>name1</e>
	//   <e>name2</e>
	// </nlst>
	// 
	// The response is decoded using DirListingCharset[1]. NLST normally returns names
	// only; the XML does not distinguish files from directories and does not provide
	// reliable sizes, times, ownership, or permissions. Wildcard matching and case
	// sensitivity are server-dependent.
	// 
	// This method does not use or populate the indexed directory cache.
	// 
	// 
	// References:
	// [1] #DirListingCharset
	bool NlstXml(const char *remoteDirPattern, CkString &outStr);

	// Sends NLST with remoteDirPattern appended literally and returns the names in XML form. An
	// empty remoteDirPattern sends NLST; a value such as *.txt sends NLST *.txt.<nlst>
	//   <e>name1</e>
	//   <e>name2</e>
	// </nlst>
	// 
	// The response is decoded using DirListingCharset[1]. NLST normally returns names
	// only; the XML does not distinguish files from directories and does not provide
	// reliable sizes, times, ownership, or permissions. Wildcard matching and case
	// sensitivity are server-dependent.
	// 
	// This method does not use or populate the indexed directory cache.
	// 
	// 
	// References:
	// [1] #DirListingCharset
	const char *nlstXml(const char *remoteDirPattern);
	// Sends NLST with remoteDirPattern appended literally and returns the names in XML form. An
	// empty remoteDirPattern sends NLST; a value such as *.txt sends NLST *.txt.<nlst>
	//   <e>name1</e>
	//   <e>name2</e>
	// </nlst>
	// 
	// The response is decoded using DirListingCharset[1]. NLST normally returns names
	// only; the XML does not distinguish files from directories and does not provide
	// reliable sizes, times, ownership, or permissions. Wildcard matching and case
	// sensitivity are server-dependent.
	// 
	// This method does not use or populate the indexed directory cache.
	// 
	// 
	// References:
	// [1] #DirListingCharset
	CkTask *NlstXmlAsync(const char *remoteDirPattern);


	// Sends the FTP NOOP command. The server must return a positive FTP reply for the
	// method to succeed.
	// 
	// Whether NOOP is accepted before login is server-dependent. This method does not
	// reconnect a closed session.
	// 
	bool Noop(void);

	// Sends the FTP NOOP command. The server must return a positive FTP reply for the
	// method to succeed.
	// 
	// Whether NOOP is accepted before login is server-dependent. This method does not
	// reconnect a closed session.
	// 
	CkTask *NoopAsync(void);


	// Uploads the local filesystem file at localFilePath to the remote path at remoteFilePath.
	// 
	// Uses the FTP STOR command. A normal upload creates a missing remote file or
	// truncates and replaces an existing one. Chilkat does not create missing remote
	// parent directories and does not upload through a temporary remote name followed
	// by an atomic rename.
	// 
	// Use RestartNext[1] immediately before this call to resume an existing partial
	// remote file. IdleTimeoutMs[2] limits how long the upload may remain blocked
	// without forward progress.
	// 
	// 
	// References:
	// [1] #RestartNext
	// [2] #IdleTimeoutMs
	bool PutFile(const char *localFilePath, const char *remoteFilePath);

	// Uploads the local filesystem file at localFilePath to the remote path at remoteFilePath.
	// 
	// Uses the FTP STOR command. A normal upload creates a missing remote file or
	// truncates and replaces an existing one. Chilkat does not create missing remote
	// parent directories and does not upload through a temporary remote name followed
	// by an atomic rename.
	// 
	// Use RestartNext[1] immediately before this call to resume an existing partial
	// remote file. IdleTimeoutMs[2] limits how long the upload may remain blocked
	// without forward progress.
	// 
	// 
	// References:
	// [1] #RestartNext
	// [2] #IdleTimeoutMs
	CkTask *PutFileAsync(const char *localFilePath, const char *remoteFilePath);


	// Uploads the bytes contained in the BinData object in binData to the remote path at
	// remoteFilePath. No character encoding or line-ending conversion is performed.
	// 
	// Uses the FTP STOR command. A normal upload creates a missing remote file or
	// truncates and replaces an existing one. Chilkat does not create missing remote
	// parent directories and does not upload through a temporary remote name followed
	// by an atomic rename.
	// 
	// RestartNext[1] can be used to upload only the bytes beyond the existing remote
	// size.
	// 
	// 
	// References:
	// [1] #RestartNext
	bool PutFileBd(CkBinData &binData, const char *remoteFilePath);

	// Uploads the bytes contained in the BinData object in binData to the remote path at
	// remoteFilePath. No character encoding or line-ending conversion is performed.
	// 
	// Uses the FTP STOR command. A normal upload creates a missing remote file or
	// truncates and replaces an existing one. Chilkat does not create missing remote
	// parent directories and does not upload through a temporary remote name followed
	// by an atomic rename.
	// 
	// RestartNext[1] can be used to upload only the bytes beyond the existing remote
	// size.
	// 
	// 
	// References:
	// [1] #RestartNext
	CkTask *PutFileBdAsync(CkBinData &binData, const char *remoteFilePath);


	// Creates or replaces the remote file at remoteFilename with the bytes in content. No character
	// encoding or line-ending conversion is performed.
	bool PutFileFromBinaryData(const char *remoteFilename, CkByteData &content);

	// Creates or replaces the remote file at remoteFilename with the bytes in content. No character
	// encoding or line-ending conversion is performed.
	CkTask *PutFileFromBinaryDataAsync(const char *remoteFilename, CkByteData &content);


	// Encodes the text in textData using the character encoding named by charset and uploads
	// the resulting bytes to the remote file at remoteFilename.
	// 
	// Uses the FTP STOR command. A normal upload creates a missing remote file or
	// truncates and replaces an existing one. Chilkat does not create missing remote
	// parent directories and does not upload through a temporary remote name followed
	// by an atomic rename.
	// 
	// The content charset is independent of CommandCharset[1], which controls the
	// encoding of the remote path sent in the FTP command.
	// 
	// 
	// References:
	// [1] #CommandCharset
	bool PutFileFromTextData(const char *remoteFilename, const char *textData, const char *charset);

	// Encodes the text in textData using the character encoding named by charset and uploads
	// the resulting bytes to the remote file at remoteFilename.
	// 
	// Uses the FTP STOR command. A normal upload creates a missing remote file or
	// truncates and replaces an existing one. Chilkat does not create missing remote
	// parent directories and does not upload through a temporary remote name followed
	// by an atomic rename.
	// 
	// The content charset is independent of CommandCharset[1], which controls the
	// encoding of the remote path sent in the FTP command.
	// 
	// 
	// References:
	// [1] #CommandCharset
	CkTask *PutFileFromTextDataAsync(const char *remoteFilename, const char *textData, const char *charset);


	// Encodes the text in the StringBuilder sb using the charset named by charset and
	// uploads it to the remote path at remoteFilePath. When includeBom is true, a byte-order mark is
	// included when the selected encoding defines one.
	// 
	// Uses the FTP STOR command. A normal upload creates a missing remote file or
	// truncates and replaces an existing one. Chilkat does not create missing remote
	// parent directories and does not upload through a temporary remote name followed
	// by an atomic rename.
	// 
	// RestartNext[1] can be used for a resumed upload when the existing remote content
	// and encoded byte sequence are compatible.
	// 
	// 
	// References:
	// [1] #RestartNext
	bool PutFileSb(CkStringBuilder &sb, const char *charset, bool includeBom, const char *remoteFilePath);

	// Encodes the text in the StringBuilder sb using the charset named by charset and
	// uploads it to the remote path at remoteFilePath. When includeBom is true, a byte-order mark is
	// included when the selected encoding defines one.
	// 
	// Uses the FTP STOR command. A normal upload creates a missing remote file or
	// truncates and replaces an existing one. Chilkat does not create missing remote
	// parent directories and does not upload through a temporary remote name followed
	// by an atomic rename.
	// 
	// RestartNext[1] can be used for a resumed upload when the existing remote content
	// and encoded byte sequence are compatible.
	// 
	// 
	// References:
	// [1] #RestartNext
	CkTask *PutFileSbAsync(CkStringBuilder &sb, const char *charset, bool includeBom, const char *remoteFilePath);


	// Executes the upload plan in plan. alreadyDoneFilename is the local path of a completion log;
	// each successful plan operation is recorded there.
	// 
	// The absolute remote paths stored in the plan are used even if the current remote
	// directory has changed since the plan was created. Local files are opened when
	// this method executes, so changes made after CreatePlan[1] are reflected in the
	// upload.
	// 
	// To resume an interrupted plan, call this method again with the same plan and log
	// path. Operations already recorded as complete are skipped.
	// 
	// Log durability: Store the completion log on reliable local storage and do not
	// edit it while the plan is running.
	// 
	// References:
	// [1] #CreatePlan
	bool PutPlan(const char *plan, const char *alreadyDoneFilename);

	// Executes the upload plan in plan. alreadyDoneFilename is the local path of a completion log;
	// each successful plan operation is recorded there.
	// 
	// The absolute remote paths stored in the plan are used even if the current remote
	// directory has changed since the plan was created. Local files are opened when
	// this method executes, so changes made after CreatePlan[1] are reflected in the
	// upload.
	// 
	// To resume an interrupted plan, call this method again with the same plan and log
	// path. Operations already recorded as complete are skipped.
	// 
	// Log durability: Store the completion log on reliable local storage and do not
	// edit it while the plan is running.
	// 
	// References:
	// [1] #CreatePlan
	CkTask *PutPlanAsync(const char *plan, const char *alreadyDoneFilename);


	// Uploads the local directory tree rooted at localDir into the current remote
	// directory, creating remote subdirectories as needed. The contents of localDir become
	// children of the current remote directory.
	// 
	// The file and directory filters in SyncMustMatch[1], SyncMustNotMatch[2],
	// SyncMustMatchDir[3], and SyncMustNotMatchDir[4] apply. Empty eligible local
	// directories are created remotely. Existing remote files are overwritten with
	// STOR.
	// 
	// 
	// References:
	// [1] #SyncMustMatch
	// [2] #SyncMustNotMatch
	// [3] #SyncMustMatchDir
	// [4] #SyncMustNotMatchDir
	bool PutTree(const char *localDir);

	// Uploads the local directory tree rooted at localDir into the current remote
	// directory, creating remote subdirectories as needed. The contents of localDir become
	// children of the current remote directory.
	// 
	// The file and directory filters in SyncMustMatch[1], SyncMustNotMatch[2],
	// SyncMustMatchDir[3], and SyncMustNotMatchDir[4] apply. Empty eligible local
	// directories are created remotely. Existing remote files are overwritten with
	// STOR.
	// 
	// 
	// References:
	// [1] #SyncMustMatch
	// [2] #SyncMustNotMatch
	// [3] #SyncMustMatchDir
	// [4] #SyncMustNotMatchDir
	CkTask *PutTreeAsync(const char *localDir);


	// Sends the raw FTP command text in cmd to the server. Use this for a command not
	// otherwise exposed by the API.
	// 
	// cmd contains the command and parameters but must not contain CR or LF
	// characters; such input is rejected without sending anything. Chilkat considers
	// the method successful only when the server returns a positive FTP reply. A 4xx
	// or 5xx reply causes failure and remains available through LastReply[1].
	// 
	// The method does not parse command-specific semantics. Use SendCommand[2] when
	// the reply text is needed directly.
	// 
	// 
	// References:
	// [1] #LastReply
	// [2] #SendCommand
	bool Quote(const char *cmd);

	// Sends the raw FTP command text in cmd to the server. Use this for a command not
	// otherwise exposed by the API.
	// 
	// cmd contains the command and parameters but must not contain CR or LF
	// characters; such input is rejected without sending anything. Chilkat considers
	// the method successful only when the server returns a positive FTP reply. A 4xx
	// or 5xx reply causes failure and remains available through LastReply[1].
	// 
	// The method does not parse command-specific semantics. Use SendCommand[2] when
	// the reply text is needed directly.
	// 
	// 
	// References:
	// [1] #LastReply
	// [2] #SendCommand
	CkTask *QuoteAsync(const char *cmd);


	// Removes the remote directory at remoteDirPath. FTP servers generally require the
	// directory to be empty before it can be removed.
	// 
	// A successful call does not refresh the cached indexed listing. Call
	// ClearDirCache[1] before relying on indexed listing methods.
	// 
	// 
	// References:
	// [1] #ClearDirCache
	bool RemoveRemoteDir(const char *remoteDirPath);

	// Removes the remote directory at remoteDirPath. FTP servers generally require the
	// directory to be empty before it can be removed.
	// 
	// A successful call does not refresh the cached indexed listing. Call
	// ClearDirCache[1] before relying on indexed listing methods.
	// 
	// 
	// References:
	// [1] #ClearDirCache
	CkTask *RemoveRemoteDirAsync(const char *remoteDirPath);


	// Renames or moves a remote file or directory from existingRemoteFilePath to newRemoteFilePath using the FTP RNFR
	// / RNTO sequence. Include directory components in newRemoteFilePath to move the item within
	// the same FTP server.
	// 
	// Chilkat does not perform a protective destination-existence check. If newRemoteFilePath
	// already exists, one server may reject the rename while another may replace the
	// destination. Cross-directory or cross-filesystem moves are also subject to
	// server policy.
	// 
	// A successful rename does not refresh the cached indexed listing. Call
	// ClearDirCache[1] when a fresh listing is required.
	// 
	// 
	// References:
	// [1] #ClearDirCache
	bool RenameRemoteFile(const char *existingRemoteFilePath, const char *newRemoteFilePath);

	// Renames or moves a remote file or directory from existingRemoteFilePath to newRemoteFilePath using the FTP RNFR
	// / RNTO sequence. Include directory components in newRemoteFilePath to move the item within
	// the same FTP server.
	// 
	// Chilkat does not perform a protective destination-existence check. If newRemoteFilePath
	// already exists, one server may reject the rename while another may replace the
	// destination. Cross-directory or cross-filesystem moves are also subject to
	// server policy.
	// 
	// A successful rename does not refresh the cached indexed listing. Call
	// ClearDirCache[1] when a fresh listing is required.
	// 
	// 
	// References:
	// [1] #ClearDirCache
	CkTask *RenameRemoteFileAsync(const char *existingRemoteFilePath, const char *newRemoteFilePath);


	// Sends the raw FTP command in cmd and returns the complete server reply. The
	// command text is sent as UTF-8; CommandCharset[1] is not applied.
	// 
	// cmd must not contain CR or LF characters; such input is rejected without
	// sending anything. A positive FTP reply is returned normally. A 4xx or 5xx reply
	// is treated as method failure and sets LastMethodSuccess to false.
	// 
	// 
	// References:
	// [1] #CommandCharset
	bool SendCommand(const char *cmd, CkString &outReply);

	// Sends the raw FTP command in cmd and returns the complete server reply. The
	// command text is sent as UTF-8; CommandCharset[1] is not applied.
	// 
	// cmd must not contain CR or LF characters; such input is rejected without
	// sending anything. A positive FTP reply is returned normally. A 4xx or 5xx reply
	// is treated as method failure and sets LastMethodSuccess to false.
	// 
	// 
	// References:
	// [1] #CommandCharset
	const char *sendCommand(const char *cmd);
	// Sends the raw FTP command in cmd and returns the complete server reply. The
	// command text is sent as UTF-8; CommandCharset[1] is not applied.
	// 
	// cmd must not contain CR or LF characters; such input is rejected without
	// sending anything. A positive FTP reply is returned normally. A 4xx or 5xx reply
	// is treated as method failure and sets LastMethodSuccess to false.
	// 
	// 
	// References:
	// [1] #CommandCharset
	CkTask *SendCommandAsync(const char *cmd);


	// Enables MODE Z compression for subsequent data connections. Call this after
	// connecting and only when HasModeZ[1] is true. Uploads, downloads, and
	// directory listings are then transferred through a DEFLATE-compressed stream.
	// Performance tradeoff: Compression can reduce network traffic for text and other
	// compressible data, but may increase CPU usage and provide little benefit for
	// already-compressed formats such as ZIP, JPEG, or MP4.
	// 
	// References:
	// [1] #HasModeZ
	bool SetModeZ(void);

	// Enables MODE Z compression for subsequent data connections. Call this after
	// connecting and only when HasModeZ[1] is true. Uploads, downloads, and
	// directory listings are then transferred through a DEFLATE-compressed stream.
	// Performance tradeoff: Compression can reduce network traffic for text and other
	// compressible data, but may increase CPU usage and provide little benefit for
	// already-compressed formats such as ZIP, JPEG, or MP4.
	// 
	// References:
	// [1] #HasModeZ
	CkTask *SetModeZAsync(void);


	// Sets the oldest remote modification time eligible for DownloadTree[1]. oldestDateTimeStr is
	// an RFC 822 date-time string, such as Fri, 21 Nov 1997 09:55:06 -0600. Files
	// older than the configured value are skipped.
	// 
	// The value remains active for subsequent DownloadTree calls; it is not consumed
	// after one operation. Avoid relying on exact equality at the boundary because
	// legacy LIST timestamps can have reduced precision or ambiguous timezone
	// interpretation.
	// 
	// 
	// References:
	// [1] #DownloadTree
	void SetOldestDateStr(const char *oldestDateTimeStr);


	// Enables or disables a named compatibility option. Option-name matching is
	// case-insensitive. Prefix a recognized name with No- to disable it.
	// 
	// The recognized option Microsoft-TLS-1.2-Workaround changes data-channel TLS
	// behavior for compatibility with an old Microsoft FTP server defect. It weakens
	// protocol selection and should be used only for the affected legacy server. An
	// unrecognized option name is rejected.
	// 
	bool SetOption(const char *option);


	// Deprecated. Copies the password from the SecureString in password for subsequent FTP
	// authentication. Use SetSecurePassword[1] instead.
	// 
	// References:
	// [1] #SetSecurePassword
	bool SetPassword(CkSecureString &password);


	// Sets the last-modified time of the remote file at remoteFilename. dateTimeStr is an RFC 822
	// date-time string, such as Fri, 21 Nov 1997 09:55:06 -0600.
	// 
	// Chilkat converts dateTimeStr to UTC and sends a server-supported timestamp-setting
	// extension. Depending on the server, the command may be MFMT YYYYMMDDhhmmss path
	// or the nonstandard timestamp-setting form of MDTM YYYYMMDDhhmmss path. Precision
	// is one second.
	// 
	// FTP has no universally implemented standard for changing a file timestamp;
	// success depends on server extensions and permissions.
	// 
	bool SetRemoteFileDateTimeStr(const char *dateTimeStr, const char *remoteFilename);

	// Sets the last-modified time of the remote file at remoteFilename. dateTimeStr is an RFC 822
	// date-time string, such as Fri, 21 Nov 1997 09:55:06 -0600.
	// 
	// Chilkat converts dateTimeStr to UTC and sends a server-supported timestamp-setting
	// extension. Depending on the server, the command may be MFMT YYYYMMDDhhmmss path
	// or the nonstandard timestamp-setting form of MDTM YYYYMMDDhhmmss path. Precision
	// is one second.
	// 
	// FTP has no universally implemented standard for changing a file timestamp;
	// success depends on server extensions and permissions.
	// 
	CkTask *SetRemoteFileDateTimeStrAsync(const char *dateTimeStr, const char *remoteFilename);


	// Sets the last-modified time of the remote file at remoteFilename using the CkDateTime in
	// dt.
	// 
	// Chilkat converts the value to UTC and sends a server-supported timestamp-setting
	// extension. Depending on the server, the command may be MFMT YYYYMMDDhhmmss path
	// or the nonstandard timestamp-setting form of MDTM YYYYMMDDhhmmss path. Precision
	// is one second.
	// 
	// FTP has no universally implemented standard for changing a file timestamp;
	// success depends on server extensions and permissions.
	// 
	bool SetRemoteFileDt(CkDateTime &dt, const char *remoteFilename);

	// Sets the last-modified time of the remote file at remoteFilename using the CkDateTime in
	// dt.
	// 
	// Chilkat converts the value to UTC and sends a server-supported timestamp-setting
	// extension. Depending on the server, the command may be MFMT YYYYMMDDhhmmss path
	// or the nonstandard timestamp-setting form of MDTM YYYYMMDDhhmmss path. Precision
	// is one second.
	// 
	// FTP has no universally implemented standard for changing a file timestamp;
	// success depends on server extensions and permissions.
	// 
	CkTask *SetRemoteFileDtAsync(CkDateTime &dt, const char *remoteFilename);


	// Copies the password from the SecureString in password for subsequent FTP
	// authentication. This avoids exposing the password as an ordinary immutable
	// language string. It is equivalent to setting Password[1] for login behavior.
	// 
	// References:
	// [1] #Password
	bool SetSecurePassword(CkSecureString &password);


	// Adds a required match against the FTP server certificate. reqName selects the
	// certificate field and reqValue specifies the required value. Supported field names
	// include SubjectDN, SubjectCN, IssuerDN, IssuerCN, and SAN. Wildcards such as *
	// may be used in reqValue.
	// 
	// Requirement-value matching is case-sensitive. Multiple calls add requirements
	// that are combined with logical AND; every requirement must match.
	// 
	// Requirements are evaluated when the FTPS control-channel TLS connection is
	// established. Adding a new requirement after connection does not retroactively
	// reject the existing control channel and is not applied to later protected
	// data-channel handshakes within that session.
	// 
	// Additional check: Certificate requirements supplement normal certificate
	// validation; they should not be used as a substitute for trust-chain, validity,
	// and hostname verification.
	void SetSslCertRequirement(const char *reqName, const char *reqValue);


	// Configures the Cert in cert as the client certificate for FTPS servers that
	// request mutual TLS authentication. The certificate must have access to its
	// private key.
	bool SetSslClientCert(CkCert &cert);


	// Configures a client certificate and private key from PEM data or a PEM file.
	// pemDataOrFilename may contain the PEM text or the local filesystem path of a PEM file. pemPassword
	// is the private-key password, or an empty string when the key is not encrypted.
	bool SetSslClientCertPem(const char *pemDataOrFilename, const char *pemPassword);


	// Loads a client certificate and private key from the local PFX/P12 file at pfxFilename.
	// pfxPassword is the file password. The certificate is used when the FTPS server requests
	// mutual TLS authentication.
	bool SetSslClientCertPfx(const char *pfxFilename, const char *pfxPassword);


	// Sets the FTP representation type to ASCII for subsequent transfers. In ASCII
	// mode, the FTP endpoints may translate line endings, and CrlfMode[1] can apply
	// additional conversion on downloads.
	// Use carefully: ASCII mode is intended for text. Use SetTypeBinary[2] for
	// executables, archives, images, encrypted data, and any file whose bytes must
	// remain unchanged.
	// 
	// References:
	// [1] #CrlfMode
	// [2] #SetTypeBinary
	bool SetTypeAscii(void);

	// Sets the FTP representation type to ASCII for subsequent transfers. In ASCII
	// mode, the FTP endpoints may translate line endings, and CrlfMode[1] can apply
	// additional conversion on downloads.
	// Use carefully: ASCII mode is intended for text. Use SetTypeBinary[2] for
	// executables, archives, images, encrypted data, and any file whose bytes must
	// remain unchanged.
	// 
	// References:
	// [1] #CrlfMode
	// [2] #SetTypeBinary
	CkTask *SetTypeAsciiAsync(void);


	// Sets the FTP representation type to binary (TYPE I) for subsequent transfers.
	// Binary mode preserves file bytes and is the appropriate default for nearly all
	// modern file types.
	bool SetTypeBinary(void);

	// Sets the FTP representation type to binary (TYPE I) for subsequent transfers.
	// Binary mode preserves file bytes and is the appropriate default for nearly all
	// modern file types.
	CkTask *SetTypeBinaryAsync(void);


	// Sends a server-specific SITE command. siteCommand contains the text following SITE, for
	// example RECFM=FB LRECL=600.
	// 
	// SITE subcommands are defined by the server, not by the FTP standard, and may
	// require special permissions.
	// 
	bool Site(const char *siteCommand);

	// Sends a server-specific SITE command. siteCommand contains the text following SITE, for
	// example RECFM=FB LRECL=600.
	// 
	// SITE subcommands are defined by the server, not by the FTP standard, and may
	// require special permissions.
	// 
	CkTask *SiteAsync(const char *siteCommand);


	// Blocks the calling thread for millisec milliseconds. This is a utility method and
	// performs no FTP network operation.
	void SleepMs(int millisec);


	// Sends the FTP STAT command and returns the server's reply. Depending on the
	// server and session state, the reply may contain status information or a
	// directory listing.
	// 
	// Support, accepted arguments, and whether the command is permitted before login
	// are server-dependent.
	// 
	bool Stat(CkString &outStr);

	// Sends the FTP STAT command and returns the server's reply. Depending on the
	// server and session state, the reply may contain status information or a
	// directory listing.
	// 
	// Support, accepted arguments, and whether the command is permitted before login
	// are server-dependent.
	// 
	const char *ck_stat(void);
	// Sends the FTP STAT command and returns the server's reply. Depending on the
	// server and session state, the reply may contain status information or a
	// directory listing.
	// 
	// Support, accepted arguments, and whether the command is permitted before login
	// are server-dependent.
	// 
	CkTask *StatAsync(void);


	// Recursively compares the remote tree rooted at the current remote directory with
	// the local tree rooted at localRoot and deletes remote files that have no
	// corresponding local file. The synchronization file and directory filters apply.
	// Empty remote directories are not deleted.
	// Destructive synchronization: This method deletes server data. Verify the current
	// remote directory, local root, and synchronization filters before calling it.
	// 
	// Use GetSyncedFiles[1] after the call to obtain the relative paths deleted.
	// 
	// 
	// References:
	// [1] #GetSyncedFiles
	bool SyncDeleteRemote(const char *localRoot);

	// Recursively compares the remote tree rooted at the current remote directory with
	// the local tree rooted at localRoot and deletes remote files that have no
	// corresponding local file. The synchronization file and directory filters apply.
	// Empty remote directories are not deleted.
	// Destructive synchronization: This method deletes server data. Verify the current
	// remote directory, local root, and synchronization filters before calling it.
	// 
	// Use GetSyncedFiles[1] after the call to obtain the relative paths deleted.
	// 
	// 
	// References:
	// [1] #GetSyncedFiles
	CkTask *SyncDeleteRemoteAsync(const char *localRoot);


	// Synchronizes files from the current remote directory into the local directory at
	// localRoot without descending into subdirectories. mode selects the same download
	// modes documented for SyncLocalTree[1].
	// 
	// The filters are case-insensitive and match basenames. In mode 99, only unmatched
	// remote files in the current directory are deleted; nested directories are not
	// traversed and their contents are not examined. Extra local files are not
	// deleted.
	// 
	// Unsupported mode values fail before an FTP command is sent. Use
	// GetSyncedFiles[2] afterward to obtain the affected relative paths.
	// 
	// 
	// References:
	// [1] #SyncLocalTree
	// [2] #GetSyncedFiles
	bool SyncLocalDir(const char *localRoot, int mode);

	// Synchronizes files from the current remote directory into the local directory at
	// localRoot without descending into subdirectories. mode selects the same download
	// modes documented for SyncLocalTree[1].
	// 
	// The filters are case-insensitive and match basenames. In mode 99, only unmatched
	// remote files in the current directory are deleted; nested directories are not
	// traversed and their contents are not examined. Extra local files are not
	// deleted.
	// 
	// Unsupported mode values fail before an FTP command is sent. Use
	// GetSyncedFiles[2] afterward to obtain the affected relative paths.
	// 
	// 
	// References:
	// [1] #SyncLocalTree
	// [2] #GetSyncedFiles
	CkTask *SyncLocalDirAsync(const char *localRoot, int mode);


	// Synchronizes the remote tree rooted at the current remote directory into the
	// local directory at localRoot. mode selects which files are downloaded or deleted.
	// 
	// +------+-----------------------------------------------------------------------+
	// | Mode |                                Action                                 |
	// +======+=======================================================================+
	// | 0    | Download all selected files.                                          |
	// +------+-----------------------------------------------------------------------+
	// | 1    | Download files missing locally.                                       |
	// +------+-----------------------------------------------------------------------+
	// | 2    | Download files that are missing locally or newer on the server.       |
	// +------+-----------------------------------------------------------------------+
	// | 3    | Download only files that already exist locally and are newer on the   |
	// |      | server.                                                               |
	// +------+-----------------------------------------------------------------------+
	// | 5    | Download files that are missing locally or have a different size.     |
	// +------+-----------------------------------------------------------------------+
	// | 6    | Download files that are missing, have a different size, or are newer  |
	// |      | on the server.                                                        |
	// +------+-----------------------------------------------------------------------+
	// | 99   | Do not download; delete remote files that do not exist locally.       |
	// +------+-----------------------------------------------------------------------+
	// 
	// The synchronization filters are case-insensitive and match file basenames rather
	// than relative paths. A file is considered newer only when its timestamp is
	// strictly later; equal timestamps do not qualify.
	// 
	// Mode 99 deletes remote files that do not exist locally; it does not delete extra
	// local files. Only the mode values shown in the table are valid. Other values
	// fail before any FTP command is sent. Use GetSyncedFiles[1] afterward to obtain
	// the affected relative paths.
	// 
	// Mode numbers differ by direction: The upload and download synchronization
	// methods do not assign the same meanings to all numeric modes. Use the table for
	// the method being called.
	// Time comparison: Newer-file modes depend on remote timestamps and local clock
	// interpretation. Size-based modes may be more predictable when server timestamp
	// precision is limited.
	// 
	// References:
	// [1] #GetSyncedFiles
	bool SyncLocalTree(const char *localRoot, int mode);

	// Synchronizes the remote tree rooted at the current remote directory into the
	// local directory at localRoot. mode selects which files are downloaded or deleted.
	// 
	// +------+-----------------------------------------------------------------------+
	// | Mode |                                Action                                 |
	// +======+=======================================================================+
	// | 0    | Download all selected files.                                          |
	// +------+-----------------------------------------------------------------------+
	// | 1    | Download files missing locally.                                       |
	// +------+-----------------------------------------------------------------------+
	// | 2    | Download files that are missing locally or newer on the server.       |
	// +------+-----------------------------------------------------------------------+
	// | 3    | Download only files that already exist locally and are newer on the   |
	// |      | server.                                                               |
	// +------+-----------------------------------------------------------------------+
	// | 5    | Download files that are missing locally or have a different size.     |
	// +------+-----------------------------------------------------------------------+
	// | 6    | Download files that are missing, have a different size, or are newer  |
	// |      | on the server.                                                        |
	// +------+-----------------------------------------------------------------------+
	// | 99   | Do not download; delete remote files that do not exist locally.       |
	// +------+-----------------------------------------------------------------------+
	// 
	// The synchronization filters are case-insensitive and match file basenames rather
	// than relative paths. A file is considered newer only when its timestamp is
	// strictly later; equal timestamps do not qualify.
	// 
	// Mode 99 deletes remote files that do not exist locally; it does not delete extra
	// local files. Only the mode values shown in the table are valid. Other values
	// fail before any FTP command is sent. Use GetSyncedFiles[1] afterward to obtain
	// the affected relative paths.
	// 
	// Mode numbers differ by direction: The upload and download synchronization
	// methods do not assign the same meanings to all numeric modes. Use the table for
	// the method being called.
	// Time comparison: Newer-file modes depend on remote timestamps and local clock
	// interpretation. Size-based modes may be more predictable when server timestamp
	// precision is limited.
	// 
	// References:
	// [1] #GetSyncedFiles
	CkTask *SyncLocalTreeAsync(const char *localRoot, int mode);


	// Synchronizes the local tree rooted at localRoot into the current remote directory.
	// mode selects which files are uploaded.
	// 
	// +------+-----------------------------------------------------------------------+
	// | Mode |                                Action                                 |
	// +======+=======================================================================+
	// | 0    | Upload all selected files.                                            |
	// +------+-----------------------------------------------------------------------+
	// | 1    | Upload files missing on the server.                                   |
	// +------+-----------------------------------------------------------------------+
	// | 2    | Upload files that are missing or newer locally.                       |
	// +------+-----------------------------------------------------------------------+
	// | 3    | Upload only files that already exist remotely and are newer locally.  |
	// +------+-----------------------------------------------------------------------+
	// | 4    | Upload files that are missing or have a different size.               |
	// +------+-----------------------------------------------------------------------+
	// | 5    | Upload files that are missing, have a different size, or are newer    |
	// |      | locally.                                                              |
	// +------+-----------------------------------------------------------------------+
	// 
	// The synchronization filters are case-insensitive and match file basenames rather
	// than relative paths. A file is considered newer only when its timestamp is
	// strictly later; equal timestamps do not qualify.
	// 
	// Only the mode values shown in the table are valid. Other values fail before any
	// FTP command is sent. Use GetSyncedFiles[1] afterward to obtain the relative
	// paths uploaded.
	// 
	// Mode numbers differ by direction: The upload and download synchronization
	// methods do not assign the same meanings to all numeric modes. Use the table for
	// the method being called rather than reusing a mode number from a download
	// operation.
	// 
	// References:
	// [1] #GetSyncedFiles
	bool SyncRemoteTree(const char *localRoot, int mode);

	// Synchronizes the local tree rooted at localRoot into the current remote directory.
	// mode selects which files are uploaded.
	// 
	// +------+-----------------------------------------------------------------------+
	// | Mode |                                Action                                 |
	// +======+=======================================================================+
	// | 0    | Upload all selected files.                                            |
	// +------+-----------------------------------------------------------------------+
	// | 1    | Upload files missing on the server.                                   |
	// +------+-----------------------------------------------------------------------+
	// | 2    | Upload files that are missing or newer locally.                       |
	// +------+-----------------------------------------------------------------------+
	// | 3    | Upload only files that already exist remotely and are newer locally.  |
	// +------+-----------------------------------------------------------------------+
	// | 4    | Upload files that are missing or have a different size.               |
	// +------+-----------------------------------------------------------------------+
	// | 5    | Upload files that are missing, have a different size, or are newer    |
	// |      | locally.                                                              |
	// +------+-----------------------------------------------------------------------+
	// 
	// The synchronization filters are case-insensitive and match file basenames rather
	// than relative paths. A file is considered newer only when its timestamp is
	// strictly later; equal timestamps do not qualify.
	// 
	// Only the mode values shown in the table are valid. Other values fail before any
	// FTP command is sent. Use GetSyncedFiles[1] afterward to obtain the relative
	// paths uploaded.
	// 
	// Mode numbers differ by direction: The upload and download synchronization
	// methods do not assign the same meanings to all numeric modes. Use the table for
	// the method being called rather than reusing a mode number from a download
	// operation.
	// 
	// References:
	// [1] #GetSyncedFiles
	CkTask *SyncRemoteTreeAsync(const char *localRoot, int mode);


	// Provides the upload synchronization behavior and valid modes of
	// SyncRemoteTree[1] with traversal and preview controls. localDirPath is the local root,
	// mode is the upload synchronization mode, bDescend controls whether subdirectories
	// are traversed, and bPreviewOnly selects preview-only mode. File and directory filters
	// apply in both normal and preview operation.
	// 
	// When bPreviewOnly is true, files are not uploaded and the absolute candidate file
	// paths are placed in SyncPreview[2]. Required remote directories may still be
	// created during preview. If no files qualify, the preview is empty.
	// 
	// Unsupported mode values fail before any FTP command is sent and clear
	// SyncPreview. A failed preview also leaves it empty. A subsequent non-preview
	// synchronization clears the previous preview.
	// 
	// 
	// References:
	// [1] #SyncRemoteTree
	// [2] #SyncPreview
	bool SyncRemoteTree2(const char *localDirPath, int mode, bool bDescend, bool bPreviewOnly);

	// Provides the upload synchronization behavior and valid modes of
	// SyncRemoteTree[1] with traversal and preview controls. localDirPath is the local root,
	// mode is the upload synchronization mode, bDescend controls whether subdirectories
	// are traversed, and bPreviewOnly selects preview-only mode. File and directory filters
	// apply in both normal and preview operation.
	// 
	// When bPreviewOnly is true, files are not uploaded and the absolute candidate file
	// paths are placed in SyncPreview[2]. Required remote directories may still be
	// created during preview. If no files qualify, the preview is empty.
	// 
	// Unsupported mode values fail before any FTP command is sent and clear
	// SyncPreview. A failed preview also leaves it empty. A subsequent non-preview
	// synchronization clears the previous preview.
	// 
	// 
	// References:
	// [1] #SyncRemoteTree
	// [2] #SyncPreview
	CkTask *SyncRemoteTree2Async(const char *localDirPath, int mode, bool bDescend, bool bPreviewOnly);


	// Sends SYST and returns the server's operating-system type reply. Chilkat can use
	// this information when interpreting legacy directory listings.
	// 
	// Whether the command is accepted before authentication is server-dependent.
	// 
	bool Syst(CkString &outStr);

	// Sends SYST and returns the server's operating-system type reply. Chilkat can use
	// this information when interpreting legacy directory listings.
	// 
	// Whether the command is accepted before authentication is server-dependent.
	// 
	const char *syst(void);
	// Sends SYST and returns the server's operating-system type reply. Chilkat can use
	// this information when interpreting legacy directory listings.
	// 
	// Whether the command is accepted before authentication is server-dependent.
	// 
	CkTask *SystAsync(void);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
