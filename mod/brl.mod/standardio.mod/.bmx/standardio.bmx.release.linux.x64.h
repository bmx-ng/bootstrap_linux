#ifndef BRL_STANDARDIO_STANDARDIO_BMX_RELEASE_LINUX_X64_H
#define BRL_STANDARDIO_STANDARDIO_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/textstream.mod/.bmx/textstream.bmx.release.linux.x64.h>
int __bb_brl_standardio_standardio();
struct brl_standardio_TCStandardIO_obj;
extern struct brl_stream_TStream_obj* brl_standardio_StandardIOStream;
void _brl_standardio_TCStandardIO_New(struct brl_standardio_TCStandardIO_obj* o);
void _brl_standardio_TCStandardIO_Delete(struct brl_standardio_TCStandardIO_obj* o);
typedef BBINT (*brl_standardio_TCStandardIO_Eof_m)(struct brl_standardio_TCStandardIO_obj*);
BBINT _brl_standardio_TCStandardIO_Eof(struct brl_standardio_TCStandardIO_obj*);
typedef void (*brl_standardio_TCStandardIO_Flush_m)(struct brl_standardio_TCStandardIO_obj*);
void _brl_standardio_TCStandardIO_Flush(struct brl_standardio_TCStandardIO_obj*);
typedef BBLONG (*brl_standardio_TCStandardIO_Read_pbl_m)(struct brl_standardio_TCStandardIO_obj*,BBBYTE*,BBLONG);
BBLONG _brl_standardio_TCStandardIO_Read_pbl(struct brl_standardio_TCStandardIO_obj*,BBBYTE*,BBLONG);
typedef BBLONG (*brl_standardio_TCStandardIO_Write_pbl_m)(struct brl_standardio_TCStandardIO_obj*,BBBYTE*,BBLONG);
BBLONG _brl_standardio_TCStandardIO_Write_pbl(struct brl_standardio_TCStandardIO_obj*,BBBYTE*,BBLONG);
struct BBClass_brl_standardio_TCStandardIO {
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
	brl_standardio_TCStandardIO_Eof_m m_Eof;
	brl_stream_TIO_Pos_m m_Pos;
	brl_stream_TIO_Size_m m_Size;
	brl_stream_TIO_Seek_li_m m_Seek_li;
	brl_standardio_TCStandardIO_Flush_m m_Flush;
	brl_stream_TIO_Close_m m_Close;
	brl_standardio_TCStandardIO_Read_pbl_m m_Read_pbl;
	brl_standardio_TCStandardIO_Write_pbl_m m_Write_pbl;
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
};

struct brl_standardio_TCStandardIO_obj {
	struct BBClass_brl_standardio_TCStandardIO* clas;
};
extern struct BBClass_brl_standardio_TCStandardIO brl_standardio_TCStandardIO;
void brl_standardio_Print(BBSTRING bbt_str);
BBSTRING brl_standardio_Input(BBSTRING bbt_prompt);

#endif
