#include <brl.mod/bank.mod/.bmx/bank.bmx.release.linux.x64.h>
static BBString _s2={
	&bbStringClass,
	19,
	{73,108,108,101,103,97,108,32,98,97,110,107,32,111,102,102,115
	,101,116}
};
static BBString _s3={
	&bbStringClass,
	17,
	{73,108,108,101,103,97,108,32,98,97,110,107,32,115,105,122,101
}
};
static BBString _s4={
	&bbStringClass,
	26,
	{73,108,108,101,103,97,108,32,114,97,110,103,101,32,102,111,114
	,32,67,111,112,121,66,97,110,107}
};
static BBString _s0={
	&bbStringClass,
	29,
	{76,111,99,107,101,100,32,98,97,110,107,115,32,99,97,110,110
	,111,116,32,98,101,32,114,101,115,105,122,101}
};
static BBString _s1={
	&bbStringClass,
	30,
	{83,116,97,116,105,99,32,98,97,110,107,115,32,99,97,110,110
	,111,116,32,98,101,32,114,101,115,105,122,101,100}
};
struct BBDebugScope_53{int kind; const char *name; BBDebugDecl decls[54]; };
void _brl_bank_TBank_New(struct brl_bank_TBank_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_bank_TBank;
	o->_brl_bank_tbank__buf = 0;
	o->_brl_bank_tbank__size = 0;
	o->_brl_bank_tbank__capacity = 0;
	o->_brl_bank_tbank__static = 0;
	o->_brl_bank_tbank__locked = 0;
	o->_brl_bank_tbank__source = (struct brl_bank_TBank_obj*)(&bbNullObject);
	o->_brl_bank_tbank__staticarrayref = (&bbEmptyArray);
}
void _brl_bank_TBank_Delete(struct brl_bank_TBank_obj* o) {
	if(o->_brl_bank_tbank__capacity >=0){
		bbMemFree((void*)o->_brl_bank_tbank__buf );
	}
	bbObjectDtor((BBOBJECT)o);
}
void _brl_bank_TBank__pad(struct brl_bank_TBank_obj* o){
}
BBBYTE* _brl_bank_TBank_Buf(struct brl_bank_TBank_obj* o){
	return o->_brl_bank_tbank__buf ;
}
BBBYTE* _brl_bank_TBank_Lock(struct brl_bank_TBank_obj* o){
	o->_brl_bank_tbank__locked +=1;
	return o->_brl_bank_tbank__buf ;
}
void _brl_bank_TBank_Unlock(struct brl_bank_TBank_obj* o){
	o->_brl_bank_tbank__locked -=1;
}
BBSIZET _brl_bank_TBank_Size(struct brl_bank_TBank_obj* o){
	return o->_brl_bank_tbank__size ;
}
BBSIZET _brl_bank_TBank_Capacity(struct brl_bank_TBank_obj* o){
	return o->_brl_bank_tbank__capacity ;
}
BBINT _brl_bank_TBank_IsStatic(struct brl_bank_TBank_obj* o){
	return o->_brl_bank_tbank__static ;
}
void _brl_bank_TBank_Resize_i(struct brl_bank_TBank_obj* o,BBINT bbt_size){
	((struct brl_bank_TBank_obj*)o)->clas->m_Resize_z((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_size));
}
void _brl_bank_TBank_Resize_z(struct brl_bank_TBank_obj* o,BBSIZET bbt_size){
	if(bbt_size>o->_brl_bank_tbank__capacity ){
		BBSIZET bbt_n=((o->_brl_bank_tbank__capacity *3)/2);
		if(bbt_n<bbt_size){
			bbt_n=bbt_size;
		}
		BBBYTE* bbt_tmp=bbMemAlloc((size_t)bbt_n);
		bbMemCopy((void*)bbt_tmp,(const void*)o->_brl_bank_tbank__buf ,(size_t)o->_brl_bank_tbank__size );
		bbMemFree((void*)o->_brl_bank_tbank__buf );
		o->_brl_bank_tbank__capacity =bbt_n;
		o->_brl_bank_tbank__buf =bbt_tmp;
	}
	o->_brl_bank_tbank__size =bbt_size;
}
BBLONG _brl_bank_TBank_Read_TTStreamll(struct brl_bank_TBank_obj* o,struct brl_stream_TStream_obj* bbt_stream,BBLONG bbt_offset,BBLONG bbt_count){
	return (bbt_stream)->clas->m_Read_pbl((struct brl_stream_TIO_obj*)bbt_stream,(o->_brl_bank_tbank__buf +bbt_offset),bbt_count);
}
BBLONG _brl_bank_TBank_Write_TTStreamll(struct brl_bank_TBank_obj* o,struct brl_stream_TStream_obj* bbt_stream,BBLONG bbt_offset,BBLONG bbt_count){
	return (bbt_stream)->clas->m_Write_pbl((struct brl_stream_TIO_obj*)bbt_stream,(o->_brl_bank_tbank__buf +bbt_offset),bbt_count);
}
BBINT _brl_bank_TBank_PeekByte_i(struct brl_bank_TBank_obj* o,BBINT bbt_offset){
	return ((struct brl_bank_TBank_obj*)o)->clas->m_PeekByte_z((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset));
}
BBINT _brl_bank_TBank_PeekByte_z(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset){
	return ((BBINT)o->_brl_bank_tbank__buf [bbt_offset]);
}
void _brl_bank_TBank_PokeByte_ii(struct brl_bank_TBank_obj* o,BBINT bbt_offset,BBINT bbt_value){
	((struct brl_bank_TBank_obj*)o)->clas->m_PokeByte_zi((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset),bbt_value);
}
void _brl_bank_TBank_PokeByte_zi(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset,BBINT bbt_value){
	o->_brl_bank_tbank__buf [bbt_offset]=((BBBYTE)bbt_value);
}
BBINT _brl_bank_TBank_PeekShort_i(struct brl_bank_TBank_obj* o,BBINT bbt_offset){
	return ((struct brl_bank_TBank_obj*)o)->clas->m_PeekShort_z((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset));
}
BBINT _brl_bank_TBank_PeekShort_z(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset){
	BBSHORT* bbt_=((BBSHORT*)(o->_brl_bank_tbank__buf +bbt_offset));
	return ((BBINT)bbt_[0]);
}
void _brl_bank_TBank_PokeShort_ii(struct brl_bank_TBank_obj* o,BBINT bbt_offset,BBINT bbt_value){
	((struct brl_bank_TBank_obj*)o)->clas->m_PokeShort_zi((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset),bbt_value);
}
void _brl_bank_TBank_PokeShort_zi(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset,BBINT bbt_value){
	BBSHORT* bbt_=((BBSHORT*)(o->_brl_bank_tbank__buf +bbt_offset));
	bbt_[0]=((BBSHORT)bbt_value);
}
BBINT _brl_bank_TBank_PeekInt_i(struct brl_bank_TBank_obj* o,BBINT bbt_offset){
	return ((struct brl_bank_TBank_obj*)o)->clas->m_PeekInt_z((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset));
}
BBINT _brl_bank_TBank_PeekInt_z(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset){
	BBINT* bbt_=((BBINT*)(o->_brl_bank_tbank__buf +bbt_offset));
	return bbt_[0];
}
void _brl_bank_TBank_PokeInt_ii(struct brl_bank_TBank_obj* o,BBINT bbt_offset,BBINT bbt_value){
	((struct brl_bank_TBank_obj*)o)->clas->m_PokeInt_zi((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset),bbt_value);
}
void _brl_bank_TBank_PokeInt_zi(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset,BBINT bbt_value){
	BBINT* bbt_=((BBINT*)(o->_brl_bank_tbank__buf +bbt_offset));
	bbt_[0]=bbt_value;
}
BBLONG _brl_bank_TBank_PeekLong_i(struct brl_bank_TBank_obj* o,BBINT bbt_offset){
	return ((struct brl_bank_TBank_obj*)o)->clas->m_PeekLong_z((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset));
}
BBLONG _brl_bank_TBank_PeekLong_z(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset){
	BBLONG* bbt_=((BBLONG*)(o->_brl_bank_tbank__buf +bbt_offset));
	return bbt_[0];
}
void _brl_bank_TBank_PokeLong_il(struct brl_bank_TBank_obj* o,BBINT bbt_offset,BBLONG bbt_value){
	((struct brl_bank_TBank_obj*)o)->clas->m_PokeLong_zl((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset),bbt_value);
}
void _brl_bank_TBank_PokeLong_zl(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset,BBLONG bbt_value){
	BBLONG* bbt_=((BBLONG*)(o->_brl_bank_tbank__buf +bbt_offset));
	bbt_[0]=bbt_value;
}
BBFLOAT _brl_bank_TBank_PeekFloat_i(struct brl_bank_TBank_obj* o,BBINT bbt_offset){
	return ((struct brl_bank_TBank_obj*)o)->clas->m_PeekFloat_z((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset));
}
BBFLOAT _brl_bank_TBank_PeekFloat_z(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset){
	BBFLOAT* bbt_=((BBFLOAT*)(o->_brl_bank_tbank__buf +bbt_offset));
	return bbt_[0];
}
void _brl_bank_TBank_PokeFloat_if(struct brl_bank_TBank_obj* o,BBINT bbt_offset,BBFLOAT bbt_value){
	((struct brl_bank_TBank_obj*)o)->clas->m_PokeFloat_zf((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset),bbt_value);
}
void _brl_bank_TBank_PokeFloat_zf(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset,BBFLOAT bbt_value){
	BBFLOAT* bbt_=((BBFLOAT*)(o->_brl_bank_tbank__buf +bbt_offset));
	bbt_[0]=bbt_value;
}
BBDOUBLE _brl_bank_TBank_PeekDouble_i(struct brl_bank_TBank_obj* o,BBINT bbt_offset){
	return ((struct brl_bank_TBank_obj*)o)->clas->m_PeekDouble_z((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset));
}
BBDOUBLE _brl_bank_TBank_PeekDouble_z(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset){
	BBDOUBLE* bbt_=((BBDOUBLE*)(o->_brl_bank_tbank__buf +bbt_offset));
	return bbt_[0];
}
void _brl_bank_TBank_PokeDouble_id(struct brl_bank_TBank_obj* o,BBINT bbt_offset,BBDOUBLE bbt_value){
	((struct brl_bank_TBank_obj*)o)->clas->m_PokeDouble_zd((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset),bbt_value);
}
void _brl_bank_TBank_PokeDouble_zd(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset,BBDOUBLE bbt_value){
	BBDOUBLE* bbt_=((BBDOUBLE*)(o->_brl_bank_tbank__buf +bbt_offset));
	bbt_[0]=bbt_value;
}
struct brl_bank_TBank_obj* _brl_bank_TBank_Window_zz(struct brl_bank_TBank_obj* o,BBSIZET bbt_offset,BBSIZET bbt_size){
	struct brl_bank_TBank_obj* bbt_bank=(struct brl_bank_TBank_obj*)o->clas->f_CreateStatic_TTBank_pbz((o->_brl_bank_tbank__buf +bbt_offset),bbt_size);
	bbt_bank->_brl_bank_tbank__source =(struct brl_bank_TBank_obj*)o;
	return (struct brl_bank_TBank_obj*)bbt_bank;
}
struct brl_bank_TBank_obj* _brl_bank_TBank_Window_ii(struct brl_bank_TBank_obj* o,BBINT bbt_offset,BBINT bbt_size){
	return (struct brl_bank_TBank_obj*)((struct brl_bank_TBank_obj*)o)->clas->m_Window_zz((struct brl_bank_TBank_obj*)o,((BBSIZET)bbt_offset),((BBSIZET)bbt_size));
}
BBINT _brl_bank_TBank_Save_TObject(struct brl_bank_TBank_obj* o,BBOBJECT bbt_url){
	struct brl_stream_TStream_obj* bbt_stream=(struct brl_stream_TStream_obj*)brl_stream_WriteStream((BBOBJECT)bbt_url);
	if(!(((BBObject*)bbt_stream)!= &bbNullObject)){
		return 0;
	}
	BBLONG bbt_n=(bbt_stream)->clas->m_WriteBytes_pbl((struct brl_stream_TStream_obj*)bbt_stream,o->_brl_bank_tbank__buf ,((BBLONG)o->_brl_bank_tbank__size ));
	(bbt_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_stream);
	return 1;
}
struct brl_bank_TBank_obj* brl_bank_TBank_Load_TTBank_TObject(BBOBJECT bbt_url){
	struct brl_stream_TStream_obj* bbt_stream=(struct brl_stream_TStream_obj*)brl_stream_ReadStream((BBOBJECT)bbt_url);
	if(!(((BBObject*)bbt_stream)!= &bbNullObject)){
		return (struct brl_bank_TBank_obj*)&bbNullObject;
	}
	BBARRAY bbt_data=brl_stream_LoadByteArray((BBOBJECT)bbt_stream);
	struct brl_bank_TBank_obj* bbt_bank=(struct brl_bank_TBank_obj*)brl_bank_TBank_Create_TTBank_z((BBSIZET)(bbt_data->scales[0]));
	bbMemCopy((void*)(bbt_bank)->clas->m_Buf((struct brl_bank_TBank_obj*)bbt_bank),(const void*)((BBBYTE*)BBARRAYDATA(bbt_data,1)),(size_t)((BBSIZET)(bbt_data->scales[0])));
	(bbt_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_stream);
	return (struct brl_bank_TBank_obj*)bbt_bank;
}
struct brl_bank_TBank_obj* brl_bank_TBank_Create_TTBank_z(BBSIZET bbt_size){
	struct brl_bank_TBank_obj* bbt_bank=(struct brl_bank_TBank_obj*)(struct brl_bank_TBank_obj*)bbObjectNew((BBClass *)&brl_bank_TBank);
	bbt_bank->_brl_bank_tbank__buf =bbMemAlloc((size_t)bbt_size);
	bbt_bank->_brl_bank_tbank__size =bbt_size;
	bbt_bank->_brl_bank_tbank__capacity =bbt_size;
	return (struct brl_bank_TBank_obj*)bbt_bank;
}
struct brl_bank_TBank_obj* brl_bank_TBank_Create_TTBank_i(BBINT bbt_size){
	return (struct brl_bank_TBank_obj*)brl_bank_TBank_Create_TTBank_z((BBSIZET)bbt_size);
}
struct brl_bank_TBank_obj* brl_bank_TBank_CreateStatic_TTBank_pbz(BBBYTE* bbt_buf,BBSIZET bbt_size){
	struct brl_bank_TBank_obj* bbt_bank=(struct brl_bank_TBank_obj*)(struct brl_bank_TBank_obj*)bbObjectNew((BBClass *)&brl_bank_TBank);
	bbt_bank->_brl_bank_tbank__buf =bbt_buf;
	bbt_bank->_brl_bank_tbank__size =bbt_size;
	bbt_bank->_brl_bank_tbank__capacity =bbt_size;
	bbt_bank->_brl_bank_tbank__static =1;
	return (struct brl_bank_TBank_obj*)bbt_bank;
}
struct brl_bank_TBank_obj* brl_bank_TBank_CreateStatic_TTBank_abz(BBARRAY bbt_buf,BBSIZET bbt_size){
	struct brl_bank_TBank_obj* bbt_bank=(struct brl_bank_TBank_obj*)(struct brl_bank_TBank_obj*)bbObjectNew((BBClass *)&brl_bank_TBank);
	bbt_bank->_brl_bank_tbank__buf =((BBBYTE*)BBARRAYDATA(bbt_buf,1));
	bbt_bank->_brl_bank_tbank__size =bbt_size;
	bbt_bank->_brl_bank_tbank__capacity =bbt_size;
	bbt_bank->_brl_bank_tbank__static =1;
	bbt_bank->_brl_bank_tbank__staticarrayref =bbt_buf;
	return (struct brl_bank_TBank_obj*)bbt_bank;
}
struct brl_bank_TBank_obj* brl_bank_TBank_CreateStatic_TTBank_pbi(BBBYTE* bbt_buf,BBINT bbt_size){
	return (struct brl_bank_TBank_obj*)brl_bank_TBank_CreateStatic_TTBank_pbz(bbt_buf,((BBSIZET)bbt_size));
}
struct brl_bank_TBank_obj* brl_bank_TBank_CreateStatic_TTBank_abi(BBARRAY bbt_buf,BBINT bbt_size){
	return (struct brl_bank_TBank_obj*)brl_bank_TBank_CreateStatic_TTBank_abz(bbt_buf,((BBSIZET)bbt_size));
}
struct BBDebugScope_53 brl_bank_TBank_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TBank",
	{
		{
			BBDEBUGDECL_FIELD,
			"_buf",
			"*b",
			.field_offset=offsetof(struct brl_bank_TBank_obj,_brl_bank_tbank__buf)
		},
		{
			BBDEBUGDECL_FIELD,
			"_size",
			"t",
			.field_offset=offsetof(struct brl_bank_TBank_obj,_brl_bank_tbank__size)
		},
		{
			BBDEBUGDECL_FIELD,
			"_capacity",
			"t",
			.field_offset=offsetof(struct brl_bank_TBank_obj,_brl_bank_tbank__capacity)
		},
		{
			BBDEBUGDECL_FIELD,
			"_static",
			"i",
			.field_offset=offsetof(struct brl_bank_TBank_obj,_brl_bank_tbank__static)
		},
		{
			BBDEBUGDECL_FIELD,
			"_locked",
			"i",
			.field_offset=offsetof(struct brl_bank_TBank_obj,_brl_bank_tbank__locked)
		},
		{
			BBDEBUGDECL_FIELD,
			"_source",
			":TBank",
			.field_offset=offsetof(struct brl_bank_TBank_obj,_brl_bank_tbank__source)
		},
		{
			BBDEBUGDECL_FIELD,
			"_staticArrayRef",
			"[]b",
			.field_offset=offsetof(struct brl_bank_TBank_obj,_brl_bank_tbank__staticarrayref)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_bank_TBank_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_pad",
			"()",
			.var_address=(void*)&_brl_bank_TBank__pad
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Buf",
			"()*b",
			.var_address=(void*)&_brl_bank_TBank_Buf
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Lock",
			"()*b",
			.var_address=(void*)&_brl_bank_TBank_Lock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Unlock",
			"()",
			.var_address=(void*)&_brl_bank_TBank_Unlock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Size",
			"()t",
			.var_address=(void*)&_brl_bank_TBank_Size
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Capacity",
			"()t",
			.var_address=(void*)&_brl_bank_TBank_Capacity
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsStatic",
			"()i",
			.var_address=(void*)&_brl_bank_TBank_IsStatic
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Resize",
			"(i)",
			.var_address=(void*)&_brl_bank_TBank_Resize_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Resize",
			"(t)",
			.var_address=(void*)&_brl_bank_TBank_Resize_z
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Read",
			"(:TStream,l,l)l",
			.var_address=(void*)&_brl_bank_TBank_Read_TTStreamll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Write",
			"(:TStream,l,l)l",
			.var_address=(void*)&_brl_bank_TBank_Write_TTStreamll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PeekByte",
			"(i)i",
			.var_address=(void*)&_brl_bank_TBank_PeekByte_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PeekByte",
			"(t)i",
			.var_address=(void*)&_brl_bank_TBank_PeekByte_z
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PokeByte",
			"(i,i)",
			.var_address=(void*)&_brl_bank_TBank_PokeByte_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PokeByte",
			"(t,i)",
			.var_address=(void*)&_brl_bank_TBank_PokeByte_zi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PeekShort",
			"(i)i",
			.var_address=(void*)&_brl_bank_TBank_PeekShort_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PeekShort",
			"(t)i",
			.var_address=(void*)&_brl_bank_TBank_PeekShort_z
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PokeShort",
			"(i,i)",
			.var_address=(void*)&_brl_bank_TBank_PokeShort_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PokeShort",
			"(t,i)",
			.var_address=(void*)&_brl_bank_TBank_PokeShort_zi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PeekInt",
			"(i)i",
			.var_address=(void*)&_brl_bank_TBank_PeekInt_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PeekInt",
			"(t)i",
			.var_address=(void*)&_brl_bank_TBank_PeekInt_z
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PokeInt",
			"(i,i)",
			.var_address=(void*)&_brl_bank_TBank_PokeInt_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PokeInt",
			"(t,i)",
			.var_address=(void*)&_brl_bank_TBank_PokeInt_zi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PeekLong",
			"(i)l",
			.var_address=(void*)&_brl_bank_TBank_PeekLong_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PeekLong",
			"(t)l",
			.var_address=(void*)&_brl_bank_TBank_PeekLong_z
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PokeLong",
			"(i,l)",
			.var_address=(void*)&_brl_bank_TBank_PokeLong_il
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PokeLong",
			"(t,l)",
			.var_address=(void*)&_brl_bank_TBank_PokeLong_zl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PeekFloat",
			"(i)f",
			.var_address=(void*)&_brl_bank_TBank_PeekFloat_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PeekFloat",
			"(t)f",
			.var_address=(void*)&_brl_bank_TBank_PeekFloat_z
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PokeFloat",
			"(i,f)",
			.var_address=(void*)&_brl_bank_TBank_PokeFloat_if
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PokeFloat",
			"(t,f)",
			.var_address=(void*)&_brl_bank_TBank_PokeFloat_zf
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PeekDouble",
			"(i)d",
			.var_address=(void*)&_brl_bank_TBank_PeekDouble_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PeekDouble",
			"(t)d",
			.var_address=(void*)&_brl_bank_TBank_PeekDouble_z
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PokeDouble",
			"(i,d)",
			.var_address=(void*)&_brl_bank_TBank_PokeDouble_id
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PokeDouble",
			"(t,d)",
			.var_address=(void*)&_brl_bank_TBank_PokeDouble_zd
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Window",
			"(t,t):TBank",
			.var_address=(void*)&_brl_bank_TBank_Window_zz
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Window",
			"(i,i):TBank",
			.var_address=(void*)&_brl_bank_TBank_Window_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Save",
			"(:Object)i",
			.var_address=(void*)&_brl_bank_TBank_Save_TObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Load",
			"(:Object):TBank",
			.var_address=(void*)&brl_bank_TBank_Load_TTBank_TObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(t):TBank",
			.var_address=(void*)&brl_bank_TBank_Create_TTBank_z
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i):TBank",
			.var_address=(void*)&brl_bank_TBank_Create_TTBank_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateStatic",
			"(*b,t):TBank",
			.var_address=(void*)&brl_bank_TBank_CreateStatic_TTBank_pbz
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateStatic",
			"([]b,t):TBank",
			.var_address=(void*)&brl_bank_TBank_CreateStatic_TTBank_abz
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateStatic",
			"(*b,i):TBank",
			.var_address=(void*)&brl_bank_TBank_CreateStatic_TTBank_pbi
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateStatic",
			"([]b,i):TBank",
			.var_address=(void*)&brl_bank_TBank_CreateStatic_TTBank_abi
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_bank_TBank brl_bank_TBank={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_bank_TBank_scope,
	sizeof(struct brl_bank_TBank_obj),
	(void (*)(BBOBJECT))_brl_bank_TBank_New,
	(void (*)(BBOBJECT))_brl_bank_TBank_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_bank_TBank_obj,_brl_bank_tbank__staticarrayref) - sizeof(void*) + sizeof(BBARRAY)
	,0
	,_brl_bank_TBank__pad
	,_brl_bank_TBank_Buf
	,_brl_bank_TBank_Lock
	,_brl_bank_TBank_Unlock
	,_brl_bank_TBank_Size
	,_brl_bank_TBank_Capacity
	,_brl_bank_TBank_IsStatic
	,_brl_bank_TBank_Resize_i
	,_brl_bank_TBank_Resize_z
	,_brl_bank_TBank_Read_TTStreamll
	,_brl_bank_TBank_Write_TTStreamll
	,_brl_bank_TBank_PeekByte_i
	,_brl_bank_TBank_PeekByte_z
	,_brl_bank_TBank_PokeByte_ii
	,_brl_bank_TBank_PokeByte_zi
	,_brl_bank_TBank_PeekShort_i
	,_brl_bank_TBank_PeekShort_z
	,_brl_bank_TBank_PokeShort_ii
	,_brl_bank_TBank_PokeShort_zi
	,_brl_bank_TBank_PeekInt_i
	,_brl_bank_TBank_PeekInt_z
	,_brl_bank_TBank_PokeInt_ii
	,_brl_bank_TBank_PokeInt_zi
	,_brl_bank_TBank_PeekLong_i
	,_brl_bank_TBank_PeekLong_z
	,_brl_bank_TBank_PokeLong_il
	,_brl_bank_TBank_PokeLong_zl
	,_brl_bank_TBank_PeekFloat_i
	,_brl_bank_TBank_PeekFloat_z
	,_brl_bank_TBank_PokeFloat_if
	,_brl_bank_TBank_PokeFloat_zf
	,_brl_bank_TBank_PeekDouble_i
	,_brl_bank_TBank_PeekDouble_z
	,_brl_bank_TBank_PokeDouble_id
	,_brl_bank_TBank_PokeDouble_zd
	,_brl_bank_TBank_Window_zz
	,_brl_bank_TBank_Window_ii
	,_brl_bank_TBank_Save_TObject
	,brl_bank_TBank_Load_TTBank_TObject
	,brl_bank_TBank_Create_TTBank_z
	,brl_bank_TBank_Create_TTBank_i
	,brl_bank_TBank_CreateStatic_TTBank_pbz
	,brl_bank_TBank_CreateStatic_TTBank_abz
	,brl_bank_TBank_CreateStatic_TTBank_pbi
	,brl_bank_TBank_CreateStatic_TTBank_abi
};

