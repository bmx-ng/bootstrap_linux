#ifndef BRL_MAP_OBJECTMAP_BMX_RELEASE_LINUX_X64_H
#define BRL_MAP_OBJECTMAP_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
int _bb_brl_map_objectmap();
struct brl_map_objectmap_TObjectMap_obj;
struct brl_map_objectmap_TObjectNode_obj;
struct brl_map_objectmap_TObjectNodeEnumerator_obj;
struct brl_map_objectmap_TObjectKeyEnumerator_obj;
struct brl_map_objectmap_TObjectValueEnumerator_obj;
struct brl_map_objectmap_TObjectMapEnumerator_obj;
struct brl_map_objectmap_TObjectEmptyEnumerator_obj;
void _brl_map_objectmap_TObjectMap_New(struct brl_map_objectmap_TObjectMap_obj* o);
void _brl_map_objectmap_TObjectMap_Delete(struct brl_map_objectmap_TObjectMap_obj* o);
typedef void (*brl_map_objectmap_TObjectMap_Clear_m)(struct brl_map_objectmap_TObjectMap_obj*);
void _brl_map_objectmap_TObjectMap_Clear(struct brl_map_objectmap_TObjectMap_obj*);
typedef BBINT (*brl_map_objectmap_TObjectMap_IsEmpty_m)(struct brl_map_objectmap_TObjectMap_obj*);
BBINT _brl_map_objectmap_TObjectMap_IsEmpty(struct brl_map_objectmap_TObjectMap_obj*);
typedef void (*brl_map_objectmap_TObjectMap_Insert_TObjectTObject_m)(struct brl_map_objectmap_TObjectMap_obj*,BBOBJECT,BBOBJECT);
void _brl_map_objectmap_TObjectMap_Insert_TObjectTObject(struct brl_map_objectmap_TObjectMap_obj*,BBOBJECT,BBOBJECT);
typedef BBINT (*brl_map_objectmap_TObjectMap_Contains_TObject_m)(struct brl_map_objectmap_TObjectMap_obj*,BBOBJECT);
BBINT _brl_map_objectmap_TObjectMap_Contains_TObject(struct brl_map_objectmap_TObjectMap_obj*,BBOBJECT);
typedef BBOBJECT (*brl_map_objectmap_TObjectMap_ValueForKey_TObject_m)(struct brl_map_objectmap_TObjectMap_obj*,BBOBJECT);
BBOBJECT _brl_map_objectmap_TObjectMap_ValueForKey_TObject(struct brl_map_objectmap_TObjectMap_obj*,BBOBJECT);
typedef BBINT (*brl_map_objectmap_TObjectMap_Remove_TObject_m)(struct brl_map_objectmap_TObjectMap_obj*,BBOBJECT);
BBINT _brl_map_objectmap_TObjectMap_Remove_TObject(struct brl_map_objectmap_TObjectMap_obj*,BBOBJECT);
typedef struct brl_map_objectmap_TObjectNode_obj* (*brl_map_objectmap_TObjectMap__FirstNode_m)(struct brl_map_objectmap_TObjectMap_obj*);
struct brl_map_objectmap_TObjectNode_obj* _brl_map_objectmap_TObjectMap__FirstNode(struct brl_map_objectmap_TObjectMap_obj*);
typedef struct brl_map_objectmap_TObjectMapEnumerator_obj* (*brl_map_objectmap_TObjectMap_Keys_m)(struct brl_map_objectmap_TObjectMap_obj*);
struct brl_map_objectmap_TObjectMapEnumerator_obj* _brl_map_objectmap_TObjectMap_Keys(struct brl_map_objectmap_TObjectMap_obj*);
typedef struct brl_map_objectmap_TObjectMapEnumerator_obj* (*brl_map_objectmap_TObjectMap_Values_m)(struct brl_map_objectmap_TObjectMap_obj*);
struct brl_map_objectmap_TObjectMapEnumerator_obj* _brl_map_objectmap_TObjectMap_Values(struct brl_map_objectmap_TObjectMap_obj*);
typedef struct brl_map_objectmap_TObjectMap_obj* (*brl_map_objectmap_TObjectMap_Copy_m)(struct brl_map_objectmap_TObjectMap_obj*);
struct brl_map_objectmap_TObjectMap_obj* _brl_map_objectmap_TObjectMap_Copy(struct brl_map_objectmap_TObjectMap_obj*);
typedef struct brl_map_objectmap_TObjectNodeEnumerator_obj* (*brl_map_objectmap_TObjectMap_ObjectEnumerator_m)(struct brl_map_objectmap_TObjectMap_obj*);
struct brl_map_objectmap_TObjectNodeEnumerator_obj* _brl_map_objectmap_TObjectMap_ObjectEnumerator(struct brl_map_objectmap_TObjectMap_obj*);
struct BBClass_brl_map_objectmap_TObjectMap {
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
	brl_map_objectmap_TObjectMap_Clear_m m_Clear;
	brl_map_objectmap_TObjectMap_IsEmpty_m m_IsEmpty;
	brl_map_objectmap_TObjectMap_Insert_TObjectTObject_m m_Insert_TObjectTObject;
	brl_map_objectmap_TObjectMap_Contains_TObject_m m_Contains_TObject;
	brl_map_objectmap_TObjectMap_ValueForKey_TObject_m m_ValueForKey_TObject;
	brl_map_objectmap_TObjectMap_Remove_TObject_m m_Remove_TObject;
	brl_map_objectmap_TObjectMap__FirstNode_m m__FirstNode;
	brl_map_objectmap_TObjectMap_Keys_m m_Keys;
	brl_map_objectmap_TObjectMap_Values_m m_Values;
	brl_map_objectmap_TObjectMap_Copy_m m_Copy;
	brl_map_objectmap_TObjectMap_ObjectEnumerator_m m_ObjectEnumerator;
};

