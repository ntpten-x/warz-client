// CkZipW.h: interface for the CkZipW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkZipW_H
#define _CkZipW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkBinDataW;
class CkStringBuilderW;
class CkZipEntryW;
class CkByteData;
class CkTaskW;
class CkStringArrayW;
class CkZipProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkZipW
class CK_VISIBLE_PUBLIC CkZipW  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkZipW(const CkZipW &);
	CkZipW &operator=(const CkZipW &);

    public:
	CkZipW(void);
	virtual ~CkZipW(void);

	

	static CkZipW *createNew(void);
	

	CkZipW(bool bCallbackOwned);
	static CkZipW *createNew(bool bCallbackOwned);

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkZipProgressW *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkZipProgressW *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Stops the currently executing operation when set to true.
	// 
	//     * Used to cancel long-running operations such as compression or extraction.
	//     * Can be triggered from another thread.
	//     * Automatically resets to false after the operation stops.
	bool get_AbortCurrent(void);
	// Stops the currently executing operation when set to true.
	// 
	//     * Used to cancel long-running operations such as compression or extraction.
	//     * Can be triggered from another thread.
	//     * Automatically resets to false after the operation stops.
	void put_AbortCurrent(bool newVal);

	// Specifies a base directory when adding files to the ZIP.
	// 
	//     * This portion of the path is not included in stored ZIP entry paths.
	//     * Useful for controlling relative paths inside the archive.
	// 
	// For example, to add all files under c:/abc/123/myAppDir, this property could be
	// set to c:/abc/123, and myAppDir/* would be passed to AppendFiles.
	// 
	// The path stored in the ZIP would begin with myAppDir/.
	// 
	void get_AppendFromDir(CkString &str);
	// Specifies a base directory when adding files to the ZIP.
	// 
	//     * This portion of the path is not included in stored ZIP entry paths.
	//     * Useful for controlling relative paths inside the archive.
	// 
	// For example, to add all files under c:/abc/123/myAppDir, this property could be
	// set to c:/abc/123, and myAppDir/* would be passed to AppendFiles.
	// 
	// The path stored in the ZIP would begin with myAppDir/.
	// 
	const wchar_t *appendFromDir(void);
	// Specifies a base directory when adding files to the ZIP.
	// 
	//     * This portion of the path is not included in stored ZIP entry paths.
	//     * Useful for controlling relative paths inside the archive.
	// 
	// For example, to add all files under c:/abc/123/myAppDir, this property could be
	// set to c:/abc/123, and myAppDir/* would be passed to AppendFiles.
	// 
	// The path stored in the ZIP would begin with myAppDir/.
	// 
	void put_AppendFromDir(const wchar_t *newVal);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// Specifies the name of an executable inside a self-extracting EXE that runs
	// automatically after extraction.
	// 
	void get_AutoRun(CkString &str);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Specifies the name of an executable inside a self-extracting EXE that runs
	// automatically after extraction.
	// 
	const wchar_t *autoRun(void);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Specifies the name of an executable inside a self-extracting EXE that runs
	// automatically after extraction.
	// 
	void put_AutoRun(const wchar_t *newVal);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// Command-line arguments passed to the AutoRun executable.
	// 
	void get_AutoRunParams(CkString &str);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Command-line arguments passed to the AutoRun executable.
	// 
	const wchar_t *autoRunParams(void);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Command-line arguments passed to the AutoRun executable.
	// 
	void put_AutoRunParams(const wchar_t *newVal);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// If true, the EXE being created will automatically select and create a
	// temporary directory for unzipping.
	// 
	// This property is often used together with AutoRun to create a self-extracting
	// EXE that automatically unzips to a temporary directory and runs a setup program,
	// such as setup.exe, without user interaction.
	// 
	// Note: To create a self-extracting EXE with no user interaction, set the
	// following properties:
	// 
	//     ExeSilentProgress = false
	//     ExeNoInterface = true
	//     ExeFinishNotifier = false
	// 
	// The default value is false.
	// 
	bool get_AutoTemp(void);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// If true, the EXE being created will automatically select and create a
	// temporary directory for unzipping.
	// 
	// This property is often used together with AutoRun to create a self-extracting
	// EXE that automatically unzips to a temporary directory and runs a setup program,
	// such as setup.exe, without user interaction.
	// 
	// Note: To create a self-extracting EXE with no user interaction, set the
	// following properties:
	// 
	//     ExeSilentProgress = false
	//     ExeNoInterface = true
	//     ExeFinishNotifier = false
	// 
	// The default value is false.
	// 
	void put_AutoTemp(bool newVal);

	// Controls whether filename matching is case-sensitive.
	// 
	//     * Affects methods such as EntryMatching and UnzipMatching.
	//     * Default: false
	bool get_CaseSensitive(void);
	// Controls whether filename matching is case-sensitive.
	// 
	//     * Affects methods such as EntryMatching and UnzipMatching.
	//     * Default: false
	void put_CaseSensitive(bool newVal);

	// (Windows only)
	// 
	// If true, clears the Windows archive attribute after files are successfully
	// added to the ZIP.
	// 
	// The archive attribute indicates that a file has changed since the last backup.
	// 
	// The default value is false.
	// 
	bool get_ClearArchiveAttribute(void);
	// (Windows only)
	// 
	// If true, clears the Windows archive attribute after files are successfully
	// added to the ZIP.
	// 
	// The archive attribute indicates that a file has changed since the last backup.
	// 
	// The default value is false.
	// 
	void put_ClearArchiveAttribute(bool newVal);

	// If true, removes the read-only attribute from extracted files.
	// 
	// If false, the read-only attribute remains unchanged.
	// 
	// The default value is false.
	// 
	bool get_ClearReadOnlyAttr(void);
	// If true, removes the read-only attribute from extracted files.
	// 
	// If false, the read-only attribute remains unchanged.
	// 
	// The default value is false.
	// 
	void put_ClearReadOnlyAttr(bool newVal);

	// Sets or retrieves the global ZIP file comment.
	// 
	// The default value is the empty string.
	// 
	void get_Comment(CkString &str);
	// Sets or retrieves the global ZIP file comment.
	// 
	// The default value is the empty string.
	// 
	const wchar_t *comment(void);
	// Sets or retrieves the global ZIP file comment.
	// 
	// The default value is the empty string.
	// 
	void put_Comment(const wchar_t *newVal);

	// Password used to extract encrypted ZIP archives.
	// 
	//     * Required to unzip encrypted entries.
	//     * Encrypted ZIP files may still be opened without a password, but their
	//     contents cannot be extracted until the correct password is provided.
	// 
	// The default value is the empty string.
	// 
	void get_DecryptPassword(CkString &str);
	// Password used to extract encrypted ZIP archives.
	// 
	//     * Required to unzip encrypted entries.
	//     * Encrypted ZIP files may still be opened without a password, but their
	//     contents cannot be extracted until the correct password is provided.
	// 
	// The default value is the empty string.
	// 
	const wchar_t *decryptPassword(void);
	// Password used to extract encrypted ZIP archives.
	// 
	//     * Required to unzip encrypted entries.
	//     * Encrypted ZIP files may still be opened without a password, but their
	//     contents cannot be extracted until the correct password is provided.
	// 
	// The default value is the empty string.
	// 
	void put_DecryptPassword(const wchar_t *newVal);

	// If true, removes all directory path information when adding files.
	// 
	// Only filenames are stored in the ZIP.
	// 
	// The default value is false.
	// 
	bool get_DiscardPaths(void);
	// If true, removes all directory path information when adding files.
	// 
	// Only filenames are stored in the ZIP.
	// 
	// The default value is false.
	// 
	void put_DiscardPaths(bool newVal);

	// Specifies encryption mode:
	// 
	//     * 0 → No encryption
	//     * 4 → WinZip-compatible AES encryption
	// 
	// Important: Encryption and PasswordProtect are mutually exclusive.
	// 
	// If PasswordProtect = true, then Encryption should be 0.
	// 
	// The default value is 0.
	// 
	int get_Encryption(void);
	// Specifies encryption mode:
	// 
	//     * 0 → No encryption
	//     * 4 → WinZip-compatible AES encryption
	// 
	// Important: Encryption and PasswordProtect are mutually exclusive.
	// 
	// If PasswordProtect = true, then Encryption should be 0.
	// 
	// The default value is 0.
	// 
	void put_Encryption(int newVal);

	// Specifies the AES encryption key length.
	// 
	//     * Valid values: 128, 192, or 256
	// 
	// The default value is 128.
	// 
	int get_EncryptKeyLength(void);
	// Specifies the AES encryption key length.
	// 
	//     * Valid values: 128, 192, or 256
	// 
	// The default value is 128.
	// 
	void put_EncryptKeyLength(int newVal);

	// Password used when creating encrypted ZIP archives.
	// 
	// The default value is the empty string.
	// 
	void get_EncryptPassword(CkString &str);
	// Password used when creating encrypted ZIP archives.
	// 
	// The default value is the empty string.
	// 
	const wchar_t *encryptPassword(void);
	// Password used when creating encrypted ZIP archives.
	// 
	// The default value is the empty string.
	// 
	void put_EncryptPassword(const wchar_t *newVal);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// Default extraction directory shown in the self-extracting EXE user interface.
	// 
	// The default value is the empty string.
	// 
	void get_ExeDefaultDir(CkString &str);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Default extraction directory shown in the self-extracting EXE user interface.
	// 
	// The default value is the empty string.
	// 
	const wchar_t *exeDefaultDir(void);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Default extraction directory shown in the self-extracting EXE user interface.
	// 
	// The default value is the empty string.
	// 
	void put_ExeDefaultDir(const wchar_t *newVal);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// If true, displays a completion dialog after extraction finishes.
	// 
	// The default value is false.
	// 
	bool get_ExeFinishNotifier(void);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// If true, displays a completion dialog after extraction finishes.
	// 
	// The default value is false.
	// 
	void put_ExeFinishNotifier(bool newVal);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// Path to an.ico file used as the EXE icon.
	// 
	// This feature is only available when the application creating the EXE is 32-bit.
	// 
	// The default value is the empty string.
	// 
	void get_ExeIconFile(CkString &str);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Path to an.ico file used as the EXE icon.
	// 
	// This feature is only available when the application creating the EXE is 32-bit.
	// 
	// The default value is the empty string.
	// 
	const wchar_t *exeIconFile(void);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Path to an.ico file used as the EXE icon.
	// 
	// This feature is only available when the application creating the EXE is 32-bit.
	// 
	// The default value is the empty string.
	// 
	void put_ExeIconFile(const wchar_t *newVal);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// If true, runs the self-extracting EXE without displaying the main user
	// interface.
	// 
	// The default value is false.
	// 
	bool get_ExeNoInterface(void);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// If true, runs the self-extracting EXE without displaying the main user
	// interface.
	// 
	// The default value is false.
	// 
	void put_ExeNoInterface(bool newVal);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// Controls whether a progress dialog is shown during extraction.
	// 
	// If ExeNoInterface = false, the progress bar appears within the main dialog and
	// this property has no effect.
	// 
	// The default value is false.
	// 
	bool get_ExeSilentProgress(void);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Controls whether a progress dialog is shown during extraction.
	// 
	// If ExeNoInterface = false, the progress bar appears within the main dialog and
	// this property has no effect.
	// 
	// The default value is false.
	// 
	void put_ExeSilentProgress(bool newVal);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// Title displayed in the self-extracting EXE dialog.
	// 
	// The default value is the empty string.
	// 
	void get_ExeTitle(CkString &str);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Title displayed in the self-extracting EXE dialog.
	// 
	// The default value is the empty string.
	// 
	const wchar_t *exeTitle(void);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Title displayed in the self-extracting EXE dialog.
	// 
	// The default value is the empty string.
	// 
	void put_ExeTitle(const wchar_t *newVal);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// Caption text displayed in the self-extracting EXE dialog.
	// 
	// The default value is the empty string.
	// 
	void get_ExeUnzipCaption(CkString &str);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Caption text displayed in the self-extracting EXE dialog.
	// 
	// The default value is the empty string.
	// 
	const wchar_t *exeUnzipCaption(void);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Caption text displayed in the self-extracting EXE dialog.
	// 
	// The default value is the empty string.
	// 
	void put_ExeUnzipCaption(const wchar_t *newVal);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// Specifies a predefined extraction directory.
	// 
	//     * Supports environment variables such as%TEMP%.
	//     * UNC paths are not supported.
	// 
	// The default value is the empty string.
	// 
	void get_ExeUnzipDir(CkString &str);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Specifies a predefined extraction directory.
	// 
	//     * Supports environment variables such as%TEMP%.
	//     * UNC paths are not supported.
	// 
	// The default value is the empty string.
	// 
	const wchar_t *exeUnzipDir(void);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Specifies a predefined extraction directory.
	// 
	//     * Supports environment variables such as%TEMP%.
	//     * UNC paths are not supported.
	// 
	// The default value is the empty string.
	// 
	void put_ExeUnzipDir(const wchar_t *newVal);

	// If true, waits for the AutoRun executable to finish before exiting.
	// 
	// If false, the self-extracting EXE may exit before the AutoRun executable
	// completes.
	// 
	// The default value is true.
	// 
	bool get_ExeWaitForSetup(void);
	// If true, waits for the AutoRun executable to finish before exiting.
	// 
	// If false, the self-extracting EXE may exit before the AutoRun executable
	// completes.
	// 
	// The default value is true.
	// 
	void put_ExeWaitForSetup(bool newVal);

	// Allows for an XML config document to be used to specify all possible options for
	// self-extracting EXEs. This property is a string containing the XML config
	// document.
	// 
	// The XML should have this format:
	// 
	// <SfxConfig>
	// <ErrPwdTitle>Title for incorrect password dialog</ErrPwdTitle>
	// <ErrPwdCaption>Caption for incorrect password dialog</ErrPwdCaption>
	// <FinOkBtn>Text on finish notifier button</FinOkBtn>
	// <PwdOkBtn>Text on password challenge dialog's "OK" button.</PwdOkBtn>
	// <PwdCancelBtn>Text on password challenge dialog's Cancel button.</PwdCancelBtn>
	// <ErrInvalidPassword>Incorrect password error message.</ErrInvalidPassword>
	// <MainUnzipBtn>Text on main dialog's unzip button. Note: The MainUnzipLabel must
	// also be set for this to take effect.</MainUnzipBtn>
	// <MainCloseBtn>Text on main dialog's quit/exit button. Note: The MainUnzipLabel
	// must also be set for this to take effect.</MainCloseBtn>
	// <MainBrowseBtn>Text on main dialog's browse-for-directory button. Note: The
	// MainUnzipLabel must also be set for this to take effect.</MainBrowseBtn>
	// <MainUnzipLabel>Caption displayed in main dialog.</MainUnzipLabel>
	// <AutoTemp>0 or 1 (Maps to the AutoTemp property)</AutoTemp>
	// <Cleanup>0 or 1 (If 1, extracted files are deleted after the SetupExe is
	// run.)</Cleanup>
	// <Debug>0 or 1 (If 1, the EXE will not extract any files.)</Debug>
	// <Verbose>0 or 1 (If 1, verbose information is written to the log.)</Verbose>
	// <ShowFin>0 or 1 (Maps to the ExeFinishNotifier property)</ShowFin>
	// <ShowMain>0 or 1 (Maps to the ExeNoInterface property)</ShowMain>
	// <ShowProgress>0 or 1 (Maps to the ExeSilentProgress property)</ShowProgress>
	// <WaitForSetup>0 or 1 (Maps to the ExeWaitForSetup property)</WaitForSetup>
	// <Encryption>0 or 1 (1 = Yes, 0 = No)</Encryption>
	// <KeyLength>128|192|256</KeyLength>
	// <SetupExe>EXE to run after extracting. (Maps to the AutoRun property)</SetupExe>
	// <UnzipDir>Pre-defined unzip directory. (Maps to the ExeUnzipDir property. UNC
	// paths, such as \\servername\path, are not supported.)</UnzipDir>
	// <DefaultDir>Default unzip directory to appear in the main dialog. (Maps to the
	// ExeDefaultDir property)</DefaultDir>
	// <IconFile>Icon file to be used (Maps to the ExeIconFile property)</IconFile>
	// <MainTitle>Maps to the ExeTitle property.</MainTitle>
	// <MainCaption>Maps to the ExeUnzipCaption property.</MainCaption>
	// <FinTitle>Title for the finish notifier dialog.</FinTitle>
	// <FinCaption>Caption for the finish notifier dialog.</FinCaption>
	// <ProgressTitle>Title for the progress dialog.</ProgressTitle>
	// <ProgressCaption>Caption for the progress dialog.</ProgressCaption>
	// <PwTitle>Title for the password challenge dialog.</PwTitle>
	// <PwCaption>Caption for the password challenge dialog.</PwCaption>
	// </SfxConfig>
	// 
	// A self-extracting EXE can be run from the command line with the -log
	// {logFilePath} option to create a log with information for debugging.
	// 
	void get_ExeXmlConfig(CkString &str);
	// Allows for an XML config document to be used to specify all possible options for
	// self-extracting EXEs. This property is a string containing the XML config
	// document.
	// 
	// The XML should have this format:
	// 
	// <SfxConfig>
	// <ErrPwdTitle>Title for incorrect password dialog</ErrPwdTitle>
	// <ErrPwdCaption>Caption for incorrect password dialog</ErrPwdCaption>
	// <FinOkBtn>Text on finish notifier button</FinOkBtn>
	// <PwdOkBtn>Text on password challenge dialog's "OK" button.</PwdOkBtn>
	// <PwdCancelBtn>Text on password challenge dialog's Cancel button.</PwdCancelBtn>
	// <ErrInvalidPassword>Incorrect password error message.</ErrInvalidPassword>
	// <MainUnzipBtn>Text on main dialog's unzip button. Note: The MainUnzipLabel must
	// also be set for this to take effect.</MainUnzipBtn>
	// <MainCloseBtn>Text on main dialog's quit/exit button. Note: The MainUnzipLabel
	// must also be set for this to take effect.</MainCloseBtn>
	// <MainBrowseBtn>Text on main dialog's browse-for-directory button. Note: The
	// MainUnzipLabel must also be set for this to take effect.</MainBrowseBtn>
	// <MainUnzipLabel>Caption displayed in main dialog.</MainUnzipLabel>
	// <AutoTemp>0 or 1 (Maps to the AutoTemp property)</AutoTemp>
	// <Cleanup>0 or 1 (If 1, extracted files are deleted after the SetupExe is
	// run.)</Cleanup>
	// <Debug>0 or 1 (If 1, the EXE will not extract any files.)</Debug>
	// <Verbose>0 or 1 (If 1, verbose information is written to the log.)</Verbose>
	// <ShowFin>0 or 1 (Maps to the ExeFinishNotifier property)</ShowFin>
	// <ShowMain>0 or 1 (Maps to the ExeNoInterface property)</ShowMain>
	// <ShowProgress>0 or 1 (Maps to the ExeSilentProgress property)</ShowProgress>
	// <WaitForSetup>0 or 1 (Maps to the ExeWaitForSetup property)</WaitForSetup>
	// <Encryption>0 or 1 (1 = Yes, 0 = No)</Encryption>
	// <KeyLength>128|192|256</KeyLength>
	// <SetupExe>EXE to run after extracting. (Maps to the AutoRun property)</SetupExe>
	// <UnzipDir>Pre-defined unzip directory. (Maps to the ExeUnzipDir property. UNC
	// paths, such as \\servername\path, are not supported.)</UnzipDir>
	// <DefaultDir>Default unzip directory to appear in the main dialog. (Maps to the
	// ExeDefaultDir property)</DefaultDir>
	// <IconFile>Icon file to be used (Maps to the ExeIconFile property)</IconFile>
	// <MainTitle>Maps to the ExeTitle property.</MainTitle>
	// <MainCaption>Maps to the ExeUnzipCaption property.</MainCaption>
	// <FinTitle>Title for the finish notifier dialog.</FinTitle>
	// <FinCaption>Caption for the finish notifier dialog.</FinCaption>
	// <ProgressTitle>Title for the progress dialog.</ProgressTitle>
	// <ProgressCaption>Caption for the progress dialog.</ProgressCaption>
	// <PwTitle>Title for the password challenge dialog.</PwTitle>
	// <PwCaption>Caption for the password challenge dialog.</PwCaption>
	// </SfxConfig>
	// 
	// A self-extracting EXE can be run from the command line with the -log
	// {logFilePath} option to create a log with information for debugging.
	// 
	const wchar_t *exeXmlConfig(void);
	// Allows for an XML config document to be used to specify all possible options for
	// self-extracting EXEs. This property is a string containing the XML config
	// document.
	// 
	// The XML should have this format:
	// 
	// <SfxConfig>
	// <ErrPwdTitle>Title for incorrect password dialog</ErrPwdTitle>
	// <ErrPwdCaption>Caption for incorrect password dialog</ErrPwdCaption>
	// <FinOkBtn>Text on finish notifier button</FinOkBtn>
	// <PwdOkBtn>Text on password challenge dialog's "OK" button.</PwdOkBtn>
	// <PwdCancelBtn>Text on password challenge dialog's Cancel button.</PwdCancelBtn>
	// <ErrInvalidPassword>Incorrect password error message.</ErrInvalidPassword>
	// <MainUnzipBtn>Text on main dialog's unzip button. Note: The MainUnzipLabel must
	// also be set for this to take effect.</MainUnzipBtn>
	// <MainCloseBtn>Text on main dialog's quit/exit button. Note: The MainUnzipLabel
	// must also be set for this to take effect.</MainCloseBtn>
	// <MainBrowseBtn>Text on main dialog's browse-for-directory button. Note: The
	// MainUnzipLabel must also be set for this to take effect.</MainBrowseBtn>
	// <MainUnzipLabel>Caption displayed in main dialog.</MainUnzipLabel>
	// <AutoTemp>0 or 1 (Maps to the AutoTemp property)</AutoTemp>
	// <Cleanup>0 or 1 (If 1, extracted files are deleted after the SetupExe is
	// run.)</Cleanup>
	// <Debug>0 or 1 (If 1, the EXE will not extract any files.)</Debug>
	// <Verbose>0 or 1 (If 1, verbose information is written to the log.)</Verbose>
	// <ShowFin>0 or 1 (Maps to the ExeFinishNotifier property)</ShowFin>
	// <ShowMain>0 or 1 (Maps to the ExeNoInterface property)</ShowMain>
	// <ShowProgress>0 or 1 (Maps to the ExeSilentProgress property)</ShowProgress>
	// <WaitForSetup>0 or 1 (Maps to the ExeWaitForSetup property)</WaitForSetup>
	// <Encryption>0 or 1 (1 = Yes, 0 = No)</Encryption>
	// <KeyLength>128|192|256</KeyLength>
	// <SetupExe>EXE to run after extracting. (Maps to the AutoRun property)</SetupExe>
	// <UnzipDir>Pre-defined unzip directory. (Maps to the ExeUnzipDir property. UNC
	// paths, such as \\servername\path, are not supported.)</UnzipDir>
	// <DefaultDir>Default unzip directory to appear in the main dialog. (Maps to the
	// ExeDefaultDir property)</DefaultDir>
	// <IconFile>Icon file to be used (Maps to the ExeIconFile property)</IconFile>
	// <MainTitle>Maps to the ExeTitle property.</MainTitle>
	// <MainCaption>Maps to the ExeUnzipCaption property.</MainCaption>
	// <FinTitle>Title for the finish notifier dialog.</FinTitle>
	// <FinCaption>Caption for the finish notifier dialog.</FinCaption>
	// <ProgressTitle>Title for the progress dialog.</ProgressTitle>
	// <ProgressCaption>Caption for the progress dialog.</ProgressCaption>
	// <PwTitle>Title for the password challenge dialog.</PwTitle>
	// <PwCaption>Caption for the password challenge dialog.</PwCaption>
	// </SfxConfig>
	// 
	// A self-extracting EXE can be run from the command line with the -log
	// {logFilePath} option to create a log with information for debugging.
	// 
	void put_ExeXmlConfig(const wchar_t *newVal);

	// Number of files in the ZIP, excluding directory entries.
	// 
	int get_FileCount(void);

	// Path of the ZIP file to be written or overwritten.
	// 
	// The default value is the empty string.
	// 
	void get_FileName(CkString &str);
	// Path of the ZIP file to be written or overwritten.
	// 
	// The default value is the empty string.
	// 
	const wchar_t *fileName(void);
	// Path of the ZIP file to be written or overwritten.
	// 
	// The default value is the empty string.
	// 
	void put_FileName(const wchar_t *newVal);

	// Indicates whether minor ZIP format problems were detected when opening the ZIP
	// archive.
	// 
	bool get_HasZipFormatErrors(void);

	// Interval, in milliseconds, between abort-check callbacks.
	// 
	// If set to 0, abort callbacks are disabled.
	// 
	// The default value is 0.
	// 
	int get_HeartbeatMs(void);
	// Interval, in milliseconds, between abort-check callbacks.
	// 
	// If set to 0, abort callbacks are disabled.
	// 
	// The default value is 0.
	// 
	void put_HeartbeatMs(int newVal);

	// If true, files that cannot be read, written, or created due to filesystem
	// permission errors are skipped.
	// 
	// If false, any access-denied error causes the ZIP operation to fail.
	// 
	// The default value is true.
	// 
	bool get_IgnoreAccessDenied(void);
	// If true, files that cannot be read, written, or created due to filesystem
	// permission errors are skipped.
	// 
	// If false, any access-denied error causes the ZIP operation to fail.
	// 
	// The default value is true.
	// 
	void put_IgnoreAccessDenied(bool newVal);

	// Maximum last-modified timestamp for files processed during add or extract
	// operations.
	// 
	// Files having modification timestamps later than this value are skipped.
	// 
	// Supports ISO 8601 date/time formats, including:
	// 
	//     * YYYY-MM-DD
	//     Example: 2024-07-31
	//     * YYYY-MM-DDTHH:MM:SS±HH:MM
	//     Example: 2024-07-31T12:34:56+02:00
	//     * YYYY-MM-DDTHH:MM:SSZ
	//     Example: 2024-07-31T12:34:56Z
	// 
	// The default value is the empty string, meaning no maximum date restriction.
	// 
	void get_MaxDate(CkString &str);
	// Maximum last-modified timestamp for files processed during add or extract
	// operations.
	// 
	// Files having modification timestamps later than this value are skipped.
	// 
	// Supports ISO 8601 date/time formats, including:
	// 
	//     * YYYY-MM-DD
	//     Example: 2024-07-31
	//     * YYYY-MM-DDTHH:MM:SS±HH:MM
	//     Example: 2024-07-31T12:34:56+02:00
	//     * YYYY-MM-DDTHH:MM:SSZ
	//     Example: 2024-07-31T12:34:56Z
	// 
	// The default value is the empty string, meaning no maximum date restriction.
	// 
	const wchar_t *maxDate(void);
	// Maximum last-modified timestamp for files processed during add or extract
	// operations.
	// 
	// Files having modification timestamps later than this value are skipped.
	// 
	// Supports ISO 8601 date/time formats, including:
	// 
	//     * YYYY-MM-DD
	//     Example: 2024-07-31
	//     * YYYY-MM-DDTHH:MM:SS±HH:MM
	//     Example: 2024-07-31T12:34:56+02:00
	//     * YYYY-MM-DDTHH:MM:SSZ
	//     Example: 2024-07-31T12:34:56Z
	// 
	// The default value is the empty string, meaning no maximum date restriction.
	// 
	void put_MaxDate(const wchar_t *newVal);

	// Prevents extraction of files larger than the specified uncompressed size.
	// 
	// A value of 0 means no size limit.
	// 
	// The default value is 0.
	// 
	unsigned long get_MaxUncompressSize(void);
	// Prevents extraction of files larger than the specified uncompressed size.
	// 
	// A value of 0 means no size limit.
	// 
	// The default value is 0.
	// 
	void put_MaxUncompressSize(unsigned long newVal);

	// Minimum last-modified timestamp for files processed during add or extract
	// operations.
	// 
	// Supports ISO 8601 date/time formats, including:
	// 
	//     * YYYY-MM-DD
	//     Example: 2024-07-31
	//     * YYYY-MM-DDTHH:MM:SS±HH:MM
	//     Example: 2024-07-31T12:34:56+02:00
	//     * YYYY-MM-DDTHH:MM:SSZ
	//     Example: 2024-07-31T12:34:56Z
	// 
	// The default value is the empty string, meaning no minimum date restriction.
	// 
	void get_MinDate(CkString &str);
	// Minimum last-modified timestamp for files processed during add or extract
	// operations.
	// 
	// Supports ISO 8601 date/time formats, including:
	// 
	//     * YYYY-MM-DD
	//     Example: 2024-07-31
	//     * YYYY-MM-DDTHH:MM:SS±HH:MM
	//     Example: 2024-07-31T12:34:56+02:00
	//     * YYYY-MM-DDTHH:MM:SSZ
	//     Example: 2024-07-31T12:34:56Z
	// 
	// The default value is the empty string, meaning no minimum date restriction.
	// 
	const wchar_t *minDate(void);
	// Minimum last-modified timestamp for files processed during add or extract
	// operations.
	// 
	// Supports ISO 8601 date/time formats, including:
	// 
	//     * YYYY-MM-DD
	//     Example: 2024-07-31
	//     * YYYY-MM-DDTHH:MM:SS±HH:MM
	//     Example: 2024-07-31T12:34:56+02:00
	//     * YYYY-MM-DDTHH:MM:SSZ
	//     Example: 2024-07-31T12:34:56Z
	// 
	// The default value is the empty string, meaning no minimum date restriction.
	// 
	void put_MinDate(const wchar_t *newVal);

	// Total number of entries in the ZIP, including both files and directories.
	// 
	int get_NumEntries(void);

	// Specifies the OEM code page used for ZIP filename encoding.
	// 
	// Defaults to the OEM code page of the current computer.
	// 
	int get_OemCodePage(void);
	// Specifies the OEM code page used for ZIP filename encoding.
	// 
	// Defaults to the OEM code page of the current computer.
	// 
	void put_OemCodePage(int newVal);

	// If true, existing files are overwritten during extraction.
	// 
	// The default value is true.
	// 
	bool get_OverwriteExisting(void);
	// If true, existing files are overwritten during extraction.
	// 
	// The default value is true.
	// 
	void put_OverwriteExisting(bool newVal);

	// Indicates whether the ZIP uses legacy Zip 2.0 password protection.
	// 
	// This property is set automatically when a ZIP archive is opened by any of the
	// Open* methods, such as OpenZip, OpenFromMemory, OpenBd, and related methods.
	// 
	// Important: PasswordProtect and Encryption are mutually exclusive.
	// 
	// If PasswordProtect = true, then Encryption should be 0.
	// 
	// The default value is false.
	// 
	bool get_PasswordProtect(void);
	// Indicates whether the ZIP uses legacy Zip 2.0 password protection.
	// 
	// This property is set automatically when a ZIP archive is opened by any of the
	// Open* methods, such as OpenZip, OpenFromMemory, OpenBd, and related methods.
	// 
	// Important: PasswordProtect and Encryption are mutually exclusive.
	// 
	// If PasswordProtect = true, then Encryption should be 0.
	// 
	// The default value is false.
	// 
	void put_PasswordProtect(bool newVal);

	// Gets or sets a path prefix that is prepended to ZIP entry paths for files
	// appended from the local filesystem.
	// 
	// This is useful when you want all extracted files to appear under a specific
	// subdirectory.
	// 
	// This property affects only the following methods:
	// 
	//     * AppendFiles
	//     * AppendFilesEx
	//     * AddFile
	//     * AppendOneFileOrDir
	// 
	// The PathPrefix value is prepended to the stored ZIP path for each appended
	// filesystem file.
	// 
	// For example, set PathPrefix to subdir/ so that files are stored in the ZIP with
	// subdir/ prepended to their paths. When extracted, the files will be placed under
	// the subdir directory.
	// 
	// This property does not affect entries added entirely from memory, such as
	// entries added using:
	// 
	//     * AddString
	//     * AddData
	//     * AddBd
	//     * AddSb
	// 
	// For in-memory entries, the ZIP entry path is determined solely by the
	// filename/path argument passed to the method.
	// 
	// The default value is the empty string.
	// 
	void get_PathPrefix(CkString &str);
	// Gets or sets a path prefix that is prepended to ZIP entry paths for files
	// appended from the local filesystem.
	// 
	// This is useful when you want all extracted files to appear under a specific
	// subdirectory.
	// 
	// This property affects only the following methods:
	// 
	//     * AppendFiles
	//     * AppendFilesEx
	//     * AddFile
	//     * AppendOneFileOrDir
	// 
	// The PathPrefix value is prepended to the stored ZIP path for each appended
	// filesystem file.
	// 
	// For example, set PathPrefix to subdir/ so that files are stored in the ZIP with
	// subdir/ prepended to their paths. When extracted, the files will be placed under
	// the subdir directory.
	// 
	// This property does not affect entries added entirely from memory, such as
	// entries added using:
	// 
	//     * AddString
	//     * AddData
	//     * AddBd
	//     * AddSb
	// 
	// For in-memory entries, the ZIP entry path is determined solely by the
	// filename/path argument passed to the method.
	// 
	// The default value is the empty string.
	// 
	const wchar_t *pathPrefix(void);
	// Gets or sets a path prefix that is prepended to ZIP entry paths for files
	// appended from the local filesystem.
	// 
	// This is useful when you want all extracted files to appear under a specific
	// subdirectory.
	// 
	// This property affects only the following methods:
	// 
	//     * AppendFiles
	//     * AppendFilesEx
	//     * AddFile
	//     * AppendOneFileOrDir
	// 
	// The PathPrefix value is prepended to the stored ZIP path for each appended
	// filesystem file.
	// 
	// For example, set PathPrefix to subdir/ so that files are stored in the ZIP with
	// subdir/ prepended to their paths. When extracted, the files will be placed under
	// the subdir directory.
	// 
	// This property does not affect entries added entirely from memory, such as
	// entries added using:
	// 
	//     * AddString
	//     * AddData
	//     * AddBd
	//     * AddSb
	// 
	// For in-memory entries, the ZIP entry path is determined solely by the
	// filename/path argument passed to the method.
	// 
	// The default value is the empty string.
	// 
	void put_PathPrefix(const wchar_t *newVal);

	// Controls the granularity of PercentDone event callbacks.
	// 
	// This property is only applicable in programming environments that support event
	// callbacks.
	// 
	// The value specifies what should be considered 100% complete for progress
	// reporting purposes.
	// 
	//     * A value of 100 provides whole-percent progress updates.
	//     * A value of 1000 provides tenth-percent granularity.
	//     * For example, with a scale of 1000, a PercentDone callback value of 453
	//     represents 45.3% complete.
	// 
	// Increasing this value allows for more frequent and finer-grained progress
	// callbacks during long-running operations.
	// 
	// The value is automatically clamped to the range:
	// 
	//     * Minimum: 10
	//     * Maximum: 100000
	// 
	// The default value is 100.
	// 
	int get_PercentDoneScale(void);
	// Controls the granularity of PercentDone event callbacks.
	// 
	// This property is only applicable in programming environments that support event
	// callbacks.
	// 
	// The value specifies what should be considered 100% complete for progress
	// reporting purposes.
	// 
	//     * A value of 100 provides whole-percent progress updates.
	//     * A value of 1000 provides tenth-percent granularity.
	//     * For example, with a scale of 1000, a PercentDone callback value of 453
	//     represents 45.3% complete.
	// 
	// Increasing this value allows for more frequent and finer-grained progress
	// callbacks during long-running operations.
	// 
	// The value is automatically clamped to the range:
	// 
	//     * Minimum: 10
	//     * Maximum: 100000
	// 
	// The default value is 100.
	// 
	void put_PercentDoneScale(int newVal);

	// Specifies the character encoding used to convert the decrypt password into its
	// binary byte representation for legacy password-protected ZIP archives that use
	// Zip 2.0 encryption.
	// 
	// The default value is ansi.
	// 
	// Other possible values include:
	// 
	//     * cp850
	//     * cp437
	//     * Any supported Windows or OEM code page listed at the link below.
	// 
	// This property applies only to older Zip 2.0 password protection and is not used
	// for AES-encrypted ZIP archives.
	// 
	void get_PwdProtCharset(CkString &str);
	// Specifies the character encoding used to convert the decrypt password into its
	// binary byte representation for legacy password-protected ZIP archives that use
	// Zip 2.0 encryption.
	// 
	// The default value is ansi.
	// 
	// Other possible values include:
	// 
	//     * cp850
	//     * cp437
	//     * Any supported Windows or OEM code page listed at the link below.
	// 
	// This property applies only to older Zip 2.0 password protection and is not used
	// for AES-encrypted ZIP archives.
	// 
	const wchar_t *pwdProtCharset(void);
	// Specifies the character encoding used to convert the decrypt password into its
	// binary byte representation for legacy password-protected ZIP archives that use
	// Zip 2.0 encryption.
	// 
	// The default value is ansi.
	// 
	// Other possible values include:
	// 
	//     * cp850
	//     * cp437
	//     * Any supported Windows or OEM code page listed at the link below.
	// 
	// This property applies only to older Zip 2.0 password protection and is not used
	// for AES-encrypted ZIP archives.
	// 
	void put_PwdProtCharset(const wchar_t *newVal);

	// Directory used for temporary files during ZIP operations.
	// 
	// When overwriting an existing ZIP file, a temporary file is used to avoid
	// corrupting the original ZIP if an error occurs.
	// 
	// The default value depends on the runtime environment.
	// 
	void get_TempDir(CkString &str);
	// Directory used for temporary files during ZIP operations.
	// 
	// When overwriting an existing ZIP file, a temporary file is used to avoid
	// corrupting the original ZIP if an error occurs.
	// 
	// The default value depends on the runtime environment.
	// 
	const wchar_t *tempDir(void);
	// Directory used for temporary files during ZIP operations.
	// 
	// When overwriting an existing ZIP file, a temporary file is used to avoid
	// corrupting the original ZIP if an error occurs.
	// 
	// The default value depends on the runtime environment.
	// 
	void put_TempDir(const wchar_t *newVal);

	// Advanced options for uncommon scenarios.
	// 
	//     * ForceZip64 → Forces ZIP64 format even when not required.
	// 
	// The default value is the empty string.
	// 
	void get_UncommonOptions(CkString &str);
	// Advanced options for uncommon scenarios.
	// 
	//     * ForceZip64 → Forces ZIP64 format even when not required.
	// 
	// The default value is the empty string.
	// 
	const wchar_t *uncommonOptions(void);
	// Advanced options for uncommon scenarios.
	// 
	//     * ForceZip64 → Forces ZIP64 format even when not required.
	// 
	// The default value is the empty string.
	// 
	void put_UncommonOptions(const wchar_t *newVal);

	// If true, creates ZIPX archives using the most appropriate compression method
	// for each file.
	// 
	// The default value is false.
	// 
	bool get_Zipx(void);
	// If true, creates ZIPX archives using the most appropriate compression method
	// for each file.
	// 
	// The default value is false.
	// 
	void put_Zipx(bool newVal);

	// Default compression algorithm used when creating ZIPX archives.
	// 
	//     * Possible values include:
	//         * deflate
	//         * ppmd
	//         * lzma
	//         * bzip2
	//         * deflate64
	// 
	// The default value is deflate.
	// 
	void get_ZipxDefaultAlg(CkString &str);
	// Default compression algorithm used when creating ZIPX archives.
	// 
	//     * Possible values include:
	//         * deflate
	//         * ppmd
	//         * lzma
	//         * bzip2
	//         * deflate64
	// 
	// The default value is deflate.
	// 
	const wchar_t *zipxDefaultAlg(void);
	// Default compression algorithm used when creating ZIPX archives.
	// 
	//     * Possible values include:
	//         * deflate
	//         * ppmd
	//         * lzma
	//         * bzip2
	//         * deflate64
	// 
	// The default value is deflate.
	// 
	void put_ZipxDefaultAlg(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds the contents of a BinData object as a new entry in the ZIP archive.
	// 
	//     * pathInZip specifies the filename and optional directory path stored within
	//     the ZIP.
	//     * The bytes contained in bd become the contents of the ZIP entry.
	//     * The entry is added to the in-memory ZIP object and is not written to disk
	//     until WriteZip, WriteZipAndClose, WriteBd, or WriteToMemory is called.
	bool AddBd(const wchar_t *pathInZip, CkBinDataW &bd);

	// Adds an empty file or directory entry to the ZIP archive.
	// 
	//     * If isDir = true, an empty directory entry is created.
	//     * If isDir = false, an empty file entry is created.
	//     * pathInZip specifies the path stored in the ZIP archive.
	// 
	// This method is useful when directory structure entries must exist even if no
	// files are present.
	// 
	bool AddEmpty(bool isDir, const wchar_t *pathInZip);

	// Adds encoded binary data as a ZIP entry.
	// 
	//     * encoding specifies how data is encoded.
	//     * Common encodings include base64 and hex.
	//     * The decoded binary bytes become the contents of the ZIP entry.
	// 
	// This method is useful when binary data already exists in textual encoded form.
	// 
	bool AddEncoded(const wchar_t *pathInZip, const wchar_t *encoding, const wchar_t *data);

	// Adds a file or directory from the local filesystem to the ZIP archive.
	// 
	//     * If localPath is an absolute path and saveExtraPath = true, the stored
	//     ZIP path includes the relative directory structure.
	//     * If saveExtraPath = false, only the filename is stored.
	//     * If localPath is already relative, the relative path is stored as-is
	//     regardless of saveExtraPath.
	// 
	// This method adds a reference to the file or directory in the local filesystem.
	// The file data is not immediately read or compressed.
	// 
	// The actual file contents are consumed only when a Write* method is called, such
	// as:
	// 
	//     * WriteZip
	//     * WriteZipAndClose
	//     * WriteBd
	//     * WriteToMemory
	// 
	// This allows files and data entries to be accumulated in the in-memory ZIP object
	// prior to writing the final ZIP archive.
	// 
	bool AddFile(const wchar_t *localPath, bool saveExtraPath);

	// Adds a file extension to the internal "no-compression" list.
	// 
	// Files having these extensions are stored without compression because they are
	// already compressed or because compression would provide little benefit.
	// 
	// For example:
	// 
	//     *.zip
	//     *.jpg
	//     *.png
	//     *.gz
	// 
	// The extension may be specified with or without the leading dot.
	// 
	// Additional extensions remain active for the lifetime of the Zip object unless
	// removed with RemoveNoCompressExtension.
	// 
	void AddNoCompressExtension(const wchar_t *fileExtension);

	// Adds the contents of a StringBuilder object as a text entry in the ZIP archive.
	// 
	//     * The text is converted to bytes using the specified charset.
	//     * pathInZip specifies the filename stored in the ZIP.
	bool AddSb(const wchar_t *pathInZip, CkStringBuilderW &sb, const wchar_t *charset);

	// Adds a string as a text file entry in the ZIP archive.
	// 
	//     * The string is converted to bytes using the specified charset.
	//     * pathInZip specifies the path stored within the ZIP archive.
	// 
	// This method is useful for dynamically generating text files directly in memory.
	// 
	bool AddString(const wchar_t *pathInZip, const wchar_t *content, const wchar_t *charset);

	// This method is deprecated. Applications should instead call AddBd.
	// 
	// Appends the contents of byteData as a new entry to this zip object. The zip entry
	// object containing the data is returned.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntryW *AppendBd(const wchar_t *pathInZip, CkBinDataW &byteData);

	// This method is deprecated. Applications should instead call AddData.
	// 
	// Appends in-memory data as a new entry to a Zip object. The ZipEntry object
	// containing the data is returned.
	// 
	// Note: This method only updates the zip object. To update (rewrite) a zip file,
	// either the WriteZip or WriteZipAndClose method would need to be called.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntryW *AppendData(const wchar_t *fileName, CkByteData &inData);

	// This method is deprecated. Applications should instead call AddEncoded.
	// 
	// Appends in-memory data as a new entry to a Zip object. The filename is the filename
	// of the entry as it will appear within the zip. The encoding is the encoding of the
	// data, such as base64, hex, etc. The full list of encodings is listed at the web
	// page linked below.
	// 
	// Returns the zip entry object.
	// 
	// Note: This method only updates the zip object. To update (rewrite) a zip file,
	// either the WriteZip or WriteZipAndClose method would need to be called.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntryW *AppendDataEncoded(const wchar_t *filename, const wchar_t *encoding, const wchar_t *data);

	// Adds one or more files matching a wildcard pattern.
	// 
	//     * The wildcard character * matches zero or more characters.
	//     * If recurse = true, subdirectories are processed recursively.
	//     * If recurse = false, only the current directory is searched.
	// 
	// For example:
	// 
	//     AppendFiles("c:/temp/*.txt", false)
	// 
	// This method only updates the in-memory ZIP object. The ZIP file itself is not
	// written until a Write* method is called.
	// 
	bool AppendFiles(const wchar_t *filePattern, bool recurse);

	// Creates an asynchronous task to call the AppendFiles method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AppendFilesAsync(const wchar_t *filePattern, bool recurse);

	// Advanced version of AppendFiles with additional filtering and path options.
	// 
	//     * saveExtraPath controls whether the extra leading path information from the
	//     filePattern is preserved in the ZIP.
	//     * archiveOnly applies only on Windows and limits processing to files having
	//     the archive attribute set.
	//     * includeHidden controls whether hidden files are included.
	//     * includeSystem controls whether files with the System attribute are
	//     included.
	// 
	// This method adds references to files in the in-memory ZIP object. No ZIP file is
	// written until a Write* method is called.
	// 
	bool AppendFilesEx(const wchar_t *filePattern, bool recurse, bool saveExtraPath, bool archiveOnly, bool includeHidden, bool includeSystem);

	// Creates an asynchronous task to call the AppendFilesEx method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AppendFilesExAsync(const wchar_t *filePattern, bool recurse, bool saveExtraPath, bool archiveOnly, bool includeHidden, bool includeSystem);

	// This method is deprecated. Applications should instead call AddEmpty.
	// 
	// Appends a new and empty entry to the Zip object and returns the ZipEntry object.
	// Data can be appended to the entry by calling ZipEntry.AppendData.
	// 
	// Important: To append an already-existing file, call the AppendOneFileOrDir
	// method. The AppendNew method inserts a new and empty file entry within the Zip
	// object. The purpose of AppendNew is to either create an empty file within the
	// Zip, or to create a new file entry which can then be filled with data by calling
	// the entry's AppendData method.
	// 
	// Note: This method only updates the zip object. To update (rewrite) a zip file,
	// either the WriteZip or WriteZipAndClose method would need to be called.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntryW *AppendNew(const wchar_t *fileName);

	// This method is deprecated. Applications should instead call AddEmpty.
	// 
	// Adds an entry to the zip so that when it unzips, a new directory (with no files)
	// is created. The directory does not need to exist on the local filesystem when
	// calling this method. The dirName is simply a string that is used as the directory
	// path for the entry added to the zip. The zip entry object is returned.
	// 
	// Note: This method only updates the zip object. To update (rewrite) a zip file,
	// either the WriteZip or WriteZipAndClose method would need to be called.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntryW *AppendNewDir(const wchar_t *dirName);

	// This method is deprecated. Applications should instead call AddFile.
	// 
	// Adds a file or directory to the object. If fileOrDirPath is an absolute file path and
	// saveExtraPath is true, fileOrDirPath is converted to a relative file path for the zip entry.
	// Otherwise, only the filename is stored. If fileOrDirPath is a relative file path, it is
	// stored as-is in the zip, regardless of saveExtraPath.
	// 
	bool AppendOneFileOrDir(const wchar_t *fileOrDirPath, bool saveExtraPath);

	// Creates an asynchronous task to call the AppendOneFileOrDir method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AppendOneFileOrDirAsync(const wchar_t *fileOrDirPath, bool saveExtraPath);

	// This method is deprecated. Applications should instead call AddSb.
	// 
	// Same as AppendString, but append the contents of of the sb, and allow the
	// charset to be specified. The contents of sb is converted to charset before being
	// added to the zip. The pathInZip is the path of the file that will be stored within
	// the zip.
	// 
	// Note: This method only updates the zip object. To update (rewrite) a zip file,
	// either the WriteZip or WriteZipAndClose method would need to be called.
	// 
	bool AppendSb(const wchar_t *pathInZip, CkStringBuilderW &sb, const wchar_t *charset);

	// This method is deprecated. Applications should instead call AddString.
	// 
	// Adds an in-memory string to the Zip object. The textData argument is converted to
	// the ANSI charset before being added to the Zip. If the Zip were written to disk
	// by calling WriteZip, and later unzipped, the entry would unzip to an ANSI text
	// file.
	// 
	// Note: This method only updates the zip object. To update (rewrite) a zip file,
	// either the WriteZip or WriteZipAndClose method would need to be called.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntryW *AppendString(const wchar_t *internalZipFilepath, const wchar_t *textData);

	// This method is deprecated. Applications should instead call AddString.
	// 
	// Same as AppendString, but allows the charset to be specified. The textData is
	// converted to charset before being added to the zip. The internalZipFilepath is the path of the
	// file that will be stored within the zip.
	// 
	// Note: This method only updates the zip object. To update (rewrite) a zip file,
	// either the WriteZip or WriteZipAndClose method would need to be called.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntryW *AppendString2(const wchar_t *internalZipFilepath, const wchar_t *textData, const wchar_t *charset);

	// Note: This method is currently not working and will be fixed in v11.5.0
	// 
	// Adds all entries from another existing ZIP archive into the current ZIP object.
	// 
	// The zipPath argument specifies the path of a ZIP file located in the local
	// filesystem.
	// 
	// All entries from the specified ZIP archive are appended to the current in-memory
	// ZIP object.
	// 
	// The ZIP archive itself is not rewritten until a Write* method is called.
	// 
	// This method is useful for merging the contents of multiple ZIP archives into a
	// single ZIP.
	// 
	bool AppendZip(const wchar_t *zipPath);

	// Closes the currently open ZIP archive and clears all entries from the Zip
	// object.
	// 
	// This method has the same effect as calling NewZip without specifying a filename.
	// 
	void CloseZip(void);

	// Removes a ZIP entry from the current ZIP object.
	// 
	// The ZIP file itself is not rewritten until a Write* method is called.
	// 
	bool DeleteEntry(CkZipEntryW &entry);

	// Retrieves the ZIP entry at the specified zero-based index.
	// 
	//     * The first entry is at index 0.
	//     * The matching entry is returned in the supplied ZipEntry object.
	bool EntryAt(int index, CkZipEntryW &entry);

	// Finds a ZIP entry by its unique EntryID.
	// 
	// The matching entry is returned in the supplied ZipEntry object.
	// 
	bool EntryById(int id, CkZipEntryW &entry);

	// Finds the first ZIP entry whose stored path matches a wildcard pattern.
	// 
	//     * The wildcard character * matches zero or more characters.
	//     * The comparison is performed against the full stored ZIP path.
	bool EntryMatching(const wchar_t *pattern, CkZipEntryW &entry);

	// Finds a ZIP entry whose stored path exactly matches pathInZip.
	// 
	// The matching entry is returned in the supplied ZipEntry object.
	// 
	bool EntryOf(const wchar_t *pathInZip, CkZipEntryW &entry);

	// Adds a directory name to the exclusion list used by recursive append operations.
	// 
	//     * All directories having the specified name are skipped.
	//     * The comparison is case-insensitive.
	//     * Call multiple times to exclude multiple directory names.
	// 
	// This affects methods such as AppendFiles and AppendFilesEx.
	// 
	void ExcludeDir(const wchar_t *dirName);

	// Extracts files from a Chilkat-created self-extracting EXE.
	// 
	//     * Files are extracted into dirPath.
	//     * Subdirectories are automatically created as needed.
	//     * If the EXE is encrypted, DecryptPassword must be set before extraction.
	bool ExtractExe(const wchar_t *exePath, const wchar_t *dirPath);

	// Creates an asynchronous task to call the ExtractExe method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ExtractExeAsync(const wchar_t *exePath, const wchar_t *dirPath);

	// This method is deprecated. Applications should instead call EntryAt.
	// 
	// Return the first entry in the Zip. Call ZipEntry.NextEntry to iterate over the
	// entries in a Zip until a NULL is returned.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntryW *FirstEntry(void);

	// This method is deprecated. Applications should instead call EntryMatching.
	// 
	// Returns the first entry having a filename matching a pattern. The * characters
	// matches 0 or more of any character. The full filename, including path, is used
	// when matching against the pattern. A NULL is returned if nothing matches.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntryW *FirstMatchingEntry(const wchar_t *pattern);

	// Returns the ZIP directory structure as an XML document.
	// 
	// The returned XML contains information about the entries currently contained
	// within the ZIP archive, including files and directories.
	// 
	// This method is useful for inspecting ZIP contents without extracting files.
	// 
	// Returns the XML document as a string.
	// 
	bool GetDirectoryAsXML(CkString &outXml);
	// Returns the ZIP directory structure as an XML document.
	// 
	// The returned XML contains information about the entries currently contained
	// within the ZIP archive, including files and directories.
	// 
	// This method is useful for inspecting ZIP contents without extracting files.
	// 
	// Returns the XML document as a string.
	// 
	const wchar_t *getDirectoryAsXML(void);
	// Returns the ZIP directory structure as an XML document.
	// 
	// The returned XML contains information about the entries currently contained
	// within the ZIP archive, including files and directories.
	// 
	// This method is useful for inspecting ZIP contents without extracting files.
	// 
	// Returns the XML document as a string.
	// 
	const wchar_t *directoryAsXML(void);

	// This method is deprecated. Applications should instead call EntryById.
	// 
	// Finds and returns the entry with the given entryID. (Each entry within the zip
	// object has a unique EntryID.)
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntryW *GetEntryByID(int entryID);

	// This method is deprecated. Applications should instead call EntryAt.
	// 
	// Retrieves a ZipEntry by index. The first entry is at index 0. This will return
	// directory entries as well as files.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntryW *GetEntryByIndex(int index);

	// This method is deprecated. Applications should instead call EntryOf.
	// 
	// Returns the entry where the file path stored within the zip equals entryName.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkZipEntryW *GetEntryByName(const wchar_t *entryName);

	// This method is deprecated and will removed in a future version of Chilkat.
	// 
	// Returns the current collection of exclusion patterns that have been set by
	// SetExclusions.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkStringArrayW *GetExclusions(void);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// Returns the value of a configuration parameter embedded within a self-extracting
	// EXE.
	// 
	// The name argument should be one of the XML tag names described in the
	// ExeXmlConfig property documentation.
	// 
	// For example:
	// 
	//     * MainTitle
	//     * MainCaption
	//     * SetupExe
	// 
	// Returns the parameter value as a string.
	// 
	bool GetExeConfigParam(const wchar_t *name, CkString &outStr);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Returns the value of a configuration parameter embedded within a self-extracting
	// EXE.
	// 
	// The name argument should be one of the XML tag names described in the
	// ExeXmlConfig property documentation.
	// 
	// For example:
	// 
	//     * MainTitle
	//     * MainCaption
	//     * SetupExe
	// 
	// Returns the parameter value as a string.
	// 
	const wchar_t *getExeConfigParam(const wchar_t *name);
	// (Windows only, for creating self-extracting EXE's)
	// 
	// Returns the value of a configuration parameter embedded within a self-extracting
	// EXE.
	// 
	// The name argument should be one of the XML tag names described in the
	// ExeXmlConfig property documentation.
	// 
	// For example:
	// 
	//     * MainTitle
	//     * MainCaption
	//     * SetupExe
	// 
	// Returns the parameter value as a string.
	// 
	const wchar_t *exeConfigParam(const wchar_t *name);

	// Returns the largest uncompressed file size contained within the ZIP archive.
	// 
	// The size is returned as a string rather than an integer because the value may
	// exceed the range of a 32-bit integer.
	// 
	// This method is useful when:
	// 
	//     * Checking for extremely large files before extraction
	//     * Estimating required disk space
	//     * Detecting unusually large compressed entries
	// 
	// Returns the size as a decimal string.
	// 
	bool GetMaxUncompressedSize(CkString &outStr);
	// Returns the largest uncompressed file size contained within the ZIP archive.
	// 
	// The size is returned as a string rather than an integer because the value may
	// exceed the range of a 32-bit integer.
	// 
	// This method is useful when:
	// 
	//     * Checking for extremely large files before extraction
	//     * Estimating required disk space
	//     * Detecting unusually large compressed entries
	// 
	// Returns the size as a decimal string.
	// 
	const wchar_t *getMaxUncompressedSize(void);
	// Returns the largest uncompressed file size contained within the ZIP archive.
	// 
	// The size is returned as a string rather than an integer because the value may
	// exceed the range of a 32-bit integer.
	// 
	// This method is useful when:
	// 
	//     * Checking for extremely large files before extraction
	//     * Estimating required disk space
	//     * Detecting unusually large compressed entries
	// 
	// Returns the size as a decimal string.
	// 
	const wchar_t *maxUncompressedSize(void);

	// Checks whether a file extension is contained in the internal "no-compression"
	// extension list.
	// 
	// Files having extensions in this list are stored without compression because they
	// are typically already compressed.
	// 
	// The extension may be specified with or without the leading dot.
	// 
	// For example, both of the following are valid:
	// 
	//     *.jpg
	//     * jpg
	// 
	// Returns true if the extension exists in the list, otherwise returns false.
	// 
	bool IsNoCompressExtension(const wchar_t *fileExtension);

	// Checks whether a ZIP archive uses legacy Zip 2.0 password protection.
	// 
	// The zipPath argument specifies the path of a ZIP file in the local filesystem.
	// 
	// This method checks only for traditional Zip 2.0 password protection.
	// 
	// Returns true if the ZIP archive is password protected, otherwise returns
	// false.
	// 
	bool IsPasswordProtected(const wchar_t *zipPath);

	// Loads the caller of the task's async method.
	bool LoadTaskCaller(CkTaskW &task);

	// Initializes a new empty ZIP archive.
	// 
	//     * If another ZIP archive is currently open, it is closed.
	//     * All existing in-memory ZIP entries are discarded.
	//     * The FileName property is set to zipPath.
	// 
	// No ZIP file is actually created until a Write* method is called.
	// 
	// This method resets the Zip object to a clean empty state.
	// 
	bool NewZip(const wchar_t *zipPath);

	// Opens a ZIP archive contained entirely within a BinData object.
	// 
	// This method allows ZIP archives to be processed entirely in memory without
	// requiring a filesystem file.
	// 
	// When a ZIP archive is opened:
	// 
	//     * PasswordProtect is automatically set if legacy Zip 2.0 encryption is
	//     detected.
	//     * Encryption is automatically set if strong encryption is detected.
	//     * A value of 4 for Encryption indicates WinZip-compatible AES encryption.
	bool OpenBd(CkBinDataW &binData);

	// (Windows only)
	// 
	// Opens a ZIP archive embedded as a resource within a Windows executable.
	// 
	//     * exeFilename specifies the EXE file path.
	//     * resourceName specifies the embedded resource name containing the ZIP data.
	// 
	// This method is useful when ZIP archives are packaged within Windows
	// applications.
	// 
	bool OpenEmbedded(const wchar_t *exeFilename, const wchar_t *resourceName);

	// Opens a ZIP archive from in-memory byte data.
	// 
	// When the ZIP archive is opened:
	// 
	//     * PasswordProtect is automatically set if legacy password protection is
	//     detected.
	//     * Encryption is automatically set if strong encryption is detected.
	//     * Encryption = 4 indicates AES encryption.
	bool OpenFromByteData(CkByteData &byteData);

	// Opens a ZIP archive directly from in-memory binary data.
	// 
	// This allows ZIP processing without using filesystem files.
	// 
	// Typical use cases include:
	// 
	//     * ZIP data loaded from a database
	//     * ZIP data received from HTTP responses
	//     * ZIP data stored entirely in memory
	// 
	// When the ZIP archive is opened:
	// 
	//     * PasswordProtect is automatically set if Zip 2.0 encryption is detected.
	//     * Encryption is automatically set if strong encryption is detected.
	bool OpenFromMemory(CkByteData &inData);

	// Opens a ZIP archive from the local filesystem.
	// 
	// The zipPath argument specifies the path of the ZIP file to open.
	// 
	// Encrypted ZIP archives may be opened without providing a password, but encrypted
	// entries cannot be extracted until the correct password is provided using
	// DecryptPassword.
	// 
	// When the ZIP archive is opened:
	// 
	//     * PasswordProtect is automatically set if legacy Zip 2.0 encryption is
	//     detected.
	//     * Encryption is automatically set if strong encryption is detected.
	//     * Encryption = 4 indicates WinZip-compatible AES encryption.
	bool OpenZip(const wchar_t *zipPath);

	// Creates an asynchronous task to call the OpenZip method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *OpenZipAsync(const wchar_t *zipPath);

	// Efficiently appends additional entries to an existing ZIP archive.
	// 
	// The zipPath argument specifies the path of an existing ZIP archive in the local
	// filesystem.
	// 
	// This method avoids rewriting existing entries.
	// 
	//     * Existing ZIP entries remain unchanged.
	//     * New entries are appended to the end of the ZIP archive.
	//     * The ZIP central directory is updated accordingly.
	// 
	// This method is typically faster than rebuilding the entire ZIP archive.
	// 
	bool QuickAppend(const wchar_t *zipPath);

	// Creates an asynchronous task to call the QuickAppend method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *QuickAppendAsync(const wchar_t *zipPath);

	// Removes a file extension from the internal "no-compression" extension list.
	// 
	// After removal, files having this extension may be compressed normally.
	// 
	// The extension may be specified with or without the leading dot.
	// 
	void RemoveNoCompressExtension(const wchar_t *fileExtension);

	// Sets the compression level for all file and data entries currently contained
	// within the ZIP object.
	// 
	//     * 0 → No compression
	//     * 9 → Maximum compression
	// 
	// The default compression level is 6.
	// 
	// Important: This method should be called after files or data entries have already
	// been added to the ZIP object.
	// 
	// The compression level cannot be changed for mapped entries originating from an
	// already-open ZIP archive.
	// 
	void SetCompressionLevel(int level);

	// Specifies a collection of wildcard exclusion patterns used when adding files to
	// the ZIP archive.
	// 
	// Each pattern may use the wildcard character * to match zero or more characters.
	// 
	// Files matching any exclusion pattern are skipped.
	// 
	void SetExclusions(CkStringArrayW &excludePatterns);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// Sets a configuration parameter embedded within a self-extracting EXE created by
	// WriteExe or WriteExe2.
	// 
	// The paramName should be one of the XML configuration tag names described in the
	// ExeXmlConfig property documentation.
	// 
	// For example:
	// 
	//     SetExeConfigParam("MainUnzipBtn","Extract")
	// 
	// This changes the text displayed on the self-extractor's main unzip button.
	// 
	void SetExeConfigParam(const wchar_t *paramName, const wchar_t *paramValue);

	// Sets both the decrypt password and encrypt password.
	// 
	// This method affects:
	// 
	//     * DecryptPassword
	//     * EncryptPassword
	// 
	// Note: This method is deprecated in favor of setting DecryptPassword and
	// EncryptPassword separately.
	// 
	void SetPassword(const wchar_t *password);

	// Extracts all files and directories from the ZIP archive.
	// 
	//     * dirPath specifies the destination directory.
	//     * Subdirectories are automatically created as needed.
	// 
	// Returns the number of files extracted.
	// 
	// Returns -1 if a failure occurs.
	// 
	int Unzip(const wchar_t *dirPath);

	// Creates an asynchronous task to call the Unzip method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UnzipAsync(const wchar_t *dirPath);

	// Extracts all files into a single directory.
	// 
	// All directory path information stored within the ZIP archive is ignored.
	// 
	// If multiple files have the same filename, later extracted files overwrite
	// earlier ones.
	// 
	// Returns the number of files extracted, or -1 on failure.
	// 
	int UnzipInto(const wchar_t *dirPath);

	// Creates an asynchronous task to call the UnzipInto method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UnzipIntoAsync(const wchar_t *dirPath);

	// Extracts only entries whose stored paths match a wildcard pattern.
	// 
	//     * The wildcard character * matches zero or more characters.
	//     * If no wildcard is used, an exact filename match is required.
	// 
	// Subdirectories are automatically created as needed.
	// 
	// Returns the number of files extracted, or -1 on failure.
	// 
	int UnzipMatching(const wchar_t *dirPath, const wchar_t *pattern, bool verbose);

	// Creates an asynchronous task to call the UnzipMatching method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UnzipMatchingAsync(const wchar_t *dirPath, const wchar_t *pattern, bool verbose);

	// Extracts matching entries into a single directory while ignoring all stored ZIP
	// path information.
	// 
	// Matching behavior is identical to UnzipMatching.
	// 
	// If duplicate filenames occur, later extracted files overwrite earlier ones.
	// 
	// Returns the number of files extracted, or -1 on failure.
	// 
	int UnzipMatchingInto(const wchar_t *dirPath, const wchar_t *pattern, bool verbose);

	// Creates an asynchronous task to call the UnzipMatchingInto method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UnzipMatchingIntoAsync(const wchar_t *dirPath, const wchar_t *pattern, bool verbose);

	// Extracts only files that:
	// 
	//     * Do not already exist
	//     * Or have older modification timestamps than the ZIP entry
	// 
	// Subdirectories are automatically created as needed.
	// 
	// Returns the number of files extracted, or -1 on failure.
	// 
	int UnzipNewer(const wchar_t *dirPath);

	// Creates an asynchronous task to call the UnzipNewer method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UnzipNewerAsync(const wchar_t *dirPath);

	// Verifies that the current DecryptPassword value is correct for the currently
	// opened ZIP archive.
	// 
	// This method allows password validation before attempting extraction.
	// 
	// Returns true if the password is valid, otherwise returns false.
	// 
	bool VerifyPassword(void);

	// Writes the ZIP archive to a BinData object instead of a filesystem file.
	// 
	// The generated ZIP archive exists entirely in memory.
	// 
	// The ZIP data written by this method may later be opened using OpenBd.
	// 
	bool WriteBd(CkBinDataW &binData);

	// Creates an asynchronous task to call the WriteBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteBdAsync(CkBinDataW &binData);

	// (Windows only, for creating self-extracting EXE's)
	// 
	// Creates a Windows self-extracting executable (EXE).
	// 
	// The generated EXE contains both the extraction logic and the ZIP archive data.
	// 
	// There are no limitations on:
	// 
	//     * Total ZIP size
	//     * Individual file size
	//     * Number of files
	// 
	// The generated EXE supports the following command-line arguments:
	// 
	//     * -log logFileName
	//     * -unzipDir unzipDirectoryPath
	//     * -pwd password
	//     * -ap autoRunParams
	bool WriteExe(const wchar_t *exeFilename);

	// Creates an asynchronous task to call the WriteExe method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteExeAsync(const wchar_t *exeFilename);

	// (Relevant only when running on a Microsoft Windows operating system.) Writes a
	// self-extracting MS-Windows EXE with no limitations on total file size and no
	// limitations on the size of any one file contained within. The 1st argument is
	// the pre-existing EXE housing that is to be used. Essentially, the
	// self-extracting EXE is a concatenation of the EXE housing and the
	// compressed/encrypted data. The 2nd argument is the name of the EXE to create or
	// overwrite. A housing for use with WriteExe2 can be found here:
	// https://www.chilkatsoft.com/d2/SaExtract.zip
	bool WriteExe2(const wchar_t *exePath, const wchar_t *destExePath, bool bAesEncrypt, int keyLength, const wchar_t *password);

	// Creates an asynchronous task to call the WriteExe2 method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteExe2Async(const wchar_t *exePath, const wchar_t *destExePath, bool bAesEncrypt, int keyLength, const wchar_t *password);

	// (Relevant only when running on a Microsoft Windows operating system.) Same as
	// WriteExe, but instead of writing a file, the MS-Windows EXE is written to
	// memory.
	bool WriteExeToMemory(CkByteData &outBytes);

	// Creates an asynchronous task to call the WriteExeToMemory method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteExeToMemoryAsync(void);

	// Same as WriteZip, but instead of writing the Zip to a file, it writes to memory.
	// Zips that are written to memory can also be opened from memory by calling
	// OpenFromMemory.
	bool WriteToMemory(CkByteData &outData);

	// Creates an asynchronous task to call the WriteToMemory method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteToMemoryAsync(void);

	// Saves the Zip to a file and implictly re-opens it so further operations can
	// continue. Use WriteZipAndClose to write and close the Zip. There is no
	// limitation on the size of files that may be contained within a .zip, the total
	// number of files in a .zip, or the total size of a .zip. If necessary, WriteZip
	// will use the ZIP64 file format extensions when 4GB or file count limitations of
	// the old zip file format are exceeded.
	bool WriteZip(void);

	// Creates an asynchronous task to call the WriteZip method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteZipAsync(void);

	// Saves the Zip to a file and closes it. On return, the Zip object will be in the
	// state as if NewZip had been called. There is no limitation on the size of files
	// that may be contained within a .zip, the total number of files in a .zip, or the
	// total size of a .zip. If necessary, WriteZip will use the ZIP64 file format
	// extensions when 4GB or file count limitations of the old zip file format are
	// exceeded.
	bool WriteZipAndClose(void);

	// Creates an asynchronous task to call the WriteZipAndClose method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *WriteZipAndCloseAsync(void);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
