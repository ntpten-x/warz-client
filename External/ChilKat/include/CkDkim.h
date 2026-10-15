// CkDkim.h: interface for the CkDkim class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkDkim_H
#define _CkDkim_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkBinData;
class CkTask;
class CkPrivateKey;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkDkim
class CK_VISIBLE_PUBLIC CkDkim  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkDkim(const CkDkim &);
	CkDkim &operator=(const CkDkim &);

    public:
	CkDkim(void);
	virtual ~CkDkim(void);

	static CkDkim *createNew(void);
	static CkDkim *createNew2(int progLang);
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
	// Set to true to request cancellation of a currently running operation. A
	// synchronous operation can be cancelled from another thread by setting this
	// property on the same object. Methods that complete quickly or do not
	// periodically check for cancellation may finish before the request is observed.
	// Cancellation behavior: Treat this as a cancellation request rather than a
	// guarantee of immediate termination. After the method returns, use the method's
	// normal return value and diagnostic properties to determine the outcome.
	bool get_AbortCurrent(void);
	// Set to true to request cancellation of a currently running operation. A
	// synchronous operation can be cancelled from another thread by setting this
	// property on the same object. Methods that complete quickly or do not
	// periodically check for cancellation may finish before the request is observed.
	// Cancellation behavior: Treat this as a cancellation request rather than a
	// guarantee of immediate termination. After the method returns, use the method's
	// normal return value and diagnostic properties to determine the outcome.
	void put_AbortCurrent(bool newVal);

	// Specifies the signing algorithm written to the a= tag of a newly created
	// DKIM-Signature header. The default is rsa-sha256.
	// 
	// +------------+-----------------------------------------------------------------+
	// |   Value    |                            Behavior                             |
	// +============+=================================================================+
	// | rsa-sha256 | RSA signing with a SHA-256 digest. This is the recommended      |
	// |            | value.                                                          |
	// +------------+-----------------------------------------------------------------+
	// | rsa-sha1   | Legacy RSA signing with a SHA-1 digest. Use only when an older  |
	// |            | system specifically requires it.                                |
	// +------------+-----------------------------------------------------------------+
	// 
	// The value is trimmed and compared case-insensitively. The recognized values are
	// rsa-sha256 and rsa-sha1. An empty or unrecognized value is normalized to
	// rsa-sha256 rather than rejected.
	// 
	void get_DkimAlg(CkString &str);
	// Specifies the signing algorithm written to the a= tag of a newly created
	// DKIM-Signature header. The default is rsa-sha256.
	// 
	// +------------+-----------------------------------------------------------------+
	// |   Value    |                            Behavior                             |
	// +============+=================================================================+
	// | rsa-sha256 | RSA signing with a SHA-256 digest. This is the recommended      |
	// |            | value.                                                          |
	// +------------+-----------------------------------------------------------------+
	// | rsa-sha1   | Legacy RSA signing with a SHA-1 digest. Use only when an older  |
	// |            | system specifically requires it.                                |
	// +------------+-----------------------------------------------------------------+
	// 
	// The value is trimmed and compared case-insensitively. The recognized values are
	// rsa-sha256 and rsa-sha1. An empty or unrecognized value is normalized to
	// rsa-sha256 rather than rejected.
	// 
	const char *dkimAlg(void);
	// Specifies the signing algorithm written to the a= tag of a newly created
	// DKIM-Signature header. The default is rsa-sha256.
	// 
	// +------------+-----------------------------------------------------------------+
	// |   Value    |                            Behavior                             |
	// +============+=================================================================+
	// | rsa-sha256 | RSA signing with a SHA-256 digest. This is the recommended      |
	// |            | value.                                                          |
	// +------------+-----------------------------------------------------------------+
	// | rsa-sha1   | Legacy RSA signing with a SHA-1 digest. Use only when an older  |
	// |            | system specifically requires it.                                |
	// +------------+-----------------------------------------------------------------+
	// 
	// The value is trimmed and compared case-insensitively. The recognized values are
	// rsa-sha256 and rsa-sha1. An empty or unrecognized value is normalized to
	// rsa-sha256 rather than rejected.
	// 
	void put_DkimAlg(const char *newVal);

	// Controls the maximum number of bytes from the canonicalized message body used
	// when computing the DKIM body hash. The default is 0.
	// 
	// +------------------------------+-----------------------------------------------+
	// |            Value             |                   Behavior                    |
	// +==============================+===============================================+
	// | 0                            | Hashes the complete canonicalized body and    |
	// |                              | omits the DKIM l= tag.                        |
	// +------------------------------+-----------------------------------------------+
	// | Positive and less than the   | Hashes the specified number of bytes and      |
	// | canonicalized body length    | emits l= with that value.                     |
	// +------------------------------+-----------------------------------------------+
	// | Positive and greater than    | Hashes the complete canonicalized body and    |
	// | the canonicalized body       | emits l= containing the actual canonicalized  |
	// | length                       | body length.                                  |
	// +------------------------------+-----------------------------------------------+
	// | Negative                     | -1 hashes the complete canonicalized body and |
	// |                              | emits l= containing the actual canonicalized  |
	// |                              | body length.                                  |
	// +------------------------------+-----------------------------------------------+
	// 
	// When a generated signature contains l=, verification hashes only the indicated
	// prefix of the canonicalized body. Content appended after that signed prefix does
	// not invalidate the signature.
	// 
	// Security note: Partial-body signatures allow unsigned content to be appended
	// after the signed portion. Signing the complete body by using 0 is normally
	// preferred.
	int get_DkimBodyLengthCount(void);
	// Controls the maximum number of bytes from the canonicalized message body used
	// when computing the DKIM body hash. The default is 0.
	// 
	// +------------------------------+-----------------------------------------------+
	// |            Value             |                   Behavior                    |
	// +==============================+===============================================+
	// | 0                            | Hashes the complete canonicalized body and    |
	// |                              | omits the DKIM l= tag.                        |
	// +------------------------------+-----------------------------------------------+
	// | Positive and less than the   | Hashes the specified number of bytes and      |
	// | canonicalized body length    | emits l= with that value.                     |
	// +------------------------------+-----------------------------------------------+
	// | Positive and greater than    | Hashes the complete canonicalized body and    |
	// | the canonicalized body       | emits l= containing the actual canonicalized  |
	// | length                       | body length.                                  |
	// +------------------------------+-----------------------------------------------+
	// | Negative                     | -1 hashes the complete canonicalized body and |
	// |                              | emits l= containing the actual canonicalized  |
	// |                              | body length.                                  |
	// +------------------------------+-----------------------------------------------+
	// 
	// When a generated signature contains l=, verification hashes only the indicated
	// prefix of the canonicalized body. Content appended after that signed prefix does
	// not invalidate the signature.
	// 
	// Security note: Partial-body signatures allow unsigned content to be appended
	// after the signed portion. Signing the complete body by using 0 is normally
	// preferred.
	void put_DkimBodyLengthCount(int newVal);

	// Specifies one DKIM canonicalization algorithm to use for both the signed header
	// fields and the message body. The default is relaxed.
	// 
	// +---------+-------------------+------------------------------------------------+
	// |  Value  |   Generated c=    |                    Behavior                    |
	// |         |       value       |                                                |
	// +=========+===================+================================================+
	// | simple  | simple/simple     | Preserves formatting closely. Small changes in |
	// |         |                   | whitespace or header folding can invalidate    |
	// |         |                   | the signature.                                 |
	// +---------+-------------------+------------------------------------------------+
	// | relaxed | relaxed/relaxed   | Normalizes defined whitespace and header-name  |
	// |         |                   | differences.                                   |
	// +---------+-------------------+------------------------------------------------+
	// 
	// The value is trimmed and compared case-insensitively. This property does not
	// accept a header/body pair such as relaxed/simple or simple/relaxed. Pair values,
	// an empty string, and other unrecognized values are normalized to relaxed rather
	// than rejected.
	// 
	// Canonicalization background: DKIM signs a canonicalized representation of the
	// message. The signer and verifier must apply the same header and body
	// canonicalization rules.
	void get_DkimCanon(CkString &str);
	// Specifies one DKIM canonicalization algorithm to use for both the signed header
	// fields and the message body. The default is relaxed.
	// 
	// +---------+-------------------+------------------------------------------------+
	// |  Value  |   Generated c=    |                    Behavior                    |
	// |         |       value       |                                                |
	// +=========+===================+================================================+
	// | simple  | simple/simple     | Preserves formatting closely. Small changes in |
	// |         |                   | whitespace or header folding can invalidate    |
	// |         |                   | the signature.                                 |
	// +---------+-------------------+------------------------------------------------+
	// | relaxed | relaxed/relaxed   | Normalizes defined whitespace and header-name  |
	// |         |                   | differences.                                   |
	// +---------+-------------------+------------------------------------------------+
	// 
	// The value is trimmed and compared case-insensitively. This property does not
	// accept a header/body pair such as relaxed/simple or simple/relaxed. Pair values,
	// an empty string, and other unrecognized values are normalized to relaxed rather
	// than rejected.
	// 
	// Canonicalization background: DKIM signs a canonicalized representation of the
	// message. The signer and verifier must apply the same header and body
	// canonicalization rules.
	const char *dkimCanon(void);
	// Specifies one DKIM canonicalization algorithm to use for both the signed header
	// fields and the message body. The default is relaxed.
	// 
	// +---------+-------------------+------------------------------------------------+
	// |  Value  |   Generated c=    |                    Behavior                    |
	// |         |       value       |                                                |
	// +=========+===================+================================================+
	// | simple  | simple/simple     | Preserves formatting closely. Small changes in |
	// |         |                   | whitespace or header folding can invalidate    |
	// |         |                   | the signature.                                 |
	// +---------+-------------------+------------------------------------------------+
	// | relaxed | relaxed/relaxed   | Normalizes defined whitespace and header-name  |
	// |         |                   | differences.                                   |
	// +---------+-------------------+------------------------------------------------+
	// 
	// The value is trimmed and compared case-insensitively. This property does not
	// accept a header/body pair such as relaxed/simple or simple/relaxed. Pair values,
	// an empty string, and other unrecognized values are normalized to relaxed rather
	// than rejected.
	// 
	// Canonicalization background: DKIM signs a canonicalized representation of the
	// message. The signer and verifier must apply the same header and body
	// canonicalization rules.
	void put_DkimCanon(const char *newVal);

	// Specifies the signing domain written verbatim to the d= tag of the generated
	// DKIM-Signature header. The corresponding public key is normally published
	// beneath the DNS name formed from DkimSelector[1] and this domain.
	// 
	// Set this property to a nonempty, syntactically valid domain before calling
	// DkimSign[2]. If this property is empty, DkimSign returns false without
	// modifying the MIME data. A nonempty value is not otherwise validated or
	// normalized during signing; uppercase letters, surrounding whitespace, a trailing
	// dot, and Unicode characters are emitted as supplied.
	// 
	// Caller responsibility: Supply the domain in the exact form required in the
	// signature. For an internationalized domain, use its ASCII/Punycode form.
	// DkimSign does not check DNS and does not confirm that the configured private key
	// matches the public key published for this domain.
	// DKIM and DMARC: DKIM verification does not require d= to equal the visible From
	// domain. DMARC separately evaluates alignment between the authenticated DKIM
	// domain and the message's From domain.
	// 
	// References:
	// [1] #DkimSelector
	// [2] #DkimSign
	void get_DkimDomain(CkString &str);
	// Specifies the signing domain written verbatim to the d= tag of the generated
	// DKIM-Signature header. The corresponding public key is normally published
	// beneath the DNS name formed from DkimSelector[1] and this domain.
	// 
	// Set this property to a nonempty, syntactically valid domain before calling
	// DkimSign[2]. If this property is empty, DkimSign returns false without
	// modifying the MIME data. A nonempty value is not otherwise validated or
	// normalized during signing; uppercase letters, surrounding whitespace, a trailing
	// dot, and Unicode characters are emitted as supplied.
	// 
	// Caller responsibility: Supply the domain in the exact form required in the
	// signature. For an internationalized domain, use its ASCII/Punycode form.
	// DkimSign does not check DNS and does not confirm that the configured private key
	// matches the public key published for this domain.
	// DKIM and DMARC: DKIM verification does not require d= to equal the visible From
	// domain. DMARC separately evaluates alignment between the authenticated DKIM
	// domain and the message's From domain.
	// 
	// References:
	// [1] #DkimSelector
	// [2] #DkimSign
	const char *dkimDomain(void);
	// Specifies the signing domain written verbatim to the d= tag of the generated
	// DKIM-Signature header. The corresponding public key is normally published
	// beneath the DNS name formed from DkimSelector[1] and this domain.
	// 
	// Set this property to a nonempty, syntactically valid domain before calling
	// DkimSign[2]. If this property is empty, DkimSign returns false without
	// modifying the MIME data. A nonempty value is not otherwise validated or
	// normalized during signing; uppercase letters, surrounding whitespace, a trailing
	// dot, and Unicode characters are emitted as supplied.
	// 
	// Caller responsibility: Supply the domain in the exact form required in the
	// signature. For an internationalized domain, use its ASCII/Punycode form.
	// DkimSign does not check DNS and does not confirm that the configured private key
	// matches the public key published for this domain.
	// DKIM and DMARC: DKIM verification does not require d= to equal the visible From
	// domain. DMARC separately evaluates alignment between the authenticated DKIM
	// domain and the message's From domain.
	// 
	// References:
	// [1] #DkimSelector
	// [2] #DkimSign
	void put_DkimDomain(const char *newVal);

	// A colon-separated list of header field names to include in the DKIM signature.
	// The list is written to the signature's h= tag in the same order. The default
	// is:mime-version:date:message-id:subject:from:to:content-type
	// 
	// Header-name matching is case-insensitive. For each occurrence of a name in this
	// list, Chilkat selects the next matching header field from the bottom of the
	// message header block upward, as required by DKIM. For example, if the message
	// contains two Subject fields, listing subject once signs the bottommost field,
	// while listing it twice signs both fields.
	// 
	// If a listed occurrence has no corresponding field in the message, the absent
	// field is still included in the signing calculation. Repeating a name more times
	// than it occurs can therefore implement DKIM oversigning and prevent a matching
	// field from being inserted later without invalidating the signature.
	// 
	//     * Use colon-separated field names without surrounding spaces.
	//     * Include from; DKIM requires the From field to be signed, but DkimSign[1]
	//     does not enforce this requirement or add it automatically.
	//     * An empty list and names of missing fields are accepted rather than
	//     rejected.
	//     * Avoid transport-added or frequently modified fields such as Received and
	//     Return-Path.
	// Repeated names: Repeated existing headers are signed successively from bottom to
	// top. Repeated absent occurrences are useful for oversigning.
	// 
	// References:
	// [1] #DkimSign
	void get_DkimHeaders(CkString &str);
	// A colon-separated list of header field names to include in the DKIM signature.
	// The list is written to the signature's h= tag in the same order. The default
	// is:mime-version:date:message-id:subject:from:to:content-type
	// 
	// Header-name matching is case-insensitive. For each occurrence of a name in this
	// list, Chilkat selects the next matching header field from the bottom of the
	// message header block upward, as required by DKIM. For example, if the message
	// contains two Subject fields, listing subject once signs the bottommost field,
	// while listing it twice signs both fields.
	// 
	// If a listed occurrence has no corresponding field in the message, the absent
	// field is still included in the signing calculation. Repeating a name more times
	// than it occurs can therefore implement DKIM oversigning and prevent a matching
	// field from being inserted later without invalidating the signature.
	// 
	//     * Use colon-separated field names without surrounding spaces.
	//     * Include from; DKIM requires the From field to be signed, but DkimSign[1]
	//     does not enforce this requirement or add it automatically.
	//     * An empty list and names of missing fields are accepted rather than
	//     rejected.
	//     * Avoid transport-added or frequently modified fields such as Received and
	//     Return-Path.
	// Repeated names: Repeated existing headers are signed successively from bottom to
	// top. Repeated absent occurrences are useful for oversigning.
	// 
	// References:
	// [1] #DkimSign
	const char *dkimHeaders(void);
	// A colon-separated list of header field names to include in the DKIM signature.
	// The list is written to the signature's h= tag in the same order. The default
	// is:mime-version:date:message-id:subject:from:to:content-type
	// 
	// Header-name matching is case-insensitive. For each occurrence of a name in this
	// list, Chilkat selects the next matching header field from the bottom of the
	// message header block upward, as required by DKIM. For example, if the message
	// contains two Subject fields, listing subject once signs the bottommost field,
	// while listing it twice signs both fields.
	// 
	// If a listed occurrence has no corresponding field in the message, the absent
	// field is still included in the signing calculation. Repeating a name more times
	// than it occurs can therefore implement DKIM oversigning and prevent a matching
	// field from being inserted later without invalidating the signature.
	// 
	//     * Use colon-separated field names without surrounding spaces.
	//     * Include from; DKIM requires the From field to be signed, but DkimSign[1]
	//     does not enforce this requirement or add it automatically.
	//     * An empty list and names of missing fields are accepted rather than
	//     rejected.
	//     * Avoid transport-added or frequently modified fields such as Received and
	//     Return-Path.
	// Repeated names: Repeated existing headers are signed successively from bottom to
	// top. Repeated absent occurrences are useful for oversigning.
	// 
	// References:
	// [1] #DkimSign
	void put_DkimHeaders(const char *newVal);

	// Specifies the selector written verbatim to the s= tag of a generated DKIM
	// signature. The selector and DkimDomain[1] form the DNS name used to locate the
	// public key:selector._domainkey.signing-domain For example, selector brisbane and
	// domain chilkatsoft.com produce brisbane._domainkey.chilkatsoft.com.
	// 
	// Supply only the selector. Do not include._domainkey. or the signing domain. If
	// this property is empty, DkimSign[2] returns false without modifying the MIME
	// data. A nonempty value is not otherwise validated or normalized during signing;
	// for example, a complete DNS name is emitted as supplied rather than reduced to a
	// selector.
	// 
	// Caller responsibility: Use a nonempty selector consisting of valid DNS selector
	// labels. The private key configured by SetDkimPrivateKey[3] must match the public
	// key published for this selector and domain.
	// 
	// References:
	// [1] #DkimDomain
	// [2] #DkimSign
	// [3] #SetDkimPrivateKey
	void get_DkimSelector(CkString &str);
	// Specifies the selector written verbatim to the s= tag of a generated DKIM
	// signature. The selector and DkimDomain[1] form the DNS name used to locate the
	// public key:selector._domainkey.signing-domain For example, selector brisbane and
	// domain chilkatsoft.com produce brisbane._domainkey.chilkatsoft.com.
	// 
	// Supply only the selector. Do not include._domainkey. or the signing domain. If
	// this property is empty, DkimSign[2] returns false without modifying the MIME
	// data. A nonempty value is not otherwise validated or normalized during signing;
	// for example, a complete DNS name is emitted as supplied rather than reduced to a
	// selector.
	// 
	// Caller responsibility: Use a nonempty selector consisting of valid DNS selector
	// labels. The private key configured by SetDkimPrivateKey[3] must match the public
	// key published for this selector and domain.
	// 
	// References:
	// [1] #DkimDomain
	// [2] #DkimSign
	// [3] #SetDkimPrivateKey
	const char *dkimSelector(void);
	// Specifies the selector written verbatim to the s= tag of a generated DKIM
	// signature. The selector and DkimDomain[1] form the DNS name used to locate the
	// public key:selector._domainkey.signing-domain For example, selector brisbane and
	// domain chilkatsoft.com produce brisbane._domainkey.chilkatsoft.com.
	// 
	// Supply only the selector. Do not include._domainkey. or the signing domain. If
	// this property is empty, DkimSign[2] returns false without modifying the MIME
	// data. A nonempty value is not otherwise validated or normalized during signing;
	// for example, a complete DNS name is emitted as supplied rather than reduced to a
	// selector.
	// 
	// Caller responsibility: Use a nonempty selector consisting of valid DNS selector
	// labels. The private key configured by SetDkimPrivateKey[3] must match the public
	// key published for this selector and domain.
	// 
	// References:
	// [1] #DkimDomain
	// [2] #DkimSign
	// [3] #SetDkimPrivateKey
	void put_DkimSelector(const char *newVal);

	// Specifies the algorithm used when creating a legacy DomainKey-Signature header.
	// The only supported value, and the default, is rsa-sha1.
	// Legacy protocol: DomainKeys is the predecessor to DKIM and is obsolete for
	// modern email authentication. New implementations should use DKIM with rsa-sha256
	// unless compatibility with an older system specifically requires DomainKeys.
	void get_DomainKeyAlg(CkString &str);
	// Specifies the algorithm used when creating a legacy DomainKey-Signature header.
	// The only supported value, and the default, is rsa-sha1.
	// Legacy protocol: DomainKeys is the predecessor to DKIM and is obsolete for
	// modern email authentication. New implementations should use DKIM with rsa-sha256
	// unless compatibility with an older system specifically requires DomainKeys.
	const char *domainKeyAlg(void);
	// Specifies the algorithm used when creating a legacy DomainKey-Signature header.
	// The only supported value, and the default, is rsa-sha1.
	// Legacy protocol: DomainKeys is the predecessor to DKIM and is obsolete for
	// modern email authentication. New implementations should use DKIM with rsa-sha256
	// unless compatibility with an older system specifically requires DomainKeys.
	void put_DomainKeyAlg(const char *newVal);

	// Specifies the canonicalization algorithm used when creating a legacy
	// DomainKey-Signature header. The default is nofws.
	// 
	// +--------+---------------------------------------------------------------------+
	// | Value  |                               Meaning                               |
	// +========+=====================================================================+
	// | simple | Uses the message representation with minimal normalization.         |
	// +--------+---------------------------------------------------------------------+
	// | nofws  | Applies the DomainKeys no-folding-whitespace canonicalization       |
	// |        | rules.                                                              |
	// +--------+---------------------------------------------------------------------+
	// 
	// Legacy protocol: These values apply to DomainKeys, not DKIM. For modern signing,
	// use DkimCanon[1].
	// 
	// References:
	// [1] #DkimCanon
	void get_DomainKeyCanon(CkString &str);
	// Specifies the canonicalization algorithm used when creating a legacy
	// DomainKey-Signature header. The default is nofws.
	// 
	// +--------+---------------------------------------------------------------------+
	// | Value  |                               Meaning                               |
	// +========+=====================================================================+
	// | simple | Uses the message representation with minimal normalization.         |
	// +--------+---------------------------------------------------------------------+
	// | nofws  | Applies the DomainKeys no-folding-whitespace canonicalization       |
	// |        | rules.                                                              |
	// +--------+---------------------------------------------------------------------+
	// 
	// Legacy protocol: These values apply to DomainKeys, not DKIM. For modern signing,
	// use DkimCanon[1].
	// 
	// References:
	// [1] #DkimCanon
	const char *domainKeyCanon(void);
	// Specifies the canonicalization algorithm used when creating a legacy
	// DomainKey-Signature header. The default is nofws.
	// 
	// +--------+---------------------------------------------------------------------+
	// | Value  |                               Meaning                               |
	// +========+=====================================================================+
	// | simple | Uses the message representation with minimal normalization.         |
	// +--------+---------------------------------------------------------------------+
	// | nofws  | Applies the DomainKeys no-folding-whitespace canonicalization       |
	// |        | rules.                                                              |
	// +--------+---------------------------------------------------------------------+
	// 
	// Legacy protocol: These values apply to DomainKeys, not DKIM. For modern signing,
	// use DkimCanon[1].
	// 
	// References:
	// [1] #DkimCanon
	void put_DomainKeyCanon(const char *newVal);

	// Specifies the signing domain written to a legacy DomainKey-Signature header.
	// Together with DomainKeySelector[1], it identifies the DNS location of the
	// DomainKeys public key.
	// Legacy protocol: DomainKeys is obsolete. Use DkimDomain[2] for new DKIM
	// implementations.
	// 
	// References:
	// [1] #DomainKeySelector
	// [2] #DkimDomain
	void get_DomainKeyDomain(CkString &str);
	// Specifies the signing domain written to a legacy DomainKey-Signature header.
	// Together with DomainKeySelector[1], it identifies the DNS location of the
	// DomainKeys public key.
	// Legacy protocol: DomainKeys is obsolete. Use DkimDomain[2] for new DKIM
	// implementations.
	// 
	// References:
	// [1] #DomainKeySelector
	// [2] #DkimDomain
	const char *domainKeyDomain(void);
	// Specifies the signing domain written to a legacy DomainKey-Signature header.
	// Together with DomainKeySelector[1], it identifies the DNS location of the
	// DomainKeys public key.
	// Legacy protocol: DomainKeys is obsolete. Use DkimDomain[2] for new DKIM
	// implementations.
	// 
	// References:
	// [1] #DomainKeySelector
	// [2] #DkimDomain
	void put_DomainKeyDomain(const char *newVal);

	// A colon-separated list of header field names to include in a legacy DomainKeys
	// signature. The default
	// is:mime-version:date:message-id:subject:from:to:content-type
	// Legacy protocol: This property applies only to DomainKeys. For modern DKIM
	// signing, use DkimHeaders[1].
	// 
	// References:
	// [1] #DkimHeaders
	void get_DomainKeyHeaders(CkString &str);
	// A colon-separated list of header field names to include in a legacy DomainKeys
	// signature. The default
	// is:mime-version:date:message-id:subject:from:to:content-type
	// Legacy protocol: This property applies only to DomainKeys. For modern DKIM
	// signing, use DkimHeaders[1].
	// 
	// References:
	// [1] #DkimHeaders
	const char *domainKeyHeaders(void);
	// A colon-separated list of header field names to include in a legacy DomainKeys
	// signature. The default
	// is:mime-version:date:message-id:subject:from:to:content-type
	// Legacy protocol: This property applies only to DomainKeys. For modern DKIM
	// signing, use DkimHeaders[1].
	// 
	// References:
	// [1] #DkimHeaders
	void put_DomainKeyHeaders(const char *newVal);

	// Specifies the selector used to locate the public key for a legacy DomainKeys
	// signature. The DNS name is formed as:selector._domainkey.signing-domain For
	// example, selector reykjavik and domain example-code.com produce
	// reykjavik._domainkey.example-code.com.
	// Legacy protocol: This property applies only to DomainKeys. For modern DKIM
	// signing, use DkimSelector[1].
	// 
	// References:
	// [1] #DkimSelector
	void get_DomainKeySelector(CkString &str);
	// Specifies the selector used to locate the public key for a legacy DomainKeys
	// signature. The DNS name is formed as:selector._domainkey.signing-domain For
	// example, selector reykjavik and domain example-code.com produce
	// reykjavik._domainkey.example-code.com.
	// Legacy protocol: This property applies only to DomainKeys. For modern DKIM
	// signing, use DkimSelector[1].
	// 
	// References:
	// [1] #DkimSelector
	const char *domainKeySelector(void);
	// Specifies the selector used to locate the public key for a legacy DomainKeys
	// signature. The DNS name is formed as:selector._domainkey.signing-domain For
	// example, selector reykjavik and domain example-code.com produce
	// reykjavik._domainkey.example-code.com.
	// Legacy protocol: This property applies only to DomainKeys. For modern DKIM
	// signing, use DkimSelector[1].
	// 
	// References:
	// [1] #DkimSelector
	void put_DomainKeySelector(const char *newVal);

	// Specifies the interval, in milliseconds, between AbortCheck[1] callbacks during
	// methods that support periodic cancellation checks. Set to 0 to disable these
	// callbacks. The default is 0.
	// 
	// PrefetchPublicKey[2] invokes AbortCheck while performing its DNS lookup. Setting
	// this property to 1 and requesting cancellation from the first callback causes
	// PrefetchPublicKey to return false.
	// 
	// Responsiveness and overhead: A smaller interval can make cancellation more
	// responsive, but it also increases callback overhead. Methods that finish quickly
	// may complete before any callback occurs.
	// 
	// References:
	// [1] #AbortCheck
	// [2] #PrefetchPublicKey
	int get_HeartbeatMs(void);
	// Specifies the interval, in milliseconds, between AbortCheck[1] callbacks during
	// methods that support periodic cancellation checks. Set to 0 to disable these
	// callbacks. The default is 0.
	// 
	// PrefetchPublicKey[2] invokes AbortCheck while performing its DNS lookup. Setting
	// this property to 1 and requesting cancellation from the first callback causes
	// PrefetchPublicKey to return false.
	// 
	// Responsiveness and overhead: A smaller interval can make cancellation more
	// responsive, but it also increases callback overhead. Methods that finish quickly
	// may complete before any callback occurs.
	// 
	// References:
	// [1] #AbortCheck
	// [2] #PrefetchPublicKey
	void put_HeartbeatMs(int newVal);

	// Contains JSON describing the most recent call to DkimVerify[1]. The property is
	// initially an empty string and is replaced or cleared by each verification
	// attempt.
	// 
	// +------------------+-----------------------------------------------------------+
	// |      Member      |                          Meaning                          |
	// +==================+===========================================================+
	// | domain           | The signature's d= value.                                 |
	// +------------------+-----------------------------------------------------------+
	// | selector         | The signature's s= value.                                 |
	// +------------------+-----------------------------------------------------------+
	// | publicKey        | The Base64 public-key value obtained from DNS. This       |
	// |                  | member is present when verification performs an automatic |
	// |                  | DNS lookup and may be absent when a preloaded or          |
	// |                  | prefetched key is used.                                   |
	// +------------------+-----------------------------------------------------------+
	// | canonicalization | The header/body canonicalization pair from c= .           |
	// +------------------+-----------------------------------------------------------+
	// | algorithm        | The signature algorithm from a= .                         |
	// +------------------+-----------------------------------------------------------+
	// | signedHeaders    | The signed-header list from h= .                          |
	// +------------------+-----------------------------------------------------------+
	// | fromSigned       | Indicates whether the required From field name is         |
	// |                  | included in the signed-header list.                       |
	// +------------------+-----------------------------------------------------------+
	// | expectedBodyHash | The Base64 body hash obtained from the signature's bh=    |
	// |                  | tag.                                                      |
	// +------------------+-----------------------------------------------------------+
	// | computedBodyHash | The Base64 body hash computed from the received message,  |
	// |                  | applying the signature's canonicalization and optional l= |
	// |                  | body-length limit.                                        |
	// +------------------+-----------------------------------------------------------+
	// | bodyHashVerified | The string "yes" when the computed body hash matches bh=  |
	// |                  | , or "no" when it does not.                               |
	// +------------------+-----------------------------------------------------------+
	// | verified         | The string "yes" for a valid signature or "no" for a      |
	// |                  | completed verification that failed.                       |
	// +------------------+-----------------------------------------------------------+
	// 
	// {
	//   "domain": "chilkatsoft.com",
	//   "selector": "brisbane",
	//   "canonicalization": "relaxed/relaxed",
	//   "algorithm": "rsa-sha256",
	//   "signedHeaders": "from:to:subject:date:message-id",
	//   "fromSigned": "yes",
	//   "expectedBodyHash": "...",
	//   "computedBodyHash": "...",
	//   "bodyHashVerified": "yes",
	//   "verified": "yes"
	// }
	// 
	// Not every member is present in every result. For malformed signatures,
	// unsupported algorithms, missing signatures, DNS failures, or an out-of-range
	// index, the value may be an empty string, {}, or a partial object without
	// verified. Therefore, first check the return value of DkimVerify, and then treat
	// individual JSON members as optional.
	// 
	// Authentication scope: A valid DKIM signature shows that the verified signed
	// content was produced by an entity possessing the private key for the
	// authenticated domain. It does not by itself prove the identity of the human
	// sender or establish DMARC alignment.
	// 
	// References:
	// [1] #DkimVerify
	void get_VerifyInfo(CkString &str);
	// Contains JSON describing the most recent call to DkimVerify[1]. The property is
	// initially an empty string and is replaced or cleared by each verification
	// attempt.
	// 
	// +------------------+-----------------------------------------------------------+
	// |      Member      |                          Meaning                          |
	// +==================+===========================================================+
	// | domain           | The signature's d= value.                                 |
	// +------------------+-----------------------------------------------------------+
	// | selector         | The signature's s= value.                                 |
	// +------------------+-----------------------------------------------------------+
	// | publicKey        | The Base64 public-key value obtained from DNS. This       |
	// |                  | member is present when verification performs an automatic |
	// |                  | DNS lookup and may be absent when a preloaded or          |
	// |                  | prefetched key is used.                                   |
	// +------------------+-----------------------------------------------------------+
	// | canonicalization | The header/body canonicalization pair from c= .           |
	// +------------------+-----------------------------------------------------------+
	// | algorithm        | The signature algorithm from a= .                         |
	// +------------------+-----------------------------------------------------------+
	// | signedHeaders    | The signed-header list from h= .                          |
	// +------------------+-----------------------------------------------------------+
	// | fromSigned       | Indicates whether the required From field name is         |
	// |                  | included in the signed-header list.                       |
	// +------------------+-----------------------------------------------------------+
	// | expectedBodyHash | The Base64 body hash obtained from the signature's bh=    |
	// |                  | tag.                                                      |
	// +------------------+-----------------------------------------------------------+
	// | computedBodyHash | The Base64 body hash computed from the received message,  |
	// |                  | applying the signature's canonicalization and optional l= |
	// |                  | body-length limit.                                        |
	// +------------------+-----------------------------------------------------------+
	// | bodyHashVerified | The string "yes" when the computed body hash matches bh=  |
	// |                  | , or "no" when it does not.                               |
	// +------------------+-----------------------------------------------------------+
	// | verified         | The string "yes" for a valid signature or "no" for a      |
	// |                  | completed verification that failed.                       |
	// +------------------+-----------------------------------------------------------+
	// 
	// {
	//   "domain": "chilkatsoft.com",
	//   "selector": "brisbane",
	//   "canonicalization": "relaxed/relaxed",
	//   "algorithm": "rsa-sha256",
	//   "signedHeaders": "from:to:subject:date:message-id",
	//   "fromSigned": "yes",
	//   "expectedBodyHash": "...",
	//   "computedBodyHash": "...",
	//   "bodyHashVerified": "yes",
	//   "verified": "yes"
	// }
	// 
	// Not every member is present in every result. For malformed signatures,
	// unsupported algorithms, missing signatures, DNS failures, or an out-of-range
	// index, the value may be an empty string, {}, or a partial object without
	// verified. Therefore, first check the return value of DkimVerify, and then treat
	// individual JSON members as optional.
	// 
	// Authentication scope: A valid DKIM signature shows that the verified signed
	// content was produced by an entity possessing the private key for the
	// authenticated domain. It does not by itself prove the identity of the human
	// sender or establish DMARC alignment.
	// 
	// References:
	// [1] #DkimVerify
	const char *verifyInfo(void);



	// ----------------------
	// Methods
	// ----------------------
	// Creates a DKIM-Signature header and prepends it to the complete MIME message
	// stored in mimeData. The BinData is modified in place.
	// 
	// Before calling this method:
	// 
	//     * Construct the final MIME message, including all headers, transfer
	//     encodings, MIME boundaries, and body bytes.
	//     * Use RFC 5322 line endings. The MIME header and body must use CRLF and be
	//     separated by. LF-only and CR-only MIME are not normalized and cause the
	//     method to fail.
	//     * Set DkimDomain[1], DkimSelector[2], DkimAlg[3], DkimCanon[4], and
	//     DkimHeaders[5].
	//     * Load the RSA private key by calling SetDkimPrivateKey[6].
	// 
	// On success, the generated header contains v=1, a=, c=, q=dns/txt, d=, s=, h=,
	// bh=, and b=. When DkimBodyLengthCount[7] is nonzero, the header also contains
	// l=. The generated header does not include t=, x=, or i=. Signing the same bytes
	// twice with the same settings and key produced identical output.
	// 
	// An empty body, a body without a final newline, and body data containing NUL or
	// other binary bytes are accepted. An empty DkimDomain[1], an empty
	// DkimSelector[2], missing or invalid private-key state, or malformed MIME causes
	// the method to return false without changing mimeData.
	// 
	// Existing signatures: A new signature is prepended and existing DKIM-Signature
	// fields are preserved. Signature indexes therefore follow top-to-bottom order:
	// the newly added signature is index 0, and older signatures shift to higher
	// indexes. Each signature can be verified independently.
	// Sign the final representation: Send the signed bytes directly. Parsing and
	// regenerating the message, changing line endings, refolding signed headers,
	// changing transfer encodings, or editing the signed body can invalidate the
	// signature.
	// 
	// References:
	// [1] #DkimDomain
	// [2] #DkimSelector
	// [3] #DkimAlg
	// [4] #DkimCanon
	// [5] #DkimHeaders
	// [6] #SetDkimPrivateKey
	// [7] #DkimBodyLengthCount
	bool DkimSign(CkBinData &mimeData);


	// Verifies the DKIM-Signature header at zero-based sigIndex in the complete MIME
	// message stored in mimeData. Signatures are indexed in top-to-bottom header
	// order. Use NumDkimSigs[1] to obtain the count.
	// 
	// Chilkat first looks for a public key cached under the exact selector/domain
	// strings. If no exact match exists, it synchronously retrieves the TXT record at
	// selector._domainkey.domain. The method does not modify mimeData.
	// 
	// +-----------+------------------------------------------------------------------+
	// |  Return   |                             Meaning                              |
	// |   value   |                                                                  |
	// +===========+==================================================================+
	// | true    | The selected signature was successfully verified, including its  |
	// |           | body hash and signed headers.                                    |
	// +-----------+------------------------------------------------------------------+
	// | false   | The signature was invalid, or verification could not be          |
	// |           | completed because of an invalid index, malformed signature,      |
	// |           | unsupported algorithm, missing key, DNS failure, or another      |
	// |           | operational error.                                               |
	// +-----------+------------------------------------------------------------------+
	// 
	// Verification compares the signature's bh= value with the hash computed from the
	// canonicalized body. When the signature contains l=, only the indicated number of
	// canonicalized body bytes are included, so content appended after the signed
	// prefix does not cause a body-hash failure.
	// 
	// After the call, inspect VerifyInfo[2]. A completed verification failure normally
	// contains "verified":"no". A body-hash mismatch also contains
	// "bodyHashVerified":"no" with the expected and computed hashes. Operational and
	// parsing failures may leave an empty string, {}, or a partial JSON object; use
	// LastErrorText for the detailed reason.
	// 
	// Multiple signatures: Verify each signature independently. One valid signature
	// does not imply that every signature on the message is valid.
	// 
	// References:
	// [1] #NumDkimSigs
	// [2] #VerifyInfo
	bool DkimVerify(int sigIndex, CkBinData &mimeData);


	// Creates a legacy DomainKey-Signature header and prepends it to the MIME message
	// stored in mimeData. The BinData is modified in place.
	// 
	// Before calling this method, set DomainKeyDomain[1] and DomainKeySelector[2], and
	// load the matching private key by calling SetDomainKeyPrivateKey[3].
	// 
	// Legacy protocol: DomainKeys is obsolete and uses RSA with SHA-1. Use DkimSign[4]
	// for modern email authentication.
	// 
	// References:
	// [1] #DomainKeyDomain
	// [2] #DomainKeySelector
	// [3] #SetDomainKeyPrivateKey
	// [4] #DkimSign
	bool DomainKeySign(CkBinData &mimeData);


	// Verifies the legacy DomainKeys signature at zero-based index sigIndex in the
	// MIME message stored in mimeData. Use NumDomainKeySigs[1] to determine how many
	// DomainKey-Signature headers are present.
	// 
	// After the call, inspect VerifyInfo[2] for details about the signature and
	// verification result.
	// 
	// Legacy protocol: DomainKeys verification is provided for compatibility with old
	// messages and systems. Modern email authentication uses DKIM.
	// 
	// References:
	// [1] #NumDomainKeySigs
	// [2] #VerifyInfo
	bool DomainKeyVerify(int sigIndex, CkBinData &mimeData);


	// Loads and caches an RSA public key in this Dkim object for the exact selector
	// and domain strings. A later DkimVerify[1] uses the cached key when the signature
	// contains the same selector and domain; otherwise verification falls back to DNS.
	// 
	// publicKey contains a textual key representation. Supported formats include:
	// 
	//     * PEM X.509 SubjectPublicKeyInfo (-----BEGIN PUBLIC KEY-----)
	//     * PEM PKCS#1 RSA public key (-----BEGIN RSA PUBLIC KEY-----)
	//     * XML RSA key data
	//     * RSA JWK JSON
	// 
	// The selector/domain cache key is case-sensitive. Loading a key for uppercase
	// values does not satisfy a lowercase signature. A successful later load for the
	// same pair replaces the earlier key. If a later load fails because the supplied
	// key text is invalid, the previously cached key remains available.
	// 
	// Typical use: Preload a trusted public key for testing before DNS publication or
	// for a controlled verification environment. The key data is copied into the
	// cache; the input string does not need to remain available after this method
	// returns.
	// 
	// References:
	// [1] #DkimVerify
	bool LoadPublicKey(const char *selector, const char *domain, const char *publicKey);


	// Loads an RSA public key from the local file at publicKeyFilepath and caches it
	// in this Dkim object for the exact selector and domain strings. The file is read
	// during this call.
	// 
	// Supported formats include PEM X.509 SubjectPublicKeyInfo, PEM PKCS#1 RSA public
	// key, binary DER PKCS#1 RSA public key, XML RSA key data, and RSA JWK JSON. The
	// selector/domain cache key is case-sensitive.
	// 
	// A later successful load for the same selector/domain pair replaces the earlier
	// cached key. If no exact cached key is present when DkimVerify[1] runs, Chilkat
	// performs its normal DNS lookup.
	// 
	// Path and trust: publicKeyFilepath is a path in the local filesystem. Load only
	// keys from a trusted source because the cached key determines which signatures
	// are accepted for that selector and domain.
	// 
	// References:
	// [1] #DkimVerify
	bool LoadPublicKeyFile(const char *selector, const char *domain, const char *publicKeyFilepath);


	// Loads the original caller object associated with the asynchronous task. This is
	// an internal support method used by Chilkat's asynchronous task infrastructure
	// and is not normally needed in application code.
	bool LoadTaskCaller(CkTask &task);


	// Returns the number of header fields named DKIM-Signature in mimeData.
	// Header-name matching is case-insensitive. The method counts matching fields
	// without validating the signature syntax; for example, a malformed
	// DKIM-Signature: nonsense field is still counted.
	// 
	// The indexes used by DkimVerify[1] are zero-based and follow top-to-bottom header
	// order. The method returns 0 when no matching header is found, including for an
	// empty message. It does not modify mimeData.
	// 
	// Counting versus validation: This method is a header count, not a MIME or DKIM
	// validation step. A positive result does not mean that any counted signature is
	// well formed or verifiable.
	// 
	// References:
	// [1] #DkimVerify
	int NumDkimSigs(CkBinData &mimeData);


	// Returns the number of legacy DomainKey-Signature header fields found in the MIME
	// message stored in mimeData. Signature indexes passed to DomainKeyVerify[1] are
	// zero-based and range from 0 through one less than this count.
	// Legacy protocol: This count does not include modern DKIM-Signature headers. Use
	// NumDkimSigs[2] for DKIM.
	// 
	// References:
	// [1] #DomainKeyVerify
	// [2] #NumDkimSigs
	int NumDomainKeySigs(CkBinData &mimeData);


	// Retrieves the DKIM public key from DNS and caches it in this Dkim object for the
	// exact selector and domain strings. The TXT lookup is made
	// for:selector._domainkey.domain
	// 
	// The method returns true when the DNS lookup and public-key loading succeed.
	// Repeated calls for a cached pair can complete without another observable lookup.
	// A successful prefetch replaces an existing manually loaded key for the same
	// selector/domain pair.
	// 
	// DkimVerify[1] also performs this DNS lookup automatically when no exact cached
	// key is available. Prefetching is useful when several messages will be verified
	// for the same selector and domain.
	// 
	// Cancellation: This method supports AbortCheck[2] callbacks according to
	// HeartbeatMs[3]. When the callback requests cancellation, the method returns
	// false and the DNS lookup is aborted.
	// Key rotation: The selector identifies a particular published key. When a sender
	// begins using a new selector, prefetch the new selector separately.
	// 
	// References:
	// [1] #DkimVerify
	// [2] #AbortCheck
	// [3] #HeartbeatMs
	bool PrefetchPublicKey(const char *selector, const char *domain);

	// Retrieves the DKIM public key from DNS and caches it in this Dkim object for the
	// exact selector and domain strings. The TXT lookup is made
	// for:selector._domainkey.domain
	// 
	// The method returns true when the DNS lookup and public-key loading succeed.
	// Repeated calls for a cached pair can complete without another observable lookup.
	// A successful prefetch replaces an existing manually loaded key for the same
	// selector/domain pair.
	// 
	// DkimVerify[1] also performs this DNS lookup automatically when no exact cached
	// key is available. Prefetching is useful when several messages will be verified
	// for the same selector and domain.
	// 
	// Cancellation: This method supports AbortCheck[2] callbacks according to
	// HeartbeatMs[3]. When the callback requests cancellation, the method returns
	// false and the DNS lookup is aborted.
	// Key rotation: The selector identifies a particular published key. When a sender
	// begins using a new selector, prefetch the new selector separately.
	// 
	// References:
	// [1] #DkimVerify
	// [2] #AbortCheck
	// [3] #HeartbeatMs
	CkTask *PrefetchPublicKeyAsync(const char *selector, const char *domain);


	// Copies the RSA key from privateKey into this object for subsequent calls to
	// DkimSign[1]. The source PrivateKey object may be destroyed after this method
	// returns successfully, and the configured key can be reused for multiple
	// signatures.
	// 
	// A later successful call replaces the previously configured signing key. A failed
	// call with an empty or unrecognized key clears the usable signing-key state; a
	// subsequent DkimSign fails until a valid key is set again.
	// 
	// Key matching: The private key must correspond to the public key published at
	// selector._domainkey.domain, using DkimSelector[2] and DkimDomain[3]. This method
	// does not check DNS or confirm the match.
	// 
	// References:
	// [1] #DkimSign
	// [2] #DkimSelector
	// [3] #DkimDomain
	bool SetDkimPrivateKey(CkPrivateKey &privateKey);


	// Associates the RSA privateKey with this object for subsequent calls to
	// DomainKeySign[1].
	// Legacy protocol: This method is for obsolete DomainKeys signing. New
	// applications should use SetDkimPrivateKey[2] and DkimSign[3].
	// 
	// References:
	// [1] #DomainKeySign
	// [2] #SetDkimPrivateKey
	// [3] #DkimSign
	bool SetDomainKeyPrivateKey(CkPrivateKey &privateKey);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
