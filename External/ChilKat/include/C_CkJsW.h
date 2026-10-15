// This is a generated source file for Chilkat version 11.6.0
#ifndef _C_CkJsWH
#define _C_CkJsWH
#include "chilkatDefs.h"

#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkJsW_setAbortCheck(HCkJsW cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkJsW_setPercentDone(HCkJsW cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkJsW_setProgressInfo(HCkJsW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));
CK_C_VISIBLE_PUBLIC void CkJsW_setTaskCompleted(HCkJsW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkJsW CkJsW_Create(void);
CK_C_VISIBLE_PUBLIC void CkJsW_Dispose(HCkJsW handle);
CK_C_VISIBLE_PUBLIC void CkJsW_getDebugLogFilePath(HCkJsW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkJsW_putDebugLogFilePath(HCkJsW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkJsW_debugLogFilePath(HCkJsW cHandle);
CK_C_VISIBLE_PUBLIC void CkJsW_getLastErrorHtml(HCkJsW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkJsW_lastErrorHtml(HCkJsW cHandle);
CK_C_VISIBLE_PUBLIC void CkJsW_getLastErrorText(HCkJsW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkJsW_lastErrorText(HCkJsW cHandle);
CK_C_VISIBLE_PUBLIC void CkJsW_getLastErrorXml(HCkJsW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkJsW_lastErrorXml(HCkJsW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkJsW_getLastMethodSuccess(HCkJsW cHandle);
CK_C_VISIBLE_PUBLIC void  CkJsW_putLastMethodSuccess(HCkJsW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkJsW_getTimeoutSeconds(HCkJsW cHandle);
CK_C_VISIBLE_PUBLIC void  CkJsW_putTimeoutSeconds(HCkJsW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC BOOL CkJsW_getVerboseLogging(HCkJsW cHandle);
CK_C_VISIBLE_PUBLIC void  CkJsW_putVerboseLogging(HCkJsW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkJsW_getVersion(HCkJsW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkJsW_version(HCkJsW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkJsW_CallFunction(HCkJsW cHandle, HCkJsonObjectW funcJson, HCkJsonObjectW resultJson);
CK_C_VISIBLE_PUBLIC HCkTaskW CkJsW_CallFunctionAsync(HCkJsW cHandle, HCkJsonObjectW funcJson, HCkJsonObjectW resultJson);
CK_C_VISIBLE_PUBLIC void CkJsW_ConsoleOutputSb(HCkJsW cHandle, HCkStringBuilderW sb);
CK_C_VISIBLE_PUBLIC BOOL CkJsW_Eval(HCkJsW cHandle, HCkStringBuilderW jscript, HCkJsonObjectW resultJson);
CK_C_VISIBLE_PUBLIC HCkTaskW CkJsW_EvalAsync(HCkJsW cHandle, HCkStringBuilderW jscript, HCkJsonObjectW resultJson);
CK_C_VISIBLE_PUBLIC BOOL CkJsW_SetCkPermission(HCkJsW cHandle, const wchar_t *chilkatClassName, const wchar_t *permission);
#endif
