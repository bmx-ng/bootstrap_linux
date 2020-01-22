#ifndef BMK_BMK_NG_UTILS_BMX_RELEASE_LINUX_X64_H
#define BMK_BMK_NG_UTILS_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.release.linux.x64.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.release.linux.x64.h>
#include <brl.mod/textstream.mod/.bmx/textstream.bmx.release.linux.x64.h>
#include "bmk_cores_linux.bmx.release.linux.x64.h"
int _bb_bmk_bmk_ng_utils();
struct _m_bmk_ng_utils_TMaxUtils_obj;
struct _m_bmk_ng_utils_TSystem_obj;
struct _m_bmk_ng_utils_TFileUtils_obj;
void __m_bmk_ng_utils_TMaxUtils_New(struct _m_bmk_ng_utils_TMaxUtils_obj* o);
typedef BBSTRING (*_m_bmk_ng_utils_TMaxUtils_BlitzMaxPath_m)(struct _m_bmk_ng_utils_TMaxUtils_obj*);
BBSTRING __m_bmk_ng_utils_TMaxUtils_BlitzMaxPath(struct _m_bmk_ng_utils_TMaxUtils_obj*);
typedef BBSTRING (*_m_bmk_ng_utils_TMaxUtils_ModulePath_S_m)(struct _m_bmk_ng_utils_TMaxUtils_obj*,BBSTRING);
BBSTRING __m_bmk_ng_utils_TMaxUtils_ModulePath_S(struct _m_bmk_ng_utils_TMaxUtils_obj*,BBSTRING);
typedef BBSTRING (*_m_bmk_ng_utils_TMaxUtils_ModuleIdent_S_m)(struct _m_bmk_ng_utils_TMaxUtils_obj*,BBSTRING);
BBSTRING __m_bmk_ng_utils_TMaxUtils_ModuleIdent_S(struct _m_bmk_ng_utils_TMaxUtils_obj*,BBSTRING);
typedef BBSTRING (*_m_bmk_ng_utils_TMaxUtils_ModuleSource_S_m)(struct _m_bmk_ng_utils_TMaxUtils_obj*,BBSTRING);
BBSTRING __m_bmk_ng_utils_TMaxUtils_ModuleSource_S(struct _m_bmk_ng_utils_TMaxUtils_obj*,BBSTRING);
typedef BBSTRING (*_m_bmk_ng_utils_TMaxUtils_ModuleArchive_SS_m)(struct _m_bmk_ng_utils_TMaxUtils_obj*,BBSTRING,BBSTRING);
BBSTRING __m_bmk_ng_utils_TMaxUtils_ModuleArchive_SS(struct _m_bmk_ng_utils_TMaxUtils_obj*,BBSTRING,BBSTRING);
typedef BBSTRING (*_m_bmk_ng_utils_TMaxUtils_ModuleInterface_SS_m)(struct _m_bmk_ng_utils_TMaxUtils_obj*,BBSTRING,BBSTRING);
BBSTRING __m_bmk_ng_utils_TMaxUtils_ModuleInterface_SS(struct _m_bmk_ng_utils_TMaxUtils_obj*,BBSTRING,BBSTRING);
struct BBClass__m_bmk_ng_utils_TMaxUtils {
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
	_m_bmk_ng_utils_TMaxUtils_BlitzMaxPath_m m_BlitzMaxPath;
	_m_bmk_ng_utils_TMaxUtils_ModulePath_S_m m_ModulePath_S;
	_m_bmk_ng_utils_TMaxUtils_ModuleIdent_S_m m_ModuleIdent_S;
	_m_bmk_ng_utils_TMaxUtils_ModuleSource_S_m m_ModuleSource_S;
	_m_bmk_ng_utils_TMaxUtils_ModuleArchive_SS_m m_ModuleArchive_SS;
	_m_bmk_ng_utils_TMaxUtils_ModuleInterface_SS_m m_ModuleInterface_SS;
};

