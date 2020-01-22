#include <pub.mod/stdc.mod/.bmx/stdc.bmx.release.linux.x64.h>
static BBString _s0={
	&bbStringClass,
	4,
	{104,116,116,112}
};
struct BBDebugScope_21{int kind; const char *name; BBDebugDecl decls[22]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
void _pub_stdc_TAddrInfo_New(struct pub_stdc_TAddrInfo_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &pub_stdc_TAddrInfo;
	o->_pub_stdc_taddrinfo_infoptr = 0;
	o->_pub_stdc_taddrinfo_shouldfreeinfo = 0;
	o->_pub_stdc_taddrinfo_infoptr =bmx_stdc_addrinfo_new();
}
void _pub_stdc_TAddrInfo_New_iii(struct pub_stdc_TAddrInfo_obj* o,BBINT bbt_family,BBINT bbt_sockType,BBINT bbt_flags) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &pub_stdc_TAddrInfo;
	o->_pub_stdc_taddrinfo_infoptr = 0;
	o->_pub_stdc_taddrinfo_shouldfreeinfo = 0;
	o->_pub_stdc_taddrinfo_infoptr =bmx_stdc_addrinfo_new();
	((struct pub_stdc_TAddrInfo_obj*)o)->clas->m_setFamily_i((struct pub_stdc_TAddrInfo_obj*)o,bbt_family);
	((struct pub_stdc_TAddrInfo_obj*)o)->clas->m_setSockType_i((struct pub_stdc_TAddrInfo_obj*)o,bbt_sockType);
	if(bbt_flags!=0){
		((struct pub_stdc_TAddrInfo_obj*)o)->clas->m_setFlags_i((struct pub_stdc_TAddrInfo_obj*)o,bbt_flags);
	}
}
struct pub_stdc_TAddrInfo_obj* _pub_stdc_TAddrInfo_New_iii_ObjectNew(BBClass * clas,BBINT bbt_family,BBINT bbt_sockType,BBINT bbt_flags) {
	struct pub_stdc_TAddrInfo_obj* o = bbObjectAtomicNewNC(clas);
	_pub_stdc_TAddrInfo_New_iii(o, bbt_family, bbt_sockType, bbt_flags);
	return o;
}
void _pub_stdc_TAddrInfo_New_pbi(struct pub_stdc_TAddrInfo_obj* o,BBBYTE* bbt_infoPtr,BBINT bbt_shouldFreeInfo) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &pub_stdc_TAddrInfo;
	o->_pub_stdc_taddrinfo_infoptr = 0;
	o->_pub_stdc_taddrinfo_shouldfreeinfo = 0;
	o->_pub_stdc_taddrinfo_infoptr =bbt_infoPtr;
	o->_pub_stdc_taddrinfo_shouldfreeinfo =bbt_shouldFreeInfo;
}
struct pub_stdc_TAddrInfo_obj* _pub_stdc_TAddrInfo_New_pbi_ObjectNew(BBClass * clas,BBBYTE* bbt_infoPtr,BBINT bbt_shouldFreeInfo) {
	struct pub_stdc_TAddrInfo_obj* o = bbObjectAtomicNewNC(clas);
	_pub_stdc_TAddrInfo_New_pbi(o, bbt_infoPtr, bbt_shouldFreeInfo);
	return o;
}
void _pub_stdc_TAddrInfo_Delete(struct pub_stdc_TAddrInfo_obj* o) {
	if(o->_pub_stdc_taddrinfo_shouldfreeinfo !=0){
		freeaddrinfo_(o->_pub_stdc_taddrinfo_infoptr );
	}
	bbObjectDtor((BBOBJECT)o);
}
struct pub_stdc_TAddrInfo_obj* pub_stdc_TAddrInfo__Create(BBBYTE* bbt_infoPtr,BBINT bbt_shouldFreeInfo){
	return (struct pub_stdc_TAddrInfo_obj*)_pub_stdc_TAddrInfo_New_pbi_ObjectNew((struct pub_stdc_TAddrInfo_obj*)&pub_stdc_TAddrInfo,bbt_infoPtr,bbt_shouldFreeInfo);
}
BBARRAY pub_stdc_TAddrInfo__CreateArray(BBINT bbt_length){
	return bbArrayNew1D(":TAddrInfo", bbt_length);
}
void pub_stdc_TAddrInfo__SetAtIndex(BBARRAY bbt_arr,struct pub_stdc_TAddrInfo_obj* bbt_info,BBINT bbt_index){
	((struct pub_stdc_TAddrInfo_obj**)BBARRAYDATA(bbt_arr,1))[((BBUINT)bbt_index)]=(struct pub_stdc_TAddrInfo_obj*)bbt_info;
}
BBINT _pub_stdc_TAddrInfo_flags(struct pub_stdc_TAddrInfo_obj* o){
	return bmx_stdc_addrinfo_flags(o->_pub_stdc_taddrinfo_infoptr );
}
void _pub_stdc_TAddrInfo_setFlags_i(struct pub_stdc_TAddrInfo_obj* o,BBINT bbt_flags){
	bmx_stdc_addrinfo_setflags(o->_pub_stdc_taddrinfo_infoptr ,bbt_flags);
}
BBINT _pub_stdc_TAddrInfo_family(struct pub_stdc_TAddrInfo_obj* o){
	return bmx_stdc_addrinfo_family(o->_pub_stdc_taddrinfo_infoptr );
}
void _pub_stdc_TAddrInfo_setFamily_i(struct pub_stdc_TAddrInfo_obj* o,BBINT bbt_family){
	bmx_stdc_addrinfo_setfamily(o->_pub_stdc_taddrinfo_infoptr ,bbt_family);
}
BBINT _pub_stdc_TAddrInfo_sockType(struct pub_stdc_TAddrInfo_obj* o){
	return bmx_stdc_addrinfo_socktype(o->_pub_stdc_taddrinfo_infoptr );
}
void _pub_stdc_TAddrInfo_setSockType_i(struct pub_stdc_TAddrInfo_obj* o,BBINT bbt_sockType){
	bmx_stdc_addrinfo_setsocktype(o->_pub_stdc_taddrinfo_infoptr ,bbt_sockType);
}
BBINT _pub_stdc_TAddrInfo_protocol(struct pub_stdc_TAddrInfo_obj* o){
	return bmx_stdc_addrinfo_protocol(o->_pub_stdc_taddrinfo_infoptr );
}
void _pub_stdc_TAddrInfo_setProtocol_i(struct pub_stdc_TAddrInfo_obj* o,BBINT bbt_protocol){
	bmx_stdc_addrinfo_setprotocol(o->_pub_stdc_taddrinfo_infoptr ,bbt_protocol);
}
BBINT _pub_stdc_TAddrInfo_addrLen(struct pub_stdc_TAddrInfo_obj* o){
	return bmx_stdc_addrinfo_addrlen(o->_pub_stdc_taddrinfo_infoptr );
}
BBBYTE* _pub_stdc_TAddrInfo_addr(struct pub_stdc_TAddrInfo_obj* o){
	return bmx_stdc_addrinfo_addr(o->_pub_stdc_taddrinfo_infoptr );
}
BBSTRING _pub_stdc_TAddrInfo_canonName(struct pub_stdc_TAddrInfo_obj* o){
	return bmx_stdc_addrinfo_canonname(o->_pub_stdc_taddrinfo_infoptr );
}
BBSTRING _pub_stdc_TAddrInfo_HostName(struct pub_stdc_TAddrInfo_obj* o){
	return bmx_stdc_addrinfo_hostname(o->_pub_stdc_taddrinfo_infoptr ,0);
}
BBSTRING _pub_stdc_TAddrInfo_HostIp(struct pub_stdc_TAddrInfo_obj* o){
	return bmx_stdc_addrinfo_hostname(o->_pub_stdc_taddrinfo_infoptr ,8);
}
struct BBDebugScope_21 pub_stdc_TAddrInfo_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TAddrInfo",
	{
		{
			BBDEBUGDECL_FIELD,
			"infoPtr",
			"*b",
			.field_offset=offsetof(struct pub_stdc_TAddrInfo_obj,_pub_stdc_taddrinfo_infoptr)
		},
		{
			BBDEBUGDECL_FIELD,
			"shouldFreeInfo",
			"i",
			.field_offset=offsetof(struct pub_stdc_TAddrInfo_obj,_pub_stdc_taddrinfo_shouldfreeinfo)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_pub_stdc_TAddrInfo_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i,i,i):TAddrInfo",
			.var_address=(void*)&_pub_stdc_TAddrInfo_New_iii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(*b,i):TAddrInfo",
			.var_address=(void*)&_pub_stdc_TAddrInfo_New_pbi
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"_Create",
			"(*b,i):TAddrInfo{nomangle=1}",
			.var_address=(void*)&pub_stdc_TAddrInfo__Create
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"_CreateArray",
			"(i)[]:TAddrInfo{nomangle=1}",
			.var_address=(void*)&pub_stdc_TAddrInfo__CreateArray
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"_SetAtIndex",
			"([]:TAddrInfo,:TAddrInfo,i){nomangle=1}",
			.var_address=(void*)&pub_stdc_TAddrInfo__SetAtIndex
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"flags",
			"()i",
			.var_address=(void*)&_pub_stdc_TAddrInfo_flags
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"setFlags",
			"(i)",
			.var_address=(void*)&_pub_stdc_TAddrInfo_setFlags_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"family",
			"()i",
			.var_address=(void*)&_pub_stdc_TAddrInfo_family
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"setFamily",
			"(i)",
			.var_address=(void*)&_pub_stdc_TAddrInfo_setFamily_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"sockType",
			"()i",
			.var_address=(void*)&_pub_stdc_TAddrInfo_sockType
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"setSockType",
			"(i)",
			.var_address=(void*)&_pub_stdc_TAddrInfo_setSockType_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"protocol",
			"()i",
			.var_address=(void*)&_pub_stdc_TAddrInfo_protocol
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"setProtocol",
			"(i)",
			.var_address=(void*)&_pub_stdc_TAddrInfo_setProtocol_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"addrLen",
			"()i",
			.var_address=(void*)&_pub_stdc_TAddrInfo_addrLen
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"addr",
			"()*b",
			.var_address=(void*)&_pub_stdc_TAddrInfo_addr
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"canonName",
			"()$",
			.var_address=(void*)&_pub_stdc_TAddrInfo_canonName
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HostName",
			"()$",
			.var_address=(void*)&_pub_stdc_TAddrInfo_HostName
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HostIp",
			"()$",
			.var_address=(void*)&_pub_stdc_TAddrInfo_HostIp
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_pub_stdc_TAddrInfo pub_stdc_TAddrInfo={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&pub_stdc_TAddrInfo_scope,
	sizeof(struct pub_stdc_TAddrInfo_obj),
	(void (*)(BBOBJECT))_pub_stdc_TAddrInfo_New,
	(void (*)(BBOBJECT))_pub_stdc_TAddrInfo_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct pub_stdc_TAddrInfo_obj,_pub_stdc_taddrinfo_shouldfreeinfo) - sizeof(void*) + sizeof(BBINT)
	,0
	,pub_stdc_TAddrInfo__Create
	,pub_stdc_TAddrInfo__CreateArray
	,pub_stdc_TAddrInfo__SetAtIndex
	,_pub_stdc_TAddrInfo_flags
	,_pub_stdc_TAddrInfo_setFlags_i
	,_pub_stdc_TAddrInfo_family
	,_pub_stdc_TAddrInfo_setFamily_i
	,_pub_stdc_TAddrInfo_sockType
	,_pub_stdc_TAddrInfo_setSockType_i
	,_pub_stdc_TAddrInfo_protocol
	,_pub_stdc_TAddrInfo_setProtocol_i
	,_pub_stdc_TAddrInfo_addrLen
	,_pub_stdc_TAddrInfo_addr
	,_pub_stdc_TAddrInfo_canonName
	,_pub_stdc_TAddrInfo_HostName
	,_pub_stdc_TAddrInfo_HostIp
};

