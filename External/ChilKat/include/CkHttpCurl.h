// CkHttpCurl.h: interface for the CkHttpCurl class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkHttpCurl_H
#define _CkHttpCurl_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkJsonObject;
class CkBinData;
class CkJsonArray;
class CkStringBuilder;
class CkXml;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkHttpCurl
class CK_VISIBLE_PUBLIC CkHttpCurl  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkHttpCurl(const CkHttpCurl &);
	CkHttpCurl &operator=(const CkHttpCurl &);

    public:
	CkHttpCurl(void);
	virtual ~CkHttpCurl(void);

	static CkHttpCurl *createNew(void);
	static CkHttpCurl *createNew2(int progLang);
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
	// Enables variable substitution in the body of the request. The default value is
	// true.
	bool get_EnableBodyVars(void);
	// Enables variable substitution in the body of the request. The default value is
	// true.
	void put_EnableBodyVars(bool newVal);

	// Set to the specific curl command in the execution plan that failed.
	void get_FailedCurl(CkString &str);
	// Set to the specific curl command in the execution plan that failed.
	const char *failedCurl(void);

	// Set to an integer value indicating the reason for failure for the methods
	// DoYourThing[1] and ExaminePlan[2]
	// 
	// Possible values are:
	//     0. No error - the method succeeded or hasn't yet been called.
	//     1. curl command syntax error.
	//     2. HTTP response status code indidcates an authentication (401) or
	//     authorization (403) error.
	//     3. HTTP response status code indicates an error, but not an authentication
	//     or authorization error.
	//     4. HTTP communications failure.
	//     5. Impossible to derive an execution plan from defined outputs and inputs.
	//     6. A step in the execution plan did not resolve any dependency variables.
	//     7. Failed to get curl data from a local file source (see the note below).
	//     8. If we are within a Chilkat.Js context and don't have permission to read
	//     the local filesystem.
	//     9. Chilkat has not been successfully unlocked by previously and successfully
	//     calling UnlockBundle.
	//     10. Failed to open or create the local output file (if a curl option
	//     directed output to a file).
	// 
	// Note: curl can read data from a local file and send it in a request (usually
	// POST/PUT) using special syntax:
	// 
	//     * -d @file.txt → reads the file and sends it as request body (form-style
	//     encoding).
	//     * --data-binary @file.bin → sends raw file contents exactly as-is.
	//     * -F "file=@file.txt" → uploads the file as multipart/form-data.
	// 
	// The @ tells curl to load the data from a local file instead of using a literal
	// string.
	// 
	// 
	// References:
	// [1] #DoYourThing
	// [2] #ExaminePlan
	int get_FailReason(void);

	// Specifies the interval, in milliseconds, between AbortCheck event callbacks.
	// 
	// This allows an application to periodically decide whether a long-running
	// operation should be aborted.
	// 
	// The default value is 0, which means no AbortCheck callbacks are generated.
	// 
	int get_HeartbeatMs(void);
	// Specifies the interval, in milliseconds, between AbortCheck event callbacks.
	// 
	// This allows an application to periodically decide whether a long-running
	// operation should be aborted.
	// 
	// The default value is 0, which means no AbortCheck callbacks are generated.
	// 
	void put_HeartbeatMs(int newVal);

	// Returns the HTTP response body from the last call to DoYourThing[1].
	// 
	// References:
	// [1] #DoYourThing
	void get_ResponseBodyStr(CkString &str);
	// Returns the HTTP response body from the last call to DoYourThing[1].
	// 
	// References:
	// [1] #DoYourThing
	const char *responseBodyStr(void);

	// Set this property to the path of a file to stream the response body to a file.
	// If the response is streamed to a file, it will not be available in
	// ResponseBodyStr[1], GetResponseSb[2], or GetResponseBd[3].
	// 
	// References:
	// [1] #ResponseBodyStr
	// [2] #GetResponseSb
	// [3] #GetResponseBd
	void get_ResponseFilePath(CkString &str);
	// Set this property to the path of a file to stream the response body to a file.
	// If the response is streamed to a file, it will not be available in
	// ResponseBodyStr[1], GetResponseSb[2], or GetResponseBd[3].
	// 
	// References:
	// [1] #ResponseBodyStr
	// [2] #GetResponseSb
	// [3] #GetResponseBd
	const char *responseFilePath(void);
	// Set this property to the path of a file to stream the response body to a file.
	// If the response is streamed to a file, it will not be available in
	// ResponseBodyStr[1], GetResponseSb[2], or GetResponseBd[3].
	// 
	// References:
	// [1] #ResponseBodyStr
	// [2] #GetResponseSb
	// [3] #GetResponseBd
	void put_ResponseFilePath(const char *newVal);

	// Returns the HTTP status code from the last call to DoYourThing[1]. A value of 0
	// indicates no response header was received.
	// 
	// References:
	// [1] #DoYourThing
	int get_StatusCode(void);

	// Provides a comma-separated list of uncommon option keywords.
	// 
	// This property defaults to an empty string and should normally remain empty.
	// 
	void get_UncommonOptions(CkString &str);
	// Provides a comma-separated list of uncommon option keywords.
	// 
	// This property defaults to an empty string and should normally remain empty.
	// 
	const char *uncommonOptions(void);
	// Provides a comma-separated list of uncommon option keywords.
	// 
	// This property defaults to an empty string and should normally remain empty.
	// 
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds a named curl function that can be used in dependency resolution. Inputs
	// required by the curl function are indicated by the variable names enclosed in
	// {{and}}. Outputs are defined in one or more calls to AddOutput[1].
	// 
	// References:
	// [1] #AddOutput
	bool AddFunction(const char *funcName, const char *curl);


	// Adds or updates a defined output for a dependency resolution curl function
	// previously defined by calling AddFunction[1]. The jsonPath is the JSON path in the
	// JSON response body where the varName's value is located. If either the funcName or jsonPath
	// already exist for the funcName, then the output is updated.
	// 
	// References:
	// [1] #AddFunction
	bool AddOutput(const char *funcName, const char *jsonPath, const char *varName);


	// Adds or updates an output variable definition for a dependency-resolution curl
	// function previously created by calling AddFunction. Use this method when the
	// curl response is JSON containing an array of objects, and a value needs to be
	// extracted from one specific array element.
	// 
	// The method searches the array located at arrayPath, finds the array element
	// where the value at wherePath matches whereValue, and then extracts the value at
	// subPath. The extracted value is assigned to the variable named by varName.
	// 
	// The wherePath and subPath values are paths relative to each individual array
	// element. The comparison between whereValue and the JSON value found at wherePath
	// is either case-sensitive or case-insensitive depending on the value of
	// caseSensitive.
	// 
	// Parameters
	// 
	//     * funcName — The name of the curl function previously added by calling
	//     AddFunction. The output definition is associated with this function.
	//     * arrayPath — The JSON path identifying the array of records within the JSON
	//     response.
	//     * wherePath — A relative JSON path within each array element used to locate
	//     the matching record.
	//     * whereValue — The value to match against the JSON value found at wherePath.
	//     * caseSensitive — If true, the comparison between whereValue and the JSON
	//     value is case-sensitive. If false, the comparison is case-insensitive.
	//     * subPath — A relative JSON path within the matched array element
	//     identifying the value to extract.
	//     * varName — The name of the variable that will receive the extracted value.
	// 
	// Example
	// 
	// Given the following JSON response:
	// 
	// {
	//   "drives": [
	//     {
	//       "name": "Documents",
	//       "id": "A123"
	//     },
	//     {
	//       "name": "Shared",
	//       "id": "B456"
	//     }
	//   ]
	// }
	// 
	// The following call:
	// 
	// AddOutput2("GetDrive","drives","name","shared",false,"id","drive_id")
	// 
	// searches the drives array for the element whose name matches "shared" using
	// case-insensitive comparison. The matching element is:
	// 
	// {
	//   "name": "Shared",
	//   "id": "B456"
	// }
	// 
	// The value of id is extracted and assigned to the variable drive_id, resulting
	// in:
	// 
	// drive_id = "B456"
	bool AddOutput2(const char *funcName, const char *arrayPath, const char *wherePath, const char *whereValue, bool caseSensitive, const char *subPath, const char *varName);


	// Adds an automatically mapped variable for the target curl command. When a JSON
	// response is received from a curl request, the value at the JSON path specified
	// by jsonPath is extracted (if present) and assigned to the variable named by varName.
	// 
	// This is useful in common workflows where one request returns an identifier (such
	// as an `id`) that must be reused in a subsequent curl request.
	// 
	void AddTargetOutput(const char *jsonPath, const char *varName);


	// Clears (undefines) the target output for the specified varName. If varName equals "*",
	// then all target outputs are cleared.
	void ClearTargetOutput(const char *varName);


	// Undefines the variable with the specified name. If varName equals "*", then all
	// variables are cleared.
	void ClearVar(const char *varName);


	// Runs a the targetCurl command specified in targetCurl. If the targetCurl contains
	// variable names enclosed in {{and}}, then an execution plan is constructed from
	// defined functions and outputs to resolve unknown variables, and the execution
	// plan is run. The final step in the execution plan is always the targetCurl
	// command.
	// 
	// Returns success (true) if a response was received, in which case the response
	// status code will be available in StatusCode[1] and the content of the response
	// body will be available in one of two places:
	//     * If ResponseFilePath[2] is non-empty, the response body was streamed to the
	//     specified file path.
	//     * If ResponseFilePath[2] is empty, the response body can be retrieved via
	//     ResponseBodyStr[3], GetResponseSb[4], or GetResponseBd[5]. Binary responses
	//     should only be retrieved via ResponseBodyBd[6].
	// 
	// Assuming the HTTP response is JSON, the target outputs (variables) specified by
	// prior calls to AddTargetOutput[7] will be populated by applying each variable's
	// JSON path to the response JSON.
	// 
	// 
	// References:
	// [1] #StatusCode
	// [2] #ResponseFilePath
	// [3] #ResponseBodyStr
	// [4] #GetResponseSb
	// [5] #GetResponseBd
	// [6] #ResponseBodyBd
	// [7] #AddTargetOutput
	bool DoYourThing(const char *targetCurl);

	// Runs a the targetCurl command specified in targetCurl. If the targetCurl contains
	// variable names enclosed in {{and}}, then an execution plan is constructed from
	// defined functions and outputs to resolve unknown variables, and the execution
	// plan is run. The final step in the execution plan is always the targetCurl
	// command.
	// 
	// Returns success (true) if a response was received, in which case the response
	// status code will be available in StatusCode[1] and the content of the response
	// body will be available in one of two places:
	//     * If ResponseFilePath[2] is non-empty, the response body was streamed to the
	//     specified file path.
	//     * If ResponseFilePath[2] is empty, the response body can be retrieved via
	//     ResponseBodyStr[3], GetResponseSb[4], or GetResponseBd[5]. Binary responses
	//     should only be retrieved via ResponseBodyBd[6].
	// 
	// Assuming the HTTP response is JSON, the target outputs (variables) specified by
	// prior calls to AddTargetOutput[7] will be populated by applying each variable's
	// JSON path to the response JSON.
	// 
	// 
	// References:
	// [1] #StatusCode
	// [2] #ResponseFilePath
	// [3] #ResponseBodyStr
	// [4] #GetResponseSb
	// [5] #GetResponseBd
	// [6] #ResponseBodyBd
	// [7] #AddTargetOutput
	CkTask *DoYourThingAsync(const char *targetCurl);


	// Used for debugging. Returns in json the plan of execution that would occur for
	// the curl based on the variables that are either unknown or already known. The
	// plan of execution is what would occur if DoYourThing[1] was called with the
	// current state of knowledge.
	// 
	// If no execution plan is possible with the current known inputs and outputs, then
	// json provides information about what is missing and the method returns false.
	// 
	// 
	// References:
	// [1] #DoYourThing
	bool ExaminePlan(const char *curl, CkJsonObject &json);


	// Returns all defined variables in json.
	void GetAllVars(CkJsonObject &json);


	// Appends to bd the HTTP response body from the last call to DoYourThing[1].
	// 
	// References:
	// [1] #DoYourThing
	bool GetResponseBd(CkBinData &bd);


	// Writes to jarr the HTTP response body from the last call to DoYourThing[1].
	// 
	// References:
	// [1] #DoYourThing
	bool GetResponseJarr(CkJsonArray &jarr);


	// Writes to json the HTTP response body from the last call to DoYourThing[1].
	// 
	// References:
	// [1] #DoYourThing
	bool GetResponseJson(CkJsonObject &json);


	// Appends to sb the HTTP response body from the last call to DoYourThing[1].
	// 
	// References:
	// [1] #DoYourThing
	bool GetResponseSb(CkStringBuilder &sb);


	// Writes to xml the HTTP response body from the last call to DoYourThing[1].
	// 
	// References:
	// [1] #DoYourThing
	bool GetResponseXml(CkXml &xml);


	// Retrieves the current value of the variable specified by varName.
	bool GetVar(const char *varName, CkString &outStr);

	// Retrieves the current value of the variable specified by varName.
	const char *getVar(const char *varName);
	// Retrieves the current value of the variable specified by varName.
	const char *var(const char *varName);


	// Sets authorization information that is applied to all calls to DoYourThing[1].
	// See the examples below for details.
	// 
	// References:
	// [1] #DoYourThing
	bool SetAuth(CkJsonObject &json);


	// Sets the value of a variable to be replaced in curl commands. Variable names are
	// enclosed in {{and}} and can occur in the path, query params, or the body of the
	// request.
	void SetVar(const char *varName, const char *varValue);


	// Used for debugging purposes. This method behaves the same as DoYourThing[1], but
	// only converts the curlCommand to an HTTP request message in sb containing the full
	// structure:
	//     * start line
	//     * headers
	//     * optional body or multipart body
	// 
	// It does not actually send the HTTP request.
	// 
	// 
	// References:
	// [1] #DoYourThing
	bool ToRawRequest(const char *curlCommand, CkStringBuilder &sb);


	// Returns true if the varName is defined, otherwise returns false. Setting varName
	// to "!" checks whether all target output variables have been defined. It returns
	// true if every target output is set, and false if any are missing.
	bool VarDefined(const char *varName);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
