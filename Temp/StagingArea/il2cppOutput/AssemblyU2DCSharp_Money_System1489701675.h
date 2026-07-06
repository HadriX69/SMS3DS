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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Money_System
struct  Money_System_t1489701675  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text Money_System::Money_T
	Text_t1901882714 * ___Money_T_2;

public:
	inline static int32_t get_offset_of_Money_T_2() { return static_cast<int32_t>(offsetof(Money_System_t1489701675, ___Money_T_2)); }
	inline Text_t1901882714 * get_Money_T_2() const { return ___Money_T_2; }
	inline Text_t1901882714 ** get_address_of_Money_T_2() { return &___Money_T_2; }
	inline void set_Money_T_2(Text_t1901882714 * value)
	{
		___Money_T_2 = value;
		Il2CppCodeGenWriteBarrier(&___Money_T_2, value);
	}
};

struct Money_System_t1489701675_StaticFields
{
public:
	// System.Int32 Money_System::Money_Amt
	int32_t ___Money_Amt_3;

public:
	inline static int32_t get_offset_of_Money_Amt_3() { return static_cast<int32_t>(offsetof(Money_System_t1489701675_StaticFields, ___Money_Amt_3)); }
	inline int32_t get_Money_Amt_3() const { return ___Money_Amt_3; }
	inline int32_t* get_address_of_Money_Amt_3() { return &___Money_Amt_3; }
	inline void set_Money_Amt_3(int32_t value)
	{
		___Money_Amt_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
