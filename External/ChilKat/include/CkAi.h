// CkAi.h: interface for the CkAi class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkAi_H
#define _CkAi_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkJsonObject;
class CkStringTable;
class CkBinData;
class CkStringBuilder;
class CkSocket;
class CkMcp;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkAi
class CK_VISIBLE_PUBLIC CkAi  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkAi(const CkAi &);
	CkAi &operator=(const CkAi &);

    public:
	CkAi(void);
	virtual ~CkAi(void);

	static CkAi *createNew(void);
	static CkAi *createNew2(int progLang);
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
	// This is the API key used for authentication. Use your API key that matches your
	// Provider[1].
	// 
	// Suggestion: Use Chilkat's Secrets class to store and retrieve API keys in any of
	// the following locations.
	//     * Windows Credentials Manager
	//     * Apple Keychain
	//     * AWS Secrets Manager
	//     * Azure Key Vault
	//     * IBM Cloud Secrets Manager
	//     * Oracle Cloud Secrets
	//     * Doppler Secrets
	// 
	// 
	// References:
	// [1] #Provider
	void get_ApiKey(CkString &str);
	// This is the API key used for authentication. Use your API key that matches your
	// Provider[1].
	// 
	// Suggestion: Use Chilkat's Secrets class to store and retrieve API keys in any of
	// the following locations.
	//     * Windows Credentials Manager
	//     * Apple Keychain
	//     * AWS Secrets Manager
	//     * Azure Key Vault
	//     * IBM Cloud Secrets Manager
	//     * Oracle Cloud Secrets
	//     * Doppler Secrets
	// 
	// 
	// References:
	// [1] #Provider
	const char *apiKey(void);
	// This is the API key used for authentication. Use your API key that matches your
	// Provider[1].
	// 
	// Suggestion: Use Chilkat's Secrets class to store and retrieve API keys in any of
	// the following locations.
	//     * Windows Credentials Manager
	//     * Apple Keychain
	//     * AWS Secrets Manager
	//     * Azure Key Vault
	//     * IBM Cloud Secrets Manager
	//     * Oracle Cloud Secrets
	//     * Doppler Secrets
	// 
	// 
	// References:
	// [1] #Provider
	void put_ApiKey(const char *newVal);

	// For custom Provider[1] 's, use this field name for the API key in the HTTP
	// header, but only if the API key is to be placed in a custom header field. If the
	// API key is to be provided in an "Authorization: Bearer" header, then leave this
	// property empty.
	// 
	// The default value of this property is the empty string.
	// 
	// 
	// References:
	// [1] #Provider
	void get_ApiKeyHeader(CkString &str);
	// For custom Provider[1] 's, use this field name for the API key in the HTTP
	// header, but only if the API key is to be placed in a custom header field. If the
	// API key is to be provided in an "Authorization: Bearer" header, then leave this
	// property empty.
	// 
	// The default value of this property is the empty string.
	// 
	// 
	// References:
	// [1] #Provider
	const char *apiKeyHeader(void);
	// For custom Provider[1] 's, use this field name for the API key in the HTTP
	// header, but only if the API key is to be placed in a custom header field. If the
	// API key is to be provided in an "Authorization: Bearer" header, then leave this
	// property empty.
	// 
	// The default value of this property is the empty string.
	// 
	// 
	// References:
	// [1] #Provider
	void put_ApiKeyHeader(const char *newVal);

	// Specifies the API specification to be used. Possible choices are
	// ChatCompletions, Responses, Gemini, Anthropic. The default value is Responses
	// because the default value of the Provider[1] property is openai. Setting the
	// Provider[1] property to a value other than custom will also automatically set
	// this property to the correct and needed value.
	// 
	// References:
	// [1] #Provider
	void get_ApiSpec(CkString &str);
	// Specifies the API specification to be used. Possible choices are
	// ChatCompletions, Responses, Gemini, Anthropic. The default value is Responses
	// because the default value of the Provider[1] property is openai. Setting the
	// Provider[1] property to a value other than custom will also automatically set
	// this property to the correct and needed value.
	// 
	// References:
	// [1] #Provider
	const char *apiSpec(void);
	// Specifies the API specification to be used. Possible choices are
	// ChatCompletions, Responses, Gemini, Anthropic. The default value is Responses
	// because the default value of the Provider[1] property is openai. Setting the
	// Provider[1] property to a value other than custom will also automatically set
	// this property to the correct and needed value.
	// 
	// References:
	// [1] #Provider
	void put_ApiSpec(const char *newVal);

	// Specifies the provider's base URL. For example, http://localhost:11434/v1 or
	// https://api.together.xyz/v1. The default value is https://api.openai.com/v1
	// because the default value of the Provider[1] property is openai. Setting the
	// Provider[1] property to a value other than custom will also automatically set
	// this property to the correct and needed value.
	// 
	// References:
	// [1] #Provider
	void get_BaseUrl(CkString &str);
	// Specifies the provider's base URL. For example, http://localhost:11434/v1 or
	// https://api.together.xyz/v1. The default value is https://api.openai.com/v1
	// because the default value of the Provider[1] property is openai. Setting the
	// Provider[1] property to a value other than custom will also automatically set
	// this property to the correct and needed value.
	// 
	// References:
	// [1] #Provider
	const char *baseUrl(void);
	// Specifies the provider's base URL. For example, http://localhost:11434/v1 or
	// https://api.together.xyz/v1. The default value is https://api.openai.com/v1
	// because the default value of the Provider[1] property is openai. Setting the
	// Provider[1] property to a value other than custom will also automatically set
	// this property to the correct and needed value.
	// 
	// References:
	// [1] #Provider
	void put_BaseUrl(const char *newVal);

	// If true a secret specifier of the format "!!part1|part2|.." can be provided
	// instead of the actual value for the ApiKey property.
	// 
	// The default value is false.
	// 
	bool get_EnableSecrets(void);
	// If true a secret specifier of the format "!!part1|part2|.." can be provided
	// instead of the actual value for the ApiKey property.
	// 
	// The default value is false.
	// 
	void put_EnableSecrets(bool newVal);

	// For multimodal inputs like image data, image URLs, file data, and file URLs, the
	// full data or URL is sent initially. If the property is set to true, the full
	// data/URL is re-sent in subsequent interactions. If set to false, only the
	// image or file summary is sent thereafter.
	// 
	// By default, this property is false.
	// 
	// Full transcript style: always send the entire conversation (including
	// files/images). This guarantees the model has all context, but can get expensive.
	// 
	// Summarized transcript style: for previously sent multimodal items, sends the
	// summary message (e.g. “Earlier, I uploaded a PDF with account statements”)
	// instead of the raw file or url itself.
	// 
	bool get_FullTranscript(void);
	// For multimodal inputs like image data, image URLs, file data, and file URLs, the
	// full data or URL is sent initially. If the property is set to true, the full
	// data/URL is re-sent in subsequent interactions. If set to false, only the
	// image or file summary is sent thereafter.
	// 
	// By default, this property is false.
	// 
	// Full transcript style: always send the entire conversation (including
	// files/images). This guarantees the model has all context, but can get expensive.
	// 
	// Summarized transcript style: for previously sent multimodal items, sends the
	// summary message (e.g. “Earlier, I uploaded a PDF with account statements”)
	// instead of the raw file or url itself.
	// 
	void put_FullTranscript(bool newVal);

	// true if the response output has function calls. Otherwise false. This only
	// applies to manual function tool calling, not automatic JS tool calls.
	bool get_HasFunctionCalls(void);

	// The interval in milliseconds between each AbortCheck[1] event callback, which
	// enables an application to abort certain method calls before they complete. By
	// default, HeartbeatMs is set to 0, meaning no AbortCheck event callbacks will
	// trigger.
	// 
	// References:
	// [1] #AbortCheck
	int get_HeartbeatMs(void);
	// The interval in milliseconds between each AbortCheck[1] event callback, which
	// enables an application to abort certain method calls before they complete. By
	// default, HeartbeatMs is set to 0, meaning no AbortCheck event callbacks will
	// trigger.
	// 
	// References:
	// [1] #AbortCheck
	void put_HeartbeatMs(int newVal);

	// This applies to providers like OpenAI that can maintain conversation state on
	// the server. If set to true, only the conversation ID is sent with each query.
	// If set to false, the entire conversation transcript is sent with each query,
	// making each query stateless.
	// 
	// This only applies if a conversation is selected.
	// 
	// The default value of this property is false.
	// 
	bool get_HostedConvo(void);
	// This applies to providers like OpenAI that can maintain conversation state on
	// the server. If set to true, only the conversation ID is sent with each query.
	// If set to false, the entire conversation transcript is sent with each query,
	// making each query stateless.
	// 
	// This only applies if a conversation is selected.
	// 
	// The default value of this property is false.
	// 
	void put_HostedConvo(bool newVal);

	// The maximum amount of time to wait for additional incoming data when receiving a
	// response. The default value is 90000 (90 seconds) in v11.3.0 and earlier.
	// Starting in v11.4.0, the default value is 180000 (180 seconds).
	// 
	// This is not a total timeout, but the maximum time allowed when data transmission
	// has paused.
	// 
	int get_IdleTimeoutMs(void);
	// The maximum amount of time to wait for additional incoming data when receiving a
	// response. The default value is 90000 (90 seconds) in v11.3.0 and earlier.
	// Starting in v11.4.0, the default value is 180000 (180 seconds).
	// 
	// This is not a total timeout, but the maximum time allowed when data transmission
	// has paused.
	// 
	void put_IdleTimeoutMs(int newVal);

	// The maximum time in seconds allowed for an automatic JavaScript tool function.
	// The default value is 60 seconds to allow for most use cases, but to prevent an
	// tool call that never returns.
	int get_JsToolTimeout(void);
	// The maximum time in seconds allowed for an automatic JavaScript tool function.
	// The default value is 60 seconds to allow for most use cases, but to prevent an
	// tool call that never returns.
	void put_JsToolTimeout(int newVal);

	// Read-only. true if the model refused to produce the requested structured
	// output during the most recent Ask[1]. When a refusal occurs, GetOutputJson[2]
	// returns false and the provider's explanation is available in RefusalText[3].
	// This property is reset at the start of each Ask[1].
	// 
	// References:
	// [1] #Ask
	// [2] #GetOutputJson
	// [3] #RefusalText
	bool get_LastResponseRefused(void);

	// The model to be used for AI conversations. For example, GPT-4o or GPT-5. The
	// list of available models can be obtained by calling GetModels[1].
	// 
	// The default value is the empty string. A model must always be specified. Chilkat
	// won't try to guess or default to a model.
	// 
	// 
	// References:
	// [1] #GetModels
	void get_Model(CkString &str);
	// The model to be used for AI conversations. For example, GPT-4o or GPT-5. The
	// list of available models can be obtained by calling GetModels[1].
	// 
	// The default value is the empty string. A model must always be specified. Chilkat
	// won't try to guess or default to a model.
	// 
	// 
	// References:
	// [1] #GetModels
	const char *model(void);
	// The model to be used for AI conversations. For example, GPT-4o or GPT-5. The
	// list of available models can be obtained by calling GetModels[1].
	// 
	// The default value is the empty string. A model must always be specified. Chilkat
	// won't try to guess or default to a model.
	// 
	// 
	// References:
	// [1] #GetModels
	void put_Model(const char *newVal);

	// This is the AI provider. Possible values are: openai, google, claude, deepseek,
	// perplexity, mistral, and xai.
	// 
	// Starting in Chilkat v11.3.0, this property can be set to custom, and the
	// BaseUrl[1] and ApiSpec[2] properties can also be set to fully specify the
	// provider.
	// 
	// Starting in v11.6.0, this property can also be set to openai-compatible, a
	// convenience alias for a custom provider that speaks the OpenAI Chat Completions
	// API. It presets ApiSpec[2] to ChatCompletions, so you only need to set
	// BaseUrl[1] (plus ApiKey[3] and Model[4]). This is the simplest way to use
	// OpenAI-compatible endpoints such as Ollama, LM Studio, OpenWebUI, and many
	// hosting providers.
	// 
	// Note: mistral is recognized as a pre-configured known provider starting in
	// v11.4.0.
	// 
	// The default value is openai.
	// 
	// 
	// References:
	// [1] #BaseUrl
	// [2] #ApiSpec
	// [3] #ApiKey
	// [4] #Model
	void get_Provider(CkString &str);
	// This is the AI provider. Possible values are: openai, google, claude, deepseek,
	// perplexity, mistral, and xai.
	// 
	// Starting in Chilkat v11.3.0, this property can be set to custom, and the
	// BaseUrl[1] and ApiSpec[2] properties can also be set to fully specify the
	// provider.
	// 
	// Starting in v11.6.0, this property can also be set to openai-compatible, a
	// convenience alias for a custom provider that speaks the OpenAI Chat Completions
	// API. It presets ApiSpec[2] to ChatCompletions, so you only need to set
	// BaseUrl[1] (plus ApiKey[3] and Model[4]). This is the simplest way to use
	// OpenAI-compatible endpoints such as Ollama, LM Studio, OpenWebUI, and many
	// hosting providers.
	// 
	// Note: mistral is recognized as a pre-configured known provider starting in
	// v11.4.0.
	// 
	// The default value is openai.
	// 
	// 
	// References:
	// [1] #BaseUrl
	// [2] #ApiSpec
	// [3] #ApiKey
	// [4] #Model
	const char *provider(void);
	// This is the AI provider. Possible values are: openai, google, claude, deepseek,
	// perplexity, mistral, and xai.
	// 
	// Starting in Chilkat v11.3.0, this property can be set to custom, and the
	// BaseUrl[1] and ApiSpec[2] properties can also be set to fully specify the
	// provider.
	// 
	// Starting in v11.6.0, this property can also be set to openai-compatible, a
	// convenience alias for a custom provider that speaks the OpenAI Chat Completions
	// API. It presets ApiSpec[2] to ChatCompletions, so you only need to set
	// BaseUrl[1] (plus ApiKey[3] and Model[4]). This is the simplest way to use
	// OpenAI-compatible endpoints such as Ollama, LM Studio, OpenWebUI, and many
	// hosting providers.
	// 
	// Note: mistral is recognized as a pre-configured known provider starting in
	// v11.4.0.
	// 
	// The default value is openai.
	// 
	// 
	// References:
	// [1] #BaseUrl
	// [2] #ApiSpec
	// [3] #ApiKey
	// [4] #Model
	void put_Provider(const char *newVal);

	// Read-only. When LastResponseRefused[1] is true, this is the model's message
	// explaining why it declined to produce the requested structured output. Otherwise
	// it is the empty string.
	// 
	// References:
	// [1] #LastResponseRefused
	void get_RefusalText(CkString &str);
	// Read-only. When LastResponseRefused[1] is true, this is the model's message
	// explaining why it declined to produce the requested structured output. Otherwise
	// it is the empty string.
	// 
	// References:
	// [1] #LastResponseRefused
	const char *refusalText(void);

	// The HTTP response status code for the last Ask[1] is as follows:
	//     * 0 indicates an error occurred before receiving an HTTP response.
	//     * 200 indicates a successful response.
	//     * A failed response has a status code of 400 or higher.
	// 
	// References:
	// [1] #Ask
	int get_ResponseStatusCode(void);

	// The currently selected conversation can be set to your desired conversation
	// name. Once set, all future queries will be part of that conversation, updating
	// its state with each input and output. By default, no conversation is selected,
	// indicated by an empty string, leading to stateless queries. The first
	// conversation created or imported will be automatically selected. If you attempt
	// to select a non-existent conversation, the selection will not change. You can
	// reset this property to an empty string to revert to stateless querying.
	void get_SelectedConvo(CkString &str);
	// The currently selected conversation can be set to your desired conversation
	// name. Once set, all future queries will be part of that conversation, updating
	// its state with each input and output. By default, no conversation is selected,
	// indicated by an empty string, leading to stateless queries. The first
	// conversation created or imported will be automatically selected. If you attempt
	// to select a non-existent conversation, the selection will not change. You can
	// reset this property to an empty string to revert to stateless querying.
	const char *selectedConvo(void);
	// The currently selected conversation can be set to your desired conversation
	// name. Once set, all future queries will be part of that conversation, updating
	// its state with each input and output. By default, no conversation is selected,
	// indicated by an empty string, leading to stateless queries. The first
	// conversation created or imported will be automatically selected. If you attempt
	// to select a non-existent conversation, the selection will not change. You can
	// reset this property to an empty string to revert to stateless querying.
	void put_SelectedConvo(const char *newVal);

	// When set to true, the Ask[1] method operates in streaming mode, returning
	// immediately after the request is sent. You can then use the PollAi and
	// NextAiEvent methods to receive streaming events. By default, this property is
	// false.
	// 
	// References:
	// [1] #Ask
	bool get_Streaming(void);
	// When set to true, the Ask[1] method operates in streaming mode, returning
	// immediately after the request is sent. You can then use the PollAi and
	// NextAiEvent methods to receive streaming events. By default, this property is
	// false.
	// 
	// References:
	// [1] #Ask
	void put_Streaming(bool newVal);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	const char *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Sends the current potentially multimodal input within the context of the
	// selected conversation and receives the model's output. Prior to v11.4.0 the outputType
	// is limited to text. Starting in v11.4.0, the outputType can be set to image for AI
	// providers that support conversational image output.
	// 
	// Accumulated outputs are cleared on entry to this method. Accumulated inputs are
	// cleared on the successful return of this method.
	// 
	// This method cannot be called while a streaming Ask is in progress. In such a
	// case the return value is false and nothing will occur.
	// 
	bool Ask(const char *outputType);

	// Sends the current potentially multimodal input within the context of the
	// selected conversation and receives the model's output. Prior to v11.4.0 the outputType
	// is limited to text. Starting in v11.4.0, the outputType can be set to image for AI
	// providers that support conversational image output.
	// 
	// Accumulated outputs are cleared on entry to this method. Accumulated inputs are
	// cleared on the successful return of this method.
	// 
	// This method cannot be called while a streaming Ask is in progress. In such a
	// case the return value is false and nothing will occur.
	// 
	CkTask *AskAsync(const char *outputType);


	// Deletes the conversation by its name. If name equals * then all conversations
	// are deleted.
	bool DeleteConvo(const char *name);


	// Exports the conversation specified by name to json, replacing json's contents
	// with the exported transcript. You can later import a conversation using
	// ImportConvo[1]. The currently selected conversation can be exported by passing *
	// for the name.
	// 
	// References:
	// [1] #ImportConvo
	bool ExportConvo(const char *name, CkJsonObject &json);


	// This method returns the function calls in json if the output contains any.
	// Returns true if one or more function calls were returned, otherwise returns
	// false. This only applies to manual function tool calling, not automatic JS
	// tool calls.
	bool GetFunctionCalls(CkJsonObject &json);


	// Provides details about the last method called on this object instance. While
	// many methods do not generate information, some allow you to retrieve details by
	// accessing the last JSON data immediately after the method call returns.
	// 
	// Methods that produce last JSON information include: GetModels[1].
	// 
	// 
	// References:
	// [1] #GetModels
	void GetLastJsonData(CkJsonObject &json);


	// Returns a list of models available to your account, such as GPT-4o and GPT-5.
	// The models are listed in st, sorted in ascending, case-insensitive order. To
	// access the raw JSON response after calling this method, use GetLastJsonData[1].
	// 
	// References:
	// [1] #GetLastJsonData
	bool GetModels(CkStringTable &st);

	// Returns a list of models available to your account, such as GPT-4o and GPT-5.
	// The models are listed in st, sorted in ascending, case-insensitive order. To
	// access the raw JSON response after calling this method, use GetLastJsonData[1].
	// 
	// References:
	// [1] #GetLastJsonData
	CkTask *GetModelsAsync(CkStringTable &st);


	// Returns in bd the binary output from the last call to Ask[1], such as for an
	// AI generated image.
	// 
	// References:
	// [1] #Ask
	bool GetOutputBd(CkBinData &bd);


	// Returns the model's structured JSON output from the most recent Ask[1], parsed
	// into json. Use this after setting a schema with SetOutputSchema[2]. Returns
	// true and populates json when the output is valid JSON. Returns false if the
	// model refused to produce the output (in which case LastResponseRefused[3] is
	// true and RefusalText[4] contains the explanation), if there is no output, or
	// if the output is not valid JSON. The raw JSON text is also available from
	// GetOutputText[5].
	// 
	// References:
	// [1] #Ask
	// [2] #SetOutputSchema
	// [3] #LastResponseRefused
	// [4] #RefusalText
	// [5] #GetOutputText
	bool GetOutputJson(CkJsonObject &json);


	// Returns the text output from the last call to Ask[1].
	// 
	// References:
	// [1] #Ask
	bool GetOutputText(CkString &outStr);

	// Returns the text output from the last call to Ask[1].
	// 
	// References:
	// [1] #Ask
	const char *getOutputText(void);
	// Returns the text output from the last call to Ask[1].
	// 
	// References:
	// [1] #Ask
	const char *outputText(void);


	// Returns the text output, appended to sb, from the last call to Ask[1].
	// 
	// References:
	// [1] #Ask
	bool GetOutputTextSb(CkStringBuilder &sb);


	// Returns the web search sources the model used in the most recent Ask[1], if web
	// search was enabled via the web_search param of SetAskParams[2]. Returns true
	// if the last Ask[1] performed one or more web searches, in which case the
	// normalized results are placed in json. Returns false if no web search
	// occurred.
	// 
	// Chilkat normalizes the differing citation formats of each AI provider into a
	// single flat structure. json is populated as follows:{
	//   "search_results": [
	//     {
	//       "url": "https://example.com/article",
	//       "title": "Example Article Title",
	//       "snippet": "The relevant excerpt the model drew from...",
	//       "page_age": "2025-08-01"
	//     }
	//   ]
	// }
	// 
	// The snippet and page_age members are populated only when the provider supplies
	// them, and may be absent otherwise. Each provider returns a different citation
	// shape (for example, OpenAI returns url_citation annotations with character
	// offsets, Anthropic returns web_search_tool_result content blocks, Google returns
	// groundingMetadata, and Perplexity returns a search_results array). The full,
	// unmodified provider response — including any character-offset annotations not
	// represented in the normalized form — remains available via GetLastJsonData[3].
	// 
	// Streaming: In streaming mode, a standardized web_search_call event is delivered
	// through NextAiEvent[4] when the provider begins a search, and the normalized
	// results are available from this method after the null_terminator event completes
	// the response.
	// 
	// 
	// References:
	// [1] #Ask
	// [2] #SetAskParams
	// [3] #GetLastJsonData
	// [4] #NextAiEvent
	bool GetSearchResults(CkJsonObject &json);


	// Imports the conversation from json and assigns it the name in name.
	bool ImportConvo(const char *name, CkJsonObject &json);


	// Adds file data, such as a PDF, to the potentially multimodal input that will be
	// sent in the next call to Ask[1]. The bd contains the file data.
	// 
	// If FullTranscript[2] is _CKFALSE_, summary is sent in subsequent interactions
	// instead of the file data. If FullTranscript[2] is true, summary is not sent, and
	// the file data is re-sent in each interaction.
	// 
	// This method cannot be used with DeepSeek.
	// 
	// 
	// References:
	// [1] #Ask
	// [2] #FullTranscript
	bool InputAddFileData(const char *filename, CkBinData &bd, const char *summary);


	// Adds a reference to a previously uploaded file. The file_id is the id returned from
	// the provider when originally uploading the file. The mime_type, such as
	// "application/pdf", "application/json", "text/xml", etc. is needed for some AI
	// providers such as Google.
	bool InputAddFileId(const char *file_id, const char *mime_type);


	// Adds a file located at a url to the potentially multimodal input that will be
	// sent in the next call to Ask[1].
	// 
	// If FullTranscript[2] is _CKFALSE_, summary is sent in subsequent interactions
	// instead of the file URL. If FullTranscript[2] is true, summary is not sent, and
	// the file URL is re-sent in each interaction.
	// 
	// This method cannot be used with DeepSeek.
	// 
	// 
	// References:
	// [1] #Ask
	// [2] #FullTranscript
	bool InputAddFileUrl(const char *url, const char *summary);


	// Provide a function call result to the model. This only applies to manual
	// function tool calling, not automatic JS tool calls.
	bool InputAddFnResult(const char *call_id, const char *fnResult);


	// Adds an image to the potentially multimodal input that will be sent in the next
	// call to Ask[1]. The bd contains the images data. The image data must be jpeg,
	// png, or webp format.
	// 
	// If FullTranscript[2] is _CKFALSE_, summary is sent in subsequent interactions
	// instead of the image data. If FullTranscript[2] is true, summary is not sent, and
	// the image data is re-sent in each interaction.
	// 
	// This method cannot be used with DeepSeek. DeepSeek does not appear to expose an
	// OpenAI-compatible vision model (yet). You cannot send image URLs or image data
	// to DeepSeek.
	// 
	// 
	// References:
	// [1] #Ask
	// [2] #FullTranscript
	bool InputAddImageData(CkBinData &bd, const char *summary);


	// Adds a reference to a previously uploaded image file. The file_id is the id
	// returned from the provider when originally uploading the file. The mime_type, such as
	// "image/jpeg" is needed for some AI providers such as Google.
	// 
	// Note: At this time, only OpenAI and Google support the ability to upload once →
	// get file_id → reuse in later requests' workflow for images.
	// 
	bool InputAddImageFileId(const char *file_id, const char *mime_type);


	// Adds an image located at a url to the potentially multimodal input that will be
	// sent in the next call to Ask[1].
	// 
	// If FullTranscript[2] is _CKFALSE_, summary is sent in subsequent interactions
	// instead of the image URL. If FullTranscript[2] is true, summary is not sent, and
	// the image URL is re-sent in each interaction.
	// 
	// This method cannot be used with DeepSeek. DeepSeek does not appear to expose an
	// OpenAI-compatible vision model (yet). You cannot send image URLs or image data
	// to DeepSeek.
	// 
	// 
	// References:
	// [1] #Ask
	// [2] #FullTranscript
	bool InputAddImageUrl(const char *url, const char *summary);


	// Adds text to the potentially multimodal input that will be sent in the next call
	// to Ask[1].
	// 
	// References:
	// [1] #Ask
	bool InputAddText(const char *text);


	// Adds text to the potentially multimodal input that will be sent in the next call
	// to Ask[1].
	// 
	// References:
	// [1] #Ask
	bool InputAddTextSb(CkStringBuilder &sb);


	// Clears the inputs to be sent in the next call to Ask[1].
	// 
	// References:
	// [1] #Ask
	void InputClear(void);


	// Returns the full list of conversation names in st.
	bool ListConvos(CkStringTable &st);


	// Creates and initializes a transcript for a new conversation. The name is a
	// unique name for the conversation. You can reference the conversation by this
	// name, such as for the ExportConvo[1] method.
	// 
	// The sysMsg sets the broad behavior, tone, and role of the assistant. Example: "You
	// are a polite tutor who explains concepts clearly and simply." Think of it as the
	// high-level persona or instructions the model follows throughout the
	// conversation. The devMsg provides more technical or policy-level guidance.
	// Example: "Always respond in Markdown. Do not reveal internal reasoning. Keep
	// answers under 200 words." It’s like hidden scaffolding to enforce app rules,
	// formatting, or safety constraints.
	// 
	// Note: The first conversation created is automatically set as the
	// SelectedConvo[2]. You can use any unique name for a conversation except *.
	// 
	// 
	// References:
	// [1] #ExportConvo
	// [2] #SelectedConvo
	bool NewConvo(const char *name, const char *sysMsg, const char *devMsg);


	// Retrieves the next available AI streaming mode response update. Use the
	// PollAi[1] method to check if a response update is immediately accessible. The
	// event name is returned in sbName. If the event name is delta, the text is returned
	// in sbDelta.
	// 
	// For the complete raw event JSON, use the GetLastJsonData[2] function. Note that
	// the raw JSON format varies by AI provider.
	// 
	// Each AI provider (e.g., OpenAI, Claude, xAI) sends a unique set of events. Some
	// of these events mark the start and end of sections and content parts, while
	// others do not. Chilkat standardizes these events and returns the following event
	// types.
	//     * response_created — The server acknowledges the request and has created a
	//     response object. Nothing has been streamed yet — it’s just the signal that the
	//     response pipeline is open.
	//     * empty — Some AI providers send empty heartbeat / keep-alive updates to
	//     ensure the stream stays open and proxies don't time out.
	//     * output_item_added — A new output item has been added to the response. An
	//     “output item” is a top-level container — could be text, tool call, or other
	//     structured content.
	//     * content_part_added — Within the output item, the model starts a new
	//     content part. A content part is typically a segment of a specific type (e.g.,
	//     text, JSON snippet, or image reference).
	//     * delta — These are the incremental text tokens being streamed. Each delta
	//     contains the next piece of text (like characters or words). You’ll see many of
	//     these in sequence while the model is generating.
	//     * output_text_done — Marks the end of the text streaming for that content
	//     part. No more deltas will arrive for this part.
	//     * content_part_done — Closes the current content part. Tells you the model
	//     is finished with that segment (e.g., done streaming a paragraph).
	//     * output_item_done — Closes the current output item entirely. Means that
	//     item is fully complete (all its parts are done).
	//     * response_completed — The entire response object is finished. No more items
	//     will be added, and the stream will soon close.
	//     * null_terminator — The stream is closed. All streaming responses end with a
	//     single null_terminator.
	//     * function_call — (starting in v11.4.0) The AI model is requesting a
	//     function call. This is for manual tool calling.
	//     * js_function_call — (starting in v11.4.0) The AI model is requesting a
	//     function call that Chilkat can execute automatically. Call
	//     StreamingJsToolCall[3] to run it. This covers both JavaScript tools
	//     (RegisterJsTools[4]) and MCP tools (UseMcp[5]).
	//     * web_search_call — (starting in v11.6.0) The AI provider is performing a
	//     server-side web search while generating the response. This is an informational
	//     progress event (useful for showing a "Searching the web…" indicator); the
	//     application takes no action. The retrieved sources are available from
	//     GetSearchResults[6] after the response completes.
	// 
	// maxWaitMs defines the maximum wait time to receive the complete event. For instance,
	// if PollAi[1] signals an available streaming update but only part of the event
	// JSON has been received, the rest is probably on its way. In such cases, this
	// method must wait to receive the entire JSON.
	// 
	// 
	// References:
	// [1] #PollAi
	// [2] #GetLastJsonData
	// [3] #StreamingJsToolCall
	// [4] #RegisterJsTools
	// [5] #UseMcp
	// [6] #GetSearchResults
	bool NextAiEvent(int maxWaitMs, CkStringBuilder &sbName, CkStringBuilder &sbDelta);


	// Returns immediately with one of the following values:
	// 
	// -1 - Error
	// 0 - No streaming event updates are available.
	// 1 - A streaming event updates is ready for retrieval via NextAiEvent[1]
	// 2 - The streaming AI response has already completed, or no streaming response is
	// ongoing.
	// 
	// If abort is true, then the streaming response is aborted and this method
	// returns the value 2. Applications should pass in false for abort to continue
	// streaming.
	// 
	// 
	// References:
	// [1] #NextAiEvent
	int PollAi(bool abort);


	// Adds JavaScript tool functions to the AI. This function can be called multiple
	// times to add tool functions from multiple JavaScript sources. The JavaScript is
	// passed in sb. If evalOnly is true, then the sb contains JavaScript to be run
	// for the purpose of adding supporting functions and does not contain a
	// toolRegistry.
	// 
	// The allowAllKeyword indicates whether the all keyword is allowed in the toolPermissions. If
	// multiple JavaScript tool sources are loaded with several calls to
	// RegisterJsTools, we may not want one to clobber the permissions needed by
	// another. The application can ensure this doesn't happen by setting this property
	// to false.
	// 
	bool RegisterJsTools(CkStringBuilder &sb, bool evalOnly, bool allowAllKeyword);


	// Sets the tools JSON for AI requests.
	bool RegisterManualTools(CkJsonObject &json);


	// Sets additional Ask[1] params such as:
	//     * effort (see below)
	//     * max_output_tokens (see below)
	//     * max_tool_iterations - v11.4.0 Applies only to automatic JavaScript tool
	//     function calls. Sets a maximum number of AI model tool responses that can be
	//     received. The default is 5. This is to prevent an unlikely and unexpected
	//     infinite cycle of AI model tool responses and automatic tool calling.
	//     * temperature (see below)
	//     * web_search - v11.6.0 A JSON object that enables provider-hosted web search
	//     (also called "grounding") so the model can retrieve live results and answer with
	//     citations. See below.
	//     verbose_ai_logging
	// - v11.4.0 Adds even more detailed logging to the LastErrorText[2], more than
	// what is added when the VerboseLogging[3] property is enabled.
	// --------------------------------------------------------------------------------
	// 
	// effort
	// 
	// The effort can be set to none, minimal, low, medium, or high.
	// 
	// Chilkat will automatically convert "effort" to the correct JSON member name and
	// value based on the AI provider.
	// 
	// +---------------------+--------------------------------------------------------+
	// |   API / Provider    |                 JSON Member for Effort                 |
	// +=====================+========================================================+
	// | OpenAI Responses    | reasoning.effort → none|minimal|low|medium|high        |
	// | API                 |                                                        |
	// +---------------------+--------------------------------------------------------+
	// | Anthropic Claude    | output_config.effort → low|medium|high                 |
	// +---------------------+--------------------------------------------------------+
	// | Google Gemini       | generationConfig.thinkingConfig.thinkingLevel →        |
	// |                     | LOW|HIGH                                               |
	// +---------------------+--------------------------------------------------------+
	// | OpenAI Chat         | reasoning_effort → none|minimal|low|medium|high        |
	// | Completions         |                                                        |
	// +---------------------+--------------------------------------------------------+
	// 
	// --------------------------------------------------------------------------------
	// 
	// max_output_tokens
	// 
	// Max output tokens simply limit how long the model’s response is allowed to be.
	// It’s just a cap — the model may use fewer, but cannot exceed it.
	// 
	// Chilkat will automatically convert "max_output_tokens" to the correct JSON
	// member name based on the AI provider.
	// 
	// +-------------------------+----------------------------------+
	// |     API / Provider      |    JSON Member for Max Tokens    |
	// +=========================+==================================+
	// | OpenAI Responses API    | max_output_tokens                |
	// +-------------------------+----------------------------------+
	// | Anthropic Claude        | max_tokens                       |
	// +-------------------------+----------------------------------+
	// | Google Gemini           | generationConfig.maxOutputTokens |
	// +-------------------------+----------------------------------+
	// | OpenAI Chat Completions | max_completion_tokens            |
	// +-------------------------+----------------------------------+
	// 
	// Typical limits (approximate)
	// 
	// Different AI providers enforce different maximum output sizes:
	// 
	// +--------------------------------+---------------------------------------------+
	// |        Provider / Model        |          Typical Max Output Tokens          |
	// +================================+=============================================+
	// | OpenAI GPT-4, GPT-4 Turbo      | ~4,096–8,192 tokens                         |
	// +--------------------------------+---------------------------------------------+
	// | OpenAI GPT-5 / GPT-5.1         | Often ~8,192–16,384 tokens (varies by       |
	// |                                | deployment)                                 |
	// +--------------------------------+---------------------------------------------+
	// | OpenAI o-series (o1, o1-mini,  | ~4,096–8,192 tokens                         |
	// | o3)                            |                                             |
	// +--------------------------------+---------------------------------------------+
	// | Anthropic Claude 3 / 3.5       | ~4,096 tokens (fixed; cannot request more)  |
	// +--------------------------------+---------------------------------------------+
	// | Google Gemini 1.5              | ~8,192–16,384 tokens                        |
	// +--------------------------------+---------------------------------------------+
	// | xAI Grok 1.5                   | ~2,048–4,096 tokens                         |
	// +--------------------------------+---------------------------------------------+
	// | Ollama / local models          | Usually 1,024–4,096 depending on model size |
	// +--------------------------------+---------------------------------------------+
	// 
	// --------------------------------------------------------------------------------
	// 
	// temperature
	// 
	// Most modern AI APIs (including OpenAI’s) allow a temperature range from 0.0 to
	// 2.0. Chilkat will ignore and not send a temperature having a value outside this
	// range.
	// 
	// Here’s the breakdown:
	// 
	//     * 0.0 → 1.0: Traditional range used by older models and most examples.
	//     * >1.0 up to 2.0: Expands randomness even further. Outputs can become highly
	//     creative, unusual, or less controlled.
	// 
	// Practical guidance:
	// 
	//     +-------------+------------------------------------------------------------+
	//     | Temperature |                          Behavior                          |
	//     +=============+============================================================+
	//     | 0.0         | Fully deterministic. Same prompt → same answer.            |
	//     +-------------+------------------------------------------------------------+
	//     | 0.1–0.5     | Focused, safe, factual, ideal for coding and instructions. |
	//     +-------------+------------------------------------------------------------+
	//     | 0.6–1.0     | Creative but still coherent. Great for writing or          |
	//     |             | brainstorming.                                             |
	//     +-------------+------------------------------------------------------------+
	//     | 1.1–2.0     | Very creative, exploratory, sometimes chaotic; useful for  |
	//     |             | idea generation or stylistic experimentation.              |
	//     +-------------+------------------------------------------------------------+
	// 
	// The valid range is technically 0.0 to 2.0, but the commonly useful range is
	// usually 0.0 to ~1.2 for most applications.
	// 
	// --------------------------------------------------------------------------------
	// 
	// web_search (starting in v11.6.0)
	// 
	// The web_search param is a JSON object that turns on the AI provider's
	// server-side web search tool. The provider performs the search while generating
	// the response, and the model answers using the retrieved results. After the
	// Ask[1], the retrieved sources can be obtained by calling GetSearchResults[4].
	// 
	// Example:
	// 
	// {
	//   "web_search": {
	//     "enabled": true,
	//     "max_uses": 3,
	//     "allowed_domains": [ "wikipedia.org", "nasa.gov" ],
	//     "blocked_domains": [ ],
	//     "recency": "week",
	//     "user_location": {
	//       "country": "US",
	//       "city": "Chicago",
	//       "region": "Illinois",
	//       "timezone": "America/Chicago"
	//     }
	//   }
	// }
	// 
	// Chilkat maps each field to the equivalent option for the selected Provider[5]
	// and silently ignores fields the provider does not support. Only enabled is
	// required; every other field is optional.
	// 
	//     * enabled — If true, web search is offered to the model for this Ask[1]. For
	//     perplexity, search is always on, so this is a no-op.
	//     * max_uses — The maximum number of searches the model may perform while
	//     answering. This is the primary cost-control knob (see the billing note below).
	//     * allowed_domains — An array of domains. When present, search results are
	//     restricted to these domains.
	//     * blocked_domains — An array of domains to exclude from results. Do not
	//     specify both allowed_domains and blocked_domains in the same request unless
	//     the provider permits it.
	//     * recency — Limits results by age. Possible values are day, week, month, or
	//     year.
	//     * user_location — An optional object with country, city, region, and
	//     timezone members used to localize results.
	// 
	// Provider support matrix
	// 
	// +-----------------+------------+------------+---------------+------------+------------+
	// |      Field      |   openai   |   claude   |    google     |    xai     | perplexity |
	// +=================+============+============+===============+============+============+
	// | enabled         | web_search | web_search | google_search | web_search | always on  |
	// |                 | tool       | tool       |               | tool       |            |
	// +-----------------+------------+------------+---------------+------------+------------+
	// | max_uses        | —          | ✓          | —             | —          | —          |
	// +-----------------+------------+------------+---------------+------------+------------+
	// | allowed_domains | ✓          | ✓          | —             | ✓          | ✓          |
	// +-----------------+------------+------------+---------------+------------+------------+
	// | blocked_domains | —          | ✓          | —             | ✓          | ✓          |
	// +-----------------+------------+------------+---------------+------------+------------+
	// | recency         | —          | —          | —             | —          | ✓          |
	// +-----------------+------------+------------+---------------+------------+------------+
	// | user_location   | ✓          | ✓          | —             | —          | —          |
	// +-----------------+------------+------------+---------------+------------+------------+
	// 
	// xAI (Grok): Web search uses xAI's Agent Tools API on the Responses endpoint.
	// Chilkat automatically routes a Grok web search request to that endpoint, so a
	// web-search-capable Grok model (for example grok-4.5) is required. For Grok, only
	// allowed_domains and blocked_domains (each limited to 5 domains, and mutually
	// exclusive) are supported. xAI's older chat-completions "Live Search" is
	// deprecated.
	// 
	// Not supported: deepseek and mistral (chat) do not expose a web search tool. If
	// web_search is set for these providers, the Ask[1] proceeds without search and a
	// note is written to the LastErrorText[2]. This keeps provider-switching code
	// working when only the Provider[5] property changes.
	// 
	// Billing note: Most providers bill web searches separately from tokens (typically
	// per 1,000 searches). Use max_uses where supported to bound per-request cost.
	// 
	// Streaming: When Streaming[6] is enabled, a web_search_call event is delivered
	// through NextAiEvent[7] while the provider performs a search.
	// 
	// 
	// References:
	// [1] #Ask
	// [2] #LastErrorText
	// [3] #VerboseLogging
	// [4] #GetSearchResults
	// [5] #Provider
	// [6] #Streaming
	// [7] #NextAiEvent
	bool SetAskParams(CkJsonObject &json);


	// This method copies connection settings, including HTTP proxy, SOCKS proxy,
	// network interface IP address, and other related settings from sock. It's
	// optional; if not used, default settings apply. Call this method before sending
	// REST API requests to an AI provider.
	bool SetConnectionSettings(CkSocket &sock);


	// Requests schema-constrained JSON output (structured output) for subsequent calls
	// to Ask[1]. name is a short schema name (letters, digits, underscores, and
	// hyphens) used as an identifier by some providers. schema is the desired output
	// shape as a JSON Schema. strict (strict) requests strict conformance where the
	// provider supports it.
	// 
	// Pass an empty string for name to clear a previously-set schema, which disables
	// structured output.
	// 
	// When strict (strict) is true, Chilkat automatically augments the schema for the
	// providers that require it — adding "additionalProperties": false and marking
	// every property required on each object — so an ordinary JSON Schema can be
	// supplied. For example, schema might be:{
	//   "type": "object",
	//   "properties": {
	//     "name": { "type": "string" },
	//     "age": { "type": "integer" }
	//   },
	//   "required": ["name", "age"]
	// }
	// 
	// After Ask[1], the model's JSON is available as text from GetOutputText[2] or
	// parsed from GetOutputJson[3].
	// 
	// Provider support: OpenAI, Anthropic Claude, Google Gemini, xAI Grok, Mistral,
	// and Perplexity return schema-conforming JSON. DeepSeek supports JSON-object mode
	// only (a valid JSON object is returned, but the schema is not enforced).
	// 
	// 
	// References:
	// [1] #Ask
	// [2] #GetOutputText
	// [3] #GetOutputJson
	bool SetOutputSchema(const char *name, CkJsonObject &schema, bool strict);


	// Sets additional provider params needed for some pre-defined providers. As of
	// this current version, the possible params are:
	//     1. azure.clientId, a GUID/UUID such as 17280f2d-f709-4a7b-af1d-9928190e13cf
	//     2. azure.clientSecret, such as UZc8Q~YBrRIgfe_zbAOwWV.8ikuHa3JJF7LvCdt.
	//     3. azure.tenantId, a GUID/UUID such as aa4b5625-a31f-44dd-94ec-e2f6c0c64d2c
	//     4. azure.location, such as eastus
	//     5. azure.subscription, a GUID/UUID such as
	//     4abd4bf6-5260-4795-90f6-1e91ce4f582c
	bool SetProviderParams(CkJsonObject &json);


	// This method is provided for convenience. It causes the calling thread to sleep
	// for a number of milliseconds.
	void SleepMs(int millisec);


	// Handles a js_function_call event within a streaming Ask[1] response loop by
	// automatically executing the requested tool and adding its result to the
	// conversation. The tool may be a JavaScript tool (registered with
	// RegisterJsTools[2]) or an MCP tool (registered with UseMcp[3]).
	// 
	// References:
	// [1] #Ask
	// [2] #RegisterJsTools
	// [3] #UseMcp
	bool StreamingJsToolCall(CkStringBuilder &sb);

	// Handles a js_function_call event within a streaming Ask[1] response loop by
	// automatically executing the requested tool and adding its result to the
	// conversation. The tool may be a JavaScript tool (registered with
	// RegisterJsTools[2]) or an MCP tool (registered with UseMcp[3]).
	// 
	// References:
	// [1] #Ask
	// [2] #RegisterJsTools
	// [3] #UseMcp
	CkTask *StreamingJsToolCallAsync(CkStringBuilder &sb);


	// Uploads a file and returns the file_id (or uri) that can be used to reference
	// the pre-uploaded file using InputAddFileId before an Ask. Files can be uploaded
	// to the following providers: openai, gemini, claude, and grok. The mimeType specifies
	// the MIME type, such as "application/pdf" or "text/plain". If mimeType is the emptys
	// string, Chilkat will automatically choose the MIME type based on the filename
	// extension.
	bool UploadFile(const char *path, const char *mimeType, CkString &outStr);

	// Uploads a file and returns the file_id (or uri) that can be used to reference
	// the pre-uploaded file using InputAddFileId before an Ask. Files can be uploaded
	// to the following providers: openai, gemini, claude, and grok. The mimeType specifies
	// the MIME type, such as "application/pdf" or "text/plain". If mimeType is the emptys
	// string, Chilkat will automatically choose the MIME type based on the filename
	// extension.
	const char *uploadFile(const char *path, const char *mimeType);
	// Uploads a file and returns the file_id (or uri) that can be used to reference
	// the pre-uploaded file using InputAddFileId before an Ask. Files can be uploaded
	// to the following providers: openai, gemini, claude, and grok. The mimeType specifies
	// the MIME type, such as "application/pdf" or "text/plain". If mimeType is the emptys
	// string, Chilkat will automatically choose the MIME type based on the filename
	// extension.
	CkTask *UploadFileAsync(const char *path, const char *mimeType);


	// Uploads the contents of bd and returns the file_id (or uri) that can be used
	// to reference the pre-uploaded file using InputAddFileId before an Ask. Files can
	// be uploaded to the following providers: openai, gemini, claude, and grok. The
	// filename is mostly informational. The mimeType specifies the MIME type, such as
	// "application/pdf" or "text/plain". If mimeType is the emptys string, Chilkat will
	// automatically choose the MIME type based on the extension of the filename passed
	// in filename.
	bool UploadFileBd(CkBinData &bd, const char *filename, const char *mimeType, CkString &outStr);

	// Uploads the contents of bd and returns the file_id (or uri) that can be used
	// to reference the pre-uploaded file using InputAddFileId before an Ask. Files can
	// be uploaded to the following providers: openai, gemini, claude, and grok. The
	// filename is mostly informational. The mimeType specifies the MIME type, such as
	// "application/pdf" or "text/plain". If mimeType is the emptys string, Chilkat will
	// automatically choose the MIME type based on the extension of the filename passed
	// in filename.
	const char *uploadFileBd(CkBinData &bd, const char *filename, const char *mimeType);
	// Uploads the contents of bd and returns the file_id (or uri) that can be used
	// to reference the pre-uploaded file using InputAddFileId before an Ask. Files can
	// be uploaded to the following providers: openai, gemini, claude, and grok. The
	// filename is mostly informational. The mimeType specifies the MIME type, such as
	// "application/pdf" or "text/plain". If mimeType is the emptys string, Chilkat will
	// automatically choose the MIME type based on the extension of the filename passed
	// in filename.
	CkTask *UploadFileBdAsync(CkBinData &bd, const char *filename, const char *mimeType);


	// Uploads the contents of sb and returns the file_id (or uri) that can be used
	// to reference the pre-uploaded file using InputAddFileId before an Ask. Files can
	// be uploaded to the following providers: openai, gemini, claude, and grok. The
	// filename is mostly informational. The mimeType specifies the MIME type, such as
	// "application/pdf" or "text/plain". If mimeType is the emptys string, Chilkat will
	// automatically choose the MIME type based on the extension of the filename passed
	// in filename. It is the utf-8 byte representation of the string that is uploaded.
	bool UploadFileSb(CkStringBuilder &sb, const char *filename, const char *mimeType, CkString &outStr);

	// Uploads the contents of sb and returns the file_id (or uri) that can be used
	// to reference the pre-uploaded file using InputAddFileId before an Ask. Files can
	// be uploaded to the following providers: openai, gemini, claude, and grok. The
	// filename is mostly informational. The mimeType specifies the MIME type, such as
	// "application/pdf" or "text/plain". If mimeType is the emptys string, Chilkat will
	// automatically choose the MIME type based on the extension of the filename passed
	// in filename. It is the utf-8 byte representation of the string that is uploaded.
	const char *uploadFileSb(CkStringBuilder &sb, const char *filename, const char *mimeType);
	// Uploads the contents of sb and returns the file_id (or uri) that can be used
	// to reference the pre-uploaded file using InputAddFileId before an Ask. Files can
	// be uploaded to the following providers: openai, gemini, claude, and grok. The
	// filename is mostly informational. The mimeType specifies the MIME type, such as
	// "application/pdf" or "text/plain". If mimeType is the emptys string, Chilkat will
	// automatically choose the MIME type based on the extension of the filename passed
	// in filename. It is the utf-8 byte representation of the string that is uploaded.
	CkTask *UploadFileSbAsync(CkStringBuilder &sb, const char *filename, const char *mimeType);


	// Registers the tools provided by the connected MCP (Model Context Protocol)
	// server cMcp so the AI model can call them during a conversation. This lists the
	// server's tools (a network operation) and namespaces each tool name using the
	// prefix in namePrefix (to avoid collisions between servers and with JavaScript tools).
	// 
	// When the model requests one of these tools, Chilkat automatically routes the
	// call to the MCP server via Mcp.CallTool, adds the result to the conversation,
	// and continues the Ask[1]. An informational ProgressInfo event named McpToolCall
	// (value = the qualified tool name) is emitted for each automatic call. MCP tools
	// may be mixed with JavaScript tools (RegisterJsTools[2]) in the same
	// conversation.
	// 
	// The cMcp Mcp object must already be connected (see Mcp.Connect) and must remain
	// valid for as long as its tools are in use. Tool use requires a conversation; it
	// cannot be used with a stateless query.
	// 
	// 
	// References:
	// [1] #Ask
	// [2] #RegisterJsTools
	bool UseMcp(CkMcp &cMcp, const char *namePrefix);

	// Registers the tools provided by the connected MCP (Model Context Protocol)
	// server cMcp so the AI model can call them during a conversation. This lists the
	// server's tools (a network operation) and namespaces each tool name using the
	// prefix in namePrefix (to avoid collisions between servers and with JavaScript tools).
	// 
	// When the model requests one of these tools, Chilkat automatically routes the
	// call to the MCP server via Mcp.CallTool, adds the result to the conversation,
	// and continues the Ask[1]. An informational ProgressInfo event named McpToolCall
	// (value = the qualified tool name) is emitted for each automatic call. MCP tools
	// may be mixed with JavaScript tools (RegisterJsTools[2]) in the same
	// conversation.
	// 
	// The cMcp Mcp object must already be connected (see Mcp.Connect) and must remain
	// valid for as long as its tools are in use. Tool use requires a conversation; it
	// cannot be used with a stateless query.
	// 
	// 
	// References:
	// [1] #Ask
	// [2] #RegisterJsTools
	CkTask *UseMcpAsync(CkMcp &cMcp, const char *namePrefix);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
