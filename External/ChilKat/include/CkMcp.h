// CkMcp.h: interface for the CkMcp class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkMcp_H
#define _CkMcp_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkJsonObject;
class CkSocket;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkMcp
class CK_VISIBLE_PUBLIC CkMcp  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkMcp(const CkMcp &);
	CkMcp &operator=(const CkMcp &);

    public:
	CkMcp(void);
	virtual ~CkMcp(void);

	static CkMcp *createNew(void);
	static CkMcp *createNew2(int progLang);
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
	// An optional bearer token for authenticating to the MCP server. When set, it is
	// sent as an Authorization: Bearer <token> header on every request. The default is
	// the empty string.
	void get_AuthToken(CkString &str);
	// An optional bearer token for authenticating to the MCP server. When set, it is
	// sent as an Authorization: Bearer <token> header on every request. The default is
	// the empty string.
	const char *authToken(void);
	// An optional bearer token for authenticating to the MCP server. When set, it is
	// sent as an Authorization: Bearer <token> header on every request. The default is
	// the empty string.
	void put_AuthToken(const char *newVal);

	// Read-only. true after a successful Connect[1] (the initialize handshake
	// completed).
	// 
	// References:
	// [1] #Connect
	bool get_Connected(void);

	// The maximum amount of time, in milliseconds, to wait to establish the TCP/TLS
	// connection to the MCP server. The default value is 30000 (30 seconds).
	int get_ConnectTimeoutMs(void);
	// The maximum amount of time, in milliseconds, to wait to establish the TCP/TLS
	// connection to the MCP server. The default value is 30000 (30 seconds).
	void put_ConnectTimeoutMs(int newVal);

	// The interval in milliseconds between each AbortCheck event callback, which
	// enables an application to abort a method before it completes. By default,
	// HeartbeatMs is 0, meaning no AbortCheck event callbacks fire.
	int get_HeartbeatMs(void);
	// The interval in milliseconds between each AbortCheck event callback, which
	// enables an application to abort a method before it completes. By default,
	// HeartbeatMs is 0, meaning no AbortCheck event callbacks fire.
	void put_HeartbeatMs(int newVal);

	// The maximum amount of time, in milliseconds, to wait for additional incoming
	// data when receiving a response has paused. This is not a total timeout. The
	// default value is 180000 (180 seconds).
	int get_IdleTimeoutMs(void);
	// The maximum amount of time, in milliseconds, to wait for additional incoming
	// data when receiving a response has paused. This is not a total timeout. The
	// default value is 180000 (180 seconds).
	void put_IdleTimeoutMs(int newVal);

	// The MCP protocol version. May be set before Connect[1] to request a specific
	// version; after Connect[1] it reflects the version negotiated with the server and
	// is sent in the MCP-Protocol-Version header of each request. The default is
	// 2025-06-18.
	// 
	// References:
	// [1] #Connect
	void get_ProtocolVersion(CkString &str);
	// The MCP protocol version. May be set before Connect[1] to request a specific
	// version; after Connect[1] it reflects the version negotiated with the server and
	// is sent in the MCP-Protocol-Version header of each request. The default is
	// 2025-06-18.
	// 
	// References:
	// [1] #Connect
	const char *protocolVersion(void);
	// The MCP protocol version. May be set before Connect[1] to request a specific
	// version; after Connect[1] it reflects the version negotiated with the server and
	// is sent in the MCP-Protocol-Version header of each request. The default is
	// 2025-06-18.
	// 
	// References:
	// [1] #Connect
	void put_ProtocolVersion(const char *newVal);

	// Read-only. Optional usage instructions provided by the server in the initialize
	// result (may be the empty string), available after Connect[1].
	// 
	// References:
	// [1] #Connect
	void get_ServerInstructions(CkString &str);
	// Read-only. Optional usage instructions provided by the server in the initialize
	// result (may be the empty string), available after Connect[1].
	// 
	// References:
	// [1] #Connect
	const char *serverInstructions(void);

	// Read-only. The server name reported in the initialize result, available after
	// Connect[1].
	// 
	// References:
	// [1] #Connect
	void get_ServerName(CkString &str);
	// Read-only. The server name reported in the initialize result, available after
	// Connect[1].
	// 
	// References:
	// [1] #Connect
	const char *serverName(void);

	// Read-only. The server version reported in the initialize result, available after
	// Connect[1].
	// 
	// References:
	// [1] #Connect
	void get_ServerVersion(CkString &str);
	// Read-only. The server version reported in the initialize result, available after
	// Connect[1].
	// 
	// References:
	// [1] #Connect
	const char *serverVersion(void);

	// Read-only. The Mcp-Session-Id assigned by the server during the Connect[1]
	// handshake, or the empty string if the server is stateless. Chilkat automatically
	// includes this session id on all subsequent requests.
	// 
	// References:
	// [1] #Connect
	void get_SessionId(CkString &str);
	// Read-only. The Mcp-Session-Id assigned by the server during the Connect[1]
	// handshake, or the empty string if the server is stateless. Chilkat automatically
	// includes this session id on all subsequent requests.
	// 
	// References:
	// [1] #Connect
	const char *sessionId(void);



	// ----------------------
	// Methods
	// ----------------------
	// Calls the MCP tools/call method for the tool named name, passing the JSON
	// arguments object in arguments. The members of arguments are the tool's input arguments and
	// should match the tool's inputSchema as returned by ListTools[1]. For example, a
	// weather tool might be called with the arguments { "location": "Boston, MA",
	// "units": "fahrenheit" }. Pass an empty JSON object (not a null) for a tool that
	// takes no arguments.
	// 
	// On success, the tool result is placed in result. It contains a content array, an
	// isError boolean, and optionally a structuredContent object. Each element of the
	// content array has a type ("text", "image", "audio", or "resource"); for a "text"
	// element the value is in its text member. A typical result looks like:{
	//   "content": [ { "type": "text", "text": "The weather in Boston is 72F and sunny." } ],
	//   "isError": false
	// } Thus the text of the first content item is at JSON path content[0].text.
	// 
	// Note: A tool that executes but reports a failure returns true here with
	// isError set to true in result (the failure message is typically carried in the
	// content array). The return value is false only for transport- or
	// protocol-level failures.
	// 
	// Connect[2] must be called first.
	// 
	// 
	// References:
	// [1] #ListTools
	// [2] #Connect
	bool CallTool(const char *name, CkJsonObject &arguments, CkJsonObject &result);

	// Calls the MCP tools/call method for the tool named name, passing the JSON
	// arguments object in arguments. The members of arguments are the tool's input arguments and
	// should match the tool's inputSchema as returned by ListTools[1]. For example, a
	// weather tool might be called with the arguments { "location": "Boston, MA",
	// "units": "fahrenheit" }. Pass an empty JSON object (not a null) for a tool that
	// takes no arguments.
	// 
	// On success, the tool result is placed in result. It contains a content array, an
	// isError boolean, and optionally a structuredContent object. Each element of the
	// content array has a type ("text", "image", "audio", or "resource"); for a "text"
	// element the value is in its text member. A typical result looks like:{
	//   "content": [ { "type": "text", "text": "The weather in Boston is 72F and sunny." } ],
	//   "isError": false
	// } Thus the text of the first content item is at JSON path content[0].text.
	// 
	// Note: A tool that executes but reports a failure returns true here with
	// isError set to true in result (the failure message is typically carried in the
	// content array). The return value is false only for transport- or
	// protocol-level failures.
	// 
	// Connect[2] must be called first.
	// 
	// 
	// References:
	// [1] #ListTools
	// [2] #Connect
	CkTask *CallToolAsync(const char *name, CkJsonObject &arguments, CkJsonObject &result);


	// Explicitly terminates the MCP session by sending an HTTP DELETE with the
	// Mcp-Session-Id header, then releases the connection. It is safe to call this
	// method when not connected (it simply releases any transport). A server that does
	// not permit client-terminated sessions responds with HTTP 405, which is not
	// treated as an error.
	bool Close(void);

	// Explicitly terminates the MCP session by sending an HTTP DELETE with the
	// Mcp-Session-Id header, then releases the connection. It is safe to call this
	// method when not connected (it simply releases any transport). A server that does
	// not permit client-terminated sessions responds with HTTP 405, which is not
	// treated as an error.
	CkTask *CloseAsync(void);


	// Connects to the MCP (Model Context Protocol) server at the Streamable HTTP
	// endpoint URL in url (for example https://example.com/mcp) and performs the MCP
	// initialize handshake.
	// 
	// On success, the SessionId[1], ProtocolVersion[2], ServerName[3],
	// ServerVersion[4], and ServerInstructions[5] properties are populated, and
	// Connected[6] becomes true.
	// 
	// If an AuthToken[7] is set, it is sent as a bearer token on the request. The URL
	// must begin with http:// or https://; the host, port, and path are taken from it.
	// Only the Streamable HTTP transport is supported; the stdio transport is not.
	// 
	// 
	// References:
	// [1] #SessionId
	// [2] #ProtocolVersion
	// [3] #ServerName
	// [4] #ServerVersion
	// [5] #ServerInstructions
	// [6] #Connected
	// [7] #AuthToken
	bool Connect(const char *url);

	// Connects to the MCP (Model Context Protocol) server at the Streamable HTTP
	// endpoint URL in url (for example https://example.com/mcp) and performs the MCP
	// initialize handshake.
	// 
	// On success, the SessionId[1], ProtocolVersion[2], ServerName[3],
	// ServerVersion[4], and ServerInstructions[5] properties are populated, and
	// Connected[6] becomes true.
	// 
	// If an AuthToken[7] is set, it is sent as a bearer token on the request. The URL
	// must begin with http:// or https://; the host, port, and path are taken from it.
	// Only the Streamable HTTP transport is supported; the stdio transport is not.
	// 
	// 
	// References:
	// [1] #SessionId
	// [2] #ProtocolVersion
	// [3] #ServerName
	// [4] #ServerVersion
	// [5] #ServerInstructions
	// [6] #Connected
	// [7] #AuthToken
	CkTask *ConnectAsync(const char *url);


	// Returns, in json, the complete JSON-RPC response envelope from the most recent
	// request (the jsonrpc, id, and result or error members), for diagnostics and
	// logging. Note that this is the full JSON-RPC envelope, whereas ListTools[1],
	// CallTool[2], ReadResource[3], and GetPrompt[4] each return only the inner result
	// object.
	// 
	// References:
	// [1] #ListTools
	// [2] #CallTool
	// [3] #ReadResource
	// [4] #GetPrompt
	void GetLastJsonData(CkJsonObject &json);


	// Calls the MCP prompts/get method for the prompt named name, passing the JSON
	// arguments object in arguments (pass an empty object for a prompt that takes no
	// arguments). On success, the result is placed in json, consisting of an optional
	// description and a messages array in which each message has a role and content.
	// 
	// Connect[1] must be called first.
	// 
	// 
	// References:
	// [1] #Connect
	bool GetPrompt(const char *name, CkJsonObject &arguments, CkJsonObject &json);

	// Calls the MCP prompts/get method for the prompt named name, passing the JSON
	// arguments object in arguments (pass an empty object for a prompt that takes no
	// arguments). On success, the result is placed in json, consisting of an optional
	// description and a messages array in which each message has a role and content.
	// 
	// Connect[1] must be called first.
	// 
	// 
	// References:
	// [1] #Connect
	CkTask *GetPromptAsync(const char *name, CkJsonObject &arguments, CkJsonObject &json);


	// Calls the MCP prompts/list method. On success, the server's result object is
	// placed in json, containing a prompts array in which each prompt has a name,
	// optionally a description, and an arguments array, and possibly a nextCursor for
	// pagination.
	// 
	// Connect[1] must be called first.
	// 
	// 
	// References:
	// [1] #Connect
	bool ListPrompts(CkJsonObject &json);

	// Calls the MCP prompts/list method. On success, the server's result object is
	// placed in json, containing a prompts array in which each prompt has a name,
	// optionally a description, and an arguments array, and possibly a nextCursor for
	// pagination.
	// 
	// Connect[1] must be called first.
	// 
	// 
	// References:
	// [1] #Connect
	CkTask *ListPromptsAsync(CkJsonObject &json);


	// Calls the MCP resources/list method. On success, the server's result object is
	// placed in json, containing a resources array in which each resource has a uri, a
	// name, and optionally a description and mimeType, and possibly a nextCursor for
	// pagination.
	// 
	// Connect[1] must be called first.
	// 
	// 
	// References:
	// [1] #Connect
	bool ListResources(CkJsonObject &json);

	// Calls the MCP resources/list method. On success, the server's result object is
	// placed in json, containing a resources array in which each resource has a uri, a
	// name, and optionally a description and mimeType, and possibly a nextCursor for
	// pagination.
	// 
	// Connect[1] must be called first.
	// 
	// 
	// References:
	// [1] #Connect
	CkTask *ListResourcesAsync(CkJsonObject &json);


	// Calls the MCP tools/list method. On success, the server's result object is
	// placed in json, containing a tools array in which each tool has a name, a
	// description, and an inputSchema (a JSON Schema describing the tool's arguments),
	// and possibly a nextCursor for pagination.
	// 
	// Connect[1] must be called first.
	// 
	// 
	// References:
	// [1] #Connect
	bool ListTools(CkJsonObject &json);

	// Calls the MCP tools/list method. On success, the server's result object is
	// placed in json, containing a tools array in which each tool has a name, a
	// description, and an inputSchema (a JSON Schema describing the tool's arguments),
	// and possibly a nextCursor for pagination.
	// 
	// Connect[1] must be called first.
	// 
	// 
	// References:
	// [1] #Connect
	CkTask *ListToolsAsync(CkJsonObject &json);


	// Calls the MCP resources/read method for the resource identified by the URI in
	// uri. On success, the result is placed in json, containing a contents array
	// whose entries carry a uri, a mimeType, and either text (for text resources) or
	// blob (base64 for binary resources).
	// 
	// Connect[1] must be called first.
	// 
	// 
	// References:
	// [1] #Connect
	bool ReadResource(const char *uri, CkJsonObject &json);

	// Calls the MCP resources/read method for the resource identified by the URI in
	// uri. On success, the result is placed in json, containing a contents array
	// whose entries carry a uri, a mimeType, and either text (for text resources) or
	// blob (base64 for binary resources).
	// 
	// Connect[1] must be called first.
	// 
	// 
	// References:
	// [1] #Connect
	CkTask *ReadResourceAsync(const char *uri, CkJsonObject &json);


	// Copies connection settings, including HTTP proxy, SOCKS proxy, bind (network
	// interface) IP address, and TLS options, from sock. This is optional; if not
	// used, default settings apply. Call this method before Connect[1].
	// 
	// References:
	// [1] #Connect
	bool SetConnectionSettings(CkSocket &sock);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
