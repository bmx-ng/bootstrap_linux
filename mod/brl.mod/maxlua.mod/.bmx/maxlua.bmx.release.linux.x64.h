#ifndef BRL_MAXLUA_MAXLUA_BMX_RELEASE_LINUX_X64_H
#define BRL_MAXLUA_MAXLUA_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <pub.mod/lua.mod/.bmx/lua.bmx.release.linux.x64.h>
#include <brl.mod/reflection.mod/.bmx/reflection.bmx.release.linux.x64.h>
int __bb_brl_maxlua_maxlua();
struct brl_maxlua_TDummyLuaSuper_obj;
struct brl_maxlua_TLuaObject_obj;
struct brl_maxlua_TLuaClass_obj;
void _brl_maxlua_TDummyLuaSuper_New(struct brl_maxlua_TDummyLuaSuper_obj* o);
struct BBClass_brl_maxlua_TDummyLuaSuper {
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

struct brl_maxlua_TDummyLuaSuper_obj {
	struct BBClass_brl_maxlua_TDummyLuaSuper* clas;
};
extern struct BBClass_brl_maxlua_TDummyLuaSuper brl_maxlua_TDummyLuaSuper;
void _brl_maxlua_TLuaObject_New(struct brl_maxlua_TLuaObject_obj* o);
void _brl_maxlua_TLuaObject_Delete(struct brl_maxlua_TLuaObject_obj* o);
typedef struct brl_maxlua_TLuaObject_obj* (*brl_maxlua_TLuaObject_Init_TTLuaClassTObject_m)(struct brl_maxlua_TLuaObject_obj*,struct brl_maxlua_TLuaClass_obj*,BBOBJECT);
struct brl_maxlua_TLuaObject_obj* _brl_maxlua_TLuaObject_Init_TTLuaClassTObject(struct brl_maxlua_TLuaObject_obj*,struct brl_maxlua_TLuaClass_obj*,BBOBJECT);
typedef BBOBJECT (*brl_maxlua_TLuaObject_Invoke_SaTObject_m)(struct brl_maxlua_TLuaObject_obj*,BBSTRING,BBARRAY);
BBOBJECT _brl_maxlua_TLuaObject_Invoke_SaTObject(struct brl_maxlua_TLuaObject_obj*,BBSTRING,BBARRAY);
typedef struct brl_maxlua_TLuaObject_obj* (*brl_maxlua_TLuaObject_Create_TTLuaObject_TTLuaClassTObject_f)(struct brl_maxlua_TLuaClass_obj*,BBOBJECT);
struct brl_maxlua_TLuaObject_obj* brl_maxlua_TLuaObject_Create_TTLuaObject_TTLuaClassTObject(struct brl_maxlua_TLuaClass_obj*,BBOBJECT);
typedef BBINT (*brl_maxlua_TLuaObject_lua_pushfenv_m)(struct brl_maxlua_TLuaObject_obj*);
BBINT _brl_maxlua_TLuaObject_lua_pushfenv(struct brl_maxlua_TLuaObject_obj*);
struct BBClass_brl_maxlua_TLuaObject {
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
	brl_maxlua_TLuaObject_Init_TTLuaClassTObject_m m_Init_TTLuaClassTObject;
	brl_maxlua_TLuaObject_Invoke_SaTObject_m m_Invoke_SaTObject;
	brl_maxlua_TLuaObject_Create_TTLuaObject_TTLuaClassTObject_f f_Create_TTLuaObject_TTLuaClassTObject;
	brl_maxlua_TLuaObject_lua_pushfenv_m m_lua_pushfenv;
};

struct brl_maxlua_TLuaObject_obj {
	struct BBClass_brl_maxlua_TLuaObject* clas;
	BBINT _brl_maxlua_tluaobject__fenv;
	struct brl_maxlua_TLuaClass_obj* _brl_maxlua_tluaobject__class;
};
extern struct BBClass_brl_maxlua_TLuaObject brl_maxlua_TLuaObject;
void _brl_maxlua_TLuaClass_New(struct brl_maxlua_TLuaClass_obj* o);
void _brl_maxlua_TLuaClass_Delete(struct brl_maxlua_TLuaClass_obj* o);
typedef BBSTRING (*brl_maxlua_TLuaClass_SourceCode_m)(struct brl_maxlua_TLuaClass_obj*);
BBSTRING _brl_maxlua_TLuaClass_SourceCode(struct brl_maxlua_TLuaClass_obj*);
typedef struct brl_maxlua_TLuaClass_obj* (*brl_maxlua_TLuaClass_SetSourceCode_S_m)(struct brl_maxlua_TLuaClass_obj*,BBSTRING);
struct brl_maxlua_TLuaClass_obj* _brl_maxlua_TLuaClass_SetSourceCode_S(struct brl_maxlua_TLuaClass_obj*,BBSTRING);
typedef struct brl_maxlua_TLuaClass_obj* (*brl_maxlua_TLuaClass_Create_TTLuaClass_S_f)(BBSTRING);
struct brl_maxlua_TLuaClass_obj* brl_maxlua_TLuaClass_Create_TTLuaClass_S(BBSTRING);
typedef BBINT (*brl_maxlua_TLuaClass_lua_pushchunk_m)(struct brl_maxlua_TLuaClass_obj*);
BBINT _brl_maxlua_TLuaClass_lua_pushchunk(struct brl_maxlua_TLuaClass_obj*);
struct BBClass_brl_maxlua_TLuaClass {
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
	brl_maxlua_TLuaClass_SourceCode_m m_SourceCode;
	brl_maxlua_TLuaClass_SetSourceCode_S_m m_SetSourceCode_S;
	brl_maxlua_TLuaClass_Create_TTLuaClass_S_f f_Create_TTLuaClass_S;
	brl_maxlua_TLuaClass_lua_pushchunk_m m_lua_pushchunk;
};

struct brl_maxlua_TLuaClass_obj {
	struct BBClass_brl_maxlua_TLuaClass* clas;
	BBSTRING _brl_maxlua_tluaclass__source;
	BBINT _brl_maxlua_tluaclass__chunk;
};
extern struct BBClass_brl_maxlua_TLuaClass brl_maxlua_TLuaClass;
extern BBINT lua_boxobject(BBBYTE* bbt_L,BBOBJECT bbt_obj);
extern BBOBJECT lua_unboxobject(BBBYTE* bbt_L,BBINT bbt_index);
extern BBINT lua_pushlightobject(BBBYTE* bbt_L,BBOBJECT bbt_obj);
extern BBOBJECT lua_tolightobject(BBBYTE* bbt_L,BBINT bbt_index);
extern BBINT lua_gcobject(BBBYTE* bbt_L);
extern BBINT lua_stackDump(BBBYTE* bbt_L);
BBBYTE* brl_maxlua_LuaState(BBINT bbt_reset);
BBINT brl_maxlua_LuaRegInt(BBSTRING bbt_name,BBINT bbt_value);
BBINT brl_maxlua_LuaRegFunc(BBSTRING bbt_name,BBBYTE* bbt_value);
BBINT brl_maxlua_LuaDumpErr();
BBINT brl_maxlua_Index(BBBYTE* bbt_L);
BBINT brl_maxlua_IndexObject(BBBYTE* bbt_L);
BBINT brl_maxlua_NewIndex(BBBYTE* bbt_L);
BBINT brl_maxlua_NewIndexObject(BBBYTE* bbt_L);
BBINT brl_maxlua_ObjMetaTable();
BBINT brl_maxlua_lua_pushobject(BBBYTE* bbt_L,BBOBJECT bbt_obj);
BBINT brl_maxlua_Invoke(BBBYTE* bbt_L);
BBINT brl_maxlua_IndexSelf(BBBYTE* bbt_L);
BBINT brl_maxlua_NewIndexSelf(BBBYTE* bbt_L);
BBINT brl_maxlua_lua_pusharray(BBBYTE* bbt_L,BBOBJECT bbt_obj);
BBINT brl_maxlua_lua_registerobject(BBBYTE* bbt_L,BBOBJECT bbt_obj,BBSTRING bbt_name);
BBINT brl_maxlua_LuaRegisterObject(BBOBJECT bbt_obj,BBSTRING bbt_name);
BBINT brl_maxlua_LuaDeregisterObject(BBSTRING bbt_name);
BBINT brl_maxlua_LuaShutdown();

#endif
