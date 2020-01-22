#ifndef BRL_MAP_STRINGMAP_BMX_RELEASE_LINUX_X64_H
#define BRL_MAP_STRINGMAP_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
int _bb_brl_map_stringmap();
struct brl_map_stringmap_TStringMap_obj;
struct brl_map_stringmap_TStringNode_obj;
struct brl_map_stringmap_TStringNodeEnumerator_obj;
struct brl_map_stringmap_TStringKeyEnumerator_obj;
struct brl_map_stringmap_TStringValueEnumerator_obj;
struct brl_map_stringmap_TStringMapEnumerator_obj;
struct brl_map_stringmap_TStringEmptyEnumerator_obj;
void _brl_map_stringmap_TStringMap_New(struct brl_map_stringmap_TStringMap_obj* o);
void _brl_map_stringmap_TStringMap_Delete(struct brl_map_stringmap_TStringMap_obj* o);
typedef void (*brl_map_stringmap_TStringMap_Clear_m)(struct brl_map_stringmap_TStringMap_obj*);
void _brl_map_stringmap_TStringMap_Clear(struct brl_map_stringmap_TStringMap_obj*);
typedef BBINT (*brl_map_stringmap_TStringMap_IsEmpty_m)(struct brl_map_stringmap_TStringMap_obj*);
BBINT _brl_map_stringmap_TStringMap_IsEmpty(struct brl_map_stringmap_TStringMap_obj*);
typedef void (*brl_map_stringmap_TStringMap_Insert_STObject_m)(struct brl_map_stringmap_TStringMap_obj*,BBSTRING,BBOBJECT);
void _brl_map_stringmap_TStringMap_Insert_STObject(struct brl_map_stringmap_TStringMap_obj*,BBSTRING,BBOBJECT);
typedef BBINT (*brl_map_stringmap_TStringMap_Contains_S_m)(struct brl_map_stringmap_TStringMap_obj*,BBSTRING);
BBINT _brl_map_stringmap_TStringMap_Contains_S(struct brl_map_stringmap_TStringMap_obj*,BBSTRING);
typedef BBOBJECT (*brl_map_stringmap_TStringMap_ValueForKey_S_m)(struct brl_map_stringmap_TStringMap_obj*,BBSTRING);
BBOBJECT _brl_map_stringmap_TStringMap_ValueForKey_S(struct brl_map_stringmap_TStringMap_obj*,BBSTRING);
typedef BBINT (*brl_map_stringmap_TStringMap_Remove_S_m)(struct brl_map_stringmap_TStringMap_obj*,BBSTRING);
BBINT _brl_map_stringmap_TStringMap_Remove_S(struct brl_map_stringmap_TStringMap_obj*,BBSTRING);
typedef struct brl_map_stringmap_TStringNode_obj* (*brl_map_stringmap_TStringMap__FirstNode_m)(struct brl_map_stringmap_TStringMap_obj*);
struct brl_map_stringmap_TStringNode_obj* _brl_map_stringmap_TStringMap__FirstNode(struct brl_map_stringmap_TStringMap_obj*);
typedef struct brl_map_stringmap_TStringMapEnumerator_obj* (*brl_map_stringmap_TStringMap_Keys_m)(struct brl_map_stringmap_TStringMap_obj*);
struct brl_map_stringmap_TStringMapEnumerator_obj* _brl_map_stringmap_TStringMap_Keys(struct brl_map_stringmap_TStringMap_obj*);
typedef struct brl_map_stringmap_TStringMapEnumerator_obj* (*brl_map_stringmap_TStringMap_Values_m)(struct brl_map_stringmap_TStringMap_obj*);
struct brl_map_stringmap_TStringMapEnumerator_obj* _brl_map_stringmap_TStringMap_Values(struct brl_map_stringmap_TStringMap_obj*);
typedef struct brl_map_stringmap_TStringMap_obj* (*brl_map_stringmap_TStringMap_Copy_m)(struct brl_map_stringmap_TStringMap_obj*);
struct brl_map_stringmap_TStringMap_obj* _brl_map_stringmap_TStringMap_Copy(struct brl_map_stringmap_TStringMap_obj*);
typedef struct brl_map_stringmap_TStringNodeEnumerator_obj* (*brl_map_stringmap_TStringMap_ObjectEnumerator_m)(struct brl_map_stringmap_TStringMap_obj*);
struct brl_map_stringmap_TStringNodeEnumerator_obj* _brl_map_stringmap_TStringMap_ObjectEnumerator(struct brl_map_stringmap_TStringMap_obj*);
typedef BBOBJECT (*brl_map_stringmap_TStringMap__iget_S_m)(struct brl_map_stringmap_TStringMap_obj*,BBSTRING);
BBOBJECT _brl_map_stringmap_TStringMap__iget_S(struct brl_map_stringmap_TStringMap_obj*,BBSTRING);
typedef void (*brl_map_stringmap_TStringMap__iset_STObject_m)(struct brl_map_stringmap_TStringMap_obj*,BBSTRING,BBOBJECT);
void _brl_map_stringmap_TStringMap__iset_STObject(struct brl_map_stringmap_TStringMap_obj*,BBSTRING,BBOBJECT);
struct BBClass_brl_map_stringmap_TStringMap {
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
	brl_map_stringmap_TStringMap_Clear_m m_Clear;
	brl_map_stringmap_TStringMap_IsEmpty_m m_IsEmpty;
	brl_map_stringmap_TStringMap_Insert_STObject_m m_Insert_STObject;
	brl_map_stringmap_TStringMap_Contains_S_m m_Contains_S;
	brl_map_stringmap_TStringMap_ValueForKey_S_m m_ValueForKey_S;
	brl_map_stringmap_TStringMap_Remove_S_m m_Remove_S;
	brl_map_stringmap_TStringMap__FirstNode_m m__FirstNode;
	brl_map_stringmap_TStringMap_Keys_m m_Keys;
	brl_map_stringmap_TStringMap_Values_m m_Values;
	brl_map_stringmap_TStringMap_Copy_m m_Copy;
	brl_map_stringmap_TStringMap_ObjectEnumerator_m m_ObjectEnumerator;
	brl_map_stringmap_TStringMap__iget_S_m m__iget_S;
	brl_map_stringmap_TStringMap__iset_STObject_m m__iset_STObject;
};

