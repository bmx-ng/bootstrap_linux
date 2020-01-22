#include "stringbuffer_core.bmx.release.linux.x64.h"
struct BBDebugScope_33{int kind; const char *name; BBDebugDecl decls[34]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
void __m_stringbuffer_core_TStringBuffer_New(struct _m_stringbuffer_core_TStringBuffer_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_stringbuffer_core_TStringBuffer;
	o->__m_stringbuffer_core_tstringbuffer_buffer = 0;
	o->__m_stringbuffer_core_tstringbuffer_buffer =bmx_stringbuffer_new(_m_stringbuffer_core_TStringBuffer_initialCapacity);
}
void __m_stringbuffer_core_TStringBuffer_New_i(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBINT bbt_initialCapacity) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_stringbuffer_core_TStringBuffer;
	o->__m_stringbuffer_core_tstringbuffer_buffer = 0;
	o->__m_stringbuffer_core_tstringbuffer_buffer =bmx_stringbuffer_new(bbt_initialCapacity);
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_New_i_ObjectNew(BBClass * clas,BBINT bbt_initialCapacity) {
	struct _m_stringbuffer_core_TStringBuffer_obj* o = bbObjectAtomicNewNC(clas);
	__m_stringbuffer_core_TStringBuffer_New_i(o, bbt_initialCapacity);
	return o;
}
void __m_stringbuffer_core_TStringBuffer_Delete(struct _m_stringbuffer_core_TStringBuffer_obj* o) {
	if(o->__m_stringbuffer_core_tstringbuffer_buffer ){
		bmx_stringbuffer_free(o->__m_stringbuffer_core_tstringbuffer_buffer );
		o->__m_stringbuffer_core_tstringbuffer_buffer =0;
	}
	bbObjectDtor((BBOBJECT)o);
}
struct _m_stringbuffer_core_TStringBuffer_obj* _m_stringbuffer_core_TStringBuffer_Create_TTStringBuffer_S(BBSTRING bbt_Text){
	struct _m_stringbuffer_core_TStringBuffer_obj* bbt_this=(struct _m_stringbuffer_core_TStringBuffer_obj*)(&bbNullObject);
	if((bbt_Text->length)>_m_stringbuffer_core_TStringBuffer_initialCapacity){
		bbt_this=(struct _m_stringbuffer_core_TStringBuffer_obj*)__m_stringbuffer_core_TStringBuffer_New_i_ObjectNew((struct _m_stringbuffer_core_TStringBuffer_obj*)&_m_stringbuffer_core_TStringBuffer,(bbt_Text->length));
	}else{
		bbt_this=(struct _m_stringbuffer_core_TStringBuffer_obj*)(struct _m_stringbuffer_core_TStringBuffer_obj*)bbObjectAtomicNew((BBClass *)&_m_stringbuffer_core_TStringBuffer);
	}
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)(bbt_this)->clas->m_Append_S((struct _m_stringbuffer_core_TStringBuffer_obj*)bbt_this,bbt_Text);
}
BBINT __m_stringbuffer_core_TStringBuffer_Length(struct _m_stringbuffer_core_TStringBuffer_obj* o){
	return bmx_stringbuffer_count(o->__m_stringbuffer_core_tstringbuffer_buffer );
}
BBINT __m_stringbuffer_core_TStringBuffer_Capacity(struct _m_stringbuffer_core_TStringBuffer_obj* o){
	return bmx_stringbuffer_capacity(o->__m_stringbuffer_core_tstringbuffer_buffer );
}
void __m_stringbuffer_core_TStringBuffer_SetLength_i(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBINT bbt_length){
	bmx_stringbuffer_setlength(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_length);
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Append_S(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBSTRING bbt_value){
	bmx_stringbuffer_append_string(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_value);
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_AppendObject_TObject(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBOBJECT bbt_obj){
	if(((BBObject*)((struct _m_stringbuffer_core_TStringBuffer_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&_m_stringbuffer_core_TStringBuffer)))!= &bbNullObject){
		bmx_stringbuffer_append_stringbuffer(o->__m_stringbuffer_core_tstringbuffer_buffer ,((struct _m_stringbuffer_core_TStringBuffer_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&_m_stringbuffer_core_TStringBuffer))->__m_stringbuffer_core_tstringbuffer_buffer );
	}else{
		bmx_stringbuffer_append_string(o->__m_stringbuffer_core_tstringbuffer_buffer ,(bbt_obj)->clas->ToString((BBOBJECT)bbt_obj));
	}
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_AppendCString_pb(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBBYTE* bbt_chars){
	bmx_stringbuffer_append_cstring(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_chars);
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_AppendUTF8String_pb(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBBYTE* bbt_chars){
	bmx_stringbuffer_append_utf8string(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_chars);
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_AppendShorts_psi(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBSHORT* bbt_shorts,BBINT bbt_length){
	bmx_stringbuffer_append_shorts(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_shorts,bbt_length);
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_AppendChar_i(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBINT bbt_char){
	bmx_stringbuffer_append_char(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_char);
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
BBINT __m_stringbuffer_core_TStringBuffer_Find_Si(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBSTRING bbt_subString,BBINT bbt_startIndex){
	return bmx_stringbuffer_find(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_subString,bbt_startIndex);
}
BBINT __m_stringbuffer_core_TStringBuffer_FindLast_Si(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBSTRING bbt_subString,BBINT bbt_startIndex){
	return bmx_stringbuffer_findlast(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_subString,bbt_startIndex);
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Trim(struct _m_stringbuffer_core_TStringBuffer_obj* o){
	bmx_stringbuffer_trim(o->__m_stringbuffer_core_tstringbuffer_buffer );
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Replace_SS(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBSTRING bbt_subString,BBSTRING bbt_withString){
	bmx_stringbuffer_replace(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_subString,bbt_withString);
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
BBINT __m_stringbuffer_core_TStringBuffer_StartsWith_S(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBSTRING bbt_subString){
	return bmx_stringbuffer_startswith(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_subString);
}
BBINT __m_stringbuffer_core_TStringBuffer_EndsWith_S(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBSTRING bbt_subString){
	return bmx_stringbuffer_endswith(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_subString);
}
BBINT __m_stringbuffer_core_TStringBuffer_CharAt_i(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBINT bbt_index){
	return bmx_stringbuffer_charat(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_index);
}
BBINT __m_stringbuffer_core_TStringBuffer_Contains_S(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBSTRING bbt_subString){
	return (((struct _m_stringbuffer_core_TStringBuffer_obj*)o)->clas->m_Find_Si((struct _m_stringbuffer_core_TStringBuffer_obj*)o,bbt_subString,0)>=0);
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Join_aS(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBARRAY bbt_bits){
	struct _m_stringbuffer_core_TStringBuffer_obj* bbt_buf=(struct _m_stringbuffer_core_TStringBuffer_obj*)(struct _m_stringbuffer_core_TStringBuffer_obj*)bbObjectAtomicNew((BBClass *)&_m_stringbuffer_core_TStringBuffer);
	bmx_stringbuffer_join(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_bits,bbt_buf->__m_stringbuffer_core_tstringbuffer_buffer );
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)bbt_buf;
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_ToLower(struct _m_stringbuffer_core_TStringBuffer_obj* o){
	bmx_stringbuffer_tolower(o->__m_stringbuffer_core_tstringbuffer_buffer );
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_ToUpper(struct _m_stringbuffer_core_TStringBuffer_obj* o){
	bmx_stringbuffer_toupper(o->__m_stringbuffer_core_tstringbuffer_buffer );
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Remove_ii(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBINT bbt_startIndex,BBINT bbt_endIndex){
	bmx_stringbuffer_remove(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_startIndex,bbt_endIndex);
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_RemoveCharAt_i(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBINT bbt_index){
	bmx_stringbuffer_removecharat(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_index);
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Insert_iS(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBINT bbt_offset,BBSTRING bbt_value){
	bmx_stringbuffer_insert(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_offset,bbt_value);
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Reverse(struct _m_stringbuffer_core_TStringBuffer_obj* o){
	bmx_stringbuffer_reverse(o->__m_stringbuffer_core_tstringbuffer_buffer );
	return (struct _m_stringbuffer_core_TStringBuffer_obj*)o;
}
void __m_stringbuffer_core_TStringBuffer_SetCharAt_ii(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBINT bbt_index,BBINT bbt_char){
	bmx_stringbuffer_setcharat(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_index,bbt_char);
}
BBSTRING __m_stringbuffer_core_TStringBuffer_Substring_ii(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBINT bbt_beginIndex,BBINT bbt_endIndex){
	return bmx_stringbuffer_substring(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_beginIndex,bbt_endIndex);
}
struct _m_stringbuffer_core_TSplitBuffer_obj* __m_stringbuffer_core_TStringBuffer_Split_S(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBSTRING bbt_separator){
	struct _m_stringbuffer_core_TSplitBuffer_obj* bbt_buf=(struct _m_stringbuffer_core_TSplitBuffer_obj*)(struct _m_stringbuffer_core_TSplitBuffer_obj*)bbObjectNew((BBClass *)&_m_stringbuffer_core_TSplitBuffer);
	bbt_buf->__m_stringbuffer_core_tsplitbuffer_buffer =(struct _m_stringbuffer_core_TStringBuffer_obj*)o;
	bbt_buf->__m_stringbuffer_core_tsplitbuffer_splitptr =bmx_stringbuffer_split(o->__m_stringbuffer_core_tstringbuffer_buffer ,bbt_separator);
	return (struct _m_stringbuffer_core_TSplitBuffer_obj*)bbt_buf;
}
BBSTRING __m_stringbuffer_core_TStringBuffer_ToString(struct _m_stringbuffer_core_TStringBuffer_obj* o){
	return bmx_stringbuffer_tostring(o->__m_stringbuffer_core_tstringbuffer_buffer );
}
BBINT _m_stringbuffer_core_TStringBuffer_initialCapacity;
struct BBDebugScope_33 _m_stringbuffer_core_TStringBuffer_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStringBuffer",
	{
		{
			BBDEBUGDECL_FIELD,
			"buffer",
			"*b",
			.field_offset=offsetof(struct _m_stringbuffer_core_TStringBuffer_obj,__m_stringbuffer_core_tstringbuffer_buffer)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"initialCapacity",
			"i",
			.var_address=(void*)&_m_stringbuffer_core_TStringBuffer_initialCapacity
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_ToString
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i):TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_New_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"($):TStringBuffer",
			.var_address=(void*)&_m_stringbuffer_core_TStringBuffer_Create_TTStringBuffer_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Length",
			"()i",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Length
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Capacity",
			"()i",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Capacity
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLength",
			"(i)",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_SetLength_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Append",
			"($):TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Append_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendObject",
			"(:Object):TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_AppendObject_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendCString",
			"(*b):TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_AppendCString_pb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendUTF8String",
			"(*b):TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_AppendUTF8String_pb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendShorts",
			"(*s,i):TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_AppendShorts_psi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AppendChar",
			"(i):TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_AppendChar_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Find",
			"($,i)i",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Find_Si
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FindLast",
			"($,i)i",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_FindLast_Si
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Trim",
			"():TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Trim
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Replace",
			"($,$):TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Replace_SS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"StartsWith",
			"($)i",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_StartsWith_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EndsWith",
			"($)i",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_EndsWith_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CharAt",
			"(i)i",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_CharAt_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Contains",
			"($)i",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Contains_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Join",
			"([]$):TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Join_aS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToLower",
			"():TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_ToLower
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToUpper",
			"():TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_ToUpper
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Remove",
			"(i,i):TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Remove_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveCharAt",
			"(i):TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_RemoveCharAt_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Insert",
			"(i,$):TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Insert_iS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Reverse",
			"():TStringBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Reverse
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetCharAt",
			"(i,i)",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_SetCharAt_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Substring",
			"(i,i)$",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Substring_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Split",
			"($):TSplitBuffer",
			.var_address=(void*)&__m_stringbuffer_core_TStringBuffer_Split_S
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_stringbuffer_core_TStringBuffer _m_stringbuffer_core_TStringBuffer={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_stringbuffer_core_TStringBuffer_scope,
	sizeof(struct _m_stringbuffer_core_TStringBuffer_obj),
	(void (*)(BBOBJECT))__m_stringbuffer_core_TStringBuffer_New,
	(void (*)(BBOBJECT))__m_stringbuffer_core_TStringBuffer_Delete,
	(BBSTRING (*)(BBOBJECT))__m_stringbuffer_core_TStringBuffer_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_stringbuffer_core_TStringBuffer_obj,__m_stringbuffer_core_tstringbuffer_buffer) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_m_stringbuffer_core_TStringBuffer_Create_TTStringBuffer_S
	,__m_stringbuffer_core_TStringBuffer_Length
	,__m_stringbuffer_core_TStringBuffer_Capacity
	,__m_stringbuffer_core_TStringBuffer_SetLength_i
	,__m_stringbuffer_core_TStringBuffer_Append_S
	,__m_stringbuffer_core_TStringBuffer_AppendObject_TObject
	,__m_stringbuffer_core_TStringBuffer_AppendCString_pb
	,__m_stringbuffer_core_TStringBuffer_AppendUTF8String_pb
	,__m_stringbuffer_core_TStringBuffer_AppendShorts_psi
	,__m_stringbuffer_core_TStringBuffer_AppendChar_i
	,__m_stringbuffer_core_TStringBuffer_Find_Si
	,__m_stringbuffer_core_TStringBuffer_FindLast_Si
	,__m_stringbuffer_core_TStringBuffer_Trim
	,__m_stringbuffer_core_TStringBuffer_Replace_SS
	,__m_stringbuffer_core_TStringBuffer_StartsWith_S
	,__m_stringbuffer_core_TStringBuffer_EndsWith_S
	,__m_stringbuffer_core_TStringBuffer_CharAt_i
	,__m_stringbuffer_core_TStringBuffer_Contains_S
	,__m_stringbuffer_core_TStringBuffer_Join_aS
	,__m_stringbuffer_core_TStringBuffer_ToLower
	,__m_stringbuffer_core_TStringBuffer_ToUpper
	,__m_stringbuffer_core_TStringBuffer_Remove_ii
	,__m_stringbuffer_core_TStringBuffer_RemoveCharAt_i
	,__m_stringbuffer_core_TStringBuffer_Insert_iS
	,__m_stringbuffer_core_TStringBuffer_Reverse
	,__m_stringbuffer_core_TStringBuffer_SetCharAt_ii
	,__m_stringbuffer_core_TStringBuffer_Substring_ii
	,__m_stringbuffer_core_TStringBuffer_Split_S
};

void __m_stringbuffer_core_TSplitBuffer_New(struct _m_stringbuffer_core_TSplitBuffer_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_stringbuffer_core_TSplitBuffer;
	o->__m_stringbuffer_core_tsplitbuffer_buffer = (struct _m_stringbuffer_core_TStringBuffer_obj*)(&bbNullObject);
	o->__m_stringbuffer_core_tsplitbuffer_splitptr = 0;
}
void __m_stringbuffer_core_TSplitBuffer_Delete(struct _m_stringbuffer_core_TSplitBuffer_obj* o) {
	if(o->__m_stringbuffer_core_tsplitbuffer_splitptr ){
		o->__m_stringbuffer_core_tsplitbuffer_buffer =(struct _m_stringbuffer_core_TStringBuffer_obj*)&bbNullObject;
		bmx_stringbuffer_splitbuffer_free(o->__m_stringbuffer_core_tsplitbuffer_splitptr );
		o->__m_stringbuffer_core_tsplitbuffer_splitptr =0;
	}
	bbObjectDtor((BBOBJECT)o);
}
BBINT __m_stringbuffer_core_TSplitBuffer_Length(struct _m_stringbuffer_core_TSplitBuffer_obj* o){
	return bmx_stringbuffer_splitbuffer_length(o->__m_stringbuffer_core_tsplitbuffer_splitptr );
}
BBSTRING __m_stringbuffer_core_TSplitBuffer_Text_i(struct _m_stringbuffer_core_TSplitBuffer_obj* o,BBINT bbt_index){
	return bmx_stringbuffer_splitbuffer_text(o->__m_stringbuffer_core_tsplitbuffer_splitptr ,bbt_index);
}
BBARRAY __m_stringbuffer_core_TSplitBuffer_ToArray(struct _m_stringbuffer_core_TSplitBuffer_obj* o){
	return bmx_stringbuffer_splitbuffer_toarray(o->__m_stringbuffer_core_tsplitbuffer_splitptr );
}
struct _m_stringbuffer_core_TSplitBufferEnum_obj* __m_stringbuffer_core_TSplitBuffer_ObjectEnumerator(struct _m_stringbuffer_core_TSplitBuffer_obj* o){
	struct _m_stringbuffer_core_TSplitBufferEnum_obj* bbt_enumerator=(struct _m_stringbuffer_core_TSplitBufferEnum_obj*)(struct _m_stringbuffer_core_TSplitBufferEnum_obj*)bbObjectNew((BBClass *)&_m_stringbuffer_core_TSplitBufferEnum);
	bbt_enumerator->__m_stringbuffer_core_tsplitbufferenum_buffer =(struct _m_stringbuffer_core_TSplitBuffer_obj*)o;
	bbt_enumerator->__m_stringbuffer_core_tsplitbufferenum_length =((struct _m_stringbuffer_core_TSplitBuffer_obj*)o)->clas->m_Length((struct _m_stringbuffer_core_TSplitBuffer_obj*)o);
	return (struct _m_stringbuffer_core_TSplitBufferEnum_obj*)bbt_enumerator;
}
struct BBDebugScope_7 _m_stringbuffer_core_TSplitBuffer_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSplitBuffer",
	{
		{
			BBDEBUGDECL_FIELD,
			"buffer",
			":TStringBuffer",
			.field_offset=offsetof(struct _m_stringbuffer_core_TSplitBuffer_obj,__m_stringbuffer_core_tsplitbuffer_buffer)
		},
		{
			BBDEBUGDECL_FIELD,
			"splitPtr",
			"*b",
			.field_offset=offsetof(struct _m_stringbuffer_core_TSplitBuffer_obj,__m_stringbuffer_core_tsplitbuffer_splitptr)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_stringbuffer_core_TSplitBuffer_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Length",
			"()i",
			.var_address=(void*)&__m_stringbuffer_core_TSplitBuffer_Length
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Text",
			"(i)$",
			.var_address=(void*)&__m_stringbuffer_core_TSplitBuffer_Text_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToArray",
			"()[]$",
			.var_address=(void*)&__m_stringbuffer_core_TSplitBuffer_ToArray
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TSplitBufferEnum",
			.var_address=(void*)&__m_stringbuffer_core_TSplitBuffer_ObjectEnumerator
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_stringbuffer_core_TSplitBuffer _m_stringbuffer_core_TSplitBuffer={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_stringbuffer_core_TSplitBuffer_scope,
	sizeof(struct _m_stringbuffer_core_TSplitBuffer_obj),
	(void (*)(BBOBJECT))__m_stringbuffer_core_TSplitBuffer_New,
	(void (*)(BBOBJECT))__m_stringbuffer_core_TSplitBuffer_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_stringbuffer_core_TSplitBuffer_obj,__m_stringbuffer_core_tsplitbuffer_splitptr) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,__m_stringbuffer_core_TSplitBuffer_Length
	,__m_stringbuffer_core_TSplitBuffer_Text_i
	,__m_stringbuffer_core_TSplitBuffer_ToArray
	,__m_stringbuffer_core_TSplitBuffer_ObjectEnumerator
};

void __m_stringbuffer_core_TSplitBufferEnum_New(struct _m_stringbuffer_core_TSplitBufferEnum_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_stringbuffer_core_TSplitBufferEnum;
	o->__m_stringbuffer_core_tsplitbufferenum_index = 0;
	o->__m_stringbuffer_core_tsplitbufferenum_length = 0;
	o->__m_stringbuffer_core_tsplitbufferenum_buffer = (struct _m_stringbuffer_core_TSplitBuffer_obj*)(&bbNullObject);
}
BBINT __m_stringbuffer_core_TSplitBufferEnum_HasNext(struct _m_stringbuffer_core_TSplitBufferEnum_obj* o){
	return (o->__m_stringbuffer_core_tsplitbufferenum_index <o->__m_stringbuffer_core_tsplitbufferenum_length );
}
BBOBJECT __m_stringbuffer_core_TSplitBufferEnum_NextObject(struct _m_stringbuffer_core_TSplitBufferEnum_obj* o){
	BBSTRING bbt_s=(o->__m_stringbuffer_core_tsplitbufferenum_buffer )->clas->m_Text_i((struct _m_stringbuffer_core_TSplitBuffer_obj*)o->__m_stringbuffer_core_tsplitbufferenum_buffer ,o->__m_stringbuffer_core_tsplitbufferenum_index );
	o->__m_stringbuffer_core_tsplitbufferenum_index +=1;
	return (BBOBJECT)bbt_s;
}
struct BBDebugScope_6 _m_stringbuffer_core_TSplitBufferEnum_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSplitBufferEnum",
	{
		{
			BBDEBUGDECL_FIELD,
			"index",
			"i",
			.field_offset=offsetof(struct _m_stringbuffer_core_TSplitBufferEnum_obj,__m_stringbuffer_core_tsplitbufferenum_index)
		},
		{
			BBDEBUGDECL_FIELD,
			"length",
			"i",
			.field_offset=offsetof(struct _m_stringbuffer_core_TSplitBufferEnum_obj,__m_stringbuffer_core_tsplitbufferenum_length)
		},
		{
			BBDEBUGDECL_FIELD,
			"buffer",
			":TSplitBuffer",
			.field_offset=offsetof(struct _m_stringbuffer_core_TSplitBufferEnum_obj,__m_stringbuffer_core_tsplitbufferenum_buffer)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_stringbuffer_core_TSplitBufferEnum_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&__m_stringbuffer_core_TSplitBufferEnum_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&__m_stringbuffer_core_TSplitBufferEnum_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_stringbuffer_core_TSplitBufferEnum _m_stringbuffer_core_TSplitBufferEnum={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_stringbuffer_core_TSplitBufferEnum_scope,
	sizeof(struct _m_stringbuffer_core_TSplitBufferEnum_obj),
	(void (*)(BBOBJECT))__m_stringbuffer_core_TSplitBufferEnum_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_stringbuffer_core_TSplitBufferEnum_obj,__m_stringbuffer_core_tsplitbufferenum_buffer) - sizeof(void*) + sizeof(struct _m_stringbuffer_core_TSplitBuffer_obj*)
	,0
	,__m_stringbuffer_core_TSplitBufferEnum_HasNext
	,__m_stringbuffer_core_TSplitBufferEnum_NextObject
};

static int _bb_bcc_stringbuffer_core_inited = 0;
int _bb_bcc_stringbuffer_core(){
	if (!_bb_bcc_stringbuffer_core_inited) {
		_bb_bcc_stringbuffer_core_inited = 1;
		GC_add_roots(&_m_stringbuffer_core_TStringBuffer_initialCapacity, &_m_stringbuffer_core_TStringBuffer_initialCapacity + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_standardio_standardio();
		_bb_bcc_stringbuffer_common();
		bbObjectRegisterType((BBCLASS)&_m_stringbuffer_core_TStringBuffer);
		bbObjectRegisterType((BBCLASS)&_m_stringbuffer_core_TSplitBuffer);
		bbObjectRegisterType((BBCLASS)&_m_stringbuffer_core_TSplitBufferEnum);
		_m_stringbuffer_core_TStringBuffer_initialCapacity=0;
		_m_stringbuffer_core_TStringBuffer_initialCapacity=16;
		return 0;
	}
	return 0;
}