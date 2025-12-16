#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder>
struct ObjectPool_1_t240936516;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// System.Predicate`1<UnityEngine.Component>
struct Predicate_1_t2748928575;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t2508470592;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutRebuilder
struct  LayoutRebuilder_t541313304  : public Il2CppObject
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.LayoutRebuilder::m_ToRebuild
	RectTransform_t3704657025 * ___m_ToRebuild_0;
	// System.Int32 UnityEngine.UI.LayoutRebuilder::m_CachedHashFromTransform
	int32_t ___m_CachedHashFromTransform_1;

public:
	inline static int32_t get_offset_of_m_ToRebuild_0() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304, ___m_ToRebuild_0)); }
	inline RectTransform_t3704657025 * get_m_ToRebuild_0() const { return ___m_ToRebuild_0; }
	inline RectTransform_t3704657025 ** get_address_of_m_ToRebuild_0() { return &___m_ToRebuild_0; }
	inline void set_m_ToRebuild_0(RectTransform_t3704657025 * value)
	{
		___m_ToRebuild_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_ToRebuild_0, value);
	}

	inline static int32_t get_offset_of_m_CachedHashFromTransform_1() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304, ___m_CachedHashFromTransform_1)); }
	inline int32_t get_m_CachedHashFromTransform_1() const { return ___m_CachedHashFromTransform_1; }
	inline int32_t* get_address_of_m_CachedHashFromTransform_1() { return &___m_CachedHashFromTransform_1; }
	inline void set_m_CachedHashFromTransform_1(int32_t value)
	{
		___m_CachedHashFromTransform_1 = value;
	}
};

struct LayoutRebuilder_t541313304_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder> UnityEngine.UI.LayoutRebuilder::s_Rebuilders
	ObjectPool_1_t240936516 * ___s_Rebuilders_2;
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.UI.LayoutRebuilder::<>f__mg$cache0
	ReapplyDrivenProperties_t1258266594 * ___U3CU3Ef__mgU24cache0_3;
	// System.Predicate`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache0
	Predicate_1_t2748928575 * ___U3CU3Ef__amU24cache0_4;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache1
	UnityAction_1_t2508470592 * ___U3CU3Ef__amU24cache1_5;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache2
	UnityAction_1_t2508470592 * ___U3CU3Ef__amU24cache2_6;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache3
	UnityAction_1_t2508470592 * ___U3CU3Ef__amU24cache3_7;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache4
	UnityAction_1_t2508470592 * ___U3CU3Ef__amU24cache4_8;

public:
	inline static int32_t get_offset_of_s_Rebuilders_2() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___s_Rebuilders_2)); }
	inline ObjectPool_1_t240936516 * get_s_Rebuilders_2() const { return ___s_Rebuilders_2; }
	inline ObjectPool_1_t240936516 ** get_address_of_s_Rebuilders_2() { return &___s_Rebuilders_2; }
	inline void set_s_Rebuilders_2(ObjectPool_1_t240936516 * value)
	{
		___s_Rebuilders_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_Rebuilders_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline ReapplyDrivenProperties_t1258266594 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(ReapplyDrivenProperties_t1258266594 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Predicate_1_t2748928575 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Predicate_1_t2748928575 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Predicate_1_t2748928575 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline UnityAction_1_t2508470592 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline UnityAction_1_t2508470592 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(UnityAction_1_t2508470592 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_6() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___U3CU3Ef__amU24cache2_6)); }
	inline UnityAction_1_t2508470592 * get_U3CU3Ef__amU24cache2_6() const { return ___U3CU3Ef__amU24cache2_6; }
	inline UnityAction_1_t2508470592 ** get_address_of_U3CU3Ef__amU24cache2_6() { return &___U3CU3Ef__amU24cache2_6; }
	inline void set_U3CU3Ef__amU24cache2_6(UnityAction_1_t2508470592 * value)
	{
		___U3CU3Ef__amU24cache2_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_7() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___U3CU3Ef__amU24cache3_7)); }
	inline UnityAction_1_t2508470592 * get_U3CU3Ef__amU24cache3_7() const { return ___U3CU3Ef__amU24cache3_7; }
	inline UnityAction_1_t2508470592 ** get_address_of_U3CU3Ef__amU24cache3_7() { return &___U3CU3Ef__amU24cache3_7; }
	inline void set_U3CU3Ef__amU24cache3_7(UnityAction_1_t2508470592 * value)
	{
		___U3CU3Ef__amU24cache3_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_8() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___U3CU3Ef__amU24cache4_8)); }
	inline UnityAction_1_t2508470592 * get_U3CU3Ef__amU24cache4_8() const { return ___U3CU3Ef__amU24cache4_8; }
	inline UnityAction_1_t2508470592 ** get_address_of_U3CU3Ef__amU24cache4_8() { return &___U3CU3Ef__amU24cache4_8; }
	inline void set_U3CU3Ef__amU24cache4_8(UnityAction_1_t2508470592 * value)
	{
		___U3CU3Ef__amU24cache4_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
