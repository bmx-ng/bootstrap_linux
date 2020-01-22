#ifndef BCC_BASE_CONFIGMAP_BMX_RELEASE_LINUX_X64_H
#define BCC_BASE_CONFIGMAP_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.linux.x64.h>
#include <brl.mod/map.mod/.bmx/map.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
int _bb_bcc_base_configmap();
struct _m_base_configmap_TConfigMap_obj;
void __m_base_configmap_TConfigMap_New(struct _m_base_configmap_TConfigMap_obj* o);
BBSTRING __m_base_configmap_TConfigMap_ToString(struct _m_base_configmap_TConfigMap_obj* o);
typedef struct _m_base_configmap_TConfigMap_obj* (*_m_base_configmap_TConfigMap_Init_S_m)(struct _m_base_configmap_TConfigMap_obj*,BBSTRING);
struct _m_base_configmap_TConfigMap_obj* __m_base_configmap_TConfigMap_Init_S(struct _m_base_configmap_TConfigMap_obj*,BBSTRING);
typedef BBINT (*_m_base_configmap_TConfigMap_Reset_m)(struct _m_base_configmap_TConfigMap_obj*);
BBINT __m_base_configmap_TConfigMap_Reset(struct _m_base_configmap_TConfigMap_obj*);
typedef struct _m_base_configmap_TConfigMap_obj* (*_m_base_configmap_TConfigMap_Copy_m)(struct _m_base_configmap_TConfigMap_obj*);
struct _m_base_configmap_TConfigMap_obj* __m_base_configmap_TConfigMap_Copy(struct _m_base_configmap_TConfigMap_obj*);
typedef struct _m_base_configmap_TConfigMap_obj* (*_m_base_configmap_TConfigMap_CreateMerged_TTConfigMap_aTTConfigMapi_f)(BBARRAY,BBINT);
struct _m_base_configmap_TConfigMap_obj* _m_base_configmap_TConfigMap_CreateMerged_TTConfigMap_aTTConfigMapi(BBARRAY,BBINT);
typedef BBINT (*_m_base_configmap_TConfigMap_LoadFromFile_S_m)(struct _m_base_configmap_TConfigMap_obj*,BBSTRING);
BBINT __m_base_configmap_TConfigMap_LoadFromFile_S(struct _m_base_configmap_TConfigMap_obj*,BBSTRING);
typedef struct _m_base_configmap_TConfigMap_obj* (*_m_base_configmap_TConfigMap_Add_STObject_m)(struct _m_base_configmap_TConfigMap_obj*,BBSTRING,BBOBJECT);
struct _m_base_configmap_TConfigMap_obj* __m_base_configmap_TConfigMap_Add_STObject(struct _m_base_configmap_TConfigMap_obj*,BBSTRING,BBOBJECT);
typedef struct _m_base_configmap_TConfigMap_obj* (*_m_base_configmap_TConfigMap_AddString_SS_m)(struct _m_base_configmap_TConfigMap_obj*,BBSTRING,BBSTRING);
struct _m_base_configmap_TConfigMap_obj* __m_base_configmap_TConfigMap_AddString_SS(struct _m_base_configmap_TConfigMap_obj*,BBSTRING,BBSTRING);
typedef struct _m_base_configmap_TConfigMap_obj* (*_m_base_configmap_TConfigMap_AddNumber_Sf_m)(struct _m_base_configmap_TConfigMap_obj*,BBSTRING,BBFLOAT);
struct _m_base_configmap_TConfigMap_obj* __m_base_configmap_TConfigMap_AddNumber_Sf(struct _m_base_configmap_TConfigMap_obj*,BBSTRING,BBFLOAT);
typedef BBOBJECT (*_m_base_configmap_TConfigMap_Get_STObject_m)(struct _m_base_configmap_TConfigMap_obj*,BBSTRING,BBOBJECT);
BBOBJECT __m_base_configmap_TConfigMap_Get_STObject(struct _m_base_configmap_TConfigMap_obj*,BBSTRING,BBOBJECT);
typedef BBSTRING (*_m_base_configmap_TConfigMap_GetString_SS_m)(struct _m_base_configmap_TConfigMap_obj*,BBSTRING,BBSTRING);
BBSTRING __m_base_configmap_TConfigMap_GetString_SS(struct _m_base_configmap_TConfigMap_obj*,BBSTRING,BBSTRING);
typedef BBINT (*_m_base_configmap_TConfigMap_GetInt_Si_m)(struct _m_base_configmap_TConfigMap_obj*,BBSTRING,BBINT);
BBINT __m_base_configmap_TConfigMap_GetInt_Si(struct _m_base_configmap_TConfigMap_obj*,BBSTRING,BBINT);
struct BBClass__m_base_configmap_TConfigMap {
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
	_m_base_configmap_TConfigMap_Init_S_m m_Init_S;
	_m_base_configmap_TConfigMap_Reset_m m_Reset;
	_m_base_configmap_TConfigMap_Copy_m m_Copy;
	_m_base_configmap_TConfigMap_CreateMerged_TTConfigMap_aTTConfigMapi_f f_CreateMerged_TTConfigMap_aTTConfigMapi;
	_m_base_configmap_TConfigMap_LoadFromFile_S_m m_LoadFromFile_S;
	_m_base_configmap_TConfigMap_Add_STObject_m m_Add_STObject;
	_m_base_configmap_TConfigMap_AddString_SS_m m_AddString_SS;
	_m_base_configmap_TConfigMap_AddNumber_Sf_m m_AddNumber_Sf;
	_m_base_configmap_TConfigMap_Get_STObject_m m_Get_STObject;
	_m_base_configmap_TConfigMap_GetString_SS_m m_GetString_SS;
	_m_base_configmap_TConfigMap_GetInt_Si_m m_GetInt_Si;
};

struct _m_base_configmap_TConfigMap_obj {
	struct BBClass__m_base_configmap_TConfigMap* clas;
	struct brl_map_TMap_obj* __m_base_configmap_tconfigmap_values;
	BBSTRING __m_base_configmap_tconfigmap_fileuri;
};
extern struct BBClass__m_base_configmap_TConfigMap _m_base_configmap_TConfigMap;

#endif
