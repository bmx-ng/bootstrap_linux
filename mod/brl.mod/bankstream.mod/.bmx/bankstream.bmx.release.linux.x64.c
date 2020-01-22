#include <brl.mod/bankstream.mod/.bmx/bankstream.bmx.release.linux.x64.h>
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_9{int kind; const char *name; BBDebugDecl decls[10]; };
void _brl_bankstream_TBankStreamFactory_New(struct brl_bankstream_TBankStreamFactory_obj* o) {
	_brl_stream_TStreamFactory_New((struct brl_stream_TStreamFactory_obj*)o);
	o->clas = &brl_bankstream_TBankStreamFactory;
}
struct brl_bankstream_TBankStream_obj* _brl_bankstream_TBankStreamFactory_CreateStream_TObjectSSii(struct brl_bankstream_TBankStreamFactory_obj* o,BBOBJECT bbt_url,BBSTRING bbt_proto,BBSTRING bbt_path,BBINT bbt_readable,BBINT bbt_writeMode){
	struct brl_bank_TBank_obj* bbt_bank=(struct brl_bank_TBank_obj*)((struct brl_bank_TBank_obj*)bbObjectDowncast((BBOBJECT)bbt_url,(BBClass*)&brl_bank_TBank));
	if(((BBObject*)bbt_bank)!= &bbNullObject){
		return (struct brl_bankstream_TBankStream_obj*)brl_bankstream_CreateBankStream((struct brl_bank_TBank_obj*)bbt_bank);
	}
	return (struct brl_bankstream_TBankStream_obj*)(&bbNullObject);
}
struct BBDebugScope_2 brl_bankstream_TBankStreamFactory_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TBankStreamFactory",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_bankstream_TBankStreamFactory_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CreateStream",
			"(:Object,$,$,i,i):TBankStream",
			.var_address=(void*)&_brl_bankstream_TBankStreamFactory_CreateStream_TObjectSSii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_bankstream_TBankStreamFactory brl_bankstream_TBankStreamFactory={
	&brl_stream_TStreamFactory,
	bbObjectFree,
	(BBDebugScope*)&brl_bankstream_TBankStreamFactory_scope,
	sizeof(struct brl_bankstream_TBankStreamFactory_obj),
	(void (*)(BBOBJECT))_brl_bankstream_TBankStreamFactory_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_bankstream_TBankStreamFactory_CreateStream_TObjectSSii
};

