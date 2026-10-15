// CkJsW.h: interface for the CkJsW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkJsW_H
#define _CkJsW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkJsonObjectW;
class CkTaskW;
class CkStringBuilderW;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkJsW
class CK_VISIBLE_PUBLIC CkJsW  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkJsW(const CkJsW &);
	CkJsW &operator=(const CkJsW &);

    public:
	CkJsW(void);
	virtual ~CkJsW(void);

	

	static CkJsW *createNew(void);
	

	CkJsW(bool bCallbackOwned);
	static CkJsW *createNew(bool bCallbackOwned);

	
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
	bool CallFunction(CkJsonObjectW &funcJson, CkJsonObjectW &resultJson);

	// Creates an asynchronous task to call the CallFunction method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CallFunctionAsync(CkJsonObjectW &funcJson, CkJsonObjectW &resultJson);

	// Returns the console output in sb from the last call to Eval[1].
	// 
	// References:
	// [1] #Eval
	void ConsoleOutputSb(CkStringBuilderW &sb);

	// Run jscript as a script. Return output and errors in resultJson.
	bool Eval(CkStringBuilderW &jscript, CkJsonObjectW &resultJson);

	// Creates an asynchronous task to call the Eval method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *EvalAsync(CkStringBuilderW &jscript, CkJsonObjectW &resultJson);

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
	bool SetCkPermission(const wchar_t *chilkatClassName, const wchar_t *permission);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