void _pub_stdc_TSockaddrStorage_New(struct pub_stdc_TSockaddrStorage_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &pub_stdc_TSockaddrStorage;
	o->_pub_stdc_tsockaddrstorage_storageptr = 0;
	o->_pub_stdc_tsockaddrstorage_storageptr =bmx_stdc_sockaddrestorage_new();
}
void _pub_stdc_TSockaddrStorage_Delete(struct pub_stdc_TSockaddrStorage_obj* o) {
	if(o->_pub_stdc_tsockaddrstorage_storageptr ){
		free((void*)o->_pub_stdc_tsockaddrstorage_storageptr );
		o->_pub_stdc_tsockaddrstorage_storageptr =0;
	}
	bbObjectDtor((BBOBJECT)o);
}
BBINT _pub_stdc_TSockaddrStorage_family(struct pub_stdc_TSockaddrStorage_obj* o){
	return 0;
}
BBSTRING _pub_stdc_TSockaddrStorage_address(struct pub_stdc_TSockaddrStorage_obj* o){
	return bmx_stdc_sockaddrestorage_address(o->_pub_stdc_tsockaddrstorage_storageptr );
}
struct BBDebugScope_4 pub_stdc_TSockaddrStorage_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSockaddrStorage",
	{
		{
			BBDEBUGDECL_FIELD,
			"storagePtr",
			"*b",
			.field_offset=offsetof(struct pub_stdc_TSockaddrStorage_obj,_pub_stdc_tsockaddrstorage_storageptr)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_pub_stdc_TSockaddrStorage_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"family",
			"()i",
			.var_address=(void*)&_pub_stdc_TSockaddrStorage_family
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"address",
			"()$",
			.var_address=(void*)&_pub_stdc_TSockaddrStorage_address
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_pub_stdc_TSockaddrStorage pub_stdc_TSockaddrStorage={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&pub_stdc_TSockaddrStorage_scope,
	sizeof(struct pub_stdc_TSockaddrStorage_obj),
	(void (*)(BBOBJECT))_pub_stdc_TSockaddrStorage_New,
	(void (*)(BBOBJECT))_pub_stdc_TSockaddrStorage_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct pub_stdc_TSockaddrStorage_obj,_pub_stdc_tsockaddrstorage_storageptr) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_pub_stdc_TSockaddrStorage_family
	,_pub_stdc_TSockaddrStorage_address
};

void _pub_stdc_STimeSpec_New_zz(struct pub_stdc_STimeSpec* o,BBSIZET bbt_tv_sec,BBSIZET bbt_tv_nsec) {
	(*o)._pub_stdc_stimespec_tv_sec =bbt_tv_sec;
	(*o)._pub_stdc_stimespec_tv_nsec =bbt_tv_nsec;
}
struct pub_stdc_STimeSpec pub_stdc_STimeSpec_New_zz_ObjectNew(BBSIZET bbt_tv_sec,BBSIZET bbt_tv_nsec) {
	struct pub_stdc_STimeSpec o = {0};
	_pub_stdc_STimeSpec_New_zz(&o, bbt_tv_sec, bbt_tv_nsec);
	return o;
}
void _pub_stdc_STimeSpec_New(struct pub_stdc_STimeSpec* o) {
}
struct pub_stdc_STimeSpec pub_stdc_STimeSpec_New_ObjectNew() {
	struct pub_stdc_STimeSpec o = {0};
	_pub_stdc_STimeSpec_New(&o);
	return o;
}
BBINT _pub_stdc_STimeSpec_Compare_i_vTSTimeSpec(struct pub_stdc_STimeSpec* o,struct pub_stdc_STimeSpec* bbt_o1){
	BBINT bbt_cmp=0;
	if(bbt_cmp!=0){
		return bbt_cmp;
	}
	bbt_cmp=brl_blitz_DefaultComparator_Compare7(o->_pub_stdc_stimespec_tv_sec ,(*bbt_o1)._pub_stdc_stimespec_tv_sec );
	if(bbt_cmp!=0){
		return bbt_cmp;
	}
	bbt_cmp=brl_blitz_DefaultComparator_Compare7(o->_pub_stdc_stimespec_tv_nsec ,(*bbt_o1)._pub_stdc_stimespec_tv_nsec );
	return bbt_cmp;
}
struct BBDebugScope_6 pub_stdc_STimeSpec_scope ={
	BBDEBUGSCOPE_USERSTRUCT,
	"STimeSpec",
	{
		{
			BBDEBUGDECL_FIELD,
			"tv_sec",
			"t",
			.field_offset=offsetof(struct pub_stdc_STimeSpec,_pub_stdc_stimespec_tv_sec)
		},
		{
			BBDEBUGDECL_FIELD,
			"tv_nsec",
			"t",
			.field_offset=offsetof(struct pub_stdc_STimeSpec,_pub_stdc_stimespec_tv_nsec)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_pub_stdc_STimeSpec_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(t,t)@STimeSpec",
			.var_address=(void*)&_pub_stdc_STimeSpec_New_zz
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()@STimeSpec",
			.var_address=(void*)&_pub_stdc_STimeSpec_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Compare",
			"(@STimeSpec)i",
			.var_address=(void*)&_pub_stdc_STimeSpec_Compare_i_vTSTimeSpec
		},
		BBDEBUGDECL_END
	}
};
BBINT pub_stdc_DefaultComparator_Compare(struct pub_stdc_STimeSpec* bbt_o1,struct pub_stdc_STimeSpec* bbt_o2){
	return _pub_stdc_STimeSpec_Compare_i_vTSTimeSpec((struct pub_stdc_STimeSpec*)&*bbt_o1,bbt_o2);
}
static int __bb_pub_stdc_stdc_inited = 0;
int __bb_pub_stdc_stdc(){
	if (!__bb_pub_stdc_stdc_inited) {
		__bb_pub_stdc_stdc_inited = 1;
		GC_add_roots(&stdin_, &stderr_ + 1);
		__bb_brl_blitz_blitz();
		bbObjectRegisterType((BBCLASS)&pub_stdc_TAddrInfo);
		bbObjectRegisterType((BBCLASS)&pub_stdc_TSockaddrStorage);
		bbObjectRegisterStruct((BBDebugScope *)&pub_stdc_STimeSpec_scope);
		bb_stdc_Startup();
		return 0;
	}
	return 0;
}