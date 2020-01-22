#include "base.configmap.bmx.release.linux.x64.h"
static BBString _s5={
	&bbStringClass,
	1,
	{10}
};
static BBString _s8={
	&bbStringClass,
	5,
	{32,32,45,62,32}
};
static BBString _s9={
	&bbStringClass,
	3,
	{32,58,32}
};
static BBString _s1={
	&bbStringClass,
	14,
	{34,32,102,111,114,32,114,101,97,100,105,110,103,46}
};
static BBString _s2={
	&bbStringClass,
	1,
	{35}
};
static BBString _s6={
	&bbStringClass,
	9,
	{45,62,32,102,105,108,101,58,32}
};
static BBString _s11={
	&bbStringClass,
	9,
	{45,62,32,107,101,121,115,58,10}
};
static BBString _s3={
	&bbStringClass,
	1,
	{61}
};
static BBString _s0={
	&bbStringClass,
	28,
	{69,82,82,79,82,58,32,99,111,117,108,100,32,110,111,116,32
	,111,112,101,110,32,102,105,108,101,32,34}
};
static BBString _s10={
	&bbStringClass,
	11,
	{84,67,111,110,102,105,103,77,97,112,10}
};
struct BBDebugScope_15{int kind; const char *name; BBDebugDecl decls[16]; };
void __m_base_configmap_TConfigMap_New(struct _m_base_configmap_TConfigMap_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_base_configmap_TConfigMap;
	o->__m_base_configmap_tconfigmap_values = (struct brl_map_TMap_obj*)brl_map_CreateMap();
	o->__m_base_configmap_tconfigmap_fileuri = &bbEmptyString;
}
struct _m_base_configmap_TConfigMap_obj* __m_base_configmap_TConfigMap_Init_S(struct _m_base_configmap_TConfigMap_obj* o,BBSTRING bbt_configFile){
	if(bbt_configFile!=&bbEmptyString){
		((struct _m_base_configmap_TConfigMap_obj*)o)->clas->m_LoadFromFile_S((struct _m_base_configmap_TConfigMap_obj*)o,bbt_configFile);
	}
	return (struct _m_base_configmap_TConfigMap_obj*)o;
}
BBINT __m_base_configmap_TConfigMap_Reset(struct _m_base_configmap_TConfigMap_obj* o){
	(o->__m_base_configmap_tconfigmap_values )->clas->m_Clear((struct brl_map_TMap_obj*)o->__m_base_configmap_tconfigmap_values );
	return 1;
}
struct _m_base_configmap_TConfigMap_obj* __m_base_configmap_TConfigMap_Copy(struct _m_base_configmap_TConfigMap_obj* o){
	struct _m_base_configmap_TConfigMap_obj* bbt_copyObj=(struct _m_base_configmap_TConfigMap_obj*)(struct _m_base_configmap_TConfigMap_obj*)bbObjectNew((BBClass *)&_m_base_configmap_TConfigMap);
	struct brl_map_TMapEnumerator_obj* volatile bbt_=(struct brl_map_TMapEnumerator_obj*)(o->__m_base_configmap_tconfigmap_values )->clas->m_Keys((struct brl_map_TMap_obj*)o->__m_base_configmap_tconfigmap_values );
	struct brl_map_TNodeEnumerator_obj* bbt_2=(struct brl_map_TNodeEnumerator_obj*)(bbt_)->clas->m_ObjectEnumerator((struct brl_map_TMapEnumerator_obj*)bbt_);
	while((bbt_2)->clas->m_HasNext((struct brl_map_TNodeEnumerator_obj*)bbt_2)!=0){
		BBSTRING bbt_key=((BBString *)bbObjectStringcast((BBOBJECT)(bbt_2)->clas->m_NextObject((struct brl_map_TNodeEnumerator_obj*)bbt_2)));
		if(bbStringEquals(bbt_key, (&bbEmptyString))==1){
			continue;
		}
		(bbt_copyObj)->clas->m_Add_STObject((struct _m_base_configmap_TConfigMap_obj*)bbt_copyObj,bbt_key,(BBOBJECT)((struct _m_base_configmap_TConfigMap_obj*)o)->clas->m_Get_STObject((struct _m_base_configmap_TConfigMap_obj*)o,bbt_key,(BBOBJECT)&bbNullObject));
	}
	return (struct _m_base_configmap_TConfigMap_obj*)bbt_copyObj;
}
struct _m_base_configmap_TConfigMap_obj* _m_base_configmap_TConfigMap_CreateMerged_TTConfigMap_aTTConfigMapi(BBARRAY bbt_configs,BBINT bbt_reversed){
	if((bbt_configs->scales[0])==0){
		return (struct _m_base_configmap_TConfigMap_obj*)&bbNullObject;
	}
	if(bbt_reversed!=0){
		BBARRAY bbt_newConfigs=(&bbEmptyArray);
		{
			BBINT bbt_i=1;
			BBINT bbt_=(bbt_configs->scales[0]);
			for(;(bbt_i<=bbt_);bbt_i=(bbt_i+1)){
				struct _m_base_configmap_TConfigMap_obj* bbt_2[]={((struct _m_base_configmap_TConfigMap_obj**)BBARRAYDATA(bbt_configs,1))[((BBUINT)((bbt_configs->scales[0])-bbt_i))]};
				BBARRAY bbt_3 = bbArrayFromData(":TConfigMap",1,bbt_2);
				bbt_newConfigs=bbArrayConcat(":TConfigMap",bbt_newConfigs,bbt_3);
			}
		}
		bbt_configs=bbt_newConfigs;
	}
	struct _m_base_configmap_TConfigMap_obj* bbt_4;
	struct _m_base_configmap_TConfigMap_obj* bbt_result=(struct _m_base_configmap_TConfigMap_obj*)((bbt_4 = ((struct _m_base_configmap_TConfigMap_obj**)BBARRAYDATA(bbt_configs,1))[0U])->clas)->m_Copy((struct _m_base_configmap_TConfigMap_obj*)bbt_4);
	{
		BBINT bbt_i2=1;
		BBINT bbt_5=((bbt_configs->scales[0])-1);
		for(;(bbt_i2<=bbt_5);bbt_i2=(bbt_i2+1)){
			struct brl_map_TMap_obj* bbt_7;
			struct brl_map_TMapEnumerator_obj* volatile bbt_6=(struct brl_map_TMapEnumerator_obj*)(((struct brl_map_TMap_obj*)(bbt_7 = ((struct _m_base_configmap_TConfigMap_obj**)BBARRAYDATA(bbt_configs,1))[((BBUINT)bbt_i2)]->__m_base_configmap_tconfigmap_values ))->clas)->m_Keys((struct brl_map_TMap_obj*)bbt_7);
			struct brl_map_TNodeEnumerator_obj* bbt_8=(struct brl_map_TNodeEnumerator_obj*)(bbt_6)->clas->m_ObjectEnumerator((struct brl_map_TMapEnumerator_obj*)bbt_6);
			while((bbt_8)->clas->m_HasNext((struct brl_map_TNodeEnumerator_obj*)bbt_8)!=0){
				BBSTRING bbt_key=((BBString *)bbObjectStringcast((BBOBJECT)(bbt_8)->clas->m_NextObject((struct brl_map_TNodeEnumerator_obj*)bbt_8)));
				if(bbStringEquals(bbt_key, (&bbEmptyString))==1){
					continue;
				}
				struct _m_base_configmap_TConfigMap_obj* bbt_9;
				BBOBJECT bbt_value=(BBOBJECT)((bbt_9 = ((struct _m_base_configmap_TConfigMap_obj**)BBARRAYDATA(bbt_configs,1))[((BBUINT)bbt_i2)])->clas)->m_Get_STObject((struct _m_base_configmap_TConfigMap_obj*)bbt_9,bbt_key,(BBOBJECT)&bbNullObject);
				if(((BBObject*)bbt_value)!= &bbNullObject){
					(bbt_result)->clas->m_Add_STObject((struct _m_base_configmap_TConfigMap_obj*)bbt_result,bbt_key,(BBOBJECT)bbt_value);
				}
			}
		}
	}
	return (struct _m_base_configmap_TConfigMap_obj*)bbt_result;
}
BBINT __m_base_configmap_TConfigMap_LoadFromFile_S(struct _m_base_configmap_TConfigMap_obj* o,BBSTRING bbt_fileUri){
	if(brl_filesystem_FileSize(bbt_fileUri)<0LL){
		return 0;
	}
	o->__m_base_configmap_tconfigmap_fileuri =bbt_fileUri;
	((struct _m_base_configmap_TConfigMap_obj*)o)->clas->m_Reset((struct _m_base_configmap_TConfigMap_obj*)o);
	struct brl_stream_TStream_obj* bbt_file=(struct brl_stream_TStream_obj*)brl_filesystem_ReadFile((BBOBJECT)bbt_fileUri);
	if(!(((BBObject*)bbt_file)!= &bbNullObject)){
		brl_standardio_Print(bbStringConcat(bbStringConcat(&_s0,bbt_fileUri),&_s1));
		return 0;
	}
	BBSTRING bbt_line=&bbEmptyString;
	BBINT bbt_splitPos=0;
	BBSTRING bbt_key=&bbEmptyString;
	BBSTRING bbt_value=&bbEmptyString;
	while(!(brl_stream_Eof((struct brl_stream_TStream_obj*)bbt_file)!=0)){
		bbt_line=brl_stream_ReadLine((struct brl_stream_TStream_obj*)bbt_file);
		if(bbStringFind((BBSTRING)bbStringTrim((BBSTRING)bbt_line),&_s2,0)==0){
			continue;
		}
		bbt_splitPos=bbStringFind((BBSTRING)bbt_line,&_s3,0);
		if(bbt_splitPos<0){
			continue;
		}
		bbt_key=bbStringTrim((BBSTRING)bbStringSlice(bbt_line,0,bbt_splitPos));
		bbt_value=bbStringTrim((BBSTRING)bbStringSlice(bbt_line,(bbt_splitPos+1),(bbt_line)->length));
		((struct _m_base_configmap_TConfigMap_obj*)o)->clas->m_Add_STObject((struct _m_base_configmap_TConfigMap_obj*)o,bbt_key,(BBOBJECT)bbt_value);
	}
	(bbt_file)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_file);
	return 1;
}
BBSTRING __m_base_configmap_TConfigMap_ToString(struct _m_base_configmap_TConfigMap_obj* o){
	BBSTRING bbt_result=&_s10;
	bbt_result=bbStringConcat(bbt_result,(bbStringConcat(bbStringConcat(&_s6,o->__m_base_configmap_tconfigmap_fileuri ),&_s5)));
	bbt_result=bbStringConcat(bbt_result,&_s11);
	struct brl_map_TMapEnumerator_obj* volatile bbt_=(struct brl_map_TMapEnumerator_obj*)(o->__m_base_configmap_tconfigmap_values )->clas->m_Keys((struct brl_map_TMap_obj*)o->__m_base_configmap_tconfigmap_values );
	struct brl_map_TNodeEnumerator_obj* bbt_2=(struct brl_map_TNodeEnumerator_obj*)(bbt_)->clas->m_ObjectEnumerator((struct brl_map_TMapEnumerator_obj*)bbt_);
	while((bbt_2)->clas->m_HasNext((struct brl_map_TNodeEnumerator_obj*)bbt_2)!=0){
		BBSTRING bbt_key=((BBString *)bbObjectStringcast((BBOBJECT)(bbt_2)->clas->m_NextObject((struct brl_map_TNodeEnumerator_obj*)bbt_2)));
		if(bbStringEquals(bbt_key, (&bbEmptyString))==1){
			continue;
		}
		bbt_result=bbStringConcat(bbt_result,(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s8,bbt_key),&_s9),((BBString *)bbObjectStringcast((BBOBJECT)(o->__m_base_configmap_tconfigmap_values )->clas->m_ValueForKey_TObject((struct brl_map_TMap_obj*)o->__m_base_configmap_tconfigmap_values ,(BBOBJECT)bbt_key)))),&_s5)));
	}
	return bbt_result;
}
struct _m_base_configmap_TConfigMap_obj* __m_base_configmap_TConfigMap_Add_STObject(struct _m_base_configmap_TConfigMap_obj* o,BBSTRING bbt_key,BBOBJECT bbt_data){
	(o->__m_base_configmap_tconfigmap_values )->clas->m_Insert_TObjectTObject((struct brl_map_TMap_obj*)o->__m_base_configmap_tconfigmap_values ,(BBOBJECT)bbt_key,(BBOBJECT)bbt_data);
	return (struct _m_base_configmap_TConfigMap_obj*)o;
}
struct _m_base_configmap_TConfigMap_obj* __m_base_configmap_TConfigMap_AddString_SS(struct _m_base_configmap_TConfigMap_obj* o,BBSTRING bbt_key,BBSTRING bbt_data){
	((struct _m_base_configmap_TConfigMap_obj*)o)->clas->m_Add_STObject((struct _m_base_configmap_TConfigMap_obj*)o,bbt_key,(BBOBJECT)bbt_data);
	return (struct _m_base_configmap_TConfigMap_obj*)o;
}
struct _m_base_configmap_TConfigMap_obj* __m_base_configmap_TConfigMap_AddNumber_Sf(struct _m_base_configmap_TConfigMap_obj* o,BBSTRING bbt_key,BBFLOAT bbt_data){
	((struct _m_base_configmap_TConfigMap_obj*)o)->clas->m_Add_STObject((struct _m_base_configmap_TConfigMap_obj*)o,bbt_key,(BBOBJECT)bbStringFromFloat(bbt_data));
	return (struct _m_base_configmap_TConfigMap_obj*)o;
}
BBOBJECT __m_base_configmap_TConfigMap_Get_STObject(struct _m_base_configmap_TConfigMap_obj* o,BBSTRING bbt_key,BBOBJECT bbt_defaultValue){
	BBOBJECT bbt_result=(BBOBJECT)(o->__m_base_configmap_tconfigmap_values )->clas->m_ValueForKey_TObject((struct brl_map_TMap_obj*)o->__m_base_configmap_tconfigmap_values ,(BBOBJECT)bbt_key);
	if(((BBObject*)bbt_result)!= &bbNullObject){
		return (BBOBJECT)bbt_result;
	}
	return (BBOBJECT)bbt_defaultValue;
}
BBSTRING __m_base_configmap_TConfigMap_GetString_SS(struct _m_base_configmap_TConfigMap_obj* o,BBSTRING bbt_key,BBSTRING bbt_defaultValue){
	BBOBJECT bbt_result=(BBOBJECT)((struct _m_base_configmap_TConfigMap_obj*)o)->clas->m_Get_STObject((struct _m_base_configmap_TConfigMap_obj*)o,bbt_key,(BBOBJECT)&bbNullObject);
	if(((BBObject*)bbt_result)!= &bbNullObject){
		return ((BBString *)bbObjectStringcast((BBOBJECT)bbt_result));
	}
	return bbt_defaultValue;
}
BBINT __m_base_configmap_TConfigMap_GetInt_Si(struct _m_base_configmap_TConfigMap_obj* o,BBSTRING bbt_key,BBINT bbt_defaultValue){
	BBOBJECT bbt_result=(BBOBJECT)((struct _m_base_configmap_TConfigMap_obj*)o)->clas->m_Get_STObject((struct _m_base_configmap_TConfigMap_obj*)o,bbt_key,(BBOBJECT)&bbNullObject);
	if(((BBObject*)bbt_result)!= &bbNullObject){
		return ((BBINT)bbStringToFloat((BBString *)bbObjectStringcast((BBOBJECT)bbt_result)));
	}
	return bbt_defaultValue;
}
struct BBDebugScope_15 _m_base_configmap_TConfigMap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TConfigMap",
	{
		{
			BBDEBUGDECL_FIELD,
			"values",
			":TMap",
			.field_offset=offsetof(struct _m_base_configmap_TConfigMap_obj,__m_base_configmap_tconfigmap_values)
		},
		{
			BBDEBUGDECL_FIELD,
			"fileUri",
			"$",
			.field_offset=offsetof(struct _m_base_configmap_TConfigMap_obj,__m_base_configmap_tconfigmap_fileuri)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_base_configmap_TConfigMap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&__m_base_configmap_TConfigMap_ToString
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Init",
			"($):TConfigMap",
			.var_address=(void*)&__m_base_configmap_TConfigMap_Init_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Reset",
			"()i",
			.var_address=(void*)&__m_base_configmap_TConfigMap_Reset
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Copy",
			"():TConfigMap",
			.var_address=(void*)&__m_base_configmap_TConfigMap_Copy
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateMerged",
			"([]:TConfigMap,i):TConfigMap",
			.var_address=(void*)&_m_base_configmap_TConfigMap_CreateMerged_TTConfigMap_aTTConfigMapi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"LoadFromFile",
			"($)i",
			.var_address=(void*)&__m_base_configmap_TConfigMap_LoadFromFile_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Add",
			"($,:Object):TConfigMap",
			.var_address=(void*)&__m_base_configmap_TConfigMap_Add_STObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddString",
			"($,$):TConfigMap",
			.var_address=(void*)&__m_base_configmap_TConfigMap_AddString_SS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddNumber",
			"($,f):TConfigMap",
			.var_address=(void*)&__m_base_configmap_TConfigMap_AddNumber_Sf
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Get",
			"($,:Object):Object",
			.var_address=(void*)&__m_base_configmap_TConfigMap_Get_STObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetString",
			"($,$)$",
			.var_address=(void*)&__m_base_configmap_TConfigMap_GetString_SS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetInt",
			"($,i)i",
			.var_address=(void*)&__m_base_configmap_TConfigMap_GetInt_Si
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_base_configmap_TConfigMap _m_base_configmap_TConfigMap={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_base_configmap_TConfigMap_scope,
	sizeof(struct _m_base_configmap_TConfigMap_obj),
	(void (*)(BBOBJECT))__m_base_configmap_TConfigMap_New,
	bbObjectDtor,
	(BBSTRING (*)(BBOBJECT))__m_base_configmap_TConfigMap_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_base_configmap_TConfigMap_obj,__m_base_configmap_tconfigmap_fileuri) - sizeof(void*) + sizeof(BBSTRING)
	,0
	,__m_base_configmap_TConfigMap_Init_S
	,__m_base_configmap_TConfigMap_Reset
	,__m_base_configmap_TConfigMap_Copy
	,_m_base_configmap_TConfigMap_CreateMerged_TTConfigMap_aTTConfigMapi
	,__m_base_configmap_TConfigMap_LoadFromFile_S
	,__m_base_configmap_TConfigMap_Add_STObject
	,__m_base_configmap_TConfigMap_AddString_SS
	,__m_base_configmap_TConfigMap_AddNumber_Sf
	,__m_base_configmap_TConfigMap_Get_STObject
	,__m_base_configmap_TConfigMap_GetString_SS
	,__m_base_configmap_TConfigMap_GetInt_Si
};

static int _bb_bcc_base_configmap_inited = 0;
int _bb_bcc_base_configmap(){
	if (!_bb_bcc_base_configmap_inited) {
		_bb_bcc_base_configmap_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_standardio_standardio();
		__bb_brl_map_map();
		__bb_brl_filesystem_filesystem();
		bbObjectRegisterType((BBCLASS)&_m_base_configmap_TConfigMap);
		return 0;
	}
	return 0;
}