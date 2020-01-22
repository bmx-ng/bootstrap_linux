#ifndef PUB_FREEPROCESS_FREEPROCESS_BMX_RELEASE_LINUX_X64_H
#define PUB_FREEPROCESS_FREEPROCESS_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/stream.mod/.bmx/stream.bmx.release.linux.x64.h>
#include <brl.mod/linkedlist.mod/.bmx/linkedlist.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
int __bb_pub_freeprocess_freeprocess();
struct pub_freeprocess_TProcess_obj;
struct pub_freeprocess_TPipeStream_obj;
void _pub_freeprocess_TProcess_New(struct pub_freeprocess_TProcess_obj* o);
typedef BBINT (*pub_freeprocess_TProcess_Detach_m)(struct pub_freeprocess_TProcess_obj*);
BBINT _pub_freeprocess_TProcess_Detach(struct pub_freeprocess_TProcess_obj*);
typedef BBINT (*pub_freeprocess_TProcess_Attach_m)(struct pub_freeprocess_TProcess_obj*);
BBINT _pub_freeprocess_TProcess_Attach(struct pub_freeprocess_TProcess_obj*);
typedef BBINT (*pub_freeprocess_TProcess_Status_m)(struct pub_freeprocess_TProcess_obj*);
BBINT _pub_freeprocess_TProcess_Status(struct pub_freeprocess_TProcess_obj*);
typedef void (*pub_freeprocess_TProcess_Close_m)(struct pub_freeprocess_TProcess_obj*);
void _pub_freeprocess_TProcess_Close(struct pub_freeprocess_TProcess_obj*);
typedef BBINT (*pub_freeprocess_TProcess_Terminate_m)(struct pub_freeprocess_TProcess_obj*);
BBINT _pub_freeprocess_TProcess_Terminate(struct pub_freeprocess_TProcess_obj*);
typedef BBINT (*pub_freeprocess_TProcess_Kill_m)(struct pub_freeprocess_TProcess_obj*);
BBINT _pub_freeprocess_TProcess_Kill(struct pub_freeprocess_TProcess_obj*);
typedef struct pub_freeprocess_TProcess_obj* (*pub_freeprocess_TProcess_Create_TTProcess_Si_f)(BBSTRING,BBINT);
struct pub_freeprocess_TProcess_obj* pub_freeprocess_TProcess_Create_TTProcess_Si(BBSTRING,BBINT);
typedef void (*pub_freeprocess_TProcess_FlushZombies_v_f)();
void pub_freeprocess_TProcess_FlushZombies_v();
typedef void (*pub_freeprocess_TProcess_TerminateAll_v_f)();
void pub_freeprocess_TProcess_TerminateAll_v();
typedef void (*pub_freeprocess_TProcess_KillAll_v_f)();
void pub_freeprocess_TProcess_KillAll_v();
struct BBClass_pub_freeprocess_TProcess {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	pub_freeprocess_TProcess_Detach_m m_Detach;
	pub_freeprocess_TProcess_Attach_m m_Attach;
	pub_freeprocess_TProcess_Status_m m_Status;
	pub_freeprocess_TProcess_Close_m m_Close;
	pub_freeprocess_TProcess_Terminate_m m_Terminate;
	pub_freeprocess_TProcess_Kill_m m_Kill;
	pub_freeprocess_TProcess_Create_TTProcess_Si_f f_Create_TTProcess_Si;
	pub_freeprocess_TProcess_FlushZombies_v_f f_FlushZombies_v;
	pub_freeprocess_TProcess_TerminateAll_v_f f_TerminateAll_v;
	pub_freeprocess_TProcess_KillAll_v_f f_KillAll_v;
};

