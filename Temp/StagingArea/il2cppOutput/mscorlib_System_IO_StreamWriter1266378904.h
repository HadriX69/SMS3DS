#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_TextWriter3478189236.h"

// System.Text.Encoding
struct Encoding_t1523322056;
// System.IO.Stream
struct Stream_t1273022909;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IO.StreamWriter
struct StreamWriter_t1266378904;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t1266378904  : public TextWriter_t3478189236
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t1523322056 * ___internalEncoding_2;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t1273022909 * ___internalStream_3;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_4;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t4116647657* ___byte_buf_5;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_6;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t3528271667* ___decode_buf_7;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_8;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_9;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_10;

public:
	inline static int32_t get_offset_of_internalEncoding_2() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalEncoding_2)); }
	inline Encoding_t1523322056 * get_internalEncoding_2() const { return ___internalEncoding_2; }
	inline Encoding_t1523322056 ** get_address_of_internalEncoding_2() { return &___internalEncoding_2; }
	inline void set_internalEncoding_2(Encoding_t1523322056 * value)
	{
		___internalEncoding_2 = value;
		Il2CppCodeGenWriteBarrier(&___internalEncoding_2, value);
	}

	inline static int32_t get_offset_of_internalStream_3() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalStream_3)); }
	inline Stream_t1273022909 * get_internalStream_3() const { return ___internalStream_3; }
	inline Stream_t1273022909 ** get_address_of_internalStream_3() { return &___internalStream_3; }
	inline void set_internalStream_3(Stream_t1273022909 * value)
	{
		___internalStream_3 = value;
		Il2CppCodeGenWriteBarrier(&___internalStream_3, value);
	}

	inline static int32_t get_offset_of_iflush_4() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___iflush_4)); }
	inline bool get_iflush_4() const { return ___iflush_4; }
	inline bool* get_address_of_iflush_4() { return &___iflush_4; }
	inline void set_iflush_4(bool value)
	{
		___iflush_4 = value;
	}

	inline static int32_t get_offset_of_byte_buf_5() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_buf_5)); }
	inline ByteU5BU5D_t4116647657* get_byte_buf_5() const { return ___byte_buf_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_byte_buf_5() { return &___byte_buf_5; }
	inline void set_byte_buf_5(ByteU5BU5D_t4116647657* value)
	{
		___byte_buf_5 = value;
		Il2CppCodeGenWriteBarrier(&___byte_buf_5, value);
	}

	inline static int32_t get_offset_of_byte_pos_6() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_pos_6)); }
	inline int32_t get_byte_pos_6() const { return ___byte_pos_6; }
	inline int32_t* get_address_of_byte_pos_6() { return &___byte_pos_6; }
	inline void set_byte_pos_6(int32_t value)
	{
		___byte_pos_6 = value;
	}

	inline static int32_t get_offset_of_decode_buf_7() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_buf_7)); }
	inline CharU5BU5D_t3528271667* get_decode_buf_7() const { return ___decode_buf_7; }
	inline CharU5BU5D_t3528271667** get_address_of_decode_buf_7() { return &___decode_buf_7; }
	inline void set_decode_buf_7(CharU5BU5D_t3528271667* value)
	{
		___decode_buf_7 = value;
		Il2CppCodeGenWriteBarrier(&___decode_buf_7, value);
	}

	inline static int32_t get_offset_of_decode_pos_8() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_pos_8)); }
	inline int32_t get_decode_pos_8() const { return ___decode_pos_8; }
	inline int32_t* get_address_of_decode_pos_8() { return &___decode_pos_8; }
	inline void set_decode_pos_8(int32_t value)
	{
		___decode_pos_8 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_9() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___DisposedAlready_9)); }
	inline bool get_DisposedAlready_9() const { return ___DisposedAlready_9; }
	inline bool* get_address_of_DisposedAlready_9() { return &___DisposedAlready_9; }
	inline void set_DisposedAlready_9(bool value)
	{
		___DisposedAlready_9 = value;
	}

	inline static int32_t get_offset_of_preamble_done_10() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___preamble_done_10)); }
	inline bool get_preamble_done_10() const { return ___preamble_done_10; }
	inline bool* get_address_of_preamble_done_10() { return &___preamble_done_10; }
	inline void set_preamble_done_10(bool value)
	{
		___preamble_done_10 = value;
	}
};

struct StreamWriter_t1266378904_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1266378904 * ___Null_11;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904_StaticFields, ___Null_11)); }
	inline StreamWriter_t1266378904 * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t1266378904 ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t1266378904 * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier(&___Null_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
