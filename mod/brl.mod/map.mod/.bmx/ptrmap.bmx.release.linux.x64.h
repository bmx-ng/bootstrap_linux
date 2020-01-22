#ifndef BRL_MAP_PTRMAP_BMX_RELEASE_LINUX_X64_H
#define BRL_MAP_PTRMAP_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/threads.mod/.bmx/threads.bmx.release.linux.x64.h>
int _bb_brl_map_ptrmap();
struct brl_map_ptrmap_TPtrMap_obj;
struct brl_map_ptrmap_TPtrNode_obj;
struct brl_map_ptrmap_TPtrKey_obj;
struct brl_map_ptrmap_TPtrNodeEnumerator_obj;
struct brl_map_ptrmap_TPtrKeyEnumerator_obj;
struct brl_map_ptrmap_TPtrValueEnumerator_obj;
struct brl_map_ptrmap_TPtrMapEnumerator_obj;
struct brl_map_ptrmap_TPtrEmptyEnumerator_obj;
struct brl_map_ptrmap_TSynchronizedPtrMap_obj;
void _brl_map_ptrmap_TPtrMap_New(struct brl_map_ptrmap_TPtrMap_obj* o);
void _brl_map_ptrmap_TPtrMap_Delete(struct brl_map_ptrmap_TPtrMap_obj* o);
typedef void (*brl_map_ptrmap_TPtrMap_Clear_m)(struct brl_map_ptrmap_TPtrMap_obj*);
void _brl_map_ptrmap_TPtrMap_Clear(struct brl_map_ptrmap_TPtrMap_obj*);
typedef BBINT (*brl_map_ptrmap_TPtrMap_IsEmpty_m)(struct brl_map_ptrmap_TPtrMap_obj*);
BBINT _brl_map_ptrmap_TPtrMap_IsEmpty(struct brl_map_ptrmap_TPtrMap_obj*);
typedef void (*brl_map_ptrmap_TPtrMap_Insert_pbTObject_m)(struct brl_map_ptrmap_TPtrMap_obj*,BBBYTE*,BBOBJECT);
void _brl_map_ptrmap_TPtrMap_Insert_pbTObject(struct brl_map_ptrmap_TPtrMap_obj*,BBBYTE*,BBOBJECT);
typedef BBINT (*brl_map_ptrmap_TPtrMap_Contains_pb_m)(struct brl_map_ptrmap_TPtrMap_obj*,BBBYTE*);
BBINT _brl_map_ptrmap_TPtrMap_Contains_pb(struct brl_map_ptrmap_TPtrMap_obj*,BBBYTE*);
typedef BBOBJECT (*brl_map_ptrmap_TPtrMap_ValueForKey_pb_m)(struct brl_map_ptrmap_TPtrMap_obj*,BBBYTE*);
BBOBJECT _brl_map_ptrmap_TPtrMap_ValueForKey_pb(struct brl_map_ptrmap_TPtrMap_obj*,BBBYTE*);
typedef BBINT (*brl_map_ptrmap_TPtrMap_Remove_pb_m)(struct brl_map_ptrmap_TPtrMap_obj*,BBBYTE*);
BBINT _brl_map_ptrmap_TPtrMap_Remove_pb(struct brl_map_ptrmap_TPtrMap_obj*,BBBYTE*);
typedef struct brl_map_ptrmap_TPtrNode_obj* (*brl_map_ptrmap_TPtrMap__FirstNode_m)(struct brl_map_ptrmap_TPtrMap_obj*);
struct brl_map_ptrmap_TPtrNode_obj* _brl_map_ptrmap_TPtrMap__FirstNode(struct brl_map_ptrmap_TPtrMap_obj*);
typedef struct brl_map_ptrmap_TPtrMapEnumerator_obj* (*brl_map_ptrmap_TPtrMap_Keys_m)(struct brl_map_ptrmap_TPtrMap_obj*);
struct brl_map_ptrmap_TPtrMapEnumerator_obj* _brl_map_ptrmap_TPtrMap_Keys(struct brl_map_ptrmap_TPtrMap_obj*);
typedef struct brl_map_ptrmap_TPtrMapEnumerator_obj* (*brl_map_ptrmap_TPtrMap_Values_m)(struct brl_map_ptrmap_TPtrMap_obj*);
struct brl_map_ptrmap_TPtrMapEnumerator_obj* _brl_map_ptrmap_TPtrMap_Values(struct brl_map_ptrmap_TPtrMap_obj*);
typedef struct brl_map_ptrmap_TPtrMap_obj* (*brl_map_ptrmap_TPtrMap_Copy_m)(struct brl_map_ptrmap_TPtrMap_obj*);
struct brl_map_ptrmap_TPtrMap_obj* _brl_map_ptrmap_TPtrMap_Copy(struct brl_map_ptrmap_TPtrMap_obj*);
typedef struct brl_map_ptrmap_TPtrNodeEnumerator_obj* (*brl_map_ptrmap_TPtrMap_ObjectEnumerator_m)(struct brl_map_ptrmap_TPtrMap_obj*);
struct brl_map_ptrmap_TPtrNodeEnumerator_obj* _brl_map_ptrmap_TPtrMap_ObjectEnumerator(struct brl_map_ptrmap_TPtrMap_obj*);
typedef BBOBJECT (*brl_map_ptrmap_TPtrMap__iget_pb_m)(struct brl_map_ptrmap_TPtrMap_obj*,BBBYTE*);
BBOBJECT _brl_map_ptrmap_TPtrMap__iget_pb(struct brl_map_ptrmap_TPtrMap_obj*,BBBYTE*);
typedef void (*brl_map_ptrmap_TPtrMap__iset_pbTObject_m)(struct brl_map_ptrmap_TPtrMap_obj*,BBBYTE*,BBOBJECT);
void _brl_map_ptrmap_TPtrMap__iset_pbTObject(struct brl_map_ptrmap_TPtrMap_obj*,BBBYTE*,BBOBJECT);
struct BBClass_brl_map_ptrmap_TPtrMap {
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
	brl_map_ptrmap_TPtrMap_Clear_m m_Clear;
	brl_map_ptrmap_TPtrMap_IsEmpty_m m_IsEmpty;
	brl_map_ptrmap_TPtrMap_Insert_pbTObject_m m_Insert_pbTObject;
	brl_map_ptrmap_TPtrMap_Contains_pb_m m_Contains_pb;
	brl_map_ptrmap_TPtrMap_ValueForKey_pb_m m_ValueForKey_pb;
	brl_map_ptrmap_TPtrMap_Remove_pb_m m_Remove_pb;
	brl_map_ptrmap_TPtrMap__FirstNode_m m__FirstNode;
	brl_map_ptrmap_TPtrMap_Keys_m m_Keys;
	brl_map_ptrmap_TPtrMap_Values_m m_Values;
	brl_map_ptrmap_TPtrMap_Copy_m m_Copy;
	brl_map_ptrmap_TPtrMap_ObjectEnumerator_m m_ObjectEnumerator;
	brl_map_ptrmap_TPtrMap__iget_pb_m m__iget_pb;
	brl_map_ptrmap_TPtrMap__iset_pbTObject_m m__iset_pbTObject;
};

