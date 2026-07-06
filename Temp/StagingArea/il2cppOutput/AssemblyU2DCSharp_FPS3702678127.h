#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"

// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.CharacterController
struct CharacterController_t1138636865;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPS
struct  FPS_t3702678127  : public MonoBehaviour_t3962482529
{
public:
	// System.Single FPS::speed
	float ___speed_2;
	// UnityEngine.Transform FPS::cam
	Transform_t3600365921 * ___cam_3;
	// System.Single FPS::sensitivity
	float ___sensitivity_4;
	// System.Single FPS::h
	float ___h_5;
	// System.Single FPS::v
	float ___v_6;
	// UnityEngine.CharacterController FPS::controller
	CharacterController_t1138636865 * ___controller_7;
	// UnityEngine.Vector3 FPS::playerVelocity
	Vector3_t3722313464  ___playerVelocity_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(FPS_t3702678127, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_cam_3() { return static_cast<int32_t>(offsetof(FPS_t3702678127, ___cam_3)); }
	inline Transform_t3600365921 * get_cam_3() const { return ___cam_3; }
	inline Transform_t3600365921 ** get_address_of_cam_3() { return &___cam_3; }
	inline void set_cam_3(Transform_t3600365921 * value)
	{
		___cam_3 = value;
		Il2CppCodeGenWriteBarrier(&___cam_3, value);
	}

	inline static int32_t get_offset_of_sensitivity_4() { return static_cast<int32_t>(offsetof(FPS_t3702678127, ___sensitivity_4)); }
	inline float get_sensitivity_4() const { return ___sensitivity_4; }
	inline float* get_address_of_sensitivity_4() { return &___sensitivity_4; }
	inline void set_sensitivity_4(float value)
	{
		___sensitivity_4 = value;
	}

	inline static int32_t get_offset_of_h_5() { return static_cast<int32_t>(offsetof(FPS_t3702678127, ___h_5)); }
	inline float get_h_5() const { return ___h_5; }
	inline float* get_address_of_h_5() { return &___h_5; }
	inline void set_h_5(float value)
	{
		___h_5 = value;
	}

	inline static int32_t get_offset_of_v_6() { return static_cast<int32_t>(offsetof(FPS_t3702678127, ___v_6)); }
	inline float get_v_6() const { return ___v_6; }
	inline float* get_address_of_v_6() { return &___v_6; }
	inline void set_v_6(float value)
	{
		___v_6 = value;
	}

	inline static int32_t get_offset_of_controller_7() { return static_cast<int32_t>(offsetof(FPS_t3702678127, ___controller_7)); }
	inline CharacterController_t1138636865 * get_controller_7() const { return ___controller_7; }
	inline CharacterController_t1138636865 ** get_address_of_controller_7() { return &___controller_7; }
	inline void set_controller_7(CharacterController_t1138636865 * value)
	{
		___controller_7 = value;
		Il2CppCodeGenWriteBarrier(&___controller_7, value);
	}

	inline static int32_t get_offset_of_playerVelocity_8() { return static_cast<int32_t>(offsetof(FPS_t3702678127, ___playerVelocity_8)); }
	inline Vector3_t3722313464  get_playerVelocity_8() const { return ___playerVelocity_8; }
	inline Vector3_t3722313464 * get_address_of_playerVelocity_8() { return &___playerVelocity_8; }
	inline void set_playerVelocity_8(Vector3_t3722313464  value)
	{
		___playerVelocity_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
