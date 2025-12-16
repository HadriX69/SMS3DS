#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t3355146440;
// System.String
struct String_t;
// System.Version
struct Version_t3456873960;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t3675724614  : public Il2CppObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t3355146440 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t3456873960 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier(&___publickey_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___version_2)); }
	inline Version_t3456873960 * get_version_2() const { return ___version_2; }
	inline Version_t3456873960 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t3456873960 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier(&___version_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
