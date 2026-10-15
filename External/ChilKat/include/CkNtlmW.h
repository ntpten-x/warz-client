// CkNtlmW.h: interface for the CkNtlmW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#ifndef _CkNtlmW_H
#define _CkNtlmW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"




#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkNtlmW
class CK_VISIBLE_PUBLIC CkNtlmW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkNtlmW(const CkNtlmW &);
	CkNtlmW &operator=(const CkNtlmW &);

    public:
	CkNtlmW(void);
	virtual ~CkNtlmW(void);

	

	static CkNtlmW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Specifies the 8-byte client challenge used when generating the Type 3
	// authenticate message. Because this property is a string, the bytes are
	// represented using EncodingMode. For example, when EncodingMode is hex, set this
	// property to exactly 16 hexadecimal characters.
	// 
	// Setting this property is optional. If it is empty when GenType3 is called,
	// Chilkat generates eight random bytes automatically.
	// 
	// Security note: A client challenge is a nonce, not a password or encryption key.
	// Use a fresh unpredictable value for each authentication exchange; do not
	// deliberately reuse a fixed challenge in production.
	void get_ClientChallenge(CkString &str);
	// Specifies the 8-byte client challenge used when generating the Type 3
	// authenticate message. Because this property is a string, the bytes are
	// represented using EncodingMode. For example, when EncodingMode is hex, set this
	// property to exactly 16 hexadecimal characters.
	// 
	// Setting this property is optional. If it is empty when GenType3 is called,
	// Chilkat generates eight random bytes automatically.
	// 
	// Security note: A client challenge is a nonce, not a password or encryption key.
	// Use a fresh unpredictable value for each authentication exchange; do not
	// deliberately reuse a fixed challenge in production.
	const wchar_t *clientChallenge(void);
	// Specifies the 8-byte client challenge used when generating the Type 3
	// authenticate message. Because this property is a string, the bytes are
	// represented using EncodingMode. For example, when EncodingMode is hex, set this
	// property to exactly 16 hexadecimal characters.
	// 
	// Setting this property is optional. If it is empty when GenType3 is called,
	// Chilkat generates eight random bytes automatically.
	// 
	// Security note: A client challenge is a nonce, not a password or encryption key.
	// Use a fresh unpredictable value for each authentication exchange; do not
	// deliberately reuse a fixed challenge in production.
	void put_ClientChallenge(const wchar_t *newVal);

	// Specifies the server's DNS computer name for inclusion in the
	// MsvAvDnsComputerName entry of the Type 2 message's TargetInfo block.
	// 
	// This property is optional and is used by server-side code when constructing the
	// TargetInfo AV-pair sequence in a Type 2 challenge message.
	// 
	// If any of the optional target-information name properties are supplied, Chilkat
	// requires both NetBiosComputerName and NetBiosDomainName to be set.
	// 
	// NTLMv2 background: Target information is sent by the server and incorporated
	// into the NTLMv2 response. The values should describe the actual authentication
	// target; they are not arbitrary client-supplied labels.
	void get_DnsComputerName(CkString &str);
	// Specifies the server's DNS computer name for inclusion in the
	// MsvAvDnsComputerName entry of the Type 2 message's TargetInfo block.
	// 
	// This property is optional and is used by server-side code when constructing the
	// TargetInfo AV-pair sequence in a Type 2 challenge message.
	// 
	// If any of the optional target-information name properties are supplied, Chilkat
	// requires both NetBiosComputerName and NetBiosDomainName to be set.
	// 
	// NTLMv2 background: Target information is sent by the server and incorporated
	// into the NTLMv2 response. The values should describe the actual authentication
	// target; they are not arbitrary client-supplied labels.
	const wchar_t *dnsComputerName(void);
	// Specifies the server's DNS computer name for inclusion in the
	// MsvAvDnsComputerName entry of the Type 2 message's TargetInfo block.
	// 
	// This property is optional and is used by server-side code when constructing the
	// TargetInfo AV-pair sequence in a Type 2 challenge message.
	// 
	// If any of the optional target-information name properties are supplied, Chilkat
	// requires both NetBiosComputerName and NetBiosDomainName to be set.
	// 
	// NTLMv2 background: Target information is sent by the server and incorporated
	// into the NTLMv2 response. The values should describe the actual authentication
	// target; they are not arbitrary client-supplied labels.
	void put_DnsComputerName(const wchar_t *newVal);

	// Specifies the server's DNS domain name for inclusion in the MsvAvDnsDomainName
	// entry of the Type 2 message's TargetInfo block.
	// 
	// This property is optional and is used by server-side code when constructing the
	// TargetInfo AV-pair sequence in a Type 2 challenge message.
	// 
	// If any of the optional target-information name properties are supplied, Chilkat
	// requires both NetBiosComputerName and NetBiosDomainName to be set.
	// 
	// NTLMv2 background: Target information is sent by the server and incorporated
	// into the NTLMv2 response. The values should describe the actual authentication
	// target; they are not arbitrary client-supplied labels.
	void get_DnsDomainName(CkString &str);
	// Specifies the server's DNS domain name for inclusion in the MsvAvDnsDomainName
	// entry of the Type 2 message's TargetInfo block.
	// 
	// This property is optional and is used by server-side code when constructing the
	// TargetInfo AV-pair sequence in a Type 2 challenge message.
	// 
	// If any of the optional target-information name properties are supplied, Chilkat
	// requires both NetBiosComputerName and NetBiosDomainName to be set.
	// 
	// NTLMv2 background: Target information is sent by the server and incorporated
	// into the NTLMv2 response. The values should describe the actual authentication
	// target; they are not arbitrary client-supplied labels.
	const wchar_t *dnsDomainName(void);
	// Specifies the server's DNS domain name for inclusion in the MsvAvDnsDomainName
	// entry of the Type 2 message's TargetInfo block.
	// 
	// This property is optional and is used by server-side code when constructing the
	// TargetInfo AV-pair sequence in a Type 2 challenge message.
	// 
	// If any of the optional target-information name properties are supplied, Chilkat
	// requires both NetBiosComputerName and NetBiosDomainName to be set.
	// 
	// NTLMv2 background: Target information is sent by the server and incorporated
	// into the NTLMv2 response. The values should describe the actual authentication
	// target; they are not arbitrary client-supplied labels.
	void put_DnsDomainName(const wchar_t *newVal);

	// Specifies the client's domain or workgroup name. When provided, it can be
	// included in the Type 1 negotiate message and is used as the domain component of
	// the identity in the Type 3 authenticate message.
	// 
	// For a domain account, use the account's Windows domain name. For a local
	// account, the expected value depends on the authenticating server and protocol.
	// 
	// Identity note: Domain is separate from TargetName. Domain identifies the
	// account's domain in the client identity, whereas TargetName is supplied by the
	// server in the Type 2 challenge.
	void get_Domain(CkString &str);
	// Specifies the client's domain or workgroup name. When provided, it can be
	// included in the Type 1 negotiate message and is used as the domain component of
	// the identity in the Type 3 authenticate message.
	// 
	// For a domain account, use the account's Windows domain name. For a local
	// account, the expected value depends on the authenticating server and protocol.
	// 
	// Identity note: Domain is separate from TargetName. Domain identifies the
	// account's domain in the client identity, whereas TargetName is supplied by the
	// server in the Type 2 challenge.
	const wchar_t *domain(void);
	// Specifies the client's domain or workgroup name. When provided, it can be
	// included in the Type 1 negotiate message and is used as the domain component of
	// the identity in the Type 3 authenticate message.
	// 
	// For a domain account, use the account's Windows domain name. For a local
	// account, the expected value depends on the authenticating server and protocol.
	// 
	// Identity note: Domain is separate from TargetName. Domain identifies the
	// account's domain in the client identity, whereas TargetName is supplied by the
	// server in the Type 2 challenge.
	void put_Domain(const wchar_t *newVal);

	// Controls the textual encoding used when Chilkat exposes binary NTLM values as
	// strings or accepts them from strings. This includes generated and parsed NTLM
	// message tokens and binary-valued properties such as ClientChallenge and
	// ServerChallenge.
	// 
	// The mode name is case-insensitive. Supported values include base64, modBase64,
	// base32, UU, QP, URL, hex, Q, B, url_oauth, url_rfc1738, url_rfc2396, and
	// url_rfc3986.
	// 
	// Interoperability: NTLM tokens carried in HTTP Authorization or WWW-Authenticate
	// headers are conventionally Base64 encoded. Use the same EncodingMode for both
	// the producer and consumer of a token.
	void get_EncodingMode(CkString &str);
	// Controls the textual encoding used when Chilkat exposes binary NTLM values as
	// strings or accepts them from strings. This includes generated and parsed NTLM
	// message tokens and binary-valued properties such as ClientChallenge and
	// ServerChallenge.
	// 
	// The mode name is case-insensitive. Supported values include base64, modBase64,
	// base32, UU, QP, URL, hex, Q, B, url_oauth, url_rfc1738, url_rfc2396, and
	// url_rfc3986.
	// 
	// Interoperability: NTLM tokens carried in HTTP Authorization or WWW-Authenticate
	// headers are conventionally Base64 encoded. Use the same EncodingMode for both
	// the producer and consumer of a token.
	const wchar_t *encodingMode(void);
	// Controls the textual encoding used when Chilkat exposes binary NTLM values as
	// strings or accepts them from strings. This includes generated and parsed NTLM
	// message tokens and binary-valued properties such as ClientChallenge and
	// ServerChallenge.
	// 
	// The mode name is case-insensitive. Supported values include base64, modBase64,
	// base32, UU, QP, URL, hex, Q, B, url_oauth, url_rfc1738, url_rfc2396, and
	// url_rfc3986.
	// 
	// Interoperability: NTLM tokens carried in HTTP Authorization or WWW-Authenticate
	// headers are conventionally Base64 encoded. Use the same EncodingMode for both
	// the producer and consumer of a token.
	void put_EncodingMode(const wchar_t *newVal);

	// Specifies the NTLM negotiate flags as a compact string in which each letter
	// represents one bit. The flags advertise or select character encoding, target
	// information, session security, and other protocol capabilities.
	// 
	// The default is ABCHMQ, which enables Unicode, OEM compatibility, target-name
	// request, NTLM authentication, always-sign behavior, and extended session
	// security.
	// 
	// +--------+------------+--------------------------------------------+
	// | Letter | Bit value  |            Microsoft flag name             |
	// +========+============+============================================+
	// | A      | 0x00000001 | NTLMSSP_NEGOTIATE_UNICODE                  |
	// +--------+------------+--------------------------------------------+
	// | B      | 0x00000002 | NTLM_NEGOTIATE_OEM                         |
	// +--------+------------+--------------------------------------------+
	// | C      | 0x00000004 | NTLMSSP_REQUEST_TARGET                     |
	// +--------+------------+--------------------------------------------+
	// | D      | 0x00000010 | NTLMSSP_NEGOTIATE_SIGN                     |
	// +--------+------------+--------------------------------------------+
	// | E      | 0x00000020 | NTLMSSP_NEGOTIATE_SEAL                     |
	// +--------+------------+--------------------------------------------+
	// | F      | 0x00000040 | NTLMSSP_NEGOTIATE_DATAGRAM                 |
	// +--------+------------+--------------------------------------------+
	// | G      | 0x00000080 | NTLMSSP_NEGOTIATE_LM_KEY                   |
	// +--------+------------+--------------------------------------------+
	// | H      | 0x00000200 | NTLMSSP_NEGOTIATE_NTLM                     |
	// +--------+------------+--------------------------------------------+
	// | I      | 0x00000400 | Reserved / unused                          |
	// +--------+------------+--------------------------------------------+
	// | J      | 0x00000800 | NTLMSSP_NEGOTIATE_ANONYMOUS                |
	// +--------+------------+--------------------------------------------+
	// | K      | 0x00001000 | NTLMSSP_NEGOTIATE_OEM_DOMAIN_SUPPLIED      |
	// +--------+------------+--------------------------------------------+
	// | L      | 0x00002000 | NTLMSSP_NEGOTIATE_OEM_WORKSTATION_SUPPLIED |
	// +--------+------------+--------------------------------------------+
	// | M      | 0x00008000 | NTLMSSP_NEGOTIATE_ALWAYS_SIGN              |
	// +--------+------------+--------------------------------------------+
	// | N      | 0x00010000 | NTLMSSP_TARGET_TYPE_DOMAIN                 |
	// +--------+------------+--------------------------------------------+
	// | O      | 0x00020000 | NTLMSSP_TARGET_TYPE_SERVER                 |
	// +--------+------------+--------------------------------------------+
	// | P      | 0x00040000 | Reserved / unused                          |
	// +--------+------------+--------------------------------------------+
	// | Q      | 0x00080000 | NTLMSSP_NEGOTIATE_EXTENDED_SESSIONSECURITY |
	// +--------+------------+--------------------------------------------+
	// | R      | 0x00100000 | NTLMSSP_NEGOTIATE_IDENTIFY                 |
	// +--------+------------+--------------------------------------------+
	// | S      | 0x00400000 | NTLMSSP_REQUEST_NON_NT_SESSION_KEY         |
	// +--------+------------+--------------------------------------------+
	// | T      | 0x00800000 | NTLMSSP_NEGOTIATE_TARGET_INFO              |
	// +--------+------------+--------------------------------------------+
	// | U      | 0x02000000 | NTLMSSP_NEGOTIATE_VERSION                  |
	// +--------+------------+--------------------------------------------+
	// | V      | 0x20000000 | NTLMSSP_NEGOTIATE_128                      |
	// +--------+------------+--------------------------------------------+
	// | W      | 0x40000000 | NTLMSSP_NEGOTIATE_KEY_EXCH                 |
	// +--------+------------+--------------------------------------------+
	// | X      | 0x80000000 | NTLMSSP_NEGOTIATE_56                       |
	// +--------+------------+--------------------------------------------+
	// 
	// Compatibility warning: Leave this property at its default unless a specific
	// protocol peer requires different flags and the consequences are understood. Some
	// bits are mutually dependent, some are meaningful only in particular message
	// types, and reserved bits should remain clear. Prefer SetFlag when changing a
	// single option.
	void get_Flags(CkString &str);
	// Specifies the NTLM negotiate flags as a compact string in which each letter
	// represents one bit. The flags advertise or select character encoding, target
	// information, session security, and other protocol capabilities.
	// 
	// The default is ABCHMQ, which enables Unicode, OEM compatibility, target-name
	// request, NTLM authentication, always-sign behavior, and extended session
	// security.
	// 
	// +--------+------------+--------------------------------------------+
	// | Letter | Bit value  |            Microsoft flag name             |
	// +========+============+============================================+
	// | A      | 0x00000001 | NTLMSSP_NEGOTIATE_UNICODE                  |
	// +--------+------------+--------------------------------------------+
	// | B      | 0x00000002 | NTLM_NEGOTIATE_OEM                         |
	// +--------+------------+--------------------------------------------+
	// | C      | 0x00000004 | NTLMSSP_REQUEST_TARGET                     |
	// +--------+------------+--------------------------------------------+
	// | D      | 0x00000010 | NTLMSSP_NEGOTIATE_SIGN                     |
	// +--------+------------+--------------------------------------------+
	// | E      | 0x00000020 | NTLMSSP_NEGOTIATE_SEAL                     |
	// +--------+------------+--------------------------------------------+
	// | F      | 0x00000040 | NTLMSSP_NEGOTIATE_DATAGRAM                 |
	// +--------+------------+--------------------------------------------+
	// | G      | 0x00000080 | NTLMSSP_NEGOTIATE_LM_KEY                   |
	// +--------+------------+--------------------------------------------+
	// | H      | 0x00000200 | NTLMSSP_NEGOTIATE_NTLM                     |
	// +--------+------------+--------------------------------------------+
	// | I      | 0x00000400 | Reserved / unused                          |
	// +--------+------------+--------------------------------------------+
	// | J      | 0x00000800 | NTLMSSP_NEGOTIATE_ANONYMOUS                |
	// +--------+------------+--------------------------------------------+
	// | K      | 0x00001000 | NTLMSSP_NEGOTIATE_OEM_DOMAIN_SUPPLIED      |
	// +--------+------------+--------------------------------------------+
	// | L      | 0x00002000 | NTLMSSP_NEGOTIATE_OEM_WORKSTATION_SUPPLIED |
	// +--------+------------+--------------------------------------------+
	// | M      | 0x00008000 | NTLMSSP_NEGOTIATE_ALWAYS_SIGN              |
	// +--------+------------+--------------------------------------------+
	// | N      | 0x00010000 | NTLMSSP_TARGET_TYPE_DOMAIN                 |
	// +--------+------------+--------------------------------------------+
	// | O      | 0x00020000 | NTLMSSP_TARGET_TYPE_SERVER                 |
	// +--------+------------+--------------------------------------------+
	// | P      | 0x00040000 | Reserved / unused                          |
	// +--------+------------+--------------------------------------------+
	// | Q      | 0x00080000 | NTLMSSP_NEGOTIATE_EXTENDED_SESSIONSECURITY |
	// +--------+------------+--------------------------------------------+
	// | R      | 0x00100000 | NTLMSSP_NEGOTIATE_IDENTIFY                 |
	// +--------+------------+--------------------------------------------+
	// | S      | 0x00400000 | NTLMSSP_REQUEST_NON_NT_SESSION_KEY         |
	// +--------+------------+--------------------------------------------+
	// | T      | 0x00800000 | NTLMSSP_NEGOTIATE_TARGET_INFO              |
	// +--------+------------+--------------------------------------------+
	// | U      | 0x02000000 | NTLMSSP_NEGOTIATE_VERSION                  |
	// +--------+------------+--------------------------------------------+
	// | V      | 0x20000000 | NTLMSSP_NEGOTIATE_128                      |
	// +--------+------------+--------------------------------------------+
	// | W      | 0x40000000 | NTLMSSP_NEGOTIATE_KEY_EXCH                 |
	// +--------+------------+--------------------------------------------+
	// | X      | 0x80000000 | NTLMSSP_NEGOTIATE_56                       |
	// +--------+------------+--------------------------------------------+
	// 
	// Compatibility warning: Leave this property at its default unless a specific
	// protocol peer requires different flags and the consequences are understood. Some
	// bits are mutually dependent, some are meaningful only in particular message
	// types, and reserved bits should remain clear. Prefer SetFlag when changing a
	// single option.
	const wchar_t *flags(void);
	// Specifies the NTLM negotiate flags as a compact string in which each letter
	// represents one bit. The flags advertise or select character encoding, target
	// information, session security, and other protocol capabilities.
	// 
	// The default is ABCHMQ, which enables Unicode, OEM compatibility, target-name
	// request, NTLM authentication, always-sign behavior, and extended session
	// security.
	// 
	// +--------+------------+--------------------------------------------+
	// | Letter | Bit value  |            Microsoft flag name             |
	// +========+============+============================================+
	// | A      | 0x00000001 | NTLMSSP_NEGOTIATE_UNICODE                  |
	// +--------+------------+--------------------------------------------+
	// | B      | 0x00000002 | NTLM_NEGOTIATE_OEM                         |
	// +--------+------------+--------------------------------------------+
	// | C      | 0x00000004 | NTLMSSP_REQUEST_TARGET                     |
	// +--------+------------+--------------------------------------------+
	// | D      | 0x00000010 | NTLMSSP_NEGOTIATE_SIGN                     |
	// +--------+------------+--------------------------------------------+
	// | E      | 0x00000020 | NTLMSSP_NEGOTIATE_SEAL                     |
	// +--------+------------+--------------------------------------------+
	// | F      | 0x00000040 | NTLMSSP_NEGOTIATE_DATAGRAM                 |
	// +--------+------------+--------------------------------------------+
	// | G      | 0x00000080 | NTLMSSP_NEGOTIATE_LM_KEY                   |
	// +--------+------------+--------------------------------------------+
	// | H      | 0x00000200 | NTLMSSP_NEGOTIATE_NTLM                     |
	// +--------+------------+--------------------------------------------+
	// | I      | 0x00000400 | Reserved / unused                          |
	// +--------+------------+--------------------------------------------+
	// | J      | 0x00000800 | NTLMSSP_NEGOTIATE_ANONYMOUS                |
	// +--------+------------+--------------------------------------------+
	// | K      | 0x00001000 | NTLMSSP_NEGOTIATE_OEM_DOMAIN_SUPPLIED      |
	// +--------+------------+--------------------------------------------+
	// | L      | 0x00002000 | NTLMSSP_NEGOTIATE_OEM_WORKSTATION_SUPPLIED |
	// +--------+------------+--------------------------------------------+
	// | M      | 0x00008000 | NTLMSSP_NEGOTIATE_ALWAYS_SIGN              |
	// +--------+------------+--------------------------------------------+
	// | N      | 0x00010000 | NTLMSSP_TARGET_TYPE_DOMAIN                 |
	// +--------+------------+--------------------------------------------+
	// | O      | 0x00020000 | NTLMSSP_TARGET_TYPE_SERVER                 |
	// +--------+------------+--------------------------------------------+
	// | P      | 0x00040000 | Reserved / unused                          |
	// +--------+------------+--------------------------------------------+
	// | Q      | 0x00080000 | NTLMSSP_NEGOTIATE_EXTENDED_SESSIONSECURITY |
	// +--------+------------+--------------------------------------------+
	// | R      | 0x00100000 | NTLMSSP_NEGOTIATE_IDENTIFY                 |
	// +--------+------------+--------------------------------------------+
	// | S      | 0x00400000 | NTLMSSP_REQUEST_NON_NT_SESSION_KEY         |
	// +--------+------------+--------------------------------------------+
	// | T      | 0x00800000 | NTLMSSP_NEGOTIATE_TARGET_INFO              |
	// +--------+------------+--------------------------------------------+
	// | U      | 0x02000000 | NTLMSSP_NEGOTIATE_VERSION                  |
	// +--------+------------+--------------------------------------------+
	// | V      | 0x20000000 | NTLMSSP_NEGOTIATE_128                      |
	// +--------+------------+--------------------------------------------+
	// | W      | 0x40000000 | NTLMSSP_NEGOTIATE_KEY_EXCH                 |
	// +--------+------------+--------------------------------------------+
	// | X      | 0x80000000 | NTLMSSP_NEGOTIATE_56                       |
	// +--------+------------+--------------------------------------------+
	// 
	// Compatibility warning: Leave this property at its default unless a specific
	// protocol peer requires different flags and the consequences are understood. Some
	// bits are mutually dependent, some are meaningful only in particular message
	// types, and reserved bits should remain clear. Prefer SetFlag when changing a
	// single option.
	void put_Flags(const wchar_t *newVal);

	// Specifies the server's NetBIOS computer name for inclusion in the
	// MsvAvNbComputerName entry of the Type 2 message's TargetInfo block.
	// 
	// This property is optional and is used by server-side code when constructing the
	// TargetInfo AV-pair sequence in a Type 2 challenge message.
	// 
	// If any of the optional target-information name properties are supplied, Chilkat
	// requires both NetBiosComputerName and NetBiosDomainName to be set.
	// 
	// NTLMv2 background: Target information is sent by the server and incorporated
	// into the NTLMv2 response. The values should describe the actual authentication
	// target; they are not arbitrary client-supplied labels.
	void get_NetBiosComputerName(CkString &str);
	// Specifies the server's NetBIOS computer name for inclusion in the
	// MsvAvNbComputerName entry of the Type 2 message's TargetInfo block.
	// 
	// This property is optional and is used by server-side code when constructing the
	// TargetInfo AV-pair sequence in a Type 2 challenge message.
	// 
	// If any of the optional target-information name properties are supplied, Chilkat
	// requires both NetBiosComputerName and NetBiosDomainName to be set.
	// 
	// NTLMv2 background: Target information is sent by the server and incorporated
	// into the NTLMv2 response. The values should describe the actual authentication
	// target; they are not arbitrary client-supplied labels.
	const wchar_t *netBiosComputerName(void);
	// Specifies the server's NetBIOS computer name for inclusion in the
	// MsvAvNbComputerName entry of the Type 2 message's TargetInfo block.
	// 
	// This property is optional and is used by server-side code when constructing the
	// TargetInfo AV-pair sequence in a Type 2 challenge message.
	// 
	// If any of the optional target-information name properties are supplied, Chilkat
	// requires both NetBiosComputerName and NetBiosDomainName to be set.
	// 
	// NTLMv2 background: Target information is sent by the server and incorporated
	// into the NTLMv2 response. The values should describe the actual authentication
	// target; they are not arbitrary client-supplied labels.
	void put_NetBiosComputerName(const wchar_t *newVal);

	// Specifies the server's NetBIOS domain name for inclusion in the
	// MsvAvNbDomainName entry of the Type 2 message's TargetInfo block.
	// 
	// This property is optional and is used by server-side code when constructing the
	// TargetInfo AV-pair sequence in a Type 2 challenge message.
	// 
	// If any of the optional target-information name properties are supplied, Chilkat
	// requires both NetBiosComputerName and NetBiosDomainName to be set.
	// 
	// NTLMv2 background: Target information is sent by the server and incorporated
	// into the NTLMv2 response. The values should describe the actual authentication
	// target; they are not arbitrary client-supplied labels.
	void get_NetBiosDomainName(CkString &str);
	// Specifies the server's NetBIOS domain name for inclusion in the
	// MsvAvNbDomainName entry of the Type 2 message's TargetInfo block.
	// 
	// This property is optional and is used by server-side code when constructing the
	// TargetInfo AV-pair sequence in a Type 2 challenge message.
	// 
	// If any of the optional target-information name properties are supplied, Chilkat
	// requires both NetBiosComputerName and NetBiosDomainName to be set.
	// 
	// NTLMv2 background: Target information is sent by the server and incorporated
	// into the NTLMv2 response. The values should describe the actual authentication
	// target; they are not arbitrary client-supplied labels.
	const wchar_t *netBiosDomainName(void);
	// Specifies the server's NetBIOS domain name for inclusion in the
	// MsvAvNbDomainName entry of the Type 2 message's TargetInfo block.
	// 
	// This property is optional and is used by server-side code when constructing the
	// TargetInfo AV-pair sequence in a Type 2 challenge message.
	// 
	// If any of the optional target-information name properties are supplied, Chilkat
	// requires both NetBiosComputerName and NetBiosDomainName to be set.
	// 
	// NTLMv2 background: Target information is sent by the server and incorporated
	// into the NTLMv2 response. The values should describe the actual authentication
	// target; they are not arbitrary client-supplied labels.
	void put_NetBiosDomainName(const wchar_t *newVal);

	// Selects the challenge-response algorithm used to generate and verify the
	// authentication response.
	// 
	// +-------+-------------------------------------------------------------+
	// | Value |                          Behavior                           |
	// +=======+=============================================================+
	// | 1     | Use NTLMv1. This is the default for backward compatibility. |
	// +-------+-------------------------------------------------------------+
	// | 2     | Use NTLMv2.                                                 |
	// +-------+-------------------------------------------------------------+
	// 
	// The client and server must use compatible response algorithms. This setting is
	// not negotiated by the three NTLM messages.
	// 
	// Security recommendation: Set this property to 2 for modern deployments. NTLMv1
	// is obsolete and has been removed from Windows 11 version 24H2 and Windows Server
	// 2025. Use NTLM only where compatibility requires it; Kerberos through Negotiate
	// is preferred in Active Directory environments.
	int get_NtlmVersion(void);
	// Selects the challenge-response algorithm used to generate and verify the
	// authentication response.
	// 
	// +-------+-------------------------------------------------------------+
	// | Value |                          Behavior                           |
	// +=======+=============================================================+
	// | 1     | Use NTLMv1. This is the default for backward compatibility. |
	// +-------+-------------------------------------------------------------+
	// | 2     | Use NTLMv2.                                                 |
	// +-------+-------------------------------------------------------------+
	// 
	// The client and server must use compatible response algorithms. This setting is
	// not negotiated by the three NTLM messages.
	// 
	// Security recommendation: Set this property to 2 for modern deployments. NTLMv1
	// is obsolete and has been removed from Windows 11 version 24H2 and Windows Server
	// 2025. Use NTLM only where compatibility requires it; Kerberos through Negotiate
	// is preferred in Active Directory environments.
	void put_NtlmVersion(int newVal);

	// Specifies the OEM code page used to encode NTLM text fields when Unicode
	// negotiation is disabled. The default is the local computer's OEM code page.
	// 
	// This property applies only when flag A (NTLMSSP_NEGOTIATE_UNICODE) is clear and
	// OEM encoding is selected. With the default flags, Unicode is used and this
	// setting has no effect.
	// 
	// Interoperability: Both sides must interpret OEM-encoded fields using compatible
	// code pages. Retaining Unicode negotiation avoids locale-dependent corruption of
	// usernames, domains, and workstation names.
	int get_OemCodePage(void);
	// Specifies the OEM code page used to encode NTLM text fields when Unicode
	// negotiation is disabled. The default is the local computer's OEM code page.
	// 
	// This property applies only when flag A (NTLMSSP_NEGOTIATE_UNICODE) is clear and
	// OEM encoding is selected. With the default flags, Unicode is used and this
	// setting has no effect.
	// 
	// Interoperability: Both sides must interpret OEM-encoded fields using compatible
	// code pages. Retaining Unicode negotiation avoids locale-dependent corruption of
	// usernames, domains, and workstation names.
	void put_OemCodePage(int newVal);

	// Specifies the password for UserName. Client-side code must set it before calling
	// GenType3. Server-side verification code sets it after LoadType3, typically after
	// looking up the account identified by the loaded username and domain.
	// 
	// The password itself is not placed in the Type 3 message. It is used to derive
	// the challenge-response proof.
	// 
	// Sensitive value: Treat this property as credential material. Do not log it,
	// persist it in plain text, or retain it longer than necessary. NTLM
	// challenge-response still depends on password-derived secrets and does not make
	// weak passwords safe.
	void get_Password(CkString &str);
	// Specifies the password for UserName. Client-side code must set it before calling
	// GenType3. Server-side verification code sets it after LoadType3, typically after
	// looking up the account identified by the loaded username and domain.
	// 
	// The password itself is not placed in the Type 3 message. It is used to derive
	// the challenge-response proof.
	// 
	// Sensitive value: Treat this property as credential material. Do not log it,
	// persist it in plain text, or retain it longer than necessary. NTLM
	// challenge-response still depends on password-derived secrets and does not make
	// weak passwords safe.
	const wchar_t *password(void);
	// Specifies the password for UserName. Client-side code must set it before calling
	// GenType3. Server-side verification code sets it after LoadType3, typically after
	// looking up the account identified by the loaded username and domain.
	// 
	// The password itself is not placed in the Type 3 message. It is used to derive
	// the challenge-response proof.
	// 
	// Sensitive value: Treat this property as credential material. Do not log it,
	// persist it in plain text, or retain it longer than necessary. NTLM
	// challenge-response still depends on password-derived secrets and does not make
	// weak passwords safe.
	void put_Password(const wchar_t *newVal);

	// Specifies the 8-byte server challenge carried in the Type 2 challenge message.
	// Because this property is a string, the bytes are represented using EncodingMode.
	// For example, with EncodingMode set to hex, provide exactly 16 hexadecimal
	// characters.
	// 
	// Setting this property is optional. If it is empty when GenType2 is called,
	// Chilkat generates eight random bytes automatically. Server-side verification
	// must use the same challenge that was sent to the client.
	// 
	// Security note: Generate a fresh unpredictable server challenge for each
	// authentication exchange. Reusing challenges increases exposure to replay and
	// precomputation attacks.
	void get_ServerChallenge(CkString &str);
	// Specifies the 8-byte server challenge carried in the Type 2 challenge message.
	// Because this property is a string, the bytes are represented using EncodingMode.
	// For example, with EncodingMode set to hex, provide exactly 16 hexadecimal
	// characters.
	// 
	// Setting this property is optional. If it is empty when GenType2 is called,
	// Chilkat generates eight random bytes automatically. Server-side verification
	// must use the same challenge that was sent to the client.
	// 
	// Security note: Generate a fresh unpredictable server challenge for each
	// authentication exchange. Reusing challenges increases exposure to replay and
	// precomputation attacks.
	const wchar_t *serverChallenge(void);
	// Specifies the 8-byte server challenge carried in the Type 2 challenge message.
	// Because this property is a string, the bytes are represented using EncodingMode.
	// For example, with EncodingMode set to hex, provide exactly 16 hexadecimal
	// characters.
	// 
	// Setting this property is optional. If it is empty when GenType2 is called,
	// Chilkat generates eight random bytes automatically. Server-side verification
	// must use the same challenge that was sent to the client.
	// 
	// Security note: Generate a fresh unpredictable server challenge for each
	// authentication exchange. Reusing challenges increases exposure to replay and
	// precomputation attacks.
	void put_ServerChallenge(const wchar_t *newVal);

	// Specifies the server-provided authentication target placed in the Type 2
	// challenge message. Depending on the target-type flags, it commonly identifies a
	// Windows domain or the server handling local-account authentication.
	// 
	// This is not the client account's domain; use Domain for that purpose.
	// 
	// Protocol note: The target name helps describe the authentication realm
	// advertised by the server. It does not by itself authenticate the server or
	// prevent NTLM relay attacks.
	void get_TargetName(CkString &str);
	// Specifies the server-provided authentication target placed in the Type 2
	// challenge message. Depending on the target-type flags, it commonly identifies a
	// Windows domain or the server handling local-account authentication.
	// 
	// This is not the client account's domain; use Domain for that purpose.
	// 
	// Protocol note: The target name helps describe the authentication realm
	// advertised by the server. It does not by itself authenticate the server or
	// prevent NTLM relay attacks.
	const wchar_t *targetName(void);
	// Specifies the server-provided authentication target placed in the Type 2
	// challenge message. Depending on the target-type flags, it commonly identifies a
	// Windows domain or the server handling local-account authentication.
	// 
	// This is not the client account's domain; use Domain for that purpose.
	// 
	// Protocol note: The target name helps describe the authentication realm
	// advertised by the server. It does not by itself authenticate the server or
	// prevent NTLM relay attacks.
	void put_TargetName(const wchar_t *newVal);

	// Specifies the account name to authenticate. Client-side code must set it before
	// calling GenType3. After server-side code calls LoadType3, this property contains
	// the username extracted from the received Type 3 message.
	// 
	// Use Domain separately when the account belongs to a Windows domain or workgroup.
	// 
	// Server-side rule: Treat the username and domain from a received Type 3 message
	// as untrusted input until the challenge response has been verified.
	void get_UserName(CkString &str);
	// Specifies the account name to authenticate. Client-side code must set it before
	// calling GenType3. After server-side code calls LoadType3, this property contains
	// the username extracted from the received Type 3 message.
	// 
	// Use Domain separately when the account belongs to a Windows domain or workgroup.
	// 
	// Server-side rule: Treat the username and domain from a received Type 3 message
	// as untrusted input until the challenge response has been verified.
	const wchar_t *userName(void);
	// Specifies the account name to authenticate. Client-side code must set it before
	// calling GenType3. After server-side code calls LoadType3, this property contains
	// the username extracted from the received Type 3 message.
	// 
	// Use Domain separately when the account belongs to a Windows domain or workgroup.
	// 
	// Server-side rule: Treat the username and domain from a received Type 3 message
	// as untrusted input until the challenge response has been verified.
	void put_UserName(const wchar_t *newVal);

	// Specifies the optional client workstation name. When supplied, Chilkat can
	// include it in the Type 1 negotiate message and the Type 3 authenticate message.
	// After LoadType3, it contains the workstation value reported by the client.
	// Identity note: The workstation field is descriptive client-supplied metadata. It
	// is not proof of the client's computer identity and should not be used as an
	// authorization decision by itself.
	void get_Workstation(CkString &str);
	// Specifies the optional client workstation name. When supplied, Chilkat can
	// include it in the Type 1 negotiate message and the Type 3 authenticate message.
	// After LoadType3, it contains the workstation value reported by the client.
	// Identity note: The workstation field is descriptive client-supplied metadata. It
	// is not proof of the client's computer identity and should not be used as an
	// authorization decision by itself.
	const wchar_t *workstation(void);
	// Specifies the optional client workstation name. When supplied, Chilkat can
	// include it in the Type 1 negotiate message and the Type 3 authenticate message.
	// After LoadType3, it contains the workstation value reported by the client.
	// Identity note: The workstation field is descriptive client-supplied metadata. It
	// is not proof of the client's computer identity and should not be used as an
	// authorization decision by itself.
	void put_Workstation(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Compares two encoded Type 3 authenticate messages and returns true when their
	// LM and NT challenge-response fields match. A server commonly passes the Type 3
	// message received from the client as one argument and the expected Type 3 message
	// recomputed with GenType3 as the other.
	// 
	// The messages must use the encoding selected by EncodingMode. Other Type 3
	// metadata, such as username or workstation text, is not the basis of this
	// comparison.
	// 
	// Authentication workflow: A matching response is meaningful only when the
	// expected message was generated from the original Type 2 challenge, the correct
	// account password, the same NTLM version, and the relevant loaded client fields.
	// A false result means the response fields do not match; inspect
	// LastMethodSuccess and LastErrorText if malformed input or another processing
	// error is possible.
	bool CompareType3(const wchar_t *msg1, const wchar_t *msg2);

	// Generates the client-to-server Type 1 Negotiate message that starts an NTLM
	// authentication exchange. The message advertises the capabilities in Flags and
	// can include the optional Domain and Workstation values.
	// 
	// The returned token is encoded according to EncodingMode. Check LastMethodSuccess
	// before using the returned string.
	// 
	// Message flow: Type 1 contains negotiation metadata; it does not contain the
	// user's password or challenge response.
	bool GenType1(CkString &outStr);
	// Generates the client-to-server Type 1 Negotiate message that starts an NTLM
	// authentication exchange. The message advertises the capabilities in Flags and
	// can include the optional Domain and Workstation values.
	// 
	// The returned token is encoded according to EncodingMode. Check LastMethodSuccess
	// before using the returned string.
	// 
	// Message flow: Type 1 contains negotiation metadata; it does not contain the
	// user's password or challenge response.
	const wchar_t *genType1(void);

	// Generates the server-to-client Type 2 Challenge message from the encoded Type 1
	// message in type1Msg. Before calling, server-side code normally sets TargetName and
	// may set ServerChallenge and the target-information name properties.
	// 
	// If ServerChallenge is empty, Chilkat generates a random 8-byte challenge. The
	// input and returned token use EncodingMode. Check LastMethodSuccess before
	// sending the result.
	// 
	// State requirement: Preserve the Type 2 message—or at minimum all state needed to
	// reproduce it—for the later server-side verification of Type 3. The expected
	// response is bound to the challenge and target information sent in this message.
	bool GenType2(const wchar_t *type1Msg, CkString &outStr);
	// Generates the server-to-client Type 2 Challenge message from the encoded Type 1
	// message in type1Msg. Before calling, server-side code normally sets TargetName and
	// may set ServerChallenge and the target-information name properties.
	// 
	// If ServerChallenge is empty, Chilkat generates a random 8-byte challenge. The
	// input and returned token use EncodingMode. Check LastMethodSuccess before
	// sending the result.
	// 
	// State requirement: Preserve the Type 2 message—or at minimum all state needed to
	// reproduce it—for the later server-side verification of Type 3. The expected
	// response is bound to the challenge and target information sent in this message.
	const wchar_t *genType2(const wchar_t *type1Msg);

	// Generates the client-to-server Type 3 Authenticate message from the encoded Type
	// 2 message in type2Msg. Client-side code must set UserName and Password; set Domain
	// and Workstation when required by the account and peer.
	// 
	// Chilkat computes the response using NtlmVersion, the server challenge and target
	// information from Type 2, and the client challenge. If ClientChallenge is empty,
	// Chilkat generates it automatically. The password itself is not transmitted.
	// 
	// The input and returned token use EncodingMode. Check LastMethodSuccess before
	// using the returned string.
	// 
	// Security limitation: NTLM proves knowledge of password-derived material but does
	// not by itself authenticate the server. Deploy it only inside a transport and
	// protocol configuration that addresses relay, channel protection, and server
	// identity.
	bool GenType3(const wchar_t *type2Msg, CkString &outStr);
	// Generates the client-to-server Type 3 Authenticate message from the encoded Type
	// 2 message in type2Msg. Client-side code must set UserName and Password; set Domain
	// and Workstation when required by the account and peer.
	// 
	// Chilkat computes the response using NtlmVersion, the server challenge and target
	// information from Type 2, and the client challenge. If ClientChallenge is empty,
	// Chilkat generates it automatically. The password itself is not transmitted.
	// 
	// The input and returned token use EncodingMode. Check LastMethodSuccess before
	// using the returned string.
	// 
	// Security limitation: NTLM proves knowledge of password-derived material but does
	// not by itself authenticate the server. Deploy it only inside a transport and
	// protocol configuration that addresses relay, channel protection, and server
	// identity.
	const wchar_t *genType3(const wchar_t *type2Msg);

	// Parses an encoded Type 3 authenticate message received by server-side code and
	// loads its client-supplied fields into this object. On success, UserName, Domain,
	// Workstation, and ClientChallenge are populated from the message.
	// 
	// This method parses the message; it does not authenticate the client. After
	// loading, look up the account's password, set Password, recompute the expected
	// Type 3 response with GenType3 using the original Type 2 message, and compare the
	// response fields with CompareType3.
	// 
	// Do not trust parsed identity fields yet: Values extracted from Type 3 are
	// controlled by the remote client. Use them only to locate the candidate account
	// until the challenge response has been verified.
	bool LoadType3(const wchar_t *type3Msg);

	// Parses an encoded Type 1 negotiate message and returns human-readable XML
	// describing its fields, including negotiation flags and any supplied domain or
	// workstation information.
	// 
	// The input token is decoded according to EncodingMode. The returned text is
	// diagnostic XML intended for inspection and troubleshooting; parsing a message
	// does not verify its authenticity. Check LastMethodSuccess before using the
	// returned string.
	// 
	bool ParseType1(const wchar_t *type1Msg, CkString &outStr);
	// Parses an encoded Type 1 negotiate message and returns human-readable XML
	// describing its fields, including negotiation flags and any supplied domain or
	// workstation information.
	// 
	// The input token is decoded according to EncodingMode. The returned text is
	// diagnostic XML intended for inspection and troubleshooting; parsing a message
	// does not verify its authenticity. Check LastMethodSuccess before using the
	// returned string.
	// 
	const wchar_t *parseType1(const wchar_t *type1Msg);

	// Parses an encoded Type 2 challenge message and returns human-readable XML
	// describing its fields, including flags, target name, server challenge, and
	// target-information AV pairs when present.
	// 
	// The input token is decoded according to EncodingMode. The returned text is
	// diagnostic XML intended for inspection and troubleshooting; parsing a message
	// does not verify its authenticity. Check LastMethodSuccess before using the
	// returned string.
	// 
	// Diagnostic sensitivity: A Type 2 message contains a live server challenge and
	// target metadata. Avoid exposing diagnostic output unnecessarily while an
	// authentication exchange is active.
	bool ParseType2(const wchar_t *type2Msg, CkString &outStr);
	// Parses an encoded Type 2 challenge message and returns human-readable XML
	// describing its fields, including flags, target name, server challenge, and
	// target-information AV pairs when present.
	// 
	// The input token is decoded according to EncodingMode. The returned text is
	// diagnostic XML intended for inspection and troubleshooting; parsing a message
	// does not verify its authenticity. Check LastMethodSuccess before using the
	// returned string.
	// 
	// Diagnostic sensitivity: A Type 2 message contains a live server challenge and
	// target metadata. Avoid exposing diagnostic output unnecessarily while an
	// authentication exchange is active.
	const wchar_t *parseType2(const wchar_t *type2Msg);

	// Parses an encoded Type 3 authenticate message and returns human-readable XML
	// describing its fields, including the reported username, domain, workstation, and
	// challenge-response data.
	// 
	// The input token is decoded according to EncodingMode. The returned text is
	// diagnostic XML intended for inspection and troubleshooting; parsing a message
	// does not verify its authenticity. Check LastMethodSuccess before using the
	// returned string.
	// 
	// Sensitive diagnostic data: The password is not present, but Type 3 contains
	// account identifiers and password-derived response material that may be useful to
	// an attacker. Do not place parsed output in public or long-lived logs.
	bool ParseType3(const wchar_t *type3Msg, CkString &outStr);
	// Parses an encoded Type 3 authenticate message and returns human-readable XML
	// describing its fields, including the reported username, domain, workstation, and
	// challenge-response data.
	// 
	// The input token is decoded according to EncodingMode. The returned text is
	// diagnostic XML intended for inspection and troubleshooting; parsing a message
	// does not verify its authenticity. Check LastMethodSuccess before using the
	// returned string.
	// 
	// Sensitive diagnostic data: The password is not present, but Type 3 contains
	// account identifiers and password-derived response material that may be useful to
	// an attacker. Do not place parsed output in public or long-lived logs.
	const wchar_t *parseType3(const wchar_t *type3Msg);

	// Turns one Chilkat flag letter on or off in Flags. flagLetter is a single letter listed
	// in the Flags table, and onOrOff is true to set the bit or false to clear it.
	// 
	// Returns true when the flag letter is accepted and the value is updated;
	// otherwise returns false.
	// 
	// Use with care: NTLM flags have dependencies and message-specific meanings.
	// Modify them only for a known interoperability requirement, and avoid enabling
	// reserved letters.
	bool SetFlag(const wchar_t *flagLetter, bool onOrOff);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