struct brl_map_ptrmap_TPtrMap_obj {
	struct BBClass_brl_map_ptrmap_TPtrMap* clas;
	BBBYTE* _brl_map_ptrmap_tptrmap__root;
};
extern struct BBClass_brl_map_ptrmap_TPtrMap brl_map_ptrmap_TPtrMap;
void _brl_map_ptrmap_TPtrNode_New(struct brl_map_ptrmap_TPtrNode_obj* o);
typedef BBBYTE* (*brl_map_ptrmap_TPtrNode_Key_m)(struct brl_map_ptrmap_TPtrNode_obj*);
BBBYTE* _brl_map_ptrmap_TPtrNode_Key(struct brl_map_ptrmap_TPtrNode_obj*);
typedef BBOBJECT (*brl_map_ptrmap_TPtrNode_Value_m)(struct brl_map_ptrmap_TPtrNode_obj*);
BBOBJECT _brl_map_ptrmap_TPtrNode_Value(struct brl_map_ptrmap_TPtrNode_obj*);
typedef BBINT (*brl_map_ptrmap_TPtrNode_HasNext_m)(struct brl_map_ptrmap_TPtrNode_obj*);
BBINT _brl_map_ptrmap_TPtrNode_HasNext(struct brl_map_ptrmap_TPtrNode_obj*);
typedef struct brl_map_ptrmap_TPtrNode_obj* (*brl_map_ptrmap_TPtrNode_NextNode_m)(struct brl_map_ptrmap_TPtrNode_obj*);
struct brl_map_ptrmap_TPtrNode_obj* _brl_map_ptrmap_TPtrNode_NextNode(struct brl_map_ptrmap_TPtrNode_obj*);
struct BBClass_brl_map_ptrmap_TPtrNode {
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
	brl_map_ptrmap_TPtrNode_Key_m m_Key;
	brl_map_ptrmap_TPtrNode_Value_m m_Value;
	brl_map_ptrmap_TPtrNode_HasNext_m m_HasNext;
	brl_map_ptrmap_TPtrNode_NextNode_m m_NextNode;
};

