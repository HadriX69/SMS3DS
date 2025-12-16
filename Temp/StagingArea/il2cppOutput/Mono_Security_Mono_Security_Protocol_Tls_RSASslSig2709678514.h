#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_AsymmetricSi3486936014.h"

// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t2709678514  : public AsymmetricSignatureFormatter_t3486936014
{
public:
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t2385438082 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t1432317219 * ___hash_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t2709678514, ___key_0)); }
	inline RSA_t2385438082 * get_key_0() const { return ___key_0; }
	inline RSA_t2385438082 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RSA_t2385438082 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t2709678514, ___hash_1)); }
	inline HashAlgorithm_t1432317219 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t1432317219 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t1432317219 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier(&___hash_1, value);
	}
};

struct RSASslSignatureFormatter_t2709678514_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_2() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t2709678514_StaticFields, ___U3CU3Ef__switchU24map16_2)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_2() const { return ___U3CU3Ef__switchU24map16_2; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_2() { return &___U3CU3Ef__switchU24map16_2; }
	inline void set_U3CU3Ef__switchU24map16_2(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map16_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
