// CkPrng.h: interface for the CkPrng class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkPrng_H
#define _CkPrng_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkBinData;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkPrng
class CK_VISIBLE_PUBLIC CkPrng  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkPrng(const CkPrng &);
	CkPrng &operator=(const CkPrng &);

    public:
	CkPrng(void);
	virtual ~CkPrng(void);

	static CkPrng *createNew(void);
	static CkPrng *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Selects the pseudo-random number generator used by this object. The only
	// supported value is fortuna, which is also the default. Chilkat's Fortuna
	// implementation uses AES-256 for generation and SHA-256 in its entropy-processing
	// and reseeding design.
	// 
	// Compatibility note: Assigning any value other than fortuna is ignored.
	// Applications should normally leave this property unchanged.
	void get_PrngName(CkString &str);
	// Selects the pseudo-random number generator used by this object. The only
	// supported value is fortuna, which is also the default. Chilkat's Fortuna
	// implementation uses AES-256 for generation and SHA-256 in its entropy-processing
	// and reseeding design.
	// 
	// Compatibility note: Assigning any value other than fortuna is ignored.
	// Applications should normally leave this property unchanged.
	const char *prngName(void);
	// Selects the pseudo-random number generator used by this object. The only
	// supported value is fortuna, which is also the default. Chilkat's Fortuna
	// implementation uses AES-256 for generation and SHA-256 in its entropy-processing
	// and reseeding design.
	// 
	// Compatibility note: Assigning any value other than fortuna is ignored.
	// Applications should normally leave this property unchanged.
	void put_PrngName(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds caller-supplied seed material to the PRNG. entropy contains the bytes in the
	// text encoding named by encoding, such as hex, base64, or ascii. For Fortuna, the
	// decoded bytes are incorporated into the internal entropy pools and become
	// available to later reseeding.
	// 
	// This method is optional and is not the normal way an application obtains entropy
	// for the PRNG. It may be called more than once and at any point during the
	// lifetime of the object. It returns true when the input is decoded and
	// accepted, or false if the encoding is invalid or another error occurs.
	// 
	// Automatic system seeding: If no entropy has been added before the first request
	// for random output, Chilkat automatically obtains 32 bytes from the platform's
	// cryptographic system entropy source to seed the PRNG. This is the normal and
	// recommended mode of operation. Call AddEntropy only when the application has
	// additional trustworthy entropy to contribute or deliberately needs deterministic
	// seeding for testing.
	// Repeatable tests: A fresh Prng object can be seeded with the same deterministic
	// values to reproduce the same output sequence, provided the same entropy calls
	// and random-generation calls occur in the same order. Predictable seed material
	// is appropriate only for tests and debugging. Do not use it for real keys,
	// nonces, passwords, or tokens.
	bool AddEntropy(const char *entropy, const char *encoding);


	// Adds the bytes in entropy as caller-supplied seed material for the PRNG. For
	// Fortuna, the bytes are incorporated into the internal entropy pools and become
	// available to later reseeding.
	// 
	// This method is optional and is not normally needed to initialize the PRNG. It
	// may be called repeatedly. It returns true when the bytes are accepted, or
	// false if an error occurs.
	// 
	// Automatic system seeding: If no entropy has been added before the first request
	// for random output, Chilkat automatically obtains 32 bytes from the platform's
	// cryptographic system entropy source to seed the PRNG. This is the normal and
	// recommended mode of operation. Call AddEntropyBytes only when the application
	// has additional trustworthy entropy to contribute or deliberately needs
	// deterministic seeding for testing.
	// Repeatable tests: Predictable bytes can be used to reproduce an output sequence
	// on a fresh Prng object when the same calls are made in the same order. Use
	// predictable seed material only for tests and debugging, never for production
	// cryptographic values.
	bool AddEntropyBytes(CkByteData &entropy);


	// Exports a Base64-encoded value derived from the PRNG's accumulated entropy
	// pools. The internal pools are rehashed for export so the returned value is not a
	// direct disclosure of the generator state.
	// 
	// The returned value can be persisted and supplied to ImportEntropy when a later
	// process starts. For language bindings in which this method directly returns a
	// string, check LastMethodSuccess before using the result.
	// 
	// Seed-file guidance: Imported entropy can improve startup behavior, but it should
	// not be the only seed used indefinitely. After importing, also allow Chilkat to
	// obtain fresh operating-system entropy. Protect persisted entropy from
	// unauthorized modification and accidental reuse across cloned systems.
	bool ExportEntropy(CkString &outStr);

	// Exports a Base64-encoded value derived from the PRNG's accumulated entropy
	// pools. The internal pools are rehashed for export so the returned value is not a
	// direct disclosure of the generator state.
	// 
	// The returned value can be persisted and supplied to ImportEntropy when a later
	// process starts. For language bindings in which this method directly returns a
	// string, check LastMethodSuccess before using the result.
	// 
	// Seed-file guidance: Imported entropy can improve startup behavior, but it should
	// not be the only seed used indefinitely. After importing, also allow Chilkat to
	// obtain fresh operating-system entropy. Protect persisted entropy from
	// unauthorized modification and accidental reuse across cloned systems.
	const char *exportEntropy(void);

	// Generates a Firebase-compatible push ID. A push ID is a 20-character identifier
	// built from a 48-bit millisecond timestamp followed by 72 bits of randomness,
	// encoded with Firebase's ordered 64-character alphabet.
	// 
	// The timestamp prefix makes push IDs sort approximately by creation time, while
	// the random portion makes collisions highly unlikely across independent clients.
	// For language bindings in which this method directly returns a string, check
	// LastMethodSuccess before using the result.
	// 
	// Not a secret: A push ID is an identifier, not an authentication token. Its
	// prefix reveals approximate creation time, and uniqueness is probabilistic rather
	// than an absolute guarantee.
	bool FirebasePushId(CkString &outStr);

	// Generates a Firebase-compatible push ID. A push ID is a 20-character identifier
	// built from a 48-bit millisecond timestamp followed by 72 bits of randomness,
	// encoded with Firebase's ordered 64-character alphabet.
	// 
	// The timestamp prefix makes push IDs sort approximately by creation time, while
	// the random portion makes collisions highly unlikely across independent clients.
	// For language bindings in which this method directly returns a string, check
	// LastMethodSuccess before using the result.
	// 
	// Not a secret: A push ID is an identifier, not an authentication token. Its
	// prefix reveals approximate creation time, and uniqueness is probabilistic rather
	// than an absolute guarantee.
	const char *firebasePushId(void);

	// Generates numBytes random bytes and returns those bytes as text using the encoding
	// named by encoding, such as hex, base64, or base64url. numBytes is the number of binary
	// bytes before text encoding; it is not the number of output characters.
	// 
	// If no entropy has been added before the first request for random output, Chilkat
	// automatically obtains 32 bytes from the platform's cryptographic system entropy
	// source to seed the PRNG.
	// 
	// For language bindings in which this method directly returns a string, check
	// LastMethodSuccess before using the result.
	// 
	// Encoding does not add entropy: Hex, Base64, and other encodings represent the
	// same random bytes in different textual forms. Choose numBytes from the security
	// requirement of the key, nonce, salt, or token—not from the desired text length.
	bool GenRandom(int numBytes, const char *encoding, CkString &outStr);

	// Generates numBytes random bytes and returns those bytes as text using the encoding
	// named by encoding, such as hex, base64, or base64url. numBytes is the number of binary
	// bytes before text encoding; it is not the number of output characters.
	// 
	// If no entropy has been added before the first request for random output, Chilkat
	// automatically obtains 32 bytes from the platform's cryptographic system entropy
	// source to seed the PRNG.
	// 
	// For language bindings in which this method directly returns a string, check
	// LastMethodSuccess before using the result.
	// 
	// Encoding does not add entropy: Hex, Base64, and other encodings represent the
	// same random bytes in different textual forms. Choose numBytes from the security
	// requirement of the key, nonce, salt, or token—not from the desired text length.
	const char *genRandom(int numBytes, const char *encoding);

	// Generates numBytes random bytes and appends them to the existing contents of the
	// BinData object passed in bd. The destination is not cleared before the bytes
	// are added.
	// 
	// If no entropy has been added before the first request for random output, Chilkat
	// automatically obtains 32 bytes from the platform's cryptographic system entropy
	// source to seed the PRNG.
	// 
	// Returns true on success or false on failure.
	// 
	// Appending behavior: Call BinData.Clear first when the destination should contain
	// only the newly generated bytes.
	bool GenRandomBd(int numBytes, CkBinData &bd);


	// Generates and returns numBytes random bytes.
	// 
	// If no entropy has been added before the first request for random output, Chilkat
	// automatically obtains 32 bytes from the platform's cryptographic system entropy
	// source to seed the PRNG.
	// 
	// In language bindings where byte-returning methods use LastMethodSuccess, verify
	// that property before using the returned bytes.
	// 
	bool GenRandomBytes(int numBytes, CkByteData &outBytes);


	// Requests numBytes bytes from the platform's cryptographic system entropy source and
	// returns them using the text encoding named by encoding. This obtains system-provided
	// random seed material directly; it is different from asking the Fortuna generator
	// to expand its current state with GenRandom.
	// 
	// For seeding this PRNG, 32 bytes normally provide the full 256-bit seed input
	// expected by the implementation. Applications may request another amount when a
	// protocol specifically requires raw bytes from the system source.
	// 
	// For language bindings in which this method directly returns a string, check
	// LastMethodSuccess before using the result.
	// 
	// Usually unnecessary: The simplest secure use is to call a random-generation
	// method directly. If no entropy was added explicitly, Chilkat automatically
	// obtains 32 bytes of system entropy on the first generation request.
	bool GetEntropy(int numBytes, const char *encoding, CkString &outStr);

	// Requests numBytes bytes from the platform's cryptographic system entropy source and
	// returns them using the text encoding named by encoding. This obtains system-provided
	// random seed material directly; it is different from asking the Fortuna generator
	// to expand its current state with GenRandom.
	// 
	// For seeding this PRNG, 32 bytes normally provide the full 256-bit seed input
	// expected by the implementation. Applications may request another amount when a
	// protocol specifically requires raw bytes from the system source.
	// 
	// For language bindings in which this method directly returns a string, check
	// LastMethodSuccess before using the result.
	// 
	// Usually unnecessary: The simplest secure use is to call a random-generation
	// method directly. If no entropy was added explicitly, Chilkat automatically
	// obtains 32 bytes of system entropy on the first generation request.
	const char *getEntropy(int numBytes, const char *encoding);
	// Requests numBytes bytes from the platform's cryptographic system entropy source and
	// returns them using the text encoding named by encoding. This obtains system-provided
	// random seed material directly; it is different from asking the Fortuna generator
	// to expand its current state with GenRandom.
	// 
	// For seeding this PRNG, 32 bytes normally provide the full 256-bit seed input
	// expected by the implementation. Applications may request another amount when a
	// protocol specifically requires raw bytes from the system source.
	// 
	// For language bindings in which this method directly returns a string, check
	// LastMethodSuccess before using the result.
	// 
	// Usually unnecessary: The simplest secure use is to call a random-generation
	// method directly. If no entropy was added explicitly, Chilkat automatically
	// obtains 32 bytes of system entropy on the first generation request.
	const char *entropy(int numBytes, const char *encoding);


	// Requests and returns numBytes bytes from the platform's cryptographic system entropy
	// source. This obtains system-provided random seed material directly rather than
	// expanding the current Fortuna state.
	// 
	// For seeding this PRNG, 32 bytes normally provide the full 256-bit seed input
	// expected by the implementation. In language bindings where byte-returning
	// methods use LastMethodSuccess, verify that property before using the returned
	// bytes.
	// 
	// Usually unnecessary: Random-generation methods automatically seed the object
	// from the operating system on first use when the application has not supplied
	// entropy.
	bool GetEntropyBytes(int numBytes, CkByteData &outBytes);


	// Imports the Base64-encoded entropy value previously returned by ExportEntropy.
	// The imported material is supplied to the PRNG for use in its entropy and
	// reseeding process.
	// 
	// Returns true if the value is valid and imported successfully. Returns false
	// if it cannot be decoded or imported; check LastErrorText for details.
	// 
	// Recommended startup sequence: Import persisted entropy before the first
	// random-generation call, then mix in fresh system entropy or allow the first
	// generation call to perform Chilkat's automatic system seeding.
	bool ImportEntropy(const char *entropy);


	// Returns a pseudorandom integer in the inclusive range from low through high.
	// For example, RandomInt(4, 8) can return 4, 5, 6, 7, or 8.
	// 
	// The caller should ensure that low is less than or equal to high.
	// 
	// Cryptographic material: Use GenRandom, GenRandomBytes, or GenRandomBd when a
	// protocol requires an exact number of random bytes. Do not assemble keys or
	// nonces from decimal random integers unless the protocol explicitly defines that
	// representation.
	int RandomInt(int low, int high);


	// Generates a password of exactly length characters while applying the requested
	// composition rules:
	// 
	// +----------+-------------------------------------------------------------------+
	// | Argument |                              Effect                               |
	// +==========+===================================================================+
	// | mustIncludeDigit     | When true, require at least one digit from 0-9 .                |
	// +----------+-------------------------------------------------------------------+
	// | upperAndLowercase     | When true, require at least one lowercase and at least one      |
	// |          | uppercase US-ASCII letter.                                        |
	// +----------+-------------------------------------------------------------------+
	// | mustHaveOneOf     | When nonempty, require at least one character from this supplied  |
	// |          | set, such as !@#$% .                                              |
	// +----------+-------------------------------------------------------------------+
	// | excludeChars     | Exclude every listed character from the generated password. This  |
	// |          | is useful for ambiguous characters such as iIlL1oO0 .             |
	// +----------+-------------------------------------------------------------------+
	// 
	// The requested length must be large enough to satisfy all enabled requirements,
	// and exclusions must not remove every usable character from a required category.
	// For language bindings in which this method directly returns a string, check
	// LastMethodSuccess before using the result.
	// 
	// Password policy note: Longer randomly generated passwords generally provide more
	// security than short passwords with many composition rules. Also ensure the
	// receiving system accepts every character that may be generated.
	bool RandomPassword(int length, bool mustIncludeDigit, bool upperAndLowercase, const char *mustHaveOneOf, const char *excludeChars, CkString &outStr);

	// Generates a password of exactly length characters while applying the requested
	// composition rules:
	// 
	// +----------+-------------------------------------------------------------------+
	// | Argument |                              Effect                               |
	// +==========+===================================================================+
	// | mustIncludeDigit     | When true, require at least one digit from 0-9 .                |
	// +----------+-------------------------------------------------------------------+
	// | upperAndLowercase     | When true, require at least one lowercase and at least one      |
	// |          | uppercase US-ASCII letter.                                        |
	// +----------+-------------------------------------------------------------------+
	// | mustHaveOneOf     | When nonempty, require at least one character from this supplied  |
	// |          | set, such as !@#$% .                                              |
	// +----------+-------------------------------------------------------------------+
	// | excludeChars     | Exclude every listed character from the generated password. This  |
	// |          | is useful for ambiguous characters such as iIlL1oO0 .             |
	// +----------+-------------------------------------------------------------------+
	// 
	// The requested length must be large enough to satisfy all enabled requirements,
	// and exclusions must not remove every usable character from a required category.
	// For language bindings in which this method directly returns a string, check
	// LastMethodSuccess before using the result.
	// 
	// Password policy note: Longer randomly generated passwords generally provide more
	// security than short passwords with many composition rules. Also ensure the
	// receiving system accepts every character that may be generated.
	const char *randomPassword(int length, bool mustIncludeDigit, bool upperAndLowercase, const char *mustHaveOneOf, const char *excludeChars);

	// Generates a string of exactly length characters. The remaining arguments select
	// the character categories placed in the source alphabet:
	// 
	// +----------+---------------------------------------+
	// | Argument |              When true              |
	// +==========+=======================================+
	// | bDigits     | Include digits 0-9 .                  |
	// +----------+---------------------------------------+
	// | bLower     | Include lowercase ASCII letters a-z . |
	// +----------+---------------------------------------+
	// | bUpper     | Include uppercase ASCII letters A-Z . |
	// +----------+---------------------------------------+
	// 
	// At least one character category must be enabled. The flags define the pool from
	// which each character is chosen; they do not guarantee that every enabled
	// category appears in a particular result.
	// 
	// Requirement-aware passwords: Use RandomPassword instead when the result must
	// contain at least one digit, both uppercase and lowercase letters, or a required
	// special character.
	bool RandomString(int length, bool bDigits, bool bLower, bool bUpper, CkString &outStr);

	// Generates a string of exactly length characters. The remaining arguments select
	// the character categories placed in the source alphabet:
	// 
	// +----------+---------------------------------------+
	// | Argument |              When true              |
	// +==========+=======================================+
	// | bDigits     | Include digits 0-9 .                  |
	// +----------+---------------------------------------+
	// | bLower     | Include lowercase ASCII letters a-z . |
	// +----------+---------------------------------------+
	// | bUpper     | Include uppercase ASCII letters A-Z . |
	// +----------+---------------------------------------+
	// 
	// At least one character category must be enabled. The flags define the pool from
	// which each character is chosen; they do not guarantee that every enabled
	// category appears in a particular result.
	// 
	// Requirement-aware passwords: Use RandomPassword instead when the result must
	// contain at least one digit, both uppercase and lowercase letters, or a required
	// special character.
	const char *randomString(int length, bool bDigits, bool bLower, bool bUpper);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
