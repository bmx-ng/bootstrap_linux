#include "bmk_modinfo.bmx.release.linux.x64.h"
static BBString _s2={
	&bbStringClass,
	1,
	{46}
};
static BBString _s0={
	&bbStringClass,
	1,
	{58}
};
static BBString _s7={
	&bbStringClass,
	8,
	{77,111,100,80,114,105,118,115}
};
static BBString _s5={
	&bbStringClass,
	9,
	{77,111,100,83,101,114,118,101,114}
};
static BBString _s6={
	&bbStringClass,
	6,
	{77,111,100,117,108,101}
};
static BBString _s3={
	&bbStringClass,
	8,
	{77,111,100,117,108,101,58,32}
};
static BBString _s4={
	&bbStringClass,
	7,
	{86,101,114,115,105,111,110}
};
static BBString _s1={
	&bbStringClass,
	8,
	{114,101,108,101,97,115,101,46}
};
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void __m_bmk_modinfo_TInfo_New(struct _m_bmk_modinfo_TInfo_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_bmk_modinfo_TInfo;
	o->__m_bmk_modinfo_tinfo_info = (struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
}
BBSTRING __m_bmk_modinfo_TInfo_Find_S(struct _m_bmk_modinfo_TInfo_obj* o,BBSTRING bbt_key){
	bbt_key=bbStringConcat(bbStringToLower((BBSTRING)bbt_key),&_s0);
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(o->__m_bmk_modinfo_tinfo_info )->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)o->__m_bmk_modinfo_tinfo_info );
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		BBSTRING bbt_t=((BBString *)bbObjectStringcast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_)));
		if(bbStringEquals(bbt_t, (&bbEmptyString))==1){
			continue;
		}
		if(bbStringEquals(bbStringSlice(bbStringToLower((BBSTRING)bbt_t),0,(bbt_key)->length), bbt_key)==1){
			return bbStringTrim((BBSTRING)bbStringSlice(bbt_t,(bbt_key)->length,(bbt_t)->length));
		}
	}
	return &bbEmptyString;
}
struct _m_bmk_modinfo_TModInfo_obj* __m_bmk_modinfo_TInfo_ReadFromStream_TTStream(struct _m_bmk_modinfo_TInfo_obj* o,struct brl_stream_TStream_obj* bbt_stream){
	while(!((bbt_stream)->clas->m_Eof((struct brl_stream_TIO_obj*)bbt_stream)!=0)){
		BBSTRING bbt_t=(bbt_stream)->clas->m_ReadLine((struct brl_stream_TStream_obj*)bbt_stream);
		if(!(bbt_t!= &bbEmptyString)){
			return (struct _m_bmk_modinfo_TModInfo_obj*)(&bbNullObject);
		}
		(o->__m_bmk_modinfo_tinfo_info )->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)o->__m_bmk_modinfo_tinfo_info ,(BBOBJECT)bbt_t);
	}
	return (struct _m_bmk_modinfo_TModInfo_obj*)(&bbNullObject);
}
struct BBDebugScope_4 _m_bmk_modinfo_TInfo_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TInfo",
	{
		{
			BBDEBUGDECL_FIELD,
			"info",
			":TList",
			.field_offset=offsetof(struct _m_bmk_modinfo_TInfo_obj,__m_bmk_modinfo_tinfo_info)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_bmk_modinfo_TInfo_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Find",
			"($)$",
			.var_address=(void*)&__m_bmk_modinfo_TInfo_Find_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadFromStream",
			"(:TStream):TModInfo",
			.var_address=(void*)&__m_bmk_modinfo_TInfo_ReadFromStream_TTStream
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_bmk_modinfo_TInfo _m_bmk_modinfo_TInfo={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_bmk_modinfo_TInfo_scope,
	sizeof(struct _m_bmk_modinfo_TInfo_obj),
	(void (*)(BBOBJECT))__m_bmk_modinfo_TInfo_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_bmk_modinfo_TInfo_obj,__m_bmk_modinfo_tinfo_info) - sizeof(void*) + sizeof(struct brl_linkedlist_TList_obj*)
	,0
	,__m_bmk_modinfo_TInfo_Find_S
	,__m_bmk_modinfo_TInfo_ReadFromStream_TTStream
};

void __m_bmk_modinfo_TModInfo_New(struct _m_bmk_modinfo_TModInfo_obj* o) {
	__m_bmk_modinfo_TInfo_New((struct _m_bmk_modinfo_TInfo_obj*)o);
	o->clas = &_m_bmk_modinfo_TModInfo;
	o->__m_bmk_modinfo_tmodinfo_name = &bbEmptyString;
	o->__m_bmk_modinfo_tmodinfo_version = .00000000f;
	o->__m_bmk_modinfo_tmodinfo_modprivs = &bbEmptyString;
	o->__m_bmk_modinfo_tmodinfo_modserver = &bbEmptyString;
	o->__m_bmk_modinfo_tmodinfo_serverinfo = (BBOBJECT)(&bbNullObject);
}
struct _m_bmk_modinfo_TModInfo_obj* _m_bmk_modinfo_TModInfo_CreateFromModule_TTModInfo_S(BBSTRING bbt_name){
	BBSTRING bbt_path=brl_maxutil_ModuleInterface(bbt_name,bbStringConcat(bbStringConcat(bbStringConcat(&_s1,(_m_bmk_ng_processor)->clas->m_Platform((struct _m_bmk_ng_TBMK_obj*)_m_bmk_ng_processor)),&_s2),(_m_bmk_ng_processor)->clas->m_CPU((struct _m_bmk_ng_TBMK_obj*)_m_bmk_ng_processor)));
	if(brl_filesystem_FileType(bbt_path)!=1){
		return (struct _m_bmk_modinfo_TModInfo_obj*)(&bbNullObject);
	}
	struct _m_bmk_modutil_TSourceFile_obj* bbt_src=(struct _m_bmk_modutil_TSourceFile_obj*)_m_bmk_modutil_ParseSourceFile(bbt_path);
	if(!(((BBObject*)bbt_src)!= &bbNullObject)){
		return (struct _m_bmk_modinfo_TModInfo_obj*)(&bbNullObject);
	}
	struct _m_bmk_modinfo_TModInfo_obj* bbt_modinfo=(struct _m_bmk_modinfo_TModInfo_obj*)(struct _m_bmk_modinfo_TModInfo_obj*)bbObjectNew((BBClass *)&_m_bmk_modinfo_TModInfo);
	bbt_modinfo->__m_bmk_modinfo_tmodinfo_name =bbt_name;
	bbt_modinfo->__m_bmk_modinfo_tinfo_info =(struct brl_linkedlist_TList_obj*)bbt_src->__m_bmk_modutil_tsourcefile_info ;
	struct brl_linkedlist_TList_obj* bbt_;
	(((struct brl_linkedlist_TList_obj*)(bbt_ = bbt_modinfo->__m_bmk_modinfo_tinfo_info ))->clas)->m_AddFirst_TObject((struct brl_linkedlist_TList_obj*)bbt_,(BBOBJECT)bbStringConcat(&_s3,bbt_name));
	bbt_modinfo->__m_bmk_modinfo_tmodinfo_version =bbStringToFloat((bbt_modinfo)->clas->m_Find_S((struct _m_bmk_modinfo_TInfo_obj*)bbt_modinfo,&_s4));
	bbt_modinfo->__m_bmk_modinfo_tmodinfo_modserver =(bbt_modinfo)->clas->m_Find_S((struct _m_bmk_modinfo_TInfo_obj*)bbt_modinfo,&_s5);
	return (struct _m_bmk_modinfo_TModInfo_obj*)bbt_modinfo;
}
struct _m_bmk_modinfo_TModInfo_obj* _m_bmk_modinfo_TModInfo_CreateFromStream_TTModInfo_TTStream(struct brl_stream_TStream_obj* bbt_stream){
	struct _m_bmk_modinfo_TModInfo_obj* bbt_modinfo=(struct _m_bmk_modinfo_TModInfo_obj*)(struct _m_bmk_modinfo_TModInfo_obj*)bbObjectNew((BBClass *)&_m_bmk_modinfo_TModInfo);
	(bbt_modinfo)->clas->m_ReadFromStream_TTStream((struct _m_bmk_modinfo_TInfo_obj*)bbt_modinfo,(struct brl_stream_TStream_obj*)bbt_stream);
	bbt_modinfo->__m_bmk_modinfo_tmodinfo_name =(bbt_modinfo)->clas->m_Find_S((struct _m_bmk_modinfo_TInfo_obj*)bbt_modinfo,&_s6);
	if(!(bbt_modinfo->__m_bmk_modinfo_tmodinfo_name != &bbEmptyString)){
		return (struct _m_bmk_modinfo_TModInfo_obj*)(&bbNullObject);
	}
	bbt_modinfo->__m_bmk_modinfo_tmodinfo_version =bbStringToFloat((bbt_modinfo)->clas->m_Find_S((struct _m_bmk_modinfo_TInfo_obj*)bbt_modinfo,&_s4));
	bbt_modinfo->__m_bmk_modinfo_tmodinfo_modprivs =(bbt_modinfo)->clas->m_Find_S((struct _m_bmk_modinfo_TInfo_obj*)bbt_modinfo,&_s7);
	bbt_modinfo->__m_bmk_modinfo_tmodinfo_modserver =(bbt_modinfo)->clas->m_Find_S((struct _m_bmk_modinfo_TInfo_obj*)bbt_modinfo,&_s5);
	return (struct _m_bmk_modinfo_TModInfo_obj*)bbt_modinfo;
}
struct BBDebugScope_8 _m_bmk_modinfo_TModInfo_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TModInfo",
	{
		{
			BBDEBUGDECL_FIELD,
			"name",
			"$",
			.field_offset=offsetof(struct _m_bmk_modinfo_TModInfo_obj,__m_bmk_modinfo_tmodinfo_name)
		},
		{
			BBDEBUGDECL_FIELD,
			"version",
			"f",
			.field_offset=offsetof(struct _m_bmk_modinfo_TModInfo_obj,__m_bmk_modinfo_tmodinfo_version)
		},
		{
			BBDEBUGDECL_FIELD,
			"modprivs",
			"$",
			.field_offset=offsetof(struct _m_bmk_modinfo_TModInfo_obj,__m_bmk_modinfo_tmodinfo_modprivs)
		},
		{
			BBDEBUGDECL_FIELD,
			"modserver",
			"$",
			.field_offset=offsetof(struct _m_bmk_modinfo_TModInfo_obj,__m_bmk_modinfo_tmodinfo_modserver)
		},
		{
			BBDEBUGDECL_FIELD,
			"serverinfo",
			":Object",
			.field_offset=offsetof(struct _m_bmk_modinfo_TModInfo_obj,__m_bmk_modinfo_tmodinfo_serverinfo)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_bmk_modinfo_TModInfo_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateFromModule",
			"($):TModInfo",
			.var_address=(void*)&_m_bmk_modinfo_TModInfo_CreateFromModule_TTModInfo_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateFromStream",
			"(:TStream):TModInfo",
			.var_address=(void*)&_m_bmk_modinfo_TModInfo_CreateFromStream_TTModInfo_TTStream
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_bmk_modinfo_TModInfo _m_bmk_modinfo_TModInfo={
	&_m_bmk_modinfo_TInfo,
	bbObjectFree,
	(BBDebugScope*)&_m_bmk_modinfo_TModInfo_scope,
	sizeof(struct _m_bmk_modinfo_TModInfo_obj),
	(void (*)(BBOBJECT))__m_bmk_modinfo_TModInfo_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_bmk_modinfo_TModInfo_obj,__m_bmk_modinfo_tmodinfo_serverinfo) - sizeof(void*) + sizeof(BBOBJECT)
	,0
	,__m_bmk_modinfo_TInfo_Find_S
	,__m_bmk_modinfo_TInfo_ReadFromStream_TTStream
	,_m_bmk_modinfo_TModInfo_CreateFromModule_TTModInfo_S
	,_m_bmk_modinfo_TModInfo_CreateFromStream_TTModInfo_TTStream
};

static int _bb_bmk_bmk_modinfo_inited = 0;
int _bb_bmk_bmk_modinfo(){
	if (!_bb_bmk_bmk_modinfo_inited) {
		_bb_bmk_bmk_modinfo_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_filesystem_filesystem();
		_bb_bmk_bmk_modutil();
		bbObjectRegisterType((BBCLASS)&_m_bmk_modinfo_TInfo);
		bbObjectRegisterType((BBCLASS)&_m_bmk_modinfo_TModInfo);
		return 0;
	}
	return 0;
}