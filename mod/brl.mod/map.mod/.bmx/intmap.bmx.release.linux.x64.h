#ifndef BRL_MAP_INTMAP_BMX_RELEASE_LINUX_X64_H
#define BRL_MAP_INTMAP_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
int _bb_brl_map_intmap();
struct brl_map_intmap_TIntMap_obj;
struct brl_map_intmap_TIntNode_obj;
struct brl_map_intmap_TIntKey_obj;
struct brl_map_intmap_TIntNodeEnumerator_obj;
struct brl_map_intmap_TIntKeyEnumerator_obj;
struct brl_map_intmap_TIntValueEnumerator_obj;
struct brl_map_intmap_TIntMapEnumerator_obj;
struct brl_map_intmap_TIntEmptyEnumerator_obj;
void _brl_map_intmap_TIntMap_New(struct brl_map_intmap_TIntMap_obj* o);
void _brl_map_intmap_TIntMap_Delete(struct brl_map_intmap_TIntMap_obj* o);
typedef void (*brl_map_intmap_TIntMap_Clear_m)(struct brl_map_intmap_TIntMap_obj*);
void _brl_map_intmap_TIntMap_Clear(struct brl_map_intmap_TIntMap_obj*);
typedef BBINT (*brl_map_intmap_TIntMap_IsEmpty_m)(struct brl_map_intmap_TIntMap_obj*);
BBINT _brl_map_intmap_TIntMap_IsEmpty(struct brl_map_intmap_TIntMap_obj*);
typedef void (*brl_map_intmap_TIntMap_Insert_iTObject_m)(struct brl_map_intmap_TIntMap_obj*,BBINT,BBOBJECT);
void _brl_map_intmap_TIntMap_Insert_iTObject(struct brl_map_intmap_TIntMap_obj*,BBINT,BBOBJECT);
typedef BBINT (*brl_map_intmap_TIntMap_Contains_i_m)(struct brl_map_intmap_TIntMap_obj*,BBINT);
BBINT _brl_map_intmap_TIntMap_Contains_i(struct brl_map_intmap_TIntMap_obj*,BBINT);
typedef BBOBJECT (*brl_map_intmap_TIntMap_ValueForKey_i_m)(struct brl_map_intmap_TIntMap_obj*,BBINT);
BBOBJECT _brl_map_intmap_TIntMap_ValueForKey_i(struct brl_map_intmap_TIntMap_obj*,BBINT);
typedef BBINT (*brl_map_intmap_TIntMap_Remove_i_m)(struct brl_map_intmap_TIntMap_obj*,BBINT);
BBINT _brl_map_intmap_TIntMap_Remove_i(struct brl_map_intmap_TIntMap_obj*,BBINT);
typedef struct brl_map_intmap_TIntNode_obj* (*brl_map_intmap_TIntMap__FirstNode_m)(struct brl_map_intmap_TIntMap_obj*);
struct brl_map_intmap_TIntNode_obj* _brl_map_intmap_TIntMap__FirstNode(struct brl_map_intmap_TIntMap_obj*);
typedef struct brl_map_intmap_TIntMapEnumerator_obj* (*brl_map_intmap_TIntMap_Keys_m)(struct brl_map_intmap_TIntMap_obj*);
struct brl_map_intmap_TIntMapEnumerator_obj* _brl_map_intmap_TIntMap_Keys(struct brl_map_intmap_TIntMap_obj*);
typedef struct brl_map_intmap_TIntMapEnumerator_obj* (*brl_map_intmap_TIntMap_Values_m)(struct brl_map_intmap_TIntMap_obj*);
struct brl_map_intmap_TIntMapEnumerator_obj* _brl_map_intmap_TIntMap_Values(struct brl_map_intmap_TIntMap_obj*);
typedef struct brl_map_intmap_TIntMap_obj* (*brl_map_intmap_TIntMap_Copy_m)(struct brl_map_intmap_TIntMap_obj*);
struct brl_map_intmap_TIntMap_obj* _brl_map_intmap_TIntMap_Copy(struct brl_map_intmap_TIntMap_obj*);
typedef struct brl_map_intmap_TIntNodeEnumerator_obj* (*brl_map_intmap_TIntMap_ObjectEnumerator_m)(struct brl_map_intmap_TIntMap_obj*);
struct brl_map_intmap_TIntNodeEnumerator_obj* _brl_map_intmap_TIntMap_ObjectEnumerator(struct brl_map_intmap_TIntMap_obj*);
typedef BBOBJECT (*brl_map_intmap_TIntMap__iget_i_m)(struct brl_map_intmap_TIntMap_obj*,BBINT);
BBOBJECT _brl_map_intmap_TIntMap__iget_i(struct brl_map_intmap_TIntMap_obj*,BBINT);
typedef void (*brl_map_intmap_TIntMap__iset_iTObject_m)(struct brl_map_intmap_TIntMap_obj*,BBINT,BBOBJECT);
void _brl_map_intmap_TIntMap__iset_iTObject(struct brl_map_intmap_TIntMap_obj*,BBINT,BBOBJECT);
struct BBClass_brl_map_intmap_TIntMap {
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
	brl_map_intmap_TIntMap_Clear_m m_Clear;
	brl_map_intmap_TIntMap_IsEmpty_m m_IsEmpty;
	brl_map_intmap_TIntMap_Insert_iTObject_m m_Insert_iTObject;
	brl_map_intmap_TIntMap_Contains_i_m m_Contains_i;
	brl_map_intmap_TIntMap_ValueForKey_i_m m_ValueForKey_i;
	brl_map_intmap_TIntMap_Remove_i_m m_Remove_i;
	brl_map_intmap_TIntMap__FirstNode_m m__FirstNode;
	brl_map_intmap_TIntMap_Keys_m m_Keys;
	brl_map_intmap_TIntMap_Values_m m_Values;
	brl_map_intmap_TIntMap_Copy_m m_Copy;
	brl_map_intmap_TIntMap_ObjectEnumerator_m m_ObjectEnumerator;
	brl_map_intmap_TIntMap__iget_i_m m__iget_i;
	brl_map_intmap_TIntMap__iset_iTObject_m m__iset_iTObject;
};

