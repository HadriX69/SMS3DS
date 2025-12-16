#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Runtime.Remoting.Contexts.Context
struct Context_t3285446944;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
struct  ClientContextTerminatorSink_t4064115021  : public Il2CppObject
{
public:
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Messaging.ClientContextTerminatorSink::_context
	Context_t3285446944 * ____context_0;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(ClientContextTerminatorSink_t4064115021, ____context_0)); }
	inline Context_t3285446944 * get__context_0() const { return ____context_0; }
	inline Context_t3285446944 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(Context_t3285446944 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier(&____context_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
