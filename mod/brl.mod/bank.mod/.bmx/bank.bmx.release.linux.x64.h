#ifndef BRL_BANK_BANK_BMX_RELEASE_LINUX_X64_H
#define BRL_BANK_BANK_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/stream.mod/.bmx/stream.bmx.release.linux.x64.h>
int __bb_brl_bank_bank();
struct brl_bank_TBank_obj;
void _brl_bank_TBank_New(struct brl_bank_TBank_obj* o);
void _brl_bank_TBank_Delete(struct brl_bank_TBank_obj* o);
typedef void (*brl_bank_TBank__pad_m)(struct brl_bank_TBank_obj*);
void _brl_bank_TBank__pad(struct brl_bank_TBank_obj*);
typedef BBBYTE* (*brl_bank_TBank_Buf_m)(struct brl_bank_TBank_obj*);
BBBYTE* _brl_bank_TBank_Buf(struct brl_bank_TBank_obj*);
typedef BBBYTE* (*brl_bank_TBank_Lock_m)(struct brl_bank_TBank_obj*);
BBBYTE* _brl_bank_TBank_Lock(struct brl_bank_TBank_obj*);
typedef void (*brl_bank_TBank_Unlock_m)(struct brl_bank_TBank_obj*);
void _brl_bank_TBank_Unlock(struct brl_bank_TBank_obj*);
typedef BBSIZET (*brl_bank_TBank_Size_m)(struct brl_bank_TBank_obj*);
BBSIZET _brl_bank_TBank_Size(struct brl_bank_TBank_obj*);
typedef BBSIZET (*brl_bank_TBank_Capacity_m)(struct brl_bank_TBank_obj*);
BBSIZET _brl_bank_TBank_Capacity(struct brl_bank_TBank_obj*);
typedef BBINT (*brl_bank_TBank_IsStatic_m)(struct brl_bank_TBank_obj*);
BBINT _brl_bank_TBank_IsStatic(struct brl_bank_TBank_obj*);
typedef void (*brl_bank_TBank_Resize_i_m)(struct brl_bank_TBank_obj*,BBINT);
void _brl_bank_TBank_Resize_i(struct brl_bank_TBank_obj*,BBINT);
typedef void (*brl_bank_TBank_Resize_z_m)(struct brl_bank_TBank_obj*,BBSIZET);
void _brl_bank_TBank_Resize_z(struct brl_bank_TBank_obj*,BBSIZET);
typedef BBLONG (*brl_bank_TBank_Read_TTStreamll_m)(struct brl_bank_TBank_obj*,struct brl_stream_TStream_obj*,BBLONG,BBLONG);
BBLONG _brl_bank_TBank_Read_TTStreamll(struct brl_bank_TBank_obj*,struct brl_stream_TStream_obj*,BBLONG,BBLONG);
typedef BBLONG (*brl_bank_TBank_Write_TTStreamll_m)(struct brl_bank_TBank_obj*,struct brl_stream_TStream_obj*,BBLONG,BBLONG);
BBLONG _brl_bank_TBank_Write_TTStreamll(struct brl_bank_TBank_obj*,struct brl_stream_TStream_obj*,BBLONG,BBLONG);
typedef BBINT (*brl_bank_TBank_PeekByte_i_m)(struct brl_bank_TBank_obj*,BBINT);
BBINT _brl_bank_TBank_PeekByte_i(struct brl_bank_TBank_obj*,BBINT);
typedef BBINT (*brl_bank_TBank_PeekByte_z_m)(struct brl_bank_TBank_obj*,BBSIZET);
BBINT _brl_bank_TBank_PeekByte_z(struct brl_bank_TBank_obj*,BBSIZET);
typedef void (*brl_bank_TBank_PokeByte_ii_m)(struct brl_bank_TBank_obj*,BBINT,BBINT);
void _brl_bank_TBank_PokeByte_ii(struct brl_bank_TBank_obj*,BBINT,BBINT);
typedef void (*brl_bank_TBank_PokeByte_zi_m)(struct brl_bank_TBank_obj*,BBSIZET,BBINT);
void _brl_bank_TBank_PokeByte_zi(struct brl_bank_TBank_obj*,BBSIZET,BBINT);
typedef BBINT (*brl_bank_TBank_PeekShort_i_m)(struct brl_bank_TBank_obj*,BBINT);
BBINT _brl_bank_TBank_PeekShort_i(struct brl_bank_TBank_obj*,BBINT);
typedef BBINT (*brl_bank_TBank_PeekShort_z_m)(struct brl_bank_TBank_obj*,BBSIZET);
BBINT _brl_bank_TBank_PeekShort_z(struct brl_bank_TBank_obj*,BBSIZET);
typedef void (*brl_bank_TBank_PokeShort_ii_m)(struct brl_bank_TBank_obj*,BBINT,BBINT);
void _brl_bank_TBank_PokeShort_ii(struct brl_bank_TBank_obj*,BBINT,BBINT);
typedef void (*brl_bank_TBank_PokeShort_zi_m)(struct brl_bank_TBank_obj*,BBSIZET,BBINT);
void _brl_bank_TBank_PokeShort_zi(struct brl_bank_TBank_obj*,BBSIZET,BBINT);
typedef BBINT (*brl_bank_TBank_PeekInt_i_m)(struct brl_bank_TBank_obj*,BBINT);
BBINT _brl_bank_TBank_PeekInt_i(struct brl_bank_TBank_obj*,BBINT);
typedef BBINT (*brl_bank_TBank_PeekInt_z_m)(struct brl_bank_TBank_obj*,BBSIZET);
BBINT _brl_bank_TBank_PeekInt_z(struct brl_bank_TBank_obj*,BBSIZET);
typedef void (*brl_bank_TBank_PokeInt_ii_m)(struct brl_bank_TBank_obj*,BBINT,BBINT);
void _brl_bank_TBank_PokeInt_ii(struct brl_bank_TBank_obj*,BBINT,BBINT);
typedef void (*brl_bank_TBank_PokeInt_zi_m)(struct brl_bank_TBank_obj*,BBSIZET,BBINT);
void _brl_bank_TBank_PokeInt_zi(struct brl_bank_TBank_obj*,BBSIZET,BBINT);
typedef BBLONG (*brl_bank_TBank_PeekLong_i_m)(struct brl_bank_TBank_obj*,BBINT);
BBLONG _brl_bank_TBank_PeekLong_i(struct brl_bank_TBank_obj*,BBINT);
typedef BBLONG (*brl_bank_TBank_PeekLong_z_m)(struct brl_bank_TBank_obj*,BBSIZET);
BBLONG _brl_bank_TBank_PeekLong_z(struct brl_bank_TBank_obj*,BBSIZET);
typedef void (*brl_bank_TBank_PokeLong_il_m)(struct brl_bank_TBank_obj*,BBINT,BBLONG);
void _brl_bank_TBank_PokeLong_il(struct brl_bank_TBank_obj*,BBINT,BBLONG);
typedef void (*brl_bank_TBank_PokeLong_zl_m)(struct brl_bank_TBank_obj*,BBSIZET,BBLONG);
void _brl_bank_TBank_PokeLong_zl(struct brl_bank_TBank_obj*,BBSIZET,BBLONG);
typedef BBFLOAT (*brl_bank_TBank_PeekFloat_i_m)(struct brl_bank_TBank_obj*,BBINT);
BBFLOAT _brl_bank_TBank_PeekFloat_i(struct brl_bank_TBank_obj*,BBINT);
typedef BBFLOAT (*brl_bank_TBank_PeekFloat_z_m)(struct brl_bank_TBank_obj*,BBSIZET);
BBFLOAT _brl_bank_TBank_PeekFloat_z(struct brl_bank_TBank_obj*,BBSIZET);
typedef void (*brl_bank_TBank_PokeFloat_if_m)(struct brl_bank_TBank_obj*,BBINT,BBFLOAT);
void _brl_bank_TBank_PokeFloat_if(struct brl_bank_TBank_obj*,BBINT,BBFLOAT);
typedef void (*brl_bank_TBank_PokeFloat_zf_m)(struct brl_bank_TBank_obj*,BBSIZET,BBFLOAT);
void _brl_bank_TBank_PokeFloat_zf(struct brl_bank_TBank_obj*,BBSIZET,BBFLOAT);
typedef BBDOUBLE (*brl_bank_TBank_PeekDouble_i_m)(struct brl_bank_TBank_obj*,BBINT);
BBDOUBLE _brl_bank_TBank_PeekDouble_i(struct brl_bank_TBank_obj*,BBINT);
typedef BBDOUBLE (*brl_bank_TBank_PeekDouble_z_m)(struct brl_bank_TBank_obj*,BBSIZET);
BBDOUBLE _brl_bank_TBank_PeekDouble_z(struct brl_bank_TBank_obj*,BBSIZET);
typedef void (*brl_bank_TBank_PokeDouble_id_m)(struct brl_bank_TBank_obj*,BBINT,BBDOUBLE);
void _brl_bank_TBank_PokeDouble_id(struct brl_bank_TBank_obj*,BBINT,BBDOUBLE);
typedef void (*brl_bank_TBank_PokeDouble_zd_m)(struct brl_bank_TBank_obj*,BBSIZET,BBDOUBLE);
void _brl_bank_TBank_PokeDouble_zd(struct brl_bank_TBank_obj*,BBSIZET,BBDOUBLE);
typedef struct brl_bank_TBank_obj* (*brl_bank_TBank_Window_zz_m)(struct brl_bank_TBank_obj*,BBSIZET,BBSIZET);
struct brl_bank_TBank_obj* _brl_bank_TBank_Window_zz(struct brl_bank_TBank_obj*,BBSIZET,BBSIZET);
typedef struct brl_bank_TBank_obj* (*brl_bank_TBank_Window_ii_m)(struct brl_bank_TBank_obj*,BBINT,BBINT);
struct brl_bank_TBank_obj* _brl_bank_TBank_Window_ii(struct brl_bank_TBank_obj*,BBINT,BBINT);
typedef BBINT (*brl_bank_TBank_Save_TObject_m)(struct brl_bank_TBank_obj*,BBOBJECT);
BBINT _brl_bank_TBank_Save_TObject(struct brl_bank_TBank_obj*,BBOBJECT);
typedef struct brl_bank_TBank_obj* (*brl_bank_TBank_Load_TTBank_TObject_f)(BBOBJECT);
struct brl_bank_TBank_obj* brl_bank_TBank_Load_TTBank_TObject(BBOBJECT);
typedef struct brl_bank_TBank_obj* (*brl_bank_TBank_Create_TTBank_z_f)(BBSIZET);
struct brl_bank_TBank_obj* brl_bank_TBank_Create_TTBank_z(BBSIZET);
typedef struct brl_bank_TBank_obj* (*brl_bank_TBank_Create_TTBank_i_f)(BBINT);
struct brl_bank_TBank_obj* brl_bank_TBank_Create_TTBank_i(BBINT);
typedef struct brl_bank_TBank_obj* (*brl_bank_TBank_CreateStatic_TTBank_pbz_f)(BBBYTE*,BBSIZET);
struct brl_bank_TBank_obj* brl_bank_TBank_CreateStatic_TTBank_pbz(BBBYTE*,BBSIZET);
typedef struct brl_bank_TBank_obj* (*brl_bank_TBank_CreateStatic_TTBank_abz_f)(BBARRAY,BBSIZET);
struct brl_bank_TBank_obj* brl_bank_TBank_CreateStatic_TTBank_abz(BBARRAY,BBSIZET);
typedef struct brl_bank_TBank_obj* (*brl_bank_TBank_CreateStatic_TTBank_pbi_f)(BBBYTE*,BBINT);
struct brl_bank_TBank_obj* brl_bank_TBank_CreateStatic_TTBank_pbi(BBBYTE*,BBINT);
typedef struct brl_bank_TBank_obj* (*brl_bank_TBank_CreateStatic_TTBank_abi_f)(BBARRAY,BBINT);
struct brl_bank_TBank_obj* brl_bank_TBank_CreateStatic_TTBank_abi(BBARRAY,BBINT);
struct BBClass_brl_bank_TBank {
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
	brl_bank_TBank__pad_m m__pad;
	brl_bank_TBank_Buf_m m_Buf;
	brl_bank_TBank_Lock_m m_Lock;
	brl_bank_TBank_Unlock_m m_Unlock;
	brl_bank_TBank_Size_m m_Size;
	brl_bank_TBank_Capacity_m m_Capacity;
	brl_bank_TBank_IsStatic_m m_IsStatic;
	brl_bank_TBank_Resize_i_m m_Resize_i;
	brl_bank_TBank_Resize_z_m m_Resize_z;
	brl_bank_TBank_Read_TTStreamll_m m_Read_TTStreamll;
	brl_bank_TBank_Write_TTStreamll_m m_Write_TTStreamll;
	brl_bank_TBank_PeekByte_i_m m_PeekByte_i;
	brl_bank_TBank_PeekByte_z_m m_PeekByte_z;
	brl_bank_TBank_PokeByte_ii_m m_PokeByte_ii;
	brl_bank_TBank_PokeByte_zi_m m_PokeByte_zi;
	brl_bank_TBank_PeekShort_i_m m_PeekShort_i;
	brl_bank_TBank_PeekShort_z_m m_PeekShort_z;
	brl_bank_TBank_PokeShort_ii_m m_PokeShort_ii;
	brl_bank_TBank_PokeShort_zi_m m_PokeShort_zi;
	brl_bank_TBank_PeekInt_i_m m_PeekInt_i;
	brl_bank_TBank_PeekInt_z_m m_PeekInt_z;
	brl_bank_TBank_PokeInt_ii_m m_PokeInt_ii;
	brl_bank_TBank_PokeInt_zi_m m_PokeInt_zi;
	brl_bank_TBank_PeekLong_i_m m_PeekLong_i;
	brl_bank_TBank_PeekLong_z_m m_PeekLong_z;
	brl_bank_TBank_PokeLong_il_m m_PokeLong_il;
	brl_bank_TBank_PokeLong_zl_m m_PokeLong_zl;
	brl_bank_TBank_PeekFloat_i_m m_PeekFloat_i;
	brl_bank_TBank_PeekFloat_z_m m_PeekFloat_z;
	brl_bank_TBank_PokeFloat_if_m m_PokeFloat_if;
	brl_bank_TBank_PokeFloat_zf_m m_PokeFloat_zf;
	brl_bank_TBank_PeekDouble_i_m m_PeekDouble_i;
	brl_bank_TBank_PeekDouble_z_m m_PeekDouble_z;
	brl_bank_TBank_PokeDouble_id_m m_PokeDouble_id;
	brl_bank_TBank_PokeDouble_zd_m m_PokeDouble_zd;
	brl_bank_TBank_Window_zz_m m_Window_zz;
	brl_bank_TBank_Window_ii_m m_Window_ii;
	brl_bank_TBank_Save_TObject_m m_Save_TObject;
	brl_bank_TBank_Load_TTBank_TObject_f f_Load_TTBank_TObject;
	brl_bank_TBank_Create_TTBank_z_f f_Create_TTBank_z;
	brl_bank_TBank_Create_TTBank_i_f f_Create_TTBank_i;
	brl_bank_TBank_CreateStatic_TTBank_pbz_f f_CreateStatic_TTBank_pbz;
	brl_bank_TBank_CreateStatic_TTBank_abz_f f_CreateStatic_TTBank_abz;
	brl_bank_TBank_CreateStatic_TTBank_pbi_f f_CreateStatic_TTBank_pbi;
	brl_bank_TBank_CreateStatic_TTBank_abi_f f_CreateStatic_TTBank_abi;
};

