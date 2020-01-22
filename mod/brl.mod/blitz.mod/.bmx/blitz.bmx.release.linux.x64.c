#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
static BBString _s0={
	&bbStringClass,
	48,
	{65,116,116,101,109,112,116,32,116,111,32,97,99,99,101,115,115
	,32,102,105,101,108,100,32,111,114,32,109,101,116,104,111,100
	,32,111,102,32,78,117,108,108,32,111,98,106,101,99,116}
};
static BBString _s1={
	&bbStringClass,
	31,
	{65,116,116,101,109,112,116,32,116,111,32,99,97,108,108,32,97
	,98,115,116,114,97,99,116,32,109,101,116,104,111,100}
};
static BBString _s2={
	&bbStringClass,
	46,
	{65,116,116,101,109,112,116,32,116,111,32,99,97,108,108,32,117
	,110,105,110,105,116,105,97,108,105,122,101,100,32,102,117,110
	,99,116,105,111,110,32,112,111,105,110,116,101,114}
};
static BBString _s5={
	&bbStringClass,
	37,
	{65,116,116,101,109,112,116,32,116,111,32,99,97,115,116,32,105
	,110,118,97,108,105,100,32,118,97,108,117,101,32,116,111,32
	,69,110,117,109}
};
static BBString _s3={
	&bbStringClass,
	50,
	{65,116,116,101,109,112,116,32,116,111,32,105,110,100,101,120,32
	,97,114,114,97,121,32,101,108,101,109,101,110,116,32,98,101
	,121,111,110,100,32,97,114,114,97,121,32,108,101,110,103,116
	,104}
};
static BBString _s4={
	&bbStringClass,
	34,
	{65,116,116,101,109,112,116,32,116,111,32,114,101,97,100,32,98
	,101,121,111,110,100,32,101,110,100,32,111,102,32,100,97,116
	,97}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
void _brl_blitz_TBlitzException_New(struct brl_blitz_TBlitzException_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_blitz_TBlitzException;
}
struct BBDebugScope_1 brl_blitz_TBlitzException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TBlitzException",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_blitz_TBlitzException_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_blitz_TBlitzException brl_blitz_TBlitzException={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_blitz_TBlitzException_scope,
	sizeof(struct brl_blitz_TBlitzException_obj),
	(void (*)(BBOBJECT))_brl_blitz_TBlitzException_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

void _brl_blitz_TNullObjectException_New(struct brl_blitz_TNullObjectException_obj* o) {
	_brl_blitz_TBlitzException_New((struct brl_blitz_TBlitzException_obj*)o);
	o->clas = &brl_blitz_TNullObjectException;
}
BBSTRING _brl_blitz_TNullObjectException_ToString(struct brl_blitz_TNullObjectException_obj* o){
	return &_s0;
}
struct BBDebugScope_2 brl_blitz_TNullObjectException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TNullObjectException",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_blitz_TNullObjectException_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&_brl_blitz_TNullObjectException_ToString
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_blitz_TNullObjectException brl_blitz_TNullObjectException={
	&brl_blitz_TBlitzException,
	bbObjectFree,
	(BBDebugScope*)&brl_blitz_TNullObjectException_scope,
	sizeof(struct brl_blitz_TNullObjectException_obj),
	(void (*)(BBOBJECT))_brl_blitz_TNullObjectException_New,
	bbObjectDtor,
	(BBSTRING (*)(BBOBJECT))_brl_blitz_TNullObjectException_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

void _brl_blitz_TNullMethodException_New(struct brl_blitz_TNullMethodException_obj* o) {
	_brl_blitz_TBlitzException_New((struct brl_blitz_TBlitzException_obj*)o);
	o->clas = &brl_blitz_TNullMethodException;
}
BBSTRING _brl_blitz_TNullMethodException_ToString(struct brl_blitz_TNullMethodException_obj* o){
	return &_s1;
}
struct BBDebugScope_2 brl_blitz_TNullMethodException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TNullMethodException",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_blitz_TNullMethodException_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&_brl_blitz_TNullMethodException_ToString
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_blitz_TNullMethodException brl_blitz_TNullMethodException={
	&brl_blitz_TBlitzException,
	bbObjectFree,
	(BBDebugScope*)&brl_blitz_TNullMethodException_scope,
	sizeof(struct brl_blitz_TNullMethodException_obj),
	(void (*)(BBOBJECT))_brl_blitz_TNullMethodException_New,
	bbObjectDtor,
	(BBSTRING (*)(BBOBJECT))_brl_blitz_TNullMethodException_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

void _brl_blitz_TNullFunctionException_New(struct brl_blitz_TNullFunctionException_obj* o) {
	_brl_blitz_TBlitzException_New((struct brl_blitz_TBlitzException_obj*)o);
	o->clas = &brl_blitz_TNullFunctionException;
}
BBSTRING _brl_blitz_TNullFunctionException_ToString(struct brl_blitz_TNullFunctionException_obj* o){
	return &_s2;
}
struct BBDebugScope_2 brl_blitz_TNullFunctionException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TNullFunctionException",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_blitz_TNullFunctionException_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&_brl_blitz_TNullFunctionException_ToString
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_blitz_TNullFunctionException brl_blitz_TNullFunctionException={
	&brl_blitz_TBlitzException,
	bbObjectFree,
	(BBDebugScope*)&brl_blitz_TNullFunctionException_scope,
	sizeof(struct brl_blitz_TNullFunctionException_obj),
	(void (*)(BBOBJECT))_brl_blitz_TNullFunctionException_New,
	bbObjectDtor,
	(BBSTRING (*)(BBOBJECT))_brl_blitz_TNullFunctionException_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

void _brl_blitz_TArrayBoundsException_New(struct brl_blitz_TArrayBoundsException_obj* o) {
	_brl_blitz_TBlitzException_New((struct brl_blitz_TBlitzException_obj*)o);
	o->clas = &brl_blitz_TArrayBoundsException;
}
BBSTRING _brl_blitz_TArrayBoundsException_ToString(struct brl_blitz_TArrayBoundsException_obj* o){
	return &_s3;
}
struct BBDebugScope_2 brl_blitz_TArrayBoundsException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TArrayBoundsException",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_blitz_TArrayBoundsException_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&_brl_blitz_TArrayBoundsException_ToString
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_blitz_TArrayBoundsException brl_blitz_TArrayBoundsException={
	&brl_blitz_TBlitzException,
	bbObjectFree,
	(BBDebugScope*)&brl_blitz_TArrayBoundsException_scope,
	sizeof(struct brl_blitz_TArrayBoundsException_obj),
	(void (*)(BBOBJECT))_brl_blitz_TArrayBoundsException_New,
	bbObjectDtor,
	(BBSTRING (*)(BBOBJECT))_brl_blitz_TArrayBoundsException_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

void _brl_blitz_TOutOfDataException_New(struct brl_blitz_TOutOfDataException_obj* o) {
	_brl_blitz_TBlitzException_New((struct brl_blitz_TBlitzException_obj*)o);
	o->clas = &brl_blitz_TOutOfDataException;
}
BBSTRING _brl_blitz_TOutOfDataException_ToString(struct brl_blitz_TOutOfDataException_obj* o){
	return &_s4;
}
struct BBDebugScope_2 brl_blitz_TOutOfDataException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TOutOfDataException",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_blitz_TOutOfDataException_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&_brl_blitz_TOutOfDataException_ToString
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_blitz_TOutOfDataException brl_blitz_TOutOfDataException={
	&brl_blitz_TBlitzException,
	bbObjectFree,
	(BBDebugScope*)&brl_blitz_TOutOfDataException_scope,
	sizeof(struct brl_blitz_TOutOfDataException_obj),
	(void (*)(BBOBJECT))_brl_blitz_TOutOfDataException_New,
	bbObjectDtor,
	(BBSTRING (*)(BBOBJECT))_brl_blitz_TOutOfDataException_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

void _brl_blitz_TRuntimeException_New(struct brl_blitz_TRuntimeException_obj* o) {
	_brl_blitz_TBlitzException_New((struct brl_blitz_TBlitzException_obj*)o);
	o->clas = &brl_blitz_TRuntimeException;
	o->_brl_blitz_truntimeexception_error = &bbEmptyString;
}
BBSTRING _brl_blitz_TRuntimeException_ToString(struct brl_blitz_TRuntimeException_obj* o){
	return o->_brl_blitz_truntimeexception_error ;
}
struct brl_blitz_TRuntimeException_obj* brl_blitz_TRuntimeException_Create_TTRuntimeException_S(BBSTRING bbt_error){
	struct brl_blitz_TRuntimeException_obj* bbt_t=(struct brl_blitz_TRuntimeException_obj*)(struct brl_blitz_TRuntimeException_obj*)bbObjectNew((BBClass *)&brl_blitz_TRuntimeException);
	bbt_t->_brl_blitz_truntimeexception_error =bbt_error;
	return (struct brl_blitz_TRuntimeException_obj*)bbt_t;
}
struct BBDebugScope_4 brl_blitz_TRuntimeException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TRuntimeException",
	{
		{
			BBDEBUGDECL_FIELD,
			"error",
			"$",
			.field_offset=offsetof(struct brl_blitz_TRuntimeException_obj,_brl_blitz_truntimeexception_error)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_blitz_TRuntimeException_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&_brl_blitz_TRuntimeException_ToString
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"($):TRuntimeException",
			.var_address=(void*)&brl_blitz_TRuntimeException_Create_TTRuntimeException_S
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_blitz_TRuntimeException brl_blitz_TRuntimeException={
	&brl_blitz_TBlitzException,
	bbObjectFree,
	(BBDebugScope*)&brl_blitz_TRuntimeException_scope,
	sizeof(struct brl_blitz_TRuntimeException_obj),
	(void (*)(BBOBJECT))_brl_blitz_TRuntimeException_New,
	bbObjectDtor,
	(BBSTRING (*)(BBOBJECT))_brl_blitz_TRuntimeException_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_blitz_TRuntimeException_obj,_brl_blitz_truntimeexception_error) - sizeof(void*) + sizeof(BBSTRING)
	,0
	,brl_blitz_TRuntimeException_Create_TTRuntimeException_S
};

void _brl_blitz_TInvalidEnumException_New(struct brl_blitz_TInvalidEnumException_obj* o) {
	_brl_blitz_TBlitzException_New((struct brl_blitz_TBlitzException_obj*)o);
	o->clas = &brl_blitz_TInvalidEnumException;
}
BBSTRING _brl_blitz_TInvalidEnumException_ToString(struct brl_blitz_TInvalidEnumException_obj* o){
	return &_s5;
}
struct BBDebugScope_2 brl_blitz_TInvalidEnumException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TInvalidEnumException",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_blitz_TInvalidEnumException_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&_brl_blitz_TInvalidEnumException_ToString
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_blitz_TInvalidEnumException brl_blitz_TInvalidEnumException={
	&brl_blitz_TBlitzException,
	bbObjectFree,
	(BBDebugScope*)&brl_blitz_TInvalidEnumException_scope,
	sizeof(struct brl_blitz_TInvalidEnumException_obj),
	(void (*)(BBOBJECT))_brl_blitz_TInvalidEnumException_New,
	bbObjectDtor,
	(BBSTRING (*)(BBOBJECT))_brl_blitz_TInvalidEnumException_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

void _brl_blitz_IDisposable_New(struct brl_blitz_IDisposable_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_blitz_IDisposable;
}
void _brl_blitz_IDisposable_Dispose(struct brl_blitz_IDisposable_obj* o){
	brl_blitz_NullMethodError();
}
struct BBDebugScope_1 brl_blitz_IDisposable_scope ={
	BBDEBUGSCOPE_USERINTERFACE,
	"IDisposable",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Dispose",
			"()",
			.var_address=(void*)&_brl_blitz_IDisposable_Dispose
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_blitz_IDisposable brl_blitz_IDisposable={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_blitz_IDisposable_scope,
	sizeof(struct brl_blitz_IDisposable_obj),
	(void (*)(BBOBJECT))_brl_blitz_IDisposable_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_blitz_IDisposable_Dispose
};

const struct BBInterface brl_blitz_IDisposable_ifc = { &brl_blitz_IDisposable, (const char *) "IDisposable" };
extern BBINT brl_blitz_Max(BBINT bbt_a,BBINT bbt_b);
extern BBLONG brl_blitz_Max2(BBLONG bbt_a,BBLONG bbt_b);
extern BBFLOAT brl_blitz_Max3(BBFLOAT bbt_a,BBFLOAT bbt_b);
extern BBDOUBLE brl_blitz_Max4(BBDOUBLE bbt_a,BBDOUBLE bbt_b);
extern BBBYTE brl_blitz_Max5(BBBYTE bbt_a,BBBYTE bbt_b);
extern BBSHORT brl_blitz_Max6(BBSHORT bbt_a,BBSHORT bbt_b);
extern BBUINT brl_blitz_Max7(BBUINT bbt_a,BBUINT bbt_b);
extern BBULONG brl_blitz_Max8(BBULONG bbt_a,BBULONG bbt_b);
extern BBSIZET brl_blitz_Max9(BBSIZET bbt_a,BBSIZET bbt_b);
extern BBINT brl_blitz_Min(BBINT bbt_a,BBINT bbt_b);
extern BBLONG brl_blitz_Min2(BBLONG bbt_a,BBLONG bbt_b);
extern BBFLOAT brl_blitz_Min3(BBFLOAT bbt_a,BBFLOAT bbt_b);
extern BBDOUBLE brl_blitz_Min4(BBDOUBLE bbt_a,BBDOUBLE bbt_b);
extern BBBYTE brl_blitz_Min5(BBBYTE bbt_a,BBBYTE bbt_b);
extern BBSHORT brl_blitz_Min6(BBSHORT bbt_a,BBSHORT bbt_b);
extern BBUINT brl_blitz_Min7(BBUINT bbt_a,BBUINT bbt_b);
extern BBULONG brl_blitz_Min8(BBULONG bbt_a,BBULONG bbt_b);
extern BBSIZET brl_blitz_Min9(BBSIZET bbt_a,BBSIZET bbt_b);
extern BBINT brl_blitz_Abs(BBINT bbt_a);
extern BBFLOAT brl_blitz_Abs2(BBFLOAT bbt_a);
extern BBDOUBLE brl_blitz_Abs3(BBDOUBLE bbt_a);
extern BBLONG brl_blitz_Abs4(BBLONG bbt_a);
extern BBINT brl_blitz_Sgn(BBINT bbt_a);
extern BBFLOAT brl_blitz_Sgn2(BBFLOAT bbt_a);
extern BBDOUBLE brl_blitz_Sgn3(BBDOUBLE bbt_a);
extern BBLONG brl_blitz_Sgn4(BBLONG bbt_a);
BBINT brl_blitz_DefaultComparator_Compare(BBBYTE bbt_o1,BBBYTE bbt_o2){
	return ((BBINT)(bbt_o1-bbt_o2));
}
BBINT brl_blitz_DefaultComparator_Compare2(BBSHORT bbt_o1,BBSHORT bbt_o2){
	return ((BBINT)(bbt_o1-bbt_o2));
}
BBINT brl_blitz_DefaultComparator_Compare3(BBINT bbt_o1,BBINT bbt_o2){
	return (bbt_o1-bbt_o2);
}
BBINT brl_blitz_DefaultComparator_Compare4(BBUINT bbt_o1,BBUINT bbt_o2){
	if(bbt_o1<bbt_o2){
		return -1;
	}else{
		if(bbt_o2<bbt_o1){
			return 1;
		}
	}
	return 0;
}
BBINT brl_blitz_DefaultComparator_Compare5(BBLONG bbt_o1,BBLONG bbt_o2){
	if(bbt_o1<bbt_o2){
		return -1;
	}else{
		if(bbt_o2<bbt_o1){
			return 1;
		}
	}
	return 0;
}
BBINT brl_blitz_DefaultComparator_Compare6(BBULONG bbt_o1,BBULONG bbt_o2){
	if(bbt_o1<bbt_o2){
		return -1;
	}else{
		if(bbt_o2<bbt_o1){
			return 1;
		}
	}
	return 0;
}
BBINT brl_blitz_DefaultComparator_Compare7(BBSIZET bbt_o1,BBSIZET bbt_o2){
	if(bbt_o1<bbt_o2){
		return -1;
	}else{
		if(bbt_o2<bbt_o1){
			return 1;
		}
	}
	return 0;
}
BBINT brl_blitz_DefaultComparator_Compare8(BBFLOAT bbt_o1,BBFLOAT bbt_o2){
	if(bbt_o1<bbt_o2){
		return -1;
	}else{
		if(bbt_o2<bbt_o1){
			return 1;
		}
	}
	return 0;
}
BBINT brl_blitz_DefaultComparator_Compare9(BBDOUBLE bbt_o1,BBDOUBLE bbt_o2){
	if(bbt_o1<bbt_o2){
		return -1;
	}else{
		if(bbt_o2<bbt_o1){
			return 1;
		}
	}
	return 0;
}
BBINT brl_blitz_DefaultComparator_Compare10(BBOBJECT bbt_o1,BBOBJECT bbt_o2){
	if(!(((BBObject*)bbt_o1)!= &bbNullObject) && !(((BBObject*)bbt_o2)!= &bbNullObject)){
		return 0;
	}
	if((((BBObject*)bbt_o1)!= &bbNullObject) && (((BBObject*)bbt_o2)!= &bbNullObject)){
		return (bbt_o1)->clas->Compare((BBOBJECT)bbt_o1,(BBOBJECT)bbt_o2);
	}
	return -1;
}
BBINT brl_blitz_DefaultComparator_Compare11(BBBYTE* bbt_o1,BBBYTE* bbt_o2){
	return (bbt_o1-bbt_o2);
}
void brl_blitz_NullObjectError(){
	bbExThrow((BBObject *)(struct brl_blitz_TNullObjectException_obj*)bbObjectAtomicNew((BBClass *)&brl_blitz_TNullObjectException));
}
void brl_blitz_NullMethodError(){
	bbExThrow((BBObject *)(struct brl_blitz_TNullMethodException_obj*)bbObjectAtomicNew((BBClass *)&brl_blitz_TNullMethodException));
}
void brl_blitz_NullFunctionError(){
	bbExThrow((BBObject *)(struct brl_blitz_TNullFunctionException_obj*)bbObjectAtomicNew((BBClass *)&brl_blitz_TNullFunctionException));
}
void brl_blitz_ArrayBoundsError(){
	bbExThrow((BBObject *)(struct brl_blitz_TArrayBoundsException_obj*)bbObjectAtomicNew((BBClass *)&brl_blitz_TArrayBoundsException));
}
void brl_blitz_OutOfDataError(){
	bbExThrow((BBObject *)(struct brl_blitz_TOutOfDataException_obj*)bbObjectAtomicNew((BBClass *)&brl_blitz_TOutOfDataException));
}
void brl_blitz_InvalidEnumError(){
	bbExThrow((BBObject *)(struct brl_blitz_TInvalidEnumException_obj*)bbObjectAtomicNew((BBClass *)&brl_blitz_TInvalidEnumException));
}
void brl_blitz_RuntimeError(BBSTRING bbt_message){
	bbExThrow((BBObject *)brl_blitz_TRuntimeException_Create_TTRuntimeException_S(bbt_message));
}
void brl_blitz_DebugStop(){
	bbOnDebugStop();
}
void brl_blitz_DebugLog(BBSTRING bbt_message){
	bbOnDebugLog(bbt_message);
}
static int __bb_brl_blitz_blitz_inited = 0;
int __bb_brl_blitz_blitz(){
	if (!__bb_brl_blitz_blitz_inited) {
		__bb_brl_blitz_blitz_inited = 1;
		GC_add_roots(&bbOnDebugStop, &bbCountInstances + 1);
		bbObjectRegisterType((BBCLASS)&brl_blitz_TBlitzException);
		bbObjectRegisterType((BBCLASS)&brl_blitz_TNullObjectException);
		bbObjectRegisterType((BBCLASS)&brl_blitz_TNullMethodException);
		bbObjectRegisterType((BBCLASS)&brl_blitz_TNullFunctionException);
		bbObjectRegisterType((BBCLASS)&brl_blitz_TArrayBoundsException);
		bbObjectRegisterType((BBCLASS)&brl_blitz_TOutOfDataException);
		bbObjectRegisterType((BBCLASS)&brl_blitz_TRuntimeException);
		bbObjectRegisterType((BBCLASS)&brl_blitz_TInvalidEnumException);
		bbObjectRegisterInterface((BBInterface *)&brl_blitz_IDisposable_ifc);
		return 0;
	}
	return 0;
}