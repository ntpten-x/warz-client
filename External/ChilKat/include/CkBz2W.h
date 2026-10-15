// CkBz2W.h: interface for the CkBz2W class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkBz2W_H
#define _CkBz2W_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkBinDataW;
class CkTaskW;
class CkByteData;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkBz2W
class CK_VISIBLE_PUBLIC CkBz2W  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkBz2W(const CkBz2W &);
	CkBz2W &operator=(const CkBz2W &);

    public:
	CkBz2W(void);
	virtual ~CkBz2W(void);

	

	static CkBz2W *createNew(void);
	

	CkBz2W(bool bCallbackOwned);
	static CkBz2W *createNew(bool bCallbackOwned);

	
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
	// Set this property to true to request cancellation of the compression or
	// decompression operation currently executing on this object. Long-running
	// operations check the request periodically; an operation that finishes quickly
	// may complete before the request is observed.
	// 
	// A synchronous call can be cancelled by setting this property from another
	// thread. After cancellation is processed, Chilkat resets the property to false.
	// If no operation is running, a previously set value is cleared when the next
	// method begins.
	// 
	// Cancellation is cooperative: Setting this property requests an abort; it does
	// not guarantee immediate termination. Check the method's return value and
	// LastErrorText to determine the final outcome.
	bool get_AbortCurrent(void);
	// Set this property to true to request cancellation of the compression or
	// decompression operation currently executing on this object. Long-running
	// operations check the request periodically; an operation that finishes quickly
	// may complete before the request is observed.
	// 
	// A synchronous call can be cancelled by setting this property from another
	// thread. After cancellation is processed, Chilkat resets the property to false.
	// If no operation is running, a previously set value is cleared when the next
	// method begins.
	// 
	// Cancellation is cooperative: Setting this property requests an abort; it does
	// not guarantee immediate termination. Check the method's return value and
	// LastErrorText to determine the final outcome.
	void put_AbortCurrent(bool newVal);

	// Specifies the interval, in milliseconds, between AbortCheck[1] event callbacks
	// during supported long-running compression and decompression operations. The
	// default is 0, which disables AbortCheck callbacks.
	// 
	// Set a positive value, such as 200, when the application needs periodic
	// opportunities to request cancellation. The interval is approximate; callbacks
	// occur only while an operation is at a point where progress events can be
	// delivered.
	// 
	// Cancellation workflow: In an AbortCheck handler, set the callback's abort value
	// to request termination. A synchronous method may also be cancelled from another
	// thread by setting AbortCurrent[2] to true.
	// 
	// References:
	// [1] #AbortCheck
	// [2] #AbortCurrent
	int get_HeartbeatMs(void);
	// Specifies the interval, in milliseconds, between AbortCheck[1] event callbacks
	// during supported long-running compression and decompression operations. The
	// default is 0, which disables AbortCheck callbacks.
	// 
	// Set a positive value, such as 200, when the application needs periodic
	// opportunities to request cancellation. The interval is approximate; callbacks
	// occur only while an operation is at a point where progress events can be
	// delivered.
	// 
	// Cancellation workflow: In an AbortCheck handler, set the callback's abort value
	// to request termination. A synchronous method may also be cancelled from another
	// thread by setting AbortCurrent[2] to true.
	// 
	// References:
	// [1] #AbortCheck
	// [2] #AbortCurrent
	void put_HeartbeatMs(int newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Compresses the current contents of bd in place. On success, the BinData no
	// longer contains the original bytes; it contains the complete standard BZip2
	// stream that may be saved with a.bz2 extension.
	// 
	// In-place transformation: Preserve a copy of the original data if it is still
	// needed after this call. A BZip2 stream contains a stream header, one or more
	// compressed blocks with integrity checks, and an end-of-stream marker. It does
	// not contain archive filenames or directory entries.
	bool CompressBd(CkBinDataW &bd);

	// Creates an asynchronous task to call the CompressBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressBdAsync(CkBinDataW &bd);

	// Reads the file at inFilename and writes its compressed bytes as a standard BZip2
	// stream to the file at toPath. The output is conventionally given a.bz2 extension.
	// 
	// Both arguments must identify files, not directories. They may be absolute or
	// relative paths, for example data/report.txt and data/report.txt.bz2.
	// 
	// BZip2 is a compressor, not an archive format: A.bz2 file represents one
	// compressed byte stream. It does not store the original filename, directory path,
	// timestamps, permissions, or multiple archive entries. Formats such as.tar.bz2
	// first combine files in a TAR archive and then compress that TAR stream with
	// BZip2.
	bool CompressFile(const wchar_t *inFilename, const wchar_t *toPath);

	// Creates an asynchronous task to call the CompressFile method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressFileAsync(const wchar_t *inFilename, const wchar_t *toPath);

	// Reads the file at inFilename, compresses it with BZip2, and returns the complete.bz2
	// byte stream in memory.
	// 
	bool CompressFileToMem(const wchar_t *inFilename, CkByteData &outBytes);

	// Creates an asynchronous task to call the CompressFileToMem method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressFileToMemAsync(const wchar_t *inFilename);

	// Compresses the bytes in inData and returns the complete standard BZip2 stream as
	// an in-memory byte array.
	// 
	bool CompressMemory(CkByteData &inData, CkByteData &outBytes);

	// Creates an asynchronous task to call the CompressMemory method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressMemoryAsync(CkByteData &inData);

	// Compresses the bytes in inData and writes the resulting standard BZip2 stream to
	// the file at toPath.
	// 
	bool CompressMemToFile(CkByteData &inData, const wchar_t *toPath);

	// Creates an asynchronous task to call the CompressMemToFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressMemToFileAsync(CkByteData &inData, const wchar_t *toPath);

	// Loads this Bz2 object with the caller state associated with the asynchronous
	// operation represented by task.
	// 
	// Advanced async infrastructure: This method is used to recover the original
	// caller object associated with a completed task. It is not normally needed by
	// application code. Pass a Task created by a compatible Bz2 asynchronous method;
	// an unrelated task cannot be loaded.
	bool LoadTaskCaller(CkTaskW &task);

	// Decompresses the BZip2 stream currently contained in bd in place. On success,
	// the BinData is replaced with the original uncompressed bytes.
	// 
	// Input requirement: bd must contain a complete, valid BZip2 stream, such as the
	// bytes of a.bz2 file or the output of CompressBd[1]. This method operates on
	// binary data and does not perform character-set conversion.
	// 
	// References:
	// [1] #CompressBd
	bool UncompressBd(CkBinDataW &bd);

	// Creates an asynchronous task to call the UncompressBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressBdAsync(CkBinDataW &bd);

	// Reads the BZip2 stream from the file at inFilename, decompresses it, and writes the
	// original uncompressed bytes to the file at toPath.
	// 
	// Both arguments must identify files, not directories. Chilkat does not derive the
	// destination name from the.bz2 filename because the BZip2 stream does not contain
	// the original filename.
	// 
	// Terminology: This method decompresses BZip2 data; it does not “unzip” a ZIP
	// archive. A.bz2 file normally contains a single compressed byte stream rather
	// than a collection of named files.
	bool UncompressFile(const wchar_t *inFilename, const wchar_t *toPath);

	// Creates an asynchronous task to call the UncompressFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressFileAsync(const wchar_t *inFilename, const wchar_t *toPath);

	// Reads and decompresses the BZip2 stream in the file at inFilename, returning the
	// original uncompressed bytes in memory.
	// 
	bool UncompressFileToMem(const wchar_t *inFilename, CkByteData &outBytes);

	// Creates an asynchronous task to call the UncompressFileToMem method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressFileToMemAsync(const wchar_t *inFilename);

	// Interprets inData as a complete BZip2 stream and returns the decompressed bytes in
	// memory.
	// 
	bool UncompressMemory(CkByteData &inData, CkByteData &outBytes);

	// Creates an asynchronous task to call the UncompressMemory method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressMemoryAsync(CkByteData &inData);

	// Interprets inData as a complete BZip2 stream, decompresses it, and writes the
	// original bytes to the file at toPath.
	// 
	bool UncompressMemToFile(CkByteData &inData, const wchar_t *toPath);

	// Creates an asynchronous task to call the UncompressMemToFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressMemToFileAsync(CkByteData &inData, const wchar_t *toPath);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
