#ifndef BRL_BANKSTREAM_BANKSTREAM_BMX_RELEASE_LINUX_X64_H
#define BRL_BANKSTREAM_BANKSTREAM_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/bank.mod/.bmx/bank.bmx.release.linux.x64.h>
int __bb_brl_bankstream_bankstream();
struct brl_bankstream_TBankStreamFactory_obj;
struct brl_bankstream_TBankStream_obj;
void _brl_bankstream_TBankStreamFactory_New(struct brl_bankstream_TBankStreamFactory_obj* o);
typedef struct brl_bankstream_TBankStream_obj* (*brl_bankstream_TBankStreamFactory_CreateStream_TObjectSSii_m)(struct brl_bankstream_TBankStreamFactory_obj*,BBOBJECT,BBSTRING,BBSTRING,BBINT,BBINT);
struct brl_bankstream_TBankStream_obj* _brl_bankstream_TBankStreamFactory_CreateStream_TObjectSSii(struct brl_bankstream_TBankStreamFactory_obj*,BBOBJECT,BBSTRING,BBSTRING,BBINT,BBINT);
struct BBClass_brl_bankstream_TBankStreamFactory {
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
	brl_bankstream_TBankStreamFactory_CreateStream_TObjectSSii_m m_CreateStream_TObjectSSii;
};

struct brl_bankstream_TBankStreamFactory_obj {
	struct BBClass_brl_bankstream_TBankStreamFactory* clas;
	struct brl_stream_TStreamFactory_obj* _brl_stream_tstreamfactory__succ;
};
extern struct BBClass_brl_bankstream_TBankStreamFactory brl_bankstream_TBankStreamFactory;
void _brl_bankstream_TBankStream_New(struct brl_bankstream_TBankStream_obj* o);
void _brl_bankstream_TBankStream_Delete(struct brl_bankstream_TBankStream_obj* o);
typedef BBLONG (*brl_bankstream_TBankStream_Pos_m)(struct brl_bankstream_TBankStream_obj*);
BBLONG _brl_bankstream_TBankStream_Pos(struct brl_bankstream_TBankStream_obj*);
typedef BBLONG (*brl_bankstream_TBankStream_Size_m)(struct brl_bankstream_TBankStream_obj*);
BBLONG _brl_bankstream_TBankStream_Size(struct brl_bankstream_TBankStream_obj*);
typedef BBLONG (*brl_bankstream_TBankStream_Seek_li_m)(struct brl_bankstream_TBankStream_obj*,BBLONG,BBINT);
BBLONG _brl_bankstream_TBankStream_Seek_li(struct brl_bankstream_TBankStream_obj*,BBLONG,BBINT);
typedef BBLONG (*brl_bankstream_TBankStream_Read_pbl_m)(struct brl_bankstream_TBankStream_obj*,BBBYTE*,BBLONG);
BBLONG _brl_bankstream_TBankStream_Read_pbl(struct brl_bankstream_TBankStream_obj*,BBBYTE*,BBLONG);
typedef BBLONG (*brl_bankstream_TBankStream_Write_pbl_m)(struct brl_bankstream_TBankStream_obj*,BBBYTE*,BBLONG);
BBLONG _brl_bankstream_TBankStream_Write_pbl(struct brl_bankstream_TBankStream_obj*,BBBYTE*,BBLONG);
typedef struct brl_bankstream_TBankStream_obj* (*brl_bankstream_TBankStream_Create_TTBankStream_TTBank_f)(struct brl_bank_TBank_obj*);
struct brl_bankstream_TBankStream_obj* brl_bankstream_TBankStream_Create_TTBankStream_TTBank(struct brl_bank_TBank_obj*);
struct BBClass_brl_bankstream_TBankStream {
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
	brl_bankstream_TBankStream_Pos_m m_Pos;
	brl_bankstream_TBankStream_Size_m m_Size;
	brl_bankstream_TBankStream_Seek_li_m m_Seek_li;
	brl_stream_TIO_Flush_m m_Flush;
	brl_stream_TIO_Close_m m_Close;
	brl_bankstream_TBankStream_Read_pbl_m m_Read_pbl;
	brl_bankstream_TBankStream_Write_pbl_m m_Write_pbl;
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
	brl_bankstream_TBankStream_Create_TTBankStream_TTBank_f f_Create_TTBankStream_TTBank;
};

struct brl_bankstream_TBankStream_obj {
	struct BBClass_brl_bankstream_TBankStream* clas;
	BBLONG _brl_bankstream_tbankstream__pos;
	struct brl_bank_TBank_obj* _brl_bankstream_tbankstream__bank;
};
extern struct BBClass_brl_bankstream_TBankStream brl_bankstream_TBankStream;
struct brl_bankstream_TBankStream_obj* brl_bankstream_CreateBankStream(struct brl_bank_TBank_obj* bbt_bank);

#endif
