#ifndef BRL_MAP_MAP_BMX_RELEASE_LINUX_X64_H
#define BRL_MAP_MAP_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include "intmap.bmx.release.linux.x64.h"
#include "ptrmap.bmx.release.linux.x64.h"
#include "stringmap.bmx.release.linux.x64.h"
#include "objectmap.bmx.release.linux.x64.h"
int __bb_brl_map_map();
struct brl_map_TKeyValue_obj;
struct brl_map_TNode_obj;
struct brl_map_TMap_obj;
struct brl_map_TNodeEnumerator_obj;
struct brl_map_TKeyEnumerator_obj;
struct brl_map_TValueEnumerator_obj;
struct brl_map_TMapEnumerator_obj;
void _brl_map_TKeyValue_New(struct brl_map_TKeyValue_obj* o);
typedef BBOBJECT (*brl_map_TKeyValue_Key_m)(struct brl_map_TKeyValue_obj*);
BBOBJECT _brl_map_TKeyValue_Key(struct brl_map_TKeyValue_obj*);
typedef BBOBJECT (*brl_map_TKeyValue_Value_m)(struct brl_map_TKeyValue_obj*);
BBOBJECT _brl_map_TKeyValue_Value(struct brl_map_TKeyValue_obj*);
struct BBClass_brl_map_TKeyValue {
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
	brl_map_TKeyValue_Key_m m_Key;
	brl_map_TKeyValue_Value_m m_Value;
};

struct brl_map_TKeyValue_obj {
	struct BBClass_brl_map_TKeyValue* clas;
	BBOBJECT _brl_map_tkeyvalue__key;
	BBOBJECT _brl_map_tkeyvalue__value;
};
extern struct BBClass_brl_map_TKeyValue brl_map_TKeyValue;
void _brl_map_TNode_New(struct brl_map_TNode_obj* o);
typedef struct brl_map_TNode_obj* (*brl_map_TNode_NextNode_m)(struct brl_map_TNode_obj*);
struct brl_map_TNode_obj* _brl_map_TNode_NextNode(struct brl_map_TNode_obj*);
typedef struct brl_map_TNode_obj* (*brl_map_TNode_PrevNode_m)(struct brl_map_TNode_obj*);
struct brl_map_TNode_obj* _brl_map_TNode_PrevNode(struct brl_map_TNode_obj*);
typedef void (*brl_map_TNode_Clear_m)(struct brl_map_TNode_obj*);
void _brl_map_TNode_Clear(struct brl_map_TNode_obj*);
typedef struct brl_map_TNode_obj* (*brl_map_TNode_Copy_TTNode_m)(struct brl_map_TNode_obj*,struct brl_map_TNode_obj*);
struct brl_map_TNode_obj* _brl_map_TNode_Copy_TTNode(struct brl_map_TNode_obj*,struct brl_map_TNode_obj*);
typedef BBOBJECT (*brl_map_TNode_Key_m)(struct brl_map_TNode_obj*);
BBOBJECT _brl_map_TNode_Key(struct brl_map_TNode_obj*);
typedef BBOBJECT (*brl_map_TNode_Value_m)(struct brl_map_TNode_obj*);
BBOBJECT _brl_map_TNode_Value(struct brl_map_TNode_obj*);
struct BBClass_brl_map_TNode {
	struct BBClass_brl_map_TKeyValue*  super;
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
	brl_map_TNode_Key_m m_Key;
	brl_map_TNode_Value_m m_Value;
	brl_map_TNode_NextNode_m m_NextNode;
	brl_map_TNode_PrevNode_m m_PrevNode;
	brl_map_TNode_Clear_m m_Clear;
	brl_map_TNode_Copy_TTNode_m m_Copy_TTNode;
};

