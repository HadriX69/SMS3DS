#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou3495933518.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t537414295;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t2331243652;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t3630163547;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t2019268878  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t537414295 * ___m_RaycastResultCache_2;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t2331243652 * ___m_AxisEventData_3;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_4;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t3903027533 * ___m_BaseEventData_5;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t3630163547 * ___m_InputOverride_6;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t3630163547 * ___m_DefaultInput_7;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_2() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_RaycastResultCache_2)); }
	inline List_1_t537414295 * get_m_RaycastResultCache_2() const { return ___m_RaycastResultCache_2; }
	inline List_1_t537414295 ** get_address_of_m_RaycastResultCache_2() { return &___m_RaycastResultCache_2; }
	inline void set_m_RaycastResultCache_2(List_1_t537414295 * value)
	{
		___m_RaycastResultCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_RaycastResultCache_2, value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_3() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_AxisEventData_3)); }
	inline AxisEventData_t2331243652 * get_m_AxisEventData_3() const { return ___m_AxisEventData_3; }
	inline AxisEventData_t2331243652 ** get_address_of_m_AxisEventData_3() { return &___m_AxisEventData_3; }
	inline void set_m_AxisEventData_3(AxisEventData_t2331243652 * value)
	{
		___m_AxisEventData_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_AxisEventData_3, value);
	}

	inline static int32_t get_offset_of_m_EventSystem_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_EventSystem_4)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_4() const { return ___m_EventSystem_4; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_4() { return &___m_EventSystem_4; }
	inline void set_m_EventSystem_4(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventSystem_4, value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_BaseEventData_5)); }
	inline BaseEventData_t3903027533 * get_m_BaseEventData_5() const { return ___m_BaseEventData_5; }
	inline BaseEventData_t3903027533 ** get_address_of_m_BaseEventData_5() { return &___m_BaseEventData_5; }
	inline void set_m_BaseEventData_5(BaseEventData_t3903027533 * value)
	{
		___m_BaseEventData_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_BaseEventData_5, value);
	}

	inline static int32_t get_offset_of_m_InputOverride_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_InputOverride_6)); }
	inline BaseInput_t3630163547 * get_m_InputOverride_6() const { return ___m_InputOverride_6; }
	inline BaseInput_t3630163547 ** get_address_of_m_InputOverride_6() { return &___m_InputOverride_6; }
	inline void set_m_InputOverride_6(BaseInput_t3630163547 * value)
	{
		___m_InputOverride_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_InputOverride_6, value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_DefaultInput_7)); }
	inline BaseInput_t3630163547 * get_m_DefaultInput_7() const { return ___m_DefaultInput_7; }
	inline BaseInput_t3630163547 ** get_address_of_m_DefaultInput_7() { return &___m_DefaultInput_7; }
	inline void set_m_DefaultInput_7(BaseInput_t3630163547 * value)
	{
		___m_DefaultInput_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_DefaultInput_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