struct brl_map_intmap_TIntMap_obj {
	struct BBClass_brl_map_intmap_TIntMap* clas;
	BBBYTE* _brl_map_intmap_tintmap__root;
};
extern struct BBClass_brl_map_intmap_TIntMap brl_map_intmap_TIntMap;
void _brl_map_intmap_TIntNode_New(struct brl_map_intmap_TIntNode_obj* o);
typedef BBINT (*brl_map_intmap_TIntNode_Key_m)(struct brl_map_intmap_TIntNode_obj*);
BBINT _brl_map_intmap_TIntNode_Key(struct brl_map_intmap_TIntNode_obj*);
typedef BBOBJECT (*brl_map_intmap_TIntNode_Value_m)(struct brl_map_intmap_TIntNode_obj*);
BBOBJECT _brl_map_intmap_TIntNode_Value(struct brl_map_intmap_TIntNode_obj*);
typedef BBINT (*brl_map_intmap_TIntNode_HasNext_m)(struct brl_map_intmap_TIntNode_obj*);
BBINT _brl_map_intmap_TIntNode_HasNext(struct brl_map_intmap_TIntNode_obj*);
typedef struct brl_map_intmap_TIntNode_obj* (*brl_map_intmap_TIntNode_NextNode_m)(struct brl_map_intmap_TIntNode_obj*);
struct brl_map_intmap_TIntNode_obj* _brl_map_intmap_TIntNode_NextNode(struct brl_map_intmap_TIntNode_obj*);
typedef void (*brl_map_intmap_TIntNode_Remove_m)(struct brl_map_intmap_TIntNode_obj*);
void _brl_map_intmap_TIntNode_Remove(struct brl_map_intmap_TIntNode_obj*);
struct BBClass_brl_map_intmap_TIntNode {
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
	brl_map_intmap_TIntNode_Key_m m_Key;
	brl_map_intmap_TIntNode_Value_m m_Value;
	brl_map_intmap_TIntNode_HasNext_m m_HasNext;
	brl_map_intmap_TIntNode_NextNode_m m_NextNode;
	brl_map_intmap_TIntNode_Remove_m m_Remove;
};

