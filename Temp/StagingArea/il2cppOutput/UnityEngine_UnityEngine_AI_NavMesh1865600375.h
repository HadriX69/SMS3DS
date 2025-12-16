#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t1580782682;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMesh
struct  NavMesh_t1865600375  : public Il2CppObject
{
public:

public:
};

struct NavMesh_t1865600375_StaticFields
{
public:
	// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate UnityEngine.AI.NavMesh::onPreUpdate
	OnNavMeshPreUpdate_t1580782682 * ___onPreUpdate_0;

public:
	inline static int32_t get_offset_of_onPreUpdate_0() { return static_cast<int32_t>(offsetof(NavMesh_t1865600375_StaticFields, ___onPreUpdate_0)); }
	inline OnNavMeshPreUpdate_t1580782682 * get_onPreUpdate_0() const { return ___onPreUpdate_0; }
	inline OnNavMeshPreUpdate_t1580782682 ** get_address_of_onPreUpdate_0() { return &___onPreUpdate_0; }
	inline void set_onPreUpdate_0(OnNavMeshPreUpdate_t1580782682 * value)
	{
		___onPreUpdate_0 = value;
		Il2CppCodeGenWriteBarrier(&___onPreUpdate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
