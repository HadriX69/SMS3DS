#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.ArrayList
struct ArrayList_t2718874744;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection
struct  IntervalCollection_t2609070824  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Text.RegularExpressions.IntervalCollection::intervals
	ArrayList_t2718874744 * ___intervals_0;

public:
	inline static int32_t get_offset_of_intervals_0() { return static_cast<int32_t>(offsetof(IntervalCollection_t2609070824, ___intervals_0)); }
	inline ArrayList_t2718874744 * get_intervals_0() const { return ___intervals_0; }
	inline ArrayList_t2718874744 ** get_address_of_intervals_0() { return &___intervals_0; }
	inline void set_intervals_0(ArrayList_t2718874744 * value)
	{
		___intervals_0 = value;
		Il2CppCodeGenWriteBarrier(&___intervals_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