struct brl_map_ptrmap_TPtrNode_obj {
	struct BBClass_brl_map_ptrmap_TPtrNode* clas;
	BBBYTE* _brl_map_ptrmap_tptrnode__root;
	BBBYTE* _brl_map_ptrmap_tptrnode__nodeptr;
};
extern struct BBClass_brl_map_ptrmap_TPtrNode brl_map_ptrmap_TPtrNode;
void _brl_map_ptrmap_TPtrKey_New(struct brl_map_ptrmap_TPtrKey_obj* o);
struct BBClass_brl_map_ptrmap_TPtrKey {
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

struct brl_map_ptrmap_TPtrKey_obj {
	struct BBClass_brl_map_ptrmap_TPtrKey* clas;
	BBBYTE* _brl_map_ptrmap_tptrkey_value;
};
extern struct BBClass_brl_map_ptrmap_TPtrKey brl_map_ptrmap_TPtrKey;
void _brl_map_ptrmap_TPtrNodeEnumerator_New(struct brl_map_ptrmap_TPtrNodeEnumerator_obj* o);
typedef BBINT (*brl_map_ptrmap_TPtrNodeEnumerator_HasNext_m)(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*);
BBINT _brl_map_ptrmap_TPtrNodeEnumerator_HasNext(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*);
typedef BBOBJECT (*brl_map_ptrmap_TPtrNodeEnumerator_NextObject_m)(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*);
BBOBJECT _brl_map_ptrmap_TPtrNodeEnumerator_NextObject(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*);
struct BBClass_brl_map_ptrmap_TPtrNodeEnumerator {
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
	brl_map_ptrmap_TPtrNodeEnumerator_HasNext_m m_HasNext;
	brl_map_ptrmap_TPtrNodeEnumerator_NextObject_m m_NextObject;
};

struct brl_map_ptrmap_TPtrNodeEnumerator_obj {
	struct BBClass_brl_map_ptrmap_TPtrNodeEnumerator* clas;
	struct brl_map_ptrmap_TPtrNode_obj* _brl_map_ptrmap_tptrnodeenumerator__node;
	struct brl_map_ptrmap_TPtrMap_obj* _brl_map_ptrmap_tptrnodeenumerator__map;
};
extern struct BBClass_brl_map_ptrmap_TPtrNodeEnumerator brl_map_ptrmap_TPtrNodeEnumerator;
void _brl_map_ptrmap_TPtrKeyEnumerator_New(struct brl_map_ptrmap_TPtrKeyEnumerator_obj* o);
typedef BBOBJECT (*brl_map_ptrmap_TPtrKeyEnumerator_NextObject_m)(struct brl_map_ptrmap_TPtrKeyEnumerator_obj*);
BBOBJECT _brl_map_ptrmap_TPtrKeyEnumerator_NextObject(struct brl_map_ptrmap_TPtrKeyEnumerator_obj*);
struct BBClass_brl_map_ptrmap_TPtrKeyEnumerator {
	struct BBClass_brl_map_ptrmap_TPtrNodeEnumerator*  super;
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
	brl_map_ptrmap_TPtrNodeEnumerator_HasNext_m m_HasNext;
	brl_map_ptrmap_TPtrKeyEnumerator_NextObject_m m_NextObject;
};

struct brl_map_ptrmap_TPtrKeyEnumerator_obj {
	struct BBClass_brl_map_ptrmap_TPtrKeyEnumerator* clas;
	struct brl_map_ptrmap_TPtrNode_obj* _brl_map_ptrmap_tptrnodeenumerator__node;
	struct brl_map_ptrmap_TPtrMap_obj* _brl_map_ptrmap_tptrnodeenumerator__map;
	struct brl_map_ptrmap_TPtrKey_obj* _brl_map_ptrmap_tptrkeyenumerator__key;
};
extern struct BBClass_brl_map_ptrmap_TPtrKeyEnumerator brl_map_ptrmap_TPtrKeyEnumerator;
void _brl_map_ptrmap_TPtrValueEnumerator_New(struct brl_map_ptrmap_TPtrValueEnumerator_obj* o);
typedef BBOBJECT (*brl_map_ptrmap_TPtrValueEnumerator_NextObject_m)(struct brl_map_ptrmap_TPtrValueEnumerator_obj*);
BBOBJECT _brl_map_ptrmap_TPtrValueEnumerator_NextObject(struct brl_map_ptrmap_TPtrValueEnumerator_obj*);
struct BBClass_brl_map_ptrmap_TPtrValueEnumerator {
	struct BBClass_brl_map_ptrmap_TPtrNodeEnumerator*  super;
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
	brl_map_ptrmap_TPtrNodeEnumerator_HasNext_m m_HasNext;
	brl_map_ptrmap_TPtrValueEnumerator_NextObject_m m_NextObject;
};

struct brl_map_ptrmap_TPtrValueEnumerator_obj {
	struct BBClass_brl_map_ptrmap_TPtrValueEnumerator* clas;
	struct brl_map_ptrmap_TPtrNode_obj* _brl_map_ptrmap_tptrnodeenumerator__node;
	struct brl_map_ptrmap_TPtrMap_obj* _brl_map_ptrmap_tptrnodeenumerator__map;
};
extern struct BBClass_brl_map_ptrmap_TPtrValueEnumerator brl_map_ptrmap_TPtrValueEnumerator;
void _brl_map_ptrmap_TPtrMapEnumerator_New(struct brl_map_ptrmap_TPtrMapEnumerator_obj* o);
typedef struct brl_map_ptrmap_TPtrNodeEnumerator_obj* (*brl_map_ptrmap_TPtrMapEnumerator_ObjectEnumerator_m)(struct brl_map_ptrmap_TPtrMapEnumerator_obj*);
struct brl_map_ptrmap_TPtrNodeEnumerator_obj* _brl_map_ptrmap_TPtrMapEnumerator_ObjectEnumerator(struct brl_map_ptrmap_TPtrMapEnumerator_obj*);
struct BBClass_brl_map_ptrmap_TPtrMapEnumerator {
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
	brl_map_ptrmap_TPtrMapEnumerator_ObjectEnumerator_m m_ObjectEnumerator;
};

struct brl_map_ptrmap_TPtrMapEnumerator_obj {
	struct BBClass_brl_map_ptrmap_TPtrMapEnumerator* clas;
	struct brl_map_ptrmap_TPtrNodeEnumerator_obj* _brl_map_ptrmap_tptrmapenumerator__enumerator;
};
extern struct BBClass_brl_map_ptrmap_TPtrMapEnumerator brl_map_ptrmap_TPtrMapEnumerator;
void _brl_map_ptrmap_TPtrEmptyEnumerator_New(struct brl_map_ptrmap_TPtrEmptyEnumerator_obj* o);
typedef BBINT (*brl_map_ptrmap_TPtrEmptyEnumerator_HasNext_m)(struct brl_map_ptrmap_TPtrEmptyEnumerator_obj*);
BBINT _brl_map_ptrmap_TPtrEmptyEnumerator_HasNext(struct brl_map_ptrmap_TPtrEmptyEnumerator_obj*);
struct BBClass_brl_map_ptrmap_TPtrEmptyEnumerator {
	struct BBClass_brl_map_ptrmap_TPtrNodeEnumerator*  super;
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
	brl_map_ptrmap_TPtrEmptyEnumerator_HasNext_m m_HasNext;
	brl_map_ptrmap_TPtrNodeEnumerator_NextObject_m m_NextObject;
};

struct brl_map_ptrmap_TPtrEmptyEnumerator_obj {
	struct BBClass_brl_map_ptrmap_TPtrEmptyEnumerator* clas;
	struct brl_map_ptrmap_TPtrNode_obj* _brl_map_ptrmap_tptrnodeenumerator__node;
	struct brl_map_ptrmap_TPtrMap_obj* _brl_map_ptrmap_tptrnodeenumerator__map;
};
extern struct BBClass_brl_map_ptrmap_TPtrEmptyEnumerator brl_map_ptrmap_TPtrEmptyEnumerator;
void _brl_map_ptrmap_TSynchronizedPtrMap_New_TTPtrMap(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o,struct brl_map_ptrmap_TPtrMap_obj* bbt_map);
struct brl_map_ptrmap_TSynchronizedPtrMap_obj* _brl_map_ptrmap_TSynchronizedPtrMap_New_TTPtrMap_ObjectNew(BBClass * clas,struct brl_map_ptrmap_TPtrMap_obj* bbt_map);
void _brl_map_ptrmap_TSynchronizedPtrMap_New(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o);
typedef void (*brl_map_ptrmap_TSynchronizedPtrMap_Clear_m)(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*);
void _brl_map_ptrmap_TSynchronizedPtrMap_Clear(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*);
typedef BBINT (*brl_map_ptrmap_TSynchronizedPtrMap_IsEmpty_m)(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*);
BBINT _brl_map_ptrmap_TSynchronizedPtrMap_IsEmpty(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*);
typedef void (*brl_map_ptrmap_TSynchronizedPtrMap_Insert_pbTObject_m)(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*,BBBYTE*,BBOBJECT);
void _brl_map_ptrmap_TSynchronizedPtrMap_Insert_pbTObject(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*,BBBYTE*,BBOBJECT);
typedef BBINT (*brl_map_ptrmap_TSynchronizedPtrMap_Contains_pb_m)(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*,BBBYTE*);
BBINT _brl_map_ptrmap_TSynchronizedPtrMap_Contains_pb(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*,BBBYTE*);
typedef BBOBJECT (*brl_map_ptrmap_TSynchronizedPtrMap_ValueForKey_pb_m)(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*,BBBYTE*);
BBOBJECT _brl_map_ptrmap_TSynchronizedPtrMap_ValueForKey_pb(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*,BBBYTE*);
typedef BBINT (*brl_map_ptrmap_TSynchronizedPtrMap_Remove_pb_m)(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*,BBBYTE*);
BBINT _brl_map_ptrmap_TSynchronizedPtrMap_Remove_pb(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*,BBBYTE*);
typedef struct brl_map_ptrmap_TPtrMapEnumerator_obj* (*brl_map_ptrmap_TSynchronizedPtrMap_Keys_m)(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*);
struct brl_map_ptrmap_TPtrMapEnumerator_obj* _brl_map_ptrmap_TSynchronizedPtrMap_Keys(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*);
typedef struct brl_map_ptrmap_TPtrMapEnumerator_obj* (*brl_map_ptrmap_TSynchronizedPtrMap_Values_m)(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*);
struct brl_map_ptrmap_TPtrMapEnumerator_obj* _brl_map_ptrmap_TSynchronizedPtrMap_Values(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*);
typedef struct brl_map_ptrmap_TPtrMap_obj* (*brl_map_ptrmap_TSynchronizedPtrMap_Copy_m)(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*);
struct brl_map_ptrmap_TPtrMap_obj* _brl_map_ptrmap_TSynchronizedPtrMap_Copy(struct brl_map_ptrmap_TSynchronizedPtrMap_obj*);
struct BBClass_brl_map_ptrmap_TSynchronizedPtrMap {
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
	brl_map_ptrmap_TSynchronizedPtrMap_Clear_m m_Clear;
	brl_map_ptrmap_TSynchronizedPtrMap_IsEmpty_m m_IsEmpty;
	brl_map_ptrmap_TSynchronizedPtrMap_Insert_pbTObject_m m_Insert_pbTObject;
	brl_map_ptrmap_TSynchronizedPtrMap_Contains_pb_m m_Contains_pb;
	brl_map_ptrmap_TSynchronizedPtrMap_ValueForKey_pb_m m_ValueForKey_pb;
	brl_map_ptrmap_TSynchronizedPtrMap_Remove_pb_m m_Remove_pb;
	brl_map_ptrmap_TSynchronizedPtrMap_Keys_m m_Keys;
	brl_map_ptrmap_TSynchronizedPtrMap_Values_m m_Values;
	brl_map_ptrmap_TSynchronizedPtrMap_Copy_m m_Copy;
};

struct brl_map_ptrmap_TSynchronizedPtrMap_obj {
	struct BBClass_brl_map_ptrmap_TSynchronizedPtrMap* clas;
	struct brl_map_ptrmap_TPtrMap_obj* _brl_map_ptrmap_tsynchronizedptrmap_map;
	struct brl_threads_TMutex_obj* _brl_map_ptrmap_tsynchronizedptrmap_mutex;
};
extern struct BBClass_brl_map_ptrmap_TSynchronizedPtrMap brl_map_ptrmap_TSynchronizedPtrMap;
extern void bmx_map_ptrmap_clear(BBBYTE** bbt_root);
extern BBINT bmx_map_ptrmap_isempty(BBBYTE** bbt_root);
extern void bmx_map_ptrmap_insert(BBBYTE* bbt_key,BBOBJECT bbt_value,BBBYTE** bbt_root);
extern BBINT bmx_map_ptrmap_contains(BBBYTE* bbt_key,BBBYTE** bbt_root);
extern BBOBJECT bmx_map_ptrmap_valueforkey(BBBYTE* bbt_key,BBBYTE** bbt_root);
extern BBINT bmx_map_ptrmap_remove(BBBYTE* bbt_key,BBBYTE** bbt_root);
extern BBBYTE* bmx_map_ptrmap_firstnode(BBBYTE* bbt_root);
extern BBBYTE* bmx_map_ptrmap_nextnode(BBBYTE* bbt_node);
extern BBBYTE* bmx_map_ptrmap_key(BBBYTE* bbt_node);
extern BBOBJECT bmx_map_ptrmap_value(BBBYTE* bbt_node);
extern BBINT bmx_map_ptrmap_hasnext(BBBYTE* bbt_node,BBBYTE* bbt_root);
extern void bmx_map_ptrmap_copy(BBBYTE** bbt_dst,BBBYTE* bbt__root);

#endif
