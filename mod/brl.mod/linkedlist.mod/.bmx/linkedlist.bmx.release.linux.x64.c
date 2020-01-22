#include <brl.mod/linkedlist.mod/.bmx/linkedlist.bmx.release.linux.x64.h>
static BBString _s0={
	&bbStringClass,
	34,
	{67,97,110,39,116,32,105,110,115,101,114,116,32,78,117,108,108
	,32,111,98,106,101,99,116,32,105,110,116,111,32,108,105,115
	,116}
};
static BBString _s2={
	&bbStringClass,
	23,
	{76,105,115,116,32,105,110,100,101,120,32,111,117,116,32,111,102
	,32,114,97,110,103,101}
};
static BBString _s1={
	&bbStringClass,
	29,
	{79,98,106,101,99,116,32,105,110,100,101,120,32,109,117,115,116
	,32,98,101,32,112,111,115,105,116,105,118,101}
};
struct BBDebugScope_30{int kind; const char *name; BBDebugDecl decls[31]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void _brl_linkedlist_TLink_New(struct brl_linkedlist_TLink_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_linkedlist_TLink;
	o->_brl_linkedlist_tlink__value = (BBOBJECT)(&bbNullObject);
	o->_brl_linkedlist_tlink__succ = (struct brl_linkedlist_TLink_obj*)(&bbNullObject);
	o->_brl_linkedlist_tlink__pred = (struct brl_linkedlist_TLink_obj*)(&bbNullObject);
}
BBOBJECT _brl_linkedlist_TLink_Value(struct brl_linkedlist_TLink_obj* o){
	return (BBOBJECT)o->_brl_linkedlist_tlink__value ;
}
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TLink_NextLink(struct brl_linkedlist_TLink_obj* o){
	if(o->_brl_linkedlist_tlink__succ ->_brl_linkedlist_tlink__value !=o->_brl_linkedlist_tlink__succ ){
		return (struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlink__succ ;
	}
	return (struct brl_linkedlist_TLink_obj*)(&bbNullObject);
}
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TLink_PrevLink(struct brl_linkedlist_TLink_obj* o){
	if(o->_brl_linkedlist_tlink__pred ->_brl_linkedlist_tlink__value !=o->_brl_linkedlist_tlink__pred ){
		return (struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlink__pred ;
	}
	return (struct brl_linkedlist_TLink_obj*)(&bbNullObject);
}
BBINT _brl_linkedlist_TLink_Remove(struct brl_linkedlist_TLink_obj* o){
	o->_brl_linkedlist_tlink__value =(BBOBJECT)&bbNullObject;
	o->_brl_linkedlist_tlink__succ ->_brl_linkedlist_tlink__pred =(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlink__pred ;
	o->_brl_linkedlist_tlink__pred ->_brl_linkedlist_tlink__succ =(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlink__succ ;
	return 0;
}
struct BBDebugScope_8 brl_linkedlist_TLink_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TLink",
	{
		{
			BBDEBUGDECL_FIELD,
			"_value",
			":Object",
			.field_offset=offsetof(struct brl_linkedlist_TLink_obj,_brl_linkedlist_tlink__value)
		},
		{
			BBDEBUGDECL_FIELD,
			"_succ",
			":TLink",
			.field_offset=offsetof(struct brl_linkedlist_TLink_obj,_brl_linkedlist_tlink__succ)
		},
		{
			BBDEBUGDECL_FIELD,
			"_pred",
			":TLink",
			.field_offset=offsetof(struct brl_linkedlist_TLink_obj,_brl_linkedlist_tlink__pred)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_linkedlist_TLink_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Value",
			"():Object",
			.var_address=(void*)&_brl_linkedlist_TLink_Value
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextLink",
			"():TLink",
			.var_address=(void*)&_brl_linkedlist_TLink_NextLink
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"PrevLink",
			"():TLink",
			.var_address=(void*)&_brl_linkedlist_TLink_PrevLink
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Remove",
			"()i",
			.var_address=(void*)&_brl_linkedlist_TLink_Remove
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_linkedlist_TLink brl_linkedlist_TLink={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_linkedlist_TLink_scope,
	sizeof(struct brl_linkedlist_TLink_obj),
	(void (*)(BBOBJECT))_brl_linkedlist_TLink_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_linkedlist_TLink_obj,_brl_linkedlist_tlink__pred) - sizeof(void*) + sizeof(struct brl_linkedlist_TLink_obj*)
	,0
	,_brl_linkedlist_TLink_Value
	,_brl_linkedlist_TLink_NextLink
	,_brl_linkedlist_TLink_PrevLink
	,_brl_linkedlist_TLink_Remove
};

void _brl_linkedlist_TListEnum_New(struct brl_linkedlist_TListEnum_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_linkedlist_TListEnum;
	o->_brl_linkedlist_tlistenum__link = (struct brl_linkedlist_TLink_obj*)(&bbNullObject);
}
BBINT _brl_linkedlist_TListEnum_HasNext(struct brl_linkedlist_TListEnum_obj* o){
	return (o->_brl_linkedlist_tlistenum__link ->_brl_linkedlist_tlink__value !=o->_brl_linkedlist_tlistenum__link );
}
BBOBJECT _brl_linkedlist_TListEnum_NextObject(struct brl_linkedlist_TListEnum_obj* o){
	BBOBJECT bbt_value=(BBOBJECT)o->_brl_linkedlist_tlistenum__link ->_brl_linkedlist_tlink__value ;
	o->_brl_linkedlist_tlistenum__link =(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlistenum__link ->_brl_linkedlist_tlink__succ ;
	return (BBOBJECT)bbt_value;
}
struct BBDebugScope_4 brl_linkedlist_TListEnum_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TListEnum",
	{
		{
			BBDEBUGDECL_FIELD,
			"_link",
			":TLink",
			.field_offset=offsetof(struct brl_linkedlist_TListEnum_obj,_brl_linkedlist_tlistenum__link)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_linkedlist_TListEnum_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			.var_address=(void*)&_brl_linkedlist_TListEnum_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			.var_address=(void*)&_brl_linkedlist_TListEnum_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_linkedlist_TListEnum brl_linkedlist_TListEnum={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_linkedlist_TListEnum_scope,
	sizeof(struct brl_linkedlist_TListEnum_obj),
	(void (*)(BBOBJECT))_brl_linkedlist_TListEnum_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_linkedlist_TListEnum_obj,_brl_linkedlist_tlistenum__link) - sizeof(void*) + sizeof(struct brl_linkedlist_TLink_obj*)
	,0
	,_brl_linkedlist_TListEnum_HasNext
	,_brl_linkedlist_TListEnum_NextObject
};

void _brl_linkedlist_TList_New(struct brl_linkedlist_TList_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_linkedlist_TList;
	o->_brl_linkedlist_tlist__head = (struct brl_linkedlist_TLink_obj*)(&bbNullObject);
	o->_brl_linkedlist_tlist__count = -1;
	o->_brl_linkedlist_tlist__head =(struct brl_linkedlist_TLink_obj*)(struct brl_linkedlist_TLink_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TLink);
	o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ =(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ;
	o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__pred =(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ;
	o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__value =(BBOBJECT)o->_brl_linkedlist_tlist__head ;
}
void _brl_linkedlist_TList_Delete(struct brl_linkedlist_TList_obj* o) {
	bbObjectDtor((BBOBJECT)o);
}
BBINT _brl_linkedlist_TList__pad(struct brl_linkedlist_TList_obj* o){
	return 0;
}
BBINT _brl_linkedlist_TList_Clear(struct brl_linkedlist_TList_obj* o){
	while(o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ !=o->_brl_linkedlist_tlist__head ){
		struct brl_linkedlist_TLink_obj* bbt_;
		(((struct brl_linkedlist_TLink_obj*)(bbt_ = o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ))->clas)->m_Remove((struct brl_linkedlist_TLink_obj*)bbt_);
	}
	o->_brl_linkedlist_tlist__count =0;
	return 0;
}
BBINT _brl_linkedlist_TList_IsEmpty(struct brl_linkedlist_TList_obj* o){
	return (o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ==o->_brl_linkedlist_tlist__head );
}
BBINT _brl_linkedlist_TList_Contains_TObject(struct brl_linkedlist_TList_obj* o,BBOBJECT bbt_value){
	struct brl_linkedlist_TLink_obj* bbt_link=(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ;
	while(bbt_link!=o->_brl_linkedlist_tlist__head ){
		BBOBJECT bbt_;
		if((((BBOBJECT)(bbt_ = bbt_link->_brl_linkedlist_tlink__value ))->clas)->Compare((BBOBJECT)bbt_,(BBOBJECT)bbt_value)==0){
			return 1;
		}
		bbt_link=(struct brl_linkedlist_TLink_obj*)bbt_link->_brl_linkedlist_tlink__succ ;
	}
	return 0;
}
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_AddFirst_TObject(struct brl_linkedlist_TList_obj* o,BBOBJECT bbt_value){
	return (struct brl_linkedlist_TLink_obj*)((struct brl_linkedlist_TList_obj*)o)->clas->m_InsertAfterLink_TObjectTTLink((struct brl_linkedlist_TList_obj*)o,(BBOBJECT)bbt_value,(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head );
}
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_AddLast_TObject(struct brl_linkedlist_TList_obj* o,BBOBJECT bbt_value){
	return (struct brl_linkedlist_TLink_obj*)((struct brl_linkedlist_TList_obj*)o)->clas->m_InsertBeforeLink_TObjectTTLink((struct brl_linkedlist_TList_obj*)o,(BBOBJECT)bbt_value,(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head );
}
BBOBJECT _brl_linkedlist_TList_First(struct brl_linkedlist_TList_obj* o){
	if(((struct brl_linkedlist_TList_obj*)o)->clas->m_IsEmpty((struct brl_linkedlist_TList_obj*)o)!=0){
		return (BBOBJECT)(&bbNullObject);
	}
	return (BBOBJECT)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ->_brl_linkedlist_tlink__value ;
}
BBOBJECT _brl_linkedlist_TList_Last(struct brl_linkedlist_TList_obj* o){
	if(((struct brl_linkedlist_TList_obj*)o)->clas->m_IsEmpty((struct brl_linkedlist_TList_obj*)o)!=0){
		return (BBOBJECT)(&bbNullObject);
	}
	return (BBOBJECT)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__pred ->_brl_linkedlist_tlink__value ;
}
BBOBJECT _brl_linkedlist_TList_RemoveFirst(struct brl_linkedlist_TList_obj* o){
	if(((struct brl_linkedlist_TList_obj*)o)->clas->m_IsEmpty((struct brl_linkedlist_TList_obj*)o)!=0){
		return (BBOBJECT)(&bbNullObject);
	}
	BBOBJECT bbt_value=(BBOBJECT)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ->_brl_linkedlist_tlink__value ;
	struct brl_linkedlist_TLink_obj* bbt_;
	(((struct brl_linkedlist_TLink_obj*)(bbt_ = o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ))->clas)->m_Remove((struct brl_linkedlist_TLink_obj*)bbt_);
	if(o->_brl_linkedlist_tlist__count >-1){
		o->_brl_linkedlist_tlist__count -=1;
	}
	return (BBOBJECT)bbt_value;
}
BBOBJECT _brl_linkedlist_TList_RemoveLast(struct brl_linkedlist_TList_obj* o){
	if(((struct brl_linkedlist_TList_obj*)o)->clas->m_IsEmpty((struct brl_linkedlist_TList_obj*)o)!=0){
		return (BBOBJECT)(&bbNullObject);
	}
	BBOBJECT bbt_value=(BBOBJECT)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__pred ->_brl_linkedlist_tlink__value ;
	struct brl_linkedlist_TLink_obj* bbt_;
	(((struct brl_linkedlist_TLink_obj*)(bbt_ = o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__pred ))->clas)->m_Remove((struct brl_linkedlist_TLink_obj*)bbt_);
	if(o->_brl_linkedlist_tlist__count >-1){
		o->_brl_linkedlist_tlist__count -=1;
	}
	return (BBOBJECT)bbt_value;
}
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_FirstLink(struct brl_linkedlist_TList_obj* o){
	if(o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ !=o->_brl_linkedlist_tlist__head ){
		return (struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ;
	}
	return (struct brl_linkedlist_TLink_obj*)(&bbNullObject);
}
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_LastLink(struct brl_linkedlist_TList_obj* o){
	if(o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__pred !=o->_brl_linkedlist_tlist__head ){
		return (struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__pred ;
	}
	return (struct brl_linkedlist_TLink_obj*)(&bbNullObject);
}
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_InsertBeforeLink_TObjectTTLink(struct brl_linkedlist_TList_obj* o,BBOBJECT bbt_value,struct brl_linkedlist_TLink_obj* bbt_succ){
	struct brl_linkedlist_TLink_obj* bbt_link=(struct brl_linkedlist_TLink_obj*)(struct brl_linkedlist_TLink_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TLink);
	bbt_link->_brl_linkedlist_tlink__value =(BBOBJECT)bbt_value;
	bbt_link->_brl_linkedlist_tlink__succ =(struct brl_linkedlist_TLink_obj*)bbt_succ;
	bbt_link->_brl_linkedlist_tlink__pred =(struct brl_linkedlist_TLink_obj*)bbt_succ->_brl_linkedlist_tlink__pred ;
	bbt_link->_brl_linkedlist_tlink__pred ->_brl_linkedlist_tlink__succ =(struct brl_linkedlist_TLink_obj*)bbt_link;
	bbt_succ->_brl_linkedlist_tlink__pred =(struct brl_linkedlist_TLink_obj*)bbt_link;
	if(o->_brl_linkedlist_tlist__count >-1){
		o->_brl_linkedlist_tlist__count +=1;
	}
	return (struct brl_linkedlist_TLink_obj*)bbt_link;
}
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_InsertAfterLink_TObjectTTLink(struct brl_linkedlist_TList_obj* o,BBOBJECT bbt_value,struct brl_linkedlist_TLink_obj* bbt_pred){
	struct brl_linkedlist_TLink_obj* bbt_link=(struct brl_linkedlist_TLink_obj*)(struct brl_linkedlist_TLink_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TLink);
	bbt_link->_brl_linkedlist_tlink__value =(BBOBJECT)bbt_value;
	bbt_link->_brl_linkedlist_tlink__pred =(struct brl_linkedlist_TLink_obj*)bbt_pred;
	bbt_link->_brl_linkedlist_tlink__succ =(struct brl_linkedlist_TLink_obj*)bbt_pred->_brl_linkedlist_tlink__succ ;
	bbt_link->_brl_linkedlist_tlink__succ ->_brl_linkedlist_tlink__pred =(struct brl_linkedlist_TLink_obj*)bbt_link;
	bbt_pred->_brl_linkedlist_tlink__succ =(struct brl_linkedlist_TLink_obj*)bbt_link;
	if(o->_brl_linkedlist_tlist__count >-1){
		o->_brl_linkedlist_tlist__count +=1;
	}
	return (struct brl_linkedlist_TLink_obj*)bbt_link;
}
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_FindLink_TObject(struct brl_linkedlist_TList_obj* o,BBOBJECT bbt_value){
	struct brl_linkedlist_TLink_obj* bbt_link=(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ;
	while(bbt_link!=o->_brl_linkedlist_tlist__head ){
		BBOBJECT bbt_;
		if((((BBOBJECT)(bbt_ = bbt_link->_brl_linkedlist_tlink__value ))->clas)->Compare((BBOBJECT)bbt_,(BBOBJECT)bbt_value)==0){
			return (struct brl_linkedlist_TLink_obj*)bbt_link;
		}
		bbt_link=(struct brl_linkedlist_TLink_obj*)bbt_link->_brl_linkedlist_tlink__succ ;
	}
	return (struct brl_linkedlist_TLink_obj*)(&bbNullObject);
}
BBOBJECT _brl_linkedlist_TList_ValueAtIndex_i(struct brl_linkedlist_TList_obj* o,BBINT bbt_index){
	struct brl_linkedlist_TLink_obj* bbt_link=(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ;
	while(bbt_link!=o->_brl_linkedlist_tlist__head ){
		if(!(bbt_index!=0)){
			return (BBOBJECT)bbt_link->_brl_linkedlist_tlink__value ;
		}
		bbt_link=(struct brl_linkedlist_TLink_obj*)bbt_link->_brl_linkedlist_tlink__succ ;
		bbt_index-=1;
	}
	brl_blitz_RuntimeError(&_s2);
	return (BBOBJECT)(&bbNullObject);
}
BBINT _brl_linkedlist_TList_Count(struct brl_linkedlist_TList_obj* o){
	if(o->_brl_linkedlist_tlist__count ==-1){
		o->_brl_linkedlist_tlist__count =0;
		struct brl_linkedlist_TLink_obj* bbt_link=(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ;
		while(bbt_link!=o->_brl_linkedlist_tlist__head ){
			o->_brl_linkedlist_tlist__count +=1;
			bbt_link=(struct brl_linkedlist_TLink_obj*)bbt_link->_brl_linkedlist_tlink__succ ;
		}
	}
	return o->_brl_linkedlist_tlist__count ;
}
BBINT _brl_linkedlist_TList_Remove_TObject(struct brl_linkedlist_TList_obj* o,BBOBJECT bbt_value){
	struct brl_linkedlist_TLink_obj* bbt_link=(struct brl_linkedlist_TLink_obj*)((struct brl_linkedlist_TList_obj*)o)->clas->m_FindLink_TObject((struct brl_linkedlist_TList_obj*)o,(BBOBJECT)bbt_value);
	if(!(((BBObject*)bbt_link)!= &bbNullObject)){
		return 0;
	}
	(bbt_link)->clas->m_Remove((struct brl_linkedlist_TLink_obj*)bbt_link);
	if(o->_brl_linkedlist_tlist__count >-1){
		o->_brl_linkedlist_tlist__count -=1;
	}
	return 1;
}
BBINT _brl_linkedlist_TList_Swap_TTList(struct brl_linkedlist_TList_obj* o,struct brl_linkedlist_TList_obj* bbt_list){
	struct brl_linkedlist_TLink_obj* bbt_head=(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ;
	o->_brl_linkedlist_tlist__head =(struct brl_linkedlist_TLink_obj*)bbt_list->_brl_linkedlist_tlist__head ;
	bbt_list->_brl_linkedlist_tlist__head =(struct brl_linkedlist_TLink_obj*)bbt_head;
	BBINT bbt_c=bbt_list->_brl_linkedlist_tlist__count ;
	bbt_list->_brl_linkedlist_tlist__count =o->_brl_linkedlist_tlist__count ;
	o->_brl_linkedlist_tlist__count =bbt_c;
	return 0;
}
struct brl_linkedlist_TList_obj* _brl_linkedlist_TList_Copy(struct brl_linkedlist_TList_obj* o){
	struct brl_linkedlist_TList_obj* bbt_list=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	bbt_list->_brl_linkedlist_tlist__count =0;
	struct brl_linkedlist_TLink_obj* bbt_link=(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ;
	while(bbt_link!=o->_brl_linkedlist_tlist__head ){
		(bbt_list)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_link->_brl_linkedlist_tlink__value );
		bbt_link=(struct brl_linkedlist_TLink_obj*)bbt_link->_brl_linkedlist_tlink__succ ;
	}
	return (struct brl_linkedlist_TList_obj*)bbt_list;
}
BBINT _brl_linkedlist_TList_Reverse(struct brl_linkedlist_TList_obj* o){
	struct brl_linkedlist_TLink_obj* bbt_pred=(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ;
	struct brl_linkedlist_TLink_obj* bbt_succ=(struct brl_linkedlist_TLink_obj*)bbt_pred->_brl_linkedlist_tlink__succ ;
	do{
		struct brl_linkedlist_TLink_obj* bbt_link=(struct brl_linkedlist_TLink_obj*)bbt_succ->_brl_linkedlist_tlink__succ ;
		bbt_pred->_brl_linkedlist_tlink__pred =(struct brl_linkedlist_TLink_obj*)bbt_succ;
		bbt_succ->_brl_linkedlist_tlink__succ =(struct brl_linkedlist_TLink_obj*)bbt_pred;
		bbt_pred=(struct brl_linkedlist_TLink_obj*)bbt_succ;
		bbt_succ=(struct brl_linkedlist_TLink_obj*)bbt_link;
	}while(!(bbt_pred==o->_brl_linkedlist_tlist__head ));
	return 0;
}
struct brl_linkedlist_TList_obj* _brl_linkedlist_TList_Reversed(struct brl_linkedlist_TList_obj* o){
	struct brl_linkedlist_TList_obj* bbt_list=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	bbt_list->_brl_linkedlist_tlist__count =0;
	struct brl_linkedlist_TLink_obj* bbt_link=(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ;
	while(bbt_link!=o->_brl_linkedlist_tlist__head ){
		(bbt_list)->clas->m_AddFirst_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_link->_brl_linkedlist_tlink__value );
		bbt_link=(struct brl_linkedlist_TLink_obj*)bbt_link->_brl_linkedlist_tlink__succ ;
	}
	return (struct brl_linkedlist_TList_obj*)bbt_list;
}
BBINT _brl_linkedlist_TList_Sort_iF_TObjectTObject_i_(struct brl_linkedlist_TList_obj* o,BBINT bbt_ascending,BBINT(* bbt_compareFunc)(BBOBJECT,BBOBJECT)){
	BBINT bbt_ccsgn=-1;
	if(bbt_ascending!=0){
		bbt_ccsgn=1;
	}
	BBINT bbt_insize=1;
	do{
		BBINT bbt_merges=0;
		struct brl_linkedlist_TLink_obj* bbt_tail=(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ;
		struct brl_linkedlist_TLink_obj* bbt_p=(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ;
		while(bbt_p!=o->_brl_linkedlist_tlist__head ){
			bbt_merges+=1;
			struct brl_linkedlist_TLink_obj* bbt_q=(struct brl_linkedlist_TLink_obj*)bbt_p->_brl_linkedlist_tlink__succ ;
			BBINT bbt_qsize=bbt_insize;
			BBINT bbt_psize=1;
			while((bbt_psize<bbt_insize) && (bbt_q!=o->_brl_linkedlist_tlist__head )){
				bbt_psize+=1;
				bbt_q=(struct brl_linkedlist_TLink_obj*)bbt_q->_brl_linkedlist_tlink__succ ;
			}
			do{
				struct brl_linkedlist_TLink_obj* bbt_t=(struct brl_linkedlist_TLink_obj*)(&bbNullObject);
				if(((bbt_psize!=0) && (bbt_qsize!=0)) && (bbt_q!=o->_brl_linkedlist_tlist__head )){
					BBINT bbt_cc=(bbt_compareFunc((BBOBJECT)bbt_p->_brl_linkedlist_tlink__value ,(BBOBJECT)bbt_q->_brl_linkedlist_tlink__value )*bbt_ccsgn);
					if(bbt_cc<=0){
						bbt_t=(struct brl_linkedlist_TLink_obj*)bbt_p;
						bbt_p=(struct brl_linkedlist_TLink_obj*)bbt_p->_brl_linkedlist_tlink__succ ;
						bbt_psize-=1;
					}else{
						bbt_t=(struct brl_linkedlist_TLink_obj*)bbt_q;
						bbt_q=(struct brl_linkedlist_TLink_obj*)bbt_q->_brl_linkedlist_tlink__succ ;
						bbt_qsize-=1;
					}
				}else{
					if(bbt_psize!=0){
						bbt_t=(struct brl_linkedlist_TLink_obj*)bbt_p;
						bbt_p=(struct brl_linkedlist_TLink_obj*)bbt_p->_brl_linkedlist_tlink__succ ;
						bbt_psize-=1;
					}else{
						if((bbt_qsize!=0) && (bbt_q!=o->_brl_linkedlist_tlist__head )){
							bbt_t=(struct brl_linkedlist_TLink_obj*)bbt_q;
							bbt_q=(struct brl_linkedlist_TLink_obj*)bbt_q->_brl_linkedlist_tlink__succ ;
							bbt_qsize-=1;
						}else{
							break;
						}
					}
				}
				bbt_t->_brl_linkedlist_tlink__pred =(struct brl_linkedlist_TLink_obj*)bbt_tail;
				bbt_tail->_brl_linkedlist_tlink__succ =(struct brl_linkedlist_TLink_obj*)bbt_t;
				bbt_tail=(struct brl_linkedlist_TLink_obj*)bbt_t;
			}while(!(0));
			bbt_p=(struct brl_linkedlist_TLink_obj*)bbt_q;
		}
		bbt_tail->_brl_linkedlist_tlink__succ =(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ;
		o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__pred =(struct brl_linkedlist_TLink_obj*)bbt_tail;
		if(bbt_merges<=1){
			return 0;
		}
		bbt_insize*=2;
	}while(!(0));
}
struct brl_linkedlist_TListEnum_obj* _brl_linkedlist_TList_ObjectEnumerator(struct brl_linkedlist_TList_obj* o){
	struct brl_linkedlist_TListEnum_obj* bbt_enumeration=(struct brl_linkedlist_TListEnum_obj*)(struct brl_linkedlist_TListEnum_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TListEnum);
	bbt_enumeration->_brl_linkedlist_tlistenum__link =(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ;
	return (struct brl_linkedlist_TListEnum_obj*)bbt_enumeration;
}
BBARRAY _brl_linkedlist_TList_ToArray(struct brl_linkedlist_TList_obj* o){
	BBARRAY bbt_arr=bbArrayNew1D(":Object", ((struct brl_linkedlist_TList_obj*)o)->clas->m_Count((struct brl_linkedlist_TList_obj*)o));
	BBINT bbt_i=0;
	struct brl_linkedlist_TLink_obj* bbt_link=(struct brl_linkedlist_TLink_obj*)o->_brl_linkedlist_tlist__head ->_brl_linkedlist_tlink__succ ;
	while(bbt_link!=o->_brl_linkedlist_tlist__head ){
		((BBOBJECT*)BBARRAYDATA(bbt_arr,1))[((BBUINT)bbt_i)]=(BBOBJECT)bbt_link->_brl_linkedlist_tlink__value ;
		bbt_link=(struct brl_linkedlist_TLink_obj*)bbt_link->_brl_linkedlist_tlink__succ ;
		bbt_i+=1;
	}
	return bbt_arr;
}
struct brl_linkedlist_TList_obj* brl_linkedlist_TList_FromArray_TTList_aTObject(BBARRAY bbt_arr){
	struct brl_linkedlist_TList_obj* bbt_list=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	{
		BBINT bbt_i=0;
		BBINT bbt_=(bbt_arr->scales[0]);
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			(bbt_list)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)((BBOBJECT*)BBARRAYDATA(bbt_arr,1))[((BBUINT)bbt_i)]);
		}
	}
	return (struct brl_linkedlist_TList_obj*)bbt_list;
}
BBINT _brl_linkedlist_TList_RemoveLink_TTLink(struct brl_linkedlist_TList_obj* o,struct brl_linkedlist_TLink_obj* bbt_link){
	if(o->_brl_linkedlist_tlist__count >-1){
		o->_brl_linkedlist_tlist__count -=1;
	}
	(bbt_link)->clas->m_Remove((struct brl_linkedlist_TLink_obj*)bbt_link);
	return 0;
}
struct BBDebugScope_30 brl_linkedlist_TList_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TList",
	{
		{
			BBDEBUGDECL_FIELD,
			"_head",
			":TLink",
			.field_offset=offsetof(struct brl_linkedlist_TList_obj,_brl_linkedlist_tlist__head)
		},
		{
			BBDEBUGDECL_FIELD,
			"_count",
			"i",
			.field_offset=offsetof(struct brl_linkedlist_TList_obj,_brl_linkedlist_tlist__count)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_linkedlist_TList_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_pad",
			"()i",
			.var_address=(void*)&_brl_linkedlist_TList__pad
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()i",
			.var_address=(void*)&_brl_linkedlist_TList_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsEmpty",
			"()i",
			.var_address=(void*)&_brl_linkedlist_TList_IsEmpty
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Contains",
			"(:Object)i",
			.var_address=(void*)&_brl_linkedlist_TList_Contains_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddFirst",
			"(:Object):TLink",
			.var_address=(void*)&_brl_linkedlist_TList_AddFirst_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddLast",
			"(:Object):TLink",
			.var_address=(void*)&_brl_linkedlist_TList_AddLast_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"First",
			"():Object",
			.var_address=(void*)&_brl_linkedlist_TList_First
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Last",
			"():Object",
			.var_address=(void*)&_brl_linkedlist_TList_Last
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveFirst",
			"():Object",
			.var_address=(void*)&_brl_linkedlist_TList_RemoveFirst
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveLast",
			"():Object",
			.var_address=(void*)&_brl_linkedlist_TList_RemoveLast
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FirstLink",
			"():TLink",
			.var_address=(void*)&_brl_linkedlist_TList_FirstLink
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"LastLink",
			"():TLink",
			.var_address=(void*)&_brl_linkedlist_TList_LastLink
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"InsertBeforeLink",
			"(:Object,:TLink):TLink",
			.var_address=(void*)&_brl_linkedlist_TList_InsertBeforeLink_TObjectTTLink
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"InsertAfterLink",
			"(:Object,:TLink):TLink",
			.var_address=(void*)&_brl_linkedlist_TList_InsertAfterLink_TObjectTTLink
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FindLink",
			"(:Object):TLink",
			.var_address=(void*)&_brl_linkedlist_TList_FindLink_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ValueAtIndex",
			"(i):Object",
			.var_address=(void*)&_brl_linkedlist_TList_ValueAtIndex_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Count",
			"()i",
			.var_address=(void*)&_brl_linkedlist_TList_Count
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Remove",
			"(:Object)i",
			.var_address=(void*)&_brl_linkedlist_TList_Remove_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Swap",
			"(:TList)i",
			.var_address=(void*)&_brl_linkedlist_TList_Swap_TTList
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Copy",
			"():TList",
			.var_address=(void*)&_brl_linkedlist_TList_Copy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Reverse",
			"()i",
			.var_address=(void*)&_brl_linkedlist_TList_Reverse
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Reversed",
			"():TList",
			.var_address=(void*)&_brl_linkedlist_TList_Reversed
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Sort",
			"(i,(:Object,:Object)i)i",
			.var_address=(void*)&_brl_linkedlist_TList_Sort_iF_TObjectTObject_i_
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TListEnum",
			.var_address=(void*)&_brl_linkedlist_TList_ObjectEnumerator
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToArray",
			"()[]:Object",
			.var_address=(void*)&_brl_linkedlist_TList_ToArray
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"FromArray",
			"([]:Object):TList",
			.var_address=(void*)&brl_linkedlist_TList_FromArray_TTList_aTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveLink",
			"(:TLink)i",
			.var_address=(void*)&_brl_linkedlist_TList_RemoveLink_TTLink
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_linkedlist_TList brl_linkedlist_TList={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_linkedlist_TList_scope,
	sizeof(struct brl_linkedlist_TList_obj),
	(void (*)(BBOBJECT))_brl_linkedlist_TList_New,
	(void (*)(BBOBJECT))_brl_linkedlist_TList_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_linkedlist_TList_obj,_brl_linkedlist_tlist__count) - sizeof(void*) + sizeof(BBINT)
	,0
	,_brl_linkedlist_TList__pad
	,_brl_linkedlist_TList_Clear
	,_brl_linkedlist_TList_IsEmpty
	,_brl_linkedlist_TList_Contains_TObject
	,_brl_linkedlist_TList_AddFirst_TObject
	,_brl_linkedlist_TList_AddLast_TObject
	,_brl_linkedlist_TList_First
	,_brl_linkedlist_TList_Last
	,_brl_linkedlist_TList_RemoveFirst
	,_brl_linkedlist_TList_RemoveLast
	,_brl_linkedlist_TList_FirstLink
	,_brl_linkedlist_TList_LastLink
	,_brl_linkedlist_TList_InsertBeforeLink_TObjectTTLink
	,_brl_linkedlist_TList_InsertAfterLink_TObjectTTLink
	,_brl_linkedlist_TList_FindLink_TObject
	,_brl_linkedlist_TList_ValueAtIndex_i
	,_brl_linkedlist_TList_Count
	,_brl_linkedlist_TList_Remove_TObject
	,_brl_linkedlist_TList_Swap_TTList
	,_brl_linkedlist_TList_Copy
	,_brl_linkedlist_TList_Reverse
	,_brl_linkedlist_TList_Reversed
	,_brl_linkedlist_TList_Sort_iF_TObjectTObject_i_
	,_brl_linkedlist_TList_ObjectEnumerator
	,_brl_linkedlist_TList_ToArray
	,brl_linkedlist_TList_FromArray_TTList_aTObject
	,_brl_linkedlist_TList_RemoveLink_TTLink
};

BBINT brl_linkedlist_CompareObjects(BBOBJECT bbt_o1,BBOBJECT bbt_o2){
	return (bbt_o1)->clas->Compare((BBOBJECT)bbt_o1,(BBOBJECT)bbt_o2);
}
struct brl_linkedlist_TList_obj* brl_linkedlist_CreateList(){
	return (struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
}
BBINT brl_linkedlist_ClearList(struct brl_linkedlist_TList_obj* bbt_list){
	(bbt_list)->clas->m_Clear((struct brl_linkedlist_TList_obj*)bbt_list);
	return 0;
}
BBINT brl_linkedlist_CountList(struct brl_linkedlist_TList_obj* bbt_list){
	return (bbt_list)->clas->m_Count((struct brl_linkedlist_TList_obj*)bbt_list);
}
BBINT brl_linkedlist_ListIsEmpty(struct brl_linkedlist_TList_obj* bbt_list){
	return (bbt_list)->clas->m_IsEmpty((struct brl_linkedlist_TList_obj*)bbt_list);
}
BBINT brl_linkedlist_ListContains(struct brl_linkedlist_TList_obj* bbt_list,BBOBJECT bbt_value){
	return (bbt_list)->clas->m_Contains_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_value);
}
BBINT brl_linkedlist_SortList(struct brl_linkedlist_TList_obj* bbt_list,BBINT bbt_ascending,BBINT(* bbt_compareFunc)(BBOBJECT,BBOBJECT)){
	(bbt_list)->clas->m_Sort_iF_TObjectTObject_i_((struct brl_linkedlist_TList_obj*)bbt_list,bbt_ascending,bbt_compareFunc);
	return 0;
}
struct brl_linkedlist_TList_obj* brl_linkedlist_ListFromArray(BBARRAY bbt_arr){
	return (struct brl_linkedlist_TList_obj*)brl_linkedlist_TList_FromArray_TTList_aTObject(bbt_arr);
}
BBARRAY brl_linkedlist_ListToArray(struct brl_linkedlist_TList_obj* bbt_list){
	return (bbt_list)->clas->m_ToArray((struct brl_linkedlist_TList_obj*)bbt_list);
}
BBINT brl_linkedlist_SwapLists(struct brl_linkedlist_TList_obj* bbt_list_x,struct brl_linkedlist_TList_obj* bbt_list_y){
	(bbt_list_x)->clas->m_Swap_TTList((struct brl_linkedlist_TList_obj*)bbt_list_x,(struct brl_linkedlist_TList_obj*)bbt_list_y);
	return 0;
}
BBINT brl_linkedlist_ReverseList(struct brl_linkedlist_TList_obj* bbt_list){
	(bbt_list)->clas->m_Reverse((struct brl_linkedlist_TList_obj*)bbt_list);
	return 0;
}
struct brl_linkedlist_TLink_obj* brl_linkedlist_ListFindLink(struct brl_linkedlist_TList_obj* bbt_list,BBOBJECT bbt_value){
	return (struct brl_linkedlist_TLink_obj*)(bbt_list)->clas->m_FindLink_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_value);
}
BBINT brl_linkedlist_ListRemoveLink(struct brl_linkedlist_TList_obj* bbt_list,struct brl_linkedlist_TLink_obj* bbt_link){
	(bbt_list)->clas->m_RemoveLink_TTLink((struct brl_linkedlist_TList_obj*)bbt_list,(struct brl_linkedlist_TLink_obj*)bbt_link);
	return 0;
}
struct brl_linkedlist_TLink_obj* brl_linkedlist_ListAddLast(struct brl_linkedlist_TList_obj* bbt_list,BBOBJECT bbt_value){
	return (struct brl_linkedlist_TLink_obj*)(bbt_list)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_value);
}
BBOBJECT brl_linkedlist_ListGetFirst(struct brl_linkedlist_TList_obj* bbt_list){
	return (BBOBJECT)(bbt_list)->clas->m_First((struct brl_linkedlist_TList_obj*)bbt_list);
}
BBOBJECT brl_linkedlist_ListGetLast(struct brl_linkedlist_TList_obj* bbt_list){
	return (BBOBJECT)(bbt_list)->clas->m_Last((struct brl_linkedlist_TList_obj*)bbt_list);
}
struct brl_linkedlist_TLink_obj* brl_linkedlist_ListAddFirst(struct brl_linkedlist_TList_obj* bbt_list,BBOBJECT bbt_value){
	return (struct brl_linkedlist_TLink_obj*)(bbt_list)->clas->m_AddFirst_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_value);
}
BBOBJECT brl_linkedlist_ListRemoveFirst(struct brl_linkedlist_TList_obj* bbt_list){
	return (BBOBJECT)(bbt_list)->clas->m_RemoveFirst((struct brl_linkedlist_TList_obj*)bbt_list);
}
BBOBJECT brl_linkedlist_ListRemoveLast(struct brl_linkedlist_TList_obj* bbt_list){
	return (BBOBJECT)(bbt_list)->clas->m_RemoveLast((struct brl_linkedlist_TList_obj*)bbt_list);
}
BBINT brl_linkedlist_ListRemove(struct brl_linkedlist_TList_obj* bbt_list,BBOBJECT bbt_value){
	(bbt_list)->clas->m_Remove_TObject((struct brl_linkedlist_TList_obj*)bbt_list,(BBOBJECT)bbt_value);
	return 0;
}
static int __bb_brl_linkedlist_linkedlist_inited = 0;
int __bb_brl_linkedlist_linkedlist(){
	if (!__bb_brl_linkedlist_linkedlist_inited) {
		__bb_brl_linkedlist_linkedlist_inited = 1;
		__bb_brl_blitz_blitz();
		bbObjectRegisterType((BBCLASS)&brl_linkedlist_TLink);
		bbObjectRegisterType((BBCLASS)&brl_linkedlist_TListEnum);
		bbObjectRegisterType((BBCLASS)&brl_linkedlist_TList);
		return 0;
	}
	return 0;
}