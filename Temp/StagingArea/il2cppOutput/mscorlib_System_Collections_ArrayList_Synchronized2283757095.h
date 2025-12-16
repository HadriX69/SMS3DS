#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Collections_ArrayList_ArrayListWrap240606758.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct  SynchronizedArrayListWrapper_t2283757095  : public ArrayListWrapper_t240606758
{
public:
	// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::m_SyncRoot
	Il2CppObject * ___m_SyncRoot_6;

public:
	inline static int32_t get_offset_of_m_SyncRoot_6() { return static_cast<int32_t>(offsetof(SynchronizedArrayListWrapper_t2283757095, ___m_SyncRoot_6)); }
	inline Il2CppObject * get_m_SyncRoot_6() const { return ___m_SyncRoot_6; }
	inline Il2CppObject ** get_address_of_m_SyncRoot_6() { return &___m_SyncRoot_6; }
	inline void set_m_SyncRoot_6(Il2CppObject * value)
	{
		___m_SyncRoot_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_SyncRoot_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
