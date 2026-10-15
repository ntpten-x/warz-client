// CkDh.h: interface for the CkDh class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkDh_H
#define _CkDh_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"




#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkDh
class CK_VISIBLE_PUBLIC CkDh  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkDh(const CkDh &);
	CkDh &operator=(const CkDh &);

    public:
	CkDh(void);
	virtual ~CkDh(void);

	static CkDh *createNew(void);
	static CkDh *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the current Diffie-Hellman generator, g. The generator is the small
	// public integer used with the prime modulus p in the modular exponentiation
	// operations that create the public exchange value and shared secret.
	// 
	// For this class, g is expected to be 2 or 5. Its value is established by
	// UseKnownPrime, GenPG, or SetPG.
	// 
	// Public parameter: The generator is not secret. Both parties must use exactly the
	// same p and g values for the exchange.
	int get_G(void);

	// Returns the current Diffie-Hellman prime modulus, p, as a hex-encoded
	// SSH1-format bignum. The value is established by UseKnownPrime, GenPG, or SetPG.
	// 
	// The modulus is a safe prime: p = 2q + 1, where q is also prime. Safe-prime
	// groups are commonly used for finite-field Diffie-Hellman because their subgroup
	// structure is well understood.
	// 
	// Encoding note: The returned string is the hexadecimal encoding of an SSH1
	// bignum, which includes the SSH1 bit-length prefix. It is not simply the
	// conventional hexadecimal representation of the integer p.
	// Public parameter: The prime modulus is not secret and may be transmitted to the
	// other party. Both parties must use the same p and g.
	void get_P(CkString &str);
	// Returns the current Diffie-Hellman prime modulus, p, as a hex-encoded
	// SSH1-format bignum. The value is established by UseKnownPrime, GenPG, or SetPG.
	// 
	// The modulus is a safe prime: p = 2q + 1, where q is also prime. Safe-prime
	// groups are commonly used for finite-field Diffie-Hellman because their subgroup
	// structure is well understood.
	// 
	// Encoding note: The returned string is the hexadecimal encoding of an SSH1
	// bignum, which includes the SSH1 bit-length prefix. It is not simply the
	// conventional hexadecimal representation of the integer p.
	// Public parameter: The prime modulus is not secret and may be transmitted to the
	// other party. Both parties must use the same p and g.
	const char *p(void);



	// ----------------------
	// Methods
	// ----------------------
	// Creates this party's public Diffie-Hellman exchange value, conventionally
	// written as E = gx mod p. Before calling this method, initialize the common
	// Diffie-Hellman parameters by calling UseKnownPrime, GenPG, or SetPG.
	// 
	// numBits (numBits) controls the size of the randomly generated private exponent
	// retained internally by this Dh object. Chilkat recommends setting it to twice
	// the desired strength of the symmetric key that will ultimately be derived. For
	// example, use 256 when the protocol will derive a 128-bit key.
	// 
	// The returned E value is a hex-encoded SSH1-format bignum. It is public and is
	// sent to the other party. The size of the eventual shared-secret integer is
	// determined primarily by p; numBits does not make the returned shared secret a
	// fixed-length symmetric key.
	// 
	// Object state: Call FindK on this same Dh object after receiving the other
	// party's exchange value. CreateE stores the corresponding private value
	// internally, and FindK needs it to compute the shared secret. Use a separate Dh
	// object for each party and generate a fresh exchange value for each session.
	// Authentication required: Basic Diffie-Hellman does not authenticate either party
	// and is vulnerable to a man-in-the-middle attack. The surrounding protocol must
	// authenticate the exchanged parameters and public values.
	// 
	// For language bindings where a string return cannot directly communicate failure,
	// check LastMethodSuccess. If it is FALSE, inspect LastErrorText.
	// 
	bool CreateE(int numBits, CkString &outStr);

	// Creates this party's public Diffie-Hellman exchange value, conventionally
	// written as E = gx mod p. Before calling this method, initialize the common
	// Diffie-Hellman parameters by calling UseKnownPrime, GenPG, or SetPG.
	// 
	// numBits (numBits) controls the size of the randomly generated private exponent
	// retained internally by this Dh object. Chilkat recommends setting it to twice
	// the desired strength of the symmetric key that will ultimately be derived. For
	// example, use 256 when the protocol will derive a 128-bit key.
	// 
	// The returned E value is a hex-encoded SSH1-format bignum. It is public and is
	// sent to the other party. The size of the eventual shared-secret integer is
	// determined primarily by p; numBits does not make the returned shared secret a
	// fixed-length symmetric key.
	// 
	// Object state: Call FindK on this same Dh object after receiving the other
	// party's exchange value. CreateE stores the corresponding private value
	// internally, and FindK needs it to compute the shared secret. Use a separate Dh
	// object for each party and generate a fresh exchange value for each session.
	// Authentication required: Basic Diffie-Hellman does not authenticate either party
	// and is vulnerable to a man-in-the-middle attack. The surrounding protocol must
	// authenticate the exchanged parameters and public values.
	// 
	// For language bindings where a string return cannot directly communicate failure,
	// check LastMethodSuccess. If it is FALSE, inspect LastErrorText.
	// 
	const char *createE(int numBits);

	// Computes the Diffie-Hellman shared secret from the other party's public exchange
	// value. E is the peer's E value, encoded as the hexadecimal representation of
	// an SSH1-format bignum.
	// 
	// This method must be called on the same Dh object that previously called CreateE.
	// Both parties must also be using the same p and g parameters. Internally, the
	// method computes K = Ex mod p, where x is the private value generated by CreateE.
	// 
	// The result is the shared-secret integer K, returned as a hex-encoded SSH1-format
	// bignum. When the exchange is performed correctly, both parties compute the same
	// value.
	// 
	// Do not use the returned text directly as an encryption key: It is an encoded
	// bignum, not a uniformly formatted symmetric key. Feed the shared-secret value
	// into the key-derivation procedure required by the protocol, together with any
	// required transcript, salt, labels, or context. Do not invent an ad hoc
	// conversion when interoperability or cryptographic security matters.
	// Key agreement is not authentication: Matching shared secrets do not by
	// themselves prove the identity of the peer. Authenticate the exchange to prevent
	// man-in-the-middle attacks.
	// 
	// For language bindings where a string return cannot directly communicate failure,
	// check LastMethodSuccess. If it is FALSE, inspect LastErrorText.
	// 
	bool FindK(const char *E, CkString &outStr);

	// Computes the Diffie-Hellman shared secret from the other party's public exchange
	// value. E is the peer's E value, encoded as the hexadecimal representation of
	// an SSH1-format bignum.
	// 
	// This method must be called on the same Dh object that previously called CreateE.
	// Both parties must also be using the same p and g parameters. Internally, the
	// method computes K = Ex mod p, where x is the private value generated by CreateE.
	// 
	// The result is the shared-secret integer K, returned as a hex-encoded SSH1-format
	// bignum. When the exchange is performed correctly, both parties compute the same
	// value.
	// 
	// Do not use the returned text directly as an encryption key: It is an encoded
	// bignum, not a uniformly formatted symmetric key. Feed the shared-secret value
	// into the key-derivation procedure required by the protocol, together with any
	// required transcript, salt, labels, or context. Do not invent an ad hoc
	// conversion when interoperability or cryptographic security matters.
	// Key agreement is not authentication: Matching shared secrets do not by
	// themselves prove the identity of the peer. Authenticate the exchange to prevent
	// man-in-the-middle attacks.
	// 
	// For language bindings where a string return cannot directly communicate failure,
	// check LastMethodSuccess. If it is FALSE, inspect LastErrorText.
	// 
	const char *findK(const char *E);

	// Generates new finite-field Diffie-Hellman parameters and stores them in this
	// object. numBits specifies the size of the safe prime p in bits, and G specifies
	// the generator g, which should be 2 or 5.
	// 
	// On success, the generated values are available through the P and G properties.
	// The prime generation and validation process is computationally expensive,
	// especially for large groups.
	// 
	// Prefer standardized groups: Most applications should use UseKnownPrime or
	// parameters mandated by the surrounding protocol instead of generating a new
	// group. Standardized groups improve interoperability and avoid the cost and risk
	// of custom parameter generation.
	// Modern key sizes: The legacy 768-, 1024-, and 1536-bit MODP groups are not
	// appropriate for new designs. Use at least a 2048-bit standardized group when
	// compatibility requires finite-field DH; a 3072-bit group is commonly selected
	// when approximately 128-bit classical security is required.
	// 
	// Returns TRUE if the parameters were generated successfully; otherwise returns
	// FALSE. Check LastErrorText for failure details.
	// 
	bool GenPG(int numBits, int G);


	// Sets explicit finite-field Diffie-Hellman parameters for this object. p is
	// the prime modulus p, supplied as a hex-encoded SSH1-format bignum, and g is
	// the generator g, normally 2 or 5.
	// 
	// The method validates that the supplied values satisfy the requirements expected
	// by this Diffie-Hellman implementation. It returns TRUE if the parameters are
	// accepted; otherwise it returns FALSE.
	// 
	// Encoding requirement: p is not ordinary integer hex. It must contain the
	// hexadecimal encoding of the SSH1 bignum representation, including its bit-length
	// prefix. The P property of another Chilkat Dh object is already in the required
	// form.
	// Interoperability: Both parties must use exactly the same p and g. These values
	// are public, but untrusted or nonstandard parameters should not be accepted
	// unless the protocol explicitly permits them and their origin is authenticated.
	bool SetPG(const char *p, int g);


	// Selects one of eight built-in safe-prime MODP groups and sets the object's P and
	// G properties. index is a Chilkat selector from 1 through 8; it is not the IKE
	// group number.
	// 
	// +------+------------+------------+-----------------------+---+
	// | index | MODP group | Prime bits |      Definition       | G |
	// +======+============+============+=======================+===+
	// | 1    | Group 1    | 768        | RFC 2409, section 6.1 | 2 |
	// +------+------------+------------+-----------------------+---+
	// | 2    | Group 2    | 1024       | RFC 2409, section 6.2 | 2 |
	// +------+------------+------------+-----------------------+---+
	// | 3    | Group 5    | 1536       | RFC 3526, section 2   | 2 |
	// +------+------------+------------+-----------------------+---+
	// | 4    | Group 14   | 2048       | RFC 3526, section 3   | 2 |
	// +------+------------+------------+-----------------------+---+
	// | 5    | Group 15   | 3072       | RFC 3526, section 4   | 2 |
	// +------+------------+------------+-----------------------+---+
	// | 6    | Group 16   | 4096       | RFC 3526, section 5   | 2 |
	// +------+------------+------------+-----------------------+---+
	// | 7    | Group 17   | 6144       | RFC 3526, section 6   | 2 |
	// +------+------------+------------+-----------------------+---+
	// | 8    | Group 18   | 8192       | RFC 3526, section 7   | 2 |
	// +------+------------+------------+-----------------------+---+
	// 
	// Security guidance: Selectors 1, 2, and 3 are legacy groups and should not be
	// chosen for new systems. Selector 4 is the 2048-bit group 14; selector 5 is the
	// 3072-bit group 15 and is commonly used when approximately 128-bit classical
	// security is required. Always use the group required by the protocol or the
	// communicating peer.
	// Performance: Larger groups require more CPU time and produce larger public
	// values. Choose a group based on the required security level and interoperability
	// requirements, rather than automatically selecting the largest group.
	void UseKnownPrime(int index);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
