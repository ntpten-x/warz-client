// This is a generated source file for Chilkat version 11.6.0
#ifndef _C_CkJs_H
#define _C_CkJs_H
#include "chilkatDefs.h"
#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkJs_setAbortCheck(HCkJs cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkJs_setPercentDone(HCkJs cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkJs_setProgressInfo(HCkJs cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_C_VISIBLE_PUBLIC void CkJs_setTaskCompleted(HCkJs cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkJs_setAbortCheck2(HCkJs cHandle, BOOL (*fnAbortCheck2)(void *pContext));
CK_C_VISIBLE_PUBLIC void CkJs_setPercentDone2(HCkJs cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));
CK_C_VISIBLE_PUBLIC void CkJs_setProgressInfo2(HCkJs cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));
CK_C_VISIBLE_PUBLIC void CkJs_setTaskCompleted2(HCkJs cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkJs_setExternalProgress(HCkJs cHandle, BOOL on);
CK_C_VISIBLE_PUBLIC void CkJs_setCallbackContext(HCkJs cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkJs CkJs_Create(void);
CK_C_VISIBLE_PUBLIC HCkJs CkJs_Create2(int progLang);
CK_C_VISIBLE_PUBLIC void CkJs_Dispose(HCkJs handle);
CK_C_VISIBLE_PUBLIC void CkJs_getDebugLogFilePath(HCkJs cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkJs_putDebugLogFilePath(HCkJs cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkJs_debugLogFilePath(HCkJs cHandle);
CK_C_VISIBLE_PUBLIC void CkJs_getLastErrorHtml(HCkJs cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkJs_lastErrorHtml(HCkJs cHandle);
CK_C_VISIBLE_PUBLIC void CkJs_getLastErrorText(HCkJs cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkJs_lastErrorText(HCkJs cHandle);
CK_C_VISIBLE_PUBLIC void CkJs_getLastErrorXml(HCkJs cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkJs_lastErrorXml(HCkJs cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkJs_getLastMethodSuccess(HCkJs cHandle);
CK_C_VISIBLE_PUBLIC void CkJs_putLastMethodSuccess(HCkJs cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkJs_getTimeoutSeconds(HCkJs cHandle);
CK_C_VISIBLE_PUBLIC void CkJs_putTimeoutSeconds(HCkJs cHandle, int newVal);
CK_C_VISIBLE_PUBLIC BOOL CkJs_getUtf8(HCkJs cHandle);
CK_C_VISIBLE_PUBLIC void CkJs_putUtf8(HCkJs cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkJs_getVerboseLogging(HCkJs cHandle);
CK_C_VISIBLE_PUBLIC void CkJs_putVerboseLogging(HCkJs cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkJs_getVersion(HCkJs cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkJs_version(HCkJs cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkJs_CallFunction(HCkJs cHandle, HCkJsonObject funcJson, HCkJsonObject resultJson);
CK_C_VISIBLE_PUBLIC HCkTask CkJs_CallFunctionAsync(HCkJs cHandle, HCkJsonObject funcJson, HCkJsonObject resultJson);
CK_C_VISIBLE_PUBLIC void CkJs_ConsoleOutputSb(HCkJs cHandle, HCkStringBuilder sb);
CK_C_VISIBLE_PUBLIC BOOL CkJs_Eval(HCkJs cHandle, HCkStringBuilder jscript, HCkJsonObject resultJson);
CK_C_VISIBLE_PUBLIC HCkTask CkJs_EvalAsync(HCkJs cHandle, HCkStringBuilder jscript, HCkJsonObject resultJson);
CK_C_VISIBLE_PUBLIC BOOL CkJs_SetCkPermission(HCkJs cHandle, const char *chilkatClassName, const char *permission);
#endif
