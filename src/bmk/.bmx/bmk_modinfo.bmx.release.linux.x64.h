#ifndef BMK_BMK_MODINFO_BMX_RELEASE_LINUX_X64_H
#define BMK_BMK_MODINFO_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
#include "bmk_modutil.bmx.release.linux.x64.h"
int _bb_bmk_bmk_modinfo();
struct _m_bmk_modinfo_TInfo_obj;
struct _m_bmk_modinfo_TModInfo_obj;
void __m_bmk_modinfo_TInfo_New(struct _m_bmk_modinfo_TInfo_obj* o);
typedef BBSTRING (*_m_bmk_modinfo_TInfo_Find_S_m)(struct _m_bmk_modinfo_TInfo_obj*,BBSTRING);
BBSTRING __m_bmk_modinfo_TInfo_Find_S(struct _m_bmk_modinfo_TInfo_obj*,BBSTRING);
typedef struct _m_bmk_modinfo_TModInfo_obj* (*_m_bmk_modinfo_TInfo_ReadFromStream_TTStream_m)(struct _m_bmk_modinfo_TInfo_obj*,struct brl_stream_TStream_obj*);
struct _m_bmk_modinfo_TModInfo_obj* __m_bmk_modinfo_TInfo_ReadFromStream_TTStream(struct _m_bmk_modinfo_TInfo_obj*,struct brl_stream_TStream_obj*);
struct BBClass__m_bmk_modinfo_TInfo {
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
	_m_bmk_modinfo_TInfo_Find_S_m m_Find_S;
	_m_bmk_modinfo_TInfo_ReadFromStream_TTStream_m m_ReadFromStream_TTStream;
};

struct _m_bmk_modinfo_TInfo_obj {
	struct BBClass__m_bmk_modinfo_TInfo* clas;
	struct brl_linkedlist_TList_obj* __m_bmk_modinfo_tinfo_info;
};
extern struct BBClass__m_bmk_modinfo_TInfo _m_bmk_modinfo_TInfo;
void __m_bmk_modinfo_TModInfo_New(struct _m_bmk_modinfo_TModInfo_obj* o);
typedef struct _m_bmk_modinfo_TModInfo_obj* (*_m_bmk_modinfo_TModInfo_CreateFromModule_TTModInfo_S_f)(BBSTRING);
struct _m_bmk_modinfo_TModInfo_obj* _m_bmk_modinfo_TModInfo_CreateFromModule_TTModInfo_S(BBSTRING);
typedef struct _m_bmk_modinfo_TModInfo_obj* (*_m_bmk_modinfo_TModInfo_CreateFromStream_TTModInfo_TTStream_f)(struct brl_stream_TStream_obj*);
struct _m_bmk_modinfo_TModInfo_obj* _m_bmk_modinfo_TModInfo_CreateFromStream_TTModInfo_TTStream(struct brl_stream_TStream_obj*);
struct BBClass__m_bmk_modinfo_TModInfo {
	struct BBClass__m_bmk_modinfo_TInfo*  super;
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
	_m_bmk_modinfo_TInfo_Find_S_m m_Find_S;
	_m_bmk_modinfo_TInfo_ReadFromStream_TTStream_m m_ReadFromStream_TTStream;
	_m_bmk_modinfo_TModInfo_CreateFromModule_TTModInfo_S_f f_CreateFromModule_TTModInfo_S;
	_m_bmk_modinfo_TModInfo_CreateFromStream_TTModInfo_TTStream_f f_CreateFromStream_TTModInfo_TTStream;
};

struct _m_bmk_modinfo_TModInfo_obj {
	struct BBClass__m_bmk_modinfo_TModInfo* clas;
	struct brl_linkedlist_TList_obj* __m_bmk_modinfo_tinfo_info;
	BBSTRING __m_bmk_modinfo_tmodinfo_name;
	BBFLOAT __m_bmk_modinfo_tmodinfo_version;
	BBSTRING __m_bmk_modinfo_tmodinfo_modprivs;
	BBSTRING __m_bmk_modinfo_tmodinfo_modserver;
	BBOBJECT __m_bmk_modinfo_tmodinfo_serverinfo;
};
extern struct BBClass__m_bmk_modinfo_TModInfo _m_bmk_modinfo_TModInfo;

#endif
