#include "options_parser.bmx.release.linux.x64.h"
static BBString _s2={
	&bbStringClass,
	1,
	{40}
};
static BBString _s3={
	&bbStringClass,
	1,
	{41}
};
static BBString _s4={
	&bbStringClass,
	1,
	{60}
};
static BBString _s6={
	&bbStringClass,
	1,
	{61}
};
static BBString _s5={
	&bbStringClass,
	1,
	{62}
};
static BBString _s0={
	&bbStringClass,
	12,
	{69,120,112,101,99,116,101,100,32,39,41,39}
};
static BBString _s20={
	&bbStringClass,
	18,
	{77,105,115,115,105,110,103,32,101,120,112,114,101,115,115,105,111
	,110}
};
static BBString _s1={
	&bbStringClass,
	14,
	{85,110,101,120,112,101,99,116,101,100,32,39,41,39}
};
static BBString _s7={
	&bbStringClass,
	23,
	{85,110,101,120,112,101,99,116,101,100,32,99,104,97,114,97,99
	,116,101,114,32,58,32}
};
static BBString _s9={
	&bbStringClass,
	3,
	{97,110,100}
};
static BBString _s8={
	&bbStringClass,
	3,
	{110,111,116}
};
static BBString _s10={
	&bbStringClass,
	2,
	{111,114}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_9{int kind; const char *name; BBDebugDecl decls[10]; };
void __m_options_parser_TValues_New(struct _m_options_parser_TValues_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_options_parser_TValues;
	o->__m_options_parser_tvalues_values = (struct brl_map_TMap_obj*)(struct brl_map_TMap_obj*)bbObjectNew((BBClass *)&brl_map_TMap);
}
void __m_options_parser_TValues_Add_Si(struct _m_options_parser_TValues_obj* o,BBSTRING bbt_key,BBINT bbt_value){
	(o->__m_options_parser_tvalues_values )->clas->m_Insert_TObjectTObject((struct brl_map_TMap_obj*)o->__m_options_parser_tvalues_values ,(BBOBJECT)bbt_key,(BBOBJECT)_m_options_parser_TInt.m_Create_i((struct _m_options_parser_TInt_obj*)((struct _m_options_parser_TInt_obj*)bbObjectAtomicNew((BBClass *)&_m_options_parser_TInt)),bbt_value));
}
BBINT __m_options_parser_TValues_Value_S(struct _m_options_parser_TValues_obj* o,BBSTRING bbt_key){
	BBOBJECT bbt_obj=(BBOBJECT)(o->__m_options_parser_tvalues_values )->clas->m_ValueForKey_TObject((struct brl_map_TMap_obj*)o->__m_options_parser_tvalues_values ,(BBOBJECT)bbt_key);
	if(((BBObject*)bbt_obj)!= &bbNullObject){
		return ((struct _m_options_parser_TInt_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&_m_options_parser_TInt))->__m_options_parser_tint_value ;
	}
	return 0;
}
struct BBDebugScope_4 _m_options_parser_TValues_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TValues",
	{
		{
			BBDEBUGDECL_FIELD,
			"values",
			":TMap",
			.field_offset=offsetof(struct _m_options_parser_TValues_obj,__m_options_parser_tvalues_values)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_options_parser_TValues_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Add",
			"($,i)",
			.var_address=(void*)&__m_options_parser_TValues_Add_Si
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Value",
			"($)i",
			.var_address=(void*)&__m_options_parser_TValues_Value_S
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_options_parser_TValues _m_options_parser_TValues={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_options_parser_TValues_scope,
	sizeof(struct _m_options_parser_TValues_obj),
	(void (*)(BBOBJECT))__m_options_parser_TValues_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_options_parser_TValues_obj,__m_options_parser_tvalues_values) - sizeof(void*) + sizeof(struct brl_map_TMap_obj*)
	,0
	,__m_options_parser_TValues_Add_Si
	,__m_options_parser_TValues_Value_S
};

struct _m_options_parser_TValues_obj* _m_options_parser_compilerOptions=(struct _m_options_parser_TValues_obj*)(&bbNullObject);
void __m_options_parser_TOptParser_New(struct _m_options_parser_TOptParser_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_options_parser_TOptParser;
	o->__m_options_parser_toptparser_tokenizer = (struct _m_options_parser_TOptTokenizer_obj*)(&bbNullObject);
	o->__m_options_parser_toptparser_token = (struct _m_options_parser_TOptToken_obj*)(&bbNullObject);
	o->__m_options_parser_toptparser_values = (struct _m_options_parser_TValues_obj*)(&bbNullObject);
}
struct _m_options_parser_TOptParser_obj* __m_options_parser_TOptParser_Create_TTOptTokenizerTTValues(struct _m_options_parser_TOptParser_obj* o,struct _m_options_parser_TOptTokenizer_obj* bbt_tokenizer,struct _m_options_parser_TValues_obj* bbt_values){
	o->__m_options_parser_toptparser_tokenizer =(struct _m_options_parser_TOptTokenizer_obj*)bbt_tokenizer;
	o->__m_options_parser_toptparser_values =(struct _m_options_parser_TValues_obj*)bbt_values;
	return (struct _m_options_parser_TOptParser_obj*)o;
}
BBINT __m_options_parser_TOptParser_Eval(struct _m_options_parser_TOptParser_obj* o){
	((struct _m_options_parser_TOptParser_obj*)o)->clas->m_NextToke((struct _m_options_parser_TOptParser_obj*)o);
	struct _m_options_parser_TExpr_obj* bbt_expr=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TOptParser_obj*)o)->clas->m_Parse((struct _m_options_parser_TOptParser_obj*)o);
	return (bbt_expr)->clas->m_Eval((struct _m_options_parser_TExpr_obj*)bbt_expr);
}
void __m_options_parser_TOptParser_NextToke(struct _m_options_parser_TOptParser_obj* o){
	o->__m_options_parser_toptparser_token =(struct _m_options_parser_TOptToken_obj*)(o->__m_options_parser_toptparser_tokenizer )->clas->m_NextToken((struct _m_options_parser_TOptTokenizer_obj*)o->__m_options_parser_toptparser_tokenizer );
}
struct _m_options_parser_TExpr_obj* __m_options_parser_TOptParser_Parse(struct _m_options_parser_TOptParser_obj* o){
	return (struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TOptParser_obj*)o)->clas->m_ParseOrExpr((struct _m_options_parser_TOptParser_obj*)o);
}
struct _m_options_parser_TExpr_obj* __m_options_parser_TOptParser_ParseOrExpr(struct _m_options_parser_TOptParser_obj* o){
	struct _m_options_parser_TExpr_obj* bbt_expr=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TOptParser_obj*)o)->clas->m_ParseAndExpr((struct _m_options_parser_TOptParser_obj*)o);
	do{
		if(o->__m_options_parser_toptparser_token ->__m_options_parser_topttoken_toktype ==3){
			((struct _m_options_parser_TOptParser_obj*)o)->clas->m_NextToke((struct _m_options_parser_TOptParser_obj*)o);
			struct _m_options_parser_TExpr_obj* bbt_rhs=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TOptParser_obj*)o)->clas->m_ParseAndExpr((struct _m_options_parser_TOptParser_obj*)o);
			bbt_expr=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TExpr_obj*)bbObjectDowncast((BBOBJECT)_m_options_parser_TBinaryExpr.m_Create_iTTExprTTExpr((struct _m_options_parser_TBinaryExpr_obj*)((struct _m_options_parser_TBinaryExpr_obj*)bbObjectNew((BBClass *)&_m_options_parser_TBinaryExpr)),3,(struct _m_options_parser_TExpr_obj*)bbt_expr,(struct _m_options_parser_TExpr_obj*)bbt_rhs),(BBClass*)&_m_options_parser_TExpr));
		}else{
			return (struct _m_options_parser_TExpr_obj*)bbt_expr;
		}
	}while(!(0));
}
struct _m_options_parser_TExpr_obj* __m_options_parser_TOptParser_ParseAndExpr(struct _m_options_parser_TOptParser_obj* o){
	struct _m_options_parser_TExpr_obj* bbt_expr=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TOptParser_obj*)o)->clas->m_ParseCompareExpr((struct _m_options_parser_TOptParser_obj*)o);
	do{
		if(o->__m_options_parser_toptparser_token ->__m_options_parser_topttoken_toktype ==2){
			((struct _m_options_parser_TOptParser_obj*)o)->clas->m_NextToke((struct _m_options_parser_TOptParser_obj*)o);
			struct _m_options_parser_TExpr_obj* bbt_rhs=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TOptParser_obj*)o)->clas->m_ParseNotExpr((struct _m_options_parser_TOptParser_obj*)o);
			bbt_expr=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TExpr_obj*)bbObjectDowncast((BBOBJECT)_m_options_parser_TBinaryExpr.m_Create_iTTExprTTExpr((struct _m_options_parser_TBinaryExpr_obj*)((struct _m_options_parser_TBinaryExpr_obj*)bbObjectNew((BBClass *)&_m_options_parser_TBinaryExpr)),2,(struct _m_options_parser_TExpr_obj*)bbt_expr,(struct _m_options_parser_TExpr_obj*)bbt_rhs),(BBClass*)&_m_options_parser_TExpr));
		}else{
			return (struct _m_options_parser_TExpr_obj*)bbt_expr;
		}
	}while(!(0));
}
struct _m_options_parser_TExpr_obj* __m_options_parser_TOptParser_ParseCompareExpr(struct _m_options_parser_TOptParser_obj* o){
	struct _m_options_parser_TExpr_obj* bbt_expr=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TOptParser_obj*)o)->clas->m_ParseNotExpr((struct _m_options_parser_TOptParser_obj*)o);
	do{
		if(((o->__m_options_parser_toptparser_token ->__m_options_parser_topttoken_toktype ==7) || (o->__m_options_parser_toptparser_token ->__m_options_parser_topttoken_toktype ==8)) || (o->__m_options_parser_toptparser_token ->__m_options_parser_topttoken_toktype ==9)){
			((struct _m_options_parser_TOptParser_obj*)o)->clas->m_NextToke((struct _m_options_parser_TOptParser_obj*)o);
			struct _m_options_parser_TExpr_obj* bbt_rhs=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TOptParser_obj*)o)->clas->m_ParseNotExpr((struct _m_options_parser_TOptParser_obj*)o);
			bbt_expr=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TExpr_obj*)bbObjectDowncast((BBOBJECT)_m_options_parser_TBinaryCompareExpr.m_Create_iTTExprTTExpr((struct _m_options_parser_TBinaryExpr_obj*)((struct _m_options_parser_TBinaryCompareExpr_obj*)bbObjectNew((BBClass *)&_m_options_parser_TBinaryCompareExpr)),o->__m_options_parser_toptparser_token ->__m_options_parser_topttoken_toktype ,(struct _m_options_parser_TExpr_obj*)bbt_expr,(struct _m_options_parser_TExpr_obj*)bbt_rhs),(BBClass*)&_m_options_parser_TExpr));
		}else{
			return (struct _m_options_parser_TExpr_obj*)bbt_expr;
		}
	}while(!(0));
}
struct _m_options_parser_TExpr_obj* __m_options_parser_TOptParser_ParseNotExpr(struct _m_options_parser_TOptParser_obj* o){
	if(o->__m_options_parser_toptparser_token ->__m_options_parser_topttoken_toktype ==1){
		((struct _m_options_parser_TOptParser_obj*)o)->clas->m_NextToke((struct _m_options_parser_TOptParser_obj*)o);
		struct _m_options_parser_TExpr_obj* bbt_expr=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TOptParser_obj*)o)->clas->m_ParseNotExpr((struct _m_options_parser_TOptParser_obj*)o);
		return (struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TExpr_obj*)bbObjectDowncast((BBOBJECT)_m_options_parser_TNotExpr.m_Create_TTExpr((struct _m_options_parser_TNotExpr_obj*)((struct _m_options_parser_TNotExpr_obj*)bbObjectNew((BBClass *)&_m_options_parser_TNotExpr)),(struct _m_options_parser_TExpr_obj*)bbt_expr),(BBClass*)&_m_options_parser_TExpr));
	}
	return (struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TOptParser_obj*)o)->clas->m_ParsePrimaryExpr((struct _m_options_parser_TOptParser_obj*)o);
}
struct _m_options_parser_TExpr_obj* __m_options_parser_TOptParser_ParsePrimaryExpr(struct _m_options_parser_TOptParser_obj* o){
	struct _m_options_parser_TExpr_obj* bbt_expr=(struct _m_options_parser_TExpr_obj*)(&bbNullObject);
	BBINT bbt_=o->__m_options_parser_toptparser_token ->__m_options_parser_topttoken_toktype ;
	if(bbt_==4){
		((struct _m_options_parser_TOptParser_obj*)o)->clas->m_NextToke((struct _m_options_parser_TOptParser_obj*)o);
		bbt_expr=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TOptParser_obj*)o)->clas->m_Parse((struct _m_options_parser_TOptParser_obj*)o);
		if(o->__m_options_parser_toptparser_token ->__m_options_parser_topttoken_toktype !=5){
			bbExThrow((BBObject *)&_s0);
		}
	}else{
		if(bbt_==0){
			BBINT bbt_value=(o->__m_options_parser_toptparser_values )->clas->m_Value_S((struct _m_options_parser_TValues_obj*)o->__m_options_parser_toptparser_values ,o->__m_options_parser_toptparser_token ->__m_options_parser_topttoken_value );
			bbt_expr=(struct _m_options_parser_TExpr_obj*)((struct _m_options_parser_TExpr_obj*)bbObjectDowncast((BBOBJECT)_m_options_parser_TIdentExpr.m_Create_Si((struct _m_options_parser_TIdentExpr_obj*)((struct _m_options_parser_TIdentExpr_obj*)bbObjectNew((BBClass *)&_m_options_parser_TIdentExpr)),o->__m_options_parser_toptparser_token ->__m_options_parser_topttoken_value ,bbt_value),(BBClass*)&_m_options_parser_TExpr));
			((struct _m_options_parser_TOptParser_obj*)o)->clas->m_NextToke((struct _m_options_parser_TOptParser_obj*)o);
		}else{
			if(bbt_==5){
				bbExThrow((BBObject *)&_s1);
			}
		}
	}
	return (struct _m_options_parser_TExpr_obj*)bbt_expr;
}
struct BBDebugScope_13 _m_options_parser_TOptParser_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TOptParser",
	{
		{
			BBDEBUGDECL_FIELD,
			"tokenizer",
			":TOptTokenizer",
			.field_offset=offsetof(struct _m_options_parser_TOptParser_obj,__m_options_parser_toptparser_tokenizer)
		},
		{
			BBDEBUGDECL_FIELD,
			"token",
			":TOptToken",
			.field_offset=offsetof(struct _m_options_parser_TOptParser_obj,__m_options_parser_toptparser_token)
		},
		{
			BBDEBUGDECL_FIELD,
			"values",
			":TValues",
			.field_offset=offsetof(struct _m_options_parser_TOptParser_obj,__m_options_parser_toptparser_values)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_options_parser_TOptParser_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Create",
			"(:TOptTokenizer,:TValues):TOptParser",
			.var_address=(void*)&__m_options_parser_TOptParser_Create_TTOptTokenizerTTValues
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Eval",
			"()i",
			.var_address=(void*)&__m_options_parser_TOptParser_Eval
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextToke",
			"()",
			.var_address=(void*)&__m_options_parser_TOptParser_NextToke
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Parse",
			"():TExpr",
			.var_address=(void*)&__m_options_parser_TOptParser_Parse
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ParseOrExpr",
			"():TExpr",
			.var_address=(void*)&__m_options_parser_TOptParser_ParseOrExpr
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ParseAndExpr",
			"():TExpr",
			.var_address=(void*)&__m_options_parser_TOptParser_ParseAndExpr
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ParseCompareExpr",
			"():TExpr",
			.var_address=(void*)&__m_options_parser_TOptParser_ParseCompareExpr
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ParseNotExpr",
			"():TExpr",
			.var_address=(void*)&__m_options_parser_TOptParser_ParseNotExpr
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ParsePrimaryExpr",
			"():TExpr",
			.var_address=(void*)&__m_options_parser_TOptParser_ParsePrimaryExpr
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_options_parser_TOptParser _m_options_parser_TOptParser={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_options_parser_TOptParser_scope,
	sizeof(struct _m_options_parser_TOptParser_obj),
	(void (*)(BBOBJECT))__m_options_parser_TOptParser_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_options_parser_TOptParser_obj,__m_options_parser_toptparser_values) - sizeof(void*) + sizeof(struct _m_options_parser_TValues_obj*)
	,0
	,__m_options_parser_TOptParser_Create_TTOptTokenizerTTValues
	,__m_options_parser_TOptParser_Eval
	,__m_options_parser_TOptParser_NextToke
	,__m_options_parser_TOptParser_Parse
	,__m_options_parser_TOptParser_ParseOrExpr
	,__m_options_parser_TOptParser_ParseAndExpr
	,__m_options_parser_TOptParser_ParseCompareExpr
	,__m_options_parser_TOptParser_ParseNotExpr
	,__m_options_parser_TOptParser_ParsePrimaryExpr
};

void __m_options_parser_TOptToken_New(struct _m_options_parser_TOptToken_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_options_parser_TOptToken;
	o->__m_options_parser_topttoken_toktype = 0;
	o->__m_options_parser_topttoken_value = &bbEmptyString;
}
struct _m_options_parser_TOptToken_obj* __m_options_parser_TOptToken_Create_iS(struct _m_options_parser_TOptToken_obj* o,BBINT bbt_tokType,BBSTRING bbt_value){
	o->__m_options_parser_topttoken_toktype =bbt_tokType;
	o->__m_options_parser_topttoken_value =bbt_value;
	return (struct _m_options_parser_TOptToken_obj*)o;
}
struct BBDebugScope_4 _m_options_parser_TOptToken_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TOptToken",
	{
		{
			BBDEBUGDECL_FIELD,
			"tokType",
			"i",
			.field_offset=offsetof(struct _m_options_parser_TOptToken_obj,__m_options_parser_topttoken_toktype)
		},
		{
			BBDEBUGDECL_FIELD,
			"value",
			"$",
			.field_offset=offsetof(struct _m_options_parser_TOptToken_obj,__m_options_parser_topttoken_value)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_options_parser_TOptToken_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Create",
			"(i,$):TOptToken",
			.var_address=(void*)&__m_options_parser_TOptToken_Create_iS
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_options_parser_TOptToken _m_options_parser_TOptToken={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_options_parser_TOptToken_scope,
	sizeof(struct _m_options_parser_TOptToken_obj),
	(void (*)(BBOBJECT))__m_options_parser_TOptToken_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_options_parser_TOptToken_obj,__m_options_parser_topttoken_value) - sizeof(void*) + sizeof(BBSTRING)
	,0
	,__m_options_parser_TOptToken_Create_iS
};

void __m_options_parser_TOptTokenizer_New(struct _m_options_parser_TOptTokenizer_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_options_parser_TOptTokenizer;
	o->__m_options_parser_topttokenizer_line = &bbEmptyString;
	o->__m_options_parser_topttokenizer_pos = 0;
}
struct _m_options_parser_TOptTokenizer_obj* __m_options_parser_TOptTokenizer_Create_S(struct _m_options_parser_TOptTokenizer_obj* o,BBSTRING bbt_line){
	o->__m_options_parser_topttokenizer_line =bbt_line;
	return (struct _m_options_parser_TOptTokenizer_obj*)o;
}
struct _m_options_parser_TOptToken_obj* __m_options_parser_TOptTokenizer_NextToken(struct _m_options_parser_TOptTokenizer_obj* o){
	while(1){
		if(o->__m_options_parser_topttokenizer_pos ==(o->__m_options_parser_topttokenizer_line ->length)){
			return (struct _m_options_parser_TOptToken_obj*)_m_options_parser_TOptToken.m_Create_iS((struct _m_options_parser_TOptToken_obj*)((struct _m_options_parser_TOptToken_obj*)bbObjectNew((BBClass *)&_m_options_parser_TOptToken)),6,(&bbEmptyString));
		}
		BBINT bbt_char=(o->__m_options_parser_topttokenizer_line )->buf[((BBUINT)o->__m_options_parser_topttokenizer_pos )];
		o->__m_options_parser_topttokenizer_pos +=1;
		if(bbt_char==40){
			return (struct _m_options_parser_TOptToken_obj*)_m_options_parser_TOptToken.m_Create_iS((struct _m_options_parser_TOptToken_obj*)((struct _m_options_parser_TOptToken_obj*)bbObjectNew((BBClass *)&_m_options_parser_TOptToken)),4,&_s2);
		}else{
			if(bbt_char==41){
				return (struct _m_options_parser_TOptToken_obj*)_m_options_parser_TOptToken.m_Create_iS((struct _m_options_parser_TOptToken_obj*)((struct _m_options_parser_TOptToken_obj*)bbObjectNew((BBClass *)&_m_options_parser_TOptToken)),5,&_s3);
			}else{
				if(bbt_char==60){
					return (struct _m_options_parser_TOptToken_obj*)_m_options_parser_TOptToken.m_Create_iS((struct _m_options_parser_TOptToken_obj*)((struct _m_options_parser_TOptToken_obj*)bbObjectNew((BBClass *)&_m_options_parser_TOptToken)),7,&_s4);
				}else{
					if(bbt_char==62){
						return (struct _m_options_parser_TOptToken_obj*)_m_options_parser_TOptToken.m_Create_iS((struct _m_options_parser_TOptToken_obj*)((struct _m_options_parser_TOptToken_obj*)bbObjectNew((BBClass *)&_m_options_parser_TOptToken)),8,&_s5);
					}else{
						if(bbt_char==61){
							return (struct _m_options_parser_TOptToken_obj*)_m_options_parser_TOptToken.m_Create_iS((struct _m_options_parser_TOptToken_obj*)((struct _m_options_parser_TOptToken_obj*)bbObjectNew((BBClass *)&_m_options_parser_TOptToken)),9,&_s6);
						}else{
							if(((struct _m_options_parser_TOptTokenizer_obj*)o)->clas->m_IsAlphaNumeric_i((struct _m_options_parser_TOptTokenizer_obj*)o,bbt_char)!=0){
								return (struct _m_options_parser_TOptToken_obj*)((struct _m_options_parser_TOptTokenizer_obj*)o)->clas->m_NextIdentToken_i((struct _m_options_parser_TOptTokenizer_obj*)o,bbt_char);
							}else{
								if(!(((struct _m_options_parser_TOptTokenizer_obj*)o)->clas->m_IsWhitespace_i((struct _m_options_parser_TOptTokenizer_obj*)o,bbt_char)!=0)){
									bbExThrow((BBObject *)bbStringConcat(&_s7,bbStringFromChar(bbt_char)));
								}
							}
						}
					}
				}
			}
		}
	}
}
struct _m_options_parser_TOptToken_obj* __m_options_parser_TOptTokenizer_NextIdentToken_i(struct _m_options_parser_TOptTokenizer_obj* o,BBINT bbt_char){
	struct _m_stringbuffer_core_TStringBuffer_obj* bbt_sb=(struct _m_stringbuffer_core_TStringBuffer_obj*)_m_stringbuffer_core_TStringBuffer_Create_TTStringBuffer_S(bbStringFromChar(bbt_char));
	while(1){
		bbt_char=((struct _m_options_parser_TOptTokenizer_obj*)o)->clas->m_Peek((struct _m_options_parser_TOptTokenizer_obj*)o);
		if(!(((struct _m_options_parser_TOptTokenizer_obj*)o)->clas->m_IsAlphaNumeric_i((struct _m_options_parser_TOptTokenizer_obj*)o,bbt_char)!=0)){
			break;
		}
		o->__m_options_parser_topttokenizer_pos +=1;
		(bbt_sb)->clas->m_Append_S((struct _m_stringbuffer_core_TStringBuffer_obj*)bbt_sb,bbStringFromChar(bbt_char));
	}
	BBSTRING bbt_token=bbStringToLower((BBSTRING)(bbt_sb)->clas->ToString((struct _m_stringbuffer_core_TStringBuffer_obj*)bbt_sb));
	BBSTRING bbt_=bbt_token;
	if(bbStringEquals(bbt_, &_s8)==1){
		return (struct _m_options_parser_TOptToken_obj*)_m_options_parser_TOptToken.m_Create_iS((struct _m_options_parser_TOptToken_obj*)((struct _m_options_parser_TOptToken_obj*)bbObjectNew((BBClass *)&_m_options_parser_TOptToken)),1,bbt_token);
	}else{
		if(bbStringEquals(bbt_, &_s9)==1){
			return (struct _m_options_parser_TOptToken_obj*)_m_options_parser_TOptToken.m_Create_iS((struct _m_options_parser_TOptToken_obj*)((struct _m_options_parser_TOptToken_obj*)bbObjectNew((BBClass *)&_m_options_parser_TOptToken)),2,bbt_token);
		}else{
			if(bbStringEquals(bbt_, &_s10)==1){
				return (struct _m_options_parser_TOptToken_obj*)_m_options_parser_TOptToken.m_Create_iS((struct _m_options_parser_TOptToken_obj*)((struct _m_options_parser_TOptToken_obj*)bbObjectNew((BBClass *)&_m_options_parser_TOptToken)),3,bbt_token);
			}else{
				return (struct _m_options_parser_TOptToken_obj*)_m_options_parser_TOptToken.m_Create_iS((struct _m_options_parser_TOptToken_obj*)((struct _m_options_parser_TOptToken_obj*)bbObjectNew((BBClass *)&_m_options_parser_TOptToken)),0,bbt_token);
			}
		}
	}
}
BBINT __m_options_parser_TOptTokenizer_IsAlphaNumeric_i(struct _m_options_parser_TOptTokenizer_obj* o,BBINT bbt_char){
	return (((((bbt_char>=65) && (bbt_char<=90)) || ((bbt_char>=97) && (bbt_char<=122))) || ((bbt_char>=48) && (bbt_char<=57))) || (bbt_char==95));
}
BBINT __m_options_parser_TOptTokenizer_IsWhitespace_i(struct _m_options_parser_TOptTokenizer_obj* o,BBINT bbt_char){
	return ((bbt_char==32) || (bbt_char==9));
}
BBINT __m_options_parser_TOptTokenizer_Peek(struct _m_options_parser_TOptTokenizer_obj* o){
	if(o->__m_options_parser_topttokenizer_pos <(o->__m_options_parser_topttokenizer_line ->length)){
		return (o->__m_options_parser_topttokenizer_line )->buf[((BBUINT)o->__m_options_parser_topttokenizer_pos )];
	}
	return 0;
}
struct BBDebugScope_9 _m_options_parser_TOptTokenizer_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TOptTokenizer",
	{
		{
			BBDEBUGDECL_FIELD,
			"line",
			"$",
			.field_offset=offsetof(struct _m_options_parser_TOptTokenizer_obj,__m_options_parser_topttokenizer_line)
		},
		{
			BBDEBUGDECL_FIELD,
			"pos",
			"i",
			.field_offset=offsetof(struct _m_options_parser_TOptTokenizer_obj,__m_options_parser_topttokenizer_pos)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_options_parser_TOptTokenizer_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Create",
			"($):TOptTokenizer",
			.var_address=(void*)&__m_options_parser_TOptTokenizer_Create_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextToken",
			"():TOptToken",
			.var_address=(void*)&__m_options_parser_TOptTokenizer_NextToken
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextIdentToken",
			"(i):TOptToken",
			.var_address=(void*)&__m_options_parser_TOptTokenizer_NextIdentToken_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsAlphaNumeric",
			"(i)i",
			.var_address=(void*)&__m_options_parser_TOptTokenizer_IsAlphaNumeric_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsWhitespace",
			"(i)i",
			.var_address=(void*)&__m_options_parser_TOptTokenizer_IsWhitespace_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Peek",
			"()i",
			.var_address=(void*)&__m_options_parser_TOptTokenizer_Peek
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_options_parser_TOptTokenizer _m_options_parser_TOptTokenizer={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_options_parser_TOptTokenizer_scope,
	sizeof(struct _m_options_parser_TOptTokenizer_obj),
	(void (*)(BBOBJECT))__m_options_parser_TOptTokenizer_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_options_parser_TOptTokenizer_obj,__m_options_parser_topttokenizer_pos) - sizeof(void*) + sizeof(BBINT)
	,0
	,__m_options_parser_TOptTokenizer_Create_S
	,__m_options_parser_TOptTokenizer_NextToken
	,__m_options_parser_TOptTokenizer_NextIdentToken_i
	,__m_options_parser_TOptTokenizer_IsAlphaNumeric_i
	,__m_options_parser_TOptTokenizer_IsWhitespace_i
	,__m_options_parser_TOptTokenizer_Peek
};

void __m_options_parser_TExpr_New(struct _m_options_parser_TExpr_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_options_parser_TExpr;
}
BBINT __m_options_parser_TExpr_Eval(struct _m_options_parser_TExpr_obj* o){
	brl_blitz_NullMethodError();
	return 0;
}
struct BBDebugScope_1 _m_options_parser_TExpr_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TExpr",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_options_parser_TExpr_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_options_parser_TExpr _m_options_parser_TExpr={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_options_parser_TExpr_scope,
	sizeof(struct _m_options_parser_TExpr_obj),
	(void (*)(BBOBJECT))__m_options_parser_TExpr_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,__m_options_parser_TExpr_Eval
};

void __m_options_parser_TNotExpr_New(struct _m_options_parser_TNotExpr_obj* o) {
	__m_options_parser_TExpr_New((struct _m_options_parser_TExpr_obj*)o);
	o->clas = &_m_options_parser_TNotExpr;
	o->__m_options_parser_tnotexpr_expr = (struct _m_options_parser_TExpr_obj*)(&bbNullObject);
}
struct _m_options_parser_TNotExpr_obj* __m_options_parser_TNotExpr_Create_TTExpr(struct _m_options_parser_TNotExpr_obj* o,struct _m_options_parser_TExpr_obj* bbt_expr){
	o->__m_options_parser_tnotexpr_expr =(struct _m_options_parser_TExpr_obj*)bbt_expr;
	return (struct _m_options_parser_TNotExpr_obj*)o;
}
BBINT __m_options_parser_TNotExpr_Eval(struct _m_options_parser_TNotExpr_obj* o){
	if(!(((BBObject*)o->__m_options_parser_tnotexpr_expr )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s20);
	}
	return (!((o->__m_options_parser_tnotexpr_expr )->clas->m_Eval((struct _m_options_parser_TExpr_obj*)o->__m_options_parser_tnotexpr_expr )!=0));
}
struct BBDebugScope_4 _m_options_parser_TNotExpr_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TNotExpr",
	{
		{
			BBDEBUGDECL_FIELD,
			"expr",
			":TExpr",
			.field_offset=offsetof(struct _m_options_parser_TNotExpr_obj,__m_options_parser_tnotexpr_expr)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_options_parser_TNotExpr_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Create",
			"(:TExpr):TNotExpr",
			.var_address=(void*)&__m_options_parser_TNotExpr_Create_TTExpr
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Eval",
			"()i",
			.var_address=(void*)&__m_options_parser_TNotExpr_Eval
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_options_parser_TNotExpr _m_options_parser_TNotExpr={
	&_m_options_parser_TExpr,
	bbObjectFree,
	(BBDebugScope*)&_m_options_parser_TNotExpr_scope,
	sizeof(struct _m_options_parser_TNotExpr_obj),
	(void (*)(BBOBJECT))__m_options_parser_TNotExpr_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_options_parser_TNotExpr_obj,__m_options_parser_tnotexpr_expr) - sizeof(void*) + sizeof(struct _m_options_parser_TExpr_obj*)
	,0
	,__m_options_parser_TNotExpr_Eval
	,__m_options_parser_TNotExpr_Create_TTExpr
};

void __m_options_parser_TBinaryExpr_New(struct _m_options_parser_TBinaryExpr_obj* o) {
	__m_options_parser_TExpr_New((struct _m_options_parser_TExpr_obj*)o);
	o->clas = &_m_options_parser_TBinaryExpr;
	o->__m_options_parser_tbinaryexpr_op = 0;
	o->__m_options_parser_tbinaryexpr_lhs = (struct _m_options_parser_TExpr_obj*)(&bbNullObject);
	o->__m_options_parser_tbinaryexpr_rhs = (struct _m_options_parser_TExpr_obj*)(&bbNullObject);
}
struct _m_options_parser_TBinaryExpr_obj* __m_options_parser_TBinaryExpr_Create_iTTExprTTExpr(struct _m_options_parser_TBinaryExpr_obj* o,BBINT bbt_op,struct _m_options_parser_TExpr_obj* bbt_lhs,struct _m_options_parser_TExpr_obj* bbt_rhs){
	o->__m_options_parser_tbinaryexpr_op =bbt_op;
	o->__m_options_parser_tbinaryexpr_rhs =(struct _m_options_parser_TExpr_obj*)bbt_rhs;
	o->__m_options_parser_tbinaryexpr_lhs =(struct _m_options_parser_TExpr_obj*)bbt_lhs;
	return (struct _m_options_parser_TBinaryExpr_obj*)o;
}
BBINT __m_options_parser_TBinaryExpr_Eval(struct _m_options_parser_TBinaryExpr_obj* o){
	if(!(((BBObject*)o->__m_options_parser_tbinaryexpr_lhs )!= &bbNullObject) || !(((BBObject*)o->__m_options_parser_tbinaryexpr_rhs )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s20);
	}
	BBINT bbt_=o->__m_options_parser_tbinaryexpr_op ;
	if(bbt_==3){
		return (((o->__m_options_parser_tbinaryexpr_lhs )->clas->m_Eval((struct _m_options_parser_TExpr_obj*)o->__m_options_parser_tbinaryexpr_lhs )!=0) || ((o->__m_options_parser_tbinaryexpr_rhs )->clas->m_Eval((struct _m_options_parser_TExpr_obj*)o->__m_options_parser_tbinaryexpr_rhs )!=0));
	}else{
		if(bbt_==2){
			return (((o->__m_options_parser_tbinaryexpr_lhs )->clas->m_Eval((struct _m_options_parser_TExpr_obj*)o->__m_options_parser_tbinaryexpr_lhs )!=0) && ((o->__m_options_parser_tbinaryexpr_rhs )->clas->m_Eval((struct _m_options_parser_TExpr_obj*)o->__m_options_parser_tbinaryexpr_rhs )!=0));
		}
	}
	return 0;
}
struct BBDebugScope_6 _m_options_parser_TBinaryExpr_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TBinaryExpr",
	{
		{
			BBDEBUGDECL_FIELD,
			"op",
			"i",
			.field_offset=offsetof(struct _m_options_parser_TBinaryExpr_obj,__m_options_parser_tbinaryexpr_op)
		},
		{
			BBDEBUGDECL_FIELD,
			"lhs",
			":TExpr",
			.field_offset=offsetof(struct _m_options_parser_TBinaryExpr_obj,__m_options_parser_tbinaryexpr_lhs)
		},
		{
			BBDEBUGDECL_FIELD,
			"rhs",
			":TExpr",
			.field_offset=offsetof(struct _m_options_parser_TBinaryExpr_obj,__m_options_parser_tbinaryexpr_rhs)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_options_parser_TBinaryExpr_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Create",
			"(i,:TExpr,:TExpr):TBinaryExpr",
			.var_address=(void*)&__m_options_parser_TBinaryExpr_Create_iTTExprTTExpr
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Eval",
			"()i",
			.var_address=(void*)&__m_options_parser_TBinaryExpr_Eval
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_options_parser_TBinaryExpr _m_options_parser_TBinaryExpr={
	&_m_options_parser_TExpr,
	bbObjectFree,
	(BBDebugScope*)&_m_options_parser_TBinaryExpr_scope,
	sizeof(struct _m_options_parser_TBinaryExpr_obj),
	(void (*)(BBOBJECT))__m_options_parser_TBinaryExpr_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_options_parser_TBinaryExpr_obj,__m_options_parser_tbinaryexpr_rhs) - sizeof(void*) + sizeof(struct _m_options_parser_TExpr_obj*)
	,0
	,__m_options_parser_TBinaryExpr_Eval
	,__m_options_parser_TBinaryExpr_Create_iTTExprTTExpr
};

void __m_options_parser_TBinaryCompareExpr_New(struct _m_options_parser_TBinaryCompareExpr_obj* o) {
	__m_options_parser_TBinaryExpr_New((struct _m_options_parser_TBinaryExpr_obj*)o);
	o->clas = &_m_options_parser_TBinaryCompareExpr;
}
BBINT __m_options_parser_TBinaryCompareExpr_Eval(struct _m_options_parser_TBinaryCompareExpr_obj* o){
	if(!(((BBObject*)o->__m_options_parser_tbinaryexpr_lhs )!= &bbNullObject) || !(((BBObject*)o->__m_options_parser_tbinaryexpr_rhs )!= &bbNullObject)){
		bbExThrow((BBObject *)&_s20);
	}
	BBINT bbt_=o->__m_options_parser_tbinaryexpr_op ;
	if(bbt_==7){
		return ((o->__m_options_parser_tbinaryexpr_lhs )->clas->m_Eval((struct _m_options_parser_TExpr_obj*)o->__m_options_parser_tbinaryexpr_lhs )<(o->__m_options_parser_tbinaryexpr_rhs )->clas->m_Eval((struct _m_options_parser_TExpr_obj*)o->__m_options_parser_tbinaryexpr_rhs ));
	}else{
		if(bbt_==8){
			return ((o->__m_options_parser_tbinaryexpr_lhs )->clas->m_Eval((struct _m_options_parser_TExpr_obj*)o->__m_options_parser_tbinaryexpr_lhs )>(o->__m_options_parser_tbinaryexpr_rhs )->clas->m_Eval((struct _m_options_parser_TExpr_obj*)o->__m_options_parser_tbinaryexpr_rhs ));
		}else{
			if(bbt_==9){
				return ((o->__m_options_parser_tbinaryexpr_lhs )->clas->m_Eval((struct _m_options_parser_TExpr_obj*)o->__m_options_parser_tbinaryexpr_lhs )==(o->__m_options_parser_tbinaryexpr_rhs )->clas->m_Eval((struct _m_options_parser_TExpr_obj*)o->__m_options_parser_tbinaryexpr_rhs ));
			}
		}
	}
	return 0;
}
struct BBDebugScope_2 _m_options_parser_TBinaryCompareExpr_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TBinaryCompareExpr",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_options_parser_TBinaryCompareExpr_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Eval",
			"()i",
			.var_address=(void*)&__m_options_parser_TBinaryCompareExpr_Eval
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_options_parser_TBinaryCompareExpr _m_options_parser_TBinaryCompareExpr={
	&_m_options_parser_TBinaryExpr,
	bbObjectFree,
	(BBDebugScope*)&_m_options_parser_TBinaryCompareExpr_scope,
	sizeof(struct _m_options_parser_TBinaryCompareExpr_obj),
	(void (*)(BBOBJECT))__m_options_parser_TBinaryCompareExpr_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,__m_options_parser_TBinaryCompareExpr_Eval
	,__m_options_parser_TBinaryExpr_Create_iTTExprTTExpr
};

void __m_options_parser_TIdentExpr_New(struct _m_options_parser_TIdentExpr_obj* o) {
	__m_options_parser_TExpr_New((struct _m_options_parser_TExpr_obj*)o);
	o->clas = &_m_options_parser_TIdentExpr;
	o->__m_options_parser_tidentexpr_ident = &bbEmptyString;
	o->__m_options_parser_tidentexpr_value = 0;
}
struct _m_options_parser_TIdentExpr_obj* __m_options_parser_TIdentExpr_Create_Si(struct _m_options_parser_TIdentExpr_obj* o,BBSTRING bbt_ident,BBINT bbt_value){
	o->__m_options_parser_tidentexpr_ident =bbt_ident;
	o->__m_options_parser_tidentexpr_value =bbt_value;
	return (struct _m_options_parser_TIdentExpr_obj*)o;
}
BBINT __m_options_parser_TIdentExpr_Eval(struct _m_options_parser_TIdentExpr_obj* o){
	return o->__m_options_parser_tidentexpr_value ;
}
struct BBDebugScope_5 _m_options_parser_TIdentExpr_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIdentExpr",
	{
		{
			BBDEBUGDECL_FIELD,
			"ident",
			"$",
			.field_offset=offsetof(struct _m_options_parser_TIdentExpr_obj,__m_options_parser_tidentexpr_ident)
		},
		{
			BBDEBUGDECL_FIELD,
			"value",
			"i",
			.field_offset=offsetof(struct _m_options_parser_TIdentExpr_obj,__m_options_parser_tidentexpr_value)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_options_parser_TIdentExpr_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Create",
			"($,i):TIdentExpr",
			.var_address=(void*)&__m_options_parser_TIdentExpr_Create_Si
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Eval",
			"()i",
			.var_address=(void*)&__m_options_parser_TIdentExpr_Eval
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_options_parser_TIdentExpr _m_options_parser_TIdentExpr={
	&_m_options_parser_TExpr,
	bbObjectFree,
	(BBDebugScope*)&_m_options_parser_TIdentExpr_scope,
	sizeof(struct _m_options_parser_TIdentExpr_obj),
	(void (*)(BBOBJECT))__m_options_parser_TIdentExpr_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_options_parser_TIdentExpr_obj,__m_options_parser_tidentexpr_value) - sizeof(void*) + sizeof(BBINT)
	,0
	,__m_options_parser_TIdentExpr_Eval
	,__m_options_parser_TIdentExpr_Create_Si
};

void __m_options_parser_TInt_New(struct _m_options_parser_TInt_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_options_parser_TInt;
	o->__m_options_parser_tint_value = 0;
}
struct _m_options_parser_TInt_obj* __m_options_parser_TInt_Create_i(struct _m_options_parser_TInt_obj* o,BBINT bbt_value){
	o->__m_options_parser_tint_value =bbt_value;
	return (struct _m_options_parser_TInt_obj*)o;
}
struct BBDebugScope_3 _m_options_parser_TInt_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TInt",
	{
		{
			BBDEBUGDECL_FIELD,
			"value",
			"i",
			.field_offset=offsetof(struct _m_options_parser_TInt_obj,__m_options_parser_tint_value)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_options_parser_TInt_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Create",
			"(i):TInt",
			.var_address=(void*)&__m_options_parser_TInt_Create_i
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_options_parser_TInt _m_options_parser_TInt={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_options_parser_TInt_scope,
	sizeof(struct _m_options_parser_TInt_obj),
	(void (*)(BBOBJECT))__m_options_parser_TInt_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_options_parser_TInt_obj,__m_options_parser_tint_value) - sizeof(void*) + sizeof(BBINT)
	,0
	,__m_options_parser_TInt_Create_i
};

BBINT _m_options_parser_EvalOption(BBSTRING bbt_line){
	if(!(bbt_line!= &bbEmptyString)){
		return 1;
	}
	struct _m_options_parser_TOptTokenizer_obj* bbt_tok=(struct _m_options_parser_TOptTokenizer_obj*)_m_options_parser_TOptTokenizer.m_Create_S((struct _m_options_parser_TOptTokenizer_obj*)((struct _m_options_parser_TOptTokenizer_obj*)bbObjectNew((BBClass *)&_m_options_parser_TOptTokenizer)),bbStringToLower((BBSTRING)bbt_line));
	struct _m_options_parser_TOptParser_obj* bbt_parser=(struct _m_options_parser_TOptParser_obj*)_m_options_parser_TOptParser.m_Create_TTOptTokenizerTTValues((struct _m_options_parser_TOptParser_obj*)((struct _m_options_parser_TOptParser_obj*)bbObjectNew((BBClass *)&_m_options_parser_TOptParser)),(struct _m_options_parser_TOptTokenizer_obj*)bbt_tok,(struct _m_options_parser_TValues_obj*)_m_options_parser_compilerOptions);
	return (bbt_parser)->clas->m_Eval((struct _m_options_parser_TOptParser_obj*)bbt_parser);
}
static int _bb_bmk_options_parser_inited = 0;
int _bb_bmk_options_parser(){
	if (!_bb_bmk_options_parser_inited) {
		_bb_bmk_options_parser_inited = 1;
		GC_add_roots(&_m_options_parser_compilerOptions, &_m_options_parser_compilerOptions + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_filesystem_filesystem();
		__bb_brl_map_map();
		_bb_bmk_stringbuffer_core();
		bbObjectRegisterType((BBCLASS)&_m_options_parser_TValues);
		bbObjectRegisterType((BBCLASS)&_m_options_parser_TOptParser);
		bbObjectRegisterType((BBCLASS)&_m_options_parser_TOptToken);
		bbObjectRegisterType((BBCLASS)&_m_options_parser_TOptTokenizer);
		bbObjectRegisterType((BBCLASS)&_m_options_parser_TExpr);
		bbObjectRegisterType((BBCLASS)&_m_options_parser_TNotExpr);
		bbObjectRegisterType((BBCLASS)&_m_options_parser_TBinaryExpr);
		bbObjectRegisterType((BBCLASS)&_m_options_parser_TBinaryCompareExpr);
		bbObjectRegisterType((BBCLASS)&_m_options_parser_TIdentExpr);
		bbObjectRegisterType((BBCLASS)&_m_options_parser_TInt);
		return 0;
	}
	return 0;
}