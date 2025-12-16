#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_SymmetricAlg4254223087.h"

// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RC4
struct  RC4_t2752556436  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

struct RC4_t2752556436_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t722666473* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t722666473* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC4_t2752556436_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier(&___s_legalBlockSizes_10, value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC4_t2752556436_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier(&___s_legalKeySizes_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
