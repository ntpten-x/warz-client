// This is a generated source file for Chilkat version 11.6.0
#ifndef _C_CkHttpCurl_H
#define _C_CkHttpCurl_H
#include "chilkatDefs.h"
#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkHttpCurl_setAbortCheck(HCkHttpCurl cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkHttpCurl_setPercentDone(HCkHttpCurl cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkHttpCurl_setProgressInfo(HCkHttpCurl cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_C_VISIBLE_PUBLIC void CkHttpCurl_setTaskCompleted(HCkHttpCurl cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkHttpCurl_setAbortCheck2(HCkHttpCurl cHandle, BOOL (*fnAbortCheck2)(void *pContext));
CK_C_VISIBLE_PUBLIC void CkHttpCurl_setPercentDone2(HCkHttpCurl cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));
CK_C_VISIBLE_PUBLIC void CkHttpCurl_setProgressInfo2(HCkHttpCurl cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));
CK_C_VISIBLE_PUBLIC void CkHttpCurl_setTaskCompleted2(HCkHttpCurl cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkHttpCurl_setExternalProgress(HCkHttpCurl cHandle, BOOL on);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_setCallbackContext(HCkHttpCurl cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkHttpCurl CkHttpCurl_Create(void);
CK_C_VISIBLE_PUBLIC HCkHttpCurl CkHttpCurl_Create2(int progLang);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_Dispose(HCkHttpCurl handle);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_getDebugLogFilePath(HCkHttpCurl cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_putDebugLogFilePath(HCkHttpCurl cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkHttpCurl_debugLogFilePath(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_getEnableBodyVars(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_putEnableBodyVars(HCkHttpCurl cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_getFailedCurl(HCkHttpCurl cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkHttpCurl_failedCurl(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC int CkHttpCurl_getFailReason(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC int CkHttpCurl_getHeartbeatMs(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_putHeartbeatMs(HCkHttpCurl cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_getLastErrorHtml(HCkHttpCurl cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkHttpCurl_lastErrorHtml(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_getLastErrorText(HCkHttpCurl cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkHttpCurl_lastErrorText(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_getLastErrorXml(HCkHttpCurl cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkHttpCurl_lastErrorXml(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_getLastMethodSuccess(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_putLastMethodSuccess(HCkHttpCurl cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_getResponseBodyStr(HCkHttpCurl cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkHttpCurl_responseBodyStr(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_getResponseFilePath(HCkHttpCurl cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_putResponseFilePath(HCkHttpCurl cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkHttpCurl_responseFilePath(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC int CkHttpCurl_getStatusCode(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_getUncommonOptions(HCkHttpCurl cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_putUncommonOptions(HCkHttpCurl cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkHttpCurl_uncommonOptions(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_getUtf8(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_putUtf8(HCkHttpCurl cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_getVerboseLogging(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_putVerboseLogging(HCkHttpCurl cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_getVersion(HCkHttpCurl cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkHttpCurl_version(HCkHttpCurl cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_AddFunction(HCkHttpCurl cHandle, const char *funcName, const char *curl);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_AddOutput(HCkHttpCurl cHandle, const char *funcName, const char *jsonPath, const char *varName);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_AddOutput2(HCkHttpCurl cHandle, const char *funcName, const char *arrayPath, const char *wherePath, const char *whereValue, BOOL caseSensitive, const char *subPath, const char *varName);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_AddTargetOutput(HCkHttpCurl cHandle, const char *jsonPath, const char *varName);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_ClearTargetOutput(HCkHttpCurl cHandle, const char *varName);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_ClearVar(HCkHttpCurl cHandle, const char *varName);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_DoYourThing(HCkHttpCurl cHandle, const char *targetCurl);
CK_C_VISIBLE_PUBLIC HCkTask CkHttpCurl_DoYourThingAsync(HCkHttpCurl cHandle, const char *targetCurl);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_ExaminePlan(HCkHttpCurl cHandle, const char *curl, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_GetAllVars(HCkHttpCurl cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_GetResponseBd(HCkHttpCurl cHandle, HCkBinData bd);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_GetResponseJarr(HCkHttpCurl cHandle, HCkJsonArray jarr);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_GetResponseJson(HCkHttpCurl cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_GetResponseSb(HCkHttpCurl cHandle, HCkStringBuilder sb);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_GetResponseXml(HCkHttpCurl cHandle, HCkXml xml);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_GetVar(HCkHttpCurl cHandle, const char *varName, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkHttpCurl_getVar(HCkHttpCurl cHandle, const char *varName);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_SetAuth(HCkHttpCurl cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC void CkHttpCurl_SetVar(HCkHttpCurl cHandle, const char *varName, const char *varValue);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_ToRawRequest(HCkHttpCurl cHandle, const char *curlCommand, HCkStringBuilder sb);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurl_VarDefined(HCkHttpCurl cHandle, const char *varName);
#endif