struct brl_map_stringmap_TStringMap_obj {
	struct BBClass_brl_map_stringmap_TStringMap* clas;
	BBBYTE* _brl_map_stringmap_tstringmap__root;
};
extern struct BBClass_brl_map_stringmap_TStringMap brl_map_stringmap_TStringMap;
void _brl_map_stringmap_TStringNode_New(struct brl_map_stringmap_TStringNode_obj* o);
typedef BBSTRING (*brl_map_stringmap_TStringNode_Key_m)(struct brl_map_stringmap_TStringNode_obj*);
BBSTRING _brl_map_stringmap_TStringNode_Key(struct brl_map_stringmap_TStringNode_obj*);
typedef BBOBJECT (*brl_map_stringmap_TStringNode_Value_m)(struct brl_map_stringmap_TStringNode_obj*);
BBOBJECT _brl_map_stringmap_TStringNode_Value(struct brl_map_stringmap_TStringNode_obj*);
typedef BBINT (*brl_map_stringmap_TStringNode_HasNext_m)(struct brl_map_stringmap_TStringNode_obj*);
BBINT _brl_map_stringmap_TStringNode_HasNext(struct brl_map_stringmap_TStringNode_obj*);
typedef struct brl_map_stringmap_TStringNode_obj* (*brl_map_stringmap_TStringNode_NextNode_m)(struct brl_map_stringmap_TStringNode_obj*);
struct brl_map_stringmap_TStringNode_obj* _brl_map_stringmap_TStringNode_NextNode(struct brl_map_stringmap_TStringNode_obj*);
struct BBClass_brl_map_stringmap_TStringNode {
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
	brl_map_stringmap_TStringNode_Key_m m_Key;
	brl_map_stringmap_TStringNode_Value_m m_Value;
	brl_map_stringmap_TStringNode_HasNext_m m_HasNext;
	brl_map_stringmap_TStringNode_NextNode_m m_NextNode;
};

