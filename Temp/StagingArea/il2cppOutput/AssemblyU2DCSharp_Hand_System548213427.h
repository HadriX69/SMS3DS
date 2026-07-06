#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t340375123;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hand_System
struct  Hand_System_t548213427  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform Hand_System::Hand_Transform
	Transform_t3600365921 * ___Hand_Transform_2;
	// System.Boolean Hand_System::Is_Holding
	bool ___Is_Holding_3;
	// UnityEngine.GameObject Hand_System::Hand_Content
	GameObject_t1113636619 * ___Hand_Content_4;
	// System.String Hand_System::Hand_Content_ID
	String_t* ___Hand_Content_ID_5;
	// UnityEngine.GameObject Hand_System::Shelf
	GameObject_t1113636619 * ___Shelf_6;
	// UnityEngine.GameObject Hand_System::Fridge
	GameObject_t1113636619 * ___Fridge_7;
	// UnityEngine.Material Hand_System::Build_Tex
	Material_t340375123 * ___Build_Tex_8;
	// UnityEngine.Material Hand_System::Shelf_Tex
	Material_t340375123 * ___Shelf_Tex_9;
	// UnityEngine.Material Hand_System::Fridge_Tex
	Material_t340375123 * ___Fridge_Tex_10;
	// UnityEngine.Transform Hand_System::Shelf_T
	Transform_t3600365921 * ___Shelf_T_11;
	// UnityEngine.Transform Hand_System::Fridge_T
	Transform_t3600365921 * ___Fridge_T_12;

