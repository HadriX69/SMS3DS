#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp3453173740.h"
#include "UnityEngine_UnityEngine_Vector22156229523.h"

// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.StandaloneInputModule
struct  StandaloneInputModule_t2760469101  : public PointerInputModule_t3453173740
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t2156229523  ___m_LastMoveVector_15;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_16;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t1113636619 * ___m_CurrentFocusedGameObject_17;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_18;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_19;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_20;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_21;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_22;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_23;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_14() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_PrevActionTime_14)); }
	inline float get_m_PrevActionTime_14() const { return ___m_PrevActionTime_14; }
	inline float* get_address_of_m_PrevActionTime_14() { return &___m_PrevActionTime_14; }
	inline void set_m_PrevActionTime_14(float value)
	{
		___m_PrevActionTime_14 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_15() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_LastMoveVector_15)); }
	inline Vector2_t2156229523  get_m_LastMoveVector_15() const { return ___m_LastMoveVector_15; }
	inline Vector2_t2156229523 * get_address_of_m_LastMoveVector_15() { return &___m_LastMoveVector_15; }
	inline void set_m_LastMoveVector_15(Vector2_t2156229523  value)
	{
		___m_LastMoveVector_15 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_ConsecutiveMoveCount_16)); }
	inline int32_t get_m_ConsecutiveMoveCount_16() const { return ___m_ConsecutiveMoveCount_16; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_16() { return &___m_ConsecutiveMoveCount_16; }
	inline void set_m_ConsecutiveMoveCount_16(int32_t value)
	{
		___m_ConsecutiveMoveCount_16 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_CurrentFocusedGameObject_17)); }
	inline GameObject_t1113636619 * get_m_CurrentFocusedGameObject_17() const { return ___m_CurrentFocusedGameObject_17; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentFocusedGameObject_17() { return &___m_CurrentFocusedGameObject_17; }
	inline void set_m_CurrentFocusedGameObject_17(GameObject_t1113636619 * value)
	{
		___m_CurrentFocusedGameObject_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentFocusedGameObject_17, value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_HorizontalAxis_18)); }
	inline String_t* get_m_HorizontalAxis_18() const { return ___m_HorizontalAxis_18; }
	inline String_t** get_address_of_m_HorizontalAxis_18() { return &___m_HorizontalAxis_18; }
	inline void set_m_HorizontalAxis_18(String_t* value)
	{
		___m_HorizontalAxis_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_HorizontalAxis_18, value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_VerticalAxis_19)); }
	inline String_t* get_m_VerticalAxis_19() const { return ___m_VerticalAxis_19; }
	inline String_t** get_address_of_m_VerticalAxis_19() { return &___m_VerticalAxis_19; }
	inline void set_m_VerticalAxis_19(String_t* value)
	{
		___m_VerticalAxis_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_VerticalAxis_19, value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_SubmitButton_20)); }
	inline String_t* get_m_SubmitButton_20() const { return ___m_SubmitButton_20; }
	inline String_t** get_address_of_m_SubmitButton_20() { return &___m_SubmitButton_20; }
	inline void set_m_SubmitButton_20(String_t* value)
	{
		___m_SubmitButton_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_SubmitButton_20, value);
	}

	inline static int32_t get_offset_of_m_CancelButton_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_CancelButton_21)); }
	inline String_t* get_m_CancelButton_21() const { return ___m_CancelButton_21; }
	inline String_t** get_address_of_m_CancelButton_21() { return &___m_CancelButton_21; }
	inline void set_m_CancelButton_21(String_t* value)
	{
		___m_CancelButton_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_CancelButton_21, value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_InputActionsPerSecond_22)); }
	inline float get_m_InputActionsPerSecond_22() const { return ___m_InputActionsPerSecond_22; }
	inline float* get_address_of_m_InputActionsPerSecond_22() { return &___m_InputActionsPerSecond_22; }
	inline void set_m_InputActionsPerSecond_22(float value)
	{
		___m_InputActionsPerSecond_22 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_RepeatDelay_23)); }
	inline float get_m_RepeatDelay_23() const { return ___m_RepeatDelay_23; }
	inline float* get_address_of_m_RepeatDelay_23() { return &___m_RepeatDelay_23; }
	inline void set_m_RepeatDelay_23(float value)
	{
		___m_RepeatDelay_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
