#ifndef BRL_STRINGBUILDER_COMMON_BMX_RELEASE_LINUX_X64_H
#define BRL_STRINGBUILDER_COMMON_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
int _bb_brl_stringbuilder_common();
extern BBBYTE* bmx_stringbuilder_new(BBINT bbt_initial);
extern void bmx_stringbuilder_free(BBBYTE* bbt_buffer);
extern BBINT bmx_stringbuilder_count(BBBYTE* bbt_buffer);
extern BBINT bmx_stringbuilder_capacity(BBBYTE* bbt_buffer);
extern void bmx_stringbuilder_setlength(BBBYTE* bbt_buffer,BBINT bbt_length);
extern BBSTRING bmx_stringbuilder_tostring(BBBYTE* bbt_buffer);
extern void bmx_stringbuilder_append_string(BBBYTE* bbt_buffer,BBSTRING bbt_value);
extern void bmx_stringbuilder_remove(BBBYTE* bbt_buffer,BBINT bbt_startIndex,BBINT bbt_endIndex);
extern void bmx_stringbuilder_insert(BBBYTE* bbt_buffer,BBINT bbt_offset,BBSTRING bbt_value);
extern void bmx_stringbuilder_reverse(BBBYTE* bbt_buffer);
extern BBSTRING bmx_stringbuilder_substring(BBBYTE* bbt_buffer,BBINT bbt_beginIndex,BBINT bbt_endIndex);
extern void bmx_stringbuilder_append_stringbuffer(BBBYTE* bbt_buffer,BBBYTE* bbt_buffer2);
extern BBINT bmx_stringbuilder_startswith(BBBYTE* bbt_buffer,BBSTRING bbt_subString);
extern BBINT bmx_stringbuilder_endswith(BBBYTE* bbt_buffer,BBSTRING bbt_subString);
extern BBINT bmx_stringbuilder_find(BBBYTE* bbt_buffer,BBSTRING bbt_subString,BBINT bbt_startIndex);
extern BBINT bmx_stringbuilder_findlast(BBBYTE* bbt_buffer,BBSTRING bbt_subString,BBINT bbt_startIndex);
extern void bmx_stringbuilder_tolower(BBBYTE* bbt_buffer);
extern void bmx_stringbuilder_toupper(BBBYTE* bbt_buffer);
extern void bmx_stringbuilder_trim(BBBYTE* bbt_buffer);
extern void bmx_stringbuilder_replace(BBBYTE* bbt_buffer,BBSTRING bbt_subString,BBSTRING bbt_withString);
extern void bmx_stringbuilder_join(BBBYTE* bbt_buffer,BBARRAY bbt_bits,BBBYTE* bbt_newBuffer);
extern BBBYTE* bmx_stringbuilder_split(BBBYTE* bbt_buffer,BBSTRING bbt_separator);
extern void bmx_stringbuilder_setcharat(BBBYTE* bbt_buffer,BBINT bbt_index,BBINT bbt_char);
extern BBINT bmx_stringbuilder_charat(BBBYTE* bbt_buffer,BBINT bbt_index);
extern void bmx_stringbuilder_removecharat(BBBYTE* bbt_buffer,BBINT bbt_index);
extern void bmx_stringbuilder_append_cstring(BBBYTE* bbt_buffer,BBBYTE* bbt_chars);
extern void bmx_stringbuilder_append_utf8string(BBBYTE* bbt_buffer,BBBYTE* bbt_chars);
extern void bmx_stringbuilder_append_double(BBBYTE* bbt_buffer,BBDOUBLE bbt_value);
extern void bmx_stringbuilder_append_float(BBBYTE* bbt_buffer,BBFLOAT bbt_value);
extern void bmx_stringbuilder_append_int(BBBYTE* bbt_buffer,BBINT bbt_value);
extern void bmx_stringbuilder_append_long(BBBYTE* bbt_buffer,BBLONG bbt_value);
extern void bmx_stringbuilder_append_short(BBBYTE* bbt_buffer,BBSHORT bbt_value);
extern void bmx_stringbuilder_append_byte(BBBYTE* bbt_buffer,BBBYTE bbt_value);
extern void bmx_stringbuilder_append_uint(BBBYTE* bbt_buffer,BBUINT bbt_value);
extern void bmx_stringbuilder_append_ulong(BBBYTE* bbt_buffer,BBULONG bbt_value);
extern void bmx_stringbuilder_append_sizet(BBBYTE* bbt_buffer,BBSIZET bbt_value);
extern void bmx_stringbuilder_append_shorts(BBBYTE* bbt_buffer,BBSHORT* bbt_shorts,BBINT bbt_length);
extern void bmx_stringbuilder_append_char(BBBYTE* bbt_buffer,BBINT bbt_value);
extern BBSTRING bmx_stringbuilder_left(BBBYTE* bbt_buffer,BBINT bbt_length);
extern BBSTRING bmx_stringbuilder_right(BBBYTE* bbt_buffer,BBINT bbt_length);
extern BBINT bmx_stringbuilder_compare(BBBYTE* bbt_buffer,BBBYTE* bbt_buffer2);
extern void bmx_stringbuilder_leftalign(BBBYTE* bbt_buffer,BBINT bbt_length);
extern void bmx_stringbuilder_rightalign(BBBYTE* bbt_buffer,BBINT bbt_length);
extern BBBYTE* bmx_stringbuilder_toutf8string(BBBYTE* bbt_buffer);
extern BBSHORT* bmx_stringbuilder_towstring(BBBYTE* bbt_buffer);
extern void bmx_stringbuilder_join_strings(BBBYTE* bbt_buffer,BBARRAY bbt_bits,BBSTRING bbt_joiner);
extern void bmx_stringbuilder_format_string(BBBYTE* bbt_buffer,BBSTRING bbt_formatText,BBSTRING bbt_value);
extern void bmx_stringbuilder_format_byte(BBBYTE* bbt_buffer,BBSTRING bbt_formatText,BBBYTE bbt_value);
extern void bmx_stringbuilder_format_short(BBBYTE* bbt_buffer,BBSTRING bbt_formatText,BBSHORT bbt_value);
extern void bmx_stringbuilder_format_int(BBBYTE* bbt_buffer,BBSTRING bbt_formatText,BBINT bbt_value);
extern void bmx_stringbuilder_format_uint(BBBYTE* bbt_buffer,BBSTRING bbt_formatText,BBUINT bbt_value);
extern void bmx_stringbuilder_format_long(BBBYTE* bbt_buffer,BBSTRING bbt_formatText,BBLONG bbt_value);
extern void bmx_stringbuilder_format_ulong(BBBYTE* bbt_buffer,BBSTRING bbt_formatText,BBULONG bbt_value);
extern void bmx_stringbuilder_format_sizet(BBBYTE* bbt_buffer,BBSTRING bbt_formatText,BBSIZET bbt_value);
extern void bmx_stringbuilder_format_float(BBBYTE* bbt_buffer,BBSTRING bbt_formatText,BBFLOAT bbt_value);
extern void bmx_stringbuilder_format_double(BBBYTE* bbt_buffer,BBSTRING bbt_formatText,BBDOUBLE bbt_value);
extern BBINT bmx_stringbuilder_equals(BBBYTE* bbt_buffer,BBBYTE* bbt_other);
extern BBINT bmx_stringbuilder_splitbuffer_length(BBBYTE* bbt_splitPtr);
extern BBSTRING bmx_stringbuilder_splitbuffer_text(BBBYTE* bbt_splitPtr,BBINT bbt_index);
extern void bmx_stringbuilder_splitbuffer_free(BBBYTE* bbt_splitPtr);
extern BBARRAY bmx_stringbuilder_splitbuffer_toarray(BBBYTE* bbt_splitPtr);

#endif
