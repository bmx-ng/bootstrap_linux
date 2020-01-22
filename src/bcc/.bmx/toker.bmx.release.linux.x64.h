#ifndef BCC_TOKER_BMX_RELEASE_LINUX_X64_H
#define BCC_TOKER_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.linux.x64.h>
#include "config.bmx.release.linux.x64.h"
#include "type.bmx.release.linux.x64.h"
int _bb_bcc_toker();
struct _m_toker_TToker_obj;
void __m_toker_TToker_New(struct _m_toker_TToker_obj* o);
typedef struct _m_toker_TToker_obj* (*_m_toker_TToker_Create_SSii_m)(struct _m_toker_TToker_obj*,BBSTRING,BBSTRING,BBINT,BBINT);
struct _m_toker_TToker_obj* __m_toker_TToker_Create_SSii(struct _m_toker_TToker_obj*,BBSTRING,BBSTRING,BBINT,BBINT);
typedef void (*_m_toker_TToker_initKeywords_m)(struct _m_toker_TToker_obj*);
void __m_toker_TToker_initKeywords(struct _m_toker_TToker_obj*);
typedef void (*_m_toker_TToker_rollback_ii_m)(struct _m_toker_TToker_obj*,BBINT,BBINT);
void __m_toker_TToker_rollback_ii(struct _m_toker_TToker_obj*,BBINT,BBINT);
typedef struct _m_toker_TToker_obj* (*_m_toker_TToker_Copy_TTToker_m)(struct _m_toker_TToker_obj*,struct _m_toker_TToker_obj*);
struct _m_toker_TToker_obj* __m_toker_TToker_Copy_TTToker(struct _m_toker_TToker_obj*,struct _m_toker_TToker_obj*);
typedef BBSTRING (*_m_toker_TToker_Path_m)(struct _m_toker_TToker_obj*);
BBSTRING __m_toker_TToker_Path(struct _m_toker_TToker_obj*);
typedef BBINT (*_m_toker_TToker_Line_m)(struct _m_toker_TToker_obj*);
BBINT __m_toker_TToker_Line(struct _m_toker_TToker_obj*);
typedef BBSTRING (*_m_toker_TToker_NextToke_m)(struct _m_toker_TToker_obj*);
BBSTRING __m_toker_TToker_NextToke(struct _m_toker_TToker_obj*);
typedef BBSTRING (*_m_toker_TToker_Toke_m)(struct _m_toker_TToker_obj*);
BBSTRING __m_toker_TToker_Toke(struct _m_toker_TToker_obj*);
typedef BBINT (*_m_toker_TToker_TokeType_m)(struct _m_toker_TToker_obj*);
BBINT __m_toker_TToker_TokeType(struct _m_toker_TToker_obj*);
typedef BBINT (*_m_toker_TToker_SkipSpace_m)(struct _m_toker_TToker_obj*);
BBINT __m_toker_TToker_SkipSpace(struct _m_toker_TToker_obj*);
typedef void (*_m_toker_TToker_ParseRemStmt_m)(struct _m_toker_TToker_obj*);
void __m_toker_TToker_ParseRemStmt(struct _m_toker_TToker_obj*);
typedef BBINT (*_m_toker_TToker_CParse_S_m)(struct _m_toker_TToker_obj*,BBSTRING);
BBINT __m_toker_TToker_CParse_S(struct _m_toker_TToker_obj*,BBSTRING);
typedef void (*_m_toker_TToker_SkipEols_m)(struct _m_toker_TToker_obj*);
void __m_toker_TToker_SkipEols(struct _m_toker_TToker_obj*);
typedef void (*_m_toker_TToker_SkipToEOL_m)(struct _m_toker_TToker_obj*);
void __m_toker_TToker_SkipToEOL(struct _m_toker_TToker_obj*);
typedef BBINT (*_m_toker_TToker_TCHR_i_m)(struct _m_toker_TToker_obj*,BBINT);
BBINT __m_toker_TToker_TCHR_i(struct _m_toker_TToker_obj*,BBINT);
typedef BBSTRING (*_m_toker_TToker_TSTR_i_m)(struct _m_toker_TToker_obj*,BBINT);
BBSTRING __m_toker_TToker_TSTR_i(struct _m_toker_TToker_obj*,BBINT);
typedef BBSTRING (*_m_toker_TToker_Join_iiS_m)(struct _m_toker_TToker_obj*,BBINT,BBINT,BBSTRING);
BBSTRING __m_toker_TToker_Join_iiS(struct _m_toker_TToker_obj*,BBINT,BBINT,BBSTRING);
struct BBClass__m_toker_TToker {
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
	_m_toker_TToker_Create_SSii_m m_Create_SSii;
	_m_toker_TToker_initKeywords_m m_initKeywords;
	_m_toker_TToker_rollback_ii_m m_rollback_ii;
	_m_toker_TToker_Copy_TTToker_m m_Copy_TTToker;
	_m_toker_TToker_Path_m m_Path;
	_m_toker_TToker_Line_m m_Line;
	_m_toker_TToker_NextToke_m m_NextToke;
	_m_toker_TToker_Toke_m m_Toke;
	_m_toker_TToker_TokeType_m m_TokeType;
	_m_toker_TToker_SkipSpace_m m_SkipSpace;
	_m_toker_TToker_ParseRemStmt_m m_ParseRemStmt;
	_m_toker_TToker_CParse_S_m m_CParse_S;
	_m_toker_TToker_SkipEols_m m_SkipEols;
	_m_toker_TToker_SkipToEOL_m m_SkipToEOL;
	_m_toker_TToker_TCHR_i_m m_TCHR_i;
	_m_toker_TToker_TSTR_i_m m_TSTR_i;
	_m_toker_TToker_Join_iiS_m m_Join_iiS;
};

struct _m_toker_TToker_obj {
	struct BBClass__m_toker_TToker* clas;
	BBSTRING __m_toker_ttoker__path;
	BBINT __m_toker_ttoker__line;
	BBARRAY __m_toker_ttoker__lines;
	BBSTRING __m_toker_ttoker__source;
	BBSTRING __m_toker_ttoker__toke;
	BBSTRING __m_toker_ttoker__tokelower;
	BBINT __m_toker_ttoker__toketype;
	BBINT __m_toker_ttoker__tokepos;
	BBINT __m_toker_ttoker__lookingforendrem;
	BBINT __m_toker_ttoker__preprocess;
	BBINT __m_toker_ttoker__lineoffset;
	BBINT __m_toker_ttoker__lastindex;
	BBINT __m_toker_ttoker__lasttchr;
	BBSTRING __m_toker_ttoker__lasttstr;
};
extern struct BBClass__m_toker_TToker _m_toker_TToker;
extern struct brl_map_TMap_obj* _m_toker_TToker__keywords;

#endif
