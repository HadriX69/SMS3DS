#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3696583168.h"

// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello
struct  TlsClientHello_t97965998  : public HandshakeMessage_t3696583168
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::random
	ByteU5BU5D_t4116647657* ___random_9;

public:
	inline static int32_t get_offset_of_random_9() { return static_cast<int32_t>(offsetof(TlsClientHello_t97965998, ___random_9)); }
	inline ByteU5BU5D_t4116647657* get_random_9() const { return ___random_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_random_9() { return &___random_9; }
	inline void set_random_9(ByteU5BU5D_t4116647657* value)
	{
		___random_9 = value;
		Il2CppCodeGenWriteBarrier(&___random_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
