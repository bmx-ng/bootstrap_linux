#include <brl.mod/stringbuilder.mod/.bmx/stringbuilder.bmx.release.linux.x64.h>
static BBString _s0={
	&bbStringClass,
	1,
	{10}
};
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct BBDebugScope_95{int kind; const char *name; BBDebugDecl decls[96]; };
void _brl_stringbuilder_TStringBuilder_New(struct brl_stringbuilder_TStringBuilder_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_stringbuilder_TStringBuilder;
	o->_brl_stringbuilder_tstringbuilder_buffer = 0;
	o->_brl_stringbuilder_tstringbuilder_newline = &bbEmptyString;
	o->_brl_stringbuilder_tstringbuilder_nulltext = &bbEmptyString;
	o->_brl_stringbuilder_tstringbuilder_buffer =bmx_stringbuilder_new(brl_stringbuilder_TStringBuilder_initialCapacity);
}
void _brl_stringbuilder_TStringBuilder_New_i(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_initialCapacity) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_stringbuilder_TStringBuilder;
	o->_brl_stringbuilder_tstringbuilder_buffer = 0;
	o->_brl_stringbuilder_tstringbuilder_newline = &bbEmptyString;
	o->_brl_stringbuilder_tstringbuilder_nulltext = &bbEmptyString;
	o->_brl_stringbuilder_tstringbuilder_buffer =bmx_stringbuilder_new(bbt_initialCapacity);
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_New_i_ObjectNew(BBClass * clas,BBINT bbt_initialCapacity) {
	struct brl_stringbuilder_TStringBuilder_obj* o = (struct brl_stringbuilder_TStringBuilder_obj*)bbObjectNewNC(clas);
	_brl_stringbuilder_TStringBuilder_New_i(o, bbt_initialCapacity);
	return o;
}
void _brl_stringbuilder_TStringBuilder_New_S(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_Text) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_stringbuilder_TStringBuilder;
	o->_brl_stringbuilder_tstringbuilder_buffer = 0;
	o->_brl_stringbuilder_tstringbuilder_newline = &bbEmptyString;
	o->_brl_stringbuilder_tstringbuilder_nulltext = &bbEmptyString;
	if((bbt_Text->length)>brl_stringbuilder_TStringBuilder_initialCapacity){
		o->_brl_stringbuilder_tstringbuilder_buffer =bmx_stringbuilder_new(bbt_Text->length);
	}else{
		o->_brl_stringbuilder_tstringbuilder_buffer =bmx_stringbuilder_new(brl_stringbuilder_TStringBuilder_initialCapacity);
	}
	bmx_stringbuilder_append_string(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_Text);
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_New_S_ObjectNew(BBClass * clas,BBSTRING bbt_Text) {
	struct brl_stringbuilder_TStringBuilder_obj* o = (struct brl_stringbuilder_TStringBuilder_obj*)bbObjectNewNC(clas);
	_brl_stringbuilder_TStringBuilder_New_S(o, bbt_Text);
	return o;
}
void _brl_stringbuilder_TStringBuilder_Delete(struct brl_stringbuilder_TStringBuilder_obj* o) {
	if(o->_brl_stringbuilder_tstringbuilder_buffer ){
		bmx_stringbuilder_free(o->_brl_stringbuilder_tstringbuilder_buffer );
		o->_brl_stringbuilder_tstringbuilder_buffer =0;
	}
	BBRELEASE(o->_brl_stringbuilder_tstringbuilder_newline )
	BBRELEASE(o->_brl_stringbuilder_tstringbuilder_nulltext )
	bbObjectDtor((BBOBJECT)o);
}
struct brl_stringbuilder_TStringBuilder_obj* brl_stringbuilder_TStringBuilder_Create_TTStringBuilder_S(BBSTRING bbt_Text){
	return (struct brl_stringbuilder_TStringBuilder_obj*)_brl_stringbuilder_TStringBuilder_New_S_ObjectNew((struct brl_stringbuilder_TStringBuilder_obj*)&brl_stringbuilder_TStringBuilder,bbt_Text);
}
BBINT _brl_stringbuilder_TStringBuilder_Length(struct brl_stringbuilder_TStringBuilder_obj* o){
	return bmx_stringbuilder_count(o->_brl_stringbuilder_tstringbuilder_buffer );
}
BBINT _brl_stringbuilder_TStringBuilder_Capacity(struct brl_stringbuilder_TStringBuilder_obj* o){
	return bmx_stringbuilder_capacity(o->_brl_stringbuilder_tstringbuilder_buffer );
}
void _brl_stringbuilder_TStringBuilder_SetLength_i(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_length){
	bmx_stringbuilder_setlength(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_length);
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Append_S(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_value){
	bmx_stringbuilder_append_string(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendByte_b(struct brl_stringbuilder_TStringBuilder_obj* o,BBBYTE bbt_value){
	bmx_stringbuilder_append_byte(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Append_b(struct brl_stringbuilder_TStringBuilder_obj* o,BBBYTE bbt_value){
	bmx_stringbuilder_append_byte(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendObject_TObject(struct brl_stringbuilder_TStringBuilder_obj* o,BBOBJECT bbt_obj){
	if(((BBObject*)((struct brl_stringbuilder_TStringBuilder_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&brl_stringbuilder_TStringBuilder)))!= &bbNullObject){
		bmx_stringbuilder_append_stringbuffer(o->_brl_stringbuilder_tstringbuilder_buffer ,((struct brl_stringbuilder_TStringBuilder_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&brl_stringbuilder_TStringBuilder))->_brl_stringbuilder_tstringbuilder_buffer );
	}else{
		if(((BBObject*)bbt_obj)!= &bbNullObject){
			bmx_stringbuilder_append_string(o->_brl_stringbuilder_tstringbuilder_buffer ,(bbt_obj)->clas->ToString((BBOBJECT)bbt_obj));
		}else{
			return (struct brl_stringbuilder_TStringBuilder_obj*)((struct brl_stringbuilder_TStringBuilder_obj*)o)->clas->m_AppendNull((struct brl_stringbuilder_TStringBuilder_obj*)o);
		}
	}
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Append_TObject(struct brl_stringbuilder_TStringBuilder_obj* o,BBOBJECT bbt_obj){
	if(((BBObject*)bbt_obj)!= &bbNullObject){
		bmx_stringbuilder_append_string(o->_brl_stringbuilder_tstringbuilder_buffer ,(bbt_obj)->clas->ToString((BBOBJECT)bbt_obj));
	}else{
		return (struct brl_stringbuilder_TStringBuilder_obj*)((struct brl_stringbuilder_TStringBuilder_obj*)o)->clas->m_AppendNull((struct brl_stringbuilder_TStringBuilder_obj*)o);
	}
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Append_TTStringBuilder(struct brl_stringbuilder_TStringBuilder_obj* o,struct brl_stringbuilder_TStringBuilder_obj* bbt_sb){
	bmx_stringbuilder_append_stringbuffer(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_sb->_brl_stringbuilder_tstringbuilder_buffer );
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendCString_pb(struct brl_stringbuilder_TStringBuilder_obj* o,BBBYTE* bbt_chars){
	bmx_stringbuilder_append_cstring(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_chars);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendDouble_d(struct brl_stringbuilder_TStringBuilder_obj* o,BBDOUBLE bbt_value){
	bmx_stringbuilder_append_double(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Append_d(struct brl_stringbuilder_TStringBuilder_obj* o,BBDOUBLE bbt_value){
	bmx_stringbuilder_append_double(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendFloat_f(struct brl_stringbuilder_TStringBuilder_obj* o,BBFLOAT bbt_value){
	bmx_stringbuilder_append_float(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Append_f(struct brl_stringbuilder_TStringBuilder_obj* o,BBFLOAT bbt_value){
	bmx_stringbuilder_append_float(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendInt_i(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_value){
	bmx_stringbuilder_append_int(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Append_i(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_value){
	bmx_stringbuilder_append_int(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendLong_l(struct brl_stringbuilder_TStringBuilder_obj* o,BBLONG bbt_value){
	bmx_stringbuilder_append_long(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Append_l(struct brl_stringbuilder_TStringBuilder_obj* o,BBLONG bbt_value){
	bmx_stringbuilder_append_long(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendNewLine(struct brl_stringbuilder_TStringBuilder_obj* o){
	if(o->_brl_stringbuilder_tstringbuilder_newline != &bbEmptyString){
		bmx_stringbuilder_append_string(o->_brl_stringbuilder_tstringbuilder_buffer ,o->_brl_stringbuilder_tstringbuilder_newline );
	}else{
		bmx_stringbuilder_append_string(o->_brl_stringbuilder_tstringbuilder_buffer ,&_s0);
	}
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendNull(struct brl_stringbuilder_TStringBuilder_obj* o){
	if(o->_brl_stringbuilder_tstringbuilder_nulltext != &bbEmptyString){
		bmx_stringbuilder_append_string(o->_brl_stringbuilder_tstringbuilder_buffer ,o->_brl_stringbuilder_tstringbuilder_nulltext );
	}
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendShort_s(struct brl_stringbuilder_TStringBuilder_obj* o,BBSHORT bbt_value){
	bmx_stringbuilder_append_short(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Append_s(struct brl_stringbuilder_TStringBuilder_obj* o,BBSHORT bbt_value){
	bmx_stringbuilder_append_short(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendUInt_u(struct brl_stringbuilder_TStringBuilder_obj* o,BBUINT bbt_value){
	bmx_stringbuilder_append_uint(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Append_u(struct brl_stringbuilder_TStringBuilder_obj* o,BBUINT bbt_value){
	bmx_stringbuilder_append_uint(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendULong_y(struct brl_stringbuilder_TStringBuilder_obj* o,BBULONG bbt_value){
	bmx_stringbuilder_append_ulong(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Append_y(struct brl_stringbuilder_TStringBuilder_obj* o,BBULONG bbt_value){
	bmx_stringbuilder_append_ulong(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendSizet_z(struct brl_stringbuilder_TStringBuilder_obj* o,BBSIZET bbt_value){
	bmx_stringbuilder_append_sizet(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Append_z(struct brl_stringbuilder_TStringBuilder_obj* o,BBSIZET bbt_value){
	bmx_stringbuilder_append_sizet(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendUTF8String_pb(struct brl_stringbuilder_TStringBuilder_obj* o,BBBYTE* bbt_chars){
	bmx_stringbuilder_append_utf8string(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_chars);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendShorts_psi(struct brl_stringbuilder_TStringBuilder_obj* o,BBSHORT* bbt_shorts,BBINT bbt_length){
	bmx_stringbuilder_append_shorts(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_shorts,bbt_length);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_AppendChar_i(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_char){
	bmx_stringbuilder_append_char(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_char);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
BBINT _brl_stringbuilder_TStringBuilder_Compare(struct brl_stringbuilder_TStringBuilder_obj* o,BBOBJECT bbt_o){
	if(((BBObject*)((struct brl_stringbuilder_TStringBuilder_obj*)bbObjectDowncast((BBOBJECT)bbt_o,(BBClass*)&brl_stringbuilder_TStringBuilder)))!= &bbNullObject){
		return bmx_stringbuilder_compare(o->_brl_stringbuilder_tstringbuilder_buffer ,((struct brl_stringbuilder_TStringBuilder_obj*)bbObjectDowncast((BBOBJECT)bbt_o,(BBClass*)&brl_stringbuilder_TStringBuilder))->_brl_stringbuilder_tstringbuilder_buffer );
	}
	return (&brl_stringbuilder_TStringBuilder)->super->Compare((BBOBJECT)o,(BBOBJECT)bbt_o);
}
BBINT _brl_stringbuilder_TStringBuilder_Find_Si(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_subString,BBINT bbt_startIndex){
	return bmx_stringbuilder_find(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_subString,bbt_startIndex);
}
BBINT _brl_stringbuilder_TStringBuilder_FindLast_Si(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_subString,BBINT bbt_startIndex){
	return bmx_stringbuilder_findlast(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_subString,bbt_startIndex);
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Format_SS(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBSTRING bbt_value){
	bmx_stringbuilder_format_string(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Format_Sb(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBBYTE bbt_value){
	bmx_stringbuilder_format_byte(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Format_Ss(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBSHORT bbt_value){
	bmx_stringbuilder_format_short(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Format_Si(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBINT bbt_value){
	bmx_stringbuilder_format_int(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Format_Su(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBUINT bbt_value){
	bmx_stringbuilder_format_uint(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Format_Sl(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBLONG bbt_value){
	bmx_stringbuilder_format_long(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Format_Sy(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBULONG bbt_value){
	bmx_stringbuilder_format_ulong(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Format_Sz(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBSIZET bbt_value){
	bmx_stringbuilder_format_sizet(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Format_Sf(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBFLOAT bbt_value){
	bmx_stringbuilder_format_float(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Format_Sd(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBDOUBLE bbt_value){
	bmx_stringbuilder_format_double(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_FormatString_SS(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBSTRING bbt_value){
	bmx_stringbuilder_format_string(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_FormatByte_Sb(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBBYTE bbt_value){
	bmx_stringbuilder_format_byte(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_FormatShort_Ss(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBSHORT bbt_value){
	bmx_stringbuilder_format_short(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_FormatInt_Si(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBINT bbt_value){
	bmx_stringbuilder_format_int(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_FormatUInt_Su(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBUINT bbt_value){
	bmx_stringbuilder_format_uint(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_FormatLong_Sl(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBLONG bbt_value){
	bmx_stringbuilder_format_long(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_FormatULong_Sy(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBULONG bbt_value){
	bmx_stringbuilder_format_ulong(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_FormatSizeT_Sz(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBSIZET bbt_value){
	bmx_stringbuilder_format_sizet(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_FormatFloat_Sf(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBFLOAT bbt_value){
	bmx_stringbuilder_format_float(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_FormatDouble_Sd(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_formatText,BBDOUBLE bbt_value){
	bmx_stringbuilder_format_double(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_formatText,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
BBSTRING _brl_stringbuilder_TStringBuilder_Left_i(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_length){
	return bmx_stringbuilder_left(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_length);
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Trim(struct brl_stringbuilder_TStringBuilder_obj* o){
	bmx_stringbuilder_trim(o->_brl_stringbuilder_tstringbuilder_buffer );
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Replace_SS(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_subString,BBSTRING bbt_withString){
	bmx_stringbuilder_replace(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_subString,bbt_withString);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
BBINT _brl_stringbuilder_TStringBuilder_StartsWith_S(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_subString){
	return bmx_stringbuilder_startswith(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_subString);
}
BBINT _brl_stringbuilder_TStringBuilder_EndsWith_S(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_subString){
	return bmx_stringbuilder_endswith(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_subString);
}
BBINT _brl_stringbuilder_TStringBuilder_CharAt_i(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_index){
	return bmx_stringbuilder_charat(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_index);
}
BBINT _brl_stringbuilder_TStringBuilder__iget_i(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_index){
	return bmx_stringbuilder_charat(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_index);
}
BBINT _brl_stringbuilder_TStringBuilder_Contains_S(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_subString){
	return (((struct brl_stringbuilder_TStringBuilder_obj*)o)->clas->m_Find_Si((struct brl_stringbuilder_TStringBuilder_obj*)o,bbt_subString,0)>=0);
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Join_aSTTStringBuilder(struct brl_stringbuilder_TStringBuilder_obj* o,BBARRAY bbt_bits,struct brl_stringbuilder_TStringBuilder_obj* bbt_buf){
	if(!(((BBObject*)bbt_buf)!= &bbNullObject)){
		bbt_buf=(struct brl_stringbuilder_TStringBuilder_obj*)(struct brl_stringbuilder_TStringBuilder_obj*)bbObjectNew((BBClass *)&brl_stringbuilder_TStringBuilder);
	}
	bmx_stringbuilder_join(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_bits,bbt_buf->_brl_stringbuilder_tstringbuilder_buffer );
	return (struct brl_stringbuilder_TStringBuilder_obj*)bbt_buf;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_JoinStrings_aSS(struct brl_stringbuilder_TStringBuilder_obj* o,BBARRAY bbt_bits,BBSTRING bbt_joiner){
	bmx_stringbuilder_join_strings(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_bits,bbt_joiner);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_ToLower(struct brl_stringbuilder_TStringBuilder_obj* o){
	bmx_stringbuilder_tolower(o->_brl_stringbuilder_tstringbuilder_buffer );
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_ToUpper(struct brl_stringbuilder_TStringBuilder_obj* o){
	bmx_stringbuilder_toupper(o->_brl_stringbuilder_tstringbuilder_buffer );
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_LeftAlign_i(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_length){
	bmx_stringbuilder_leftalign(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_length);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_RightAlign_i(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_length){
	bmx_stringbuilder_rightalign(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_length);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Remove_ii(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_startIndex,BBINT bbt_endIndex){
	bmx_stringbuilder_remove(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_startIndex,bbt_endIndex);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_RemoveCharAt_i(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_index){
	bmx_stringbuilder_removecharat(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_index);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Insert_iS(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_offset,BBSTRING bbt_value){
	bmx_stringbuilder_insert(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_offset,bbt_value);
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_Reverse(struct brl_stringbuilder_TStringBuilder_obj* o){
	bmx_stringbuilder_reverse(o->_brl_stringbuilder_tstringbuilder_buffer );
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
BBSTRING _brl_stringbuilder_TStringBuilder_Right_i(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_length){
	return bmx_stringbuilder_right(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_length);
}
void _brl_stringbuilder_TStringBuilder_SetCharAt_ii(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_index,BBINT bbt_char){
	bmx_stringbuilder_setcharat(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_index,bbt_char);
}
void _brl_stringbuilder_TStringBuilder__iset_ii(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_index,BBINT bbt_char){
	bmx_stringbuilder_setcharat(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_index,bbt_char);
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_SetNewLineText_S(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_newLine){
	o->_brl_stringbuilder_tstringbuilder_newline =bbt_newLine;
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
struct brl_stringbuilder_TStringBuilder_obj* _brl_stringbuilder_TStringBuilder_SetNullText_S(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_nullText){
	o->_brl_stringbuilder_tstringbuilder_nulltext =bbt_nullText;
	return (struct brl_stringbuilder_TStringBuilder_obj*)o;
}
BBSTRING _brl_stringbuilder_TStringBuilder_Substring_ii(struct brl_stringbuilder_TStringBuilder_obj* o,BBINT bbt_beginIndex,BBINT bbt_endIndex){
	return bmx_stringbuilder_substring(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_beginIndex,bbt_endIndex);
}
struct brl_stringbuilder_TSplitBuffer_obj* _brl_stringbuilder_TStringBuilder_Split_S(struct brl_stringbuilder_TStringBuilder_obj* o,BBSTRING bbt_separator){
	struct brl_stringbuilder_TSplitBuffer_obj* bbt_buf=(struct brl_stringbuilder_TSplitBuffer_obj*)(struct brl_stringbuilder_TSplitBuffer_obj*)bbObjectNew((BBClass *)&brl_stringbuilder_TSplitBuffer);
	bbt_buf->_brl_stringbuilder_tsplitbuffer_buffer =(struct brl_stringbuilder_TStringBuilder_obj*)o;
	bbt_buf->_brl_stringbuilder_tsplitbuffer_splitptr =bmx_stringbuilder_split(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_separator);
	return (struct brl_stringbuilder_TSplitBuffer_obj*)bbt_buf;
}
BBSTRING _brl_stringbuilder_TStringBuilder_ToString(struct brl_stringbuilder_TStringBuilder_obj* o){
	return bmx_stringbuilder_tostring(o->_brl_stringbuilder_tstringbuilder_buffer );
}
BBBYTE* _brl_stringbuilder_TStringBuilder_ToUTF8String(struct brl_stringbuilder_TStringBuilder_obj* o){
	return bmx_stringbuilder_toutf8string(o->_brl_stringbuilder_tstringbuilder_buffer );
}
BBSHORT* _brl_stringbuilder_TStringBuilder_ToWString(struct brl_stringbuilder_TStringBuilder_obj* o){
	return bmx_stringbuilder_towstring(o->_brl_stringbuilder_tstringbuilder_buffer );
}
BBINT _brl_stringbuilder_TStringBuilder__eq_TObject(struct brl_stringbuilder_TStringBuilder_obj* o,BBOBJECT bbt_obj){
	return (((struct brl_stringbuilder_TStringBuilder_obj*)o)->clas->Compare((struct brl_stringbuilder_TStringBuilder_obj*)o,(BBOBJECT)bbt_obj)==0);
}
BBINT _brl_stringbuilder_TStringBuilder__eq_TTStringBuilder(struct brl_stringbuilder_TStringBuilder_obj* o,struct brl_stringbuilder_TStringBuilder_obj* bbt_sb){
	return bmx_stringbuilder_equals(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_sb->_brl_stringbuilder_tstringbuilder_buffer );
}
BBINT _brl_stringbuilder_TStringBuilder__ne_TObject(struct brl_stringbuilder_TStringBuilder_obj* o,BBOBJECT bbt_obj){
	return (((struct brl_stringbuilder_TStringBuilder_obj*)o)->clas->Compare((struct brl_stringbuilder_TStringBuilder_obj*)o,(BBOBJECT)bbt_obj)!=0);
}
BBINT _brl_stringbuilder_TStringBuilder__ne_TTStringBuilder(struct brl_stringbuilder_TStringBuilder_obj* o,struct brl_stringbuilder_TStringBuilder_obj* bbt_sb){
	return (!(bmx_stringbuilder_equals(o->_brl_stringbuilder_tstringbuilder_buffer ,bbt_sb->_brl_stringbuilder_tstringbuilder_buffer )!=0));
}
BBINT brl_stringbuilder_TStringBuilder_initialCapacity;
struct BBDebugScope_95 brl_stringbuilder_TStringBuilder_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStringBuilder",
	{
		{
			BBDEBUGDECL_CONST,
			"NEW_LINE",
			"$",
			.const_value=&_s0
		},
		{
			BBDEBUGDECL_FIELD,
			"buffer",
			"*b",
			.field_offset=offsetof(struct brl_stringbuilder_TStringBuilder_obj,_brl_stringbuilder_tstringbuilder_buffer)
		},
		{
			BBDEBUGDECL_FIELD,
			"newLine",
			"$",
			.field_offset=offsetof(struct brl_stringbuilder_TStringBuilder_obj,_brl_stringbuilder_tstringbuilder_newline)
		},
		{
			BBDEBUGDECL_FIELD,
			"nullText",
			"$",
			.field_offset=offsetof(struct brl_stringbuilder_TStringBuilder_obj,_brl_stringbuilder_tstringbuilder_nulltext)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"initialCapacity",
			"i",
			.var_address=(void*)&brl_stringbuilder_TStringBuilder_initialCapacity
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_ToString
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Compare",
			"(:Object)i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Compare
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_New_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"($):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_New_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"($):TStringBuilder",
			.var_address=(void*)&brl_stringbuilder_TStringBuilder_Create_TTStringBuilder_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Length",
			"()i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Length
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Capacity",
			"()i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Capacity
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLength",
			"(i)",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_SetLength_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"($):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Append_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendByte",
			"(b):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendByte_b
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"(b):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Append_b
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendObject",
			"(:Object):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendObject_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"(:Object):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Append_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"(:TStringBuilder):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Append_TTStringBuilder
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendCString",
			"(*b):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendCString_pb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendDouble",
			"(d):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendDouble_d
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"(d):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Append_d
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendFloat",
			"(f):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendFloat_f
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"(f):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Append_f
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendInt",
			"(i):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendInt_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"(i):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Append_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendLong",
			"(l):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendLong_l
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"(l):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Append_l
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendNewLine",
			"():TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendNewLine
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendNull",
			"():TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendNull
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendShort",
			"(s):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendShort_s
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"(s):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Append_s
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendUInt",
			"(u):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendUInt_u
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"(u):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Append_u
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendULong",
			"(y):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendULong_y
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"(y):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Append_y
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendSizet",
			"(t):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendSizet_z
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"(t):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Append_z
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendUTF8String",
			"(*b):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendUTF8String_pb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendShorts",
			"(*s,i):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendShorts_psi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendChar",
			"(i):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_AppendChar_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Find",
			"($,i)i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Find_Si
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FindLast",
			"($,i)i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_FindLast_Si
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Format",
			"($,$):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Format_SS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Format",
			"($,b):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Format_Sb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Format",
			"($,s):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Format_Ss
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Format",
			"($,i):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Format_Si
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Format",
			"($,u):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Format_Su
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Format",
			"($,l):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Format_Sl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Format",
			"($,y):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Format_Sy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Format",
			"($,t):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Format_Sz
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Format",
			"($,f):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Format_Sf
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Format",
			"($,d):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Format_Sd
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FormatString",
			"($,$):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_FormatString_SS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FormatByte",
			"($,b):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_FormatByte_Sb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FormatShort",
			"($,s):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_FormatShort_Ss
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FormatInt",
			"($,i):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_FormatInt_Si
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FormatUInt",
			"($,u):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_FormatUInt_Su
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FormatLong",
			"($,l):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_FormatLong_Sl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FormatULong",
			"($,y):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_FormatULong_Sy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FormatSizeT",
			"($,t):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_FormatSizeT_Sz
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FormatFloat",
			"($,f):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_FormatFloat_Sf
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FormatDouble",
			"($,d):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_FormatDouble_Sd
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Left",
			"(i)$",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Left_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Trim",
			"():TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Trim
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Replace",
			"($,$):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Replace_SS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"StartsWith",
			"($)i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_StartsWith_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EndsWith",
			"($)i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_EndsWith_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CharAt",
			"(i)i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_CharAt_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"[]",
			"(i)i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder__iget_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Contains",
			"($)i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Contains_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Join",
			"([]$,:TStringBuilder):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Join_aSTTStringBuilder
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"JoinStrings",
			"([]$,$):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_JoinStrings_aSS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToLower",
			"():TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_ToLower
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToUpper",
			"():TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_ToUpper
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"LeftAlign",
			"(i):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_LeftAlign_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RightAlign",
			"(i):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_RightAlign_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Remove",
			"(i,i):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Remove_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveCharAt",
			"(i):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_RemoveCharAt_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Insert",
			"(i,$):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Insert_iS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Reverse",
			"():TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Reverse
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Right",
			"(i)$",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Right_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetCharAt",
			"(i,i)",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_SetCharAt_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"[]=",
			"(i,i)",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder__iset_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetNewLineText",
			"($):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_SetNewLineText_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetNullText",
			"($):TStringBuilder",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_SetNullText_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Substring",
			"(i,i)$",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Substring_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Split",
			"($):TSplitBuffer",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_Split_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToUTF8String",
			"()*b",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_ToUTF8String
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToWString",
			"()*s",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder_ToWString
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"=",
			"(:Object)i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder__eq_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"=",
			"(:TStringBuilder)i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder__eq_TTStringBuilder
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"<>",
			"(:Object)i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder__ne_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"<>",
			"(:TStringBuilder)i",
			.var_address=(void*)&_brl_stringbuilder_TStringBuilder__ne_TTStringBuilder
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_stringbuilder_TStringBuilder brl_stringbuilder_TStringBuilder={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_stringbuilder_TStringBuilder_scope,
	sizeof(struct brl_stringbuilder_TStringBuilder_obj),
	(void (*)(BBOBJECT))_brl_stringbuilder_TStringBuilder_New,
	(void (*)(BBOBJECT))_brl_stringbuilder_TStringBuilder_Delete,
	(BBSTRING (*)(BBOBJECT))_brl_stringbuilder_TStringBuilder_ToString,
	(int (*)(BBOBJECT, BBOBJECT))_brl_stringbuilder_TStringBuilder_Compare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_stringbuilder_TStringBuilder_obj,_brl_stringbuilder_tstringbuilder_nulltext) - sizeof(void*) + sizeof(BBSTRING)
	,0
	,brl_stringbuilder_TStringBuilder_Create_TTStringBuilder_S
	,_brl_stringbuilder_TStringBuilder_Length
	,_brl_stringbuilder_TStringBuilder_Capacity
	,_brl_stringbuilder_TStringBuilder_SetLength_i
	,_brl_stringbuilder_TStringBuilder_Append_S
	,_brl_stringbuilder_TStringBuilder_AppendByte_b
	,_brl_stringbuilder_TStringBuilder_Append_b
	,_brl_stringbuilder_TStringBuilder_AppendObject_TObject
	,_brl_stringbuilder_TStringBuilder_Append_TObject
	,_brl_stringbuilder_TStringBuilder_Append_TTStringBuilder
	,_brl_stringbuilder_TStringBuilder_AppendCString_pb
	,_brl_stringbuilder_TStringBuilder_AppendDouble_d
	,_brl_stringbuilder_TStringBuilder_Append_d
	,_brl_stringbuilder_TStringBuilder_AppendFloat_f
	,_brl_stringbuilder_TStringBuilder_Append_f
	,_brl_stringbuilder_TStringBuilder_AppendInt_i
	,_brl_stringbuilder_TStringBuilder_Append_i
	,_brl_stringbuilder_TStringBuilder_AppendLong_l
	,_brl_stringbuilder_TStringBuilder_Append_l
	,_brl_stringbuilder_TStringBuilder_AppendNewLine
	,_brl_stringbuilder_TStringBuilder_AppendNull
	,_brl_stringbuilder_TStringBuilder_AppendShort_s
	,_brl_stringbuilder_TStringBuilder_Append_s
	,_brl_stringbuilder_TStringBuilder_AppendUInt_u
	,_brl_stringbuilder_TStringBuilder_Append_u
	,_brl_stringbuilder_TStringBuilder_AppendULong_y
	,_brl_stringbuilder_TStringBuilder_Append_y
	,_brl_stringbuilder_TStringBuilder_AppendSizet_z
	,_brl_stringbuilder_TStringBuilder_Append_z
	,_brl_stringbuilder_TStringBuilder_AppendUTF8String_pb
	,_brl_stringbuilder_TStringBuilder_AppendShorts_psi
	,_brl_stringbuilder_TStringBuilder_AppendChar_i
	,_brl_stringbuilder_TStringBuilder_Find_Si
	,_brl_stringbuilder_TStringBuilder_FindLast_Si
	,_brl_stringbuilder_TStringBuilder_Format_SS
	,_brl_stringbuilder_TStringBuilder_Format_Sb
	,_brl_stringbuilder_TStringBuilder_Format_Ss
	,_brl_stringbuilder_TStringBuilder_Format_Si
	,_brl_stringbuilder_TStringBuilder_Format_Su
	,_brl_stringbuilder_TStringBuilder_Format_Sl
	,_brl_stringbuilder_TStringBuilder_Format_Sy
	,_brl_stringbuilder_TStringBuilder_Format_Sz
	,_brl_stringbuilder_TStringBuilder_Format_Sf
	,_brl_stringbuilder_TStringBuilder_Format_Sd
	,_brl_stringbuilder_TStringBuilder_FormatString_SS
	,_brl_stringbuilder_TStringBuilder_FormatByte_Sb
	,_brl_stringbuilder_TStringBuilder_FormatShort_Ss
	,_brl_stringbuilder_TStringBuilder_FormatInt_Si
	,_brl_stringbuilder_TStringBuilder_FormatUInt_Su
	,_brl_stringbuilder_TStringBuilder_FormatLong_Sl
	,_brl_stringbuilder_TStringBuilder_FormatULong_Sy
	,_brl_stringbuilder_TStringBuilder_FormatSizeT_Sz
	,_brl_stringbuilder_TStringBuilder_FormatFloat_Sf
	,_brl_stringbuilder_TStringBuilder_FormatDouble_Sd
	,_brl_stringbuilder_TStringBuilder_Left_i
	,_brl_stringbuilder_TStringBuilder_Trim
	,_brl_stringbuilder_TStringBuilder_Replace_SS
	,_brl_stringbuilder_TStringBuilder_StartsWith_S
	,_brl_stringbuilder_TStringBuilder_EndsWith_S
	,_brl_stringbuilder_TStringBuilder_CharAt_i
	,_brl_stringbuilder_TStringBuilder__iget_i
	,_brl_stringbuilder_TStringBuilder_Contains_S
	,_brl_stringbuilder_TStringBuilder_Join_aSTTStringBuilder
	,_brl_stringbuilder_TStringBuilder_JoinStrings_aSS
	,_brl_stringbuilder_TStringBuilder_ToLower
	,_brl_stringbuilder_TStringBuilder_ToUpper
	,_brl_stringbuilder_TStringBuilder_LeftAlign_i
	,_brl_stringbuilder_TStringBuilder_RightAlign_i
	,_brl_stringbuilder_TStringBuilder_Remove_ii
	,_brl_stringbuilder_TStringBuilder_RemoveCharAt_i
	,_brl_stringbuilder_TStringBuilder_Insert_iS
	,_brl_stringbuilder_TStringBuilder_Reverse
	,_brl_stringbuilder_TStringBuilder_Right_i
	,_brl_stringbuilder_TStringBuilder_SetCharAt_ii
	,_brl_stringbuilder_TStringBuilder__iset_ii
	,_brl_stringbuilder_TStringBuilder_SetNewLineText_S
	,_brl_stringbuilder_TStringBuilder_SetNullText_S
	,_brl_stringbuilder_TStringBuilder_Substring_ii
	,_brl_stringbuilder_TStringBuilder_Split_S
	,_brl_stringbuilder_TStringBuilder_ToUTF8String
	,_brl_stringbuilder_TStringBuilder_ToWString
	,_brl_stringbuilder_TStringBuilder__eq_TObject
	,_brl_stringbuilder_TStringBuilder__eq_TTStringBuilder
	,_brl_stringbuilder_TStringBuilder__ne_TObject
	,_brl_stringbuilder_TStringBuilder__ne_TTStringBuilder
};

void _brl_stringbuilder_TSplitBuffer_New(struct brl_stringbuilder_TSplitBuffer_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_stringbuilder_TSplitBuffer;
	o->_brl_stringbuilder_tsplitbuffer_buffer = (struct brl_stringbuilder_TStringBuilder_obj*)(&bbNullObject);
	o->_brl_stringbuilder_tsplitbuffer_splitptr = 0;
}
void _brl_stringbuilder_TSplitBuffer_Delete(struct brl_stringbuilder_TSplitBuffer_obj* o) {
	if(o->_brl_stringbuilder_tsplitbuffer_splitptr ){
		o->_brl_stringbuilder_tsplitbuffer_buffer =(struct brl_stringbuilder_TStringBuilder_obj*)&bbNullObject;
		bmx_stringbuilder_splitbuffer_free(o->_brl_stringbuilder_tsplitbuffer_splitptr );
		o->_brl_stringbuilder_tsplitbuffer_splitptr =0;
	}
	bbObjectDtor((BBOBJECT)o);
}
BBINT _brl_stringbuilder_TSplitBuffer_Length(struct brl_stringbuilder_TSplitBuffer_obj* o){
	return bmx_stringbuilder_splitbuffer_length(o->_brl_stringbuilder_tsplitbuffer_splitptr );
}
BBSTRING _brl_stringbuilder_TSplitBuffer_Text_i(struct brl_stringbuilder_TSplitBuffer_obj* o,BBINT bbt_index){
	return bmx_stringbuilder_splitbuffer_text(o->_brl_stringbuilder_tsplitbuffer_splitptr ,bbt_index);
}
BBARRAY _brl_stringbuilder_TSplitBuffer_ToArray(struct brl_stringbuilder_TSplitBuffer_obj* o){
	return bmx_stringbuilder_splitbuffer_toarray(o->_brl_stringbuilder_tsplitbuffer_splitptr );
}
struct brl_stringbuilder_TSplitBufferEnum_obj* _brl_stringbuilder_TSplitBuffer_ObjectEnumerator(struct brl_stringbuilder_TSplitBuffer_obj* o){
	struct brl_stringbuilder_TSplitBufferEnum_obj* bbt_enumeration=(struct brl_stringbuilder_TSplitBufferEnum_obj*)(struct brl_stringbuilder_TSplitBufferEnum_obj*)bbObjectNew((BBClass *)&brl_stringbuilder_TSplitBufferEnum);
	bbt_enumeration->_brl_stringbuilder_tsplitbufferenum_buffer =(struct brl_stringbuilder_TSplitBuffer_obj*)o;
	bbt_enumeration->_brl_stringbuilder_tsplitbufferenum_length =((struct brl_stringbuilder_TSplitBuffer_obj*)o)->clas->m_Length((struct brl_stringbuilder_TSplitBuffer_obj*)o);
	return (struct brl_stringbuilder_TSplitBufferEnum_obj*)bbt_enumeration;
}
struct BBDebugScope_7 brl_stringbuilder_TSplitBuffer_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSplitBuffer",
	{
		{
			BBDEBUGDECL_FIELD,
			"buffer",
			":TStringBuilder",
			.field_offset=offsetof(struct brl_stringbuilder_TSplitBuffer_obj,_brl_stringbuilder_tsplitbuffer_buffer)
		},
		{
			BBDEBUGDECL_FIELD,
			"splitPtr",
			"*b",
			.field_offset=offsetof(struct brl_stringbuilder_TSplitBuffer_obj,_brl_stringbuilder_tsplitbuffer_splitptr)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_stringbuilder_TSplitBuffer_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Length",
			"()i",
			.var_address=(void*)&_brl_stringbuilder_TSplitBuffer_Length
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Text",
			"(i)$",
			.var_address=(void*)&_brl_stringbuilder_TSplitBuffer_Text_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToArray",
			"()[]$",
			.var_address=(void*)&_brl_stringbuilder_TSplitBuffer_ToArray
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TSplitBufferEnum",
			.var_address=(void*)&_brl_stringbuilder_TSplitBuffer_ObjectEnumerator
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_stringbuilder_TSplitBuffer brl_stringbuilder_TSplitBuffer={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_stringbuilder_TSplitBuffer_scope,
	sizeof(struct brl_stringbuilder_TSplitBuffer_obj),
	(void (*)(BBOBJECT))_brl_stringbuilder_TSplitBuffer_New,
	(void (*)(BBOBJECT))_brl_stringbuilder_TSplitBuffer_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_stringbuilder_TSplitBuffer_obj,_brl_stringbuilder_tsplitbuffer_splitptr) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_stringbuilder_TSplitBuffer_Length
	,_brl_stringbuilder_TSplitBuffer_Text_i
	,_brl_stringbuilder_TSplitBuffer_ToArray
	,_brl_stringbuilder_TSplitBuffer_ObjectEnumerator
};

void _brl_stringbuilder_TSplitBufferEnum_New(struct brl_stringbuilder_TSplitBufferEnum_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_stringbuilder_TSplitBufferEnum;
	o->_brl_stringbuilder_tsplitbufferenum_index = 0;
	o->_brl_stringbuilder_tsplitbufferenum_length = 0;
	o->_brl_stringbuilder_tsplitbufferenum_buffer = (struct brl_stringbuilder_TSplitBuffer_obj*)(&bbNullObject);
}
BBINT _brl_stringbuilder_TSplitBufferEnum_HasNext(struct brl_stringbuilder_TSplitBufferEnum_obj* o){
	return (o->_brl_stringbuilder_tsplitbufferenum_index <o->_brl_stringbuilder_tsplitbufferenum_length );
}
BBOBJECT _brl_stringbuilder_TSplitBufferEnum_NextObject(struct brl_stringbuilder_TSplitBufferEnum_obj* o){
	BBSTRING bbt_s=(o->_brl_stringbuilder_tsplitbufferenum_buffer )->clas->m_Text_i((struct brl_stringbuilder_TSplitBuffer_obj*)o->_brl_stringbuilder_tsplitbufferenum_buffer ,o->_brl_stringbuilder_tsplitbufferenum_index );
	o->_brl_stringbuilder_tsplitbufferenum_index +=1;
	return (BBOBJECT)bbt_s;
}
struct BBDebugScope_6 brl_stringbuilder_TSplitBufferEnum_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSplitBufferEnum",
	{
		{
			BBDEBUGDECL_FIELD,
			"index",
			"i",
			.field_offset=offsetof(struct brl_stringbuilder_TSplitBufferEnum_obj,_brl_stringbuilder_tsplitbufferenum_index)
		},
		{
			BBDEBUGDECL_FIELD,
			"length",
			"i",
			.field_offset=offsetof(struct brl_stringbuilder_TSplitBufferEnum_obj,_brl_stringbuilder_tsplitbufferenum_length)
		},
		{
			BBDEBUGDECL_FIELD,
			"buffer",
			":TSplitBuffer",
			.field_offset=offsetof(struct brl_stringbuilder_TSplitBufferEnum_obj,_brl_stringbuilder_tsplitbufferenum_buffer)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_stringbuilder_TSplitBufferEnum_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_stringbuilder_TSplitBufferEnum_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_stringbuilder_TSplitBufferEnum_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_stringbuilder_TSplitBufferEnum brl_stringbuilder_TSplitBufferEnum={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_stringbuilder_TSplitBufferEnum_scope,
	sizeof(struct brl_stringbuilder_TSplitBufferEnum_obj),
	(void (*)(BBOBJECT))_brl_stringbuilder_TSplitBufferEnum_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_stringbuilder_TSplitBufferEnum_obj,_brl_stringbuilder_tsplitbufferenum_buffer) - sizeof(void*) + sizeof(struct brl_stringbuilder_TSplitBuffer_obj*)
	,0
	,_brl_stringbuilder_TSplitBufferEnum_HasNext
	,_brl_stringbuilder_TSplitBufferEnum_NextObject
};

static int __bb_brl_stringbuilder_stringbuilder_inited = 0;
int __bb_brl_stringbuilder_stringbuilder(){
	if (!__bb_brl_stringbuilder_stringbuilder_inited) {
		__bb_brl_stringbuilder_stringbuilder_inited = 1;
		GC_add_roots(&brl_stringbuilder_TStringBuilder_initialCapacity, &brl_stringbuilder_TStringBuilder_initialCapacity + 1);
		__bb_brl_blitz_blitz();
		_bb_brl_stringbuilder_common();
		bbObjectRegisterType((BBCLASS)&brl_stringbuilder_TStringBuilder);
		bbObjectRegisterType((BBCLASS)&brl_stringbuilder_TSplitBuffer);
		bbObjectRegisterType((BBCLASS)&brl_stringbuilder_TSplitBufferEnum);
		brl_stringbuilder_TStringBuilder_initialCapacity=0;
		brl_stringbuilder_TStringBuilder_initialCapacity=16;
		return 0;
	}
	return 0;
}