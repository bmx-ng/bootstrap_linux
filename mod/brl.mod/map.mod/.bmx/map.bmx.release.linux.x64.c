#include <brl.mod/map.mod/.bmx/map.bmx.release.linux.x64.h>
static BBString _s1={
	&bbStringClass,
	2,
	{45,49}
};
static BBString _s2={
	&bbStringClass,
	1,
	{49}
};
static BBString _s0={
	&bbStringClass,
	30,
	{67,97,110,39,116,32,105,110,115,101,114,116,32,78,117,108,108
	,32,107,101,121,32,105,110,116,111,32,109,97,112}
};
struct BBDebugScope_11{int kind; const char *name; BBDebugDecl decls[12]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_24{int kind; const char *name; BBDebugDecl decls[25]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct brl_map_TNode_obj* brl_map_nil;
void _brl_map_TKeyValue_New(struct brl_map_TKeyValue_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_TKeyValue;
	o->_brl_map_tkeyvalue__key = (BBOBJECT)(&bbNullObject);
	o->_brl_map_tkeyvalue__value = (BBOBJECT)(&bbNullObject);
}
BBOBJECT _brl_map_TKeyValue_Key(struct brl_map_TKeyValue_obj* o){
	return (BBOBJECT)o->_brl_map_tkeyvalue__key ;
}
BBOBJECT _brl_map_TKeyValue_Value(struct brl_map_TKeyValue_obj* o){
	return (BBOBJECT)o->_brl_map_tkeyvalue__value ;
}
struct BBDebugScope_5 brl_map_TKeyValue_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TKeyValue",
	{
		{
			BBDEBUGDECL_FIELD,
			"_key",
			":Object",
			.field_offset=offsetof(struct brl_map_TKeyValue_obj,_brl_map_tkeyvalue__key)
		},
		{
			BBDEBUGDECL_FIELD,
			"_value",
			":Object",
			.field_offset=offsetof(struct brl_map_TKeyValue_obj,_brl_map_tkeyvalue__value)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_TKeyValue_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Key",
			"():Object",
			.var_address=(void*)&_brl_map_TKeyValue_Key
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Value",
			"():Object",
			.var_address=(void*)&_brl_map_TKeyValue_Value
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_TKeyValue brl_map_TKeyValue={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_TKeyValue_scope,
	sizeof(struct brl_map_TKeyValue_obj),
	(void (*)(BBOBJECT))_brl_map_TKeyValue_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_TKeyValue_obj,_brl_map_tkeyvalue__value) - sizeof(void*) + sizeof(BBOBJECT)
	,0
	,_brl_map_TKeyValue_Key
	,_brl_map_TKeyValue_Value
};

void _brl_map_TNode_New(struct brl_map_TNode_obj* o) {
	_brl_map_TKeyValue_New((struct brl_map_TKeyValue_obj*)o);
	o->clas = &brl_map_TNode;
	o->_brl_map_tnode__color = 0;
	o->_brl_map_tnode__parent = (struct brl_map_TNode_obj*)brl_map_nil;
	o->_brl_map_tnode__left = (struct brl_map_TNode_obj*)brl_map_nil;
	o->_brl_map_tnode__right = (struct brl_map_TNode_obj*)brl_map_nil;
}
struct brl_map_TNode_obj* _brl_map_TNode_NextNode(struct brl_map_TNode_obj* o){
	struct brl_map_TNode_obj* bbt_node=(struct brl_map_TNode_obj*)o;
	if(bbt_node->_brl_map_tnode__right !=brl_map_nil){
		bbt_node=(struct brl_map_TNode_obj*)o->_brl_map_tnode__right ;
		while(bbt_node->_brl_map_tnode__left !=brl_map_nil){
			bbt_node=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__left ;
		}
		return (struct brl_map_TNode_obj*)bbt_node;
	}
	struct brl_map_TNode_obj* bbt_parent=(struct brl_map_TNode_obj*)o->_brl_map_tnode__parent ;
	while(bbt_node==bbt_parent->_brl_map_tnode__right ){
		bbt_node=(struct brl_map_TNode_obj*)bbt_parent;
		bbt_parent=(struct brl_map_TNode_obj*)bbt_parent->_brl_map_tnode__parent ;
	}
	return (struct brl_map_TNode_obj*)bbt_parent;
}
struct brl_map_TNode_obj* _brl_map_TNode_PrevNode(struct brl_map_TNode_obj* o){
	struct brl_map_TNode_obj* bbt_node=(struct brl_map_TNode_obj*)o;
	if(bbt_node->_brl_map_tnode__left !=brl_map_nil){
		bbt_node=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__left ;
		while(bbt_node->_brl_map_tnode__right !=brl_map_nil){
			bbt_node=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__right ;
		}
		return (struct brl_map_TNode_obj*)bbt_node;
	}
	struct brl_map_TNode_obj* bbt_parent=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__parent ;
	while(bbt_node==bbt_parent->_brl_map_tnode__left ){
		bbt_node=(struct brl_map_TNode_obj*)bbt_parent;
		bbt_parent=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__parent ;
	}
	return (struct brl_map_TNode_obj*)bbt_parent;
}
void _brl_map_TNode_Clear(struct brl_map_TNode_obj* o){
	o->_brl_map_tnode__parent =(struct brl_map_TNode_obj*)&bbNullObject;
	if(o->_brl_map_tnode__left !=brl_map_nil){
		(o->_brl_map_tnode__left )->clas->m_Clear((struct brl_map_TNode_obj*)o->_brl_map_tnode__left );
	}
	if(o->_brl_map_tnode__right !=brl_map_nil){
		(o->_brl_map_tnode__right )->clas->m_Clear((struct brl_map_TNode_obj*)o->_brl_map_tnode__right );
	}
}
struct brl_map_TNode_obj* _brl_map_TNode_Copy_TTNode(struct brl_map_TNode_obj* o,struct brl_map_TNode_obj* bbt_parent){
	struct brl_map_TNode_obj* bbt_t=(struct brl_map_TNode_obj*)(struct brl_map_TNode_obj*)bbObjectNew((BBClass *)&brl_map_TNode);
	bbt_t->_brl_map_tkeyvalue__key =(BBOBJECT)o->_brl_map_tkeyvalue__key ;
	bbt_t->_brl_map_tkeyvalue__value =(BBOBJECT)o->_brl_map_tkeyvalue__value ;
	bbt_t->_brl_map_tnode__color =o->_brl_map_tnode__color ;
	bbt_t->_brl_map_tnode__parent =(struct brl_map_TNode_obj*)bbt_parent;
	if(o->_brl_map_tnode__left !=brl_map_nil){
		bbt_t->_brl_map_tnode__left =(struct brl_map_TNode_obj*)(o->_brl_map_tnode__left )->clas->m_Copy_TTNode((struct brl_map_TNode_obj*)o->_brl_map_tnode__left ,(struct brl_map_TNode_obj*)bbt_t);
	}
	if(o->_brl_map_tnode__right !=brl_map_nil){
		bbt_t->_brl_map_tnode__right =(struct brl_map_TNode_obj*)(o->_brl_map_tnode__right )->clas->m_Copy_TTNode((struct brl_map_TNode_obj*)o->_brl_map_tnode__right ,(struct brl_map_TNode_obj*)bbt_t);
	}
	return (struct brl_map_TNode_obj*)bbt_t;
}
BBOBJECT _brl_map_TNode_Key(struct brl_map_TNode_obj* o){
	return (BBOBJECT)o->_brl_map_tkeyvalue__key ;
}
BBOBJECT _brl_map_TNode_Value(struct brl_map_TNode_obj* o){
	return (BBOBJECT)o->_brl_map_tkeyvalue__value ;
}
struct BBDebugScope_11 brl_map_TNode_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TNode",
	{
		{
			BBDEBUGDECL_FIELD,
			"_color",
			"i",
			.field_offset=offsetof(struct brl_map_TNode_obj,_brl_map_tnode__color)
		},
		{
			BBDEBUGDECL_FIELD,
			"_parent",
			":TNode",
			.field_offset=offsetof(struct brl_map_TNode_obj,_brl_map_tnode__parent)
		},
		{
			BBDEBUGDECL_FIELD,
			"_left",
			":TNode",
			.field_offset=offsetof(struct brl_map_TNode_obj,_brl_map_tnode__left)
		},
		{
			BBDEBUGDECL_FIELD,
			"_right",
			":TNode",
			.field_offset=offsetof(struct brl_map_TNode_obj,_brl_map_tnode__right)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_TNode_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextNode",
			"():TNode",
			.var_address=(void*)&_brl_map_TNode_NextNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PrevNode",
			"():TNode",
			.var_address=(void*)&_brl_map_TNode_PrevNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()",
			.var_address=(void*)&_brl_map_TNode_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Copy",
			"(:TNode):TNode",
			.var_address=(void*)&_brl_map_TNode_Copy_TTNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Key",
			"():Object",
			.var_address=(void*)&_brl_map_TNode_Key
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Value",
			"():Object",
			.var_address=(void*)&_brl_map_TNode_Value
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_TNode brl_map_TNode={
	&brl_map_TKeyValue,
	bbObjectFree,
	(BBDebugScope*)&brl_map_TNode_scope,
	sizeof(struct brl_map_TNode_obj),
	(void (*)(BBOBJECT))_brl_map_TNode_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_TNode_obj,_brl_map_tnode__right) - sizeof(void*) + sizeof(struct brl_map_TNode_obj*)
	,0
	,_brl_map_TNode_Key
	,_brl_map_TNode_Value
	,_brl_map_TNode_NextNode
	,_brl_map_TNode_PrevNode
	,_brl_map_TNode_Clear
	,_brl_map_TNode_Copy_TTNode
};

void _brl_map_TMap_New(struct brl_map_TMap_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_TMap;
	o->_brl_map_tmap__root = (struct brl_map_TNode_obj*)brl_map_nil;
}
void _brl_map_TMap_Clear(struct brl_map_TMap_obj* o){
	if(o->_brl_map_tmap__root ==brl_map_nil){
		return;
	}
	(o->_brl_map_tmap__root )->clas->m_Clear((struct brl_map_TNode_obj*)o->_brl_map_tmap__root );
	o->_brl_map_tmap__root =(struct brl_map_TNode_obj*)brl_map_nil;
}
BBINT _brl_map_TMap_IsEmpty(struct brl_map_TMap_obj* o){
	return (o->_brl_map_tmap__root ==brl_map_nil);
}
void _brl_map_TMap_Insert_TObjectTObject(struct brl_map_TMap_obj* o,BBOBJECT bbt_key,BBOBJECT bbt_value){
	struct brl_map_TNode_obj* bbt_node=(struct brl_map_TNode_obj*)o->_brl_map_tmap__root ;
	struct brl_map_TNode_obj* bbt_parent=(struct brl_map_TNode_obj*)brl_map_nil;
	BBINT bbt_cmp=0;
	while(bbt_node!=brl_map_nil){
		bbt_parent=(struct brl_map_TNode_obj*)bbt_node;
		bbt_cmp=(bbt_key)->clas->Compare((BBOBJECT)bbt_key,(BBOBJECT)bbt_node->_brl_map_tkeyvalue__key );
		if(bbt_cmp>0){
			bbt_node=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__right ;
		}else{
			if(bbt_cmp<0){
				bbt_node=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__left ;
			}else{
				bbt_node->_brl_map_tkeyvalue__value =(BBOBJECT)bbt_value;
				return;
			}
		}
	}
	bbt_node=(struct brl_map_TNode_obj*)(struct brl_map_TNode_obj*)bbObjectNew((BBClass *)&brl_map_TNode);
	bbt_node->_brl_map_tkeyvalue__key =(BBOBJECT)bbt_key;
	bbt_node->_brl_map_tkeyvalue__value =(BBOBJECT)bbt_value;
	bbt_node->_brl_map_tnode__color =-1;
	bbt_node->_brl_map_tnode__parent =(struct brl_map_TNode_obj*)bbt_parent;
	if(bbt_parent==brl_map_nil){
		o->_brl_map_tmap__root =(struct brl_map_TNode_obj*)bbt_node;
		return;
	}
	if(bbt_cmp>0){
		bbt_parent->_brl_map_tnode__right =(struct brl_map_TNode_obj*)bbt_node;
	}else{
		bbt_parent->_brl_map_tnode__left =(struct brl_map_TNode_obj*)bbt_node;
	}
	((struct brl_map_TMap_obj*)o)->clas->m__InsertFixup_TTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_node);
}
BBINT _brl_map_TMap_Contains_TObject(struct brl_map_TMap_obj* o,BBOBJECT bbt_key){
	return (((struct brl_map_TMap_obj*)o)->clas->m__FindNode_TObject((struct brl_map_TMap_obj*)o,(BBOBJECT)bbt_key)!=brl_map_nil);
}
BBOBJECT _brl_map_TMap_ValueForKey_TObject(struct brl_map_TMap_obj* o,BBOBJECT bbt_key){
	struct brl_map_TNode_obj* bbt_node=(struct brl_map_TNode_obj*)((struct brl_map_TMap_obj*)o)->clas->m__FindNode_TObject((struct brl_map_TMap_obj*)o,(BBOBJECT)bbt_key);
	if(bbt_node!=brl_map_nil){
		return (BBOBJECT)bbt_node->_brl_map_tkeyvalue__value ;
	}
	return (BBOBJECT)(&bbNullObject);
}
BBINT _brl_map_TMap_Remove_TObject(struct brl_map_TMap_obj* o,BBOBJECT bbt_key){
	struct brl_map_TNode_obj* bbt_node=(struct brl_map_TNode_obj*)((struct brl_map_TMap_obj*)o)->clas->m__FindNode_TObject((struct brl_map_TMap_obj*)o,(BBOBJECT)bbt_key);
	if(bbt_node==brl_map_nil){
		return 0;
	}
	((struct brl_map_TMap_obj*)o)->clas->m__RemoveNode_TTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_node);
	return 1;
}
struct brl_map_TMapEnumerator_obj* _brl_map_TMap_Keys(struct brl_map_TMap_obj* o){
	struct brl_map_TNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_TNodeEnumerator_obj*)((struct brl_map_TNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_TKeyEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_TKeyEnumerator),(BBClass*)&brl_map_TNodeEnumerator));
	bbt_nodeenum->_brl_map_tnodeenumerator__node =(struct brl_map_TNode_obj*)((struct brl_map_TMap_obj*)o)->clas->m__FirstNode((struct brl_map_TMap_obj*)o);
	struct brl_map_TMapEnumerator_obj* bbt_mapenum=(struct brl_map_TMapEnumerator_obj*)(struct brl_map_TMapEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_TMapEnumerator);
	bbt_mapenum->_brl_map_tmapenumerator__enumerator =(struct brl_map_TNodeEnumerator_obj*)bbt_nodeenum;
	bbt_nodeenum->_brl_map_tnodeenumerator__map =(struct brl_map_TMap_obj*)o;
	return (struct brl_map_TMapEnumerator_obj*)bbt_mapenum;
}
struct brl_map_TMapEnumerator_obj* _brl_map_TMap_Values(struct brl_map_TMap_obj* o){
	struct brl_map_TNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_TNodeEnumerator_obj*)((struct brl_map_TNodeEnumerator_obj*)bbObjectDowncast((BBOBJECT)(struct brl_map_TValueEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_TValueEnumerator),(BBClass*)&brl_map_TNodeEnumerator));
	bbt_nodeenum->_brl_map_tnodeenumerator__node =(struct brl_map_TNode_obj*)((struct brl_map_TMap_obj*)o)->clas->m__FirstNode((struct brl_map_TMap_obj*)o);
	struct brl_map_TMapEnumerator_obj* bbt_mapenum=(struct brl_map_TMapEnumerator_obj*)(struct brl_map_TMapEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_TMapEnumerator);
	bbt_mapenum->_brl_map_tmapenumerator__enumerator =(struct brl_map_TNodeEnumerator_obj*)bbt_nodeenum;
	bbt_nodeenum->_brl_map_tnodeenumerator__map =(struct brl_map_TMap_obj*)o;
	return (struct brl_map_TMapEnumerator_obj*)bbt_mapenum;
}
struct brl_map_TMap_obj* _brl_map_TMap_Copy(struct brl_map_TMap_obj* o){
	struct brl_map_TMap_obj* bbt_map=(struct brl_map_TMap_obj*)(struct brl_map_TMap_obj*)bbObjectNew((BBClass *)&brl_map_TMap);
	if(o->_brl_map_tmap__root !=brl_map_nil){
		bbt_map->_brl_map_tmap__root =(struct brl_map_TNode_obj*)(o->_brl_map_tmap__root )->clas->m_Copy_TTNode((struct brl_map_TNode_obj*)o->_brl_map_tmap__root ,(struct brl_map_TNode_obj*)brl_map_nil);
	}
	return (struct brl_map_TMap_obj*)bbt_map;
}
struct brl_map_TNodeEnumerator_obj* _brl_map_TMap_ObjectEnumerator(struct brl_map_TMap_obj* o){
	struct brl_map_TNodeEnumerator_obj* bbt_nodeenum=(struct brl_map_TNodeEnumerator_obj*)(struct brl_map_TNodeEnumerator_obj*)bbObjectNew((BBClass *)&brl_map_TNodeEnumerator);
	bbt_nodeenum->_brl_map_tnodeenumerator__node =(struct brl_map_TNode_obj*)((struct brl_map_TMap_obj*)o)->clas->m__FirstNode((struct brl_map_TMap_obj*)o);
	bbt_nodeenum->_brl_map_tnodeenumerator__map =(struct brl_map_TMap_obj*)o;
	return (struct brl_map_TNodeEnumerator_obj*)bbt_nodeenum;
}
struct brl_map_TNode_obj* _brl_map_TMap__FirstNode(struct brl_map_TMap_obj* o){
	struct brl_map_TNode_obj* bbt_node=(struct brl_map_TNode_obj*)o->_brl_map_tmap__root ;
	while(bbt_node->_brl_map_tnode__left !=brl_map_nil){
		bbt_node=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__left ;
	}
	return (struct brl_map_TNode_obj*)bbt_node;
}
struct brl_map_TNode_obj* _brl_map_TMap__LastNode(struct brl_map_TMap_obj* o){
	struct brl_map_TNode_obj* bbt_node=(struct brl_map_TNode_obj*)o->_brl_map_tmap__root ;
	while(bbt_node->_brl_map_tnode__right !=brl_map_nil){
		bbt_node=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__right ;
	}
	return (struct brl_map_TNode_obj*)bbt_node;
}
struct brl_map_TNode_obj* _brl_map_TMap__FindNode_TObject(struct brl_map_TMap_obj* o,BBOBJECT bbt_key){
	struct brl_map_TNode_obj* bbt_node=(struct brl_map_TNode_obj*)o->_brl_map_tmap__root ;
	while(bbt_node!=brl_map_nil){
		BBINT bbt_cmp=(bbt_key)->clas->Compare((BBOBJECT)bbt_key,(BBOBJECT)bbt_node->_brl_map_tkeyvalue__key );
		if(bbt_cmp>0){
			bbt_node=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__right ;
		}else{
			if(bbt_cmp<0){
				bbt_node=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__left ;
			}else{
				return (struct brl_map_TNode_obj*)bbt_node;
			}
		}
	}
	return (struct brl_map_TNode_obj*)bbt_node;
}
void _brl_map_TMap__RemoveNode_TTNode(struct brl_map_TMap_obj* o,struct brl_map_TNode_obj* bbt_node){
	struct brl_map_TNode_obj* bbt_splice=(struct brl_map_TNode_obj*)(&bbNullObject);
	struct brl_map_TNode_obj* bbt_child=(struct brl_map_TNode_obj*)(&bbNullObject);
	if(bbt_node->_brl_map_tnode__left ==brl_map_nil){
		bbt_splice=(struct brl_map_TNode_obj*)bbt_node;
		bbt_child=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__right ;
	}else{
		if(bbt_node->_brl_map_tnode__right ==brl_map_nil){
			bbt_splice=(struct brl_map_TNode_obj*)bbt_node;
			bbt_child=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__left ;
		}else{
			bbt_splice=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__left ;
			while(bbt_splice->_brl_map_tnode__right !=brl_map_nil){
				bbt_splice=(struct brl_map_TNode_obj*)bbt_splice->_brl_map_tnode__right ;
			}
			bbt_child=(struct brl_map_TNode_obj*)bbt_splice->_brl_map_tnode__left ;
			bbt_node->_brl_map_tkeyvalue__key =(BBOBJECT)bbt_splice->_brl_map_tkeyvalue__key ;
			bbt_node->_brl_map_tkeyvalue__value =(BBOBJECT)bbt_splice->_brl_map_tkeyvalue__value ;
		}
	}
	struct brl_map_TNode_obj* bbt_parent=(struct brl_map_TNode_obj*)bbt_splice->_brl_map_tnode__parent ;
	if(bbt_child!=brl_map_nil){
		bbt_child->_brl_map_tnode__parent =(struct brl_map_TNode_obj*)bbt_parent;
	}
	if(bbt_parent==brl_map_nil){
		o->_brl_map_tmap__root =(struct brl_map_TNode_obj*)bbt_child;
		return;
	}
	if(bbt_splice==bbt_parent->_brl_map_tnode__left ){
		bbt_parent->_brl_map_tnode__left =(struct brl_map_TNode_obj*)bbt_child;
	}else{
		bbt_parent->_brl_map_tnode__right =(struct brl_map_TNode_obj*)bbt_child;
	}
	if(bbt_splice->_brl_map_tnode__color ==1){
		((struct brl_map_TMap_obj*)o)->clas->m__DeleteFixup_TTNodeTTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_child,(struct brl_map_TNode_obj*)bbt_parent);
	}
}
void _brl_map_TMap__InsertFixup_TTNode(struct brl_map_TMap_obj* o,struct brl_map_TNode_obj* bbt_node){
	while((bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__color ==-1) && (bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__parent !=brl_map_nil)){
		if(bbt_node->_brl_map_tnode__parent ==bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__parent ->_brl_map_tnode__left ){
			struct brl_map_TNode_obj* bbt_uncle=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__parent ->_brl_map_tnode__right ;
			if(bbt_uncle->_brl_map_tnode__color ==-1){
				bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__color =1;
				bbt_uncle->_brl_map_tnode__color =1;
				bbt_uncle->_brl_map_tnode__parent ->_brl_map_tnode__color =-1;
				bbt_node=(struct brl_map_TNode_obj*)bbt_uncle->_brl_map_tnode__parent ;
			}else{
				if(bbt_node==bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__right ){
					bbt_node=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__parent ;
					((struct brl_map_TMap_obj*)o)->clas->m__RotateLeft_TTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_node);
				}
				bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__color =1;
				bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__parent ->_brl_map_tnode__color =-1;
				((struct brl_map_TMap_obj*)o)->clas->m__RotateRight_TTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__parent );
			}
		}else{
			struct brl_map_TNode_obj* bbt_uncle2=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__parent ->_brl_map_tnode__left ;
			if(bbt_uncle2->_brl_map_tnode__color ==-1){
				bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__color =1;
				bbt_uncle2->_brl_map_tnode__color =1;
				bbt_uncle2->_brl_map_tnode__parent ->_brl_map_tnode__color =-1;
				bbt_node=(struct brl_map_TNode_obj*)bbt_uncle2->_brl_map_tnode__parent ;
			}else{
				if(bbt_node==bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__left ){
					bbt_node=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__parent ;
					((struct brl_map_TMap_obj*)o)->clas->m__RotateRight_TTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_node);
				}
				bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__color =1;
				bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__parent ->_brl_map_tnode__color =-1;
				((struct brl_map_TMap_obj*)o)->clas->m__RotateLeft_TTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__parent );
			}
		}
	}
	o->_brl_map_tmap__root ->_brl_map_tnode__color =1;
}
void _brl_map_TMap__RotateLeft_TTNode(struct brl_map_TMap_obj* o,struct brl_map_TNode_obj* bbt_node){
	struct brl_map_TNode_obj* bbt_child=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__right ;
	bbt_node->_brl_map_tnode__right =(struct brl_map_TNode_obj*)bbt_child->_brl_map_tnode__left ;
	if(bbt_child->_brl_map_tnode__left !=brl_map_nil){
		bbt_child->_brl_map_tnode__left ->_brl_map_tnode__parent =(struct brl_map_TNode_obj*)bbt_node;
	}
	bbt_child->_brl_map_tnode__parent =(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__parent ;
	if(bbt_node->_brl_map_tnode__parent !=brl_map_nil){
		if(bbt_node==bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__left ){
			bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__left =(struct brl_map_TNode_obj*)bbt_child;
		}else{
			bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__right =(struct brl_map_TNode_obj*)bbt_child;
		}
	}else{
		o->_brl_map_tmap__root =(struct brl_map_TNode_obj*)bbt_child;
	}
	bbt_child->_brl_map_tnode__left =(struct brl_map_TNode_obj*)bbt_node;
	bbt_node->_brl_map_tnode__parent =(struct brl_map_TNode_obj*)bbt_child;
}
void _brl_map_TMap__RotateRight_TTNode(struct brl_map_TMap_obj* o,struct brl_map_TNode_obj* bbt_node){
	struct brl_map_TNode_obj* bbt_child=(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__left ;
	bbt_node->_brl_map_tnode__left =(struct brl_map_TNode_obj*)bbt_child->_brl_map_tnode__right ;
	if(bbt_child->_brl_map_tnode__right !=brl_map_nil){
		bbt_child->_brl_map_tnode__right ->_brl_map_tnode__parent =(struct brl_map_TNode_obj*)bbt_node;
	}
	bbt_child->_brl_map_tnode__parent =(struct brl_map_TNode_obj*)bbt_node->_brl_map_tnode__parent ;
	if(bbt_node->_brl_map_tnode__parent !=brl_map_nil){
		if(bbt_node==bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__right ){
			bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__right =(struct brl_map_TNode_obj*)bbt_child;
		}else{
			bbt_node->_brl_map_tnode__parent ->_brl_map_tnode__left =(struct brl_map_TNode_obj*)bbt_child;
		}
	}else{
		o->_brl_map_tmap__root =(struct brl_map_TNode_obj*)bbt_child;
	}
	bbt_child->_brl_map_tnode__right =(struct brl_map_TNode_obj*)bbt_node;
	bbt_node->_brl_map_tnode__parent =(struct brl_map_TNode_obj*)bbt_child;
}
void _brl_map_TMap__DeleteFixup_TTNodeTTNode(struct brl_map_TMap_obj* o,struct brl_map_TNode_obj* bbt_node,struct brl_map_TNode_obj* bbt_parent){
	while((bbt_node!=o->_brl_map_tmap__root ) && (bbt_node->_brl_map_tnode__color ==1)){
		if(bbt_node==bbt_parent->_brl_map_tnode__left ){
			struct brl_map_TNode_obj* bbt_sib=(struct brl_map_TNode_obj*)bbt_parent->_brl_map_tnode__right ;
			if(bbt_sib->_brl_map_tnode__color ==-1){
				bbt_sib->_brl_map_tnode__color =1;
				bbt_parent->_brl_map_tnode__color =-1;
				((struct brl_map_TMap_obj*)o)->clas->m__RotateLeft_TTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_parent);
				bbt_sib=(struct brl_map_TNode_obj*)bbt_parent->_brl_map_tnode__right ;
			}
			if((bbt_sib->_brl_map_tnode__left ->_brl_map_tnode__color ==1) && (bbt_sib->_brl_map_tnode__right ->_brl_map_tnode__color ==1)){
				bbt_sib->_brl_map_tnode__color =-1;
				bbt_node=(struct brl_map_TNode_obj*)bbt_parent;
				bbt_parent=(struct brl_map_TNode_obj*)bbt_parent->_brl_map_tnode__parent ;
			}else{
				if(bbt_sib->_brl_map_tnode__right ->_brl_map_tnode__color ==1){
					bbt_sib->_brl_map_tnode__left ->_brl_map_tnode__color =1;
					bbt_sib->_brl_map_tnode__color =-1;
					((struct brl_map_TMap_obj*)o)->clas->m__RotateRight_TTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_sib);
					bbt_sib=(struct brl_map_TNode_obj*)bbt_parent->_brl_map_tnode__right ;
				}
				bbt_sib->_brl_map_tnode__color =bbt_parent->_brl_map_tnode__color ;
				bbt_parent->_brl_map_tnode__color =1;
				bbt_sib->_brl_map_tnode__right ->_brl_map_tnode__color =1;
				((struct brl_map_TMap_obj*)o)->clas->m__RotateLeft_TTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_parent);
				bbt_node=(struct brl_map_TNode_obj*)o->_brl_map_tmap__root ;
			}
		}else{
			struct brl_map_TNode_obj* bbt_sib2=(struct brl_map_TNode_obj*)bbt_parent->_brl_map_tnode__left ;
			if(bbt_sib2->_brl_map_tnode__color ==-1){
				bbt_sib2->_brl_map_tnode__color =1;
				bbt_parent->_brl_map_tnode__color =-1;
				((struct brl_map_TMap_obj*)o)->clas->m__RotateRight_TTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_parent);
				bbt_sib2=(struct brl_map_TNode_obj*)bbt_parent->_brl_map_tnode__left ;
			}
			if((bbt_sib2->_brl_map_tnode__right ->_brl_map_tnode__color ==1) && (bbt_sib2->_brl_map_tnode__left ->_brl_map_tnode__color ==1)){
				bbt_sib2->_brl_map_tnode__color =-1;
				bbt_node=(struct brl_map_TNode_obj*)bbt_parent;
				bbt_parent=(struct brl_map_TNode_obj*)bbt_parent->_brl_map_tnode__parent ;
			}else{
				if(bbt_sib2->_brl_map_tnode__left ->_brl_map_tnode__color ==1){
					bbt_sib2->_brl_map_tnode__right ->_brl_map_tnode__color =1;
					bbt_sib2->_brl_map_tnode__color =-1;
					((struct brl_map_TMap_obj*)o)->clas->m__RotateLeft_TTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_sib2);
					bbt_sib2=(struct brl_map_TNode_obj*)bbt_parent->_brl_map_tnode__left ;
				}
				bbt_sib2->_brl_map_tnode__color =bbt_parent->_brl_map_tnode__color ;
				bbt_parent->_brl_map_tnode__color =1;
				bbt_sib2->_brl_map_tnode__left ->_brl_map_tnode__color =1;
				((struct brl_map_TMap_obj*)o)->clas->m__RotateRight_TTNode((struct brl_map_TMap_obj*)o,(struct brl_map_TNode_obj*)bbt_parent);
				bbt_node=(struct brl_map_TNode_obj*)o->_brl_map_tmap__root ;
			}
		}
	}
	bbt_node->_brl_map_tnode__color =1;
}
BBOBJECT _brl_map_TMap__iget_TObject(struct brl_map_TMap_obj* o,BBOBJECT bbt_key){
	return (BBOBJECT)((struct brl_map_TMap_obj*)o)->clas->m_ValueForKey_TObject((struct brl_map_TMap_obj*)o,(BBOBJECT)bbt_key);
}
void _brl_map_TMap__iset_TObjectTObject(struct brl_map_TMap_obj* o,BBOBJECT bbt_key,BBOBJECT bbt_value){
	((struct brl_map_TMap_obj*)o)->clas->m_Insert_TObjectTObject((struct brl_map_TMap_obj*)o,(BBOBJECT)bbt_key,(BBOBJECT)bbt_value);
}
struct BBDebugScope_24 brl_map_TMap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TMap",
	{
		{
			BBDEBUGDECL_CONST,
			"RED",
			"i",
			.const_value=&_s1
		},
		{
			BBDEBUGDECL_CONST,
			"BLACK",
			"i",
			.const_value=&_s2
		},
		{
			BBDEBUGDECL_FIELD,
			"_root",
			":TNode",
			.field_offset=offsetof(struct brl_map_TMap_obj,_brl_map_tmap__root)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_TMap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()",
			.var_address=(void*)&_brl_map_TMap_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsEmpty",
			"()i",
			.var_address=(void*)&_brl_map_TMap_IsEmpty
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Insert",
			"(:Object,:Object)",
			.var_address=(void*)&_brl_map_TMap_Insert_TObjectTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Contains",
			"(:Object)i",
			.var_address=(void*)&_brl_map_TMap_Contains_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ValueForKey",
			"(:Object):Object",
			.var_address=(void*)&_brl_map_TMap_ValueForKey_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Remove",
			"(:Object)i",
			.var_address=(void*)&_brl_map_TMap_Remove_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Keys",
			"():TMapEnumerator",
			.var_address=(void*)&_brl_map_TMap_Keys
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Values",
			"():TMapEnumerator",
			.var_address=(void*)&_brl_map_TMap_Values
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Copy",
			"():TMap",
			.var_address=(void*)&_brl_map_TMap_Copy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TNodeEnumerator",
			.var_address=(void*)&_brl_map_TMap_ObjectEnumerator
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_FirstNode",
			"():TNode",
			.var_address=(void*)&_brl_map_TMap__FirstNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_LastNode",
			"():TNode",
			.var_address=(void*)&_brl_map_TMap__LastNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_FindNode",
			"(:Object):TNode",
			.var_address=(void*)&_brl_map_TMap__FindNode_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_RemoveNode",
			"(:TNode)",
			.var_address=(void*)&_brl_map_TMap__RemoveNode_TTNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_InsertFixup",
			"(:TNode)",
			.var_address=(void*)&_brl_map_TMap__InsertFixup_TTNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_RotateLeft",
			"(:TNode)",
			.var_address=(void*)&_brl_map_TMap__RotateLeft_TTNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_RotateRight",
			"(:TNode)",
			.var_address=(void*)&_brl_map_TMap__RotateRight_TTNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_DeleteFixup",
			"(:TNode,:TNode)",
			.var_address=(void*)&_brl_map_TMap__DeleteFixup_TTNodeTTNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"[]",
			"(:Object):Object",
			.var_address=(void*)&_brl_map_TMap__iget_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"[]=",
			"(:Object,:Object)",
			.var_address=(void*)&_brl_map_TMap__iset_TObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_TMap brl_map_TMap={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_TMap_scope,
	sizeof(struct brl_map_TMap_obj),
	(void (*)(BBOBJECT))_brl_map_TMap_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_TMap_obj,_brl_map_tmap__root) - sizeof(void*) + sizeof(struct brl_map_TNode_obj*)
	,0
	,_brl_map_TMap_Clear
	,_brl_map_TMap_IsEmpty
	,_brl_map_TMap_Insert_TObjectTObject
	,_brl_map_TMap_Contains_TObject
	,_brl_map_TMap_ValueForKey_TObject
	,_brl_map_TMap_Remove_TObject
	,_brl_map_TMap_Keys
	,_brl_map_TMap_Values
	,_brl_map_TMap_Copy
	,_brl_map_TMap_ObjectEnumerator
	,_brl_map_TMap__FirstNode
	,_brl_map_TMap__LastNode
	,_brl_map_TMap__FindNode_TObject
	,_brl_map_TMap__RemoveNode_TTNode
	,_brl_map_TMap__InsertFixup_TTNode
	,_brl_map_TMap__RotateLeft_TTNode
	,_brl_map_TMap__RotateRight_TTNode
	,_brl_map_TMap__DeleteFixup_TTNodeTTNode
	,_brl_map_TMap__iget_TObject
	,_brl_map_TMap__iset_TObjectTObject
};

void _brl_map_TNodeEnumerator_New(struct brl_map_TNodeEnumerator_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_TNodeEnumerator;
	o->_brl_map_tnodeenumerator__node = (struct brl_map_TNode_obj*)(&bbNullObject);
	o->_brl_map_tnodeenumerator__map = (struct brl_map_TMap_obj*)(&bbNullObject);
	o->_brl_map_tnodeenumerator__expectedmodcount = 0;
}
BBINT _brl_map_TNodeEnumerator_HasNext(struct brl_map_TNodeEnumerator_obj* o){
	BBINT bbt_has=(o->_brl_map_tnodeenumerator__node !=brl_map_nil);
	if(!(bbt_has!=0)){
		o->_brl_map_tnodeenumerator__map =(struct brl_map_TMap_obj*)&bbNullObject;
	}
	return bbt_has;
}
BBOBJECT _brl_map_TNodeEnumerator_NextObject(struct brl_map_TNodeEnumerator_obj* o){
	struct brl_map_TNode_obj* bbt_node=(struct brl_map_TNode_obj*)o->_brl_map_tnodeenumerator__node ;
	o->_brl_map_tnodeenumerator__node =(struct brl_map_TNode_obj*)(o->_brl_map_tnodeenumerator__node )->clas->m_NextNode((struct brl_map_TNode_obj*)o->_brl_map_tnodeenumerator__node );
	return (BBOBJECT)bbt_node;
}
struct BBDebugScope_6 brl_map_TNodeEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TNodeEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_node",
			":TNode",
			.field_offset=offsetof(struct brl_map_TNodeEnumerator_obj,_brl_map_tnodeenumerator__node)
		},
		{
			BBDEBUGDECL_FIELD,
			"_map",
			":TMap",
			.field_offset=offsetof(struct brl_map_TNodeEnumerator_obj,_brl_map_tnodeenumerator__map)
		},
		{
			BBDEBUGDECL_FIELD,
			"_expectedModCount",
			"i",
			.field_offset=offsetof(struct brl_map_TNodeEnumerator_obj,_brl_map_tnodeenumerator__expectedmodcount)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_TNodeEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_map_TNodeEnumerator_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_TNodeEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_TNodeEnumerator brl_map_TNodeEnumerator={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_TNodeEnumerator_scope,
	sizeof(struct brl_map_TNodeEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_TNodeEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_TNodeEnumerator_obj,_brl_map_tnodeenumerator__expectedmodcount) - sizeof(void*) + sizeof(BBINT)
	,0
	,_brl_map_TNodeEnumerator_HasNext
	,_brl_map_TNodeEnumerator_NextObject
};

void _brl_map_TKeyEnumerator_New(struct brl_map_TKeyEnumerator_obj* o) {
	_brl_map_TNodeEnumerator_New((struct brl_map_TNodeEnumerator_obj*)o);
	o->clas = &brl_map_TKeyEnumerator;
}
BBOBJECT _brl_map_TKeyEnumerator_NextObject(struct brl_map_TKeyEnumerator_obj* o){
	struct brl_map_TNode_obj* bbt_node=(struct brl_map_TNode_obj*)o->_brl_map_tnodeenumerator__node ;
	o->_brl_map_tnodeenumerator__node =(struct brl_map_TNode_obj*)(o->_brl_map_tnodeenumerator__node )->clas->m_NextNode((struct brl_map_TNode_obj*)o->_brl_map_tnodeenumerator__node );
	return (BBOBJECT)bbt_node->_brl_map_tkeyvalue__key ;
}
struct BBDebugScope_2 brl_map_TKeyEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TKeyEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_TKeyEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_TKeyEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_TKeyEnumerator brl_map_TKeyEnumerator={
	&brl_map_TNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_TKeyEnumerator_scope,
	sizeof(struct brl_map_TKeyEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_TKeyEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_map_TNodeEnumerator_HasNext
	,_brl_map_TKeyEnumerator_NextObject
};

void _brl_map_TValueEnumerator_New(struct brl_map_TValueEnumerator_obj* o) {
	_brl_map_TNodeEnumerator_New((struct brl_map_TNodeEnumerator_obj*)o);
	o->clas = &brl_map_TValueEnumerator;
}
BBOBJECT _brl_map_TValueEnumerator_NextObject(struct brl_map_TValueEnumerator_obj* o){
	struct brl_map_TNode_obj* bbt_node=(struct brl_map_TNode_obj*)o->_brl_map_tnodeenumerator__node ;
	o->_brl_map_tnodeenumerator__node =(struct brl_map_TNode_obj*)(o->_brl_map_tnodeenumerator__node )->clas->m_NextNode((struct brl_map_TNode_obj*)o->_brl_map_tnodeenumerator__node );
	return (BBOBJECT)bbt_node->_brl_map_tkeyvalue__value ;
}
struct BBDebugScope_2 brl_map_TValueEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TValueEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_TValueEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_map_TValueEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_TValueEnumerator brl_map_TValueEnumerator={
	&brl_map_TNodeEnumerator,
	bbObjectFree,
	(BBDebugScope*)&brl_map_TValueEnumerator_scope,
	sizeof(struct brl_map_TValueEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_TValueEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_map_TNodeEnumerator_HasNext
	,_brl_map_TValueEnumerator_NextObject
};

void _brl_map_TMapEnumerator_New(struct brl_map_TMapEnumerator_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_map_TMapEnumerator;
	o->_brl_map_tmapenumerator__enumerator = (struct brl_map_TNodeEnumerator_obj*)(&bbNullObject);
}
struct brl_map_TNodeEnumerator_obj* _brl_map_TMapEnumerator_ObjectEnumerator(struct brl_map_TMapEnumerator_obj* o){
	return (struct brl_map_TNodeEnumerator_obj*)o->_brl_map_tmapenumerator__enumerator ;
}
struct BBDebugScope_3 brl_map_TMapEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TMapEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_enumerator",
			":TNodeEnumerator",
			.field_offset=offsetof(struct brl_map_TMapEnumerator_obj,_brl_map_tmapenumerator__enumerator)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_map_TMapEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TNodeEnumerator",
			.var_address=(void*)&_brl_map_TMapEnumerator_ObjectEnumerator
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_map_TMapEnumerator brl_map_TMapEnumerator={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_map_TMapEnumerator_scope,
	sizeof(struct brl_map_TMapEnumerator_obj),
	(void (*)(BBOBJECT))_brl_map_TMapEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_map_TMapEnumerator_obj,_brl_map_tmapenumerator__enumerator) - sizeof(void*) + sizeof(struct brl_map_TNodeEnumerator_obj*)
	,0
	,_brl_map_TMapEnumerator_ObjectEnumerator
};

struct brl_map_TMap_obj* brl_map_CreateMap(){
	return (struct brl_map_TMap_obj*)(struct brl_map_TMap_obj*)bbObjectNew((BBClass *)&brl_map_TMap);
}
void brl_map_ClearMap(struct brl_map_TMap_obj* bbt_map){
	(bbt_map)->clas->m_Clear((struct brl_map_TMap_obj*)bbt_map);
}
BBINT brl_map_MapIsEmpty(struct brl_map_TMap_obj* bbt_map){
	return (bbt_map)->clas->m_IsEmpty((struct brl_map_TMap_obj*)bbt_map);
}
void brl_map_MapInsert(struct brl_map_TMap_obj* bbt_map,BBOBJECT bbt_key,BBOBJECT bbt_value){
	(bbt_map)->clas->m_Insert_TObjectTObject((struct brl_map_TMap_obj*)bbt_map,(BBOBJECT)bbt_key,(BBOBJECT)bbt_value);
}
BBOBJECT brl_map_MapValueForKey(struct brl_map_TMap_obj* bbt_map,BBOBJECT bbt_key){
	return (BBOBJECT)(bbt_map)->clas->m_ValueForKey_TObject((struct brl_map_TMap_obj*)bbt_map,(BBOBJECT)bbt_key);
}
BBINT brl_map_MapContains(struct brl_map_TMap_obj* bbt_map,BBOBJECT bbt_key){
	return (bbt_map)->clas->m_Contains_TObject((struct brl_map_TMap_obj*)bbt_map,(BBOBJECT)bbt_key);
}
void brl_map_MapRemove(struct brl_map_TMap_obj* bbt_map,BBOBJECT bbt_key){
	(bbt_map)->clas->m_Remove_TObject((struct brl_map_TMap_obj*)bbt_map,(BBOBJECT)bbt_key);
}
struct brl_map_TMapEnumerator_obj* brl_map_MapKeys(struct brl_map_TMap_obj* bbt_map){
	return (struct brl_map_TMapEnumerator_obj*)(bbt_map)->clas->m_Keys((struct brl_map_TMap_obj*)bbt_map);
}
struct brl_map_TMapEnumerator_obj* brl_map_MapValues(struct brl_map_TMap_obj* bbt_map){
	return (struct brl_map_TMapEnumerator_obj*)(bbt_map)->clas->m_Values((struct brl_map_TMap_obj*)bbt_map);
}
struct brl_map_TMap_obj* brl_map_CopyMap(struct brl_map_TMap_obj* bbt_map){
	return (struct brl_map_TMap_obj*)(bbt_map)->clas->m_Copy((struct brl_map_TMap_obj*)bbt_map);
}
static int __bb_brl_map_map_inited = 0;
int __bb_brl_map_map(){
	if (!__bb_brl_map_map_inited) {
		__bb_brl_map_map_inited = 1;
		GC_add_roots(&brl_map_nil, &brl_map_nil + 1);
		__bb_brl_blitz_blitz();
		_bb_brl_map_intmap();
		_bb_brl_map_ptrmap();
		_bb_brl_map_stringmap();
		_bb_brl_map_objectmap();
		bbObjectRegisterType((BBCLASS)&brl_map_TKeyValue);
		bbObjectRegisterType((BBCLASS)&brl_map_TNode);
		bbObjectRegisterType((BBCLASS)&brl_map_TMap);
		bbObjectRegisterType((BBCLASS)&brl_map_TNodeEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_TKeyEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_TValueEnumerator);
		bbObjectRegisterType((BBCLASS)&brl_map_TMapEnumerator);
		brl_map_nil=(struct brl_map_TNode_obj*)(struct brl_map_TNode_obj*)bbObjectNew((BBClass *)&brl_map_TNode);
		brl_map_nil->_brl_map_tnode__color =1;
		brl_map_nil->_brl_map_tnode__parent =(struct brl_map_TNode_obj*)brl_map_nil;
		brl_map_nil->_brl_map_tnode__left =(struct brl_map_TNode_obj*)brl_map_nil;
		brl_map_nil->_brl_map_tnode__right =(struct brl_map_TNode_obj*)brl_map_nil;
		return 0;
	}
	return 0;
}