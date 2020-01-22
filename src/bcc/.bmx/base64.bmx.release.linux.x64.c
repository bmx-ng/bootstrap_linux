#include "base64.bmx.release.linux.x64.h"
static BBString _s10={
	&bbStringClass,
	2,
	{45,49}
};
static BBString _s9={
	&bbStringClass,
	2,
	{45,53}
};
static BBString _s8={
	&bbStringClass,
	2,
	{49,48}
};
static BBString _s7={
	&bbStringClass,
	2,
	{54,49}
};
static BBString _s6={
	&bbStringClass,
	2,
	{55,54}
};
static BBString _s5={
	&bbStringClass,
	1,
	{56}
};
static BBString _s4={
	&bbStringClass,
	2,
	{58,32}
};
static BBString _s2={
	&bbStringClass,
	64,
	{65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81
	,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103
	,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119
	,120,121,122,48,49,50,51,52,53,54,55,56,57,43,47}
};
static BBString _s3={
	&bbStringClass,
	30,
	{66,97,100,32,66,97,115,101,54,52,32,105,110,112,117,116,32
	,99,104,97,114,97,99,116,101,114,32,97,116,32}
};
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
void __m_base64_TBase64_New(struct _m_base64_TBase64_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_base64_TBase64;
}
BBSTRING _m_base64_TBase64_Encode_S_pbiii(BBBYTE* bbt_source,BBINT bbt_length,BBINT bbt_offset,BBINT bbt_options){
	BBINT bbt_dontBreakLines=((unsigned int)(bbt_options)&(unsigned int)(8));
	BBINT bbt_breakLines=1;
	if(bbt_dontBreakLines!=0){
		bbt_breakLines=0;
	}
	BBINT bbt_len43=((bbt_length*4)/3);
	BBINT bbt_nl=(bbt_len43/76);
	BBINT bbt_pad=0;
	if((bbt_length % 3)>0){
		bbt_pad=4;
	}
	if(!(bbt_breakLines!=0)){
		bbt_nl=0;
	}
	BBARRAY bbt_outBuff=bbArrayNew1D("b", ((bbt_len43+bbt_pad)+bbt_nl));
	BBINT bbt_d=0;
	BBINT bbt_e=0;
	BBINT bbt_len2=(bbt_length-2);
	BBINT bbt_lineLength=0;
	while(bbt_d<bbt_len2){
		_m_base64_TBase64_encode3to4_ab_pbiiabii(bbt_source,(bbt_d+bbt_offset),3,bbt_outBuff,bbt_e,bbt_options);
		bbt_lineLength+=4;
		if((bbt_breakLines!=0) && (bbt_lineLength==76)){
			((BBBYTE*)BBARRAYDATA(bbt_outBuff,1))[((BBUINT)(bbt_e+4))]=10;
			bbt_e+=1;
			bbt_lineLength=0;
		}
		bbt_d+=3;
		bbt_e+=4;
	}
	if(bbt_d<bbt_length){
		_m_base64_TBase64_encode3to4_ab_pbiiabii(bbt_source,(bbt_d+bbt_offset),(bbt_length-bbt_d),bbt_outBuff,bbt_e,bbt_options);
		bbt_e+=4;
	}
	return bbStringFromBytes(((BBBYTE*)BBARRAYDATA(bbt_outBuff,1)),bbt_e);
}
BBARRAY _m_base64_TBase64_Decode_ab_Sii(BBSTRING bbt_source,BBINT bbt_offset,BBINT bbt_options){
	BBINT bbt_length=(bbt_source->length);
	BBINT bbt_len34=((bbt_length*3)/4);
	BBARRAY bbt_outBuff=bbArrayNew1D("b", bbt_len34);
	BBINT bbt_outBuffPosn=0;
	BBARRAY bbt_b4=bbArrayNew1D("b", 4);
	BBINT bbt_b4Posn=0;
	BBINT bbt_sbiCrop=0;
	BBINT bbt_sbiDecode=0;
	{
		BBINT bbt_i=bbt_offset;
		BBINT bbt_=(bbt_offset+bbt_length);
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			bbt_sbiCrop=((unsigned int)((bbt_source)->buf[((BBUINT)bbt_i)])&(unsigned int)(127));
			bbt_sbiDecode=((BBINT*)BBARRAYDATA(_m_base64_TBase64__STANDARD_DECODABET,1))[((BBUINT)bbt_sbiCrop)];
			if(bbt_sbiDecode>=-5){
				if(bbt_sbiDecode>=-1){
					((BBBYTE*)BBARRAYDATA(bbt_b4,1))[((BBUINT)bbt_b4Posn)]=((BBBYTE)bbt_sbiCrop);
					bbt_b4Posn+=1;
					if(bbt_b4Posn>3){
						bbt_outBuffPosn+=_m_base64_TBase64_decode4to3_i_abiabii(bbt_b4,0,bbt_outBuff,bbt_outBuffPosn,bbt_options);
						bbt_b4Posn=0;
						if(bbt_sbiCrop==61){
							break;
						}
					}
				}
			}else{
				brl_blitz_DebugLog(bbStringConcat(bbStringConcat(bbStringConcat(&_s3,bbStringFromInt(bbt_i)),&_s4),bbStringFromInt((bbt_source)->buf[((BBUINT)bbt_i)])));
				return (&bbEmptyArray);
			}
		}
	}
	return bbArraySlice("b",bbt_outBuff,0,bbt_outBuffPosn);
}
BBARRAY _m_base64_TBase64_encode3to4_ab_pbiiabii(BBBYTE* bbt_source,BBINT bbt_srcOffset,BBINT bbt_numSigBytes,BBARRAY bbt_destination,BBINT bbt_destOffset,BBINT bbt_options){
	BBINT bbt_inBuff=0;
	if(bbt_numSigBytes>0){
		bbt_inBuff=((unsigned int)((((BBINT)bbt_source[bbt_srcOffset])<<24))>>(unsigned int)(8));
		if(bbt_numSigBytes>1){
			bbt_inBuff|=((unsigned int)((((BBINT)bbt_source[(bbt_srcOffset+1)])<<24))>>(unsigned int)(16));
			if(bbt_numSigBytes>2){
				bbt_inBuff|=((unsigned int)((((BBINT)bbt_source[(bbt_srcOffset+2)])<<24))>>(unsigned int)(24));
			}
		}
	}
	BBINT bbt_=bbt_numSigBytes;
	if(bbt_==3){
		BBSTRING bbt_2=&_s2;
		((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)bbt_destOffset)]=((BBBYTE)(bbt_2)->buf[((BBUINT)((unsigned int)(bbt_inBuff)>>(unsigned int)(18)))]);
		BBSTRING bbt_3=&_s2;
		((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)(bbt_destOffset+1))]=((BBBYTE)(bbt_3)->buf[((BBUINT)((unsigned int)(((unsigned int)(bbt_inBuff)>>(unsigned int)(12)))&(unsigned int)(63)))]);
		BBSTRING bbt_4=&_s2;
		((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)(bbt_destOffset+2))]=((BBBYTE)(bbt_4)->buf[((BBUINT)((unsigned int)(((unsigned int)(bbt_inBuff)>>(unsigned int)(6)))&(unsigned int)(63)))]);
		BBSTRING bbt_5=&_s2;
		((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)(bbt_destOffset+3))]=((BBBYTE)(bbt_5)->buf[((BBUINT)((unsigned int)(bbt_inBuff)&(unsigned int)(63)))]);
		return bbt_destination;
	}else{
		if(bbt_==2){
			BBSTRING bbt_6=&_s2;
			((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)bbt_destOffset)]=((BBBYTE)(bbt_6)->buf[((BBUINT)((unsigned int)(bbt_inBuff)>>(unsigned int)(18)))]);
			BBSTRING bbt_7=&_s2;
			((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)(bbt_destOffset+1))]=((BBBYTE)(bbt_7)->buf[((BBUINT)((unsigned int)(((unsigned int)(bbt_inBuff)>>(unsigned int)(12)))&(unsigned int)(63)))]);
			BBSTRING bbt_8=&_s2;
			((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)(bbt_destOffset+2))]=((BBBYTE)(bbt_8)->buf[((BBUINT)((unsigned int)(((unsigned int)(bbt_inBuff)>>(unsigned int)(6)))&(unsigned int)(63)))]);
			((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)(bbt_destOffset+3))]=61;
			return bbt_destination;
		}else{
			if(bbt_==1){
				BBSTRING bbt_9=&_s2;
				((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)bbt_destOffset)]=((BBBYTE)(bbt_9)->buf[((BBUINT)((unsigned int)(bbt_inBuff)>>(unsigned int)(18)))]);
				BBSTRING bbt_10=&_s2;
				((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)(bbt_destOffset+1))]=((BBBYTE)(bbt_10)->buf[((BBUINT)((unsigned int)(((unsigned int)(bbt_inBuff)>>(unsigned int)(12)))&(unsigned int)(63)))]);
				((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)(bbt_destOffset+2))]=61;
				((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)(bbt_destOffset+3))]=61;
				return bbt_destination;
			}else{
				return bbt_destination;
			}
		}
	}
}
BBINT _m_base64_TBase64_decode4to3_i_abiabii(BBARRAY bbt_source,BBINT bbt_srcOffset,BBARRAY bbt_destination,BBINT bbt_destOffset,BBINT bbt_options){
	if(((BBINT)((BBBYTE*)BBARRAYDATA(bbt_source,1))[((BBUINT)(bbt_srcOffset+2))])==61){
		BBINT bbt_outBuff=((unsigned int)((((unsigned int)(((BBINT*)BBARRAYDATA(_m_base64_TBase64__STANDARD_DECODABET,1))[((BBUINT)((BBBYTE*)BBARRAYDATA(bbt_source,1))[((BBUINT)bbt_srcOffset)])])&(unsigned int)(255))<<18))|(unsigned int)((((unsigned int)(((BBINT*)BBARRAYDATA(_m_base64_TBase64__STANDARD_DECODABET,1))[((BBUINT)((BBBYTE*)BBARRAYDATA(bbt_source,1))[((BBUINT)(bbt_srcOffset+1))])])&(unsigned int)(255))<<12)));
		((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)bbt_destOffset)]=((BBBYTE)((unsigned int)(bbt_outBuff)>>(unsigned int)(16)));
		return 1;
	}else{
		if(((BBINT)((BBBYTE*)BBARRAYDATA(bbt_source,1))[((BBUINT)(bbt_srcOffset+3))])==61){
			BBINT bbt_outBuff2=((unsigned int)(((unsigned int)((((unsigned int)(((BBINT*)BBARRAYDATA(_m_base64_TBase64__STANDARD_DECODABET,1))[((BBUINT)((BBBYTE*)BBARRAYDATA(bbt_source,1))[((BBUINT)bbt_srcOffset)])])&(unsigned int)(255))<<18))|(unsigned int)((((unsigned int)(((BBINT*)BBARRAYDATA(_m_base64_TBase64__STANDARD_DECODABET,1))[((BBUINT)((BBBYTE*)BBARRAYDATA(bbt_source,1))[((BBUINT)(bbt_srcOffset+1))])])&(unsigned int)(255))<<12))))|(unsigned int)((((unsigned int)(((BBINT*)BBARRAYDATA(_m_base64_TBase64__STANDARD_DECODABET,1))[((BBUINT)((BBBYTE*)BBARRAYDATA(bbt_source,1))[((BBUINT)(bbt_srcOffset+2))])])&(unsigned int)(255))<<6)));
			((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)bbt_destOffset)]=((BBBYTE)((unsigned int)(bbt_outBuff2)>>(unsigned int)(16)));
			((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)(bbt_destOffset+1))]=((BBBYTE)((unsigned int)(bbt_outBuff2)>>(unsigned int)(8)));
			return 2;
		}else{
			BBINT bbt_outBuff3=((unsigned int)(((unsigned int)(((unsigned int)((((unsigned int)(((BBINT*)BBARRAYDATA(_m_base64_TBase64__STANDARD_DECODABET,1))[((BBUINT)((BBBYTE*)BBARRAYDATA(bbt_source,1))[((BBUINT)bbt_srcOffset)])])&(unsigned int)(255))<<18))|(unsigned int)((((unsigned int)(((BBINT*)BBARRAYDATA(_m_base64_TBase64__STANDARD_DECODABET,1))[((BBUINT)((BBBYTE*)BBARRAYDATA(bbt_source,1))[((BBUINT)(bbt_srcOffset+1))])])&(unsigned int)(255))<<12))))|(unsigned int)((((unsigned int)(((BBINT*)BBARRAYDATA(_m_base64_TBase64__STANDARD_DECODABET,1))[((BBUINT)((BBBYTE*)BBARRAYDATA(bbt_source,1))[((BBUINT)(bbt_srcOffset+2))])])&(unsigned int)(255))<<6))))|(unsigned int)(((unsigned int)(((BBINT*)BBARRAYDATA(_m_base64_TBase64__STANDARD_DECODABET,1))[((BBUINT)((BBBYTE*)BBARRAYDATA(bbt_source,1))[((BBUINT)(bbt_srcOffset+3))])])&(unsigned int)(255))));
			((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)bbt_destOffset)]=((BBBYTE)((unsigned int)(bbt_outBuff3)>>(unsigned int)(16)));
			((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)(bbt_destOffset+1))]=((BBBYTE)((unsigned int)(bbt_outBuff3)>>(unsigned int)(8)));
			((BBBYTE*)BBARRAYDATA(bbt_destination,1))[((BBUINT)(bbt_destOffset+2))]=((BBBYTE)bbt_outBuff3);
			return 3;
		}
	}
}
BBARRAY _m_base64_TBase64__STANDARD_DECODABET;
struct BBDebugScope_13 _m_base64_TBase64_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TBase64",
	{
		{
			BBDEBUGDECL_CONST,
			"DONT_BREAK_LINES",
			"i",
			.const_value=&_s5
		},
		{
			BBDEBUGDECL_CONST,
			"MAX_LINE_LENGTH",
			"i",
			.const_value=&_s6
		},
		{
			BBDEBUGDECL_CONST,
			"EQUALS_SIGN",
			"i",
			.const_value=&_s7
		},
		{
			BBDEBUGDECL_CONST,
			"NEW_LINE",
			"i",
			.const_value=&_s8
		},
		{
			BBDEBUGDECL_CONST,
			"WHITE_SPACE_ENC",
			"i",
			.const_value=&_s9
		},
		{
			BBDEBUGDECL_CONST,
			"EQUALS_SIGN_ENC",
			"i",
			.const_value=&_s10
		},
		{
			BBDEBUGDECL_CONST,
			"_STANDARD_ALPHABET",
			"$",
			.const_value=&_s2
		},
		{
			BBDEBUGDECL_GLOBAL,
			"_STANDARD_DECODABET",
			"[]i",
			.var_address=(void*)&_m_base64_TBase64__STANDARD_DECODABET
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_base64_TBase64_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Encode",
			"(*b,i,i,i)$",
			.var_address=(void*)&_m_base64_TBase64_Encode_S_pbiii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Decode",
			"($,i,i)[]b",
			.var_address=(void*)&_m_base64_TBase64_Decode_ab_Sii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"encode3to4",
			"(*b,i,i,[]b,i,i)[]b",
			.var_address=(void*)&_m_base64_TBase64_encode3to4_ab_pbiiabii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"decode4to3",
			"([]b,i,[]b,i,i)i",
			.var_address=(void*)&_m_base64_TBase64_decode4to3_i_abiabii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_base64_TBase64 _m_base64_TBase64={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_base64_TBase64_scope,
	sizeof(struct _m_base64_TBase64_obj),
	(void (*)(BBOBJECT))__m_base64_TBase64_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_m_base64_TBase64_Encode_S_pbiii
	,_m_base64_TBase64_Decode_ab_Sii
	,_m_base64_TBase64_encode3to4_ab_pbiiabii
	,_m_base64_TBase64_decode4to3_i_abiabii
};

static int _bb_bcc_base64_inited = 0;
int _bb_bcc_base64(){
	if (!_bb_bcc_base64_inited) {
		_bb_bcc_base64_inited = 1;
		GC_add_roots(&_m_base64_TBase64__STANDARD_DECODABET, &_m_base64_TBase64__STANDARD_DECODABET + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_standardio_standardio();
		bbObjectRegisterType((BBCLASS)&_m_base64_TBase64);
		_m_base64_TBase64__STANDARD_DECODABET=(&bbEmptyArray);
		BBINT bbt_[]={-9,-9,-9,-9,-9,-9,-9,-9,-9,-5,-5,-9,-9,-5,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-5,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,62,-9,-9,-9,63,52,53,54,55,56,57,58,59,60,61,-9,-9,-9,-1,-9,-9,-9,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,-9,-9,-9,-9,-9,-9,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,-9,-9,-9,-9};
		BBARRAY bbt_2 = bbArrayFromData("i",127,bbt_);
		_m_base64_TBase64__STANDARD_DECODABET=bbt_2;
		return 0;
	}
	return 0;
}