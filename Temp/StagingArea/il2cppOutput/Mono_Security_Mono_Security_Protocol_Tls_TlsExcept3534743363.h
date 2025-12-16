#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Exception1436737249.h"

// Mono.Security.Protocol.Tls.Alert
struct Alert_t4059934885;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.TlsException
struct  TlsException_t3534743363  : public Exception_t1436737249
{
public:
	// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::alert
	Alert_t4059934885 * ___alert_11;

public:
	inline static int32_t get_offset_of_alert_11() { return static_cast<int32_t>(offsetof(TlsException_t3534743363, ___alert_11)); }
	inline Alert_t4059934885 * get_alert_11() const { return ___alert_11; }
	inline Alert_t4059934885 ** get_address_of_alert_11() { return &___alert_11; }
	inline void set_alert_11(Alert_t4059934885 * value)
	{
		___alert_11 = value;
		Il2CppCodeGenWriteBarrier(&___alert_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
