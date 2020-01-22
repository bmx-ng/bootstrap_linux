#include "stringmap.bmx.release.linux.x64.h"
struct BBDebugScope_15{int kind; const char *name; BBDebugDecl decls[16]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
void _brl_map_stringmap_TStringMap_New(struct brl_map_stringmap_TStringMap_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_stringmap_TStringMap;
	o->_brl_map_stringmap_tstringmap__root = 0;
}
void _brl_map_stringmap_TStringMap_Delete(struct brl_map_stringmap_TStringMap_obj* o) {
	((struct brl_map_stringmap_TStringMap_obj*)o)->clas->m_Clear((struct brl_map_stringmap_TStringMap_obj*)o);
	bbObjectDtor((BBOBJECT)o);
}
void _brl_map_stringmap_TStringMap_Clear(struct brl_map_stringmap_TStringMap_obj* o){
	bmx_map_stringmap_clear((BBBYTE**)(&o->_brl_map_stringmap_tstringmap__root ));
}
BBINT _brl_map_stringmap_TStringMap_IsEmpty(struct brl_map_stringmap_TStringMap_obj* o){
	return bmx_map_stringmap_isempty((BBBYTE**)(&o->_brl_map_stringmap_tstringmap__root ));
}
void _brl_map_stringmap_TStringMap_Insert_STObject(struct brl_map_stringmap_TStringMap_obj* o,BBSTRING bbt_key,BBOBJECT bbt_value){
	bmx_map_stringmap_insert(bbt_key,(BBOBJECT)bbt_value,((BBBYTE**)(&o->_brl_map_stringmap_tstringmap__root )));
}
BBINT _brl_map_stringmap_TStringMap_Contains_S(struct brl_map_stringmap_TStringMap_obj* o,BBSTRING bbt_key){
	return bmx_map_stringmap_contains(bbt_key,((BBBYTE**)(&o->_brl_map_stringmap_tstringmap__root )));
}
BBOBJECT _brl_map_stringmap_TStringMap_ValueForKey_S(struct brl_map_stringmap_TStringMap_obj* o,BBSTRING bbt_key){
	return (BBOBJECT)bmx_map_stringmap_valueforkey(bbt_key,((BBBYTE**)(&o->_brl_map_stringmap_tstringmap__root )));
}
BBINT _brl_map_stringmap_TStringMap_Remove_S(struct brl_map_stringmap_TStringMap_obj* o,BBSTRING bbt_key){
	return bmx_map_stringmap_remove(bbt_key,((BBBYTE**)(&o->_brl_map_stringmap_tstringmap__root )));
}
struct brl_map_stringmap_TStringNode_obj* _brl_map_stringmap_TStringMap__FirstNode(struct brl_map_stringmap_TStringMap_obj* o){
	if(!(((struct brl_map_stringmap_TStringMap_obj*)o)->clas->m_IsEmpty((struct brl_map_stringmap_TStringMap_obj*)o)!=0)){
		struct brl_map_stringmap_TStringNode_obj* bbt_node=(struct brl_map_stringmap_TStringNode_obj*)(struct brl_map_stringmap_TStringNode_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringNode);
		bbt_node->_brl_map_stringmap_tstringnode__root =o->_brl_map_stringmap_tstringmap__root ;
		return (struct brl_map_stringmap_TStringNode_obj*)bbt_node;
	}else{
		return (struct brl_map_stringmap_TStringNode_obj*)&bbNullObject;
	}
}
struct brl_map_stringmap_TStringMapEnumerator_obj* _brl_map_stringmap_TStringMap_Keys(struct brl_map_stringmap_TStringMap_obj* o){
	struct brl_map_stringmap_TStringNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_stringmap_TStringNodeEnumerator_obj*)(&bbNullObject);
	if(!(((struct brl_map_stringmap_TStringMap_obj*)o)->clas->m_IsEmpty((struct brl_map_stringmap_TStringMap_obj*)o)!=0)){
		bbt_nodeenum=(struct brl_map_stringmap_TStringNodeEnumerator_obj*)((struct brl_map_stringmap_TStringNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_stringmap_TStringKeyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_stringmap_TStringKeyEnumerator),(BBClass*)&brl_map_stringmap_TStringNodeEnumerator));
		bbt_nodeenum->_brl_map_stringmap_tstringnodeenumerator__node =(struct brl_map_stringmap_TStringNode_obj*)((struct brl_map_stringmap_TStringMap_obj*)o)->clas->m__FirstNode((struct brl_map_stringmap_TStringMap_obj*)o);
	}else{
		bbt_nodeenum=(struct brl_map_stringmap_TStringNodeEnumerator_obj*)((struct brl_map_stringmap_TStringNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_stringmap_TStringEmptyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_stringmap_TStringEmptyEnumerator),(BBClass*)&brl_map_stringmap_TStringNodeEnumerator));
	}
	struct brl_map_stringmap_TStringMapEnumerator_obj* bbt_mapenum=(struct brl_map_stringmap_TStringMapEnumerator_obj*)(struct brl_map_stringmap_TStringMapEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_stringmap_TStringMapEnumerator);
	bbt_mapenum->_brl_map_stringmap_tstringmapenumerator__enumerator =(struct brl_map_stringmap_TStringNodeEnumerator_obj*)bbt_nodeenum;
	bbt_nodeenum->_brl_map_stringmap_tstringnodeenumerator__map =(struct brl_map_stringmap_TStringMap_obj*)o;
	return (struct brl_map_stringmap_TStringMapEnumerator_obj*)bbt_mapenum;
}
struct brl_map_stringmap_TStringMapEnumerator_obj* _brl_map_stringmap_TStringMap_Values(struct brl_map_stringmap_TStringMap_obj* o){
	struct brl_map_stringmap_TStringNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_stringmap_TStringNodeEnumerator_obj*)(&bbNullObject);
	if(!(((struct brl_map_stringmap_TStringMap_obj*)o)->clas->m_IsEmpty((struct brl_map_stringmap_TStringMap_obj*)o)!=0)){
		bbt_nodeenum=(struct brl_map_stringmap_TStringNodeEnumerator_obj*)((struct brl_map_stringmap_TStringNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_stringmap_TStringValueEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_stringmap_TStringValueEnumerator),(BBClass*)&brl_map_stringmap_TStringNodeEnumerator));
		bbt_nodeenum->_brl_map_stringmap_tstringnodeenumerator__node =(struct brl_map_stringmap_TStringNode_obj*)((struct brl_map_stringmap_TStringMap_obj*)o)->clas->m__FirstNode((struct brl_map_stringmap_TStringMap_obj*)o);
	}else{
		bbt_nodeenum=(struct brl_map_stringmap_TStringNodeEnumerator_obj*)((struct brl_map_stringmap_TStringNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_stringmap_TStringEmptyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_stringmap_TStringEmptyEnumerator),(BBClass*)&brl_map_stringmap_TStringNodeEnumerator));
	}
	struct brl_map_stringmap_TStringMapEnumerator_obj* bbt_mapenum=(struct brl_map_stringmap_TStringMapEnumerator_obj*)(struct brl_map_stringmap_TStringMapEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_stringmap_TStringMapEnumerator);
	bbt_mapenum->_brl_map_stringmap_tstringmapenumerator__enumerator =(struct brl_map_stringmap_TStringNodeEnumerator_obj*)bbt_nodeenum;
	bbt_nodeenum->_brl_map_stringmap_tstringnodeenumerator__map =(struct brl_map_stringmap_TStringMap_obj*)o;
	return (struct brl_map_stringmap_TStringMapEnumerator_obj*)bbt_mapenum;
}
struct brl_map_stringmap_TStringMap_obj* _brl_map_stringmap_TStringMap_Copy(struct brl_map_stringmap_TStringMap_obj* o){
	struct brl_map_stringmap_TStringMap_obj* bbt_map=(struct brl_map_stringmap_TStringMap_obj*)(struct brl_map_stringmap_TStringMap_obj*)bbObjectAtomicNew((BBClass *)&brl_map_stringmap_TStringMap);
	bmx_map_stringmap_copy(((BBBYTE**)(&bbt_map->_brl_map_stringmap_tstringmap__root )),o->_brl_map_stringmap_tstringmap__root );
	return (struct brl_map_stringmap_TStringMap_obj*)bbt_map;
}
struct brl_map_stringmap_TStringNodeEnumerator_obj* _brl_map_stringmap_TStringMap_ObjectEnumerator(struct brl_map_stringmap_TStringMap_obj* o){
	struct brl_map_stringmap_TStringNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_stringmap_TStringNodeEnumerator_obj*)(&bbNullObject);
	if(!(((struct brl_map_stringmap_TStringMap_obj*)o)->clas->m_IsEmpty((struct brl_map_stringmap_TStringMap_obj*)o)!=0)){
		bbt_nodeenum=(struct brl_map_stringmap_TStringNodeEnumerator_obj*)(struct brl_map_stringmap_TStringNodeEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_stringmap_TStringNodeEnumerator);
		bbt_nodeenum->_brl_map_stringmap_tstringnodeenumerator__node =(struct brl_map_stringmap_TStringNode_obj*)((struct brl_map_stringmap_TStringMap_obj*)o)->clas->m__FirstNode((struct brl_map_stringmap_TStringMap_obj*)o);
		bbt_nodeenum->_brl_map_stringmap_tstringnodeenumerator__map =(struct brl_map_stringmap_TStringMap_obj*)o;
	}else{
		bbt_nodeenum=(struct brl_map_stringmap_TStringNodeEnumerator_obj*)((struct brl_map_stringmap_TStringNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_stringmap_TStringEmptyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_stringmap_TStringEmptyEnumerator),(BBClass*)&brl_map_stringmap_TStringNodeEnumerator));
	}
	return (struct brl_map_stringmap_TStringNodeEnumerator_obj*)bbt_nodeenum;
}
BBOBJECT _brl_map_stringmap_TStringMap__iget_S(struct brl_map_stringmap_TStringMap_obj* o,BBSTRING bbt_key){
	return (BBOBJECT)bmx_map_stringmap_valueforkey(bbt_key,((BBBYTE**)(&o->_brl_map_stringmap_tstringmap__root )));
}
void _brl_map_stringmap_TStringMap__iset_STObject(struct brl_map_stringmap_TStringMap_obj* o,BBSTRING bbt_key,BBOBJECT bbt_value){
	bmx_map_stringmap_insert(bbt_key,(BBOBJECT)bbt_value,((BBBYTE**)(&o->_brl_map_stringmap_tstringmap__root )));
}
struct BBDebugScope_15 brl_map_stringmap_TStringMap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStringMap",
	{
		{
			BBDEBUGDECL_FIELD,
			"_root",
			"*b",
			.field_offset=offsetof(struct brl_map_stringmap_TStringMap_obj,_brl_map_stringmap_tstringmap__root)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_stringmap_TStringMap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()",
			.var_address=(void*)&_brl_map_stringmap_TStringMap_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsEmpty",
			"()i",
			.var_address=(void*)&_brl_map_stringmap_TStringMap_IsEmpty
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Insert",
			"($,:Object)",
			.var_address=(void*)&_brl_map_stringmap_TStringMap_Insert_STObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Contains",
			"($)i",
			.var_address=(void*)&_brl_map_stringmap_TStringMap_Contains_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ValueForKey",
			"($):Object",
			.var_address=(void*)&_brl_map_stringmap_TStringMap_ValueForKey_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Remove",
			"($)i",
			.var_address=(void*)&_brl_map_stringmap_TStringMap_Remove_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_FirstNode",
			"():TStringNode",
			.var_address=(void*)&_brl_map_stringmap_TStringMap__FirstNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Keys",
			"():TStringMapEnumerator",
			.var_address=(void*)&_brl_map_stringmap_TStringMap_Keys
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Values",
			"():TStringMapEnumerator",
			.var_address=(void*)&_brl_map_stringmap_TStringMap_Values
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Copy",
			"():TStringMap",
			.var_address=(void*)&_brl_map_stringmap_TStringMap_Copy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TStringNodeEnumerator",
			.var_address=(void*)&_brl_map_stringmap_TStringMap_ObjectEnumerator
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"[]",
			"($):Object",
			.var_address=(void*)&_brl_map_stringmap_TStringMap__iget_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"[]=",
			"($,:Object)",
			.var_address=(void*)&_brl_map_stringmap_TStringMap__iset_STObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_stringmap_TStringMap brl_map_stringmap_TStringMap={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_stringmap_TStringMap_scope,
	sizeof(struct brl_map_stringmap_TStringMap_obj),
	(void (*)(BBOBJECT))_brl_map_stringmap_TStringMap_New,
	(void (*)(BBOBJECT))_brl_map_stringmap_TStringMap_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_stringmap_TStringMap_obj,_brl_map_stringmap_tstringmap__root) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_map_stringmap_TStringMap_Clear
	,_brl_map_stringmap_TStringMap_IsEmpty
	,_brl_map_stringmap_TStringMap_Insert_STObject
	,_brl_map_stringmap_TStringMap_Contains_S
	,_brl_map_stringmap_TStringMap_ValueForKey_S
	,_brl_map_stringmap_TStringMap_Remove_S
	,_brl_map_stringmap_TStringMap__FirstNode
	,_brl_map_stringmap_TStringMap_Keys
	,_brl_map_stringmap_TStringMap_Values
	,_brl_map_stringmap_TStringMap_Copy
	,_brl_map_stringmap_TStringMap_ObjectEnumerator
	,_brl_map_stringmap_TStringMap__iget_S
	,_brl_map_stringmap_TStringMap__iset_STObject
};

void _brl_map_stringmap_TStringNode_New(struct brl_map_stringmap_TStringNode_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_stringmap_TStringNode;
	o->_brl_map_stringmap_tstringnode__root = 0;
	o->_brl_map_stringmap_tstringnode__nodeptr = 0;
}
BBSTRING _brl_map_stringmap_TStringNode_Key(struct brl_map_stringmap_TStringNode_obj* o){
	return bmx_map_stringmap_key(o->_brl_map_stringmap_tstringnode__nodeptr );
}
BBOBJECT _brl_map_stringmap_TStringNode_Value(struct brl_map_stringmap_TStringNode_obj* o){
	return (BBOBJECT)bmx_map_stringmap_value(o->_brl_map_stringmap_tstringnode__nodeptr );
}
BBINT _brl_map_stringmap_TStringNode_HasNext(struct brl_map_stringmap_TStringNode_obj* o){
	return bmx_map_stringmap_hasnext(o->_brl_map_stringmap_tstringnode__nodeptr ,o->_brl_map_stringmap_tstringnode__root );
}
struct brl_map_stringmap_TStringNode_obj* _brl_map_stringmap_TStringNode_NextNode(struct brl_map_stringmap_TStringNode_obj* o){
	if(!(o->_brl_map_stringmap_tstringnode__nodeptr )){
		o->_brl_map_stringmap_tstringnode__nodeptr =bmx_map_stringmap_firstnode(o->_brl_map_stringmap_tstringnode__root );
	}else{
		o->_brl_map_stringmap_tstringnode__nodeptr =bmx_map_stringmap_nextnode(o->_brl_map_stringmap_tstringnode__nodeptr );
	}
	return (struct brl_map_stringmap_TStringNode_obj*)o;
}
struct BBDebugScope_7 brl_map_stringmap_TStringNode_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStringNode",
	{
		{
			BBDEBUGDECL_FIELD,
			"_root",
			"*b",
			.field_offset=offsetof(struct brl_map_stringmap_TStringNode_obj,_brl_map_stringmap_tstringnode__root)
		},
		{
			BBDEBUGDECL_FIELD,
			"_nodePtr",
			"*b",
			.field_offset=offsetof(struct brl_map_stringmap_TStringNode_obj,_brl_map_stringmap_tstringnode__nodeptr)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_stringmap_TStringNode_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Key",
			"()$",
			.var_address=(void*)&_brl_map_stringmap_TStringNode_Key
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Value",
			"():Object",
			.var_address=(void*)&_brl_map_stringmap_TStringNode_Value
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_stringmap_TStringNode_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextNode",
			"():TStringNode",
			.var_address=(void*)&_brl_map_stringmap_TStringNode_NextNode
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_stringmap_TStringNode brl_map_stringmap_TStringNode={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_stringmap_TStringNode_scope,
	sizeof(struct brl_map_stringmap_TStringNode_obj),
	(void (*)(BBOBJECT))_brl_map_stringmap_TStringNode_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_stringmap_TStringNode_obj,_brl_map_stringmap_tstringnode__nodeptr) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_map_stringmap_TStringNode_Key
	,_brl_map_stringmap_TStringNode_Value
	,_brl_map_stringmap_TStringNode_HasNext
	,_brl_map_stringmap_TStringNode_NextNode
};

void _brl_map_stringmap_TStringNodeEnumerator_New(struct brl_map_stringmap_TStringNodeEnumerator_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_stringmap_TStringNodeEnumerator;
	o->_brl_map_stringmap_tstringnodeenumerator__node = (struct brl_map_stringmap_TStringNode_obj*)(&bbNullObject);
	o->_brl_map_stringmap_tstringnodeenumerator__map = (struct brl_map_stringmap_TStringMap_obj*)(&bbNullObject);
}
BBINT _brl_map_stringmap_TStringNodeEnumerator_HasNext(struct brl_map_stringmap_TStringNodeEnumerator_obj* o){
	BBINT bbt_has=(o->_brl_map_stringmap_tstringnodeenumerator__node )->clas->m_HasNext((struct brl_map_stringmap_TStringNode_obj*)o->_brl_map_stringmap_tstringnodeenumerator__node );
	if(!(bbt_has!=0)){
		o->_brl_map_stringmap_tstringnodeenumerator__map =(struct brl_map_stringmap_TStringMap_obj*)&bbNullObject;
	}
	return bbt_has;
}
BBOBJECT _brl_map_stringmap_TStringNodeEnumerator_NextObject(struct brl_map_stringmap_TStringNodeEnumerator_obj* o){
	struct brl_map_stringmap_TStringNode_obj* bbt_node=(struct brl_map_stringmap_TStringNode_obj*)o->_brl_map_stringmap_tstringnodeenumerator__node ;
	o->_brl_map_stringmap_tstringnodeenumerator__node =(struct brl_map_stringmap_TStringNode_obj*)(o->_brl_map_stringmap_tstringnodeenumerator__node )->clas->m_NextNode((struct brl_map_stringmap_TStringNode_obj*)o->_brl_map_stringmap_tstringnodeenumerator__node );
	return (BBOBJECT)bbt_node;
}
struct BBDebugScope_5 brl_map_stringmap_TStringNodeEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStringNodeEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_node",
			":TStringNode",
			.field_offset=offsetof(struct brl_map_stringmap_TStringNodeEnumerator_obj,_brl_map_stringmap_tstringnodeenumerator__node)
		},
		{
			BBDEBUGDECL_FIELD,
			"_map",
			":TStringMap",
			.field_offset=offsetof(struct brl_map_stringmap_TStringNodeEnumerator_obj,_brl_map_stringmap_tstringnodeenumerator__map)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_stringmap_TStringNodeEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_stringmap_TStringNodeEnumerator_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_stringmap_TStringNodeEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_stringmap_TStringNodeEnumerator brl_map_stringmap_TStringNodeEnumerator={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_stringmap_TStringNodeEnumerator_scope,
	sizeof(struct brl_map_stringmap_TStringNodeEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_stringmap_TStringNodeEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_stringmap_TStringNodeEnumerator_obj,_brl_map_stringmap_tstringnodeenumerator__map) - sizeof(void*) + sizeof(struct brl_map_stringmap_TStringMap_obj*)
	,0
	,_brl_map_stringmap_TStringNodeEnumerator_HasNext
	,_brl_map_stringmap_TStringNodeEnumerator_NextObject
};

void _brl_map_stringmap_TStringKeyEnumerator_New(struct brl_map_stringmap_TStringKeyEnumerator_obj* o) {
	_brl_map_stringmap_TStringNodeEnumerator_New((struct brl_map_stringmap_TStringNodeEnumerator_obj*)o);
	o->clas = &brl_map_stringmap_TStringKeyEnumerator;
}
BBOBJECT _brl_map_stringmap_TStringKeyEnumerator_NextObject(struct brl_map_stringmap_TStringKeyEnumerator_obj* o){
	struct brl_map_stringmap_TStringNode_obj* bbt_node=(struct brl_map_stringmap_TStringNode_obj*)o->_brl_map_stringmap_tstringnodeenumerator__node ;
	o->_brl_map_stringmap_tstringnodeenumerator__node =(struct brl_map_stringmap_TStringNode_obj*)(o->_brl_map_stringmap_tstringnodeenumerator__node )->clas->m_NextNode((struct brl_map_stringmap_TStringNode_obj*)o->_brl_map_stringmap_tstringnodeenumerator__node );
	return (BBOBJECT)(bbt_node)->clas->m_Key((struct brl_map_stringmap_TStringNode_obj*)bbt_node);
}
struct BBDebugScope_2 brl_map_stringmap_TStringKeyEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStringKeyEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_stringmap_TStringKeyEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_stringmap_TStringKeyEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_stringmap_TStringKeyEnumerator brl_map_stringmap_TStringKeyEnumerator={
	&brl_map_stringmap_TStringNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_stringmap_TStringKeyEnumerator_scope,
	sizeof(struct brl_map_stringmap_TStringKeyEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_stringmap_TStringKeyEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_map_stringmap_TStringNodeEnumerator_HasNext
	,_brl_map_stringmap_TStringKeyEnumerator_NextObject
};

void _brl_map_stringmap_TStringValueEnumerator_New(struct brl_map_stringmap_TStringValueEnumerator_obj* o) {
	_brl_map_stringmap_TStringNodeEnumerator_New((struct brl_map_stringmap_TStringNodeEnumerator_obj*)o);
	o->clas = &brl_map_stringmap_TStringValueEnumerator;
}
BBOBJECT _brl_map_stringmap_TStringValueEnumerator_NextObject(struct brl_map_stringmap_TStringValueEnumerator_obj* o){
	struct brl_map_stringmap_TStringNode_obj* bbt_node=(struct brl_map_stringmap_TStringNode_obj*)o->_brl_map_stringmap_tstringnodeenumerator__node ;
	o->_brl_map_stringmap_tstringnodeenumerator__node =(struct brl_map_stringmap_TStringNode_obj*)(o->_brl_map_stringmap_tstringnodeenumerator__node )->clas->m_NextNode((struct brl_map_stringmap_TStringNode_obj*)o->_brl_map_stringmap_tstringnodeenumerator__node );
	return (BBOBJECT)(bbt_node)->clas->m_Value((struct brl_map_stringmap_TStringNode_obj*)bbt_node);
}
struct BBDebugScope_2 brl_map_stringmap_TStringValueEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStringValueEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_stringmap_TStringValueEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_stringmap_TStringValueEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_stringmap_TStringValueEnumerator brl_map_stringmap_TStringValueEnumerator={
	&brl_map_stringmap_TStringNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_stringmap_TStringValueEnumerator_scope,
	sizeof(struct brl_map_stringmap_TStringValueEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_stringmap_TStringValueEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_map_stringmap_TStringNodeEnumerator_HasNext
	,_brl_map_stringmap_TStringValueEnumerator_NextObject
};

void _brl_map_stringmap_TStringMapEnumerator_New(struct brl_map_stringmap_TStringMapEnumerator_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_stringmap_TStringMapEnumerator;
	o->_brl_map_stringmap_tstringmapenumerator__enumerator = (struct brl_map_stringmap_TStringNodeEnumerator_obj*)(&bbNullObject);
}
struct brl_map_stringmap_TStringNodeEnumerator_obj* _brl_map_stringmap_TStringMapEnumerator_ObjectEnumerator(struct brl_map_stringmap_TStringMapEnumerator_obj* o){
	return (struct brl_map_stringmap_TStringNodeEnumerator_obj*)o->_brl_map_stringmap_tstringmapenumerator__enumerator ;
}
struct BBDebugScope_3 brl_map_stringmap_TStringMapEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStringMapEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_enumerator",
			":TStringNodeEnumerator",
			.field_offset=offsetof(struct brl_map_stringmap_TStringMapEnumerator_obj,_brl_map_stringmap_tstringmapenumerator__enumerator)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_stringmap_TStringMapEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TStringNodeEnumerator",
			.var_address=(void*)&_brl_map_stringmap_TStringMapEnumerator_ObjectEnumerator
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_stringmap_TStringMapEnumerator brl_map_stringmap_TStringMapEnumerator={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_stringmap_TStringMapEnumerator_scope,
	sizeof(struct brl_map_stringmap_TStringMapEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_stringmap_TStringMapEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_stringmap_TStringMapEnumerator_obj,_brl_map_stringmap_tstringmapenumerator__enumerator) - sizeof(void*) + sizeof(struct brl_map_stringmap_TStringNodeEnumerator_obj*)
	,0
	,_brl_map_stringmap_TStringMapEnumerator_ObjectEnumerator
};

void _brl_map_stringmap_TStringEmptyEnumerator_New(struct brl_map_stringmap_TStringEmptyEnumerator_obj* o) {
	_brl_map_stringmap_TStringNodeEnumerator_New((struct brl_map_stringmap_TStringNodeEnumerator_obj*)o);
	o->clas = &brl_map_stringmap_TStringEmptyEnumerator;
}
BBINT _brl_map_stringmap_TStringEmptyEnumerator_HasNext(struct brl_map_stringmap_TStringEmptyEnumerator_obj* o){
	o->_brl_map_stringmap_tstringnodeenumerator__map =(struct brl_map_stringmap_TStringMap_obj*)&bbNullObject;
	return 0;
}
struct BBDebugScope_2 brl_map_stringmap_TStringEmptyEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStringEmptyEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_stringmap_TStringEmptyEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_stringmap_TStringEmptyEnumerator_HasNext
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_stringmap_TStringEmptyEnumerator brl_map_stringmap_TStringEmptyEnumerator={
	&brl_map_stringmap_TStringNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_stringmap_TStringEmptyEnumerator_scope,
	sizeof(struct brl_map_stringmap_TStringEmptyEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_stringmap_TStringEmptyEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_map_stringmap_TStringEmptyEnumerator_HasNext
	,_brl_map_stringmap_TStringNodeEnumerator_NextObject
};

static int _bb_brl_map_stringmap_inited = 0;
int _bb_brl_map_stringmap(){
	if (!_bb_brl_map_stringmap_inited) {
		_bb_brl_map_stringmap_inited = 1;
		__bb_brl_blitz_blitz();
		bbObjectRegisterType((BBCLASS)&brl_map_stringmap_TStringMap);
		bbObjectRegisterType((BBCLASS)&brl_map_stringmap_TStringNode);
		bbObjectRegisterType((BBCLASS)&brl_map_stringmap_TStringNodeEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_stringmap_TStringKeyEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_stringmap_TStringValueEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_stringmap_TStringMapEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_stringmap_TStringEmptyEnumerator);
		return 0;
	}
	return 0;
}