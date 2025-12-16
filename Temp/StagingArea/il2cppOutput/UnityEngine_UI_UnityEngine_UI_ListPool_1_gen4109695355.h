#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct ObjectPool_1_t4251804118;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<System.Object>
struct  ListPool_1_t4109695355  : public Il2CppObject
{
public:

public:
};

struct ListPool_1_t4109695355_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t4251804118 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t4109695355_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t4251804118 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t4251804118 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t4251804118 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_ListPool_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