struct brl_bank_TBank_obj* brl_bank_CreateBank(BBINT bbt_size){
	return (struct brl_bank_TBank_obj*)brl_bank_TBank_Create_TTBank_i(bbt_size);
}
struct brl_bank_TBank_obj* brl_bank_CreateStaticBank(BBBYTE* bbt_buf,BBINT bbt_size){
	return (struct brl_bank_TBank_obj*)brl_bank_TBank_CreateStatic_TTBank_pbi(bbt_buf,bbt_size);
}
struct brl_bank_TBank_obj* brl_bank_CreateStaticBank2(BBARRAY bbt_buf,BBINT bbt_size){
	return (struct brl_bank_TBank_obj*)brl_bank_TBank_CreateStatic_TTBank_abi(bbt_buf,bbt_size);
}
struct brl_bank_TBank_obj* brl_bank_LoadBank(BBOBJECT bbt_url){
	return (struct brl_bank_TBank_obj*)brl_bank_TBank_Load_TTBank_TObject((BBOBJECT)bbt_url);
}
BBINT brl_bank_SaveBank(struct brl_bank_TBank_obj* bbt_bank,BBOBJECT bbt_url){
	return (bbt_bank)->clas->m_Save_TObject((struct brl_bank_TBank_obj*)bbt_bank,(BBOBJECT)bbt_url);
}
BBBYTE* brl_bank_BankBuf(struct brl_bank_TBank_obj* bbt_bank){
	return (bbt_bank)->clas->m_Buf((struct brl_bank_TBank_obj*)bbt_bank);
}
BBBYTE* brl_bank_LockBank(struct brl_bank_TBank_obj* bbt_bank){
	return (bbt_bank)->clas->m_Lock((struct brl_bank_TBank_obj*)bbt_bank);
}
void brl_bank_UnlockBank(struct brl_bank_TBank_obj* bbt_bank){
	(bbt_bank)->clas->m_Unlock((struct brl_bank_TBank_obj*)bbt_bank);
}
BBLONG brl_bank_BankSize(struct brl_bank_TBank_obj* bbt_bank){
	return ((BBLONG)(bbt_bank)->clas->m_Size((struct brl_bank_TBank_obj*)bbt_bank));
}
BBLONG brl_bank_BankCapacity(struct brl_bank_TBank_obj* bbt_bank){
	return ((BBLONG)(bbt_bank)->clas->m_Capacity((struct brl_bank_TBank_obj*)bbt_bank));
}
void brl_bank_ResizeBank(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_size){
	(bbt_bank)->clas->m_Resize_z((struct brl_bank_TBank_obj*)bbt_bank,bbt_size);
}
void brl_bank_CopyBank(struct brl_bank_TBank_obj* bbt_src_bank,BBSIZET bbt_src_offset,struct brl_bank_TBank_obj* bbt_dst_bank,BBSIZET bbt_dst_offset,BBSIZET bbt_count){
	bbMemCopy((void*)((bbt_dst_bank)->clas->m_Buf((struct brl_bank_TBank_obj*)bbt_dst_bank)+bbt_dst_offset),(const void*)((bbt_src_bank)->clas->m_Buf((struct brl_bank_TBank_obj*)bbt_src_bank)+bbt_src_offset),(size_t)bbt_count);
}
BBINT brl_bank_PeekByte(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset){
	return (bbt_bank)->clas->m_PeekByte_z((struct brl_bank_TBank_obj*)bbt_bank,bbt_offset);
}
BBINT brl_bank_PeekByte2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset){
	return brl_bank_PeekByte((struct brl_bank_TBank_obj*)bbt_bank,((BBSIZET)bbt_offset));
}
void brl_bank_PokeByte(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset,BBINT bbt_value){
	(bbt_bank)->clas->m_PokeByte_zi((struct brl_bank_TBank_obj*)bbt_bank,bbt_offset,bbt_value);
}
void brl_bank_PokeByte2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset,BBINT bbt_value){
	brl_bank_PokeByte((struct brl_bank_TBank_obj*)bbt_bank,((BBSIZET)bbt_offset),bbt_value);
}
BBINT brl_bank_PeekShort(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset){
	return (bbt_bank)->clas->m_PeekShort_z((struct brl_bank_TBank_obj*)bbt_bank,bbt_offset);
}
BBINT brl_bank_PeekShort2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset){
	return brl_bank_PeekShort((struct brl_bank_TBank_obj*)bbt_bank,((BBSIZET)bbt_offset));
}
void brl_bank_PokeShort(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset,BBINT bbt_value){
	(bbt_bank)->clas->m_PokeShort_zi((struct brl_bank_TBank_obj*)bbt_bank,bbt_offset,bbt_value);
}
void brl_bank_PokeShort2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset,BBINT bbt_value){
	brl_bank_PokeShort((struct brl_bank_TBank_obj*)bbt_bank,((BBSIZET)bbt_offset),bbt_value);
}
BBINT brl_bank_PeekInt(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset){
	return (bbt_bank)->clas->m_PeekInt_z((struct brl_bank_TBank_obj*)bbt_bank,bbt_offset);
}
BBINT brl_bank_PeekInt2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset){
	return brl_bank_PeekInt((struct brl_bank_TBank_obj*)bbt_bank,((BBSIZET)bbt_offset));
}
void brl_bank_PokeInt(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset,BBINT bbt_value){
	(bbt_bank)->clas->m_PokeInt_zi((struct brl_bank_TBank_obj*)bbt_bank,bbt_offset,bbt_value);
}
void brl_bank_PokeInt2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset,BBINT bbt_value){
	brl_bank_PokeInt((struct brl_bank_TBank_obj*)bbt_bank,((BBSIZET)bbt_offset),bbt_value);
}
BBLONG brl_bank_PeekLong(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset){
	return (bbt_bank)->clas->m_PeekLong_z((struct brl_bank_TBank_obj*)bbt_bank,bbt_offset);
}
BBLONG brl_bank_PeekLong2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset){
	return brl_bank_PeekLong((struct brl_bank_TBank_obj*)bbt_bank,((BBSIZET)bbt_offset));
}
void brl_bank_PokeLong(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset,BBLONG bbt_value){
	(bbt_bank)->clas->m_PokeLong_zl((struct brl_bank_TBank_obj*)bbt_bank,bbt_offset,bbt_value);
}
void brl_bank_PokeLong2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset,BBLONG bbt_value){
	brl_bank_PokeLong((struct brl_bank_TBank_obj*)bbt_bank,((BBSIZET)bbt_offset),bbt_value);
}
BBFLOAT brl_bank_PeekFloat(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset){
	return (bbt_bank)->clas->m_PeekFloat_z((struct brl_bank_TBank_obj*)bbt_bank,bbt_offset);
}
BBFLOAT brl_bank_PeekFloat2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset){
	return brl_bank_PeekFloat((struct brl_bank_TBank_obj*)bbt_bank,((BBSIZET)bbt_offset));
}
void brl_bank_PokeFloat(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset,BBFLOAT bbt_value){
	(bbt_bank)->clas->m_PokeFloat_zf((struct brl_bank_TBank_obj*)bbt_bank,bbt_offset,bbt_value);
}
void brl_bank_PokeFloat2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset,BBFLOAT bbt_value){
	brl_bank_PokeFloat((struct brl_bank_TBank_obj*)bbt_bank,((BBSIZET)bbt_offset),bbt_value);
}
BBDOUBLE brl_bank_PeekDouble(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset){
	return (bbt_bank)->clas->m_PeekDouble_z((struct brl_bank_TBank_obj*)bbt_bank,bbt_offset);
}
BBDOUBLE brl_bank_PeekDouble2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset){
	return brl_bank_PeekDouble((struct brl_bank_TBank_obj*)bbt_bank,((BBSIZET)bbt_offset));
}
void brl_bank_PokeDouble(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset,BBDOUBLE bbt_value){
	(bbt_bank)->clas->m_PokeDouble_zd((struct brl_bank_TBank_obj*)bbt_bank,bbt_offset,bbt_value);
}
void brl_bank_PokeDouble2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset,BBDOUBLE bbt_value){
	brl_bank_PokeDouble((struct brl_bank_TBank_obj*)bbt_bank,((BBSIZET)bbt_offset),bbt_value);
}
BBLONG brl_bank_ReadBank(struct brl_bank_TBank_obj* bbt_bank,struct brl_stream_TStream_obj* bbt_stream,BBSIZET bbt_offset,BBLONG bbt_count){
	return (bbt_bank)->clas->m_Read_TTStreamll((struct brl_bank_TBank_obj*)bbt_bank,(struct brl_stream_TStream_obj*)bbt_stream,((BBLONG)bbt_offset),bbt_count);
}
BBLONG brl_bank_ReadBank2(struct brl_bank_TBank_obj* bbt_bank,struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_offset,BBLONG bbt_count){
	return brl_bank_ReadBank((struct brl_bank_TBank_obj*)bbt_bank,(struct brl_stream_TStream_obj*)bbt_stream,((BBSIZET)bbt_offset),bbt_count);
}
BBLONG brl_bank_WriteBank(struct brl_bank_TBank_obj* bbt_bank,struct brl_stream_TStream_obj* bbt_stream,BBSIZET bbt_offset,BBLONG bbt_count){
	return (bbt_bank)->clas->m_Write_TTStreamll((struct brl_bank_TBank_obj*)bbt_bank,(struct brl_stream_TStream_obj*)bbt_stream,((BBLONG)bbt_offset),bbt_count);
}
BBLONG brl_bank_WriteBank2(struct brl_bank_TBank_obj* bbt_bank,struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_offset,BBLONG bbt_count){
	return brl_bank_WriteBank((struct brl_bank_TBank_obj*)bbt_bank,(struct brl_stream_TStream_obj*)bbt_stream,((BBSIZET)bbt_offset),bbt_count);
}
static int __bb_brl_bank_bank_inited = 0;
int __bb_brl_bank_bank(){
	if (!__bb_brl_bank_bank_inited) {
		__bb_brl_bank_bank_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_stream_stream();
		bbObjectRegisterType((BBCLASS)&brl_bank_TBank);
		return 0;
	}
	return 0;
}