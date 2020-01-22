#include "bmk_ng_utils.bmx.release.linux.x64.h"
static BBString _s4={
	&bbStringClass,
	2,
	{13,10}
};
static BBString _s3={
	&bbStringClass,
	8,
	{37,72,58,37,77,58,37,83}
};
static BBString _s2={
	&bbStringClass,
	8,
	{37,100,32,37,98,32,37,89}
};
static BBString _s5={
	&bbStringClass,
	6,
	{102,117,116,105,108,115}
};
static BBString _s1={
	&bbStringClass,
	3,
	{115,121,115}
};
static BBString _s0={
	&bbStringClass,
	5,
	{117,116,105,108,115}
};
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_22{int kind; const char *name; BBDebugDecl decls[23]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
void __m_bmk_ng_utils_TMaxUtils_New(struct _m_bmk_ng_utils_TMaxUtils_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_bmk_ng_utils_TMaxUtils;
	brl_maxlua_LuaRegisterObject((BBOBJECT)o,&_s0);
}
BBSTRING __m_bmk_ng_utils_TMaxUtils_BlitzMaxPath(struct _m_bmk_ng_utils_TMaxUtils_obj* o){
	return brl_maxutil_BlitzMaxPath();
}
BBSTRING __m_bmk_ng_utils_TMaxUtils_ModulePath_S(struct _m_bmk_ng_utils_TMaxUtils_obj* o,BBSTRING bbt_modid){
	return brl_maxutil_ModulePath(bbt_modid);
}
BBSTRING __m_bmk_ng_utils_TMaxUtils_ModuleIdent_S(struct _m_bmk_ng_utils_TMaxUtils_obj* o,BBSTRING bbt_modid){
	return brl_maxutil_ModuleIdent(bbt_modid);
}
BBSTRING __m_bmk_ng_utils_TMaxUtils_ModuleSource_S(struct _m_bmk_ng_utils_TMaxUtils_obj* o,BBSTRING bbt_modid){
	return brl_maxutil_ModuleSource(bbt_modid);
}
BBSTRING __m_bmk_ng_utils_TMaxUtils_ModuleArchive_SS(struct _m_bmk_ng_utils_TMaxUtils_obj* o,BBSTRING bbt_modid,BBSTRING bbt_mung){
	return brl_maxutil_ModuleArchive(bbt_modid,bbt_mung);
}
BBSTRING __m_bmk_ng_utils_TMaxUtils_ModuleInterface_SS(struct _m_bmk_ng_utils_TMaxUtils_obj* o,BBSTRING bbt_modid,BBSTRING bbt_mung){
	return brl_maxutil_ModuleInterface(bbt_modid,bbt_mung);
}
struct BBDebugScope_7 _m_bmk_ng_utils_TMaxUtils_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TMaxUtils",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_bmk_ng_utils_TMaxUtils_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"BlitzMaxPath",
			"()$",
			.var_address=(void*)&__m_bmk_ng_utils_TMaxUtils_BlitzMaxPath
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ModulePath",
			"($)$",
			.var_address=(void*)&__m_bmk_ng_utils_TMaxUtils_ModulePath_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ModuleIdent",
			"($)$",
			.var_address=(void*)&__m_bmk_ng_utils_TMaxUtils_ModuleIdent_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ModuleSource",
			"($)$",
			.var_address=(void*)&__m_bmk_ng_utils_TMaxUtils_ModuleSource_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ModuleArchive",
			"($,$)$",
			.var_address=(void*)&__m_bmk_ng_utils_TMaxUtils_ModuleArchive_SS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ModuleInterface",
			"($,$)$",
			.var_address=(void*)&__m_bmk_ng_utils_TMaxUtils_ModuleInterface_SS
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_bmk_ng_utils_TMaxUtils _m_bmk_ng_utils_TMaxUtils={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_bmk_ng_utils_TMaxUtils_scope,
	sizeof(struct _m_bmk_ng_utils_TMaxUtils_obj),
	(void (*)(BBOBJECT))__m_bmk_ng_utils_TMaxUtils_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,__m_bmk_ng_utils_TMaxUtils_BlitzMaxPath
	,__m_bmk_ng_utils_TMaxUtils_ModulePath_S
	,__m_bmk_ng_utils_TMaxUtils_ModuleIdent_S
	,__m_bmk_ng_utils_TMaxUtils_ModuleSource_S
	,__m_bmk_ng_utils_TMaxUtils_ModuleArchive_SS
	,__m_bmk_ng_utils_TMaxUtils_ModuleInterface_SS
};

struct _m_bmk_ng_utils_TMaxUtils_obj* _m_bmk_ng_utils_utils=(struct _m_bmk_ng_utils_TMaxUtils_obj*)(&bbNullObject);
void __m_bmk_ng_utils_TSystem_New(struct _m_bmk_ng_utils_TSystem_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_bmk_ng_utils_TSystem;
	brl_maxlua_LuaRegisterObject((BBOBJECT)o,&_s1);
}
BBSTRING __m_bmk_ng_utils_TSystem_FixPath_Si(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path,BBINT bbt_dirPath){
	BBSTRING bbt_p=bbt_path;
	brl_filesystem_FixPath(&bbt_p,bbt_dirPath);
	return bbt_p;
}
BBSTRING __m_bmk_ng_utils_TSystem_StripDir_S(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path){
	return brl_filesystem_StripDir(bbt_path);
}
BBSTRING __m_bmk_ng_utils_TSystem_StripExt_S(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path){
	return brl_filesystem_StripExt(bbt_path);
}
BBSTRING __m_bmk_ng_utils_TSystem_StripAll_S(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path){
	return brl_filesystem_StripAll(bbt_path);
}
BBSTRING __m_bmk_ng_utils_TSystem_StripSlash_S(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path){
	return brl_filesystem_StripSlash(bbt_path);
}
BBSTRING __m_bmk_ng_utils_TSystem_ExtractDir_S(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path){
	return brl_filesystem_ExtractDir(bbt_path);
}
BBSTRING __m_bmk_ng_utils_TSystem_ExtractExt_S(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path){
	return brl_filesystem_ExtractExt(bbt_path);
}
BBSTRING __m_bmk_ng_utils_TSystem_CurrentDir(struct _m_bmk_ng_utils_TSystem_obj* o){
	return brl_filesystem_CurrentDir();
}
BBSTRING __m_bmk_ng_utils_TSystem_RealPath_S(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path){
	return brl_filesystem_RealPath(bbt_path);
}
BBINT __m_bmk_ng_utils_TSystem_FileType_S(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path){
	return brl_filesystem_FileType(bbt_path);
}
BBINT __m_bmk_ng_utils_TSystem_CreateFile_S(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path){
	return brl_filesystem_CreateFile(bbt_path);
}
BBINT __m_bmk_ng_utils_TSystem_CreateDir_Si(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path,BBINT bbt_recurse){
	return brl_filesystem_CreateDir(bbt_path,bbt_recurse);
}
BBINT __m_bmk_ng_utils_TSystem_DeleteFile_S(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path){
	return brl_filesystem_DeleteFile(bbt_path);
}
BBINT __m_bmk_ng_utils_TSystem_RenameFile_SS(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_oldpath,BBSTRING bbt_newpath){
	return brl_filesystem_RenameFile(bbt_oldpath,bbt_newpath);
}
BBINT __m_bmk_ng_utils_TSystem_CopyFile_SS(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_src,BBSTRING bbt_dst){
	return brl_filesystem_CopyFile(bbt_src,bbt_dst);
}
BBINT __m_bmk_ng_utils_TSystem_CopyDir_SS(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_src,BBSTRING bbt_dst){
	return brl_filesystem_CopyDir(bbt_src,bbt_dst);
}
BBINT __m_bmk_ng_utils_TSystem_DeleteDir_Si(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path,BBINT bbt_recurse){
	return brl_filesystem_DeleteDir(bbt_path,bbt_recurse);
}
BBINT __m_bmk_ng_utils_TSystem_ChangeDir_S(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_path){
	return brl_filesystem_ChangeDir(bbt_path);
}
BBSTRING __m_bmk_ng_utils_TSystem_CurrentDate_S(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt__format){
	BBARRAY bbt_time=bbArrayNew1D("b", 256);
	BBARRAY bbt_buff=bbArrayNew1D("b", 256);
	time_((BBBYTE*)BBARRAYDATA(bbt_time,1));
	strftime_(((BBBYTE*)BBARRAYDATA(bbt_buff,1)),256,bbt__format,localtime_((BBBYTE*)BBARRAYDATA(bbt_time,1)));
	return bbStringFromCString((BBBYTE*)BBARRAYDATA(bbt_buff,1));
}
BBSTRING __m_bmk_ng_utils_TSystem_CurrentTime(struct _m_bmk_ng_utils_TSystem_obj* o){
	BBARRAY bbt_time=bbArrayNew1D("b", 256);
	BBARRAY bbt_buff=bbArrayNew1D("b", 256);
	time_((BBBYTE*)BBARRAYDATA(bbt_time,1));
	strftime_(((BBBYTE*)BBARRAYDATA(bbt_buff,1)),256,&_s3,localtime_((BBBYTE*)BBARRAYDATA(bbt_time,1)));
	return bbStringFromCString((BBBYTE*)BBARRAYDATA(bbt_buff,1));
}
void __m_bmk_ng_utils_TSystem_Notify_Si(struct _m_bmk_ng_utils_TSystem_obj* o,BBSTRING bbt_text,BBINT bbt_serious){
	bbWriteStdout(bbStringConcat(bbt_text,&_s4));
}
struct BBDebugScope_22 _m_bmk_ng_utils_TSystem_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSystem",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FixPath",
			"($,i)$",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_FixPath_Si
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"StripDir",
			"($)$",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_StripDir_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"StripExt",
			"($)$",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_StripExt_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"StripAll",
			"($)$",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_StripAll_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"StripSlash",
			"($)$",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_StripSlash_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ExtractDir",
			"($)$",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_ExtractDir_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ExtractExt",
			"($)$",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_ExtractExt_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CurrentDir",
			"()$",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_CurrentDir
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RealPath",
			"($)$",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_RealPath_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FileType",
			"($)i",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_FileType_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CreateFile",
			"($)i",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_CreateFile_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CreateDir",
			"($,i)i",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_CreateDir_Si
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"DeleteFile",
			"($)i",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_DeleteFile_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RenameFile",
			"($,$)i",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_RenameFile_SS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CopyFile",
			"($,$)i",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_CopyFile_SS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CopyDir",
			"($,$)i",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_CopyDir_SS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"DeleteDir",
			"($,i)i",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_DeleteDir_Si
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ChangeDir",
			"($)i",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_ChangeDir_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CurrentDate",
			"($)$",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_CurrentDate_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CurrentTime",
			"()$",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_CurrentTime
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Notify",
			"($,i)",
			.var_address=(void*)&__m_bmk_ng_utils_TSystem_Notify_Si
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_bmk_ng_utils_TSystem _m_bmk_ng_utils_TSystem={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_bmk_ng_utils_TSystem_scope,
	sizeof(struct _m_bmk_ng_utils_TSystem_obj),
	(void (*)(BBOBJECT))__m_bmk_ng_utils_TSystem_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,__m_bmk_ng_utils_TSystem_FixPath_Si
	,__m_bmk_ng_utils_TSystem_StripDir_S
	,__m_bmk_ng_utils_TSystem_StripExt_S
	,__m_bmk_ng_utils_TSystem_StripAll_S
	,__m_bmk_ng_utils_TSystem_StripSlash_S
	,__m_bmk_ng_utils_TSystem_ExtractDir_S
	,__m_bmk_ng_utils_TSystem_ExtractExt_S
	,__m_bmk_ng_utils_TSystem_CurrentDir
	,__m_bmk_ng_utils_TSystem_RealPath_S
	,__m_bmk_ng_utils_TSystem_FileType_S
	,__m_bmk_ng_utils_TSystem_CreateFile_S
	,__m_bmk_ng_utils_TSystem_CreateDir_Si
	,__m_bmk_ng_utils_TSystem_DeleteFile_S
	,__m_bmk_ng_utils_TSystem_RenameFile_SS
	,__m_bmk_ng_utils_TSystem_CopyFile_SS
	,__m_bmk_ng_utils_TSystem_CopyDir_SS
	,__m_bmk_ng_utils_TSystem_DeleteDir_Si
	,__m_bmk_ng_utils_TSystem_ChangeDir_S
	,__m_bmk_ng_utils_TSystem_CurrentDate_S
	,__m_bmk_ng_utils_TSystem_CurrentTime
	,__m_bmk_ng_utils_TSystem_Notify_Si
};

struct _m_bmk_ng_utils_TSystem_obj* _m_bmk_ng_utils_fsys=(struct _m_bmk_ng_utils_TSystem_obj*)(&bbNullObject);
void __m_bmk_ng_utils_TFileUtils_New(struct _m_bmk_ng_utils_TFileUtils_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_bmk_ng_utils_TFileUtils;
	brl_maxlua_LuaRegisterObject((BBOBJECT)o,&_s5);
}
BBINT __m_bmk_ng_utils_TFileUtils_SaveText_SS(struct _m_bmk_ng_utils_TFileUtils_obj* o,BBSTRING bbt_filename,BBSTRING bbt_text){
	{
		BBOBJECT ex;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				BBINT volatile bbt_=brl_textstream_SaveText(bbt_text,(BBOBJECT)bbt_filename,0,1);
				bbExLeave();
				return bbt_;
				bbExLeave();
			}
			break;
			case 1: {
				ex = bbExCatch();
				if (bbObjectDowncast((BBOBJECT)ex,(BBClass*)&brl_stream_TStreamWriteException) != &bbNullObject) {
					struct brl_stream_TStreamWriteException_obj* bbt_e=(struct brl_stream_TStreamWriteException_obj*)ex;
					return 0;
				} else {
					goto _rethrow;
				}
				goto _endtry;
			}
			break;
			_rethrow:;
			bbExThrow(ex);
		}
	}
	_endtry:;
	return 0;
}
struct BBDebugScope_2 _m_bmk_ng_utils_TFileUtils_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TFileUtils",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_bmk_ng_utils_TFileUtils_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SaveText",
			"($,$)i",
			.var_address=(void*)&__m_bmk_ng_utils_TFileUtils_SaveText_SS
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_bmk_ng_utils_TFileUtils _m_bmk_ng_utils_TFileUtils={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_bmk_ng_utils_TFileUtils_scope,
	sizeof(struct _m_bmk_ng_utils_TFileUtils_obj),
	(void (*)(BBOBJECT))__m_bmk_ng_utils_TFileUtils_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,__m_bmk_ng_utils_TFileUtils_SaveText_SS
};

