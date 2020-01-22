#ifndef BCC_BASE64_BMX_RELEASE_LINUX_X64_H
#define BCC_BASE64_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.linux.x64.h>
int _bb_bcc_base64();
struct _m_base64_TBase64_obj;
void __m_base64_TBase64_New(struct _m_base64_TBase64_obj* o);
typedef BBSTRING (*_m_base64_TBase64_Encode_S_pbiii_f)(BBBYTE*,BBINT,BBINT,BBINT);
BBSTRING _m_base64_TBase64_Encode_S_pbiii(BBBYTE*,BBINT,BBINT,BBINT);
typedef BBARRAY (*_m_base64_TBase64_Decode_ab_Sii_f)(BBSTRING,BBINT,BBINT);
BBARRAY _m_base64_TBase64_Decode_ab_Sii(BBSTRING,BBINT,BBINT);
typedef BBARRAY (*_m_base64_TBase64_encode3to4_ab_pbiiabii_f)(BBBYTE*,BBINT,BBINT,BBARRAY,BBINT,BBINT);
BBARRAY _m_base64_TBase64_encode3to4_ab_pbiiabii(BBBYTE*,BBINT,BBINT,BBARRAY,BBINT,BBINT);
typedef BBINT (*_m_base64_TBase64_decode4to3_i_abiabii_f)(BBARRAY,BBINT,BBARRAY,BBINT,BBINT);
BBINT _m_base64_TBase64_decode4to3_i_abiabii(BBARRAY,BBINT,BBARRAY,BBINT,BBINT);
struct BBClass__m_base64_TBase64 {
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
	_m_base64_TBase64_Encode_S_pbiii_f f_Encode_S_pbiii;
	_m_base64_TBase64_Decode_ab_Sii_f f_Decode_ab_Sii;
	_m_base64_TBase64_encode3to4_ab_pbiiabii_f f_encode3to4_ab_pbiiabii;
	_m_base64_TBase64_decode4to3_i_abiabii_f f_decode4to3_i_abiabii;
};

struct _m_base64_TBase64_obj {
	struct BBClass__m_base64_TBase64* clas;
};
extern struct BBClass__m_base64_TBase64 _m_base64_TBase64;
extern BBARRAY _m_base64_TBase64__STANDARD_DECODABET;

#endif
