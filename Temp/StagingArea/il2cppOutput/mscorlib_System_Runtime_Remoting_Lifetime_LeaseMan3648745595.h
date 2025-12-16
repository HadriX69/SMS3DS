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
// System.Threading.Timer
struct Timer_t716671026;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t3648745595  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t2718874744 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t716671026 * ____timer_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(LeaseManager_t3648745595, ____objects_0)); }
	inline ArrayList_t2718874744 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t2718874744 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t2718874744 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier(&____objects_0, value);
	}

	inline static int32_t get_offset_of__timer_1() { return static_cast<int32_t>(offsetof(LeaseManager_t3648745595, ____timer_1)); }
	inline Timer_t716671026 * get__timer_1() const { return ____timer_1; }
	inline Timer_t716671026 ** get_address_of__timer_1() { return &____timer_1; }
	inline void set__timer_1(Timer_t716671026 * value)
	{
		____timer_1 = value;
		Il2CppCodeGenWriteBarrier(&____timer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
