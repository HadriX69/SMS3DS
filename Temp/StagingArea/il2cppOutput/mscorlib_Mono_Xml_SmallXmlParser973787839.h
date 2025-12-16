#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t2787973995;
// System.IO.TextReader
struct TextReader_t283511965;
// System.Collections.Stack
struct Stack_t2329662280;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1712802186;
// System.Char[]
struct CharU5BU5D_t3528271667;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t567962447;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SmallXmlParser
struct  SmallXmlParser_t973787839  : public Il2CppObject
{
public:
	// Mono.Xml.SmallXmlParser/IContentHandler Mono.Xml.SmallXmlParser::handler
	Il2CppObject * ___handler_0;
	// System.IO.TextReader Mono.Xml.SmallXmlParser::reader
	TextReader_t283511965 * ___reader_1;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::elementNames
	Stack_t2329662280 * ___elementNames_2;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::xmlSpaces
	Stack_t2329662280 * ___xmlSpaces_3;
	// System.String Mono.Xml.SmallXmlParser::xmlSpace
	String_t* ___xmlSpace_4;
	// System.Text.StringBuilder Mono.Xml.SmallXmlParser::buffer
	StringBuilder_t1712802186 * ___buffer_5;
	// System.Char[] Mono.Xml.SmallXmlParser::nameBuffer
	CharU5BU5D_t3528271667* ___nameBuffer_6;
	// System.Boolean Mono.Xml.SmallXmlParser::isWhitespace
	bool ___isWhitespace_7;
	// Mono.Xml.SmallXmlParser/AttrListImpl Mono.Xml.SmallXmlParser::attributes
	AttrListImpl_t567962447 * ___attributes_8;
	// System.Int32 Mono.Xml.SmallXmlParser::line
	int32_t ___line_9;
	// System.Int32 Mono.Xml.SmallXmlParser::column
	int32_t ___column_10;
	// System.Boolean Mono.Xml.SmallXmlParser::resetColumn
	bool ___resetColumn_11;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___handler_0)); }
	inline Il2CppObject * get_handler_0() const { return ___handler_0; }
	inline Il2CppObject ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(Il2CppObject * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier(&___handler_0, value);
	}

	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___reader_1)); }
	inline TextReader_t283511965 * get_reader_1() const { return ___reader_1; }
	inline TextReader_t283511965 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(TextReader_t283511965 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier(&___reader_1, value);
	}

	inline static int32_t get_offset_of_elementNames_2() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___elementNames_2)); }
	inline Stack_t2329662280 * get_elementNames_2() const { return ___elementNames_2; }
	inline Stack_t2329662280 ** get_address_of_elementNames_2() { return &___elementNames_2; }
	inline void set_elementNames_2(Stack_t2329662280 * value)
	{
		___elementNames_2 = value;
		Il2CppCodeGenWriteBarrier(&___elementNames_2, value);
	}

	inline static int32_t get_offset_of_xmlSpaces_3() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___xmlSpaces_3)); }
	inline Stack_t2329662280 * get_xmlSpaces_3() const { return ___xmlSpaces_3; }
	inline Stack_t2329662280 ** get_address_of_xmlSpaces_3() { return &___xmlSpaces_3; }
	inline void set_xmlSpaces_3(Stack_t2329662280 * value)
	{
		___xmlSpaces_3 = value;
		Il2CppCodeGenWriteBarrier(&___xmlSpaces_3, value);
	}

	inline static int32_t get_offset_of_xmlSpace_4() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___xmlSpace_4)); }
	inline String_t* get_xmlSpace_4() const { return ___xmlSpace_4; }
	inline String_t** get_address_of_xmlSpace_4() { return &___xmlSpace_4; }
	inline void set_xmlSpace_4(String_t* value)
	{
		___xmlSpace_4 = value;
		Il2CppCodeGenWriteBarrier(&___xmlSpace_4, value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___buffer_5)); }
	inline StringBuilder_t1712802186 * get_buffer_5() const { return ___buffer_5; }
	inline StringBuilder_t1712802186 ** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(StringBuilder_t1712802186 * value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_5, value);
	}

	inline static int32_t get_offset_of_nameBuffer_6() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___nameBuffer_6)); }
	inline CharU5BU5D_t3528271667* get_nameBuffer_6() const { return ___nameBuffer_6; }
	inline CharU5BU5D_t3528271667** get_address_of_nameBuffer_6() { return &___nameBuffer_6; }
	inline void set_nameBuffer_6(CharU5BU5D_t3528271667* value)
	{
		___nameBuffer_6 = value;
		Il2CppCodeGenWriteBarrier(&___nameBuffer_6, value);
	}

	inline static int32_t get_offset_of_isWhitespace_7() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___isWhitespace_7)); }
	inline bool get_isWhitespace_7() const { return ___isWhitespace_7; }
	inline bool* get_address_of_isWhitespace_7() { return &___isWhitespace_7; }
	inline void set_isWhitespace_7(bool value)
	{
		___isWhitespace_7 = value;
	}

	inline static int32_t get_offset_of_attributes_8() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___attributes_8)); }
	inline AttrListImpl_t567962447 * get_attributes_8() const { return ___attributes_8; }
	inline AttrListImpl_t567962447 ** get_address_of_attributes_8() { return &___attributes_8; }
	inline void set_attributes_8(AttrListImpl_t567962447 * value)
	{
		___attributes_8 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_8, value);
	}

	inline static int32_t get_offset_of_line_9() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___line_9)); }
	inline int32_t get_line_9() const { return ___line_9; }
	inline int32_t* get_address_of_line_9() { return &___line_9; }
	inline void set_line_9(int32_t value)
	{
		___line_9 = value;
	}

	inline static int32_t get_offset_of_column_10() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___column_10)); }
	inline int32_t get_column_10() const { return ___column_10; }
	inline int32_t* get_address_of_column_10() { return &___column_10; }
	inline void set_column_10(int32_t value)
	{
		___column_10 = value;
	}

	inline static int32_t get_offset_of_resetColumn_11() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___resetColumn_11)); }
	inline bool get_resetColumn_11() const { return ___resetColumn_11; }
	inline bool* get_address_of_resetColumn_11() { return &___resetColumn_11; }
	inline void set_resetColumn_11(bool value)
	{
		___resetColumn_11 = value;
	}
};

struct SmallXmlParser_t973787839_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.SmallXmlParser::<>f__switch$map18
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map18_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map18_12() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839_StaticFields, ___U3CU3Ef__switchU24map18_12)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map18_12() const { return ___U3CU3Ef__switchU24map18_12; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map18_12() { return &___U3CU3Ef__switchU24map18_12; }
	inline void set_U3CU3Ef__switchU24map18_12(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map18_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map18_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