void _brl_bankstream_TBankStream_New(struct brl_bankstream_TBankStream_obj* o) {
	_brl_stream_TStream_New((struct brl_stream_TStream_obj*)o);
	o->clas = &brl_bankstream_TBankStream;
	o->_brl_bankstream_tbankstream__pos = 0LL;
	o->_brl_bankstream_tbankstream__bank = (struct brl_bank_TBank_obj*)(&bbNullObject);
}
void _brl_bankstream_TBankStream_Delete(struct brl_bankstream_TBankStream_obj* o) {
	_brl_stream_TStream_Delete((struct brl_stream_TStream_obj*)o);
}
BBLONG _brl_bankstream_TBankStream_Pos(struct brl_bankstream_TBankStream_obj* o){
	return o->_brl_bankstream_tbankstream__pos ;
}
BBLONG _brl_bankstream_TBankStream_Size(struct brl_bankstream_TBankStream_obj* o){
	return ((BBLONG)(o->_brl_bankstream_tbankstream__bank )->clas->m_Size((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank ));
}
BBLONG _brl_bankstream_TBankStream_Seek_li(struct brl_bankstream_TBankStream_obj* o,BBLONG bbt_pos,BBINT bbt_whence){
	if(bbt_whence==0){
		if(bbt_pos<0LL){
			bbt_pos=0LL;
		}else{
			if(((BBSIZET)bbt_pos)>(o->_brl_bankstream_tbankstream__bank )->clas->m_Size((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank )){
				bbt_pos=((BBLONG)(o->_brl_bankstream_tbankstream__bank )->clas->m_Size((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank ));
			}
		}
	}else{
		if(bbt_whence==2){
			if(bbt_pos>=0LL){
				bbt_pos=((BBLONG)(o->_brl_bankstream_tbankstream__bank )->clas->m_Size((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank ));
			}else{
				bbt_pos=((BBLONG)((o->_brl_bankstream_tbankstream__bank )->clas->m_Size((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank )+((BBSIZET)bbt_pos)));
				if(bbt_pos<0LL){
					bbt_pos=0LL;
				}
			}
		}
	}
	o->_brl_bankstream_tbankstream__pos =bbt_pos;
	return o->_brl_bankstream_tbankstream__pos ;
}
BBLONG _brl_bankstream_TBankStream_Read_pbl(struct brl_bankstream_TBankStream_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	if((bbt_count<=0LL) || (((BBSIZET)o->_brl_bankstream_tbankstream__pos )>=(o->_brl_bankstream_tbankstream__bank )->clas->m_Size((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank ))){
		return 0LL;
	}
	if(((BBSIZET)(o->_brl_bankstream_tbankstream__pos +bbt_count))>(o->_brl_bankstream_tbankstream__bank )->clas->m_Size((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank )){
		bbt_count=((BBLONG)((o->_brl_bankstream_tbankstream__bank )->clas->m_Size((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank )-((BBSIZET)o->_brl_bankstream_tbankstream__pos )));
	}
	bbMemCopy((void*)bbt_buf,(const void*)((o->_brl_bankstream_tbankstream__bank )->clas->m_Buf((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank )+o->_brl_bankstream_tbankstream__pos ),(size_t)((BBSIZET)bbt_count));
	o->_brl_bankstream_tbankstream__pos +=bbt_count;
	return bbt_count;
}
BBLONG _brl_bankstream_TBankStream_Write_pbl(struct brl_bankstream_TBankStream_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	if((bbt_count<=0LL) || (((BBSIZET)o->_brl_bankstream_tbankstream__pos )>(o->_brl_bankstream_tbankstream__bank )->clas->m_Size((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank ))){
		return 0LL;
	}
	if(((BBSIZET)(o->_brl_bankstream_tbankstream__pos +bbt_count))>(o->_brl_bankstream_tbankstream__bank )->clas->m_Size((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank )){
		(o->_brl_bankstream_tbankstream__bank )->clas->m_Resize_z((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank ,((BBSIZET)(o->_brl_bankstream_tbankstream__pos +bbt_count)));
	}
	bbMemCopy((void*)((o->_brl_bankstream_tbankstream__bank )->clas->m_Buf((struct brl_bank_TBank_obj*)o->_brl_bankstream_tbankstream__bank )+o->_brl_bankstream_tbankstream__pos ),(const void*)bbt_buf,(size_t)((BBSIZET)bbt_count));
	o->_brl_bankstream_tbankstream__pos +=bbt_count;
	return bbt_count;
}
struct brl_bankstream_TBankStream_obj* brl_bankstream_TBankStream_Create_TTBankStream_TTBank(struct brl_bank_TBank_obj* bbt_bank){
	struct brl_bankstream_TBankStream_obj* bbt_stream=(struct brl_bankstream_TBankStream_obj*)(struct brl_bankstream_TBankStream_obj*)bbObjectNew((BBClass *)&brl_bankstream_TBankStream);
	bbt_stream->_brl_bankstream_tbankstream__bank =(struct brl_bank_TBank_obj*)bbt_bank;
	return (struct brl_bankstream_TBankStream_obj*)bbt_stream;
}
struct BBDebugScope_9 brl_bankstream_TBankStream_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TBankStream",
	{
		{
			BBDEBUGDECL_FIELD,
			"_pos",
			"l",
			.field_offset=offsetof(struct brl_bankstream_TBankStream_obj,_brl_bankstream_tbankstream__pos)
		},
		{
			BBDEBUGDECL_FIELD,
			"_bank",
			":TBank",
			.field_offset=offsetof(struct brl_bankstream_TBankStream_obj,_brl_bankstream_tbankstream__bank)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_bankstream_TBankStream_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Pos",
			"()l",
			.var_address=(void*)&_brl_bankstream_TBankStream_Pos
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Size",
			"()l",
			.var_address=(void*)&_brl_bankstream_TBankStream_Size
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Seek",
			"(l,i)l",
			.var_address=(void*)&_brl_bankstream_TBankStream_Seek_li
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Read",
			"(*b,l)l",
			.var_address=(void*)&_brl_bankstream_TBankStream_Read_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Write",
			"(*b,l)l",
			.var_address=(void*)&_brl_bankstream_TBankStream_Write_pbl
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(:TBank):TBankStream",
			.var_address=(void*)&brl_bankstream_TBankStream_Create_TTBankStream_TTBank
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_bankstream_TBankStream brl_bankstream_TBankStream={
	&brl_stream_TStream,
	bbObjectFree,
	(BBDebugScope*)&brl_bankstream_TBankStream_scope,
	sizeof(struct brl_bankstream_TBankStream_obj),
	(void (*)(BBOBJECT))_brl_bankstream_TBankStream_New,
	(void (*)(BBOBJECT))_brl_bankstream_TBankStream_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_bankstream_TBankStream_obj,_brl_bankstream_tbankstream__bank) - sizeof(void*) + sizeof(struct brl_bank_TBank_obj*)
	,0
	,_brl_stream_TIO_Eof
	,_brl_bankstream_TBankStream_Pos
	,_brl_bankstream_TBankStream_Size
	,_brl_bankstream_TBankStream_Seek_li
	,_brl_stream_TIO_Flush
	,_brl_stream_TIO_Close
	,_brl_bankstream_TBankStream_Read_pbl
	,_brl_bankstream_TBankStream_Write_pbl
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
	,brl_bankstream_TBankStream_Create_TTBankStream_TTBank
};

struct brl_bankstream_TBankStream_obj* brl_bankstream_CreateBankStream(struct brl_bank_TBank_obj* bbt_bank){
	if(!(((BBObject*)bbt_bank)!= &bbNullObject)){
		bbt_bank=(struct brl_bank_TBank_obj*)brl_bank_TBank_Create_TTBank_i(0);
	}
	return (struct brl_bankstream_TBankStream_obj*)brl_bankstream_TBankStream_Create_TTBankStream_TTBank((struct brl_bank_TBank_obj*)bbt_bank);
}
static int __bb_brl_bankstream_bankstream_inited = 0;
int __bb_brl_bankstream_bankstream(){
	if (!__bb_brl_bankstream_bankstream_inited) {
		__bb_brl_bankstream_bankstream_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_bank_bank();
		bbObjectRegisterType((BBCLASS)&brl_bankstream_TBankStreamFactory);
		bbObjectRegisterType((BBCLASS)&brl_bankstream_TBankStream);
		(struct brl_bankstream_TBankStreamFactory_obj*)bbObjectNew((BBClass *)&brl_bankstream_TBankStreamFactory);
		return 0;
	}
	return 0;
}