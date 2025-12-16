#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Delegate
struct Delegate_t1188392813;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder
struct  DelegateSerializationHolder_t3408600559  : public Il2CppObject
{
public:
	// System.Delegate System.DelegateSerializationHolder::_delegate
	Delegate_t1188392813 * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(DelegateSerializationHolder_t3408600559, ____delegate_0)); }
	inline Delegate_t1188392813 * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t1188392813 ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t1188392813 * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier(&____delegate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
