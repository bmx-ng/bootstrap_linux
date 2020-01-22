#ifndef BMK_BMK_MODUTIL_BMX_RELEASE_LINUX_X64_H
#define BMK_BMK_MODUTIL_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.release.linux.x64.h>
#include <brl.mod/textstream.mod/.bmx/textstream.bmx.release.linux.x64.h>
#include "bmk_util.bmx.release.linux.x64.h"
#include "options_parser.bmx.release.linux.x64.h"
int _bb_bmk_bmk_modutil();
struct _m_bmk_modutil_TSourceFile_obj;
struct _m_bmk_modutil_TUserDef_obj;
void __m_bmk_modutil_TSourceFile_New(struct _m_bmk_modutil_TSourceFile_obj* o);
typedef BBINT (*_m_bmk_modutil_TSourceFile_AddModOpt_S_m)(struct _m_bmk_modutil_TSourceFile_obj*,BBSTRING);
BBINT __m_bmk_modutil_TSourceFile_AddModOpt_S(struct _m_bmk_modutil_TSourceFile_obj*,BBSTRING);
typedef BBINT (*_m_bmk_modutil_TSourceFile_MaxObjTime_m)(struct _m_bmk_modutil_TSourceFile_obj*);
BBINT __m_bmk_modutil_TSourceFile_MaxObjTime(struct _m_bmk_modutil_TSourceFile_obj*);
typedef BBINT (*_m_bmk_modutil_TSourceFile_GetObjs_TTList_m)(struct _m_bmk_modutil_TSourceFile_obj*,struct brl_linkedlist_TList_obj*);
BBINT __m_bmk_modutil_TSourceFile_GetObjs_TTList(struct _m_bmk_modutil_TSourceFile_obj*,struct brl_linkedlist_TList_obj*);
typedef BBINT (*_m_bmk_modutil_TSourceFile_SetRequiresBuild_i_m)(struct _m_bmk_modutil_TSourceFile_obj*,BBINT);
BBINT __m_bmk_modutil_TSourceFile_SetRequiresBuild_i(struct _m_bmk_modutil_TSourceFile_obj*,BBINT);
typedef BBINT (*_m_bmk_modutil_TSourceFile_MaxLinkTime_i_m)(struct _m_bmk_modutil_TSourceFile_obj*,BBINT);
BBINT __m_bmk_modutil_TSourceFile_MaxLinkTime_i(struct _m_bmk_modutil_TSourceFile_obj*,BBINT);
typedef BBINT (*_m_bmk_modutil_TSourceFile_MakeFatter_TTListS_m)(struct _m_bmk_modutil_TSourceFile_obj*,struct brl_linkedlist_TList_obj*,BBSTRING);
BBINT __m_bmk_modutil_TSourceFile_MakeFatter_TTListS(struct _m_bmk_modutil_TSourceFile_obj*,struct brl_linkedlist_TList_obj*,BBSTRING);
typedef BBINT (*_m_bmk_modutil_TSourceFile_GetLinks_TTListTTListiTTListTTList_m)(struct _m_bmk_modutil_TSourceFile_obj*,struct brl_linkedlist_TList_obj*,struct brl_linkedlist_TList_obj*,BBINT,struct brl_linkedlist_TList_obj*,struct brl_linkedlist_TList_obj*);
BBINT __m_bmk_modutil_TSourceFile_GetLinks_TTListTTListiTTListTTList(struct _m_bmk_modutil_TSourceFile_obj*,struct brl_linkedlist_TList_obj*,struct brl_linkedlist_TList_obj*,BBINT,struct brl_linkedlist_TList_obj*,struct brl_linkedlist_TList_obj*);
typedef BBINT (*_m_bmk_modutil_TSourceFile_MaxIfaceTime_m)(struct _m_bmk_modutil_TSourceFile_obj*);
BBINT __m_bmk_modutil_TSourceFile_MaxIfaceTime(struct _m_bmk_modutil_TSourceFile_obj*);
typedef BBINT (*_m_bmk_modutil_TSourceFile_CopyInfo_TTSourceFile_m)(struct _m_bmk_modutil_TSourceFile_obj*,struct _m_bmk_modutil_TSourceFile_obj*);
BBINT __m_bmk_modutil_TSourceFile_CopyInfo_TTSourceFile(struct _m_bmk_modutil_TSourceFile_obj*,struct _m_bmk_modutil_TSourceFile_obj*);
typedef BBSTRING (*_m_bmk_modutil_TSourceFile_GetSourcePath_m)(struct _m_bmk_modutil_TSourceFile_obj*);
BBSTRING __m_bmk_modutil_TSourceFile_GetSourcePath(struct _m_bmk_modutil_TSourceFile_obj*);
typedef BBSTRING (*_m_bmk_modutil_TSourceFile_GetIncludePaths_m)(struct _m_bmk_modutil_TSourceFile_obj*);
BBSTRING __m_bmk_modutil_TSourceFile_GetIncludePaths(struct _m_bmk_modutil_TSourceFile_obj*);
typedef BBINT (*_m_bmk_modutil_TSourceFile_AddIncludePath_S_m)(struct _m_bmk_modutil_TSourceFile_obj*,BBSTRING);
BBINT __m_bmk_modutil_TSourceFile_AddIncludePath_S(struct _m_bmk_modutil_TSourceFile_obj*,BBSTRING);
typedef BBINT (*_m_bmk_modutil_TSourceFile_CopyIncludePaths_TTOrderedMap_m)(struct _m_bmk_modutil_TSourceFile_obj*,struct _m_bmk_util_TOrderedMap_obj*);
BBINT __m_bmk_modutil_TSourceFile_CopyIncludePaths_TTOrderedMap(struct _m_bmk_modutil_TSourceFile_obj*,struct _m_bmk_util_TOrderedMap_obj*);
struct BBClass__m_bmk_modutil_TSourceFile {
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
	_m_bmk_modutil_TSourceFile_AddModOpt_S_m m_AddModOpt_S;
	_m_bmk_modutil_TSourceFile_MaxObjTime_m m_MaxObjTime;
	_m_bmk_modutil_TSourceFile_GetObjs_TTList_m m_GetObjs_TTList;
	_m_bmk_modutil_TSourceFile_SetRequiresBuild_i_m m_SetRequiresBuild_i;
	_m_bmk_modutil_TSourceFile_MaxLinkTime_i_m m_MaxLinkTime_i;
	_m_bmk_modutil_TSourceFile_MakeFatter_TTListS_m m_MakeFatter_TTListS;
	_m_bmk_modutil_TSourceFile_GetLinks_TTListTTListiTTListTTList_m m_GetLinks_TTListTTListiTTListTTList;
	_m_bmk_modutil_TSourceFile_MaxIfaceTime_m m_MaxIfaceTime;
	_m_bmk_modutil_TSourceFile_CopyInfo_TTSourceFile_m m_CopyInfo_TTSourceFile;
	_m_bmk_modutil_TSourceFile_GetSourcePath_m m_GetSourcePath;
	_m_bmk_modutil_TSourceFile_GetIncludePaths_m m_GetIncludePaths;
	_m_bmk_modutil_TSourceFile_AddIncludePath_S_m m_AddIncludePath_S;
	_m_bmk_modutil_TSourceFile_CopyIncludePaths_TTOrderedMap_m m_CopyIncludePaths_TTOrderedMap;
};

