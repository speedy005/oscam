#ifndef CSCRYPT_DES_H_
#define CSCRYPT_DES_H_

	// sets parity for a 8-byte des key
	void des_set_odd_parity(uint8_t* key);

	// expands the given 8-byte des key "key"
	// into "shedule", which must be of type "uint32_t schedule[32]"
	// always returns 0
	int8_t des_set_key(const uint8_t* key, uint32_t* schedule);

	// crypts 8 bytes of "data" with key shedule "ks"
	// encrypt = 1 -> encrypt
	// encrypt = 0 -> decrypt
	void des(uint8_t* data, const uint32_t* schedule, int8_t do_encrypt);

	// these functions take a 8-byte des key and crypt data of any length ("len")
	void des_ecb_decrypt(uint8_t* data, const uint8_t* key, int32_t len);

	void des_cbc_encrypt(uint8_t* data, const uint8_t* iv, const uint8_t* key, int32_t len);
	void des_cbc_decrypt(uint8_t* data, const uint8_t* iv, const uint8_t* key, int32_t len);

	void des_ecb3_decrypt(uint8_t* data, const uint8_t* key);

#endif
