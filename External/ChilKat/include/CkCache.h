// CkCache.h: interface for the CkCache class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkCache_H
#define _CkCache_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkDateTime;
class CkBinData;
class CkByteData;
class CkStringBuilder;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkCache
class CK_VISIBLE_PUBLIC CkCache  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkCache(const CkCache &);
	CkCache &operator=(const CkCache &);

    public:
	CkCache(void);
	virtual ~CkCache(void);

	static CkCache *createNew(void);
	static CkCache *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the ETag metadata associated with the most recently fetched cache item.
	// An empty string means that the fetched item has no stored ETag.
	// 
	// Read after a fetch: This property describes the item returned by the most recent
	// successful fetch operation, such as FetchBd[1], FetchSb[2], or FetchText[3].
	// ETags are opaque metadata: The cache stores and returns the string but does not
	// interpret it. Applications commonly use an HTTP ETag with conditional requests
	// such as If-None-Match.
	// 
	// References:
	// [1] #FetchBd
	// [2] #FetchSb
	// [3] #FetchText
	void get_LastEtagFetched(CkString &str);
	// Returns the ETag metadata associated with the most recently fetched cache item.
	// An empty string means that the fetched item has no stored ETag.
	// 
	// Read after a fetch: This property describes the item returned by the most recent
	// successful fetch operation, such as FetchBd[1], FetchSb[2], or FetchText[3].
	// ETags are opaque metadata: The cache stores and returns the string but does not
	// interpret it. Applications commonly use an HTTP ETag with conditional requests
	// such as If-None-Match.
	// 
	// References:
	// [1] #FetchBd
	// [2] #FetchSb
	// [3] #FetchText
	const char *lastEtagFetched(void);

	// Returns the expiration date and time stored for the most recently fetched cache
	// item, formatted as an RFC 822-style Internet date. An empty string represents an
	// item with no expiration date.
	// 
	// Expiration is metadata: Fetching an expired item is still possible. Read
	// LastHitExpired[1] after the fetch to determine whether the returned entry is
	// stale.
	// 
	// References:
	// [1] #LastHitExpired
	void get_LastExpirationFetchedStr(CkString &str);
	// Returns the expiration date and time stored for the most recently fetched cache
	// item, formatted as an RFC 822-style Internet date. An empty string represents an
	// item with no expiration date.
	// 
	// Expiration is metadata: Fetching an expired item is still possible. Read
	// LastHitExpired[1] after the fetch to determine whether the returned entry is
	// stale.
	// 
	// References:
	// [1] #LastHitExpired
	const char *lastExpirationFetchedStr(void);

	// Returns true when the expiration time of the most recently fetched item is
	// earlier than the current system date and time; otherwise returns false.
	// 
	// Expired does not mean deleted: Expiration marks an entry as stale. The file
	// remains in the cache until it is replaced or removed by methods such as
	// DeleteAllExpired[1] or DeleteFromCache[2].
	// 
	// References:
	// [1] #DeleteAllExpired
	// [2] #DeleteFromCache
	bool get_LastHitExpired(void);

	// Returns the application-defined key associated with the most recently fetched
	// cache item.
	// 
	// Keys are not limited to URLs: A canonicalized URL is a common key for cached web
	// content, but any unique string may be used. Reusing a key causes a save
	// operation to replace the existing item for that key.
	void get_LastKeyFetched(CkString &str);
	// Returns the application-defined key associated with the most recently fetched
	// cache item.
	// 
	// Keys are not limited to URLs: A canonicalized URL is a common key for cached web
	// content, but any unique string may be used. Reusing a key causes a save
	// operation to replace the existing item for that key.
	const char *lastKeyFetched(void);

	// Gets or sets the number of directory levels used beneath each cache root. Valid
	// values are 0, 1, and 2.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                           Directory layout                           |
	// +=======+======================================================================+
	// | 0     | All cache files are stored directly in the cache root.               |
	// +-------+----------------------------------------------------------------------+
	// | 1     | Files are distributed among 256 first-level directories named 0      |
	// |       | through 255 .                                                        |
	// +-------+----------------------------------------------------------------------+
	// | 2     | Files are distributed through two levels of 256 directories,         |
	// |       | allowing as many as 65,536 leaf directories per root.                |
	// +-------+----------------------------------------------------------------------+
	// 
	// Configure before use: Use the same level when reopening an existing cache.
	// Changing the layout does not reorganize previously stored files and can prevent
	// the object from locating them through their keys.
	int get_Level(void);
	// Gets or sets the number of directory levels used beneath each cache root. Valid
	// values are 0, 1, and 2.
	// 
	// +-------+----------------------------------------------------------------------+
	// | Value |                           Directory layout                           |
	// +=======+======================================================================+
	// | 0     | All cache files are stored directly in the cache root.               |
	// +-------+----------------------------------------------------------------------+
	// | 1     | Files are distributed among 256 first-level directories named 0      |
	// |       | through 255 .                                                        |
	// +-------+----------------------------------------------------------------------+
	// | 2     | Files are distributed through two levels of 256 directories,         |
	// |       | allowing as many as 65,536 leaf directories per root.                |
	// +-------+----------------------------------------------------------------------+
	// 
	// Configure before use: Use the same level when reopening an existing cache.
	// Changing the layout does not reorganize previously stored files and can prevent
	// the object from locating them through their keys.
	void put_Level(int newVal);

	// Returns the number of cache-root directories that have been registered by
	// calling AddRoot[1].
	// 
	// Multiple roots: A cache may span more than one directory or storage device.
	// Configure the same root set when reopening a persistent cache so previously
	// stored items remain discoverable.
	// 
	// References:
	// [1] #AddRoot
	int get_NumRoots(void);



	// ----------------------
	// Methods
	// ----------------------
	// Adds path as a root directory for the disk cache. Call this method once for each
	// root that should participate in the cache.
	// 
	// For example, a cache distributed across D:\cacheRoot, E:\cacheRoot, and
	// F:\cacheRoot is configured by calling this method three times.
	// 
	// Use dedicated writable directories: Cache cleanup methods can delete cache files
	// beneath every configured root. Do not mix unrelated application files into a
	// cache root.
	// Persistent configuration: Recreate the same roots and Level[1] setting before
	// accessing a cache created by an earlier process or application run.
	// 
	// References:
	// [1] #Level
	void AddRoot(const char *path);


	// Deletes every cache item from all configured roots and returns the number of
	// cache files removed. Multi-level subdirectories are retained.
	// 
	// Destructive operation: This cannot be limited to a key prefix or reversed. Use
	// cache roots dedicated to Chilkat cache data.
	int DeleteAll(void);


	// Deletes all cache items whose stored expiration time is earlier than the current
	// system time and returns the number of files removed.
	// 
	// Non-expiring entries remain: Items saved without an expiration date are not
	// removed by this method.
	int DeleteAllExpired(void);


	// Deletes the cache item identified by key.
	// 
	// +------------+-----------------------------------------------------------------+
	// |   Return   |                             Meaning                             |
	// |   value    |                                                                 |
	// +============+=================================================================+
	// | true     | The item was deleted, or no item existed for the key.           |
	// +------------+-----------------------------------------------------------------+
	// | false    | The item exists but could not be deleted, for example because   |
	// |            | of a filesystem permission or sharing error.                    |
	// +------------+-----------------------------------------------------------------+
	// 
	// Idempotent deletion: A missing key is not treated as an error, which makes it
	// safe to call this method when the application merely wants to ensure that an
	// item is absent.
	bool DeleteFromCache(const char *key);


	// Deletes cache items older than the cutoff date and time supplied in dateTime.
	// 
	// Returns the number of cache files deleted, or -1 if an error occurs.
	// 
	// Different from expiration cleanup: Use DeleteAllExpired[1] when the decision
	// should be based specifically on each item's expiration metadata.
	// 
	// References:
	// [1] #DeleteAllExpired
	int DeleteOlderDt(CkDateTime &dateTime);


	// Deletes cache items older than the cutoff date and time supplied in dateTimeStr as an
	// RFC 822-style Internet date string.
	// 
	// Returns the number of cache files deleted, or -1 if an error occurs.
	// 
	// Date format: A typical value is Mon, 03 Aug 2026 12:00:00 GMT. Use
	// DeleteOlderDt[1] when the cutoff is already available as a CkDateTime.
	// 
	// References:
	// [1] #DeleteOlderDt
	int DeleteOlderStr(const char *dateTimeStr);


	// Retrieves the binary item identified by key and loads its bytes into the
	// BinData object supplied in bd.
	// 
	// The key is application-defined, may contain any characters, and must uniquely
	// identify the intended item.
	// 
	// Check the return value: Use the destination only when this method returns
	// true. A failed lookup or filesystem error returns false.
	// Freshness: A successful fetch may return an expired item. Read LastHitExpired[1]
	// immediately afterward when stale data must not be used.
	// 
	// References:
	// [1] #LastHitExpired
	bool FetchBd(const char *key, CkBinData &bd);


	// Retrieves the binary item identified by key from the disk cache and returns its
	// bytes. The key may contain any characters and may be any length, but it must
	// uniquely identify the intended item.
	// 
	// Empty data versus failure: In language bindings where failure is represented by
	// an empty or null byte array, check the binding's normal success indicator, such
	// as LastMethodSuccess, when an empty cached item is valid.
	bool FetchFromCache(const char *key, CkByteData &outBytes);


	// Retrieves the text item identified by key and loads its content into the
	// StringBuilder supplied in sb.
	// 
	// The key is application-defined, may contain any characters, and must uniquely
	// identify the intended item.
	// 
	// Check the return value: Use the destination only when this method returns
	// true. A failed lookup or filesystem error returns false.
	// Freshness: A successful fetch may return an expired item. Read LastHitExpired[1]
	// immediately afterward when stale data must not be used.
	// 
	// References:
	// [1] #LastHitExpired
	bool FetchSb(const char *key, CkStringBuilder &sb);


	// Retrieves the text item identified by key and returns its string content.
	// 
	// The key is application-defined, may contain any characters, and must uniquely
	// identify the intended item.
	// 
	// Freshness is separate: A successful fetch can return an expired entry. Read
	// LastHitExpired[1] immediately afterward when the application requires only fresh
	// data.
	// 
	// References:
	// [1] #LastHitExpired
	bool FetchText(const char *key, CkString &outStr);

	// Retrieves the text item identified by key and returns its string content.
	// 
	// The key is application-defined, may contain any characters, and must uniquely
	// identify the intended item.
	// 
	// Freshness is separate: A successful fetch can return an expired entry. Read
	// LastHitExpired[1] immediately afterward when the application requires only fresh
	// data.
	// 
	// References:
	// [1] #LastHitExpired
	const char *fetchText(const char *key);

	// Returns the ETag metadata stored with the cache item identified by key.
	// 
	// Opaque value: Chilkat does not parse or validate the ETag. An application may
	// store any auxiliary string here, although HTTP entity tags are the common use
	// case.
	bool GetEtag(const char *key, CkString &outStr);

	// Returns the ETag metadata stored with the cache item identified by key.
	// 
	// Opaque value: Chilkat does not parse or validate the ETag. An application may
	// store any auxiliary string here, although HTTP entity tags are the common use
	// case.
	const char *getEtag(const char *key);
	// Returns the ETag metadata stored with the cache item identified by key.
	// 
	// Opaque value: Chilkat does not parse or validate the ETag. An application may
	// store any auxiliary string here, although HTTP entity tags are the common use
	// case.
	const char *etag(const char *key);


	// Deprecated: Use GetExpirationStr[1] and load the returned value into a
	// CkDateTime when an object representation is required.
	// 
	// Returns the expiration date and time for the item identified by key as a newly
	// returned CkDateTime object.
	// 
	// 
	// References:
	// [1] #GetExpirationStr
	// The caller is responsible for deleting the object returned by this method.
	CkDateTime *GetExpirationDt(const char *key);


	// Returns the expiration date and time stored for the item identified by url,
	// formatted as an RFC 822-style Internet date string.
	// 
	// Argument name: Some language bindings name url url for historical reasons. It
	// is the cache key and does not need to be a URL.
	// No-expiration entries: An empty stored expiration represents an item that does
	// not expire automatically.
	bool GetExpirationStr(const char *url, CkString &outStr);

	// Returns the expiration date and time stored for the item identified by url,
	// formatted as an RFC 822-style Internet date string.
	// 
	// Argument name: Some language bindings name url url for historical reasons. It
	// is the cache key and does not need to be a URL.
	// No-expiration entries: An empty stored expiration represents an item that does
	// not expire automatically.
	const char *getExpirationStr(const char *url);
	// Returns the expiration date and time stored for the item identified by url,
	// formatted as an RFC 822-style Internet date string.
	// 
	// Argument name: Some language bindings name url url for historical reasons. It
	// is the cache key and does not need to be a URL.
	// No-expiration entries: An empty stored expiration represents an item that does
	// not expire automatically.
	const char *expirationStr(const char *url);


	// Returns the absolute filesystem path of the cache file associated with key.
	// 
	// Implementation detail: Treat the returned path as diagnostic information.
	// Applications should normally read, update, and delete entries through the Cache
	// API rather than modifying cache files directly.
	bool GetFilename(const char *key, CkString &outStr);

	// Returns the absolute filesystem path of the cache file associated with key.
	// 
	// Implementation detail: Treat the returned path as diagnostic information.
	// Applications should normally read, update, and delete entries through the Cache
	// API rather than modifying cache files directly.
	const char *getFilename(const char *key);
	// Returns the absolute filesystem path of the cache file associated with key.
	// 
	// Implementation detail: Treat the returned path as diagnostic information.
	// Applications should normally read, update, and delete entries through the Cache
	// API rather than modifying cache files directly.
	const char *filename(const char *key);


	// Returns the directory path of the cache root at zero-based index. Valid indexes
	// range from 0 through NumRoots[1] - 1.
	// 
	// 
	// References:
	// [1] #NumRoots
	bool GetRoot(int index, CkString &outStr);

	// Returns the directory path of the cache root at zero-based index. Valid indexes
	// range from 0 through NumRoots[1] - 1.
	// 
	// 
	// References:
	// [1] #NumRoots
	const char *getRoot(int index);
	// Returns the directory path of the cache root at zero-based index. Valid indexes
	// range from 0 through NumRoots[1] - 1.
	// 
	// 
	// References:
	// [1] #NumRoots
	const char *root(int index);


	// Returns true if an item exists for key, or false if the key is not present.
	// 
	// Presence is not freshness: This method does not imply that the entry is
	// unexpired. Fetch the item and examine LastHitExpired[1], or read its expiration
	// metadata, when freshness matters.
	// 
	// References:
	// [1] #LastHitExpired
	bool IsCached(const char *key);


	// Stores the contents of bd as binary cache data under key. If the key already
	// exists, its data and metadata are replaced.
	// 
	// +----------+-------------------------------------------------------------------+
	// | Argument |                              Purpose                              |
	// +==========+===================================================================+
	// | key     | The unique application-defined cache key.                         |
	// +----------+-------------------------------------------------------------------+
	// | expiration     | Expiration as an RFC 822-style Internet date string. Pass an      |
	// |          | empty string for no expiration.                                   |
	// +----------+-------------------------------------------------------------------+
	// | etag     | Optional ETag or application metadata. Pass an empty string when  |
	// |          | unused.                                                           |
	// +----------+-------------------------------------------------------------------+
	// | bd     | The BinData containing the bytes to save.                         |
	// +----------+-------------------------------------------------------------------+
	// 
	// Expiration is not automatic deletion: An expired item remains present until it
	// is replaced or explicitly removed. This permits stale-while-revalidate workflows
	// but requires the application to check freshness.
	bool SaveBd(const char *key, const char *expiration, const char *etag, CkBinData &bd);


	// Stores itemTextData as a text cache item under key, with the expiration date and time
	// supplied in expireDateTime. If the key already exists, its data and metadata are replaced.
	// 
	// eTag is optional ETag or application metadata and may be an empty string. The
	// key may contain any characters and may be any length, but it must uniquely
	// identify the item.
	// 
	// Expiration does not delete: After the expiration time passes, the entry remains
	// on disk and can still be fetched. Use LastHitExpired[1] to detect staleness and
	// a deletion method to remove it.
	// 
	// References:
	// [1] #LastHitExpired
	bool SaveTextDt(const char *key, CkDateTime &expireDateTime, const char *eTag, const char *itemTextData);


	// Stores itemTextData as a non-expiring text cache item under key. If the key already
	// exists, its data and metadata are replaced.
	// 
	// eTag is optional ETag or application metadata and may be an empty string.
	// 
	bool SaveTextNoExpire(const char *key, const char *eTag, const char *itemTextData);


	// Stores itemTextData as a text cache item under key, with expireDateTime providing the expiration
	// time as an RFC 822-style Internet date string. If the key already exists, its
	// data and metadata are replaced.
	// 
	// eTag is optional ETag or application metadata and may be empty.
	// 
	// Date alternatives: Use SaveTextDt[1] when the expiration is available as a
	// CkDateTime, or SaveTextNoExpire[2] for an entry without expiration.
	// 
	// References:
	// [1] #SaveTextDt
	// [2] #SaveTextNoExpire
	bool SaveTextStr(const char *key, const char *expireDateTime, const char *eTag, const char *itemTextData);


	// Stores itemData as binary cache data under key, using expireDateTime as the expiration date
	// and time. If the key already exists, its data and metadata are replaced.
	// 
	// eTag is optional ETag or application metadata and may be empty.
	// 
	bool SaveToCacheDt(const char *key, CkDateTime &expireDateTime, const char *eTag, CkByteData &itemData);


	// Stores itemData as non-expiring binary cache data under key. If the key already
	// exists, its data and metadata are replaced. eTag is optional ETag or application
	// metadata and may be empty.
	// 
	bool SaveToCacheNoExpire(const char *key, const char *eTag, CkByteData &itemData);


	// Stores itemData as binary cache data under key, with expireDateTime providing the expiration
	// time as an RFC 822-style Internet date string. If the key already exists, its
	// data and metadata are replaced.
	// 
	// eTag is optional ETag or application metadata and may be empty. Some language
	// bindings name key url; it is the cache key and need not be a URL.
	// 
	bool SaveToCacheStr(const char *key, const char *expireDateTime, const char *eTag, CkByteData &itemData);


	// Replaces the expiration date and time of the cache item identified by key with
	// the CkDateTime value supplied in expireDateTime. The cached data and ETag are unchanged.
	// 
	// Existing item required: This method updates metadata; it does not create a new
	// cache entry when the key is absent.
	bool UpdateExpirationDt(const char *key, CkDateTime &expireDateTime);


	// Replaces the expiration date and time of the cache item identified by key with
	// the RFC 822-style Internet date string supplied in expireDateTime. The cached data and
	// ETag are unchanged.
	// 
	// Argument name: Some language bindings name key url; it is the cache key and
	// does not need to be a URL. Use UpdateExpirationDt[1] for a CkDateTime value.
	// 
	// References:
	// [1] #UpdateExpirationDt
	bool UpdateExpirationStr(const char *key, const char *expireDateTime);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