public:
	inline static int32_t get_offset_of_Hand_Transform_2() { return static_cast<int32_t>(offsetof(Hand_System_t548213427, ___Hand_Transform_2)); }
	inline Transform_t3600365921 * get_Hand_Transform_2() const { return ___Hand_Transform_2; }
	inline Transform_t3600365921 ** get_address_of_Hand_Transform_2() { return &___Hand_Transform_2; }
	inline void set_Hand_Transform_2(Transform_t3600365921 * value)
	{
		___Hand_Transform_2 = value;
		Il2CppCodeGenWriteBarrier(&___Hand_Transform_2, value);
	}

	inline static int32_t get_offset_of_Is_Holding_3() { return static_cast<int32_t>(offsetof(Hand_System_t548213427, ___Is_Holding_3)); }
	inline bool get_Is_Holding_3() const { return ___Is_Holding_3; }
	inline bool* get_address_of_Is_Holding_3() { return &___Is_Holding_3; }
	inline void set_Is_Holding_3(bool value)
	{
		___Is_Holding_3 = value;
	}

	inline static int32_t get_offset_of_Hand_Content_4() { return static_cast<int32_t>(offsetof(Hand_System_t548213427, ___Hand_Content_4)); }
	inline GameObject_t1113636619 * get_Hand_Content_4() const { return ___Hand_Content_4; }
	inline GameObject_t1113636619 ** get_address_of_Hand_Content_4() { return &___Hand_Content_4; }
	inline void set_Hand_Content_4(GameObject_t1113636619 * value)
	{
		___Hand_Content_4 = value;
		Il2CppCodeGenWriteBarrier(&___Hand_Content_4, value);
	}

	inline static int32_t get_offset_of_Hand_Content_ID_5() { return static_cast<int32_t>(offsetof(Hand_System_t548213427, ___Hand_Content_ID_5)); }
	inline String_t* get_Hand_Content_ID_5() const { return ___Hand_Content_ID_5; }
	inline String_t** get_address_of_Hand_Content_ID_5() { return &___Hand_Content_ID_5; }
	inline void set_Hand_Content_ID_5(String_t* value)
	{
		___Hand_Content_ID_5 = value;
		Il2CppCodeGenWriteBarrier(&___Hand_Content_ID_5, value);
	}

	inline static int32_t get_offset_of_Shelf_6() { return static_cast<int32_t>(offsetof(Hand_System_t548213427, ___Shelf_6)); }
	inline GameObject_t1113636619 * get_Shelf_6() const { return ___Shelf_6; }
	inline GameObject_t1113636619 ** get_address_of_Shelf_6() { return &___Shelf_6; }
	inline void set_Shelf_6(GameObject_t1113636619 * value)
	{
		___Shelf_6 = value;
		Il2CppCodeGenWriteBarrier(&___Shelf_6, value);
	}

	inline static int32_t get_offset_of_Fridge_7() { return static_cast<int32_t>(offsetof(Hand_System_t548213427, ___Fridge_7)); }
	inline GameObject_t1113636619 * get_Fridge_7() const { return ___Fridge_7; }
	inline GameObject_t1113636619 ** get_address_of_Fridge_7() { return &___Fridge_7; }
	inline void set_Fridge_7(GameObject_t1113636619 * value)
	{
		___Fridge_7 = value;
		Il2CppCodeGenWriteBarrier(&___Fridge_7, value);
	}

	inline static int32_t get_offset_of_Build_Tex_8() { return static_cast<int32_t>(offsetof(Hand_System_t548213427, ___Build_Tex_8)); }
	inline Material_t340375123 * get_Build_Tex_8() const { return ___Build_Tex_8; }
	inline Material_t340375123 ** get_address_of_Build_Tex_8() { return &___Build_Tex_8; }
	inline void set_Build_Tex_8(Material_t340375123 * value)
	{
		___Build_Tex_8 = value;
		Il2CppCodeGenWriteBarrier(&___Build_Tex_8, value);
	}

	inline static int32_t get_offset_of_Shelf_Tex_9() { return static_cast<int32_t>(offsetof(Hand_System_t548213427, ___Shelf_Tex_9)); }
	inline Material_t340375123 * get_Shelf_Tex_9() const { return ___Shelf_Tex_9; }
	inline Material_t340375123 ** get_address_of_Shelf_Tex_9() { return &___Shelf_Tex_9; }
	inline void set_Shelf_Tex_9(Material_t340375123 * value)
	{
		___Shelf_Tex_9 = value;
		Il2CppCodeGenWriteBarrier(&___Shelf_Tex_9, value);
	}

	inline static int32_t get_offset_of_Fridge_Tex_10() { return static_cast<int32_t>(offsetof(Hand_System_t548213427, ___Fridge_Tex_10)); }
	inline Material_t340375123 * get_Fridge_Tex_10() const { return ___Fridge_Tex_10; }
	inline Material_t340375123 ** get_address_of_Fridge_Tex_10() { return &___Fridge_Tex_10; }
	inline void set_Fridge_Tex_10(Material_t340375123 * value)
	{
		___Fridge_Tex_10 = value;
		Il2CppCodeGenWriteBarrier(&___Fridge_Tex_10, value);
	}

	inline static int32_t get_offset_of_Shelf_T_11() { return static_cast<int32_t>(offsetof(Hand_System_t548213427, ___Shelf_T_11)); }
	inline Transform_t3600365921 * get_Shelf_T_11() const { return ___Shelf_T_11; }
	inline Transform_t3600365921 ** get_address_of_Shelf_T_11() { return &___Shelf_T_11; }
	inline void set_Shelf_T_11(Transform_t3600365921 * value)
	{
		___Shelf_T_11 = value;
		Il2CppCodeGenWriteBarrier(&___Shelf_T_11, value);
	}

	inline static int32_t get_offset_of_Fridge_T_12() { return static_cast<int32_t>(offsetof(Hand_System_t548213427, ___Fridge_T_12)); }
	inline Transform_t3600365921 * get_Fridge_T_12() const { return ___Fridge_T_12; }
	inline Transform_t3600365921 ** get_address_of_Fridge_T_12() { return &___Fridge_T_12; }
	inline void set_Fridge_T_12(Transform_t3600365921 * value)
	{
		___Fridge_T_12 = value;
		Il2CppCodeGenWriteBarrier(&___Fridge_T_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
