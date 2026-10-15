// CkRestW.h: interface for the CkRestW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkRestW_H
#define _CkRestW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkStringBuilderW;
class CkTaskW;
class CkBinDataW;
class CkByteData;
class CkStreamW;
class CkJsonObjectW;
class CkUrlW;
class CkAuthAwsW;
class CkAuthAzureSASW;
class CkAuthAzureStorageW;
class CkSecureStringW;
class CkAuthGoogleW;
class CkOAuth1W;
class CkOAuth2W;
class CkSocketW;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkRestW
class CK_VISIBLE_PUBLIC CkRestW  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkRestW(const CkRestW &);
	CkRestW &operator=(const CkRestW &);

    public:
	CkRestW(void);
	virtual ~CkRestW(void);

	

	static CkRestW *createNew(void);
	

	CkRestW(bool bCallbackOwned);
	static CkRestW *createNew(bool bCallbackOwned);

	
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
	// Controls whether long request-header fields may be folded onto continuation
	// lines. The default is false. When set to false, each request header is
	// emitted on a single physical line.
	// 
	// Modern HTTP compatibility: Obsolete HTTP line folding is rejected by some
	// servers and signing systems. Set this property to false when the service
	// requires unfolded header lines, as is common for canonicalized request
	// signatures.
	bool get_AllowHeaderFolding(void);
	// Controls whether long request-header fields may be folded onto continuation
	// lines. The default is false. When set to false, each request header is
	// emitted on a single physical line.
	// 
	// Modern HTTP compatibility: Obsolete HTTP line folding is rejected by some
	// servers and signing systems. Set this property to false when the service
	// requires unfolded header lines, as is common for canonicalized request
	// signatures.
	void put_AllowHeaderFolding(bool newVal);

	// Controls whether non-ASCII request-header values may be converted to RFC 2047
	// encoded-word form using Q or Base64 encoding. The default is true.
	// 
	// Encoded words have forms such as =?utf-8?Q?...?= and =?utf-8?B?...?=. When this
	// property is false, Chilkat does not apply this conversion.
	// 
	// Compatibility feature: RFC 2047 encoded words originated in Internet message
	// headers. Use this behavior only when the target HTTP service expects it; many
	// APIs instead require ASCII header values or a service-specific encoding.
	bool get_AllowHeaderQB(void);
	// Controls whether non-ASCII request-header values may be converted to RFC 2047
	// encoded-word form using Q or Base64 encoding. The default is true.
	// 
	// Encoded words have forms such as =?utf-8?Q?...?= and =?utf-8?B?...?=. When this
	// property is false, Chilkat does not apply this conversion.
	// 
	// Compatibility feature: RFC 2047 encoded words originated in Internet message
	// headers. Use this behavior only when the target HTTP service expects it; many
	// APIs instead require ASCII header values or a service-specific encoding.
	void put_AllowHeaderQB(bool newVal);

	// Gets or sets the value sent in the HTTP Authorization request header. Supply
	// only the field value, such as Bearer eyJ..., not the text Authorization:.
	// 
	// Authentication helpers: For generated authentication, prefer the appropriate
	// SetAuth* method. A configured authentication provider may generate or replace
	// the Authorization header when the request is sent.
	// Provider precedence: When a SetAuth* provider is active, its generated
	// Authorization header takes precedence over this property and over a manually
	// added Authorization header. ClearAuth[1] clears both the provider and this
	// value; clearing top-level headers also clears this property.
	// 
	// References:
	// [1] #ClearAuth
	void get_Authorization(CkString &str);
	// Gets or sets the value sent in the HTTP Authorization request header. Supply
	// only the field value, such as Bearer eyJ..., not the text Authorization:.
	// 
	// Authentication helpers: For generated authentication, prefer the appropriate
	// SetAuth* method. A configured authentication provider may generate or replace
	// the Authorization header when the request is sent.
	// Provider precedence: When a SetAuth* provider is active, its generated
	// Authorization header takes precedence over this property and over a manually
	// added Authorization header. ClearAuth[1] clears both the provider and this
	// value; clearing top-level headers also clears this property.
	// 
	// References:
	// [1] #ClearAuth
	const wchar_t *authorization(void);
	// Gets or sets the value sent in the HTTP Authorization request header. Supply
	// only the field value, such as Bearer eyJ..., not the text Authorization:.
	// 
	// Authentication helpers: For generated authentication, prefer the appropriate
	// SetAuth* method. A configured authentication provider may generate or replace
	// the Authorization header when the request is sent.
	// Provider precedence: When a SetAuth* provider is active, its generated
	// Authorization header takes precedence over this property and over a manually
	// added Authorization header. ClearAuth[1] clears both the provider and this
	// value; clearing top-level headers also clears this property.
	// 
	// References:
	// [1] #ClearAuth
	void put_Authorization(const wchar_t *newVal);

	// After Connect[1] fails, returns a code identifying the connection stage or TLS
	// handshake stage that failed.
	// 
	// +------+----------------------------------------------+
	// | Code |                   Meaning                    |
	// +======+==============================================+
	// | 0    | Success                                      |
	// +------+----------------------------------------------+
	// | 1    | Empty hostname                               |
	// +------+----------------------------------------------+
	// | 2    | DNS lookup failed                            |
	// +------+----------------------------------------------+
	// | 3    | DNS timeout                                  |
	// +------+----------------------------------------------+
	// | 4    | Aborted by the application                   |
	// +------+----------------------------------------------+
	// | 5    | Internal failure                             |
	// +------+----------------------------------------------+
	// | 6    | Connection timed out                         |
	// +------+----------------------------------------------+
	// | 7    | Connection rejected or otherwise failed      |
	// +------+----------------------------------------------+
	// | 99   | Chilkat is not unlocked or the trial expired |
	// +------+----------------------------------------------+
	// 
	// TLS-related codes:
	// 
	// +------+---------------------------------------------------------+
	// | Code |                         Meaning                         |
	// +======+=========================================================+
	// | 100  | TLS internal error                                      |
	// +------+---------------------------------------------------------+
	// | 101  | Failed to send ClientHello                              |
	// +------+---------------------------------------------------------+
	// | 102  | Unexpected handshake message                            |
	// +------+---------------------------------------------------------+
	// | 103  | Failed to read ServerHello                              |
	// +------+---------------------------------------------------------+
	// | 104  | No server certificate                                   |
	// +------+---------------------------------------------------------+
	// | 105  | Unexpected TLS protocol version                         |
	// +------+---------------------------------------------------------+
	// | 106  | Server certificate verification failed                  |
	// +------+---------------------------------------------------------+
	// | 107  | Unacceptable TLS protocol version                       |
	// +------+---------------------------------------------------------+
	// | 109  | Failed to read handshake messages                       |
	// +------+---------------------------------------------------------+
	// | 110  | Failed to send the client-certificate handshake message |
	// +------+---------------------------------------------------------+
	// | 111  | Failed to send ClientKeyExchange                        |
	// +------+---------------------------------------------------------+
	// | 112  | Client certificate private key is inaccessible          |
	// +------+---------------------------------------------------------+
	// | 113  | Failed to send CertificateVerify                        |
	// +------+---------------------------------------------------------+
	// | 114  | Failed to send ChangeCipherSpec                         |
	// +------+---------------------------------------------------------+
	// | 115  | Failed to send Finished                                 |
	// +------+---------------------------------------------------------+
	// | 116  | The server Finished message is invalid                  |
	// +------+---------------------------------------------------------+
	// 
	// Detailed diagnostics: Use the code as a category and inspect LastErrorText for
	// the full failure context.
	// Reset after success: A successful Connect[1] resets this property to 0. HTTP
	// response properties are separate and are not cleared by a later failed
	// connection attempt.
	// 
	// References:
	// [1] #Connect
	int get_ConnectFailReason(void);

	// Gets or sets the maximum number of milliseconds to wait for the remote server to
	// accept the TCP connection. This timeout covers connection establishment, not the
	// later sending or receiving of HTTP data.
	// 
	// Related timeout: Use IdleTimeoutMs[1] to control how long an established
	// operation may remain without send or receive progress.
	// 
	// The default is 30000 milliseconds.
	// 
	// 
	// References:
	// [1] #IdleTimeoutMs
	int get_ConnectTimeoutMs(void);
	// Gets or sets the maximum number of milliseconds to wait for the remote server to
	// accept the TCP connection. This timeout covers connection establishment, not the
	// later sending or receiving of HTTP data.
	// 
	// Related timeout: Use IdleTimeoutMs[1] to control how long an established
	// operation may remain without send or receive progress.
	// 
	// The default is 30000 milliseconds.
	// 
	// 
	// References:
	// [1] #IdleTimeoutMs
	void put_ConnectTimeoutMs(int newVal);

	// When true, calls to the Send* and FullRequest* methods compose the complete
	// request but do not transmit it. Retrieve the generated request with
	// GetLastDebugRequest[1]. The default is false.
	// 
	// Safe request inspection: This is useful for validating signing, headers, query
	// strings, multipart formatting, and body encoding without contacting the server.
	// The captured request may contain secrets.
	// 
	// In debug mode, a composed full-request call reports a synthetic successful
	// result with ResponseStatusCode equal to 201, ResponseStatusText equal to OK, and
	// no actual response header or response body.
	// 
	// 
	// References:
	// [1] #GetLastDebugRequest
	bool get_DebugMode(void);
	// When true, calls to the Send* and FullRequest* methods compose the complete
	// request but do not transmit it. Retrieve the generated request with
	// GetLastDebugRequest[1]. The default is false.
	// 
	// Safe request inspection: This is useful for validating signing, headers, query
	// strings, multipart formatting, and body encoding without contacting the server.
	// The captured request may contain secrets.
	// 
	// In debug mode, a composed full-request call reports a synthetic successful
	// result with ResponseStatusCode equal to 201, ResponseStatusText equal to OK, and
	// no actual response header or response body.
	// 
	// 
	// References:
	// [1] #GetLastDebugRequest
	void put_DebugMode(bool newVal);

	// Controls automatic resolution of credentials from operating-system secure
	// storage. The default is false.
	// 
	// When set to true, supported credential inputs may contain a secret
	// specification beginning with!! instead of a literal secret. Chilkat resolves the
	// specification from Windows Credential Manager on Windows or Apple Keychain on
	// macOS.
	// 
	// The specification format is:
	// 
	// !![appName|]service[|domain]|username
	// 
	// For this class, secret specifications apply to the username and password
	// supplied to SetAuthBasic[1].
	// 
	// Why use secret resolution: It avoids embedding long-lived credentials directly
	// in source code, configuration files, command lines, or logs. The requested
	// secret must already exist in the platform credential store.
	// 
	// References:
	// [1] #SetAuthBasic
	bool get_EnableSecrets(void);
	// Controls automatic resolution of credentials from operating-system secure
	// storage. The default is false.
	// 
	// When set to true, supported credential inputs may contain a secret
	// specification beginning with!! instead of a literal secret. Chilkat resolves the
	// specification from Windows Credential Manager on Windows or Apple Keychain on
	// macOS.
	// 
	// The specification format is:
	// 
	// !![appName|]service[|domain]|username
	// 
	// For this class, secret specifications apply to the username and password
	// supplied to SetAuthBasic[1].
	// 
	// Why use secret resolution: It avoids embedding long-lived credentials directly
	// in source code, configuration files, command lines, or logs. The requested
	// secret must already exist in the platform credential store.
	// 
	// References:
	// [1] #SetAuthBasic
	void put_EnableSecrets(bool newVal);

	// Controls the interval, in milliseconds, between AbortCheck[1] event callbacks
	// during supported long-running operations. The default is 0, which disables
	// periodic AbortCheck callbacks.
	// 
	// Choosing an interval: A smaller value makes cancellation more responsive but
	// causes callbacks more frequently.
	// 
	// References:
	// [1] #AbortCheck
	int get_HeartbeatMs(void);
	// Controls the interval, in milliseconds, between AbortCheck[1] event callbacks
	// during supported long-running operations. The default is 0, which disables
	// periodic AbortCheck callbacks.
	// 
	// Choosing an interval: A smaller value makes cancellation more responsive but
	// causes callbacks more frequently.
	// 
	// References:
	// [1] #AbortCheck
	void put_HeartbeatMs(int newVal);

	// Gets or sets the value of the HTTP Host request header.
	// 
	// Usually automatic: For a normal connection, Chilkat derives the Host header from
	// the server established by Connect[1] or UseConnection[2]. Set this property
	// explicitly only when the request must present a different virtual-host value.
	// 
	// An explicitly assigned value overrides the generated HTTP Host field, but it
	// does not change the TCP/TLS destination established by Connect[1] or
	// UseConnection[2].
	// 
	// 
	// References:
	// [1] #Connect
	// [2] #UseConnection
	void get_Host(CkString &str);
	// Gets or sets the value of the HTTP Host request header.
	// 
	// Usually automatic: For a normal connection, Chilkat derives the Host header from
	// the server established by Connect[1] or UseConnection[2]. Set this property
	// explicitly only when the request must present a different virtual-host value.
	// 
	// An explicitly assigned value overrides the generated HTTP Host field, but it
	// does not change the TCP/TLS destination established by Connect[1] or
	// UseConnection[2].
	// 
	// 
	// References:
	// [1] #Connect
	// [2] #UseConnection
	const wchar_t *host(void);
	// Gets or sets the value of the HTTP Host request header.
	// 
	// Usually automatic: For a normal connection, Chilkat derives the Host header from
	// the server established by Connect[1] or UseConnection[2]. Set this property
	// explicitly only when the request must present a different virtual-host value.
	// 
	// An explicitly assigned value overrides the generated HTTP Host field, but it
	// does not change the TCP/TLS destination established by Connect[1] or
	// UseConnection[2].
	// 
	// 
	// References:
	// [1] #Connect
	// [2] #UseConnection
	void put_Host(const wchar_t *newVal);

	// Gets or sets the maximum number of milliseconds to wait when a send or receive
	// operation has stopped making progress. The default is 30000 milliseconds.
	// 
	// Not an overall deadline: This is an inactivity timeout. An operation can run
	// longer than this value as long as data continues to be sent or received.
	// 
	// A value of 0 disables the inactivity timeout.
	// 
	int get_IdleTimeoutMs(void);
	// Gets or sets the maximum number of milliseconds to wait when a send or receive
	// operation has stopped making progress. The default is 30000 milliseconds.
	// 
	// Not an overall deadline: This is an inactivity timeout. An operation can run
	// longer than this value as long as data continues to be sent or received.
	// 
	// A value of 0 disables the inactivity timeout.
	// 
	void put_IdleTimeoutMs(int newVal);

	// Returns the redirect target from the most recently received response. The value
	// comes from the response Location header. If the most recent response was not a
	// redirect or did not contain a Location header, this property is empty.
	// 
	// Relative redirects: A Location value may be an absolute URL or a relative
	// reference, depending on the server response.
	// Redirect handling: The value is the response Location field as received. Rest
	// does not automatically follow the redirect; send a new request explicitly,
	// reconnecting first if the target host changes.
	void get_LastRedirectUrl(CkString &str);
	// Returns the redirect target from the most recently received response. The value
	// comes from the response Location header. If the most recent response was not a
	// redirect or did not contain a Location header, this property is empty.
	// 
	// Relative redirects: A Location value may be an absolute URL or a relative
	// reference, depending on the server response.
	// Redirect handling: The value is the response Location field as received. Rest
	// does not automatically follow the redirect; send a new request explicitly,
	// reconnecting first if the target host changes.
	const wchar_t *lastRedirectUrl(void);

	// Returns the HTTP header fields from the most recently composed request,
	// excluding the request line. The request line is available separately in
	// LastRequestStartLine[1].
	// 
	// Sensitive data: The header block may contain credentials, bearer tokens,
	// cookies, or signatures. Avoid writing it to logs unless sensitive values are
	// redacted.
	// 
	// A failed Connect[2] does not clear this value. It continues to describe the last
	// request that was composed and sent.
	// 
	// 
	// References:
	// [1] #LastRequestStartLine
	// [2] #Connect
	void get_LastRequestHeader(CkString &str);
	// Returns the HTTP header fields from the most recently composed request,
	// excluding the request line. The request line is available separately in
	// LastRequestStartLine[1].
	// 
	// Sensitive data: The header block may contain credentials, bearer tokens,
	// cookies, or signatures. Avoid writing it to logs unless sensitive values are
	// redacted.
	// 
	// A failed Connect[2] does not clear this value. It continues to describe the last
	// request that was composed and sent.
	// 
	// 
	// References:
	// [1] #LastRequestStartLine
	// [2] #Connect
	const wchar_t *lastRequestHeader(void);

	// Returns the request line from the most recently composed request. It contains
	// the HTTP method, request target, and HTTP version, for example:
	// 
	// GET /v1/items?limit=10 HTTP/1.1
	// 
	// A failed Connect[1] does not clear this value. It continues to describe the last
	// request that was composed and sent.
	// 
	// 
	// References:
	// [1] #Connect
	void get_LastRequestStartLine(CkString &str);
	// Returns the request line from the most recently composed request. It contains
	// the HTTP method, request target, and HTTP version, for example:
	// 
	// GET /v1/items?limit=10 HTTP/1.1
	// 
	// A failed Connect[1] does not clear this value. It continues to describe the last
	// request that was composed and sent.
	// 
	// 
	// References:
	// [1] #Connect
	const wchar_t *lastRequestStartLine(void);

	// Returns the number of response header field occurrences. Enumerate them with
	// zero-based indexes using ResponseHdrName[1] and ResponseHdrValue[2].
	// 
	// A failed Connect[3] does not reset this count; it remains the count for the last
	// received HTTP response.
	// 
	// 
	// References:
	// [1] #ResponseHdrName
	// [2] #ResponseHdrValue
	// [3] #Connect
	int get_NumResponseHeaders(void);

	// Selects the multipart entity or part targeted by multipart-building operations
	// such as AddHeader, RemoveHeader, and the SetMultipartBody* methods.
	// 
	// +---------+-------------------------------------------+
	// |  Value  |              Selected target              |
	// +=========+===========================================+
	// | (empty) | The top-level request entity              |
	// +---------+-------------------------------------------+
	// | 0       | The top-level request entity              |
	// +---------+-------------------------------------------+
	// | 1       | The first multipart subpart               |
	// +---------+-------------------------------------------+
	// | 2       | The second multipart subpart              |
	// +---------+-------------------------------------------+
	// | 1.2     | The second child within the first subpart |
	// +---------+-------------------------------------------+
	// 
	// Multipart indexes: PartSelector uses one-based part numbers, unlike most Chilkat
	// indexed accessors. Reset it to the empty string before modifying top-level
	// request headers.
	// 
	// The value 0, like the empty string, selects the top-level request entity. A
	// nonnumeric selector is invalid. A body assignment can create a higher-numbered
	// part even when lower-numbered parts do not yet exist.
	// 
	void get_PartSelector(CkString &str);
	// Selects the multipart entity or part targeted by multipart-building operations
	// such as AddHeader, RemoveHeader, and the SetMultipartBody* methods.
	// 
	// +---------+-------------------------------------------+
	// |  Value  |              Selected target              |
	// +=========+===========================================+
	// | (empty) | The top-level request entity              |
	// +---------+-------------------------------------------+
	// | 0       | The top-level request entity              |
	// +---------+-------------------------------------------+
	// | 1       | The first multipart subpart               |
	// +---------+-------------------------------------------+
	// | 2       | The second multipart subpart              |
	// +---------+-------------------------------------------+
	// | 1.2     | The second child within the first subpart |
	// +---------+-------------------------------------------+
	// 
	// Multipart indexes: PartSelector uses one-based part numbers, unlike most Chilkat
	// indexed accessors. Reset it to the empty string before modifying top-level
	// request headers.
	// 
	// The value 0, like the empty string, selects the top-level request entity. A
	// nonnumeric selector is invalid. A body assignment can create a higher-numbered
	// part even when lower-numbered parts do not yet exist.
	// 
	const wchar_t *partSelector(void);
	// Selects the multipart entity or part targeted by multipart-building operations
	// such as AddHeader, RemoveHeader, and the SetMultipartBody* methods.
	// 
	// +---------+-------------------------------------------+
	// |  Value  |              Selected target              |
	// +=========+===========================================+
	// | (empty) | The top-level request entity              |
	// +---------+-------------------------------------------+
	// | 0       | The top-level request entity              |
	// +---------+-------------------------------------------+
	// | 1       | The first multipart subpart               |
	// +---------+-------------------------------------------+
	// | 2       | The second multipart subpart              |
	// +---------+-------------------------------------------+
	// | 1.2     | The second child within the first subpart |
	// +---------+-------------------------------------------+
	// 
	// Multipart indexes: PartSelector uses one-based part numbers, unlike most Chilkat
	// indexed accessors. Reset it to the empty string before modifying top-level
	// request headers.
	// 
	// The value 0, like the empty string, selects the top-level request entity. A
	// nonnumeric selector is invalid. A body assignment can create a higher-numbered
	// part even when lower-numbered parts do not yet exist.
	// 
	void put_PartSelector(const wchar_t *newVal);

	// Applies to the full-request methods that both upload a request and download a
	// response. It selects which direction is represented by percent-complete events.
	// 
	//     * false (default): progress refers to receiving the response body.
	//     * true: progress refers to sending the request body.
	// A known total is required: Percentage can be calculated only when the total byte
	// count is known. For example, a chunked response may not provide a total response
	// length.
	bool get_PercentDoneOnSend(void);
	// Applies to the full-request methods that both upload a request and download a
	// response. It selects which direction is represented by percent-complete events.
	// 
	//     * false (default): progress refers to receiving the response body.
	//     * true: progress refers to sending the request body.
	// A known total is required: Percentage can be calculated only when the total byte
	// count is known. For example, a chunked response may not provide a total response
	// length.
	void put_PercentDoneOnSend(bool newVal);

	// Returns the HTTP response header fields from the most recently received
	// response, excluding the status line.
	// 
	// Status line: The numeric status and reason text are available through
	// ResponseStatusCode[1] and ResponseStatusText[2].
	// 
	// Repeated fields remain separate and in received order. The field-name casing is
	// preserved. A failed Connect[3] does not clear this value; it continues to
	// describe the last received HTTP response.
	// 
	// 
	// References:
	// [1] #ResponseStatusCode
	// [2] #ResponseStatusText
	// [3] #Connect
	void get_ResponseHeader(CkString &str);
	// Returns the HTTP response header fields from the most recently received
	// response, excluding the status line.
	// 
	// Status line: The numeric status and reason text are available through
	// ResponseStatusCode[1] and ResponseStatusText[2].
	// 
	// Repeated fields remain separate and in received order. The field-name casing is
	// preserved. A failed Connect[3] does not clear this value; it continues to
	// describe the last received HTTP response.
	// 
	// 
	// References:
	// [1] #ResponseStatusCode
	// [2] #ResponseStatusText
	// [3] #Connect
	const wchar_t *responseHeader(void);

	// Returns the numeric HTTP status code from the most recently received response,
	// such as 200, 404, or 503.
	// 
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode and the
	// response body to determine the API-level result.
	// Last completed exchange: A failed Connect[1] does not clear this property. It
	// continues to report the status of the last HTTP response that was actually
	// received.
	// 
	// References:
	// [1] #Connect
	int get_ResponseStatusCode(void);

	// Returns the reason phrase associated with the most recently received HTTP status
	// code, such as OK or Not Found.
	// 
	// Reason phrases are informational: Applications should make decisions from the
	// numeric status code. A reason phrase may be empty or may vary by server.
	// Last completed exchange: A failed Connect[1] does not clear this property; it
	// remains associated with the last received HTTP response.
	// 
	// References:
	// [1] #Connect
	void get_ResponseStatusText(CkString &str);
	// Returns the reason phrase associated with the most recently received HTTP status
	// code, such as OK or Not Found.
	// 
	// Reason phrases are informational: Applications should make decisions from the
	// numeric status code. A reason phrase may be empty or may vary by server.
	// Last completed exchange: A failed Connect[1] does not clear this property; it
	// remains associated with the last received HTTP response.
	// 
	// References:
	// [1] #Connect
	const wchar_t *responseStatusText(void);

	// Controls whether streaming uploads use a Content-Length header instead of
	// HTTP/1.1 chunked transfer encoding when the total body size is known. The
	// default is true.
	// 
	// When true and the stream length can be determined—for example, a file
	// stream—Chilkat sends a non-chunked request. When false, Chilkat uses
	// Transfer-Encoding: chunked. If the stream length is unknown, chunked transfer
	// may still be required.
	// 
	// Server compatibility: Some HTTP servers and signing schemes require
	// Content-Length and do not accept chunked request bodies; others support either
	// form.
	bool get_StreamNonChunked(void);
	// Controls whether streaming uploads use a Content-Length header instead of
	// HTTP/1.1 chunked transfer encoding when the total body size is known. The
	// default is true.
	// 
	// When true and the stream length can be determined—for example, a file
	// stream—Chilkat sends a non-chunked request. When false, Chilkat uses
	// Transfer-Encoding: chunked. If the stream length is unknown, chunked transfer
	// may still be required.
	// 
	// Server compatibility: Some HTTP servers and signing schemes require
	// Content-Length and do not accept chunked request bodies; others support either
	// form.
	void put_StreamNonChunked(bool newVal);

	// Provides opt-in compatibility settings for uncommon requirements. The default is
	// the empty string. Supply one or more comma-separated keywords:
	// 
	// +---------------------------+--------------------------------------------------+
	// |          Keyword          |                      Effect                      |
	// +===========================+==================================================+
	// | AllowDuplicateQueryParams | Allows AddQueryParam to append another parameter |
	// |                           | having the same name instead of replacing the    |
	// |                           | existing one.                                    |
	// +---------------------------+--------------------------------------------------+
	// | AllowInsecureBasicAuth    | Allows Basic authentication over a non-TLS       |
	// |                           | remote connection. By default, Basic             |
	// |                           | authentication is allowed only over TLS, an SSH  |
	// |                           | tunnel, or localhost.                            |
	// +---------------------------+--------------------------------------------------+
	// | DisableTls13              | Disables TLS 1.3 so negotiation is limited to    |
	// |                           | TLS 1.2 or earlier supported versions.           |
	// +---------------------------+--------------------------------------------------+
	// | ProtectFromVpn            | On Android, attempts to bypass an installed or   |
	// |                           | active VPN for this connection.                  |
	// +---------------------------+--------------------------------------------------+
	// 
	// Use sparingly: Leave this property empty unless a documented interoperability
	// requirement calls for one of these options. In particular,
	// AllowInsecureBasicAuth can expose credentials to network observers.
	void get_UncommonOptions(CkString &str);
	// Provides opt-in compatibility settings for uncommon requirements. The default is
	// the empty string. Supply one or more comma-separated keywords:
	// 
	// +---------------------------+--------------------------------------------------+
	// |          Keyword          |                      Effect                      |
	// +===========================+==================================================+
	// | AllowDuplicateQueryParams | Allows AddQueryParam to append another parameter |
	// |                           | having the same name instead of replacing the    |
	// |                           | existing one.                                    |
	// +---------------------------+--------------------------------------------------+
	// | AllowInsecureBasicAuth    | Allows Basic authentication over a non-TLS       |
	// |                           | remote connection. By default, Basic             |
	// |                           | authentication is allowed only over TLS, an SSH  |
	// |                           | tunnel, or localhost.                            |
	// +---------------------------+--------------------------------------------------+
	// | DisableTls13              | Disables TLS 1.3 so negotiation is limited to    |
	// |                           | TLS 1.2 or earlier supported versions.           |
	// +---------------------------+--------------------------------------------------+
	// | ProtectFromVpn            | On Android, attempts to bypass an installed or   |
	// |                           | active VPN for this connection.                  |
	// +---------------------------+--------------------------------------------------+
	// 
	// Use sparingly: Leave this property empty unless a documented interoperability
	// requirement calls for one of these options. In particular,
	// AllowInsecureBasicAuth can expose credentials to network observers.
	const wchar_t *uncommonOptions(void);
	// Provides opt-in compatibility settings for uncommon requirements. The default is
	// the empty string. Supply one or more comma-separated keywords:
	// 
	// +---------------------------+--------------------------------------------------+
	// |          Keyword          |                      Effect                      |
	// +===========================+==================================================+
	// | AllowDuplicateQueryParams | Allows AddQueryParam to append another parameter |
	// |                           | having the same name instead of replacing the    |
	// |                           | existing one.                                    |
	// +---------------------------+--------------------------------------------------+
	// | AllowInsecureBasicAuth    | Allows Basic authentication over a non-TLS       |
	// |                           | remote connection. By default, Basic             |
	// |                           | authentication is allowed only over TLS, an SSH  |
	// |                           | tunnel, or localhost.                            |
	// +---------------------------+--------------------------------------------------+
	// | DisableTls13              | Disables TLS 1.3 so negotiation is limited to    |
	// |                           | TLS 1.2 or earlier supported versions.           |
	// +---------------------------+--------------------------------------------------+
	// | ProtectFromVpn            | On Android, attempts to bypass an installed or   |
	// |                           | active VPN for this connection.                  |
	// +---------------------------+--------------------------------------------------+
	// 
	// Use sparingly: Leave this property empty unless a documented interoperability
	// requirement calls for one of these options. In particular,
	// AllowInsecureBasicAuth can expose credentials to network observers.
	void put_UncommonOptions(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds an HTTP request header using name as the field name and value as the field
	// value. If a request header with the same name is already present for the
	// selected part, its value is replaced.
	// 
	// HTTP header names: Field names are case-insensitive. Pass only the field name in
	// name—for example, Content-Type —and not the trailing colon. For multipart
	// requests, PartSelector[1] determines whether the header is added to the
	// top-level request or to a MIME part.
	// 
	// Request headers persist across requests until removed or cleared. Adding the
	// same header again replaces its current value.
	// 
	// Multipart selection: Header operations apply to the entity selected by
	// PartSelector[1]. Use an empty selector or 0 for top-level request headers;
	// select a part before adding that part's headers.
	// 
	// References:
	// [1] #PartSelector
	bool AddHeader(const wchar_t *name, const wchar_t *value);

	// Computes the Amazon Marketplace Web Service (MWS) request signature using the
	// secret key in mwsSecretKey and adds or replaces the Signature query parameter. Call this
	// after all other MWS request parameters have been added.
	// 
	// httpVerb is the HTTP method, uriPath is the MWS resource path, and domain is the request
	// domain. httpVerb and uriPath should match the values used by the request-sending
	// method. The method also adds or replaces the Timestamp parameter using the
	// current system time.
	// 
	// Legacy MWS signing: This method implements Amazon MWS signing and is not a
	// general AWS request signer. For AWS services that use AWS authorization
	// providers, use SetAuthAws[1].
	// 
	// References:
	// [1] #SetAuthAws
	bool AddMwsSignature(const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *domain, const wchar_t *mwsSecretKey);

	// Adds or replaces a path-substitution parameter. Before a request is sent,
	// occurrences of name in the supplied request path are replaced by value.
	// 
	// For example, setting name to fileId and value to abc123 transforms
	// /drive/v3/files/fileId into /drive/v3/files/abc123.
	// 
	// Placeholders are application-defined: The placeholder syntax is simply the text
	// stored in name; braces are not required unless they are part of the placeholder
	// text you choose.
	// 
	// Matching is case-sensitive and literal. Every occurrence of name is replaced,
	// substitutions are applied in the order they were added, and replacement applies
	// to the entire uriPath string, including any query portion.
	// 
	// Reserved characters: The replacement is not a general path-segment encoder.
	// Spaces are percent-encoded, but reserved URI characters such as /,?, and #
	// remain delimiters, and existing percent escapes are preserved. Percent-encode
	// reserved characters before calling this method when they are intended to be
	// data.
	// 
	// Path substitutions persist across requests until replaced or removed with
	// ClearAllPathParams[1].
	// 
	// 
	// References:
	// [1] #ClearAllPathParams
	bool AddPathParam(const wchar_t *name, const wchar_t *value);

	// Adds or replaces a query-string parameter using name as the parameter name and
	// value as its value. The stored query parameters are incorporated into the request
	// target when a request is sent.
	// 
	// Duplicate parameter names: By default, adding the same name again replaces the
	// existing value. To retain repeated names such as tag=red&tag=blue, include
	// AllowDuplicateQueryParams in UncommonOptions[1].
	// Encoding and lifetime: name and value are unencoded text. Chilkat percent-encodes
	// the parameter name and value when composing the request target. For example, a
	// space becomes%20, a literal plus sign becomes%2B, and a literal percent sign
	// becomes%25. Existing percent escapes supplied to this method are therefore
	// encoded again. Parameters persist across ordinary requests until removed or
	// cleared.
	// 
	// Parameter names are case-sensitive. Adding the same exact name again replaces
	// the existing value unless AllowDuplicateQueryParams is enabled in
	// UncommonOptions[1].
	// 
	// 
	// References:
	// [1] #UncommonOptions
	bool AddQueryParam(const wchar_t *name, const wchar_t *value);

	// Adds multiple query parameters from the query-string text in queryString. Use the form
	// field1=value1&field2=value2&field3=value3.
	// 
	// Encoding responsibility: The values in queryString must already be percent-encoded as
	// required for a URL query string. Do not include a leading?. For individual
	// name/value pairs, AddQueryParam[1] is usually clearer.
	// 
	// The input is parsed as an already URL-encoded query string and then normalized
	// when the request is composed. A plus sign is interpreted as a space and is
	// emitted as%20; encoded delimiters such as%26 remain data; an item without an
	// equals sign is treated as a parameter with an empty value.
	// 
	// Parameters added by this method persist across ordinary requests. When ARG2 of a
	// request method already contains a query string, those inline parameters appear
	// first, followed by the parameters stored in the Rest object.
	// 
	// 
	// References:
	// [1] #AddQueryParam
	bool AddQueryParams(const wchar_t *queryString);

	// Adds or replaces a query-string parameter named by name. The parameter value is
	// read from the StringBuilder in value.
	// 
	// Duplicate parameter names: By default, the same name is replaced. Include
	// AllowDuplicateQueryParams in UncommonOptions[1] to retain repeated names.
	// Encoding and lifetime: name and the text in value are unencoded text. Chilkat
	// percent-encodes the parameter name and value when composing the request target.
	// For example, a space becomes%20, a literal plus sign becomes%2B, and a literal
	// percent sign becomes%25. Existing percent escapes supplied to this method are
	// therefore encoded again. Parameters persist across ordinary requests until
	// removed or cleared.
	// 
	// Parameter names are case-sensitive. Adding the same exact name again replaces
	// the existing value unless AllowDuplicateQueryParams is enabled in
	// UncommonOptions[1].
	// 
	// 
	// References:
	// [1] #UncommonOptions
	bool AddQueryParamSb(const wchar_t *name, CkStringBuilderW &value);

	// Removes all HTTP request headers previously added to this object.
	// 
	// The method clears headers only from the entity selected by PartSelector[1].
	// Clearing top-level headers also clears the Authorization[2] property.
	// Automatically generated fields such as Host and Content-Length may be added
	// again when the next request is composed.
	// 
	// 
	// References:
	// [1] #PartSelector
	// [2] #Authorization
	bool ClearAllHeaders(void);

	// Removes all multipart subparts from the request under construction. This is
	// useful when reusing the same REST object after sending a multipart request.
	// 
	// Scope: This clears multipart parts; it does not by itself clear query
	// parameters, path parameters, authentication settings, or ordinary top-level
	// request headers.
	// 
	// This also resets PartSelector[1] to the empty string and releases the configured
	// multipart bodies and part streams.
	// 
	// 
	// References:
	// [1] #PartSelector
	bool ClearAllParts(void);

	// Removes all path-substitution parameters previously added with AddPathParam[1].
	// 
	// After clearing, placeholder text in later request paths is sent unchanged.
	// 
	// 
	// References:
	// [1] #AddPathParam
	bool ClearAllPathParams(void);

	// Removes all query parameters previously added to this object.
	// 
	// This clears the stored query/form parameter collection. It does not remove a
	// query string written directly in the uriPath argument of a request method.
	// 
	bool ClearAllQueryParams(void);

	// Clears authentication providers and credentials previously configured through
	// this class's SetAuth* methods.
	// 
	// This removes the active authentication provider and clears the manually
	// configured Authorization[1] value.
	// 
	// 
	// References:
	// [1] #Authorization
	bool ClearAuth(void);

	// Clears the response-stream destination previously configured by
	// SetResponseBodyStream[1]. Subsequent full-request methods return or store the
	// response body normally instead of streaming it to that destination.
	// 
	// Clearing the destination does not alter the Stream object itself.
	// 
	// 
	// References:
	// [1] #SetResponseBodyStream
	void ClearResponseBodyStream(void);

	// Establishes the initial TCP connection to the REST server. hostname is a DNS
	// hostname or an IPv4/IPv6 address, port is the server port, and tls specifies
	// whether the connection uses TLS. Common combinations are port 80 with tls set
	// to false, and port 443 with tls set to true.
	// 
	// If autoReconnect is true, subsequent requests may automatically reconnect when the
	// existing connection is no longer usable. If autoReconnect is false, a lost connection
	// causes the request to fail until the application explicitly reconnects.
	// 
	// Hostname only: hostname is not a URL. For https://api.example.com/v1/items, pass
	// api.example.com. The request path is supplied separately to the request method.
	// Advanced connections: Connect is intended for a direct connection. For HTTP or
	// SOCKS proxies, SSH tunneling, client certificates, custom socket routing, or
	// other advanced connection setup, establish a connected Socket and pass it to
	// UseConnection[1].
	// Reconnect behavior: When autoReconnect is true, Chilkat can establish a new connection
	// before a later request after the previous connection has closed. This option
	// should not be interpreted as a promise to replay a request that failed after
	// transmission began.
	// Result-state behavior: A successful connection resets ConnectFailReason[2] to 0.
	// A failed Connect does not clear the HTTP response and last-request properties
	// from an earlier completed exchange; those properties continue to describe the
	// last HTTP request/response, not the failed connection attempt.
	// 
	// References:
	// [1] #UseConnection
	// [2] #ConnectFailReason
	bool Connect(const wchar_t *hostname, int port, bool tls, bool autoReconnect);

	// Creates an asynchronous task to call the Connect method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ConnectAsync(const wchar_t *hostname, int port, bool tls, bool autoReconnect);

	// Closes the current HTTP connection, if one is open. maxWaitMs is the maximum number
	// of milliseconds to wait while attempting a clean shutdown.
	// 
	// Tunneled connections: When the REST connection uses an SSH tunnel, this closes
	// the logical channel used by REST. It does not close the underlying SSH session
	// itself.
	// Socket supplied by UseConnection: When the transport was supplied through
	// UseConnection[1], calling Disconnect also disconnects that Socket. If automatic
	// reconnection was enabled, a later request may reconnect it.
	// 
	// References:
	// [1] #UseConnection
	bool Disconnect(int maxWaitMs);

	// Creates an asynchronous task to call the Disconnect method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DisconnectAsync(int maxWaitMs);

	// Sends a complete request whose binary body is read from the BinData in binData. The
	// text response body replaces the existing contents of the StringBuilder in responseBody.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[1] or UseConnection[2].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[3] and the
	// response body to determine the API-level result.
	// 
	// responseBody is cleared and replaced with the textual response body.
	// 
	// 
	// References:
	// [1] #Connect
	// [2] #UseConnection
	// [3] #ResponseStatusCode
	bool FullRequestBd(const wchar_t *httpVerb, const wchar_t *uriPath, CkBinDataW &binData, CkStringBuilderW &responseBody);

	// Creates an asynchronous task to call the FullRequestBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestBdAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkBinDataW &binData, CkStringBuilderW &responseBody);

	// Sends a complete request whose body is the binary data in bodyBytes. The response
	// body is read as text and returned.
	// 
	// This convenience method performs the equivalent of SendReqBinaryBody[1],
	// ReadResponseHeader[2], and ReadRespBodyString[3] in sequence.
	// 
	// For full-request methods, PercentDoneOnSend[4] selects whether percent-complete
	// events refer to sending the request body or receiving the response body.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[5] or UseConnection[6].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[7] and the
	// response body to determine the API-level result.
	// Preferred binary API: For new code, FullRequestBd[8] uses BinData and avoids
	// language-specific byte-array limitations.
	// 
	// References:
	// [1] #SendReqBinaryBody
	// [2] #ReadResponseHeader
	// [3] #ReadRespBodyString
	// [4] #PercentDoneOnSend
	// [5] #Connect
	// [6] #UseConnection
	// [7] #ResponseStatusCode
	// [8] #FullRequestBd
	bool FullRequestBinary(const wchar_t *httpVerb, const wchar_t *uriPath, CkByteData &bodyBytes, CkString &outStr);
	// Sends a complete request whose body is the binary data in bodyBytes. The response
	// body is read as text and returned.
	// 
	// This convenience method performs the equivalent of SendReqBinaryBody[1],
	// ReadResponseHeader[2], and ReadRespBodyString[3] in sequence.
	// 
	// For full-request methods, PercentDoneOnSend[4] selects whether percent-complete
	// events refer to sending the request body or receiving the response body.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[5] or UseConnection[6].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[7] and the
	// response body to determine the API-level result.
	// Preferred binary API: For new code, FullRequestBd[8] uses BinData and avoids
	// language-specific byte-array limitations.
	// 
	// References:
	// [1] #SendReqBinaryBody
	// [2] #ReadResponseHeader
	// [3] #ReadRespBodyString
	// [4] #PercentDoneOnSend
	// [5] #Connect
	// [6] #UseConnection
	// [7] #ResponseStatusCode
	// [8] #FullRequestBd
	const wchar_t *fullRequestBinary(const wchar_t *httpVerb, const wchar_t *uriPath, CkByteData &bodyBytes);

	// Creates an asynchronous task to call the FullRequestBinary method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestBinaryAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkByteData &bodyBytes);

	// Sends a complete application/x-www-form-urlencoded request. The form body is
	// built from the parameters previously added with AddQueryParam[1] or
	// AddQueryParams[2]. The request Content-Type is set to
	// application/x-www-form-urlencoded. The response body is read as text and
	// returned.
	// 
	// This convenience method performs the equivalent of SendReqFormUrlEncoded[3],
	// ReadResponseHeader[4], and ReadRespBodyString[5] in sequence.
	// 
	// For full-request methods, PercentDoneOnSend[6] selects whether percent-complete
	// events refer to sending the request body or receiving the response body.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[7] or UseConnection[8].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[9] and the
	// response body to determine the API-level result.
	// 
	// Parameters written directly in uriPath remain in the URL query string. Parameters
	// stored through AddQueryParam[1], AddQueryParamSb[10], or AddQueryParams[2] are
	// encoded into the form body. After the form request is sent, this stored
	// parameter collection is cleared.
	// 
	// Persistent Content-Type: The method sets the top-level Content-Type to
	// application/x-www-form-urlencoded. That request-header value remains configured
	// for later requests until it is replaced or cleared.
	// 
	// References:
	// [1] #AddQueryParam
	// [2] #AddQueryParams
	// [3] #SendReqFormUrlEncoded
	// [4] #ReadResponseHeader
	// [5] #ReadRespBodyString
	// [6] #PercentDoneOnSend
	// [7] #Connect
	// [8] #UseConnection
	// [9] #ResponseStatusCode
	// [10] #AddQueryParamSb
	bool FullRequestFormUrlEncoded(const wchar_t *httpVerb, const wchar_t *uriPath, CkString &outStr);
	// Sends a complete application/x-www-form-urlencoded request. The form body is
	// built from the parameters previously added with AddQueryParam[1] or
	// AddQueryParams[2]. The request Content-Type is set to
	// application/x-www-form-urlencoded. The response body is read as text and
	// returned.
	// 
	// This convenience method performs the equivalent of SendReqFormUrlEncoded[3],
	// ReadResponseHeader[4], and ReadRespBodyString[5] in sequence.
	// 
	// For full-request methods, PercentDoneOnSend[6] selects whether percent-complete
	// events refer to sending the request body or receiving the response body.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[7] or UseConnection[8].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[9] and the
	// response body to determine the API-level result.
	// 
	// Parameters written directly in uriPath remain in the URL query string. Parameters
	// stored through AddQueryParam[1], AddQueryParamSb[10], or AddQueryParams[2] are
	// encoded into the form body. After the form request is sent, this stored
	// parameter collection is cleared.
	// 
	// Persistent Content-Type: The method sets the top-level Content-Type to
	// application/x-www-form-urlencoded. That request-header value remains configured
	// for later requests until it is replaced or cleared.
	// 
	// References:
	// [1] #AddQueryParam
	// [2] #AddQueryParams
	// [3] #SendReqFormUrlEncoded
	// [4] #ReadResponseHeader
	// [5] #ReadRespBodyString
	// [6] #PercentDoneOnSend
	// [7] #Connect
	// [8] #UseConnection
	// [9] #ResponseStatusCode
	// [10] #AddQueryParamSb
	const wchar_t *fullRequestFormUrlEncoded(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Creates an asynchronous task to call the FullRequestFormUrlEncoded method with
	// the arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestFormUrlEncodedAsync(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Sends a complete multipart request using the parts and part headers configured
	// through PartSelector[1], AddHeader[2], and the multipart-body methods. The
	// response body is read as text and returned.
	// 
	// This convenience method performs the equivalent of SendReqMultipart[3],
	// ReadResponseHeader[4], and ReadRespBodyString[5] in sequence.
	// 
	// For full-request methods, PercentDoneOnSend[6] selects whether percent-complete
	// events refer to sending the request body or receiving the response body.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[7] or UseConnection[8].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[9] and the
	// response body to determine the API-level result.
	// Multipart state: Assigning a body to a selected part creates that part. Parts
	// may be created out of numeric order, persist across multipart requests, and
	// retain the generated boundary while the multipart structure remains configured.
	// The default top-level media type is multipart/form-data.
	// 
	// The request fails if no multipart subparts are configured.
	// 
	// 
	// References:
	// [1] #PartSelector
	// [2] #AddHeader
	// [3] #SendReqMultipart
	// [4] #ReadResponseHeader
	// [5] #ReadRespBodyString
	// [6] #PercentDoneOnSend
	// [7] #Connect
	// [8] #UseConnection
	// [9] #ResponseStatusCode
	bool FullRequestMultipart(const wchar_t *httpVerb, const wchar_t *uriPath, CkString &outStr);
	// Sends a complete multipart request using the parts and part headers configured
	// through PartSelector[1], AddHeader[2], and the multipart-body methods. The
	// response body is read as text and returned.
	// 
	// This convenience method performs the equivalent of SendReqMultipart[3],
	// ReadResponseHeader[4], and ReadRespBodyString[5] in sequence.
	// 
	// For full-request methods, PercentDoneOnSend[6] selects whether percent-complete
	// events refer to sending the request body or receiving the response body.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[7] or UseConnection[8].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[9] and the
	// response body to determine the API-level result.
	// Multipart state: Assigning a body to a selected part creates that part. Parts
	// may be created out of numeric order, persist across multipart requests, and
	// retain the generated boundary while the multipart structure remains configured.
	// The default top-level media type is multipart/form-data.
	// 
	// The request fails if no multipart subparts are configured.
	// 
	// 
	// References:
	// [1] #PartSelector
	// [2] #AddHeader
	// [3] #SendReqMultipart
	// [4] #ReadResponseHeader
	// [5] #ReadRespBodyString
	// [6] #PercentDoneOnSend
	// [7] #Connect
	// [8] #UseConnection
	// [9] #ResponseStatusCode
	const wchar_t *fullRequestMultipart(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Creates an asynchronous task to call the FullRequestMultipart method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestMultipartAsync(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Sends a complete request with no request body. The response body is read as text
	// and returned.
	// 
	// This convenience method performs the equivalent of SendReqNoBody[1],
	// ReadResponseHeader[2], and ReadRespBodyString[3] in sequence.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[4] or UseConnection[5].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[6] and the
	// response body to determine the API-level result.
	// 
	// References:
	// [1] #SendReqNoBody
	// [2] #ReadResponseHeader
	// [3] #ReadRespBodyString
	// [4] #Connect
	// [5] #UseConnection
	// [6] #ResponseStatusCode
	bool FullRequestNoBody(const wchar_t *httpVerb, const wchar_t *uriPath, CkString &outStr);
	// Sends a complete request with no request body. The response body is read as text
	// and returned.
	// 
	// This convenience method performs the equivalent of SendReqNoBody[1],
	// ReadResponseHeader[2], and ReadRespBodyString[3] in sequence.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[4] or UseConnection[5].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[6] and the
	// response body to determine the API-level result.
	// 
	// References:
	// [1] #SendReqNoBody
	// [2] #ReadResponseHeader
	// [3] #ReadRespBodyString
	// [4] #Connect
	// [5] #UseConnection
	// [6] #ResponseStatusCode
	const wchar_t *fullRequestNoBody(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Creates an asynchronous task to call the FullRequestNoBody method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestNoBodyAsync(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Sends a complete request without a request body and stores the binary response
	// body in the BinData in binData, replacing its previous contents.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[1] or UseConnection[2].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[3] and the
	// response body to determine the API-level result.
	// 
	// binData is cleared and replaced with the binary response body.
	// 
	// 
	// References:
	// [1] #Connect
	// [2] #UseConnection
	// [3] #ResponseStatusCode
	bool FullRequestNoBodyBd(const wchar_t *httpVerb, const wchar_t *uriPath, CkBinDataW &binData);

	// Creates an asynchronous task to call the FullRequestNoBodyBd method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestNoBodyBdAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkBinDataW &binData);

	// Sends a complete request without a request body and stores the text response
	// body in the StringBuilder in sb, replacing its previous contents.
	// 
	// This is the StringBuilder form of FullRequestNoBody[1].
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[2] or UseConnection[3].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[4] and the
	// response body to determine the API-level result.
	// 
	// sb is cleared and replaced with the textual response body.
	// 
	// 
	// References:
	// [1] #FullRequestNoBody
	// [2] #Connect
	// [3] #UseConnection
	// [4] #ResponseStatusCode
	bool FullRequestNoBodySb(const wchar_t *httpVerb, const wchar_t *uriPath, CkStringBuilderW &sb);

	// Creates an asynchronous task to call the FullRequestNoBodySb method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestNoBodySbAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkStringBuilderW &sb);

	// Sends a complete request whose text body is read from the StringBuilder in requestBody.
	// The text response body replaces the existing contents of the StringBuilder in
	// responseBody.
	// 
	// This is the StringBuilder form of FullRequestString[1].
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[2] or UseConnection[3].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[4] and the
	// response body to determine the API-level result.
	// Text encoding and Content-Type: Unicode text is encoded as UTF-8. Generic
	// string-body methods do not automatically add a Content-Type header; add the
	// media type required by the API, such as application/json; charset=utf-8.
	// 
	// responseBody is cleared and replaced with the response body.
	// 
	// 
	// References:
	// [1] #FullRequestString
	// [2] #Connect
	// [3] #UseConnection
	// [4] #ResponseStatusCode
	bool FullRequestSb(const wchar_t *httpVerb, const wchar_t *uriPath, CkStringBuilderW &requestBody, CkStringBuilderW &responseBody);

	// Creates an asynchronous task to call the FullRequestSb method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestSbAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkStringBuilderW &requestBody, CkStringBuilderW &responseBody);

	// Sends a complete request whose body is read from the Stream in stream. Streaming
	// is appropriate for large uploads because the entire request body need not be
	// held in memory. The response body is read as text and returned.
	// 
	// This convenience method performs the equivalent of SendReqStreamBody[1],
	// ReadResponseHeader[2], and ReadRespBodyString[3] in sequence.
	// 
	// For full-request methods, PercentDoneOnSend[4] selects whether percent-complete
	// events refer to sending the request body or receiving the response body.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[5] or UseConnection[6].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[7] and the
	// response body to determine the API-level result.
	// Stream position: The stream is read from its current position and is left
	// consumed. Reusing the same stream without resetting its source or position sends
	// only the unread remainder, which may be zero bytes.
	// 
	// References:
	// [1] #SendReqStreamBody
	// [2] #ReadResponseHeader
	// [3] #ReadRespBodyString
	// [4] #PercentDoneOnSend
	// [5] #Connect
	// [6] #UseConnection
	// [7] #ResponseStatusCode
	bool FullRequestStream(const wchar_t *httpVerb, const wchar_t *uriPath, CkStreamW &stream, CkString &outStr);
	// Sends a complete request whose body is read from the Stream in stream. Streaming
	// is appropriate for large uploads because the entire request body need not be
	// held in memory. The response body is read as text and returned.
	// 
	// This convenience method performs the equivalent of SendReqStreamBody[1],
	// ReadResponseHeader[2], and ReadRespBodyString[3] in sequence.
	// 
	// For full-request methods, PercentDoneOnSend[4] selects whether percent-complete
	// events refer to sending the request body or receiving the response body.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[5] or UseConnection[6].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[7] and the
	// response body to determine the API-level result.
	// Stream position: The stream is read from its current position and is left
	// consumed. Reusing the same stream without resetting its source or position sends
	// only the unread remainder, which may be zero bytes.
	// 
	// References:
	// [1] #SendReqStreamBody
	// [2] #ReadResponseHeader
	// [3] #ReadRespBodyString
	// [4] #PercentDoneOnSend
	// [5] #Connect
	// [6] #UseConnection
	// [7] #ResponseStatusCode
	const wchar_t *fullRequestStream(const wchar_t *httpVerb, const wchar_t *uriPath, CkStreamW &stream);

	// Creates an asynchronous task to call the FullRequestStream method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestStreamAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkStreamW &stream);

	// Sends a complete request whose text body is supplied in bodyText, such as JSON, XML,
	// or plain text. The response body is read as text and returned.
	// 
	// This convenience method performs the equivalent of SendReqStringBody[1],
	// ReadResponseHeader[2], and ReadRespBodyString[3] in sequence.
	// 
	// For full-request methods, PercentDoneOnSend[4] selects whether percent-complete
	// events refer to sending the request body or receiving the response body.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[5] or UseConnection[6].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[7] and the
	// response body to determine the API-level result.
	// Text encoding and Content-Type: Unicode text is encoded as UTF-8. Generic
	// string-body methods do not automatically add a Content-Type header; add the
	// media type required by the API, such as application/json; charset=utf-8.
	// 
	// References:
	// [1] #SendReqStringBody
	// [2] #ReadResponseHeader
	// [3] #ReadRespBodyString
	// [4] #PercentDoneOnSend
	// [5] #Connect
	// [6] #UseConnection
	// [7] #ResponseStatusCode
	bool FullRequestString(const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText, CkString &outStr);
	// Sends a complete request whose text body is supplied in bodyText, such as JSON, XML,
	// or plain text. The response body is read as text and returned.
	// 
	// This convenience method performs the equivalent of SendReqStringBody[1],
	// ReadResponseHeader[2], and ReadRespBodyString[3] in sequence.
	// 
	// For full-request methods, PercentDoneOnSend[4] selects whether percent-complete
	// events refer to sending the request body or receiving the response body.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[5] or UseConnection[6].
	// HTTP status versus method success: Receiving an HTTP error status such as 400 or
	// 404 is still a completed HTTP exchange. Inspect ResponseStatusCode[7] and the
	// response body to determine the API-level result.
	// Text encoding and Content-Type: Unicode text is encoded as UTF-8. Generic
	// string-body methods do not automatically add a Content-Type header; add the
	// media type required by the API, such as application/json; charset=utf-8.
	// 
	// References:
	// [1] #SendReqStringBody
	// [2] #ReadResponseHeader
	// [3] #ReadRespBodyString
	// [4] #PercentDoneOnSend
	// [5] #Connect
	// [6] #UseConnection
	// [7] #ResponseStatusCode
	const wchar_t *fullRequestString(const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText);

	// Creates an asynchronous task to call the FullRequestString method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestStringAsync(const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText);

	// Copies the fully composed HTTP request generated while DebugMode[1] was true
	// into the BinData in bd. The captured data includes the request line, headers,
	// and body that would have been sent.
	// 
	// Diagnostic use: Debug mode does not transmit the request. Treat captured
	// requests as sensitive because they may contain authorization headers, cookies,
	// tokens, or request-body credentials.
	// 
	// bd is cleared and replaced. The captured bytes are the complete composed
	// HTTP/1.1 request, including chunk framing when a streaming request uses
	// Transfer-Encoding: chunked.
	// 
	// 
	// References:
	// [1] #DebugMode
	bool GetLastDebugRequest(CkBinDataW &bd);

	// Copies operation-specific diagnostic or result information from the most
	// recently completed method into the JsonObject in json. Many methods do not
	// produce additional JSON details, in which case the object is empty.
	// 
	// Read immediately: Call this immediately after the operation of interest because
	// a later method call may replace the stored JSON data.
	void GetLastJsonData(CkJsonObjectW &json);

	// Deprecated. Use GetLastJsonData[1] instead.
	// 
	// Returns a JSON object containing operation-specific details from the most
	// recently completed method when such details are available. Many operations
	// produce an empty object.
	// 
	// 
	// References:
	// [1] #GetLastJsonData
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObjectW *LastJsonData(void);

	// Loads into this object the caller associated with the Task in task. task must be
	// a task returned by an asynchronous method of this class.
	// 
	// Async task relationship: This method recovers the originating REST caller state
	// from a task; it does not load arbitrary task data.
	bool LoadTaskCaller(CkTaskW &task);

	// Reads the response body as raw bytes into the BinData in responseBody, replacing its
	// previous contents. Call this after ReadResponseHeader[1].
	// 
	// Use for binary content: Typical examples include images, archives, PDFs,
	// encrypted data, and arbitrary file downloads.
	// Read once: A response body may be consumed by only one body-reading method. A
	// second attempt fails immediately. Fully consume the body before sending another
	// request on the same connection; otherwise unread bytes can prevent the next
	// response header from being parsed correctly.
	// Responses without a body: Do not call a body-reading method for a HEAD response.
	// A 204 No Content response is handled as a successful empty body.
	// 
	// References:
	// [1] #ReadResponseHeader
	bool ReadRespBd(CkBinDataW &responseBody);

	// Creates an asynchronous task to call the ReadRespBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadRespBdAsync(CkBinDataW &responseBody);

	// Reads the response body as raw bytes. Call this only after ReadResponseHeader[1]
	// has returned the response status code.
	// 
	// Choosing a response type: Use this method for images, archives, encrypted
	// content, and other non-text data. For new code, ReadRespBd[2] stores the bytes
	// in BinData.
	// Read once: A response body may be consumed by only one body-reading method. A
	// second attempt fails immediately. Fully consume the body before sending another
	// request on the same connection; otherwise unread bytes can prevent the next
	// response header from being parsed correctly.
	// Responses without a body: Do not call a body-reading method for a HEAD response.
	// A 204 No Content response is handled as a successful empty body.
	// 
	// References:
	// [1] #ReadResponseHeader
	// [2] #ReadRespBd
	bool ReadRespBodyBinary(CkByteData &outBytes);

	// Creates an asynchronous task to call the ReadRespBodyBinary method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadRespBodyBinaryAsync(void);

	// Reads the response body into the Stream supplied in stream. Call this after
	// ReadResponseHeader[1].
	// 
	// If autoSetStreamCharset is true and the response is textual, the stream's StringCharset is set
	// from the charset parameter in the response Content-Type header when one is
	// present. autoSetStreamCharset has no effect for binary responses.
	// 
	// Large downloads: A stream can write directly to a file or another destination,
	// avoiding the need to buffer the entire response body in memory.
	// Read once: A response body may be consumed by only one body-reading method. A
	// second attempt fails immediately. Fully consume the body before sending another
	// request on the same connection; otherwise unread bytes can prevent the next
	// response header from being parsed correctly.
	// Responses without a body: Do not call a body-reading method for a HEAD response.
	// A 204 No Content response is handled as a successful empty body.
	// 
	// References:
	// [1] #ReadResponseHeader
	bool ReadRespBodyStream(CkStreamW &stream, bool autoSetStreamCharset);

	// Creates an asynchronous task to call the ReadRespBodyStream method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadRespBodyStreamAsync(CkStreamW &stream, bool autoSetStreamCharset);

	// Reads the response body as text and returns it. Call this only after
	// ReadResponseHeader[1] has returned the response status code.
	// 
	// Text versus binary: Use this method for JSON, XML, HTML, and other textual
	// responses. Use ReadRespBd[2] or ReadRespBodyStream[3] for binary or very large
	// content.
	// Read once: A response body may be consumed by only one body-reading method. A
	// second attempt fails immediately. Fully consume the body before sending another
	// request on the same connection; otherwise unread bytes can prevent the next
	// response header from being parsed correctly.
	// Responses without a body: Do not call a body-reading method for a HEAD response.
	// A 204 No Content response is handled as a successful empty body.
	// 
	// References:
	// [1] #ReadResponseHeader
	// [2] #ReadRespBd
	// [3] #ReadRespBodyStream
	bool ReadRespBodyString(CkString &outStr);
	// Reads the response body as text and returns it. Call this only after
	// ReadResponseHeader[1] has returned the response status code.
	// 
	// Text versus binary: Use this method for JSON, XML, HTML, and other textual
	// responses. Use ReadRespBd[2] or ReadRespBodyStream[3] for binary or very large
	// content.
	// Read once: A response body may be consumed by only one body-reading method. A
	// second attempt fails immediately. Fully consume the body before sending another
	// request on the same connection; otherwise unread bytes can prevent the next
	// response header from being parsed correctly.
	// Responses without a body: Do not call a body-reading method for a HEAD response.
	// A 204 No Content response is handled as a successful empty body.
	// 
	// References:
	// [1] #ReadResponseHeader
	// [2] #ReadRespBd
	// [3] #ReadRespBodyStream
	const wchar_t *readRespBodyString(void);

	// Creates an asynchronous task to call the ReadRespBodyString method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadRespBodyStringAsync(void);

	// After ReadResponseHeader[1] has been called, reads the next chunk of the
	// response body and appends the received bytes to the BinData in bd. The call
	// waits until at least minSize bytes are available, unless the response ends first.
	// The final chunk may contain fewer than minSize bytes, including zero bytes.
	// 
	// +-------------+----------------------------------------------------------------+
	// |   Return    |                            Meaning                             |
	// |    value    |                                                                |
	// +=============+================================================================+
	// | -1          | The read failed; inspect LastErrorText .                       |
	// +-------------+----------------------------------------------------------------+
	// | 0           | The remaining response bytes were returned and the response    |
	// |             | body is complete.                                              |
	// +-------------+----------------------------------------------------------------+
	// | 1           | A chunk was returned and more response bytes remain.           |
	// +-------------+----------------------------------------------------------------+
	// 
	// Incremental processing: This method is useful when the application wants to
	// process a long response progressively rather than buffer it all at once.
	// 
	// References:
	// [1] #ReadResponseHeader
	int ReadRespChunkBd(int minSize, CkBinDataW &bd);

	// Creates an asynchronous task to call the ReadRespChunkBd method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadRespChunkBdAsync(int minSize, CkBinDataW &bd);

	// Reads the HTTP response status line and header fields. The returned integer is
	// the HTTP status code, such as 200, 404, or 500. A return value of -1 means that
	// no HTTP response was received because a transport or protocol error occurred.
	// 
	// After this method returns a status code, inspect ResponseHeader[1],
	// ResponseStatusCode[2], ResponseStatusText[3], and the response-header access
	// methods. If the response has a body, read it with ReadRespBodyString[4],
	// ReadRespBd[5], ReadRespBodyStream[6], or another appropriate body-reading
	// method.
	// 
	// Do not infer body presence from the request method alone: Whether a response
	// body is present depends on the response status, request method, and response
	// headers. For example, a GET commonly has a response body, while HEAD does not.
	// Read once: A response body may be consumed by only one body-reading method. A
	// second attempt fails immediately. Fully consume the body before sending another
	// request on the same connection; otherwise unread bytes can prevent the next
	// response header from being parsed correctly.
	// Responses without a body: Do not call a body-reading method for a HEAD response.
	// A 204 No Content response is handled as a successful empty body.
	// 
	// References:
	// [1] #ResponseHeader
	// [2] #ResponseStatusCode
	// [3] #ResponseStatusText
	// [4] #ReadRespBodyString
	// [5] #ReadRespBd
	// [6] #ReadRespBodyStream
	int ReadResponseHeader(void);

	// Creates an asynchronous task to call the ReadResponseHeader method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadResponseHeaderAsync(void);

	// Reads the response body as text into the StringBuilder in responseBody, replacing its
	// previous contents. Call this after ReadResponseHeader[1].
	// 
	// Read once: A response body may be consumed by only one body-reading method. A
	// second attempt fails immediately. Fully consume the body before sending another
	// request on the same connection; otherwise unread bytes can prevent the next
	// response header from being parsed correctly.
	// Responses without a body: Do not call a body-reading method for a HEAD response.
	// A 204 No Content response is handled as a successful empty body.
	// 
	// References:
	// [1] #ReadResponseHeader
	bool ReadRespSb(CkStringBuilderW &responseBody);

	// Creates an asynchronous task to call the ReadRespSb method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadRespSbAsync(CkStringBuilderW &responseBody);

	// Deprecated. Use LastRedirectUrl[1] instead.
	// 
	// If the most recent response is a redirect and contains a Location header,
	// returns that redirect URL.
	// 
	// 
	// References:
	// [1] #LastRedirectUrl
	// The caller is responsible for deleting the object returned by this method.
	CkUrlW *RedirectUrl(void);

	// Removes all request headers named by name from the request level selected by
	// PartSelector[1].
	// 
	// Header-name matching is case-insensitive, and all matching occurrences are
	// removed.
	// 
	// 
	// References:
	// [1] #PartSelector
	bool RemoveHeader(const wchar_t *name);

	// Removes all query parameters whose name matches name.
	// 
	// Parameter-name matching is case-sensitive. All parameters having the exact name
	// are removed. A true return value indicates that the operation completed
	// successfully; it does not guarantee that a matching parameter existed.
	// 
	bool RemoveQueryParam(const wchar_t *name);

	// Returns the value of the response header field named by name. HTTP header field
	// names are case-insensitive.
	// 
	// Repeated response headers: When the response can contain repeated fields, use
	// NumResponseHeaders[1], ResponseHdrName[2], and ResponseHdrValue[3] to enumerate
	// every field occurrence.
	// 
	// If the response contains the same field more than once, this method returns the
	// first matching value. Enumerate the header collection to obtain all occurrences,
	// especially for fields such as Set-Cookie.
	// 
	// 
	// References:
	// [1] #NumResponseHeaders
	// [2] #ResponseHdrName
	// [3] #ResponseHdrValue
	bool ResponseHdrByName(const wchar_t *name, CkString &outStr);
	// Returns the value of the response header field named by name. HTTP header field
	// names are case-insensitive.
	// 
	// Repeated response headers: When the response can contain repeated fields, use
	// NumResponseHeaders[1], ResponseHdrName[2], and ResponseHdrValue[3] to enumerate
	// every field occurrence.
	// 
	// If the response contains the same field more than once, this method returns the
	// first matching value. Enumerate the header collection to obtain all occurrences,
	// especially for fields such as Set-Cookie.
	// 
	// 
	// References:
	// [1] #NumResponseHeaders
	// [2] #ResponseHdrName
	// [3] #ResponseHdrValue
	const wchar_t *responseHdrByName(const wchar_t *name);

	// Returns the field name of the response header at zero-based index index. Valid
	// indexes range from 0 through NumResponseHeaders[1] minus one.
	// 
	// Enumeration preserves the response-field order and the field-name casing
	// received from the server. Repeated fields occupy separate indexes.
	// 
	// 
	// References:
	// [1] #NumResponseHeaders
	bool ResponseHdrName(int index, CkString &outStr);
	// Returns the field name of the response header at zero-based index index. Valid
	// indexes range from 0 through NumResponseHeaders[1] minus one.
	// 
	// Enumeration preserves the response-field order and the field-name casing
	// received from the server. Repeated fields occupy separate indexes.
	// 
	// 
	// References:
	// [1] #NumResponseHeaders
	const wchar_t *responseHdrName(int index);

	// Returns the field value of the response header at zero-based index index. Use the
	// same index with ResponseHdrName[1] to obtain the corresponding field name.
	// 
	// Repeated response fields occupy separate indexes and are returned in received
	// order.
	// 
	// 
	// References:
	// [1] #ResponseHdrName
	bool ResponseHdrValue(int index, CkString &outStr);
	// Returns the field value of the response header at zero-based index index. Use the
	// same index with ResponseHdrName[1] to obtain the corresponding field name.
	// 
	// Repeated response fields occupy separate indexes and are returned in received
	// order.
	// 
	// 
	// References:
	// [1] #ResponseHdrName
	const wchar_t *responseHdrValue(int index);

	// Sends a request whose binary body is read from the BinData in body.
	// 
	// httpVerb is the HTTP method, such as GET, POST, or PUT. uriPath is the request path.
	// This is a low-level send operation: after it succeeds, call
	// ReadResponseHeader[1] and then read the response body with the appropriate
	// response method.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[2] or UseConnection[3].
	// 
	// References:
	// [1] #ReadResponseHeader
	// [2] #Connect
	// [3] #UseConnection
	bool SendReqBd(const wchar_t *httpVerb, const wchar_t *uriPath, CkBinDataW &body);

	// Creates an asynchronous task to call the SendReqBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqBdAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkBinDataW &body);

	// Sends a request whose body is the binary byte array in body.
	// 
	// httpVerb is the HTTP method, such as GET, POST, or PUT. uriPath is the request path.
	// This is a low-level send operation: after it succeeds, call
	// ReadResponseHeader[1] and then read the response body with the appropriate
	// response method.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[2] or UseConnection[3].
	// Preferred binary API: For new code, SendReqBd[4] uses BinData.
	// 
	// References:
	// [1] #ReadResponseHeader
	// [2] #Connect
	// [3] #UseConnection
	// [4] #SendReqBd
	bool SendReqBinaryBody(const wchar_t *httpVerb, const wchar_t *uriPath, CkByteData &body);

	// Creates an asynchronous task to call the SendReqBinaryBody method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqBinaryBodyAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkByteData &body);

	// Sends an application/x-www-form-urlencoded request. The request body is built
	// from the parameters added with AddQueryParam[1] or AddQueryParams[2]. Any
	// manually supplied Content-Type value is replaced with
	// application/x-www-form-urlencoded.
	// 
	// httpVerb is the HTTP method, such as GET, POST, or PUT. uriPath is the request path.
	// This is a low-level send operation: after it succeeds, call
	// ReadResponseHeader[3] and then read the response body with the appropriate
	// response method.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[4] or UseConnection[5].
	// 
	// Parameters written directly in uriPath remain in the URL query string. Parameters
	// stored through AddQueryParam[1], AddQueryParamSb[6], or AddQueryParams[2] are
	// encoded into the form body. After the form request is sent, this stored
	// parameter collection is cleared.
	// 
	// Persistent Content-Type: The method sets the top-level Content-Type to
	// application/x-www-form-urlencoded. That request-header value remains configured
	// for later requests until it is replaced or cleared.
	// 
	// References:
	// [1] #AddQueryParam
	// [2] #AddQueryParams
	// [3] #ReadResponseHeader
	// [4] #Connect
	// [5] #UseConnection
	// [6] #AddQueryParamSb
	bool SendReqFormUrlEncoded(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Creates an asynchronous task to call the SendReqFormUrlEncoded method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqFormUrlEncodedAsync(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Sends a multipart request using the parts configured with PartSelector[1],
	// AddHeader[2], and the multipart-body methods.
	// 
	// httpVerb is the HTTP method, such as GET, POST, or PUT. uriPath is the request path.
	// This is a low-level send operation: after it succeeds, call
	// ReadResponseHeader[3] and then read the response body with the appropriate
	// response method.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[4] or UseConnection[5].
	// Multipart state: Assigning a body to a selected part creates that part. Parts
	// may be created out of numeric order, persist across multipart requests, and
	// retain the generated boundary while the multipart structure remains configured.
	// The default top-level media type is multipart/form-data.
	// 
	// The request fails if no multipart subparts are configured.
	// 
	// 
	// References:
	// [1] #PartSelector
	// [2] #AddHeader
	// [3] #ReadResponseHeader
	// [4] #Connect
	// [5] #UseConnection
	bool SendReqMultipart(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Creates an asynchronous task to call the SendReqMultipart method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqMultipartAsync(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Sends a request without a request body.
	// 
	// httpVerb is the HTTP method, such as GET, POST, or PUT. uriPath is the request path.
	// This is a low-level send operation: after it succeeds, call
	// ReadResponseHeader[1] and then read the response body with the appropriate
	// response method.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[2] or UseConnection[3].
	// 
	// References:
	// [1] #ReadResponseHeader
	// [2] #Connect
	// [3] #UseConnection
	bool SendReqNoBody(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Creates an asynchronous task to call the SendReqNoBody method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqNoBodyAsync(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Sends a request whose text body is read from the StringBuilder in bodySb. Set the
	// request Content-Type header to identify the body format.
	// 
	// httpVerb is the HTTP method, such as GET, POST, or PUT. uriPath is the request path.
	// This is a low-level send operation: after it succeeds, call
	// ReadResponseHeader[1] and then read the response body with the appropriate
	// response method.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[2] or UseConnection[3].
	// Text encoding and Content-Type: Unicode text is encoded as UTF-8. Generic
	// string-body methods do not automatically add a Content-Type header; add the
	// media type required by the API, such as application/json; charset=utf-8.
	// 
	// References:
	// [1] #ReadResponseHeader
	// [2] #Connect
	// [3] #UseConnection
	bool SendReqSb(const wchar_t *httpVerb, const wchar_t *uriPath, CkStringBuilderW &bodySb);

	// Creates an asynchronous task to call the SendReqSb method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqSbAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkStringBuilderW &bodySb);

	// Sends a request whose body is read from the Stream in stream. The stream may
	// supply text or binary data; set the request Content-Type header as required by
	// the API.
	// 
	// httpVerb is the HTTP method, such as GET, POST, or PUT. uriPath is the request path.
	// This is a low-level send operation: after it succeeds, call
	// ReadResponseHeader[1] and then read the response body with the appropriate
	// response method.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[2] or UseConnection[3].
	// Streaming: The stream is consumed while the request is sent, which is useful
	// when the body is too large to hold in memory.
	// Stream position: The stream is read from its current position and is left
	// consumed. Reusing the same stream without resetting its source or position sends
	// only the unread remainder, which may be zero bytes.
	// 
	// References:
	// [1] #ReadResponseHeader
	// [2] #Connect
	// [3] #UseConnection
	bool SendReqStreamBody(const wchar_t *httpVerb, const wchar_t *uriPath, CkStreamW &stream);

	// Creates an asynchronous task to call the SendReqStreamBody method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqStreamBodyAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkStreamW &stream);

	// Sends a request whose text body is supplied in bodyText, such as JSON, XML,
	// form-independent text, or another textual representation. Set the request
	// Content-Type header to identify the body format expected by the server.
	// 
	// httpVerb is the HTTP method, such as GET, POST, or PUT. uriPath is the request path.
	// This is a low-level send operation: after it succeeds, call
	// ReadResponseHeader[1] and then read the response body with the appropriate
	// response method.
	// 
	// Request path: uriPath is the path and optional query portion of the URL, not a
	// complete URL. For https://api.example.com/v1/items?limit=10, pass
	// /v1/items?limit=10. The server name and port are established separately by
	// Connect[2] or UseConnection[3].
	// Text encoding and Content-Type: Unicode text is encoded as UTF-8. Generic
	// string-body methods do not automatically add a Content-Type header; add the
	// media type required by the API, such as application/json; charset=utf-8.
	// 
	// References:
	// [1] #ReadResponseHeader
	// [2] #Connect
	// [3] #UseConnection
	bool SendReqStringBody(const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText);

	// Creates an asynchronous task to call the SendReqStringBody method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqStringBodyAsync(const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText);

	// Associates the AuthAws provider in authProvider with this REST object. Chilkat uses the
	// provider to sign each AWS request after the request method, path, query
	// parameters, headers, and body are known. The application does not need to
	// construct the Authorization header manually.
	// 
	// Request signing: AWS signatures cover selected request components. Add all
	// required headers and query parameters before sending the request so the
	// generated signature matches the final request.
	bool SetAuthAws(CkAuthAwsW &authProvider);

	// Associates the AuthAzureSAS provider in authProvider with this REST object. Chilkat
	// automatically adds an Authorization: SharedAccessSignature ... header to
	// subsequent requests.
	// 
	// SAS terminology: This method is for Azure services that use a Shared Access
	// Signature in the Authorization header. It is distinct from a storage SAS token
	// embedded in a URL query string.
	bool SetAuthAzureSas(CkAuthAzureSASW &authProvider);

	// Associates the AuthAzureStorage provider in authProvider with this REST object. Chilkat
	// automatically applies the Azure Storage authorization information required for
	// each request.
	// 
	// Azure Storage authentication: The provider contains the storage account
	// credentials and signing settings. Request-specific headers and the resource path
	// are incorporated when the request is sent.
	bool SetAuthAzureStorage(CkAuthAzureStorageW &authProvider);

	// Configures HTTP Basic authentication using username as the username and password as the
	// password. Chilkat automatically generates an Authorization: Basic ... header for
	// subsequent requests.
	// 
	// Security requirement: Basic authentication is an encoding scheme, not
	// encryption. Use it only over TLS. By default, Chilkat blocks Basic
	// authentication on an insecure remote connection; AllowInsecureBasicAuth in
	// UncommonOptions[1] exists only for exceptional compatibility needs.
	// 
	// Some APIs use an account ID, client ID, API key, token, or secret in place of a
	// traditional username or password; follow the service documentation.
	// 
	// Authorization precedence: The Basic authentication provider generates the
	// Authorization header when each request is composed and takes precedence over a
	// value set through the Authorization[2] property or AddHeader[3].
	// 
	// References:
	// [1] #UncommonOptions
	// [2] #Authorization
	// [3] #AddHeader
	bool SetAuthBasic(const wchar_t *username, const wchar_t *password);

	// Configures HTTP Basic authentication using the SecureString objects in username and
	// password for the username and password. The resulting request behavior is the same
	// as SetAuthBasic[1].
	// 
	// Credential handling: SecureString reduces unnecessary exposure of the credential
	// text in ordinary application strings. Basic authentication must still be
	// protected by TLS.
	// Authorization precedence: The Basic authentication provider generates the
	// Authorization header when each request is composed and takes precedence over a
	// manually configured Authorization value.
	// 
	// References:
	// [1] #SetAuthBasic
	bool SetAuthBasicSecure(CkSecureStringW &username, CkSecureStringW &password);

	// Associates the AuthGoogle provider in authProvider with this REST object. Chilkat uses
	// the provider to add the Google authentication information needed by subsequent
	// API requests.
	// 
	bool SetAuthGoogle(CkAuthGoogleW &authProvider);

	// Associates the OAuth1 provider in authProvider with this REST object for OAuth 1.0 or
	// OAuth 1.0a request signing.
	// 
	// If useQueryParams is true, the OAuth parameters and signature are placed in the query
	// string. If useQueryParams is false, they are placed in the Authorization header.
	// 
	// Final request matters: OAuth 1 signatures depend on the HTTP method, request
	// URL, and parameters. Configure the request completely before sending it.
	bool SetAuthOAuth1(CkOAuth1W &authProvider, bool useQueryParams);

	// Associates the OAuth2 provider in authProvider with this REST object. The provider must
	// contain a valid access token. Chilkat then adds an Authorization: Bearer
	// <access-token> header to each request.
	// 
	// The access token may be obtained through an OAuth flow or loaded from previously
	// saved token data. Token acquisition, refresh, expiration, and scope requirements
	// are determined by the authorization server.
	// 
	// Manual bearer headers: A bearer token can also be supplied with AddHeader[1]. Do
	// not configure both approaches for the same request because they compete for the
	// same Authorization header.
	// Provider lifetime: The OAuth2 object is consulted when each request is composed
	// rather than copied at setup time. Keep it alive while the Rest object uses it.
	// Changing its AccessToken changes the bearer token used by subsequent requests.
	// Authorization precedence: The provider-generated bearer header takes precedence
	// over a manually configured Authorization value.
	// 
	// References:
	// [1] #AddHeader
	bool SetAuthOAuth2(CkOAuth2W &authProvider);

	// Sets the binary body of the multipart part identified by PartSelector[1] from
	// the BinData in bodyData.
	// 
	// Setting the body creates the selected part when it does not already exist. Part
	// numbers do not need to be created consecutively.
	// 
	// 
	// References:
	// [1] #PartSelector
	bool SetMultipartBodyBd(CkBinDataW &bodyData);

	// Sets the selected multipart part body to the binary bytes in bodyData. The target
	// part is identified by PartSelector[1].
	// 
	// Part headers: While the same part is selected, use AddHeader[2] to set fields
	// such as Content-Disposition and Content-Type. For new code,
	// SetMultipartBodyBd[3] uses BinData.
	// 
	// Setting the body creates the selected part when it does not already exist. Part
	// numbers do not need to be created consecutively.
	// 
	// 
	// References:
	// [1] #PartSelector
	// [2] #AddHeader
	// [3] #SetMultipartBodyBd
	bool SetMultipartBodyBinary(CkByteData &bodyData);

	// Sets the text body of the multipart part identified by PartSelector[1] from the
	// StringBuilder in bodySb.
	// 
	// Setting the body creates the selected part when it does not already exist. Part
	// numbers do not need to be created consecutively.
	// 
	// 
	// References:
	// [1] #PartSelector
	bool SetMultipartBodySb(CkStringBuilderW &bodySb);

	// Uses the Stream in stream as the body source for the multipart part identified by
	// PartSelector[1].
	// 
	// Large multipart parts: The stream is read while the request is sent, allowing a
	// large file or generated body to be uploaded without first loading the entire
	// part into memory.
	// Object lifetime and position: The selected part retains the stream as its body
	// source until the multipart request is sent or the parts are cleared. Keep the
	// Stream object alive. It is read from its current position and must be reset
	// before reusing it for another upload.
	// 
	// Setting the body creates the selected part when it does not already exist. Part
	// numbers do not need to be created consecutively.
	// 
	// 
	// References:
	// [1] #PartSelector
	bool SetMultipartBodyStream(CkStreamW &stream);

	// Sets the text body of the multipart part identified by PartSelector[1] to bodyText.
	// 
	// Part metadata: Use AddHeader[2] while the part is selected to set its
	// Content-Type, Content-Disposition, and other part headers.
	// 
	// Setting the body creates the selected part when it does not already exist. Part
	// numbers do not need to be created consecutively.
	// 
	// 
	// References:
	// [1] #PartSelector
	// [2] #AddHeader
	bool SetMultipartBodyString(const wchar_t *bodyText);

	// Configures a Stream destination for response bodies received by the full-request
	// convenience methods. The body is written to responseStream only when the response status
	// code matches expectedStatus.
	// 
	// If streaming occurs successfully, a string-returning full-request method returns
	// OK. If streaming was selected but writing the body fails, it returns FAIL. If
	// the status code does not match expectedStatus, the body is not streamed and remains
	// available as the method's normal response text.
	// 
	// If autoSetStreamCharset is true and the response is textual, the destination stream's
	// StringCharset is set from the response Content-Type charset when available. autoSetStreamCharset
	// is ignored for binary responses.
	// 
	// +------------+--------------------------------+
	// | expectedStatus value | Status codes that are streamed |
	// +============+================================+
	// | 200        | Only 200                       |
	// +------------+--------------------------------+
	// | -200       | 200 through 299                |
	// +------------+--------------------------------+
	// | -210       | 210 through 219                |
	// +------------+--------------------------------+
	// 
	// Resetting this behavior: Call ClearResponseBodyStream[1] to restore normal
	// response-body handling.
	// 
	// For Boolean-returning full-request methods, successful streaming returns true.
	// A StringBuilder response output receives OK; a BinData response output is
	// cleared. If the status does not match expectedStatus, the stream is not written and the
	// method returns the response through its normal output.
	// 
	// The configuration remains active for later full-request calls until
	// ClearResponseBodyStream[1] is called.
	// 
	// 
	// References:
	// [1] #ClearResponseBodyStream
	bool SetResponseBodyStream(int expectedStatus, bool autoSetStreamCharset, CkStreamW &responseStream);

	// Uses the already-connected Socket in connection as the transport for REST requests.
	// The socket may represent a direct TCP or TLS connection, an HTTP or SOCKS proxy
	// connection, an SSH-tunneled channel, or another connection configured through
	// the Socket API.
	// 
	// autoReconnect controls automatic reconnection for later requests when the connection is
	// no longer usable.
	// 
	// When to use this method: Use Connect[1] for ordinary direct connections. Use
	// UseConnection when the connection requires advanced Socket configuration.
	// Socket lifetime: The Rest object retains and operates on the supplied Socket.
	// Keep the Socket object alive while it is attached. Calling Disconnect[2]
	// disconnects it; with autoReconnect set to true, a later request can reconnect the same
	// Socket object.
	// 
	// References:
	// [1] #Connect
	// [2] #Disconnect
	bool UseConnection(CkSocketW &connection, bool autoReconnect);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
