#include <brl.mod/reflection.mod/.bmx/reflection.bmx.release.linux.x64.h>
static BBString _s45={
	&bbStringClass,
	1,
	{10}
};
static BBString _s23={
	&bbStringClass,
	1,
	{32}
};
static BBString _s39={
	&bbStringClass,
	4,
	{32,80,116,114}
};
static BBString _s22={
	&bbStringClass,
	1,
	{34}
};
static BBString _s16={
	&bbStringClass,
	1,
	{36}
};
static BBString _s5={
	&bbStringClass,
	1,
	{40}
};
static BBString _s6={
	&bbStringClass,
	1,
	{41}
};
static BBString _s3={
	&bbStringClass,
	1,
	{42}
};
static BBString _s4={
	&bbStringClass,
	1,
	{44}
};
static BBString _s19={
	&bbStringClass,
	1,
	{46}
};
static BBString _s17={
	&bbStringClass,
	1,
	{58}
};
static BBString _s20={
	&bbStringClass,
	1,
	{61}
};
static BBString _s24={
	&bbStringClass,
	4,
	{66,121,116,101}
};
static BBString _s32={
	&bbStringClass,
	6,
	{68,111,117,98,108,101}
};
static BBString _s0={
	&bbStringClass,
	5,
	{69,82,82,79,82}
};
static BBString _s31={
	&bbStringClass,
	5,
	{70,108,111,97,116}
};
static BBString _s26={
	&bbStringClass,
	3,
	{73,110,116}
};
static BBString _s28={
	&bbStringClass,
	4,
	{76,111,110,103}
};
static BBString _s21={
	&bbStringClass,
	19,
	{77,97,108,102,111,114,109,101,100,32,109,101,116,97,32,100,97
	,116,97}
};
static BBString _s38={
	&bbStringClass,
	6,
	{78,117,108,108,40,41}
};
static BBString _s35={
	&bbStringClass,
	6,
	{78,117,108,108,91,93}
};
static BBString _s33={
	&bbStringClass,
	6,
	{79,98,106,101,99,116}
};
static BBString _s37={
	&bbStringClass,
	3,
	{80,116,114}
};
static BBString _s25={
	&bbStringClass,
	5,
	{83,104,111,114,116}
};
static BBString _s34={
	&bbStringClass,
	6,
	{83,116,114,105,110,103}
};
static BBString _s40={
	&bbStringClass,
	29,
	{84,121,112,101,73,68,32,105,115,32,110,111,116,32,97,32,102
	,117,110,99,116,105,111,110,32,116,121,112,101}
};
static BBString _s43={
	&bbStringClass,
	27,
	{84,121,112,101,73,68,32,105,115,32,110,111,116,32,97,110,32
	,97,114,114,97,121,32,116,121,112,101}
};
static BBString _s27={
	&bbStringClass,
	4,
	{85,73,110,116}
};
static BBString _s29={
	&bbStringClass,
	5,
	{85,76,111,110,103}
};
static BBString _s41={
	&bbStringClass,
	27,
	{85,110,97,98,108,101,32,116,111,32,99,114,101,97,116,101,32
	,110,101,119,32,111,98,106,101,99,116}
};
static BBString _s42={
	&bbStringClass,
	38,
	{85,110,97,98,108,101,32,116,111,32,99,114,101,97,116,101,32
	,111,98,106,101,99,116,32,102,114,111,109,32,105,110,116,101
	,114,102,97,99,101}
};
static BBString _s36={
	&bbStringClass,
	4,
	{86,111,105,100}
};
static BBString _s18={
	&bbStringClass,
	1,
	{91}
};
static BBString _s2={
	&bbStringClass,
	2,
	{91,93}
};
static BBString _s1={
	&bbStringClass,
	1,
	{93}
};
static BBString _s7={
	&bbStringClass,
	1,
	{98}
};
static BBString _s15={
	&bbStringClass,
	1,
	{100}
};
static BBString _s14={
	&bbStringClass,
	1,
	{102}
};
static BBString _s9={
	&bbStringClass,
	1,
	{105}
};
static BBString _s11={
	&bbStringClass,
	1,
	{108}
};
static BBString _s8={
	&bbStringClass,
	1,
	{115}
};
static BBString _s30={
	&bbStringClass,
	6,
	{115,105,122,101,95,116}
};
static BBString _s13={
	&bbStringClass,
	1,
	{116}
};
static BBString _s10={
	&bbStringClass,
	1,
	{117}
};
static BBString _s12={
	&bbStringClass,
	1,
	{121}
};
static BBString _s44={
	&bbStringClass,
	1,
	{123}
};
struct BBDebugScope_10{int kind; const char *name; BBDebugDecl decls[11]; };
struct BBDebugScope_109{int kind; const char *name; BBDebugDecl decls[110]; };
struct BBDebugScope_12{int kind; const char *name; BBDebugDecl decls[13]; };
struct BBDebugScope_17{int kind; const char *name; BBDebugDecl decls[18]; };
struct BBDebugScope_35{int kind; const char *name; BBDebugDecl decls[36]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
struct BBDebugScope_9{int kind; const char *name; BBDebugDecl decls[10]; };
struct brl_threads_TMutex_obj* brl_reflection__guard;
void _brl_reflection_TTypeId_New(struct brl_reflection_TTypeId_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_reflection_TTypeId;
	o->_brl_reflection_ttypeid__name = &bbEmptyString;
	o->_brl_reflection_ttypeid__meta = &bbEmptyString;
	o->_brl_reflection_ttypeid__metamap = (struct brl_map_stringmap_TStringMap_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__class = 0;
	o->_brl_reflection_ttypeid__interface = 0;
	o->_brl_reflection_ttypeid__size = 8;
	o->_brl_reflection_ttypeid__consts = (struct brl_map_stringmap_TStringMap_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__fields = (struct brl_map_stringmap_TStringMap_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__globals = (struct brl_map_stringmap_TStringMap_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__functions = (struct brl_map_stringmap_TStringMap_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__methods = (struct brl_map_stringmap_TStringMap_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__constslist = (struct brl_linkedlist_TList_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__fieldslist = (struct brl_linkedlist_TList_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__globalslist = (struct brl_linkedlist_TList_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__functionslist = (struct brl_linkedlist_TList_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__methodslist = (struct brl_linkedlist_TList_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__interfaces = (struct brl_linkedlist_TList_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__super = (struct brl_reflection_TTypeId_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__derived = (struct brl_linkedlist_TList_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__arraytype = (&bbEmptyArray);
	o->_brl_reflection_ttypeid__elementtype = (struct brl_reflection_TTypeId_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__typetag = 0;
	o->_brl_reflection_ttypeid__pointertype = (struct brl_reflection_TTypeId_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__functiontype = (struct brl_map_stringmap_TStringMap_obj*)(&bbNullObject);
	o->_brl_reflection_ttypeid__argtypes = (&bbEmptyArray);
	o->_brl_reflection_ttypeid__rettype = (struct brl_reflection_TTypeId_obj*)(&bbNullObject);
}
BBSTRING _brl_reflection_TTypeId_Name(struct brl_reflection_TTypeId_obj* o){
	return o->_brl_reflection_ttypeid__name ;
}
BBSTRING _brl_reflection_TTypeId_MetaData_S(struct brl_reflection_TTypeId_obj* o,BBSTRING bbt_key){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__metamap )!= &bbNullObject) || !(bbt_key!= &bbEmptyString)){
		return o->_brl_reflection_ttypeid__meta ;
	}
	return ((BBString *)bbObjectStringcast((BBOBJECT)(o->_brl_reflection_ttypeid__metamap )->clas->m_ValueForKey_S((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__metamap ,bbt_key)));
}
BBINT _brl_reflection_TTypeId_HasMetaData_S(struct brl_reflection_TTypeId_obj* o,BBSTRING bbt_key){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__metamap )!= &bbNullObject) || !(bbt_key!= &bbEmptyString)){
		return 0;
	}
	return (o->_brl_reflection_ttypeid__metamap )->clas->m_Contains_S((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__metamap ,bbt_key);
}
struct brl_reflection_TTypeId_obj* _brl_reflection_TTypeId_SuperType(struct brl_reflection_TTypeId_obj* o){
	return (struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ;
}
struct brl_reflection_TTypeId_obj* _brl_reflection_TTypeId_ArrayType_i(struct brl_reflection_TTypeId_obj* o,BBINT bbt_dims){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(brl_reflection__guard)->clas->m_Lock((struct brl_threads_TMutex_obj*)brl_reflection__guard);
				if(bbt_dims>=(o->_brl_reflection_ttypeid__arraytype ->scales[0])){
					o->_brl_reflection_ttypeid__arraytype =bbArraySlice(":TTypeId",o->_brl_reflection_ttypeid__arraytype ,0,(bbt_dims+1));
				}
				struct brl_reflection_TTypeId_obj* bbt_at=(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(o->_brl_reflection_ttypeid__arraytype ,1))[((BBUINT)bbt_dims)];
				if(!(((BBObject*)bbt_at)!= &bbNullObject)){
					BBSTRING bbt_dim=&bbEmptyString;
					if(bbt_dims>1){
						{
							BBINT bbt_i=1;
							BBINT bbt_=bbt_dims;
							for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
								bbt_dim=bbStringConcat(bbt_dim,&_s4);
							}
						}
					}
					bbt_at=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),bbStringConcat(bbStringConcat(bbStringConcat(o->_brl_reflection_ttypeid__name ,&_s18),bbt_dim),&_s1),8,bbRefArrayClass(),(struct brl_reflection_TTypeId_obj*)&bbNullObject);
					bbt_at->_brl_reflection_ttypeid__elementtype =(struct brl_reflection_TTypeId_obj*)o;
					if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
						bbt_at->_brl_reflection_ttypeid__super =(struct brl_reflection_TTypeId_obj*)(o->_brl_reflection_ttypeid__super )->clas->m_ArrayType_i((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,1);
					}else{
						bbt_at->_brl_reflection_ttypeid__super =(struct brl_reflection_TTypeId_obj*)brl_reflection_ArrayTypeId;
					}
					((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(o->_brl_reflection_ttypeid__arraytype ,1))[((BBUINT)bbt_dims)]=(struct brl_reflection_TTypeId_obj*)bbt_at;
				}
				bbExLeave();
				retptr = &&_return;
				goto _finally;
				_return:;
				return (struct brl_reflection_TTypeId_obj*)bbt_at;
				bbExLeave();
				retptr = &&_endtry;
				goto _finally;
			}
			break;
			case 1:
			case 2: {
				ex = bbExCatch();
				retptr = &&_rethrow;
				_finally:;
				{
					(brl_reflection__guard)->clas->m_Unlock((struct brl_threads_TMutex_obj*)brl_reflection__guard);
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
	return (struct brl_reflection_TTypeId_obj*)(&bbNullObject);
}
struct brl_reflection_TTypeId_obj* _brl_reflection_TTypeId_ElementType(struct brl_reflection_TTypeId_obj* o){
	return (struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
}
struct brl_reflection_TTypeId_obj* _brl_reflection_TTypeId_PointerType(struct brl_reflection_TTypeId_obj* o){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(brl_reflection__guard)->clas->m_Lock((struct brl_threads_TMutex_obj*)brl_reflection__guard);
				struct brl_reflection_TTypeId_obj* bbt_pt=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__pointertype ;
				if(!(((BBObject*)bbt_pt)!= &bbNullObject)){
					bbt_pt=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),bbStringConcat(o->_brl_reflection_ttypeid__name ,&_s39),8,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
					bbt_pt->_brl_reflection_ttypeid__elementtype =(struct brl_reflection_TTypeId_obj*)o;
					if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
						bbt_pt->_brl_reflection_ttypeid__super =(struct brl_reflection_TTypeId_obj*)(o->_brl_reflection_ttypeid__super )->clas->m_PointerType((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super );
					}else{
						bbt_pt->_brl_reflection_ttypeid__super =(struct brl_reflection_TTypeId_obj*)brl_reflection_PointerTypeId;
					}
					o->_brl_reflection_ttypeid__pointertype =(struct brl_reflection_TTypeId_obj*)bbt_pt;
				}
				bbExLeave();
				retptr = &&_return;
				goto _finally;
				_return:;
				return (struct brl_reflection_TTypeId_obj*)bbt_pt;
				bbExLeave();
				retptr = &&_endtry;
				goto _finally;
			}
			break;
			case 1:
			case 2: {
				ex = bbExCatch();
				retptr = &&_rethrow;
				_finally:;
				{
					(brl_reflection__guard)->clas->m_Unlock((struct brl_threads_TMutex_obj*)brl_reflection__guard);
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
	return (struct brl_reflection_TTypeId_obj*)(&bbNullObject);
}
struct brl_reflection_TTypeId_obj* _brl_reflection_TTypeId_FunctionType_aTTTypeId(struct brl_reflection_TTypeId_obj* o,BBARRAY bbt_args){
	BBSTRING bbt_s=&bbEmptyString;
	if((bbt_args->scales[0])>2){
		struct brl_stringbuilder_TStringBuilder_obj* bbt_sb=(struct brl_stringbuilder_TStringBuilder_obj*)(struct brl_stringbuilder_TStringBuilder_obj*)bbObjectNew((BBClass *)&brl_stringbuilder_TStringBuilder);
		BBARRAY bbt_=bbt_args;
		BBUINT bbt_2=0U;
		while(bbt_2<((BBUINT)(bbt_->scales[0]))){
			struct brl_reflection_TTypeId_obj* bbt_t=(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
			bbt_2=(bbt_2+1U);
			if(bbt_t==&bbNullObject){
				continue;
			}
			if((bbt_sb)->clas->m_Length((struct brl_stringbuilder_TStringBuilder_obj*)bbt_sb)!=0){
				(bbt_sb)->clas->m_Append_S((struct brl_stringbuilder_TStringBuilder_obj*)bbt_sb,&_s4);
			}
			(bbt_sb)->clas->m_Append_S((struct brl_stringbuilder_TStringBuilder_obj*)bbt_sb,(bbt_t)->clas->m_Name((struct brl_reflection_TTypeId_obj*)bbt_t));
		}
	}else{
		BBARRAY bbt_3=bbt_args;
		BBUINT bbt_4=0U;
		while(bbt_4<((BBUINT)(bbt_3->scales[0]))){
			struct brl_reflection_TTypeId_obj* bbt_t2=(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_3,1))[bbt_4];
			bbt_4=(bbt_4+1U);
			if(bbt_t2==&bbNullObject){
				continue;
			}
			if(bbt_s!= &bbEmptyString){
				bbt_s=bbStringConcat(bbt_s,&_s4);
			}
			bbt_s=bbStringConcat(bbt_s,(bbt_t2)->clas->m_Name((struct brl_reflection_TTypeId_obj*)bbt_t2));
		}
	}
	if(!(((BBObject*)o->_brl_reflection_ttypeid__functiontype )!= &bbNullObject)){
		o->_brl_reflection_ttypeid__functiontype =(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	}
	struct brl_reflection_TTypeId_obj* bbt_ft=(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectDowncast((BBOBJECT)(o->_brl_reflection_ttypeid__functiontype )->clas->m_ValueForKey_S((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__functiontype ,bbt_s),(BBClass*)&brl_reflection_TTypeId));
	if(!(((BBObject*)bbt_ft)!= &bbNullObject)){
		bbt_ft=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),bbStringConcat(bbStringConcat(bbStringConcat(o->_brl_reflection_ttypeid__name ,&_s5),bbt_s),&_s6),8,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		bbt_ft->_brl_reflection_ttypeid__rettype =(struct brl_reflection_TTypeId_obj*)o;
		bbt_ft->_brl_reflection_ttypeid__argtypes =bbt_args;
		if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
			bbt_ft->_brl_reflection_ttypeid__super =(struct brl_reflection_TTypeId_obj*)(o->_brl_reflection_ttypeid__super )->clas->m_FunctionType_aTTTypeId((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,(&bbEmptyArray));
		}else{
			bbt_ft->_brl_reflection_ttypeid__super =(struct brl_reflection_TTypeId_obj*)brl_reflection_FunctionTypeId;
		}
		(o->_brl_reflection_ttypeid__functiontype )->clas->m_Insert_STObject((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__functiontype ,bbt_s,(BBOBJECT)bbt_ft);
	}
	return (struct brl_reflection_TTypeId_obj*)bbt_ft;
}
struct brl_reflection_TTypeId_obj* _brl_reflection_TTypeId_ReturnType(struct brl_reflection_TTypeId_obj* o){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__rettype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s40);
	}
	return (struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__rettype ;
}
BBARRAY _brl_reflection_TTypeId_ArgTypes(struct brl_reflection_TTypeId_obj* o){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__rettype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s40);
	}
	return o->_brl_reflection_ttypeid__argtypes ;
}
BBINT _brl_reflection_TTypeId_ExtendsType_TTTypeId(struct brl_reflection_TTypeId_obj* o,struct brl_reflection_TTypeId_obj* bbt_typeId){
	if(o==bbt_typeId){
		return 1;
	}
	if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
		return (o->_brl_reflection_ttypeid__super )->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,(struct brl_reflection_TTypeId_obj*)bbt_typeId);
	}
	return 0;
}
struct brl_linkedlist_TList_obj* _brl_reflection_TTypeId_DerivedTypes(struct brl_reflection_TTypeId_obj* o){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__derived )!= &bbNullObject)){
		o->_brl_reflection_ttypeid__derived =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	}
	return (struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__derived ;
}
BBOBJECT _brl_reflection_TTypeId_NewObject(struct brl_reflection_TTypeId_obj* o){
	if(!(o->_brl_reflection_ttypeid__class )){
		bbExThrow((BBObject *)&_s41);
	}
	if(o->_brl_reflection_ttypeid__interface ){
		bbExThrow((BBObject *)&_s42);
	}
	return (BBOBJECT)bbObjectNew((BBClass*)o->_brl_reflection_ttypeid__class );
}
BBINT _brl_reflection_TTypeId_IsInterface(struct brl_reflection_TTypeId_obj* o){
	return (o->_brl_reflection_ttypeid__interface !=0);
}
struct brl_map_stringmap_TStringMap_obj* _brl_reflection_TTypeId_Constants(struct brl_reflection_TTypeId_obj* o){
	return (struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__consts ;
}
struct brl_map_stringmap_TStringMap_obj* _brl_reflection_TTypeId_Fields(struct brl_reflection_TTypeId_obj* o){
	return (struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__fields ;
}
struct brl_map_stringmap_TStringMap_obj* _brl_reflection_TTypeId_Globals(struct brl_reflection_TTypeId_obj* o){
	return (struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__globals ;
}
struct brl_map_stringmap_TStringMap_obj* _brl_reflection_TTypeId_Functions(struct brl_reflection_TTypeId_obj* o){
	return (struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__functions ;
}
struct brl_map_stringmap_TStringMap_obj* _brl_reflection_TTypeId_Methods(struct brl_reflection_TTypeId_obj* o){
	return (struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__methods ;
}
struct brl_linkedlist_TList_obj* _brl_reflection_TTypeId_Interfaces(struct brl_reflection_TTypeId_obj* o){
	return (struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__interfaces ;
}
struct brl_reflection_TConstant_obj* _brl_reflection_TTypeId_FindConstant_S(struct brl_reflection_TTypeId_obj* o,BBSTRING bbt_name){
	bbt_name=bbStringToLower((BBSTRING)bbt_name);
	struct brl_reflection_TConstant_obj* bbt_t=(struct brl_reflection_TConstant_obj*)((struct brl_reflection_TConstant_obj*)bbObjectDowncast((BBOBJECT)(o->_brl_reflection_ttypeid__consts )->clas->m_ValueForKey_S((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__consts ,bbt_name),(BBClass*)&brl_reflection_TConstant));
	if(((BBObject*)bbt_t)!= &bbNullObject){
		return (struct brl_reflection_TConstant_obj*)bbt_t;
	}
	if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
		return (struct brl_reflection_TConstant_obj*)(o->_brl_reflection_ttypeid__super )->clas->m_FindConstant_S((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,bbt_name);
	}
	return (struct brl_reflection_TConstant_obj*)(&bbNullObject);
}
struct brl_reflection_TField_obj* _brl_reflection_TTypeId_FindField_S(struct brl_reflection_TTypeId_obj* o,BBSTRING bbt_name){
	bbt_name=bbStringToLower((BBSTRING)bbt_name);
	struct brl_reflection_TField_obj* bbt_t=(struct brl_reflection_TField_obj*)((struct brl_reflection_TField_obj*)bbObjectDowncast((BBOBJECT)(o->_brl_reflection_ttypeid__fields )->clas->m_ValueForKey_S((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__fields ,bbt_name),(BBClass*)&brl_reflection_TField));
	if(((BBObject*)bbt_t)!= &bbNullObject){
		return (struct brl_reflection_TField_obj*)bbt_t;
	}
	if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
		return (struct brl_reflection_TField_obj*)(o->_brl_reflection_ttypeid__super )->clas->m_FindField_S((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,bbt_name);
	}
	return (struct brl_reflection_TField_obj*)(&bbNullObject);
}
struct brl_reflection_TGlobal_obj* _brl_reflection_TTypeId_FindGlobal_S(struct brl_reflection_TTypeId_obj* o,BBSTRING bbt_name){
	bbt_name=bbStringToLower((BBSTRING)bbt_name);
	struct brl_reflection_TGlobal_obj* bbt_t=(struct brl_reflection_TGlobal_obj*)((struct brl_reflection_TGlobal_obj*)bbObjectDowncast((BBOBJECT)(o->_brl_reflection_ttypeid__globals )->clas->m_ValueForKey_S((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__globals ,bbt_name),(BBClass*)&brl_reflection_TGlobal));
	if(((BBObject*)bbt_t)!= &bbNullObject){
		return (struct brl_reflection_TGlobal_obj*)bbt_t;
	}
	if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
		return (struct brl_reflection_TGlobal_obj*)(o->_brl_reflection_ttypeid__super )->clas->m_FindGlobal_S((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,bbt_name);
	}
	return (struct brl_reflection_TGlobal_obj*)(&bbNullObject);
}
struct brl_reflection_TFunction_obj* _brl_reflection_TTypeId_FindFunction_S(struct brl_reflection_TTypeId_obj* o,BBSTRING bbt_name){
	bbt_name=bbStringToLower((BBSTRING)bbt_name);
	struct brl_reflection_TFunction_obj* bbt_t=(struct brl_reflection_TFunction_obj*)((struct brl_reflection_TFunction_obj*)bbObjectDowncast((BBOBJECT)(o->_brl_reflection_ttypeid__functions )->clas->m_ValueForKey_S((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__functions ,bbt_name),(BBClass*)&brl_reflection_TFunction));
	if(((BBObject*)bbt_t)!= &bbNullObject){
		return (struct brl_reflection_TFunction_obj*)bbt_t;
	}
	if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
		return (struct brl_reflection_TFunction_obj*)(o->_brl_reflection_ttypeid__super )->clas->m_FindFunction_S((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,bbt_name);
	}
	return (struct brl_reflection_TFunction_obj*)(&bbNullObject);
}
struct brl_reflection_TMethod_obj* _brl_reflection_TTypeId_FindMethod_S(struct brl_reflection_TTypeId_obj* o,BBSTRING bbt_name){
	bbt_name=bbStringToLower((BBSTRING)bbt_name);
	struct brl_reflection_TMethod_obj* bbt_t=(struct brl_reflection_TMethod_obj*)((struct brl_reflection_TMethod_obj*)bbObjectDowncast((BBOBJECT)(o->_brl_reflection_ttypeid__methods )->clas->m_ValueForKey_S((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__methods ,bbt_name),(BBClass*)&brl_reflection_TMethod));
	if(((BBObject*)bbt_t)!= &bbNullObject){
		return (struct brl_reflection_TMethod_obj*)bbt_t;
	}
	if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
		return (struct brl_reflection_TMethod_obj*)(o->_brl_reflection_ttypeid__super )->clas->m_FindMethod_S((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,bbt_name);
	}
	return (struct brl_reflection_TMethod_obj*)(&bbNullObject);
}
struct brl_linkedlist_TList_obj* _brl_reflection_TTypeId_EnumConstants_TTList(struct brl_reflection_TTypeId_obj* o,struct brl_linkedlist_TList_obj* bbt_list){
	if(!(((BBObject*)bbt_list)!= &bbNullObject)){
		bbt_list=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	}
	if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
		(o->_brl_reflection_ttypeid__super )->clas->m_EnumConstants_TTList((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,(struct brl_linkedlist_TList_obj*)bbt_list);
	}
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(o->_brl_reflection_ttypeid__constslist )->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__constslist );
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct brl_reflection_TConstant_obj* bbt_t=(struct brl_reflection_TConstant_obj*)((struct brl_reflection_TConstant_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&brl_reflection_TConstant));
		if(bbt_t==&bbNullObject){
			continue;
		}
		(bbt_list)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_t);
	}
	return (struct brl_linkedlist_TList_obj*)bbt_list;
}
struct brl_linkedlist_TList_obj* _brl_reflection_TTypeId_EnumFields_TTList(struct brl_reflection_TTypeId_obj* o,struct brl_linkedlist_TList_obj* bbt_list){
	if(!(((BBObject*)bbt_list)!= &bbNullObject)){
		bbt_list=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	}
	if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
		(o->_brl_reflection_ttypeid__super )->clas->m_EnumFields_TTList((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,(struct brl_linkedlist_TList_obj*)bbt_list);
	}
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(o->_brl_reflection_ttypeid__fieldslist )->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__fieldslist );
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct brl_reflection_TField_obj* bbt_t=(struct brl_reflection_TField_obj*)((struct brl_reflection_TField_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&brl_reflection_TField));
		if(bbt_t==&bbNullObject){
			continue;
		}
		(bbt_list)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_t);
	}
	return (struct brl_linkedlist_TList_obj*)bbt_list;
}
struct brl_linkedlist_TList_obj* _brl_reflection_TTypeId_EnumGlobals_TTList(struct brl_reflection_TTypeId_obj* o,struct brl_linkedlist_TList_obj* bbt_list){
	if(!(((BBObject*)bbt_list)!= &bbNullObject)){
		bbt_list=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	}
	if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
		(o->_brl_reflection_ttypeid__super )->clas->m_EnumGlobals_TTList((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,(struct brl_linkedlist_TList_obj*)bbt_list);
	}
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(o->_brl_reflection_ttypeid__globalslist )->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__globalslist );
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct brl_reflection_TField_obj* bbt_t=(struct brl_reflection_TField_obj*)((struct brl_reflection_TField_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&brl_reflection_TField));
		if(bbt_t==&bbNullObject){
			continue;
		}
		(bbt_list)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_t);
	}
	return (struct brl_linkedlist_TList_obj*)bbt_list;
}
BBINT brl_reflection_TTypeId_EnumFunctions_TTList_compareFunction_i_TObjectTObject(BBOBJECT bbt_a,BBOBJECT bbt_b);
BBINT brl_reflection_TTypeId_EnumFunctions_TTList_compareFunction_i_TObjectTObject(BBOBJECT bbt_a,BBOBJECT bbt_b){
	if((((BBObject*)((struct brl_reflection_TFunction_obj*)bbObjectDowncast((BBOBJECT)bbt_a,(BBClass*)&brl_reflection_TFunction)))!= &bbNullObject) && (((BBObject*)((struct brl_reflection_TFunction_obj*)bbObjectDowncast((BBOBJECT)bbt_b,(BBClass*)&brl_reflection_TFunction)))!= &bbNullObject)){
		struct brl_reflection_TFunction_obj* bbt_;
		struct brl_reflection_TFunction_obj* bbt_2;
		return bbStringCompare((BBSTRING)(((struct brl_reflection_TFunction_obj*)(bbt_ = ((struct brl_reflection_TFunction_obj*)bbObjectDowncast((BBOBJECT)bbt_a,(BBClass*)&brl_reflection_TFunction))))->clas)->m_Name((struct brl_reflection_TMember_obj*)bbt_),(BBOBJECT)(((struct brl_reflection_TFunction_obj*)(bbt_2 = ((struct brl_reflection_TFunction_obj*)bbObjectDowncast((BBOBJECT)bbt_b,(BBClass*)&brl_reflection_TFunction))))->clas)->m_Name((struct brl_reflection_TMember_obj*)bbt_2));
	}
	return 0;
}
struct brl_linkedlist_TList_obj* _brl_reflection_TTypeId_EnumFunctions_TTList(struct brl_reflection_TTypeId_obj* o,struct brl_linkedlist_TList_obj* bbt_list){
	if(!(((BBObject*)bbt_list)!= &bbNullObject)){
		bbt_list=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	}
	if((((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject) && (o->_brl_reflection_ttypeid__super !=o)){
		(o->_brl_reflection_ttypeid__super )->clas->m_EnumFunctions_TTList((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,(struct brl_linkedlist_TList_obj*)bbt_list);
	}
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(o->_brl_reflection_ttypeid__functionslist )->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__functionslist );
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct brl_reflection_TFunction_obj* bbt_t=(struct brl_reflection_TFunction_obj*)((struct brl_reflection_TFunction_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&brl_reflection_TFunction));
		if(bbt_t==&bbNullObject){
			continue;
		}
		(bbt_list)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_t);
	}
	(bbt_list)->clas->m_Sort_iF_TObjectTObject_i_((struct brl_linkedlist_TList_obj*)bbt_list,1,brl_reflection_TTypeId_EnumFunctions_TTList_compareFunction_i_TObjectTObject);
	struct brl_reflection_TFunction_obj* bbt_prev=(struct brl_reflection_TFunction_obj*)(&bbNullObject);
	struct brl_linkedlist_TListEnum_obj* bbt_2=(struct brl_linkedlist_TListEnum_obj*)(bbt_list)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_list);
	while((bbt_2)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_2)!=0){
		struct brl_reflection_TFunction_obj* bbt_t2=(struct brl_reflection_TFunction_obj*)((struct brl_reflection_TFunction_obj*)bbObjectDowncast((BBOBJECT)(bbt_2)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_2),(BBClass*)&brl_reflection_TFunction));
		if(bbt_t2==&bbNullObject){
			continue;
		}
		if(((BBObject*)bbt_prev)!= &bbNullObject){
			if(bbStringCompare((BBSTRING)(bbt_t2)->clas->m_Name((struct brl_reflection_TMember_obj*)bbt_t2),(BBOBJECT)(bbt_prev)->clas->m_Name((struct brl_reflection_TMember_obj*)bbt_prev))==0){
				(bbt_list)->clas->m_Remove_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_prev);
			}
		}
		bbt_prev=(struct brl_reflection_TFunction_obj*)bbt_t2;
	}
	return (struct brl_linkedlist_TList_obj*)bbt_list;
}
struct brl_linkedlist_TList_obj* _brl_reflection_TTypeId_EnumMethods_TTList(struct brl_reflection_TTypeId_obj* o,struct brl_linkedlist_TList_obj* bbt_list){
	if(!(((BBObject*)bbt_list)!= &bbNullObject)){
		bbt_list=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	}
	if(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject){
		(o->_brl_reflection_ttypeid__super )->clas->m_EnumMethods_TTList((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__super ,(struct brl_linkedlist_TList_obj*)bbt_list);
	}
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(o->_brl_reflection_ttypeid__methodslist )->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__methodslist );
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct brl_reflection_TMethod_obj* bbt_t=(struct brl_reflection_TMethod_obj*)((struct brl_reflection_TMethod_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&brl_reflection_TMethod));
		if(bbt_t==&bbNullObject){
			continue;
		}
		(bbt_list)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_t);
	}
	return (struct brl_linkedlist_TList_obj*)bbt_list;
}
BBOBJECT _brl_reflection_TTypeId_NewArray_iai(struct brl_reflection_TTypeId_obj* o,BBINT bbt_length,BBARRAY bbt_dims){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_tag=o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__typetag ;
	if(!(bbt_tag)){
		bbt_tag=bbStringToCString((BBSTRING)brl_reflection_TypeTagForId((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ));
		o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__typetag =bbt_tag;
	}
	if(!(bbt_dims!= &bbEmptyArray)){
		return (BBOBJECT)bbArrayNew1D((const char*)bbt_tag,(int)bbt_length);
	}else{
		return (BBOBJECT)bbRefArrayCreate(bbt_tag,bbt_dims);
	}
}
BBINT _brl_reflection_TTypeId_ArrayLength_TObjecti(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_dim){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	return bbRefArrayLength((BBOBJECT)bbt__array,bbt_dim);
}
BBOBJECT _brl_reflection_TTypeId_NullArray(struct brl_reflection_TTypeId_obj* o){
	return (BBOBJECT)bbRefArrayNull();
}
BBINT _brl_reflection_TTypeId_ArrayDimensions_TObject(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	return bbRefArrayDimensions((BBOBJECT)bbt__array);
}
BBOBJECT _brl_reflection_TTypeId_ArraySlice_TObjectii(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt__start,BBINT bbt__end){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_tag=o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__typetag ;
	if(!(bbt_tag)){
		bbt_tag=bbStringToCString((BBSTRING)brl_reflection_TypeTagForId((struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ));
		o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__typetag =bbt_tag;
	}
	bbt__array=(BBOBJECT)bbArraySlice((const char*)bbt_tag,(BBOBJECT)(BBArray*)bbt__array,(int)bbt__start,(int)bbt__end);
	return (BBOBJECT)bbt__array;
}
BBOBJECT _brl_reflection_TTypeId_GetArrayElement_TObjecti(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	return (BBOBJECT)brl_reflection__Get(bbt_p,(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype );
}
BBSTRING _brl_reflection_TTypeId_GetStringArrayElement_TObjecti(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	return ((BBString *)bbObjectStringcast((BBOBJECT)brl_reflection__Get(bbt_p,(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype )));
}
BBBYTE _brl_reflection_TTypeId_GetByteArrayElement_TObjecti(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		return bbt_p[0];
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBBYTE)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBBYTE)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBBYTE)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBBYTE)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBBYTE)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBBYTE)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBBYTE)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBBYTE)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBSHORT _brl_reflection_TTypeId_GetShortArrayElement_TObjecti(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBSHORT)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return bbt_2[0];
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBSHORT)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBSHORT)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBSHORT)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBSHORT)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBSHORT)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBSHORT)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBSHORT)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TTypeId_GetIntArrayElement_TObjecti(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBINT)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBINT)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return bbt_3[0];
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBINT)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBINT)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBINT)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBINT)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBINT)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBINT)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBUINT _brl_reflection_TTypeId_GetUIntArrayElement_TObjecti(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBUINT)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBUINT)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBUINT)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return bbt_4[0];
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBUINT)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBUINT)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBUINT)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBUINT)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBUINT)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0U;
}
BBLONG _brl_reflection_TTypeId_GetLongArrayElement_TObjecti(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBLONG)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBLONG)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBLONG)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBLONG)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return bbt_5[0];
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBLONG)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBLONG)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBLONG)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBLONG)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0LL;
}
BBULONG _brl_reflection_TTypeId_GetULongArrayElement_TObjecti(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBULONG)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBULONG)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBULONG)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBULONG)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBULONG)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return bbt_6[0];
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBULONG)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBULONG)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBULONG)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0ULL;
}
BBSIZET _brl_reflection_TTypeId_GetSizeTArrayElement_TObjecti(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBSIZET)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBSIZET)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBSIZET)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBSIZET)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBSIZET)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBSIZET)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return bbt_7[0];
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBSIZET)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBSIZET)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBFLOAT _brl_reflection_TTypeId_GetFloatArrayElement_TObjecti(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBFLOAT)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBFLOAT)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBFLOAT)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBFLOAT)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBFLOAT)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBFLOAT)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBFLOAT)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return bbt_8[0];
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBFLOAT)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return .00000000f;
}
BBDOUBLE _brl_reflection_TTypeId_GetDoubleArrayElement_TObjecti(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBDOUBLE)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBDOUBLE)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBDOUBLE)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBDOUBLE)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBDOUBLE)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBDOUBLE)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBDOUBLE)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBDOUBLE)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return bbt_9[0];
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return .0000000000000000;
}
BBINT _brl_reflection_TTypeId_SetArrayElement_TObjectiTObject(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBOBJECT bbt_value){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	brl_reflection__Assign(bbt_p,(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ,(BBOBJECT)bbt_value);
	return 0;
}
BBINT _brl_reflection_TTypeId_SetArrayElement_TObjectib(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBBYTE bbt_value){
	((struct brl_reflection_TTypeId_obj*)o)->clas->m_SetByteArrayElement_TObjectib((struct brl_reflection_TTypeId_obj*)o,(BBOBJECT)bbt__array,bbt_index,bbt_value);
	return 0;
}
BBINT _brl_reflection_TTypeId_SetArrayElement_TObjectis(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBSHORT bbt_value){
	((struct brl_reflection_TTypeId_obj*)o)->clas->m_SetShortArrayElement_TObjectis((struct brl_reflection_TTypeId_obj*)o,(BBOBJECT)bbt__array,bbt_index,bbt_value);
	return 0;
}
BBINT _brl_reflection_TTypeId_SetArrayElement_TObjectii(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBINT bbt_value){
	((struct brl_reflection_TTypeId_obj*)o)->clas->m_SetIntArrayElement_TObjectii((struct brl_reflection_TTypeId_obj*)o,(BBOBJECT)bbt__array,bbt_index,bbt_value);
	return 0;
}
BBINT _brl_reflection_TTypeId_SetArrayElement_TObjectiu(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBUINT bbt_value){
	((struct brl_reflection_TTypeId_obj*)o)->clas->m_SetUIntArrayElement_TObjectiu((struct brl_reflection_TTypeId_obj*)o,(BBOBJECT)bbt__array,bbt_index,bbt_value);
	return 0;
}
BBINT _brl_reflection_TTypeId_SetArrayElement_TObjectil(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBLONG bbt_value){
	((struct brl_reflection_TTypeId_obj*)o)->clas->m_SetLongArrayElement_TObjectil((struct brl_reflection_TTypeId_obj*)o,(BBOBJECT)bbt__array,bbt_index,bbt_value);
	return 0;
}
BBINT _brl_reflection_TTypeId_SetArrayElement_TObjectiy(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBULONG bbt_value){
	((struct brl_reflection_TTypeId_obj*)o)->clas->m_SetULongArrayElement_TObjectiy((struct brl_reflection_TTypeId_obj*)o,(BBOBJECT)bbt__array,bbt_index,bbt_value);
	return 0;
}
BBINT _brl_reflection_TTypeId_SetArrayElement_TObjectiz(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBSIZET bbt_value){
	((struct brl_reflection_TTypeId_obj*)o)->clas->m_SetSizeTArrayElement_TObjectiz((struct brl_reflection_TTypeId_obj*)o,(BBOBJECT)bbt__array,bbt_index,bbt_value);
	return 0;
}
BBINT _brl_reflection_TTypeId_SetArrayElement_TObjectif(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBFLOAT bbt_value){
	((struct brl_reflection_TTypeId_obj*)o)->clas->m_SetFloatArrayElement_TObjectif((struct brl_reflection_TTypeId_obj*)o,(BBOBJECT)bbt__array,bbt_index,bbt_value);
	return 0;
}
BBINT _brl_reflection_TTypeId_SetArrayElement_TObjectid(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBDOUBLE bbt_value){
	((struct brl_reflection_TTypeId_obj*)o)->clas->m_SetDoubleArrayElement_TObjectid((struct brl_reflection_TTypeId_obj*)o,(BBOBJECT)bbt__array,bbt_index,bbt_value);
	return 0;
}
BBINT _brl_reflection_TTypeId_SetByteArrayElement_TObjectib(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBBYTE bbt_value){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=bbt_value;
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromInt((BBINT)bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TTypeId_SetShortArrayElement_TObjectis(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBSHORT bbt_value){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=bbt_value;
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromInt((BBINT)bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TTypeId_SetIntArrayElement_TObjectii(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBINT bbt_value){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=bbt_value;
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromInt(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TTypeId_SetUIntArrayElement_TObjectiu(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBUINT bbt_value){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=bbt_value;
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromUInt(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TTypeId_SetLongArrayElement_TObjectil(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBLONG bbt_value){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=bbt_value;
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromLong(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TTypeId_SetULongArrayElement_TObjectiy(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBULONG bbt_value){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=bbt_value;
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromULong(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TTypeId_SetSizeTArrayElement_TObjectiz(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBSIZET bbt_value){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=bbt_value;
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromSizet(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TTypeId_SetFloatArrayElement_TObjectif(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBFLOAT bbt_value){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=bbt_value;
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromFloat(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TTypeId_SetDoubleArrayElement_TObjectid(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBDOUBLE bbt_value){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=bbt_value;
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromDouble(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TTypeId_SetStringArrayElement_TObjectiS(struct brl_reflection_TTypeId_obj* o,BBOBJECT bbt__array,BBINT bbt_index,BBSTRING bbt_value){
	if(!(((BBObject*)o->_brl_reflection_ttypeid__elementtype )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s43);
	}
	BBBYTE* bbt_p=bbRefArrayElementPtr(o->_brl_reflection_ttypeid__elementtype ->_brl_reflection_ttypeid__size ,(BBOBJECT)bbt__array,bbt_index);
	brl_reflection__Assign(bbt_p,(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_ttypeid__elementtype ,(BBOBJECT)bbt_value);
	return 0;
}
struct brl_reflection_TTypeId_obj* brl_reflection_TTypeId_ForName_TTTypeId_S(BBSTRING bbt_name){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(brl_reflection__guard)->clas->m_Lock((struct brl_threads_TMutex_obj*)brl_reflection__guard);
				brl_reflection_TTypeId__Update_i();
				if(bbStringEndsWith((BBSTRING)bbt_name,&_s1)!=0){
					bbt_name=bbStringSlice(bbt_name,0,((bbt_name->length)-2));
					struct brl_reflection_TTypeId_obj* bbt_2;
					struct brl_reflection_TTypeId_obj* volatile bbt_=(((struct brl_reflection_TTypeId_obj*)(bbt_2 = ((struct brl_reflection_TTypeId_obj*)bbObjectDowncast((BBOBJECT)(brl_reflection_TTypeId__nameMap)->clas->m_ValueForKey_TObject((struct brl_map_TMap_obj*)brl_reflection_TTypeId__nameMap,(BBOBJECT)bbStringToLower((BBSTRING)bbt_name)),(BBClass*)&brl_reflection_TTypeId))))->clas)->m_ArrayType_i((struct brl_reflection_TTypeId_obj*)bbt_2,1);
					bbExLeave();
					retptr = &&_return;
					goto _finally;
					_return:;
					return (struct brl_reflection_TTypeId_obj*)bbt_;
				}else{
					if(bbStringEndsWith((BBSTRING)bbt_name,&_s37)!=0){
						bbt_name=bbStringTrim((BBSTRING)bbStringSlice(bbt_name,0,((bbt_name->length)-4)));
						if(!(bbt_name!= &bbEmptyString)){
							bbExLeave();
							retptr = &&_return2;
							goto _finally;
							_return2:;
							return (struct brl_reflection_TTypeId_obj*)&bbNullObject;
						}
						struct brl_reflection_TTypeId_obj* bbt_baseType=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId_ForName_TTTypeId_S(bbt_name);
						if(((BBObject*)bbt_baseType)!= &bbNullObject){
							struct brl_reflection_TTypeId_obj* bbt_3=(struct brl_reflection_TTypeId_obj*)bbt_baseType;
							if((((((bbt_3==brl_reflection_ByteTypeId) || (bbt_3==brl_reflection_ShortTypeId)) || (bbt_3==brl_reflection_IntTypeId)) || (bbt_3==brl_reflection_LongTypeId)) || (bbt_3==brl_reflection_FloatTypeId)) || (bbt_3==brl_reflection_DoubleTypeId)){
								struct brl_reflection_TTypeId_obj* volatile bbt_4=(bbt_baseType)->clas->m_PointerType((struct brl_reflection_TTypeId_obj*)bbt_baseType);
								bbExLeave();
								retptr = &&_return3;
								goto _finally;
								_return3:;
								return (struct brl_reflection_TTypeId_obj*)bbt_4;
							}else{
								if((bbt_baseType)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_baseType,(struct brl_reflection_TTypeId_obj*)brl_reflection_PointerTypeId)!=0){
									struct brl_reflection_TTypeId_obj* volatile bbt_5=(bbt_baseType)->clas->m_PointerType((struct brl_reflection_TTypeId_obj*)bbt_baseType);
									bbExLeave();
									retptr = &&_return4;
									goto _finally;
									_return4:;
									return (struct brl_reflection_TTypeId_obj*)bbt_5;
								}
							}
						}
						bbExLeave();
						retptr = &&_return5;
						goto _finally;
						_return5:;
						return (struct brl_reflection_TTypeId_obj*)&bbNullObject;
					}else{
						if(bbStringEndsWith((BBSTRING)bbt_name,&_s6)!=0){
							struct brl_reflection_TTypeId_obj* bbt_t=(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectDowncast((BBOBJECT)(brl_reflection_TTypeId__nameMap)->clas->m_ValueForKey_TObject((struct brl_map_TMap_obj*)brl_reflection_TTypeId__nameMap,(BBOBJECT)bbStringToLower((BBSTRING)bbt_name)),(BBClass*)&brl_reflection_TTypeId));
							if(((BBObject*)bbt_t)!= &bbNullObject){
								bbExLeave();
								retptr = &&_return6;
								goto _finally;
								_return6:;
								return (struct brl_reflection_TTypeId_obj*)bbt_t;
							}
							BBINT bbt_i=bbStringFind((BBSTRING)bbt_name,&_s5,0);
							struct brl_reflection_TTypeId_obj* bbt_ret=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId_ForName_TTTypeId_S(bbStringTrim((BBSTRING)bbStringSlice(bbt_name,0,bbt_i)));
							BBARRAY bbt_typs=(&bbEmptyArray);
							if(((BBObject*)bbt_ret)!= &bbNullObject){
								BBSTRING bbt_params=bbStringTrim((BBSTRING)bbStringSlice(bbt_name,(bbt_i+1),((bbt_name->length)-1)));
								if(bbt_params!= &bbEmptyString){
									BBARRAY bbt_args=bbStringSplit((BBSTRING)bbt_params,&_s4);
									if(((bbt_args->scales[0])>=1) && (((BBSTRING*)BBARRAYDATA(bbt_args,1))[0U]!= &bbEmptyString)){
										bbt_typs=bbArrayNew1D(":TTypeId", (bbt_args->scales[0]));
										{
											BBINT bbt_i2=0;
											BBINT bbt_6=(bbt_args->scales[0]);
											for(;(bbt_i2<bbt_6);bbt_i2=(bbt_i2+1)){
												((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_typs,1))[((BBUINT)bbt_i2)]=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId_ForName_TTTypeId_S(bbStringTrim((BBSTRING)((BBSTRING*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i2)]));
												if(!(((BBObject*)((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_typs,1))[((BBUINT)bbt_i2)])!= &bbNullObject)){
													((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_typs,1))[((BBUINT)bbt_i2)]=(struct brl_reflection_TTypeId_obj*)brl_reflection_ObjectTypeId;
												}
											}
										}
									}
								}
								struct brl_reflection_TTypeId_obj* volatile bbt_7=(bbt_ret)->clas->m_FunctionType_aTTTypeId((struct brl_reflection_TTypeId_obj*)bbt_ret,bbt_typs);
								bbExLeave();
								retptr = &&_return7;
								goto _finally;
								_return7:;
								return (struct brl_reflection_TTypeId_obj*)bbt_7;
							}
						}else{
							BBOBJECT volatile bbt_8=(brl_reflection_TTypeId__nameMap)->clas->m_ValueForKey_TObject((struct brl_map_TMap_obj*)brl_reflection_TTypeId__nameMap,(BBOBJECT)bbStringToLower((BBSTRING)bbt_name));
							bbExLeave();
							retptr = &&_return8;
							goto _finally;
							_return8:;
							return (struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectDowncast((BBOBJECT)bbt_8,(BBClass*)&brl_reflection_TTypeId));
						}
					}
				}
				bbExLeave();
				retptr = &&_endtry;
				goto _finally;
			}
			break;
			case 1:
			case 2: {
				ex = bbExCatch();
				retptr = &&_rethrow;
				_finally:;
				{
					(brl_reflection__guard)->clas->m_Unlock((struct brl_threads_TMutex_obj*)brl_reflection__guard);
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
	return (struct brl_reflection_TTypeId_obj*)(&bbNullObject);
}
struct brl_reflection_TTypeId_obj* brl_reflection_TTypeId_ForObject_TTTypeId_TObject(BBOBJECT bbt_obj){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(brl_reflection__guard)->clas->m_Lock((struct brl_threads_TMutex_obj*)brl_reflection__guard);
				brl_reflection_TTypeId__Update_i();
				BBBYTE* bbt_class=bbRefGetObjectClass((BBOBJECT)bbt_obj);
				if(bbt_class==brl_reflection_ArrayTypeId->_brl_reflection_ttypeid__class ){
					if(!(bbRefArrayLength((BBOBJECT)bbt_obj,0)!=0)){
						bbExLeave();
						retptr = &&_return;
						goto _finally;
						_return:;
						return (struct brl_reflection_TTypeId_obj*)brl_reflection_ArrayTypeId;
					}
					struct brl_reflection_TTypeId_obj* bbt_2;
					struct brl_reflection_TTypeId_obj* volatile bbt_=(((struct brl_reflection_TTypeId_obj*)(bbt_2 = brl_reflection_TypeIdForTag(bbRefArrayTypeTag((BBOBJECT)bbt_obj))))->clas)->m_ArrayType_i((struct brl_reflection_TTypeId_obj*)bbt_2,1);
					bbExLeave();
					retptr = &&_return2;
					goto _finally;
					_return2:;
					return (struct brl_reflection_TTypeId_obj*)bbt_;
				}else{
					BBOBJECT volatile bbt_3=(brl_reflection_TTypeId__classMap)->clas->m_ValueForKey_pb((struct brl_map_ptrmap_TPtrMap_obj*)brl_reflection_TTypeId__classMap,bbt_class);
					bbExLeave();
					retptr = &&_return3;
					goto _finally;
					_return3:;
					return (struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectDowncast((BBOBJECT)bbt_3,(BBClass*)&brl_reflection_TTypeId));
				}
				bbExLeave();
				retptr = &&_endtry;
				goto _finally;
			}
			break;
			case 1:
			case 2: {
				ex = bbExCatch();
				retptr = &&_rethrow;
				_finally:;
				{
					(brl_reflection__guard)->clas->m_Unlock((struct brl_threads_TMutex_obj*)brl_reflection__guard);
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
	return (struct brl_reflection_TTypeId_obj*)(&bbNullObject);
}
struct brl_linkedlist_TList_obj* brl_reflection_TTypeId_EnumTypes_TTList(){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(brl_reflection__guard)->clas->m_Lock((struct brl_threads_TMutex_obj*)brl_reflection__guard);
				brl_reflection_TTypeId__Update_i();
				struct brl_linkedlist_TList_obj* bbt_list=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
				struct brl_map_TMapEnumerator_obj* volatile bbt_=(struct brl_map_TMapEnumerator_obj*)(brl_reflection_TTypeId__nameMap)->clas->m_Values((struct brl_map_TMap_obj*)brl_reflection_TTypeId__nameMap);
				struct brl_map_TNodeEnumerator_obj* bbt_2=(struct brl_map_TNodeEnumerator_obj*)(bbt_)->clas->m_ObjectEnumerator((struct brl_map_TMapEnumerator_obj*)bbt_);
				while((bbt_2)->clas->m_HasNext((struct brl_map_TNodeEnumerator_obj*)bbt_2)!=0){
					struct brl_reflection_TTypeId_obj* bbt_t=(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectDowncast((BBOBJECT)(bbt_2)->clas->m_NextObject((struct brl_map_TNodeEnumerator_obj*)bbt_2),(BBClass*)&brl_reflection_TTypeId));
					if(bbt_t==&bbNullObject){
						continue;
					}
					(bbt_list)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_t);
				}
				bbExLeave();
				retptr = &&_return;
				goto _finally;
				_return:;
				return (struct brl_linkedlist_TList_obj*)bbt_list;
				bbExLeave();
				retptr = &&_endtry;
				goto _finally;
			}
			break;
			case 1:
			case 2: {
				ex = bbExCatch();
				retptr = &&_rethrow;
				_finally:;
				{
					(brl_reflection__guard)->clas->m_Unlock((struct brl_threads_TMutex_obj*)brl_reflection__guard);
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
	return (struct brl_linkedlist_TList_obj*)(&bbNullObject);
}
struct brl_linkedlist_TList_obj* brl_reflection_TTypeId_EnumInterfaces_TTList(){
	brl_reflection_TTypeId__Update_i();
	struct brl_linkedlist_TList_obj* bbt_list=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	struct brl_map_ptrmap_TPtrMapEnumerator_obj* volatile bbt_=(struct brl_map_ptrmap_TPtrMapEnumerator_obj*)(brl_reflection_TTypeId__interfaceMap)->clas->m_Values((struct brl_map_ptrmap_TPtrMap_obj*)brl_reflection_TTypeId__interfaceMap);
	struct brl_map_ptrmap_TPtrNodeEnumerator_obj* bbt_2=(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)(bbt_)->clas->m_ObjectEnumerator((struct brl_map_ptrmap_TPtrMapEnumerator_obj*)bbt_);
	while((bbt_2)->clas->m_HasNext((struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)bbt_2)!=0){
		struct brl_reflection_TTypeId_obj* bbt_t=(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectDowncast((BBOBJECT)(bbt_2)->clas->m_NextObject((struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)bbt_2),(BBClass*)&brl_reflection_TTypeId));
		if(bbt_t==&bbNullObject){
			continue;
		}
		(bbt_list)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_t);
	}
	return (struct brl_linkedlist_TList_obj*)bbt_list;
}
struct brl_reflection_TTypeId_obj* _brl_reflection_TTypeId_Init_SipbTTTypeId(struct brl_reflection_TTypeId_obj* o,BBSTRING bbt_name,BBINT bbt_size,BBBYTE* bbt_class,struct brl_reflection_TTypeId_obj* bbt_supor){
	o->_brl_reflection_ttypeid__name =bbt_name;
	o->_brl_reflection_ttypeid__size =bbt_size;
	o->_brl_reflection_ttypeid__class =bbt_class;
	o->_brl_reflection_ttypeid__super =(struct brl_reflection_TTypeId_obj*)bbt_supor;
	o->_brl_reflection_ttypeid__consts =(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	o->_brl_reflection_ttypeid__fields =(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	o->_brl_reflection_ttypeid__globals =(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	o->_brl_reflection_ttypeid__functions =(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	o->_brl_reflection_ttypeid__methods =(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	o->_brl_reflection_ttypeid__constslist =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	o->_brl_reflection_ttypeid__fieldslist =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	o->_brl_reflection_ttypeid__globalslist =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	o->_brl_reflection_ttypeid__functionslist =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	o->_brl_reflection_ttypeid__methodslist =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	(brl_reflection_TTypeId__nameMap)->clas->m_Insert_TObjectTObject((struct brl_map_TMap_obj*)brl_reflection_TTypeId__nameMap,(BBOBJECT)bbStringToLower((BBSTRING)o->_brl_reflection_ttypeid__name ),(BBOBJECT)o);
	if(bbt_class){
		(brl_reflection_TTypeId__classMap)->clas->m_Insert_pbTObject((struct brl_map_ptrmap_TPtrMap_obj*)brl_reflection_TTypeId__classMap,bbt_class,(BBOBJECT)o);
	}
	return (struct brl_reflection_TTypeId_obj*)o;
}
BBINT _brl_reflection_TTypeId_InitMeta_S(struct brl_reflection_TTypeId_obj* o,BBSTRING bbt_meta){
	o->_brl_reflection_ttypeid__meta =bbt_meta;
	o->_brl_reflection_ttypeid__metamap =(struct brl_map_stringmap_TStringMap_obj*)brl_reflection_ExtractMetaMap(bbt_meta);
	return 0;
}
struct brl_reflection_TTypeId_obj* _brl_reflection_TTypeId_SetClass_pb(struct brl_reflection_TTypeId_obj* o,BBBYTE* bbt_class){
	BBSTRING bbt_name=bbStringFromCString(bbRefClassDebugScopeName(bbt_class));
	BBSTRING bbt_meta=&bbEmptyString;
	BBINT bbt_i=bbStringFind((BBSTRING)bbt_name,&_s44,0);
	if(bbt_i!=-1){
		bbt_meta=bbStringSlice(bbt_name,(bbt_i+1),((bbt_name->length)-1));
		bbt_name=bbStringSlice(bbt_name,0,bbt_i);
	}
	o->_brl_reflection_ttypeid__name =bbt_name;
	((struct brl_reflection_TTypeId_obj*)o)->clas->m_InitMeta_S((struct brl_reflection_TTypeId_obj*)o,bbt_meta);
	o->_brl_reflection_ttypeid__class =bbt_class;
	(brl_reflection_TTypeId__nameMap)->clas->m_Insert_TObjectTObject((struct brl_map_TMap_obj*)brl_reflection_TTypeId__nameMap,(BBOBJECT)bbStringToLower((BBSTRING)o->_brl_reflection_ttypeid__name ),(BBOBJECT)o);
	(brl_reflection_TTypeId__classMap)->clas->m_Insert_pbTObject((struct brl_map_ptrmap_TPtrMap_obj*)brl_reflection_TTypeId__classMap,bbt_class,(BBOBJECT)o);
	return (struct brl_reflection_TTypeId_obj*)o;
}
struct brl_reflection_TTypeId_obj* _brl_reflection_TTypeId_SetInterface_pb(struct brl_reflection_TTypeId_obj* o,BBBYTE* bbt_ifc){
	BBSTRING bbt_name=bbStringFromCString(bbInterfaceName(bbt_ifc));
	BBSTRING bbt_meta=&bbEmptyString;
	BBINT bbt_i=bbStringFind((BBSTRING)bbt_name,&_s44,0);
	if(bbt_i!=-1){
		bbt_meta=bbStringSlice(bbt_name,(bbt_i+1),((bbt_name->length)-1));
		bbt_name=bbStringSlice(bbt_name,0,bbt_i);
	}
	o->_brl_reflection_ttypeid__name =bbt_name;
	((struct brl_reflection_TTypeId_obj*)o)->clas->m_InitMeta_S((struct brl_reflection_TTypeId_obj*)o,bbt_meta);
	o->_brl_reflection_ttypeid__interface =bbt_ifc;
	o->_brl_reflection_ttypeid__class =bbInterfaceClass(bbt_ifc);
	(brl_reflection_TTypeId__nameMap)->clas->m_Insert_TObjectTObject((struct brl_map_TMap_obj*)brl_reflection_TTypeId__nameMap,(BBOBJECT)bbStringToLower((BBSTRING)o->_brl_reflection_ttypeid__name ),(BBOBJECT)o);
	(brl_reflection_TTypeId__interfaceMap)->clas->m_Insert_pbTObject((struct brl_map_ptrmap_TPtrMap_obj*)brl_reflection_TTypeId__interfaceMap,bbt_ifc,(BBOBJECT)o);
	return (struct brl_reflection_TTypeId_obj*)o;
}
BBINT brl_reflection_TTypeId__Update_i(){
	BBINT bbt_count=0;
	BBLONG** bbt_p=((BBLONG**)bbObjectRegisteredTypes((int*)(&bbt_count)));
	if(bbt_count==brl_reflection_TTypeId__count){
		return 0;
	}
	struct brl_linkedlist_TList_obj* bbt_list=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	{
		BBINT bbt_i=brl_reflection_TTypeId__count;
		BBINT bbt_=bbt_count;
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			struct brl_reflection_TTypeId_obj* bbt_ty=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_SetClass_pb((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),((BBBYTE*)bbt_p[bbt_i]));
			(bbt_list)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_ty);
		}
	}
	brl_reflection_TTypeId__count=bbt_count;
	brl_reflection_TTypeId__UpdateInterfaces_i();
	struct brl_linkedlist_TListEnum_obj* bbt_2=(struct brl_linkedlist_TListEnum_obj*)(bbt_list)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_list);
	while((bbt_2)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_2)!=0){
		struct brl_reflection_TTypeId_obj* bbt_t=(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectDowncast((BBOBJECT)(bbt_2)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_2),(BBClass*)&brl_reflection_TTypeId));
		if(bbt_t==&bbNullObject){
			continue;
		}
		(bbt_t)->clas->m__Resolve((struct brl_reflection_TTypeId_obj*)bbt_t);
	}
	return 0;
}
BBINT brl_reflection_TTypeId__UpdateInterfaces_i(){
	BBINT bbt_count=0;
	BBLONG** bbt_p=((BBLONG**)bbObjectRegisteredInterfaces((int*)(&bbt_count)));
	if(bbt_count==brl_reflection_TTypeId__icount){
		return 0;
	}
	struct brl_linkedlist_TList_obj* bbt_list=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	{
		BBINT bbt_i=brl_reflection_TTypeId__icount;
		BBINT bbt_=bbt_count;
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			struct brl_reflection_TTypeId_obj* bbt_ty=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_SetInterface_pb((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),((BBBYTE*)bbt_p[bbt_i]));
			(bbt_list)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_ty);
		}
	}
	brl_reflection_TTypeId__icount=bbt_count;
	struct brl_linkedlist_TListEnum_obj* bbt_2=(struct brl_linkedlist_TListEnum_obj*)(bbt_list)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_list);
	while((bbt_2)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_2)!=0){
		struct brl_reflection_TTypeId_obj* bbt_t=(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectDowncast((BBOBJECT)(bbt_2)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_2),(BBClass*)&brl_reflection_TTypeId));
		if(bbt_t==&bbNullObject){
			continue;
		}
		(bbt_t)->clas->m__Resolve((struct brl_reflection_TTypeId_obj*)bbt_t);
	}
	return 0;
}
BBINT _brl_reflection_TTypeId__Resolve(struct brl_reflection_TTypeId_obj* o){
	if((((BBObject*)o->_brl_reflection_ttypeid__fields )!= &bbNullObject) || !(o->_brl_reflection_ttypeid__class )){
		return 0;
	}
	o->_brl_reflection_ttypeid__consts =(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	o->_brl_reflection_ttypeid__fields =(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	o->_brl_reflection_ttypeid__globals =(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	o->_brl_reflection_ttypeid__functions =(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	o->_brl_reflection_ttypeid__methods =(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	o->_brl_reflection_ttypeid__constslist =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	o->_brl_reflection_ttypeid__fieldslist =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	o->_brl_reflection_ttypeid__globalslist =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	o->_brl_reflection_ttypeid__functionslist =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	o->_brl_reflection_ttypeid__methodslist =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	o->_brl_reflection_ttypeid__interfaces =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	if(!(o->_brl_reflection_ttypeid__interface )){
		o->_brl_reflection_ttypeid__super =(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectDowncast((BBOBJECT)(brl_reflection_TTypeId__classMap)->clas->m_ValueForKey_pb((struct brl_map_ptrmap_TPtrMap_obj*)brl_reflection_TTypeId__classMap,bbRefClassSuper(o->_brl_reflection_ttypeid__class )),(BBClass*)&brl_reflection_TTypeId));
	}
	if(!(((BBObject*)o->_brl_reflection_ttypeid__super )!= &bbNullObject)){
		o->_brl_reflection_ttypeid__super =(struct brl_reflection_TTypeId_obj*)brl_reflection_ObjectTypeId;
	}
	if(!(((BBObject*)o->_brl_reflection_ttypeid__super ->_brl_reflection_ttypeid__derived )!= &bbNullObject)){
		o->_brl_reflection_ttypeid__super ->_brl_reflection_ttypeid__derived =(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	}
	struct brl_linkedlist_TList_obj* bbt_;
	(((struct brl_linkedlist_TList_obj*)(bbt_ = o->_brl_reflection_ttypeid__super ->_brl_reflection_ttypeid__derived ))->clas)->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_,(BBOBJECT)o);
	BBBYTE* bbt_p=bbRefClassDebugDecl(o->_brl_reflection_ttypeid__class );
	while(bbDebugDeclKind(bbt_p)!=0){
		BBSTRING bbt_id=bbStringFromCString(bbDebugDeclName(bbt_p));
		BBSTRING bbt_ty=bbStringFromCString(bbDebugDeclType(bbt_p));
		BBSTRING bbt_meta=&bbEmptyString;
		BBINT bbt_i=bbStringFind((BBSTRING)bbt_ty,&_s44,0);
		if(bbt_i!=-1){
			bbt_meta=bbStringSlice(bbt_ty,(bbt_i+1),((bbt_ty->length)-1));
			bbt_ty=bbStringSlice(bbt_ty,0,bbt_i);
		}
		BBINT bbt_2=bbDebugDeclKind(bbt_p);
		if(bbt_2==1){
			struct brl_reflection_TTypeId_obj* bbt_tt=(struct brl_reflection_TTypeId_obj*)brl_reflection_TypeIdForTag(bbt_ty);
			if(((BBObject*)bbt_tt)!= &bbNullObject){
				struct brl_reflection_TConstant_obj* bbt_t=(struct brl_reflection_TConstant_obj*)brl_reflection_TConstant.m_Init_STTTypeIdSS((struct brl_reflection_TConstant_obj*)((struct brl_reflection_TConstant_obj*)bbObjectNew((BBClass *)&brl_reflection_TConstant)),bbt_id,(struct brl_reflection_TTypeId_obj*)bbt_tt,bbt_meta,bbDebugDeclConstValue(bbt_p));
				(o->_brl_reflection_ttypeid__constslist )->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__constslist ,(BBOBJECT)bbt_t);
				(o->_brl_reflection_ttypeid__consts )->clas->m_Insert_STObject((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__consts ,(bbt_t)->clas->m_NameLower((struct brl_reflection_TMember_obj*)bbt_t),(BBOBJECT)bbt_t);
			}
		}else{
			if(bbt_2==3){
				struct brl_reflection_TTypeId_obj* bbt_typeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TypeIdForTag(bbt_ty);
				if(((BBObject*)bbt_typeId)!= &bbNullObject){
					struct brl_reflection_TField_obj* bbt_t2=(struct brl_reflection_TField_obj*)brl_reflection_TField.m_Init_STTTypeIdSi((struct brl_reflection_TField_obj*)((struct brl_reflection_TField_obj*)bbObjectNew((BBClass *)&brl_reflection_TField)),bbt_id,(struct brl_reflection_TTypeId_obj*)bbt_typeId,bbt_meta,bbDebugDeclFieldOffset(bbt_p));
					(o->_brl_reflection_ttypeid__fieldslist )->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__fieldslist ,(BBOBJECT)bbt_t2);
					(o->_brl_reflection_ttypeid__fields )->clas->m_Insert_STObject((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__fields ,(bbt_t2)->clas->m_NameLower((struct brl_reflection_TMember_obj*)bbt_t2),(BBOBJECT)bbt_t2);
				}
			}else{
				if(bbt_2==4){
					struct brl_reflection_TTypeId_obj* bbt_typeId2=(struct brl_reflection_TTypeId_obj*)brl_reflection_TypeIdForTag(bbt_ty);
					if(((BBObject*)bbt_typeId2)!= &bbNullObject){
						struct brl_reflection_TGlobal_obj* bbt_t3=(struct brl_reflection_TGlobal_obj*)brl_reflection_TGlobal.m_Init_STTTypeIdSpb((struct brl_reflection_TGlobal_obj*)((struct brl_reflection_TGlobal_obj*)bbObjectNew((BBClass *)&brl_reflection_TGlobal)),bbt_id,(struct brl_reflection_TTypeId_obj*)bbt_typeId2,bbt_meta,bbDebugDeclVarAddress(bbt_p));
						(o->_brl_reflection_ttypeid__globalslist )->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__globalslist ,(BBOBJECT)bbt_t3);
						(o->_brl_reflection_ttypeid__globals )->clas->m_Insert_STObject((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__globals ,(bbt_t3)->clas->m_NameLower((struct brl_reflection_TMember_obj*)bbt_t3),(BBOBJECT)bbt_t3);
					}
				}else{
					if((bbt_2==6) || (bbt_2==7)){
						BBARRAY bbt_t4=bbStringSplit((BBSTRING)bbt_ty,&_s6);
						struct brl_reflection_TTypeId_obj* bbt_retType=(struct brl_reflection_TTypeId_obj*)brl_reflection_TypeIdForTag(((BBSTRING*)BBARRAYDATA(bbt_t4,1))[1U]);
						if(((BBObject*)bbt_retType)!= &bbNullObject){
							BBARRAY bbt_argTypes=(&bbEmptyArray);
							if((((BBSTRING*)BBARRAYDATA(bbt_t4,1))[0U]->length)>1){
								BBINT bbt_i2=0;
								BBINT bbt_b=0;
								BBSTRING bbt_q=bbStringSlice(((BBSTRING*)BBARRAYDATA(bbt_t4,1))[0U],1,(((BBSTRING*)BBARRAYDATA(bbt_t4,1))[0U])->length);
								struct brl_linkedlist_TList_obj* bbt_args=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
								while(bbt_i2<(bbt_q->length)){
									BBINT bbt_3=(bbt_q)->buf[((BBUINT)bbt_i2)];
									if(bbt_3==44){
										(bbt_args)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_args,(BBOBJECT)bbStringSlice(bbt_q,bbt_b,bbt_i2));
										bbt_i2+=1;
										bbt_b=bbt_i2;
									}else{
										if(bbt_3==91){
											bbt_i2+=1;
											while((bbt_i2<(bbt_q->length)) && ((bbt_q)->buf[((BBUINT)bbt_i2)]==44)){
												bbt_i2+=1;
											}
										}else{
											bbt_i2+=1;
										}
									}
								}
								if(bbt_b<(bbt_q->length)){
									(bbt_args)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_args,(BBOBJECT)bbStringSlice(bbt_q,bbt_b,(bbt_q->length)));
								}
								bbt_argTypes=bbArrayNew1D(":TTypeId", (bbt_args)->clas->m_Count((struct brl_linkedlist_TList_obj*)bbt_args));
								bbt_i2=0;
								struct brl_linkedlist_TListEnum_obj* bbt_4=(struct brl_linkedlist_TListEnum_obj*)(bbt_args)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_args);
								while((bbt_4)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_4)!=0){
									BBSTRING bbt_arg=((BBString *)bbObjectStringcast((BBOBJECT)(bbt_4)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_4)));
									if(bbStringEquals(bbt_arg, (&bbEmptyString))==1){
										continue;
									}
									((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_argTypes,1))[((BBUINT)bbt_i2)]=(struct brl_reflection_TTypeId_obj*)brl_reflection_TypeIdForTag(bbt_arg);
									if(!(((BBObject*)((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_argTypes,1))[((BBUINT)bbt_i2)])!= &bbNullObject)){
										bbt_retType=(struct brl_reflection_TTypeId_obj*)&bbNullObject;
									}
									bbt_i2+=1;
								}
							}
							if(((BBObject*)bbt_retType)!= &bbNullObject){
								if(bbDebugDeclKind(bbt_p)==6){
									struct brl_reflection_TMethod_obj* bbt_t5=(struct brl_reflection_TMethod_obj*)brl_reflection_TMethod.m_Init_STTTypeIdSTTTypeIdpbaTTTypeId((struct brl_reflection_TMethod_obj*)((struct brl_reflection_TMethod_obj*)bbObjectNew((BBClass *)&brl_reflection_TMethod)),bbt_id,(struct brl_reflection_TTypeId_obj*)brl_reflection_TypeIdForTag(bbt_ty),bbt_meta,(struct brl_reflection_TTypeId_obj*)o,bbDebugDeclVarAddress(bbt_p),bbt_argTypes);
									(o->_brl_reflection_ttypeid__methodslist )->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__methodslist ,(BBOBJECT)bbt_t5);
									(o->_brl_reflection_ttypeid__methods )->clas->m_Insert_STObject((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__methods ,(bbt_t5)->clas->m_NameLower((struct brl_reflection_TMember_obj*)bbt_t5),(BBOBJECT)bbt_t5);
								}else{
									struct brl_reflection_TFunction_obj* bbt_t6=(struct brl_reflection_TFunction_obj*)brl_reflection_TFunction.m_Init_STTTypeIdSTTTypeIdpbaTTTypeId((struct brl_reflection_TFunction_obj*)((struct brl_reflection_TFunction_obj*)bbObjectNew((BBClass *)&brl_reflection_TFunction)),bbt_id,(struct brl_reflection_TTypeId_obj*)brl_reflection_TypeIdForTag(bbt_ty),bbt_meta,(struct brl_reflection_TTypeId_obj*)o,bbDebugDeclVarAddress(bbt_p),bbt_argTypes);
									(o->_brl_reflection_ttypeid__functionslist )->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__functionslist ,(BBOBJECT)bbt_t6);
									(o->_brl_reflection_ttypeid__functions )->clas->m_Insert_STObject((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_ttypeid__functions ,(bbt_t6)->clas->m_NameLower((struct brl_reflection_TMember_obj*)bbt_t6),(BBOBJECT)bbt_t6);
								}
							}
						}
					}
				}
			}
		}
		bbt_p=bbDebugDeclNext(bbt_p);
	}
	BBINT bbt_impInt=bbObjectImplementsInterfaces(o->_brl_reflection_ttypeid__class );
	if(bbt_impInt!=0){
		BBINT bbt_imps=bbObjectImplementedCount(o->_brl_reflection_ttypeid__class );
		if(bbt_imps>0){
			{
				BBINT bbt_i3=0;
				BBINT bbt_5=bbt_imps;
				for(;(bbt_i3<bbt_5);bbt_i3=(bbt_i3+1)){
					(o->_brl_reflection_ttypeid__interfaces )->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)o->_brl_reflection_ttypeid__interfaces ,(BBOBJECT)(brl_reflection_TTypeId__interfaceMap)->clas->m_ValueForKey_pb((struct brl_map_ptrmap_TPtrMap_obj*)brl_reflection_TTypeId__interfaceMap,bbObjectImplementedInterface(o->_brl_reflection_ttypeid__class ,bbt_i3)));
				}
			}
		}
	}
	return 0;
}
struct brl_map_TMap_obj* brl_reflection_TTypeId__nameMap;
struct brl_map_ptrmap_TPtrMap_obj* brl_reflection_TTypeId__classMap;
BBINT brl_reflection_TTypeId__count;
BBINT brl_reflection_TTypeId__icount;
struct brl_map_ptrmap_TPtrMap_obj* brl_reflection_TTypeId__interfaceMap;
struct BBDebugScope_109 brl_reflection_TTypeId_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TTypeId",
	{
		{
			BBDEBUGDECL_FIELD,
			"_name",
			"$",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__name)
		},
		{
			BBDEBUGDECL_FIELD,
			"_meta",
			"$",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__meta)
		},
		{
			BBDEBUGDECL_FIELD,
			"_metaMap",
			":TStringMap",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__metamap)
		},
		{
			BBDEBUGDECL_FIELD,
			"_class",
			"*b",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__class)
		},
		{
			BBDEBUGDECL_FIELD,
			"_interface",
			"*b",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__interface)
		},
		{
			BBDEBUGDECL_FIELD,
			"_size",
			"i",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__size)
		},
		{
			BBDEBUGDECL_FIELD,
			"_consts",
			":TStringMap",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__consts)
		},
		{
			BBDEBUGDECL_FIELD,
			"_fields",
			":TStringMap",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__fields)
		},
		{
			BBDEBUGDECL_FIELD,
			"_globals",
			":TStringMap",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__globals)
		},
		{
			BBDEBUGDECL_FIELD,
			"_functions",
			":TStringMap",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__functions)
		},
		{
			BBDEBUGDECL_FIELD,
			"_methods",
			":TStringMap",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__methods)
		},
		{
			BBDEBUGDECL_FIELD,
			"_constsList",
			":TList",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__constslist)
		},
		{
			BBDEBUGDECL_FIELD,
			"_fieldsList",
			":TList",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__fieldslist)
		},
		{
			BBDEBUGDECL_FIELD,
			"_globalsList",
			":TList",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__globalslist)
		},
		{
			BBDEBUGDECL_FIELD,
			"_functionsList",
			":TList",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__functionslist)
		},
		{
			BBDEBUGDECL_FIELD,
			"_methodsList",
			":TList",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__methodslist)
		},
		{
			BBDEBUGDECL_FIELD,
			"_interfaces",
			":TList",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__interfaces)
		},
		{
			BBDEBUGDECL_FIELD,
			"_super",
			":TTypeId",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__super)
		},
		{
			BBDEBUGDECL_FIELD,
			"_derived",
			":TList",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__derived)
		},
		{
			BBDEBUGDECL_FIELD,
			"_arrayType",
			"[]:TTypeId",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__arraytype)
		},
		{
			BBDEBUGDECL_FIELD,
			"_elementType",
			":TTypeId",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__elementtype)
		},
		{
			BBDEBUGDECL_FIELD,
			"_typeTag",
			"*b",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__typetag)
		},
		{
			BBDEBUGDECL_FIELD,
			"_pointerType",
			":TTypeId",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__pointertype)
		},
		{
			BBDEBUGDECL_FIELD,
			"_functionType",
			":TStringMap",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__functiontype)
		},
		{
			BBDEBUGDECL_FIELD,
			"_argTypes",
			"[]:TTypeId",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__argtypes)
		},
		{
			BBDEBUGDECL_FIELD,
			"_retType",
			":TTypeId",
			.field_offset=offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__rettype)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"_count",
			"i",
			.var_address=(void*)&brl_reflection_TTypeId__count
		},
		{
			BBDEBUGDECL_GLOBAL,
			"_nameMap",
			":TMap",
			.var_address=(void*)&brl_reflection_TTypeId__nameMap
		},
		{
			BBDEBUGDECL_GLOBAL,
			"_classMap",
			":TPtrMap",
			.var_address=(void*)&brl_reflection_TTypeId__classMap
		},
		{
			BBDEBUGDECL_GLOBAL,
			"_icount",
			"i",
			.var_address=(void*)&brl_reflection_TTypeId__icount
		},
		{
			BBDEBUGDECL_GLOBAL,
			"_interfaceMap",
			":TPtrMap",
			.var_address=(void*)&brl_reflection_TTypeId__interfaceMap
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_reflection_TTypeId_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Name",
			"()$",
			.var_address=(void*)&_brl_reflection_TTypeId_Name
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"MetaData",
			"($)$",
			.var_address=(void*)&_brl_reflection_TTypeId_MetaData_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasMetaData",
			"($)i",
			.var_address=(void*)&_brl_reflection_TTypeId_HasMetaData_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SuperType",
			"():TTypeId",
			.var_address=(void*)&_brl_reflection_TTypeId_SuperType
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ArrayType",
			"(i):TTypeId",
			.var_address=(void*)&_brl_reflection_TTypeId_ArrayType_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ElementType",
			"():TTypeId",
			.var_address=(void*)&_brl_reflection_TTypeId_ElementType
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PointerType",
			"():TTypeId",
			.var_address=(void*)&_brl_reflection_TTypeId_PointerType
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FunctionType",
			"([]:TTypeId):TTypeId",
			.var_address=(void*)&_brl_reflection_TTypeId_FunctionType_aTTTypeId
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReturnType",
			"():TTypeId",
			.var_address=(void*)&_brl_reflection_TTypeId_ReturnType
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ArgTypes",
			"()[]:TTypeId",
			.var_address=(void*)&_brl_reflection_TTypeId_ArgTypes
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ExtendsType",
			"(:TTypeId)i",
			.var_address=(void*)&_brl_reflection_TTypeId_ExtendsType_TTTypeId
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"DerivedTypes",
			"():TList",
			.var_address=(void*)&_brl_reflection_TTypeId_DerivedTypes
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NewObject",
			"():Object",
			.var_address=(void*)&_brl_reflection_TTypeId_NewObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsInterface",
			"()i",
			.var_address=(void*)&_brl_reflection_TTypeId_IsInterface
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Constants",
			"():TStringMap",
			.var_address=(void*)&_brl_reflection_TTypeId_Constants
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Fields",
			"():TStringMap",
			.var_address=(void*)&_brl_reflection_TTypeId_Fields
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Globals",
			"():TStringMap",
			.var_address=(void*)&_brl_reflection_TTypeId_Globals
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Functions",
			"():TStringMap",
			.var_address=(void*)&_brl_reflection_TTypeId_Functions
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Methods",
			"():TStringMap",
			.var_address=(void*)&_brl_reflection_TTypeId_Methods
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Interfaces",
			"():TList",
			.var_address=(void*)&_brl_reflection_TTypeId_Interfaces
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FindConstant",
			"($):TConstant",
			.var_address=(void*)&_brl_reflection_TTypeId_FindConstant_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FindField",
			"($):TField",
			.var_address=(void*)&_brl_reflection_TTypeId_FindField_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FindGlobal",
			"($):TGlobal",
			.var_address=(void*)&_brl_reflection_TTypeId_FindGlobal_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FindFunction",
			"($):TFunction",
			.var_address=(void*)&_brl_reflection_TTypeId_FindFunction_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FindMethod",
			"($):TMethod",
			.var_address=(void*)&_brl_reflection_TTypeId_FindMethod_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EnumConstants",
			"(:TList):TList",
			.var_address=(void*)&_brl_reflection_TTypeId_EnumConstants_TTList
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EnumFields",
			"(:TList):TList",
			.var_address=(void*)&_brl_reflection_TTypeId_EnumFields_TTList
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EnumGlobals",
			"(:TList):TList",
			.var_address=(void*)&_brl_reflection_TTypeId_EnumGlobals_TTList
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EnumFunctions",
			"(:TList):TList",
			.var_address=(void*)&_brl_reflection_TTypeId_EnumFunctions_TTList
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EnumMethods",
			"(:TList):TList",
			.var_address=(void*)&_brl_reflection_TTypeId_EnumMethods_TTList
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NewArray",
			"(i,[]i):Object",
			.var_address=(void*)&_brl_reflection_TTypeId_NewArray_iai
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ArrayLength",
			"(:Object,i)i",
			.var_address=(void*)&_brl_reflection_TTypeId_ArrayLength_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NullArray",
			"():Object",
			.var_address=(void*)&_brl_reflection_TTypeId_NullArray
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ArrayDimensions",
			"(:Object)i",
			.var_address=(void*)&_brl_reflection_TTypeId_ArrayDimensions_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ArraySlice",
			"(:Object,i,i):Object",
			.var_address=(void*)&_brl_reflection_TTypeId_ArraySlice_TObjectii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetArrayElement",
			"(:Object,i):Object",
			.var_address=(void*)&_brl_reflection_TTypeId_GetArrayElement_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetStringArrayElement",
			"(:Object,i)$",
			.var_address=(void*)&_brl_reflection_TTypeId_GetStringArrayElement_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetByteArrayElement",
			"(:Object,i)b",
			.var_address=(void*)&_brl_reflection_TTypeId_GetByteArrayElement_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetShortArrayElement",
			"(:Object,i)s",
			.var_address=(void*)&_brl_reflection_TTypeId_GetShortArrayElement_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetIntArrayElement",
			"(:Object,i)i",
			.var_address=(void*)&_brl_reflection_TTypeId_GetIntArrayElement_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetUIntArrayElement",
			"(:Object,i)u",
			.var_address=(void*)&_brl_reflection_TTypeId_GetUIntArrayElement_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetLongArrayElement",
			"(:Object,i)l",
			.var_address=(void*)&_brl_reflection_TTypeId_GetLongArrayElement_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetULongArrayElement",
			"(:Object,i)y",
			.var_address=(void*)&_brl_reflection_TTypeId_GetULongArrayElement_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetSizeTArrayElement",
			"(:Object,i)t",
			.var_address=(void*)&_brl_reflection_TTypeId_GetSizeTArrayElement_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetFloatArrayElement",
			"(:Object,i)f",
			.var_address=(void*)&_brl_reflection_TTypeId_GetFloatArrayElement_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetDoubleArrayElement",
			"(:Object,i)d",
			.var_address=(void*)&_brl_reflection_TTypeId_GetDoubleArrayElement_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetArrayElement",
			"(:Object,i,:Object)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetArrayElement_TObjectiTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetArrayElement",
			"(:Object,i,b)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetArrayElement_TObjectib
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetArrayElement",
			"(:Object,i,s)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetArrayElement_TObjectis
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetArrayElement",
			"(:Object,i,i)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetArrayElement_TObjectii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetArrayElement",
			"(:Object,i,u)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetArrayElement_TObjectiu
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetArrayElement",
			"(:Object,i,l)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetArrayElement_TObjectil
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetArrayElement",
			"(:Object,i,y)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetArrayElement_TObjectiy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetArrayElement",
			"(:Object,i,t)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetArrayElement_TObjectiz
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetArrayElement",
			"(:Object,i,f)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetArrayElement_TObjectif
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetArrayElement",
			"(:Object,i,d)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetArrayElement_TObjectid
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetByteArrayElement",
			"(:Object,i,b)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetByteArrayElement_TObjectib
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShortArrayElement",
			"(:Object,i,s)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetShortArrayElement_TObjectis
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetIntArrayElement",
			"(:Object,i,i)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetIntArrayElement_TObjectii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetUIntArrayElement",
			"(:Object,i,u)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetUIntArrayElement_TObjectiu
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLongArrayElement",
			"(:Object,i,l)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetLongArrayElement_TObjectil
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetULongArrayElement",
			"(:Object,i,y)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetULongArrayElement_TObjectiy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSizeTArrayElement",
			"(:Object,i,t)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetSizeTArrayElement_TObjectiz
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFloatArrayElement",
			"(:Object,i,f)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetFloatArrayElement_TObjectif
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetDoubleArrayElement",
			"(:Object,i,d)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetDoubleArrayElement_TObjectid
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetStringArrayElement",
			"(:Object,i,$)i",
			.var_address=(void*)&_brl_reflection_TTypeId_SetStringArrayElement_TObjectiS
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"ForName",
			"($):TTypeId",
			.var_address=(void*)&brl_reflection_TTypeId_ForName_TTTypeId_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"ForObject",
			"(:Object):TTypeId",
			.var_address=(void*)&brl_reflection_TTypeId_ForObject_TTTypeId_TObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"EnumTypes",
			"():TList",
			.var_address=(void*)&brl_reflection_TTypeId_EnumTypes_TTList
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"EnumInterfaces",
			"():TList",
			.var_address=(void*)&brl_reflection_TTypeId_EnumInterfaces_TTList
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Init",
			"($,i,*b,:TTypeId):TTypeId",
			.var_address=(void*)&_brl_reflection_TTypeId_Init_SipbTTTypeId
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"InitMeta",
			"($)i",
			.var_address=(void*)&_brl_reflection_TTypeId_InitMeta_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetClass",
			"(*b):TTypeId",
			.var_address=(void*)&_brl_reflection_TTypeId_SetClass_pb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetInterface",
			"(*b):TTypeId",
			.var_address=(void*)&_brl_reflection_TTypeId_SetInterface_pb
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"_Update",
			"()i",
			.var_address=(void*)&brl_reflection_TTypeId__Update_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"_UpdateInterfaces",
			"()i",
			.var_address=(void*)&brl_reflection_TTypeId__UpdateInterfaces_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_Resolve",
			"()i",
			.var_address=(void*)&_brl_reflection_TTypeId__Resolve
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_reflection_TTypeId brl_reflection_TTypeId={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_reflection_TTypeId_scope,
	sizeof(struct brl_reflection_TTypeId_obj),
	(void (*)(BBOBJECT))_brl_reflection_TTypeId_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_reflection_TTypeId_obj,_brl_reflection_ttypeid__rettype) - sizeof(void*) + sizeof(struct brl_reflection_TTypeId_obj*)
	,0
	,_brl_reflection_TTypeId_Name
	,_brl_reflection_TTypeId_MetaData_S
	,_brl_reflection_TTypeId_HasMetaData_S
	,_brl_reflection_TTypeId_SuperType
	,_brl_reflection_TTypeId_ArrayType_i
	,_brl_reflection_TTypeId_ElementType
	,_brl_reflection_TTypeId_PointerType
	,_brl_reflection_TTypeId_FunctionType_aTTTypeId
	,_brl_reflection_TTypeId_ReturnType
	,_brl_reflection_TTypeId_ArgTypes
	,_brl_reflection_TTypeId_ExtendsType_TTTypeId
	,_brl_reflection_TTypeId_DerivedTypes
	,_brl_reflection_TTypeId_NewObject
	,_brl_reflection_TTypeId_IsInterface
	,_brl_reflection_TTypeId_Constants
	,_brl_reflection_TTypeId_Fields
	,_brl_reflection_TTypeId_Globals
	,_brl_reflection_TTypeId_Functions
	,_brl_reflection_TTypeId_Methods
	,_brl_reflection_TTypeId_Interfaces
	,_brl_reflection_TTypeId_FindConstant_S
	,_brl_reflection_TTypeId_FindField_S
	,_brl_reflection_TTypeId_FindGlobal_S
	,_brl_reflection_TTypeId_FindFunction_S
	,_brl_reflection_TTypeId_FindMethod_S
	,_brl_reflection_TTypeId_EnumConstants_TTList
	,_brl_reflection_TTypeId_EnumFields_TTList
	,_brl_reflection_TTypeId_EnumGlobals_TTList
	,_brl_reflection_TTypeId_EnumFunctions_TTList
	,_brl_reflection_TTypeId_EnumMethods_TTList
	,_brl_reflection_TTypeId_NewArray_iai
	,_brl_reflection_TTypeId_ArrayLength_TObjecti
	,_brl_reflection_TTypeId_NullArray
	,_brl_reflection_TTypeId_ArrayDimensions_TObject
	,_brl_reflection_TTypeId_ArraySlice_TObjectii
	,_brl_reflection_TTypeId_GetArrayElement_TObjecti
	,_brl_reflection_TTypeId_GetStringArrayElement_TObjecti
	,_brl_reflection_TTypeId_GetByteArrayElement_TObjecti
	,_brl_reflection_TTypeId_GetShortArrayElement_TObjecti
	,_brl_reflection_TTypeId_GetIntArrayElement_TObjecti
	,_brl_reflection_TTypeId_GetUIntArrayElement_TObjecti
	,_brl_reflection_TTypeId_GetLongArrayElement_TObjecti
	,_brl_reflection_TTypeId_GetULongArrayElement_TObjecti
	,_brl_reflection_TTypeId_GetSizeTArrayElement_TObjecti
	,_brl_reflection_TTypeId_GetFloatArrayElement_TObjecti
	,_brl_reflection_TTypeId_GetDoubleArrayElement_TObjecti
	,_brl_reflection_TTypeId_SetArrayElement_TObjectiTObject
	,_brl_reflection_TTypeId_SetArrayElement_TObjectib
	,_brl_reflection_TTypeId_SetArrayElement_TObjectis
	,_brl_reflection_TTypeId_SetArrayElement_TObjectii
	,_brl_reflection_TTypeId_SetArrayElement_TObjectiu
	,_brl_reflection_TTypeId_SetArrayElement_TObjectil
	,_brl_reflection_TTypeId_SetArrayElement_TObjectiy
	,_brl_reflection_TTypeId_SetArrayElement_TObjectiz
	,_brl_reflection_TTypeId_SetArrayElement_TObjectif
	,_brl_reflection_TTypeId_SetArrayElement_TObjectid
	,_brl_reflection_TTypeId_SetByteArrayElement_TObjectib
	,_brl_reflection_TTypeId_SetShortArrayElement_TObjectis
	,_brl_reflection_TTypeId_SetIntArrayElement_TObjectii
	,_brl_reflection_TTypeId_SetUIntArrayElement_TObjectiu
	,_brl_reflection_TTypeId_SetLongArrayElement_TObjectil
	,_brl_reflection_TTypeId_SetULongArrayElement_TObjectiy
	,_brl_reflection_TTypeId_SetSizeTArrayElement_TObjectiz
	,_brl_reflection_TTypeId_SetFloatArrayElement_TObjectif
	,_brl_reflection_TTypeId_SetDoubleArrayElement_TObjectid
	,_brl_reflection_TTypeId_SetStringArrayElement_TObjectiS
	,brl_reflection_TTypeId_ForName_TTTypeId_S
	,brl_reflection_TTypeId_ForObject_TTTypeId_TObject
	,brl_reflection_TTypeId_EnumTypes_TTList
	,brl_reflection_TTypeId_EnumInterfaces_TTList
	,_brl_reflection_TTypeId_Init_SipbTTTypeId
	,_brl_reflection_TTypeId_InitMeta_S
	,_brl_reflection_TTypeId_SetClass_pb
	,_brl_reflection_TTypeId_SetInterface_pb
	,brl_reflection_TTypeId__Update_i
	,brl_reflection_TTypeId__UpdateInterfaces_i
	,_brl_reflection_TTypeId__Resolve
};