struct pub_freeprocess_TProcess_obj {
	struct BBClass_pub_freeprocess_TProcess* clas;
	BBSTRING _pub_freeprocess_tprocess_name;
	BBSIZET _pub_freeprocess_tprocess_handle;
	struct pub_freeprocess_TPipeStream_obj* _pub_freeprocess_tprocess_pipe;
	struct pub_freeprocess_TPipeStream_obj* _pub_freeprocess_tprocess_err;
	BBINT _pub_freeprocess_tprocess_detached;
};
extern struct BBClass_pub_freeprocess_TProcess pub_freeprocess_TProcess;
extern struct brl_linkedlist_TList_obj* pub_freeprocess_TProcess_ProcessList;
extern BBINT fdTerminateProcess(BBSIZET bbt_processhandle);
void _pub_freeprocess_TPipeStream_New(struct pub_freeprocess_TPipeStream_obj* o);
void _pub_freeprocess_TPipeStream_Delete(struct pub_freeprocess_TPipeStream_obj* o);
typedef void (*pub_freeprocess_TPipeStream_Close_m)(struct pub_freeprocess_TPipeStream_obj*);
void _pub_freeprocess_TPipeStream_Close(struct pub_freeprocess_TPipeStream_obj*);
typedef BBLONG (*pub_freeprocess_TPipeStream_Read_pbl_m)(struct pub_freeprocess_TPipeStream_obj*,BBBYTE*,BBLONG);
BBLONG _pub_freeprocess_TPipeStream_Read_pbl(struct pub_freeprocess_TPipeStream_obj*,BBBYTE*,BBLONG);
typedef BBLONG (*pub_freeprocess_TPipeStream_Write_pbl_m)(struct pub_freeprocess_TPipeStream_obj*,BBBYTE*,BBLONG);
BBLONG _pub_freeprocess_TPipeStream_Write_pbl(struct pub_freeprocess_TPipeStream_obj*,BBBYTE*,BBLONG);
typedef void (*pub_freeprocess_TPipeStream_Flush_m)(struct pub_freeprocess_TPipeStream_obj*);
void _pub_freeprocess_TPipeStream_Flush(struct pub_freeprocess_TPipeStream_obj*);
typedef BBINT (*pub_freeprocess_TPipeStream_ReadAvail_m)(struct pub_freeprocess_TPipeStream_obj*);
BBINT _pub_freeprocess_TPipeStream_ReadAvail(struct pub_freeprocess_TPipeStream_obj*);
typedef BBARRAY (*pub_freeprocess_TPipeStream_ReadPipe_m)(struct pub_freeprocess_TPipeStream_obj*);
BBARRAY _pub_freeprocess_TPipeStream_ReadPipe(struct pub_freeprocess_TPipeStream_obj*);
typedef BBSTRING (*pub_freeprocess_TPipeStream_ReadLine_m)(struct pub_freeprocess_TPipeStream_obj*);
BBSTRING _pub_freeprocess_TPipeStream_ReadLine(struct pub_freeprocess_TPipeStream_obj*);
typedef struct pub_freeprocess_TPipeStream_obj* (*pub_freeprocess_TPipeStream_Create_TTPipeStream_zz_f)(BBSIZET,BBSIZET);
struct pub_freeprocess_TPipeStream_obj* pub_freeprocess_TPipeStream_Create_TTPipeStream_zz(BBSIZET,BBSIZET);
struct BBClass_pub_freeprocess_TPipeStream {
	struct BBClass_brl_stream_TStream*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	brl_stream_TIO_Eof_m m_Eof;
	brl_stream_TIO_Pos_m m_Pos;
	brl_stream_TIO_Size_m m_Size;
	brl_stream_TIO_Seek_li_m m_Seek_li;
	pub_freeprocess_TPipeStream_Flush_m m_Flush;
	pub_freeprocess_TPipeStream_Close_m m_Close;
	pub_freeprocess_TPipeStream_Read_pbl_m m_Read_pbl;
	pub_freeprocess_TPipeStream_Write_pbl_m m_Write_pbl;
	brl_stream_TIO_SetSize_l_m m_SetSize_l;
	brl_stream_TStream_ReadBytes_pbl_m m_ReadBytes_pbl;
	brl_stream_TStream_WriteBytes_pbl_m m_WriteBytes_pbl;
	brl_stream_TStream_SkipBytes_l_m m_SkipBytes_l;
	brl_stream_TStream_ReadByte_m m_ReadByte;
	brl_stream_TStream_WriteByte_i_m m_WriteByte_i;
	brl_stream_TStream_ReadShort_m m_ReadShort;
	brl_stream_TStream_WriteShort_i_m m_WriteShort_i;
	brl_stream_TStream_ReadInt_m m_ReadInt;
	brl_stream_TStream_WriteInt_i_m m_WriteInt_i;
	brl_stream_TStream_ReadLong_m m_ReadLong;
	brl_stream_TStream_WriteLong_l_m m_WriteLong_l;
	brl_stream_TStream_ReadFloat_m m_ReadFloat;
	brl_stream_TStream_WriteFloat_f_m m_WriteFloat_f;
	brl_stream_TStream_ReadDouble_m m_ReadDouble;
	brl_stream_TStream_WriteDouble_d_m m_WriteDouble_d;
	pub_freeprocess_TPipeStream_ReadLine_m m_ReadLine;
	brl_stream_TStream_WriteLine_S_m m_WriteLine_S;
	brl_stream_TStream_ReadString_i_m m_ReadString_i;
	brl_stream_TStream_WriteString_S_m m_WriteString_S;
	brl_stream_TStream_ReadObject_m m_ReadObject;
	brl_stream_TStream_WriteObject_TObject_m m_WriteObject_TObject;
	pub_freeprocess_TPipeStream_ReadAvail_m m_ReadAvail;
	pub_freeprocess_TPipeStream_ReadPipe_m m_ReadPipe;
	pub_freeprocess_TPipeStream_Create_TTPipeStream_zz_f f_Create_TTPipeStream_zz;
};

