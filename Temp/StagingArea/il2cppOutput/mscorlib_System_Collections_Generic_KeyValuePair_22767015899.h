#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// UnityEngine.Font
struct Font_t1956802104;
// System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>
struct HashSet_1_t466832188;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct  KeyValuePair_2_t2767015899 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Font_t1956802104 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	HashSet_1_t466832188 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2767015899, ___key_0)); }
	inline Font_t1956802104 * get_key_0() const { return ___key_0; }
	inline Font_t1956802104 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Font_t1956802104 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2767015899, ___value_1)); }
	inline HashSet_1_t466832188 * get_value_1() const { return ___value_1; }
	inline HashSet_1_t466832188 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(HashSet_1_t466832188 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
