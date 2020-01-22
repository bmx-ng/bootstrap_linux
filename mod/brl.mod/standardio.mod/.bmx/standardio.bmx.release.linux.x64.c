#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.linux.x64.h>
static BBString _s0={
	&bbStringClass,
	1,
	{62}
};
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct brl_stream_TStream_obj* brl_standardio_StandardIOStream=(struct brl_stream_TStream_obj*)(&bbNullObject);
void _brl_standardio_TCStandardIO_New(struct brl_standardio_TCStandardIO_obj* o) {
	_brl_stream_TStream_New((struct brl_stream_TStream_obj*)o);
	o->clas = &brl_standardio_TCStandardIO;
}
void _brl_standardio_TCStandardIO_Delete(struct brl_standardio_TCStandardIO_obj* o) {
	_brl_stream_TStream_Delete((struct brl_stream_TStream_obj*)o);
}
BBINT _brl_standardio_TCStandardIO_Eof(struct brl_standardio_TCStandardIO_obj* o){
	return feof((FILE*)stdin_);
}
void _brl_standardio_TCStandardIO_Flush(struct brl_standardio_TCStandardIO_obj* o){
	fflush((FILE*)stdout_);
}
BBLONG _brl_standardio_TCStandardIO_Read_pbl(struct brl_standardio_TCStandardIO_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	return fread((void*)bbt_buf,(size_t)1LL,(size_t)bbt_count,(FILE*)stdin_);
}
BBLONG _brl_standardio_TCStandardIO_Write_pbl(struct brl_standardio_TCStandardIO_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	return fwrite((void*)bbt_buf,(size_t)1LL,(size_t)bbt_count,(FILE*)stdout_);
}
struct BBDebugScope_5 brl_standardio_TCStandardIO_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TCStandardIO",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_standardio_TCStandardIO_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Eof",
			"()i",
			.var_address=(void*)&_brl_standardio_TCStandardIO_Eof
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Flush",
			"()",
			.var_address=(void*)&_brl_standardio_TCStandardIO_Flush
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Read",
			"(*b,l)l",
			.var_address=(void*)&_brl_standardio_TCStandardIO_Read_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Write",
			"(*b,l)l",
			.var_address=(void*)&_brl_standardio_TCStandardIO_Write_pbl
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_standardio_TCStandardIO brl_standardio_TCStandardIO={
	&brl_stream_TStream,
	bbObjectFree,
	(BBDebugScope*)&brl_standardio_TCStandardIO_scope,
	sizeof(struct brl_standardio_TCStandardIO_obj),
	(void (*)(BBOBJECT))_brl_standardio_TCStandardIO_New,
	(void (*)(BBOBJECT))_brl_standardio_TCStandardIO_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_standardio_TCStandardIO_Eof
	,_brl_stream_TIO_Pos
	,_brl_stream_TIO_Size
	,_brl_stream_TIO_Seek_li
	,_brl_standardio_TCStandardIO_Flush
	,_brl_stream_TIO_Close
	,_brl_standardio_TCStandardIO_Read_pbl
	,_brl_standardio_TCStandardIO_Write_pbl
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

void brl_standardio_Print(BBSTRING bbt_str){
	(brl_standardio_StandardIOStream)->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)brl_standardio_StandardIOStream,bbt_str);
	(brl_standardio_StandardIOStream)->clas->m_Flush((struct brl_stream_TIO_obj*)brl_standardio_StandardIOStream);
}
BBSTRING brl_standardio_Input(BBSTRING bbt_prompt){
	(brl_standardio_StandardIOStream)->clas->m_WriteString_S((struct brl_stream_TStream_obj*)brl_standardio_StandardIOStream,bbt_prompt);
	(brl_standardio_StandardIOStream)->clas->m_Flush((struct brl_stream_TIO_obj*)brl_standardio_StandardIOStream);
	return (brl_standardio_StandardIOStream)->clas->m_ReadLine((struct brl_stream_TStream_obj*)brl_standardio_StandardIOStream);
}
static int __bb_brl_standardio_standardio_inited = 0;
int __bb_brl_standardio_standardio(){
	if (!__bb_brl_standardio_standardio_inited) {
		__bb_brl_standardio_standardio_inited = 1;
		GC_add_roots(&brl_standardio_StandardIOStream, &brl_standardio_StandardIOStream + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_textstream_textstream();
		bbObjectRegisterType((BBCLASS)&brl_standardio_TCStandardIO);
		brl_standardio_StandardIOStream=(struct brl_stream_TStream_obj*)((struct brl_stream_TStream_obj*)bbObjectDowncast((BBOBJECT)brl_textstream_TTextStream_Create_TTTextStream_TTStreameETextStreamFormat((struct brl_stream_TStream_obj*)((struct brl_stream_TStream_obj*)bbObjectDowncast((BBOBJECT)(struct brl_standardio_TCStandardIO_obj*)bbObjectAtomicNew((BBClass *)&brl_standardio_TCStandardIO),(BBClass*)&brl_stream_TStream)),1),(BBClass*)&brl_stream_TStream));
		return 0;
	}
	return 0;
}