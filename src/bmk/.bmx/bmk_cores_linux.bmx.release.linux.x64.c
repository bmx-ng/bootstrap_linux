#include "bmk_cores_linux.bmx.release.linux.x64.h"
static BBString _s0={
	&bbStringClass,
	39,
	{99,97,116,32,47,112,114,111,99,47,99,112,117,105,110,102,111
	,32,124,103,114,101,112,32,45,99,32,39,94,112,114,111,99
	,101,115,115,111,114,39}
};
static BBString _s1={
	&bbStringClass,
	1,
	{114}
};
static BBINT _m_bmk_cores_linux_GetCoreCount_count;
BBINT _m_bmk_cores_linux_GetCoreCount(){
	static int __m_bmk_cores_linux_GetCoreCount_count_inited = 0;
	if (!__m_bmk_cores_linux_GetCoreCount_count_inited) {
		__m_bmk_cores_linux_GetCoreCount_count_inited = 1;
		_m_bmk_cores_linux_GetCoreCount_count = 0;
	};
	if(!(_m_bmk_cores_linux_GetCoreCount_count!=0)){
		BBARRAY bbt_buf=bbArrayNew1D("b", 128);
		BBBYTE* bbt_ = bbStringToCString(&_s0);
		BBBYTE* bbt_2 = bbStringToCString(&_s1);
		BBBYTE* bbt_fp=popen((const char*)bbt_,(const char*)bbt_2);
		bbMemFree(bbt_2);
		bbMemFree(bbt_);
		fread((void*)((BBBYTE*)BBARRAYDATA(bbt_buf,1)),(size_t)1LL,(size_t)127LL,(FILE*)bbt_fp);
		fclose((FILE*)bbt_fp);
		_m_bmk_cores_linux_GetCoreCount_count=bbStringToInt((BBSTRING)bbStringFromCString((BBBYTE*)BBARRAYDATA(bbt_buf,1)));
	}
	return _m_bmk_cores_linux_GetCoreCount_count;
}
static int _bb_bmk_bmk_cores_linux_inited = 0;
int _bb_bmk_bmk_cores_linux(){
	if (!_bb_bmk_bmk_cores_linux_inited) {
		_bb_bmk_bmk_cores_linux_inited = 1;
		GC_add_roots(&_m_bmk_cores_linux_GetCoreCount_count, &_m_bmk_cores_linux_GetCoreCount_count + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_filesystem_filesystem();
		return 0;
	}
	return 0;
}