struct _m_bmk_modutil_TSourceFile_obj {
	struct BBClass__m_bmk_modutil_TSourceFile* clas;
	BBSTRING __m_bmk_modutil_tsourcefile_ext;
	BBINT __m_bmk_modutil_tsourcefile_exti;
	BBSTRING __m_bmk_modutil_tsourcefile_path;
	BBSTRING __m_bmk_modutil_tsourcefile_modid;
	BBSTRING __m_bmk_modutil_tsourcefile_framewk;
	struct brl_linkedlist_TList_obj* __m_bmk_modutil_tsourcefile_info;
	struct brl_linkedlist_TList_obj* __m_bmk_modutil_tsourcefile_modimports;
	struct brl_linkedlist_TList_obj* __m_bmk_modutil_tsourcefile_imports;
	struct brl_linkedlist_TList_obj* __m_bmk_modutil_tsourcefile_includes;
	struct brl_linkedlist_TList_obj* __m_bmk_modutil_tsourcefile_incbins;
	struct brl_linkedlist_TList_obj* __m_bmk_modutil_tsourcefile_pragmas;
	BBINT __m_bmk_modutil_tsourcefile_stage;
	struct brl_map_TMap_obj* __m_bmk_modutil_tsourcefile_deps;
	struct brl_map_TMap_obj* __m_bmk_modutil_tsourcefile_moddeps;
	BBINT __m_bmk_modutil_tsourcefile_processed;
	BBSTRING __m_bmk_modutil_tsourcefile_arc_path;
	BBSTRING __m_bmk_modutil_tsourcefile_iface_path;
	BBSTRING __m_bmk_modutil_tsourcefile_iface_path2;
	BBSTRING __m_bmk_modutil_tsourcefile_obj_path;
	BBINT __m_bmk_modutil_tsourcefile_time;
	BBINT __m_bmk_modutil_tsourcefile_obj_time;
	BBINT __m_bmk_modutil_tsourcefile_arc_time;
	BBINT __m_bmk_modutil_tsourcefile_asm_time;
	BBINT __m_bmk_modutil_tsourcefile_iface_time;
	BBINT __m_bmk_modutil_tsourcefile_gen_time;
	BBINT __m_bmk_modutil_tsourcefile_requiresbuild;
	BBINT __m_bmk_modutil_tsourcefile_dontbuild;
	struct brl_linkedlist_TList_obj* __m_bmk_modutil_tsourcefile_depslist;
	struct brl_linkedlist_TList_obj* __m_bmk_modutil_tsourcefile_ext_files;
	BBSTRING __m_bmk_modutil_tsourcefile_merge_path;
	BBINT __m_bmk_modutil_tsourcefile_merge_time;
	BBSTRING __m_bmk_modutil_tsourcefile_cc_opts;
	BBSTRING __m_bmk_modutil_tsourcefile_bcc_opts;
	BBSTRING __m_bmk_modutil_tsourcefile_cpp_opts;
	BBSTRING __m_bmk_modutil_tsourcefile_c_opts;
	struct _m_bmk_util_TModOpt_obj* __m_bmk_modutil_tsourcefile_mod_opts;
	struct _m_bmk_util_TOrderedMap_obj* __m_bmk_modutil_tsourcefile_includepaths;
	BBSTRING __m_bmk_modutil_tsourcefile_includepathstring;
	BBINT __m_bmk_modutil_tsourcefile_pct;
	struct brl_linkedlist_TList_obj* __m_bmk_modutil_tsourcefile_linkscache;
	struct brl_linkedlist_TList_obj* __m_bmk_modutil_tsourcefile_optscache;
	BBINT __m_bmk_modutil_tsourcefile_lastcache;
	BBINT __m_bmk_modutil_tsourcefile_donelinks;
	BBINT __m_bmk_modutil_tsourcefile_maxlinktimecache;
	BBINT __m_bmk_modutil_tsourcefile_maxifacetimecache;
	BBINT __m_bmk_modutil_tsourcefile_isinclude;
	BBSTRING __m_bmk_modutil_tsourcefile_owner_path;
};
extern struct BBClass__m_bmk_modutil_TSourceFile _m_bmk_modutil_TSourceFile;
void __m_bmk_modutil_TUserDef_New(struct _m_bmk_modutil_TUserDef_obj* o);
struct BBClass__m_bmk_modutil_TUserDef {
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
};

struct _m_bmk_modutil_TUserDef_obj {
	struct BBClass__m_bmk_modutil_TUserDef* clas;
	BBSTRING __m_bmk_modutil_tuserdef_name;
	BBINT __m_bmk_modutil_tuserdef_value;
};
extern struct BBClass__m_bmk_modutil_TUserDef _m_bmk_modutil_TUserDef;
BBINT _m_bmk_modutil_ValidSourceExt(BBINT bbt_ext);
BBARRAY _m_bmk_modutil_GetUserDefs();
BBINT _m_bmk_modutil_SetCompilerValues();
struct _m_bmk_modutil_TSourceFile_obj* _m_bmk_modutil_ParseSourceFile(BBSTRING bbt_path);
struct _m_bmk_modutil_TSourceFile_obj* _m_bmk_modutil_ParseISourceFile(BBSTRING bbt_path);
BBINT _m_bmk_modutil_ValidatePlatformArchitecture();

#endif
