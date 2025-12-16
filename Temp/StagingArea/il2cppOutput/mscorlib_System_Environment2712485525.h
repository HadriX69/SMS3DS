#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.OperatingSystem
struct OperatingSystem_t3730783609;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment
struct  Environment_t2712485525  : public Il2CppObject
{
public:

public:
};

struct Environment_t2712485525_StaticFields
{
public:
	// System.OperatingSystem System.Environment::os
	OperatingSystem_t3730783609 * ___os_1;

public:
	inline static int32_t get_offset_of_os_1() { return static_cast<int32_t>(offsetof(Environment_t2712485525_StaticFields, ___os_1)); }
	inline OperatingSystem_t3730783609 * get_os_1() const { return ___os_1; }
	inline OperatingSystem_t3730783609 ** get_address_of_os_1() { return &___os_1; }
	inline void set_os_1(OperatingSystem_t3730783609 * value)
	{
		___os_1 = value;
		Il2CppCodeGenWriteBarrier(&___os_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
