#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou3495933518.h"
#include "UnityEngine_UnityEngine_TextAnchor2035777396.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker2562230146.h"
#include "UnityEngine_UnityEngine_Vector22156229523.h"

// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t881764471;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutGroup
struct  LayoutGroup_t2436138090  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t1369453676 * ___m_Padding_2;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_3;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t3704657025 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_5;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t2156229523  ___m_TotalMinSize_6;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t2156229523  ___m_TotalPreferredSize_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t2156229523  ___m_TotalFlexibleSize_8;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t881764471 * ___m_RectChildren_9;

public:
	inline static int32_t get_offset_of_m_Padding_2() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Padding_2)); }
	inline RectOffset_t1369453676 * get_m_Padding_2() const { return ___m_Padding_2; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_2() { return &___m_Padding_2; }
	inline void set_m_Padding_2(RectOffset_t1369453676 * value)
	{
		___m_Padding_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Padding_2, value);
	}

	inline static int32_t get_offset_of_m_ChildAlignment_3() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_ChildAlignment_3)); }
	inline int32_t get_m_ChildAlignment_3() const { return ___m_ChildAlignment_3; }
	inline int32_t* get_address_of_m_ChildAlignment_3() { return &___m_ChildAlignment_3; }
	inline void set_m_ChildAlignment_3(int32_t value)
	{
		___m_ChildAlignment_3 = value;
	}

	inline static int32_t get_offset_of_m_Rect_4() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Rect_4)); }
	inline RectTransform_t3704657025 * get_m_Rect_4() const { return ___m_Rect_4; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_4() { return &___m_Rect_4; }
	inline void set_m_Rect_4(RectTransform_t3704657025 * value)
	{
		___m_Rect_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rect_4, value);
	}

	inline static int32_t get_offset_of_m_Tracker_5() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Tracker_5)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_5() const { return ___m_Tracker_5; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_5() { return &___m_Tracker_5; }
	inline void set_m_Tracker_5(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_5 = value;
	}

	inline static int32_t get_offset_of_m_TotalMinSize_6() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalMinSize_6)); }
	inline Vector2_t2156229523  get_m_TotalMinSize_6() const { return ___m_TotalMinSize_6; }
	inline Vector2_t2156229523 * get_address_of_m_TotalMinSize_6() { return &___m_TotalMinSize_6; }
	inline void set_m_TotalMinSize_6(Vector2_t2156229523  value)
	{
		___m_TotalMinSize_6 = value;
	}

	inline static int32_t get_offset_of_m_TotalPreferredSize_7() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalPreferredSize_7)); }
	inline Vector2_t2156229523  get_m_TotalPreferredSize_7() const { return ___m_TotalPreferredSize_7; }
	inline Vector2_t2156229523 * get_address_of_m_TotalPreferredSize_7() { return &___m_TotalPreferredSize_7; }
	inline void set_m_TotalPreferredSize_7(Vector2_t2156229523  value)
	{
		___m_TotalPreferredSize_7 = value;
	}

	inline static int32_t get_offset_of_m_TotalFlexibleSize_8() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalFlexibleSize_8)); }
	inline Vector2_t2156229523  get_m_TotalFlexibleSize_8() const { return ___m_TotalFlexibleSize_8; }
	inline Vector2_t2156229523 * get_address_of_m_TotalFlexibleSize_8() { return &___m_TotalFlexibleSize_8; }
	inline void set_m_TotalFlexibleSize_8(Vector2_t2156229523  value)
	{
		___m_TotalFlexibleSize_8 = value;
	}

	inline static int32_t get_offset_of_m_RectChildren_9() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_RectChildren_9)); }
	inline List_1_t881764471 * get_m_RectChildren_9() const { return ___m_RectChildren_9; }
	inline List_1_t881764471 ** get_address_of_m_RectChildren_9() { return &___m_RectChildren_9; }
	inline void set_m_RectChildren_9(List_1_t881764471 * value)
	{
		___m_RectChildren_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectChildren_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
