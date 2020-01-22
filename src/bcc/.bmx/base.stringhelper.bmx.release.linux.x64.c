#include "base.stringhelper.bmx.release.linux.x64.h"
static BBString _s0={
	&bbStringClass,
	1,
	{95}
};
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
void __m_base_stringhelper_TStringHelper_New(struct _m_base_stringhelper_TStringHelper_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_base_stringhelper_TStringHelper;
}
BBSTRING _m_base_stringhelper_TStringHelper_Sanitize_S_SSi(BBSTRING bbt_value,BBSTRING bbt_replaceInvalidCharsWith,BBINT bbt_requiresAlphaPrefix){
	struct _m_stringbuffer_core_TStringBuffer_obj* bbt_result=(struct _m_stringbuffer_core_TStringBuffer_obj*)(struct _m_stringbuffer_core_TStringBuffer_obj*)bbObjectAtomicNew((BBClass *)&_m_stringbuffer_core_TStringBuffer);
	{
		BBINT bbt_i=0;
		BBINT bbt_=(bbt_value->length);
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			BBBYTE* bbt_c=transform((bbt_value)->buf[((BBUINT)bbt_i)]);
			if(bbt_c){
				if(!(bbt_i!=0)){
					BBINT bbt_n=((BBINT)bbt_c[0]);
					if((bbt_n>=48) && (bbt_n<=57)){
						(bbt_result)->clas->m_Append_S((struct _m_stringbuffer_core_TStringBuffer_obj*)bbt_result,bbt_replaceInvalidCharsWith);
					}
				}
				(bbt_result)->clas->m_AppendCString_pb((struct _m_stringbuffer_core_TStringBuffer_obj*)bbt_result,bbt_c);
			}else{
				(bbt_result)->clas->m_Append_S((struct _m_stringbuffer_core_TStringBuffer_obj*)bbt_result,bbt_replaceInvalidCharsWith);
			}
		}
	}
	return (bbt_result)->clas->ToString((struct _m_stringbuffer_core_TStringBuffer_obj*)bbt_result);
}
struct BBDebugScope_2 _m_base_stringhelper_TStringHelper_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TStringHelper",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_base_stringhelper_TStringHelper_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Sanitize",
			"($,$,i)$",
			.var_address=(void*)&_m_base_stringhelper_TStringHelper_Sanitize_S_SSi
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_base_stringhelper_TStringHelper _m_base_stringhelper_TStringHelper={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_base_stringhelper_TStringHelper_scope,
	sizeof(struct _m_base_stringhelper_TStringHelper_obj),
	(void (*)(BBOBJECT))__m_base_stringhelper_TStringHelper_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_m_base_stringhelper_TStringHelper_Sanitize_S_SSi
};

static int _bb_bcc_base_stringhelper_inited = 0;
int _bb_bcc_base_stringhelper(){
	if (!_bb_bcc_base_stringhelper_inited) {
		_bb_bcc_base_stringhelper_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_standardio_standardio();
		_bb_bcc_stringbuffer_core();
		bbObjectRegisterType((BBCLASS)&_m_base_stringhelper_TStringHelper);
		return 0;
	}
	return 0;
}