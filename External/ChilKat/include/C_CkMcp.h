// This is a generated source file for Chilkat version 11.6.0
#ifndef _C_CkMcp_H
#define _C_CkMcp_H
#include "chilkatDefs.h"
#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkMcp_setAbortCheck(HCkMcp cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkMcp_setPercentDone(HCkMcp cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkMcp_setProgressInfo(HCkMcp cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_C_VISIBLE_PUBLIC void CkMcp_setTaskCompleted(HCkMcp cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkMcp_setAbortCheck2(HCkMcp cHandle, BOOL (*fnAbortCheck2)(void *pContext));
CK_C_VISIBLE_PUBLIC void CkMcp_setPercentDone2(HCkMcp cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));
CK_C_VISIBLE_PUBLIC void CkMcp_setProgressInfo2(HCkMcp cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));
CK_C_VISIBLE_PUBLIC void CkMcp_setTaskCompleted2(HCkMcp cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkMcp_setExternalProgress(HCkMcp cHandle, BOOL on);
CK_C_VISIBLE_PUBLIC void CkMcp_setCallbackContext(HCkMcp cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkMcp CkMcp_Create(void);
CK_C_VISIBLE_PUBLIC HCkMcp CkMcp_Create2(int progLang);
CK_C_VISIBLE_PUBLIC void CkMcp_Dispose(HCkMcp handle);
CK_C_VISIBLE_PUBLIC void CkMcp_getAuthToken(HCkMcp cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkMcp_putAuthToken(HCkMcp cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkMcp_authToken(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_getConnected(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC int CkMcp_getConnectTimeoutMs(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC void CkMcp_putConnectTimeoutMs(HCkMcp cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkMcp_getDebugLogFilePath(HCkMcp cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkMcp_putDebugLogFilePath(HCkMcp cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkMcp_debugLogFilePath(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC int CkMcp_getHeartbeatMs(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC void CkMcp_putHeartbeatMs(HCkMcp cHandle, int newVal);
CK_C_VISIBLE_PUBLIC int CkMcp_getIdleTimeoutMs(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC void CkMcp_putIdleTimeoutMs(HCkMcp cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkMcp_getLastErrorHtml(HCkMcp cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkMcp_lastErrorHtml(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC void CkMcp_getLastErrorText(HCkMcp cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkMcp_lastErrorText(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC void CkMcp_getLastErrorXml(HCkMcp cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkMcp_lastErrorXml(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_getLastMethodSuccess(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC void CkMcp_putLastMethodSuccess(HCkMcp cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkMcp_getProtocolVersion(HCkMcp cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkMcp_putProtocolVersion(HCkMcp cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkMcp_protocolVersion(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC void CkMcp_getServerInstructions(HCkMcp cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkMcp_serverInstructions(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC void CkMcp_getServerName(HCkMcp cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkMcp_serverName(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC void CkMcp_getServerVersion(HCkMcp cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkMcp_serverVersion(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC void CkMcp_getSessionId(HCkMcp cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkMcp_sessionId(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_getUtf8(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC void CkMcp_putUtf8(HCkMcp cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_getVerboseLogging(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC void CkMcp_putVerboseLogging(HCkMcp cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkMcp_getVersion(HCkMcp cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkMcp_version(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_CallTool(HCkMcp cHandle, const char *name, HCkJsonObject arguments, HCkJsonObject result);
CK_C_VISIBLE_PUBLIC HCkTask CkMcp_CallToolAsync(HCkMcp cHandle, const char *name, HCkJsonObject arguments, HCkJsonObject result);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_Close(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC HCkTask CkMcp_CloseAsync(HCkMcp cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_Connect(HCkMcp cHandle, const char *url);
CK_C_VISIBLE_PUBLIC HCkTask CkMcp_ConnectAsync(HCkMcp cHandle, const char *url);
CK_C_VISIBLE_PUBLIC void CkMcp_GetLastJsonData(HCkMcp cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_GetPrompt(HCkMcp cHandle, const char *name, HCkJsonObject arguments, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC HCkTask CkMcp_GetPromptAsync(HCkMcp cHandle, const char *name, HCkJsonObject arguments, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_ListPrompts(HCkMcp cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC HCkTask CkMcp_ListPromptsAsync(HCkMcp cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_ListResources(HCkMcp cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC HCkTask CkMcp_ListResourcesAsync(HCkMcp cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_ListTools(HCkMcp cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC HCkTask CkMcp_ListToolsAsync(HCkMcp cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_ReadResource(HCkMcp cHandle, const char *uri, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC HCkTask CkMcp_ReadResourceAsync(HCkMcp cHandle, const char *uri, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC BOOL CkMcp_SetConnectionSettings(HCkMcp cHandle, HCkSocket sock);
#endif
