#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t2157789695;
// UnityEngineInternal.GenericStack
struct GenericStack_t1310059385;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t78309876  : public Il2CppObject
{
public:
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t2157789695 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t1310059385 * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t2157789695 * ___windows_2;

public:
	inline static int32_t get_offset_of_topLevel_0() { return static_cast<int32_t>(offsetof(LayoutCache_t78309876, ___topLevel_0)); }
	inline GUILayoutGroup_t2157789695 * get_topLevel_0() const { return ___topLevel_0; }
	inline GUILayoutGroup_t2157789695 ** get_address_of_topLevel_0() { return &___topLevel_0; }
	inline void set_topLevel_0(GUILayoutGroup_t2157789695 * value)
	{
		___topLevel_0 = value;
		Il2CppCodeGenWriteBarrier(&___topLevel_0, value);
	}

	inline static int32_t get_offset_of_layoutGroups_1() { return static_cast<int32_t>(offsetof(LayoutCache_t78309876, ___layoutGroups_1)); }
	inline GenericStack_t1310059385 * get_layoutGroups_1() const { return ___layoutGroups_1; }
	inline GenericStack_t1310059385 ** get_address_of_layoutGroups_1() { return &___layoutGroups_1; }
	inline void set_layoutGroups_1(GenericStack_t1310059385 * value)
	{
		___layoutGroups_1 = value;
		Il2CppCodeGenWriteBarrier(&___layoutGroups_1, value);
	}

	inline static int32_t get_offset_of_windows_2() { return static_cast<int32_t>(offsetof(LayoutCache_t78309876, ___windows_2)); }
	inline GUILayoutGroup_t2157789695 * get_windows_2() const { return ___windows_2; }
	inline GUILayoutGroup_t2157789695 ** get_address_of_windows_2() { return &___windows_2; }
	inline void set_windows_2(GUILayoutGroup_t2157789695 * value)
	{
		___windows_2 = value;
		Il2CppCodeGenWriteBarrier(&___windows_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
