// CkJs.h: interface for the CkJs class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkJs_H
#define _CkJs_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkJsonObject;
class CkStringBuilder;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkJs
class CK_VISIBLE_PUBLIC CkJs  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkJs(const CkJs &);
	CkJs &operator=(const CkJs &);

    public:
	CkJs(void);
	virtual ~CkJs(void);

	static CkJs *createNew(void);
	static CkJs *createNew2(int progLang);
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
	// Specify a timeout in seconds to prevent JavaScript from running indefinitely,
	// such as in an infinite loop. By default, the value is 0, meaning no timeout is
	// set and infinite loops will continue forever.
	int get_TimeoutSeconds(void);
	// Specify a timeout in seconds to prevent JavaScript from running indefinitely,
	// such as in an infinite loop. By default, the value is 0, meaning no timeout is
	// set and infinite loops will continue forever.
	void put_TimeoutSeconds(int newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Calls a JavaScript function. The function name and arguments are passed in funcJson.
	// The result is returned in resultJson.
	bool CallFunction(CkJsonObject &funcJson, CkJsonObject &resultJson);

	// Calls a JavaScript function. The function name and arguments are passed in funcJson.
	// The result is returned in resultJson.
	CkTask *CallFunctionAsync(CkJsonObject &funcJson, CkJsonObject &resultJson);


	// Returns the console output in sb from the last call to Eval[1].
	// 
	// References:
	// [1] #Eval
	void ConsoleOutputSb(CkStringBuilder &sb);


	// Run jscript as a script. Return output and errors in resultJson.
	bool Eval(CkStringBuilder &jscript, CkJsonObject &resultJson);

	// Run jscript as a script. Return output and errors in resultJson.
	CkTask *EvalAsync(CkStringBuilder &jscript, CkJsonObject &resultJson);


	// Sets sandbox related permissions for Chilkat objects. The chilkatClassName is the name of
	// the Chilkat class (case-insensitive), such as Http, Rest, "MailMan", "Ftp2",
	// "Ssh", etc. The chilkatClassName can also be set to "all" to apply the permission to all
	// Chilkat classes.
	// 
	// Possible values for permission are:
	//     * disable - Your JavaScript code is not allowed to create an instance of the
	//     Chilkat class. A JavaScript exception is thrown when trying to create a Chilkat
	//     object of a class that is disabled.
	//     * sandbox - Objects for the Chilkat class can be instantiated in JavaScript,
	//     but they have no read or write access to the local filesystem.
	//     * readOnly - Objects for the Chilkat class can be instantiated in JavaScript
	//     and have read-only access to the local filesystem.
	//     * writeOnly - Objects for the Chilkat class can be instantiated in
	//     JavaScript and have write-only access to the local filesystem.
	//     * readWrite - Objects for the Chilkat class can be instantiated in
	//     JavaScript and have read/write access to the local filesystem.
	// 
	// By default, all Chilkat classes are disabled. Your application must enable "all"
	// or specific Chilkat classes before calling Eval[1] or CallFunction[2].
	// 
	// 
	// References:
	// [1] #Eval
	// [2] #CallFunction
	bool SetCkPermission(const char *chilkatClassName, const char *permission);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
