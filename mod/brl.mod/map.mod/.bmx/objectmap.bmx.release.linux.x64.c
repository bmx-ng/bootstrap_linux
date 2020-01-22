#include "objectmap.bmx.release.linux.x64.h"
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
void _brl_map_objectmap_TObjectMap_New(struct brl_map_objectmap_TObjectMap_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_objectmap_TObjectMap;
	o->_brl_map_objectmap_tobjectmap__root = 0;
}
void _brl_map_objectmap_TObjectMap_Delete(struct brl_map_objectmap_TObjectMap_obj* o) {
	((struct brl_map_objectmap_TObjectMap_obj*)o)->clas->m_Clear((struct brl_map_objectmap_TObjectMap_obj*)o);
	bbObjectDtor((BBOBJECT)o);
}
void _brl_map_objectmap_TObjectMap_Clear(struct brl_map_objectmap_TObjectMap_obj* o){
	bmx_map_objectmap_clear((BBBYTE**)(&o->_brl_map_objectmap_tobjectmap__root ));
}
BBINT _brl_map_objectmap_TObjectMap_IsEmpty(struct brl_map_objectmap_TObjectMap_obj* o){
	return bmx_map_objectmap_isempty((BBBYTE**)(&o->_brl_map_objectmap_tobjectmap__root ));
}
void _brl_map_objectmap_TObjectMap_Insert_TObjectTObject(struct brl_map_objectmap_TObjectMap_obj* o,BBOBJECT bbt_key,BBOBJECT bbt_value){
	bmx_map_objectmap_insert((BBOBJECT)bbt_key,(BBOBJECT)bbt_value,((BBBYTE**)(&o->_brl_map_objectmap_tobjectmap__root )));
}
BBINT _brl_map_objectmap_TObjectMap_Contains_TObject(struct brl_map_objectmap_TObjectMap_obj* o,BBOBJECT bbt_key){
	return bmx_map_objectmap_contains((BBOBJECT)bbt_key,((BBBYTE**)(&o->_brl_map_objectmap_tobjectmap__root )));
}
BBOBJECT _brl_map_objectmap_TObjectMap_ValueForKey_TObject(struct brl_map_objectmap_TObjectMap_obj* o,BBOBJECT bbt_key){
	return (BBOBJECT)bmx_map_objectmap_valueforkey((BBOBJECT)bbt_key,((BBBYTE**)(&o->_brl_map_objectmap_tobjectmap__root )));
}
BBINT _brl_map_objectmap_TObjectMap_Remove_TObject(struct brl_map_objectmap_TObjectMap_obj* o,BBOBJECT bbt_key){
	return bmx_map_objectmap_remove((BBOBJECT)bbt_key,((BBBYTE**)(&o->_brl_map_objectmap_tobjectmap__root )));
}
struct brl_map_objectmap_TObjectNode_obj* _brl_map_objectmap_TObjectMap__FirstNode(struct brl_map_objectmap_TObjectMap_obj* o){
	if(!(((struct brl_map_objectmap_TObjectMap_obj*)o)->clas->m_IsEmpty((struct brl_map_objectmap_TObjectMap_obj*)o)!=0)){
		struct brl_map_objectmap_TObjectNode_obj* bbt_node=(struct brl_map_objectmap_TObjectNode_obj*)(struct brl_map_objectmap_TObjectNode_obj*)bbObjectAtomicNew((BBClass *)&brl_map_objectmap_TObjectNode);
		bbt_node->_brl_map_objectmap_tobjectnode__root =o->_brl_map_objectmap_tobjectmap__root ;
		return (struct brl_map_objectmap_TObjectNode_obj*)bbt_node;
	}else{
		return (struct brl_map_objectmap_TObjectNode_obj*)&bbNullObject;
	}
}
struct brl_map_objectmap_TObjectMapEnumerator_obj* _brl_map_objectmap_TObjectMap_Keys(struct brl_map_objectmap_TObjectMap_obj* o){
	struct brl_map_objectmap_TObjectNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)(&bbNullObject);
	if(!(((struct brl_map_objectmap_TObjectMap_obj*)o)->clas->m_IsEmpty((struct brl_map_objectmap_TObjectMap_obj*)o)!=0)){
		bbt_nodeenum=(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)((struct brl_map_objectmap_TObjectNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_objectmap_TObjectKeyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_objectmap_TObjectKeyEnumerator),(BBClass*)&brl_map_objectmap_TObjectNodeEnumerator));
		bbt_nodeenum->_brl_map_objectmap_tobjectnodeenumerator__node =(struct brl_map_objectmap_TObjectNode_obj*)((struct brl_map_objectmap_TObjectMap_obj*)o)->clas->m__FirstNode((struct brl_map_objectmap_TObjectMap_obj*)o);
	}else{
		bbt_nodeenum=(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)((struct brl_map_objectmap_TObjectNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_objectmap_TObjectEmptyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_objectmap_TObjectEmptyEnumerator),(BBClass*)&brl_map_objectmap_TObjectNodeEnumerator));
	}
	struct brl_map_objectmap_TObjectMapEnumerator_obj* bbt_mapenum=(struct brl_map_objectmap_TObjectMapEnumerator_obj*)(struct brl_map_objectmap_TObjectMapEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_objectmap_TObjectMapEnumerator);
	bbt_mapenum->_brl_map_objectmap_tobjectmapenumerator__enumerator =(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)bbt_nodeenum;
	bbt_nodeenum->_brl_map_objectmap_tobjectnodeenumerator__map =(struct brl_map_objectmap_TObjectMap_obj*)o;
	return (struct brl_map_objectmap_TObjectMapEnumerator_obj*)bbt_mapenum;
}
struct brl_map_objectmap_TObjectMapEnumerator_obj* _brl_map_objectmap_TObjectMap_Values(struct brl_map_objectmap_TObjectMap_obj* o){
	struct brl_map_objectmap_TObjectNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)(&bbNullObject);
	if(!(((struct brl_map_objectmap_TObjectMap_obj*)o)->clas->m_IsEmpty((struct brl_map_objectmap_TObjectMap_obj*)o)!=0)){
		bbt_nodeenum=(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)((struct brl_map_objectmap_TObjectNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_objectmap_TObjectValueEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_objectmap_TObjectValueEnumerator),(BBClass*)&brl_map_objectmap_TObjectNodeEnumerator));
		bbt_nodeenum->_brl_map_objectmap_tobjectnodeenumerator__node =(struct brl_map_objectmap_TObjectNode_obj*)((struct brl_map_objectmap_TObjectMap_obj*)o)->clas->m__FirstNode((struct brl_map_objectmap_TObjectMap_obj*)o);
	}else{
		bbt_nodeenum=(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)((struct brl_map_objectmap_TObjectNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_objectmap_TObjectEmptyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_objectmap_TObjectEmptyEnumerator),(BBClass*)&brl_map_objectmap_TObjectNodeEnumerator));
	}
	struct brl_map_objectmap_TObjectMapEnumerator_obj* bbt_mapenum=(struct brl_map_objectmap_TObjectMapEnumerator_obj*)(struct brl_map_objectmap_TObjectMapEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_objectmap_TObjectMapEnumerator);
	bbt_mapenum->_brl_map_objectmap_tobjectmapenumerator__enumerator =(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)bbt_nodeenum;
	bbt_nodeenum->_brl_map_objectmap_tobjectnodeenumerator__map =(struct brl_map_objectmap_TObjectMap_obj*)o;
	return (struct brl_map_objectmap_TObjectMapEnumerator_obj*)bbt_mapenum;
}
struct brl_map_objectmap_TObjectMap_obj* _brl_map_objectmap_TObjectMap_Copy(struct brl_map_objectmap_TObjectMap_obj* o){
	struct brl_map_objectmap_TObjectMap_obj* bbt_map=(struct brl_map_objectmap_TObjectMap_obj*)(struct brl_map_objectmap_TObjectMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_objectmap_TObjectMap);
	bmx_map_objectmap_copy(((BBBYTE**)(&bbt_map->_brl_map_objectmap_tobjectmap__root )),o->_brl_map_objectmap_tobjectmap__root );
	return (struct brl_map_objectmap_TObjectMap_obj*)bbt_map;
}
struct brl_map_objectmap_TObjectNodeEnumerator_obj* _brl_map_objectmap_TObjectMap_ObjectEnumerator(struct brl_map_objectmap_TObjectMap_obj* o){
	struct brl_map_objectmap_TObjectNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)(&bbNullObject);
	if(!(((struct brl_map_objectmap_TObjectMap_obj*)o)->clas->m_IsEmpty((struct brl_map_objectmap_TObjectMap_obj*)o)!=0)){
		bbt_nodeenum=(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_objectmap_TObjectNodeEnumerator);
		bbt_nodeenum->_brl_map_objectmap_tobjectnodeenumerator__node =(struct brl_map_objectmap_TObjectNode_obj*)((struct brl_map_objectmap_TObjectMap_obj*)o)->clas->m__FirstNode((struct brl_map_objectmap_TObjectMap_obj*)o);
		bbt_nodeenum->_brl_map_objectmap_tobjectnodeenumerator__map =(struct brl_map_objectmap_TObjectMap_obj*)o;
	}else{
		bbt_nodeenum=(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)((struct brl_map_objectmap_TObjectNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_objectmap_TObjectEmptyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_objectmap_TObjectEmptyEnumerator),(BBClass*)&brl_map_objectmap_TObjectNodeEnumerator));
	}
	return (struct brl_map_objectmap_TObjectNodeEnumerator_obj*)bbt_nodeenum;
}
struct BBDebugScope_13 brl_map_objectmap_TObjectMap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TObjectMap",
	{
		{
			BBDEBUGDECL_FIELD,
			"_root",
			"*b",
			.field_offset=offsetof(struct brl_map_objectmap_TObjectMap_obj,_brl_map_objectmap_tobjectmap__root)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_objectmap_TObjectMap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()",
			.var_address=(void*)&_brl_map_objectmap_TObjectMap_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsEmpty",
			"()i",
			.var_address=(void*)&_brl_map_objectmap_TObjectMap_IsEmpty
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Insert",
			"(:Object,:Object)",
			.var_address=(void*)&_brl_map_objectmap_TObjectMap_Insert_TObjectTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Contains",
			"(:Object)i",
			.var_address=(void*)&_brl_map_objectmap_TObjectMap_Contains_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ValueForKey",
			"(:Object):Object",
			.var_address=(void*)&_brl_map_objectmap_TObjectMap_ValueForKey_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Remove",
			"(:Object)i",
			.var_address=(void*)&_brl_map_objectmap_TObjectMap_Remove_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_FirstNode",
			"():TObjectNode",
			.var_address=(void*)&_brl_map_objectmap_TObjectMap__FirstNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Keys",
			"():TObjectMapEnumerator",
			.var_address=(void*)&_brl_map_objectmap_TObjectMap_Keys
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Values",
			"():TObjectMapEnumerator",
			.var_address=(void*)&_brl_map_objectmap_TObjectMap_Values
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Copy",
			"():TObjectMap",
			.var_address=(void*)&_brl_map_objectmap_TObjectMap_Copy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TObjectNodeEnumerator",
			.var_address=(void*)&_brl_map_objectmap_TObjectMap_ObjectEnumerator
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_objectmap_TObjectMap brl_map_objectmap_TObjectMap={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_objectmap_TObjectMap_scope,
	sizeof(struct brl_map_objectmap_TObjectMap_obj),
	(void (*)(BBOBJECT))_brl_map_objectmap_TObjectMap_New,
	(void (*)(BBOBJECT))_brl_map_objectmap_TObjectMap_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_objectmap_TObjectMap_obj,_brl_map_objectmap_tobjectmap__root) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_map_objectmap_TObjectMap_Clear
	,_brl_map_objectmap_TObjectMap_IsEmpty
	,_brl_map_objectmap_TObjectMap_Insert_TObjectTObject
	,_brl_map_objectmap_TObjectMap_Contains_TObject
	,_brl_map_objectmap_TObjectMap_ValueForKey_TObject
	,_brl_map_objectmap_TObjectMap_Remove_TObject
	,_brl_map_objectmap_TObjectMap__FirstNode
	,_brl_map_objectmap_TObjectMap_Keys
	,_brl_map_objectmap_TObjectMap_Values
	,_brl_map_objectmap_TObjectMap_Copy
	,_brl_map_objectmap_TObjectMap_ObjectEnumerator
};

void _brl_map_objectmap_TObjectNode_New(struct brl_map_objectmap_TObjectNode_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_objectmap_TObjectNode;
	o->_brl_map_objectmap_tobjectnode__root = 0;
	o->_brl_map_objectmap_tobjectnode__nodeptr = 0;
}
BBOBJECT _brl_map_objectmap_TObjectNode_Key(struct brl_map_objectmap_TObjectNode_obj* o){
	return (BBOBJECT)bmx_map_objectmap_key(o->_brl_map_objectmap_tobjectnode__nodeptr );
}
BBOBJECT _brl_map_objectmap_TObjectNode_Value(struct brl_map_objectmap_TObjectNode_obj* o){
	return (BBOBJECT)bmx_map_objectmap_value(o->_brl_map_objectmap_tobjectnode__nodeptr );
}
BBINT _brl_map_objectmap_TObjectNode_HasNext(struct brl_map_objectmap_TObjectNode_obj* o){
	return bmx_map_objectmap_hasnext(o->_brl_map_objectmap_tobjectnode__nodeptr ,o->_brl_map_objectmap_tobjectnode__root );
}
struct brl_map_objectmap_TObjectNode_obj* _brl_map_objectmap_TObjectNode_NextNode(struct brl_map_objectmap_TObjectNode_obj* o){
	if(!(o->_brl_map_objectmap_tobjectnode__nodeptr )){
		o->_brl_map_objectmap_tobjectnode__nodeptr =bmx_map_objectmap_firstnode(o->_brl_map_objectmap_tobjectnode__root );
	}else{
		o->_brl_map_objectmap_tobjectnode__nodeptr =bmx_map_objectmap_nextnode(o->_brl_map_objectmap_tobjectnode__nodeptr );
	}
	return (struct brl_map_objectmap_TObjectNode_obj*)o;
}
struct BBDebugScope_7 brl_map_objectmap_TObjectNode_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TObjectNode",
	{
		{
			BBDEBUGDECL_FIELD,
			"_root",
			"*b",
			.field_offset=offsetof(struct brl_map_objectmap_TObjectNode_obj,_brl_map_objectmap_tobjectnode__root)
		},
		{
			BBDEBUGDECL_FIELD,
			"_nodePtr",
			"*b",
			.field_offset=offsetof(struct brl_map_objectmap_TObjectNode_obj,_brl_map_objectmap_tobjectnode__nodeptr)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_objectmap_TObjectNode_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Key",
			"():Object",
			.var_address=(void*)&_brl_map_objectmap_TObjectNode_Key
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Value",
			"():Object",
			.var_address=(void*)&_brl_map_objectmap_TObjectNode_Value
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_objectmap_TObjectNode_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextNode",
			"():TObjectNode",
			.var_address=(void*)&_brl_map_objectmap_TObjectNode_NextNode
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_objectmap_TObjectNode brl_map_objectmap_TObjectNode={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_objectmap_TObjectNode_scope,
	sizeof(struct brl_map_objectmap_TObjectNode_obj),
	(void (*)(BBOBJECT))_brl_map_objectmap_TObjectNode_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_objectmap_TObjectNode_obj,_brl_map_objectmap_tobjectnode__nodeptr) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_map_objectmap_TObjectNode_Key
	,_brl_map_objectmap_TObjectNode_Value
	,_brl_map_objectmap_TObjectNode_HasNext
	,_brl_map_objectmap_TObjectNode_NextNode
};

void _brl_map_objectmap_TObjectNodeEnumerator_New(struct brl_map_objectmap_TObjectNodeEnumerator_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_objectmap_TObjectNodeEnumerator;
	o->_brl_map_objectmap_tobjectnodeenumerator__node = (struct brl_map_objectmap_TObjectNode_obj*)(&bbNullObject);
	o->_brl_map_objectmap_tobjectnodeenumerator__map = (struct brl_map_objectmap_TObjectMap_obj*)(&bbNullObject);
}
BBINT _brl_map_objectmap_TObjectNodeEnumerator_HasNext(struct brl_map_objectmap_TObjectNodeEnumerator_obj* o){
	BBINT bbt_has=(o->_brl_map_objectmap_tobjectnodeenumerator__node )->clas->m_HasNext((struct brl_map_objectmap_TObjectNode_obj*)o->_brl_map_objectmap_tobjectnodeenumerator__node );
	if(!(bbt_has!=0)){
		o->_brl_map_objectmap_tobjectnodeenumerator__map =(struct brl_map_objectmap_TObjectMap_obj*)&bbNullObject;
	}
	return bbt_has;
}
BBOBJECT _brl_map_objectmap_TObjectNodeEnumerator_NextObject(struct brl_map_objectmap_TObjectNodeEnumerator_obj* o){
	struct brl_map_objectmap_TObjectNode_obj* bbt_node=(struct brl_map_objectmap_TObjectNode_obj*)o->_brl_map_objectmap_tobjectnodeenumerator__node ;
	o->_brl_map_objectmap_tobjectnodeenumerator__node =(struct brl_map_objectmap_TObjectNode_obj*)(o->_brl_map_objectmap_tobjectnodeenumerator__node )->clas->m_NextNode((struct brl_map_objectmap_TObjectNode_obj*)o->_brl_map_objectmap_tobjectnodeenumerator__node );
	return (BBOBJECT)bbt_node;
}
struct BBDebugScope_5 brl_map_objectmap_TObjectNodeEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TObjectNodeEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_node",
			":TObjectNode",
			.field_offset=offsetof(struct brl_map_objectmap_TObjectNodeEnumerator_obj,_brl_map_objectmap_tobjectnodeenumerator__node)
		},
		{
			BBDEBUGDECL_FIELD,
			"_map",
			":TObjectMap",
			.field_offset=offsetof(struct brl_map_objectmap_TObjectNodeEnumerator_obj,_brl_map_objectmap_tobjectnodeenumerator__map)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_objectmap_TObjectNodeEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_objectmap_TObjectNodeEnumerator_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_objectmap_TObjectNodeEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_objectmap_TObjectNodeEnumerator brl_map_objectmap_TObjectNodeEnumerator={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_objectmap_TObjectNodeEnumerator_scope,
	sizeof(struct brl_map_objectmap_TObjectNodeEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_objectmap_TObjectNodeEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_objectmap_TObjectNodeEnumerator_obj,_brl_map_objectmap_tobjectnodeenumerator__map) - sizeof(void*) + sizeof(struct brl_map_objectmap_TObjectMap_obj*)
	,0
	,_brl_map_objectmap_TObjectNodeEnumerator_HasNext
	,_brl_map_objectmap_TObjectNodeEnumerator_NextObject
};

void _brl_map_objectmap_TObjectKeyEnumerator_New(struct brl_map_objectmap_TObjectKeyEnumerator_obj* o) {
	_brl_map_objectmap_TObjectNodeEnumerator_New((struct brl_map_objectmap_TObjectNodeEnumerator_obj*)o);
	o->clas = &brl_map_objectmap_TObjectKeyEnumerator;
}
BBOBJECT _brl_map_objectmap_TObjectKeyEnumerator_NextObject(struct brl_map_objectmap_TObjectKeyEnumerator_obj* o){
	struct brl_map_objectmap_TObjectNode_obj* bbt_node=(struct brl_map_objectmap_TObjectNode_obj*)o->_brl_map_objectmap_tobjectnodeenumerator__node ;
	o->_brl_map_objectmap_tobjectnodeenumerator__node =(struct brl_map_objectmap_TObjectNode_obj*)(o->_brl_map_objectmap_tobjectnodeenumerator__node )->clas->m_NextNode((struct brl_map_objectmap_TObjectNode_obj*)o->_brl_map_objectmap_tobjectnodeenumerator__node );
	return (BBOBJECT)(bbt_node)->clas->m_Key((struct brl_map_objectmap_TObjectNode_obj*)bbt_node);
}
struct BBDebugScope_2 brl_map_objectmap_TObjectKeyEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TObjectKeyEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_objectmap_TObjectKeyEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_objectmap_TObjectKeyEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_objectmap_TObjectKeyEnumerator brl_map_objectmap_TObjectKeyEnumerator={
	&brl_map_objectmap_TObjectNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_objectmap_TObjectKeyEnumerator_scope,
	sizeof(struct brl_map_objectmap_TObjectKeyEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_objectmap_TObjectKeyEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_map_objectmap_TObjectNodeEnumerator_HasNext
	,_brl_map_objectmap_TObjectKeyEnumerator_NextObject
};

void _brl_map_objectmap_TObjectValueEnumerator_New(struct brl_map_objectmap_TObjectValueEnumerator_obj* o) {
	_brl_map_objectmap_TObjectNodeEnumerator_New((struct brl_map_objectmap_TObjectNodeEnumerator_obj*)o);
	o->clas = &brl_map_objectmap_TObjectValueEnumerator;
}
BBOBJECT _brl_map_objectmap_TObjectValueEnumerator_NextObject(struct brl_map_objectmap_TObjectValueEnumerator_obj* o){
	struct brl_map_objectmap_TObjectNode_obj* bbt_node=(struct brl_map_objectmap_TObjectNode_obj*)o->_brl_map_objectmap_tobjectnodeenumerator__node ;
	o->_brl_map_objectmap_tobjectnodeenumerator__node =(struct brl_map_objectmap_TObjectNode_obj*)(o->_brl_map_objectmap_tobjectnodeenumerator__node )->clas->m_NextNode((struct brl_map_objectmap_TObjectNode_obj*)o->_brl_map_objectmap_tobjectnodeenumerator__node );
	return (BBOBJECT)(bbt_node)->clas->m_Value((struct brl_map_objectmap_TObjectNode_obj*)bbt_node);
}
struct BBDebugScope_2 brl_map_objectmap_TObjectValueEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TObjectValueEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_objectmap_TObjectValueEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_objectmap_TObjectValueEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_objectmap_TObjectValueEnumerator brl_map_objectmap_TObjectValueEnumerator={
	&brl_map_objectmap_TObjectNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_objectmap_TObjectValueEnumerator_scope,
	sizeof(struct brl_map_objectmap_TObjectValueEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_objectmap_TObjectValueEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_map_objectmap_TObjectNodeEnumerator_HasNext
	,_brl_map_objectmap_TObjectValueEnumerator_NextObject
};

void _brl_map_objectmap_TObjectMapEnumerator_New(struct brl_map_objectmap_TObjectMapEnumerator_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_objectmap_TObjectMapEnumerator;
	o->_brl_map_objectmap_tobjectmapenumerator__enumerator = (struct brl_map_objectmap_TObjectNodeEnumerator_obj*)(&bbNullObject);
}
struct brl_map_objectmap_TObjectNodeEnumerator_obj* _brl_map_objectmap_TObjectMapEnumerator_ObjectEnumerator(struct brl_map_objectmap_TObjectMapEnumerator_obj* o){
	return (struct brl_map_objectmap_TObjectNodeEnumerator_obj*)o->_brl_map_objectmap_tobjectmapenumerator__enumerator ;
}
struct BBDebugScope_3 brl_map_objectmap_TObjectMapEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TObjectMapEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_enumerator",
			":TObjectNodeEnumerator",
			.field_offset=offsetof(struct brl_map_objectmap_TObjectMapEnumerator_obj,_brl_map_objectmap_tobjectmapenumerator__enumerator)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_objectmap_TObjectMapEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TObjectNodeEnumerator",
			.var_address=(void*)&_brl_map_objectmap_TObjectMapEnumerator_ObjectEnumerator
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_objectmap_TObjectMapEnumerator brl_map_objectmap_TObjectMapEnumerator={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_objectmap_TObjectMapEnumerator_scope,
	sizeof(struct brl_map_objectmap_TObjectMapEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_objectmap_TObjectMapEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_objectmap_TObjectMapEnumerator_obj,_brl_map_objectmap_tobjectmapenumerator__enumerator) - sizeof(void*) + sizeof(struct brl_map_objectmap_TObjectNodeEnumerator_obj*)
	,0
	,_brl_map_objectmap_TObjectMapEnumerator_ObjectEnumerator
};

void _brl_map_objectmap_TObjectEmptyEnumerator_New(struct brl_map_objectmap_TObjectEmptyEnumerator_obj* o) {
	_brl_map_objectmap_TObjectNodeEnumerator_New((struct brl_map_objectmap_TObjectNodeEnumerator_obj*)o);
	o->clas = &brl_map_objectmap_TObjectEmptyEnumerator;
}
BBINT _brl_map_objectmap_TObjectEmptyEnumerator_HasNext(struct brl_map_objectmap_TObjectEmptyEnumerator_obj* o){
	o->_brl_map_objectmap_tobjectnodeenumerator__map =(struct brl_map_objectmap_TObjectMap_obj*)&bbNullObject;
	return 0;
}
struct BBDebugScope_2 brl_map_objectmap_TObjectEmptyEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TObjectEmptyEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_objectmap_TObjectEmptyEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_objectmap_TObjectEmptyEnumerator_HasNext
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_objectmap_TObjectEmptyEnumerator brl_map_objectmap_TObjectEmptyEnumerator={
	&brl_map_objectmap_TObjectNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_objectmap_TObjectEmptyEnumerator_scope,
	sizeof(struct brl_map_objectmap_TObjectEmptyEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_objectmap_TObjectEmptyEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_map_objectmap_TObjectEmptyEnumerator_HasNext
	,_brl_map_objectmap_TObjectNodeEnumerator_NextObject
};

static int _bb_brl_map_objectmap_inited = 0;
int _bb_brl_map_objectmap(){
	if (!_bb_brl_map_objectmap_inited) {
		_bb_brl_map_objectmap_inited = 1;
		__bb_brl_blitz_blitz();
		bbObjectRegisterType((BBCLASS)&brl_map_objectmap_TObjectMap);
		bbObjectRegisterType((BBCLASS)&brl_map_objectmap_TObjectNode);
		bbObjectRegisterType((BBCLASS)&brl_map_objectmap_TObjectNodeEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_objectmap_TObjectKeyEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_objectmap_TObjectValueEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_objectmap_TObjectMapEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_objectmap_TObjectEmptyEnumerator);
		return 0;
	}
	return 0;
}