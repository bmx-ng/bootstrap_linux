#ifndef BCC_BASE_STRINGHELPER_BMX_RELEASE_LINUX_X64_H
#define BCC_BASE_STRINGHELPER_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.linux.x64.h>
#include "stringbuffer_core.bmx.release.linux.x64.h"
int _bb_bcc_base_stringhelper();
struct _m_base_stringhelper_TStringHelper_obj;
void __m_base_stringhelper_TStringHelper_New(struct _m_base_stringhelper_TStringHelper_obj* o);
typedef BBSTRING (*_m_base_stringhelper_TStringHelper_Sanitize_S_SSi_f)(BBSTRING,BBSTRING,BBINT);
BBSTRING _m_base_stringhelper_TStringHelper_Sanitize_S_SSi(BBSTRING,BBSTRING,BBINT);
struct BBClass__m_base_stringhelper_TStringHelper {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	_m_base_stringhelper_TStringHelper_Sanitize_S_SSi_f f_Sanitize_S_SSi;
};

struct _m_base_stringhelper_TStringHelper_obj {
	struct BBClass__m_base_stringhelper_TStringHelper* clas;
};
extern struct BBClass__m_base_stringhelper_TStringHelper _m_base_stringhelper_TStringHelper;
extern BBBYTE* transform(BBINT bbt_i);

#endif
