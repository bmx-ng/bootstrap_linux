#include <brl.mod/socketstream.mod/.bmx/socketstream.bmx.release.linux.x64.h>
static BBString _s1={
	&bbStringClass,
	1,
	{58}
};
static BBString _s0={
	&bbStringClass,
	3,
	{116,99,112}
};
struct BBDebugScope_10{int kind; const char *name; BBDebugDecl decls[11]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
void _brl_socketstream_TSocketStreamFactory_New(struct brl_socketstream_TSocketStreamFactory_obj* o) {
	_brl_stream_TStreamFactory_New((struct brl_stream_TStreamFactory_obj*)o);
	o->clas = &brl_socketstream_TSocketStreamFactory;
}
struct brl_socketstream_TSocketStream_obj* _brl_socketstream_TSocketStreamFactory_CreateStream_TObjectSSii(struct brl_socketstream_TSocketStreamFactory_obj* o,BBOBJECT bbt_url,BBSTRING bbt_proto,BBSTRING bbt_path,BBINT bbt_readable,BBINT bbt_writeMode){
	if(bbStringEquals(bbt_proto, &_s0)==1){
		BBINT bbt_i=bbStringFind((BBSTRING)bbt_path,&_s1,0);
		BBSTRING bbt_server=&bbEmptyString;
		BBINT bbt_port=0;
		if(bbt_i>=0){
			return (struct brl_socketstream_TSocketStream_obj*)brl_socketstream_TSocketStream_CreateClient_TTSocketStream_Sii(bbStringSlice(bbt_path,0,bbt_i),bbStringToInt(bbStringSlice(bbt_path,(bbt_i+1),(bbt_path)->length)),2);
		}
		return (struct brl_socketstream_TSocketStream_obj*)brl_socketstream_TSocketStream_CreateClient_TTSocketStream_Sii(bbt_path,80,2);
	}
	return (struct brl_socketstream_TSocketStream_obj*)(&bbNullObject);
}
struct BBDebugScope_2 brl_socketstream_TSocketStreamFactory_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSocketStreamFactory",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_socketstream_TSocketStreamFactory_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CreateStream",
			"(:Object,$,$,i,i):TSocketStream",
			.var_address=(void*)&_brl_socketstream_TSocketStreamFactory_CreateStream_TObjectSSii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_socketstream_TSocketStreamFactory brl_socketstream_TSocketStreamFactory={
	&brl_stream_TStreamFactory,
	bbObjectFree,
	(BBDebugScope*)&brl_socketstream_TSocketStreamFactory_scope,
	sizeof(struct brl_socketstream_TSocketStreamFactory_obj),
	(void (*)(BBOBJECT))_brl_socketstream_TSocketStreamFactory_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_socketstream_TSocketStreamFactory_CreateStream_TObjectSSii
};

void _brl_socketstream_TSocketStream_New(struct brl_socketstream_TSocketStream_obj* o) {
	_brl_stream_TStream_New((struct brl_stream_TStream_obj*)o);
	o->clas = &brl_socketstream_TSocketStream;
	o->_brl_socketstream_tsocketstream__socket = (struct brl_socket_TSocket_obj*)(&bbNullObject);
	o->_brl_socketstream_tsocketstream__autoclose = 0;
}
void _brl_socketstream_TSocketStream_Delete(struct brl_socketstream_TSocketStream_obj* o) {
	_brl_stream_TStream_Delete((struct brl_stream_TStream_obj*)o);
}
BBLONG _brl_socketstream_TSocketStream_Read_pbl(struct brl_socketstream_TSocketStream_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	return (o->_brl_socketstream_tsocketstream__socket )->clas->m_Recv_pbzi((struct brl_socket_TSocket_obj*)o->_brl_socketstream_tsocketstream__socket ,bbt_buf,((BBSIZET)bbt_count),0);
}
BBLONG _brl_socketstream_TSocketStream_Write_pbl(struct brl_socketstream_TSocketStream_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	return (o->_brl_socketstream_tsocketstream__socket )->clas->m_Send_pbzi((struct brl_socket_TSocket_obj*)o->_brl_socketstream_tsocketstream__socket ,bbt_buf,((BBSIZET)bbt_count),0);
}
BBINT _brl_socketstream_TSocketStream_Eof(struct brl_socketstream_TSocketStream_obj* o){
	if(!(((BBObject*)o->_brl_socketstream_tsocketstream__socket )!= &bbNullObject)){
		return 1;
	}
	if((o->_brl_socketstream_tsocketstream__socket )->clas->m_Connected((struct brl_socket_TSocket_obj*)o->_brl_socketstream_tsocketstream__socket )!=0){
		return 0;
	}
	((struct brl_socketstream_TSocketStream_obj*)o)->clas->m_Close((struct brl_socketstream_TSocketStream_obj*)o);
	return 1;
}
void _brl_socketstream_TSocketStream_Close(struct brl_socketstream_TSocketStream_obj* o){
	if(!(((BBObject*)o->_brl_socketstream_tsocketstream__socket )!= &bbNullObject)){
		return;
	}
	if(o->_brl_socketstream_tsocketstream__autoclose !=0){
		(o->_brl_socketstream_tsocketstream__socket )->clas->m_Close((struct brl_socket_TSocket_obj*)o->_brl_socketstream_tsocketstream__socket );
	}
	o->_brl_socketstream_tsocketstream__socket =(struct brl_socket_TSocket_obj*)&bbNullObject;
}
struct brl_socket_TSocket_obj* _brl_socketstream_TSocketStream_Socket(struct brl_socketstream_TSocketStream_obj* o){
	return (struct brl_socket_TSocket_obj*)o->_brl_socketstream_tsocketstream__socket ;
}
struct brl_socketstream_TSocketStream_obj* brl_socketstream_TSocketStream_Create_TTSocketStream_TTSocketi(struct brl_socket_TSocket_obj* bbt_socket,BBINT bbt_autoClose){
	struct brl_socketstream_TSocketStream_obj* bbt_t=(struct brl_socketstream_TSocketStream_obj*)(struct brl_socketstream_TSocketStream_obj*)bbObjectNew((BBClass *)&brl_socketstream_TSocketStream);
	bbt_t->_brl_socketstream_tsocketstream__socket =(struct brl_socket_TSocket_obj*)bbt_socket;
	bbt_t->_brl_socketstream_tsocketstream__autoclose =bbt_autoClose;
	return (struct brl_socketstream_TSocketStream_obj*)bbt_t;
}
struct brl_socketstream_TSocketStream_obj* brl_socketstream_TSocketStream_CreateClient_TTSocketStream_Sii(BBSTRING bbt_remoteHost,BBINT bbt_remotePort,BBINT bbt_family){
	BBARRAY bbt_AddrInfo=brl_socket_AddrInfo(bbt_remoteHost,bbStringFromInt(bbt_remotePort),bbt_family);
	if(!(bbt_AddrInfo!= &bbEmptyArray)){
		return (struct brl_socketstream_TSocketStream_obj*)&bbNullObject;
	}
	struct brl_socket_TSocket_obj* bbt_socket=(struct brl_socket_TSocket_obj*)brl_socket_TSocket_CreateTCP_TTSocket_i(2);
	if(((BBObject*)bbt_socket)!= &bbNullObject){
		if((bbt_socket)->clas->m_Connect_TTAddrInfo((struct brl_socket_TSocket_obj*)bbt_socket,(struct pub_stdc_TAddrInfo_obj*)((struct pub_stdc_TAddrInfo_obj**)BBARRAYDATA(bbt_AddrInfo,1))[0U])!=0){
			return (struct brl_socketstream_TSocketStream_obj*)brl_socketstream_TSocketStream_Create_TTSocketStream_TTSocketi((struct brl_socket_TSocket_obj*)bbt_socket,1);
		}
		(bbt_socket)->clas->m_Close((struct brl_socket_TSocket_obj*)bbt_socket);
	}
	return (struct brl_socketstream_TSocketStream_obj*)(&bbNullObject);
}
struct BBDebugScope_10 brl_socketstream_TSocketStream_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSocketStream",
	{
		{
			BBDEBUGDECL_FIELD,
			"_socket",
			":TSocket",
			.field_offset=offsetof(struct brl_socketstream_TSocketStream_obj,_brl_socketstream_tsocketstream__socket)
		},
		{
			BBDEBUGDECL_FIELD,
			"_autoClose",
			"i",
			.field_offset=offsetof(struct brl_socketstream_TSocketStream_obj,_brl_socketstream_tsocketstream__autoclose)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_socketstream_TSocketStream_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Read",
			"(*b,l)l",
			.var_address=(void*)&_brl_socketstream_TSocketStream_Read_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Write",
			"(*b,l)l",
			.var_address=(void*)&_brl_socketstream_TSocketStream_Write_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Eof",
			"()i",
			.var_address=(void*)&_brl_socketstream_TSocketStream_Eof
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Close",
			"()",
			.var_address=(void*)&_brl_socketstream_TSocketStream_Close
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Socket",
			"():TSocket",
			.var_address=(void*)&_brl_socketstream_TSocketStream_Socket
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(:TSocket,i):TSocketStream",
			.var_address=(void*)&brl_socketstream_TSocketStream_Create_TTSocketStream_TTSocketi
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateClient",
			"($,i,i):TSocketStream",
			.var_address=(void*)&brl_socketstream_TSocketStream_CreateClient_TTSocketStream_Sii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_socketstream_TSocketStream brl_socketstream_TSocketStream={
	&brl_stream_TStream,
	bbObjectFree,
	(BBDebugScope*)&brl_socketstream_TSocketStream_scope,
	sizeof(struct brl_socketstream_TSocketStream_obj),
	(void (*)(BBOBJECT))_brl_socketstream_TSocketStream_New,
	(void (*)(BBOBJECT))_brl_socketstream_TSocketStream_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_socketstream_TSocketStream_obj,_brl_socketstream_tsocketstream__autoclose) - sizeof(void*) + sizeof(BBINT)
	,0
	,_brl_socketstream_TSocketStream_Eof
	,_brl_stream_TIO_Pos
	,_brl_stream_TIO_Size
	,_brl_stream_TIO_Seek_li
	,_brl_stream_TIO_Flush
	,_brl_socketstream_TSocketStream_Close
	,_brl_socketstream_TSocketStream_Read_pbl
	,_brl_socketstream_TSocketStream_Write_pbl
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
	,_brl_socketstream_TSocketStream_Socket
	,brl_socketstream_TSocketStream_Create_TTSocketStream_TTSocketi
	,brl_socketstream_TSocketStream_CreateClient_TTSocketStream_Sii
};

struct brl_socketstream_TSocketStream_obj* brl_socketstream_CreateSocketStream(struct brl_socket_TSocket_obj* bbt_socket,BBINT bbt_autoClose){
	return (struct brl_socketstream_TSocketStream_obj*)brl_socketstream_TSocketStream_Create_TTSocketStream_TTSocketi((struct brl_socket_TSocket_obj*)bbt_socket,bbt_autoClose);
}
struct brl_socket_TSocket_obj* brl_socketstream_SocketStreamSocket(struct brl_socketstream_TSocketStream_obj* bbt_stream){
	return (struct brl_socket_TSocket_obj*)(bbt_stream)->clas->m_Socket((struct brl_socketstream_TSocketStream_obj*)bbt_stream);
}
static int __bb_brl_socketstream_socketstream_inited = 0;
int __bb_brl_socketstream_socketstream(){
	if (!__bb_brl_socketstream_socketstream_inited) {
		__bb_brl_socketstream_socketstream_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_socket_socket();
		__bb_brl_stream_stream();
		bbObjectRegisterType((BBCLASS)&brl_socketstream_TSocketStreamFactory);
		bbObjectRegisterType((BBCLASS)&brl_socketstream_TSocketStream);
		(struct brl_socketstream_TSocketStreamFactory_obj*)bbObjectNew((BBClass *)&brl_socketstream_TSocketStreamFactory);
		return 0;
	}
	return 0;
}