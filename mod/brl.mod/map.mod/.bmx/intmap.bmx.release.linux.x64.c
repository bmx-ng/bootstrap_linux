#include "intmap.bmx.release.linux.x64.h"
struct BBDebugScope_15{int kind; const char *name; BBDebugDecl decls[16]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_9{int kind; const char *name; BBDebugDecl decls[10]; };
void _brl_map_intmap_TIntMap_New(struct brl_map_intmap_TIntMap_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_intmap_TIntMap;
	o->_brl_map_intmap_tintmap__root = 0;
}
void _brl_map_intmap_TIntMap_Delete(struct brl_map_intmap_TIntMap_obj* o) {
	((struct brl_map_intmap_TIntMap_obj*)o)->clas->m_Clear((struct brl_map_intmap_TIntMap_obj*)o);
	bbObjectDtor((BBOBJECT)o);
}
void _brl_map_intmap_TIntMap_Clear(struct brl_map_intmap_TIntMap_obj* o){
	bmx_map_intmap_clear((BBBYTE**)(&o->_brl_map_intmap_tintmap__root ));
}
BBINT _brl_map_intmap_TIntMap_IsEmpty(struct brl_map_intmap_TIntMap_obj* o){
	return bmx_map_intmap_isempty((BBBYTE**)(&o->_brl_map_intmap_tintmap__root ));
}
void _brl_map_intmap_TIntMap_Insert_iTObject(struct brl_map_intmap_TIntMap_obj* o,BBINT bbt_key,BBOBJECT bbt_value){
	bmx_map_intmap_insert(bbt_key,(BBOBJECT)bbt_value,((BBBYTE**)(&o->_brl_map_intmap_tintmap__root )));
}
BBINT _brl_map_intmap_TIntMap_Contains_i(struct brl_map_intmap_TIntMap_obj* o,BBINT bbt_key){
	return bmx_map_intmap_contains(bbt_key,((BBBYTE**)(&o->_brl_map_intmap_tintmap__root )));
}
BBOBJECT _brl_map_intmap_TIntMap_ValueForKey_i(struct brl_map_intmap_TIntMap_obj* o,BBINT bbt_key){
	return (BBOBJECT)bmx_map_intmap_valueforkey(bbt_key,((BBBYTE**)(&o->_brl_map_intmap_tintmap__root )));
}
BBINT _brl_map_intmap_TIntMap_Remove_i(struct brl_map_intmap_TIntMap_obj* o,BBINT bbt_key){
	return bmx_map_intmap_remove(bbt_key,((BBBYTE**)(&o->_brl_map_intmap_tintmap__root )));
}
struct brl_map_intmap_TIntNode_obj* _brl_map_intmap_TIntMap__FirstNode(struct brl_map_intmap_TIntMap_obj* o){
	if(!(((struct brl_map_intmap_TIntMap_obj*)o)->clas->m_IsEmpty((struct brl_map_intmap_TIntMap_obj*)o)!=0)){
		struct brl_map_intmap_TIntNode_obj* bbt_node=(struct brl_map_intmap_TIntNode_obj*)(struct brl_map_intmap_TIntNode_obj*)bbObjectAtomicNew((BBClass *)&brl_map_intmap_TIntNode);
		bbt_node->_brl_map_intmap_tintnode__root =o->_brl_map_intmap_tintmap__root ;
		return (struct brl_map_intmap_TIntNode_obj*)bbt_node;
	}else{
		return (struct brl_map_intmap_TIntNode_obj*)&bbNullObject;
	}
}
struct brl_map_intmap_TIntMapEnumerator_obj* _brl_map_intmap_TIntMap_Keys(struct brl_map_intmap_TIntMap_obj* o){
	struct brl_map_intmap_TIntNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_intmap_TIntNodeEnumerator_obj*)(&bbNullObject);
	if(!(((struct brl_map_intmap_TIntMap_obj*)o)->clas->m_IsEmpty((struct brl_map_intmap_TIntMap_obj*)o)!=0)){
		bbt_nodeenum=(struct brl_map_intmap_TIntNodeEnumerator_obj*)((struct brl_map_intmap_TIntNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_intmap_TIntKeyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_intmap_TIntKeyEnumerator),(BBClass*)&brl_map_intmap_TIntNodeEnumerator));
		bbt_nodeenum->_brl_map_intmap_tintnodeenumerator__node =(struct brl_map_intmap_TIntNode_obj*)((struct brl_map_intmap_TIntMap_obj*)o)->clas->m__FirstNode((struct brl_map_intmap_TIntMap_obj*)o);
	}else{
		bbt_nodeenum=(struct brl_map_intmap_TIntNodeEnumerator_obj*)((struct brl_map_intmap_TIntNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_intmap_TIntEmptyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_intmap_TIntEmptyEnumerator),(BBClass*)&brl_map_intmap_TIntNodeEnumerator));
	}
	struct brl_map_intmap_TIntMapEnumerator_obj* bbt_mapenum=(struct brl_map_intmap_TIntMapEnumerator_obj*)(struct brl_map_intmap_TIntMapEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_intmap_TIntMapEnumerator);
	bbt_mapenum->_brl_map_intmap_tintmapenumerator__enumerator =(struct brl_map_intmap_TIntNodeEnumerator_obj*)bbt_nodeenum;
	bbt_nodeenum->_brl_map_intmap_tintnodeenumerator__map =(struct brl_map_intmap_TIntMap_obj*)o;
	return (struct brl_map_intmap_TIntMapEnumerator_obj*)bbt_mapenum;
}
struct brl_map_intmap_TIntMapEnumerator_obj* _brl_map_intmap_TIntMap_Values(struct brl_map_intmap_TIntMap_obj* o){
	struct brl_map_intmap_TIntNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_intmap_TIntNodeEnumerator_obj*)(&bbNullObject);
	if(!(((struct brl_map_intmap_TIntMap_obj*)o)->clas->m_IsEmpty((struct brl_map_intmap_TIntMap_obj*)o)!=0)){
		bbt_nodeenum=(struct brl_map_intmap_TIntNodeEnumerator_obj*)((struct brl_map_intmap_TIntNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_intmap_TIntValueEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_intmap_TIntValueEnumerator),(BBClass*)&brl_map_intmap_TIntNodeEnumerator));
		bbt_nodeenum->_brl_map_intmap_tintnodeenumerator__node =(struct brl_map_intmap_TIntNode_obj*)((struct brl_map_intmap_TIntMap_obj*)o)->clas->m__FirstNode((struct brl_map_intmap_TIntMap_obj*)o);
	}else{
		bbt_nodeenum=(struct brl_map_intmap_TIntNodeEnumerator_obj*)((struct brl_map_intmap_TIntNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_intmap_TIntEmptyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_intmap_TIntEmptyEnumerator),(BBClass*)&brl_map_intmap_TIntNodeEnumerator));
	}
	struct brl_map_intmap_TIntMapEnumerator_obj* bbt_mapenum=(struct brl_map_intmap_TIntMapEnumerator_obj*)(struct brl_map_intmap_TIntMapEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_intmap_TIntMapEnumerator);
	bbt_mapenum->_brl_map_intmap_tintmapenumerator__enumerator =(struct brl_map_intmap_TIntNodeEnumerator_obj*)bbt_nodeenum;
	bbt_nodeenum->_brl_map_intmap_tintnodeenumerator__map =(struct brl_map_intmap_TIntMap_obj*)o;
	return (struct brl_map_intmap_TIntMapEnumerator_obj*)bbt_mapenum;
}
struct brl_map_intmap_TIntMap_obj* _brl_map_intmap_TIntMap_Copy(struct brl_map_intmap_TIntMap_obj* o){
	struct brl_map_intmap_TIntMap_obj* bbt_map=(struct brl_map_intmap_TIntMap_obj*)(struct brl_map_intmap_TIntMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_intmap_TIntMap);
	bmx_map_intmap_copy(((BBBYTE**)(&bbt_map->_brl_map_intmap_tintmap__root )),o->_brl_map_intmap_tintmap__root );
	return (struct brl_map_intmap_TIntMap_obj*)bbt_map;
}
struct brl_map_intmap_TIntNodeEnumerator_obj* _brl_map_intmap_TIntMap_ObjectEnumerator(struct brl_map_intmap_TIntMap_obj* o){
	struct brl_map_intmap_TIntNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_intmap_TIntNodeEnumerator_obj*)(&bbNullObject);
	if(!(((struct brl_map_intmap_TIntMap_obj*)o)->clas->m_IsEmpty((struct brl_map_intmap_TIntMap_obj*)o)!=0)){
		bbt_nodeenum=(struct brl_map_intmap_TIntNodeEnumerator_obj*)(struct brl_map_intmap_TIntNodeEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_intmap_TIntNodeEnumerator);
		bbt_nodeenum->_brl_map_intmap_tintnodeenumerator__node =(struct brl_map_intmap_TIntNode_obj*)((struct brl_map_intmap_TIntMap_obj*)o)->clas->m__FirstNode((struct brl_map_intmap_TIntMap_obj*)o);
		bbt_nodeenum->_brl_map_intmap_tintnodeenumerator__map =(struct brl_map_intmap_TIntMap_obj*)o;
	}else{
		bbt_nodeenum=(struct brl_map_intmap_TIntNodeEnumerator_obj*)((struct brl_map_intmap_TIntNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_intmap_TIntEmptyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_intmap_TIntEmptyEnumerator),(BBClass*)&brl_map_intmap_TIntNodeEnumerator));
	}
	return (struct brl_map_intmap_TIntNodeEnumerator_obj*)bbt_nodeenum;
}
BBOBJECT _brl_map_intmap_TIntMap__iget_i(struct brl_map_intmap_TIntMap_obj* o,BBINT bbt_key){
	return (BBOBJECT)bmx_map_intmap_valueforkey(bbt_key,((BBBYTE**)(&o->_brl_map_intmap_tintmap__root )));
}
void _brl_map_intmap_TIntMap__iset_iTObject(struct brl_map_intmap_TIntMap_obj* o,BBINT bbt_key,BBOBJECT bbt_value){
	bmx_map_intmap_insert(bbt_key,(BBOBJECT)bbt_value,((BBBYTE**)(&o->_brl_map_intmap_tintmap__root )));
}
struct BBDebugScope_15 brl_map_intmap_TIntMap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntMap",
	{
		{
			BBDEBUGDECL_FIELD,
			"_root",
			"*b",
			.field_offset=offsetof(struct brl_map_intmap_TIntMap_obj,_brl_map_intmap_tintmap__root)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_intmap_TIntMap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()",
			.var_address=(void*)&_brl_map_intmap_TIntMap_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsEmpty",
			"()i",
			.var_address=(void*)&_brl_map_intmap_TIntMap_IsEmpty
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Insert",
			"(i,:Object)",
			.var_address=(void*)&_brl_map_intmap_TIntMap_Insert_iTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Contains",
			"(i)i",
			.var_address=(void*)&_brl_map_intmap_TIntMap_Contains_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ValueForKey",
			"(i):Object",
			.var_address=(void*)&_brl_map_intmap_TIntMap_ValueForKey_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Remove",
			"(i)i",
			.var_address=(void*)&_brl_map_intmap_TIntMap_Remove_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_FirstNode",
			"():TIntNode",
			.var_address=(void*)&_brl_map_intmap_TIntMap__FirstNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Keys",
			"():TIntMapEnumerator",
			.var_address=(void*)&_brl_map_intmap_TIntMap_Keys
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Values",
			"():TIntMapEnumerator",
			.var_address=(void*)&_brl_map_intmap_TIntMap_Values
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Copy",
			"():TIntMap",
			.var_address=(void*)&_brl_map_intmap_TIntMap_Copy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TIntNodeEnumerator",
			.var_address=(void*)&_brl_map_intmap_TIntMap_ObjectEnumerator
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"[]",
			"(i):Object",
			.var_address=(void*)&_brl_map_intmap_TIntMap__iget_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"[]=",
			"(i,:Object)",
			.var_address=(void*)&_brl_map_intmap_TIntMap__iset_iTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_intmap_TIntMap brl_map_intmap_TIntMap={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_intmap_TIntMap_scope,
	sizeof(struct brl_map_intmap_TIntMap_obj),
	(void (*)(BBOBJECT))_brl_map_intmap_TIntMap_New,
	(void (*)(BBOBJECT))_brl_map_intmap_TIntMap_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_intmap_TIntMap_obj,_brl_map_intmap_tintmap__root) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_map_intmap_TIntMap_Clear
	,_brl_map_intmap_TIntMap_IsEmpty
	,_brl_map_intmap_TIntMap_Insert_iTObject
	,_brl_map_intmap_TIntMap_Contains_i
	,_brl_map_intmap_TIntMap_ValueForKey_i
	,_brl_map_intmap_TIntMap_Remove_i
	,_brl_map_intmap_TIntMap__FirstNode
	,_brl_map_intmap_TIntMap_Keys
	,_brl_map_intmap_TIntMap_Values
	,_brl_map_intmap_TIntMap_Copy
	,_brl_map_intmap_TIntMap_ObjectEnumerator
	,_brl_map_intmap_TIntMap__iget_i
	,_brl_map_intmap_TIntMap__iset_iTObject
};

void _brl_map_intmap_TIntNode_New(struct brl_map_intmap_TIntNode_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_intmap_TIntNode;
	o->_brl_map_intmap_tintnode__root = 0;
	o->_brl_map_intmap_tintnode__nodeptr = 0;
	o->_brl_map_intmap_tintnode__nextnode = 0;
}
BBINT _brl_map_intmap_TIntNode_Key(struct brl_map_intmap_TIntNode_obj* o){
	return bmx_map_intmap_key(o->_brl_map_intmap_tintnode__nodeptr );
}
BBOBJECT _brl_map_intmap_TIntNode_Value(struct brl_map_intmap_TIntNode_obj* o){
	return (BBOBJECT)bmx_map_intmap_value(o->_brl_map_intmap_tintnode__nodeptr );
}
BBINT _brl_map_intmap_TIntNode_HasNext(struct brl_map_intmap_TIntNode_obj* o){
	return bmx_map_intmap_hasnext(o->_brl_map_intmap_tintnode__nodeptr ,o->_brl_map_intmap_tintnode__root );
}
struct brl_map_intmap_TIntNode_obj* _brl_map_intmap_TIntNode_NextNode(struct brl_map_intmap_TIntNode_obj* o){
	if(!(o->_brl_map_intmap_tintnode__nodeptr )){
		o->_brl_map_intmap_tintnode__nodeptr =bmx_map_intmap_firstnode(o->_brl_map_intmap_tintnode__root );
	}else{
		o->_brl_map_intmap_tintnode__nodeptr =o->_brl_map_intmap_tintnode__nextnode ;
	}
	if(((struct brl_map_intmap_TIntNode_obj*)o)->clas->m_HasNext((struct brl_map_intmap_TIntNode_obj*)o)!=0){
		o->_brl_map_intmap_tintnode__nextnode =bmx_map_intmap_nextnode(o->_brl_map_intmap_tintnode__nodeptr );
	}
	return (struct brl_map_intmap_TIntNode_obj*)o;
}
void _brl_map_intmap_TIntNode_Remove(struct brl_map_intmap_TIntNode_obj* o){
}
struct BBDebugScope_9 brl_map_intmap_TIntNode_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntNode",
	{
		{
			BBDEBUGDECL_FIELD,
			"_root",
			"*b",
			.field_offset=offsetof(struct brl_map_intmap_TIntNode_obj,_brl_map_intmap_tintnode__root)
		},
		{
			BBDEBUGDECL_FIELD,
			"_nodePtr",
			"*b",
			.field_offset=offsetof(struct brl_map_intmap_TIntNode_obj,_brl_map_intmap_tintnode__nodeptr)
		},
		{
			BBDEBUGDECL_FIELD,
			"_nextNode",
			"*b",
			.field_offset=offsetof(struct brl_map_intmap_TIntNode_obj,_brl_map_intmap_tintnode__nextnode)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_intmap_TIntNode_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Key",
			"()i",
			.var_address=(void*)&_brl_map_intmap_TIntNode_Key
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Value",
			"():Object",
			.var_address=(void*)&_brl_map_intmap_TIntNode_Value
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_intmap_TIntNode_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextNode",
			"():TIntNode",
			.var_address=(void*)&_brl_map_intmap_TIntNode_NextNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Remove",
			"()",
			.var_address=(void*)&_brl_map_intmap_TIntNode_Remove
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_intmap_TIntNode brl_map_intmap_TIntNode={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_intmap_TIntNode_scope,
	sizeof(struct brl_map_intmap_TIntNode_obj),
	(void (*)(BBOBJECT))_brl_map_intmap_TIntNode_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_intmap_TIntNode_obj,_brl_map_intmap_tintnode__nextnode) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_map_intmap_TIntNode_Key
	,_brl_map_intmap_TIntNode_Value
	,_brl_map_intmap_TIntNode_HasNext
	,_brl_map_intmap_TIntNode_NextNode
	,_brl_map_intmap_TIntNode_Remove
};

void _brl_map_intmap_TIntKey_New(struct brl_map_intmap_TIntKey_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_intmap_TIntKey;
	o->_brl_map_intmap_tintkey_value = 0;
}
struct BBDebugScope_2 brl_map_intmap_TIntKey_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntKey",
	{
		{
			BBDEBUGDECL_FIELD,
			"value",
			"i",
			.field_offset=offsetof(struct brl_map_intmap_TIntKey_obj,_brl_map_intmap_tintkey_value)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_intmap_TIntKey_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_intmap_TIntKey brl_map_intmap_TIntKey={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_intmap_TIntKey_scope,
	sizeof(struct brl_map_intmap_TIntKey_obj),
	(void (*)(BBOBJECT))_brl_map_intmap_TIntKey_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_intmap_TIntKey_obj,_brl_map_intmap_tintkey_value) - sizeof(void*) + sizeof(BBINT)
	,0
};

void _brl_map_intmap_TIntNodeEnumerator_New(struct brl_map_intmap_TIntNodeEnumerator_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_intmap_TIntNodeEnumerator;
	o->_brl_map_intmap_tintnodeenumerator__node = (struct brl_map_intmap_TIntNode_obj*)(&bbNullObject);
	o->_brl_map_intmap_tintnodeenumerator__map = (struct brl_map_intmap_TIntMap_obj*)(&bbNullObject);
}
BBINT _brl_map_intmap_TIntNodeEnumerator_HasNext(struct brl_map_intmap_TIntNodeEnumerator_obj* o){
	BBINT bbt_has=(o->_brl_map_intmap_tintnodeenumerator__node )->clas->m_HasNext((struct brl_map_intmap_TIntNode_obj*)o->_brl_map_intmap_tintnodeenumerator__node );
	if(!(bbt_has!=0)){
		o->_brl_map_intmap_tintnodeenumerator__map =(struct brl_map_intmap_TIntMap_obj*)&bbNullObject;
	}
	return bbt_has;
}
BBOBJECT _brl_map_intmap_TIntNodeEnumerator_NextObject(struct brl_map_intmap_TIntNodeEnumerator_obj* o){
	struct brl_map_intmap_TIntNode_obj* bbt_node=(struct brl_map_intmap_TIntNode_obj*)o->_brl_map_intmap_tintnodeenumerator__node ;
	o->_brl_map_intmap_tintnodeenumerator__node =(struct brl_map_intmap_TIntNode_obj*)(o->_brl_map_intmap_tintnodeenumerator__node )->clas->m_NextNode((struct brl_map_intmap_TIntNode_obj*)o->_brl_map_intmap_tintnodeenumerator__node );
	return (BBOBJECT)bbt_node;
}
struct BBDebugScope_5 brl_map_intmap_TIntNodeEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntNodeEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_node",
			":TIntNode",
			.field_offset=offsetof(struct brl_map_intmap_TIntNodeEnumerator_obj,_brl_map_intmap_tintnodeenumerator__node)
		},
		{
			BBDEBUGDECL_FIELD,
			"_map",
			":TIntMap",
			.field_offset=offsetof(struct brl_map_intmap_TIntNodeEnumerator_obj,_brl_map_intmap_tintnodeenumerator__map)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_intmap_TIntNodeEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_intmap_TIntNodeEnumerator_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_intmap_TIntNodeEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_intmap_TIntNodeEnumerator brl_map_intmap_TIntNodeEnumerator={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_intmap_TIntNodeEnumerator_scope,
	sizeof(struct brl_map_intmap_TIntNodeEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_intmap_TIntNodeEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_intmap_TIntNodeEnumerator_obj,_brl_map_intmap_tintnodeenumerator__map) - sizeof(void*) + sizeof(struct brl_map_intmap_TIntMap_obj*)
	,0
	,_brl_map_intmap_TIntNodeEnumerator_HasNext
	,_brl_map_intmap_TIntNodeEnumerator_NextObject
};

void _brl_map_intmap_TIntKeyEnumerator_New(struct brl_map_intmap_TIntKeyEnumerator_obj* o) {
	_brl_map_intmap_TIntNodeEnumerator_New((struct brl_map_intmap_TIntNodeEnumerator_obj*)o);
	o->clas = &brl_map_intmap_TIntKeyEnumerator;
	o->_brl_map_intmap_tintkeyenumerator__key = (struct brl_map_intmap_TIntKey_obj*)(struct brl_map_intmap_TIntKey_obj*)bbObjectAtomicNew((BBClass *)&brl_map_intmap_TIntKey);
}
BBOBJECT _brl_map_intmap_TIntKeyEnumerator_NextObject(struct brl_map_intmap_TIntKeyEnumerator_obj* o){
	struct brl_map_intmap_TIntNode_obj* bbt_node=(struct brl_map_intmap_TIntNode_obj*)o->_brl_map_intmap_tintnodeenumerator__node ;
	o->_brl_map_intmap_tintnodeenumerator__node =(struct brl_map_intmap_TIntNode_obj*)(o->_brl_map_intmap_tintnodeenumerator__node )->clas->m_NextNode((struct brl_map_intmap_TIntNode_obj*)o->_brl_map_intmap_tintnodeenumerator__node );
	o->_brl_map_intmap_tintkeyenumerator__key ->_brl_map_intmap_tintkey_value =(bbt_node)->clas->m_Key((struct brl_map_intmap_TIntNode_obj*)bbt_node);
	return (BBOBJECT)o->_brl_map_intmap_tintkeyenumerator__key ;
}
struct BBDebugScope_3 brl_map_intmap_TIntKeyEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntKeyEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_key",
			":TIntKey",
			.field_offset=offsetof(struct brl_map_intmap_TIntKeyEnumerator_obj,_brl_map_intmap_tintkeyenumerator__key)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_intmap_TIntKeyEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_intmap_TIntKeyEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_intmap_TIntKeyEnumerator brl_map_intmap_TIntKeyEnumerator={
	&brl_map_intmap_TIntNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_intmap_TIntKeyEnumerator_scope,
	sizeof(struct brl_map_intmap_TIntKeyEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_intmap_TIntKeyEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_intmap_TIntKeyEnumerator_obj,_brl_map_intmap_tintkeyenumerator__key) - sizeof(void*) + sizeof(struct brl_map_intmap_TIntKey_obj*)
	,0
	,_brl_map_intmap_TIntNodeEnumerator_HasNext
	,_brl_map_intmap_TIntKeyEnumerator_NextObject
};

void _brl_map_intmap_TIntValueEnumerator_New(struct brl_map_intmap_TIntValueEnumerator_obj* o) {
	_brl_map_intmap_TIntNodeEnumerator_New((struct brl_map_intmap_TIntNodeEnumerator_obj*)o);
	o->clas = &brl_map_intmap_TIntValueEnumerator;
}
BBOBJECT _brl_map_intmap_TIntValueEnumerator_NextObject(struct brl_map_intmap_TIntValueEnumerator_obj* o){
	struct brl_map_intmap_TIntNode_obj* bbt_node=(struct brl_map_intmap_TIntNode_obj*)o->_brl_map_intmap_tintnodeenumerator__node ;
	o->_brl_map_intmap_tintnodeenumerator__node =(struct brl_map_intmap_TIntNode_obj*)(o->_brl_map_intmap_tintnodeenumerator__node )->clas->m_NextNode((struct brl_map_intmap_TIntNode_obj*)o->_brl_map_intmap_tintnodeenumerator__node );
	return (BBOBJECT)(bbt_node)->clas->m_Value((struct brl_map_intmap_TIntNode_obj*)bbt_node);
}
struct BBDebugScope_2 brl_map_intmap_TIntValueEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntValueEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_intmap_TIntValueEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_intmap_TIntValueEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_intmap_TIntValueEnumerator brl_map_intmap_TIntValueEnumerator={
	&brl_map_intmap_TIntNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_intmap_TIntValueEnumerator_scope,
	sizeof(struct brl_map_intmap_TIntValueEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_intmap_TIntValueEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_map_intmap_TIntNodeEnumerator_HasNext
	,_brl_map_intmap_TIntValueEnumerator_NextObject
};

void _brl_map_intmap_TIntMapEnumerator_New(struct brl_map_intmap_TIntMapEnumerator_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_intmap_TIntMapEnumerator;
	o->_brl_map_intmap_tintmapenumerator__enumerator = (struct brl_map_intmap_TIntNodeEnumerator_obj*)(&bbNullObject);
}
struct brl_map_intmap_TIntNodeEnumerator_obj* _brl_map_intmap_TIntMapEnumerator_ObjectEnumerator(struct brl_map_intmap_TIntMapEnumerator_obj* o){
	return (struct brl_map_intmap_TIntNodeEnumerator_obj*)o->_brl_map_intmap_tintmapenumerator__enumerator ;
}
struct BBDebugScope_3 brl_map_intmap_TIntMapEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntMapEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_enumerator",
			":TIntNodeEnumerator",
			.field_offset=offsetof(struct brl_map_intmap_TIntMapEnumerator_obj,_brl_map_intmap_tintmapenumerator__enumerator)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_intmap_TIntMapEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TIntNodeEnumerator",
			.var_address=(void*)&_brl_map_intmap_TIntMapEnumerator_ObjectEnumerator
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_intmap_TIntMapEnumerator brl_map_intmap_TIntMapEnumerator={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_intmap_TIntMapEnumerator_scope,
	sizeof(struct brl_map_intmap_TIntMapEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_intmap_TIntMapEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_intmap_TIntMapEnumerator_obj,_brl_map_intmap_tintmapenumerator__enumerator) - sizeof(void*) + sizeof(struct brl_map_intmap_TIntNodeEnumerator_obj*)
	,0
	,_brl_map_intmap_TIntMapEnumerator_ObjectEnumerator
};

void _brl_map_intmap_TIntEmptyEnumerator_New(struct brl_map_intmap_TIntEmptyEnumerator_obj* o) {
	_brl_map_intmap_TIntNodeEnumerator_New((struct brl_map_intmap_TIntNodeEnumerator_obj*)o);
	o->clas = &brl_map_intmap_TIntEmptyEnumerator;
}
BBINT _brl_map_intmap_TIntEmptyEnumerator_HasNext(struct brl_map_intmap_TIntEmptyEnumerator_obj* o){
	o->_brl_map_intmap_tintnodeenumerator__map =(struct brl_map_intmap_TIntMap_obj*)&bbNullObject;
	return 0;
}
struct BBDebugScope_2 brl_map_intmap_TIntEmptyEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntEmptyEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_intmap_TIntEmptyEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_intmap_TIntEmptyEnumerator_HasNext
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_intmap_TIntEmptyEnumerator brl_map_intmap_TIntEmptyEnumerator={
	&brl_map_intmap_TIntNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_intmap_TIntEmptyEnumerator_scope,
	sizeof(struct brl_map_intmap_TIntEmptyEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_intmap_TIntEmptyEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_map_intmap_TIntEmptyEnumerator_HasNext
	,_brl_map_intmap_TIntNodeEnumerator_NextObject
};

static int _bb_brl_map_intmap_inited = 0;
int _bb_brl_map_intmap(){
	if (!_bb_brl_map_intmap_inited) {
		_bb_brl_map_intmap_inited = 1;
		__bb_brl_blitz_blitz();
		bbObjectRegisterType((BBCLASS)&brl_map_intmap_TIntMap);
		bbObjectRegisterType((BBCLASS)&brl_map_intmap_TIntNode);
		bbObjectRegisterType((BBCLASS)&brl_map_intmap_TIntKey);
		bbObjectRegisterType((BBCLASS)&brl_map_intmap_TIntNodeEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_intmap_TIntKeyEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_intmap_TIntValueEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_intmap_TIntMapEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_intmap_TIntEmptyEnumerator);
		return 0;
	}
	return 0;
}