#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_Selectable3250028441.h"

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnClick_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