struct brl_map_stringmap_TStringNode_obj {
	struct BBClass_brl_map_stringmap_TStringNode* clas;
	BBBYTE* _brl_map_stringmap_tstringnode__root;
	BBBYTE* _brl_map_stringmap_tstringnode__nodeptr;
};
extern struct BBClass_brl_map_stringmap_TStringNode brl_map_stringmap_TStringNode;
void _brl_map_stringmap_TStringNodeEnumerator_New(struct brl_map_stringmap_TStringNodeEnumerator_obj* o);
typedef BBINT (*brl_map_stringmap_TStringNodeEnumerator_HasNext_m)(struct brl_map_stringmap_TStringNodeEnumerator_obj*);
BBINT _brl_map_stringmap_TStringNodeEnumerator_HasNext(struct brl_map_stringmap_TStringNodeEnumerator_obj*);
typedef BBOBJECT (*brl_map_stringmap_TStringNodeEnumerator_NextObject_m)(struct brl_map_stringmap_TStringNodeEnumerator_obj*);
BBOBJECT _brl_map_stringmap_TStringNodeEnumerator_NextObject(struct brl_map_stringmap_TStringNodeEnumerator_obj*);
struct BBClass_brl_map_stringmap_TStringNodeEnumerator {
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
	brl_map_stringmap_TStringNodeEnumerator_HasNext_m m_HasNext;
	brl_map_stringmap_TStringNodeEnumerator_NextObject_m m_NextObject;
};

struct brl_map_stringmap_TStringNodeEnumerator_obj {
	struct BBClass_brl_map_stringmap_TStringNodeEnumerator* clas;
	struct brl_map_stringmap_TStringNode_obj* _brl_map_stringmap_tstringnodeenumerator__node;
	struct brl_map_stringmap_TStringMap_obj* _brl_map_stringmap_tstringnodeenumerator__map;
};
extern struct BBClass_brl_map_stringmap_TStringNodeEnumerator brl_map_stringmap_TStringNodeEnumerator;
void _brl_map_stringmap_TStringKeyEnumerator_New(struct brl_map_stringmap_TStringKeyEnumerator_obj* o);
typedef BBOBJECT (*brl_map_stringmap_TStringKeyEnumerator_NextObject_m)(struct brl_map_stringmap_TStringKeyEnumerator_obj*);
BBOBJECT _brl_map_stringmap_TStringKeyEnumerator_NextObject(struct brl_map_stringmap_TStringKeyEnumerator_obj*);
struct BBClass_brl_map_stringmap_TStringKeyEnumerator {
	struct BBClass_brl_map_stringmap_TStringNodeEnumerator*  super;
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
	brl_map_stringmap_TStringNodeEnumerator_HasNext_m m_HasNext;
	brl_map_stringmap_TStringKeyEnumerator_NextObject_m m_NextObject;
};

struct brl_map_stringmap_TStringKeyEnumerator_obj {
	struct BBClass_brl_map_stringmap_TStringKeyEnumerator* clas;
	struct brl_map_stringmap_TStringNode_obj* _brl_map_stringmap_tstringnodeenumerator__node;
	struct brl_map_stringmap_TStringMap_obj* _brl_map_stringmap_tstringnodeenumerator__map;
};
extern struct BBClass_brl_map_stringmap_TStringKeyEnumerator brl_map_stringmap_TStringKeyEnumerator;
void _brl_map_stringmap_TStringValueEnumerator_New(struct brl_map_stringmap_TStringValueEnumerator_obj* o);
typedef BBOBJECT (*brl_map_stringmap_TStringValueEnumerator_NextObject_m)(struct brl_map_stringmap_TStringValueEnumerator_obj*);
BBOBJECT _brl_map_stringmap_TStringValueEnumerator_NextObject(struct brl_map_stringmap_TStringValueEnumerator_obj*);
struct BBClass_brl_map_stringmap_TStringValueEnumerator {
	struct BBClass_brl_map_stringmap_TStringNodeEnumerator*  super;
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
	brl_map_stringmap_TStringNodeEnumerator_HasNext_m m_HasNext;
	brl_map_stringmap_TStringValueEnumerator_NextObject_m m_NextObject;
};

