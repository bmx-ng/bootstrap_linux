#include <brl.mod/stream.mod/.bmx/stream.bmx.release.linux.x64.h>
static BBString _s21={
	&bbStringClass,
	1,
	{46}
};
static BBString _s19={
	&bbStringClass,
	1,
	{47}
};
static BBString _s22={
	&bbStringClass,
	1,
	{49}
};
static BBString _s23={
	&bbStringClass,
	1,
	{50}
};
static BBString _s24={
	&bbStringClass,
	1,
	{52}
};
static BBString _s20={
	&bbStringClass,
	2,
	{58,58}
};
static BBString _s9={
	&bbStringClass,
	34,
	{65,116,116,101,109,112,116,32,116,111,32,114,101,97,100,32,102
	,114,111,109,32,99,108,111,115,101,100,32,115,116,114,101,97
	,109}
};
static BBString _s10={
	&bbStringClass,
	38,
	{65,116,116,101,109,112,116,32,116,111,32,114,101,97,100,32,102
	,114,111,109,32,119,114,105,116,101,45,111,110,108,121,32,115
	,116,114,101,97,109}
};
static BBString _s8={
	&bbStringClass,
	29,
	{65,116,116,101,109,112,116,32,116,111,32,115,101,101,107,32,99
	,108,111,115,101,100,32,115,116,114,101,97,109}
};
static BBString _s11={
	&bbStringClass,
	33,
	{65,116,116,101,109,112,116,32,116,111,32,119,114,105,116,101,32
	,116,111,32,99,108,111,115,101,100,32,115,116,114,101,97,109
}
};
static BBString _s12={
	&bbStringClass,
	36,
	{65,116,116,101,109,112,116,32,116,111,32,119,114,105,116,101,32
	,116,111,32,114,101,97,100,45,111,110,108,121,32,115,116,114
	,101,97,109}
};
static BBString _s0={
	&bbStringClass,
	25,
	{69,114,114,111,114,32,114,101,97,100,105,110,103,32,102,114,111
	,109,32,115,116,114,101,97,109}
};
static BBString _s1={
	&bbStringClass,
	23,
	{69,114,114,111,114,32,119,114,105,116,105,110,103,32,116,111,32
	,115,116,114,101,97,109}
};
static BBString _s5={
	&bbStringClass,
	21,
	{73,108,108,101,103,97,108,32,83,116,114,105,110,103,32,108,101
	,110,103,116,104}
};
static BBString _s4={
	&bbStringClass,
	32,
	{83,116,114,101,97,109,32,100,111,101,115,32,110,111,116,32,115
	,117,112,112,111,114,116,32,114,101,115,105,122,105,110,103}
};
static BBString _s2={
	&bbStringClass,
	22,
	{83,116,114,101,97,109,32,105,115,32,110,111,116,32,114,101,97
	,100,97,98,108,101}
};
static BBString _s3={
	&bbStringClass,
	23,
	{83,116,114,101,97,109,32,105,115,32,110,111,116,32,119,114,105
	,116,101,97,98,108,101}
};
static BBString _s6={
	&bbStringClass,
	21,
	{85,110,97,98,108,101,32,116,111,32,114,101,97,100,32,111,98
	,106,101,99,116}
};
static BBString _s7={
	&bbStringClass,
	22,
	{85,110,97,98,108,101,32,116,111,32,119,114,105,116,101,32,111
	,98,106,101,99,116}
};
static BBString _s18={
	&bbStringClass,
	1,
	{92}
};
static BBString _s14={
	&bbStringClass,
	3,
	{97,43,98}
};
static BBString _s16={
	&bbStringClass,
	2,
	{97,98}
};
static BBString _s13={
	&bbStringClass,
	3,
	{114,43,98}
};
static BBString _s17={
	&bbStringClass,
	2,
	{114,98}
};
static BBString _s15={
	&bbStringClass,
	2,
	{119,98}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_10{int kind; const char *name; BBDebugDecl decls[11]; };
struct BBDebugScope_18{int kind; const char *name; BBDebugDecl decls[19]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_22{int kind; const char *name; BBDebugDecl decls[23]; };
struct BBDebugScope_28{int kind; const char *name; BBDebugDecl decls[29]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct brl_stream_TStreamFactory_obj* brl_stream_stream_factories=(struct brl_stream_TStreamFactory_obj*)(&bbNullObject);
void _brl_stream_TStreamFactory_New(struct brl_stream_TStreamFactory_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_stream_TStreamFactory;
	o->_brl_stream_tstreamfactory__succ = (struct brl_stream_TStreamFactory_obj*)(&bbNullObject);
	o->_brl_stream_tstreamfactory__succ =(struct brl_stream_TStreamFactory_obj*)brl_stream_stream_factories;
	brl_stream_stream_factories=(struct brl_stream_TStreamFactory_obj*)o;
}
struct brl_stream_TStream_obj* _brl_stream_TStreamFactory_CreateStream_TObjectSSii(struct brl_stream_TStreamFactory_obj* o,BBOBJECT bbt_url,BBSTRING bbt_proto,BBSTRING bbt_path,BBINT bbt_readable,BBINT bbt_writeMode){
	brl_blitz_NullMethodError();
	return (struct brl_stream_TStream_obj*)(&bbNullObject);
}
struct BBDebugScope_2 brl_stream_TStreamFactory_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStreamFactory",
	{
		{
			BBDEBUGDECL_FIELD,
			"_succ",
			":TStreamFactory",
			.field_offset=offsetof(struct brl_stream_TStreamFactory_obj,_brl_stream_tstreamfactory__succ)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_stream_TStreamFactory_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_stream_TStreamFactory brl_stream_TStreamFactory={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_stream_TStreamFactory_scope,
	sizeof(struct brl_stream_TStreamFactory_obj),
	(void (*)(BBOBJECT))_brl_stream_TStreamFactory_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_stream_TStreamFactory_obj,_brl_stream_tstreamfactory__succ) - sizeof(void*) + sizeof(struct brl_stream_TStreamFactory_obj*)
	,0
	,_brl_stream_TStreamFactory_CreateStream_TObjectSSii
};

void _brl_stream_TStreamException_New(struct brl_stream_TStreamException_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_stream_TStreamException;
}
struct BBDebugScope_1 brl_stream_TStreamException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStreamException",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_stream_TStreamException_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_stream_TStreamException brl_stream_TStreamException={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_stream_TStreamException_scope,
	sizeof(struct brl_stream_TStreamException_obj),
	(void (*)(BBOBJECT))_brl_stream_TStreamException_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

void _brl_stream_TStreamReadException_New(struct brl_stream_TStreamReadException_obj* o) {
	_brl_stream_TStreamException_New((struct brl_stream_TStreamException_obj*)o);
	o->clas = &brl_stream_TStreamReadException;
}
BBSTRING _brl_stream_TStreamReadException_ToString(struct brl_stream_TStreamReadException_obj* o){
	return &_s0;
}
struct BBDebugScope_2 brl_stream_TStreamReadException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStreamReadException",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_stream_TStreamReadException_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&_brl_stream_TStreamReadException_ToString
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_stream_TStreamReadException brl_stream_TStreamReadException={
	&brl_stream_TStreamException,
	bbObjectFree,
	(BBDebugScope*)&brl_stream_TStreamReadException_scope,
	sizeof(struct brl_stream_TStreamReadException_obj),
	(void (*)(BBOBJECT))_brl_stream_TStreamReadException_New,
	bbObjectDtor,
	(BBSTRING (*)(BBOBJECT))_brl_stream_TStreamReadException_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

void _brl_stream_TStreamWriteException_New(struct brl_stream_TStreamWriteException_obj* o) {
	_brl_stream_TStreamException_New((struct brl_stream_TStreamException_obj*)o);
	o->clas = &brl_stream_TStreamWriteException;
}
BBSTRING _brl_stream_TStreamWriteException_ToString(struct brl_stream_TStreamWriteException_obj* o){
	return &_s1;
}
struct BBDebugScope_2 brl_stream_TStreamWriteException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStreamWriteException",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_stream_TStreamWriteException_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&_brl_stream_TStreamWriteException_ToString
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_stream_TStreamWriteException brl_stream_TStreamWriteException={
	&brl_stream_TStreamException,
	bbObjectFree,
	(BBDebugScope*)&brl_stream_TStreamWriteException_scope,
	sizeof(struct brl_stream_TStreamWriteException_obj),
	(void (*)(BBOBJECT))_brl_stream_TStreamWriteException_New,
	bbObjectDtor,
	(BBSTRING (*)(BBOBJECT))_brl_stream_TStreamWriteException_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

void _brl_stream_TIO_New(struct brl_stream_TIO_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_stream_TIO;
}
void _brl_stream_TIO_Delete(struct brl_stream_TIO_obj* o) {
	((struct brl_stream_TIO_obj*)o)->clas->m_Close((struct brl_stream_TIO_obj*)o);
	bbObjectDtor((BBOBJECT)o);
}
BBINT _brl_stream_TIO_Eof(struct brl_stream_TIO_obj* o){
	return (((struct brl_stream_TIO_obj*)o)->clas->m_Pos((struct brl_stream_TIO_obj*)o)==((struct brl_stream_TIO_obj*)o)->clas->m_Size((struct brl_stream_TIO_obj*)o));
}
BBLONG _brl_stream_TIO_Pos(struct brl_stream_TIO_obj* o){
	return -1LL;
}
BBLONG _brl_stream_TIO_Size(struct brl_stream_TIO_obj* o){
	return 0LL;
}
BBLONG _brl_stream_TIO_Seek_li(struct brl_stream_TIO_obj* o,BBLONG bbt_pos,BBINT bbt_whence){
	return -1LL;
}
void _brl_stream_TIO_Flush(struct brl_stream_TIO_obj* o){
}
void _brl_stream_TIO_Close(struct brl_stream_TIO_obj* o){
}
BBLONG _brl_stream_TIO_Read_pbl(struct brl_stream_TIO_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	brl_blitz_RuntimeError(&_s2);
	return 0LL;
}
BBLONG _brl_stream_TIO_Write_pbl(struct brl_stream_TIO_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	brl_blitz_RuntimeError(&_s3);
	return 0LL;
}
BBINT _brl_stream_TIO_SetSize_l(struct brl_stream_TIO_obj* o,BBLONG bbt_size){
	brl_blitz_RuntimeError(&_s4);
	return 0;
}
struct BBDebugScope_10 brl_stream_TIO_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIO",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_stream_TIO_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Eof",
			"()i",
			.var_address=(void*)&_brl_stream_TIO_Eof
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Pos",
			"()l",
			.var_address=(void*)&_brl_stream_TIO_Pos
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Size",
			"()l",
			.var_address=(void*)&_brl_stream_TIO_Size
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Seek",
			"(l,i)l",
			.var_address=(void*)&_brl_stream_TIO_Seek_li
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Flush",
			"()",
			.var_address=(void*)&_brl_stream_TIO_Flush
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Close",
			"()",
			.var_address=(void*)&_brl_stream_TIO_Close
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Read",
			"(*b,l)l",
			.var_address=(void*)&_brl_stream_TIO_Read_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Write",
			"(*b,l)l",
			.var_address=(void*)&_brl_stream_TIO_Write_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSize",
			"(l)i",
			.var_address=(void*)&_brl_stream_TIO_SetSize_l
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_stream_TIO brl_stream_TIO={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_stream_TIO_scope,
	sizeof(struct brl_stream_TIO_obj),
	(void (*)(BBOBJECT))_brl_stream_TIO_New,
	(void (*)(BBOBJECT))_brl_stream_TIO_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_stream_TIO_Eof
	,_brl_stream_TIO_Pos
	,_brl_stream_TIO_Size
	,_brl_stream_TIO_Seek_li
	,_brl_stream_TIO_Flush
	,_brl_stream_TIO_Close
	,_brl_stream_TIO_Read_pbl
	,_brl_stream_TIO_Write_pbl
	,_brl_stream_TIO_SetSize_l
};

void _brl_stream_TStream_New(struct brl_stream_TStream_obj* o) {
	_brl_stream_TIO_New((struct brl_stream_TIO_obj*)o);
	o->clas = &brl_stream_TStream;
}
void _brl_stream_TStream_Delete(struct brl_stream_TStream_obj* o) {
	_brl_stream_TIO_Delete((struct brl_stream_TIO_obj*)o);
}
BBLONG _brl_stream_TStream_ReadBytes_pbl(struct brl_stream_TStream_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	BBLONG bbt_t=bbt_count;
	while(bbt_count>0LL){
		BBLONG bbt_n=((struct brl_stream_TIO_obj*)o)->clas->m_Read_pbl((struct brl_stream_TIO_obj*)o,bbt_buf,bbt_count);
		if(!(bbt_n!=0)){
			bbExThrow((BBObject *)(struct brl_stream_TStreamReadException_obj*)bbObjectAtomicNew((BBClass *)&brl_stream_TStreamReadException));
		}
		bbt_count-=bbt_n;
		bbt_buf+=bbt_n;
	}
	return bbt_t;
}
BBLONG _brl_stream_TStream_WriteBytes_pbl(struct brl_stream_TStream_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	BBLONG bbt_t=bbt_count;
	while(bbt_count>0LL){
		BBLONG bbt_n=((struct brl_stream_TIO_obj*)o)->clas->m_Write_pbl((struct brl_stream_TIO_obj*)o,bbt_buf,bbt_count);
		if(!(bbt_n!=0)){
			bbExThrow((BBObject *)(struct brl_stream_TStreamWriteException_obj*)bbObjectAtomicNew((BBClass *)&brl_stream_TStreamWriteException));
		}
		bbt_count-=bbt_n;
		bbt_buf+=bbt_n;
	}
	return bbt_t;
}
BBLONG _brl_stream_TStream_SkipBytes_l(struct brl_stream_TStream_obj* o,BBLONG bbt_count){
	BBLONG bbt_t=bbt_count;
	BBARRAY bbt_buf=bbArrayNew1D("b", 1024);
	while(bbt_count>0LL){
		BBLONG bbt_n=((struct brl_stream_TIO_obj*)o)->clas->m_Read_pbl((struct brl_stream_TIO_obj*)o,((BBBYTE*)BBARRAYDATA(bbt_buf,1)),brl_blitz_Min2(bbt_count,((BBLONG)(bbt_buf->scales[0]))));
		if(!(bbt_n!=0)){
			bbExThrow((BBObject *)(struct brl_stream_TStreamReadException_obj*)bbObjectAtomicNew((BBClass *)&brl_stream_TStreamReadException));
		}
		bbt_count-=bbt_n;
	}
	return bbt_t;
}
BBINT _brl_stream_TStream_ReadByte(struct brl_stream_TStream_obj* o){
	BBBYTE bbt_n=0;
	((struct brl_stream_TStream_obj*)o)->clas->m_ReadBytes_pbl((struct brl_stream_TStream_obj*)o,(&bbt_n),1LL);
	return ((BBINT)bbt_n);
}
void _brl_stream_TStream_WriteByte_i(struct brl_stream_TStream_obj* o,BBINT bbt_n){
	BBBYTE bbt_q=((BBBYTE)bbt_n);
	((struct brl_stream_TStream_obj*)o)->clas->m_WriteBytes_pbl((struct brl_stream_TStream_obj*)o,(&bbt_q),1LL);
}
BBINT _brl_stream_TStream_ReadShort(struct brl_stream_TStream_obj* o){
	BBSHORT bbt_n=0;
	((struct brl_stream_TStream_obj*)o)->clas->m_ReadBytes_pbl((struct brl_stream_TStream_obj*)o,((BBBYTE*)(&bbt_n)),2LL);
	return ((BBINT)bbt_n);
}
void _brl_stream_TStream_WriteShort_i(struct brl_stream_TStream_obj* o,BBINT bbt_n){
	BBSHORT bbt_q=((BBSHORT)bbt_n);
	((struct brl_stream_TStream_obj*)o)->clas->m_WriteBytes_pbl((struct brl_stream_TStream_obj*)o,((BBBYTE*)(&bbt_q)),2LL);
}
BBINT _brl_stream_TStream_ReadInt(struct brl_stream_TStream_obj* o){
	BBINT bbt_n=0;
	((struct brl_stream_TStream_obj*)o)->clas->m_ReadBytes_pbl((struct brl_stream_TStream_obj*)o,((BBBYTE*)(&bbt_n)),4LL);
	return bbt_n;
}
void _brl_stream_TStream_WriteInt_i(struct brl_stream_TStream_obj* o,BBINT bbt_n){
	BBINT bbt_q=bbt_n;
	((struct brl_stream_TStream_obj*)o)->clas->m_WriteBytes_pbl((struct brl_stream_TStream_obj*)o,((BBBYTE*)(&bbt_q)),4LL);
}
BBLONG _brl_stream_TStream_ReadLong(struct brl_stream_TStream_obj* o){
	BBLONG bbt_n=0LL;
	((struct brl_stream_TStream_obj*)o)->clas->m_ReadBytes_pbl((struct brl_stream_TStream_obj*)o,((BBBYTE*)(&bbt_n)),8LL);
	return bbt_n;
}
void _brl_stream_TStream_WriteLong_l(struct brl_stream_TStream_obj* o,BBLONG bbt_n){
	BBLONG bbt_q=bbt_n;
	((struct brl_stream_TStream_obj*)o)->clas->m_WriteBytes_pbl((struct brl_stream_TStream_obj*)o,((BBBYTE*)(&bbt_q)),8LL);
}
BBFLOAT _brl_stream_TStream_ReadFloat(struct brl_stream_TStream_obj* o){
	BBFLOAT bbt_n=.00000000f;
	((struct brl_stream_TStream_obj*)o)->clas->m_ReadBytes_pbl((struct brl_stream_TStream_obj*)o,((BBBYTE*)(&bbt_n)),4LL);
	return bbt_n;
}
void _brl_stream_TStream_WriteFloat_f(struct brl_stream_TStream_obj* o,BBFLOAT bbt_n){
	BBFLOAT bbt_q=bbt_n;
	((struct brl_stream_TStream_obj*)o)->clas->m_WriteBytes_pbl((struct brl_stream_TStream_obj*)o,((BBBYTE*)(&bbt_q)),4LL);
}
BBDOUBLE _brl_stream_TStream_ReadDouble(struct brl_stream_TStream_obj* o){
	BBDOUBLE bbt_n=.0000000000000000;
	((struct brl_stream_TStream_obj*)o)->clas->m_ReadBytes_pbl((struct brl_stream_TStream_obj*)o,((BBBYTE*)(&bbt_n)),8LL);
	return bbt_n;
}
void _brl_stream_TStream_WriteDouble_d(struct brl_stream_TStream_obj* o,BBDOUBLE bbt_n){
	BBDOUBLE bbt_q=bbt_n;
	((struct brl_stream_TStream_obj*)o)->clas->m_WriteBytes_pbl((struct brl_stream_TStream_obj*)o,((BBBYTE*)(&bbt_q)),8LL);
}
BBSTRING _brl_stream_TStream_ReadLine(struct brl_stream_TStream_obj* o){
	BBARRAY bbt_buf=bbArrayNew1D("b", 1024);
	BBINT bbt_sz=0;
	do{
		BBBYTE bbt_ch=0;
		if(((((struct brl_stream_TIO_obj*)o)->clas->m_Read_pbl((struct brl_stream_TIO_obj*)o,(&bbt_ch),1LL)!=1LL) || (((BBINT)bbt_ch)==0)) || (((BBINT)bbt_ch)==10)){
			break;
		}
		if(((BBINT)bbt_ch)==13){
			continue;
		}
		if(bbt_sz==(bbt_buf->scales[0])){
			bbt_buf=bbArraySlice("b",bbt_buf,0,(bbt_sz*2));
		}
		((BBBYTE*)BBARRAYDATA(bbt_buf,1))[((BBUINT)bbt_sz)]=bbt_ch;
		bbt_sz+=1;
	}while(!(0));
	return bbStringFromBytes(((BBBYTE*)BBARRAYDATA(bbt_buf,1)),bbt_sz);
}
BBINT _brl_stream_TStream_WriteLine_S(struct brl_stream_TStream_obj* o,BBSTRING bbt_str){
	BBBYTE* bbt_buf=bbStringToCString((BBSTRING)bbt_str);
	BBBYTE bbt_2[]={13,10};
	BBARRAY bbt_3 = bbArrayFromData("b",2,bbt_2);
	BBARRAY bbt_=bbt_3;
	BBINT bbt_ok=((((struct brl_stream_TIO_obj*)o)->clas->m_Write_pbl((struct brl_stream_TIO_obj*)o,bbt_buf,((BBLONG)(bbt_str->length)))==((BBLONG)(bbt_str->length))) && (((struct brl_stream_TIO_obj*)o)->clas->m_Write_pbl((struct brl_stream_TIO_obj*)o,((BBBYTE*)BBARRAYDATA(bbt_,1)),2LL)==2LL));
	bbMemFree((void*)bbt_buf);
	return bbt_ok;
}
BBSTRING _brl_stream_TStream_ReadString_i(struct brl_stream_TStream_obj* o,BBINT bbt_length){
	BBARRAY bbt_buf=bbArrayNew1D("b", bbt_length);
	((struct brl_stream_TStream_obj*)o)->clas->m_ReadBytes_pbl((struct brl_stream_TStream_obj*)o,((BBBYTE*)BBARRAYDATA(bbt_buf,1)),((BBLONG)bbt_length));
	return bbStringFromBytes(((BBBYTE*)BBARRAYDATA(bbt_buf,1)),bbt_length);
}
void _brl_stream_TStream_WriteString_S(struct brl_stream_TStream_obj* o,BBSTRING bbt_str){
	BBBYTE* bbt_buf=bbStringToCString((BBSTRING)bbt_str);
	((struct brl_stream_TStream_obj*)o)->clas->m_WriteBytes_pbl((struct brl_stream_TStream_obj*)o,bbt_buf,((BBLONG)(bbt_str->length)));
	bbMemFree((void*)bbt_buf);
}
BBOBJECT _brl_stream_TStream_ReadObject(struct brl_stream_TStream_obj* o){
	bbExThrow((BBObject *)&_s6);
	return (BBOBJECT)(&bbNullObject);
}
void _brl_stream_TStream_WriteObject_TObject(struct brl_stream_TStream_obj* o,BBOBJECT bbt_obj){
	bbExThrow((BBObject *)&_s7);
}
struct BBDebugScope_22 brl_stream_TStream_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStream",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_stream_TStream_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadBytes",
			"(*b,l)l",
			.var_address=(void*)&_brl_stream_TStream_ReadBytes_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteBytes",
			"(*b,l)l",
			.var_address=(void*)&_brl_stream_TStream_WriteBytes_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SkipBytes",
			"(l)l",
			.var_address=(void*)&_brl_stream_TStream_SkipBytes_l
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadByte",
			"()i",
			.var_address=(void*)&_brl_stream_TStream_ReadByte
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteByte",
			"(i)",
			.var_address=(void*)&_brl_stream_TStream_WriteByte_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadShort",
			"()i",
			.var_address=(void*)&_brl_stream_TStream_ReadShort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteShort",
			"(i)",
			.var_address=(void*)&_brl_stream_TStream_WriteShort_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadInt",
			"()i",
			.var_address=(void*)&_brl_stream_TStream_ReadInt
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteInt",
			"(i)",
			.var_address=(void*)&_brl_stream_TStream_WriteInt_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadLong",
			"()l",
			.var_address=(void*)&_brl_stream_TStream_ReadLong
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteLong",
			"(l)",
			.var_address=(void*)&_brl_stream_TStream_WriteLong_l
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadFloat",
			"()f",
			.var_address=(void*)&_brl_stream_TStream_ReadFloat
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteFloat",
			"(f)",
			.var_address=(void*)&_brl_stream_TStream_WriteFloat_f
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadDouble",
			"()d",
			.var_address=(void*)&_brl_stream_TStream_ReadDouble
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteDouble",
			"(d)",
			.var_address=(void*)&_brl_stream_TStream_WriteDouble_d
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadLine",
			"()$",
			.var_address=(void*)&_brl_stream_TStream_ReadLine
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteLine",
			"($)i",
			.var_address=(void*)&_brl_stream_TStream_WriteLine_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadString",
			"(i)$",
			.var_address=(void*)&_brl_stream_TStream_ReadString_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteString",
			"($)",
			.var_address=(void*)&_brl_stream_TStream_WriteString_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadObject",
			"():Object",
			.var_address=(void*)&_brl_stream_TStream_ReadObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteObject",
			"(:Object)",
			.var_address=(void*)&_brl_stream_TStream_WriteObject_TObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_stream_TStream brl_stream_TStream={
	&brl_stream_TIO,
	bbObjectFree,
	(BBDebugScope*)&brl_stream_TStream_scope,
	sizeof(struct brl_stream_TStream_obj),
	(void (*)(BBOBJECT))_brl_stream_TStream_New,
	(void (*)(BBOBJECT))_brl_stream_TStream_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_stream_TIO_Eof
	,_brl_stream_TIO_Pos
	,_brl_stream_TIO_Size
	,_brl_stream_TIO_Seek_li
	,_brl_stream_TIO_Flush
	,_brl_stream_TIO_Close
	,_brl_stream_TIO_Read_pbl
	,_brl_stream_TIO_Write_pbl
	,_brl_stream_TIO_SetSize_l
	,_brl_stream_TStream_ReadBytes_pbl
	,_brl_stream_TStream_WriteBytes_pbl
	,_brl_stream_TStream_SkipBytes_l
	,_brl_stream_TStream_ReadByte
	,_brl_stream_TStream_WriteByte_i
	,_brl_stream_TStream_ReadShort
	,_brl_stream_TStream_WriteShort_i
	,_brl_stream_TStream_ReadInt
	,_brl_stream_TStream_WriteInt_i
	,_brl_stream_TStream_ReadLong
	,_brl_stream_TStream_WriteLong_l
	,_brl_stream_TStream_ReadFloat
	,_brl_stream_TStream_WriteFloat_f
	,_brl_stream_TStream_ReadDouble
	,_brl_stream_TStream_WriteDouble_d
	,_brl_stream_TStream_ReadLine
	,_brl_stream_TStream_WriteLine_S
	,_brl_stream_TStream_ReadString_i
	,_brl_stream_TStream_WriteString_S
	,_brl_stream_TStream_ReadObject
	,_brl_stream_TStream_WriteObject_TObject
};

void _brl_stream_TStreamWrapper_New(struct brl_stream_TStreamWrapper_obj* o) {
	_brl_stream_TStream_New((struct brl_stream_TStream_obj*)o);
	o->clas = &brl_stream_TStreamWrapper;
	o->_brl_stream_tstreamwrapper__stream = (struct brl_stream_TStream_obj*)(&bbNullObject);
}
void _brl_stream_TStreamWrapper_Delete(struct brl_stream_TStreamWrapper_obj* o) {
	_brl_stream_TStream_Delete((struct brl_stream_TStream_obj*)o);
}
void _brl_stream_TStreamWrapper_SetStream_TTStream(struct brl_stream_TStreamWrapper_obj* o,struct brl_stream_TStream_obj* bbt_stream){
	o->_brl_stream_tstreamwrapper__stream =(struct brl_stream_TStream_obj*)bbt_stream;
}
BBINT _brl_stream_TStreamWrapper_Eof(struct brl_stream_TStreamWrapper_obj* o){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_Eof((struct brl_stream_TIO_obj*)o->_brl_stream_tstreamwrapper__stream );
}
BBLONG _brl_stream_TStreamWrapper_Pos(struct brl_stream_TStreamWrapper_obj* o){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_Pos((struct brl_stream_TIO_obj*)o->_brl_stream_tstreamwrapper__stream );
}
BBLONG _brl_stream_TStreamWrapper_Size(struct brl_stream_TStreamWrapper_obj* o){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_Size((struct brl_stream_TIO_obj*)o->_brl_stream_tstreamwrapper__stream );
}
BBLONG _brl_stream_TStreamWrapper_Seek_li(struct brl_stream_TStreamWrapper_obj* o,BBLONG bbt_pos,BBINT bbt_whence){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_Seek_li((struct brl_stream_TIO_obj*)o->_brl_stream_tstreamwrapper__stream ,bbt_pos,bbt_whence);
}
void _brl_stream_TStreamWrapper_Flush(struct brl_stream_TStreamWrapper_obj* o){
	(o->_brl_stream_tstreamwrapper__stream )->clas->m_Flush((struct brl_stream_TIO_obj*)o->_brl_stream_tstreamwrapper__stream );
}
void _brl_stream_TStreamWrapper_Close(struct brl_stream_TStreamWrapper_obj* o){
	if(((BBObject*)o->_brl_stream_tstreamwrapper__stream )!= &bbNullObject){
		(o->_brl_stream_tstreamwrapper__stream )->clas->m_Close((struct brl_stream_TIO_obj*)o->_brl_stream_tstreamwrapper__stream );
		o->_brl_stream_tstreamwrapper__stream =(struct brl_stream_TStream_obj*)&bbNullObject;
	}
}
BBLONG _brl_stream_TStreamWrapper_Read_pbl(struct brl_stream_TStreamWrapper_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_Read_pbl((struct brl_stream_TIO_obj*)o->_brl_stream_tstreamwrapper__stream ,bbt_buf,bbt_count);
}
BBLONG _brl_stream_TStreamWrapper_Write_pbl(struct brl_stream_TStreamWrapper_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_Write_pbl((struct brl_stream_TIO_obj*)o->_brl_stream_tstreamwrapper__stream ,bbt_buf,bbt_count);
}
BBINT _brl_stream_TStreamWrapper_ReadByte(struct brl_stream_TStreamWrapper_obj* o){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_ReadByte((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream );
}
void _brl_stream_TStreamWrapper_WriteByte_i(struct brl_stream_TStreamWrapper_obj* o,BBINT bbt_n){
	(o->_brl_stream_tstreamwrapper__stream )->clas->m_WriteByte_i((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream ,bbt_n);
}
BBINT _brl_stream_TStreamWrapper_ReadShort(struct brl_stream_TStreamWrapper_obj* o){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_ReadShort((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream );
}
void _brl_stream_TStreamWrapper_WriteShort_i(struct brl_stream_TStreamWrapper_obj* o,BBINT bbt_n){
	(o->_brl_stream_tstreamwrapper__stream )->clas->m_WriteShort_i((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream ,bbt_n);
}
BBINT _brl_stream_TStreamWrapper_ReadInt(struct brl_stream_TStreamWrapper_obj* o){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_ReadInt((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream );
}
void _brl_stream_TStreamWrapper_WriteInt_i(struct brl_stream_TStreamWrapper_obj* o,BBINT bbt_n){
	(o->_brl_stream_tstreamwrapper__stream )->clas->m_WriteInt_i((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream ,bbt_n);
}
BBFLOAT _brl_stream_TStreamWrapper_ReadFloat(struct brl_stream_TStreamWrapper_obj* o){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_ReadFloat((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream );
}
void _brl_stream_TStreamWrapper_WriteFloat_f(struct brl_stream_TStreamWrapper_obj* o,BBFLOAT bbt_n){
	(o->_brl_stream_tstreamwrapper__stream )->clas->m_WriteFloat_f((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream ,bbt_n);
}
BBDOUBLE _brl_stream_TStreamWrapper_ReadDouble(struct brl_stream_TStreamWrapper_obj* o){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_ReadDouble((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream );
}
void _brl_stream_TStreamWrapper_WriteDouble_d(struct brl_stream_TStreamWrapper_obj* o,BBDOUBLE bbt_n){
	(o->_brl_stream_tstreamwrapper__stream )->clas->m_WriteDouble_d((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream ,bbt_n);
}
BBSTRING _brl_stream_TStreamWrapper_ReadLine(struct brl_stream_TStreamWrapper_obj* o){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_ReadLine((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream );
}
BBINT _brl_stream_TStreamWrapper_WriteLine_S(struct brl_stream_TStreamWrapper_obj* o,BBSTRING bbt_t){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream ,bbt_t);
}
BBSTRING _brl_stream_TStreamWrapper_ReadString_i(struct brl_stream_TStreamWrapper_obj* o,BBINT bbt_n){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_ReadString_i((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream ,bbt_n);
}
void _brl_stream_TStreamWrapper_WriteString_S(struct brl_stream_TStreamWrapper_obj* o,BBSTRING bbt_t){
	(o->_brl_stream_tstreamwrapper__stream )->clas->m_WriteString_S((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream ,bbt_t);
}
BBOBJECT _brl_stream_TStreamWrapper_ReadObject(struct brl_stream_TStreamWrapper_obj* o){
	return (BBOBJECT)(o->_brl_stream_tstreamwrapper__stream )->clas->m_ReadObject((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream );
}
void _brl_stream_TStreamWrapper_WriteObject_TObject(struct brl_stream_TStreamWrapper_obj* o,BBOBJECT bbt_obj){
	(o->_brl_stream_tstreamwrapper__stream )->clas->m_WriteObject_TObject((struct brl_stream_TStream_obj*)o->_brl_stream_tstreamwrapper__stream ,(BBOBJECT)bbt_obj);
}
BBINT _brl_stream_TStreamWrapper_SetSize_l(struct brl_stream_TStreamWrapper_obj* o,BBLONG bbt_size){
	return (o->_brl_stream_tstreamwrapper__stream )->clas->m_SetSize_l((struct brl_stream_TIO_obj*)o->_brl_stream_tstreamwrapper__stream ,bbt_size);
}
struct BBDebugScope_28 brl_stream_TStreamWrapper_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStreamWrapper",
	{
		{
			BBDEBUGDECL_FIELD,
			"_stream",
			":TStream",
			.field_offset=offsetof(struct brl_stream_TStreamWrapper_obj,_brl_stream_tstreamwrapper__stream)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_stream_TStreamWrapper_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetStream",
			"(:TStream)",
			.var_address=(void*)&_brl_stream_TStreamWrapper_SetStream_TTStream
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Eof",
			"()i",
			.var_address=(void*)&_brl_stream_TStreamWrapper_Eof
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Pos",
			"()l",
			.var_address=(void*)&_brl_stream_TStreamWrapper_Pos
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Size",
			"()l",
			.var_address=(void*)&_brl_stream_TStreamWrapper_Size
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Seek",
			"(l,i)l",
			.var_address=(void*)&_brl_stream_TStreamWrapper_Seek_li
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Flush",
			"()",
			.var_address=(void*)&_brl_stream_TStreamWrapper_Flush
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Close",
			"()",
			.var_address=(void*)&_brl_stream_TStreamWrapper_Close
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Read",
			"(*b,l)l",
			.var_address=(void*)&_brl_stream_TStreamWrapper_Read_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Write",
			"(*b,l)l",
			.var_address=(void*)&_brl_stream_TStreamWrapper_Write_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadByte",
			"()i",
			.var_address=(void*)&_brl_stream_TStreamWrapper_ReadByte
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteByte",
			"(i)",
			.var_address=(void*)&_brl_stream_TStreamWrapper_WriteByte_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadShort",
			"()i",
			.var_address=(void*)&_brl_stream_TStreamWrapper_ReadShort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteShort",
			"(i)",
			.var_address=(void*)&_brl_stream_TStreamWrapper_WriteShort_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadInt",
			"()i",
			.var_address=(void*)&_brl_stream_TStreamWrapper_ReadInt
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteInt",
			"(i)",
			.var_address=(void*)&_brl_stream_TStreamWrapper_WriteInt_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadFloat",
			"()f",
			.var_address=(void*)&_brl_stream_TStreamWrapper_ReadFloat
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteFloat",
			"(f)",
			.var_address=(void*)&_brl_stream_TStreamWrapper_WriteFloat_f
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadDouble",
			"()d",
			.var_address=(void*)&_brl_stream_TStreamWrapper_ReadDouble
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteDouble",
			"(d)",
			.var_address=(void*)&_brl_stream_TStreamWrapper_WriteDouble_d
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadLine",
			"()$",
			.var_address=(void*)&_brl_stream_TStreamWrapper_ReadLine
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteLine",
			"($)i",
			.var_address=(void*)&_brl_stream_TStreamWrapper_WriteLine_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadString",
			"(i)$",
			.var_address=(void*)&_brl_stream_TStreamWrapper_ReadString_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteString",
			"($)",
			.var_address=(void*)&_brl_stream_TStreamWrapper_WriteString_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadObject",
			"():Object",
			.var_address=(void*)&_brl_stream_TStreamWrapper_ReadObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteObject",
			"(:Object)",
			.var_address=(void*)&_brl_stream_TStreamWrapper_WriteObject_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSize",
			"(l)i",
			.var_address=(void*)&_brl_stream_TStreamWrapper_SetSize_l
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_stream_TStreamWrapper brl_stream_TStreamWrapper={
	&brl_stream_TStream,
	bbObjectFree,
	(BBDebugScope*)&brl_stream_TStreamWrapper_scope,
	sizeof(struct brl_stream_TStreamWrapper_obj),
	(void (*)(BBOBJECT))_brl_stream_TStreamWrapper_New,
	(void (*)(BBOBJECT))_brl_stream_TStreamWrapper_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_stream_TStreamWrapper_obj,_brl_stream_tstreamwrapper__stream) - sizeof(void*) + sizeof(struct brl_stream_TStream_obj*)
	,0
	,_brl_stream_TStreamWrapper_Eof
	,_brl_stream_TStreamWrapper_Pos
	,_brl_stream_TStreamWrapper_Size
	,_brl_stream_TStreamWrapper_Seek_li
	,_brl_stream_TStreamWrapper_Flush
	,_brl_stream_TStreamWrapper_Close
	,_brl_stream_TStreamWrapper_Read_pbl
	,_brl_stream_TStreamWrapper_Write_pbl
	,_brl_stream_TStreamWrapper_SetSize_l
	,_brl_stream_TStream_ReadBytes_pbl
	,_brl_stream_TStream_WriteBytes_pbl
	,_brl_stream_TStream_SkipBytes_l
	,_brl_stream_TStreamWrapper_ReadByte
	,_brl_stream_TStreamWrapper_WriteByte_i
	,_brl_stream_TStreamWrapper_ReadShort
	,_brl_stream_TStreamWrapper_WriteShort_i
	,_brl_stream_TStreamWrapper_ReadInt
	,_brl_stream_TStreamWrapper_WriteInt_i
	,_brl_stream_TStream_ReadLong
	,_brl_stream_TStream_WriteLong_l
	,_brl_stream_TStreamWrapper_ReadFloat
	,_brl_stream_TStreamWrapper_WriteFloat_f
	,_brl_stream_TStreamWrapper_ReadDouble
	,_brl_stream_TStreamWrapper_WriteDouble_d
	,_brl_stream_TStreamWrapper_ReadLine
	,_brl_stream_TStreamWrapper_WriteLine_S
	,_brl_stream_TStreamWrapper_ReadString_i
	,_brl_stream_TStreamWrapper_WriteString_S
	,_brl_stream_TStreamWrapper_ReadObject
	,_brl_stream_TStreamWrapper_WriteObject_TObject
	,_brl_stream_TStreamWrapper_SetStream_TTStream
};

void _brl_stream_TStreamStream_New(struct brl_stream_TStreamStream_obj* o) {
	_brl_stream_TStreamWrapper_New((struct brl_stream_TStreamWrapper_obj*)o);
	o->clas = &brl_stream_TStreamStream;
}
void _brl_stream_TStreamStream_Delete(struct brl_stream_TStreamStream_obj* o) {
	_brl_stream_TStreamWrapper_Delete((struct brl_stream_TStreamWrapper_obj*)o);
}
void _brl_stream_TStreamStream_Close(struct brl_stream_TStreamStream_obj* o){
	((struct brl_stream_TStreamWrapper_obj*)o)->clas->m_SetStream_TTStream((struct brl_stream_TStreamWrapper_obj*)o,(struct brl_stream_TStream_obj*)&bbNullObject);
}
struct brl_stream_TStreamStream_obj* brl_stream_TStreamStream_Create_TTStreamStream_TTStream(struct brl_stream_TStream_obj* bbt_stream){
	struct brl_stream_TStreamStream_obj* bbt_t=(struct brl_stream_TStreamStream_obj*)(struct brl_stream_TStreamStream_obj*)bbObjectNew((BBClass *)&brl_stream_TStreamStream);
	(bbt_t)->clas->m_SetStream_TTStream((struct brl_stream_TStreamWrapper_obj*)bbt_t,(struct brl_stream_TStream_obj*)bbt_stream);
	return (struct brl_stream_TStreamStream_obj*)bbt_t;
}
struct BBDebugScope_3 brl_stream_TStreamStream_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStreamStream",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_stream_TStreamStream_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Close",
			"()",
			.var_address=(void*)&_brl_stream_TStreamStream_Close
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(:TStream):TStreamStream",
			.var_address=(void*)&brl_stream_TStreamStream_Create_TTStreamStream_TTStream
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_stream_TStreamStream brl_stream_TStreamStream={
	&brl_stream_TStreamWrapper,
	bbObjectFree,
	(BBDebugScope*)&brl_stream_TStreamStream_scope,
	sizeof(struct brl_stream_TStreamStream_obj),
	(void (*)(BBOBJECT))_brl_stream_TStreamStream_New,
	(void (*)(BBOBJECT))_brl_stream_TStreamStream_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_stream_TStreamWrapper_Eof
	,_brl_stream_TStreamWrapper_Pos
	,_brl_stream_TStreamWrapper_Size
	,_brl_stream_TStreamWrapper_Seek_li
	,_brl_stream_TStreamWrapper_Flush
	,_brl_stream_TStreamStream_Close
	,_brl_stream_TStreamWrapper_Read_pbl
	,_brl_stream_TStreamWrapper_Write_pbl
	,_brl_stream_TStreamWrapper_SetSize_l
	,_brl_stream_TStream_ReadBytes_pbl
	,_brl_stream_TStream_WriteBytes_pbl
	,_brl_stream_TStream_SkipBytes_l
	,_brl_stream_TStreamWrapper_ReadByte
	,_brl_stream_TStreamWrapper_WriteByte_i
	,_brl_stream_TStreamWrapper_ReadShort
	,_brl_stream_TStreamWrapper_WriteShort_i
	,_brl_stream_TStreamWrapper_ReadInt
	,_brl_stream_TStreamWrapper_WriteInt_i
	,_brl_stream_TStream_ReadLong
	,_brl_stream_TStream_WriteLong_l
	,_brl_stream_TStreamWrapper_ReadFloat
	,_brl_stream_TStreamWrapper_WriteFloat_f
	,_brl_stream_TStreamWrapper_ReadDouble
	,_brl_stream_TStreamWrapper_WriteDouble_d
	,_brl_stream_TStreamWrapper_ReadLine
	,_brl_stream_TStreamWrapper_WriteLine_S
	,_brl_stream_TStreamWrapper_ReadString_i
	,_brl_stream_TStreamWrapper_WriteString_S
	,_brl_stream_TStreamWrapper_ReadObject
	,_brl_stream_TStreamWrapper_WriteObject_TObject
	,_brl_stream_TStreamWrapper_SetStream_TTStream
	,brl_stream_TStreamStream_Create_TTStreamStream_TTStream
};

void _brl_stream_TCStream_New(struct brl_stream_TCStream_obj* o) {
	_brl_stream_TStream_New((struct brl_stream_TStream_obj*)o);
	o->clas = &brl_stream_TCStream;
	o->_brl_stream_tcstream__pos = 0LL;
	o->_brl_stream_tcstream__size = 0LL;
	o->_brl_stream_tcstream__mode = 0;
	o->_brl_stream_tcstream__cstream = 0;
}
void _brl_stream_TCStream_Delete(struct brl_stream_TCStream_obj* o) {
	((struct brl_stream_TCStream_obj*)o)->clas->m_Close((struct brl_stream_TCStream_obj*)o);
	_brl_stream_TStream_Delete((struct brl_stream_TStream_obj*)o);
}
BBLONG _brl_stream_TCStream_Pos(struct brl_stream_TCStream_obj* o){
	return o->_brl_stream_tcstream__pos ;
}
BBLONG _brl_stream_TCStream_Size(struct brl_stream_TCStream_obj* o){
	return o->_brl_stream_tcstream__size ;
}
BBLONG _brl_stream_TCStream_Seek_li(struct brl_stream_TCStream_obj* o,BBLONG bbt_pos,BBINT bbt_whence){
	fseek_(o->_brl_stream_tcstream__cstream ,bbt_pos,bbt_whence);
	o->_brl_stream_tcstream__pos =ftell_(o->_brl_stream_tcstream__cstream );
	return o->_brl_stream_tcstream__pos ;
}
BBLONG _brl_stream_TCStream_Read_pbl(struct brl_stream_TCStream_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	bbt_count=fread((void*)bbt_buf,(size_t)1LL,(size_t)bbt_count,(FILE*)o->_brl_stream_tcstream__cstream );
	o->_brl_stream_tcstream__pos +=bbt_count;
	return bbt_count;
}
BBLONG _brl_stream_TCStream_Write_pbl(struct brl_stream_TCStream_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	bbt_count=fwrite((void*)bbt_buf,(size_t)1LL,(size_t)bbt_count,(FILE*)o->_brl_stream_tcstream__cstream );
	o->_brl_stream_tcstream__pos +=bbt_count;
	if(o->_brl_stream_tcstream__pos >o->_brl_stream_tcstream__size ){
		o->_brl_stream_tcstream__size =o->_brl_stream_tcstream__pos ;
	}
	return bbt_count;
}
void _brl_stream_TCStream_Flush(struct brl_stream_TCStream_obj* o){
	if(o->_brl_stream_tcstream__cstream ){
		fflush((FILE*)o->_brl_stream_tcstream__cstream );
	}
}
void _brl_stream_TCStream_Close(struct brl_stream_TCStream_obj* o){
	if(!(o->_brl_stream_tcstream__cstream )){
		return;
	}
	((struct brl_stream_TCStream_obj*)o)->clas->m_Flush((struct brl_stream_TCStream_obj*)o);
	fclose((FILE*)o->_brl_stream_tcstream__cstream );
	o->_brl_stream_tcstream__pos =0LL;
	o->_brl_stream_tcstream__size =0LL;
	o->_brl_stream_tcstream__cstream =0;
}
BBINT _brl_stream_TCStream_SetSize_l(struct brl_stream_TCStream_obj* o,BBLONG bbt_size){
	if(!(o->_brl_stream_tcstream__cstream )){
		return 0;
	}
	((struct brl_stream_TCStream_obj*)o)->clas->m_Flush((struct brl_stream_TCStream_obj*)o);
	if(o->_brl_stream_tcstream__size >bbt_size){
		((struct brl_stream_TCStream_obj*)o)->clas->m_Seek_li((struct brl_stream_TCStream_obj*)o,bbt_size,0);
	}
	BBINT bbt_res=ftruncate_(o->_brl_stream_tcstream__cstream ,bbt_size);
	((struct brl_stream_TCStream_obj*)o)->clas->m_Flush((struct brl_stream_TCStream_obj*)o);
	if(!(bbt_res!=0)){
		o->_brl_stream_tcstream__size =bbt_size;
	}
	return (bbt_res==0);
}
struct brl_stream_TCStream_obj* brl_stream_TCStream_OpenFile_TTCStream_Sii(BBSTRING bbt_path,BBINT bbt_readable,BBINT bbt_writeMode){
	BBSTRING bbt_Mode=&bbEmptyString;
	BBINT bbt__mode=0;
	if((bbt_readable!=0) && (bbt_writeMode==1)){
		bbt_Mode=&_s13;
		bbt__mode=3;
	}else{
		if((bbt_readable!=0) && (bbt_writeMode==2)){
			bbt_Mode=&_s14;
			bbt__mode=5;
		}else{
			if(bbt_writeMode==1){
				bbt_Mode=&_s15;
				bbt__mode=2;
			}else{
				if(bbt_writeMode==2){
					bbt_Mode=&_s16;
					bbt__mode=4;
				}else{
					bbt_Mode=&_s17;
					bbt__mode=1;
				}
			}
		}
	}
	bbt_path=bbStringReplace((BBSTRING)bbt_path,&_s18,&_s19);
	BBBYTE* bbt_cstream=fopen_(bbt_path,bbt_Mode);
	if(!(bbt_cstream) && !(bbt_writeMode!=0)){
		bbt_path=brl_stream_CasedFileName(bbt_path);
		if(bbt_path!= &bbEmptyString){
			bbt_cstream=fopen_(bbt_path,bbt_Mode);
		}
	}
	if(bbt_cstream){
		return (struct brl_stream_TCStream_obj*)brl_stream_TCStream_CreateWithCStream_TTCStream_pbi(bbt_cstream,bbt__mode);
	}
	return (struct brl_stream_TCStream_obj*)(&bbNullObject);
}
struct brl_stream_TCStream_obj* brl_stream_TCStream_CreateWithCStream_TTCStream_pbi(BBBYTE* bbt_cstream,BBINT bbt_Mode){
	struct brl_stream_TCStream_obj* bbt_stream=(struct brl_stream_TCStream_obj*)(struct brl_stream_TCStream_obj*)bbObjectAtomicNew((BBClass *)&brl_stream_TCStream);
	bbt_stream->_brl_stream_tcstream__cstream =bbt_cstream;
	bbt_stream->_brl_stream_tcstream__pos =ftell_(bbt_cstream);
	fseek_(bbt_cstream,0LL,2);
	bbt_stream->_brl_stream_tcstream__size =ftell_(bbt_cstream);
	fseek_(bbt_cstream,bbt_stream->_brl_stream_tcstream__pos ,0);
	bbt_stream->_brl_stream_tcstream__mode =bbt_Mode;
	return (struct brl_stream_TCStream_obj*)bbt_stream;
}
struct BBDebugScope_18 brl_stream_TCStream_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TCStream",
	{
		{
			BBDEBUGDECL_CONST,
			"MODE_READ",
			"i",
			.const_value=&_s22
		},
		{
			BBDEBUGDECL_CONST,
			"MODE_WRITE",
			"i",
			.const_value=&_s23
		},
		{
			BBDEBUGDECL_CONST,
			"MODE_APPEND",
			"i",
			.const_value=&_s24
		},
		{
			BBDEBUGDECL_FIELD,
			"_pos",
			"l",
			.field_offset=offsetof(struct brl_stream_TCStream_obj,_brl_stream_tcstream__pos)
		},
		{
			BBDEBUGDECL_FIELD,
			"_size",
			"l",
			.field_offset=offsetof(struct brl_stream_TCStream_obj,_brl_stream_tcstream__size)
		},
		{
			BBDEBUGDECL_FIELD,
			"_mode",
			"i",
			.field_offset=offsetof(struct brl_stream_TCStream_obj,_brl_stream_tcstream__mode)
		},
		{
			BBDEBUGDECL_FIELD,
			"_cstream",
			"*b",
			.field_offset=offsetof(struct brl_stream_TCStream_obj,_brl_stream_tcstream__cstream)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_stream_TCStream_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Pos",
			"()l",
			.var_address=(void*)&_brl_stream_TCStream_Pos
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Size",
			"()l",
			.var_address=(void*)&_brl_stream_TCStream_Size
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Seek",
			"(l,i)l",
			.var_address=(void*)&_brl_stream_TCStream_Seek_li
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Read",
			"(*b,l)l",
			.var_address=(void*)&_brl_stream_TCStream_Read_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Write",
			"(*b,l)l",
			.var_address=(void*)&_brl_stream_TCStream_Write_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Flush",
			"()",
			.var_address=(void*)&_brl_stream_TCStream_Flush
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Close",
			"()",
			.var_address=(void*)&_brl_stream_TCStream_Close
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSize",
			"(l)i",
			.var_address=(void*)&_brl_stream_TCStream_SetSize_l
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"OpenFile",
			"($,i,i):TCStream",
			.var_address=(void*)&brl_stream_TCStream_OpenFile_TTCStream_Sii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateWithCStream",
			"(*b,i):TCStream",
			.var_address=(void*)&brl_stream_TCStream_CreateWithCStream_TTCStream_pbi
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_stream_TCStream brl_stream_TCStream={
	&brl_stream_TStream,
	bbObjectFree,
	(BBDebugScope*)&brl_stream_TCStream_scope,
	sizeof(struct brl_stream_TCStream_obj),
	(void (*)(BBOBJECT))_brl_stream_TCStream_New,
	(void (*)(BBOBJECT))_brl_stream_TCStream_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_stream_TCStream_obj,_brl_stream_tcstream__cstream) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_stream_TIO_Eof
	,_brl_stream_TCStream_Pos
	,_brl_stream_TCStream_Size
	,_brl_stream_TCStream_Seek_li
	,_brl_stream_TCStream_Flush
	,_brl_stream_TCStream_Close
	,_brl_stream_TCStream_Read_pbl
	,_brl_stream_TCStream_Write_pbl
	,_brl_stream_TCStream_SetSize_l
	,_brl_stream_TStream_ReadBytes_pbl
	,_brl_stream_TStream_WriteBytes_pbl
	,_brl_stream_TStream_SkipBytes_l
	,_brl_stream_TStream_ReadByte
	,_brl_stream_TStream_WriteByte_i
	,_brl_stream_TStream_ReadShort
	,_brl_stream_TStream_WriteShort_i
	,_brl_stream_TStream_ReadInt
	,_brl_stream_TStream_WriteInt_i
	,_brl_stream_TStream_ReadLong
	,_brl_stream_TStream_WriteLong_l
	,_brl_stream_TStream_ReadFloat
	,_brl_stream_TStream_WriteFloat_f
	,_brl_stream_TStream_ReadDouble
	,_brl_stream_TStream_WriteDouble_d
	,_brl_stream_TStream_ReadLine
	,_brl_stream_TStream_WriteLine_S
	,_brl_stream_TStream_ReadString_i
	,_brl_stream_TStream_WriteString_S
	,_brl_stream_TStream_ReadObject
	,_brl_stream_TStream_WriteObject_TObject
	,brl_stream_TCStream_OpenFile_TTCStream_Sii
	,brl_stream_TCStream_CreateWithCStream_TTCStream_pbi
};

BBSTRING brl_stream_CasedFileName(BBSTRING bbt_path){
	BBBYTE* bbt_dir=0;
	BBSTRING bbt_sub=&bbEmptyString;
	BBSTRING bbt_s=&bbEmptyString;
	BBSTRING bbt_f=&bbEmptyString;
	BBSTRING bbt_folder=&bbEmptyString;
	BBINT bbt_p=0;
	BBINT bbt_Mode=0;
	BBLONG bbt_size=0LL;
	BBINT bbt_mtime=0;
	BBINT bbt_ctime=0;
	if(stat_(bbt_path,(&bbt_Mode),(&bbt_size),(&bbt_mtime),(&bbt_ctime))==0){
		bbt_Mode&=61440;
		if((bbt_Mode==32768) || (bbt_Mode==16384)){
			return bbt_path;
		}
	}
	bbt_folder=&_s21;
	for(bbt_p=((bbt_path)->length-2);(bbt_p>=0);bbt_p=(bbt_p+-1)){
		if((bbt_path)->buf[((BBUINT)bbt_p)]==47){
			break;
		}
	}
	if(bbt_p>0){
		bbt_sub=bbStringSlice(bbt_path,0,bbt_p);
		bbt_sub=brl_stream_CasedFileName(bbt_sub);
		if(!(bbt_sub!= &bbEmptyString)){
			return (&bbEmptyString);
		}
		bbt_path=bbStringSlice(bbt_path,((bbt_sub)->length+1),(bbt_path)->length);
		bbt_folder=bbt_sub;
	}
	bbt_s=bbStringToLower((BBSTRING)bbt_path);
	bbt_dir=opendir_(bbt_folder);
	if(bbt_dir){
		while(1){
			bbt_f=readdir_(bbt_dir);
			if(!(bbt_f!= &bbEmptyString)){
				break;
			}
			if(bbStringEquals(bbt_s, bbStringToLower((BBSTRING)bbt_f))==1){
				if(bbt_sub!= &bbEmptyString){
					bbt_f=bbStringConcat(bbStringConcat(bbt_sub,&_s19),bbt_f);
				}
				closedir_(bbt_dir);
				return bbt_f;
			}
		}
		closedir_(bbt_dir);
	}
	return &bbEmptyString;
}
struct brl_stream_TStream_obj* brl_stream_OpenStream(BBOBJECT bbt_url,BBINT bbt_readable,BBINT bbt_writeMode){
	struct brl_stream_TStream_obj* bbt_stream=(struct brl_stream_TStream_obj*)((struct brl_stream_TStream_obj*)bbObjectDowncast((BBOBJECT)bbt_url,(BBClass*)&brl_stream_TStream));
	if(((BBObject*)bbt_stream)!= &bbNullObject){
		return (struct brl_stream_TStream_obj*)((struct brl_stream_TStream_obj*)bbObjectDowncast((BBOBJECT)brl_stream_TStreamStream_Create_TTStreamStream_TTStream((struct brl_stream_TStream_obj*)bbt_stream),(BBClass*)&brl_stream_TStream));
	}
	BBSTRING bbt_str=((BBString *)bbObjectStringcast((BBOBJECT)bbt_url));
	BBSTRING bbt_proto=&bbEmptyString;
	BBSTRING bbt_path=&bbEmptyString;
	if(bbt_str!= &bbEmptyString){
		BBINT bbt_i=bbStringFind((BBSTRING)bbt_str,&_s20,0);
		if(bbt_i==-1){
			return (struct brl_stream_TStream_obj*)((struct brl_stream_TStream_obj*)bbObjectDowncast((BBOBJECT)brl_stream_TCStream_OpenFile_TTCStream_Sii(bbt_str,bbt_readable,bbt_writeMode),(BBClass*)&brl_stream_TStream));
		}
		bbt_proto=bbStringToLower((BBSTRING)bbStringSlice(bbt_str,0,bbt_i));
		bbt_path=bbStringSlice(bbt_str,(bbt_i+2),(bbt_str)->length);
	}
	struct brl_stream_TStreamFactory_obj* bbt_factory=(struct brl_stream_TStreamFactory_obj*)brl_stream_stream_factories;
	while(((BBObject*)bbt_factory)!= &bbNullObject){
		struct brl_stream_TStream_obj* bbt_stream2=(struct brl_stream_TStream_obj*)(bbt_factory)->clas->m_CreateStream_TObjectSSii((struct brl_stream_TStreamFactory_obj*)bbt_factory,(BBOBJECT)bbt_url,bbt_proto,bbt_path,bbt_readable,bbt_writeMode);
		if(((BBObject*)bbt_stream2)!= &bbNullObject){
			return (struct brl_stream_TStream_obj*)bbt_stream2;
		}
		bbt_factory=(struct brl_stream_TStreamFactory_obj*)bbt_factory->_brl_stream_tstreamfactory__succ ;
	}
	return (struct brl_stream_TStream_obj*)(&bbNullObject);
}
struct brl_stream_TStream_obj* brl_stream_ReadStream(BBOBJECT bbt_url){
	return (struct brl_stream_TStream_obj*)brl_stream_OpenStream((BBOBJECT)bbt_url,1,0);
}
struct brl_stream_TStream_obj* brl_stream_WriteStream(BBOBJECT bbt_url){
	return (struct brl_stream_TStream_obj*)brl_stream_OpenStream((BBOBJECT)bbt_url,0,1);
}
struct brl_stream_TStream_obj* brl_stream_AppendStream(BBOBJECT bbt_url){
	return (struct brl_stream_TStream_obj*)brl_stream_OpenStream((BBOBJECT)bbt_url,0,2);
}
BBINT brl_stream_Eof(struct brl_stream_TStream_obj* bbt_stream){
	return (bbt_stream)->clas->m_Eof((struct brl_stream_TIO_obj*)bbt_stream);
}
BBLONG brl_stream_StreamPos(struct brl_stream_TStream_obj* bbt_stream){
	return (bbt_stream)->clas->m_Pos((struct brl_stream_TIO_obj*)bbt_stream);
}
BBLONG brl_stream_StreamSize(struct brl_stream_TStream_obj* bbt_stream){
	return (bbt_stream)->clas->m_Size((struct brl_stream_TIO_obj*)bbt_stream);
}
BBLONG brl_stream_SeekStream(struct brl_stream_TStream_obj* bbt_stream,BBLONG bbt_pos,BBINT bbt_whence){
	return (bbt_stream)->clas->m_Seek_li((struct brl_stream_TIO_obj*)bbt_stream,bbt_pos,bbt_whence);
}
void brl_stream_FlushStream(struct brl_stream_TStream_obj* bbt_stream){
	(bbt_stream)->clas->m_Flush((struct brl_stream_TIO_obj*)bbt_stream);
}
void brl_stream_CloseStream(struct brl_stream_TStream_obj* bbt_stream){
	(bbt_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_stream);
}
BBINT brl_stream_ReadByte(struct brl_stream_TStream_obj* bbt_stream){
	return (bbt_stream)->clas->m_ReadByte((struct brl_stream_TStream_obj*)bbt_stream);
}
BBINT brl_stream_ReadShort(struct brl_stream_TStream_obj* bbt_stream){
	return (bbt_stream)->clas->m_ReadShort((struct brl_stream_TStream_obj*)bbt_stream);
}
BBINT brl_stream_ReadInt(struct brl_stream_TStream_obj* bbt_stream){
	return (bbt_stream)->clas->m_ReadInt((struct brl_stream_TStream_obj*)bbt_stream);
}
BBLONG brl_stream_ReadLong(struct brl_stream_TStream_obj* bbt_stream){
	return (bbt_stream)->clas->m_ReadLong((struct brl_stream_TStream_obj*)bbt_stream);
}
BBFLOAT brl_stream_ReadFloat(struct brl_stream_TStream_obj* bbt_stream){
	return (bbt_stream)->clas->m_ReadFloat((struct brl_stream_TStream_obj*)bbt_stream);
}
BBDOUBLE brl_stream_ReadDouble(struct brl_stream_TStream_obj* bbt_stream){
	return (bbt_stream)->clas->m_ReadDouble((struct brl_stream_TStream_obj*)bbt_stream);
}
void brl_stream_WriteByte(struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_n){
	(bbt_stream)->clas->m_WriteByte_i((struct brl_stream_TStream_obj*)bbt_stream,bbt_n);
}
void brl_stream_WriteShort(struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_n){
	(bbt_stream)->clas->m_WriteShort_i((struct brl_stream_TStream_obj*)bbt_stream,bbt_n);
}
void brl_stream_WriteInt(struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_n){
	(bbt_stream)->clas->m_WriteInt_i((struct brl_stream_TStream_obj*)bbt_stream,bbt_n);
}
void brl_stream_WriteLong(struct brl_stream_TStream_obj* bbt_stream,BBLONG bbt_n){
	(bbt_stream)->clas->m_WriteLong_l((struct brl_stream_TStream_obj*)bbt_stream,bbt_n);
}
void brl_stream_WriteFloat(struct brl_stream_TStream_obj* bbt_stream,BBFLOAT bbt_n){
	(bbt_stream)->clas->m_WriteFloat_f((struct brl_stream_TStream_obj*)bbt_stream,bbt_n);
}
void brl_stream_WriteDouble(struct brl_stream_TStream_obj* bbt_stream,BBDOUBLE bbt_n){
	(bbt_stream)->clas->m_WriteDouble_d((struct brl_stream_TStream_obj*)bbt_stream,bbt_n);
}
BBSTRING brl_stream_ReadString(struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_length){
	return (bbt_stream)->clas->m_ReadString_i((struct brl_stream_TStream_obj*)bbt_stream,bbt_length);
}
void brl_stream_WriteString(struct brl_stream_TStream_obj* bbt_stream,BBSTRING bbt_str){
	(bbt_stream)->clas->m_WriteString_S((struct brl_stream_TStream_obj*)bbt_stream,bbt_str);
}
BBSTRING brl_stream_ReadLine(struct brl_stream_TStream_obj* bbt_stream){
	return (bbt_stream)->clas->m_ReadLine((struct brl_stream_TStream_obj*)bbt_stream);
}
BBINT brl_stream_WriteLine(struct brl_stream_TStream_obj* bbt_stream,BBSTRING bbt_str){
	return (bbt_stream)->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)bbt_stream,bbt_str);
}
BBARRAY brl_stream_LoadByteArray(BBOBJECT bbt_url){
	struct brl_stream_TStream_obj* bbt_stream=(struct brl_stream_TStream_obj*)brl_stream_ReadStream((BBOBJECT)bbt_url);
	if(!(((BBObject*)bbt_stream)!= &bbNullObject)){
		bbExThrow((BBObject *)(struct brl_stream_TStreamReadException_obj*)bbObjectAtomicNew((BBClass *)&brl_stream_TStreamReadException));
	}
	BBARRAY bbt_data=bbArrayNew1D("b", 1024);
	BBINT bbt_size=0;
	while(!((bbt_stream)->clas->m_Eof((struct brl_stream_TIO_obj*)bbt_stream)!=0)){
		if(bbt_size==(bbt_data->scales[0])){
			bbt_data=bbArraySlice("b",bbt_data,0,((bbt_size*3)/2));
		}
		bbt_size=((BBINT)(((BBLONG)bbt_size)+(bbt_stream)->clas->m_Read_pbl((struct brl_stream_TIO_obj*)bbt_stream,(((BBBYTE*)BBARRAYDATA(bbt_data,1))+bbt_size),((BBLONG)((bbt_data->scales[0])-bbt_size)))));
	}
	(bbt_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_stream);
	return bbArraySlice("b",bbt_data,0,bbt_size);
}
BBSTRING brl_stream_LoadString(BBOBJECT bbt_url){
	BBARRAY bbt_t=brl_stream_LoadByteArray((BBOBJECT)bbt_url);
	return bbStringFromBytes(((BBBYTE*)BBARRAYDATA(bbt_t,1)),(bbt_t->scales[0]));
}
void brl_stream_SaveString(BBSTRING bbt_str,BBOBJECT bbt_url){
	struct brl_stream_TStream_obj* bbt_stream=(struct brl_stream_TStream_obj*)brl_stream_WriteStream((BBOBJECT)bbt_url);
	if(!(((BBObject*)bbt_stream)!= &bbNullObject)){
		bbExThrow((BBObject *)(struct brl_stream_TStreamWriteException_obj*)bbObjectAtomicNew((BBClass *)&brl_stream_TStreamWriteException));
	}
	BBBYTE* bbt_t=bbStringToCString((BBSTRING)bbt_str);
	(bbt_stream)->clas->m_WriteBytes_pbl((struct brl_stream_TStream_obj*)bbt_stream,bbt_t,((BBLONG)(bbt_str->length)));
	bbMemFree((void*)bbt_t);
	(bbt_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_stream);
}
BBOBJECT brl_stream_LoadObject(BBOBJECT bbt_url){
	struct brl_stream_TStream_obj* bbt_stream=(struct brl_stream_TStream_obj*)brl_stream_ReadStream((BBOBJECT)bbt_url);
	if(!(((BBObject*)bbt_stream)!= &bbNullObject)){
		bbExThrow((BBObject *)(struct brl_stream_TStreamReadException_obj*)bbObjectAtomicNew((BBClass *)&brl_stream_TStreamReadException));
	}
	BBOBJECT bbt_obj=(BBOBJECT)(bbt_stream)->clas->m_ReadObject((struct brl_stream_TStream_obj*)bbt_stream);
	(bbt_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_stream);
	return (BBOBJECT)bbt_obj;
}
void brl_stream_SaveObject(BBOBJECT bbt_obj,BBOBJECT bbt_url){
	struct brl_stream_TStream_obj* bbt_stream=(struct brl_stream_TStream_obj*)brl_stream_WriteStream((BBOBJECT)bbt_url);
	if(!(((BBObject*)bbt_stream)!= &bbNullObject)){
		bbExThrow((BBObject *)(struct brl_stream_TStreamWriteException_obj*)bbObjectAtomicNew((BBClass *)&brl_stream_TStreamWriteException));
	}
	(bbt_stream)->clas->m_WriteObject_TObject((struct brl_stream_TStream_obj*)bbt_stream,(BBOBJECT)bbt_obj);
	(bbt_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_stream);
}
void brl_stream_SaveByteArray(BBARRAY bbt_byteArray,BBOBJECT bbt_url){
	struct brl_stream_TStream_obj* bbt_stream=(struct brl_stream_TStream_obj*)brl_stream_WriteStream((BBOBJECT)bbt_url);
	if(!(((BBObject*)bbt_stream)!= &bbNullObject)){
		bbExThrow((BBObject *)(struct brl_stream_TStreamWriteException_obj*)bbObjectAtomicNew((BBClass *)&brl_stream_TStreamWriteException));
	}
	(bbt_stream)->clas->m_WriteBytes_pbl((struct brl_stream_TStream_obj*)bbt_stream,((BBBYTE*)BBARRAYDATA(bbt_byteArray,1)),((BBLONG)(bbt_byteArray->scales[0])));
	(bbt_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_stream);
}
void brl_stream_CopyStream(struct brl_stream_TStream_obj* bbt_fromStream,struct brl_stream_TStream_obj* bbt_toStream,BBINT bbt_bufSize){
	BBARRAY bbt_buf=bbArrayNew1D("b", bbt_bufSize);
	while(!((bbt_fromStream)->clas->m_Eof((struct brl_stream_TIO_obj*)bbt_fromStream)!=0)){
		(bbt_toStream)->clas->m_WriteBytes_pbl((struct brl_stream_TStream_obj*)bbt_toStream,((BBBYTE*)BBARRAYDATA(bbt_buf,1)),(bbt_fromStream)->clas->m_Read_pbl((struct brl_stream_TIO_obj*)bbt_fromStream,((BBBYTE*)BBARRAYDATA(bbt_buf,1)),((BBLONG)bbt_bufSize)));
	}
}
void brl_stream_CopyBytes(struct brl_stream_TStream_obj* bbt_fromStream,struct brl_stream_TStream_obj* bbt_toStream,BBINT bbt_count,BBINT bbt_bufSize){
	BBARRAY bbt_buf=bbArrayNew1D("b", bbt_bufSize);
	while(bbt_count!=0){
		BBINT bbt_n=brl_blitz_Min(bbt_count,bbt_bufSize);
		(bbt_fromStream)->clas->m_ReadBytes_pbl((struct brl_stream_TStream_obj*)bbt_fromStream,((BBBYTE*)BBARRAYDATA(bbt_buf,1)),((BBLONG)bbt_n));
		(bbt_toStream)->clas->m_WriteBytes_pbl((struct brl_stream_TStream_obj*)bbt_toStream,((BBBYTE*)BBARRAYDATA(bbt_buf,1)),((BBLONG)bbt_n));
		bbt_count-=bbt_n;
	}
}
static int __bb_brl_stream_stream_inited = 0;
int __bb_brl_stream_stream(){
	if (!__bb_brl_stream_stream_inited) {
		__bb_brl_stream_stream_inited = 1;
		GC_add_roots(&brl_stream_stream_factories, &brl_stream_stream_factories + 1);
		__bb_brl_blitz_blitz();
		__bb_pub_stdc_stdc();
		bbObjectRegisterType((BBCLASS)&brl_stream_TStreamFactory);
		bbObjectRegisterType((BBCLASS)&brl_stream_TStreamException);
		bbObjectRegisterType((BBCLASS)&brl_stream_TStreamReadException);
		bbObjectRegisterType((BBCLASS)&brl_stream_TStreamWriteException);
		bbObjectRegisterType((BBCLASS)&brl_stream_TIO);
		bbObjectRegisterType((BBCLASS)&brl_stream_TStream);
		bbObjectRegisterType((BBCLASS)&brl_stream_TStreamWrapper);
		bbObjectRegisterType((BBCLASS)&brl_stream_TStreamStream);
		bbObjectRegisterType((BBCLASS)&brl_stream_TCStream);
		return 0;
	}
	return 0;
}