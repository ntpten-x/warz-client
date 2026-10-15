// This is a generated source file for Chilkat version 11.6.0
#ifndef _C_CkHttpCurlWH
#define _C_CkHttpCurlWH
#include "chilkatDefs.h"

#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkHttpCurlW_setAbortCheck(HCkHttpCurlW cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_setPercentDone(HCkHttpCurlW cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_setProgressInfo(HCkHttpCurlW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_setTaskCompleted(HCkHttpCurlW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkHttpCurlW CkHttpCurlW_Create(void);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_Dispose(HCkHttpCurlW handle);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_getDebugLogFilePath(HCkHttpCurlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkHttpCurlW_putDebugLogFilePath(HCkHttpCurlW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpCurlW_debugLogFilePath(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_getEnableBodyVars(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC void  CkHttpCurlW_putEnableBodyVars(HCkHttpCurlW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_getFailedCurl(HCkHttpCurlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpCurlW_failedCurl(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC int CkHttpCurlW_getFailReason(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC int CkHttpCurlW_getHeartbeatMs(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC void  CkHttpCurlW_putHeartbeatMs(HCkHttpCurlW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_getLastErrorHtml(HCkHttpCurlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpCurlW_lastErrorHtml(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_getLastErrorText(HCkHttpCurlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpCurlW_lastErrorText(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_getLastErrorXml(HCkHttpCurlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpCurlW_lastErrorXml(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_getLastMethodSuccess(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC void  CkHttpCurlW_putLastMethodSuccess(HCkHttpCurlW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_getResponseBodyStr(HCkHttpCurlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpCurlW_responseBodyStr(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_getResponseFilePath(HCkHttpCurlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkHttpCurlW_putResponseFilePath(HCkHttpCurlW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpCurlW_responseFilePath(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC int CkHttpCurlW_getStatusCode(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_getUncommonOptions(HCkHttpCurlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkHttpCurlW_putUncommonOptions(HCkHttpCurlW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpCurlW_uncommonOptions(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_getVerboseLogging(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC void  CkHttpCurlW_putVerboseLogging(HCkHttpCurlW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_getVersion(HCkHttpCurlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpCurlW_version(HCkHttpCurlW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_AddFunction(HCkHttpCurlW cHandle, const wchar_t *funcName, const wchar_t *curl);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_AddOutput(HCkHttpCurlW cHandle, const wchar_t *funcName, const wchar_t *jsonPath, const wchar_t *varName);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_AddOutput2(HCkHttpCurlW cHandle, const wchar_t *funcName, const wchar_t *arrayPath, const wchar_t *wherePath, const wchar_t *whereValue, BOOL caseSensitive, const wchar_t *subPath, const wchar_t *varName);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_AddTargetOutput(HCkHttpCurlW cHandle, const wchar_t *jsonPath, const wchar_t *varName);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_ClearTargetOutput(HCkHttpCurlW cHandle, const wchar_t *varName);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_ClearVar(HCkHttpCurlW cHandle, const wchar_t *varName);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_DoYourThing(HCkHttpCurlW cHandle, const wchar_t *targetCurl);
CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpCurlW_DoYourThingAsync(HCkHttpCurlW cHandle, const wchar_t *targetCurl);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_ExaminePlan(HCkHttpCurlW cHandle, const wchar_t *curl, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_GetAllVars(HCkHttpCurlW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_GetResponseBd(HCkHttpCurlW cHandle, HCkBinDataW bd);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_GetResponseJarr(HCkHttpCurlW cHandle, HCkJsonArrayW jarr);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_GetResponseJson(HCkHttpCurlW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_GetResponseSb(HCkHttpCurlW cHandle, HCkStringBuilderW sb);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_GetResponseXml(HCkHttpCurlW cHandle, HCkXmlW xml);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_GetVar(HCkHttpCurlW cHandle, const wchar_t *varName, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpCurlW_getVar(HCkHttpCurlW cHandle, const wchar_t *varName);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_SetAuth(HCkHttpCurlW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC void CkHttpCurlW_SetVar(HCkHttpCurlW cHandle, const wchar_t *varName, const wchar_t *varValue);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_ToRawRequest(HCkHttpCurlW cHandle, const wchar_t *curlCommand, HCkStringBuilderW sb);
CK_C_VISIBLE_PUBLIC BOOL CkHttpCurlW_VarDefined(HCkHttpCurlW cHandle, const wchar_t *varName);
#endif