struct brl_map_TNode_obj {
	struct BBClass_brl_map_TNode* clas;
	BBOBJECT _brl_map_tkeyvalue__key;
	BBOBJECT _brl_map_tkeyvalue__value;
	BBINT _brl_map_tnode__color;
	struct brl_map_TNode_obj* _brl_map_tnode__parent;
	struct brl_map_TNode_obj* _brl_map_tnode__left;
	struct brl_map_TNode_obj* _brl_map_tnode__right;
};
extern struct BBClass_brl_map_TNode brl_map_TNode;
void _brl_map_TMap_New(struct brl_map_TMap_obj* o);
typedef void (*brl_map_TMap_Clear_m)(struct brl_map_TMap_obj*);
void _brl_map_TMap_Clear(struct brl_map_TMap_obj*);
typedef BBINT (*brl_map_TMap_IsEmpty_m)(struct brl_map_TMap_obj*);
BBINT _brl_map_TMap_IsEmpty(struct brl_map_TMap_obj*);
typedef void (*brl_map_TMap_Insert_TObjectTObject_m)(struct brl_map_TMap_obj*,BBOBJECT,BBOBJECT);
void _brl_map_TMap_Insert_TObjectTObject(struct brl_map_TMap_obj*,BBOBJECT,BBOBJECT);
typedef BBINT (*brl_map_TMap_Contains_TObject_m)(struct brl_map_TMap_obj*,BBOBJECT);
BBINT _brl_map_TMap_Contains_TObject(struct brl_map_TMap_obj*,BBOBJECT);
typedef BBOBJECT (*brl_map_TMap_ValueForKey_TObject_m)(struct brl_map_TMap_obj*,BBOBJECT);
BBOBJECT _brl_map_TMap_ValueForKey_TObject(struct brl_map_TMap_obj*,BBOBJECT);
typedef BBINT (*brl_map_TMap_Remove_TObject_m)(struct brl_map_TMap_obj*,BBOBJECT);
BBINT _brl_map_TMap_Remove_TObject(struct brl_map_TMap_obj*,BBOBJECT);
typedef struct brl_map_TMapEnumerator_obj* (*brl_map_TMap_Keys_m)(struct brl_map_TMap_obj*);
struct brl_map_TMapEnumerator_obj* _brl_map_TMap_Keys(struct brl_map_TMap_obj*);
typedef struct brl_map_TMapEnumerator_obj* (*brl_map_TMap_Values_m)(struct brl_map_TMap_obj*);
struct brl_map_TMapEnumerator_obj* _brl_map_TMap_Values(struct brl_map_TMap_obj*);
typedef struct brl_map_TMap_obj* (*brl_map_TMap_Copy_m)(struct brl_map_TMap_obj*);
struct brl_map_TMap_obj* _brl_map_TMap_Copy(struct brl_map_TMap_obj*);
typedef struct brl_map_TNodeEnumerator_obj* (*brl_map_TMap_ObjectEnumerator_m)(struct brl_map_TMap_obj*);
struct brl_map_TNodeEnumerator_obj* _brl_map_TMap_ObjectEnumerator(struct brl_map_TMap_obj*);
typedef struct brl_map_TNode_obj* (*brl_map_TMap__FirstNode_m)(struct brl_map_TMap_obj*);
struct brl_map_TNode_obj* _brl_map_TMap__FirstNode(struct brl_map_TMap_obj*);
typedef struct brl_map_TNode_obj* (*brl_map_TMap__LastNode_m)(struct brl_map_TMap_obj*);
struct brl_map_TNode_obj* _brl_map_TMap__LastNode(struct brl_map_TMap_obj*);
typedef struct brl_map_TNode_obj* (*brl_map_TMap__FindNode_TObject_m)(struct brl_map_TMap_obj*,BBOBJECT);
struct brl_map_TNode_obj* _brl_map_TMap__FindNode_TObject(struct brl_map_TMap_obj*,BBOBJECT);
typedef void (*brl_map_TMap__RemoveNode_TTNode_m)(struct brl_map_TMap_obj*,struct brl_map_TNode_obj*);
void _brl_map_TMap__RemoveNode_TTNode(struct brl_map_TMap_obj*,struct brl_map_TNode_obj*);
typedef void (*brl_map_TMap__InsertFixup_TTNode_m)(struct brl_map_TMap_obj*,struct brl_map_TNode_obj*);
void _brl_map_TMap__InsertFixup_TTNode(struct brl_map_TMap_obj*,struct brl_map_TNode_obj*);
typedef void (*brl_map_TMap__RotateLeft_TTNode_m)(struct brl_map_TMap_obj*,struct brl_map_TNode_obj*);
void _brl_map_TMap__RotateLeft_TTNode(struct brl_map_TMap_obj*,struct brl_map_TNode_obj*);
typedef void (*brl_map_TMap__RotateRight_TTNode_m)(struct brl_map_TMap_obj*,struct brl_map_TNode_obj*);
void _brl_map_TMap__RotateRight_TTNode(struct brl_map_TMap_obj*,struct brl_map_TNode_obj*);
typedef void (*brl_map_TMap__DeleteFixup_TTNodeTTNode_m)(struct brl_map_TMap_obj*,struct brl_map_TNode_obj*,struct brl_map_TNode_obj*);
void _brl_map_TMap__DeleteFixup_TTNodeTTNode(struct brl_map_TMap_obj*,struct brl_map_TNode_obj*,struct brl_map_TNode_obj*);
typedef BBOBJECT (*brl_map_TMap__iget_TObject_m)(struct brl_map_TMap_obj*,BBOBJECT);
BBOBJECT _brl_map_TMap__iget_TObject(struct brl_map_TMap_obj*,BBOBJECT);
typedef void (*brl_map_TMap__iset_TObjectTObject_m)(struct brl_map_TMap_obj*,BBOBJECT,BBOBJECT);
void _brl_map_TMap__iset_TObjectTObject(struct brl_map_TMap_obj*,BBOBJECT,BBOBJECT);
struct BBClass_brl_map_TMap {
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
	brl_map_TMap_Clear_m m_Clear;
	brl_map_TMap_IsEmpty_m m_IsEmpty;
	brl_map_TMap_Insert_TObjectTObject_m m_Insert_TObjectTObject;
	brl_map_TMap_Contains_TObject_m m_Contains_TObject;
	brl_map_TMap_ValueForKey_TObject_m m_ValueForKey_TObject;
	brl_map_TMap_Remove_TObject_m m_Remove_TObject;
	brl_map_TMap_Keys_m m_Keys;
	brl_map_TMap_Values_m m_Values;
	brl_map_TMap_Copy_m m_Copy;
	brl_map_TMap_ObjectEnumerator_m m_ObjectEnumerator;
	brl_map_TMap__FirstNode_m m__FirstNode;
	brl_map_TMap__LastNode_m m__LastNode;
	brl_map_TMap__FindNode_TObject_m m__FindNode_TObject;
	brl_map_TMap__RemoveNode_TTNode_m m__RemoveNode_TTNode;
	brl_map_TMap__InsertFixup_TTNode_m m__InsertFixup_TTNode;
	brl_map_TMap__RotateLeft_TTNode_m m__RotateLeft_TTNode;
	brl_map_TMap__RotateRight_TTNode_m m__RotateRight_TTNode;
	brl_map_TMap__DeleteFixup_TTNodeTTNode_m m__DeleteFixup_TTNodeTTNode;
	brl_map_TMap__iget_TObject_m m__iget_TObject;
	brl_map_TMap__iset_TObjectTObject_m m__iset_TObjectTObject;
};

