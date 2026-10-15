// CkOAuth2W.h: interface for the CkOAuth2W class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkOAuth2W_H
#define _CkOAuth2W_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkTaskW;
class CkStringBuilderW;
class CkSocketW;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkOAuth2W
class CK_VISIBLE_PUBLIC CkOAuth2W  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkOAuth2W(const CkOAuth2W &);
	CkOAuth2W &operator=(const CkOAuth2W &);

    public:
	CkOAuth2W(void);
	virtual ~CkOAuth2W(void);

	

	static CkOAuth2W *createNew(void);
	

	CkOAuth2W(bool bCallbackOwned);
	static CkOAuth2W *createNew(bool bCallbackOwned);

	
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
	// Contains the access_token extracted from the most recent successful token
	// response. It is updated after a successful authorization-code exchange or
	// refresh-token request.
	// 
	// The access token is presented to the protected API, commonly in an HTTP header:
	// 
	// Authorization: Bearer ACCESS_TOKEN
	// Bearer credential: Anyone possessing a bearer access token can use the authority
	// it grants until the token expires or is revoked. Store it securely, transmit it
	// only over TLS, and never place it in a URL or ordinary log.
	void get_AccessToken(CkString &str);
	// Contains the access_token extracted from the most recent successful token
	// response. It is updated after a successful authorization-code exchange or
	// refresh-token request.
	// 
	// The access token is presented to the protected API, commonly in an HTTP header:
	// 
	// Authorization: Bearer ACCESS_TOKEN
	// Bearer credential: Anyone possessing a bearer access token can use the authority
	// it grants until the token expires or is revoked. Store it securely, transmit it
	// only over TLS, and never place it in a URL or ordinary log.
	const wchar_t *accessToken(void);
	// Contains the access_token extracted from the most recent successful token
	// response. It is updated after a successful authorization-code exchange or
	// refresh-token request.
	// 
	// The access token is presented to the protected API, commonly in an HTTP header:
	// 
	// Authorization: Bearer ACCESS_TOKEN
	// Bearer credential: Anyone possessing a bearer access token can use the authority
	// it grants until the token expires or is revoked. Store it securely, transmit it
	// only over TLS, and never place it in a URL or ordinary log.
	void put_AccessToken(const wchar_t *newVal);

	// Contains the raw response body returned by the token endpoint after a successful
	// authorization-code exchange or refresh-token request.
	// 
	// Most providers return JSON similar to:
	// 
	// {
	//   "token_type": "Bearer",
	//   "expires_in": 3600,
	//   "access_token": "...",
	//   "scope": "read write",
	//   "refresh_token": "..."
	// }
	// 
	// +---------------+--------------------------------------------------------------+
	// |     Field     |                       Typical meaning                        |
	// +===============+==============================================================+
	// | access_token  | Credential presented to the protected API.                   |
	// +---------------+--------------------------------------------------------------+
	// | token_type    | Usually Bearer .                                             |
	// +---------------+--------------------------------------------------------------+
	// | expires_in    | Access-token lifetime in seconds, when supplied.             |
	// +---------------+--------------------------------------------------------------+
	// | scope         | Scopes actually granted, when supplied.                      |
	// +---------------+--------------------------------------------------------------+
	// | refresh_token | Credential used to request later access tokens, when issued. |
	// +---------------+--------------------------------------------------------------+
	// | id_token      | OpenID Connect identity token, when requested and issued.    |
	// +---------------+--------------------------------------------------------------+
	// 
	// Some providers return form-encoded text instead of JSON. Use
	// GetAccessTokenResponseSb[1] when a StringBuilder destination is preferred.
	// 
	// Sensitive response: This property can contain live credentials. Do not include
	// it in ordinary logs, exception reports, telemetry, or user-visible diagnostics.
	// 
	// References:
	// [1] #GetAccessTokenResponseSb
	void get_AccessTokenResponse(CkString &str);
	// Contains the raw response body returned by the token endpoint after a successful
	// authorization-code exchange or refresh-token request.
	// 
	// Most providers return JSON similar to:
	// 
	// {
	//   "token_type": "Bearer",
	//   "expires_in": 3600,
	//   "access_token": "...",
	//   "scope": "read write",
	//   "refresh_token": "..."
	// }
	// 
	// +---------------+--------------------------------------------------------------+
	// |     Field     |                       Typical meaning                        |
	// +===============+==============================================================+
	// | access_token  | Credential presented to the protected API.                   |
	// +---------------+--------------------------------------------------------------+
	// | token_type    | Usually Bearer .                                             |
	// +---------------+--------------------------------------------------------------+
	// | expires_in    | Access-token lifetime in seconds, when supplied.             |
	// +---------------+--------------------------------------------------------------+
	// | scope         | Scopes actually granted, when supplied.                      |
	// +---------------+--------------------------------------------------------------+
	// | refresh_token | Credential used to request later access tokens, when issued. |
	// +---------------+--------------------------------------------------------------+
	// | id_token      | OpenID Connect identity token, when requested and issued.    |
	// +---------------+--------------------------------------------------------------+
	// 
	// Some providers return form-encoded text instead of JSON. Use
	// GetAccessTokenResponseSb[1] when a StringBuilder destination is preferred.
	// 
	// Sensitive response: This property can contain live credentials. Do not include
	// it in ordinary logs, exception reports, telemetry, or user-visible diagnostics.
	// 
	// References:
	// [1] #GetAccessTokenResponseSb
	const wchar_t *accessTokenResponse(void);

	// Specifies a public HTTPS callback URL on an application-controlled web server
	// when the provider will not redirect directly to localhost or a loopback IP
	// address.
	// 
	// The intermediary endpoint receives the provider's redirect and forwards the
	// complete callback, including code, state, error, and any provider-specific
	// parameters, to the local listener used by Chilkat.
	// 
	// Security responsibility: The intermediary handles a short-lived authorization
	// code and state value. It must use HTTPS, avoid logging sensitive query data,
	// validate and preserve parameters correctly, and prevent use as an open redirect.
	// Use only when necessary: A direct loopback redirect with PKCE is simpler and
	// avoids introducing a public relay. Prefer it whenever the provider supports
	// native-application loopback redirects.
	void get_AppCallbackUrl(CkString &str);
	// Specifies a public HTTPS callback URL on an application-controlled web server
	// when the provider will not redirect directly to localhost or a loopback IP
	// address.
	// 
	// The intermediary endpoint receives the provider's redirect and forwards the
	// complete callback, including code, state, error, and any provider-specific
	// parameters, to the local listener used by Chilkat.
	// 
	// Security responsibility: The intermediary handles a short-lived authorization
	// code and state value. It must use HTTPS, avoid logging sensitive query data,
	// validate and preserve parameters correctly, and prevent use as an open redirect.
	// Use only when necessary: A direct loopback redirect with PKCE is simpler and
	// avoids introducing a public relay. Prefer it whenever the provider supports
	// native-application loopback redirects.
	const wchar_t *appCallbackUrl(void);
	// Specifies a public HTTPS callback URL on an application-controlled web server
	// when the provider will not redirect directly to localhost or a loopback IP
	// address.
	// 
	// The intermediary endpoint receives the provider's redirect and forwards the
	// complete callback, including code, state, error, and any provider-specific
	// parameters, to the local listener used by Chilkat.
	// 
	// Security responsibility: The intermediary handles a short-lived authorization
	// code and state value. It must use HTTPS, avoid logging sensitive query data,
	// validate and preserve parameters correctly, and prevent use as an open redirect.
	// Use only when necessary: A direct loopback redirect with PKCE is simpler and
	// avoids introducing a public relay. Prefer it whenever the provider supports
	// native-application loopback redirects.
	void put_AppCallbackUrl(const wchar_t *newVal);

	// Reports the current state of the background authorization flow.
	// 
	// +-------+----------------+-----------------------------------------------------+
	// | Value |     State      |                       Meaning                       |
	// +=======+================+=====================================================+
	// | 0     | Idle           | No authorization flow has been started.             |
	// +-------+----------------+-----------------------------------------------------+
	// | 1     | Waiting for    | The local listener is waiting for the browser       |
	// |       | redirect       | callback.                                           |
	// +-------+----------------+-----------------------------------------------------+
	// | 2     | Exchanging     | The redirect was received and the background thread |
	// |       | code           | is waiting for the token-endpoint response.         |
	// +-------+----------------+-----------------------------------------------------+
	// | 3     | Success        | The flow completed and token response properties    |
	// |       |                | are available.                                      |
	// +-------+----------------+-----------------------------------------------------+
	// | 4     | Denied         | The authorization server returned an access-denied  |
	// |       |                | response. Inspect AccessTokenResponse[1] .          |
	// +-------+----------------+-----------------------------------------------------+
	// | 5     | Failed         | The flow failed before successful completion.       |
	// |       |                | Inspect FailureInfo[2] and LastErrorText .          |
	// +-------+----------------+-----------------------------------------------------+
	// 
	// Polling pattern: After opening the authorization URL, periodically read this
	// property until it is 3, 4, or 5. Avoid a tight loop; sleep briefly or use the
	// host environment's timer mechanism.
	// 
	// References:
	// [1] #AccessTokenResponse
	// [2] #FailureInfo
	int get_AuthFlowState(void);

	// Specifies the authorization endpoint to which the user's browser is directed.
	// StartAuth[1] appends the client identifier, redirect URI, scope, state, PKCE
	// values, and other configured authorization parameters.
	// 
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// |  Provider  |                      Authorization endpoint                      |                        Token endpoint                        |
	// +============+==================================================================+==============================================================+
	// | Google     | https://accounts.google.com/o/oauth2/v2/auth                     | https://oauth2.googleapis.com/token                          |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | Microsoft  | https://login.microsoftonline.com/{tenant}/oauth2/v2.0/authorize | https://login.microsoftonline.com/{tenant}/oauth2/v2.0/token |
	// | identity   |                                                                  |                                                              |
	// | platform   |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | Salesforce | https://login.salesforce.com/services/oauth2/authorize           | https://login.salesforce.com/services/oauth2/token           |
	// | production |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | QuickBooks | https://appcenter.intuit.com/connect/oauth2                      | https://oauth.platform.intuit.com/oauth2/v1/tokens/bearer    |
	// | Online     |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | X API      | https://x.com/i/oauth2/authorize                                 | https://api.x.com/2/oauth2/token                             |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// 
	// Prefer provider metadata: When the provider publishes OAuth authorization-server
	// metadata or OpenID Connect discovery metadata, use its current
	// authorization_endpoint value rather than copying an endpoint from an old
	// example.
	// Environment and tenant matter: Sandbox, production, regional, and
	// tenant-specific deployments can use different endpoints. The authorization and
	// token endpoints must belong to the same provider environment.
	// 
	// References:
	// [1] #StartAuth
	void get_AuthorizationEndpoint(CkString &str);
	// Specifies the authorization endpoint to which the user's browser is directed.
	// StartAuth[1] appends the client identifier, redirect URI, scope, state, PKCE
	// values, and other configured authorization parameters.
	// 
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// |  Provider  |                      Authorization endpoint                      |                        Token endpoint                        |
	// +============+==================================================================+==============================================================+
	// | Google     | https://accounts.google.com/o/oauth2/v2/auth                     | https://oauth2.googleapis.com/token                          |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | Microsoft  | https://login.microsoftonline.com/{tenant}/oauth2/v2.0/authorize | https://login.microsoftonline.com/{tenant}/oauth2/v2.0/token |
	// | identity   |                                                                  |                                                              |
	// | platform   |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | Salesforce | https://login.salesforce.com/services/oauth2/authorize           | https://login.salesforce.com/services/oauth2/token           |
	// | production |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | QuickBooks | https://appcenter.intuit.com/connect/oauth2                      | https://oauth.platform.intuit.com/oauth2/v1/tokens/bearer    |
	// | Online     |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | X API      | https://x.com/i/oauth2/authorize                                 | https://api.x.com/2/oauth2/token                             |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// 
	// Prefer provider metadata: When the provider publishes OAuth authorization-server
	// metadata or OpenID Connect discovery metadata, use its current
	// authorization_endpoint value rather than copying an endpoint from an old
	// example.
	// Environment and tenant matter: Sandbox, production, regional, and
	// tenant-specific deployments can use different endpoints. The authorization and
	// token endpoints must belong to the same provider environment.
	// 
	// References:
	// [1] #StartAuth
	const wchar_t *authorizationEndpoint(void);
	// Specifies the authorization endpoint to which the user's browser is directed.
	// StartAuth[1] appends the client identifier, redirect URI, scope, state, PKCE
	// values, and other configured authorization parameters.
	// 
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// |  Provider  |                      Authorization endpoint                      |                        Token endpoint                        |
	// +============+==================================================================+==============================================================+
	// | Google     | https://accounts.google.com/o/oauth2/v2/auth                     | https://oauth2.googleapis.com/token                          |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | Microsoft  | https://login.microsoftonline.com/{tenant}/oauth2/v2.0/authorize | https://login.microsoftonline.com/{tenant}/oauth2/v2.0/token |
	// | identity   |                                                                  |                                                              |
	// | platform   |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | Salesforce | https://login.salesforce.com/services/oauth2/authorize           | https://login.salesforce.com/services/oauth2/token           |
	// | production |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | QuickBooks | https://appcenter.intuit.com/connect/oauth2                      | https://oauth.platform.intuit.com/oauth2/v1/tokens/bearer    |
	// | Online     |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | X API      | https://x.com/i/oauth2/authorize                                 | https://api.x.com/2/oauth2/token                             |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// 
	// Prefer provider metadata: When the provider publishes OAuth authorization-server
	// metadata or OpenID Connect discovery metadata, use its current
	// authorization_endpoint value rather than copying an endpoint from an old
	// example.
	// Environment and tenant matter: Sandbox, production, regional, and
	// tenant-specific deployments can use different endpoints. The authorization and
	// token endpoints must belong to the same provider environment.
	// 
	// References:
	// [1] #StartAuth
	void put_AuthorizationEndpoint(const wchar_t *newVal);

	// Specifies the client identifier assigned when the application is registered with
	// the authorization server. It identifies the application in authorization and
	// token requests.
	// 
	// Not a password: A client ID is normally public and may appear in authorization
	// URLs. Its security role is identification, not authentication.
	void get_ClientId(CkString &str);
	// Specifies the client identifier assigned when the application is registered with
	// the authorization server. It identifies the application in authorization and
	// token requests.
	// 
	// Not a password: A client ID is normally public and may appear in authorization
	// URLs. Its security role is identification, not authentication.
	const wchar_t *clientId(void);
	// Specifies the client identifier assigned when the application is registered with
	// the authorization server. It identifies the application in authorization and
	// token requests.
	// 
	// Not a password: A client ID is normally public and may appear in authorization
	// URLs. Its security role is identification, not authentication.
	void put_ClientId(const wchar_t *newVal);

	// Specifies the client secret assigned to a confidential client by the
	// authorization server. It is used when the provider requires the client to
	// authenticate at the token endpoint.
	// 
	// Protect this value: A client secret is a credential. Do not place it in source
	// control, logs, browser URLs, or distributable desktop/mobile binaries. Native
	// applications are public clients and generally cannot keep a shared secret
	// confidential; use PKCE and follow the provider's registration requirements.
	// PKCE is separate: PKCE protects the authorization code. It does not transform an
	// embedded secret into a confidential credential and does not replace client
	// authentication for a provider that requires it.
	void get_ClientSecret(CkString &str);
	// Specifies the client secret assigned to a confidential client by the
	// authorization server. It is used when the provider requires the client to
	// authenticate at the token endpoint.
	// 
	// Protect this value: A client secret is a credential. Do not place it in source
	// control, logs, browser URLs, or distributable desktop/mobile binaries. Native
	// applications are public clients and generally cannot keep a shared secret
	// confidential; use PKCE and follow the provider's registration requirements.
	// PKCE is separate: PKCE protects the authorization code. It does not transform an
	// embedded secret into a confidential credential and does not replace client
	// authentication for a provider that requires it.
	const wchar_t *clientSecret(void);
	// Specifies the client secret assigned to a confidential client by the
	// authorization server. It is used when the provider requires the client to
	// authenticate at the token endpoint.
	// 
	// Protect this value: A client secret is a credential. Do not place it in source
	// control, logs, browser URLs, or distributable desktop/mobile binaries. Native
	// applications are public clients and generally cannot keep a shared secret
	// confidential; use PKCE and follow the provider's registration requirements.
	// PKCE is separate: PKCE protects the authorization code. It does not transform an
	// embedded secret into a confidential credential and does not replace client
	// authentication for a provider that requires it.
	void put_ClientSecret(const wchar_t *newVal);

	// Set to true to enable Proof Key for Code Exchange (PKCE) for the
	// authorization-code flow. The default is false.
	// 
	// When enabled, Chilkat generates a high-entropy code verifier, sends its
	// transformed challenge in the authorization request, and sends the original
	// verifier during the token exchange.
	// 
	// Recommended for native applications: PKCE binds the authorization code to the
	// application instance that initiated the flow, reducing the risk that an
	// intercepted code can be redeemed by another client. Current OAuth security
	// guidance requires PKCE for public clients and recommends it broadly.
	bool get_CodeChallenge(void);
	// Set to true to enable Proof Key for Code Exchange (PKCE) for the
	// authorization-code flow. The default is false.
	// 
	// When enabled, Chilkat generates a high-entropy code verifier, sends its
	// transformed challenge in the authorization request, and sends the original
	// verifier during the token exchange.
	// 
	// Recommended for native applications: PKCE binds the authorization code to the
	// application instance that initiated the flow, reducing the risk that an
	// intercepted code can be redeemed by another client. Current OAuth security
	// guidance requires PKCE for public clients and recommends it broadly.
	void put_CodeChallenge(bool newVal);

	// Selects the PKCE transformation used when CodeChallenge[1] is true.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                               Behavior                               |
	// +=======+======================================================================+
	// | S256  | Sends a Base64URL-encoded SHA-256 digest of the code verifier. This  |
	// |       | is the default and recommended method.                               |
	// +-------+----------------------------------------------------------------------+
	// | plain | Sends the code verifier itself as the challenge. Use only for        |
	// |       | compatibility with a provider that cannot support S256 .             |
	// +-------+----------------------------------------------------------------------+
	// 
	// Avoid downgrading: If a provider rejects S256, do not automatically retry with
	// plain unless the provider is known and explicitly requires it.
	// 
	// References:
	// [1] #CodeChallenge
	void get_CodeChallengeMethod(CkString &str);
	// Selects the PKCE transformation used when CodeChallenge[1] is true.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                               Behavior                               |
	// +=======+======================================================================+
	// | S256  | Sends a Base64URL-encoded SHA-256 digest of the code verifier. This  |
	// |       | is the default and recommended method.                               |
	// +-------+----------------------------------------------------------------------+
	// | plain | Sends the code verifier itself as the challenge. Use only for        |
	// |       | compatibility with a provider that cannot support S256 .             |
	// +-------+----------------------------------------------------------------------+
	// 
	// Avoid downgrading: If a provider rejects S256, do not automatically retry with
	// plain unless the provider is known and explicitly requires it.
	// 
	// References:
	// [1] #CodeChallenge
	const wchar_t *codeChallengeMethod(void);
	// Selects the PKCE transformation used when CodeChallenge[1] is true.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                               Behavior                               |
	// +=======+======================================================================+
	// | S256  | Sends a Base64URL-encoded SHA-256 digest of the code verifier. This  |
	// |       | is the default and recommended method.                               |
	// +-------+----------------------------------------------------------------------+
	// | plain | Sends the code verifier itself as the challenge. Use only for        |
	// |       | compatibility with a provider that cannot support S256 .             |
	// +-------+----------------------------------------------------------------------+
	// 
	// Avoid downgrading: If a provider rejects S256, do not automatically retry with
	// plain unless the provider is known and explicitly requires it.
	// 
	// References:
	// [1] #CodeChallenge
	void put_CodeChallengeMethod(const wchar_t *newVal);

	// Controls automatic resolution of selected values from operating-system secure
	// storage. The default is false.
	// 
	// When true, the following properties may contain a secret specification
	// beginning with!! instead of a literal value:
	// 
	//     * AuthorizationEndpoint[1]
	//     * TokenEndpoint[2]
	//     * ClientId[3]
	//     * ClientSecret[4]
	// 
	// The specification has the form:
	// 
	// !![appName|]service[|domain]|username
	// 
	// Chilkat resolves the value through Windows Credential Manager on Windows or
	// Apple Keychain on macOS.
	// 
	// Purpose: Secret specifications allow deployment-specific values to remain
	// outside source code and configuration files. Although endpoints and client IDs
	// are not normally secret, resolving them the same way can centralize application
	// configuration.
	// Platform availability: This feature depends on supported operating-system
	// credential storage. Ensure the named credential exists and that the process
	// identity has permission to read it.
	// 
	// References:
	// [1] #AuthorizationEndpoint
	// [2] #TokenEndpoint
	// [3] #ClientId
	// [4] #ClientSecret
	bool get_EnableSecrets(void);
	// Controls automatic resolution of selected values from operating-system secure
	// storage. The default is false.
	// 
	// When true, the following properties may contain a secret specification
	// beginning with!! instead of a literal value:
	// 
	//     * AuthorizationEndpoint[1]
	//     * TokenEndpoint[2]
	//     * ClientId[3]
	//     * ClientSecret[4]
	// 
	// The specification has the form:
	// 
	// !![appName|]service[|domain]|username
	// 
	// Chilkat resolves the value through Windows Credential Manager on Windows or
	// Apple Keychain on macOS.
	// 
	// Purpose: Secret specifications allow deployment-specific values to remain
	// outside source code and configuration files. Although endpoints and client IDs
	// are not normally secret, resolving them the same way can centralize application
	// configuration.
	// Platform availability: This feature depends on supported operating-system
	// credential storage. Ensure the named credential exists and that the process
	// identity has permission to read it.
	// 
	// References:
	// [1] #AuthorizationEndpoint
	// [2] #TokenEndpoint
	// [3] #ClientId
	// [4] #ClientSecret
	void put_EnableSecrets(bool newVal);

	// Contains diagnostic information when AuthFlowState[1] is 5. The value is cleared
	// when StartAuth[2] begins a new flow.
	// 
	// Use this property for failures in the listener, redirect processing, network
	// connection, or token exchange. Provider-declared authorization denial is
	// represented by state 4 and is normally available in AccessTokenResponse[3].
	// 
	// Review before logging: Diagnostics can include URLs, response bodies, or request
	// details. Remove authorization codes, tokens, client credentials, and personal
	// information before storing or transmitting logs.
	// 
	// References:
	// [1] #AuthFlowState
	// [2] #StartAuth
	// [3] #AccessTokenResponse
	void get_FailureInfo(CkString &str);
	// Contains diagnostic information when AuthFlowState[1] is 5. The value is cleared
	// when StartAuth[2] begins a new flow.
	// 
	// Use this property for failures in the listener, redirect processing, network
	// connection, or token exchange. Provider-declared authorization denial is
	// represented by state 4 and is normally available in AccessTokenResponse[3].
	// 
	// Review before logging: Diagnostics can include URLs, response bodies, or request
	// details. Remove authorization codes, tokens, client credentials, and personal
	// information before storing or transmitting logs.
	// 
	// References:
	// [1] #AuthFlowState
	// [2] #StartAuth
	// [3] #AccessTokenResponse
	const wchar_t *failureInfo(void);

	// Set to true to include an OpenID Connect nonce parameter in the authorization
	// request. The nonce is generated by Chilkat using the byte length specified by
	// NonceLength[1]. The default is false.
	// 
	// In OpenID Connect, the authorization server includes the nonce in the ID token
	// so the client can associate that token with the authorization request and detect
	// replay or token-substitution problems.
	// 
	// Nonce versus state: nonce protects the relationship between an OpenID Connect
	// request and its ID token. OAuth state correlates the browser callback with the
	// initiating request and is used for CSRF protection. They are related security
	// controls but are not interchangeable.
	// 
	// References:
	// [1] #NonceLength
	bool get_IncludeNonce(void);
	// Set to true to include an OpenID Connect nonce parameter in the authorization
	// request. The nonce is generated by Chilkat using the byte length specified by
	// NonceLength[1]. The default is false.
	// 
	// In OpenID Connect, the authorization server includes the nonce in the ID token
	// so the client can associate that token with the authorization request and detect
	// replay or token-substitution problems.
	// 
	// Nonce versus state: nonce protects the relationship between an OpenID Connect
	// request and its ID token. OAuth state correlates the browser callback with the
	// initiating request and is used for CSRF protection. They are related security
	// controls but are not interchangeable.
	// 
	// References:
	// [1] #NonceLength
	void put_IncludeNonce(bool newVal);

	// Specifies the local TCP port on which Chilkat listens for the browser's OAuth
	// redirect. Choose an available nonprivileged port, typically between 1024 and
	// 65535.
	// 
	// The redirect URI registered with the provider must match the host, selected
	// port, and terminating slash generated by this object. For example:
	// 
	// http://127.0.0.1:3017/
	//     * Use http for a loopback redirect handled entirely on the local computer.
	//     * Use LocalHost[1] to select localhost or 127.0.0.1.
	//     * Include the final / when registering the redirect URI.
	// Provider registration must match: Authorization servers differ in their support
	// for loopback ports and redirect-URI matching. Register the exact form required
	// by the provider. The IPv4 loopback literal 127.0.0.1 is generally more
	// predictable than resolving localhost.
	// 
	// References:
	// [1] #LocalHost
	int get_ListenPort(void);
	// Specifies the local TCP port on which Chilkat listens for the browser's OAuth
	// redirect. Choose an available nonprivileged port, typically between 1024 and
	// 65535.
	// 
	// The redirect URI registered with the provider must match the host, selected
	// port, and terminating slash generated by this object. For example:
	// 
	// http://127.0.0.1:3017/
	//     * Use http for a loopback redirect handled entirely on the local computer.
	//     * Use LocalHost[1] to select localhost or 127.0.0.1.
	//     * Include the final / when registering the redirect URI.
	// Provider registration must match: Authorization servers differ in their support
	// for loopback ports and redirect-URI matching. Register the exact form required
	// by the provider. The IPv4 loopback literal 127.0.0.1 is generally more
	// predictable than resolving localhost.
	// 
	// References:
	// [1] #LocalHost
	void put_ListenPort(int newVal);

	// Defines the inclusive end of a local-listener port range that begins with
	// ListenPort[1]. The default value of 0 disables range selection and uses only
	// ListenPort.
	// 
	// When nonzero, Chilkat selects an available port in the inclusive range. For
	// example, ListenPort=55110 and ListenPortRangeEnd=55117 permit ports 55110
	// through 55117.
	// 
	// Redirect registration: The provider must accept the selected redirect URI. If it
	// requires every exact port to be pre-registered, register each port in the range.
	// If the provider supports the native-app loopback convention with a variable
	// port, follow its documented registration form.
	// 
	// Read ListenPortSelected[2] to determine which port was used.
	// 
	// 
	// References:
	// [1] #ListenPort
	// [2] #ListenPortSelected
	int get_ListenPortRangeEnd(void);
	// Defines the inclusive end of a local-listener port range that begins with
	// ListenPort[1]. The default value of 0 disables range selection and uses only
	// ListenPort.
	// 
	// When nonzero, Chilkat selects an available port in the inclusive range. For
	// example, ListenPort=55110 and ListenPortRangeEnd=55117 permit ports 55110
	// through 55117.
	// 
	// Redirect registration: The provider must accept the selected redirect URI. If it
	// requires every exact port to be pre-registered, register each port in the range.
	// If the provider supports the native-app loopback convention with a variable
	// port, follow its documented registration form.
	// 
	// Read ListenPortSelected[2] to determine which port was used.
	// 
	// 
	// References:
	// [1] #ListenPort
	// [2] #ListenPortSelected
	void put_ListenPortRangeEnd(int newVal);

	// Returns the local port selected for the current or most recently completed
	// authorization flow.
	// 
	// When a range is configured with ListenPortRangeEnd[1], use this value to
	// determine the actual loopback redirect port. It is also available for the
	// {listenPort} substitution supported by StateParam[2].
	// 
	// 
	// References:
	// [1] #ListenPortRangeEnd
	// [2] #StateParam
	int get_ListenPortSelected(void);

	// Selects the host name used in the loopback redirect URI:
	// 
	// +-----------+--------------------------+
	// |   Value   |      Redirect form       |
	// +===========+==========================+
	// | localhost | http://localhost:{port}/ |
	// +-----------+--------------------------+
	// | 127.0.0.1 | http://127.0.0.1:{port}/ |
	// +-----------+--------------------------+
	// 
	// The default is localhost. The value must match the redirect URI registered with
	// the provider.
	// 
	// Loopback recommendation: 127.0.0.1 avoids DNS and hosts-file ambiguity and is
	// generally preferable when the provider accepts an IPv4 loopback-literal
	// redirect.
	void get_LocalHost(CkString &str);
	// Selects the host name used in the loopback redirect URI:
	// 
	// +-----------+--------------------------+
	// |   Value   |      Redirect form       |
	// +===========+==========================+
	// | localhost | http://localhost:{port}/ |
	// +-----------+--------------------------+
	// | 127.0.0.1 | http://127.0.0.1:{port}/ |
	// +-----------+--------------------------+
	// 
	// The default is localhost. The value must match the redirect URI registered with
	// the provider.
	// 
	// Loopback recommendation: 127.0.0.1 avoids DNS and hosts-file ambiguity and is
	// generally preferable when the provider accepts an IPv4 loopback-literal
	// redirect.
	const wchar_t *localHost(void);
	// Selects the host name used in the loopback redirect URI:
	// 
	// +-----------+--------------------------+
	// |   Value   |      Redirect form       |
	// +===========+==========================+
	// | localhost | http://localhost:{port}/ |
	// +-----------+--------------------------+
	// | 127.0.0.1 | http://127.0.0.1:{port}/ |
	// +-----------+--------------------------+
	// 
	// The default is localhost. The value must match the redirect URI registered with
	// the provider.
	// 
	// Loopback recommendation: 127.0.0.1 avoids DNS and hosts-file ambiguity and is
	// generally preferable when the provider accepts an IPv4 loopback-literal
	// redirect.
	void put_LocalHost(const wchar_t *newVal);

	// Specifies the number of random bytes used to generate the hexadecimal OpenID
	// Connect nonce when IncludeNonce[1] is true. The resulting string contains two
	// hexadecimal characters per byte.
	// 
	// The default is 4 bytes, which produces an 8-character hexadecimal nonce.
	// 
	// Entropy matters: For security-sensitive OpenID Connect use, consider a
	// substantially larger nonce, such as 16 bytes or more, unless the provider
	// imposes a different requirement.
	// 
	// References:
	// [1] #IncludeNonce
	int get_NonceLength(void);
	// Specifies the number of random bytes used to generate the hexadecimal OpenID
	// Connect nonce when IncludeNonce[1] is true. The resulting string contains two
	// hexadecimal characters per byte.
	// 
	// The default is 4 bytes, which produces an 8-character hexadecimal nonce.
	// 
	// Entropy matters: For security-sensitive OpenID Connect use, consider a
	// substantially larger nonce, such as 16 bytes or more, unless the provider
	// imposes a different requirement.
	// 
	// References:
	// [1] #IncludeNonce
	void put_NonceLength(int newVal);

	// Set to true to use the legacy out-of-band redirect URI
	// urn:ietf:wg:oauth:2.0:oob. The application must obtain the displayed
	// authorization code and pass it to ExchangeCodeForToken[1]. The default is
	// false.
	// 
	// Legacy and often unsupported: OOB authorization exposes a code for manual
	// copy/paste and is no longer accepted by many providers. For desktop
	// applications, use a loopback redirect with PKCE whenever possible.
	// 
	// References:
	// [1] #ExchangeCodeForToken
	bool get_Oob(void);
	// Set to true to use the legacy out-of-band redirect URI
	// urn:ietf:wg:oauth:2.0:oob. The application must obtain the displayed
	// authorization code and pass it to ExchangeCodeForToken[1]. The default is
	// false.
	// 
	// Legacy and often unsupported: OOB authorization exposes a code for manual
	// copy/paste and is no longer accepted by many providers. For desktop
	// applications, use a loopback redirect with PKCE whenever possible.
	// 
	// References:
	// [1] #ExchangeCodeForToken
	void put_Oob(bool newVal);

	// Gets or sets the HTML response sent by Chilkat's local listener to the browser
	// after authorization is granted and the redirect is accepted.
	// 
	// The default HTML immediately redirects the browser to Chilkat's confirmation
	// page:
	// 
	// <html>
	//   <head><meta http-equiv='refresh'
	//     content='0;url=https://www.chilkatsoft.com/oauth2_allowed.html'></head>
	//   <body>Thank you for allowing access.</body>
	// </html>
	// 
	// Replace this value to display application-specific instructions or redirect to a
	// page operated by your organization.
	// 
	// Do not expose credentials: The HTML is shown in a browser. Do not insert the
	// authorization code, access token, refresh token, client secret, or raw callback
	// URL into this page.
	void get_RedirectAllowHtml(CkString &str);
	// Gets or sets the HTML response sent by Chilkat's local listener to the browser
	// after authorization is granted and the redirect is accepted.
	// 
	// The default HTML immediately redirects the browser to Chilkat's confirmation
	// page:
	// 
	// <html>
	//   <head><meta http-equiv='refresh'
	//     content='0;url=https://www.chilkatsoft.com/oauth2_allowed.html'></head>
	//   <body>Thank you for allowing access.</body>
	// </html>
	// 
	// Replace this value to display application-specific instructions or redirect to a
	// page operated by your organization.
	// 
	// Do not expose credentials: The HTML is shown in a browser. Do not insert the
	// authorization code, access token, refresh token, client secret, or raw callback
	// URL into this page.
	const wchar_t *redirectAllowHtml(void);
	// Gets or sets the HTML response sent by Chilkat's local listener to the browser
	// after authorization is granted and the redirect is accepted.
	// 
	// The default HTML immediately redirects the browser to Chilkat's confirmation
	// page:
	// 
	// <html>
	//   <head><meta http-equiv='refresh'
	//     content='0;url=https://www.chilkatsoft.com/oauth2_allowed.html'></head>
	//   <body>Thank you for allowing access.</body>
	// </html>
	// 
	// Replace this value to display application-specific instructions or redirect to a
	// page operated by your organization.
	// 
	// Do not expose credentials: The HTML is shown in a browser. Do not insert the
	// authorization code, access token, refresh token, client secret, or raw callback
	// URL into this page.
	void put_RedirectAllowHtml(const wchar_t *newVal);

	// Gets or sets the HTML response sent by Chilkat's local listener to the browser
	// when the authorization server reports that access was denied.
	// 
	// The default HTML immediately redirects the browser to Chilkat's denial page:
	// 
	// <html>
	//   <head><meta http-equiv='refresh'
	//     content='0;url=https://www.chilkatsoft.com/oauth2_denied.html'></head>
	//   <body>The app will not have access.</body>
	// </html>
	// 
	// Replace this value to display application-specific instructions or redirect to a
	// page operated by your organization.
	// 
	// Denial is not a transport failure: User denial is represented by
	// AuthFlowState[1] value 4. It should normally be handled as a completed flow in
	// which consent was not granted.
	// 
	// References:
	// [1] #AuthFlowState
	void get_RedirectDenyHtml(CkString &str);
	// Gets or sets the HTML response sent by Chilkat's local listener to the browser
	// when the authorization server reports that access was denied.
	// 
	// The default HTML immediately redirects the browser to Chilkat's denial page:
	// 
	// <html>
	//   <head><meta http-equiv='refresh'
	//     content='0;url=https://www.chilkatsoft.com/oauth2_denied.html'></head>
	//   <body>The app will not have access.</body>
	// </html>
	// 
	// Replace this value to display application-specific instructions or redirect to a
	// page operated by your organization.
	// 
	// Denial is not a transport failure: User denial is represented by
	// AuthFlowState[1] value 4. It should normally be handled as a completed flow in
	// which consent was not granted.
	// 
	// References:
	// [1] #AuthFlowState
	const wchar_t *redirectDenyHtml(void);
	// Gets or sets the HTML response sent by Chilkat's local listener to the browser
	// when the authorization server reports that access was denied.
	// 
	// The default HTML immediately redirects the browser to Chilkat's denial page:
	// 
	// <html>
	//   <head><meta http-equiv='refresh'
	//     content='0;url=https://www.chilkatsoft.com/oauth2_denied.html'></head>
	//   <body>The app will not have access.</body>
	// </html>
	// 
	// Replace this value to display application-specific instructions or redirect to a
	// page operated by your organization.
	// 
	// Denial is not a transport failure: User denial is represented by
	// AuthFlowState[1] value 4. It should normally be handled as a completed flow in
	// which consent was not granted.
	// 
	// References:
	// [1] #AuthFlowState
	void put_RedirectDenyHtml(const wchar_t *newVal);

	// Contains the raw HTTP request received from the browser by Chilkat's local
	// redirect listener. It is intended for troubleshooting callback and
	// provider-parameter problems.
	// 
	// GET /?state=...&code=... HTTP/1.1
	// Host: 127.0.0.1:3017
	// User-Agent: ...
	// Accept: text/html,...
	// 
	// The value can include the request target, query or form parameters, and
	// browser-supplied headers.
	// 
	// Highly sensitive diagnostic data: The request can contain an authorization code,
	// state value, provider identifiers, and browser metadata. Do not record it in
	// production logs without careful redaction.
	void get_RedirectReqReceived(CkString &str);
	// Contains the raw HTTP request received from the browser by Chilkat's local
	// redirect listener. It is intended for troubleshooting callback and
	// provider-parameter problems.
	// 
	// GET /?state=...&code=... HTTP/1.1
	// Host: 127.0.0.1:3017
	// User-Agent: ...
	// Accept: text/html,...
	// 
	// The value can include the request target, query or form parameters, and
	// browser-supplied headers.
	// 
	// Highly sensitive diagnostic data: The request can contain an authorization code,
	// state value, provider identifiers, and browser metadata. Do not record it in
	// production logs without careful redaction.
	const wchar_t *redirectReqReceived(void);

	// Gets or sets the refresh token used to obtain new access tokens. Chilkat
	// populates this property when the token endpoint issues a refresh_token, and
	// RefreshAccessToken[1] reads it when creating a refresh request.
	// 
	// A provider may omit the refresh token unless an offline-access scope or
	// provider-specific authorization parameter was requested. A refresh response may
	// also return a replacement token.
	// 
	// Long-lived credential: Refresh tokens commonly outlive access tokens and can be
	// used without user interaction. Protect them at least as carefully as passwords,
	// persist replacements after rotation, and delete them when authorization is
	// revoked.
	// 
	// References:
	// [1] #RefreshAccessToken
	void get_RefreshToken(CkString &str);
	// Gets or sets the refresh token used to obtain new access tokens. Chilkat
	// populates this property when the token endpoint issues a refresh_token, and
	// RefreshAccessToken[1] reads it when creating a refresh request.
	// 
	// A provider may omit the refresh token unless an offline-access scope or
	// provider-specific authorization parameter was requested. A refresh response may
	// also return a replacement token.
	// 
	// Long-lived credential: Refresh tokens commonly outlive access tokens and can be
	// used without user interaction. Protect them at least as carefully as passwords,
	// persist replacements after rotation, and delete them when authorization is
	// revoked.
	// 
	// References:
	// [1] #RefreshAccessToken
	const wchar_t *refreshToken(void);
	// Gets or sets the refresh token used to obtain new access tokens. Chilkat
	// populates this property when the token endpoint issues a refresh_token, and
	// RefreshAccessToken[1] reads it when creating a refresh request.
	// 
	// A provider may omit the refresh token unless an offline-access scope or
	// provider-specific authorization parameter was requested. A refresh response may
	// also return a replacement token.
	// 
	// Long-lived credential: Refresh tokens commonly outlive access tokens and can be
	// used without user interaction. Protect them at least as carefully as passwords,
	// persist replacements after rotation, and delete them when authorization is
	// revoked.
	// 
	// References:
	// [1] #RefreshAccessToken
	void put_RefreshToken(const wchar_t *newVal);

	// Specifies an optional provider-defined resource parameter identifying the API or
	// audience for which a token is requested.
	// 
	// This is used by some OAuth deployments, including older Microsoft identity
	// endpoints and certain Dynamics configurations. Modern Microsoft v2 endpoints
	// generally identify the target API through scope values instead.
	// 
	// Not a universal OAuth parameter: Set this property only when the authorization
	// server documents a required resource value. Do not assume that an API base URL
	// is always the correct value.
	void get_Resource(CkString &str);
	// Specifies an optional provider-defined resource parameter identifying the API or
	// audience for which a token is requested.
	// 
	// This is used by some OAuth deployments, including older Microsoft identity
	// endpoints and certain Dynamics configurations. Modern Microsoft v2 endpoints
	// generally identify the target API through scope values instead.
	// 
	// Not a universal OAuth parameter: Set this property only when the authorization
	// server documents a required resource value. Do not assume that an API base URL
	// is always the correct value.
	const wchar_t *resource(void);
	// Specifies an optional provider-defined resource parameter identifying the API or
	// audience for which a token is requested.
	// 
	// This is used by some OAuth deployments, including older Microsoft identity
	// endpoints and certain Dynamics configurations. Modern Microsoft v2 endpoints
	// generally identify the target API through scope values instead.
	// 
	// Not a universal OAuth parameter: Set this property only when the authorization
	// server documents a required resource value. Do not assume that an API base URL
	// is always the correct value.
	void put_Resource(const wchar_t *newVal);

	// Specifies the response mode requested from an OpenID Connect or
	// provider-specific authorization endpoint.
	// 
	// Set to form_post to add response_mode=form_post, causing the authorization
	// server to return parameters in an auto-submitted HTML form that sends an HTTP
	// POST to the redirect URI. The default is an empty string, which omits the
	// parameter and lets the provider choose its normal mode.
	// 
	// Provider support required: Use only a response mode supported by the provider
	// and compatible with Chilkat's local listener or intermediary callback.
	void get_ResponseMode(CkString &str);
	// Specifies the response mode requested from an OpenID Connect or
	// provider-specific authorization endpoint.
	// 
	// Set to form_post to add response_mode=form_post, causing the authorization
	// server to return parameters in an auto-submitted HTML form that sends an HTTP
	// POST to the redirect URI. The default is an empty string, which omits the
	// parameter and lets the provider choose its normal mode.
	// 
	// Provider support required: Use only a response mode supported by the provider
	// and compatible with Chilkat's local listener or intermediary callback.
	const wchar_t *responseMode(void);
	// Specifies the response mode requested from an OpenID Connect or
	// provider-specific authorization endpoint.
	// 
	// Set to form_post to add response_mode=form_post, causing the authorization
	// server to return parameters in an auto-submitted HTML form that sends an HTTP
	// POST to the redirect URI. The default is an empty string, which omits the
	// parameter and lets the provider choose its normal mode.
	// 
	// Provider support required: Use only a response mode supported by the provider
	// and compatible with Chilkat's local listener or intermediary callback.
	void put_ResponseMode(const wchar_t *newVal);

	// Specifies the authorization response type. The default is code, which requests
	// an authorization code.
	// 
	// Set to id_token+code when a provider requires the OpenID Connect hybrid response
	// response_type=id_token code; the plus sign is the URL-encoded representation of
	// a SPACE in the query string.
	// 
	// Prefer the code flow unless required otherwise: Hybrid responses add an ID token
	// to the browser-facing authorization response and require correct OpenID Connect
	// validation, including issuer, audience, signature, expiration, and nonce checks.
	void get_ResponseType(CkString &str);
	// Specifies the authorization response type. The default is code, which requests
	// an authorization code.
	// 
	// Set to id_token+code when a provider requires the OpenID Connect hybrid response
	// response_type=id_token code; the plus sign is the URL-encoded representation of
	// a SPACE in the query string.
	// 
	// Prefer the code flow unless required otherwise: Hybrid responses add an ID token
	// to the browser-facing authorization response and require correct OpenID Connect
	// validation, including issuer, audience, signature, expiration, and nonce checks.
	const wchar_t *responseType(void);
	// Specifies the authorization response type. The default is code, which requests
	// an authorization code.
	// 
	// Set to id_token+code when a provider requires the OpenID Connect hybrid response
	// response_type=id_token code; the plus sign is the URL-encoded representation of
	// a SPACE in the query string.
	// 
	// Prefer the code flow unless required otherwise: Hybrid responses add an ID token
	// to the browser-facing authorization response and require correct OpenID Connect
	// validation, including issuer, audience, signature, expiration, and nonce checks.
	void put_ResponseType(const wchar_t *newVal);

	// Specifies the access scopes requested from the authorization server. A scope is
	// a provider-defined permission or capability associated with the resulting access
	// token.
	// 
	// OAuth scope values are commonly separated by a single SPACE character:
	// 
	// openid email profile https://www.googleapis.com/auth/drive.readonly
	//     * openid requests OpenID Connect processing and an ID token when used with
	//     an appropriate response type.
	//     * email and profile request standard OpenID Connect claims.
	//     * The Google Drive URI requests read-only access to Drive files.
	// Provider-defined and consented: Scope names, separators, defaults, and
	// offline-access requirements vary by provider. Request the minimum permissions
	// needed and verify the granted scope returned in the token response.
	void get_Scope(CkString &str);
	// Specifies the access scopes requested from the authorization server. A scope is
	// a provider-defined permission or capability associated with the resulting access
	// token.
	// 
	// OAuth scope values are commonly separated by a single SPACE character:
	// 
	// openid email profile https://www.googleapis.com/auth/drive.readonly
	//     * openid requests OpenID Connect processing and an ID token when used with
	//     an appropriate response type.
	//     * email and profile request standard OpenID Connect claims.
	//     * The Google Drive URI requests read-only access to Drive files.
	// Provider-defined and consented: Scope names, separators, defaults, and
	// offline-access requirements vary by provider. Request the minimum permissions
	// needed and verify the granted scope returned in the token response.
	const wchar_t *scope(void);
	// Specifies the access scopes requested from the authorization server. A scope is
	// a provider-defined permission or capability associated with the resulting access
	// token.
	// 
	// OAuth scope values are commonly separated by a single SPACE character:
	// 
	// openid email profile https://www.googleapis.com/auth/drive.readonly
	//     * openid requests OpenID Connect processing and an ID token when used with
	//     an appropriate response type.
	//     * email and profile request standard OpenID Connect claims.
	//     * The Google Drive URI requests read-only access to Drive files.
	// Provider-defined and consented: Scope names, separators, defaults, and
	// offline-access requirements vary by provider. Request the minimum permissions
	// needed and verify the granted scope returned in the token response.
	void put_Scope(const wchar_t *newVal);

	// Allows the application to supply an explicit OAuth state value. Normally this
	// property should remain empty so Chilkat generates a cryptographically random
	// state value and validates the returned value automatically.
	// 
	// The automatically generated state is intentionally not exposed through this
	// property.
	// 
	// The special token {listenPort} may appear in an explicitly supplied value.
	// Chilkat replaces it with the actual listener port selected for the flow.
	// 
	// Do not weaken state: State correlates the redirect with the initiating browser
	// flow and helps prevent CSRF and authorization-response injection. If supplying
	// your own value, make it unpredictable, unique per flow, and free of secrets or
	// sensitive application data.
	void get_StateParam(CkString &str);
	// Allows the application to supply an explicit OAuth state value. Normally this
	// property should remain empty so Chilkat generates a cryptographically random
	// state value and validates the returned value automatically.
	// 
	// The automatically generated state is intentionally not exposed through this
	// property.
	// 
	// The special token {listenPort} may appear in an explicitly supplied value.
	// Chilkat replaces it with the actual listener port selected for the flow.
	// 
	// Do not weaken state: State correlates the redirect with the initiating browser
	// flow and helps prevent CSRF and authorization-response injection. If supplying
	// your own value, make it unpredictable, unique per flow, and free of secrets or
	// sensitive application data.
	const wchar_t *stateParam(void);
	// Allows the application to supply an explicit OAuth state value. Normally this
	// property should remain empty so Chilkat generates a cryptographically random
	// state value and validates the returned value automatically.
	// 
	// The automatically generated state is intentionally not exposed through this
	// property.
	// 
	// The special token {listenPort} may appear in an explicitly supplied value.
	// Chilkat replaces it with the actual listener port selected for the flow.
	// 
	// Do not weaken state: State correlates the redirect with the initiating browser
	// flow and helps prevent CSRF and authorization-response injection. If supplying
	// your own value, make it unpredictable, unique per flow, and free of secrets or
	// sensitive application data.
	void put_StateParam(const wchar_t *newVal);

	// Specifies the provider's token endpoint. Chilkat sends authorization-code and
	// refresh-token requests to this URL over TLS.
	// 
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// |  Provider  |                      Authorization endpoint                      |                        Token endpoint                        |
	// +============+==================================================================+==============================================================+
	// | Google     | https://accounts.google.com/o/oauth2/v2/auth                     | https://oauth2.googleapis.com/token                          |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | Microsoft  | https://login.microsoftonline.com/{tenant}/oauth2/v2.0/authorize | https://login.microsoftonline.com/{tenant}/oauth2/v2.0/token |
	// | identity   |                                                                  |                                                              |
	// | platform   |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | Salesforce | https://login.salesforce.com/services/oauth2/authorize           | https://login.salesforce.com/services/oauth2/token           |
	// | production |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | QuickBooks | https://appcenter.intuit.com/connect/oauth2                      | https://oauth.platform.intuit.com/oauth2/v1/tokens/bearer    |
	// | Online     |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | X API      | https://x.com/i/oauth2/authorize                                 | https://api.x.com/2/oauth2/token                             |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// 
	// Back-channel endpoint: Unlike the authorization endpoint, the token endpoint is
	// contacted directly by the application, not opened in the user's browser.
	// Use the provider's current HTTPS endpoint: Endpoint locations can change. Prefer
	// the value published in the provider's OAuth or OpenID Connect metadata, and do
	// not mix sandbox and production endpoints.
	void get_TokenEndpoint(CkString &str);
	// Specifies the provider's token endpoint. Chilkat sends authorization-code and
	// refresh-token requests to this URL over TLS.
	// 
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// |  Provider  |                      Authorization endpoint                      |                        Token endpoint                        |
	// +============+==================================================================+==============================================================+
	// | Google     | https://accounts.google.com/o/oauth2/v2/auth                     | https://oauth2.googleapis.com/token                          |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | Microsoft  | https://login.microsoftonline.com/{tenant}/oauth2/v2.0/authorize | https://login.microsoftonline.com/{tenant}/oauth2/v2.0/token |
	// | identity   |                                                                  |                                                              |
	// | platform   |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | Salesforce | https://login.salesforce.com/services/oauth2/authorize           | https://login.salesforce.com/services/oauth2/token           |
	// | production |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | QuickBooks | https://appcenter.intuit.com/connect/oauth2                      | https://oauth.platform.intuit.com/oauth2/v1/tokens/bearer    |
	// | Online     |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | X API      | https://x.com/i/oauth2/authorize                                 | https://api.x.com/2/oauth2/token                             |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// 
	// Back-channel endpoint: Unlike the authorization endpoint, the token endpoint is
	// contacted directly by the application, not opened in the user's browser.
	// Use the provider's current HTTPS endpoint: Endpoint locations can change. Prefer
	// the value published in the provider's OAuth or OpenID Connect metadata, and do
	// not mix sandbox and production endpoints.
	const wchar_t *tokenEndpoint(void);
	// Specifies the provider's token endpoint. Chilkat sends authorization-code and
	// refresh-token requests to this URL over TLS.
	// 
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// |  Provider  |                      Authorization endpoint                      |                        Token endpoint                        |
	// +============+==================================================================+==============================================================+
	// | Google     | https://accounts.google.com/o/oauth2/v2/auth                     | https://oauth2.googleapis.com/token                          |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | Microsoft  | https://login.microsoftonline.com/{tenant}/oauth2/v2.0/authorize | https://login.microsoftonline.com/{tenant}/oauth2/v2.0/token |
	// | identity   |                                                                  |                                                              |
	// | platform   |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | Salesforce | https://login.salesforce.com/services/oauth2/authorize           | https://login.salesforce.com/services/oauth2/token           |
	// | production |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | QuickBooks | https://appcenter.intuit.com/connect/oauth2                      | https://oauth.platform.intuit.com/oauth2/v1/tokens/bearer    |
	// | Online     |                                                                  |                                                              |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// | X API      | https://x.com/i/oauth2/authorize                                 | https://api.x.com/2/oauth2/token                             |
	// +------------+------------------------------------------------------------------+--------------------------------------------------------------+
	// 
	// Back-channel endpoint: Unlike the authorization endpoint, the token endpoint is
	// contacted directly by the application, not opened in the user's browser.
	// Use the provider's current HTTPS endpoint: Endpoint locations can change. Prefer
	// the value published in the provider's OAuth or OpenID Connect metadata, and do
	// not mix sandbox and production endpoints.
	void put_TokenEndpoint(const wchar_t *newVal);

	// Contains the token_type value from the most recent successful token response.
	// The common value is Bearer.
	// 
	// Use the returned type: OAuth does not require every token to use the same
	// presentation mechanism. Follow the authorization server's documentation and the
	// returned token type when constructing API requests.
	void get_TokenType(CkString &str);
	// Contains the token_type value from the most recent successful token response.
	// The common value is Bearer.
	// 
	// Use the returned type: OAuth does not require every token to use the same
	// presentation mechanism. Follow the authorization server's documentation and the
	// returned token type when constructing API requests.
	const wchar_t *tokenType(void);
	// Contains the token_type value from the most recent successful token response.
	// The common value is Bearer.
	// 
	// Use the returned type: OAuth does not require every token to use the same
	// presentation mechanism. Follow the authorization server's documentation and the
	// returned token type when constructing API requests.
	void put_TokenType(const wchar_t *newVal);

	// Provides a comma-separated list of specialized compatibility options. The
	// default is an empty string and is appropriate for normal OAuth providers.
	// 
	// +-------------------------------+----------------------------------------------+
	// |            Keyword            |                    Effect                    |
	// +===============================+==============================================+
	// | NO_OAUTH2_SCOPE               | Omits the scope parameter from the           |
	// |                               | authorization-code token request.            |
	// +-------------------------------+----------------------------------------------+
	// | ExchangeCodeForTokenUsingJson | Sends the authorization-code token request   |
	// |                               | as an HTTP POST with a JSON body instead of  |
	// |                               | the normal form/query representation.        |
	// +-------------------------------+----------------------------------------------+
	// | RefreshTokenUsingJson         | Sends the refresh-token request as an HTTP   |
	// |                               | POST with a JSON body.                       |
	// +-------------------------------+----------------------------------------------+
	// 
	// Leave empty unless required: These options alter interoperability behavior
	// outside the normal OAuth token-request format. Enable one only when the
	// provider's documentation or Chilkat support explicitly requires it.
	void get_UncommonOptions(CkString &str);
	// Provides a comma-separated list of specialized compatibility options. The
	// default is an empty string and is appropriate for normal OAuth providers.
	// 
	// +-------------------------------+----------------------------------------------+
	// |            Keyword            |                    Effect                    |
	// +===============================+==============================================+
	// | NO_OAUTH2_SCOPE               | Omits the scope parameter from the           |
	// |                               | authorization-code token request.            |
	// +-------------------------------+----------------------------------------------+
	// | ExchangeCodeForTokenUsingJson | Sends the authorization-code token request   |
	// |                               | as an HTTP POST with a JSON body instead of  |
	// |                               | the normal form/query representation.        |
	// +-------------------------------+----------------------------------------------+
	// | RefreshTokenUsingJson         | Sends the refresh-token request as an HTTP   |
	// |                               | POST with a JSON body.                       |
	// +-------------------------------+----------------------------------------------+
	// 
	// Leave empty unless required: These options alter interoperability behavior
	// outside the normal OAuth token-request format. Enable one only when the
	// provider's documentation or Chilkat support explicitly requires it.
	const wchar_t *uncommonOptions(void);
	// Provides a comma-separated list of specialized compatibility options. The
	// default is an empty string and is appropriate for normal OAuth providers.
	// 
	// +-------------------------------+----------------------------------------------+
	// |            Keyword            |                    Effect                    |
	// +===============================+==============================================+
	// | NO_OAUTH2_SCOPE               | Omits the scope parameter from the           |
	// |                               | authorization-code token request.            |
	// +-------------------------------+----------------------------------------------+
	// | ExchangeCodeForTokenUsingJson | Sends the authorization-code token request   |
	// |                               | as an HTTP POST with a JSON body instead of  |
	// |                               | the normal form/query representation.        |
	// +-------------------------------+----------------------------------------------+
	// | RefreshTokenUsingJson         | Sends the refresh-token request as an HTTP   |
	// |                               | POST with a JSON body.                       |
	// +-------------------------------+----------------------------------------------+
	// 
	// Leave empty unless required: These options alter interoperability behavior
	// outside the normal OAuth token-request format. Enable one only when the
	// provider's documentation or Chilkat support explicitly requires it.
	void put_UncommonOptions(const wchar_t *newVal);

	// Controls how ClientId and ClientSecret are supplied during the
	// authorization-code token exchange.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | true  | Sends HTTP Basic authentication using the client ID as the         |
	// |         | username and the client secret as the password.                    |
	// +---------+--------------------------------------------------------------------+
	// | false | Sends the client ID and client secret as request parameters. This  |
	// |         | is the default.                                                    |
	// +---------+--------------------------------------------------------------------+
	// 
	// Match the provider's client-authentication method: Some authorization servers
	// require HTTP Basic authentication; others require parameters or no client secret
	// for public clients. A wrong choice usually produces an invalid_client response.
	// TLS is mandatory: Both forms expose the secret to the token endpoint. They
	// differ in HTTP representation, not in the need for a secure TLS connection.
	bool get_UseBasicAuth(void);
	// Controls how ClientId and ClientSecret are supplied during the
	// authorization-code token exchange.
	// 
	// +---------+--------------------------------------------------------------------+
	// |  Value  |                              Behavior                              |
	// +=========+====================================================================+
	// | true  | Sends HTTP Basic authentication using the client ID as the         |
	// |         | username and the client secret as the password.                    |
	// +---------+--------------------------------------------------------------------+
	// | false | Sends the client ID and client secret as request parameters. This  |
	// |         | is the default.                                                    |
	// +---------+--------------------------------------------------------------------+
	// 
	// Match the provider's client-authentication method: Some authorization servers
	// require HTTP Basic authentication; others require parameters or no client secret
	// for public clients. A wrong choice usually produces an invalid_client response.
	// TLS is mandatory: Both forms expose the secret to the token endpoint. They
	// differ in HTTP representation, not in the need for a secure TLS connection.
	void put_UseBasicAuth(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds a name/value query parameter to the authorization URL produced by
	// StartAuth[1]. Call the method multiple times to add multiple provider-specific
	// authorization parameters.
	// 
	// Typical examples include provider extensions such as access_type=offline,
	// prompt=consent, or an account-selection hint.
	// 
	// Do not add secrets: Authorization parameters are placed in a URL and can appear
	// in browser history, proxy logs, and diagnostics. Never put a client secret,
	// access token, refresh token, or other credential in an authorization query
	// parameter.
	// 
	// References:
	// [1] #StartAuth
	bool AddAuthQueryParam(const wchar_t *name, const wchar_t *value);

	// Adds a provider-specific name/value parameter to requests sent by
	// RefreshAccessToken[1]. Call the method multiple times to add multiple
	// parameters.
	// 
	// Use only when documented: Chilkat automatically supplies the standard
	// refresh-token grant parameters. Additional parameters are provider extensions
	// and should be added only when required by the authorization server.
	// 
	// References:
	// [1] #RefreshAccessToken
	bool AddRefreshQueryParam(const wchar_t *name, const wchar_t *value);

	// Adds a provider-specific name/value parameter to the authorization-code token
	// request that Chilkat sends after receiving the browser redirect. Call the method
	// multiple times to add multiple parameters.
	// 
	// This setting affects the code-for-token exchange performed by StartAuth[1] or
	// ExchangeCodeForToken[2]; it does not alter the browser authorization URL or
	// refresh-token requests.
	// 
	// Nonstandard extension: The normal authorization-code request parameters are
	// generated automatically. Use this method only for an additional parameter
	// documented by the provider, and do not duplicate standard parameters such as
	// grant_type, code, or redirect_uri unless instructed by Chilkat support.
	// 
	// References:
	// [1] #StartAuth
	// [2] #ExchangeCodeForToken
	bool AddTokenQueryParam(const wchar_t *name, const wchar_t *value);

	// Requests cancellation of the authorization flow currently running in the
	// background thread.
	// 
	// Returns true if the cancellation request is accepted. After cancellation,
	// inspect AuthFlowState[1] and FailureInfo[2] to determine the final state.
	// 
	// Scope of cancellation: This stops the local authorization operation. It does not
	// revoke an access token, refresh token, authorization grant, or consent that the
	// provider has already issued.
	// 
	// References:
	// [1] #AuthFlowState
	// [2] #FailureInfo
	bool Cancel(void);

	// Exchanges the authorization code in code for tokens at TokenEndpoint[1].
	// 
	// This is used when the application obtains the authorization code outside
	// Chilkat's local-listener workflow, most commonly with the legacy out-of-band
	// mode selected by Oob[2]. Configure the same client, endpoint, redirect, PKCE,
	// and token-request settings that the provider requires for the original
	// authorization request.
	// 
	// On success, the token properties and AccessTokenResponse[3] are populated in the
	// same manner as a successful background exchange.
	// 
	// Legacy OOB flow: Many major providers no longer accept
	// urn:ietf:wg:oauth:2.0:oob. Prefer an authorization-code flow with a loopback
	// redirect and PKCE whenever the provider supports it.
	// 
	// References:
	// [1] #TokenEndpoint
	// [2] #Oob
	// [3] #AccessTokenResponse
	bool ExchangeCodeForToken(const wchar_t *code);

	// Creates an asynchronous task to call the ExchangeCodeForToken method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ExchangeCodeForTokenAsync(const wchar_t *code);

	// Copies the raw token-endpoint response into sb and returns true on success.
	// 
	// This is the StringBuilder equivalent of reading AccessTokenResponse[1]. The
	// response is commonly JSON, but some providers return form-encoded or other text;
	// this method does not guarantee JSON.
	// 
	// Contains credentials: The response can contain an access token and refresh
	// token. Treat the destination StringBuilder as sensitive data and avoid logging
	// or exposing its contents.
	// 
	// References:
	// [1] #AccessTokenResponse
	bool GetAccessTokenResponseSb(CkStringBuilderW &sb);

	// Returns the decoded value of paramName from the authorization redirect received by
	// Chilkat's local listener.
	// 
	// Call this after the redirect has been received. It is useful for
	// provider-specific parameters in addition to the standard code, state, and error
	// values. For example, QuickBooks can return a company identifier named realmId:
	// 
	// http://localhost:55568/?state=...&code=...&realmId=1234567890
	// Provider extensions: OAuth defines the core redirect parameters, but providers
	// may add their own values. Consult the provider's documentation before depending
	// on an additional parameter.
	// Sensitive redirect data: Authorization codes and related callback parameters are
	// credentials or security-sensitive correlation values. Avoid writing them to
	// ordinary application logs.
	bool GetRedirectRequestParam(const wchar_t *paramName, CkString &outStr);
	// Returns the decoded value of paramName from the authorization redirect received by
	// Chilkat's local listener.
	// 
	// Call this after the redirect has been received. It is useful for
	// provider-specific parameters in addition to the standard code, state, and error
	// values. For example, QuickBooks can return a company identifier named realmId:
	// 
	// http://localhost:55568/?state=...&code=...&realmId=1234567890
	// Provider extensions: OAuth defines the core redirect parameters, but providers
	// may add their own values. Consult the provider's documentation before depending
	// on an additional parameter.
	// Sensitive redirect data: Authorization codes and related callback parameters are
	// credentials or security-sensitive correlation values. Avoid writing them to
	// ordinary application logs.
	const wchar_t *getRedirectRequestParam(const wchar_t *paramName);
	// Returns the decoded value of paramName from the authorization redirect received by
	// Chilkat's local listener.
	// 
	// Call this after the redirect has been received. It is useful for
	// provider-specific parameters in addition to the standard code, state, and error
	// values. For example, QuickBooks can return a company identifier named realmId:
	// 
	// http://localhost:55568/?state=...&code=...&realmId=1234567890
	// Provider extensions: OAuth defines the core redirect parameters, but providers
	// may add their own values. Consult the provider's documentation before depending
	// on an additional parameter.
	// Sensitive redirect data: Authorization codes and related callback parameters are
	// credentials or security-sensitive correlation values. Avoid writing them to
	// ordinary application logs.
	const wchar_t *redirectRequestParam(const wchar_t *paramName);

	// Asks the operating system to open url in the user's default web browser. On
	// Windows, macOS, and supported Linux desktop environments, an existing browser
	// may open the URL in a new tab.
	// 
	// This method is typically called with the authorization URL returned by
	// StartAuth[1]. Returns false if the operating system cannot launch a browser or
	// open the URL.
	// 
	// No browser automation: This method only opens the URL. Chilkat does not control
	// the browser, enter credentials, approve consent, or close the browser window.
	// 
	// References:
	// [1] #StartAuth
	bool LaunchBrowser(const wchar_t *url);

	// Loads state from task so this object can act as the caller associated with a
	// Chilkat asynchronous task.
	// 
	bool LoadTaskCaller(CkTaskW &task);

	// Sends a refresh-token grant request to TokenEndpoint[1] to obtain a new access
	// token without repeating interactive browser authorization.
	// 
	// Configure ClientId[2], RefreshToken[3], and TokenEndpoint[1], together with
	// whatever client authentication the provider requires. This may include
	// ClientSecret[4] and UseBasicAuth[5].
	// 
	// On success, Chilkat updates AccessToken[6], TokenType[7], and
	// AccessTokenResponse[8]. If the provider rotates refresh tokens and returns a new
	// refresh_token, RefreshToken[3] is also updated.
	// 
	// Persist rotated refresh tokens: Some providers invalidate the old refresh token
	// as soon as a new one is issued. After a successful refresh, securely persist the
	// current value of RefreshToken rather than assuming the previous value remains
	// usable.
	// Provider-specific requests: Use SetRefreshHeader[9] and AddRefreshQueryParam[10]
	// only when the provider documents additional headers or parameters.
	// 
	// References:
	// [1] #TokenEndpoint
	// [2] #ClientId
	// [3] #RefreshToken
	// [4] #ClientSecret
	// [5] #UseBasicAuth
	// [6] #AccessToken
	// [7] #TokenType
	// [8] #AccessTokenResponse
	// [9] #SetRefreshHeader
	// [10] #AddRefreshQueryParam
	bool RefreshAccessToken(void);

	// Creates an asynchronous task to call the RefreshAccessToken method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *RefreshAccessTokenAsync(void);

	// Adds or replaces an HTTP request header used by subsequent calls to
	// RefreshAccessToken[1]. name is the header field name and value is its value.
	// 
	// Call this method once for each required header. Passing an empty value removes
	// the named header.
	// 
	// Accept: application/json
	// Normally unnecessary: Standard OAuth refresh requests do not require
	// application-defined headers beyond those generated by the client. Add headers
	// only when the authorization server explicitly requires them, and never place
	// access tokens, refresh tokens, or client secrets in diagnostic headers.
	// 
	// References:
	// [1] #RefreshAccessToken
	bool SetRefreshHeader(const wchar_t *name, const wchar_t *value);

	// Suspends the calling thread for millisec milliseconds.
	// 
	// This convenience method is commonly used in a polling loop that checks
	// AuthFlowState[1] while the authorization flow continues on Chilkat's background
	// thread.
	// 
	// Thread behavior: The calling thread is blocked for the requested interval. In a
	// graphical application, use the platform's normal asynchronous or timer mechanism
	// when blocking the UI thread would make the application unresponsive.
	// 
	// References:
	// [1] #AuthFlowState
	void SleepMs(int millisec);

	// Starts an OAuth 2.0 Authorization Code flow and returns the authorization URL
	// that the application should open in the user's browser.
	// 
	// Before calling this method, configure ClientId[1], AuthorizationEndpoint[2],
	// TokenEndpoint[3], the requested Scope[4], and the redirect-listener settings
	// such as ListenPort[5]. Configure ClientSecret[6] only when the provider requires
	// client authentication for this application type.
	// 
	//     1. Chilkat constructs and returns the provider's authorization URL.
	//     2. Chilkat starts a background thread that listens for the redirect request,
	//     validates the returned state, and exchanges the authorization code at the token
	//     endpoint.
	// 
	// Open the returned URL with LaunchBrowser[7] or another browser-launch mechanism.
	// Poll AuthFlowState[8] until the flow reaches a terminal state.
	// 
	// PKCE and client authentication: Enabling CodeChallenge[9] protects the
	// authorization code from interception and is strongly recommended for desktop and
	// other native applications. PKCE does not make a client secret confidential and
	// does not replace client authentication when the provider requires it for a
	// confidential client.
	// Failure detection: String-returning bindings return an empty or null-equivalent
	// value on failure. Check the normal method-success indicator and inspect
	// LastErrorText before attempting to open the returned URL.
	// 
	// References:
	// [1] #ClientId
	// [2] #AuthorizationEndpoint
	// [3] #TokenEndpoint
	// [4] #Scope
	// [5] #ListenPort
	// [6] #ClientSecret
	// [7] #LaunchBrowser
	// [8] #AuthFlowState
	// [9] #CodeChallenge
	bool StartAuth(CkString &outStr);
	// Starts an OAuth 2.0 Authorization Code flow and returns the authorization URL
	// that the application should open in the user's browser.
	// 
	// Before calling this method, configure ClientId[1], AuthorizationEndpoint[2],
	// TokenEndpoint[3], the requested Scope[4], and the redirect-listener settings
	// such as ListenPort[5]. Configure ClientSecret[6] only when the provider requires
	// client authentication for this application type.
	// 
	//     1. Chilkat constructs and returns the provider's authorization URL.
	//     2. Chilkat starts a background thread that listens for the redirect request,
	//     validates the returned state, and exchanges the authorization code at the token
	//     endpoint.
	// 
	// Open the returned URL with LaunchBrowser[7] or another browser-launch mechanism.
	// Poll AuthFlowState[8] until the flow reaches a terminal state.
	// 
	// PKCE and client authentication: Enabling CodeChallenge[9] protects the
	// authorization code from interception and is strongly recommended for desktop and
	// other native applications. PKCE does not make a client secret confidential and
	// does not replace client authentication when the provider requires it for a
	// confidential client.
	// Failure detection: String-returning bindings return an empty or null-equivalent
	// value on failure. Check the normal method-success indicator and inspect
	// LastErrorText before attempting to open the returned URL.
	// 
	// References:
	// [1] #ClientId
	// [2] #AuthorizationEndpoint
	// [3] #TokenEndpoint
	// [4] #Scope
	// [5] #ListenPort
	// [6] #ClientSecret
	// [7] #LaunchBrowser
	// [8] #AuthFlowState
	// [9] #CodeChallenge
	const wchar_t *startAuth(void);

	// Associates sock with this object for HTTP connections to the token endpoint.
	// This method is optional.
	// 
	//     * Pass an unconnected Socket when it is configured with HTTP-proxy,
	//     SOCKS-proxy, local-bind, or other connection options that Chilkat should use
	//     when opening the token-endpoint connection.
	//     * Pass an already connected socket when traffic must travel through an
	//     established SSH tunnel or another prebuilt connection.
	// 
	// Without this method, Chilkat opens a direct TLS connection to the token
	// endpoint.
	// 
	// Browser traffic is separate: This socket controls Chilkat's back-channel token
	// requests. It does not configure the user's browser, the provider's authorization
	// page, or the browser's redirect to the local listener.
	bool UseConnection(CkSocketW &sock);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