struct brl_bank_TBank_obj {
	struct BBClass_brl_bank_TBank* clas;
	BBBYTE* _brl_bank_tbank__buf;
	BBSIZET _brl_bank_tbank__size;
	BBSIZET _brl_bank_tbank__capacity;
	BBINT _brl_bank_tbank__static;
	BBINT _brl_bank_tbank__locked;
	struct brl_bank_TBank_obj* _brl_bank_tbank__source;
	BBARRAY _brl_bank_tbank__staticarrayref;
};
extern struct BBClass_brl_bank_TBank brl_bank_TBank;
struct brl_bank_TBank_obj* brl_bank_CreateBank(BBINT bbt_size);
struct brl_bank_TBank_obj* brl_bank_CreateStaticBank(BBBYTE* bbt_buf,BBINT bbt_size);
struct brl_bank_TBank_obj* brl_bank_CreateStaticBank2(BBARRAY bbt_buf,BBINT bbt_size);
struct brl_bank_TBank_obj* brl_bank_LoadBank(BBOBJECT bbt_url);
BBINT brl_bank_SaveBank(struct brl_bank_TBank_obj* bbt_bank,BBOBJECT bbt_url);
BBBYTE* brl_bank_BankBuf(struct brl_bank_TBank_obj* bbt_bank);
BBBYTE* brl_bank_LockBank(struct brl_bank_TBank_obj* bbt_bank);
void brl_bank_UnlockBank(struct brl_bank_TBank_obj* bbt_bank);
BBLONG brl_bank_BankSize(struct brl_bank_TBank_obj* bbt_bank);
BBLONG brl_bank_BankCapacity(struct brl_bank_TBank_obj* bbt_bank);
void brl_bank_ResizeBank(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_size);
void brl_bank_CopyBank(struct brl_bank_TBank_obj* bbt_src_bank,BBSIZET bbt_src_offset,struct brl_bank_TBank_obj* bbt_dst_bank,BBSIZET bbt_dst_offset,BBSIZET bbt_count);
BBINT brl_bank_PeekByte(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset);
BBINT brl_bank_PeekByte2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset);
void brl_bank_PokeByte(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset,BBINT bbt_value);
void brl_bank_PokeByte2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset,BBINT bbt_value);
BBINT brl_bank_PeekShort(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset);
BBINT brl_bank_PeekShort2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset);
void brl_bank_PokeShort(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset,BBINT bbt_value);
void brl_bank_PokeShort2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset,BBINT bbt_value);
BBINT brl_bank_PeekInt(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset);
BBINT brl_bank_PeekInt2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset);
void brl_bank_PokeInt(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset,BBINT bbt_value);
void brl_bank_PokeInt2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset,BBINT bbt_value);
BBLONG brl_bank_PeekLong(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset);
BBLONG brl_bank_PeekLong2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset);
void brl_bank_PokeLong(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset,BBLONG bbt_value);
void brl_bank_PokeLong2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset,BBLONG bbt_value);
BBFLOAT brl_bank_PeekFloat(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset);
BBFLOAT brl_bank_PeekFloat2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset);
void brl_bank_PokeFloat(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset,BBFLOAT bbt_value);
void brl_bank_PokeFloat2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset,BBFLOAT bbt_value);
BBDOUBLE brl_bank_PeekDouble(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset);
BBDOUBLE brl_bank_PeekDouble2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset);
void brl_bank_PokeDouble(struct brl_bank_TBank_obj* bbt_bank,BBSIZET bbt_offset,BBDOUBLE bbt_value);
void brl_bank_PokeDouble2(struct brl_bank_TBank_obj* bbt_bank,BBINT bbt_offset,BBDOUBLE bbt_value);
BBLONG brl_bank_ReadBank(struct brl_bank_TBank_obj* bbt_bank,struct brl_stream_TStream_obj* bbt_stream,BBSIZET bbt_offset,BBLONG bbt_count);
BBLONG brl_bank_ReadBank2(struct brl_bank_TBank_obj* bbt_bank,struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_offset,BBLONG bbt_count);
BBLONG brl_bank_WriteBank(struct brl_bank_TBank_obj* bbt_bank,struct brl_stream_TStream_obj* bbt_stream,BBSIZET bbt_offset,BBLONG bbt_count);
BBLONG brl_bank_WriteBank2(struct brl_bank_TBank_obj* bbt_bank,struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_offset,BBLONG bbt_count);

#endif