#ifndef BMK_BMK_MAKE_BMX_RELEASE_LINUX_X64_H
#define BMK_BMK_MAKE_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
#include "bmk_modutil.bmx.release.linux.x64.h"
int _bb_bmk_bmk_make();
struct _m_bmk_make_TBuildManager_obj;
struct _m_bmk_make_TArcTask_obj;
extern BBSTRING _m_bmk_make_cc_opts;
extern BBSTRING _m_bmk_make_bcc_opts;
extern BBSTRING _m_bmk_make_cpp_opts;
extern BBSTRING _m_bmk_make_c_opts;
void __m_bmk_make_TBuildManager_New(struct _m_bmk_make_TBuildManager_obj* o);
typedef void (*_m_bmk_make_TBuildManager_MakeMods_TTListi_m)(struct _m_bmk_make_TBuildManager_obj*,struct brl_linkedlist_TList_obj*,BBINT);
void __m_bmk_make_TBuildManager_MakeMods_TTListi(struct _m_bmk_make_TBuildManager_obj*,struct brl_linkedlist_TList_obj*,BBINT);
typedef void (*_m_bmk_make_TBuildManager_MakeApp_Sii_m)(struct _m_bmk_make_TBuildManager_obj*,BBSTRING,BBINT,BBINT);
void __m_bmk_make_TBuildManager_MakeApp_Sii(struct _m_bmk_make_TBuildManager_obj*,BBSTRING,BBINT,BBINT);
typedef void (*_m_bmk_make_TBuildManager_DoBuild_ii_m)(struct _m_bmk_make_TBuildManager_obj*,BBINT,BBINT);
void __m_bmk_make_TBuildManager_DoBuild_ii(struct _m_bmk_make_TBuildManager_obj*,BBINT,BBINT);
typedef void (*_m_bmk_make_TBuildManager_CalculateDependencies_TTSourceFileiii_m)(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*,BBINT,BBINT,BBINT);
void __m_bmk_make_TBuildManager_CalculateDependencies_TTSourceFileiii(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*,BBINT,BBINT,BBINT);
typedef struct _m_bmk_modutil_TSourceFile_obj* (*_m_bmk_make_TBuildManager_GetSourceFile_Siii_m)(struct _m_bmk_make_TBuildManager_obj*,BBSTRING,BBINT,BBINT,BBINT);
struct _m_bmk_modutil_TSourceFile_obj* __m_bmk_make_TBuildManager_GetSourceFile_Siii(struct _m_bmk_make_TBuildManager_obj*,BBSTRING,BBINT,BBINT,BBINT);
typedef BBSTRING (*_m_bmk_make_TBuildManager_PPFix_S_m)(struct _m_bmk_make_TBuildManager_obj*,BBSTRING);
BBSTRING __m_bmk_make_TBuildManager_PPFix_S(struct _m_bmk_make_TBuildManager_obj*,BBSTRING);
typedef struct _m_bmk_modutil_TSourceFile_obj* (*_m_bmk_make_TBuildManager_GetISourceFile_SiSiSi_m)(struct _m_bmk_make_TBuildManager_obj*,BBSTRING,BBINT,BBSTRING,BBINT,BBSTRING,BBINT);
struct _m_bmk_modutil_TSourceFile_obj* __m_bmk_make_TBuildManager_GetISourceFile_SiSiSi(struct _m_bmk_make_TBuildManager_obj*,BBSTRING,BBINT,BBSTRING,BBINT,BBSTRING,BBINT);
typedef struct _m_bmk_modutil_TSourceFile_obj* (*_m_bmk_make_TBuildManager_GetMod_Si_m)(struct _m_bmk_make_TBuildManager_obj*,BBSTRING,BBINT);
struct _m_bmk_modutil_TSourceFile_obj* __m_bmk_make_TBuildManager_GetMod_Si(struct _m_bmk_make_TBuildManager_obj*,BBSTRING,BBINT);
typedef struct _m_bmk_modutil_TSourceFile_obj* (*_m_bmk_make_TBuildManager_CreateFasm2AsStage_TTSourceFile_m)(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*);
struct _m_bmk_modutil_TSourceFile_obj* __m_bmk_make_TBuildManager_CreateFasm2AsStage_TTSourceFile(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*);
typedef struct _m_bmk_modutil_TSourceFile_obj* (*_m_bmk_make_TBuildManager_CreateGenStage_TTSourceFile_m)(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*);
struct _m_bmk_modutil_TSourceFile_obj* __m_bmk_make_TBuildManager_CreateGenStage_TTSourceFile(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*);
typedef struct _m_bmk_modutil_TSourceFile_obj* (*_m_bmk_make_TBuildManager_CreateIncBin_TTSourceFileS_m)(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*,BBSTRING);
struct _m_bmk_modutil_TSourceFile_obj* __m_bmk_make_TBuildManager_CreateIncBin_TTSourceFileS(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*,BBSTRING);
typedef void (*_m_bmk_make_TBuildManager_GetIncBinFileList_TTSourceFile_m)(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*);
void __m_bmk_make_TBuildManager_GetIncBinFileList_TTSourceFile(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*);
typedef BBINT (*_m_bmk_make_TBuildManager_IncbinsDifference_TTListTTList_m)(struct _m_bmk_make_TBuildManager_obj*,struct brl_linkedlist_TList_obj*,struct brl_linkedlist_TList_obj*);
BBINT __m_bmk_make_TBuildManager_IncbinsDifference_TTListTTList(struct _m_bmk_make_TBuildManager_obj*,struct brl_linkedlist_TList_obj*,struct brl_linkedlist_TList_obj*);
typedef struct _m_bmk_modutil_TSourceFile_obj* (*_m_bmk_make_TBuildManager_CreateLinkStage_TTSourceFilei_m)(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*,BBINT);
struct _m_bmk_modutil_TSourceFile_obj* __m_bmk_make_TBuildManager_CreateLinkStage_TTSourceFilei(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*,BBINT);
typedef struct _m_bmk_modutil_TSourceFile_obj* (*_m_bmk_make_TBuildManager_CreateMergeStage_TTSourceFile_m)(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*);
struct _m_bmk_modutil_TSourceFile_obj* __m_bmk_make_TBuildManager_CreateMergeStage_TTSourceFile(struct _m_bmk_make_TBuildManager_obj*,struct _m_bmk_modutil_TSourceFile_obj*);
typedef struct brl_linkedlist_TList_obj* (*_m_bmk_make_TBuildManager_CalculateBatches_TTList_m)(struct _m_bmk_make_TBuildManager_obj*,struct brl_linkedlist_TList_obj*);
struct brl_linkedlist_TList_obj* __m_bmk_make_TBuildManager_CalculateBatches_TTList(struct _m_bmk_make_TBuildManager_obj*,struct brl_linkedlist_TList_obj*);
typedef BBSTRING (*_m_bmk_make_TBuildManager_ShowPct_i_m)(struct _m_bmk_make_TBuildManager_obj*,BBINT);
BBSTRING __m_bmk_make_TBuildManager_ShowPct_i(struct _m_bmk_make_TBuildManager_obj*,BBINT);
typedef BBSTRING (*_m_bmk_make_TBuildManager_FixPct_S_m)(struct _m_bmk_make_TBuildManager_obj*,BBSTRING);
BBSTRING __m_bmk_make_TBuildManager_FixPct_S(struct _m_bmk_make_TBuildManager_obj*,BBSTRING);
typedef BBSTRING (*_m_bmk_make_TBuildManager_CheckPath_SS_m)(struct _m_bmk_make_TBuildManager_obj*,BBSTRING,BBSTRING);
BBSTRING __m_bmk_make_TBuildManager_CheckPath_SS(struct _m_bmk_make_TBuildManager_obj*,BBSTRING,BBSTRING);
typedef void (*_m_bmk_make_TBuildManager_DoCallback_S_m)(struct _m_bmk_make_TBuildManager_obj*,BBSTRING);
void __m_bmk_make_TBuildManager_DoCallback_S(struct _m_bmk_make_TBuildManager_obj*,BBSTRING);
struct BBClass__m_bmk_make_TBuildManager {
	struct BBClass__m_bmk_ng_TCallback*  super;
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
	_m_bmk_make_TBuildManager_DoCallback_S_m m_DoCallback_S;
	_m_bmk_make_TBuildManager_MakeMods_TTListi_m m_MakeMods_TTListi;
	_m_bmk_make_TBuildManager_MakeApp_Sii_m m_MakeApp_Sii;
	_m_bmk_make_TBuildManager_DoBuild_ii_m m_DoBuild_ii;
	_m_bmk_make_TBuildManager_CalculateDependencies_TTSourceFileiii_m m_CalculateDependencies_TTSourceFileiii;
	_m_bmk_make_TBuildManager_GetSourceFile_Siii_m m_GetSourceFile_Siii;
	_m_bmk_make_TBuildManager_PPFix_S_m m_PPFix_S;
	_m_bmk_make_TBuildManager_GetISourceFile_SiSiSi_m m_GetISourceFile_SiSiSi;
	_m_bmk_make_TBuildManager_GetMod_Si_m m_GetMod_Si;
	_m_bmk_make_TBuildManager_CreateFasm2AsStage_TTSourceFile_m m_CreateFasm2AsStage_TTSourceFile;
	_m_bmk_make_TBuildManager_CreateGenStage_TTSourceFile_m m_CreateGenStage_TTSourceFile;
	_m_bmk_make_TBuildManager_CreateIncBin_TTSourceFileS_m m_CreateIncBin_TTSourceFileS;
	_m_bmk_make_TBuildManager_GetIncBinFileList_TTSourceFile_m m_GetIncBinFileList_TTSourceFile;
	_m_bmk_make_TBuildManager_IncbinsDifference_TTListTTList_m m_IncbinsDifference_TTListTTList;
	_m_bmk_make_TBuildManager_CreateLinkStage_TTSourceFilei_m m_CreateLinkStage_TTSourceFilei;
	_m_bmk_make_TBuildManager_CreateMergeStage_TTSourceFile_m m_CreateMergeStage_TTSourceFile;
	_m_bmk_make_TBuildManager_CalculateBatches_TTList_m m_CalculateBatches_TTList;
	_m_bmk_make_TBuildManager_ShowPct_i_m m_ShowPct_i;
	_m_bmk_make_TBuildManager_FixPct_S_m m_FixPct_S;
	_m_bmk_make_TBuildManager_CheckPath_SS_m m_CheckPath_SS;
};