struct brl_map_TMap_obj {
	struct BBClass_brl_map_TMap* clas;
	struct brl_map_TNode_obj* _brl_map_tmap__root;
};
extern struct BBClass_brl_map_TMap brl_map_TMap;
void _brl_map_TNodeEnumerator_New(struct brl_map_TNodeEnumerator_obj* o);
typedef BBINT (*brl_map_TNodeEnumerator_HasNext_m)(struct brl_map_TNodeEnumerator_obj*);
BBINT _brl_map_TNodeEnumerator_HasNext(struct brl_map_TNodeEnumerator_obj*);
typedef BBOBJECT (*brl_map_TNodeEnumerator_NextObject_m)(struct brl_map_TNodeEnumerator_obj*);
BBOBJECT _brl_map_TNodeEnumerator_NextObject(struct brl_map_TNodeEnumerator_obj*);
struct BBClass_brl_map_TNodeEnumerator {
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
	brl_map_TNodeEnumerator_HasNext_m m_HasNext;
	brl_map_TNodeEnumerator_NextObject_m m_NextObject;
};

struct brl_map_TNodeEnumerator_obj {
	struct BBClass_brl_map_TNodeEnumerator* clas;
	struct brl_map_TNode_obj* _brl_map_tnodeenumerator__node;
	struct brl_map_TMap_obj* _brl_map_tnodeenumerator__map;
	BBINT _brl_map_tnodeenumerator__expectedmodcount;
};
extern struct BBClass_brl_map_TNodeEnumerator brl_map_TNodeEnumerator;
void _brl_map_TKeyEnumerator_New(struct brl_map_TKeyEnumerator_obj* o);
typedef BBOBJECT (*brl_map_TKeyEnumerator_NextObject_m)(struct brl_map_TKeyEnumerator_obj*);
BBOBJECT _brl_map_TKeyEnumerator_NextObject(struct brl_map_TKeyEnumerator_obj*);
struct BBClass_brl_map_TKeyEnumerator {
	struct BBClass_brl_map_TNodeEnumerator*  super;
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
	brl_map_TNodeEnumerator_HasNext_m m_HasNext;
	brl_map_TKeyEnumerator_NextObject_m m_NextObject;
};