struct brl_reflection_TTypeId_obj* brl_reflection_ByteTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_ShortTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_IntTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_UIntTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_LongTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_ULongTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_SizetTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_FloatTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_DoubleTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_ObjectTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_StringTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_ArrayTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_VoidTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_PointerTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
struct brl_reflection_TTypeId_obj* brl_reflection_FunctionTypeId=(struct brl_reflection_TTypeId_obj*)(&bbNullObject);
void _brl_reflection_TMember_New(struct brl_reflection_TMember_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_reflection_TMember;
	o->_brl_reflection_tmember__name = &bbEmptyString;
	o->_brl_reflection_tmember__typeid = (struct brl_reflection_TTypeId_obj*)(&bbNullObject);
	o->_brl_reflection_tmember__meta = &bbEmptyString;
	o->_brl_reflection_tmember__namelower = &bbEmptyString;
	o->_brl_reflection_tmember__metamap = (struct brl_map_stringmap_TStringMap_obj*)(&bbNullObject);
}
BBSTRING _brl_reflection_TMember_Name(struct brl_reflection_TMember_obj* o){
	return o->_brl_reflection_tmember__name ;
}
BBSTRING _brl_reflection_TMember_NameLower(struct brl_reflection_TMember_obj* o){
	if(!(o->_brl_reflection_tmember__namelower != &bbEmptyString)){
		o->_brl_reflection_tmember__namelower =bbStringToLower((BBSTRING)o->_brl_reflection_tmember__name );
	}
	return o->_brl_reflection_tmember__namelower ;
}
struct brl_reflection_TTypeId_obj* _brl_reflection_TMember_TypeId(struct brl_reflection_TMember_obj* o){
	return (struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
}
BBSTRING _brl_reflection_TMember_MetaData_S(struct brl_reflection_TMember_obj* o,BBSTRING bbt_key){
	if(!(((BBObject*)o->_brl_reflection_tmember__metamap )!= &bbNullObject) || !(bbt_key!= &bbEmptyString)){
		return o->_brl_reflection_tmember__meta ;
	}
	return ((BBString *)bbObjectStringcast((BBOBJECT)(o->_brl_reflection_tmember__metamap )->clas->m_ValueForKey_S((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_tmember__metamap ,bbt_key)));
}
BBINT _brl_reflection_TMember_HasMetaData_S(struct brl_reflection_TMember_obj* o,BBSTRING bbt_key){
	if(!(((BBObject*)o->_brl_reflection_tmember__metamap )!= &bbNullObject) || !(bbt_key!= &bbEmptyString)){
		return 0;
	}
	return (o->_brl_reflection_tmember__metamap )->clas->m_Contains_S((struct brl_map_stringmap_TStringMap_obj*)o->_brl_reflection_tmember__metamap ,bbt_key);
}
BBINT _brl_reflection_TMember_InitMeta_S(struct brl_reflection_TMember_obj* o,BBSTRING bbt_meta){
	o->_brl_reflection_tmember__meta =bbt_meta;
	o->_brl_reflection_tmember__metamap =(struct brl_map_stringmap_TStringMap_obj*)brl_reflection_ExtractMetaMap(bbt_meta);
	return 0;
}
struct BBDebugScope_12 brl_reflection_TMember_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TMember",
	{
		{
			BBDEBUGDECL_FIELD,
			"_name",
			"$",
			.field_offset=offsetof(struct brl_reflection_TMember_obj,_brl_reflection_tmember__name)
		},
		{
			BBDEBUGDECL_FIELD,
			"_typeId",
			":TTypeId",
			.field_offset=offsetof(struct brl_reflection_TMember_obj,_brl_reflection_tmember__typeid)
		},
		{
			BBDEBUGDECL_FIELD,
			"_meta",
			"$",
			.field_offset=offsetof(struct brl_reflection_TMember_obj,_brl_reflection_tmember__meta)
		},
		{
			BBDEBUGDECL_FIELD,
			"_nameLower",
			"$",
			.field_offset=offsetof(struct brl_reflection_TMember_obj,_brl_reflection_tmember__namelower)
		},
		{
			BBDEBUGDECL_FIELD,
			"_metaMap",
			":TStringMap",
			.field_offset=offsetof(struct brl_reflection_TMember_obj,_brl_reflection_tmember__metamap)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_reflection_TMember_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Name",
			"()$",
			.var_address=(void*)&_brl_reflection_TMember_Name
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NameLower",
			"()$",
			.var_address=(void*)&_brl_reflection_TMember_NameLower
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"TypeId",
			"():TTypeId",
			.var_address=(void*)&_brl_reflection_TMember_TypeId
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"MetaData",
			"($)$",
			.var_address=(void*)&_brl_reflection_TMember_MetaData_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasMetaData",
			"($)i",
			.var_address=(void*)&_brl_reflection_TMember_HasMetaData_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"InitMeta",
			"($)i",
			.var_address=(void*)&_brl_reflection_TMember_InitMeta_S
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_reflection_TMember brl_reflection_TMember={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_reflection_TMember_scope,
	sizeof(struct brl_reflection_TMember_obj),
	(void (*)(BBOBJECT))_brl_reflection_TMember_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_reflection_TMember_obj,_brl_reflection_tmember__metamap) - sizeof(void*) + sizeof(struct brl_map_stringmap_TStringMap_obj*)
	,0
	,_brl_reflection_TMember_Name
	,_brl_reflection_TMember_NameLower
	,_brl_reflection_TMember_TypeId
	,_brl_reflection_TMember_MetaData_S
	,_brl_reflection_TMember_HasMetaData_S
	,_brl_reflection_TMember_InitMeta_S
};

void _brl_reflection_TConstant_New(struct brl_reflection_TConstant_obj* o) {
	_brl_reflection_TMember_New((struct brl_reflection_TMember_obj*)o);
	o->clas = &brl_reflection_TConstant;
	o->_brl_reflection_tconstant__string = &bbEmptyString;
}
struct brl_reflection_TConstant_obj* _brl_reflection_TConstant_Init_STTTypeIdSS(struct brl_reflection_TConstant_obj* o,BBSTRING bbt_name,struct brl_reflection_TTypeId_obj* bbt_typeId,BBSTRING bbt_meta,BBSTRING bbt_str){
	o->_brl_reflection_tmember__name =bbt_name;
	o->_brl_reflection_tmember__typeid =(struct brl_reflection_TTypeId_obj*)bbt_typeId;
	((struct brl_reflection_TMember_obj*)o)->clas->m_InitMeta_S((struct brl_reflection_TMember_obj*)o,bbt_meta);
	o->_brl_reflection_tconstant__string =bbt_str;
	return (struct brl_reflection_TConstant_obj*)o;
}
BBSTRING _brl_reflection_TConstant_GetString(struct brl_reflection_TConstant_obj* o){
	return o->_brl_reflection_tconstant__string ;
}
BBINT _brl_reflection_TConstant_GetInt(struct brl_reflection_TConstant_obj* o){
	return bbStringToInt((BBSTRING)((struct brl_reflection_TConstant_obj*)o)->clas->m_GetString((struct brl_reflection_TConstant_obj*)o));
}
BBINT _brl_reflection_TConstant_GetFloat(struct brl_reflection_TConstant_obj* o){
	return ((BBINT)bbStringToFloat((BBSTRING)((struct brl_reflection_TConstant_obj*)o)->clas->m_GetString((struct brl_reflection_TConstant_obj*)o)));
}
BBLONG _brl_reflection_TConstant_GetLong(struct brl_reflection_TConstant_obj* o){
	return bbStringToLong((BBSTRING)((struct brl_reflection_TConstant_obj*)o)->clas->m_GetString((struct brl_reflection_TConstant_obj*)o));
}
BBSIZET _brl_reflection_TConstant_GetSizet(struct brl_reflection_TConstant_obj* o){
	return bbStringToSizet((BBSTRING)((struct brl_reflection_TConstant_obj*)o)->clas->m_GetString((struct brl_reflection_TConstant_obj*)o));
}
BBINT _brl_reflection_TConstant_GetDouble(struct brl_reflection_TConstant_obj* o){
	return ((BBINT)bbStringToDouble((BBSTRING)((struct brl_reflection_TConstant_obj*)o)->clas->m_GetString((struct brl_reflection_TConstant_obj*)o)));
}
BBBYTE* _brl_reflection_TConstant_GetPointer(struct brl_reflection_TConstant_obj* o){
	return ((BBBYTE*)bbStringToLong((BBSTRING)((struct brl_reflection_TConstant_obj*)o)->clas->m_GetString((struct brl_reflection_TConstant_obj*)o)));
}
struct BBDebugScope_10 brl_reflection_TConstant_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TConstant",
	{
		{
			BBDEBUGDECL_FIELD,
			"_string",
			"$",
			.field_offset=offsetof(struct brl_reflection_TConstant_obj,_brl_reflection_tconstant__string)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_reflection_TConstant_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Init",
			"($,:TTypeId,$,$):TConstant",
			.var_address=(void*)&_brl_reflection_TConstant_Init_STTTypeIdSS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetString",
			"()$",
			.var_address=(void*)&_brl_reflection_TConstant_GetString
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetInt",
			"()i",
			.var_address=(void*)&_brl_reflection_TConstant_GetInt
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetFloat",
			"()i",
			.var_address=(void*)&_brl_reflection_TConstant_GetFloat
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetLong",
			"()l",
			.var_address=(void*)&_brl_reflection_TConstant_GetLong
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetSizet",
			"()t",
			.var_address=(void*)&_brl_reflection_TConstant_GetSizet
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetDouble",
			"()i",
			.var_address=(void*)&_brl_reflection_TConstant_GetDouble
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetPointer",
			"()*b",
			.var_address=(void*)&_brl_reflection_TConstant_GetPointer
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_reflection_TConstant brl_reflection_TConstant={
	&brl_reflection_TMember,
	bbObjectFree,
	(BBDebugScope*)&brl_reflection_TConstant_scope,
	sizeof(struct brl_reflection_TConstant_obj),
	(void (*)(BBOBJECT))_brl_reflection_TConstant_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_reflection_TConstant_obj,_brl_reflection_tconstant__string) - sizeof(void*) + sizeof(BBSTRING)
	,0
	,_brl_reflection_TMember_Name
	,_brl_reflection_TMember_NameLower
	,_brl_reflection_TMember_TypeId
	,_brl_reflection_TMember_MetaData_S
	,_brl_reflection_TMember_HasMetaData_S
	,_brl_reflection_TMember_InitMeta_S
	,_brl_reflection_TConstant_Init_STTTypeIdSS
	,_brl_reflection_TConstant_GetString
	,_brl_reflection_TConstant_GetInt
	,_brl_reflection_TConstant_GetFloat
	,_brl_reflection_TConstant_GetLong
	,_brl_reflection_TConstant_GetSizet
	,_brl_reflection_TConstant_GetDouble
	,_brl_reflection_TConstant_GetPointer
};

void _brl_reflection_TField_New(struct brl_reflection_TField_obj* o) {
	_brl_reflection_TMember_New((struct brl_reflection_TMember_obj*)o);
	o->clas = &brl_reflection_TField;
	o->_brl_reflection_tfield__index = 0;
}
struct brl_reflection_TField_obj* _brl_reflection_TField_Init_STTTypeIdSi(struct brl_reflection_TField_obj* o,BBSTRING bbt_name,struct brl_reflection_TTypeId_obj* bbt_typeId,BBSTRING bbt_meta,BBINT bbt_index){
	o->_brl_reflection_tmember__name =bbt_name;
	o->_brl_reflection_tmember__typeid =(struct brl_reflection_TTypeId_obj*)bbt_typeId;
	((struct brl_reflection_TMember_obj*)o)->clas->m_InitMeta_S((struct brl_reflection_TMember_obj*)o,bbt_meta);
	o->_brl_reflection_tfield__index =bbt_index;
	return (struct brl_reflection_TField_obj*)o;
}
BBOBJECT _brl_reflection_TField_Get_TObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj){
	return (BBOBJECT)brl_reflection__Get(bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index ),(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid );
}
BBBYTE _brl_reflection_TField_GetByte_TObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		return bbt_p[0];
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBBYTE)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBBYTE)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBBYTE)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBBYTE)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBBYTE)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBBYTE)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBBYTE)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBBYTE)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBSHORT _brl_reflection_TField_GetShort_TObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBSHORT)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return bbt_2[0];
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBSHORT)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBSHORT)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBSHORT)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBSHORT)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBSHORT)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBSHORT)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBSHORT)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TField_GetInt_TObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBINT)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBINT)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return bbt_3[0];
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBINT)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBINT)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBINT)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBINT)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBINT)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBINT)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBUINT _brl_reflection_TField_GetUInt_TObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBUINT)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBUINT)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBUINT)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return bbt_4[0];
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBUINT)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBUINT)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBUINT)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBUINT)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBUINT)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0U;
}
BBLONG _brl_reflection_TField_GetLong_TObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBLONG)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBLONG)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBLONG)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBLONG)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return bbt_5[0];
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBLONG)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBLONG)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBLONG)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBLONG)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0LL;
}
BBULONG _brl_reflection_TField_GetULong_TObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBULONG)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBULONG)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBULONG)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBULONG)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBULONG)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return bbt_6[0];
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBULONG)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBULONG)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBULONG)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0ULL;
}
BBSIZET _brl_reflection_TField_GetSizet_TObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBSIZET)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBSIZET)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBSIZET)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBSIZET)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBSIZET)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBSIZET)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return bbt_7[0];
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBSIZET)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBSIZET)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBFLOAT _brl_reflection_TField_GetFloat_TObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBFLOAT)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBFLOAT)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBFLOAT)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBFLOAT)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBFLOAT)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBFLOAT)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBFLOAT)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return bbt_8[0];
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return ((BBFLOAT)bbt_9[0]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return .00000000f;
}
BBDOUBLE _brl_reflection_TField_GetDouble_TObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		return ((BBDOUBLE)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return ((BBDOUBLE)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return ((BBDOUBLE)bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return ((BBDOUBLE)bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return ((BBDOUBLE)bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return ((BBDOUBLE)bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return ((BBDOUBLE)bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return ((BBDOUBLE)bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return bbt_9[0];
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return .0000000000000000;
}
BBSTRING _brl_reflection_TField_GetString_TObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj){
	return ((BBString *)bbObjectStringcast((BBOBJECT)((struct brl_reflection_TField_obj*)o)->clas->m_Get_TObject((struct brl_reflection_TField_obj*)o,(BBOBJECT)bbt_obj)));
}
BBINT _brl_reflection_TField_Set_TObjectTObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBOBJECT bbt_value){
	brl_reflection__Assign(bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index ),(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ,(BBOBJECT)bbt_value);
	return 0;
}
BBINT _brl_reflection_TField_Set_TObjectb(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBBYTE bbt_value){
	((struct brl_reflection_TField_obj*)o)->clas->m_SetByte_TObjectb((struct brl_reflection_TField_obj*)o,(BBOBJECT)bbt_obj,bbt_value);
	return 0;
}
BBINT _brl_reflection_TField_Set_TObjects(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBSHORT bbt_value){
	((struct brl_reflection_TField_obj*)o)->clas->m_SetShort_TObjects((struct brl_reflection_TField_obj*)o,(BBOBJECT)bbt_obj,bbt_value);
	return 0;
}
BBINT _brl_reflection_TField_Set_TObjecti(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBINT bbt_value){
	((struct brl_reflection_TField_obj*)o)->clas->m_SetInt_TObjecti((struct brl_reflection_TField_obj*)o,(BBOBJECT)bbt_obj,bbt_value);
	return 0;
}
BBINT _brl_reflection_TField_Set_TObjectu(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBUINT bbt_value){
	((struct brl_reflection_TField_obj*)o)->clas->m_SetUInt_TObjectu((struct brl_reflection_TField_obj*)o,(BBOBJECT)bbt_obj,bbt_value);
	return 0;
}
BBINT _brl_reflection_TField_Set_TObjectl(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBLONG bbt_value){
	((struct brl_reflection_TField_obj*)o)->clas->m_SetLong_TObjectl((struct brl_reflection_TField_obj*)o,(BBOBJECT)bbt_obj,bbt_value);
	return 0;
}
BBINT _brl_reflection_TField_Set_TObjecty(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBULONG bbt_value){
	((struct brl_reflection_TField_obj*)o)->clas->m_SetULong_TObjecty((struct brl_reflection_TField_obj*)o,(BBOBJECT)bbt_obj,bbt_value);
	return 0;
}
BBINT _brl_reflection_TField_Set_TObjectz(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBSIZET bbt_value){
	((struct brl_reflection_TField_obj*)o)->clas->m_SetSizet_TObjectz((struct brl_reflection_TField_obj*)o,(BBOBJECT)bbt_obj,bbt_value);
	return 0;
}
BBINT _brl_reflection_TField_Set_TObjectf(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBFLOAT bbt_value){
	((struct brl_reflection_TField_obj*)o)->clas->m_SetFloat_TObjectf((struct brl_reflection_TField_obj*)o,(BBOBJECT)bbt_obj,bbt_value);
	return 0;
}
BBINT _brl_reflection_TField_Set_TObjectd(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBDOUBLE bbt_value){
	((struct brl_reflection_TField_obj*)o)->clas->m_SetDouble_TObjectd((struct brl_reflection_TField_obj*)o,(BBOBJECT)bbt_obj,bbt_value);
	return 0;
}
BBINT _brl_reflection_TField_SetObject_TObjectTObject(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBOBJECT bbt_value){
	brl_reflection__Assign(bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index ),(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ,(BBOBJECT)bbt_value);
	return 0;
}
BBINT _brl_reflection_TField_SetByte_TObjectb(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBBYTE bbt_value){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=bbt_value;
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromInt((BBINT)bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TField_SetShort_TObjects(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBSHORT bbt_value){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=bbt_value;
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromInt((BBINT)bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TField_SetInt_TObjecti(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBINT bbt_value){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=bbt_value;
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromInt(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TField_SetUInt_TObjectu(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBUINT bbt_value){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=bbt_value;
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromUInt(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TField_SetLong_TObjectl(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBLONG bbt_value){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=bbt_value;
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromLong(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TField_SetULong_TObjecty(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBULONG bbt_value){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=bbt_value;
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromULong(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TField_SetSizet_TObjectz(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBSIZET bbt_value){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=bbt_value;
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromSizet(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TField_SetFloat_TObjectf(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBFLOAT bbt_value){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=bbt_value;
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=((BBDOUBLE)bbt_value);
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromFloat(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TField_SetDouble_TObjectd(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBDOUBLE bbt_value){
	BBBYTE* bbt_p=bbRefFieldPtr((BBOBJECT)bbt_obj,o->_brl_reflection_tfield__index );
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbt_value);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbt_value);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=((BBINT)bbt_value);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=((BBUINT)bbt_value);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=((BBLONG)bbt_value);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=((BBULONG)bbt_value);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=((BBSIZET)bbt_value);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=((BBFLOAT)bbt_value);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=bbt_value;
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											bbRefAssignObject(bbt_p,(BBOBJECT)bbStringFromDouble(bbt_value));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBINT _brl_reflection_TField_SetString_TObjectS(struct brl_reflection_TField_obj* o,BBOBJECT bbt_obj,BBSTRING bbt_value){
	((struct brl_reflection_TField_obj*)o)->clas->m_Set_TObjectTObject((struct brl_reflection_TField_obj*)o,(BBOBJECT)bbt_obj,(BBOBJECT)bbt_value);
	return 0;
}
struct BBDebugScope_35 brl_reflection_TField_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TField",
	{
		{
			BBDEBUGDECL_FIELD,
			"_index",
			"i",
			.field_offset=offsetof(struct brl_reflection_TField_obj,_brl_reflection_tfield__index)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_reflection_TField_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Init",
			"($,:TTypeId,$,i):TField",
			.var_address=(void*)&_brl_reflection_TField_Init_STTTypeIdSi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Get",
			"(:Object):Object",
			.var_address=(void*)&_brl_reflection_TField_Get_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetByte",
			"(:Object)b",
			.var_address=(void*)&_brl_reflection_TField_GetByte_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetShort",
			"(:Object)s",
			.var_address=(void*)&_brl_reflection_TField_GetShort_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetInt",
			"(:Object)i",
			.var_address=(void*)&_brl_reflection_TField_GetInt_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetUInt",
			"(:Object)u",
			.var_address=(void*)&_brl_reflection_TField_GetUInt_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetLong",
			"(:Object)l",
			.var_address=(void*)&_brl_reflection_TField_GetLong_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetULong",
			"(:Object)y",
			.var_address=(void*)&_brl_reflection_TField_GetULong_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetSizet",
			"(:Object)t",
			.var_address=(void*)&_brl_reflection_TField_GetSizet_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetFloat",
			"(:Object)f",
			.var_address=(void*)&_brl_reflection_TField_GetFloat_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetDouble",
			"(:Object)d",
			.var_address=(void*)&_brl_reflection_TField_GetDouble_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetString",
			"(:Object)$",
			.var_address=(void*)&_brl_reflection_TField_GetString_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Set",
			"(:Object,:Object)i",
			.var_address=(void*)&_brl_reflection_TField_Set_TObjectTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Set",
			"(:Object,b)i",
			.var_address=(void*)&_brl_reflection_TField_Set_TObjectb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Set",
			"(:Object,s)i",
			.var_address=(void*)&_brl_reflection_TField_Set_TObjects
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Set",
			"(:Object,i)i",
			.var_address=(void*)&_brl_reflection_TField_Set_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Set",
			"(:Object,u)i",
			.var_address=(void*)&_brl_reflection_TField_Set_TObjectu
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Set",
			"(:Object,l)i",
			.var_address=(void*)&_brl_reflection_TField_Set_TObjectl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Set",
			"(:Object,y)i",
			.var_address=(void*)&_brl_reflection_TField_Set_TObjecty
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Set",
			"(:Object,t)i",
			.var_address=(void*)&_brl_reflection_TField_Set_TObjectz
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Set",
			"(:Object,f)i",
			.var_address=(void*)&_brl_reflection_TField_Set_TObjectf
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Set",
			"(:Object,d)i",
			.var_address=(void*)&_brl_reflection_TField_Set_TObjectd
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetObject",
			"(:Object,:Object)i",
			.var_address=(void*)&_brl_reflection_TField_SetObject_TObjectTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetByte",
			"(:Object,b)i",
			.var_address=(void*)&_brl_reflection_TField_SetByte_TObjectb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShort",
			"(:Object,s)i",
			.var_address=(void*)&_brl_reflection_TField_SetShort_TObjects
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetInt",
			"(:Object,i)i",
			.var_address=(void*)&_brl_reflection_TField_SetInt_TObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetUInt",
			"(:Object,u)i",
			.var_address=(void*)&_brl_reflection_TField_SetUInt_TObjectu
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLong",
			"(:Object,l)i",
			.var_address=(void*)&_brl_reflection_TField_SetLong_TObjectl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetULong",
			"(:Object,y)i",
			.var_address=(void*)&_brl_reflection_TField_SetULong_TObjecty
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSizet",
			"(:Object,t)i",
			.var_address=(void*)&_brl_reflection_TField_SetSizet_TObjectz
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFloat",
			"(:Object,f)i",
			.var_address=(void*)&_brl_reflection_TField_SetFloat_TObjectf
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetDouble",
			"(:Object,d)i",
			.var_address=(void*)&_brl_reflection_TField_SetDouble_TObjectd
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetString",
			"(:Object,$)i",
			.var_address=(void*)&_brl_reflection_TField_SetString_TObjectS
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_reflection_TField brl_reflection_TField={
	&brl_reflection_TMember,
	bbObjectFree,
	(BBDebugScope*)&brl_reflection_TField_scope,
	sizeof(struct brl_reflection_TField_obj),
	(void (*)(BBOBJECT))_brl_reflection_TField_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_reflection_TField_obj,_brl_reflection_tfield__index) - sizeof(void*) + sizeof(BBINT)
	,0
	,_brl_reflection_TMember_Name
	,_brl_reflection_TMember_NameLower
	,_brl_reflection_TMember_TypeId
	,_brl_reflection_TMember_MetaData_S
	,_brl_reflection_TMember_HasMetaData_S
	,_brl_reflection_TMember_InitMeta_S
	,_brl_reflection_TField_Init_STTTypeIdSi
	,_brl_reflection_TField_Get_TObject
	,_brl_reflection_TField_GetByte_TObject
	,_brl_reflection_TField_GetShort_TObject
	,_brl_reflection_TField_GetInt_TObject
	,_brl_reflection_TField_GetUInt_TObject
	,_brl_reflection_TField_GetLong_TObject
	,_brl_reflection_TField_GetULong_TObject
	,_brl_reflection_TField_GetSizet_TObject
	,_brl_reflection_TField_GetFloat_TObject
	,_brl_reflection_TField_GetDouble_TObject
	,_brl_reflection_TField_GetString_TObject
	,_brl_reflection_TField_Set_TObjectTObject
	,_brl_reflection_TField_Set_TObjectb
	,_brl_reflection_TField_Set_TObjects
	,_brl_reflection_TField_Set_TObjecti
	,_brl_reflection_TField_Set_TObjectu
	,_brl_reflection_TField_Set_TObjectl
	,_brl_reflection_TField_Set_TObjecty
	,_brl_reflection_TField_Set_TObjectz
	,_brl_reflection_TField_Set_TObjectf
	,_brl_reflection_TField_Set_TObjectd
	,_brl_reflection_TField_SetObject_TObjectTObject
	,_brl_reflection_TField_SetByte_TObjectb
	,_brl_reflection_TField_SetShort_TObjects
	,_brl_reflection_TField_SetInt_TObjecti
	,_brl_reflection_TField_SetUInt_TObjectu
	,_brl_reflection_TField_SetLong_TObjectl
	,_brl_reflection_TField_SetULong_TObjecty
	,_brl_reflection_TField_SetSizet_TObjectz
	,_brl_reflection_TField_SetFloat_TObjectf
	,_brl_reflection_TField_SetDouble_TObjectd
	,_brl_reflection_TField_SetString_TObjectS
};

void _brl_reflection_TGlobal_New(struct brl_reflection_TGlobal_obj* o) {
	_brl_reflection_TMember_New((struct brl_reflection_TMember_obj*)o);
	o->clas = &brl_reflection_TGlobal;
	o->_brl_reflection_tglobal__ref = 0;
}
struct brl_reflection_TGlobal_obj* _brl_reflection_TGlobal_Init_STTTypeIdSpb(struct brl_reflection_TGlobal_obj* o,BBSTRING bbt_name,struct brl_reflection_TTypeId_obj* bbt_typeId,BBSTRING bbt_meta,BBBYTE* bbt_ref){
	o->_brl_reflection_tmember__name =bbt_name;
	o->_brl_reflection_tmember__typeid =(struct brl_reflection_TTypeId_obj*)bbt_typeId;
	((struct brl_reflection_TMember_obj*)o)->clas->m_InitMeta_S((struct brl_reflection_TMember_obj*)o,bbt_meta);
	o->_brl_reflection_tglobal__ref =bbt_ref;
	return (struct brl_reflection_TGlobal_obj*)o;
}
BBOBJECT _brl_reflection_TGlobal_Get(struct brl_reflection_TGlobal_obj* o){
	return (BBOBJECT)brl_reflection__Get(o->_brl_reflection_tglobal__ref ,(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid );
}
BBINT _brl_reflection_TGlobal_GetInt(struct brl_reflection_TGlobal_obj* o){
	return bbStringToInt((BBSTRING)((struct brl_reflection_TGlobal_obj*)o)->clas->m_GetString((struct brl_reflection_TGlobal_obj*)o));
}
BBLONG _brl_reflection_TGlobal_GetLong(struct brl_reflection_TGlobal_obj* o){
	return bbStringToLong((BBSTRING)((struct brl_reflection_TGlobal_obj*)o)->clas->m_GetString((struct brl_reflection_TGlobal_obj*)o));
}
BBSIZET _brl_reflection_TGlobal_GetSizet(struct brl_reflection_TGlobal_obj* o){
	return bbStringToSizet((BBSTRING)((struct brl_reflection_TGlobal_obj*)o)->clas->m_GetString((struct brl_reflection_TGlobal_obj*)o));
}
BBFLOAT _brl_reflection_TGlobal_GetFloat(struct brl_reflection_TGlobal_obj* o){
	return bbStringToFloat((BBSTRING)((struct brl_reflection_TGlobal_obj*)o)->clas->m_GetString((struct brl_reflection_TGlobal_obj*)o));
}
BBDOUBLE _brl_reflection_TGlobal_GetDouble(struct brl_reflection_TGlobal_obj* o){
	return bbStringToDouble((BBSTRING)((struct brl_reflection_TGlobal_obj*)o)->clas->m_GetString((struct brl_reflection_TGlobal_obj*)o));
}
BBSTRING _brl_reflection_TGlobal_GetString(struct brl_reflection_TGlobal_obj* o){
	return ((BBString *)bbObjectStringcast((BBOBJECT)((struct brl_reflection_TGlobal_obj*)o)->clas->m_Get((struct brl_reflection_TGlobal_obj*)o)));
}
BBINT _brl_reflection_TGlobal_Set_TObject(struct brl_reflection_TGlobal_obj* o,BBOBJECT bbt_value){
	brl_reflection__Assign(o->_brl_reflection_tglobal__ref ,(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ,(BBOBJECT)bbt_value);
	return 0;
}
BBINT _brl_reflection_TGlobal_SetInt_i(struct brl_reflection_TGlobal_obj* o,BBINT bbt_value){
	((struct brl_reflection_TGlobal_obj*)o)->clas->m_SetString_S((struct brl_reflection_TGlobal_obj*)o,bbStringFromInt(bbt_value));
	return 0;
}
BBINT _brl_reflection_TGlobal_SetLong_l(struct brl_reflection_TGlobal_obj* o,BBLONG bbt_value){
	((struct brl_reflection_TGlobal_obj*)o)->clas->m_SetString_S((struct brl_reflection_TGlobal_obj*)o,bbStringFromLong(bbt_value));
	return 0;
}
BBINT _brl_reflection_TGlobal_SetSizet_z(struct brl_reflection_TGlobal_obj* o,BBSIZET bbt_value){
	((struct brl_reflection_TGlobal_obj*)o)->clas->m_SetString_S((struct brl_reflection_TGlobal_obj*)o,bbStringFromSizet(bbt_value));
	return 0;
}
BBINT _brl_reflection_TGlobal_SetFloat_f(struct brl_reflection_TGlobal_obj* o,BBFLOAT bbt_value){
	((struct brl_reflection_TGlobal_obj*)o)->clas->m_SetString_S((struct brl_reflection_TGlobal_obj*)o,bbStringFromFloat(bbt_value));
	return 0;
}
BBINT _brl_reflection_TGlobal_SetDouble_d(struct brl_reflection_TGlobal_obj* o,BBDOUBLE bbt_value){
	((struct brl_reflection_TGlobal_obj*)o)->clas->m_SetString_S((struct brl_reflection_TGlobal_obj*)o,bbStringFromDouble(bbt_value));
	return 0;
}
BBINT _brl_reflection_TGlobal_SetString_S(struct brl_reflection_TGlobal_obj* o,BBSTRING bbt_value){
	((struct brl_reflection_TGlobal_obj*)o)->clas->m_Set_TObject((struct brl_reflection_TGlobal_obj*)o,(BBOBJECT)bbt_value);
	return 0;
}
struct BBDebugScope_17 brl_reflection_TGlobal_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TGlobal",
	{
		{
			BBDEBUGDECL_FIELD,
			"_ref",
			"*b",
			.field_offset=offsetof(struct brl_reflection_TGlobal_obj,_brl_reflection_tglobal__ref)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_reflection_TGlobal_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Init",
			"($,:TTypeId,$,*b):TGlobal",
			.var_address=(void*)&_brl_reflection_TGlobal_Init_STTTypeIdSpb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Get",
			"():Object",
			.var_address=(void*)&_brl_reflection_TGlobal_Get
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetInt",
			"()i",
			.var_address=(void*)&_brl_reflection_TGlobal_GetInt
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetLong",
			"()l",
			.var_address=(void*)&_brl_reflection_TGlobal_GetLong
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetSizet",
			"()t",
			.var_address=(void*)&_brl_reflection_TGlobal_GetSizet
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetFloat",
			"()f",
			.var_address=(void*)&_brl_reflection_TGlobal_GetFloat
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetDouble",
			"()d",
			.var_address=(void*)&_brl_reflection_TGlobal_GetDouble
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetString",
			"()$",
			.var_address=(void*)&_brl_reflection_TGlobal_GetString
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Set",
			"(:Object)i",
			.var_address=(void*)&_brl_reflection_TGlobal_Set_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetInt",
			"(i)i",
			.var_address=(void*)&_brl_reflection_TGlobal_SetInt_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLong",
			"(l)i",
			.var_address=(void*)&_brl_reflection_TGlobal_SetLong_l
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSizet",
			"(t)i",
			.var_address=(void*)&_brl_reflection_TGlobal_SetSizet_z
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFloat",
			"(f)i",
			.var_address=(void*)&_brl_reflection_TGlobal_SetFloat_f
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetDouble",
			"(d)i",
			.var_address=(void*)&_brl_reflection_TGlobal_SetDouble_d
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetString",
			"($)i",
			.var_address=(void*)&_brl_reflection_TGlobal_SetString_S
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_reflection_TGlobal brl_reflection_TGlobal={
	&brl_reflection_TMember,
	bbObjectFree,
	(BBDebugScope*)&brl_reflection_TGlobal_scope,
	sizeof(struct brl_reflection_TGlobal_obj),
	(void (*)(BBOBJECT))_brl_reflection_TGlobal_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_reflection_TGlobal_obj,_brl_reflection_tglobal__ref) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_reflection_TMember_Name
	,_brl_reflection_TMember_NameLower
	,_brl_reflection_TMember_TypeId
	,_brl_reflection_TMember_MetaData_S
	,_brl_reflection_TMember_HasMetaData_S
	,_brl_reflection_TMember_InitMeta_S
	,_brl_reflection_TGlobal_Init_STTTypeIdSpb
	,_brl_reflection_TGlobal_Get
	,_brl_reflection_TGlobal_GetInt
	,_brl_reflection_TGlobal_GetLong
	,_brl_reflection_TGlobal_GetSizet
	,_brl_reflection_TGlobal_GetFloat
	,_brl_reflection_TGlobal_GetDouble
	,_brl_reflection_TGlobal_GetString
	,_brl_reflection_TGlobal_Set_TObject
	,_brl_reflection_TGlobal_SetInt_i
	,_brl_reflection_TGlobal_SetLong_l
	,_brl_reflection_TGlobal_SetSizet_z
	,_brl_reflection_TGlobal_SetFloat_f
	,_brl_reflection_TGlobal_SetDouble_d
	,_brl_reflection_TGlobal_SetString_S
};

void _brl_reflection_TFunction_New(struct brl_reflection_TFunction_obj* o) {
	_brl_reflection_TMember_New((struct brl_reflection_TMember_obj*)o);
	o->clas = &brl_reflection_TFunction;
	o->_brl_reflection_tfunction__selftypeid = (struct brl_reflection_TTypeId_obj*)(&bbNullObject);
	o->_brl_reflection_tfunction__ref = 0;
	o->_brl_reflection_tfunction__argtypes = (&bbEmptyArray);
}
struct brl_reflection_TFunction_obj* _brl_reflection_TFunction_Init_STTTypeIdSTTTypeIdpbaTTTypeId(struct brl_reflection_TFunction_obj* o,BBSTRING bbt_name,struct brl_reflection_TTypeId_obj* bbt_typeId,BBSTRING bbt_meta,struct brl_reflection_TTypeId_obj* bbt_selfTypeId,BBBYTE* bbt_ref,BBARRAY bbt_argTypes){
	o->_brl_reflection_tmember__name =bbt_name;
	o->_brl_reflection_tmember__typeid =(struct brl_reflection_TTypeId_obj*)bbt_typeId;
	((struct brl_reflection_TMember_obj*)o)->clas->m_InitMeta_S((struct brl_reflection_TMember_obj*)o,bbt_meta);
	o->_brl_reflection_tfunction__selftypeid =(struct brl_reflection_TTypeId_obj*)bbt_selfTypeId;
	o->_brl_reflection_tfunction__ref =bbt_ref;
	o->_brl_reflection_tfunction__argtypes =bbt_argTypes;
	return (struct brl_reflection_TFunction_obj*)o;
}
BBARRAY _brl_reflection_TFunction_ArgTypes(struct brl_reflection_TFunction_obj* o){
	return o->_brl_reflection_tfunction__argtypes ;
}
struct brl_reflection_TTypeId_obj* _brl_reflection_TFunction_ReturnType(struct brl_reflection_TFunction_obj* o){
	return (struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ;
}
BBBYTE* _brl_reflection_TFunction_FunctionPtr(struct brl_reflection_TFunction_obj* o){
	return o->_brl_reflection_tfunction__ref ;
}
BBOBJECT _brl_reflection_TFunction_Invoke_aTObject(struct brl_reflection_TFunction_obj* o,BBARRAY bbt_args){
	return (BBOBJECT)brl_reflection__CallFunction(o->_brl_reflection_tfunction__ref ,(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ,bbt_args,o->_brl_reflection_tfunction__argtypes );
}
struct BBDebugScope_9 brl_reflection_TFunction_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TFunction",
	{
		{
			BBDEBUGDECL_FIELD,
			"_selfTypeId",
			":TTypeId",
			.field_offset=offsetof(struct brl_reflection_TFunction_obj,_brl_reflection_tfunction__selftypeid)
		},
		{
			BBDEBUGDECL_FIELD,
			"_ref",
			"*b",
			.field_offset=offsetof(struct brl_reflection_TFunction_obj,_brl_reflection_tfunction__ref)
		},
		{
			BBDEBUGDECL_FIELD,
			"_argTypes",
			"[]:TTypeId",
			.field_offset=offsetof(struct brl_reflection_TFunction_obj,_brl_reflection_tfunction__argtypes)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_reflection_TFunction_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Init",
			"($,:TTypeId,$,:TTypeId,*b,[]:TTypeId):TFunction",
			.var_address=(void*)&_brl_reflection_TFunction_Init_STTTypeIdSTTTypeIdpbaTTTypeId
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ArgTypes",
			"()[]:TTypeId",
			.var_address=(void*)&_brl_reflection_TFunction_ArgTypes
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReturnType",
			"():TTypeId",
			.var_address=(void*)&_brl_reflection_TFunction_ReturnType
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FunctionPtr",
			"()*b",
			.var_address=(void*)&_brl_reflection_TFunction_FunctionPtr
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Invoke",
			"([]:Object):Object",
			.var_address=(void*)&_brl_reflection_TFunction_Invoke_aTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_reflection_TFunction brl_reflection_TFunction={
	&brl_reflection_TMember,
	bbObjectFree,
	(BBDebugScope*)&brl_reflection_TFunction_scope,
	sizeof(struct brl_reflection_TFunction_obj),
	(void (*)(BBOBJECT))_brl_reflection_TFunction_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_reflection_TFunction_obj,_brl_reflection_tfunction__argtypes) - sizeof(void*) + sizeof(BBARRAY)
	,0
	,_brl_reflection_TMember_Name
	,_brl_reflection_TMember_NameLower
	,_brl_reflection_TMember_TypeId
	,_brl_reflection_TMember_MetaData_S
	,_brl_reflection_TMember_HasMetaData_S
	,_brl_reflection_TMember_InitMeta_S
	,_brl_reflection_TFunction_Init_STTTypeIdSTTTypeIdpbaTTTypeId
	,_brl_reflection_TFunction_ArgTypes
	,_brl_reflection_TFunction_ReturnType
	,_brl_reflection_TFunction_FunctionPtr
	,_brl_reflection_TFunction_Invoke_aTObject
};

void _brl_reflection_TMethod_New(struct brl_reflection_TMethod_obj* o) {
	_brl_reflection_TMember_New((struct brl_reflection_TMember_obj*)o);
	o->clas = &brl_reflection_TMethod;
	o->_brl_reflection_tmethod__selftypeid = (struct brl_reflection_TTypeId_obj*)(&bbNullObject);
	o->_brl_reflection_tmethod__ref = 0;
	o->_brl_reflection_tmethod__argtypes = (&bbEmptyArray);
}
struct brl_reflection_TMethod_obj* _brl_reflection_TMethod_Init_STTTypeIdSTTTypeIdpbaTTTypeId(struct brl_reflection_TMethod_obj* o,BBSTRING bbt_name,struct brl_reflection_TTypeId_obj* bbt_typeId,BBSTRING bbt_meta,struct brl_reflection_TTypeId_obj* bbt_selfTypeId,BBBYTE* bbt_ref,BBARRAY bbt_argTypes){
	o->_brl_reflection_tmember__name =bbt_name;
	o->_brl_reflection_tmember__typeid =(struct brl_reflection_TTypeId_obj*)bbt_typeId;
	((struct brl_reflection_TMember_obj*)o)->clas->m_InitMeta_S((struct brl_reflection_TMember_obj*)o,bbt_meta);
	o->_brl_reflection_tmethod__selftypeid =(struct brl_reflection_TTypeId_obj*)bbt_selfTypeId;
	o->_brl_reflection_tmethod__ref =bbt_ref;
	o->_brl_reflection_tmethod__argtypes =bbt_argTypes;
	return (struct brl_reflection_TMethod_obj*)o;
}
BBARRAY _brl_reflection_TMethod_ArgTypes(struct brl_reflection_TMethod_obj* o){
	return o->_brl_reflection_tmethod__argtypes ;
}
struct brl_reflection_TTypeId_obj* _brl_reflection_TMethod_ReturnType(struct brl_reflection_TMethod_obj* o){
	return (struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ->_brl_reflection_ttypeid__rettype ;
}
BBOBJECT _brl_reflection_TMethod_Invoke_TObjectaTObject(struct brl_reflection_TMethod_obj* o,BBOBJECT bbt_obj,BBARRAY bbt_args){
	return (BBOBJECT)brl_reflection__CallMethod(o->_brl_reflection_tmethod__ref ,(struct brl_reflection_TTypeId_obj*)o->_brl_reflection_tmember__typeid ,(BBOBJECT)bbt_obj,bbt_args,o->_brl_reflection_tmethod__argtypes );
}
struct BBDebugScope_8 brl_reflection_TMethod_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TMethod",
	{
		{
			BBDEBUGDECL_FIELD,
			"_selfTypeId",
			":TTypeId",
			.field_offset=offsetof(struct brl_reflection_TMethod_obj,_brl_reflection_tmethod__selftypeid)
		},
		{
			BBDEBUGDECL_FIELD,
			"_ref",
			"*b",
			.field_offset=offsetof(struct brl_reflection_TMethod_obj,_brl_reflection_tmethod__ref)
		},
		{
			BBDEBUGDECL_FIELD,
			"_argTypes",
			"[]:TTypeId",
			.field_offset=offsetof(struct brl_reflection_TMethod_obj,_brl_reflection_tmethod__argtypes)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_reflection_TMethod_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Init",
			"($,:TTypeId,$,:TTypeId,*b,[]:TTypeId):TMethod",
			.var_address=(void*)&_brl_reflection_TMethod_Init_STTTypeIdSTTTypeIdpbaTTTypeId
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ArgTypes",
			"()[]:TTypeId",
			.var_address=(void*)&_brl_reflection_TMethod_ArgTypes
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReturnType",
			"():TTypeId",
			.var_address=(void*)&_brl_reflection_TMethod_ReturnType
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Invoke",
			"(:Object,[]:Object):Object",
			.var_address=(void*)&_brl_reflection_TMethod_Invoke_TObjectaTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_reflection_TMethod brl_reflection_TMethod={
	&brl_reflection_TMember,
	bbObjectFree,
	(BBDebugScope*)&brl_reflection_TMethod_scope,
	sizeof(struct brl_reflection_TMethod_obj),
	(void (*)(BBOBJECT))_brl_reflection_TMethod_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_reflection_TMethod_obj,_brl_reflection_tmethod__argtypes) - sizeof(void*) + sizeof(BBARRAY)
	,0
	,_brl_reflection_TMember_Name
	,_brl_reflection_TMember_NameLower
	,_brl_reflection_TMember_TypeId
	,_brl_reflection_TMember_MetaData_S
	,_brl_reflection_TMember_HasMetaData_S
	,_brl_reflection_TMember_InitMeta_S
	,_brl_reflection_TMethod_Init_STTTypeIdSTTTypeIdpbaTTTypeId
	,_brl_reflection_TMethod_ArgTypes
	,_brl_reflection_TMethod_ReturnType
	,_brl_reflection_TMethod_Invoke_TObjectaTObject
};

BBOBJECT brl_reflection__Get(BBBYTE* bbt_p,struct brl_reflection_TTypeId_obj* bbt_typeId){
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)bbt_typeId;
	if(bbt_==brl_reflection_ByteTypeId){
		return (BBOBJECT)bbStringFromInt((BBINT)bbt_p[0]);
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			return (BBOBJECT)bbStringFromInt((BBINT)bbt_2[0]);
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				return (BBOBJECT)bbStringFromInt(bbt_3[0]);
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					return (BBOBJECT)bbStringFromUInt(bbt_4[0]);
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						return (BBOBJECT)bbStringFromLong(bbt_5[0]);
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							return (BBOBJECT)bbStringFromULong(bbt_6[0]);
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								return (BBOBJECT)bbStringFromSizet(bbt_7[0]);
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									return (BBOBJECT)bbStringFromFloat(bbt_8[0]);
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										return (BBOBJECT)bbStringFromDouble(bbt_9[0]);
									}else{
										if(((bbt_typeId)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_typeId,(struct brl_reflection_TTypeId_obj*)brl_reflection_PointerTypeId)!=0) || ((bbt_typeId)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_typeId,(struct brl_reflection_TTypeId_obj*)brl_reflection_FunctionTypeId)!=0)){
											BBLONG* bbt_10=((BBLONG*)bbt_p);
											return (BBOBJECT)bbStringFromLong(bbt_10[0]);
										}
										return (BBOBJECT)bbRefGetObject(bbt_p);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
BBBYTE* brl_reflection__Push(BBBYTE* bbt_sp,struct brl_reflection_TTypeId_obj* bbt_typeId,BBOBJECT bbt_value){
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)bbt_typeId;
	if(((bbt_==brl_reflection_ByteTypeId) || (bbt_==brl_reflection_ShortTypeId)) || (bbt_==brl_reflection_IntTypeId)){
		BBINT* bbt_2=((BBINT*)bbt_sp);
		bbt_2[0]=bbStringToInt((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
		return (bbt_sp+4);
	}else{
		if(bbt_==brl_reflection_UIntTypeId){
			BBUINT* bbt_3=((BBUINT*)bbt_sp);
			bbt_3[0]=bbStringToUInt((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
			return (bbt_sp+4);
		}else{
			if(bbt_==brl_reflection_LongTypeId){
				BBLONG* bbt_4=((BBLONG*)bbt_sp);
				bbt_4[0]=bbStringToLong((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
				return (bbt_sp+8);
			}else{
				if(bbt_==brl_reflection_ULongTypeId){
					BBULONG* bbt_5=((BBULONG*)bbt_sp);
					bbt_5[0]=bbStringToULong((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
					return (bbt_sp+8);
				}else{
					if(bbt_==brl_reflection_SizetTypeId){
						BBSIZET* bbt_6=((BBSIZET*)bbt_sp);
						bbt_6[0]=bbStringToSizet((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
						return (bbt_sp+8);
					}else{
						if(bbt_==brl_reflection_FloatTypeId){
							BBFLOAT* bbt_7=((BBFLOAT*)bbt_sp);
							bbt_7[0]=bbStringToFloat((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
							return (bbt_sp+4);
						}else{
							if(bbt_==brl_reflection_DoubleTypeId){
								BBDOUBLE* bbt_8=((BBDOUBLE*)bbt_sp);
								bbt_8[0]=bbStringToDouble((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
								return (bbt_sp+8);
							}else{
								if(bbt_==brl_reflection_StringTypeId){
									if(!(((BBObject*)bbt_value)!= &bbNullObject)){
										bbt_value=(BBOBJECT)&bbEmptyString;
									}
									bbRefPushObject(bbt_sp,(BBOBJECT)bbt_value);
									return (bbt_sp+4);
								}else{
									if(((BBObject*)bbt_value)!= &bbNullObject){
										if(((bbt_typeId)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_typeId,(struct brl_reflection_TTypeId_obj*)brl_reflection_PointerTypeId)!=0) || ((bbt_typeId)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_typeId,(struct brl_reflection_TTypeId_obj*)brl_reflection_FunctionTypeId)!=0)){
											BBLONG* bbt_9=((BBLONG*)bbt_sp);
											bbt_9[0]=bbStringToLong((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
											return (bbt_sp+8);
										}
										BBBYTE* bbt_c=bbt_typeId->_brl_reflection_ttypeid__class ;
										BBBYTE* bbt_t=bbRefGetObjectClass((BBOBJECT)bbt_value);
										while((bbt_t) && (bbt_t!=bbt_c)){
											bbt_t=bbRefGetSuperClass(bbt_t);
										}
										if(!(bbt_t)){
											bbExThrow((BBObject *)&_s0);
										}
									}
									bbRefPushObject(bbt_sp,(BBOBJECT)bbt_value);
									return (bbt_sp+4);
								}
							}
						}
					}
				}
			}
		}
	}
}
BBINT brl_reflection__Assign(BBBYTE* bbt_p,struct brl_reflection_TTypeId_obj* bbt_typeId,BBOBJECT bbt_value){
	struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)bbt_typeId;
	if(bbt_==brl_reflection_ByteTypeId){
		bbt_p[0]=((BBBYTE)bbStringToInt((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value)));
	}else{
		if(bbt_==brl_reflection_ShortTypeId){
			BBSHORT* bbt_2=((BBSHORT*)bbt_p);
			bbt_2[0]=((BBSHORT)bbStringToInt((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value)));
		}else{
			if(bbt_==brl_reflection_IntTypeId){
				BBINT* bbt_3=((BBINT*)bbt_p);
				bbt_3[0]=bbStringToInt((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
			}else{
				if(bbt_==brl_reflection_UIntTypeId){
					BBUINT* bbt_4=((BBUINT*)bbt_p);
					bbt_4[0]=bbStringToUInt((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
				}else{
					if(bbt_==brl_reflection_LongTypeId){
						BBLONG* bbt_5=((BBLONG*)bbt_p);
						bbt_5[0]=bbStringToLong((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
					}else{
						if(bbt_==brl_reflection_ULongTypeId){
							BBULONG* bbt_6=((BBULONG*)bbt_p);
							bbt_6[0]=bbStringToULong((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
						}else{
							if(bbt_==brl_reflection_SizetTypeId){
								BBSIZET* bbt_7=((BBSIZET*)bbt_p);
								bbt_7[0]=bbStringToSizet((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
							}else{
								if(bbt_==brl_reflection_FloatTypeId){
									BBFLOAT* bbt_8=((BBFLOAT*)bbt_p);
									bbt_8[0]=bbStringToFloat((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
								}else{
									if(bbt_==brl_reflection_DoubleTypeId){
										BBDOUBLE* bbt_9=((BBDOUBLE*)bbt_p);
										bbt_9[0]=bbStringToDouble((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
									}else{
										if(bbt_==brl_reflection_StringTypeId){
											if(!(((BBObject*)bbt_value)!= &bbNullObject)){
												bbt_value=(BBOBJECT)&bbEmptyString;
											}
											bbRefAssignObject(bbt_p,(BBOBJECT)bbt_value);
										}else{
											if(((BBObject*)bbt_value)!= &bbNullObject){
												if(((bbt_typeId)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_typeId,(struct brl_reflection_TTypeId_obj*)brl_reflection_PointerTypeId)!=0) || ((bbt_typeId)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_typeId,(struct brl_reflection_TTypeId_obj*)brl_reflection_FunctionTypeId)!=0)){
													BBLONG* bbt_10=((BBLONG*)bbt_p);
													bbt_10[0]=bbStringToLong((BBSTRING)(bbt_value)->clas->ToString((BBOBJECT)bbt_value));
													return 0;
												}
												BBBYTE* bbt_c=bbt_typeId->_brl_reflection_ttypeid__class ;
												BBBYTE* bbt_t=bbRefGetObjectClass((BBOBJECT)bbt_value);
												while((bbt_t) && (bbt_t!=bbt_c)){
													bbt_t=bbRefGetSuperClass(bbt_t);
												}
												if(!(bbt_t)){
													bbExThrow((BBObject *)&_s0);
												}
											}else{
												if(bbStringEndsWith((BBSTRING)(bbt_typeId)->clas->m_Name((struct brl_reflection_TTypeId_obj*)bbt_typeId),&_s1)!=0){
													bbt_value=(BBOBJECT)bbRefArrayNull();
												}
											}
											bbRefAssignObject(bbt_p,(BBOBJECT)bbt_value);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
BBOBJECT brl_reflection__CallFunction(BBBYTE* bbt_p,struct brl_reflection_TTypeId_obj* bbt_typeId,BBARRAY bbt_args,BBARRAY bbt_argTypes){
	BBARRAY bbt_q=bbArrayNew1D("*b", 10);
	if(bbt_args!= &bbEmptyArray){
		{
			BBINT bbt_i=0;
			BBINT bbt_=(bbt_args->scales[0]);
			for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
				brl_reflection__Push((&((BBBYTE**)BBARRAYDATA(bbt_q,1))[((BBUINT)bbt_i)]),(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_argTypes,1))[((BBUINT)bbt_i)],(BBOBJECT)((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)]);
			}
		}
	}
	struct brl_reflection_TTypeId_obj* bbt_2=(struct brl_reflection_TTypeId_obj*)bbt_typeId;
	if(((bbt_2==brl_reflection_ByteTypeId) || (bbt_2==brl_reflection_ShortTypeId)) || (bbt_2==brl_reflection_IntTypeId)){
		BBINT bbt_3=(bbt_argTypes->scales[0]);
		if(bbt_3==0){
			BBINT(* bbt_f)()=bbt_p;
			return (BBOBJECT)bbStringFromInt(bbt_f());
		}else{
			if(bbt_3==1){
				BBINT(* bbt_f2)(BBBYTE*)=bbt_p;
				return (BBOBJECT)bbStringFromInt(bbt_f2(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
			}else{
				if(bbt_3==2){
					BBINT(* bbt_f3)(BBBYTE*,BBBYTE*)=bbt_p;
					return (BBOBJECT)bbStringFromInt(bbt_f3(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
				}else{
					if(bbt_3==3){
						BBINT(* bbt_f4)(BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
						return (BBOBJECT)bbStringFromInt(bbt_f4(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
					}else{
						if(bbt_3==4){
							BBINT(* bbt_f5)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
							return (BBOBJECT)bbStringFromInt(bbt_f5(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
						}else{
							if(bbt_3==5){
								BBINT(* bbt_f6)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
								return (BBOBJECT)bbStringFromInt(bbt_f6(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
							}else{
								if(bbt_3==6){
									BBINT(* bbt_f7)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
									return (BBOBJECT)bbStringFromInt(bbt_f7(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
								}else{
									if(bbt_3==7){
										BBINT(* bbt_f8)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
										return (BBOBJECT)bbStringFromInt(bbt_f8(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
									}else{
										if(bbt_3==8){
											BBINT(* bbt_f9)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromInt(bbt_f9(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
										}else{
											BBINT(* bbt_f10)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromInt(bbt_f10(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}else{
		if(bbt_2==brl_reflection_UIntTypeId){
			BBINT bbt_4=(bbt_argTypes->scales[0]);
			if(bbt_4==0){
				BBUINT(* bbt_f11)()=bbt_p;
				return (BBOBJECT)bbStringFromUInt(bbt_f11());
			}else{
				if(bbt_4==1){
					BBUINT(* bbt_f12)(BBBYTE*)=bbt_p;
					return (BBOBJECT)bbStringFromUInt(bbt_f12(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
				}else{
					if(bbt_4==2){
						BBUINT(* bbt_f13)(BBBYTE*,BBBYTE*)=bbt_p;
						return (BBOBJECT)bbStringFromUInt(bbt_f13(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
					}else{
						if(bbt_4==3){
							BBUINT(* bbt_f14)(BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
							return (BBOBJECT)bbStringFromUInt(bbt_f14(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
						}else{
							if(bbt_4==4){
								BBUINT(* bbt_f15)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
								return (BBOBJECT)bbStringFromUInt(bbt_f15(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
							}else{
								if(bbt_4==5){
									BBUINT(* bbt_f16)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
									return (BBOBJECT)bbStringFromUInt(bbt_f16(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
								}else{
									if(bbt_4==6){
										BBUINT(* bbt_f17)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
										return (BBOBJECT)bbStringFromUInt(bbt_f17(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
									}else{
										if(bbt_4==7){
											BBUINT(* bbt_f18)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromUInt(bbt_f18(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
										}else{
											if(bbt_4==8){
												BBUINT(* bbt_f19)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromUInt(bbt_f19(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
											}else{
												BBUINT(* bbt_f20)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromUInt(bbt_f20(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}else{
			if(bbt_2==brl_reflection_LongTypeId){
				BBINT bbt_5=(bbt_argTypes->scales[0]);
				if(bbt_5==0){
					BBLONG(* bbt_f21)()=bbt_p;
					return (BBOBJECT)bbStringFromLong(bbt_f21());
				}else{
					if(bbt_5==1){
						BBLONG(* bbt_f22)(BBBYTE*)=bbt_p;
						return (BBOBJECT)bbStringFromLong(bbt_f22(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
					}else{
						if(bbt_5==2){
							BBLONG(* bbt_f23)(BBBYTE*,BBBYTE*)=bbt_p;
							return (BBOBJECT)bbStringFromLong(bbt_f23(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
						}else{
							if(bbt_5==3){
								BBLONG(* bbt_f24)(BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
								return (BBOBJECT)bbStringFromLong(bbt_f24(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
							}else{
								if(bbt_5==4){
									BBLONG(* bbt_f25)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
									return (BBOBJECT)bbStringFromLong(bbt_f25(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
								}else{
									if(bbt_5==5){
										BBLONG(* bbt_f26)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
										return (BBOBJECT)bbStringFromLong(bbt_f26(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
									}else{
										if(bbt_5==6){
											BBLONG(* bbt_f27)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromLong(bbt_f27(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
										}else{
											if(bbt_5==7){
												BBLONG(* bbt_f28)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromLong(bbt_f28(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
											}else{
												if(bbt_5==8){
													BBLONG(* bbt_f29)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbStringFromLong(bbt_f29(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
												}else{
													BBLONG(* bbt_f30)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbStringFromLong(bbt_f30(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}else{
				if((bbt_2==brl_reflection_ULongTypeId) || (bbt_2==brl_reflection_SizetTypeId)){
					BBINT bbt_6=(bbt_argTypes->scales[0]);
					if(bbt_6==0){
						BBULONG(* bbt_f31)()=bbt_p;
						return (BBOBJECT)bbStringFromULong(bbt_f31());
					}else{
						if(bbt_6==1){
							BBULONG(* bbt_f32)(BBBYTE*)=bbt_p;
							return (BBOBJECT)bbStringFromULong(bbt_f32(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
						}else{
							if(bbt_6==2){
								BBULONG(* bbt_f33)(BBBYTE*,BBBYTE*)=bbt_p;
								return (BBOBJECT)bbStringFromULong(bbt_f33(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
							}else{
								if(bbt_6==3){
									BBULONG(* bbt_f34)(BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
									return (BBOBJECT)bbStringFromULong(bbt_f34(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
								}else{
									if(bbt_6==4){
										BBULONG(* bbt_f35)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
										return (BBOBJECT)bbStringFromULong(bbt_f35(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
									}else{
										if(bbt_6==5){
											BBULONG(* bbt_f36)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromULong(bbt_f36(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
										}else{
											if(bbt_6==6){
												BBULONG(* bbt_f37)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromULong(bbt_f37(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
											}else{
												if(bbt_6==7){
													BBULONG(* bbt_f38)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbStringFromULong(bbt_f38(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
												}else{
													if(bbt_6==8){
														BBULONG(* bbt_f39)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														return (BBOBJECT)bbStringFromULong(bbt_f39(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
													}else{
														BBULONG(* bbt_f40)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														return (BBOBJECT)bbStringFromULong(bbt_f40(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}else{
					if(bbt_2==brl_reflection_FloatTypeId){
						BBINT bbt_7=(bbt_argTypes->scales[0]);
						if(bbt_7==0){
							BBFLOAT(* bbt_f41)()=bbt_p;
							return (BBOBJECT)bbStringFromFloat(bbt_f41());
						}else{
							if(bbt_7==1){
								BBFLOAT(* bbt_f42)(BBBYTE*)=bbt_p;
								return (BBOBJECT)bbStringFromFloat(bbt_f42(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
							}else{
								if(bbt_7==2){
									BBFLOAT(* bbt_f43)(BBBYTE*,BBBYTE*)=bbt_p;
									return (BBOBJECT)bbStringFromFloat(bbt_f43(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
								}else{
									if(bbt_7==3){
										BBFLOAT(* bbt_f44)(BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
										return (BBOBJECT)bbStringFromFloat(bbt_f44(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
									}else{
										if(bbt_7==4){
											BBFLOAT(* bbt_f45)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromFloat(bbt_f45(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
										}else{
											if(bbt_7==5){
												BBFLOAT(* bbt_f46)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromFloat(bbt_f46(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
											}else{
												if(bbt_7==6){
													BBFLOAT(* bbt_f47)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbStringFromFloat(bbt_f47(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
												}else{
													if(bbt_7==7){
														BBFLOAT(* bbt_f48)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														return (BBOBJECT)bbStringFromFloat(bbt_f48(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
													}else{
														if(bbt_7==8){
															BBFLOAT(* bbt_f49)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
															return (BBOBJECT)bbStringFromFloat(bbt_f49(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
														}else{
															BBFLOAT(* bbt_f50)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
															return (BBOBJECT)bbStringFromFloat(bbt_f50(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}else{
						if(bbt_2==brl_reflection_DoubleTypeId){
							BBINT bbt_8=(bbt_argTypes->scales[0]);
							if(bbt_8==0){
								BBDOUBLE(* bbt_f51)()=bbt_p;
								return (BBOBJECT)bbStringFromDouble(bbt_f51());
							}else{
								if(bbt_8==1){
									BBDOUBLE(* bbt_f52)(BBBYTE*)=bbt_p;
									return (BBOBJECT)bbStringFromDouble(bbt_f52(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
								}else{
									if(bbt_8==2){
										BBDOUBLE(* bbt_f53)(BBBYTE*,BBBYTE*)=bbt_p;
										return (BBOBJECT)bbStringFromDouble(bbt_f53(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
									}else{
										if(bbt_8==3){
											BBDOUBLE(* bbt_f54)(BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromDouble(bbt_f54(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
										}else{
											if(bbt_8==4){
												BBDOUBLE(* bbt_f55)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromDouble(bbt_f55(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
											}else{
												if(bbt_8==5){
													BBDOUBLE(* bbt_f56)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbStringFromDouble(bbt_f56(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
												}else{
													if(bbt_8==6){
														BBDOUBLE(* bbt_f57)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														return (BBOBJECT)bbStringFromDouble(bbt_f57(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
													}else{
														if(bbt_8==7){
															BBDOUBLE(* bbt_f58)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
															return (BBOBJECT)bbStringFromDouble(bbt_f58(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
														}else{
															if(bbt_8==8){
																BBDOUBLE(* bbt_f59)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																return (BBOBJECT)bbStringFromDouble(bbt_f59(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
															}else{
																BBDOUBLE(* bbt_f60)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																return (BBOBJECT)bbStringFromDouble(bbt_f60(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}else{
							if(bbt_2==brl_reflection_VoidTypeId){
								BBINT bbt_9=(bbt_argTypes->scales[0]);
								if(bbt_9==0){
									BBINT(* bbt_f61)()=bbt_p;
									bbt_f61();
								}else{
									if(bbt_9==1){
										BBINT(* bbt_f62)(BBBYTE*)=bbt_p;
										bbt_f62(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]);
									}else{
										if(bbt_9==2){
											BBINT(* bbt_f63)(BBBYTE*,BBBYTE*)=bbt_p;
											bbt_f63(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]);
										}else{
											if(bbt_9==3){
												BBINT(* bbt_f64)(BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												bbt_f64(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]);
											}else{
												if(bbt_9==4){
													BBINT(* bbt_f65)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													bbt_f65(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]);
												}else{
													if(bbt_9==5){
														BBINT(* bbt_f66)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														bbt_f66(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]);
													}else{
														if(bbt_9==6){
															BBINT(* bbt_f67)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
															bbt_f67(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]);
														}else{
															if(bbt_9==7){
																BBINT(* bbt_f68)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																bbt_f68(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]);
															}else{
																if(bbt_9==8){
																	BBINT(* bbt_f69)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																	bbt_f69(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]);
																}else{
																	BBINT(* bbt_f70)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																	bbt_f70(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]);
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}else{
								if(((bbt_typeId)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_typeId,(struct brl_reflection_TTypeId_obj*)brl_reflection_PointerTypeId)!=0) || ((bbt_typeId)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_typeId,(struct brl_reflection_TTypeId_obj*)brl_reflection_FunctionTypeId)!=0)){
									BBINT bbt_10=(bbt_argTypes->scales[0]);
									if(bbt_10==0){
										BBBYTE*(* bbt_f71)()=bbt_p;
										return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f71());
									}else{
										if(bbt_10==1){
											BBBYTE*(* bbt_f72)(BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f72(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
										}else{
											if(bbt_10==2){
												BBBYTE*(* bbt_f73)(BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f73(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
											}else{
												if(bbt_10==3){
													BBBYTE*(* bbt_f74)(BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f74(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
												}else{
													if(bbt_10==4){
														BBBYTE*(* bbt_f75)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f75(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
													}else{
														if(bbt_10==5){
															BBBYTE*(* bbt_f76)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
															return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f76(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
														}else{
															if(bbt_10==6){
																BBBYTE*(* bbt_f77)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f77(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
															}else{
																if(bbt_10==7){
																	BBBYTE*(* bbt_f78)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																	return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f78(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
																}else{
																	if(bbt_10==8){
																		BBBYTE*(* bbt_f79)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																		return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f79(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
																	}else{
																		BBBYTE*(* bbt_f80)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																		return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f80(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}else{
									BBINT bbt_11=(bbt_argTypes->scales[0]);
									if(bbt_11==0){
										BBOBJECT(* bbt_f81)()=bbt_p;
										return (BBOBJECT)bbt_f81();
									}else{
										if(bbt_11==1){
											BBOBJECT(* bbt_f82)(BBBYTE*)=bbt_p;
											return (BBOBJECT)bbt_f82(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]);
										}else{
											if(bbt_11==2){
												BBOBJECT(* bbt_f83)(BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbt_f83(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]);
											}else{
												if(bbt_11==3){
													BBOBJECT(* bbt_f84)(BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbt_f84(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]);
												}else{
													if(bbt_11==4){
														BBOBJECT(* bbt_f85)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														return (BBOBJECT)bbt_f85(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]);
													}else{
														if(bbt_11==5){
															BBOBJECT(* bbt_f86)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
															return (BBOBJECT)bbt_f86(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]);
														}else{
															if(bbt_11==6){
																BBOBJECT(* bbt_f87)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																return (BBOBJECT)bbt_f87(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]);
															}else{
																if(bbt_11==7){
																	BBOBJECT(* bbt_f88)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																	return (BBOBJECT)bbt_f88(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]);
																}else{
																	if(bbt_11==8){
																		BBOBJECT(* bbt_f89)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																		return (BBOBJECT)bbt_f89(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]);
																	}else{
																		BBOBJECT(* bbt_f90)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																		return (BBOBJECT)bbt_f90(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return (BBOBJECT)(&bbNullObject);
}
BBOBJECT brl_reflection__CallMethod(BBBYTE* bbt_p,struct brl_reflection_TTypeId_obj* bbt_typeId,BBOBJECT bbt_obj,BBARRAY bbt_args,BBARRAY bbt_argTypes){
	BBARRAY bbt_q=bbArrayNew1D("*b", 10);
	if(bbt_args!= &bbEmptyArray){
		{
			BBINT bbt_i=0;
			BBINT bbt_=(bbt_args->scales[0]);
			for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
				brl_reflection__Push((&((BBBYTE**)BBARRAYDATA(bbt_q,1))[((BBUINT)bbt_i)]),(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_argTypes,1))[((BBUINT)bbt_i)],(BBOBJECT)((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)]);
			}
		}
	}
	struct brl_reflection_TTypeId_obj* bbt_retType=(struct brl_reflection_TTypeId_obj*)bbt_typeId->_brl_reflection_ttypeid__rettype ;
	struct brl_reflection_TTypeId_obj* bbt_2=(struct brl_reflection_TTypeId_obj*)bbt_retType;
	if(((bbt_2==brl_reflection_ByteTypeId) || (bbt_2==brl_reflection_ShortTypeId)) || (bbt_2==brl_reflection_IntTypeId)){
		BBINT bbt_3=(bbt_argTypes->scales[0]);
		if(bbt_3==0){
			BBINT(* bbt_f)(BBOBJECT)=bbt_p;
			return (BBOBJECT)bbStringFromInt(bbt_f((BBOBJECT)bbt_obj));
		}else{
			if(bbt_3==1){
				BBINT(* bbt_f2)(BBOBJECT,BBBYTE*)=bbt_p;
				return (BBOBJECT)bbStringFromInt(bbt_f2((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
			}else{
				if(bbt_3==2){
					BBINT(* bbt_f3)(BBOBJECT,BBBYTE*,BBBYTE*)=bbt_p;
					return (BBOBJECT)bbStringFromInt(bbt_f3((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
				}else{
					if(bbt_3==3){
						BBINT(* bbt_f4)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
						return (BBOBJECT)bbStringFromInt(bbt_f4((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
					}else{
						if(bbt_3==4){
							BBINT(* bbt_f5)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
							return (BBOBJECT)bbStringFromInt(bbt_f5((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
						}else{
							if(bbt_3==5){
								BBINT(* bbt_f6)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
								return (BBOBJECT)bbStringFromInt(bbt_f6((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
							}else{
								if(bbt_3==6){
									BBINT(* bbt_f7)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
									return (BBOBJECT)bbStringFromInt(bbt_f7((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
								}else{
									if(bbt_3==7){
										BBINT(* bbt_f8)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
										return (BBOBJECT)bbStringFromInt(bbt_f8((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
									}else{
										if(bbt_3==8){
											BBINT(* bbt_f9)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromInt(bbt_f9((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
										}else{
											BBINT(* bbt_f10)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromInt(bbt_f10(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}else{
		if(bbt_2==brl_reflection_UIntTypeId){
			BBINT bbt_4=(bbt_argTypes->scales[0]);
			if(bbt_4==0){
				BBUINT(* bbt_f11)(BBOBJECT)=bbt_p;
				return (BBOBJECT)bbStringFromUInt(bbt_f11((BBOBJECT)bbt_obj));
			}else{
				if(bbt_4==1){
					BBUINT(* bbt_f12)(BBOBJECT,BBBYTE*)=bbt_p;
					return (BBOBJECT)bbStringFromUInt(bbt_f12((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
				}else{
					if(bbt_4==2){
						BBUINT(* bbt_f13)(BBOBJECT,BBBYTE*,BBBYTE*)=bbt_p;
						return (BBOBJECT)bbStringFromUInt(bbt_f13((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
					}else{
						if(bbt_4==3){
							BBUINT(* bbt_f14)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
							return (BBOBJECT)bbStringFromUInt(bbt_f14((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
						}else{
							if(bbt_4==4){
								BBUINT(* bbt_f15)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
								return (BBOBJECT)bbStringFromUInt(bbt_f15((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
							}else{
								if(bbt_4==5){
									BBUINT(* bbt_f16)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
									return (BBOBJECT)bbStringFromUInt(bbt_f16((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
								}else{
									if(bbt_4==6){
										BBUINT(* bbt_f17)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
										return (BBOBJECT)bbStringFromUInt(bbt_f17((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
									}else{
										if(bbt_4==7){
											BBUINT(* bbt_f18)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromUInt(bbt_f18((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
										}else{
											if(bbt_4==8){
												BBUINT(* bbt_f19)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromUInt(bbt_f19((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
											}else{
												BBUINT(* bbt_f20)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromUInt(bbt_f20(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}else{
			if(bbt_2==brl_reflection_LongTypeId){
				BBINT bbt_5=(bbt_argTypes->scales[0]);
				if(bbt_5==0){
					BBLONG(* bbt_f21)(BBOBJECT)=bbt_p;
					return (BBOBJECT)bbStringFromLong(bbt_f21((BBOBJECT)bbt_obj));
				}else{
					if(bbt_5==1){
						BBLONG(* bbt_f22)(BBOBJECT,BBBYTE*)=bbt_p;
						return (BBOBJECT)bbStringFromLong(bbt_f22((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
					}else{
						if(bbt_5==2){
							BBLONG(* bbt_f23)(BBOBJECT,BBBYTE*,BBBYTE*)=bbt_p;
							return (BBOBJECT)bbStringFromLong(bbt_f23((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
						}else{
							if(bbt_5==3){
								BBLONG(* bbt_f24)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
								return (BBOBJECT)bbStringFromLong(bbt_f24((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
							}else{
								if(bbt_5==4){
									BBLONG(* bbt_f25)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
									return (BBOBJECT)bbStringFromLong(bbt_f25((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
								}else{
									if(bbt_5==5){
										BBLONG(* bbt_f26)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
										return (BBOBJECT)bbStringFromLong(bbt_f26((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
									}else{
										if(bbt_5==6){
											BBLONG(* bbt_f27)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromLong(bbt_f27((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
										}else{
											if(bbt_5==7){
												BBLONG(* bbt_f28)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromLong(bbt_f28((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
											}else{
												if(bbt_5==8){
													BBLONG(* bbt_f29)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbStringFromLong(bbt_f29((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
												}else{
													BBLONG(* bbt_f30)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbStringFromLong(bbt_f30(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}else{
				if((bbt_2==brl_reflection_ULongTypeId) || (bbt_2==brl_reflection_SizetTypeId)){
					BBINT bbt_6=(bbt_argTypes->scales[0]);
					if(bbt_6==0){
						BBULONG(* bbt_f31)(BBOBJECT)=bbt_p;
						return (BBOBJECT)bbStringFromULong(bbt_f31((BBOBJECT)bbt_obj));
					}else{
						if(bbt_6==1){
							BBULONG(* bbt_f32)(BBOBJECT,BBBYTE*)=bbt_p;
							return (BBOBJECT)bbStringFromULong(bbt_f32((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
						}else{
							if(bbt_6==2){
								BBULONG(* bbt_f33)(BBOBJECT,BBBYTE*,BBBYTE*)=bbt_p;
								return (BBOBJECT)bbStringFromULong(bbt_f33((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
							}else{
								if(bbt_6==3){
									BBULONG(* bbt_f34)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
									return (BBOBJECT)bbStringFromULong(bbt_f34((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
								}else{
									if(bbt_6==4){
										BBULONG(* bbt_f35)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
										return (BBOBJECT)bbStringFromULong(bbt_f35((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
									}else{
										if(bbt_6==5){
											BBULONG(* bbt_f36)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromULong(bbt_f36((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
										}else{
											if(bbt_6==6){
												BBULONG(* bbt_f37)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromULong(bbt_f37((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
											}else{
												if(bbt_6==7){
													BBULONG(* bbt_f38)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbStringFromULong(bbt_f38((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
												}else{
													if(bbt_6==8){
														BBULONG(* bbt_f39)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														return (BBOBJECT)bbStringFromULong(bbt_f39((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
													}else{
														BBULONG(* bbt_f40)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														return (BBOBJECT)bbStringFromULong(bbt_f40(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}else{
					if(bbt_2==brl_reflection_FloatTypeId){
						BBINT bbt_7=(bbt_argTypes->scales[0]);
						if(bbt_7==0){
							BBFLOAT(* bbt_f41)(BBOBJECT)=bbt_p;
							return (BBOBJECT)bbStringFromFloat(bbt_f41((BBOBJECT)bbt_obj));
						}else{
							if(bbt_7==1){
								BBFLOAT(* bbt_f42)(BBOBJECT,BBBYTE*)=bbt_p;
								return (BBOBJECT)bbStringFromFloat(bbt_f42((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
							}else{
								if(bbt_7==2){
									BBFLOAT(* bbt_f43)(BBOBJECT,BBBYTE*,BBBYTE*)=bbt_p;
									return (BBOBJECT)bbStringFromFloat(bbt_f43((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
								}else{
									if(bbt_7==3){
										BBFLOAT(* bbt_f44)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
										return (BBOBJECT)bbStringFromFloat(bbt_f44((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
									}else{
										if(bbt_7==4){
											BBFLOAT(* bbt_f45)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromFloat(bbt_f45((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
										}else{
											if(bbt_7==5){
												BBFLOAT(* bbt_f46)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromFloat(bbt_f46((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
											}else{
												if(bbt_7==6){
													BBFLOAT(* bbt_f47)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbStringFromFloat(bbt_f47((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
												}else{
													if(bbt_7==7){
														BBFLOAT(* bbt_f48)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														return (BBOBJECT)bbStringFromFloat(bbt_f48((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
													}else{
														if(bbt_7==8){
															BBFLOAT(* bbt_f49)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
															return (BBOBJECT)bbStringFromFloat(bbt_f49((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
														}else{
															BBFLOAT(* bbt_f50)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
															return (BBOBJECT)bbStringFromFloat(bbt_f50(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}else{
						if(bbt_2==brl_reflection_DoubleTypeId){
							BBINT bbt_8=(bbt_argTypes->scales[0]);
							if(bbt_8==0){
								BBDOUBLE(* bbt_f51)(BBOBJECT)=bbt_p;
								return (BBOBJECT)bbStringFromDouble(bbt_f51((BBOBJECT)bbt_obj));
							}else{
								if(bbt_8==1){
									BBDOUBLE(* bbt_f52)(BBOBJECT,BBBYTE*)=bbt_p;
									return (BBOBJECT)bbStringFromDouble(bbt_f52((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
								}else{
									if(bbt_8==2){
										BBDOUBLE(* bbt_f53)(BBOBJECT,BBBYTE*,BBBYTE*)=bbt_p;
										return (BBOBJECT)bbStringFromDouble(bbt_f53((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
									}else{
										if(bbt_8==3){
											BBDOUBLE(* bbt_f54)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromDouble(bbt_f54((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
										}else{
											if(bbt_8==4){
												BBDOUBLE(* bbt_f55)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromDouble(bbt_f55((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
											}else{
												if(bbt_8==5){
													BBDOUBLE(* bbt_f56)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbStringFromDouble(bbt_f56((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
												}else{
													if(bbt_8==6){
														BBDOUBLE(* bbt_f57)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														return (BBOBJECT)bbStringFromDouble(bbt_f57((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
													}else{
														if(bbt_8==7){
															BBDOUBLE(* bbt_f58)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
															return (BBOBJECT)bbStringFromDouble(bbt_f58((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
														}else{
															if(bbt_8==8){
																BBDOUBLE(* bbt_f59)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																return (BBOBJECT)bbStringFromDouble(bbt_f59((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
															}else{
																BBDOUBLE(* bbt_f60)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																return (BBOBJECT)bbStringFromDouble(bbt_f60(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}else{
							if(bbt_2==brl_reflection_VoidTypeId){
								BBINT bbt_9=(bbt_argTypes->scales[0]);
								if(bbt_9==0){
									BBINT(* bbt_f61)(BBOBJECT)=bbt_p;
									bbt_f61((BBOBJECT)bbt_obj);
								}else{
									if(bbt_9==1){
										BBINT(* bbt_f62)(BBOBJECT,BBBYTE*)=bbt_p;
										bbt_f62((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]);
									}else{
										if(bbt_9==2){
											BBINT(* bbt_f63)(BBOBJECT,BBBYTE*,BBBYTE*)=bbt_p;
											bbt_f63((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]);
										}else{
											if(bbt_9==3){
												BBINT(* bbt_f64)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
												bbt_f64((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]);
											}else{
												if(bbt_9==4){
													BBINT(* bbt_f65)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													bbt_f65((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]);
												}else{
													if(bbt_9==5){
														BBINT(* bbt_f66)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														bbt_f66((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]);
													}else{
														if(bbt_9==6){
															BBINT(* bbt_f67)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
															bbt_f67((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]);
														}else{
															if(bbt_9==7){
																BBINT(* bbt_f68)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																bbt_f68((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]);
															}else{
																if(bbt_9==8){
																	BBINT(* bbt_f69)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																	bbt_f69((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]);
																}else{
																	BBINT(* bbt_f70)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																	bbt_f70(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]);
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}else{
								if(((bbt_retType)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_retType,(struct brl_reflection_TTypeId_obj*)brl_reflection_PointerTypeId)!=0) || ((bbt_retType)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_retType,(struct brl_reflection_TTypeId_obj*)brl_reflection_FunctionTypeId)!=0)){
									BBINT bbt_10=(bbt_argTypes->scales[0]);
									if(bbt_10==0){
										BBBYTE*(* bbt_f71)(BBOBJECT)=bbt_p;
										return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f71((BBOBJECT)bbt_obj));
									}else{
										if(bbt_10==1){
											BBBYTE*(* bbt_f72)(BBOBJECT,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f72((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]));
										}else{
											if(bbt_10==2){
												BBBYTE*(* bbt_f73)(BBOBJECT,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f73((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]));
											}else{
												if(bbt_10==3){
													BBBYTE*(* bbt_f74)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f74((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]));
												}else{
													if(bbt_10==4){
														BBBYTE*(* bbt_f75)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f75((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]));
													}else{
														if(bbt_10==5){
															BBBYTE*(* bbt_f76)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
															return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f76((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]));
														}else{
															if(bbt_10==6){
																BBBYTE*(* bbt_f77)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f77((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]));
															}else{
																if(bbt_10==7){
																	BBBYTE*(* bbt_f78)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																	return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f78((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]));
																}else{
																	if(bbt_10==8){
																		BBBYTE*(* bbt_f79)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																		return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f79((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
																	}else{
																		BBBYTE*(* bbt_f80)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																		return (BBOBJECT)bbStringFromLong((BBLONG)bbt_f80(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]));
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}else{
									BBINT bbt_11=(bbt_argTypes->scales[0]);
									if(bbt_11==0){
										BBOBJECT(* bbt_f81)(BBOBJECT)=bbt_p;
										return (BBOBJECT)bbt_f81((BBOBJECT)bbt_obj);
									}else{
										if(bbt_11==1){
											BBOBJECT(* bbt_f82)(BBOBJECT,BBBYTE*)=bbt_p;
											return (BBOBJECT)bbt_f82((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U]);
										}else{
											if(bbt_11==2){
												BBOBJECT(* bbt_f83)(BBOBJECT,BBBYTE*,BBBYTE*)=bbt_p;
												return (BBOBJECT)bbt_f83((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U]);
											}else{
												if(bbt_11==3){
													BBOBJECT(* bbt_f84)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
													return (BBOBJECT)bbt_f84((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U]);
												}else{
													if(bbt_11==4){
														BBOBJECT(* bbt_f85)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
														return (BBOBJECT)bbt_f85((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U]);
													}else{
														if(bbt_11==5){
															BBOBJECT(* bbt_f86)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
															return (BBOBJECT)bbt_f86((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U]);
														}else{
															if(bbt_11==6){
																BBOBJECT(* bbt_f87)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																return (BBOBJECT)bbt_f87((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U]);
															}else{
																if(bbt_11==7){
																	BBOBJECT(* bbt_f88)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																	return (BBOBJECT)bbt_f88((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U]);
																}else{
																	if(bbt_11==8){
																		BBOBJECT(* bbt_f89)(BBOBJECT,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																		return (BBOBJECT)bbt_f89((BBOBJECT)bbt_obj,((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]);
																	}else{
																		BBOBJECT(* bbt_f90)(BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*,BBBYTE*)=bbt_p;
																		return (BBOBJECT)bbt_f90(((BBBYTE**)BBARRAYDATA(bbt_q,1))[0U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[1U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[2U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[3U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[4U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[5U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[6U],((BBBYTE**)BBARRAYDATA(bbt_q,1))[7U]);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return (BBOBJECT)(&bbNullObject);
}
BBSTRING brl_reflection_TypeTagForId(struct brl_reflection_TTypeId_obj* bbt_id){
	if((bbt_id)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_id,(struct brl_reflection_TTypeId_obj*)brl_reflection_ArrayTypeId)!=0){
		return bbStringConcat(&_s2,brl_reflection_TypeTagForId((struct brl_reflection_TTypeId_obj*)(bbt_id)->clas->m_ElementType((struct brl_reflection_TTypeId_obj*)bbt_id)));
	}
	if((bbt_id)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_id,(struct brl_reflection_TTypeId_obj*)brl_reflection_PointerTypeId)!=0){
		return bbStringConcat(&_s3,brl_reflection_TypeTagForId((struct brl_reflection_TTypeId_obj*)bbt_id->_brl_reflection_ttypeid__elementtype ));
	}
	if((bbt_id)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_id,(struct brl_reflection_TTypeId_obj*)brl_reflection_FunctionTypeId)!=0){
		BBSTRING bbt_s=&bbEmptyString;
		BBARRAY bbt_=bbt_id->_brl_reflection_ttypeid__argtypes ;
		BBUINT bbt_2=0U;
		while(bbt_2<((BBUINT)(bbt_->scales[0]))){
			struct brl_reflection_TTypeId_obj* bbt_t=(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
			bbt_2=(bbt_2+1U);
			if(bbt_t==&bbNullObject){
				continue;
			}
			if(bbt_s!= &bbEmptyString){
				bbt_s=bbStringConcat(bbt_s,&_s4);
			}
			bbt_s=bbStringConcat(bbt_s,brl_reflection_TypeTagForId((struct brl_reflection_TTypeId_obj*)bbt_t));
		}
		bbt_s=bbStringConcat(bbStringConcat(&_s5,bbt_s),&_s6);
		if(((BBObject*)bbt_id->_brl_reflection_ttypeid__rettype )!= &bbNullObject){
			bbt_s=bbStringConcat(bbt_s,brl_reflection_TypeTagForId((struct brl_reflection_TTypeId_obj*)bbt_id->_brl_reflection_ttypeid__rettype ));
		}
		return bbt_s;
	}
	struct brl_reflection_TTypeId_obj* bbt_3=(struct brl_reflection_TTypeId_obj*)bbt_id;
	if(bbt_3==brl_reflection_ByteTypeId){
		return &_s7;
	}else{
		if(bbt_3==brl_reflection_ShortTypeId){
			return &_s8;
		}else{
			if(bbt_3==brl_reflection_IntTypeId){
				return &_s9;
			}else{
				if(bbt_3==brl_reflection_UIntTypeId){
					return &_s10;
				}else{
					if(bbt_3==brl_reflection_LongTypeId){
						return &_s11;
					}else{
						if(bbt_3==brl_reflection_ULongTypeId){
							return &_s12;
						}else{
							if(bbt_3==brl_reflection_SizetTypeId){
								return &_s13;
							}else{
								if(bbt_3==brl_reflection_FloatTypeId){
									return &_s14;
								}else{
									if(bbt_3==brl_reflection_DoubleTypeId){
										return &_s15;
									}else{
										if(bbt_3==brl_reflection_StringTypeId){
											return &_s16;
										}else{
											if(bbt_3==brl_reflection_PointerTypeId){
												return &_s3;
											}else{
												if(bbt_3==brl_reflection_FunctionTypeId){
													return &_s5;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if((bbt_id)->clas->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_id,(struct brl_reflection_TTypeId_obj*)brl_reflection_ObjectTypeId)!=0){
		return bbStringConcat(&_s17,(bbt_id)->clas->m_Name((struct brl_reflection_TTypeId_obj*)bbt_id));
	}
	bbExThrow((BBObject *)&_s0);
	return &bbEmptyString;
}
struct brl_map_stringmap_TStringMap_obj* brl_reflection_ExtractMetaMap(BBSTRING bbt_meta){
	if(!(bbt_meta!= &bbEmptyString)){
		return (struct brl_map_stringmap_TStringMap_obj*)&bbNullObject;
	}
	struct brl_map_stringmap_TStringMap_obj* bbt_map=(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	BBSTRING bbt_key=&bbEmptyString;
	BBSTRING bbt_value=&bbEmptyString;
	BBINT bbt_i=0;
	while(bbt_i<(bbt_meta->length)){
		BBINT bbt_e=bbStringFind((BBSTRING)bbt_meta,&_s20,bbt_i);
		if(bbt_e==-1){
			bbExThrow((BBObject *)&_s21);
		}
		BBSTRING bbt_key2=bbStringSlice(bbt_meta,bbt_i,bbt_e);
		BBSTRING bbt_value2=&bbEmptyString;
		bbt_i=(bbt_e+1);
		if((bbt_i<(bbt_meta->length)) && ((bbt_meta)->buf[((BBUINT)bbt_i)]==34)){
			bbt_i+=1;
			BBINT bbt_e2=bbStringFind((BBSTRING)bbt_meta,&_s22,bbt_i);
			if(bbt_e2==-1){
				bbExThrow((BBObject *)&_s21);
			}
			bbt_value2=bbStringSlice(bbt_meta,bbt_i,bbt_e2);
			bbt_i=(bbt_e2+1);
		}else{
			BBINT bbt_e3=bbStringFind((BBSTRING)bbt_meta,&_s23,bbt_i);
			if(bbt_e3==-1){
				bbt_e3=(bbt_meta->length);
			}
			bbt_value2=bbStringSlice(bbt_meta,bbt_i,bbt_e3);
			bbt_i=bbt_e3;
		}
		(bbt_map)->clas->m_Insert_STObject((struct brl_map_stringmap_TStringMap_obj*)bbt_map,bbt_key2,(BBOBJECT)bbt_value2);
		if((bbt_i<(bbt_meta->length)) && ((bbt_meta)->buf[((BBUINT)bbt_i)]==32)){
			bbt_i+=1;
		}
	}
	return (struct brl_map_stringmap_TStringMap_obj*)bbt_map;
}
struct brl_reflection_TTypeId_obj* brl_reflection_TypeIdForTag(BBSTRING bbt_ty){
	if(bbStringStartsWith((BBSTRING)bbt_ty,&_s18)!=0){
		BBINT bbt_dims=(bbStringSplit((BBSTRING)bbt_ty,&_s4)->scales[0]);
		bbt_ty=bbStringSlice(bbt_ty,(bbStringFind((BBSTRING)bbt_ty,&_s1,0)+1),(bbt_ty)->length);
		struct brl_reflection_TTypeId_obj* bbt_id=(struct brl_reflection_TTypeId_obj*)brl_reflection_TypeIdForTag(bbt_ty);
		if(((BBObject*)bbt_id)!= &bbNullObject){
			bbt_id=(struct brl_reflection_TTypeId_obj*)(bbt_id)->clas->m_ArrayType_i((struct brl_reflection_TTypeId_obj*)bbt_id,bbt_dims);
		}
		return (struct brl_reflection_TTypeId_obj*)bbt_id;
	}
	if(bbStringStartsWith((BBSTRING)bbt_ty,&_s17)!=0){
		bbt_ty=bbStringSlice(bbt_ty,1,(bbt_ty)->length);
		BBINT bbt_i=bbStringFindLast((BBSTRING)bbt_ty,&_s19,0);
		if(bbt_i!=-1){
			bbt_ty=bbStringSlice(bbt_ty,(bbt_i+1),(bbt_ty)->length);
		}
		return (struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId_ForName_TTTypeId_S(bbt_ty);
	}
	if(bbStringStartsWith((BBSTRING)bbt_ty,&_s3)!=0){
		bbt_ty=bbStringSlice(bbt_ty,1,(bbt_ty)->length);
		struct brl_reflection_TTypeId_obj* bbt_id2=(struct brl_reflection_TTypeId_obj*)brl_reflection_TypeIdForTag(bbt_ty);
		if(((BBObject*)bbt_id2)!= &bbNullObject){
			bbt_id2=(struct brl_reflection_TTypeId_obj*)(bbt_id2)->clas->m_PointerType((struct brl_reflection_TTypeId_obj*)bbt_id2);
		}
		return (struct brl_reflection_TTypeId_obj*)bbt_id2;
	}
	if(bbStringStartsWith((BBSTRING)bbt_ty,&_s5)!=0){
		BBARRAY bbt_t=(&bbEmptyArray);
		BBINT bbt_idx=bbStringFindLast((BBSTRING)bbt_ty,&_s6,0);
		if(bbt_idx>0){
			BBSTRING bbt_[]={bbStringSlice(bbt_ty,1,bbt_idx),bbStringSlice(bbt_ty,(bbt_idx+1),(bbt_ty)->length)};
			BBARRAY bbt_2 = bbArrayFromData("$",2,bbt_);
			bbt_t=bbt_2;
		}else{
			BBSTRING bbt_3[]={bbStringSlice(bbt_ty,1,(bbt_ty)->length),&bbEmptyString};
			BBARRAY bbt_4 = bbArrayFromData("$",2,bbt_3);
			bbt_t=bbt_4;
		}
		struct brl_reflection_TTypeId_obj* bbt_retType=(struct brl_reflection_TTypeId_obj*)brl_reflection_TypeIdForTag(((BBSTRING*)BBARRAYDATA(bbt_t,1))[1U]);
		BBARRAY bbt_argTypes=(&bbEmptyArray);
		if((((BBSTRING*)BBARRAYDATA(bbt_t,1))[0U]->length)>0){
			BBINT bbt_i2=0;
			BBINT bbt_b=0;
			BBSTRING bbt_q=((BBSTRING*)BBARRAYDATA(bbt_t,1))[0U];
			struct brl_linkedlist_TList_obj* bbt_args=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
			while(bbt_i2<(bbt_q->length)){
				BBINT bbt_5=(bbt_q)->buf[((BBUINT)bbt_i2)];
				if(bbt_5==44){
					(bbt_args)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_args,(BBOBJECT)bbStringSlice(bbt_q,bbt_b,bbt_i2));
					bbt_i2+=1;
					bbt_b=bbt_i2;
				}else{
					if(bbt_5==91){
						bbt_i2+=1;
						while((bbt_i2<(bbt_q->length)) && ((bbt_q)->buf[((BBUINT)bbt_i2)]==44)){
							bbt_i2+=1;
						}
					}else{
						if(bbt_5==40){
							BBINT bbt_level=1;
							bbt_i2+=1;
							while(bbt_i2<(bbt_q->length)){
								if((bbt_q)->buf[((BBUINT)bbt_i2)]==44){
									if(bbt_level==0){
										break;
									}
								}else{
									if((bbt_q)->buf[((BBUINT)bbt_i2)]==41){
										bbt_level-=1;
									}else{
										if((bbt_q)->buf[((BBUINT)bbt_i2)]==40){
											bbt_level+=1;
										}
									}
								}
								bbt_i2+=1;
							}
						}else{
							bbt_i2+=1;
						}
					}
				}
			}
			if(bbt_b<(bbt_q->length)){
				(bbt_args)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_args,(BBOBJECT)bbStringSlice(bbt_q,bbt_b,(bbt_q)->length));
			}
			bbt_argTypes=bbArrayNew1D(":TTypeId", (bbt_args)->clas->m_Count((struct brl_linkedlist_TList_obj*)bbt_args));
			bbt_i2=0;
			struct brl_linkedlist_TListEnum_obj* bbt_6=(struct brl_linkedlist_TListEnum_obj*)(bbt_args)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_args);
			while((bbt_6)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_6)!=0){
				BBSTRING bbt_s=((BBString *)bbObjectStringcast((BBOBJECT)(bbt_6)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_6)));
				if(bbStringEquals(bbt_s, (&bbEmptyString))==1){
					continue;
				}
				((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_argTypes,1))[((BBUINT)bbt_i2)]=(struct brl_reflection_TTypeId_obj*)brl_reflection_TypeIdForTag(bbt_s);
				if(!(((BBObject*)((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_argTypes,1))[((BBUINT)bbt_i2)])!= &bbNullObject)){
					((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_argTypes,1))[((BBUINT)bbt_i2)]=(struct brl_reflection_TTypeId_obj*)brl_reflection_ObjectTypeId;
				}
				bbt_i2+=1;
			}
		}
		if(!(((BBObject*)bbt_retType)!= &bbNullObject)){
			bbt_retType=(struct brl_reflection_TTypeId_obj*)brl_reflection_ObjectTypeId;
		}
		return (struct brl_reflection_TTypeId_obj*)(bbt_retType)->clas->m_FunctionType_aTTTypeId((struct brl_reflection_TTypeId_obj*)bbt_retType,bbt_argTypes);
	}
	BBSTRING bbt_7=bbt_ty;
	if(bbStringEquals(bbt_7, &_s7)==1){
		return (struct brl_reflection_TTypeId_obj*)brl_reflection_ByteTypeId;
	}else{
		if(bbStringEquals(bbt_7, &_s8)==1){
			return (struct brl_reflection_TTypeId_obj*)brl_reflection_ShortTypeId;
		}else{
			if(bbStringEquals(bbt_7, &_s9)==1){
				return (struct brl_reflection_TTypeId_obj*)brl_reflection_IntTypeId;
			}else{
				if(bbStringEquals(bbt_7, &_s10)==1){
					return (struct brl_reflection_TTypeId_obj*)brl_reflection_UIntTypeId;
				}else{
					if(bbStringEquals(bbt_7, &_s11)==1){
						return (struct brl_reflection_TTypeId_obj*)brl_reflection_LongTypeId;
					}else{
						if(bbStringEquals(bbt_7, &_s12)==1){
							return (struct brl_reflection_TTypeId_obj*)brl_reflection_ULongTypeId;
						}else{
							if(bbStringEquals(bbt_7, &_s13)==1){
								return (struct brl_reflection_TTypeId_obj*)brl_reflection_SizetTypeId;
							}else{
								if(bbStringEquals(bbt_7, &_s14)==1){
									return (struct brl_reflection_TTypeId_obj*)brl_reflection_FloatTypeId;
								}else{
									if(bbStringEquals(bbt_7, &_s15)==1){
										return (struct brl_reflection_TTypeId_obj*)brl_reflection_DoubleTypeId;
									}else{
										if(bbStringEquals(bbt_7, &_s16)==1){
											return (struct brl_reflection_TTypeId_obj*)brl_reflection_StringTypeId;
										}else{
											if(bbStringEquals(bbt_7, &_s3)==1){
												return (struct brl_reflection_TTypeId_obj*)brl_reflection_PointerTypeId;
											}else{
												if(bbStringEquals(bbt_7, &_s5)==1){
													return (struct brl_reflection_TTypeId_obj*)brl_reflection_FunctionTypeId;
												}else{
													if(bbt_7==&bbEmptyString){
														return (struct brl_reflection_TTypeId_obj*)brl_reflection_VoidTypeId;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return (struct brl_reflection_TTypeId_obj*)(&bbNullObject);
}
static int __bb_brl_reflection_reflection_inited = 0;
int __bb_brl_reflection_reflection(){
	if (!__bb_brl_reflection_reflection_inited) {
		__bb_brl_reflection_reflection_inited = 1;
		GC_add_roots(&brl_reflection__guard, &brl_reflection_TTypeId__interfaceMap + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_linkedlist_linkedlist();
		__bb_brl_map_map();
		__bb_brl_stringbuilder_stringbuilder();
		bbObjectRegisterType((BBCLASS)&brl_reflection_TTypeId);
		bbObjectRegisterType((BBCLASS)&brl_reflection_TMember);
		bbObjectRegisterType((BBCLASS)&brl_reflection_TConstant);
		bbObjectRegisterType((BBCLASS)&brl_reflection_TField);
		bbObjectRegisterType((BBCLASS)&brl_reflection_TGlobal);
		bbObjectRegisterType((BBCLASS)&brl_reflection_TFunction);
		bbObjectRegisterType((BBCLASS)&brl_reflection_TMethod);
		brl_reflection_TTypeId__nameMap=(&bbNullObject);
		brl_reflection_TTypeId__classMap=(&bbNullObject);
		brl_reflection_TTypeId__count=0;
		brl_reflection_TTypeId__icount=0;
		brl_reflection_TTypeId__interfaceMap=(&bbNullObject);
		brl_reflection_TTypeId__count=0;
		brl_reflection_TTypeId__nameMap=(struct brl_map_TMap_obj*)(struct brl_map_TMap_obj*)bbObjectNew((BBClass *)&brl_map_TMap);
		brl_reflection_TTypeId__classMap=(struct brl_map_ptrmap_TPtrMap_obj*)(struct brl_map_ptrmap_TPtrMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_ptrmap_TPtrMap);
		brl_reflection_TTypeId__icount=0;
		brl_reflection_TTypeId__interfaceMap=(struct brl_map_ptrmap_TPtrMap_obj*)(struct brl_map_ptrmap_TPtrMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_ptrmap_TPtrMap);
		brl_reflection__guard=(struct brl_threads_TMutex_obj*)brl_threads_TMutex_Create_TTMutex();
		brl_reflection_ByteTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s24,1,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		brl_reflection_ShortTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s25,2,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		brl_reflection_IntTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s26,4,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		brl_reflection_UIntTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s27,4,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		brl_reflection_LongTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s28,8,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		brl_reflection_ULongTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s29,8,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		brl_reflection_SizetTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s30,8,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		brl_reflection_FloatTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s31,4,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		brl_reflection_DoubleTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s32,8,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		brl_reflection_ObjectTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s33,8,bbRefObjectClass(),(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		brl_reflection_StringTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s34,8,bbRefStringClass(),(struct brl_reflection_TTypeId_obj*)brl_reflection_ObjectTypeId);
		brl_reflection_ArrayTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s35,8,bbRefArrayClass(),(struct brl_reflection_TTypeId_obj*)brl_reflection_ObjectTypeId);
		brl_reflection_VoidTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s36,0,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		brl_reflection_PointerTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s37,8,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		brl_reflection_FunctionTypeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId.m_Init_SipbTTTypeId((struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj*)bbObjectNew((BBClass *)&brl_reflection_TTypeId)),&_s38,8,0,(struct brl_reflection_TTypeId_obj*)&bbNullObject);
		return 0;
	}
	return 0;
}