struct _m_bmk_make_TBuildManager_obj {
	struct BBClass__m_bmk_make_TBuildManager* clas;
	struct brl_map_TMap_obj* __m_bmk_make_tbuildmanager_sources;
	BBINT __m_bmk_make_tbuildmanager_buildall;
	struct brl_linkedlist_TList_obj* __m_bmk_make_tbuildmanager_framework_mods;
	BBSTRING __m_bmk_make_tbuildmanager_app_iface;
};
extern struct BBClass__m_bmk_make_TBuildManager _m_bmk_make_TBuildManager;
void __m_bmk_make_TArcTask_New(struct _m_bmk_make_TArcTask_obj* o);
typedef struct _m_bmk_make_TArcTask_obj* (*_m_bmk_make_TArcTask_Create_TTSourceFileSTTList_m)(struct _m_bmk_make_TArcTask_obj*,struct _m_bmk_modutil_TSourceFile_obj*,BBSTRING,struct brl_linkedlist_TList_obj*);
struct _m_bmk_make_TArcTask_obj* __m_bmk_make_TArcTask_Create_TTSourceFileSTTList(struct _m_bmk_make_TArcTask_obj*,struct _m_bmk_modutil_TSourceFile_obj*,BBSTRING,struct brl_linkedlist_TList_obj*);
typedef BBOBJECT (*_m_bmk_make_TArcTask__CreateArc_TObject_TObject_f)(BBOBJECT);
BBOBJECT _m_bmk_make_TArcTask__CreateArc_TObject_TObject(BBOBJECT);
typedef BBOBJECT (*_m_bmk_make_TArcTask_CreateArc_m)(struct _m_bmk_make_TArcTask_obj*);
BBOBJECT __m_bmk_make_TArcTask_CreateArc(struct _m_bmk_make_TArcTask_obj*);
struct BBClass__m_bmk_make_TArcTask {
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
	_m_bmk_make_TArcTask_Create_TTSourceFileSTTList_m m_Create_TTSourceFileSTTList;
	_m_bmk_make_TArcTask__CreateArc_TObject_TObject_f f__CreateArc_TObject_TObject;
	_m_bmk_make_TArcTask_CreateArc_m m_CreateArc;
};

struct _m_bmk_make_TArcTask_obj {
	struct BBClass__m_bmk_make_TArcTask* clas;
	struct _m_bmk_modutil_TSourceFile_obj* __m_bmk_make_tarctask_m;
	BBSTRING __m_bmk_make_tarctask_path;
	struct brl_linkedlist_TList_obj* __m_bmk_make_tarctask_oobjs;
};
extern struct BBClass__m_bmk_make_TArcTask _m_bmk_make_TArcTask;
void _m_bmk_make_BeginMake();
void _m_bmk_make_CheckAndroidPaths();
void _m_bmk_make_ConfigureAndroidPaths();
void _m_bmk_make_ConfigureIOSPaths();
void _m_bmk_make_CheckNXPaths();
void _m_bmk_make_ConfigureNXPaths();

#endif
