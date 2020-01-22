#include <pub.mod/freeprocess.mod/.bmx/freeprocess.bmx.release.linux.x64.h>
static BBString _s0={
	&bbStringClass,
	30,
	{80,105,112,101,83,116,114,101,97,109,32,82,101,97,100,66,117
	,102,102,101,114,32,79,118,101,114,102,108,111,119}
};
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_17{int kind; const char *name; BBDebugDecl decls[18]; };
void _pub_freeprocess_TProcess_New(struct pub_freeprocess_TProcess_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &pub_freeprocess_TProcess;
	o->_pub_freeprocess_tprocess_name = &bbEmptyString;
	o->_pub_freeprocess_tprocess_handle = 0;
	o->_pub_freeprocess_tprocess_pipe = (struct pub_freeprocess_TPipeStream_obj*)(&bbNullObject);
	o->_pub_freeprocess_tprocess_err = (struct pub_freeprocess_TPipeStream_obj*)(&bbNullObject);
	o->_pub_freeprocess_tprocess_detached = 0;
}
BBINT _pub_freeprocess_TProcess_Detach(struct pub_freeprocess_TProcess_obj* o){
	o->_pub_freeprocess_tprocess_detached =1;
	return 1;
}
BBINT _pub_freeprocess_TProcess_Attach(struct pub_freeprocess_TProcess_obj* o){
	o->_pub_freeprocess_tprocess_detached =0;
	return 1;
}
BBINT _pub_freeprocess_TProcess_Status(struct pub_freeprocess_TProcess_obj* o){
	if(o->_pub_freeprocess_tprocess_handle !=0){
		if(fdProcessStatus(o->_pub_freeprocess_tprocess_handle )!=0){
			return 1;
		}
		o->_pub_freeprocess_tprocess_handle =0;
	}
	return 0;
}
void _pub_freeprocess_TProcess_Close(struct pub_freeprocess_TProcess_obj* o){
	if(((BBObject*)o->_pub_freeprocess_tprocess_pipe )!= &bbNullObject){
		(o->_pub_freeprocess_tprocess_pipe )->clas->m_Close((struct pub_freeprocess_TPipeStream_obj*)o->_pub_freeprocess_tprocess_pipe );
		o->_pub_freeprocess_tprocess_pipe =(struct pub_freeprocess_TPipeStream_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_pub_freeprocess_tprocess_err )!= &bbNullObject){
		(o->_pub_freeprocess_tprocess_err )->clas->m_Close((struct pub_freeprocess_TPipeStream_obj*)o->_pub_freeprocess_tprocess_err );
		o->_pub_freeprocess_tprocess_err =(struct pub_freeprocess_TPipeStream_obj*)&bbNullObject;
	}
}
BBINT _pub_freeprocess_TProcess_Terminate(struct pub_freeprocess_TProcess_obj* o){
	BBINT bbt_res=0;
	if(o->_pub_freeprocess_tprocess_handle !=0){
		bbt_res=fdTerminateProcess(o->_pub_freeprocess_tprocess_handle );
		o->_pub_freeprocess_tprocess_handle =0;
	}
	return bbt_res;
}
BBINT _pub_freeprocess_TProcess_Kill(struct pub_freeprocess_TProcess_obj* o){
	BBINT bbt_res=0;
	if(o->_pub_freeprocess_tprocess_handle !=0){
		bbt_res=fdKillProcess(o->_pub_freeprocess_tprocess_handle );
		o->_pub_freeprocess_tprocess_handle =0;
	}
	return bbt_res;
}
struct pub_freeprocess_TProcess_obj* pub_freeprocess_TProcess_Create_TTProcess_Si(BBSTRING bbt_name,BBINT bbt_flags){
	struct pub_freeprocess_TProcess_obj* bbt_p=(struct pub_freeprocess_TProcess_obj*)(&bbNullObject);
	BBSIZET bbt_infd=0;
	BBSIZET bbt_outfd=0;
	BBSIZET bbt_errfd=0;
	pub_freeprocess_TProcess_FlushZombies_v();
	bbt_p=(struct pub_freeprocess_TProcess_obj*)(struct pub_freeprocess_TProcess_obj*)bbObjectNew((BBClass *)&pub_freeprocess_TProcess);
	bbt_p->_pub_freeprocess_tprocess_name =bbt_name;
	bbt_p->_pub_freeprocess_tprocess_handle =((BBSIZET)fdProcess(bbt_p->_pub_freeprocess_tprocess_name ,(&bbt_infd),(&bbt_outfd),(&bbt_errfd),bbt_flags));
	if(!(bbt_p->_pub_freeprocess_tprocess_handle !=0)){
		return (struct pub_freeprocess_TProcess_obj*)&bbNullObject;
	}
	bbt_p->_pub_freeprocess_tprocess_pipe =(struct pub_freeprocess_TPipeStream_obj*)pub_freeprocess_TPipeStream_Create_TTPipeStream_zz(bbt_infd,bbt_outfd);
	bbt_p->_pub_freeprocess_tprocess_err =(struct pub_freeprocess_TPipeStream_obj*)pub_freeprocess_TPipeStream_Create_TTPipeStream_zz(bbt_errfd,0);
	bbt_p->_pub_freeprocess_tprocess_detached =0;
	if(!(((BBObject*)pub_freeprocess_TProcess_ProcessList)!= &bbNullObject)){
		pub_freeprocess_TProcess_ProcessList=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	}
	(pub_freeprocess_TProcess_ProcessList)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)pub_freeprocess_TProcess_ProcessList,(BBOBJECT)bbt_p);
	return (struct pub_freeprocess_TProcess_obj*)bbt_p;
}
void pub_freeprocess_TProcess_FlushZombies_v(){
	if(!(((BBObject*)pub_freeprocess_TProcess_ProcessList)!= &bbNullObject)){
		return;
	}
	struct brl_linkedlist_TList_obj* bbt_live=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(pub_freeprocess_TProcess_ProcessList)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)pub_freeprocess_TProcess_ProcessList);
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct pub_freeprocess_TProcess_obj* bbt_p=(struct pub_freeprocess_TProcess_obj*)((struct pub_freeprocess_TProcess_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&pub_freeprocess_TProcess));
		if(bbt_p==&bbNullObject){
			continue;
		}
		if((bbt_p)->clas->m_Status((struct pub_freeprocess_TProcess_obj*)bbt_p)!=0){
			(bbt_live)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_live,(BBOBJECT)bbt_p);
		}
	}
	pub_freeprocess_TProcess_ProcessList=(struct brl_linkedlist_TList_obj*)bbt_live;
}
void pub_freeprocess_TProcess_TerminateAll_v(){
	if(!(((BBObject*)pub_freeprocess_TProcess_ProcessList)!= &bbNullObject)){
		return;
	}
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(pub_freeprocess_TProcess_ProcessList)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)pub_freeprocess_TProcess_ProcessList);
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct pub_freeprocess_TProcess_obj* bbt_p=(struct pub_freeprocess_TProcess_obj*)((struct pub_freeprocess_TProcess_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&pub_freeprocess_TProcess));
		if(bbt_p==&bbNullObject){
			continue;
		}
		if(bbt_p->_pub_freeprocess_tprocess_detached ==0){
			(bbt_p)->clas->m_Terminate((struct pub_freeprocess_TProcess_obj*)bbt_p);
		}
	}
	pub_freeprocess_TProcess_ProcessList=(struct brl_linkedlist_TList_obj*)&bbNullObject;
}
void pub_freeprocess_TProcess_KillAll_v(){
	if(!(((BBObject*)pub_freeprocess_TProcess_ProcessList)!= &bbNullObject)){
		return;
	}
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(pub_freeprocess_TProcess_ProcessList)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)pub_freeprocess_TProcess_ProcessList);
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct pub_freeprocess_TProcess_obj* bbt_p=(struct pub_freeprocess_TProcess_obj*)((struct pub_freeprocess_TProcess_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&pub_freeprocess_TProcess));
		if(bbt_p==&bbNullObject){
			continue;
		}
		if(bbt_p->_pub_freeprocess_tprocess_detached ==0){
			(bbt_p)->clas->m_Kill((struct pub_freeprocess_TProcess_obj*)bbt_p);
		}
	}
	pub_freeprocess_TProcess_ProcessList=(struct brl_linkedlist_TList_obj*)&bbNullObject;
}
struct brl_linkedlist_TList_obj* pub_freeprocess_TProcess_ProcessList;
struct BBDebugScope_17 pub_freeprocess_TProcess_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TProcess",
	{
		{
			BBDEBUGDECL_FIELD,
			"name",
			"$",
			.field_offset=offsetof(struct pub_freeprocess_TProcess_obj,_pub_freeprocess_tprocess_name)
		},
		{
			BBDEBUGDECL_FIELD,
			"handle",
			"t",
			.field_offset=offsetof(struct pub_freeprocess_TProcess_obj,_pub_freeprocess_tprocess_handle)
		},
		{
			BBDEBUGDECL_FIELD,
			"pipe",
			":TPipeStream",
			.field_offset=offsetof(struct pub_freeprocess_TProcess_obj,_pub_freeprocess_tprocess_pipe)
		},
		{
			BBDEBUGDECL_FIELD,
			"err",
			":TPipeStream",
			.field_offset=offsetof(struct pub_freeprocess_TProcess_obj,_pub_freeprocess_tprocess_err)
		},
		{
			BBDEBUGDECL_FIELD,
			"detached",
			"i",
			.field_offset=offsetof(struct pub_freeprocess_TProcess_obj,_pub_freeprocess_tprocess_detached)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"ProcessList",
			":TList",
			.var_address=(void*)&pub_freeprocess_TProcess_ProcessList
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_pub_freeprocess_TProcess_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Detach",
			"()i",
			.var_address=(void*)&_pub_freeprocess_TProcess_Detach
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Attach",
			"()i",
			.var_address=(void*)&_pub_freeprocess_TProcess_Attach
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Status",
			"()i",
			.var_address=(void*)&_pub_freeprocess_TProcess_Status
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Close",
			"()",
			.var_address=(void*)&_pub_freeprocess_TProcess_Close
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Terminate",
			"()i",
			.var_address=(void*)&_pub_freeprocess_TProcess_Terminate
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Kill",
			"()i",
			.var_address=(void*)&_pub_freeprocess_TProcess_Kill
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"($,i):TProcess",
			.var_address=(void*)&pub_freeprocess_TProcess_Create_TTProcess_Si
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"FlushZombies",
			"()",
			.var_address=(void*)&pub_freeprocess_TProcess_FlushZombies_v
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"TerminateAll",
			"()",
			.var_address=(void*)&pub_freeprocess_TProcess_TerminateAll_v
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"KillAll",
			"()",
			.var_address=(void*)&pub_freeprocess_TProcess_KillAll_v
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_pub_freeprocess_TProcess pub_freeprocess_TProcess={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&pub_freeprocess_TProcess_scope,
	sizeof(struct pub_freeprocess_TProcess_obj),
	(void (*)(BBOBJECT))_pub_freeprocess_TProcess_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct pub_freeprocess_TProcess_obj,_pub_freeprocess_tprocess_detached) - sizeof(void*) + sizeof(BBINT)
	,0
	,_pub_freeprocess_TProcess_Detach
	,_pub_freeprocess_TProcess_Attach
	,_pub_freeprocess_TProcess_Status
	,_pub_freeprocess_TProcess_Close
	,_pub_freeprocess_TProcess_Terminate
	,_pub_freeprocess_TProcess_Kill
	,pub_freeprocess_TProcess_Create_TTProcess_Si
	,pub_freeprocess_TProcess_FlushZombies_v
	,pub_freeprocess_TProcess_TerminateAll_v
	,pub_freeprocess_TProcess_KillAll_v
};

void _pub_freeprocess_TPipeStream_New(struct pub_freeprocess_TPipeStream_obj* o) {
	_brl_stream_TStream_New((struct brl_stream_TStream_obj*)o);
	o->clas = &pub_freeprocess_TPipeStream;
	o->_pub_freeprocess_tpipestream_readbuffer = bbArrayNew1D("b", 4096);
	o->_pub_freeprocess_tpipestream_bufferpos = 0LL;
	o->_pub_freeprocess_tpipestream_readhandle = 0;
	o->_pub_freeprocess_tpipestream_writehandle = 0;
}
void _pub_freeprocess_TPipeStream_Delete(struct pub_freeprocess_TPipeStream_obj* o) {
	_brl_stream_TStream_Delete((struct brl_stream_TStream_obj*)o);
}
void _pub_freeprocess_TPipeStream_Close(struct pub_freeprocess_TPipeStream_obj* o){
	if(o->_pub_freeprocess_tpipestream_readhandle !=0){
		fdClose(o->_pub_freeprocess_tpipestream_readhandle );
		o->_pub_freeprocess_tpipestream_readhandle =0;
	}
	if(o->_pub_freeprocess_tpipestream_writehandle !=0){
		fdClose(o->_pub_freeprocess_tpipestream_writehandle );
		o->_pub_freeprocess_tpipestream_writehandle =0;
	}
}
BBLONG _pub_freeprocess_TPipeStream_Read_pbl(struct pub_freeprocess_TPipeStream_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	return fdRead(o->_pub_freeprocess_tpipestream_readhandle ,bbt_buf,bbt_count);
}
BBLONG _pub_freeprocess_TPipeStream_Write_pbl(struct pub_freeprocess_TPipeStream_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	return fdWrite(o->_pub_freeprocess_tpipestream_writehandle ,bbt_buf,bbt_count);
}
void _pub_freeprocess_TPipeStream_Flush(struct pub_freeprocess_TPipeStream_obj* o){
	fdFlush(o->_pub_freeprocess_tpipestream_writehandle );
}
BBINT _pub_freeprocess_TPipeStream_ReadAvail(struct pub_freeprocess_TPipeStream_obj* o){
	return fdAvail(o->_pub_freeprocess_tpipestream_readhandle );
}
BBARRAY _pub_freeprocess_TPipeStream_ReadPipe(struct pub_freeprocess_TPipeStream_obj* o){
	BBARRAY bbt_bytes=(&bbEmptyArray);
	BBINT bbt_n=0;
	bbt_n=((struct pub_freeprocess_TPipeStream_obj*)o)->clas->m_ReadAvail((struct pub_freeprocess_TPipeStream_obj*)o);
	if(bbt_n!=0){
		bbt_bytes=bbArrayNew1D("b", bbt_n);
		((struct pub_freeprocess_TPipeStream_obj*)o)->clas->m_Read_pbl((struct pub_freeprocess_TPipeStream_obj*)o,((BBBYTE*)BBARRAYDATA(bbt_bytes,1)),((BBLONG)bbt_n));
		return bbt_bytes;
	}
	return (&bbEmptyArray);
}
BBSTRING _pub_freeprocess_TPipeStream_ReadLine(struct pub_freeprocess_TPipeStream_obj* o){
	BBLONG bbt_n=0LL;
	BBLONG bbt_r=0LL;
	BBINT bbt_p0=0;
	BBINT bbt_p1=0;
	BBSTRING bbt_line=&bbEmptyString;
	bbt_n=((BBLONG)((struct pub_freeprocess_TPipeStream_obj*)o)->clas->m_ReadAvail((struct pub_freeprocess_TPipeStream_obj*)o));
	if(bbt_n!=0){
		if((o->_pub_freeprocess_tpipestream_bufferpos +bbt_n)>4096LL){
			bbt_n=(4096LL-o->_pub_freeprocess_tpipestream_bufferpos );
		}
		if(bbt_n<=0LL){
			brl_blitz_RuntimeError(&_s0);
		}
		bbt_r=((struct pub_freeprocess_TPipeStream_obj*)o)->clas->m_Read_pbl((struct pub_freeprocess_TPipeStream_obj*)o,(&((BBBYTE*)BBARRAYDATA(o->_pub_freeprocess_tpipestream_readbuffer ,1))[((BBUINT)o->_pub_freeprocess_tpipestream_bufferpos )]),bbt_n);
		o->_pub_freeprocess_tpipestream_bufferpos +=bbt_r;
	}
	BBLONG bbt_=o->_pub_freeprocess_tpipestream_bufferpos ;
	for(bbt_n=0LL;(bbt_n<=bbt_);bbt_n=(bbt_n+1LL)){
		if(((BBINT)((BBBYTE*)BBARRAYDATA(o->_pub_freeprocess_tpipestream_readbuffer ,1))[((BBUINT)bbt_n)])==10){
			bbt_p1=((BBINT)bbt_n);
			if(bbt_n>0LL){
				if(((BBINT)((BBBYTE*)BBARRAYDATA(o->_pub_freeprocess_tpipestream_readbuffer ,1))[((BBUINT)(bbt_n-1LL))])==13){
					bbt_p1=((BBINT)(bbt_n-1LL));
				}
			}
			bbt_p0=0;
			if(((BBINT)((BBBYTE*)BBARRAYDATA(o->_pub_freeprocess_tpipestream_readbuffer ,1))[0U])==13){
				bbt_p0=1;
			}
			if(bbt_p1>bbt_p0){
				bbt_line=bbStringFromBytes((&((BBBYTE*)BBARRAYDATA(o->_pub_freeprocess_tpipestream_readbuffer ,1))[((BBUINT)bbt_p0)]),(bbt_p1-bbt_p0));
			}
			bbt_n=(bbt_n+1LL);
			o->_pub_freeprocess_tpipestream_bufferpos -=bbt_n;
			if(o->_pub_freeprocess_tpipestream_bufferpos !=0){
				bbMemMove((void*)((BBBYTE*)BBARRAYDATA(o->_pub_freeprocess_tpipestream_readbuffer ,1)),(const void*)(&((BBBYTE*)BBARRAYDATA(o->_pub_freeprocess_tpipestream_readbuffer ,1))[((BBUINT)bbt_n)]),(size_t)((BBSIZET)o->_pub_freeprocess_tpipestream_bufferpos ));
			}
			return bbt_line;
		}
	}
	return &bbEmptyString;
}
struct pub_freeprocess_TPipeStream_obj* pub_freeprocess_TPipeStream_Create_TTPipeStream_zz(BBSIZET bbt_in,BBSIZET bbt_out){
	struct pub_freeprocess_TPipeStream_obj* bbt_stream=(struct pub_freeprocess_TPipeStream_obj*)(struct pub_freeprocess_TPipeStream_obj*)bbObjectNew((BBClass *)&pub_freeprocess_TPipeStream);
	bbt_stream->_pub_freeprocess_tpipestream_readhandle =bbt_in;
	bbt_stream->_pub_freeprocess_tpipestream_writehandle =bbt_out;
	return (struct pub_freeprocess_TPipeStream_obj*)bbt_stream;
}
struct BBDebugScope_13 pub_freeprocess_TPipeStream_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TPipeStream",
	{
		{
			BBDEBUGDECL_FIELD,
			"readbuffer",
			"[]b",
			.field_offset=offsetof(struct pub_freeprocess_TPipeStream_obj,_pub_freeprocess_tpipestream_readbuffer)
		},
		{
			BBDEBUGDECL_FIELD,
			"bufferpos",
			"l",
			.field_offset=offsetof(struct pub_freeprocess_TPipeStream_obj,_pub_freeprocess_tpipestream_bufferpos)
		},
		{
			BBDEBUGDECL_FIELD,
			"readhandle",
			"t",
			.field_offset=offsetof(struct pub_freeprocess_TPipeStream_obj,_pub_freeprocess_tpipestream_readhandle)
		},
		{
			BBDEBUGDECL_FIELD,
			"writehandle",
			"t",
			.field_offset=offsetof(struct pub_freeprocess_TPipeStream_obj,_pub_freeprocess_tpipestream_writehandle)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_pub_freeprocess_TPipeStream_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Close",
			"()",
			.var_address=(void*)&_pub_freeprocess_TPipeStream_Close
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Read",
			"(*b,l)l",
			.var_address=(void*)&_pub_freeprocess_TPipeStream_Read_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Write",
			"(*b,l)l",
			.var_address=(void*)&_pub_freeprocess_TPipeStream_Write_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Flush",
			"()",
			.var_address=(void*)&_pub_freeprocess_TPipeStream_Flush
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadAvail",
			"()i",
			.var_address=(void*)&_pub_freeprocess_TPipeStream_ReadAvail
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadPipe",
			"()[]b",
			.var_address=(void*)&_pub_freeprocess_TPipeStream_ReadPipe
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadLine",
			"()$",
			.var_address=(void*)&_pub_freeprocess_TPipeStream_ReadLine
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(t,t):TPipeStream",
			.var_address=(void*)&pub_freeprocess_TPipeStream_Create_TTPipeStream_zz
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_pub_freeprocess_TPipeStream pub_freeprocess_TPipeStream={
	&brl_stream_TStream,
	bbObjectFree,
	(BBDebugScope*)&pub_freeprocess_TPipeStream_scope,
	sizeof(struct pub_freeprocess_TPipeStream_obj),
	(void (*)(BBOBJECT))_pub_freeprocess_TPipeStream_New,
	(void (*)(BBOBJECT))_pub_freeprocess_TPipeStream_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct pub_freeprocess_TPipeStream_obj,_pub_freeprocess_tpipestream_writehandle) - sizeof(void*) + sizeof(BBSIZET)
	,0
	,_brl_stream_TIO_Eof
	,_brl_stream_TIO_Pos
	,_brl_stream_TIO_Size
	,_brl_stream_TIO_Seek_li
	,_pub_freeprocess_TPipeStream_Flush
	,_pub_freeprocess_TPipeStream_Close
	,_pub_freeprocess_TPipeStream_Read_pbl
	,_pub_freeprocess_TPipeStream_Write_pbl
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
	,_pub_freeprocess_TPipeStream_ReadLine
	,_brl_stream_TStream_WriteLine_S
	,_brl_stream_TStream_ReadString_i
	,_brl_stream_TStream_WriteString_S
	,_brl_stream_TStream_ReadObject
	,_brl_stream_TStream_WriteObject_TObject
	,_pub_freeprocess_TPipeStream_ReadAvail
	,_pub_freeprocess_TPipeStream_ReadPipe
	,pub_freeprocess_TPipeStream_Create_TTPipeStream_zz
};

struct pub_freeprocess_TProcess_obj* pub_freeprocess_CreateProcess(BBSTRING bbt_cmd,BBINT bbt_flags){
	return (struct pub_freeprocess_TProcess_obj*)pub_freeprocess_TProcess_Create_TTProcess_Si(bbt_cmd,bbt_flags);
}
BBINT pub_freeprocess_ProcessStatus(struct pub_freeprocess_TProcess_obj* bbt_process){
	return (bbt_process)->clas->m_Status((struct pub_freeprocess_TProcess_obj*)bbt_process);
}
BBINT pub_freeprocess_DetachProcess(struct pub_freeprocess_TProcess_obj* bbt_process){
	return (bbt_process)->clas->m_Detach((struct pub_freeprocess_TProcess_obj*)bbt_process);
}
BBINT pub_freeprocess_AttachProcess(struct pub_freeprocess_TProcess_obj* bbt_process){
	return (bbt_process)->clas->m_Attach((struct pub_freeprocess_TProcess_obj*)bbt_process);
}
BBINT pub_freeprocess_TerminateProcess(struct pub_freeprocess_TProcess_obj* bbt_process){
	return (bbt_process)->clas->m_Terminate((struct pub_freeprocess_TProcess_obj*)bbt_process);
}
BBINT pub_freeprocess_KillProcess(struct pub_freeprocess_TProcess_obj* bbt_process){
	return (bbt_process)->clas->m_Kill((struct pub_freeprocess_TProcess_obj*)bbt_process);
}
static int __bb_pub_freeprocess_freeprocess_inited = 0;
int __bb_pub_freeprocess_freeprocess(){
	if (!__bb_pub_freeprocess_freeprocess_inited) {
		__bb_pub_freeprocess_freeprocess_inited = 1;
		GC_add_roots(&pub_freeprocess_TProcess_ProcessList, &pub_freeprocess_TProcess_ProcessList + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_stream_stream();
		__bb_brl_linkedlist_linkedlist();
		__bb_brl_filesystem_filesystem();
		bbObjectRegisterType((BBCLASS)&pub_freeprocess_TProcess);
		bbObjectRegisterType((BBCLASS)&pub_freeprocess_TPipeStream);
		pub_freeprocess_TProcess_ProcessList=(&bbNullObject);
		pub_freeprocess_TProcess_ProcessList=(struct brl_linkedlist_TList_obj*)(&bbNullObject);
		bbOnEnd(pub_freeprocess_TProcess_TerminateAll_v);
		return 0;
	}
	return 0;
}