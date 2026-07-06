#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_TextReader283511965.h"

// System.IO.TextReader
struct TextReader_t283511965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SynchronizedReader
struct  SynchronizedReader_t1163115775  : public TextReader_t283511965
{
public:
	// System.IO.TextReader System.IO.SynchronizedReader::reader
	TextReader_t283511965 * ___reader_1;

public:
	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(SynchronizedReader_t1163115775, ___reader_1)); }
	inline TextReader_t283511965 * get_reader_1() const { return ___reader_1; }
	inline TextReader_t283511965 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(TextReader_t283511965 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier(&___reader_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
