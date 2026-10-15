// CkSshKey.h: interface for the CkSshKey class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.6.0

#define _CkVersion 11.6.0

#ifndef _CkSshKey_H
#define _CkSshKey_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkPkcs11;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkSshKey
class CK_VISIBLE_PUBLIC CkSshKey  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkSshKey(const CkSshKey &);
	CkSshKey &operator=(const CkSshKey &);

    public:
	CkSshKey(void);
	virtual ~CkSshKey(void);

	static CkSshKey *createNew(void);
	static CkSshKey *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Gets or sets the optional comment associated with the key.
	// 
	//     * OpenSSH public keys, RFC 4716 public keys, and PuTTY PPK files can contain
	//     a comment. Importing one of these formats sets this property from the imported
	//     text.
	//     * Importing an OpenSSH or RFC 4716 public key that has no comment sets this
	//     property to an empty string.
	//     * Changing the comment does not change the key or the value returned by
	//     GenFingerprint[1].
	//     * Exports that support comments use this value. Do not include
	//     carriage-return or line-feed characters because they are written into the
	//     exported text and can make the key file invalid.
	// 
	// OpenSSH import note: For a one-line OpenSSH public key, the first
	// whitespace-delimited word following the Base64 key data is stored as the
	// comment.
	// 
	// 
	// References:
	// [1] #GenFingerprint
	void get_Comment(CkString &str);
	// Gets or sets the optional comment associated with the key.
	// 
	//     * OpenSSH public keys, RFC 4716 public keys, and PuTTY PPK files can contain
	//     a comment. Importing one of these formats sets this property from the imported
	//     text.
	//     * Importing an OpenSSH or RFC 4716 public key that has no comment sets this
	//     property to an empty string.
	//     * Changing the comment does not change the key or the value returned by
	//     GenFingerprint[1].
	//     * Exports that support comments use this value. Do not include
	//     carriage-return or line-feed characters because they are written into the
	//     exported text and can make the key file invalid.
	// 
	// OpenSSH import note: For a one-line OpenSSH public key, the first
	// whitespace-delimited word following the Base64 key data is stored as the
	// comment.
	// 
	// 
	// References:
	// [1] #GenFingerprint
	const char *comment(void);
	// Gets or sets the optional comment associated with the key.
	// 
	//     * OpenSSH public keys, RFC 4716 public keys, and PuTTY PPK files can contain
	//     a comment. Importing one of these formats sets this property from the imported
	//     text.
	//     * Importing an OpenSSH or RFC 4716 public key that has no comment sets this
	//     property to an empty string.
	//     * Changing the comment does not change the key or the value returned by
	//     GenFingerprint[1].
	//     * Exports that support comments use this value. Do not include
	//     carriage-return or line-feed characters because they are written into the
	//     exported text and can make the key file invalid.
	// 
	// OpenSSH import note: For a one-line OpenSSH public key, the first
	// whitespace-delimited word following the Base64 key data is stored as the
	// comment.
	// 
	// 
	// References:
	// [1] #GenFingerprint
	void put_Comment(const char *newVal);

	// Indicates whether the object currently contains a DSA key.
	// 
	// Returns true for either a DSA public key or a DSA private key. Returns false
	// for RSA, ECDSA, Ed25519, or when no key is loaded. Use KeyType[1] to distinguish
	// among all supported key types.
	// 
	// 
	// References:
	// [1] #KeyType
	bool get_IsDsaKey(void);

	// Indicates whether the current key includes a private key.
	// 
	// Returns true after importing or generating a private key. Returns false for
	// a public-only key and for a newly constructed object that does not yet contain a
	// key.
	// 
	// This property describes whether private-key operations are available; it does
	// not reveal or return the private-key material.
	// 
	bool get_IsPrivateKey(void);

	// Indicates whether the object currently contains an RSA key.
	// 
	// Returns true for either an RSA public key or an RSA private key. Returns
	// false for DSA, ECDSA, Ed25519, or when no key is loaded. Use KeyType[1] to
	// distinguish among all supported key types.
	// 
	// 
	// References:
	// [1] #KeyType
	bool get_IsRsaKey(void);

	// Returns the type of key currently held by this object. A newly constructed
	// object returns none.
	// 
	// +---------+-------------------------------+
	// |  Value  |            Meaning            |
	// +=========+===============================+
	// | rsa     | RSA public or private key     |
	// +---------+-------------------------------+
	// | dsa     | DSA public or private key     |
	// +---------+-------------------------------+
	// | ecdsa   | ECDSA public or private key   |
	// +---------+-------------------------------+
	// | ed25519 | Ed25519 public or private key |
	// +---------+-------------------------------+
	// | none    | No usable key is loaded       |
	// +---------+-------------------------------+
	// 
	void get_KeyType(CkString &str);
	// Returns the type of key currently held by this object. A newly constructed
	// object returns none.
	// 
	// +---------+-------------------------------+
	// |  Value  |            Meaning            |
	// +=========+===============================+
	// | rsa     | RSA public or private key     |
	// +---------+-------------------------------+
	// | dsa     | DSA public or private key     |
	// +---------+-------------------------------+
	// | ecdsa   | ECDSA public or private key   |
	// +---------+-------------------------------+
	// | ed25519 | Ed25519 public or private key |
	// +---------+-------------------------------+
	// | none    | No usable key is loaded       |
	// +---------+-------------------------------+
	// 
	const char *keyType(void);

	// Gets or sets the password used when importing or exporting an encrypted private
	// key. The default is an empty string.
	// 
	//     * Set this property before importing an encrypted OpenSSH, PKCS #8, or PuTTY
	//     private key.
	//     * An empty or incorrect password causes an encrypted-key import to fail.
	//     * The property remains set until the application changes it; Chilkat does
	//     not automatically clear it after an import or export.
	//     * When ToOpenSshPrivateKey[1] is called with bEncrypt equal to true, an
	//     empty password produces a private key encrypted with an empty passphrase.
	//     Applications should normally require a nonempty password.
	//     * When ToPuttyPrivateKey[2] is called with bEncrypt equal to true, this
	//     property must be nonempty.
	// 
	// References:
	// [1] #ToOpenSshPrivateKey
	// [2] #ToPuttyPrivateKey
	void get_Password(CkString &str);
	// Gets or sets the password used when importing or exporting an encrypted private
	// key. The default is an empty string.
	// 
	//     * Set this property before importing an encrypted OpenSSH, PKCS #8, or PuTTY
	//     private key.
	//     * An empty or incorrect password causes an encrypted-key import to fail.
	//     * The property remains set until the application changes it; Chilkat does
	//     not automatically clear it after an import or export.
	//     * When ToOpenSshPrivateKey[1] is called with bEncrypt equal to true, an
	//     empty password produces a private key encrypted with an empty passphrase.
	//     Applications should normally require a nonempty password.
	//     * When ToPuttyPrivateKey[2] is called with bEncrypt equal to true, this
	//     property must be nonempty.
	// 
	// References:
	// [1] #ToOpenSshPrivateKey
	// [2] #ToPuttyPrivateKey
	const char *password(void);
	// Gets or sets the password used when importing or exporting an encrypted private
	// key. The default is an empty string.
	// 
	//     * Set this property before importing an encrypted OpenSSH, PKCS #8, or PuTTY
	//     private key.
	//     * An empty or incorrect password causes an encrypted-key import to fail.
	//     * The property remains set until the application changes it; Chilkat does
	//     not automatically clear it after an import or export.
	//     * When ToOpenSshPrivateKey[1] is called with bEncrypt equal to true, an
	//     empty password produces a private key encrypted with an empty passphrase.
	//     Applications should normally require a nonempty password.
	//     * When ToPuttyPrivateKey[2] is called with bEncrypt equal to true, this
	//     property must be nonempty.
	// 
	// References:
	// [1] #ToOpenSshPrivateKey
	// [2] #ToPuttyPrivateKey
	void put_Password(const char *newVal);

	// Provides optional settings for uncommon compatibility requirements. The default
	// is an empty string.
	// 
	// The value is a comma-separated list of keywords. Keyword matching is
	// case-insensitive, surrounding whitespace is ignored, and unknown keywords are
	// ignored.
	// 
	//     * DES-EDE3-CBC — When ToOpenSshPrivateKey[1] exports an encrypted
	//     traditional RSA, DSA, or ECDSA private key, use Triple-DES instead of the
	//     default AES-128-CBC encryption.
	// 
	// This option does not change Ed25519 output, which uses the modern OPENSSH
	// PRIVATE KEY container. Use legacy encryption only when required by older
	// software.
	// 
	// 
	// References:
	// [1] #ToOpenSshPrivateKey
	void get_UncommonOptions(CkString &str);
	// Provides optional settings for uncommon compatibility requirements. The default
	// is an empty string.
	// 
	// The value is a comma-separated list of keywords. Keyword matching is
	// case-insensitive, surrounding whitespace is ignored, and unknown keywords are
	// ignored.
	// 
	//     * DES-EDE3-CBC — When ToOpenSshPrivateKey[1] exports an encrypted
	//     traditional RSA, DSA, or ECDSA private key, use Triple-DES instead of the
	//     default AES-128-CBC encryption.
	// 
	// This option does not change Ed25519 output, which uses the modern OPENSSH
	// PRIVATE KEY container. Use legacy encryption only when required by older
	// software.
	// 
	// 
	// References:
	// [1] #ToOpenSshPrivateKey
	const char *uncommonOptions(void);
	// Provides optional settings for uncommon compatibility requirements. The default
	// is an empty string.
	// 
	// The value is a comma-separated list of keywords. Keyword matching is
	// case-insensitive, surrounding whitespace is ignored, and unknown keywords are
	// ignored.
	// 
	//     * DES-EDE3-CBC — When ToOpenSshPrivateKey[1] exports an encrypted
	//     traditional RSA, DSA, or ECDSA private key, use Triple-DES instead of the
	//     default AES-128-CBC encryption.
	// 
	// This option does not change Ed25519 output, which uses the modern OPENSSH
	// PRIVATE KEY container. Use legacy encryption only when required by older
	// software.
	// 
	// 
	// References:
	// [1] #ToOpenSshPrivateKey
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Loads a private key from an OpenSSH-compatible, PEM, PKCS #8, or PuTTY
	// private-key string.
	// 
	// Supported key types: RSA, DSA, ECDSA, and Ed25519.
	// 
	// +---------------------------+--------------------------------------------------+
	// |   Input representation    |            Typical boundary or header            |
	// +===========================+==================================================+
	// | Modern OpenSSH            | BEGIN OPENSSH PRIVATE KEY                        |
	// +---------------------------+--------------------------------------------------+
	// | Traditional RSA, DSA, or  | BEGIN RSA PRIVATE KEY , BEGIN DSA PRIVATE KEY ,  |
	// | ECDSA PEM                 | or BEGIN ECDSA PRIVATE KEY                       |
	// +---------------------------+--------------------------------------------------+
	// | PKCS #8                   | BEGIN PRIVATE KEY or BEGIN ENCRYPTED PRIVATE KEY |
	// +---------------------------+--------------------------------------------------+
	// | PuTTY PPK version 2 or 3  | PuTTY-User-Key-File-2 or PuTTY-User-Key-File-3   |
	// +---------------------------+--------------------------------------------------+
	// 
	// keyStr contains the key text, not a filesystem path. If the key is encrypted, set
	// Password[1] before calling this method. To read the text from a file, call
	// LoadText[2] first.
	// 
	// Chilkat tolerates a UTF-8 BOM, leading or trailing whitespace, and unrelated
	// text surrounding a PEM/OpenSSH key. If keyStr contains more than one recognized
	// private key, the first key is loaded.
	// 
	// -----BEGIN OPENSSH PRIVATE KEY-----
	// ...
	// -----END OPENSSH PRIVATE KEY-----
	// Object-state note: A successful call replaces the current key. If the call fails
	// after parsing has begun—for example, because the password is wrong or the key
	// data is damaged—the previous key is not guaranteed to remain available. Use a
	// fresh SshKey object when an application must preserve an existing key.
	// 
	// References:
	// [1] #Password
	// [2] #LoadText
	bool FromOpenSshPrivateKey(const char *keyStr);


	// Loads an SSH public key from a string.
	// 
	// The method accepts:
	// 
	//     * A one-line OpenSSH public key for RSA, DSA, ECDSA, or Ed25519.
	//     * An RFC 4716 / PuTTY SSH2 public key, which is detected automatically.
	// 
	// keyStr contains the public-key text, not a filesystem path. For a one-line key,
	// the first field is the algorithm name, the second field is the Base64 key data,
	// and the first whitespace-delimited word after the key data is stored in
	// Comment[1].
	// 
	// ssh-ed25519 AAAAC3NzaC1lZDI1NTE5AAAAI... user@example
	// 
	// A UTF-8 BOM, surrounding whitespace, CRLF, and LF line endings are accepted. If
	// multiple public-key lines are supplied, the first key is loaded.
	// 
	// authorized_keys note: keyStr must begin with the key algorithm. A complete
	// authorized_keys entry having options such as restrict or from="..." before the
	// algorithm is not accepted. Remove those options before calling this method.
	// Object-state note: A successful call replaces the current key. After a failed
	// import, do not assume the previous key and properties are unchanged.
	// 
	// References:
	// [1] #Comment
	bool FromOpenSshPublicKey(const char *keyStr);


	// Loads a private key from PuTTY PPK format. PPK versions 2 and 3 are supported.
	// 
	// If keyStr contains an OpenSSH, traditional PEM, or PKCS #8 private key instead,
	// Chilkat automatically detects and imports that format.
	// 
	//     * keyStr contains the complete key text, not a filesystem path.
	//     * If the private key is encrypted, set Password[1] before calling this
	//     method.
	//     * The PPK integrity MAC is verified.
	//     * A UTF-8 BOM is accepted. For a PPK input, the PPK header must otherwise be
	//     at the beginning of keyStr; leading whitespace or unrelated text is not accepted.
	//     * Trailing text after a single PPK is tolerated, but concatenated PPK files
	//     are not accepted.
	// PuTTY-User-Key-File-3: ssh-ed25519
	// Encryption: aes256-cbc
	// Comment: example-key
	// Public-Lines: ...
	// Object-state note: A successful call replaces the current key. If the call
	// fails, the previous key is not guaranteed to remain available.
	// 
	// References:
	// [1] #Password
	bool FromPuttyPrivateKey(const char *keyStr);


	// Loads a public key from RFC 4716 SSH2 public-key format.
	// 
	// keyStr contains the key text, not a filesystem path. RSA, DSA, ECDSA, and Ed25519
	// public keys are supported.
	// 
	// ---- BEGIN SSH2 PUBLIC KEY ----
	// Comment: "optional comment"
	// AAAAB3NzaC1yc2EAAAADAQABAAABAQ...
	// ---- END SSH2 PUBLIC KEY ----
	// 
	// The parser accepts a UTF-8 BOM, surrounding whitespace, long or continued
	// comments, and additional RFC 4716 header fields. It also tolerates unrelated
	// text before or after the key. If multiple RFC 4716 keys are supplied, the first
	// key is loaded.
	// 
	// The Comment: header, when present, is stored in Comment[1]. If it is absent, the
	// comment is empty.
	// 
	// Object-state note: A successful call replaces the current key. After a failed
	// import, do not assume the previous key and properties are unchanged.
	// 
	// References:
	// [1] #Comment
	bool FromRfc4716PublicKey(const char *keyStr);


	// Loads an SSH public or private key from an XML string.
	// 
	// xmlKey contains the XML itself, not a filesystem path. The key is public-only when
	// the XML contains only public components and is private when private components
	// are present.
	// 
	// +----------+------------------+------------------+
	// | Key type | Private-key form | Public-key form  |
	// +==========+==================+==================+
	// | RSA      | RSAKeyValue      | RSAPublicKey     |
	// +----------+------------------+------------------+
	// | DSA      | DSAKeyValue      | DSAPublicKey     |
	// +----------+------------------+------------------+
	// | ECDSA    | ECCKeyValue      | ECCPublicKey     |
	// +----------+------------------+------------------+
	// | Ed25519  | Ed25519KeyValue  | Ed25519PublicKey |
	// +----------+------------------+------------------+
	// 
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>AQAB</Exponent>
	//   ...
	// </RSAKeyValue>
	// 
	// A UTF-8 BOM, surrounding whitespace, and an XML declaration are accepted.
	// Root-element name matching is case-insensitive. These XML representations do not
	// contain the SSH comment; set Comment[1] separately when needed.
	// 
	// Object-state note: A successful call replaces the current key. After a failed
	// import, do not assume the previous key and properties are unchanged.
	// 
	// References:
	// [1] #Comment
	bool FromXml(const char *xmlKey);


	// Generates a new DSA public/private key pair.
	// 
	// numBits specifies the requested key size in bits. For maximum interoperability with
	// SSH implementations that still allow DSA, use 1024.
	// 
	// Nonstandard sizes may be accepted, and the resulting key size may differ from
	// the value requested. DSA is a legacy algorithm and should generally be avoided
	// for new systems.
	// 
	// On success, the generated private key replaces the previous key. Existing values
	// of Comment[1], Password[2], and UncommonOptions[3] are not used as
	// key-generation parameters.
	// 
	// 
	// References:
	// [1] #Comment
	// [2] #Password
	// [3] #UncommonOptions
	bool GenerateDsaKey(int numBits);


	// Generates a new ECDSA public/private key pair.
	// 
	// curveName selects the curve. Matching is case-insensitive. Accepted names include:
	// 
	//     * secp256r1, P-256, or prime256v1
	//     * secp384r1 or P-384
	//     * secp521r1 or P-521
	// 
	// An empty or unrecognized curve name causes the method to fail. If generation
	// fails, the previous key is not guaranteed to remain available.
	// 
	// On success, the generated private key replaces the previous key while the
	// writable properties remain set. P-521 is shown as 528 bits by GenFingerprint[1].
	// 
	// 
	// References:
	// [1] #GenFingerprint
	bool GenerateEcdsaKey(const char *curveName);


	// Generates a new Ed25519 public/private key pair.
	// 
	// On success, the generated private key replaces the previous key. Existing values
	// of Comment[1], Password[2], and UncommonOptions[3] remain set.
	// 
	// Ed25519 private keys are exported by ToOpenSshPrivateKey[4] using the modern
	// OPENSSH PRIVATE KEY container.
	// 
	// 
	// References:
	// [1] #Comment
	// [2] #Password
	// [3] #UncommonOptions
	// [4] #ToOpenSshPrivateKey
	bool GenerateEd25519Key(void);


	// Generates a new RSA public/private key pair.
	// 
	//     * numBits specifies the requested key size in bits. Tested supported sizes
	//     range from 512 through 4096. For new applications, use at least 2048.
	//     * The exponent argument is ignored. Chilkat always generates RSA keys using
	//     the public exponent 65537. The argument is retained for backward
	//     compatibility.
	// 
	// On success, the generated private key replaces the previous key. The writable
	// properties Comment[1], Password[2], and UncommonOptions[3] remain set to their
	// existing values.
	// 
	// If generation fails, the previous key is not guaranteed to remain available. Use
	// a fresh object when preserving an existing key is important.
	// 
	// 
	// References:
	// [1] #Comment
	// [2] #Password
	// [3] #UncommonOptions
	bool GenerateRsaKey(int numBits, int exponent);


	// Returns a printable fingerprint for the key currently held by this object.
	// 
	// The fingerprint is calculated from the public portion of the key. Therefore:
	// 
	//     * The public and private representations of the same key return the same
	//     fingerprint.
	//     * OpenSSH, PuTTY, RFC 4716, and XML representations of the same key return
	//     the same fingerprint.
	//     * Changing Comment[1] does not change the fingerprint.
	// 
	// The returned string contains the SSH algorithm name, the reported key size when
	// applicable, and a colon-separated 16-byte hexadecimal digest:
	// 
	// ssh-rsa 2048 4c:98:46:ba:46:33:ba:9e:39:11:5c:a5:a3:9c:6b:ee
	// ssh-ed25519 b7:71:3f:81:d6:fd:1d:b1:ff:87:18:63:f6:32:3f:67
	// 
	// Ed25519 has no numeric size field. A P-521 ECDSA key is reported as 528 bits
	// because of its SSH point encoding. If no usable key is loaded, an empty string
	// is returned.
	// 
	// 
	// References:
	// [1] #Comment
	bool GenFingerprint(CkString &outStr);

	// Returns a printable fingerprint for the key currently held by this object.
	// 
	// The fingerprint is calculated from the public portion of the key. Therefore:
	// 
	//     * The public and private representations of the same key return the same
	//     fingerprint.
	//     * OpenSSH, PuTTY, RFC 4716, and XML representations of the same key return
	//     the same fingerprint.
	//     * Changing Comment[1] does not change the fingerprint.
	// 
	// The returned string contains the SSH algorithm name, the reported key size when
	// applicable, and a colon-separated 16-byte hexadecimal digest:
	// 
	// ssh-rsa 2048 4c:98:46:ba:46:33:ba:9e:39:11:5c:a5:a3:9c:6b:ee
	// ssh-ed25519 b7:71:3f:81:d6:fd:1d:b1:ff:87:18:63:f6:32:3f:67
	// 
	// Ed25519 has no numeric size field. A P-521 ECDSA key is reported as 528 bits
	// because of its SSH point encoding. If no usable key is loaded, an empty string
	// is returned.
	// 
	// 
	// References:
	// [1] #Comment
	const char *genFingerprint(void);

	// Reads an entire text file and returns its contents as a string.
	// 
	// filename is the path of the file to read. This method is convenient for loading
	// ASCII-armored SSH key text before calling an import method.
	// 
	//     * If the file does not exist or cannot be read, the method returns null.
	//     * This is a text operation, not a byte-preserving binary read. Non-ASCII
	//     data may be converted according to the platform and Chilkat string-encoding
	//     settings.
	//     * For exact binary bytes, use a binary-oriented class such as BinData or
	//     FileAccess instead.
	bool LoadText(const char *filename, CkString &outStr);

	// Reads an entire text file and returns its contents as a string.
	// 
	// filename is the path of the file to read. This method is convenient for loading
	// ASCII-armored SSH key text before calling an import method.
	// 
	//     * If the file does not exist or cannot be read, the method returns null.
	//     * This is a text operation, not a byte-preserving binary read. Non-ASCII
	//     data may be converted according to the platform and Chilkat string-encoding
	//     settings.
	//     * For exact binary bytes, use a binary-oriented class such as BinData or
	//     FileAccess instead.
	const char *loadText(const char *filename);

	// Writes a string to a text file.
	// 
	//     * strToSave contains the text to write.
	//     * filename is the destination path.
	//     * An existing file is overwritten.
	//     * Missing parent directories are not created automatically.
	//     * This is a text operation. ASCII key text is written as expected, but
	//     arbitrary non-ASCII bytes should be written with a binary-oriented API.
	// 
	// This method is commonly used to save the strings returned by the key-export
	// methods.
	// 
	bool SaveText(const char *strToSave, const char *filename);


	// Exports the current private key as an OpenSSH-compatible private-key string.
	// 
	//     * bEncrypt equal to false returns an unencrypted private key.
	//     * bEncrypt equal to true returns an encrypted private key using Password[1].
	//     * If the object contains only a public key, the method fails.
	// 
	// +----------+---------------------------+
	// | Key type |     Output container      |
	// +==========+===========================+
	// | RSA      | BEGIN RSA PRIVATE KEY     |
	// +----------+---------------------------+
	// | DSA      | BEGIN DSA PRIVATE KEY     |
	// +----------+---------------------------+
	// | ECDSA    | BEGIN ECDSA PRIVATE KEY   |
	// +----------+---------------------------+
	// | Ed25519  | BEGIN OPENSSH PRIVATE KEY |
	// +----------+---------------------------+
	// 
	// Encrypted traditional RSA, DSA, and ECDSA output uses AES-128-CBC by default.
	// See UncommonOptions[2] for the legacy Triple-DES option.
	// 
	// Empty-password warning: When bEncrypt is true and Password[1] is empty, the method
	// still returns a key encrypted with an empty passphrase.
	// 
	// The output uses CRLF line endings and ends with CRLF.
	// 
	// -----BEGIN RSA PRIVATE KEY-----
	// ...
	// -----END RSA PRIVATE KEY-----
	// 
	// References:
	// [1] #Password
	// [2] #UncommonOptions
	bool ToOpenSshPrivateKey(bool bEncrypt, CkString &outStr);

	// Exports the current private key as an OpenSSH-compatible private-key string.
	// 
	//     * bEncrypt equal to false returns an unencrypted private key.
	//     * bEncrypt equal to true returns an encrypted private key using Password[1].
	//     * If the object contains only a public key, the method fails.
	// 
	// +----------+---------------------------+
	// | Key type |     Output container      |
	// +==========+===========================+
	// | RSA      | BEGIN RSA PRIVATE KEY     |
	// +----------+---------------------------+
	// | DSA      | BEGIN DSA PRIVATE KEY     |
	// +----------+---------------------------+
	// | ECDSA    | BEGIN ECDSA PRIVATE KEY   |
	// +----------+---------------------------+
	// | Ed25519  | BEGIN OPENSSH PRIVATE KEY |
	// +----------+---------------------------+
	// 
	// Encrypted traditional RSA, DSA, and ECDSA output uses AES-128-CBC by default.
	// See UncommonOptions[2] for the legacy Triple-DES option.
	// 
	// Empty-password warning: When bEncrypt is true and Password[1] is empty, the method
	// still returns a key encrypted with an empty passphrase.
	// 
	// The output uses CRLF line endings and ends with CRLF.
	// 
	// -----BEGIN RSA PRIVATE KEY-----
	// ...
	// -----END RSA PRIVATE KEY-----
	// 
	// References:
	// [1] #Password
	// [2] #UncommonOptions
	const char *toOpenSshPrivateKey(bool bEncrypt);

	// Exports the public portion of the current key in one-line OpenSSH public-key
	// format.
	// 
	// The method works when the object contains either a private key or a public-only
	// key. The returned string contains the algorithm name, Base64 key data, and the
	// current Comment[1] when it is nonempty:
	// 
	// ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQ... user@example
	// 
	// The returned string does not include a final CRLF or LF. It contains a bare key
	// entry and does not add authorized_keys options such as restrict or from="...".
	// 
	// Do not place CR or LF characters in Comment[1], because the comment is appended
	// without newline sanitization.
	// 
	// 
	// References:
	// [1] #Comment
	bool ToOpenSshPublicKey(CkString &outStr);

	// Exports the public portion of the current key in one-line OpenSSH public-key
	// format.
	// 
	// The method works when the object contains either a private key or a public-only
	// key. The returned string contains the algorithm name, Base64 key data, and the
	// current Comment[1] when it is nonempty:
	// 
	// ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQ... user@example
	// 
	// The returned string does not include a final CRLF or LF. It contains a bare key
	// entry and does not add authorized_keys options such as restrict or from="...".
	// 
	// Do not place CR or LF characters in Comment[1], because the comment is appended
	// without newline sanitization.
	// 
	// 
	// References:
	// [1] #Comment
	const char *toOpenSshPublicKey(void);

	// Exports the current private key as a PuTTY PPK string.
	// 
	//     * bEncrypt equal to false returns an unencrypted PPK.
	//     * bEncrypt equal to true returns an encrypted PPK using AES-256-CBC and
	//     requires a nonempty Password[1].
	//     * If the object contains only a public key, the method fails.
	// 
	// The emitted format is PuTTY PPK version 2. FromPuttyPrivateKey[2] can import
	// both PPK version 2 and version 3.
	// 
	// The returned text includes the public and private sections, Comment[3], and the
	// integrity MAC. It uses CRLF line endings and ends with CRLF.
	// 
	// PuTTY-User-Key-File-2: ssh-rsa
	// Encryption: aes256-cbc
	// Comment: example-key
	// Public-Lines: ...
	// 
	// Do not place CR or LF characters in Comment[3].
	// 
	// 
	// References:
	// [1] #Password
	// [2] #FromPuttyPrivateKey
	// [3] #Comment
	bool ToPuttyPrivateKey(bool bEncrypt, CkString &outStr);

	// Exports the current private key as a PuTTY PPK string.
	// 
	//     * bEncrypt equal to false returns an unencrypted PPK.
	//     * bEncrypt equal to true returns an encrypted PPK using AES-256-CBC and
	//     requires a nonempty Password[1].
	//     * If the object contains only a public key, the method fails.
	// 
	// The emitted format is PuTTY PPK version 2. FromPuttyPrivateKey[2] can import
	// both PPK version 2 and version 3.
	// 
	// The returned text includes the public and private sections, Comment[3], and the
	// integrity MAC. It uses CRLF line endings and ends with CRLF.
	// 
	// PuTTY-User-Key-File-2: ssh-rsa
	// Encryption: aes256-cbc
	// Comment: example-key
	// Public-Lines: ...
	// 
	// Do not place CR or LF characters in Comment[3].
	// 
	// 
	// References:
	// [1] #Password
	// [2] #FromPuttyPrivateKey
	// [3] #Comment
	const char *toPuttyPrivateKey(bool bEncrypt);

	// Exports the public portion of the current key in RFC 4716 SSH2 public-key
	// format.
	// 
	// The method works when the object contains either a private key or a public-only
	// key. The returned text contains boundary lines, wrapped Base64 key data, and a
	// Comment: header. When Comment[1] is empty, the header is emitted as Comment: "".
	// 
	// ---- BEGIN SSH2 PUBLIC KEY ----
	// Comment: "optional comment"
	// AAAAB3NzaC1yc2EAAAADAQABAAABAQ...
	// ---- END SSH2 PUBLIC KEY ----
	// 
	// The output uses CRLF line endings and ends with CRLF. Do not place CR or LF
	// characters in Comment[1].
	// 
	// 
	// References:
	// [1] #Comment
	bool ToRfc4716PublicKey(CkString &outStr);

	// Exports the public portion of the current key in RFC 4716 SSH2 public-key
	// format.
	// 
	// The method works when the object contains either a private key or a public-only
	// key. The returned text contains boundary lines, wrapped Base64 key data, and a
	// Comment: header. When Comment[1] is empty, the header is emitted as Comment: "".
	// 
	// ---- BEGIN SSH2 PUBLIC KEY ----
	// Comment: "optional comment"
	// AAAAB3NzaC1yc2EAAAADAQABAAABAQ...
	// ---- END SSH2 PUBLIC KEY ----
	// 
	// The output uses CRLF line endings and ends with CRLF. Do not place CR or LF
	// characters in Comment[1].
	// 
	// 
	// References:
	// [1] #Comment
	const char *toRfc4716PublicKey(void);

	// Exports the current key as XML.
	// 
	// A public-only key produces a public-key XML representation. A private key
	// produces XML containing private-key components and must therefore be protected
	// as sensitive key material.
	// 
	// +----------+------------------+------------------+
	// | Key type | Private-key root | Public-key root  |
	// +==========+==================+==================+
	// | RSA      | RSAKeyValue      | RSAPublicKey     |
	// +----------+------------------+------------------+
	// | DSA      | DSAKeyValue      | DSAPublicKey     |
	// +----------+------------------+------------------+
	// | ECDSA    | ECCKeyValue      | ECCPublicKey     |
	// +----------+------------------+------------------+
	// | Ed25519  | Ed25519KeyValue  | Ed25519PublicKey |
	// +----------+------------------+------------------+
	// 
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>AQAB</Exponent>
	//   ... private components ...
	// </RSAKeyValue>
	// 
	// The XML does not include Comment[1]. The returned string does not have a final
	// newline and can be loaded by FromXml[2].
	// 
	// 
	// References:
	// [1] #Comment
	// [2] #FromXml
	bool ToXml(CkString &outStr);

	// Exports the current key as XML.
	// 
	// A public-only key produces a public-key XML representation. A private key
	// produces XML containing private-key components and must therefore be protected
	// as sensitive key material.
	// 
	// +----------+------------------+------------------+
	// | Key type | Private-key root | Public-key root  |
	// +==========+==================+==================+
	// | RSA      | RSAKeyValue      | RSAPublicKey     |
	// +----------+------------------+------------------+
	// | DSA      | DSAKeyValue      | DSAPublicKey     |
	// +----------+------------------+------------------+
	// | ECDSA    | ECCKeyValue      | ECCPublicKey     |
	// +----------+------------------+------------------+
	// | Ed25519  | Ed25519KeyValue  | Ed25519PublicKey |
	// +----------+------------------+------------------+
	// 
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>AQAB</Exponent>
	//   ... private components ...
	// </RSAKeyValue>
	// 
	// The XML does not include Comment[1]. The returned string does not have a final
	// newline and can be loaded by FromXml[2].
	// 
	// 
	// References:
	// [1] #Comment
	// [2] #FromXml
	const char *toXml(void);

	// Configures this object to use a private key held in a PKCS#11 token, smart card,
	// or HSM for SSH public-key authentication.
	// 
	//     * session is the Pkcs11 session containing the key objects.
	//     * privKeyHandle is the PKCS#11 handle of the private key.
	//     * pubKeyHandle is the PKCS#11 handle of the corresponding public key.
	//     * keyType identifies the key type and must be RSA or EC.
	// 
	// The private-key operation is performed by the PKCS#11 device, allowing the
	// private key to remain on the token.
	// 
	bool UsePkcs11(CkPkcs11 &session, unsigned long privKeyHandle, unsigned long pubKeyHandle, const char *keyType);


	// Associates an OpenSSH user certificate with this object for SSH or SFTP
	// public-key authentication.
	// 
	// sshCert contains the complete certificate text, not a filesystem path. An SSH user
	// certificate has the same one-line text structure as an OpenSSH public key, but
	// its algorithm name ends in -cert-v01@openssh.com:
	// 
	// ssh-rsa-cert-v01@openssh.com AAAAHHNzaC1yc2EAAAADAQAB... user@host
	// 
	// The certificate is used together with its corresponding private key during
	// authentication.
	// 
	bool UseSshCertificate(const char *sshCert);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
