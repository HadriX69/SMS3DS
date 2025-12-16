#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM2019268878.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t2696614423;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t384203932;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_t3453173740  : public BaseInputModule_t2019268878
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t2696614423 * ___m_PointerData_12;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t384203932 * ___m_MouseState_13;

public:
	inline static int32_t get_offset_of_m_PointerData_12() { return static_cast<int32_t>(offsetof(PointerInputModule_t3453173740, ___m_PointerData_12)); }
	inline Dictionary_2_t2696614423 * get_m_PointerData_12() const { return ___m_PointerData_12; }
	inline Dictionary_2_t2696614423 ** get_address_of_m_PointerData_12() { return &___m_PointerData_12; }
	inline void set_m_PointerData_12(Dictionary_2_t2696614423 * value)
	{
		___m_PointerData_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_PointerData_12, value);
	}

	inline static int32_t get_offset_of_m_MouseState_13() { return static_cast<int32_t>(offsetof(PointerInputModule_t3453173740, ___m_MouseState_13)); }
	inline MouseState_t384203932 * get_m_MouseState_13() const { return ___m_MouseState_13; }
	inline MouseState_t384203932 ** get_address_of_m_MouseState_13() { return &___m_MouseState_13; }
	inline void set_m_MouseState_13(MouseState_t384203932 * value)
	{
		___m_MouseState_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_MouseState_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