struct brl_map_objectmap_TObjectMap_obj {
	struct BBClass_brl_map_objectmap_TObjectMap* clas;
	BBBYTE* _brl_map_objectmap_tobjectmap__root;
};
extern struct BBClass_brl_map_objectmap_TObjectMap brl_map_objectmap_TObjectMap;
void _brl_map_objectmap_TObjectNode_New(struct brl_map_objectmap_TObjectNode_obj* o);
typedef BBOBJECT (*brl_map_objectmap_TObjectNode_Key_m)(struct brl_map_objectmap_TObjectNode_obj*);
BBOBJECT _brl_map_objectmap_TObjectNode_Key(struct brl_map_objectmap_TObjectNode_obj*);
typedef BBOBJECT (*brl_map_objectmap_TObjectNode_Value_m)(struct brl_map_objectmap_TObjectNode_obj*);
BBOBJECT _brl_map_objectmap_TObjectNode_Value(struct brl_map_objectmap_TObjectNode_obj*);
typedef BBINT (*brl_map_objectmap_TObjectNode_HasNext_m)(struct brl_map_objectmap_TObjectNode_obj*);
BBINT _brl_map_objectmap_TObjectNode_HasNext(struct brl_map_objectmap_TObjectNode_obj*);
typedef struct brl_map_objectmap_TObjectNode_obj* (*brl_map_objectmap_TObjectNode_NextNode_m)(struct brl_map_objectmap_TObjectNode_obj*);
struct brl_map_objectmap_TObjectNode_obj* _brl_map_objectmap_TObjectNode_NextNode(struct brl_map_objectmap_TObjectNode_obj*);
struct BBClass_brl_map_objectmap_TObjectNode {
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
	brl_map_objectmap_TObjectNode_Key_m m_Key;
	brl_map_objectmap_TObjectNode_Value_m m_Value;
	brl_map_objectmap_TObjectNode_HasNext_m m_HasNext;
	brl_map_objectmap_TObjectNode_NextNode_m m_NextNode;
};

