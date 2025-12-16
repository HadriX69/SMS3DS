#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t3109723551;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct  KeyValuePair_2_t398822319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Canvas_t3310196443 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	IndexedSet_1_t3109723551 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t398822319, ___key_0)); }
	inline Canvas_t3310196443 * get_key_0() const { return ___key_0; }
	inline Canvas_t3310196443 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Canvas_t3310196443 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t398822319, ___value_1)); }
	inline IndexedSet_1_t3109723551 * get_value_1() const { return ___value_1; }
	inline IndexedSet_1_t3109723551 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(IndexedSet_1_t3109723551 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