struct _m_bmk_ng_utils_TFileUtils_obj* _m_bmk_ng_utils_futils=(struct _m_bmk_ng_utils_TFileUtils_obj*)(&bbNullObject);
static int _bb_bmk_bmk_ng_utils_inited = 0;
int _bb_bmk_bmk_ng_utils(){
	if (!_bb_bmk_bmk_ng_utils_inited) {
		_bb_bmk_bmk_ng_utils_inited = 1;
		GC_add_roots(&_m_bmk_ng_utils_utils, &_m_bmk_ng_utils_futils + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_filesystem_filesystem();
		__bb_brl_maxutil_maxutil();
		__bb_brl_maxlua_maxlua();
		__bb_brl_textstream_textstream();
		_bb_bmk_bmk_cores_linux();
		bbObjectRegisterType((BBCLASS)&_m_bmk_ng_utils_TMaxUtils);
		bbObjectRegisterType((BBCLASS)&_m_bmk_ng_utils_TSystem);
		bbObjectRegisterType((BBCLASS)&_m_bmk_ng_utils_TFileUtils);
		_m_bmk_ng_utils_utils=(struct _m_bmk_ng_utils_TMaxUtils_obj*)(struct _m_bmk_ng_utils_TMaxUtils_obj*)bbObjectAtomicNew((BBClass *)&_m_bmk_ng_utils_TMaxUtils);
		_m_bmk_ng_utils_fsys=(struct _m_bmk_ng_utils_TSystem_obj*)(struct _m_bmk_ng_utils_TSystem_obj*)bbObjectAtomicNew((BBClass *)&_m_bmk_ng_utils_TSystem);
		_m_bmk_ng_utils_futils=(struct _m_bmk_ng_utils_TFileUtils_obj*)(struct _m_bmk_ng_utils_TFileUtils_obj*)bbObjectAtomicNew((BBClass *)&_m_bmk_ng_utils_TFileUtils);
		return 0;
	}
	return 0;
}