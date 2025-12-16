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

// System.Runtime.Remoting.Services.TrackingServices
struct  TrackingServices_t409076583  : public Il2CppObject
{
public:

public:
};

struct TrackingServices_t409076583_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Services.TrackingServices::_handlers
	ArrayList_t2718874744 * ____handlers_0;

public:
	inline static int32_t get_offset_of__handlers_0() { return static_cast<int32_t>(offsetof(TrackingServices_t409076583_StaticFields, ____handlers_0)); }
	inline ArrayList_t2718874744 * get__handlers_0() const { return ____handlers_0; }
	inline ArrayList_t2718874744 ** get_address_of__handlers_0() { return &____handlers_0; }
	inline void set__handlers_0(ArrayList_t2718874744 * value)
	{
		____handlers_0 = value;
		Il2CppCodeGenWriteBarrier(&____handlers_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
