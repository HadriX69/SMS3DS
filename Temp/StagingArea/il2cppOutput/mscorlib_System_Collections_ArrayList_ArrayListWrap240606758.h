#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Collections_ArrayList2718874744.h"

// System.Collections.ArrayList
struct ArrayList_t2718874744;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListWrapper
struct  ArrayListWrapper_t240606758  : public ArrayList_t2718874744
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListWrapper::m_InnerArrayList
	ArrayList_t2718874744 * ___m_InnerArrayList_5;

public:
	inline static int32_t get_offset_of_m_InnerArrayList_5() { return static_cast<int32_t>(offsetof(ArrayListWrapper_t240606758, ___m_InnerArrayList_5)); }
	inline ArrayList_t2718874744 * get_m_InnerArrayList_5() const { return ___m_InnerArrayList_5; }
	inline ArrayList_t2718874744 ** get_address_of_m_InnerArrayList_5() { return &___m_InnerArrayList_5; }
	inline void set_m_InnerArrayList_5(ArrayList_t2718874744 * value)
	{
		___m_InnerArrayList_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_InnerArrayList_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
