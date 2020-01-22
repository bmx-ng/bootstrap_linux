#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.release.linux.x64.h>
static BBString _s14={
	&bbStringClass,
	1,
	{10}
};
static BBString _s3={
	&bbStringClass,
	12,
	{32,40,101,120,112,101,99,116,101,100,32,34}
};
static BBString _s6={
	&bbStringClass,
	3,
	{34,41,46}
};
static BBString _s5={
	&bbStringClass,
	8,
	{34,44,32,103,111,116,32,34}
};
static BBString _s4={
	&bbStringClass,
	15,
	{34,44,32,103,111,116,32,34,78,85,76,76,34,41,46}
};
static BBString _s2={
	&bbStringClass,
	21,
	{40,41,32,103,111,116,32,98,114,111,107,101,110,32,112,97,114
	,97,109,32,35}
};
static BBString _s7={
	&bbStringClass,
	5,
	{69,82,82,79,82}
};
static BBString _s0={
	&bbStringClass,
	6,
	{69,82,82,79,82,10}
};
static BBString _s13={
	&bbStringClass,
	23,
	{69,114,114,111,114,32,108,111,97,100,105,110,103,32,115,99,114
	,105,112,116,32,58,10}
};
static BBString _s1={
	&bbStringClass,
	19,
	{77,97,120,76,117,97,32,45,32,73,110,118,111,107,101,40,41
	,58,32}
};
static BBString _s9={
	&bbStringClass,
	4,
	{95,95,103,99}
};
static BBString _s10={
	&bbStringClass,
	7,
	{95,95,105,110,100,101,120}
};
static BBString _s11={
	&bbStringClass,
	10,
	{95,95,110,101,119,105,110,100,101,120}
};
static BBString _s12={
	&bbStringClass,
	4,
	{115,101,108,102}
};
static BBString _s8={
	&bbStringClass,
	5,
	{115,117,112,101,114}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct brl_maxlua_TDummyLuaSuper_obj* brl_maxlua_DummyLuaSuper;
static BBBYTE* brl_maxlua_LuaState__luaState;
static BBINT brl_maxlua_ObjMetaTable__objMetaTable;
static BBINT brl_maxlua_ObjMetaTable_done;
void _brl_maxlua_TDummyLuaSuper_New(struct brl_maxlua_TDummyLuaSuper_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_maxlua_TDummyLuaSuper;
}
struct BBDebugScope_1 brl_maxlua_TDummyLuaSuper_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TDummyLuaSuper",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_maxlua_TDummyLuaSuper_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_maxlua_TDummyLuaSuper brl_maxlua_TDummyLuaSuper={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_maxlua_TDummyLuaSuper_scope,
	sizeof(struct brl_maxlua_TDummyLuaSuper_obj),
	(void (*)(BBOBJECT))_brl_maxlua_TDummyLuaSuper_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

void _brl_maxlua_TLuaObject_New(struct brl_maxlua_TLuaObject_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_maxlua_TLuaObject;
	o->_brl_maxlua_tluaobject__fenv = 0;
	o->_brl_maxlua_tluaobject__class = (struct brl_maxlua_TLuaClass_obj*)(&bbNullObject);
}
void _brl_maxlua_TLuaObject_Delete(struct brl_maxlua_TLuaObject_obj* o) {
	BBBYTE* bbt_L=brl_maxlua_LuaState(0);
	luaL_unref(bbt_L,-10000,o->_brl_maxlua_tluaobject__fenv );
	bbObjectDtor((BBOBJECT)o);
}
struct brl_maxlua_TLuaObject_obj* _brl_maxlua_TLuaObject_Init_TTLuaClassTObject(struct brl_maxlua_TLuaObject_obj* o,struct brl_maxlua_TLuaClass_obj* bbt_class,BBOBJECT bbt_supr){
	BBBYTE* bbt_L=brl_maxlua_LuaState(0);
	if(!(((BBObject*)bbt_supr)!= &bbNullObject)){
		bbt_supr=(BBOBJECT)brl_maxlua_DummyLuaSuper;
	}
	if(!((bbt_class)->clas->m_lua_pushchunk((struct brl_maxlua_TLuaClass_obj*)bbt_class)!=0)){
		return (struct brl_maxlua_TLuaObject_obj*)(&bbNullObject);
	}
	pub_lua_lua_newtable(bbt_L);
	lua_pushvalue(bbt_L,-1);
	o->_brl_maxlua_tluaobject__fenv =luaL_ref(bbt_L,-10000);
	o->_brl_maxlua_tluaobject__class =(struct brl_maxlua_TLuaClass_obj*)bbt_class;
	if(((BBObject*)bbt_supr)!= &bbNullObject){
		lua_pushvalue(bbt_L,-1);
		BBBYTE* bbt_ = bbStringToCString(&_s12);
		lua_setfield(bbt_L,-2,bbt_);
		bbMemFree(bbt_);
		brl_maxlua_lua_pushobject(bbt_L,(BBOBJECT)bbt_supr);
		BBBYTE* bbt_2 = bbStringToCString(&_s8);
		lua_setfield(bbt_L,-2,bbt_2);
		bbMemFree(bbt_2);
		pub_lua_lua_pushcfunction(bbt_L,brl_maxlua_IndexSelf);
		BBBYTE* bbt_3 = bbStringToCString(&_s10);
		lua_setfield(bbt_L,-2,bbt_3);
		bbMemFree(bbt_3);
		pub_lua_lua_pushcfunction(bbt_L,brl_maxlua_NewIndexSelf);
		BBBYTE* bbt_4 = bbStringToCString(&_s11);
		lua_setfield(bbt_L,-2,bbt_4);
		bbMemFree(bbt_4);
	}
	lua_pushvalue(bbt_L,-1);
	lua_setmetatable(bbt_L,-2);
	lua_setfenv(bbt_L,-2);
	if(lua_pcall(bbt_L,0,0,0)!=0){
		brl_maxlua_LuaDumpErr();
	}
	return (struct brl_maxlua_TLuaObject_obj*)o;
}
BBOBJECT _brl_maxlua_TLuaObject_Invoke_SaTObject(struct brl_maxlua_TLuaObject_obj* o,BBSTRING bbt_name,BBARRAY bbt_args){
	BBBYTE* bbt_L=brl_maxlua_LuaState(0);
	((struct brl_maxlua_TLuaObject_obj*)o)->clas->m_lua_pushfenv((struct brl_maxlua_TLuaObject_obj*)o);
	BBBYTE* bbt_ = bbStringToCString(bbt_name);
	lua_getfield(bbt_L,-1,bbt_);
	bbMemFree(bbt_);
	if(pub_lua_lua_isnil(bbt_L,-1)!=0){
		pub_lua_lua_pop(bbt_L,2);
		return (BBOBJECT)(&bbNullObject);
	}
	{
		BBINT bbt_i=0;
		BBINT bbt_2=(bbt_args->scales[0]);
		for(;(bbt_i<bbt_2);bbt_i=(bbt_i+1)){
			struct brl_reflection_TTypeId_obj* bbt_typeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId_ForObject_TTTypeId_TObject((BBOBJECT)((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)]);
			struct brl_reflection_TTypeId_obj* bbt_3=(struct brl_reflection_TTypeId_obj*)bbt_typeId;
			if((((bbt_3==brl_reflection_IntTypeId) || (bbt_3==brl_reflection_ShortTypeId)) || (bbt_3==brl_reflection_ByteTypeId)) || (bbt_3==brl_reflection_LongTypeId)){
				BBOBJECT bbt_4;
				lua_pushinteger(bbt_L,((BBLONG)bbStringToInt((BBSTRING)((bbt_4 = ((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)])->clas)->ToString((BBOBJECT)bbt_4))));
			}else{
				if(bbt_3==brl_reflection_FloatTypeId){
					BBOBJECT bbt_5;
					lua_pushnumber(bbt_L,((BBDOUBLE)bbStringToFloat((BBSTRING)((bbt_5 = ((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)])->clas)->ToString((BBOBJECT)bbt_5))));
				}else{
					if(bbt_3==brl_reflection_DoubleTypeId){
						BBOBJECT bbt_6;
						lua_pushnumber(bbt_L,bbStringToDouble((BBSTRING)((bbt_6 = ((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)])->clas)->ToString((BBOBJECT)bbt_6)));
					}else{
						if(bbt_3==brl_reflection_StringTypeId){
							BBOBJECT bbt_7;
							BBSTRING bbt_s=((bbt_7 = ((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)])->clas)->ToString((BBOBJECT)bbt_7);
							BBBYTE* bbt_8 = bbStringToCString(bbt_s);
							lua_pushlstring(bbt_L,bbt_8,((BBLONG)(bbt_s->length)));
							bbMemFree(bbt_8);
						}else{
							if(bbt_3==brl_reflection_ArrayTypeId){
								brl_maxlua_lua_pusharray(bbt_L,(BBOBJECT)((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)]);
							}else{
								brl_maxlua_lua_pushobject(bbt_L,(BBOBJECT)((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)]);
							}
						}
					}
				}
			}
		}
	}
	if(lua_pcall(bbt_L,(bbt_args->scales[0]),1,0)!=0){
		brl_maxlua_LuaDumpErr();
	}
	BBOBJECT bbt_ret=(BBOBJECT)(&bbNullObject);
	if(!(pub_lua_lua_isnil(bbt_L,-1)!=0)){
		bbt_ret=(BBOBJECT)pub_lua_lua_tostring(bbt_L,-1);
	}
	pub_lua_lua_pop(bbt_L,1);
	pub_lua_lua_pop(bbt_L,1);
	return (BBOBJECT)bbt_ret;
}
struct brl_maxlua_TLuaObject_obj* brl_maxlua_TLuaObject_Create_TTLuaObject_TTLuaClassTObject(struct brl_maxlua_TLuaClass_obj* bbt_class,BBOBJECT bbt_supr){
	return (struct brl_maxlua_TLuaObject_obj*)brl_maxlua_TLuaObject.m_Init_TTLuaClassTObject((struct brl_maxlua_TLuaObject_obj*)((struct brl_maxlua_TLuaObject_obj*)bbObjectNew((BBClass *)&brl_maxlua_TLuaObject)),(struct brl_maxlua_TLuaClass_obj*)bbt_class,(BBOBJECT)bbt_supr);
}
BBINT _brl_maxlua_TLuaObject_lua_pushfenv(struct brl_maxlua_TLuaObject_obj* o){
	BBBYTE* bbt_L=brl_maxlua_LuaState(0);
	lua_rawgeti(bbt_L,-10000,o->_brl_maxlua_tluaobject__fenv );
	return 0;
}
struct BBDebugScope_7 brl_maxlua_TLuaObject_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TLuaObject",
	{
		{
			BBDEBUGDECL_FIELD,
			"_fenv",
			"i",
			.field_offset=offsetof(struct brl_maxlua_TLuaObject_obj,_brl_maxlua_tluaobject__fenv)
		},
		{
			BBDEBUGDECL_FIELD,
			"_class",
			":TLuaClass",
			.field_offset=offsetof(struct brl_maxlua_TLuaObject_obj,_brl_maxlua_tluaobject__class)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_maxlua_TLuaObject_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Init",
			"(:TLuaClass,:Object):TLuaObject",
			.var_address=(void*)&_brl_maxlua_TLuaObject_Init_TTLuaClassTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Invoke",
			"($,[]:Object):Object",
			.var_address=(void*)&_brl_maxlua_TLuaObject_Invoke_SaTObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(:TLuaClass,:Object):TLuaObject",
			.var_address=(void*)&brl_maxlua_TLuaObject_Create_TTLuaObject_TTLuaClassTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"lua_pushfenv",
			"()i",
			.var_address=(void*)&_brl_maxlua_TLuaObject_lua_pushfenv
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_maxlua_TLuaObject brl_maxlua_TLuaObject={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_maxlua_TLuaObject_scope,
	sizeof(struct brl_maxlua_TLuaObject_obj),
	(void (*)(BBOBJECT))_brl_maxlua_TLuaObject_New,
	(void (*)(BBOBJECT))_brl_maxlua_TLuaObject_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_maxlua_TLuaObject_obj,_brl_maxlua_tluaobject__class) - sizeof(void*) + sizeof(struct brl_maxlua_TLuaClass_obj*)
	,0
	,_brl_maxlua_TLuaObject_Init_TTLuaClassTObject
	,_brl_maxlua_TLuaObject_Invoke_SaTObject
	,brl_maxlua_TLuaObject_Create_TTLuaObject_TTLuaClassTObject
	,_brl_maxlua_TLuaObject_lua_pushfenv
};

void _brl_maxlua_TLuaClass_New(struct brl_maxlua_TLuaClass_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_maxlua_TLuaClass;
	o->_brl_maxlua_tluaclass__source = &bbEmptyString;
	o->_brl_maxlua_tluaclass__chunk = 0;
}
void _brl_maxlua_TLuaClass_Delete(struct brl_maxlua_TLuaClass_obj* o) {
	BBBYTE* bbt_L2=brl_maxlua_LuaState(0);
	luaL_unref(bbt_L2,-10000,o->_brl_maxlua_tluaclass__chunk );
	BBRELEASE(o->_brl_maxlua_tluaclass__source )
	bbObjectDtor((BBOBJECT)o);
}
BBSTRING _brl_maxlua_TLuaClass_SourceCode(struct brl_maxlua_TLuaClass_obj* o){
	return o->_brl_maxlua_tluaclass__source ;
}
struct brl_maxlua_TLuaClass_obj* _brl_maxlua_TLuaClass_SetSourceCode_S(struct brl_maxlua_TLuaClass_obj* o,BBSTRING bbt_source){
	BBBYTE* bbt_L=brl_maxlua_LuaState(0);
	o->_brl_maxlua_tluaclass__source =bbt_source;
	if(o->_brl_maxlua_tluaclass__chunk !=0){
		luaL_unref(bbt_L,-10000,o->_brl_maxlua_tluaclass__chunk );
		o->_brl_maxlua_tluaclass__chunk =0;
	}
	return (struct brl_maxlua_TLuaClass_obj*)o;
}
struct brl_maxlua_TLuaClass_obj* brl_maxlua_TLuaClass_Create_TTLuaClass_S(BBSTRING bbt_source){
	return (struct brl_maxlua_TLuaClass_obj*)brl_maxlua_TLuaClass.m_SetSourceCode_S((struct brl_maxlua_TLuaClass_obj*)((struct brl_maxlua_TLuaClass_obj*)bbObjectNew((BBClass *)&brl_maxlua_TLuaClass)),bbt_source);
}
BBINT _brl_maxlua_TLuaClass_lua_pushchunk(struct brl_maxlua_TLuaClass_obj* o){
	BBBYTE* bbt_L=brl_maxlua_LuaState(0);
	if(!(o->_brl_maxlua_tluaclass__chunk !=0)){
		BBBYTE* bbt_ = bbStringToCString(o->_brl_maxlua_tluaclass__source );
		if(luaL_loadstring(bbt_L,bbt_)!=0){
			bbMemFree(bbt_);
			bbWriteStdout(bbStringConcat(bbStringConcat(&_s13,pub_lua_lua_tostring(bbt_L,-1)),&_s14));
			pub_lua_lua_pop(bbt_L,1);
			return 0;
		}
		bbMemFree(bbt_);
		o->_brl_maxlua_tluaclass__chunk =luaL_ref(bbt_L,-10000);
	}
	lua_rawgeti(bbt_L,-10000,o->_brl_maxlua_tluaclass__chunk );
	return 1;
}
struct BBDebugScope_7 brl_maxlua_TLuaClass_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TLuaClass",
	{
		{
			BBDEBUGDECL_FIELD,
			"_source",
			"$",
			.field_offset=offsetof(struct brl_maxlua_TLuaClass_obj,_brl_maxlua_tluaclass__source)
		},
		{
			BBDEBUGDECL_FIELD,
			"_chunk",
			"i",
			.field_offset=offsetof(struct brl_maxlua_TLuaClass_obj,_brl_maxlua_tluaclass__chunk)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_maxlua_TLuaClass_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SourceCode",
			"()$",
			.var_address=(void*)&_brl_maxlua_TLuaClass_SourceCode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSourceCode",
			"($):TLuaClass",
			.var_address=(void*)&_brl_maxlua_TLuaClass_SetSourceCode_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"($):TLuaClass",
			.var_address=(void*)&brl_maxlua_TLuaClass_Create_TTLuaClass_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"lua_pushchunk",
			"()i",
			.var_address=(void*)&_brl_maxlua_TLuaClass_lua_pushchunk
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_maxlua_TLuaClass brl_maxlua_TLuaClass={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_maxlua_TLuaClass_scope,
	sizeof(struct brl_maxlua_TLuaClass_obj),
	(void (*)(BBOBJECT))_brl_maxlua_TLuaClass_New,
	(void (*)(BBOBJECT))_brl_maxlua_TLuaClass_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_maxlua_TLuaClass_obj,_brl_maxlua_tluaclass__chunk) - sizeof(void*) + sizeof(BBINT)
	,0
	,_brl_maxlua_TLuaClass_SourceCode
	,_brl_maxlua_TLuaClass_SetSourceCode_S
	,brl_maxlua_TLuaClass_Create_TTLuaClass_S
	,_brl_maxlua_TLuaClass_lua_pushchunk
};

BBBYTE* brl_maxlua_LuaState(BBINT bbt_reset){
	static int _brl_maxlua_LuaState__luaState_inited = 0;
	if (!_brl_maxlua_LuaState__luaState_inited) {
		_brl_maxlua_LuaState__luaState_inited = 1;
		brl_maxlua_LuaState__luaState = 0;
	};
	if((bbt_reset!=0) && (brl_maxlua_LuaState__luaState)){
		lua_close(brl_maxlua_LuaState__luaState);
		brl_maxlua_LuaState__luaState=0;
	}
	if(!(brl_maxlua_LuaState__luaState)){
		brl_maxlua_LuaState__luaState=luaL_newstate();
		luaL_openlibs(brl_maxlua_LuaState__luaState);
	}
	return brl_maxlua_LuaState__luaState;
}
BBINT brl_maxlua_LuaRegInt(BBSTRING bbt_name,BBINT bbt_value){
	lua_pushinteger(brl_maxlua_LuaState(0),((BBLONG)bbt_value));
	BBBYTE* bbt_ = bbStringToCString(bbt_name);
	lua_setfield(brl_maxlua_LuaState(0),-10002,bbt_);
	bbMemFree(bbt_);
	return 0;
}
BBINT brl_maxlua_LuaRegFunc(BBSTRING bbt_name,BBBYTE* bbt_value){
	lua_pushcclosure(brl_maxlua_LuaState(0),bbt_value,0);
	BBBYTE* bbt_ = bbStringToCString(bbt_name);
	lua_setfield(brl_maxlua_LuaState(0),-10002,bbt_);
	bbMemFree(bbt_);
	return 0;
}
BBINT brl_maxlua_LuaDumpErr(){
	bbWriteStdout(&_s0);
	bbWriteStdout(pub_lua_lua_tostring(brl_maxlua_LuaState(0),-1));
	return 0;
}
BBINT brl_maxlua_Index(BBBYTE* bbt_L){
	BBOBJECT bbt_obj=(BBOBJECT)lua_unboxobject(bbt_L,1);
	struct brl_reflection_TTypeId_obj* bbt_typeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId_ForObject_TTTypeId_TObject((BBOBJECT)bbt_obj);
	BBSTRING bbt_ident=pub_lua_lua_tostring(bbt_L,2);
	struct brl_reflection_TMethod_obj* bbt_mth=(struct brl_reflection_TMethod_obj*)(bbt_typeId)->clas->m_FindMethod_S((struct brl_reflection_TTypeId_obj*)bbt_typeId,bbt_ident);
	if(((BBObject*)bbt_mth)!= &bbNullObject){
		lua_pushvalue(bbt_L,1);
		lua_pushlightobject(bbt_L,(BBOBJECT)bbt_mth);
		lua_pushcclosure(bbt_L,brl_maxlua_Invoke,2);
		return 1;
	}
	struct brl_reflection_TField_obj* bbt_fld=(struct brl_reflection_TField_obj*)(bbt_typeId)->clas->m_FindField_S((struct brl_reflection_TTypeId_obj*)bbt_typeId,bbt_ident);
	if(((BBObject*)bbt_fld)!= &bbNullObject){
		struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)(bbt_fld)->clas->m_TypeId((struct brl_reflection_TMember_obj*)bbt_fld);
		if((((bbt_==brl_reflection_IntTypeId) || (bbt_==brl_reflection_ShortTypeId)) || (bbt_==brl_reflection_ByteTypeId)) || (bbt_==brl_reflection_LongTypeId)){
			lua_pushinteger(bbt_L,((BBLONG)(bbt_fld)->clas->m_GetInt_TObject((struct brl_reflection_TField_obj*)bbt_fld,(BBOBJECT)bbt_obj)));
		}else{
			if(bbt_==brl_reflection_FloatTypeId){
				lua_pushnumber(bbt_L,((BBDOUBLE)(bbt_fld)->clas->m_GetFloat_TObject((struct brl_reflection_TField_obj*)bbt_fld,(BBOBJECT)bbt_obj)));
			}else{
				if(bbt_==brl_reflection_DoubleTypeId){
					lua_pushnumber(bbt_L,(bbt_fld)->clas->m_GetDouble_TObject((struct brl_reflection_TField_obj*)bbt_fld,(BBOBJECT)bbt_obj));
				}else{
					if(bbt_==brl_reflection_StringTypeId){
						BBSTRING bbt_t=(bbt_fld)->clas->m_GetString_TObject((struct brl_reflection_TField_obj*)bbt_fld,(BBOBJECT)bbt_obj);
						BBBYTE* bbt_2 = bbStringToCString(bbt_t);
						lua_pushlstring(bbt_L,bbt_2,((BBLONG)(bbt_t->length)));
						bbMemFree(bbt_2);
					}else{
						brl_maxlua_lua_pushobject(bbt_L,(BBOBJECT)(bbt_fld)->clas->m_Get_TObject((struct brl_reflection_TField_obj*)bbt_fld,(BBOBJECT)bbt_obj));
					}
				}
			}
		}
		return 1;
	}
	return 0;
}
BBINT brl_maxlua_IndexObject(BBBYTE* bbt_L){
	if(brl_maxlua_Index(bbt_L)!=0){
		return 1;
	}
	return 0;
}
BBINT brl_maxlua_NewIndex(BBBYTE* bbt_L){
	BBOBJECT bbt_obj=(BBOBJECT)lua_unboxobject(bbt_L,1);
	struct brl_reflection_TTypeId_obj* bbt_typeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId_ForObject_TTTypeId_TObject((BBOBJECT)bbt_obj);
	BBSTRING bbt_ident=pub_lua_lua_tostring(bbt_L,2);
	struct brl_reflection_TMethod_obj* bbt_mth=(struct brl_reflection_TMethod_obj*)(bbt_typeId)->clas->m_FindMethod_S((struct brl_reflection_TTypeId_obj*)bbt_typeId,bbt_ident);
	if(((BBObject*)bbt_mth)!= &bbNullObject){
		bbExThrow((BBObject *)&_s7);
	}
	struct brl_reflection_TField_obj* bbt_fld=(struct brl_reflection_TField_obj*)(bbt_typeId)->clas->m_FindField_S((struct brl_reflection_TTypeId_obj*)bbt_typeId,bbt_ident);
	if(((BBObject*)bbt_fld)!= &bbNullObject){
		struct brl_reflection_TTypeId_obj* bbt_=(struct brl_reflection_TTypeId_obj*)(bbt_fld)->clas->m_TypeId((struct brl_reflection_TMember_obj*)bbt_fld);
		if(((bbt_==brl_reflection_IntTypeId) || (bbt_==brl_reflection_ShortTypeId)) || (bbt_==brl_reflection_ByteTypeId)){
			(bbt_fld)->clas->m_SetInt_TObjecti((struct brl_reflection_TField_obj*)bbt_fld,(BBOBJECT)bbt_obj,((BBINT)lua_tointeger(bbt_L,3)));
		}else{
			if(bbt_==brl_reflection_LongTypeId){
				(bbt_fld)->clas->m_SetLong_TObjectl((struct brl_reflection_TField_obj*)bbt_fld,(BBOBJECT)bbt_obj,lua_tointeger(bbt_L,3));
			}else{
				if(bbt_==brl_reflection_FloatTypeId){
					(bbt_fld)->clas->m_SetFloat_TObjectf((struct brl_reflection_TField_obj*)bbt_fld,(BBOBJECT)bbt_obj,((BBFLOAT)lua_tonumber(bbt_L,3)));
				}else{
					if(bbt_==brl_reflection_DoubleTypeId){
						(bbt_fld)->clas->m_SetDouble_TObjectd((struct brl_reflection_TField_obj*)bbt_fld,(BBOBJECT)bbt_obj,lua_tonumber(bbt_L,3));
					}else{
						if(bbt_==brl_reflection_StringTypeId){
							(bbt_fld)->clas->m_SetString_TObjectS((struct brl_reflection_TField_obj*)bbt_fld,(BBOBJECT)bbt_obj,pub_lua_lua_tostring(bbt_L,3));
						}else{
							(bbt_fld)->clas->m_Set_TObjectTObject((struct brl_reflection_TField_obj*)bbt_fld,(BBOBJECT)bbt_obj,(BBOBJECT)lua_unboxobject(bbt_L,3));
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}
BBINT brl_maxlua_NewIndexObject(BBBYTE* bbt_L){
	if(brl_maxlua_NewIndex(bbt_L)!=0){
		return 0;
	}
	bbExThrow((BBObject *)&_s7);
	return 0;
}
BBINT brl_maxlua_ObjMetaTable(){
	static int _brl_maxlua_ObjMetaTable__objMetaTable_inited = 0;
	if (!_brl_maxlua_ObjMetaTable__objMetaTable_inited) {
		_brl_maxlua_ObjMetaTable__objMetaTable_inited = 1;
		brl_maxlua_ObjMetaTable__objMetaTable = 0;
	};
	static int _brl_maxlua_ObjMetaTable_done_inited = 0;
	if (!_brl_maxlua_ObjMetaTable_done_inited) {
		_brl_maxlua_ObjMetaTable_done_inited = 1;
		brl_maxlua_ObjMetaTable_done = 0;
	};
	if(!(brl_maxlua_ObjMetaTable_done!=0)){
		pub_lua_lua_newtable(brl_maxlua_LuaState(0));
		pub_lua_lua_pushcfunction(brl_maxlua_LuaState(0),lua_gcobject);
		BBBYTE* bbt_ = bbStringToCString(&_s9);
		lua_setfield(brl_maxlua_LuaState(0),-2,bbt_);
		bbMemFree(bbt_);
		pub_lua_lua_pushcfunction(brl_maxlua_LuaState(0),brl_maxlua_IndexObject);
		BBBYTE* bbt_2 = bbStringToCString(&_s10);
		lua_setfield(brl_maxlua_LuaState(0),-2,bbt_2);
		bbMemFree(bbt_2);
		pub_lua_lua_pushcfunction(brl_maxlua_LuaState(0),brl_maxlua_NewIndexObject);
		BBBYTE* bbt_3 = bbStringToCString(&_s11);
		lua_setfield(brl_maxlua_LuaState(0),-2,bbt_3);
		bbMemFree(bbt_3);
		brl_maxlua_ObjMetaTable__objMetaTable=luaL_ref(brl_maxlua_LuaState(0),-10000);
		brl_maxlua_ObjMetaTable_done=1;
	}
	return brl_maxlua_ObjMetaTable__objMetaTable;
}
BBINT brl_maxlua_lua_pushobject(BBBYTE* bbt_L,BBOBJECT bbt_obj){
	lua_boxobject(bbt_L,(BBOBJECT)bbt_obj);
	lua_rawgeti(bbt_L,-10000,brl_maxlua_ObjMetaTable());
	lua_setmetatable(bbt_L,-2);
	return 0;
}
BBINT brl_maxlua_Invoke(BBBYTE* bbt_L){
	BBOBJECT bbt_obj=(BBOBJECT)lua_unboxobject(bbt_L,-10003);
	struct brl_reflection_TMethod_obj* bbt_meth=(struct brl_reflection_TMethod_obj*)((struct brl_reflection_TMethod_obj*)bbObjectDowncast((BBOBJECT)lua_tolightobject(bbt_L,-10004),(BBClass*)&brl_reflection_TMethod));
	BBARRAY bbt_tys=(bbt_meth)->clas->m_ArgTypes((struct brl_reflection_TMethod_obj*)bbt_meth);
	BBARRAY bbt_args=bbArrayNew1D(":Object", (bbt_tys->scales[0]));
	{
		BBINT bbt_i=0;
		BBINT bbt_=(bbt_args->scales[0]);
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			struct brl_reflection_TTypeId_obj* bbt_2=(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_tys,1))[((BBUINT)bbt_i)];
			if(((bbt_2==brl_reflection_IntTypeId) || (bbt_2==brl_reflection_ShortTypeId)) || (bbt_2==brl_reflection_ByteTypeId)){
				((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)]=(BBOBJECT)bbStringFromInt((BBINT)lua_tointeger(bbt_L,(bbt_i+1)));
			}else{
				if(bbt_2==brl_reflection_LongTypeId){
					((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)]=(BBOBJECT)bbStringFromLong(lua_tointeger(bbt_L,(bbt_i+1)));
				}else{
					if(bbt_2==brl_reflection_FloatTypeId){
						((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)]=(BBOBJECT)bbStringFromFloat((BBFLOAT)lua_tonumber(bbt_L,(bbt_i+1)));
					}else{
						if(bbt_2==brl_reflection_DoubleTypeId){
							((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)]=(BBOBJECT)bbStringFromDouble(lua_tonumber(bbt_L,(bbt_i+1)));
						}else{
							if(bbt_2==brl_reflection_StringTypeId){
								((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)]=(BBOBJECT)pub_lua_lua_tostring(bbt_L,(bbt_i+1));
							}else{
								if(pub_lua_lua_isnil(bbt_L,(bbt_i+1))!=0){
									((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)]=(BBOBJECT)&bbNullObject;
								}else{
									if(lua_isuserdata(bbt_L,(bbt_i+1))!=0){
										BBOBJECT bbt_obj2=(BBOBJECT)lua_unboxobject(bbt_L,(bbt_i+1));
										if(!(((BBObject*)bbt_obj2)!= &bbNullObject)){
											struct brl_reflection_TTypeId_obj* bbt_3;
											bbExThrow((BBObject *)bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s1,(bbt_meth)->clas->m_Name((struct brl_reflection_TMember_obj*)bbt_meth)),&_s2),bbStringFromInt(bbt_i)),&_s3),((bbt_3 = ((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_tys,1))[((BBUINT)bbt_i)])->clas)->m_Name((struct brl_reflection_TTypeId_obj*)bbt_3)),&_s4));
										}else{
											struct brl_reflection_TTypeId_obj* bbt_4;
											if((((struct brl_reflection_TTypeId_obj*)(bbt_4 = brl_reflection_TTypeId_ForObject_TTTypeId_TObject((BBOBJECT)bbt_obj2)))->clas)->m_ExtendsType_TTTypeId((struct brl_reflection_TTypeId_obj*)bbt_4,(struct brl_reflection_TTypeId_obj*)((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_tys,1))[((BBUINT)bbt_i)])!=0){
												((BBOBJECT*)BBARRAYDATA(bbt_args,1))[((BBUINT)bbt_i)]=(BBOBJECT)bbt_obj2;
											}else{
												struct brl_reflection_TTypeId_obj* bbt_5;
												struct brl_reflection_TTypeId_obj* bbt_6;
												bbExThrow((BBObject *)bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s1,(bbt_meth)->clas->m_Name((struct brl_reflection_TMember_obj*)bbt_meth)),&_s2),bbStringFromInt(bbt_i)),&_s3),((bbt_5 = ((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_tys,1))[((BBUINT)bbt_i)])->clas)->m_Name((struct brl_reflection_TTypeId_obj*)bbt_5)),&_s5),(((struct brl_reflection_TTypeId_obj*)(bbt_6 = brl_reflection_TTypeId_ForObject_TTTypeId_TObject((BBOBJECT)bbt_obj2)))->clas)->m_Name((struct brl_reflection_TTypeId_obj*)bbt_6)),&_s6));
											}
										}
									}else{
										struct brl_reflection_TTypeId_obj* bbt_7;
										bbExThrow((BBObject *)bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s1,(bbt_meth)->clas->m_Name((struct brl_reflection_TMember_obj*)bbt_meth)),&_s2),bbStringFromInt(bbt_i)),&_s3),((bbt_7 = ((struct brl_reflection_TTypeId_obj**)BBARRAYDATA(bbt_tys,1))[((BBUINT)bbt_i)])->clas)->m_Name((struct brl_reflection_TTypeId_obj*)bbt_7)),&_s6));
									}
								}
							}
						}
					}
				}
			}
		}
	}
	BBOBJECT bbt_t=(BBOBJECT)(bbt_meth)->clas->m_Invoke_TObjectaTObject((struct brl_reflection_TMethod_obj*)bbt_meth,(BBOBJECT)bbt_obj,bbt_args);
	struct brl_reflection_TTypeId_obj* bbt_8=(struct brl_reflection_TTypeId_obj*)(bbt_meth)->clas->m_ReturnType((struct brl_reflection_TMethod_obj*)bbt_meth);
	if((((bbt_8==brl_reflection_IntTypeId) || (bbt_8==brl_reflection_ShortTypeId)) || (bbt_8==brl_reflection_ByteTypeId)) || (bbt_8==brl_reflection_LongTypeId)){
		lua_pushinteger(bbt_L,((BBLONG)bbStringToInt((BBSTRING)(bbt_t)->clas->ToString((BBOBJECT)bbt_t))));
	}else{
		if(bbt_8==brl_reflection_FloatTypeId){
			lua_pushnumber(bbt_L,((BBDOUBLE)bbStringToFloat((BBSTRING)(bbt_t)->clas->ToString((BBOBJECT)bbt_t))));
		}else{
			if(bbt_8==brl_reflection_DoubleTypeId){
				lua_pushnumber(bbt_L,bbStringToDouble((BBSTRING)(bbt_t)->clas->ToString((BBOBJECT)bbt_t)));
			}else{
				if(bbt_8==brl_reflection_StringTypeId){
					BBSTRING bbt_s=(bbt_t)->clas->ToString((BBOBJECT)bbt_t);
					BBBYTE* bbt_9 = bbStringToCString(bbt_s);
					lua_pushlstring(bbt_L,bbt_9,((BBLONG)(bbt_s->length)));
					bbMemFree(bbt_9);
				}else{
					brl_maxlua_lua_pushobject(bbt_L,(BBOBJECT)bbt_t);
				}
			}
		}
	}
	return 1;
}
BBINT brl_maxlua_IndexSelf(BBBYTE* bbt_L){
	BBBYTE* bbt_ = bbStringToCString(&_s8);
	lua_getfield(bbt_L,1,bbt_);
	bbMemFree(bbt_);
	lua_replace(bbt_L,1);
	if(brl_maxlua_Index(bbt_L)!=0){
		return 1;
	}
	lua_remove(bbt_L,1);
	lua_gettable(bbt_L,-10002);
	return 1;
}
BBINT brl_maxlua_NewIndexSelf(BBBYTE* bbt_L){
	lua_rawset(bbt_L,1);
	return 0;
}
BBINT brl_maxlua_lua_pusharray(BBBYTE* bbt_L,BBOBJECT bbt_obj){
	struct brl_reflection_TTypeId_obj* bbt_typeId=(struct brl_reflection_TTypeId_obj*)brl_reflection_TTypeId_ForObject_TTTypeId_TObject((BBOBJECT)bbt_obj);
	BBINT bbt_size=(bbt_typeId)->clas->m_ArrayLength_TObjecti((struct brl_reflection_TTypeId_obj*)bbt_typeId,(BBOBJECT)bbt_obj,0);
	lua_createtable(bbt_L,bbt_size,0);
	{
		BBINT bbt_i=0;
		BBINT bbt_=bbt_size;
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			lua_pushinteger(bbt_L,((BBLONG)bbt_i));
			struct brl_reflection_TTypeId_obj* bbt_2=(struct brl_reflection_TTypeId_obj*)(bbt_typeId)->clas->m_ElementType((struct brl_reflection_TTypeId_obj*)bbt_typeId);
			if((((bbt_2==brl_reflection_IntTypeId) || (bbt_2==brl_reflection_ShortTypeId)) || (bbt_2==brl_reflection_ByteTypeId)) || (bbt_2==brl_reflection_LongTypeId)){
				BBOBJECT bbt_3;
				lua_pushinteger(bbt_L,((BBLONG)bbStringToInt((BBSTRING)(bbt_3 = (bbt_typeId)->clas->m_GetArrayElement_TObjecti((struct brl_reflection_TTypeId_obj*)bbt_typeId,(BBOBJECT)bbt_obj,bbt_i))->clas->ToString((BBOBJECT)bbt_3))));
			}else{
				if(bbt_2==brl_reflection_FloatTypeId){
					BBOBJECT bbt_4;
					lua_pushnumber(bbt_L,((BBDOUBLE)bbStringToFloat((BBSTRING)(bbt_4 = (bbt_typeId)->clas->m_GetArrayElement_TObjecti((struct brl_reflection_TTypeId_obj*)bbt_typeId,(BBOBJECT)bbt_obj,bbt_i))->clas->ToString((BBOBJECT)bbt_4))));
				}else{
					if(bbt_2==brl_reflection_DoubleTypeId){
						BBOBJECT bbt_5;
						lua_pushnumber(bbt_L,bbStringToDouble((BBSTRING)(bbt_5 = (bbt_typeId)->clas->m_GetArrayElement_TObjecti((struct brl_reflection_TTypeId_obj*)bbt_typeId,(BBOBJECT)bbt_obj,bbt_i))->clas->ToString((BBOBJECT)bbt_5)));
					}else{
						if(bbt_2==brl_reflection_StringTypeId){
							BBOBJECT bbt_6;
							BBSTRING bbt_s=(bbt_6 = (bbt_typeId)->clas->m_GetArrayElement_TObjecti((struct brl_reflection_TTypeId_obj*)bbt_typeId,(BBOBJECT)bbt_obj,bbt_i))->clas->ToString((BBOBJECT)bbt_6);
							BBBYTE* bbt_7 = bbStringToCString(bbt_s);
							lua_pushlstring(bbt_L,bbt_7,((BBLONG)(bbt_s->length)));
							bbMemFree(bbt_7);
						}else{
							if(bbt_2==brl_reflection_ArrayTypeId){
								brl_maxlua_lua_pusharray(bbt_L,(BBOBJECT)(bbt_typeId)->clas->m_GetArrayElement_TObjecti((struct brl_reflection_TTypeId_obj*)bbt_typeId,(BBOBJECT)bbt_obj,bbt_i));
							}else{
								brl_maxlua_lua_pushobject(bbt_L,(BBOBJECT)(bbt_typeId)->clas->m_GetArrayElement_TObjecti((struct brl_reflection_TTypeId_obj*)bbt_typeId,(BBOBJECT)bbt_obj,bbt_i));
							}
						}
					}
				}
			}
			lua_settable(bbt_L,-3);
		}
	}
	return 0;
}
BBINT brl_maxlua_lua_registerobject(BBBYTE* bbt_L,BBOBJECT bbt_obj,BBSTRING bbt_name){
	brl_maxlua_lua_pushobject(bbt_L,(BBOBJECT)bbt_obj);
	pub_lua_lua_setglobal(bbt_L,bbt_name);
	return 0;
}
BBINT brl_maxlua_LuaRegisterObject(BBOBJECT bbt_obj,BBSTRING bbt_name){
	brl_maxlua_lua_registerobject(brl_maxlua_LuaState(0),(BBOBJECT)bbt_obj,bbt_name);
	return 0;
}
BBINT brl_maxlua_LuaDeregisterObject(BBSTRING bbt_name){
	lua_pushnil(brl_maxlua_LuaState(0));
	pub_lua_lua_setglobal(brl_maxlua_LuaState(0),bbt_name);
	return 0;
}
BBINT brl_maxlua_LuaShutdown(){
	brl_maxlua_LuaState(1);
	return 0;
}
static int __bb_brl_maxlua_maxlua_inited = 0;
int __bb_brl_maxlua_maxlua(){
	if (!__bb_brl_maxlua_maxlua_inited) {
		__bb_brl_maxlua_maxlua_inited = 1;
		GC_add_roots(&brl_maxlua_DummyLuaSuper, &brl_maxlua_ObjMetaTable_done + 1);
		__bb_brl_blitz_blitz();
		__bb_pub_lua_lua();
		__bb_brl_reflection_reflection();
		bbObjectRegisterType((BBCLASS)&brl_maxlua_TDummyLuaSuper);
		bbObjectRegisterType((BBCLASS)&brl_maxlua_TLuaObject);
		bbObjectRegisterType((BBCLASS)&brl_maxlua_TLuaClass);
		brl_maxlua_DummyLuaSuper=(struct brl_maxlua_TDummyLuaSuper_obj*)(struct brl_maxlua_TDummyLuaSuper_obj*)bbObjectAtomicNew((BBClass *)&brl_maxlua_TDummyLuaSuper);
		return 0;
	}
	return 0;
}