struct brl_map_intmap_TIntNode_obj {
	struct BBClass_brl_map_intmap_TIntNode* clas;
	BBBYTE* _brl_map_intmap_tintnode__root;
	BBBYTE* _brl_map_intmap_tintnode__nodeptr;
	BBBYTE* _brl_map_intmap_tintnode__nextnode;
};
extern struct BBClass_brl_map_intmap_TIntNode brl_map_intmap_TIntNode;
void _brl_map_intmap_TIntKey_New(struct brl_map_intmap_TIntKey_obj* o);
struct BBClass_brl_map_intmap_TIntKey {
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

struct brl_map_intmap_TIntKey_obj {
	struct BBClass_brl_map_intmap_TIntKey* clas;
	BBINT _brl_map_intmap_tintkey_value;
};
extern struct BBClass_brl_map_intmap_TIntKey brl_map_intmap_TIntKey;
void _brl_map_intmap_TIntNodeEnumerator_New(struct brl_map_intmap_TIntNodeEnumerator_obj* o);
typedef BBINT (*brl_map_intmap_TIntNodeEnumerator_HasNext_m)(struct brl_map_intmap_TIntNodeEnumerator_obj*);
BBINT _brl_map_intmap_TIntNodeEnumerator_HasNext(struct brl_map_intmap_TIntNodeEnumerator_obj*);
typedef BBOBJECT (*brl_map_intmap_TIntNodeEnumerator_NextObject_m)(struct brl_map_intmap_TIntNodeEnumerator_obj*);
BBOBJECT _brl_map_intmap_TIntNodeEnumerator_NextObject(struct brl_map_intmap_TIntNodeEnumerator_obj*);
struct BBClass_brl_map_intmap_TIntNodeEnumerator {
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
	brl_map_intmap_TIntNodeEnumerator_HasNext_m m_HasNext;
	brl_map_intmap_TIntNodeEnumerator_NextObject_m m_NextObject;
};

struct brl_map_intmap_TIntNodeEnumerator_obj {
	struct BBClass_brl_map_intmap_TIntNodeEnumerator* clas;
	struct brl_map_intmap_TIntNode_obj* _brl_map_intmap_tintnodeenumerator__node;
	struct brl_map_intmap_TIntMap_obj* _brl_map_intmap_tintnodeenumerator__map;
};
extern struct BBClass_brl_map_intmap_TIntNodeEnumerator brl_map_intmap_TIntNodeEnumerator;
void _brl_map_intmap_TIntKeyEnumerator_New(struct brl_map_intmap_TIntKeyEnumerator_obj* o);
typedef BBOBJECT (*brl_map_intmap_TIntKeyEnumerator_NextObject_m)(struct brl_map_intmap_TIntKeyEnumerator_obj*);
BBOBJECT _brl_map_intmap_TIntKeyEnumerator_NextObject(struct brl_map_intmap_TIntKeyEnumerator_obj*);
struct BBClass_brl_map_intmap_TIntKeyEnumerator {
	struct BBClass_brl_map_intmap_TIntNodeEnumerator*  super;
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
	brl_map_intmap_TIntNodeEnumerator_HasNext_m m_HasNext;
	brl_map_intmap_TIntKeyEnumerator_NextObject_m m_NextObject;
};

struct brl_map_intmap_TIntKeyEnumerator_obj {
	struct BBClass_brl_map_intmap_TIntKeyEnumerator* clas;
	struct brl_map_intmap_TIntNode_obj* _brl_map_intmap_tintnodeenumerator__node;
	struct brl_map_intmap_TIntMap_obj* _brl_map_intmap_tintnodeenumerator__map;
	struct brl_map_intmap_TIntKey_obj* _brl_map_intmap_tintkeyenumerator__key;
};
extern struct BBClass_brl_map_intmap_TIntKeyEnumerator brl_map_intmap_TIntKeyEnumerator;
void _brl_map_intmap_TIntValueEnumerator_New(struct brl_map_intmap_TIntValueEnumerator_obj* o);
typedef BBOBJECT (*brl_map_intmap_TIntValueEnumerator_NextObject_m)(struct brl_map_intmap_TIntValueEnumerator_obj*);
BBOBJECT _brl_map_intmap_TIntValueEnumerator_NextObject(struct brl_map_intmap_TIntValueEnumerator_obj*);
struct BBClass_brl_map_intmap_TIntValueEnumerator {
	struct BBClass_brl_map_intmap_TIntNodeEnumerator*  super;
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
	brl_map_intmap_TIntNodeEnumerator_HasNext_m m_HasNext;
	brl_map_intmap_TIntValueEnumerator_NextObject_m m_NextObject;
};

struct brl_map_intmap_TIntValueEnumerator_obj {
	struct BBClass_brl_map_intmap_TIntValueEnumerator* clas;
	struct brl_map_intmap_TIntNode_obj* _brl_map_intmap_tintnodeenumerator__node;
	struct brl_map_intmap_TIntMap_obj* _brl_map_intmap_tintnodeenumerator__map;
};
extern struct BBClass_brl_map_intmap_TIntValueEnumerator brl_map_intmap_TIntValueEnumerator;
void _brl_map_intmap_TIntMapEnumerator_New(struct brl_map_intmap_TIntMapEnumerator_obj* o);
typedef struct brl_map_intmap_TIntNodeEnumerator_obj* (*brl_map_intmap_TIntMapEnumerator_ObjectEnumerator_m)(struct brl_map_intmap_TIntMapEnumerator_obj*);
struct brl_map_intmap_TIntNodeEnumerator_obj* _brl_map_intmap_TIntMapEnumerator_ObjectEnumerator(struct brl_map_intmap_TIntMapEnumerator_obj*);
struct BBClass_brl_map_intmap_TIntMapEnumerator {
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
	brl_map_intmap_TIntMapEnumerator_ObjectEnumerator_m m_ObjectEnumerator;
};

struct brl_map_intmap_TIntMapEnumerator_obj {
	struct BBClass_brl_map_intmap_TIntMapEnumerator* clas;
	struct brl_map_intmap_TIntNodeEnumerator_obj* _brl_map_intmap_tintmapenumerator__enumerator;
};
extern struct BBClass_brl_map_intmap_TIntMapEnumerator brl_map_intmap_TIntMapEnumerator;
void _brl_map_intmap_TIntEmptyEnumerator_New(struct brl_map_intmap_TIntEmptyEnumerator_obj* o);
typedef BBINT (*brl_map_intmap_TIntEmptyEnumerator_HasNext_m)(struct brl_map_intmap_TIntEmptyEnumerator_obj*);
BBINT _brl_map_intmap_TIntEmptyEnumerator_HasNext(struct brl_map_intmap_TIntEmptyEnumerator_obj*);
struct BBClass_brl_map_intmap_TIntEmptyEnumerator {
	struct BBClass_brl_map_intmap_TIntNodeEnumerator*  super;
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
	brl_map_intmap_TIntEmptyEnumerator_HasNext_m m_HasNext;
	brl_map_intmap_TIntNodeEnumerator_NextObject_m m_NextObject;
};

struct brl_map_intmap_TIntEmptyEnumerator_obj {
	struct BBClass_brl_map_intmap_TIntEmptyEnumerator* clas;
	struct brl_map_intmap_TIntNode_obj* _brl_map_intmap_tintnodeenumerator__node;
	struct brl_map_intmap_TIntMap_obj* _brl_map_intmap_tintnodeenumerator__map;
};
extern struct BBClass_brl_map_intmap_TIntEmptyEnumerator brl_map_intmap_TIntEmptyEnumerator;
extern void bmx_map_intmap_clear(BBBYTE** bbt_root);
extern BBINT bmx_map_intmap_isempty(BBBYTE** bbt_root);
extern void bmx_map_intmap_insert(BBINT bbt_key,BBOBJECT bbt_value,BBBYTE** bbt_root);
extern BBINT bmx_map_intmap_contains(BBINT bbt_key,BBBYTE** bbt_root);
extern BBOBJECT bmx_map_intmap_valueforkey(BBINT bbt_key,BBBYTE** bbt_root);
extern BBINT bmx_map_intmap_remove(BBINT bbt_key,BBBYTE** bbt_root);
extern BBBYTE* bmx_map_intmap_firstnode(BBBYTE* bbt_root);
extern BBBYTE* bmx_map_intmap_nextnode(BBBYTE* bbt_node);
extern BBINT bmx_map_intmap_key(BBBYTE* bbt_node);
extern BBOBJECT bmx_map_intmap_value(BBBYTE* bbt_node);
extern BBINT bmx_map_intmap_hasnext(BBBYTE* bbt_node,BBBYTE* bbt_root);
extern void bmx_map_intmap_copy(BBBYTE** bbt_dst,BBBYTE* bbt__root);

#endif
