// CkWebSocket.h: interface for the CkWebSocket class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkWebSocket_H
#define _CkWebSocket_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkBinData;
class CkStringBuilder;
class CkTask;
class CkRest;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkWebSocket
class CK_VISIBLE_PUBLIC CkWebSocket  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkWebSocket(const CkWebSocket &);
	CkWebSocket &operator=(const CkWebSocket &);

    public:
	CkWebSocket(void);
	virtual ~CkWebSocket(void);

	static CkWebSocket *createNew(void);
	static CkWebSocket *createNew2(int progLang);
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
	// Controls whether Chilkat automatically answers an incoming Close control frame.
	// 
	//     * When true, an incoming Close is answered automatically if the client did
	//     not already initiate the close. After a Close has been both received and sent,
	//     Chilkat closes the underlying connection.
	//     * When false, the application can detect the received Close through
	//     CloseReceived or FrameOpcode and call SendClose itself.
	// 
	// The default is true.
	// 
	// Closing handshake: A peer that receives a Close and has not already sent one
	// should respond with a Close. Automatic response is usually the safest choice
	// unless the application must control the exact status code or timing.
	bool get_CloseAutoRespond(void);
	// Controls whether Chilkat automatically answers an incoming Close control frame.
	// 
	//     * When true, an incoming Close is answered automatically if the client did
	//     not already initiate the close. After a Close has been both received and sent,
	//     Chilkat closes the underlying connection.
	//     * When false, the application can detect the received Close through
	//     CloseReceived or FrameOpcode and call SendClose itself.
	// 
	// The default is true.
	// 
	// Closing handshake: A peer that receives a Close and has not already sent one
	// should respond with a Close. Automatic response is usually the safest choice
	// unless the application must control the exact status code or timing.
	void put_CloseAutoRespond(bool newVal);

	// Returns the UTF-8 reason text contained in the received Close control frame.
	// 
	// The value is empty when the peer supplied no reason or when no Close frame has
	// been received. A reason is diagnostic text and should not be treated as a stable
	// machine-readable error identifier; use CloseStatusCode for protocol-level
	// handling.
	// 
	void get_CloseReason(CkString &str);
	// Returns the UTF-8 reason text contained in the received Close control frame.
	// 
	// The value is empty when the peer supplied no reason or when no Close frame has
	// been received. A reason is diagnostic text and should not be treated as a stable
	// machine-readable error identifier; use CloseStatusCode for protocol-level
	// handling.
	// 
	const char *closeReason(void);

	// true after a Close control frame has been received on the current WebSocket
	// connection.
	// 
	// When CloseAutoRespond is false, use this property to determine whether the
	// application needs to call SendClose to complete the closing handshake. The
	// received status code and reason, if present, are available through
	// CloseStatusCode and CloseReason.
	// 
	bool get_CloseReceived(void);

	// Returns the status code contained in the received Close control frame.
	// 
	// Returns 0 when no Close frame has been received or when the received Close frame
	// did not include a status code.
	// 
	// Meaning of zero: 0 is an API sentinel; it is not a WebSocket close status
	// transmitted by the peer.
	int get_CloseStatusCode(void);

	// true if the frame most recently delivered by ReadFrame had its WebSocket FIN
	// bit set; otherwise false.
	// 
	// For a fragmented data message, continue reading while this property is false.
	// The fragment with true completes the message. Unfragmented messages have
	// true on their only frame.
	// 
	// Control frames: Close, Ping, and Pong are control frames and are not fragmented
	// by the WebSocket protocol; their FIN bit is always set.
	bool get_FinalFrame(void);

	// Returns the number of payload bytes currently accumulated in the internal
	// receive buffer.
	// 
	// The value can represent data from one frame or from multiple calls to ReadFrame,
	// which is useful when receiving a fragmented message. The accumulated bytes
	// remain available until retrieved by GetFrameData, GetFrameDataSb, or
	// GetFrameDataBd.
	// 
	// Message length: This is the length accumulated so far, not necessarily the final
	// length of the complete WebSocket message. Check FinalFrame to determine whether
	// the last received fragment completed the message.
	int get_FrameDataLen(void);

	// Returns the symbolic opcode of the frame most recently delivered by ReadFrame.
	// 
	// +--------------+----------------------------------------------+
	// |    Value     |                   Meaning                    |
	// +==============+==============================================+
	// | Continuation | A later fragment of a Text or Binary message |
	// +--------------+----------------------------------------------+
	// | Text         | UTF-8 text data                              |
	// +--------------+----------------------------------------------+
	// | Binary       | Binary data                                  |
	// +--------------+----------------------------------------------+
	// | Close        | Closing handshake                            |
	// +--------------+----------------------------------------------+
	// | Ping         | Ping control frame                           |
	// +--------------+----------------------------------------------+
	// | Pong         | Pong control frame                           |
	// +--------------+----------------------------------------------+
	// 
	// Before any frame has been received, the value is the empty string. Ping or Pong
	// frames handled internally by the auto-response/auto-consume options may not be
	// returned as the current frame.
	// 
	void get_FrameOpcode(CkString &str);
	// Returns the symbolic opcode of the frame most recently delivered by ReadFrame.
	// 
	// +--------------+----------------------------------------------+
	// |    Value     |                   Meaning                    |
	// +==============+==============================================+
	// | Continuation | A later fragment of a Text or Binary message |
	// +--------------+----------------------------------------------+
	// | Text         | UTF-8 text data                              |
	// +--------------+----------------------------------------------+
	// | Binary       | Binary data                                  |
	// +--------------+----------------------------------------------+
	// | Close        | Closing handshake                            |
	// +--------------+----------------------------------------------+
	// | Ping         | Ping control frame                           |
	// +--------------+----------------------------------------------+
	// | Pong         | Pong control frame                           |
	// +--------------+----------------------------------------------+
	// 
	// Before any frame has been received, the value is the empty string. Ping or Pong
	// frames handled internally by the auto-response/auto-consume options may not be
	// returned as the current frame.
	// 
	const char *frameOpcode(void);

	// Returns the numeric opcode of the frame most recently delivered by ReadFrame.
	// 
	// +-------+--------------+
	// | Value |  Frame type  |
	// +=======+==============+
	// | 0     | Continuation |
	// +-------+--------------+
	// | 1     | Text         |
	// +-------+--------------+
	// | 2     | Binary       |
	// +-------+--------------+
	// | 8     | Close        |
	// +-------+--------------+
	// | 9     | Ping         |
	// +-------+--------------+
	// | 10    | Pong         |
	// +-------+--------------+
	// 
	// Use FrameOpcode when a readable symbolic value is preferred.
	// 
	int get_FrameOpcodeInt(void);

	// Specifies the interval, in milliseconds, between AbortCheck event callbacks
	// during supported blocking operations.
	// 
	// The default is 0, which disables periodic AbortCheck callbacks. Set a positive
	// value when the application needs an opportunity to cancel a long-running send or
	// receive operation.
	// 
	// Not a WebSocket heartbeat: Despite the property name, this setting does not
	// transmit Ping frames and does not monitor peer liveness. Use SendPing and
	// Ping/Pong handling for protocol-level heartbeat behavior.
	int get_HeartbeatMs(void);
	// Specifies the interval, in milliseconds, between AbortCheck event callbacks
	// during supported blocking operations.
	// 
	// The default is 0, which disables periodic AbortCheck callbacks. Set a positive
	// value when the application needs an opportunity to cancel a long-running send or
	// receive operation.
	// 
	// Not a WebSocket heartbeat: Despite the property name, this setting does not
	// transmit Ping frames and does not monitor peer liveness. Use SendPing and
	// Ping/Pong handling for protocol-level heartbeat behavior.
	void put_HeartbeatMs(int newVal);

	// Specifies the maximum number of milliseconds an active send or receive operation
	// may remain stalled while waiting for additional network progress.
	// 
	// The default is 30000 milliseconds (30 seconds). This is an inactivity timeout,
	// not a total limit on the duration of the operation. An operation may continue
	// longer than this value as long as data continues to be transferred.
	// 
	// Not a keep-alive interval: This property does not automatically send WebSocket
	// Ping frames. Use SendPing when the application needs protocol-level keep-alive
	// or responsiveness checks.
	int get_IdleTimeoutMs(void);
	// Specifies the maximum number of milliseconds an active send or receive operation
	// may remain stalled while waiting for additional network progress.
	// 
	// The default is 30000 milliseconds (30 seconds). This is an inactivity timeout,
	// not a total limit on the duration of the operation. An operation may continue
	// longer than this value as long as data continues to be transferred.
	// 
	// Not a keep-alive interval: This property does not automatically send WebSocket
	// Ping frames. Use SendPing when the application needs protocol-level keep-alive
	// or responsiveness checks.
	void put_IdleTimeoutMs(int newVal);

	// true when the underlying WebSocket network connection is currently open;
	// otherwise false.
	// 
	// Connection state is not a health check: A network interruption may not be
	// detected until the next read or write operation. Use normal I/O results—and
	// optionally Ping/Pong—to determine whether a seemingly connected peer is still
	// responsive.
	bool get_IsConnected(void);

	// true when a Ping frame has been received but no corresponding Pong has yet
	// been sent.
	// 
	// This property is primarily useful when PingAutoRespond is false. Call SendPong
	// as soon as practical; it automatically sends the received Ping payload in the
	// Pong response.
	// 
	bool get_NeedSendPong(void);

	// Controls automatic handling of incoming Ping control frames.
	// 
	//     * When true, Chilkat sends the required Pong automatically and ReadFrame
	//     consumes the Ping internally, continuing until another frame is available.
	//     * When false, the Ping can be returned to the application. Check
	//     NeedSendPong and call SendPong as soon as practical.
	// 
	// The default is true.
	// 
	// Payload echo: A Pong sent in response to a Ping must carry the same application
	// data. SendPong automatically uses the stored payload of the unanswered Ping.
	bool get_PingAutoRespond(void);
	// Controls automatic handling of incoming Ping control frames.
	// 
	//     * When true, Chilkat sends the required Pong automatically and ReadFrame
	//     consumes the Ping internally, continuing until another frame is available.
	//     * When false, the Ping can be returned to the application. Check
	//     NeedSendPong and call SendPong as soon as practical.
	// 
	// The default is true.
	// 
	// Payload echo: A Pong sent in response to a Ping must carry the same application
	// data. SendPong automatically uses the stored payload of the unanswered Ping.
	void put_PingAutoRespond(bool newVal);

	// Controls whether incoming Pong control frames are hidden from the application.
	// 
	//     * When true, ReadFrame consumes Pong frames internally and continues
	//     reading until a non-Pong frame is available.
	//     * When false, an incoming Pong can be returned normally with FrameOpcode
	//     equal to Pong.
	// 
	// The default is true. Check PongConsumed after ReadFrame to learn whether one
	// or more Pong frames were consumed during that call.
	// 
	bool get_PongAutoConsume(void);
	// Controls whether incoming Pong control frames are hidden from the application.
	// 
	//     * When true, ReadFrame consumes Pong frames internally and continues
	//     reading until a non-Pong frame is available.
	//     * When false, an incoming Pong can be returned normally with FrameOpcode
	//     equal to Pong.
	// 
	// The default is true. Check PongConsumed after ReadFrame to learn whether one
	// or more Pong frames were consumed during that call.
	// 
	void put_PongAutoConsume(bool newVal);

	// true if the most recent call to ReadFrame internally consumed a Pong frame
	// while PongAutoConsume was true.
	// 
	// The property is reset to false at the beginning of each ReadFrame call and set
	// to true if a Pong is consumed during that call.
	// 
	// Why unsolicited Pong is possible: Either endpoint may send a Pong without a
	// preceding Ping, and a response to an earlier Ping may arrive between application
	// data frames. Automatic consumption allows ordinary read loops to ignore these
	// control frames while still detecting that they occurred.
	bool get_PongConsumed(void);

	// When ReadFrame returns false, this property categorizes the reason:
	// 
	// +-------+---------------------------------------------+
	// | Value |                   Meaning                   |
	// +=======+=============================================+
	// | 0     | No failure is recorded                      |
	// +-------+---------------------------------------------+
	// | 1     | Read inactivity timeout                     |
	// +-------+---------------------------------------------+
	// | 2     | Aborted by an application callback          |
	// +-------+---------------------------------------------+
	// | 3     | Fatal socket error or lost connection       |
	// +-------+---------------------------------------------+
	// | 4     | Invalid WebSocket frame bytes were received |
	// +-------+---------------------------------------------+
	// | 99    | Unexpected catch-all failure                |
	// +-------+---------------------------------------------+
	// 
	// Use this value for programmatic branching and inspect LastErrorText for detailed
	// diagnostics.
	// 
	int get_ReadFrameFailReason(void);

	// Contains a comma-separated list of rarely needed compatibility or platform
	// options. The default is the empty string and should normally remain unchanged.
	// 
	// +----------------+-------------------------------------------------------------+
	// |    Keyword     |                           Effect                            |
	// +================+=============================================================+
	// | ProtectFromVpn | On Android, attempts to route the connection outside an     |
	// |                | installed or active VPN. Introduced in v9.5.0.80.           |
	// +----------------+-------------------------------------------------------------+
	// 
	// Platform-specific behavior: This option applies only on Android. Leave the
	// property empty on other platforms and unless bypassing the device VPN is an
	// explicit application requirement.
	void get_UncommonOptions(CkString &str);
	// Contains a comma-separated list of rarely needed compatibility or platform
	// options. The default is the empty string and should normally remain unchanged.
	// 
	// +----------------+-------------------------------------------------------------+
	// |    Keyword     |                           Effect                            |
	// +================+=============================================================+
	// | ProtectFromVpn | On Android, attempts to route the connection outside an     |
	// |                | installed or active VPN. Introduced in v9.5.0.80.           |
	// +----------------+-------------------------------------------------------------+
	// 
	// Platform-specific behavior: This option applies only on Android. Leave the
	// property empty on other platforms and unless bypassing the device VPN is an
	// explicit application requirement.
	const char *uncommonOptions(void);



	// ----------------------
	// Methods
	// ----------------------
	// Adds the standard client opening-handshake headers to the Rest object supplied
	// to UseConnection:
	// 
	// Upgrade: websocket
	// Connection: Upgrade
	// Sec-WebSocket-Key: ...
	// Sec-WebSocket-Version: 13
	// 
	// Sec-WebSocket-Key contains a newly generated client nonce used by the server to
	// produce Sec-WebSocket-Accept.
	// 
	// Additional handshake headers: If the server requires headers such as Origin,
	// Authorization, cookies, or Sec-WebSocket-Protocol, add them through the
	// associated Rest object before sending the HTTP upgrade request.
	bool AddClientHeaders(void);


	// Immediately closes the underlying network connection without completing the
	// WebSocket closing handshake.
	// 
	// Use this method when the connection must be abandoned because of a fatal error,
	// timeout, application shutdown, or an unresponsive peer.
	// 
	// Preferred shutdown: For a normal shutdown, call SendClose, receive the peer's
	// Close frame with ReadFrame, and allow the closing handshake to complete. An
	// abrupt transport close does not provide the peer with a WebSocket status code or
	// reason.
	bool CloseConnection(void);


	// Returns the bytes accumulated by successful calls to ReadFrame as a string, then
	// clears the internal receive buffer.
	// 
	// This method is intended for WebSocket text-message data. For arbitrary binary
	// payloads, use GetFrameDataBd to avoid interpreting binary bytes as text.
	// 
	// Fragmented messages: To retrieve an entire fragmented message, continue calling
	// ReadFrame until FinalFrame is true, and then call GetFrameData once. Calling
	// this method earlier returns and clears only the data accumulated so far.
	bool GetFrameData(CkString &outStr);

	// Returns the bytes accumulated by successful calls to ReadFrame as a string, then
	// clears the internal receive buffer.
	// 
	// This method is intended for WebSocket text-message data. For arbitrary binary
	// payloads, use GetFrameDataBd to avoid interpreting binary bytes as text.
	// 
	// Fragmented messages: To retrieve an entire fragmented message, continue calling
	// ReadFrame until FinalFrame is true, and then call GetFrameData once. Calling
	// this method earlier returns and clears only the data accumulated so far.
	const char *getFrameData(void);
	// Returns the bytes accumulated by successful calls to ReadFrame as a string, then
	// clears the internal receive buffer.
	// 
	// This method is intended for WebSocket text-message data. For arbitrary binary
	// payloads, use GetFrameDataBd to avoid interpreting binary bytes as text.
	// 
	// Fragmented messages: To retrieve an entire fragmented message, continue calling
	// ReadFrame until FinalFrame is true, and then call GetFrameData once. Calling
	// this method earlier returns and clears only the data accumulated so far.
	const char *frameData(void);


	// Appends the bytes accumulated by successful calls to ReadFrame to binData, then
	// clears the internal receive buffer.
	// 
	// Use this method for binary messages or whenever the exact received bytes must be
	// preserved. Existing data in the destination BinData is retained because the
	// received bytes are appended.
	// 
	// Receive-buffer ownership: Calling any one of GetFrameData, GetFrameDataSb, or
	// GetFrameDataBd consumes the same internal buffer. Retrieve the data using only
	// the form needed by the application.
	bool GetFrameDataBd(CkBinData &binData);


	// Appends the text represented by the bytes accumulated by successful calls to
	// ReadFrame to sb, then clears the internal receive buffer.
	// 
	// Existing text in the destination StringBuilder is retained. This method is most
	// appropriate for text-message data; use GetFrameDataBd for arbitrary binary
	// payloads.
	// 
	// Fragmented messages: The receive buffer can accumulate multiple frames. Read
	// until FinalFrame is true before calling this method when the application wants
	// the complete message.
	bool GetFrameDataSb(CkStringBuilder &sb);


	// Loads the caller object associated with an asynchronous Task method invocation.
	// 
	// This is used by Chilkat's asynchronous task infrastructure when access to the
	// original WebSocket object is required after the task completes.
	// 
	bool LoadTaskCaller(CkTask &task);


	// Checks whether bytes are currently waiting to be read from the underlying
	// WebSocket connection.
	// 
	// Returns true when incoming data is available and false when no data is
	// presently waiting.
	// 
	// Polling is only a snapshot: A true result does not mean that an entire
	// WebSocket frame or message has arrived. Call ReadFrame to parse the protocol
	// frame. A false result does not indicate that the peer will not send data
	// later.
	bool PollDataAvailable(void);


	// Reads the next WebSocket frame from the connected server. On success, the method
	// updates FrameOpcode, FrameOpcodeInt, FinalFrame, and FrameDataLen.
	// 
	// Frame payload bytes are added to an internal receive buffer. The buffer may
	// therefore contain data accumulated by multiple calls to ReadFrame. Retrieve and
	// clear it with GetFrameData, GetFrameDataSb, or GetFrameDataBd.
	// 
	// Reading a complete message
	// 
	// Call ReadFrame until FinalFrame is true, then retrieve the accumulated message
	// data. A fragmented message begins with a Text or Binary frame and continues with
	// one or more Continuation frames.
	// 
	// Control-frame automation: Depending on PingAutoRespond and PongAutoConsume,
	// incoming Ping and Pong frames may be handled internally, causing this method to
	// continue reading until another frame is available. If the method returns
	// false, inspect ReadFrameFailReason and LastErrorText.
	bool ReadFrame(void);

	// Reads the next WebSocket frame from the connected server. On success, the method
	// updates FrameOpcode, FrameOpcodeInt, FinalFrame, and FrameDataLen.
	// 
	// Frame payload bytes are added to an internal receive buffer. The buffer may
	// therefore contain data accumulated by multiple calls to ReadFrame. Retrieve and
	// clear it with GetFrameData, GetFrameDataSb, or GetFrameDataBd.
	// 
	// Reading a complete message
	// 
	// Call ReadFrame until FinalFrame is true, then retrieve the accumulated message
	// data. A fragmented message begins with a Text or Binary frame and continues with
	// one or more Continuation frames.
	// 
	// Control-frame automation: Depending on PingAutoRespond and PongAutoConsume,
	// incoming Ping and Pong frames may be handled internally, causing this method to
	// continue reading until another frame is available. If the method returns
	// false, inspect ReadFrameFailReason and LastErrorText.
	CkTask *ReadFrameAsync(void);


	// Sends a WebSocket Close control frame and begins or completes the closing
	// handshake.
	// 
	//     * If includeStatus is false, the Close frame contains no status code and
	//     statusCode and reason are ignored.
	//     * If includeStatus is true, the frame contains statusCode followed by the
	//     UTF-8 bytes of reason.
	// 
	// The complete Close payload cannot exceed 125 bytes, leaving at most 123 bytes
	// for the UTF-8 reason after the two-byte status code. Chilkat truncates an
	// overlong reason. The API accepts status-code integers from 0 through 16383.
	// 
	// Protocol-valid status codes: The API's numeric range is broader than the set
	// valid for transmission under RFC 6455. Use a defined protocol code such as 1000
	// for normal closure, or an appropriate application code in the 3000 – 4999 range.
	// Codes 1005, 1006, and 1015 are reserved reporting values and must not be sent in
	// a Close frame.
	// Clean close: After initiating a close, read the peer's Close response. If this
	// method answers a Close already received from the server, Chilkat also closes the
	// underlying connection after sending the response.
	bool SendClose(bool includeStatus, int statusCode, const char *reason);

	// Sends a WebSocket Close control frame and begins or completes the closing
	// handshake.
	// 
	//     * If includeStatus is false, the Close frame contains no status code and
	//     statusCode and reason are ignored.
	//     * If includeStatus is true, the frame contains statusCode followed by the
	//     UTF-8 bytes of reason.
	// 
	// The complete Close payload cannot exceed 125 bytes, leaving at most 123 bytes
	// for the UTF-8 reason after the two-byte status code. Chilkat truncates an
	// overlong reason. The API accepts status-code integers from 0 through 16383.
	// 
	// Protocol-valid status codes: The API's numeric range is broader than the set
	// valid for transmission under RFC 6455. Use a defined protocol code such as 1000
	// for normal closure, or an appropriate application code in the 3000 – 4999 range.
	// Codes 1005, 1006, and 1015 are reserved reporting values and must not be sent in
	// a Close frame.
	// Clean close: After initiating a close, read the peer's Close response. If this
	// method answers a Close already received from the server, Chilkat also closes the
	// underlying connection after sending the response.
	CkTask *SendCloseAsync(bool includeStatus, int statusCode, const char *reason);


	// Sends one WebSocket text data frame containing stringToSend. WebSocket text data
	// is UTF-8 on the wire.
	// 
	//     * Set finalFrame to true when this frame completes the message.
	//     * Set finalFrame to false when additional frames will follow as part of
	//     the same fragmented message.
	// 
	// For a normal unfragmented text message, call this method once with finalFrame
	// set to true. For a fragmented message, call it repeatedly and set true only
	// for the final fragment.
	// 
	// Frames and messages: A WebSocket message may contain one frame or multiple
	// fragments. Do not begin a second data message until the current fragmented
	// message has been completed. Control frames such as Ping, Pong, and Close may
	// occur between message fragments.
	bool SendFrame(const char *stringToSend, bool finalFrame);

	// Sends one WebSocket text data frame containing stringToSend. WebSocket text data
	// is UTF-8 on the wire.
	// 
	//     * Set finalFrame to true when this frame completes the message.
	//     * Set finalFrame to false when additional frames will follow as part of
	//     the same fragmented message.
	// 
	// For a normal unfragmented text message, call this method once with finalFrame
	// set to true. For a fragmented message, call it repeatedly and set true only
	// for the final fragment.
	// 
	// Frames and messages: A WebSocket message may contain one frame or multiple
	// fragments. Do not begin a second data message until the current fragmented
	// message has been completed. Control frames such as Ping, Pong, and Close may
	// occur between message fragments.
	CkTask *SendFrameAsync(const char *stringToSend, bool finalFrame);


	// Sends one WebSocket binary data frame containing the current bytes in bdToSend.
	// 
	//     * Set finalFrame to true when this frame completes the binary message.
	//     * Set finalFrame to false when additional binary-message fragments will
	//     follow.
	// 
	// For an ordinary single-frame binary message, set finalFrame to true.
	// 
	// Exact bytes: No text encoding is involved. The bytes stored in bdToSend become
	// the frame payload, while Chilkat applies the client-side WebSocket framing and
	// masking required by the protocol.
	bool SendFrameBd(CkBinData &bdToSend, bool finalFrame);

	// Sends one WebSocket binary data frame containing the current bytes in bdToSend.
	// 
	//     * Set finalFrame to true when this frame completes the binary message.
	//     * Set finalFrame to false when additional binary-message fragments will
	//     follow.
	// 
	// For an ordinary single-frame binary message, set finalFrame to true.
	// 
	// Exact bytes: No text encoding is involved. The bytes stored in bdToSend become
	// the frame payload, while Chilkat applies the client-side WebSocket framing and
	// masking required by the protocol.
	CkTask *SendFrameBdAsync(CkBinData &bdToSend, bool finalFrame);


	// Sends one WebSocket text data frame containing the current contents of sbToSend.
	// 
	//     * Set finalFrame to true when this frame completes the message.
	//     * Set finalFrame to false when more fragments will follow.
	// 
	// For an ordinary single-frame text message, set finalFrame to true. WebSocket
	// text data is UTF-8 on the wire.
	// 
	// Message fragmentation: Repeated calls with finalFrame set to false create
	// fragments of the same text message. Complete the message with a final call that
	// passes true.
	bool SendFrameSb(CkStringBuilder &sbToSend, bool finalFrame);

	// Sends one WebSocket text data frame containing the current contents of sbToSend.
	// 
	//     * Set finalFrame to true when this frame completes the message.
	//     * Set finalFrame to false when more fragments will follow.
	// 
	// For an ordinary single-frame text message, set finalFrame to true. WebSocket
	// text data is UTF-8 on the wire.
	// 
	// Message fragmentation: Repeated calls with finalFrame set to false create
	// fragments of the same text message. Complete the message with a final call that
	// passes true.
	CkTask *SendFrameSbAsync(CkStringBuilder &sbToSend, bool finalFrame);


	// Sends a WebSocket Ping control frame. If pingData is non-empty, its UTF-8 bytes
	// are included as the Ping payload.
	// 
	// WebSocket control-frame payloads are limited to 125 bytes. If the UTF-8
	// representation exceeds this limit, Chilkat truncates it to 125 bytes.
	// 
	// Ping/Pong behavior: A peer that receives a Ping is expected to send a Pong
	// containing the same application data as soon as practical. Ping is useful for
	// protocol-level liveness checks, but receiving a Pong does not by itself prove
	// that the application running above the connection is healthy.
	bool SendPing(const char *pingData);

	// Sends a WebSocket Ping control frame. If pingData is non-empty, its UTF-8 bytes
	// are included as the Ping payload.
	// 
	// WebSocket control-frame payloads are limited to 125 bytes. If the UTF-8
	// representation exceeds this limit, Chilkat truncates it to 125 bytes.
	// 
	// Ping/Pong behavior: A peer that receives a Ping is expected to send a Pong
	// containing the same application data as soon as practical. Ping is useful for
	// protocol-level liveness checks, but receiving a Pong does not by itself prove
	// that the application running above the connection is healthy.
	CkTask *SendPingAsync(const char *pingData);


	// Sends a WebSocket Pong control frame.
	// 
	// When a Ping has been received and has not yet been answered, this method
	// automatically uses the previously received Ping payload as the Pong payload, as
	// required for a Ping response.
	// 
	// Manual response mode: This method is normally used when PingAutoRespond is
	// false and NeedSendPong is true. When automatic Ping handling is enabled,
	// Chilkat sends the Pong internally.
	bool SendPong(void);

	// Sends a WebSocket Pong control frame.
	// 
	// When a Ping has been received and has not yet been answered, this method
	// automatically uses the previously received Ping payload as the Pong payload, as
	// required for a Ping response.
	// 
	// Manual response mode: This method is normally used when PingAutoRespond is
	// false and NeedSendPong is true. When automatic Ping handling is enabled,
	// Chilkat sends the Pong internally.
	CkTask *SendPongAsync(void);


	// Causes the calling WebSocket object to share the already-established WebSocket
	// connection owned by ws.
	// 
	// This enables a bidirectional design in which separate WebSocket objects operate
	// on the same connection—for example, one thread blocks in ReadFrame while another
	// thread sends frames.
	// 
	// Concurrency model: Use this feature to separate the read path from the write
	// path. The application remains responsible for coordinating object lifetime,
	// shutdown, and higher-level message state. Avoid multiple concurrent readers or
	// multiple unsynchronized writers unless the application provides its own
	// coordination.
	bool ShareConnection(CkWebSocket &ws);


	// Associates this WebSocket object with an existing, connected Rest object and
	// prepares it for a client-side WebSocket session.
	// 
	// The opening WebSocket handshake is an HTTP GET upgrade request. Using Rest for
	// the underlying connection allows the application to configure TLS, proxies,
	// authentication, custom request headers, IPv6, socket options, bandwidth limits,
	// and other connection features before the upgrade is performed.
	// 
	// Client-side API: Chilkat.WebSocket initiates connections to WebSocket servers.
	// It does not listen for incoming connections or implement a WebSocket server
	// endpoint.
	// Typical opening sequence
	//     1. Connect the Rest object to the server.
	//     2. Call UseConnection.
	//     3. Call AddClientHeaders.
	//     4. Send the HTTP GET request with the Rest object.
	//     5. Call ValidateServerHandshake.
	bool UseConnection(CkRest &connection);


	// Validates the server's response to the WebSocket opening handshake sent through
	// the associated Rest object.
	// 
	// Validation checks that the server accepted the HTTP upgrade and returned the
	// expected WebSocket handshake response, including the value derived from the
	// client's Sec-WebSocket-Key. If this method returns true, the connection has
	// entered the WebSocket protocol and data or control frames may be exchanged.
	// 
	// Call order: Call this method only after the Rest object has sent the opening GET
	// request and received the server's response. A successful HTTP request alone does
	// not establish a WebSocket session; the response must also pass this validation.
	bool ValidateServerHandshake(void);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
