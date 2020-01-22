#ifndef BCC_STRINGBUFFER_COMMON_BMX_RELEASE_LINUX_X64_H
#define BCC_STRINGBUFFER_COMMON_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.linux.x64.h>
int _bb_bcc_stringbuffer_common();
extern BBBYTE* bmx_stringbuffer_new(BBINT bbt_initial);
extern void bmx_stringbuffer_free(BBBYTE* bbt_buffer);
extern BBINT bmx_stringbuffer_count(BBBYTE* bbt_buffer);
extern BBINT bmx_stringbuffer_capacity(BBBYTE* bbt_buffer);
extern void bmx_stringbuffer_setlength(BBBYTE* bbt_buffer,BBINT bbt_length);
extern BBSTRING bmx_stringbuffer_tostring(BBBYTE* bbt_buffer);
extern void bmx_stringbuffer_append_string(BBBYTE* bbt_buffer,BBSTRING bbt_value);
extern void bmx_stringbuffer_append_char(BBBYTE* bbt_buffer,BBINT bbt_value);
extern void bmx_stringbuffer_remove(BBBYTE* bbt_buffer,BBINT bbt_startIndex,BBINT bbt_endIndex);
extern void bmx_stringbuffer_insert(BBBYTE* bbt_buffer,BBINT bbt_offset,BBSTRING bbt_value);
extern void bmx_stringbuffer_reverse(BBBYTE* bbt_buffer);
extern BBSTRING bmx_stringbuffer_substring(BBBYTE* bbt_buffer,BBINT bbt_beginIndex,BBINT bbt_endIndex);
extern void bmx_stringbuffer_append_stringbuffer(BBBYTE* bbt_buffer,BBBYTE* bbt_buffer2);
extern BBINT bmx_stringbuffer_startswith(BBBYTE* bbt_buffer,BBSTRING bbt_subString);
extern BBINT bmx_stringbuffer_endswith(BBBYTE* bbt_buffer,BBSTRING bbt_subString);
extern BBINT bmx_stringbuffer_find(BBBYTE* bbt_buffer,BBSTRING bbt_subString,BBINT bbt_startIndex);
extern BBINT bmx_stringbuffer_findlast(BBBYTE* bbt_buffer,BBSTRING bbt_subString,BBINT bbt_startIndex);
extern void bmx_stringbuffer_tolower(BBBYTE* bbt_buffer);
extern void bmx_stringbuffer_toupper(BBBYTE* bbt_buffer);
extern void bmx_stringbuffer_trim(BBBYTE* bbt_buffer);
extern void bmx_stringbuffer_replace(BBBYTE* bbt_buffer,BBSTRING bbt_subString,BBSTRING bbt_withString);
extern void bmx_stringbuffer_join(BBBYTE* bbt_buffer,BBARRAY bbt_bits,BBBYTE* bbt_newBuffer);
extern BBBYTE* bmx_stringbuffer_split(BBBYTE* bbt_buffer,BBSTRING bbt_separator);
extern void bmx_stringbuffer_setcharat(BBBYTE* bbt_buffer,BBINT bbt_index,BBINT bbt_char);
extern BBINT bmx_stringbuffer_charat(BBBYTE* bbt_buffer,BBINT bbt_index);
extern void bmx_stringbuffer_removecharat(BBBYTE* bbt_buffer,BBINT bbt_index);
extern void bmx_stringbuffer_append_cstring(BBBYTE* bbt_buffer,BBBYTE* bbt_chars);
extern void bmx_stringbuffer_append_utf8string(BBBYTE* bbt_buffer,BBBYTE* bbt_chars);
extern void bmx_stringbuffer_append_shorts(BBBYTE* bbt_buffer,BBSHORT* bbt_shorts,BBINT bbt_length);
extern BBINT bmx_stringbuffer_splitbuffer_length(BBBYTE* bbt_splitPtr);
extern BBSTRING bmx_stringbuffer_splitbuffer_text(BBBYTE* bbt_splitPtr,BBINT bbt_index);
extern void bmx_stringbuffer_splitbuffer_free(BBBYTE* bbt_splitPtr);
extern BBARRAY bmx_stringbuffer_splitbuffer_toarray(BBBYTE* bbt_splitPtr);

#endif
