#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.UI.Toggle
struct Toggle_t2735377061;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown/DropdownItem
struct  DropdownItem_t1451952895  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown/DropdownItem::m_Text
	Text_t1901882714 * ___m_Text_2;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown/DropdownItem::m_Image
	Image_t2670269651 * ___m_Image_3;
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown/DropdownItem::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_4;
	// UnityEngine.UI.Toggle UnityEngine.UI.Dropdown/DropdownItem::m_Toggle
	Toggle_t2735377061 * ___m_Toggle_5;

public:
	inline static int32_t get_offset_of_m_Text_2() { return static_cast<int32_t>(offsetof(DropdownItem_t1451952895, ___m_Text_2)); }
	inline Text_t1901882714 * get_m_Text_2() const { return ___m_Text_2; }
	inline Text_t1901882714 ** get_address_of_m_Text_2() { return &___m_Text_2; }
	inline void set_m_Text_2(Text_t1901882714 * value)
	{
		___m_Text_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_2, value);
	}

	inline static int32_t get_offset_of_m_Image_3() { return static_cast<int32_t>(offsetof(DropdownItem_t1451952895, ___m_Image_3)); }
	inline Image_t2670269651 * get_m_Image_3() const { return ___m_Image_3; }
	inline Image_t2670269651 ** get_address_of_m_Image_3() { return &___m_Image_3; }
	inline void set_m_Image_3(Image_t2670269651 * value)
	{
		___m_Image_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Image_3, value);
	}

	inline static int32_t get_offset_of_m_RectTransform_4() { return static_cast<int32_t>(offsetof(DropdownItem_t1451952895, ___m_RectTransform_4)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_4() const { return ___m_RectTransform_4; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_4() { return &___m_RectTransform_4; }
	inline void set_m_RectTransform_4(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransform_4, value);
	}

	inline static int32_t get_offset_of_m_Toggle_5() { return static_cast<int32_t>(offsetof(DropdownItem_t1451952895, ___m_Toggle_5)); }
	inline Toggle_t2735377061 * get_m_Toggle_5() const { return ___m_Toggle_5; }
	inline Toggle_t2735377061 ** get_address_of_m_Toggle_5() { return &___m_Toggle_5; }
	inline void set_m_Toggle_5(Toggle_t2735377061 * value)
	{
		___m_Toggle_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Toggle_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
