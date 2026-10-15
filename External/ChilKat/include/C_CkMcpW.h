// This is a generated source file for Chilkat version 11.6.0
#ifndef _C_CkMcpWH
#define _C_CkMcpWH
#include "chilkatDefs.h"

#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkMcpW_setAbortCheck(HCkMcpW cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkMcpW_setPercentDone(HCkMcpW cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkMcpW_setProgressInfo(HCkMcpW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));
CK_C_VISIBLE_PUBLIC void CkMcpW_setTaskCompleted(HCkMcpW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkMcpW CkMcpW_Create(void);
CK_C_VISIBLE_PUBLIC void CkMcpW_Dispose(HCkMcpW handle);
CK_C_VISIBLE_PUBLIC void CkMcpW_getAuthToken(HCkMcpW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkMcpW_putAuthToken(HCkMcpW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkMcpW_authToken(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMcpW_getConnected(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC int CkMcpW_getConnectTimeoutMs(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC void  CkMcpW_putConnectTimeoutMs(HCkMcpW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkMcpW_getDebugLogFilePath(HCkMcpW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkMcpW_putDebugLogFilePath(HCkMcpW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkMcpW_debugLogFilePath(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC int CkMcpW_getHeartbeatMs(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC void  CkMcpW_putHeartbeatMs(HCkMcpW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC int CkMcpW_getIdleTimeoutMs(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC void  CkMcpW_putIdleTimeoutMs(HCkMcpW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkMcpW_getLastErrorHtml(HCkMcpW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkMcpW_lastErrorHtml(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC void CkMcpW_getLastErrorText(HCkMcpW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkMcpW_lastErrorText(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC void CkMcpW_getLastErrorXml(HCkMcpW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkMcpW_lastErrorXml(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMcpW_getLastMethodSuccess(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC void  CkMcpW_putLastMethodSuccess(HCkMcpW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkMcpW_getProtocolVersion(HCkMcpW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkMcpW_putProtocolVersion(HCkMcpW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkMcpW_protocolVersion(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC void CkMcpW_getServerInstructions(HCkMcpW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkMcpW_serverInstructions(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC void CkMcpW_getServerName(HCkMcpW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkMcpW_serverName(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC void CkMcpW_getServerVersion(HCkMcpW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkMcpW_serverVersion(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC void CkMcpW_getSessionId(HCkMcpW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkMcpW_sessionId(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMcpW_getVerboseLogging(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC void  CkMcpW_putVerboseLogging(HCkMcpW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkMcpW_getVersion(HCkMcpW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkMcpW_version(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMcpW_CallTool(HCkMcpW cHandle, const wchar_t *name, HCkJsonObjectW arguments, HCkJsonObjectW result);
CK_C_VISIBLE_PUBLIC HCkTaskW CkMcpW_CallToolAsync(HCkMcpW cHandle, const wchar_t *name, HCkJsonObjectW arguments, HCkJsonObjectW result);
CK_C_VISIBLE_PUBLIC BOOL CkMcpW_Close(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC HCkTaskW CkMcpW_CloseAsync(HCkMcpW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMcpW_Connect(HCkMcpW cHandle, const wchar_t *url);
CK_C_VISIBLE_PUBLIC HCkTaskW CkMcpW_ConnectAsync(HCkMcpW cHandle, const wchar_t *url);
CK_C_VISIBLE_PUBLIC void CkMcpW_GetLastJsonData(HCkMcpW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC BOOL CkMcpW_GetPrompt(HCkMcpW cHandle, const wchar_t *name, HCkJsonObjectW arguments, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC HCkTaskW CkMcpW_GetPromptAsync(HCkMcpW cHandle, const wchar_t *name, HCkJsonObjectW arguments, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC BOOL CkMcpW_ListPrompts(HCkMcpW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC HCkTaskW CkMcpW_ListPromptsAsync(HCkMcpW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC BOOL CkMcpW_ListResources(HCkMcpW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC HCkTaskW CkMcpW_ListResourcesAsync(HCkMcpW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC BOOL CkMcpW_ListTools(HCkMcpW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC HCkTaskW CkMcpW_ListToolsAsync(HCkMcpW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC BOOL CkMcpW_ReadResource(HCkMcpW cHandle, const wchar_t *uri, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC HCkTaskW CkMcpW_ReadResourceAsync(HCkMcpW cHandle, const wchar_t *uri, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC BOOL CkMcpW_SetConnectionSettings(HCkMcpW cHandle, HCkSocketW sock);
#endif