struct brl_map_TKeyEnumerator_obj {
	struct BBClass_brl_map_TKeyEnumerator* clas;
	struct brl_map_TNode_obj* _brl_map_tnodeenumerator__node;
	struct brl_map_TMap_obj* _brl_map_tnodeenumerator__map;
	BBINT _brl_map_tnodeenumerator__expectedmodcount;
};
extern struct BBClass_brl_map_TKeyEnumerator brl_map_TKeyEnumerator;
void _brl_map_TValueEnumerator_New(struct brl_map_TValueEnumerator_obj* o);
typedef BBOBJECT (*brl_map_TValueEnumerator_NextObject_m)(struct brl_map_TValueEnumerator_obj*);
BBOBJECT _brl_map_TValueEnumerator_NextObject(struct brl_map_TValueEnumerator_obj*);
struct BBClass_brl_map_TValueEnumerator {
	struct BBClass_brl_map_TNodeEnumerator*  super;
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
	brl_map_TNodeEnumerator_HasNext_m m_HasNext;
	brl_map_TValueEnumerator_NextObject_m m_NextObject;
};

struct brl_map_TValueEnumerator_obj {
	struct BBClass_brl_map_TValueEnumerator* clas;
	struct brl_map_TNode_obj* _brl_map_tnodeenumerator__node;
	struct brl_map_TMap_obj* _brl_map_tnodeenumerator__map;
	BBINT _brl_map_tnodeenumerator__expectedmodcount;
};
extern struct BBClass_brl_map_TValueEnumerator brl_map_TValueEnumerator;
void _brl_map_TMapEnumerator_New(struct brl_map_TMapEnumerator_obj* o);
typedef struct brl_map_TNodeEnumerator_obj* (*brl_map_TMapEnumerator_ObjectEnumerator_m)(struct brl_map_TMapEnumerator_obj*);
struct brl_map_TNodeEnumerator_obj* _brl_map_TMapEnumerator_ObjectEnumerator(struct brl_map_TMapEnumerator_obj*);
struct BBClass_brl_map_TMapEnumerator {
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
	brl_map_TMapEnumerator_ObjectEnumerator_m m_ObjectEnumerator;
};

struct brl_map_TMapEnumerator_obj {
	struct BBClass_brl_map_TMapEnumerator* clas;
	struct brl_map_TNodeEnumerator_obj* _brl_map_tmapenumerator__enumerator;
};
extern struct BBClass_brl_map_TMapEnumerator brl_map_TMapEnumerator;
struct brl_map_TMap_obj* brl_map_CreateMap();
void brl_map_ClearMap(struct brl_map_TMap_obj* bbt_map);
BBINT brl_map_MapIsEmpty(struct brl_map_TMap_obj* bbt_map);
void brl_map_MapInsert(struct brl_map_TMap_obj* bbt_map,BBOBJECT bbt_key,BBOBJECT bbt_value);
BBOBJECT brl_map_MapValueForKey(struct brl_map_TMap_obj* bbt_map,BBOBJECT bbt_key);
BBINT brl_map_MapContains(struct brl_map_TMap_obj* bbt_map,BBOBJECT bbt_key);
void brl_map_MapRemove(struct brl_map_TMap_obj* bbt_map,BBOBJECT bbt_key);
struct brl_map_TMapEnumerator_obj* brl_map_MapKeys(struct brl_map_TMap_obj* bbt_map);
struct brl_map_TMapEnumerator_obj* brl_map_MapValues(struct brl_map_TMap_obj* bbt_map);
struct brl_map_TMap_obj* brl_map_CopyMap(struct brl_map_TMap_obj* bbt_map);

#endif