struct brl_map_stringmap_TStringValueEnumerator_obj {
	struct BBClass_brl_map_stringmap_TStringValueEnumerator* clas;
	struct brl_map_stringmap_TStringNode_obj* _brl_map_stringmap_tstringnodeenumerator__node;
	struct brl_map_stringmap_TStringMap_obj* _brl_map_stringmap_tstringnodeenumerator__map;
};
extern struct BBClass_brl_map_stringmap_TStringValueEnumerator brl_map_stringmap_TStringValueEnumerator;
void _brl_map_stringmap_TStringMapEnumerator_New(struct brl_map_stringmap_TStringMapEnumerator_obj* o);
typedef struct brl_map_stringmap_TStringNodeEnumerator_obj* (*brl_map_stringmap_TStringMapEnumerator_ObjectEnumerator_m)(struct brl_map_stringmap_TStringMapEnumerator_obj*);
struct brl_map_stringmap_TStringNodeEnumerator_obj* _brl_map_stringmap_TStringMapEnumerator_ObjectEnumerator(struct brl_map_stringmap_TStringMapEnumerator_obj*);
struct BBClass_brl_map_stringmap_TStringMapEnumerator {
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
	brl_map_stringmap_TStringMapEnumerator_ObjectEnumerator_m m_ObjectEnumerator;
};

struct brl_map_stringmap_TStringMapEnumerator_obj {
	struct BBClass_brl_map_stringmap_TStringMapEnumerator* clas;
	struct brl_map_stringmap_TStringNodeEnumerator_obj* _brl_map_stringmap_tstringmapenumerator__enumerator;
};
extern struct BBClass_brl_map_stringmap_TStringMapEnumerator brl_map_stringmap_TStringMapEnumerator;
void _brl_map_stringmap_TStringEmptyEnumerator_New(struct brl_map_stringmap_TStringEmptyEnumerator_obj* o);
typedef BBINT (*brl_map_stringmap_TStringEmptyEnumerator_HasNext_m)(struct brl_map_stringmap_TStringEmptyEnumerator_obj*);
BBINT _brl_map_stringmap_TStringEmptyEnumerator_HasNext(struct brl_map_stringmap_TStringEmptyEnumerator_obj*);
struct BBClass_brl_map_stringmap_TStringEmptyEnumerator {
	struct BBClass_brl_map_stringmap_TStringNodeEnumerator*  super;
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
	brl_map_stringmap_TStringEmptyEnumerator_HasNext_m m_HasNext;
	brl_map_stringmap_TStringNodeEnumerator_NextObject_m m_NextObject;
};

struct brl_map_stringmap_TStringEmptyEnumerator_obj {
	struct BBClass_brl_map_stringmap_TStringEmptyEnumerator* clas;
	struct brl_map_stringmap_TStringNode_obj* _brl_map_stringmap_tstringnodeenumerator__node;
	struct brl_map_stringmap_TStringMap_obj* _brl_map_stringmap_tstringnodeenumerator__map;
};
extern struct BBClass_brl_map_stringmap_TStringEmptyEnumerator brl_map_stringmap_TStringEmptyEnumerator;
extern void bmx_map_stringmap_clear(BBBYTE** bbt_root);
extern BBINT bmx_map_stringmap_isempty(BBBYTE** bbt_root);
extern void bmx_map_stringmap_insert(BBSTRING bbt_key,BBOBJECT bbt_value,BBBYTE** bbt_root);
extern BBINT bmx_map_stringmap_contains(BBSTRING bbt_key,BBBYTE** bbt_root);
extern BBOBJECT bmx_map_stringmap_valueforkey(BBSTRING bbt_key,BBBYTE** bbt_root);
extern BBINT bmx_map_stringmap_remove(BBSTRING bbt_key,BBBYTE** bbt_root);
extern BBBYTE* bmx_map_stringmap_firstnode(BBBYTE* bbt_root);
extern BBBYTE* bmx_map_stringmap_nextnode(BBBYTE* bbt_node);
extern BBSTRING bmx_map_stringmap_key(BBBYTE* bbt_node);
extern BBOBJECT bmx_map_stringmap_value(BBBYTE* bbt_node);
extern BBINT bmx_map_stringmap_hasnext(BBBYTE* bbt_node,BBBYTE* bbt_root);
extern void bmx_map_stringmap_copy(BBBYTE** bbt_dst,BBBYTE* bbt__root);

#endif