struct brl_map_objectmap_TObjectNode_obj {
	struct BBClass_brl_map_objectmap_TObjectNode* clas;
	BBBYTE* _brl_map_objectmap_tobjectnode__root;
	BBBYTE* _brl_map_objectmap_tobjectnode__nodeptr;
};
extern struct BBClass_brl_map_objectmap_TObjectNode brl_map_objectmap_TObjectNode;
void _brl_map_objectmap_TObjectNodeEnumerator_New(struct brl_map_objectmap_TObjectNodeEnumerator_obj* o);
typedef BBINT (*brl_map_objectmap_TObjectNodeEnumerator_HasNext_m)(struct brl_map_objectmap_TObjectNodeEnumerator_obj*);
BBINT _brl_map_objectmap_TObjectNodeEnumerator_HasNext(struct brl_map_objectmap_TObjectNodeEnumerator_obj*);
typedef BBOBJECT (*brl_map_objectmap_TObjectNodeEnumerator_NextObject_m)(struct brl_map_objectmap_TObjectNodeEnumerator_obj*);
BBOBJECT _brl_map_objectmap_TObjectNodeEnumerator_NextObject(struct brl_map_objectmap_TObjectNodeEnumerator_obj*);
struct BBClass_brl_map_objectmap_TObjectNodeEnumerator {
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
	brl_map_objectmap_TObjectNodeEnumerator_HasNext_m m_HasNext;
	brl_map_objectmap_TObjectNodeEnumerator_NextObject_m m_NextObject;
};

struct brl_map_objectmap_TObjectNodeEnumerator_obj {
	struct BBClass_brl_map_objectmap_TObjectNodeEnumerator* clas;
	struct brl_map_objectmap_TObjectNode_obj* _brl_map_objectmap_tobjectnodeenumerator__node;
	struct brl_map_objectmap_TObjectMap_obj* _brl_map_objectmap_tobjectnodeenumerator__map;
};
extern struct BBClass_brl_map_objectmap_TObjectNodeEnumerator brl_map_objectmap_TObjectNodeEnumerator;
void _brl_map_objectmap_TObjectKeyEnumerator_New(struct brl_map_objectmap_TObjectKeyEnumerator_obj* o);
typedef BBOBJECT (*brl_map_objectmap_TObjectKeyEnumerator_NextObject_m)(struct brl_map_objectmap_TObjectKeyEnumerator_obj*);
BBOBJECT _brl_map_objectmap_TObjectKeyEnumerator_NextObject(struct brl_map_objectmap_TObjectKeyEnumerator_obj*);
struct BBClass_brl_map_objectmap_TObjectKeyEnumerator {
	struct BBClass_brl_map_objectmap_TObjectNodeEnumerator*  super;
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
	brl_map_objectmap_TObjectNodeEnumerator_HasNext_m m_HasNext;
	brl_map_objectmap_TObjectKeyEnumerator_NextObject_m m_NextObject;
};

struct brl_map_objectmap_TObjectKeyEnumerator_obj {
	struct BBClass_brl_map_objectmap_TObjectKeyEnumerator* clas;
	struct brl_map_objectmap_TObjectNode_obj* _brl_map_objectmap_tobjectnodeenumerator__node;
	struct brl_map_objectmap_TObjectMap_obj* _brl_map_objectmap_tobjectnodeenumerator__map;
};
extern struct BBClass_brl_map_objectmap_TObjectKeyEnumerator brl_map_objectmap_TObjectKeyEnumerator;
void _brl_map_objectmap_TObjectValueEnumerator_New(struct brl_map_objectmap_TObjectValueEnumerator_obj* o);
typedef BBOBJECT (*brl_map_objectmap_TObjectValueEnumerator_NextObject_m)(struct brl_map_objectmap_TObjectValueEnumerator_obj*);
BBOBJECT _brl_map_objectmap_TObjectValueEnumerator_NextObject(struct brl_map_objectmap_TObjectValueEnumerator_obj*);
struct BBClass_brl_map_objectmap_TObjectValueEnumerator {
	struct BBClass_brl_map_objectmap_TObjectNodeEnumerator*  super;
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
	brl_map_objectmap_TObjectNodeEnumerator_HasNext_m m_HasNext;
	brl_map_objectmap_TObjectValueEnumerator_NextObject_m m_NextObject;
};

