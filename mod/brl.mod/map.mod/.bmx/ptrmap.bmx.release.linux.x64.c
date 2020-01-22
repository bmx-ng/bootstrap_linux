#include "ptrmap.bmx.release.linux.x64.h"
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_15{int kind; const char *name; BBDebugDecl decls[16]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
void _brl_map_ptrmap_TPtrMap_New(struct brl_map_ptrmap_TPtrMap_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_ptrmap_TPtrMap;
	o->_brl_map_ptrmap_tptrmap__root = 0;
}
void _brl_map_ptrmap_TPtrMap_Delete(struct brl_map_ptrmap_TPtrMap_obj* o) {
	((struct brl_map_ptrmap_TPtrMap_obj*)o)->clas->m_Clear((struct brl_map_ptrmap_TPtrMap_obj*)o);
	bbObjectDtor((BBOBJECT)o);
}
void _brl_map_ptrmap_TPtrMap_Clear(struct brl_map_ptrmap_TPtrMap_obj* o){
	bmx_map_ptrmap_clear((BBBYTE**)(&o->_brl_map_ptrmap_tptrmap__root ));
}
BBINT _brl_map_ptrmap_TPtrMap_IsEmpty(struct brl_map_ptrmap_TPtrMap_obj* o){
	return bmx_map_ptrmap_isempty((BBBYTE**)(&o->_brl_map_ptrmap_tptrmap__root ));
}
void _brl_map_ptrmap_TPtrMap_Insert_pbTObject(struct brl_map_ptrmap_TPtrMap_obj* o,BBBYTE* bbt_key,BBOBJECT bbt_value){
	bmx_map_ptrmap_insert(bbt_key,(BBOBJECT)bbt_value,((BBBYTE**)(&o->_brl_map_ptrmap_tptrmap__root )));
}
BBINT _brl_map_ptrmap_TPtrMap_Contains_pb(struct brl_map_ptrmap_TPtrMap_obj* o,BBBYTE* bbt_key){
	return bmx_map_ptrmap_contains(bbt_key,((BBBYTE**)(&o->_brl_map_ptrmap_tptrmap__root )));
}
BBOBJECT _brl_map_ptrmap_TPtrMap_ValueForKey_pb(struct brl_map_ptrmap_TPtrMap_obj* o,BBBYTE* bbt_key){
	return (BBOBJECT)bmx_map_ptrmap_valueforkey(bbt_key,((BBBYTE**)(&o->_brl_map_ptrmap_tptrmap__root )));
}
BBINT _brl_map_ptrmap_TPtrMap_Remove_pb(struct brl_map_ptrmap_TPtrMap_obj* o,BBBYTE* bbt_key){
	return bmx_map_ptrmap_remove(bbt_key,((BBBYTE**)(&o->_brl_map_ptrmap_tptrmap__root )));
}
struct brl_map_ptrmap_TPtrNode_obj* _brl_map_ptrmap_TPtrMap__FirstNode(struct brl_map_ptrmap_TPtrMap_obj* o){
	if(!(((struct brl_map_ptrmap_TPtrMap_obj*)o)->clas->m_IsEmpty((struct brl_map_ptrmap_TPtrMap_obj*)o)!=0)){
		struct brl_map_ptrmap_TPtrNode_obj* bbt_node=(struct brl_map_ptrmap_TPtrNode_obj*)(struct brl_map_ptrmap_TPtrNode_obj*)bbObjectAtomicNew((BBClass *)&brl_map_ptrmap_TPtrNode);
		bbt_node->_brl_map_ptrmap_tptrnode__root =o->_brl_map_ptrmap_tptrmap__root ;
		return (struct brl_map_ptrmap_TPtrNode_obj*)bbt_node;
	}else{
		return (struct brl_map_ptrmap_TPtrNode_obj*)&bbNullObject;
	}
}
struct brl_map_ptrmap_TPtrMapEnumerator_obj* _brl_map_ptrmap_TPtrMap_Keys(struct brl_map_ptrmap_TPtrMap_obj* o){
	struct brl_map_ptrmap_TPtrNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)(&bbNullObject);
	if(!(((struct brl_map_ptrmap_TPtrMap_obj*)o)->clas->m_IsEmpty((struct brl_map_ptrmap_TPtrMap_obj*)o)!=0)){
		bbt_nodeenum=(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)((struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_ptrmap_TPtrKeyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_ptrmap_TPtrKeyEnumerator),(BBClass*)&brl_map_ptrmap_TPtrNodeEnumerator));
		bbt_nodeenum->_brl_map_ptrmap_tptrnodeenumerator__node =(struct brl_map_ptrmap_TPtrNode_obj*)((struct brl_map_ptrmap_TPtrMap_obj*)o)->clas->m__FirstNode((struct brl_map_ptrmap_TPtrMap_obj*)o);
	}else{
		bbt_nodeenum=(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)((struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_ptrmap_TPtrEmptyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_ptrmap_TPtrEmptyEnumerator),(BBClass*)&brl_map_ptrmap_TPtrNodeEnumerator));
	}
	struct brl_map_ptrmap_TPtrMapEnumerator_obj* bbt_mapenum=(struct brl_map_ptrmap_TPtrMapEnumerator_obj*)(struct brl_map_ptrmap_TPtrMapEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_ptrmap_TPtrMapEnumerator);
	bbt_mapenum->_brl_map_ptrmap_tptrmapenumerator__enumerator =(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)bbt_nodeenum;
	bbt_nodeenum->_brl_map_ptrmap_tptrnodeenumerator__map =(struct brl_map_ptrmap_TPtrMap_obj*)o;
	return (struct brl_map_ptrmap_TPtrMapEnumerator_obj*)bbt_mapenum;
}
struct brl_map_ptrmap_TPtrMapEnumerator_obj* _brl_map_ptrmap_TPtrMap_Values(struct brl_map_ptrmap_TPtrMap_obj* o){
	struct brl_map_ptrmap_TPtrNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)(&bbNullObject);
	if(!(((struct brl_map_ptrmap_TPtrMap_obj*)o)->clas->m_IsEmpty((struct brl_map_ptrmap_TPtrMap_obj*)o)!=0)){
		bbt_nodeenum=(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)((struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_ptrmap_TPtrValueEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_ptrmap_TPtrValueEnumerator),(BBClass*)&brl_map_ptrmap_TPtrNodeEnumerator));
		bbt_nodeenum->_brl_map_ptrmap_tptrnodeenumerator__node =(struct brl_map_ptrmap_TPtrNode_obj*)((struct brl_map_ptrmap_TPtrMap_obj*)o)->clas->m__FirstNode((struct brl_map_ptrmap_TPtrMap_obj*)o);
	}else{
		bbt_nodeenum=(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)((struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_ptrmap_TPtrEmptyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_ptrmap_TPtrEmptyEnumerator),(BBClass*)&brl_map_ptrmap_TPtrNodeEnumerator));
	}
	struct brl_map_ptrmap_TPtrMapEnumerator_obj* bbt_mapenum=(struct brl_map_ptrmap_TPtrMapEnumerator_obj*)(struct brl_map_ptrmap_TPtrMapEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_ptrmap_TPtrMapEnumerator);
	bbt_mapenum->_brl_map_ptrmap_tptrmapenumerator__enumerator =(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)bbt_nodeenum;
	bbt_nodeenum->_brl_map_ptrmap_tptrnodeenumerator__map =(struct brl_map_ptrmap_TPtrMap_obj*)o;
	return (struct brl_map_ptrmap_TPtrMapEnumerator_obj*)bbt_mapenum;
}
struct brl_map_ptrmap_TPtrMap_obj* _brl_map_ptrmap_TPtrMap_Copy(struct brl_map_ptrmap_TPtrMap_obj* o){
	struct brl_map_ptrmap_TPtrMap_obj* bbt_map=(struct brl_map_ptrmap_TPtrMap_obj*)(struct brl_map_ptrmap_TPtrMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_ptrmap_TPtrMap);
	bmx_map_ptrmap_copy(((BBBYTE**)(&bbt_map->_brl_map_ptrmap_tptrmap__root )),o->_brl_map_ptrmap_tptrmap__root );
	return (struct brl_map_ptrmap_TPtrMap_obj*)bbt_map;
}
struct brl_map_ptrmap_TPtrNodeEnumerator_obj* _brl_map_ptrmap_TPtrMap_ObjectEnumerator(struct brl_map_ptrmap_TPtrMap_obj* o){
	struct brl_map_ptrmap_TPtrNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)(&bbNullObject);
	if(!(((struct brl_map_ptrmap_TPtrMap_obj*)o)->clas->m_IsEmpty((struct brl_map_ptrmap_TPtrMap_obj*)o)!=0)){
		bbt_nodeenum=(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_ptrmap_TPtrNodeEnumerator);
		bbt_nodeenum->_brl_map_ptrmap_tptrnodeenumerator__node =(struct brl_map_ptrmap_TPtrNode_obj*)((struct brl_map_ptrmap_TPtrMap_obj*)o)->clas->m__FirstNode((struct brl_map_ptrmap_TPtrMap_obj*)o);
		bbt_nodeenum->_brl_map_ptrmap_tptrnodeenumerator__map =(struct brl_map_ptrmap_TPtrMap_obj*)o;
	}else{
		bbt_nodeenum=(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)((struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_ptrmap_TPtrEmptyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_ptrmap_TPtrEmptyEnumerator),(BBClass*)&brl_map_ptrmap_TPtrNodeEnumerator));
	}
	return (struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)bbt_nodeenum;
}
BBOBJECT _brl_map_ptrmap_TPtrMap__iget_pb(struct brl_map_ptrmap_TPtrMap_obj* o,BBBYTE* bbt_key){
	return (BBOBJECT)bmx_map_ptrmap_valueforkey(bbt_key,((BBBYTE**)(&o->_brl_map_ptrmap_tptrmap__root )));
}
void _brl_map_ptrmap_TPtrMap__iset_pbTObject(struct brl_map_ptrmap_TPtrMap_obj* o,BBBYTE* bbt_key,BBOBJECT bbt_value){
	bmx_map_ptrmap_insert(bbt_key,(BBOBJECT)bbt_value,((BBBYTE**)(&o->_brl_map_ptrmap_tptrmap__root )));
}
struct BBDebugScope_15 brl_map_ptrmap_TPtrMap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TPtrMap",
	{
		{
			BBDEBUGDECL_FIELD,
			"_root",
			"*b",
			.field_offset=offsetof(struct brl_map_ptrmap_TPtrMap_obj,_brl_map_ptrmap_tptrmap__root)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsEmpty",
			"()i",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap_IsEmpty
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Insert",
			"(*b,:Object)",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap_Insert_pbTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Contains",
			"(*b)i",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap_Contains_pb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ValueForKey",
			"(*b):Object",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap_ValueForKey_pb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Remove",
			"(*b)i",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap_Remove_pb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_FirstNode",
			"():TPtrNode",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap__FirstNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Keys",
			"():TPtrMapEnumerator",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap_Keys
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Values",
			"():TPtrMapEnumerator",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap_Values
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Copy",
			"():TPtrMap",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap_Copy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TPtrNodeEnumerator",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap_ObjectEnumerator
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"[]",
			"(*b):Object",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap__iget_pb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"[]=",
			"(*b,:Object)",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMap__iset_pbTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_ptrmap_TPtrMap brl_map_ptrmap_TPtrMap={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_ptrmap_TPtrMap_scope,
	sizeof(struct brl_map_ptrmap_TPtrMap_obj),
	(void (*)(BBOBJECT))_brl_map_ptrmap_TPtrMap_New,
	(void (*)(BBOBJECT))_brl_map_ptrmap_TPtrMap_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_ptrmap_TPtrMap_obj,_brl_map_ptrmap_tptrmap__root) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_map_ptrmap_TPtrMap_Clear
	,_brl_map_ptrmap_TPtrMap_IsEmpty
	,_brl_map_ptrmap_TPtrMap_Insert_pbTObject
	,_brl_map_ptrmap_TPtrMap_Contains_pb
	,_brl_map_ptrmap_TPtrMap_ValueForKey_pb
	,_brl_map_ptrmap_TPtrMap_Remove_pb
	,_brl_map_ptrmap_TPtrMap__FirstNode
	,_brl_map_ptrmap_TPtrMap_Keys
	,_brl_map_ptrmap_TPtrMap_Values
	,_brl_map_ptrmap_TPtrMap_Copy
	,_brl_map_ptrmap_TPtrMap_ObjectEnumerator
	,_brl_map_ptrmap_TPtrMap__iget_pb
	,_brl_map_ptrmap_TPtrMap__iset_pbTObject
};

void _brl_map_ptrmap_TPtrNode_New(struct brl_map_ptrmap_TPtrNode_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_ptrmap_TPtrNode;
	o->_brl_map_ptrmap_tptrnode__root = 0;
	o->_brl_map_ptrmap_tptrnode__nodeptr = 0;
}
BBBYTE* _brl_map_ptrmap_TPtrNode_Key(struct brl_map_ptrmap_TPtrNode_obj* o){
	return bmx_map_ptrmap_key(o->_brl_map_ptrmap_tptrnode__nodeptr );
}
BBOBJECT _brl_map_ptrmap_TPtrNode_Value(struct brl_map_ptrmap_TPtrNode_obj* o){
	return (BBOBJECT)bmx_map_ptrmap_value(o->_brl_map_ptrmap_tptrnode__nodeptr );
}
BBINT _brl_map_ptrmap_TPtrNode_HasNext(struct brl_map_ptrmap_TPtrNode_obj* o){
	return bmx_map_ptrmap_hasnext(o->_brl_map_ptrmap_tptrnode__nodeptr ,o->_brl_map_ptrmap_tptrnode__root );
}
struct brl_map_ptrmap_TPtrNode_obj* _brl_map_ptrmap_TPtrNode_NextNode(struct brl_map_ptrmap_TPtrNode_obj* o){
	if(!(o->_brl_map_ptrmap_tptrnode__nodeptr )){
		o->_brl_map_ptrmap_tptrnode__nodeptr =bmx_map_ptrmap_firstnode(o->_brl_map_ptrmap_tptrnode__root );
	}else{
		o->_brl_map_ptrmap_tptrnode__nodeptr =bmx_map_ptrmap_nextnode(o->_brl_map_ptrmap_tptrnode__nodeptr );
	}
	return (struct brl_map_ptrmap_TPtrNode_obj*)o;
}
struct BBDebugScope_7 brl_map_ptrmap_TPtrNode_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TPtrNode",
	{
		{
			BBDEBUGDECL_FIELD,
			"_root",
			"*b",
			.field_offset=offsetof(struct brl_map_ptrmap_TPtrNode_obj,_brl_map_ptrmap_tptrnode__root)
		},
		{
			BBDEBUGDECL_FIELD,
			"_nodePtr",
			"*b",
			.field_offset=offsetof(struct brl_map_ptrmap_TPtrNode_obj,_brl_map_ptrmap_tptrnode__nodeptr)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_ptrmap_TPtrNode_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Key",
			"()*b",
			.var_address=(void*)&_brl_map_ptrmap_TPtrNode_Key
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Value",
			"():Object",
			.var_address=(void*)&_brl_map_ptrmap_TPtrNode_Value
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_ptrmap_TPtrNode_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextNode",
			"():TPtrNode",
			.var_address=(void*)&_brl_map_ptrmap_TPtrNode_NextNode
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_ptrmap_TPtrNode brl_map_ptrmap_TPtrNode={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_ptrmap_TPtrNode_scope,
	sizeof(struct brl_map_ptrmap_TPtrNode_obj),
	(void (*)(BBOBJECT))_brl_map_ptrmap_TPtrNode_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_ptrmap_TPtrNode_obj,_brl_map_ptrmap_tptrnode__nodeptr) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_map_ptrmap_TPtrNode_Key
	,_brl_map_ptrmap_TPtrNode_Value
	,_brl_map_ptrmap_TPtrNode_HasNext
	,_brl_map_ptrmap_TPtrNode_NextNode
};

void _brl_map_ptrmap_TPtrKey_New(struct brl_map_ptrmap_TPtrKey_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_ptrmap_TPtrKey;
	o->_brl_map_ptrmap_tptrkey_value = 0;
}
struct BBDebugScope_2 brl_map_ptrmap_TPtrKey_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TPtrKey",
	{
		{
			BBDEBUGDECL_FIELD,
			"value",
			"*b",
			.field_offset=offsetof(struct brl_map_ptrmap_TPtrKey_obj,_brl_map_ptrmap_tptrkey_value)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_ptrmap_TPtrKey_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_ptrmap_TPtrKey brl_map_ptrmap_TPtrKey={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_ptrmap_TPtrKey_scope,
	sizeof(struct brl_map_ptrmap_TPtrKey_obj),
	(void (*)(BBOBJECT))_brl_map_ptrmap_TPtrKey_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_ptrmap_TPtrKey_obj,_brl_map_ptrmap_tptrkey_value) - sizeof(void*) + sizeof(BBBYTE*)
	,0
};

void _brl_map_ptrmap_TPtrNodeEnumerator_New(struct brl_map_ptrmap_TPtrNodeEnumerator_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_ptrmap_TPtrNodeEnumerator;
	o->_brl_map_ptrmap_tptrnodeenumerator__node = (struct brl_map_ptrmap_TPtrNode_obj*)(&bbNullObject);
	o->_brl_map_ptrmap_tptrnodeenumerator__map = (struct brl_map_ptrmap_TPtrMap_obj*)(&bbNullObject);
}
BBINT _brl_map_ptrmap_TPtrNodeEnumerator_HasNext(struct brl_map_ptrmap_TPtrNodeEnumerator_obj* o){
	BBINT bbt_has=(o->_brl_map_ptrmap_tptrnodeenumerator__node )->clas->m_HasNext((struct brl_map_ptrmap_TPtrNode_obj*)o->_brl_map_ptrmap_tptrnodeenumerator__node );
	if(!(bbt_has!=0)){
		o->_brl_map_ptrmap_tptrnodeenumerator__map =(struct brl_map_ptrmap_TPtrMap_obj*)&bbNullObject;
	}
	return bbt_has;
}
BBOBJECT _brl_map_ptrmap_TPtrNodeEnumerator_NextObject(struct brl_map_ptrmap_TPtrNodeEnumerator_obj* o){
	struct brl_map_ptrmap_TPtrNode_obj* bbt_node=(struct brl_map_ptrmap_TPtrNode_obj*)o->_brl_map_ptrmap_tptrnodeenumerator__node ;
	o->_brl_map_ptrmap_tptrnodeenumerator__node =(struct brl_map_ptrmap_TPtrNode_obj*)(o->_brl_map_ptrmap_tptrnodeenumerator__node )->clas->m_NextNode((struct brl_map_ptrmap_TPtrNode_obj*)o->_brl_map_ptrmap_tptrnodeenumerator__node );
	return (BBOBJECT)bbt_node;
}
struct BBDebugScope_5 brl_map_ptrmap_TPtrNodeEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TPtrNodeEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_node",
			":TPtrNode",
			.field_offset=offsetof(struct brl_map_ptrmap_TPtrNodeEnumerator_obj,_brl_map_ptrmap_tptrnodeenumerator__node)
		},
		{
			BBDEBUGDECL_FIELD,
			"_map",
			":TPtrMap",
			.field_offset=offsetof(struct brl_map_ptrmap_TPtrNodeEnumerator_obj,_brl_map_ptrmap_tptrnodeenumerator__map)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_ptrmap_TPtrNodeEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_ptrmap_TPtrNodeEnumerator_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_ptrmap_TPtrNodeEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_ptrmap_TPtrNodeEnumerator brl_map_ptrmap_TPtrNodeEnumerator={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_ptrmap_TPtrNodeEnumerator_scope,
	sizeof(struct brl_map_ptrmap_TPtrNodeEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_ptrmap_TPtrNodeEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_ptrmap_TPtrNodeEnumerator_obj,_brl_map_ptrmap_tptrnodeenumerator__map) - sizeof(void*) + sizeof(struct brl_map_ptrmap_TPtrMap_obj*)
	,0
	,_brl_map_ptrmap_TPtrNodeEnumerator_HasNext
	,_brl_map_ptrmap_TPtrNodeEnumerator_NextObject
};

void _brl_map_ptrmap_TPtrKeyEnumerator_New(struct brl_map_ptrmap_TPtrKeyEnumerator_obj* o) {
	_brl_map_ptrmap_TPtrNodeEnumerator_New((struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)o);
	o->clas = &brl_map_ptrmap_TPtrKeyEnumerator;
	o->_brl_map_ptrmap_tptrkeyenumerator__key = (struct brl_map_ptrmap_TPtrKey_obj*)(struct brl_map_ptrmap_TPtrKey_obj*)bbObjectAtomicNew((BBClass *)&brl_map_ptrmap_TPtrKey);
}
BBOBJECT _brl_map_ptrmap_TPtrKeyEnumerator_NextObject(struct brl_map_ptrmap_TPtrKeyEnumerator_obj* o){
	struct brl_map_ptrmap_TPtrNode_obj* bbt_node=(struct brl_map_ptrmap_TPtrNode_obj*)o->_brl_map_ptrmap_tptrnodeenumerator__node ;
	o->_brl_map_ptrmap_tptrnodeenumerator__node =(struct brl_map_ptrmap_TPtrNode_obj*)(o->_brl_map_ptrmap_tptrnodeenumerator__node )->clas->m_NextNode((struct brl_map_ptrmap_TPtrNode_obj*)o->_brl_map_ptrmap_tptrnodeenumerator__node );
	o->_brl_map_ptrmap_tptrkeyenumerator__key ->_brl_map_ptrmap_tptrkey_value =(bbt_node)->clas->m_Key((struct brl_map_ptrmap_TPtrNode_obj*)bbt_node);
	return (BBOBJECT)o->_brl_map_ptrmap_tptrkeyenumerator__key ;
}
struct BBDebugScope_3 brl_map_ptrmap_TPtrKeyEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TPtrKeyEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_key",
			":TPtrKey",
			.field_offset=offsetof(struct brl_map_ptrmap_TPtrKeyEnumerator_obj,_brl_map_ptrmap_tptrkeyenumerator__key)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_ptrmap_TPtrKeyEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_ptrmap_TPtrKeyEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_ptrmap_TPtrKeyEnumerator brl_map_ptrmap_TPtrKeyEnumerator={
	&brl_map_ptrmap_TPtrNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_ptrmap_TPtrKeyEnumerator_scope,
	sizeof(struct brl_map_ptrmap_TPtrKeyEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_ptrmap_TPtrKeyEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_ptrmap_TPtrKeyEnumerator_obj,_brl_map_ptrmap_tptrkeyenumerator__key) - sizeof(void*) + sizeof(struct brl_map_ptrmap_TPtrKey_obj*)
	,0
	,_brl_map_ptrmap_TPtrNodeEnumerator_HasNext
	,_brl_map_ptrmap_TPtrKeyEnumerator_NextObject
};

void _brl_map_ptrmap_TPtrValueEnumerator_New(struct brl_map_ptrmap_TPtrValueEnumerator_obj* o) {
	_brl_map_ptrmap_TPtrNodeEnumerator_New((struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)o);
	o->clas = &brl_map_ptrmap_TPtrValueEnumerator;
}
BBOBJECT _brl_map_ptrmap_TPtrValueEnumerator_NextObject(struct brl_map_ptrmap_TPtrValueEnumerator_obj* o){
	struct brl_map_ptrmap_TPtrNode_obj* bbt_node=(struct brl_map_ptrmap_TPtrNode_obj*)o->_brl_map_ptrmap_tptrnodeenumerator__node ;
	o->_brl_map_ptrmap_tptrnodeenumerator__node =(struct brl_map_ptrmap_TPtrNode_obj*)(o->_brl_map_ptrmap_tptrnodeenumerator__node )->clas->m_NextNode((struct brl_map_ptrmap_TPtrNode_obj*)o->_brl_map_ptrmap_tptrnodeenumerator__node );
	return (BBOBJECT)(bbt_node)->clas->m_Value((struct brl_map_ptrmap_TPtrNode_obj*)bbt_node);
}
struct BBDebugScope_2 brl_map_ptrmap_TPtrValueEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TPtrValueEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_ptrmap_TPtrValueEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_ptrmap_TPtrValueEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_ptrmap_TPtrValueEnumerator brl_map_ptrmap_TPtrValueEnumerator={
	&brl_map_ptrmap_TPtrNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_ptrmap_TPtrValueEnumerator_scope,
	sizeof(struct brl_map_ptrmap_TPtrValueEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_ptrmap_TPtrValueEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_map_ptrmap_TPtrNodeEnumerator_HasNext
	,_brl_map_ptrmap_TPtrValueEnumerator_NextObject
};

void _brl_map_ptrmap_TPtrMapEnumerator_New(struct brl_map_ptrmap_TPtrMapEnumerator_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_ptrmap_TPtrMapEnumerator;
	o->_brl_map_ptrmap_tptrmapenumerator__enumerator = (struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)(&bbNullObject);
}
struct brl_map_ptrmap_TPtrNodeEnumerator_obj* _brl_map_ptrmap_TPtrMapEnumerator_ObjectEnumerator(struct brl_map_ptrmap_TPtrMapEnumerator_obj* o){
	return (struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)o->_brl_map_ptrmap_tptrmapenumerator__enumerator ;
}
struct BBDebugScope_3 brl_map_ptrmap_TPtrMapEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TPtrMapEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_enumerator",
			":TPtrNodeEnumerator",
			.field_offset=offsetof(struct brl_map_ptrmap_TPtrMapEnumerator_obj,_brl_map_ptrmap_tptrmapenumerator__enumerator)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMapEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TPtrNodeEnumerator",
			.var_address=(void*)&_brl_map_ptrmap_TPtrMapEnumerator_ObjectEnumerator
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_ptrmap_TPtrMapEnumerator brl_map_ptrmap_TPtrMapEnumerator={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_ptrmap_TPtrMapEnumerator_scope,
	sizeof(struct brl_map_ptrmap_TPtrMapEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_ptrmap_TPtrMapEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_ptrmap_TPtrMapEnumerator_obj,_brl_map_ptrmap_tptrmapenumerator__enumerator) - sizeof(void*) + sizeof(struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)
	,0
	,_brl_map_ptrmap_TPtrMapEnumerator_ObjectEnumerator
};

void _brl_map_ptrmap_TPtrEmptyEnumerator_New(struct brl_map_ptrmap_TPtrEmptyEnumerator_obj* o) {
	_brl_map_ptrmap_TPtrNodeEnumerator_New((struct brl_map_ptrmap_TPtrNodeEnumerator_obj*)o);
	o->clas = &brl_map_ptrmap_TPtrEmptyEnumerator;
}
BBINT _brl_map_ptrmap_TPtrEmptyEnumerator_HasNext(struct brl_map_ptrmap_TPtrEmptyEnumerator_obj* o){
	o->_brl_map_ptrmap_tptrnodeenumerator__map =(struct brl_map_ptrmap_TPtrMap_obj*)&bbNullObject;
	return 0;
}
struct BBDebugScope_2 brl_map_ptrmap_TPtrEmptyEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TPtrEmptyEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_ptrmap_TPtrEmptyEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_ptrmap_TPtrEmptyEnumerator_HasNext
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_ptrmap_TPtrEmptyEnumerator brl_map_ptrmap_TPtrEmptyEnumerator={
	&brl_map_ptrmap_TPtrNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_ptrmap_TPtrEmptyEnumerator_scope,
	sizeof(struct brl_map_ptrmap_TPtrEmptyEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_ptrmap_TPtrEmptyEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_map_ptrmap_TPtrEmptyEnumerator_HasNext
	,_brl_map_ptrmap_TPtrNodeEnumerator_NextObject
};

void _brl_map_ptrmap_TSynchronizedPtrMap_New_TTPtrMap(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o,struct brl_map_ptrmap_TPtrMap_obj* bbt_map) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_ptrmap_TSynchronizedPtrMap;
	o->_brl_map_ptrmap_tsynchronizedptrmap_map = (struct brl_map_ptrmap_TPtrMap_obj*)(&bbNullObject);
	o->_brl_map_ptrmap_tsynchronizedptrmap_mutex = (struct brl_threads_TMutex_obj*)brl_threads_TMutex_Create_TTMutex();
	o->_brl_map_ptrmap_tsynchronizedptrmap_map =(struct brl_map_ptrmap_TPtrMap_obj*)bbt_map;
}
struct brl_map_ptrmap_TSynchronizedPtrMap_obj* _brl_map_ptrmap_TSynchronizedPtrMap_New_TTPtrMap_ObjectNew(BBClass * clas,struct brl_map_ptrmap_TPtrMap_obj* bbt_map) {
	struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o = (struct brl_map_ptrmap_TSynchronizedPtrMap_obj*)bbObjectNewNC(clas);
	_brl_map_ptrmap_TSynchronizedPtrMap_New_TTPtrMap(o, bbt_map);
	return o;
}
void _brl_map_ptrmap_TSynchronizedPtrMap_New(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_ptrmap_TSynchronizedPtrMap;
	o->_brl_map_ptrmap_tsynchronizedptrmap_map = (struct brl_map_ptrmap_TPtrMap_obj*)(&bbNullObject);
	o->_brl_map_ptrmap_tsynchronizedptrmap_mutex = (struct brl_threads_TMutex_obj*)brl_threads_TMutex_Create_TTMutex();
}
void _brl_map_ptrmap_TSynchronizedPtrMap_Clear(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Lock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				(o->_brl_map_ptrmap_tsynchronizedptrmap_map )->clas->m_Clear((struct brl_map_ptrmap_TPtrMap_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_map );
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
					(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Unlock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
}
BBINT _brl_map_ptrmap_TSynchronizedPtrMap_IsEmpty(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Lock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				BBINT volatile bbt_=(o->_brl_map_ptrmap_tsynchronizedptrmap_map )->clas->m_IsEmpty((struct brl_map_ptrmap_TPtrMap_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_map );
				bbExLeave();
				retptr = &&_return;
				goto _finally;
				_return:;
				return bbt_;
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
					(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Unlock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
	return 0;
}
void _brl_map_ptrmap_TSynchronizedPtrMap_Insert_pbTObject(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o,BBBYTE* bbt_key,BBOBJECT bbt_value){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Lock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				(o->_brl_map_ptrmap_tsynchronizedptrmap_map )->clas->m_Insert_pbTObject((struct brl_map_ptrmap_TPtrMap_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_map ,bbt_key,(BBOBJECT)bbt_value);
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
					(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Unlock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
}
BBINT _brl_map_ptrmap_TSynchronizedPtrMap_Contains_pb(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o,BBBYTE* bbt_key){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Lock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				BBINT volatile bbt_=(o->_brl_map_ptrmap_tsynchronizedptrmap_map )->clas->m_Contains_pb((struct brl_map_ptrmap_TPtrMap_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_map ,bbt_key);
				bbExLeave();
				retptr = &&_return;
				goto _finally;
				_return:;
				return bbt_;
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
					(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Unlock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
	return 0;
}
BBOBJECT _brl_map_ptrmap_TSynchronizedPtrMap_ValueForKey_pb(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o,BBBYTE* bbt_key){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Lock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				BBOBJECT volatile bbt_=(o->_brl_map_ptrmap_tsynchronizedptrmap_map )->clas->m_ValueForKey_pb((struct brl_map_ptrmap_TPtrMap_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_map ,bbt_key);
				bbExLeave();
				retptr = &&_return;
				goto _finally;
				_return:;
				return (BBOBJECT)bbt_;
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
					(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Unlock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
	return (BBOBJECT)(&bbNullObject);
}
BBINT _brl_map_ptrmap_TSynchronizedPtrMap_Remove_pb(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o,BBBYTE* bbt_key){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Lock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				BBINT volatile bbt_=(o->_brl_map_ptrmap_tsynchronizedptrmap_map )->clas->m_Remove_pb((struct brl_map_ptrmap_TPtrMap_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_map ,bbt_key);
				bbExLeave();
				retptr = &&_return;
				goto _finally;
				_return:;
				return bbt_;
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
					(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Unlock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
	return 0;
}
struct brl_map_ptrmap_TPtrMapEnumerator_obj* _brl_map_ptrmap_TSynchronizedPtrMap_Keys(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Lock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				struct brl_map_ptrmap_TPtrMapEnumerator_obj* volatile bbt_=(o->_brl_map_ptrmap_tsynchronizedptrmap_map )->clas->m_Keys((struct brl_map_ptrmap_TPtrMap_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_map );
				bbExLeave();
				retptr = &&_return;
				goto _finally;
				_return:;
				return (struct brl_map_ptrmap_TPtrMapEnumerator_obj*)bbt_;
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
					(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Unlock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
	return (struct brl_map_ptrmap_TPtrMapEnumerator_obj*)(&bbNullObject);
}
struct brl_map_ptrmap_TPtrMapEnumerator_obj* _brl_map_ptrmap_TSynchronizedPtrMap_Values(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Lock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				struct brl_map_ptrmap_TPtrMapEnumerator_obj* volatile bbt_=(o->_brl_map_ptrmap_tsynchronizedptrmap_map )->clas->m_Values((struct brl_map_ptrmap_TPtrMap_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_map );
				bbExLeave();
				retptr = &&_return;
				goto _finally;
				_return:;
				return (struct brl_map_ptrmap_TPtrMapEnumerator_obj*)bbt_;
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
					(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Unlock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
	return (struct brl_map_ptrmap_TPtrMapEnumerator_obj*)(&bbNullObject);
}
struct brl_map_ptrmap_TPtrMap_obj* _brl_map_ptrmap_TSynchronizedPtrMap_Copy(struct brl_map_ptrmap_TSynchronizedPtrMap_obj* o){
	{
		BBOBJECT ex;
		void* retptr = &&_rethrow;
		jmp_buf* buf = bbExEnter();
		switch(setjmp(*buf)) {
			case 0: {
				(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Lock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				struct brl_map_ptrmap_TPtrMap_obj* volatile bbt_=(o->_brl_map_ptrmap_tsynchronizedptrmap_map )->clas->m_Copy((struct brl_map_ptrmap_TPtrMap_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_map );
				bbExLeave();
				retptr = &&_return;
				goto _finally;
				_return:;
				return (struct brl_map_ptrmap_TPtrMap_obj*)bbt_;
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
					(o->_brl_map_ptrmap_tsynchronizedptrmap_mutex )->clas->m_Unlock((struct brl_threads_TMutex_obj*)o->_brl_map_ptrmap_tsynchronizedptrmap_mutex );
				}
				goto *retptr;
				_rethrow:;
				bbExThrow(ex);
			}
			break;
		}
	}
	_endtry:;
	return (struct brl_map_ptrmap_TPtrMap_obj*)(&bbNullObject);
}
struct BBDebugScope_13 brl_map_ptrmap_TSynchronizedPtrMap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSynchronizedPtrMap",
	{
		{
			BBDEBUGDECL_FIELD,
			"map",
			":TPtrMap",
			.field_offset=offsetof(struct brl_map_ptrmap_TSynchronizedPtrMap_obj,_brl_map_ptrmap_tsynchronizedptrmap_map)
		},
		{
			BBDEBUGDECL_FIELD,
			"mutex",
			":TMutex",
			.field_offset=offsetof(struct brl_map_ptrmap_TSynchronizedPtrMap_obj,_brl_map_ptrmap_tsynchronizedptrmap_mutex)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_ptrmap_TSynchronizedPtrMap_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(:TPtrMap):TSynchronizedPtrMap",
			.var_address=(void*)&_brl_map_ptrmap_TSynchronizedPtrMap_New_TTPtrMap
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()",
			.var_address=(void*)&_brl_map_ptrmap_TSynchronizedPtrMap_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsEmpty",
			"()i",
			.var_address=(void*)&_brl_map_ptrmap_TSynchronizedPtrMap_IsEmpty
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Insert",
			"(*b,:Object)",
			.var_address=(void*)&_brl_map_ptrmap_TSynchronizedPtrMap_Insert_pbTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Contains",
			"(*b)i",
			.var_address=(void*)&_brl_map_ptrmap_TSynchronizedPtrMap_Contains_pb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ValueForKey",
			"(*b):Object",
			.var_address=(void*)&_brl_map_ptrmap_TSynchronizedPtrMap_ValueForKey_pb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Remove",
			"(*b)i",
			.var_address=(void*)&_brl_map_ptrmap_TSynchronizedPtrMap_Remove_pb
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Keys",
			"():TPtrMapEnumerator",
			.var_address=(void*)&_brl_map_ptrmap_TSynchronizedPtrMap_Keys
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Values",
			"():TPtrMapEnumerator",
			.var_address=(void*)&_brl_map_ptrmap_TSynchronizedPtrMap_Values
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Copy",
			"():TPtrMap",
			.var_address=(void*)&_brl_map_ptrmap_TSynchronizedPtrMap_Copy
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_ptrmap_TSynchronizedPtrMap brl_map_ptrmap_TSynchronizedPtrMap={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_ptrmap_TSynchronizedPtrMap_scope,
	sizeof(struct brl_map_ptrmap_TSynchronizedPtrMap_obj),
	(void (*)(BBOBJECT))_brl_map_ptrmap_TSynchronizedPtrMap_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_ptrmap_TSynchronizedPtrMap_obj,_brl_map_ptrmap_tsynchronizedptrmap_mutex) - sizeof(void*) + sizeof(struct brl_threads_TMutex_obj*)
	,0
	,_brl_map_ptrmap_TSynchronizedPtrMap_Clear
	,_brl_map_ptrmap_TSynchronizedPtrMap_IsEmpty
	,_brl_map_ptrmap_TSynchronizedPtrMap_Insert_pbTObject
	,_brl_map_ptrmap_TSynchronizedPtrMap_Contains_pb
	,_brl_map_ptrmap_TSynchronizedPtrMap_ValueForKey_pb
	,_brl_map_ptrmap_TSynchronizedPtrMap_Remove_pb
	,_brl_map_ptrmap_TSynchronizedPtrMap_Keys
	,_brl_map_ptrmap_TSynchronizedPtrMap_Values
	,_brl_map_ptrmap_TSynchronizedPtrMap_Copy
};

static int _bb_brl_map_ptrmap_inited = 0;
int _bb_brl_map_ptrmap(){
	if (!_bb_brl_map_ptrmap_inited) {
		_bb_brl_map_ptrmap_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_threads_threads();
		bbObjectRegisterType((BBCLASS)&brl_map_ptrmap_TPtrMap);
		bbObjectRegisterType((BBCLASS)&brl_map_ptrmap_TPtrNode);
		bbObjectRegisterType((BBCLASS)&brl_map_ptrmap_TPtrKey);
		bbObjectRegisterType((BBCLASS)&brl_map_ptrmap_TPtrNodeEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_ptrmap_TPtrKeyEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_ptrmap_TPtrValueEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_ptrmap_TPtrMapEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_ptrmap_TPtrEmptyEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_ptrmap_TSynchronizedPtrMap);
		return 0;
	}
	return 0;
}