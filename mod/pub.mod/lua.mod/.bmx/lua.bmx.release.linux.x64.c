#include <pub.mod/lua.mod/.bmx/lua.bmx.release.linux.x64.h>
static BBString _s2={
	&bbStringClass,
	40,
	{67,111,112,121,114,105,103,104,116,32,40,67,41,32,49,57,57
	,52,45,50,48,48,56,32,76,117,97,46,111,114,103,44,32
	,80,85,67,45,82,105,111}
};
static BBString _s0={
	&bbStringClass,
	7,
	{76,117,97,32,53,46,49}
};
static BBString _s1={
	&bbStringClass,
	9,
	{76,117,97,32,53,46,49,46,52}
};
static BBString _s3={
	&bbStringClass,
	48,
	{82,46,32,73,101,114,117,115,97,108,105,109,115,99,104,121,44
	,32,76,46,32,72,46,32,100,101,32,70,105,103,117,101,105
	,114,101,100,111,32,38,32,87,46,32,67,101,108,101,115}
};
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_21{int kind; const char *name; BBDebugDecl decls[22]; };
struct BBDebugScope_21 lua_Debug_scope ={
	BBDEBUGSCOPE_USERSTRUCT,
	"lua_Debug",
	{
		{
			BBDEBUGDECL_FIELD,
			"event",
			"i",
			.field_offset=offsetof(struct lua_Debug,event)
		},
		{
			BBDEBUGDECL_FIELD,
			"name",
			"*b",
			.field_offset=offsetof(struct lua_Debug,name)
		},
		{
			BBDEBUGDECL_FIELD,
			"namewhat",
			"*b",
			.field_offset=offsetof(struct lua_Debug,namewhat)
		},
		{
			BBDEBUGDECL_FIELD,
			"what",
			"*b",
			.field_offset=offsetof(struct lua_Debug,what)
		},
		{
			BBDEBUGDECL_FIELD,
			"source",
			"*b",
			.field_offset=offsetof(struct lua_Debug,source)
		},
		{
			BBDEBUGDECL_FIELD,
			"currentline",
			"i",
			.field_offset=offsetof(struct lua_Debug,currentline)
		},
		{
			BBDEBUGDECL_FIELD,
			"nups",
			"i",
			.field_offset=offsetof(struct lua_Debug,nups)
		},
		{
			BBDEBUGDECL_FIELD,
			"linedefined",
			"i",
			.field_offset=offsetof(struct lua_Debug,linedefined)
		},
		{
			BBDEBUGDECL_FIELD,
			"lastlinedefined",
			"i",
			.field_offset=offsetof(struct lua_Debug,lastlinedefined)
		},
		{
			BBDEBUGDECL_FIELD,
			"short_src",
			"b",
			.field_offset=offsetof(struct lua_Debug,short_src)
		},
		{
			BBDEBUGDECL_FIELD,
			"short_src_01",
			"b",
			.field_offset=offsetof(struct lua_Debug,short_src_01)
		},
		{
			BBDEBUGDECL_FIELD,
			"short_src_02",
			"b",
			.field_offset=offsetof(struct lua_Debug,short_src_02)
		},
		{
			BBDEBUGDECL_FIELD,
			"short_src_03",
			"b",
			.field_offset=offsetof(struct lua_Debug,short_src_03)
		},
		{
			BBDEBUGDECL_FIELD,
			"short_src_04",
			"l",
			.field_offset=offsetof(struct lua_Debug,short_src_04)
		},
		{
			BBDEBUGDECL_FIELD,
			"short_src_12",
			"l",
			.field_offset=offsetof(struct lua_Debug,short_src_12)
		},
		{
			BBDEBUGDECL_FIELD,
			"short_src_20",
			"l",
			.field_offset=offsetof(struct lua_Debug,short_src_20)
		},
		{
			BBDEBUGDECL_FIELD,
			"short_src_28",
			"l",
			.field_offset=offsetof(struct lua_Debug,short_src_28)
		},
		{
			BBDEBUGDECL_FIELD,
			"short_src_36",
			"l",
			.field_offset=offsetof(struct lua_Debug,short_src_36)
		},
		{
			BBDEBUGDECL_FIELD,
			"short_src_44",
			"l",
			.field_offset=offsetof(struct lua_Debug,short_src_44)
		},
		{
			BBDEBUGDECL_FIELD,
			"short_src_52",
			"l",
			.field_offset=offsetof(struct lua_Debug,short_src_52)
		},
		{
			BBDEBUGDECL_FIELD,
			"i_ci",
			"i",
			.field_offset=offsetof(struct lua_Debug,i_ci)
		},
		BBDEBUGDECL_END
	}
};
struct BBDebugScope_2 lua_Reg_scope ={
	BBDEBUGSCOPE_USERSTRUCT,
	"lua_Reg",
	{
		{
			BBDEBUGDECL_FIELD,
			"name",
			"*b",
			.field_offset=offsetof(struct lua_Reg,name)
		},
		{
			BBDEBUGDECL_FIELD,
			"func",
			"(*b)i",
			.field_offset=offsetof(struct lua_Reg,func)
		},
		BBDEBUGDECL_END
	}
};
void pub_lua_lua_getglobal(BBBYTE* bbt_lua_state,BBSTRING bbt_name){
	BBBYTE* bbt_ = bbStringToCString(bbt_name);
	lua_getfield(bbt_lua_state,-10002,bbt_);
	bbMemFree(bbt_);
}
BBINT pub_lua_lua_isboolean(BBBYTE* bbt_lua_state,BBINT bbt_index){
	return (lua_type(bbt_lua_state,bbt_index)==1);
}
BBINT pub_lua_lua_isfunction(BBBYTE* bbt_lua_state,BBINT bbt_index){
	return (lua_type(bbt_lua_state,bbt_index)==6);
}
BBINT pub_lua_lua_islightuserdata(BBBYTE* bbt_lua_state,BBINT bbt_index){
	return (lua_type(bbt_lua_state,bbt_index)==2);
}
BBINT pub_lua_lua_isnil(BBBYTE* bbt_lua_state,BBINT bbt_index){
	return (lua_type(bbt_lua_state,bbt_index)==0);
}
BBINT pub_lua_lua_isnone(BBBYTE* bbt_lua_state,BBINT bbt_index){
	return (lua_type(bbt_lua_state,bbt_index)==-1);
}
BBINT pub_lua_lua_isnoneornil(BBBYTE* bbt_lua_state,BBINT bbt_index){
	return (lua_type(bbt_lua_state,bbt_index)<=0);
}
BBINT pub_lua_lua_istable(BBBYTE* bbt_lua_state,BBINT bbt_index){
	return (lua_type(bbt_lua_state,bbt_index)==5);
}
BBINT pub_lua_lua_isthread(BBBYTE* bbt_lua_state,BBINT bbt_index){
	return (lua_type(bbt_lua_state,bbt_index)==8);
}
void pub_lua_lua_newtable(BBBYTE* bbt_lua_state){
	lua_createtable(bbt_lua_state,0,0);
}
void pub_lua_lua_pop(BBBYTE* bbt_lua_state,BBINT bbt_n){
	lua_settop(bbt_lua_state,(-bbt_n-1));
}
void pub_lua_lua_pushbytearray(BBBYTE* bbt_lua_state,BBARRAY bbt_Buffer){
	lua_pushlstring(bbt_lua_state,(&((BBBYTE*)BBARRAYDATA(bbt_Buffer,1))[0U]),((BBLONG)(bbt_Buffer->scales[0])));
}
void pub_lua_lua_pushcfunction(BBBYTE* bbt_lua_state,BBINT(* bbt_fn)(BBBYTE*)){
	lua_pushcclosure(bbt_lua_state,bbt_fn,0);
}
void pub_lua_lua_setglobal(BBBYTE* bbt_lua_state,BBSTRING bbt_name){
	BBBYTE* bbt_ = bbStringToCString(bbt_name);
	lua_setfield(bbt_lua_state,-10002,bbt_);
	bbMemFree(bbt_);
}
void pub_lua_lua_register(BBBYTE* bbt_lua_state,BBSTRING bbt_name,BBINT(* bbt_f)(BBBYTE*)){
	pub_lua_lua_pushcfunction(bbt_lua_state,bbt_f);
	pub_lua_lua_setglobal(bbt_lua_state,bbt_name);
}
BBARRAY pub_lua_lua_tobytearray(BBBYTE* bbt_lua_state,BBINT bbt_index){
	BBSIZET bbt_Length=0;
	BBBYTE* bbt_DataPtr=lua_tolstring(bbt_lua_state,bbt_index,(&bbt_Length));
	if(bbt_DataPtr==0){
		return (&bbEmptyArray);
	}else{
		BBARRAY bbt_Result=bbArrayNew1D("b", ((BBINT)bbt_Length));
		bbMemCopy((void*)(&((BBBYTE*)BBARRAYDATA(bbt_Result,1))[0U]),(const void*)bbt_DataPtr,(size_t)bbt_Length);
		return bbt_Result;
	}
}
BBSTRING pub_lua_lua_tostring(BBBYTE* bbt_lua_state,BBINT bbt_index){
	BBSIZET bbt_Length=0;
	BBBYTE* bbt_StringPtr=lua_tolstring(bbt_lua_state,bbt_index,(&bbt_Length));
	if(bbt_StringPtr==0){
		return (&bbEmptyString);
	}else{
		return bbStringFromBytes(bbt_StringPtr,((BBINT)bbt_Length));
	}
}
void pub_lua_luaL_addchar(BBBYTE* bbt_B,BBSTRING bbt_c){
	BBBYTE* bbt_ = bbStringToCString(bbStringSlice(bbt_c,0,brl_blitz_Min((bbt_c->length),1)));
	luaL_addstring(bbt_B,bbt_);
	bbMemFree(bbt_);
}
void pub_lua_luaL_argcheck(BBBYTE* bbt_lua_state,BBINT bbt_cond,BBINT bbt_narg,BBSTRING bbt_extramsg){
	if(!(bbt_cond!=0)){
		BBBYTE* bbt_ = bbStringToCString(bbt_extramsg);
		luaL_argerror(bbt_lua_state,bbt_narg,bbt_);
		bbMemFree(bbt_);
	}
}
BBINT pub_lua_luaL_checkint(BBBYTE* bbt_lua_state,BBINT bbt_narg){
	return ((BBINT)luaL_checkinteger(bbt_lua_state,bbt_narg));
}
BBLONG pub_lua_luaL_checklong(BBBYTE* bbt_lua_state,BBINT bbt_narg){
	return luaL_checkinteger(bbt_lua_state,bbt_narg);
}
BBSTRING pub_lua_luaL_checkstring(BBBYTE* bbt_lua_state,BBINT bbt_narg){
	BBINT bbt_Size=0;
	BBBYTE* bbt_StringPtr=luaL_checklstring(bbt_lua_state,bbt_narg,(&bbt_Size));
	if(bbt_StringPtr==0){
		return (&bbEmptyString);
	}else{
		return bbStringFromBytes(bbt_StringPtr,bbt_Size);
	}
}
BBINT pub_lua_luaL_dofile(BBBYTE* bbt_lua_state,BBSTRING bbt_filename){
	BBBYTE* bbt_ = bbStringToCString(bbt_filename);
	if(luaL_loadfile(bbt_lua_state,bbt_)!=0){
		bbMemFree(bbt_);
		return 1;
	}else{
		bbMemFree(bbt_);
		return lua_pcall(bbt_lua_state,0,-1,0);
	}
}
BBINT pub_lua_luaL_dostring(BBBYTE* bbt_lua_state,BBSTRING bbt_str){
	BBBYTE* bbt_ = bbStringToCString(bbt_str);
	if(luaL_loadstring(bbt_lua_state,bbt_)!=0){
		bbMemFree(bbt_);
		return 1;
	}else{
		bbMemFree(bbt_);
		return lua_pcall(bbt_lua_state,0,-1,0);
	}
}
void pub_lua_luaL_getmetatable(BBBYTE* bbt_lua_state,BBSTRING bbt_tname){
	BBBYTE* bbt_ = bbStringToCString(bbt_tname);
	lua_getfield(bbt_lua_state,-10000,bbt_);
	bbMemFree(bbt_);
}
BBINT pub_lua_luaL_optint(BBBYTE* bbt_lua_state,BBINT bbt_narg,BBINT bbt_d){
	return ((BBINT)luaL_optinteger(bbt_lua_state,bbt_narg,((BBLONG)bbt_d)));
}
BBLONG pub_lua_luaL_optlong(BBBYTE* bbt_lua_state,BBINT bbt_narg,BBLONG bbt_d){
	if((brl_blitz_Abs(bbt_narg)>lua_gettop(bbt_lua_state)) || (pub_lua_lua_isnil(bbt_lua_state,bbt_narg)!=0)){
		return bbt_d;
	}else{
		return pub_lua_luaL_checklong(bbt_lua_state,bbt_narg);
	}
}
BBSTRING pub_lua_luaL_optstring(BBBYTE* bbt_lua_state,BBINT bbt_narg,BBSTRING bbt_d){
	BBINT bbt_Size=0;
	BBBYTE* bbt_ = bbStringToCString(bbt_d);
	BBBYTE* bbt_StringPtr=luaL_optlstring(bbt_lua_state,bbt_narg,bbt_,(&bbt_Size));
	bbMemFree(bbt_);
	if(bbt_StringPtr==0){
		return (&bbEmptyString);
	}else{
		return bbStringFromBytes(bbt_StringPtr,bbt_Size);
	}
}
BBSTRING pub_lua_luaL_typename(BBBYTE* bbt_lua_state,BBINT bbt_idx){
	return bbStringFromCString(lua_typename(bbt_lua_state,lua_type(bbt_lua_state,bbt_idx)));
}
BBINT pub_lua_lua_dobuffer(BBBYTE* bbt_lua_state,BBSTRING bbt_buff,BBINT bbt_sz,BBSTRING bbt_name){
	BBBYTE* bbt_ = bbStringToCString(bbt_buff);
	BBBYTE* bbt_2 = bbStringToCString(bbt_name);
	if(luaL_loadbuffer(bbt_lua_state,bbt_,bbt_sz,bbt_2)!=0){
		bbMemFree(bbt_2);
		bbMemFree(bbt_);
		return 1;
	}else{
		bbMemFree(bbt_2);
		bbMemFree(bbt_);
		return lua_pcall(bbt_lua_state,0,-1,0);
	}
}
BBINT pub_lua_lua_dofile(BBBYTE* bbt_lua_state,BBSTRING bbt_filename){
	return pub_lua_luaL_dofile(bbt_lua_state,bbt_filename);
}
BBINT pub_lua_lua_dostring(BBBYTE* bbt_lua_state,BBSTRING bbt_str){
	return pub_lua_luaL_dostring(bbt_lua_state,bbt_str);
}
BBLONG pub_lua_lua_strlen(BBBYTE* bbt_lua_state,BBINT bbt_index){
	return lua_objlen(bbt_lua_state,bbt_index);
}
static int __bb_pub_lua_lua_inited = 0;
int __bb_pub_lua_lua(){
	if (!__bb_pub_lua_lua_inited) {
		__bb_pub_lua_lua_inited = 1;
		__bb_brl_blitz_blitz();
		return 0;
	}
	return 0;
}