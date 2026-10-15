// CkMht.h: interface for the CkMht class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkMht_H
#define _CkMht_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkMht
class CK_VISIBLE_PUBLIC CkMht  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkMht(const CkMht &);
	CkMht &operator=(const CkMht &);

    public:
	CkMht(void);
	virtual ~CkMht(void);

	static CkMht *createNew(void);
	static CkMht *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	CkBaseProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Set to true to request cancellation of the operation currently running on this
	// object. Long-running network and file operations periodically check this
	// property; a fast operation may complete before the request is observed.
	// 
	// A synchronous method can be cancelled from another thread by setting this
	// property on the same object. Chilkat resets the property to false after an
	// abort is processed, and a stale request is cleared when a later method begins.
	// 
	// Cancellation request: Cancellation is cooperative rather than instantaneous.
	// Always inspect the method's return value and diagnostic properties to determine
	// the final outcome.
	bool get_AbortCurrent(void);
	// Set to true to request cancellation of the operation currently running on this
	// object. Long-running network and file operations periodically check this
	// property; a fast operation may complete before the request is observed.
	// 
	// A synchronous method can be cancelled from another thread by setting this
	// property on the same object. Chilkat resets the property to false after an
	// abort is processed, and a stale request is cleared when a later method begins.
	// 
	// Cancellation request: Cancellation is cooperative rather than instantaneous.
	// Always inspect the method's return value and diagnostic properties to determine
	// the final outcome.
	void put_AbortCurrent(bool newVal);

	// Specifies a web base URL used when relative references in a local HTML file or
	// in-memory HTML string must be resolved in an HTTP/HTTPS context. For an
	// HTTP/HTTPS source page, Chilkat derives the base from the fetched URL
	// automatically.
	// 
	// Resolution precedence: An HTML <base href> element takes precedence over this
	// property. If no usable <base> exists, BaseUrl is used; otherwise Chilkat falls
	// back to the source page URL or the directory containing the local HTML file.
	// Local files: Relative filesystem references in a local HTML file can be resolved
	// from the file's own directory without setting this property. Set BaseUrl when
	// the document contains site-relative or root-relative references that should
	// resolve against a web origin. The value should be an HTTP or HTTPS URL, not a
	// filesystem directory.
	// Trailing slash: URL resolution follows normal base-URL rules. Use a trailing
	// slash for a directory-style base, such as https://www.example.com/section/.
	// Without it, the last path segment is treated as a filename and is removed before
	// relative resolution.
	// 
	// Relative url(...) and @import references inside a downloaded external stylesheet
	// are resolved against that stylesheet's final URL. References in inline <style>
	// blocks and style attributes are resolved against the page base. If no usable
	// base exists, unresolved relative references remain relative and their resources
	// are not captured.
	// 
	void get_BaseUrl(CkString &str);
	// Specifies a web base URL used when relative references in a local HTML file or
	// in-memory HTML string must be resolved in an HTTP/HTTPS context. For an
	// HTTP/HTTPS source page, Chilkat derives the base from the fetched URL
	// automatically.
	// 
	// Resolution precedence: An HTML <base href> element takes precedence over this
	// property. If no usable <base> exists, BaseUrl is used; otherwise Chilkat falls
	// back to the source page URL or the directory containing the local HTML file.
	// Local files: Relative filesystem references in a local HTML file can be resolved
	// from the file's own directory without setting this property. Set BaseUrl when
	// the document contains site-relative or root-relative references that should
	// resolve against a web origin. The value should be an HTTP or HTTPS URL, not a
	// filesystem directory.
	// Trailing slash: URL resolution follows normal base-URL rules. Use a trailing
	// slash for a directory-style base, such as https://www.example.com/section/.
	// Without it, the last path segment is treated as a filename and is removed before
	// relative resolution.
	// 
	// Relative url(...) and @import references inside a downloaded external stylesheet
	// are resolved against that stylesheet's final URL. References in inline <style>
	// blocks and style attributes are resolved against the page base. If no usable
	// base exists, unresolved relative references remain relative and their resources
	// are not captured.
	// 
	const char *baseUrl(void);
	// Specifies a web base URL used when relative references in a local HTML file or
	// in-memory HTML string must be resolved in an HTTP/HTTPS context. For an
	// HTTP/HTTPS source page, Chilkat derives the base from the fetched URL
	// automatically.
	// 
	// Resolution precedence: An HTML <base href> element takes precedence over this
	// property. If no usable <base> exists, BaseUrl is used; otherwise Chilkat falls
	// back to the source page URL or the directory containing the local HTML file.
	// Local files: Relative filesystem references in a local HTML file can be resolved
	// from the file's own directory without setting this property. Set BaseUrl when
	// the document contains site-relative or root-relative references that should
	// resolve against a web origin. The value should be an HTTP or HTTPS URL, not a
	// filesystem directory.
	// Trailing slash: URL resolution follows normal base-URL rules. Use a trailing
	// slash for a directory-style base, such as https://www.example.com/section/.
	// Without it, the last path segment is treated as a filename and is removed before
	// relative resolution.
	// 
	// Relative url(...) and @import references inside a downloaded external stylesheet
	// are resolved against that stylesheet's final URL. References in inline <style>
	// blocks and style attributes are resolved against the page base. If no usable
	// base exists, unresolved relative references remain relative and their resources
	// are not captured.
	// 
	void put_BaseUrl(const char *newVal);

	// Specifies the maximum number of seconds allowed for establishing a connection to
	// an HTTP server. The default is 10 seconds.
	// 
	// Connection timeout only: This setting limits connection establishment; it is not
	// a limit on the total time required to download a page. Use ReadTimeout[1] to
	// control inactivity while receiving data.
	// 
	// References:
	// [1] #ReadTimeout
	int get_ConnectTimeout(void);
	// Specifies the maximum number of seconds allowed for establishing a connection to
	// an HTTP server. The default is 10 seconds.
	// 
	// Connection timeout only: This setting limits connection establishment; it is not
	// a limit on the total time required to download a page. Use ReadTimeout[1] to
	// control inactivity while receiving data.
	// 
	// References:
	// [1] #ReadTimeout
	void put_ConnectTimeout(int newVal);

	// Specifies a local file path where Chilkat saves the HTML after it has been
	// processed for MHT or EML generation. Leave the property empty to disable this
	// diagnostic output.
	// 
	// Troubleshooting aid: Compare this file with DebugHtmlBefore[1] to inspect
	// rewritten URLs, removed scripts, and other transformations applied before the
	// MIME document is assembled. Do not enable diagnostic output to a sensitive or
	// publicly accessible location.
	// Debug-file behavior: An existing debug file is overwritten in place. Parent
	// directories are not created, and a relative path is resolved against the process
	// current working directory. The write is best-effort: failure to create or update
	// the debug file is recorded diagnostically but does not cause the main MHT or EML
	// operation to fail. The write is not atomic, so an I/O error can leave a partial
	// debug file.
	// 
	// References:
	// [1] #DebugHtmlBefore
	void get_DebugHtmlAfter(CkString &str);
	// Specifies a local file path where Chilkat saves the HTML after it has been
	// processed for MHT or EML generation. Leave the property empty to disable this
	// diagnostic output.
	// 
	// Troubleshooting aid: Compare this file with DebugHtmlBefore[1] to inspect
	// rewritten URLs, removed scripts, and other transformations applied before the
	// MIME document is assembled. Do not enable diagnostic output to a sensitive or
	// publicly accessible location.
	// Debug-file behavior: An existing debug file is overwritten in place. Parent
	// directories are not created, and a relative path is resolved against the process
	// current working directory. The write is best-effort: failure to create or update
	// the debug file is recorded diagnostically but does not cause the main MHT or EML
	// operation to fail. The write is not atomic, so an I/O error can leave a partial
	// debug file.
	// 
	// References:
	// [1] #DebugHtmlBefore
	const char *debugHtmlAfter(void);
	// Specifies a local file path where Chilkat saves the HTML after it has been
	// processed for MHT or EML generation. Leave the property empty to disable this
	// diagnostic output.
	// 
	// Troubleshooting aid: Compare this file with DebugHtmlBefore[1] to inspect
	// rewritten URLs, removed scripts, and other transformations applied before the
	// MIME document is assembled. Do not enable diagnostic output to a sensitive or
	// publicly accessible location.
	// Debug-file behavior: An existing debug file is overwritten in place. Parent
	// directories are not created, and a relative path is resolved against the process
	// current working directory. The write is best-effort: failure to create or update
	// the debug file is recorded diagnostically but does not cause the main MHT or EML
	// operation to fail. The write is not atomic, so an I/O error can leave a partial
	// debug file.
	// 
	// References:
	// [1] #DebugHtmlBefore
	void put_DebugHtmlAfter(const char *newVal);

	// Specifies a local file path where Chilkat saves the source HTML before it is
	// transformed for MHT or EML generation. Leave the property empty to disable this
	// diagnostic output.
	// 
	// Troubleshooting aid: Use this together with DebugHtmlAfter[1] to determine
	// whether a problem originates in the input HTML or in the conversion and
	// URL-rewriting process.
	// Debug-file behavior: An existing debug file is overwritten in place. Parent
	// directories are not created, and a relative path is resolved against the process
	// current working directory. The write is best-effort: failure to create or update
	// the debug file is recorded diagnostically but does not cause the main MHT or EML
	// operation to fail. The write is not atomic, so an I/O error can leave a partial
	// debug file.
	// 
	// References:
	// [1] #DebugHtmlAfter
	void get_DebugHtmlBefore(CkString &str);
	// Specifies a local file path where Chilkat saves the source HTML before it is
	// transformed for MHT or EML generation. Leave the property empty to disable this
	// diagnostic output.
	// 
	// Troubleshooting aid: Use this together with DebugHtmlAfter[1] to determine
	// whether a problem originates in the input HTML or in the conversion and
	// URL-rewriting process.
	// Debug-file behavior: An existing debug file is overwritten in place. Parent
	// directories are not created, and a relative path is resolved against the process
	// current working directory. The write is best-effort: failure to create or update
	// the debug file is recorded diagnostically but does not cause the main MHT or EML
	// operation to fail. The write is not atomic, so an I/O error can leave a partial
	// debug file.
	// 
	// References:
	// [1] #DebugHtmlAfter
	const char *debugHtmlBefore(void);
	// Specifies a local file path where Chilkat saves the source HTML before it is
	// transformed for MHT or EML generation. Leave the property empty to disable this
	// diagnostic output.
	// 
	// Troubleshooting aid: Use this together with DebugHtmlAfter[1] to determine
	// whether a problem originates in the input HTML or in the conversion and
	// URL-rewriting process.
	// Debug-file behavior: An existing debug file is overwritten in place. Parent
	// directories are not created, and a relative path is resolved against the process
	// current working directory. The write is best-effort: failure to create or update
	// the debug file is recorded diagnostically but does not cause the main MHT or EML
	// operation to fail. The write is not atomic, so an I/O error can leave a partial
	// debug file.
	// 
	// References:
	// [1] #DebugHtmlAfter
	void put_DebugHtmlBefore(const char *newVal);

	// Controls whether images referenced by the HTML are downloaded or read from disk
	// and embedded as related MIME parts in both MHT and EML output. The default is
	// true.
	// 
	// +-------------+----------------+-----------------------------------------------+
	// | EmbedImages | EmbedLocalOnly |                Image behavior                 |
	// +=============+================+===============================================+
	// | false     | Either         | No images are embedded. References are made   |
	// |             |                | absolute when sufficient base information is  |
	// |             |                | available.                                    |
	// +-------------+----------------+-----------------------------------------------+
	// | true      | false        | Local and HTTP/HTTPS images are embedded when |
	// |             |                | they can be obtained. This is the default     |
	// |             |                | combination.                                  |
	// +-------------+----------------+-----------------------------------------------+
	// | true      | true         | Only local-file images are embedded.          |
	// |             |                | HTTP/HTTPS images remain external references. |
	// +-------------+----------------+-----------------------------------------------+
	// 
	// Recognized image source: Chilkat captures the ordinary <img src> value. It does
	// not use srcset or sizes to choose a candidate; those attributes are removed.
	// Obvious spacer or 1×1 placeholder sources are detected so the real image
	// reference can be used when available.
	// Self-contained output: MHT or EML output is self-contained with respect to
	// images only when the settings permit embedding and every required image is
	// successfully obtained. A failed image is omitted and its reference remains an
	// absolute live URL.
	bool get_EmbedImages(void);
	// Controls whether images referenced by the HTML are downloaded or read from disk
	// and embedded as related MIME parts in both MHT and EML output. The default is
	// true.
	// 
	// +-------------+----------------+-----------------------------------------------+
	// | EmbedImages | EmbedLocalOnly |                Image behavior                 |
	// +=============+================+===============================================+
	// | false     | Either         | No images are embedded. References are made   |
	// |             |                | absolute when sufficient base information is  |
	// |             |                | available.                                    |
	// +-------------+----------------+-----------------------------------------------+
	// | true      | false        | Local and HTTP/HTTPS images are embedded when |
	// |             |                | they can be obtained. This is the default     |
	// |             |                | combination.                                  |
	// +-------------+----------------+-----------------------------------------------+
	// | true      | true         | Only local-file images are embedded.          |
	// |             |                | HTTP/HTTPS images remain external references. |
	// +-------------+----------------+-----------------------------------------------+
	// 
	// Recognized image source: Chilkat captures the ordinary <img src> value. It does
	// not use srcset or sizes to choose a candidate; those attributes are removed.
	// Obvious spacer or 1×1 placeholder sources are detected so the real image
	// reference can be used when available.
	// Self-contained output: MHT or EML output is self-contained with respect to
	// images only when the settings permit embedding and every required image is
	// successfully obtained. A failed image is omitted and its reference remains an
	// absolute live URL.
	void put_EmbedImages(bool newVal);

	// When true, only images whose references resolve to the local filesystem are
	// embedded. Images referenced through HTTP or HTTPS remain external. The default
	// is false. This property has an effect only when EmbedImages[1] is true and
	// applies to both MHT and EML output.
	// 
	// Scope: This option applies to images, including image URLs found in HTML and
	// CSS. It does not prevent Chilkat from fetching non-image web resources such as
	// external style sheets or, for MHT output, supported frames and scripts.
	// 
	// References:
	// [1] #EmbedImages
	bool get_EmbedLocalOnly(void);
	// When true, only images whose references resolve to the local filesystem are
	// embedded. Images referenced through HTTP or HTTPS remain external. The default
	// is false. This property has an effect only when EmbedImages[1] is true and
	// applies to both MHT and EML output.
	// 
	// Scope: This option applies to images, including image URLs found in HTML and
	// CSS. It does not prevent Chilkat from fetching non-image web resources such as
	// external style sheets or, for MHT output, supported frames and scripts.
	// 
	// References:
	// [1] #EmbedImages
	void put_EmbedLocalOnly(bool newVal);

	// When true, Chilkat attempts to satisfy page and resource requests from the
	// configured disk cache before downloading them. Add one or more cache directories
	// with AddCacheRoot[1]. The default is false.
	// 
	// Related settings: UpdateCache[2] controls whether network responses are written
	// to the cache. IgnoreMustRevalidate[3] and IgnoreNoCache[4] control whether
	// certain HTTP cache directives are honored.
	// 
	// References:
	// [1] #AddCacheRoot
	// [2] #UpdateCache
	// [3] #IgnoreMustRevalidate
	// [4] #IgnoreNoCache
	bool get_FetchFromCache(void);
	// When true, Chilkat attempts to satisfy page and resource requests from the
	// configured disk cache before downloading them. Add one or more cache directories
	// with AddCacheRoot[1]. The default is false.
	// 
	// Related settings: UpdateCache[2] controls whether network responses are written
	// to the cache. IgnoreMustRevalidate[3] and IgnoreNoCache[4] control whether
	// certain HTTP cache directives are honored.
	// 
	// References:
	// [1] #AddCacheRoot
	// [2] #UpdateCache
	// [3] #IgnoreMustRevalidate
	// [4] #IgnoreNoCache
	void put_FetchFromCache(bool newVal);

	// Specifies the interval, in milliseconds, between AbortCheck[1] event callbacks
	// during supported long-running operations. The default is 0, which disables these
	// periodic callbacks.
	// 
	// Cancellation: An event handler may request cancellation when an AbortCheck
	// callback occurs. Choose an interval that is responsive without generating
	// excessive callback traffic.
	// 
	// References:
	// [1] #AbortCheck
	int get_HeartbeatMs(void);
	// Specifies the interval, in milliseconds, between AbortCheck[1] event callbacks
	// during supported long-running operations. The default is 0, which disables these
	// periodic callbacks.
	// 
	// Cancellation: An event handler may request cancellation when an AbortCheck
	// callback occurs. Choose an interval that is responsive without generating
	// excessive callback traffic.
	// 
	// References:
	// [1] #AbortCheck
	void put_HeartbeatMs(int newVal);

	// Controls how cached responses containing Cache-Control: must-revalidate are
	// handled. When false (the default), Chilkat revalidates such a cached response
	// before reuse. When true, a still-fresh cached response may be used without
	// revalidation. This property is relevant only when FetchFromCache[1] is true.
	// 
	// Cache semantics: Ignoring must-revalidate can improve offline or high-latency
	// operation, but it may also use content the origin server intended to be checked
	// before reuse.
	// 
	// References:
	// [1] #FetchFromCache
	bool get_IgnoreMustRevalidate(void);
	// Controls how cached responses containing Cache-Control: must-revalidate are
	// handled. When false (the default), Chilkat revalidates such a cached response
	// before reuse. When true, a still-fresh cached response may be used without
	// revalidation. This property is relevant only when FetchFromCache[1] is true.
	// 
	// Cache semantics: Ignoring must-revalidate can improve offline or high-latency
	// operation, but it may also use content the origin server intended to be checked
	// before reuse.
	// 
	// References:
	// [1] #FetchFromCache
	void put_IgnoreMustRevalidate(bool newVal);

	// Controls whether HTTP response directives that prohibit or restrict caching are
	// ignored. The default is false, which honors the server's caching instructions.
	// When true, Chilkat may store responses that would otherwise be excluded from
	// the disk cache.
	// 
	// Use carefully: Caching content against the origin server's instructions can
	// retain stale, private, or sensitive data. Enable this only when the application
	// controls the content or has a specific offline-caching requirement.
	bool get_IgnoreNoCache(void);
	// Controls whether HTTP response directives that prohibit or restrict caching are
	// ignored. The default is false, which honors the server's caching instructions.
	// When true, Chilkat may store responses that would otherwise be excluded from
	// the disk cache.
	// 
	// Use carefully: Caching content against the origin server's instructions can
	// retain stale, private, or sensitive data. Enable this only when the application
	// controls the content or has a specific offline-caching requirement.
	void put_IgnoreNoCache(bool newVal);

	// Controls script removal when creating MHT output. When true, script content is
	// removed. When false (the default), inline scripts and supported external
	// scripts may be preserved according to PreferMHTScripts[1].
	// 
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// EML behavior: Scripts are always removed when generating EML or email-oriented
	// output, regardless of this property. Framed documents are also removed from EML
	// output.
	// 
	// References:
	// [1] #PreferMHTScripts
	bool get_NoScripts(void);
	// Controls script removal when creating MHT output. When true, script content is
	// removed. When false (the default), inline scripts and supported external
	// scripts may be preserved according to PreferMHTScripts[1].
	// 
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// EML behavior: Scripts are always removed when generating EML or email-oriented
	// output, regardless of this property. Framed documents are also removed from EML
	// output.
	// 
	// References:
	// [1] #PreferMHTScripts
	void put_NoScripts(bool newVal);

	// When true, Chilkat uses NTLM authentication when the origin HTTP server
	// requests authentication. The default is false. Set WebSiteLogin[1],
	// WebSitePassword[2], and, when required, WebSiteLoginDomain[3].
	// 
	// Origin versus proxy authentication: These credentials authenticate to the
	// website. Proxy credentials are configured separately with ProxyLogin[4] and
	// ProxyPassword[5]. Use HTTPS whenever credentials or authenticated content are
	// transmitted.
	// 
	// References:
	// [1] #WebSiteLogin
	// [2] #WebSitePassword
	// [3] #WebSiteLoginDomain
	// [4] #ProxyLogin
	// [5] #ProxyPassword
	bool get_NtlmAuth(void);
	// When true, Chilkat uses NTLM authentication when the origin HTTP server
	// requests authentication. The default is false. Set WebSiteLogin[1],
	// WebSitePassword[2], and, when required, WebSiteLoginDomain[3].
	// 
	// Origin versus proxy authentication: These credentials authenticate to the
	// website. Proxy credentials are configured separately with ProxyLogin[4] and
	// ProxyPassword[5]. Use HTTPS whenever credentials or authenticated content are
	// transmitted.
	// 
	// References:
	// [1] #WebSiteLogin
	// [2] #WebSitePassword
	// [3] #WebSiteLoginDomain
	// [4] #ProxyLogin
	// [5] #ProxyPassword
	void put_NtlmAuth(bool newVal);

	// Specifies the number of directory levels used beneath each disk-cache root. The
	// default is 0, which stores cached items directly in the root. A value of 1
	// distributes items among 256 subdirectories named 0 through 255. A value of 2
	// uses two such levels, for example 17/204. Chilkat creates the required
	// subdirectories automatically.
	// 
	// Why use levels? Directory fan-out prevents very large caches from placing
	// thousands of files in one directory, which can degrade filesystem tools and
	// directory operations.
	int get_NumCacheLevels(void);
	// Specifies the number of directory levels used beneath each disk-cache root. The
	// default is 0, which stores cached items directly in the root. A value of 1
	// distributes items among 256 subdirectories named 0 through 255. A value of 2
	// uses two such levels, for example 17/204. Chilkat creates the required
	// subdirectories automatically.
	// 
	// Why use levels? Directory fan-out prevents very large caches from placing
	// thousands of files in one directory, which can degrade filesystem tools and
	// directory operations.
	void put_NumCacheLevels(int newVal);

	// Returns the number of disk-cache root directories currently configured through
	// AddCacheRoot[1]. Multiple roots allow cached items to be distributed across
	// different directories or storage volumes.
	// 
	// Indexing: Cache-root indexes are zero-based. Use GetCacheRoot[2] to retrieve a
	// configured root by index.
	// 
	// References:
	// [1] #AddCacheRoot
	// [2] #GetCacheRoot
	int get_NumCacheRoots(void);

	// Controls address-family preference when a hostname resolves to both IPv4 and
	// IPv6 addresses. The default is false, which prefers IPv4. Set to true to
	// prefer IPv6.
	// 
	// Preference, not a requirement: This setting does not guarantee that IPv6 will be
	// used. The selected address must still be reachable, and fallback behavior
	// depends on the available addresses and connection results.
	bool get_PreferIpv6(void);
	// Controls address-family preference when a hostname resolves to both IPv4 and
	// IPv6 addresses. The default is false, which prefers IPv4. Set to true to
	// prefer IPv6.
	// 
	// Preference, not a requirement: This setting does not guarantee that IPv6 will be
	// used. The selected address must still be reachable, and fallback behavior
	// depends on the available addresses and connection results.
	void put_PreferIpv6(bool newVal);

	// Controls which content is retained when HTML contains a script together with a
	// <noscript> alternative. When true (the default), the script is preferred and
	// the <noscript> content is discarded. When false, the script is removed and the
	// <noscript> content is retained.
	// 
	// Interaction with NoScripts: NoScripts[1] takes precedence when script removal is
	// required. EML generation always removes scripts.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// 
	// References:
	// [1] #NoScripts
	bool get_PreferMHTScripts(void);
	// Controls which content is retained when HTML contains a script together with a
	// <noscript> alternative. When true (the default), the script is preferred and
	// the <noscript> content is discarded. When false, the script is removed and the
	// <noscript> content is retained.
	// 
	// Interaction with NoScripts: NoScripts[1] takes precedence when script removal is
	// required. EML generation always removes scripts.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// 
	// References:
	// [1] #NoScripts
	void put_PreferMHTScripts(bool newVal);

	// Specifies an HTTP proxy as hostname:port, for example proxy.example.com:8080.
	// Leave the property empty when no explicit HTTP proxy is required.
	// 
	// Formatting: Supply only the proxy host and port; do not include an http:// or
	// https:// scheme. If the proxy requires credentials, set ProxyLogin[1] and
	// ProxyPassword[2].
	// 
	// References:
	// [1] #ProxyLogin
	// [2] #ProxyPassword
	void get_Proxy(CkString &str);
	// Specifies an HTTP proxy as hostname:port, for example proxy.example.com:8080.
	// Leave the property empty when no explicit HTTP proxy is required.
	// 
	// Formatting: Supply only the proxy host and port; do not include an http:// or
	// https:// scheme. If the proxy requires credentials, set ProxyLogin[1] and
	// ProxyPassword[2].
	// 
	// References:
	// [1] #ProxyLogin
	// [2] #ProxyPassword
	const char *proxy(void);
	// Specifies an HTTP proxy as hostname:port, for example proxy.example.com:8080.
	// Leave the property empty when no explicit HTTP proxy is required.
	// 
	// Formatting: Supply only the proxy host and port; do not include an http:// or
	// https:// scheme. If the proxy requires credentials, set ProxyLogin[1] and
	// ProxyPassword[2].
	// 
	// References:
	// [1] #ProxyLogin
	// [2] #ProxyPassword
	void put_Proxy(const char *newVal);

	// Specifies the username used to authenticate with the HTTP proxy configured by
	// Proxy[1]. Leave empty when the proxy does not require authentication.
	// 
	// 
	// References:
	// [1] #Proxy
	void get_ProxyLogin(CkString &str);
	// Specifies the username used to authenticate with the HTTP proxy configured by
	// Proxy[1]. Leave empty when the proxy does not require authentication.
	// 
	// 
	// References:
	// [1] #Proxy
	const char *proxyLogin(void);
	// Specifies the username used to authenticate with the HTTP proxy configured by
	// Proxy[1]. Leave empty when the proxy does not require authentication.
	// 
	// 
	// References:
	// [1] #Proxy
	void put_ProxyLogin(const char *newVal);

	// Specifies the password used to authenticate with the HTTP proxy configured by
	// Proxy[1]. Leave empty when the proxy does not require authentication.
	// 
	// Credential handling: Treat proxy passwords as secrets and avoid writing them to
	// diagnostic logs or persistent configuration in cleartext.
	// 
	// References:
	// [1] #Proxy
	void get_ProxyPassword(CkString &str);
	// Specifies the password used to authenticate with the HTTP proxy configured by
	// Proxy[1]. Leave empty when the proxy does not require authentication.
	// 
	// Credential handling: Treat proxy passwords as secrets and avoid writing them to
	// diagnostic logs or persistent configuration in cleartext.
	// 
	// References:
	// [1] #Proxy
	const char *proxyPassword(void);
	// Specifies the password used to authenticate with the HTTP proxy configured by
	// Proxy[1]. Leave empty when the proxy does not require authentication.
	// 
	// Credential handling: Treat proxy passwords as secrets and avoid writing them to
	// diagnostic logs or persistent configuration in cleartext.
	// 
	// References:
	// [1] #Proxy
	void put_ProxyPassword(const char *newVal);

	// Specifies the maximum number of seconds that an HTTP read may remain inactive
	// while waiting for additional data. The default is 20 seconds. If data continues
	// to arrive, a long download may run longer than this value.
	// 
	// Inactivity timeout: This is not a total-operation timeout. It applies when the
	// incoming data stream stops making progress.
	int get_ReadTimeout(void);
	// Specifies the maximum number of seconds that an HTTP read may remain inactive
	// while waiting for additional data. The default is 20 seconds. If data continues
	// to arrive, a long download may run longer than this value.
	// 
	// Inactivity timeout: This is not a total-operation timeout. It applies when the
	// incoming data stream stops making progress.
	void put_ReadTimeout(int newVal);

	// Controls verification of the TLS server certificate for HTTPS connections. When
	// true, the connection is rejected if certificate verification fails, such as
	// because the certificate is expired or its chain or signature cannot be
	// validated. The default is false.
	// 
	// Recommended for HTTPS: Enable certificate verification for production
	// connections to prevent accepting an untrusted or invalid server certificate.
	// Disabling verification removes an important protection against impersonation and
	// man-in-the-middle attacks.
	bool get_RequireSslCertVerify(void);
	// Controls verification of the TLS server certificate for HTTPS connections. When
	// true, the connection is rejected if certificate verification fails, such as
	// because the certificate is expired or its chain or signature cannot be
	// validated. The default is false.
	// 
	// Recommended for HTTPS: Enable certificate verification for production
	// connections to prevent accepting an untrusted or invalid server certificate.
	// Disabling verification removes an important protection against impersonation and
	// man-in-the-middle attacks.
	void put_RequireSslCertVerify(bool newVal);

	// Specifies the hostname or dotted-decimal IPv4 address of the SOCKS proxy. This
	// property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksHostname(CkString &str);
	// Specifies the hostname or dotted-decimal IPv4 address of the SOCKS proxy. This
	// property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const char *socksHostname(void);
	// Specifies the hostname or dotted-decimal IPv4 address of the SOCKS proxy. This
	// property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksHostname(const char *newVal);

	// Specifies the password for SOCKS5 proxy authentication. SOCKS4 does not define
	// password authentication, so this property is ignored when SocksVersion[1] is 4.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void get_SocksPassword(CkString &str);
	// Specifies the password for SOCKS5 proxy authentication. SOCKS4 does not define
	// password authentication, so this property is ignored when SocksVersion[1] is 4.
	// 
	// 
	// References:
	// [1] #SocksVersion
	const char *socksPassword(void);
	// Specifies the password for SOCKS5 proxy authentication. SOCKS4 does not define
	// password authentication, so this property is ignored when SocksVersion[1] is 4.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksPassword(const char *newVal);

	// Specifies the TCP port of the SOCKS4 or SOCKS5 proxy. The default is 1080. This
	// property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	int get_SocksPort(void);
	// Specifies the TCP port of the SOCKS4 or SOCKS5 proxy. The default is 1080. This
	// property is used only when SocksVersion[1] is 4 or 5.
	// 
	// 
	// References:
	// [1] #SocksVersion
	void put_SocksPort(int newVal);

	// Specifies the username sent to the SOCKS4 or SOCKS5 proxy. It is used only when
	// SocksVersion[1] is 4 or 5. For SOCKS5, set SocksPassword[2] when password
	// authentication is required.
	// 
	// 
	// References:
	// [1] #SocksVersion
	// [2] #SocksPassword
	void get_SocksUsername(CkString &str);
	// Specifies the username sent to the SOCKS4 or SOCKS5 proxy. It is used only when
	// SocksVersion[1] is 4 or 5. For SOCKS5, set SocksPassword[2] when password
	// authentication is required.
	// 
	// 
	// References:
	// [1] #SocksVersion
	// [2] #SocksPassword
	const char *socksUsername(void);
	// Specifies the username sent to the SOCKS4 or SOCKS5 proxy. It is used only when
	// SocksVersion[1] is 4 or 5. For SOCKS5, set SocksPassword[2] when password
	// authentication is required.
	// 
	// 
	// References:
	// [1] #SocksVersion
	// [2] #SocksPassword
	void put_SocksUsername(const char *newVal);

	// Selects whether requests are routed through a SOCKS proxy.
	// 
	// +-------+------------------------------------------------+
	// | Value |                    Behavior                    |
	// +=======+================================================+
	// | 0     | Do not use a SOCKS proxy. This is the default. |
	// +-------+------------------------------------------------+
	// | 4     | Connect through a SOCKS4 proxy.                |
	// +-------+------------------------------------------------+
	// | 5     | Connect through a SOCKS5 proxy.                |
	// +-------+------------------------------------------------+
	// 
	// Required companion settings: For versions 4 and 5, set SocksHostname[1] and
	// SocksPort[2]. Configure username and password properties when the proxy requires
	// them.
	// 
	// References:
	// [1] #SocksHostname
	// [2] #SocksPort
	int get_SocksVersion(void);
	// Selects whether requests are routed through a SOCKS proxy.
	// 
	// +-------+------------------------------------------------+
	// | Value |                    Behavior                    |
	// +=======+================================================+
	// | 0     | Do not use a SOCKS proxy. This is the default. |
	// +-------+------------------------------------------------+
	// | 4     | Connect through a SOCKS4 proxy.                |
	// +-------+------------------------------------------------+
	// | 5     | Connect through a SOCKS5 proxy.                |
	// +-------+------------------------------------------------+
	// 
	// Required companion settings: For versions 4 and 5, set SocksHostname[1] and
	// SocksPort[2]. Configure username and password properties when the proxy requires
	// them.
	// 
	// References:
	// [1] #SocksHostname
	// [2] #SocksPort
	void put_SocksVersion(int newVal);

	// Controls whether MHT parts are extracted directly according to their relative
	// Content-Location values. The default is false.
	// 
	// +---------+--------------------------------------------------------------------+
	// | Setting |                              Behavior                              |
	// +=========+====================================================================+
	// | false | Normal mode: Chilkat selects the primary HTML part, writes related |
	// |         | resources beneath the parts subdirectory, rewrites HTML            |
	// |         | references, and applies path-containment and filename-collision    |
	// |         | handling.                                                          |
	// +---------+--------------------------------------------------------------------+
	// | true  | Direct mode: relative Content-Location paths are written beneath   |
	// |         | the unpack directory without the normal HTML-reference rewriting.  |
	// |         | The partsSubDir method argument is ignored.                        |
	// +---------+--------------------------------------------------------------------+
	// 
	// Full URLs are not valid in direct mode: If a part has a Content-Location
	// beginning with http://, https://, or file:/, Chilkat logs the problem and does
	// not write that part. Direct mode is intended for archives whose locations are
	// already relative; use normal mode for web-captured MHT data.
	bool get_UnpackDirect(void);
	// Controls whether MHT parts are extracted directly according to their relative
	// Content-Location values. The default is false.
	// 
	// +---------+--------------------------------------------------------------------+
	// | Setting |                              Behavior                              |
	// +=========+====================================================================+
	// | false | Normal mode: Chilkat selects the primary HTML part, writes related |
	// |         | resources beneath the parts subdirectory, rewrites HTML            |
	// |         | references, and applies path-containment and filename-collision    |
	// |         | handling.                                                          |
	// +---------+--------------------------------------------------------------------+
	// | true  | Direct mode: relative Content-Location paths are written beneath   |
	// |         | the unpack directory without the normal HTML-reference rewriting.  |
	// |         | The partsSubDir method argument is ignored.                        |
	// +---------+--------------------------------------------------------------------+
	// 
	// Full URLs are not valid in direct mode: If a part has a Content-Location
	// beginning with http://, https://, or file:/, Chilkat logs the problem and does
	// not write that part. Direct mode is intended for archives whose locations are
	// already relative; use normal mode for web-captured MHT data.
	void put_UnpackDirect(bool newVal);

	// Controls how extracted resources are referenced from the rewritten HTML produced
	// by the normal unpacking mode. The default is true, which uses relative paths.
	// Set to false to write absolute local paths.
	// 
	// Portability: Relative paths keep the unpacked HTML and its resource directory
	// movable as a unit. Absolute paths bind the HTML to the extraction location on
	// the current computer.
	bool get_UnpackUseRelPaths(void);
	// Controls how extracted resources are referenced from the rewritten HTML produced
	// by the normal unpacking mode. The default is true, which uses relative paths.
	// Set to false to write absolute local paths.
	// 
	// Portability: Relative paths keep the unpacked HTML and its resource directory
	// movable as a unit. Absolute paths bind the HTML to the extraction location on
	// the current computer.
	void put_UnpackUseRelPaths(bool newVal);

	// Controls whether successful HTTP GET responses are written to the configured
	// disk cache. The default is false. When true, add at least one cache root
	// with AddCacheRoot[1].
	// 
	// Reading and writing are separate: FetchFromCache[2] controls cache reads.
	// Applications may enable either setting independently or enable both for normal
	// read-through caching.
	// 
	// References:
	// [1] #AddCacheRoot
	// [2] #FetchFromCache
	bool get_UpdateCache(void);
	// Controls whether successful HTTP GET responses are written to the configured
	// disk cache. The default is false. When true, add at least one cache root
	// with AddCacheRoot[1].
	// 
	// Reading and writing are separate: FetchFromCache[2] controls cache reads.
	// Applications may enable either setting independently or enable both for normal
	// read-through caching.
	// 
	// References:
	// [1] #AddCacheRoot
	// [2] #FetchFromCache
	void put_UpdateCache(bool newVal);

	// Controls how embedded resources are identified and referenced in generated MHT
	// and EML MIME documents. The default is false.
	// 
	// +---------+---------------------------------------+----------------------------+
	// | Setting |         Resource-part headers         |       HTML reference       |
	// +=========+=======================================+============================+
	// | false | A Content-Location containing the     | The resource is referenced |
	// |         | resolved URL or path; no Content-ID . | by its URL or location.    |
	// +---------+---------------------------------------+----------------------------+
	// | true  | A generated, angle-bracketed          | The resource URL is        |
	// |         | Content-ID ; no Content-Location .    | rewritten as cid:<id> .    |
	// +---------+---------------------------------------+----------------------------+
	// 
	// Mutually exclusive identification models: A generated resource part uses either
	// Content-Location or Content-ID, not both. cid: references are common in HTML
	// email; location-based references preserve the resolved resource URL or path.
	bool get_UseCids(void);
	// Controls how embedded resources are identified and referenced in generated MHT
	// and EML MIME documents. The default is false.
	// 
	// +---------+---------------------------------------+----------------------------+
	// | Setting |         Resource-part headers         |       HTML reference       |
	// +=========+=======================================+============================+
	// | false | A Content-Location containing the     | The resource is referenced |
	// |         | resolved URL or path; no Content-ID . | by its URL or location.    |
	// +---------+---------------------------------------+----------------------------+
	// | true  | A generated, angle-bracketed          | The resource URL is        |
	// |         | Content-ID ; no Content-Location .    | rewritten as cid:<id> .    |
	// +---------+---------------------------------------+----------------------------+
	// 
	// Mutually exclusive identification models: A generated resource part uses either
	// Content-Location or Content-ID, not both. cid: references are common in HTML
	// email; location-based references preserve the resolved resource URL or path.
	void put_UseCids(bool newVal);

	// Controls whether the generated Content-Disposition for an embedded resource
	// includes a filename parameter. The default is true. Setting this property to
	// true forces an inline disposition to be emitted even when UseInline[1] is
	// false.
	// 
	// +-----------+-------------+--------------------------------+
	// | UseInline | UseFilename | Generated Content-Disposition  |
	// +===========+=============+================================+
	// | true    | true      | inline; filename="<name>"      |
	// +-----------+-------------+--------------------------------+
	// | true    | false     | inline                         |
	// +-----------+-------------+--------------------------------+
	// | false   | true      | inline; filename="<name>"      |
	// +-----------+-------------+--------------------------------+
	// | false   | false     | No Content-Disposition header. |
	// +-----------+-------------+--------------------------------+
	// 
	// Content-Type name parameter: Every embedded resource always receives
	// name="<name>" on its Content-Type, regardless of UseFilename and UseInline. The
	// MIME filename is presentation metadata, not the source filesystem path.
	// 
	// References:
	// [1] #UseInline
	bool get_UseFilename(void);
	// Controls whether the generated Content-Disposition for an embedded resource
	// includes a filename parameter. The default is true. Setting this property to
	// true forces an inline disposition to be emitted even when UseInline[1] is
	// false.
	// 
	// +-----------+-------------+--------------------------------+
	// | UseInline | UseFilename | Generated Content-Disposition  |
	// +===========+=============+================================+
	// | true    | true      | inline; filename="<name>"      |
	// +-----------+-------------+--------------------------------+
	// | true    | false     | inline                         |
	// +-----------+-------------+--------------------------------+
	// | false   | true      | inline; filename="<name>"      |
	// +-----------+-------------+--------------------------------+
	// | false   | false     | No Content-Disposition header. |
	// +-----------+-------------+--------------------------------+
	// 
	// Content-Type name parameter: Every embedded resource always receives
	// name="<name>" on its Content-Type, regardless of UseFilename and UseInline. The
	// MIME filename is presentation metadata, not the source filesystem path.
	// 
	// References:
	// [1] #UseInline
	void put_UseFilename(bool newVal);

	// When true, Chilkat uses the proxy configuration associated with Windows
	// Internet Options / Internet Explorer. This setting is relevant on Windows
	// systems.
	// 
	// Explicit configuration: Use Proxy[1] when the application should specify a
	// particular proxy directly rather than relying on the current user's Windows
	// proxy settings.
	// 
	// References:
	// [1] #Proxy
	bool get_UseIEProxy(void);
	// When true, Chilkat uses the proxy configuration associated with Windows
	// Internet Options / Internet Explorer. This setting is relevant on Windows
	// systems.
	// 
	// Explicit configuration: Use Proxy[1] when the application should specify a
	// particular proxy directly rather than relying on the current user's Windows
	// proxy settings.
	// 
	// References:
	// [1] #Proxy
	void put_UseIEProxy(bool newVal);

	// Controls whether embedded resource parts receive an inline Content-Disposition
	// when UseFilename[1] does not independently require the header. The default is
	// true.
	// 
	// +-----------+-------------+--------------------------------+
	// | UseInline | UseFilename | Generated Content-Disposition  |
	// +===========+=============+================================+
	// | true    | true      | inline; filename="<name>"      |
	// +-----------+-------------+--------------------------------+
	// | true    | false     | inline                         |
	// +-----------+-------------+--------------------------------+
	// | false   | true      | inline; filename="<name>"      |
	// +-----------+-------------+--------------------------------+
	// | false   | false     | No Content-Disposition header. |
	// +-----------+-------------+--------------------------------+
	// 
	// No attachment mode: Whenever Chilkat emits this header, the disposition is
	// inline; these properties do not produce attachment. Every embedded resource
	// always receives a name parameter on its Content-Type, independent of both
	// settings.
	// 
	// References:
	// [1] #UseFilename
	bool get_UseInline(void);
	// Controls whether embedded resource parts receive an inline Content-Disposition
	// when UseFilename[1] does not independently require the header. The default is
	// true.
	// 
	// +-----------+-------------+--------------------------------+
	// | UseInline | UseFilename | Generated Content-Disposition  |
	// +===========+=============+================================+
	// | true    | true      | inline; filename="<name>"      |
	// +-----------+-------------+--------------------------------+
	// | true    | false     | inline                         |
	// +-----------+-------------+--------------------------------+
	// | false   | true      | inline; filename="<name>"      |
	// +-----------+-------------+--------------------------------+
	// | false   | false     | No Content-Disposition header. |
	// +-----------+-------------+--------------------------------+
	// 
	// No attachment mode: Whenever Chilkat emits this header, the disposition is
	// inline; these properties do not produce attachment. Every embedded resource
	// always receives a name parameter on its Content-Type, independent of both
	// settings.
	// 
	// References:
	// [1] #UseFilename
	void put_UseInline(bool newVal);

	// Specifies the username used when the origin website requires HTTP
	// authentication. It is optional for public pages. For NTLM authentication, also
	// set NtlmAuth[1] to true and provide a domain when required.
	// 
	// 
	// References:
	// [1] #NtlmAuth
	void get_WebSiteLogin(CkString &str);
	// Specifies the username used when the origin website requires HTTP
	// authentication. It is optional for public pages. For NTLM authentication, also
	// set NtlmAuth[1] to true and provide a domain when required.
	// 
	// 
	// References:
	// [1] #NtlmAuth
	const char *webSiteLogin(void);
	// Specifies the username used when the origin website requires HTTP
	// authentication. It is optional for public pages. For NTLM authentication, also
	// set NtlmAuth[1] to true and provide a domain when required.
	// 
	// 
	// References:
	// [1] #NtlmAuth
	void put_WebSiteLogin(const char *newVal);

	// Specifies the optional Windows domain used with NTLM website authentication.
	// This property is relevant when NtlmAuth[1] is true.
	// 
	// 
	// References:
	// [1] #NtlmAuth
	void get_WebSiteLoginDomain(CkString &str);
	// Specifies the optional Windows domain used with NTLM website authentication.
	// This property is relevant when NtlmAuth[1] is true.
	// 
	// 
	// References:
	// [1] #NtlmAuth
	const char *webSiteLoginDomain(void);
	// Specifies the optional Windows domain used with NTLM website authentication.
	// This property is relevant when NtlmAuth[1] is true.
	// 
	// 
	// References:
	// [1] #NtlmAuth
	void put_WebSiteLoginDomain(const char *newVal);

	// Specifies the password used with WebSiteLogin[1] when the origin website
	// requires HTTP authentication.
	// 
	// Credential handling: Treat this value as a secret. Use HTTPS for authenticated
	// pages and avoid exposing credentials through debug output or application logs.
	// 
	// References:
	// [1] #WebSiteLogin
	void get_WebSitePassword(CkString &str);
	// Specifies the password used with WebSiteLogin[1] when the origin website
	// requires HTTP authentication.
	// 
	// Credential handling: Treat this value as a secret. Use HTTPS for authenticated
	// pages and avoid exposing credentials through debug output or application logs.
	// 
	// References:
	// [1] #WebSiteLogin
	const char *webSitePassword(void);
	// Specifies the password used with WebSiteLogin[1] when the origin website
	// requires HTTP authentication.
	// 
	// Credential handling: Treat this value as a secret. Use HTTPS for authenticated
	// pages and avoid exposing credentials through debug output or application logs.
	// 
	// References:
	// [1] #WebSiteLogin
	void put_WebSitePassword(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds dir as a persistent root directory for the disk cache. Call this method
	// once for each cache location the application wants Chilkat to use. Multiple
	// roots may be placed on different directories or storage volumes.
	// 
	// Enabling cache use: Adding a root defines a storage location but does not by
	// itself read or write cached content. Use FetchFromCache[1] and UpdateCache[2] to
	// enable cache reads and writes.
	// Persistent collection: Cache roots remain configured across conversions,
	// duplicates are accepted, and no method removes an individual root.
	// RestoreDefaults[3] does not clear them. Use a new Mht object when the cache-root
	// list must be reset.
	// 
	// References:
	// [1] #FetchFromCache
	// [2] #UpdateCache
	// [3] #RestoreDefaults
	void AddCacheRoot(const char *dir);


	// Adds an HTTP request header to the persistent custom-header collection used for
	// the main page, redirect targets, and every HTTP/HTTPS dependent-resource
	// request, including requests to third-party hosts. name is the field name without
	// a trailing colon, and value is the field value.
	// 
	// +-------------------------+----------------------------------------------------+
	// |       Field name        |             Behavior when added again              |
	// +=========================+====================================================+
	// | User-Agent or           | Replaces the existing value.                       |
	// | Accept-Language         |                                                    |
	// +-------------------------+----------------------------------------------------+
	// | Any other permitted     | Appends another header line with the same name; it |
	// | field                   | does not replace the earlier line.                 |
	// +-------------------------+----------------------------------------------------+
	// 
	// Rejected fields: Authorization and Content-Length are rejected
	// case-insensitively and are not added. Use the website-login properties for
	// supported HTTP authentication rather than attempting to add Authorization here.
	// Cross-host security: Permitted fields such as Cookie, Host, and
	// application-defined headers are reused for every destination contacted during
	// the capture. Do not place a secret in a custom header unless it is safe to send
	// to the primary host, every redirect target, and every third-party resource host.
	// Header syntax: Raw CR or LF characters must not be placed in a header name or
	// value. Header-splitting prevention should be treated as the caller's
	// responsibility; this API does not document a validation guarantee.
	// 
	// Custom headers persist until removed with RemoveCustomHeader[1], cleared with
	// ClearCustomHeaders[2], or the object is discarded. RestoreDefaults[3] does not
	// clear them.
	// 
	// 
	// References:
	// [1] #RemoveCustomHeader
	// [2] #ClearCustomHeaders
	// [3] #RestoreDefaults
	void AddCustomHeader(const char *name, const char *value);


	// Adds the style-sheet URL in url to the persistent list of external CSS
	// resources downloaded and embedded during conversion. This is normally
	// unnecessary because Chilkat automatically discovers <link rel="stylesheet">
	// references present in the static HTML.
	// 
	// When to use it: Call this method when the application knows about a style sheet
	// that is not referenced in the original HTML—for example, one that browser-side
	// JavaScript would normally insert. Chilkat does not execute that JavaScript
	// during capture.
	// Recursive CSS processing: The downloaded style sheet is inlined and inspected
	// for @import and url(...) references. Imported sheets are processed recursively,
	// and relative references are resolved against the URL of the style sheet that
	// contains them.
	// Persistent collection: Entries remain configured across conversions. Duplicate
	// URLs are accepted and are not deduplicated. There is no individual remove
	// method; RestoreDefaults[1] clears the entire external-style-sheet list.
	// 
	// References:
	// [1] #RestoreDefaults
	void AddExternalStyleSheet(const char *url);


	// Removes all HTTP request headers previously added with AddCustomHeader[1].
	// Automatically generated and built-in HTTP headers are not removed.
	// 
	// The custom-header collection otherwise persists across conversions and is not
	// cleared by RestoreDefaults[2].
	// 
	// 
	// References:
	// [1] #AddCustomHeader
	// [2] #RestoreDefaults
	void ClearCustomHeaders(void);


	// Adds pattern to the persistent list of exclusion patterns used while gathering
	// embeddable resources. Despite the historical method name, the test is applied to
	// embeddable resources generally, not only to images. Each candidate is tested
	// against its fully resolved reference: an absolute URL for web content or the
	// resolved local path for a local resource.
	// 
	// +--------------+---------------------------------------------------------------+
	// |     Test     |                         Matching rule                         |
	// +==============+===============================================================+
	// | Wildcard /   | Case-insensitive match against the entire resolved reference. |
	// | glob         | * matches zero or more characters, and ? matches exactly one  |
	// |              | character.                                                    |
	// +--------------+---------------------------------------------------------------+
	// | Plain        | Case-sensitive containment test anywhere within the resolved  |
	// | substring    | reference.                                                    |
	// +--------------+---------------------------------------------------------------+
	// 
	// Practical examples: *banner* performs a case-insensitive contains-style match;
	// logo.png performs a case-sensitive substring test; */ads/* can match a path;
	// *doubleclick* can match a host; and *.gif can match an extension. The scheme,
	// host, path, filename, query string, and fragment participate when present.
	// State and scope: Patterns apply to local and HTTP/HTTPS resources. Multiple
	// calls accumulate and are OR-ed; duplicates are accepted. There is no individual
	// remove method. Call RestoreDefaults[1] to clear the exclusion list, or use a new
	// Mht object.
	// 
	// References:
	// [1] #RestoreDefaults
	void ExcludeImagesMatching(const char *pattern);


	// Creates EML output from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath and saves
	// it to the destination path in emlPath. Style sheets and their CSS resources are
	// captured. Images are embedded according to EmbedImages[1] and EmbedLocalOnly[2].
	// Scripts and framed documents are removed.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Return value: Returns true on success and false on failure.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Destination file behavior: Chilkat first generates the complete MIME output in
	// memory and writes the destination only after generation succeeds. An existing
	// destination file is truncated and replaced; data is never appended and no
	// confirmation is requested. Parent directories are not created. Relative paths
	// are resolved against the process current working directory. If generation fails,
	// an existing destination file is left untouched. The final write is direct rather
	// than atomic, so a write-time error such as a full disk or permission failure can
	// leave a truncated or partially written file. A read-only or otherwise unwritable
	// destination causes the method to return false. Using the same local file as
	// both source and destination is mechanically allowed because the source is read
	// first, but the subsequent write destroys the original HTML file. On Windows,
	// this method also rejects destination paths containing characters that are
	// invalid in Windows filenames, such as?, before generation begins.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	bool GetAndSaveEML(const char *url_or_htmlFilepath, const char *emlPath);

	// Creates EML output from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath and saves
	// it to the destination path in emlPath. Style sheets and their CSS resources are
	// captured. Images are embedded according to EmbedImages[1] and EmbedLocalOnly[2].
	// Scripts and framed documents are removed.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Return value: Returns true on success and false on failure.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Destination file behavior: Chilkat first generates the complete MIME output in
	// memory and writes the destination only after generation succeeds. An existing
	// destination file is truncated and replaced; data is never appended and no
	// confirmation is requested. Parent directories are not created. Relative paths
	// are resolved against the process current working directory. If generation fails,
	// an existing destination file is left untouched. The final write is direct rather
	// than atomic, so a write-time error such as a full disk or permission failure can
	// leave a truncated or partially written file. A read-only or otherwise unwritable
	// destination causes the method to return false. Using the same local file as
	// both source and destination is mechanically allowed because the source is read
	// first, but the subsequent write destroys the original HTML file. On Windows,
	// this method also rejects destination paths containing characters that are
	// invalid in Windows filenames, such as?, before generation begins.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	CkTask *GetAndSaveEMLAsync(const char *url_or_htmlFilepath, const char *emlPath);


	// Creates MHT output from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath and saves
	// it to the destination path in mhtPath. Supported statically referenced resources
	// are captured according to the current MHT properties.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Script output: Script handling is controlled by NoScripts[1] and
	// PreferMHTScripts[2].
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Destination file behavior: Chilkat first generates the complete MIME output in
	// memory and writes the destination only after generation succeeds. An existing
	// destination file is truncated and replaced; data is never appended and no
	// confirmation is requested. Parent directories are not created. Relative paths
	// are resolved against the process current working directory. If generation fails,
	// an existing destination file is left untouched. The final write is direct rather
	// than atomic, so a write-time error such as a full disk or permission failure can
	// leave a truncated or partially written file. A read-only or otherwise unwritable
	// destination causes the method to return false. Using the same local file as
	// both source and destination is mechanically allowed because the source is read
	// first, but the subsequent write destroys the original HTML file. On Windows,
	// this method also rejects destination paths containing characters that are
	// invalid in Windows filenames, such as?, before generation begins.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	// 
	// References:
	// [1] #NoScripts
	// [2] #PreferMHTScripts
	bool GetAndSaveMHT(const char *url_or_htmlFilepath, const char *mhtPath);

	// Creates MHT output from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath and saves
	// it to the destination path in mhtPath. Supported statically referenced resources
	// are captured according to the current MHT properties.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Script output: Script handling is controlled by NoScripts[1] and
	// PreferMHTScripts[2].
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Destination file behavior: Chilkat first generates the complete MIME output in
	// memory and writes the destination only after generation succeeds. An existing
	// destination file is truncated and replaced; data is never appended and no
	// confirmation is requested. Parent directories are not created. Relative paths
	// are resolved against the process current working directory. If generation fails,
	// an existing destination file is left untouched. The final write is direct rather
	// than atomic, so a write-time error such as a full disk or permission failure can
	// leave a truncated or partially written file. A read-only or otherwise unwritable
	// destination causes the method to return false. Using the same local file as
	// both source and destination is mechanically allowed because the source is read
	// first, but the subsequent write destroys the original HTML file. On Windows,
	// this method also rejects destination paths containing characters that are
	// invalid in Windows filenames, such as?, before generation begins.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	// 
	// References:
	// [1] #NoScripts
	// [2] #PreferMHTScripts
	CkTask *GetAndSaveMHTAsync(const char *url_or_htmlFilepath, const char *mhtPath);


	// Creates EML output from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath and
	// stores it as the ZIP entry named by zipEntryFilename inside the archive file in zipFilename. The
	// ZIP is created if it does not exist; otherwise the new entry is appended. Style
	// sheets are captured, images follow EmbedImages[1] and EmbedLocalOnly[2], and
	// scripts and frames are removed.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Argument order: url_or_htmlFilepath is the source, zipEntryFilename is the entry name inside the ZIP, and
	// zipFilename is the ZIP file path.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// Entry-name collision: If zipEntryFilename already exists in a valid opened ZIP archive, the
	// method returns false. It neither replaces the existing entry nor creates a
	// duplicate.
	// Archive handling: A valid existing archive is loaded, the new entry is added,
	// and the entire archive is rewritten after capture succeeds. If the path does not
	// exist, a new unencrypted ZIP is created. If a file exists but cannot be opened
	// as a valid ZIP, Chilkat creates a new archive at that path, overwriting that
	// file. Use forward slashes in zipEntryFilename for entry subdirectories; explicit directory
	// entries are unnecessary.
	// Failure and write safety: A capture failure leaves a valid existing archive
	// untouched. The final archive write is not atomic and rewrites the complete ZIP,
	// so a write-time I/O failure can damage or partially replace the archive. Parent
	// directories are not created. On Windows, an output ZIP path containing invalid
	// filename characters such as? is rejected.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	bool GetAndZipEML(const char *url_or_htmlFilepath, const char *zipEntryFilename, const char *zipFilename);

	// Creates EML output from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath and
	// stores it as the ZIP entry named by zipEntryFilename inside the archive file in zipFilename. The
	// ZIP is created if it does not exist; otherwise the new entry is appended. Style
	// sheets are captured, images follow EmbedImages[1] and EmbedLocalOnly[2], and
	// scripts and frames are removed.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Argument order: url_or_htmlFilepath is the source, zipEntryFilename is the entry name inside the ZIP, and
	// zipFilename is the ZIP file path.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// Entry-name collision: If zipEntryFilename already exists in a valid opened ZIP archive, the
	// method returns false. It neither replaces the existing entry nor creates a
	// duplicate.
	// Archive handling: A valid existing archive is loaded, the new entry is added,
	// and the entire archive is rewritten after capture succeeds. If the path does not
	// exist, a new unencrypted ZIP is created. If a file exists but cannot be opened
	// as a valid ZIP, Chilkat creates a new archive at that path, overwriting that
	// file. Use forward slashes in zipEntryFilename for entry subdirectories; explicit directory
	// entries are unnecessary.
	// Failure and write safety: A capture failure leaves a valid existing archive
	// untouched. The final archive write is not atomic and rewrites the complete ZIP,
	// so a write-time I/O failure can damage or partially replace the archive. Parent
	// directories are not created. On Windows, an output ZIP path containing invalid
	// filename characters such as? is rejected.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	CkTask *GetAndZipEMLAsync(const char *url_or_htmlFilepath, const char *zipEntryFilename, const char *zipFilename);


	// Creates MHT output from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath and
	// stores it as the ZIP entry named by zipEntryFilename inside the archive file in zipFilename. The
	// ZIP is created if it does not exist; otherwise the new entry is appended.
	// Supported statically referenced resources are captured according to the current
	// properties.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Argument order: url_or_htmlFilepath is the source, zipEntryFilename is the entry name inside the ZIP, and
	// zipFilename is the ZIP file path.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// Entry-name collision: If zipEntryFilename already exists in a valid opened ZIP archive, the
	// method returns false. It neither replaces the existing entry nor creates a
	// duplicate.
	// Archive handling: A valid existing archive is loaded, the new entry is added,
	// and the entire archive is rewritten after capture succeeds. If the path does not
	// exist, a new unencrypted ZIP is created. If a file exists but cannot be opened
	// as a valid ZIP, Chilkat creates a new archive at that path, overwriting that
	// file. Use forward slashes in zipEntryFilename for entry subdirectories; explicit directory
	// entries are unnecessary.
	// Failure and write safety: A capture failure leaves a valid existing archive
	// untouched. The final archive write is not atomic and rewrites the complete ZIP,
	// so a write-time I/O failure can damage or partially replace the archive. Parent
	// directories are not created. On Windows, an output ZIP path containing invalid
	// filename characters such as? is rejected.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	bool GetAndZipMHT(const char *url_or_htmlFilepath, const char *zipEntryFilename, const char *zipFilename);

	// Creates MHT output from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath and
	// stores it as the ZIP entry named by zipEntryFilename inside the archive file in zipFilename. The
	// ZIP is created if it does not exist; otherwise the new entry is appended.
	// Supported statically referenced resources are captured according to the current
	// properties.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Argument order: url_or_htmlFilepath is the source, zipEntryFilename is the entry name inside the ZIP, and
	// zipFilename is the ZIP file path.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// Entry-name collision: If zipEntryFilename already exists in a valid opened ZIP archive, the
	// method returns false. It neither replaces the existing entry nor creates a
	// duplicate.
	// Archive handling: A valid existing archive is loaded, the new entry is added,
	// and the entire archive is rewritten after capture succeeds. If the path does not
	// exist, a new unencrypted ZIP is created. If a file exists but cannot be opened
	// as a valid ZIP, Chilkat creates a new archive at that path, overwriting that
	// file. Use forward slashes in zipEntryFilename for entry subdirectories; explicit directory
	// entries are unnecessary.
	// Failure and write safety: A capture failure leaves a valid existing archive
	// untouched. The final archive write is not atomic and rewrites the complete ZIP,
	// so a write-time I/O failure can damage or partially replace the archive. Parent
	// directories are not created. On Windows, an output ZIP path containing invalid
	// filename characters such as? is rejected.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	CkTask *GetAndZipMHTAsync(const char *url_or_htmlFilepath, const char *zipEntryFilename, const char *zipFilename);


	// Returns the cache-root directory at zero-based index index. Cache roots are added
	// with AddCacheRoot[1], and their count is available from NumCacheRoots[2].
	// 
	// Index and result handling: Use an index from 0 through NumCacheRoots - 1. The
	// returned string is cleared when the call begins. If no cache root is configured
	// or index is outside the valid range, LastMethodSuccess is false and the
	// returned string is empty. On success, LastMethodSuccess is true and the
	// returned string contains the root path. Check LastMethodSuccess, not whether the
	// returned string is empty; use LastErrorText for the failure diagnostic.
	// 
	// References:
	// [1] #AddCacheRoot
	// [2] #NumCacheRoots
	bool GetCacheRoot(int index, CkString &outStr);

	// Returns the cache-root directory at zero-based index index. Cache roots are added
	// with AddCacheRoot[1], and their count is available from NumCacheRoots[2].
	// 
	// Index and result handling: Use an index from 0 through NumCacheRoots - 1. The
	// returned string is cleared when the call begins. If no cache root is configured
	// or index is outside the valid range, LastMethodSuccess is false and the
	// returned string is empty. On success, LastMethodSuccess is true and the
	// returned string contains the root path. Check LastMethodSuccess, not whether the
	// returned string is empty; use LastErrorText for the failure diagnostic.
	// 
	// References:
	// [1] #AddCacheRoot
	// [2] #NumCacheRoots
	const char *getCacheRoot(int index);
	// Returns the cache-root directory at zero-based index index. Cache roots are added
	// with AddCacheRoot[1], and their count is available from NumCacheRoots[2].
	// 
	// Index and result handling: Use an index from 0 through NumCacheRoots - 1. The
	// returned string is cleared when the call begins. If no cache root is configured
	// or index is outside the valid range, LastMethodSuccess is false and the
	// returned string is empty. On success, LastMethodSuccess is true and the
	// returned string contains the root path. Check LastMethodSuccess, not whether the
	// returned string is empty; use LastErrorText for the failure diagnostic.
	// 
	// References:
	// [1] #AddCacheRoot
	// [2] #NumCacheRoots
	const char *cacheRoot(int index);


	// Creates an EML MIME message from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath
	// and returns the complete EML text in memory. Style sheets and their referenced
	// CSS resources are captured. Images are embedded according to EmbedImages[1] and
	// EmbedLocalOnly[2]. Scripts and framed documents are removed.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// Memory use: The complete MIME message is returned as a string. For large pages,
	// GetAndSaveEML[3] avoids keeping the final EML text solely in the return value.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	// [3] #GetAndSaveEML
	bool GetEML(const char *url_or_htmlFilepath, CkString &outStr);

	// Creates an EML MIME message from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath
	// and returns the complete EML text in memory. Style sheets and their referenced
	// CSS resources are captured. Images are embedded according to EmbedImages[1] and
	// EmbedLocalOnly[2]. Scripts and framed documents are removed.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// Memory use: The complete MIME message is returned as a string. For large pages,
	// GetAndSaveEML[3] avoids keeping the final EML text solely in the return value.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	// [3] #GetAndSaveEML
	const char *getEML(const char *url_or_htmlFilepath);
	// Creates an EML MIME message from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath
	// and returns the complete EML text in memory. Style sheets and their referenced
	// CSS resources are captured. Images are embedded according to EmbedImages[1] and
	// EmbedLocalOnly[2]. Scripts and framed documents are removed.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// Memory use: The complete MIME message is returned as a string. For large pages,
	// GetAndSaveEML[3] avoids keeping the final EML text solely in the return value.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	// [3] #GetAndSaveEML
	const char *eML(const char *url_or_htmlFilepath);

	// Creates an EML MIME message from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath
	// and returns the complete EML text in memory. Style sheets and their referenced
	// CSS resources are captured. Images are embedded according to EmbedImages[1] and
	// EmbedLocalOnly[2]. Scripts and framed documents are removed.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// Memory use: The complete MIME message is returned as a string. For large pages,
	// GetAndSaveEML[3] avoids keeping the final EML text solely in the return value.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	// [3] #GetAndSaveEML
	CkTask *GetEMLAsync(const char *url_or_htmlFilepath);


	// Creates an MHT web archive from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath
	// and returns the complete MHT MIME text in memory. Supported statically
	// referenced resources are captured according to the current properties.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// Memory use: The complete archive is returned as a string. For large pages,
	// GetAndSaveMHT[1] writes the result directly to a file.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	// 
	// References:
	// [1] #GetAndSaveMHT
	bool GetMHT(const char *url_or_htmlFilepath, CkString &outStr);

	// Creates an MHT web archive from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath
	// and returns the complete MHT MIME text in memory. Supported statically
	// referenced resources are captured according to the current properties.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// Memory use: The complete archive is returned as a string. For large pages,
	// GetAndSaveMHT[1] writes the result directly to a file.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	// 
	// References:
	// [1] #GetAndSaveMHT
	const char *getMHT(const char *url_or_htmlFilepath);
	// Creates an MHT web archive from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath
	// and returns the complete MHT MIME text in memory. Supported statically
	// referenced resources are captured according to the current properties.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// Memory use: The complete archive is returned as a string. For large pages,
	// GetAndSaveMHT[1] writes the result directly to a file.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	// 
	// References:
	// [1] #GetAndSaveMHT
	const char *mHT(const char *url_or_htmlFilepath);

	// Creates an MHT web archive from the HTTP/HTTPS page or local HTML file in url_or_htmlFilepath
	// and returns the complete MHT MIME text in memory. Supported statically
	// referenced resources are captured according to the current properties.
	// 
	// How url_or_htmlFilepath is classified: Chilkat treats url_or_htmlFilepath as a web URL only when it begins,
	// case-insensitively, with http: or https:. Every other value is treated as a
	// local file path. file:// URLs are not supported; pass a plain filesystem path
	// instead. Relative paths are resolved against the process current working
	// directory, and the local file must already exist and be readable. A value such
	// as www.example.com/page.html has no recognized scheme and is therefore treated
	// as a local path.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Redirects and capture cookies: HTTP redirects are followed for the primary page
	// and dependent resources. After the primary request redirects, relative page
	// references are resolved against the final landing URL. Cookies received during
	// the capture are retained and sent on subsequent requests in that same capture,
	// including redirect and dependent-resource requests. The redirect limit, exact
	// followed status codes, and HTTPS-to-HTTP downgrade policy are governed by the
	// underlying HTTP engine and are not configurable through Mht.
	// Memory use: The complete archive is returned as a string. For large pages,
	// GetAndSaveMHT[1] writes the result directly to a file.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success.
	// This resilience applies only to dependent resources; failure to fetch the
	// primary URL or read the primary local HTML file fails the operation.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	// 
	// References:
	// [1] #GetAndSaveMHT
	CkTask *GetMHTAsync(const char *url_or_htmlFilepath);


	// Creates an EML MIME message from the in-memory HTML string in htmlText and returns
	// the complete EML text. Style sheets and their CSS resources are captured. Images
	// are embedded according to EmbedImages[1] and EmbedLocalOnly[2]. Scripts and
	// framed documents are removed.
	// 
	// Relative references: Set BaseUrl[3] when the HTML has no usable <base href> and
	// its relative resources should resolve against a web origin. An HTML <base>
	// element takes precedence. Without a usable base, unresolved relative resources
	// are not captured and their references remain relative.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success,
	// although the resulting MIME document is not fully self-contained for that
	// resource.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Redirecting dependent resources: HTTP redirects encountered while downloading
	// images, style sheets, imported CSS, frames, or other supported resources are
	// followed to the final content. Cookies established during the conversion are
	// retained for later requests in the same conversion.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	// [3] #BaseUrl
	bool HtmlToEML(const char *htmlText, CkString &outStr);

	// Creates an EML MIME message from the in-memory HTML string in htmlText and returns
	// the complete EML text. Style sheets and their CSS resources are captured. Images
	// are embedded according to EmbedImages[1] and EmbedLocalOnly[2]. Scripts and
	// framed documents are removed.
	// 
	// Relative references: Set BaseUrl[3] when the HTML has no usable <base href> and
	// its relative resources should resolve against a web origin. An HTML <base>
	// element takes precedence. Without a usable base, unresolved relative resources
	// are not captured and their references remain relative.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success,
	// although the resulting MIME document is not fully self-contained for that
	// resource.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Redirecting dependent resources: HTTP redirects encountered while downloading
	// images, style sheets, imported CSS, frames, or other supported resources are
	// followed to the final content. Cookies established during the conversion are
	// retained for later requests in the same conversion.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	// [3] #BaseUrl
	const char *htmlToEML(const char *htmlText);
	// Creates an EML MIME message from the in-memory HTML string in htmlText and returns
	// the complete EML text. Style sheets and their CSS resources are captured. Images
	// are embedded according to EmbedImages[1] and EmbedLocalOnly[2]. Scripts and
	// framed documents are removed.
	// 
	// Relative references: Set BaseUrl[3] when the HTML has no usable <base href> and
	// its relative resources should resolve against a web origin. An HTML <base>
	// element takes precedence. Without a usable base, unresolved relative resources
	// are not captured and their references remain relative.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success,
	// although the resulting MIME document is not fully self-contained for that
	// resource.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Redirecting dependent resources: HTTP redirects encountered while downloading
	// images, style sheets, imported CSS, frames, or other supported resources are
	// followed to the final content. Cookies established during the conversion are
	// retained for later requests in the same conversion.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	// [3] #BaseUrl
	CkTask *HtmlToEMLAsync(const char *htmlText);


	// Creates EML output from the in-memory HTML string in html and saves it to the
	// file path in emlFilename. Style sheets and their CSS resources are captured. Images are
	// embedded according to EmbedImages[1] and EmbedLocalOnly[2]. Scripts and framed
	// documents are removed.
	// 
	// Relative references: Set BaseUrl[3] when the HTML has no usable <base href> and
	// its relative resources should resolve against a web origin. An HTML <base>
	// element takes precedence. Without a usable base, unresolved relative resources
	// are not captured and their references remain relative.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success,
	// although the resulting MIME document is not fully self-contained for that
	// resource.
	// Destination file behavior: Chilkat first generates the complete MIME output in
	// memory and writes the destination only after generation succeeds. An existing
	// destination file is truncated and replaced; data is never appended and no
	// confirmation is requested. Parent directories are not created. Relative paths
	// are resolved against the process current working directory. If generation fails,
	// an existing destination file is left untouched. The final write is direct rather
	// than atomic, so a write-time error such as a full disk or permission failure can
	// leave a truncated or partially written file. A read-only or otherwise unwritable
	// destination causes the method to return false.
	// Redirecting dependent resources: HTTP redirects encountered while downloading
	// supported dependent resources are followed. Cookies established during the
	// conversion are reused for later requests in that same conversion.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	// [3] #BaseUrl
	bool HtmlToEMLFile(const char *html, const char *emlFilename);

	// Creates EML output from the in-memory HTML string in html and saves it to the
	// file path in emlFilename. Style sheets and their CSS resources are captured. Images are
	// embedded according to EmbedImages[1] and EmbedLocalOnly[2]. Scripts and framed
	// documents are removed.
	// 
	// Relative references: Set BaseUrl[3] when the HTML has no usable <base href> and
	// its relative resources should resolve against a web origin. An HTML <base>
	// element takes precedence. Without a usable base, unresolved relative resources
	// are not captured and their references remain relative.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success,
	// although the resulting MIME document is not fully self-contained for that
	// resource.
	// Destination file behavior: Chilkat first generates the complete MIME output in
	// memory and writes the destination only after generation succeeds. An existing
	// destination file is truncated and replaced; data is never appended and no
	// confirmation is requested. Parent directories are not created. Relative paths
	// are resolved against the process current working directory. If generation fails,
	// an existing destination file is left untouched. The final write is direct rather
	// than atomic, so a write-time error such as a full disk or permission failure can
	// leave a truncated or partially written file. A read-only or otherwise unwritable
	// destination causes the method to return false.
	// Redirecting dependent resources: HTTP redirects encountered while downloading
	// supported dependent resources are followed. Cookies established during the
	// conversion are reused for later requests in that same conversion.
	// EML is an HTML-email draft: The output adds the current RFC-822 Date and
	// X-Unsent: 1, removes scripts, frames, and HTML comments, and contains an HTML
	// root with related resources. It does not create a plain-text alternative, does
	// not generate Message-ID, and does not automatically make a fully addressed,
	// ready-to-send message. Load it into Chilkat.Email or a mail client and set the
	// required addressing and subject information before sending.
	// 
	// References:
	// [1] #EmbedImages
	// [2] #EmbedLocalOnly
	// [3] #BaseUrl
	CkTask *HtmlToEMLFileAsync(const char *html, const char *emlFilename);


	// Creates an MHT web archive from the in-memory HTML string in htmlText and returns
	// the complete MHT MIME text. Supported statically referenced resources are
	// captured according to the current properties.
	// 
	// Relative references: Set BaseUrl[1] when the HTML has no usable <base href> and
	// its relative resources should resolve against a web origin. An HTML <base>
	// element takes precedence. Without a usable base, unresolved relative resources
	// are not captured and their references remain relative.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Scripts: Script handling is controlled by NoScripts[2] and PreferMHTScripts[3].
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success,
	// although the resulting MIME document is not fully self-contained for that
	// resource.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Redirecting dependent resources: HTTP redirects encountered while downloading
	// images, style sheets, imported CSS, frames, or other supported resources are
	// followed to the final content. Cookies established during the conversion are
	// retained for later requests in the same conversion.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	// 
	// References:
	// [1] #BaseUrl
	// [2] #NoScripts
	// [3] #PreferMHTScripts
	bool HtmlToMHT(const char *htmlText, CkString &outStr);

	// Creates an MHT web archive from the in-memory HTML string in htmlText and returns
	// the complete MHT MIME text. Supported statically referenced resources are
	// captured according to the current properties.
	// 
	// Relative references: Set BaseUrl[1] when the HTML has no usable <base href> and
	// its relative resources should resolve against a web origin. An HTML <base>
	// element takes precedence. Without a usable base, unresolved relative resources
	// are not captured and their references remain relative.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Scripts: Script handling is controlled by NoScripts[2] and PreferMHTScripts[3].
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success,
	// although the resulting MIME document is not fully self-contained for that
	// resource.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Redirecting dependent resources: HTTP redirects encountered while downloading
	// images, style sheets, imported CSS, frames, or other supported resources are
	// followed to the final content. Cookies established during the conversion are
	// retained for later requests in the same conversion.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	// 
	// References:
	// [1] #BaseUrl
	// [2] #NoScripts
	// [3] #PreferMHTScripts
	const char *htmlToMHT(const char *htmlText);
	// Creates an MHT web archive from the in-memory HTML string in htmlText and returns
	// the complete MHT MIME text. Supported statically referenced resources are
	// captured according to the current properties.
	// 
	// Relative references: Set BaseUrl[1] when the HTML has no usable <base href> and
	// its relative resources should resolve against a web origin. An HTML <base>
	// element takes precedence. Without a usable base, unresolved relative resources
	// are not captured and their references remain relative.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Scripts: Script handling is controlled by NoScripts[2] and PreferMHTScripts[3].
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success,
	// although the resulting MIME document is not fully self-contained for that
	// resource.
	// Check LastMethodSuccess: The returned string is cleared when the call begins and
	// may be empty or partially populated if the method fails. A nonempty string does
	// not prove success, and an empty string should not be used as the failure test.
	// Use LastMethodSuccess as the authoritative result; when it is false, inspect
	// LastErrorText. A failed call never returns the previous call's string.
	// Redirecting dependent resources: HTTP redirects encountered while downloading
	// images, style sheets, imported CSS, frames, or other supported resources are
	// followed to the final content. Cookies established during the conversion are
	// retained for later requests in the same conversion.
	// Saving the returned string: The returned MIME document uses CRLF line endings
	// and UTF-8 text without a byte-order mark. Preserve the text as opaque UTF-8
	// bytes without newline translation or reflow. Raw non-ASCII text can occur.
	// Prefer the corresponding file-writing method when exact on-disk bytes are
	// required.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	// 
	// References:
	// [1] #BaseUrl
	// [2] #NoScripts
	// [3] #PreferMHTScripts
	CkTask *HtmlToMHTAsync(const char *htmlText);


	// Creates MHT output from the in-memory HTML string in html and saves it to the
	// file path in mhtFilename. Supported statically referenced resources are captured
	// according to the current properties.
	// 
	// Relative references: Set BaseUrl[1] when the HTML has no usable <base href> and
	// its relative resources should resolve against a web origin. An HTML <base>
	// element takes precedence. Without a usable base, unresolved relative resources
	// are not captured and their references remain relative.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Scripts: Script handling is controlled by NoScripts[2] and PreferMHTScripts[3].
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success,
	// although the resulting MIME document is not fully self-contained for that
	// resource.
	// Destination file behavior: Chilkat first generates the complete MIME output in
	// memory and writes the destination only after generation succeeds. An existing
	// destination file is truncated and replaced; data is never appended and no
	// confirmation is requested. Parent directories are not created. Relative paths
	// are resolved against the process current working directory. If generation fails,
	// an existing destination file is left untouched. The final write is direct rather
	// than atomic, so a write-time error such as a full disk or permission failure can
	// leave a truncated or partially written file. A read-only or otherwise unwritable
	// destination causes the method to return false.
	// Redirecting dependent resources: HTTP redirects encountered while downloading
	// supported dependent resources are followed. Cookies established during the
	// conversion are reused for later requests in that same conversion.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	// 
	// References:
	// [1] #BaseUrl
	// [2] #NoScripts
	// [3] #PreferMHTScripts
	bool HtmlToMHTFile(const char *html, const char *mhtFilename);

	// Creates MHT output from the in-memory HTML string in html and saves it to the
	// file path in mhtFilename. Supported statically referenced resources are captured
	// according to the current properties.
	// 
	// Relative references: Set BaseUrl[1] when the HTML has no usable <base href> and
	// its relative resources should resolve against a web origin. An HTML <base>
	// element takes precedence. Without a usable base, unresolved relative resources
	// are not captured and their references remain relative.
	// Static HTML capture: Chilkat does not execute JavaScript or behave as a browser
	// rendering engine. It processes the original HTML source and statically
	// referenced resources. Content created only after JavaScript runs—including AJAX,
	// fetch, XHR, lazy-loaded content, or framework-rendered DOM content—is not
	// captured. MHT output can preserve scripts for execution when the saved archive
	// is later opened; EML output removes scripts.
	// Scripts: Script handling is controlled by NoScripts[2] and PreferMHTScripts[3].
	// Dependent-resource failures: If an image, style sheet, imported CSS file, frame,
	// script, or other dependent resource cannot be downloaded or included, Chilkat
	// omits that MIME part, creates no empty placeholder, restores the HTML reference
	// to the resource's original absolute URL, records the problem in LastErrorText or
	// the diagnostic log, and continues. The overall conversion still reports success,
	// although the resulting MIME document is not fully self-contained for that
	// resource.
	// Destination file behavior: Chilkat first generates the complete MIME output in
	// memory and writes the destination only after generation succeeds. An existing
	// destination file is truncated and replaced; data is never appended and no
	// confirmation is requested. Parent directories are not created. Relative paths
	// are resolved against the process current working directory. If generation fails,
	// an existing destination file is left untouched. The final write is direct rather
	// than atomic, so a write-time error such as a full disk or permission failure can
	// leave a truncated or partially written file. A read-only or otherwise unwritable
	// destination causes the method to return false.
	// Redirecting dependent resources: HTTP redirects encountered while downloading
	// supported dependent resources are followed. Cookies established during the
	// conversion are reused for later requests in that same conversion.
	// MHT MIME structure: The result is a MIME document whose root is HTML (or XML)
	// and whose successfully embedded resources are related parts. When resources are
	// present, the message is normally multipart/related; when none are embedded, it
	// can collapse to a single text/html part. MHT output omits the Date and X-Unsent
	// headers and can preserve scripts, frames, and comments according to the script
	// settings.
	// 
	// References:
	// [1] #BaseUrl
	// [2] #NoScripts
	// [3] #PreferMHTScripts
	CkTask *HtmlToMHTFileAsync(const char *html, const char *mhtFilename);


	// Loads the calling object associated with an asynchronous Task. This method
	// exists to support Chilkat's generated asynchronous calling infrastructure.
	// 
	// Normally not called directly: Application code typically creates and runs tasks
	// through the corresponding Async methods. Use this method only when a Chilkat
	// example or support guidance specifically requires it.
	bool LoadTaskCaller(CkTask &task);


	// Removes custom HTTP request headers having the field name in name. Supply the
	// name without a trailing colon. Header names are matched case-insensitively.
	// 
	// No matching field: Calling this method for a name that is not present is a
	// harmless no-op and does not report an error.
	// 
	// Use ClearCustomHeaders[1] to remove every custom header at once.
	// 
	// 
	// References:
	// [1] #ClearCustomHeaders
	void RemoveCustomHeader(const char *name);


	// Restores a limited set of MHT/EML conversion settings to their defaults and
	// clears two method-added collections.
	// 
	// +-----------------------------------------+------------------------------------+
	// |          Reset by this method           |               Result               |
	// +=========================================+====================================+
	// | PreferMHTScripts                        | Restored to true.                |
	// +-----------------------------------------+------------------------------------+
	// | EmbedImages                             | Restored to true.                |
	// +-----------------------------------------+------------------------------------+
	// | EmbedLocalOnly                          | Restored to false.               |
	// +-----------------------------------------+------------------------------------+
	// | NoScripts and related internal          | Restored to the normal             |
	// | script-removal state                    | script-enabled MHT behavior.       |
	// +-----------------------------------------+------------------------------------+
	// | External style sheets added by          | The entire list is cleared.        |
	// | AddExternalStyleSheet                   |                                    |
	// +-----------------------------------------+------------------------------------+
	// | Exclusion patterns added by             | The entire list is cleared.        |
	// | ExcludeImagesMatching                   |                                    |
	// +-----------------------------------------+------------------------------------+
	// 
	// Not reset: This method does not clear custom headers, cache roots, BaseUrl,
	// UseCids, UseInline, UseFilename, credentials, proxy settings, or other
	// HTTP-related properties. Remove custom headers with RemoveCustomHeader[1] or
	// ClearCustomHeaders[2]. Cache roots can be cleared only by using a new Mht
	// object.
	// 
	// References:
	// [1] #RemoveCustomHeader
	// [2] #ClearCustomHeaders
	void RestoreDefaults(void);


	// Extracts MHT data from mhtFilename. mhtFilename may be either a local MHT file path or the
	// literal MHT MIME text; Chilkat distinguishes the two by detecting MIME headers
	// in the supplied value. unpackDir specifies the unpack directory, htmlFilename specifies the
	// main HTML filename, and partsSubDir specifies the related-parts subdirectory used in
	// normal unpacking.
	// 
	// Defaults and file creation: If unpackDir is empty, the unpack directory defaults to.
	// (the process current working directory). If partsSubDir is empty, the related-parts
	// subdirectory defaults to html_parts. Chilkat creates the parts subdirectory
	// beneath the unpack directory when needed. The main HTML file and extracted parts
	// overwrite existing files having the same names. An empty MHT input or an empty
	// htmlFilename HTML filename is an error and causes the method to return false.
	// Unpack options: Set UnpackDirect[1] to preserve relative Content-Location paths
	// without rewriting HTML; in that mode partsSubDir is ignored. UnpackUseRelPaths[2]
	// controls relative versus absolute references in normal mode.
	// Write behavior: Extraction writes directly to the target files rather than using
	// an atomic temporary-file replacement. A write-time I/O failure can therefore
	// leave partially written output.
	// Untrusted archives: Extract untrusted MHT input into an isolated directory and
	// inspect the resulting files before opening or publishing them.
	// Required MIME structure: Normal unpacking requires a multipart/related message
	// containing a primary HTML body. If either is missing, the method returns
	// false. When several HTML-like parts exist, the primary HTML part is selected
	// and the others are treated as related resources.
	// Path containment in normal mode: Before writing a related part, Chilkat
	// removes.. path segments, drops leading slashes, strips Windows drive prefixes,
	// normalizes UNC-style paths to relative paths, and keeps the result beneath the
	// unpack directory. Degenerate names such as. and.. become _; on Windows, * and?
	// are replaced with _. This is targeted sanitization, not a guarantee that every
	// platform-specific illegal name is transformed.
	// Name collisions: Parts that would receive the same filename during one unpack
	// operation are made unique with numeric suffixes such as name_1.ext. Existing
	// files left by an earlier run are overwritten.
	// Direct mode: When UnpackDirect[1] is true, the method is intended for MHT data
	// whose Content-Location values are already relative paths. A part whose location
	// begins with http://, https://, or file:/ is logged and not written. Use normal
	// mode for web-captured MHT data.
	// 
	// References:
	// [1] #UnpackDirect
	// [2] #UnpackUseRelPaths
	bool UnpackMHT(const char *mhtFilename, const char *unpackDir, const char *htmlFilename, const char *partsSubDir);


	// Extracts MHT data from mhtString. Despite the historical method name, mhtString may be
	// either literal MHT MIME text or a local MHT file path; Chilkat distinguishes the
	// two by detecting MIME headers in the supplied value. unpackDir specifies the unpack
	// directory, htmlFilename specifies the main HTML filename, and partsSubDir specifies the
	// related-parts subdirectory used in normal unpacking.
	// 
	// Defaults and file creation: If unpackDir is empty, the unpack directory defaults to.
	// (the process current working directory). If partsSubDir is empty, the related-parts
	// subdirectory defaults to html_parts. Chilkat creates the parts subdirectory
	// beneath the unpack directory when needed. Existing files having the same names
	// are overwritten. An empty MHT input or an empty htmlFilename HTML filename is an error
	// and causes the method to return false.
	// Direct mode: When UnpackDirect[1] is true, partsSubDir is ignored and relative
	// Content-Location paths are used directly beneath the unpack directory.
	// Otherwise, UnpackUseRelPaths[2] controls relative versus absolute references in
	// the rewritten HTML.
	// Write behavior: Extraction writes directly to the target files rather than using
	// an atomic temporary-file replacement. A write-time I/O failure can therefore
	// leave partially written output.
	// Required MIME structure: Normal unpacking requires a multipart/related message
	// containing a primary HTML body. If either is missing, the method returns
	// false. When several HTML-like parts exist, the primary HTML part is selected
	// and the others are treated as related resources.
	// Path containment in normal mode: Before writing a related part, Chilkat
	// removes.. path segments, drops leading slashes, strips Windows drive prefixes,
	// normalizes UNC-style paths to relative paths, and keeps the result beneath the
	// unpack directory. Degenerate names such as. and.. become _; on Windows, * and?
	// are replaced with _. This is targeted sanitization, not a guarantee that every
	// platform-specific illegal name is transformed.
	// Name collisions: Parts that would receive the same filename during one unpack
	// operation are made unique with numeric suffixes such as name_1.ext. Existing
	// files left by an earlier run are overwritten.
	// Direct mode: When UnpackDirect[1] is true, the method is intended for MHT data
	// whose Content-Location values are already relative paths. A part whose location
	// begins with http://, https://, or file:/ is logged and not written. Use normal
	// mode for web-captured MHT data.
	// 
	// References:
	// [1] #UnpackDirect
	// [2] #UnpackUseRelPaths
	bool UnpackMHTString(const char *mhtString, const char *unpackDir, const char *htmlFilename, const char *partsSubDir);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