struct brl_map_objectmap_TObjectValueEnumerator_obj {
	struct BBClass_brl_map_objectmap_TObjectValueEnumerator* clas;
	struct brl_map_objectmap_TObjectNode_obj* _brl_map_objectmap_tobjectnodeenumerator__node;
	struct brl_map_objectmap_TObjectMap_obj* _brl_map_objectmap_tobjectnodeenumerator__map;
};
extern struct BBClass_brl_map_objectmap_TObjectValueEnumerator brl_map_objectmap_TObjectValueEnumerator;
void _brl_map_objectmap_TObjectMapEnumerator_New(struct brl_map_objectmap_TObjectMapEnumerator_obj* o);
typedef struct brl_map_objectmap_TObjectNodeEnumerator_obj* (*brl_map_objectmap_TObjectMapEnumerator_ObjectEnumerator_m)(struct brl_map_objectmap_TObjectMapEnumerator_obj*);
struct brl_map_objectmap_TObjectNodeEnumerator_obj* _brl_map_objectmap_TObjectMapEnumerator_ObjectEnumerator(struct brl_map_objectmap_TObjectMapEnumerator_obj*);
struct BBClass_brl_map_objectmap_TObjectMapEnumerator {
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
	brl_map_objectmap_TObjectMapEnumerator_ObjectEnumerator_m m_ObjectEnumerator;
};

struct brl_map_objectmap_TObjectMapEnumerator_obj {
	struct BBClass_brl_map_objectmap_TObjectMapEnumerator* clas;
	struct brl_map_objectmap_TObjectNodeEnumerator_obj* _brl_map_objectmap_tobjectmapenumerator__enumerator;
};
extern struct BBClass_brl_map_objectmap_TObjectMapEnumerator brl_map_objectmap_TObjectMapEnumerator;
void _brl_map_objectmap_TObjectEmptyEnumerator_New(struct brl_map_objectmap_TObjectEmptyEnumerator_obj* o);
typedef BBINT (*brl_map_objectmap_TObjectEmptyEnumerator_HasNext_m)(struct brl_map_objectmap_TObjectEmptyEnumerator_obj*);
BBINT _brl_map_objectmap_TObjectEmptyEnumerator_HasNext(struct brl_map_objectmap_TObjectEmptyEnumerator_obj*);
struct BBClass_brl_map_objectmap_TObjectEmptyEnumerator {
	struct BBClass_brl_map_objectmap_TObjectNodeEnumerator*  super;
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
	brl_map_objectmap_TObjectEmptyEnumerator_HasNext_m m_HasNext;
	brl_map_objectmap_TObjectNodeEnumerator_NextObject_m m_NextObject;
};

struct brl_map_objectmap_TObjectEmptyEnumerator_obj {
	struct BBClass_brl_map_objectmap_TObjectEmptyEnumerator* clas;
	struct brl_map_objectmap_TObjectNode_obj* _brl_map_objectmap_tobjectnodeenumerator__node;
	struct brl_map_objectmap_TObjectMap_obj* _brl_map_objectmap_tobjectnodeenumerator__map;
};
extern struct BBClass_brl_map_objectmap_TObjectEmptyEnumerator brl_map_objectmap_TObjectEmptyEnumerator;
extern void bmx_map_objectmap_clear(BBBYTE** bbt_root);
extern BBINT bmx_map_objectmap_isempty(BBBYTE** bbt_root);
extern void bmx_map_objectmap_insert(BBOBJECT bbt_key,BBOBJECT bbt_value,BBBYTE** bbt_root);
extern BBINT bmx_map_objectmap_contains(BBOBJECT bbt_key,BBBYTE** bbt_root);
extern BBOBJECT bmx_map_objectmap_valueforkey(BBOBJECT bbt_key,BBBYTE** bbt_root);
extern BBINT bmx_map_objectmap_remove(BBOBJECT bbt_key,BBBYTE** bbt_root);
extern BBBYTE* bmx_map_objectmap_firstnode(BBBYTE* bbt_root);
extern BBBYTE* bmx_map_objectmap_nextnode(BBBYTE* bbt_node);
extern BBOBJECT bmx_map_objectmap_key(BBBYTE* bbt_node);
extern BBOBJECT bmx_map_objectmap_value(BBBYTE* bbt_node);
extern BBINT bmx_map_objectmap_hasnext(BBBYTE* bbt_node,BBBYTE* bbt_root);
extern void bmx_map_objectmap_copy(BBBYTE** bbt_dst,BBBYTE* bbt__root);

#endif