struct pub_freeprocess_TPipeStream_obj {
	struct BBClass_pub_freeprocess_TPipeStream* clas;
	BBARRAY _pub_freeprocess_tpipestream_readbuffer;
	BBLONG _pub_freeprocess_tpipestream_bufferpos;
	BBSIZET _pub_freeprocess_tpipestream_readhandle;
	BBSIZET _pub_freeprocess_tpipestream_writehandle;
};
extern struct BBClass_pub_freeprocess_TPipeStream pub_freeprocess_TPipeStream;
extern void fdClose(BBSIZET bbt_fd);
extern BBLONG fdRead(BBSIZET bbt_fd,BBBYTE* bbt_buffer,BBLONG bbt_count);
extern BBLONG fdWrite(BBSIZET bbt_fd,BBBYTE* bbt_buffer,BBLONG bbt_count);
extern void fdFlush(BBSIZET bbt_fd);
extern BBINT fdAvail(BBSIZET bbt_fd);
extern BBINT fdProcess(BBSTRING bbt_exe,BBSIZET* bbt_in_fd,BBSIZET* bbt_out_fd,BBSIZET* bbt_err_fd,BBINT bbt_flags);
extern BBINT fdProcessStatus(BBSIZET bbt_processhandle);
extern BBINT fdKillProcess(BBSIZET bbt_processhandle);
struct pub_freeprocess_TProcess_obj* pub_freeprocess_CreateProcess(BBSTRING bbt_cmd,BBINT bbt_flags);
BBINT pub_freeprocess_ProcessStatus(struct pub_freeprocess_TProcess_obj* bbt_process);
BBINT pub_freeprocess_DetachProcess(struct pub_freeprocess_TProcess_obj* bbt_process);
BBINT pub_freeprocess_AttachProcess(struct pub_freeprocess_TProcess_obj* bbt_process);
BBINT pub_freeprocess_TerminateProcess(struct pub_freeprocess_TProcess_obj* bbt_process);
BBINT pub_freeprocess_KillProcess(struct pub_freeprocess_TProcess_obj* bbt_process);

#endif
