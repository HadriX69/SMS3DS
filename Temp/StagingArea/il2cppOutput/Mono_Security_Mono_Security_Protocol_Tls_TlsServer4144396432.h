#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter1728406613.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1542168550;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.String[]
struct StringU5BU5D_t1281789340;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t4253920197;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.TlsServerSettings
struct  TlsServerSettings_t4144396432  : public Il2CppObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::certificates
	X509CertificateCollection_t1542168550 * ___certificates_0;
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::certificateRSA
	RSA_t2385438082 * ___certificateRSA_1;
	// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::rsaParameters
	RSAParameters_t1728406613  ___rsaParameters_2;
	// System.Byte[] Mono.Security.Protocol.Tls.TlsServerSettings::signedParams
	ByteU5BU5D_t4116647657* ___signedParams_3;
	// System.String[] Mono.Security.Protocol.Tls.TlsServerSettings::distinguisedNames
	StringU5BU5D_t1281789340* ___distinguisedNames_4;
	// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::serverKeyExchange
	bool ___serverKeyExchange_5;
	// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::certificateRequest
	bool ___certificateRequest_6;
	// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.TlsServerSettings::certificateTypes
	ClientCertificateTypeU5BU5D_t4253920197* ___certificateTypes_7;

public:
	inline static int32_t get_offset_of_certificates_0() { return static_cast<int32_t>(offsetof(TlsServerSettings_t4144396432, ___certificates_0)); }
	inline X509CertificateCollection_t1542168550 * get_certificates_0() const { return ___certificates_0; }
	inline X509CertificateCollection_t1542168550 ** get_address_of_certificates_0() { return &___certificates_0; }
	inline void set_certificates_0(X509CertificateCollection_t1542168550 * value)
	{
		___certificates_0 = value;
		Il2CppCodeGenWriteBarrier(&___certificates_0, value);
	}

	inline static int32_t get_offset_of_certificateRSA_1() { return static_cast<int32_t>(offsetof(TlsServerSettings_t4144396432, ___certificateRSA_1)); }
	inline RSA_t2385438082 * get_certificateRSA_1() const { return ___certificateRSA_1; }
	inline RSA_t2385438082 ** get_address_of_certificateRSA_1() { return &___certificateRSA_1; }
	inline void set_certificateRSA_1(RSA_t2385438082 * value)
	{
		___certificateRSA_1 = value;
		Il2CppCodeGenWriteBarrier(&___certificateRSA_1, value);
	}

	inline static int32_t get_offset_of_rsaParameters_2() { return static_cast<int32_t>(offsetof(TlsServerSettings_t4144396432, ___rsaParameters_2)); }
	inline RSAParameters_t1728406613  get_rsaParameters_2() const { return ___rsaParameters_2; }
	inline RSAParameters_t1728406613 * get_address_of_rsaParameters_2() { return &___rsaParameters_2; }
	inline void set_rsaParameters_2(RSAParameters_t1728406613  value)
	{
		___rsaParameters_2 = value;
	}

	inline static int32_t get_offset_of_signedParams_3() { return static_cast<int32_t>(offsetof(TlsServerSettings_t4144396432, ___signedParams_3)); }
	inline ByteU5BU5D_t4116647657* get_signedParams_3() const { return ___signedParams_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_signedParams_3() { return &___signedParams_3; }
	inline void set_signedParams_3(ByteU5BU5D_t4116647657* value)
	{
		___signedParams_3 = value;
		Il2CppCodeGenWriteBarrier(&___signedParams_3, value);
	}

	inline static int32_t get_offset_of_distinguisedNames_4() { return static_cast<int32_t>(offsetof(TlsServerSettings_t4144396432, ___distinguisedNames_4)); }
	inline StringU5BU5D_t1281789340* get_distinguisedNames_4() const { return ___distinguisedNames_4; }
	inline StringU5BU5D_t1281789340** get_address_of_distinguisedNames_4() { return &___distinguisedNames_4; }
	inline void set_distinguisedNames_4(StringU5BU5D_t1281789340* value)
	{
		___distinguisedNames_4 = value;
		Il2CppCodeGenWriteBarrier(&___distinguisedNames_4, value);
	}

	inline static int32_t get_offset_of_serverKeyExchange_5() { return static_cast<int32_t>(offsetof(TlsServerSettings_t4144396432, ___serverKeyExchange_5)); }
	inline bool get_serverKeyExchange_5() const { return ___serverKeyExchange_5; }
	inline bool* get_address_of_serverKeyExchange_5() { return &___serverKeyExchange_5; }
	inline void set_serverKeyExchange_5(bool value)
	{
		___serverKeyExchange_5 = value;
	}

	inline static int32_t get_offset_of_certificateRequest_6() { return static_cast<int32_t>(offsetof(TlsServerSettings_t4144396432, ___certificateRequest_6)); }
	inline bool get_certificateRequest_6() const { return ___certificateRequest_6; }
	inline bool* get_address_of_certificateRequest_6() { return &___certificateRequest_6; }
	inline void set_certificateRequest_6(bool value)
	{
		___certificateRequest_6 = value;
	}

	inline static int32_t get_offset_of_certificateTypes_7() { return static_cast<int32_t>(offsetof(TlsServerSettings_t4144396432, ___certificateTypes_7)); }
	inline ClientCertificateTypeU5BU5D_t4253920197* get_certificateTypes_7() const { return ___certificateTypes_7; }
	inline ClientCertificateTypeU5BU5D_t4253920197** get_address_of_certificateTypes_7() { return &___certificateTypes_7; }
	inline void set_certificateTypes_7(ClientCertificateTypeU5BU5D_t4253920197* value)
	{
		___certificateTypes_7 = value;
		Il2CppCodeGenWriteBarrier(&___certificateTypes_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