struct _m_bmk_ng_utils_TMaxUtils_obj {
	struct BBClass__m_bmk_ng_utils_TMaxUtils* clas;
};
extern struct BBClass__m_bmk_ng_utils_TMaxUtils _m_bmk_ng_utils_TMaxUtils;
extern struct _m_bmk_ng_utils_TMaxUtils_obj* _m_bmk_ng_utils_utils;
void __m_bmk_ng_utils_TSystem_New(struct _m_bmk_ng_utils_TSystem_obj* o);
typedef BBSTRING (*_m_bmk_ng_utils_TSystem_FixPath_Si_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBINT);
BBSTRING __m_bmk_ng_utils_TSystem_FixPath_Si(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBINT);
typedef BBSTRING (*_m_bmk_ng_utils_TSystem_StripDir_S_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
BBSTRING __m_bmk_ng_utils_TSystem_StripDir_S(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
typedef BBSTRING (*_m_bmk_ng_utils_TSystem_StripExt_S_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
BBSTRING __m_bmk_ng_utils_TSystem_StripExt_S(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
typedef BBSTRING (*_m_bmk_ng_utils_TSystem_StripAll_S_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
BBSTRING __m_bmk_ng_utils_TSystem_StripAll_S(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
typedef BBSTRING (*_m_bmk_ng_utils_TSystem_StripSlash_S_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
BBSTRING __m_bmk_ng_utils_TSystem_StripSlash_S(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
typedef BBSTRING (*_m_bmk_ng_utils_TSystem_ExtractDir_S_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
BBSTRING __m_bmk_ng_utils_TSystem_ExtractDir_S(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
typedef BBSTRING (*_m_bmk_ng_utils_TSystem_ExtractExt_S_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
BBSTRING __m_bmk_ng_utils_TSystem_ExtractExt_S(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
typedef BBSTRING (*_m_bmk_ng_utils_TSystem_CurrentDir_m)(struct _m_bmk_ng_utils_TSystem_obj*);
BBSTRING __m_bmk_ng_utils_TSystem_CurrentDir(struct _m_bmk_ng_utils_TSystem_obj*);
typedef BBSTRING (*_m_bmk_ng_utils_TSystem_RealPath_S_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
BBSTRING __m_bmk_ng_utils_TSystem_RealPath_S(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
typedef BBINT (*_m_bmk_ng_utils_TSystem_FileType_S_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
BBINT __m_bmk_ng_utils_TSystem_FileType_S(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
typedef BBINT (*_m_bmk_ng_utils_TSystem_CreateFile_S_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
BBINT __m_bmk_ng_utils_TSystem_CreateFile_S(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
typedef BBINT (*_m_bmk_ng_utils_TSystem_CreateDir_Si_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBINT);
BBINT __m_bmk_ng_utils_TSystem_CreateDir_Si(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBINT);
typedef BBINT (*_m_bmk_ng_utils_TSystem_DeleteFile_S_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
BBINT __m_bmk_ng_utils_TSystem_DeleteFile_S(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
typedef BBINT (*_m_bmk_ng_utils_TSystem_RenameFile_SS_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBSTRING);
BBINT __m_bmk_ng_utils_TSystem_RenameFile_SS(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBSTRING);
typedef BBINT (*_m_bmk_ng_utils_TSystem_CopyFile_SS_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBSTRING);
BBINT __m_bmk_ng_utils_TSystem_CopyFile_SS(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBSTRING);
typedef BBINT (*_m_bmk_ng_utils_TSystem_CopyDir_SS_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBSTRING);
BBINT __m_bmk_ng_utils_TSystem_CopyDir_SS(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBSTRING);
typedef BBINT (*_m_bmk_ng_utils_TSystem_DeleteDir_Si_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBINT);
BBINT __m_bmk_ng_utils_TSystem_DeleteDir_Si(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBINT);
typedef BBINT (*_m_bmk_ng_utils_TSystem_ChangeDir_S_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
BBINT __m_bmk_ng_utils_TSystem_ChangeDir_S(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
typedef BBSTRING (*_m_bmk_ng_utils_TSystem_CurrentDate_S_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
BBSTRING __m_bmk_ng_utils_TSystem_CurrentDate_S(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING);
typedef BBSTRING (*_m_bmk_ng_utils_TSystem_CurrentTime_m)(struct _m_bmk_ng_utils_TSystem_obj*);
BBSTRING __m_bmk_ng_utils_TSystem_CurrentTime(struct _m_bmk_ng_utils_TSystem_obj*);
typedef void (*_m_bmk_ng_utils_TSystem_Notify_Si_m)(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBINT);
void __m_bmk_ng_utils_TSystem_Notify_Si(struct _m_bmk_ng_utils_TSystem_obj*,BBSTRING,BBINT);
struct BBClass__m_bmk_ng_utils_TSystem {
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
	_m_bmk_ng_utils_TSystem_FixPath_Si_m m_FixPath_Si;
	_m_bmk_ng_utils_TSystem_StripDir_S_m m_StripDir_S;
	_m_bmk_ng_utils_TSystem_StripExt_S_m m_StripExt_S;
	_m_bmk_ng_utils_TSystem_StripAll_S_m m_StripAll_S;
	_m_bmk_ng_utils_TSystem_StripSlash_S_m m_StripSlash_S;
	_m_bmk_ng_utils_TSystem_ExtractDir_S_m m_ExtractDir_S;
	_m_bmk_ng_utils_TSystem_ExtractExt_S_m m_ExtractExt_S;
	_m_bmk_ng_utils_TSystem_CurrentDir_m m_CurrentDir;
	_m_bmk_ng_utils_TSystem_RealPath_S_m m_RealPath_S;
	_m_bmk_ng_utils_TSystem_FileType_S_m m_FileType_S;
	_m_bmk_ng_utils_TSystem_CreateFile_S_m m_CreateFile_S;
	_m_bmk_ng_utils_TSystem_CreateDir_Si_m m_CreateDir_Si;
	_m_bmk_ng_utils_TSystem_DeleteFile_S_m m_DeleteFile_S;
	_m_bmk_ng_utils_TSystem_RenameFile_SS_m m_RenameFile_SS;
	_m_bmk_ng_utils_TSystem_CopyFile_SS_m m_CopyFile_SS;
	_m_bmk_ng_utils_TSystem_CopyDir_SS_m m_CopyDir_SS;
	_m_bmk_ng_utils_TSystem_DeleteDir_Si_m m_DeleteDir_Si;
	_m_bmk_ng_utils_TSystem_ChangeDir_S_m m_ChangeDir_S;
	_m_bmk_ng_utils_TSystem_CurrentDate_S_m m_CurrentDate_S;
	_m_bmk_ng_utils_TSystem_CurrentTime_m m_CurrentTime;
	_m_bmk_ng_utils_TSystem_Notify_Si_m m_Notify_Si;
};

struct _m_bmk_ng_utils_TSystem_obj {
	struct BBClass__m_bmk_ng_utils_TSystem* clas;
};
extern struct BBClass__m_bmk_ng_utils_TSystem _m_bmk_ng_utils_TSystem;
extern struct _m_bmk_ng_utils_TSystem_obj* _m_bmk_ng_utils_fsys;
void __m_bmk_ng_utils_TFileUtils_New(struct _m_bmk_ng_utils_TFileUtils_obj* o);
typedef BBINT (*_m_bmk_ng_utils_TFileUtils_SaveText_SS_m)(struct _m_bmk_ng_utils_TFileUtils_obj*,BBSTRING,BBSTRING);
BBINT __m_bmk_ng_utils_TFileUtils_SaveText_SS(struct _m_bmk_ng_utils_TFileUtils_obj*,BBSTRING,BBSTRING);
struct BBClass__m_bmk_ng_utils_TFileUtils {
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
	_m_bmk_ng_utils_TFileUtils_SaveText_SS_m m_SaveText_SS;
};

struct _m_bmk_ng_utils_TFileUtils_obj {
	struct BBClass__m_bmk_ng_utils_TFileUtils* clas;
};
extern struct BBClass__m_bmk_ng_utils_TFileUtils _m_bmk_ng_utils_TFileUtils;
extern struct _m_bmk_ng_utils_TFileUtils_obj* _m_bmk_ng_utils_futils;

#endif
