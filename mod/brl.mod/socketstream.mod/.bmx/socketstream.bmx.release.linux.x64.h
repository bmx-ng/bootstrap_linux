#ifndef BRL_SOCKETSTREAM_SOCKETSTREAM_BMX_RELEASE_LINUX_X64_H
#define BRL_SOCKETSTREAM_SOCKETSTREAM_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/socket.mod/.bmx/socket.bmx.release.linux.x64.h>
#include <brl.mod/stream.mod/.bmx/stream.bmx.release.linux.x64.h>
int __bb_brl_socketstream_socketstream();
struct brl_socketstream_TSocketStreamFactory_obj;
struct brl_socketstream_TSocketStream_obj;
void _brl_socketstream_TSocketStreamFactory_New(struct brl_socketstream_TSocketStreamFactory_obj* o);
typedef struct brl_socketstream_TSocketStream_obj* (*brl_socketstream_TSocketStreamFactory_CreateStream_TObjectSSii_m)(struct brl_socketstream_TSocketStreamFactory_obj*,BBOBJECT,BBSTRING,BBSTRING,BBINT,BBINT);
struct brl_socketstream_TSocketStream_obj* _brl_socketstream_TSocketStreamFactory_CreateStream_TObjectSSii(struct brl_socketstream_TSocketStreamFactory_obj*,BBOBJECT,BBSTRING,BBSTRING,BBINT,BBINT);
struct BBClass_brl_socketstream_TSocketStreamFactory {
	struct BBClass_brl_stream_TStreamFactory*  super;
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
	brl_socketstream_TSocketStreamFactory_CreateStream_TObjectSSii_m m_CreateStream_TObjectSSii;
};

struct brl_socketstream_TSocketStreamFactory_obj {
	struct BBClass_brl_socketstream_TSocketStreamFactory* clas;
	struct brl_stream_TStreamFactory_obj* _brl_stream_tstreamfactory__succ;
};
extern struct BBClass_brl_socketstream_TSocketStreamFactory brl_socketstream_TSocketStreamFactory;
void _brl_socketstream_TSocketStream_New(struct brl_socketstream_TSocketStream_obj* o);
void _brl_socketstream_TSocketStream_Delete(struct brl_socketstream_TSocketStream_obj* o);
typedef BBLONG (*brl_socketstream_TSocketStream_Read_pbl_m)(struct brl_socketstream_TSocketStream_obj*,BBBYTE*,BBLONG);
BBLONG _brl_socketstream_TSocketStream_Read_pbl(struct brl_socketstream_TSocketStream_obj*,BBBYTE*,BBLONG);
typedef BBLONG (*brl_socketstream_TSocketStream_Write_pbl_m)(struct brl_socketstream_TSocketStream_obj*,BBBYTE*,BBLONG);
BBLONG _brl_socketstream_TSocketStream_Write_pbl(struct brl_socketstream_TSocketStream_obj*,BBBYTE*,BBLONG);
typedef BBINT (*brl_socketstream_TSocketStream_Eof_m)(struct brl_socketstream_TSocketStream_obj*);
BBINT _brl_socketstream_TSocketStream_Eof(struct brl_socketstream_TSocketStream_obj*);
typedef void (*brl_socketstream_TSocketStream_Close_m)(struct brl_socketstream_TSocketStream_obj*);
void _brl_socketstream_TSocketStream_Close(struct brl_socketstream_TSocketStream_obj*);
typedef struct brl_socket_TSocket_obj* (*brl_socketstream_TSocketStream_Socket_m)(struct brl_socketstream_TSocketStream_obj*);
struct brl_socket_TSocket_obj* _brl_socketstream_TSocketStream_Socket(struct brl_socketstream_TSocketStream_obj*);
typedef struct brl_socketstream_TSocketStream_obj* (*brl_socketstream_TSocketStream_Create_TTSocketStream_TTSocketi_f)(struct brl_socket_TSocket_obj*,BBINT);
struct brl_socketstream_TSocketStream_obj* brl_socketstream_TSocketStream_Create_TTSocketStream_TTSocketi(struct brl_socket_TSocket_obj*,BBINT);
typedef struct brl_socketstream_TSocketStream_obj* (*brl_socketstream_TSocketStream_CreateClient_TTSocketStream_Sii_f)(BBSTRING,BBINT,BBINT);
struct brl_socketstream_TSocketStream_obj* brl_socketstream_TSocketStream_CreateClient_TTSocketStream_Sii(BBSTRING,BBINT,BBINT);
struct BBClass_brl_socketstream_TSocketStream {
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
	brl_socketstream_TSocketStream_Eof_m m_Eof;
	brl_stream_TIO_Pos_m m_Pos;
	brl_stream_TIO_Size_m m_Size;
	brl_stream_TIO_Seek_li_m m_Seek_li;
	brl_stream_TIO_Flush_m m_Flush;
	brl_socketstream_TSocketStream_Close_m m_Close;
	brl_socketstream_TSocketStream_Read_pbl_m m_Read_pbl;
	brl_socketstream_TSocketStream_Write_pbl_m m_Write_pbl;
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
	brl_stream_TStream_ReadLine_m m_ReadLine;
	brl_stream_TStream_WriteLine_S_m m_WriteLine_S;
	brl_stream_TStream_ReadString_i_m m_ReadString_i;
	brl_stream_TStream_WriteString_S_m m_WriteString_S;
	brl_stream_TStream_ReadObject_m m_ReadObject;
	brl_stream_TStream_WriteObject_TObject_m m_WriteObject_TObject;
	brl_socketstream_TSocketStream_Socket_m m_Socket;
	brl_socketstream_TSocketStream_Create_TTSocketStream_TTSocketi_f f_Create_TTSocketStream_TTSocketi;
	brl_socketstream_TSocketStream_CreateClient_TTSocketStream_Sii_f f_CreateClient_TTSocketStream_Sii;
};

struct brl_socketstream_TSocketStream_obj {
	struct BBClass_brl_socketstream_TSocketStream* clas;
	struct brl_socket_TSocket_obj* _brl_socketstream_tsocketstream__socket;
	BBINT _brl_socketstream_tsocketstream__autoclose;
};
extern struct BBClass_brl_socketstream_TSocketStream brl_socketstream_TSocketStream;
struct brl_socketstream_TSocketStream_obj* brl_socketstream_CreateSocketStream(struct brl_socket_TSocket_obj* bbt_socket,BBINT bbt_autoClose);
struct brl_socket_TSocket_obj* brl_socketstream_SocketStreamSocket(struct brl_socketstream_TSocketStream_obj* bbt_stream);

#endif
