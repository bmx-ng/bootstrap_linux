#include <brl.mod/textstream.mod/.bmx/textstream.bmx.release.linux.x64.h>
static BBString _s0={
	&bbStringClass,
	2,
	{13,10}
};
static BBString _s11={
	&bbStringClass,
	1,
	{48}
};
static BBString _s6={
	&bbStringClass,
	1,
	{49}
};
static BBString _s7={
	&bbStringClass,
	1,
	{50}
};
static BBString _s8={
	&bbStringClass,
	1,
	{51}
};
static BBString _s9={
	&bbStringClass,
	1,
	{52}
};
static BBString _s10={
	&bbStringClass,
	6,
	{76,65,84,73,78,49}
};
static BBString _s1={
	&bbStringClass,
	25,
	{77,97,108,102,111,114,109,101,100,32,108,105,110,101,32,116,101
	,114,109,105,110,97,116,111,114}
};
static BBString _s13={
	&bbStringClass,
	7,
	{85,84,70,49,54,66,69}
};
static BBString _s14={
	&bbStringClass,
	7,
	{85,84,70,49,54,76,69}
};
static BBString _s12={
	&bbStringClass,
	4,
	{85,84,70,56}
};
static BBString _s2={
	&bbStringClass,
	6,
	{108,97,116,105,110,49}
};
static BBString _s4={
	&bbStringClass,
	7,
	{117,116,102,49,54,98,101}
};
static BBString _s5={
	&bbStringClass,
	7,
	{117,116,102,49,54,108,101}
};
static BBString _s3={
	&bbStringClass,
	4,
	{117,116,102,56}
};
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_35{int kind; const char *name; BBDebugDecl decls[36]; };
void _brl_textstream_TTextStreamFactory_New(struct brl_textstream_TTextStreamFactory_obj* o) {
	_brl_stream_TStreamFactory_New((struct brl_stream_TStreamFactory_obj*)o);
	o->clas = &brl_textstream_TTextStreamFactory;
}
struct brl_stream_TStream_obj* _brl_textstream_TTextStreamFactory_CreateStream_TObjectSSii(struct brl_textstream_TTextStreamFactory_obj* o,BBOBJECT bbt_url,BBSTRING bbt_proto,BBSTRING bbt_path,BBINT bbt_readable,BBINT bbt_writeMode){
	BBINT bbt_encoding=0;
	BBSTRING bbt_=bbt_proto;
	if(bbStringEquals(bbt_, &_s2)==1){
		bbt_encoding=0;
	}else{
		if(bbStringEquals(bbt_, &_s3)==1){
			bbt_encoding=1;
		}else{
			if(bbStringEquals(bbt_, &_s4)==1){
				bbt_encoding=2;
			}else{
				if(bbStringEquals(bbt_, &_s5)==1){
					bbt_encoding=3;
				}
			}
		}
	}
	if(!(bbt_encoding!=0)){
		return (struct brl_stream_TStream_obj*)&bbNullObject;
	}
	struct brl_stream_TStream_obj* bbt_stream=(struct brl_stream_TStream_obj*)brl_stream_OpenStream((BBOBJECT)bbt_path,bbt_readable,bbt_writeMode);
	if(((BBObject*)bbt_stream)!= &bbNullObject){
		return (struct brl_stream_TStream_obj*)((struct brl_stream_TStream_obj*)bbObjectDowncast((BBOBJECT)brl_textstream_TTextStream_Create_TTTextStream_TTStreameETextStreamFormat((struct brl_stream_TStream_obj*)bbt_stream,bbt_encoding),(BBClass*)&brl_stream_TStream));
	}
	return (struct brl_stream_TStream_obj*)(&bbNullObject);
}
struct BBDebugScope_2 brl_textstream_TTextStreamFactory_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TTextStreamFactory",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_textstream_TTextStreamFactory_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CreateStream",
			"(:Object,$,$,i,i):TStream",
			.var_address=(void*)&_brl_textstream_TTextStreamFactory_CreateStream_TObjectSSii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_textstream_TTextStreamFactory brl_textstream_TTextStreamFactory={
	&brl_stream_TStreamFactory,
	bbObjectFree,
	(BBDebugScope*)&brl_textstream_TTextStreamFactory_scope,
	sizeof(struct brl_textstream_TTextStreamFactory_obj),
	(void (*)(BBOBJECT))_brl_textstream_TTextStreamFactory_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_textstream_TTextStreamFactory_CreateStream_TObjectSSii
};

void _brl_textstream_TTextStream_New(struct brl_textstream_TTextStream_obj* o) {
	_brl_stream_TStreamWrapper_New((struct brl_stream_TStreamWrapper_obj*)o);
	o->clas = &brl_textstream_TTextStream;
	o->_brl_textstream_ttextstream__encoding = 0;
	o->_brl_textstream_ttextstream__bufcount = 0;
	o->_brl_textstream_ttextstream__carried = 0;
}
void _brl_textstream_TTextStream_Delete(struct brl_textstream_TTextStream_obj* o) {
	_brl_stream_TStreamWrapper_Delete((struct brl_stream_TStreamWrapper_obj*)o);
}
BBLONG _brl_textstream_TTextStream_Read_pbl(struct brl_textstream_TTextStream_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	{
		BBLONG bbt_i=0LL;
		BBLONG bbt_=bbt_count;
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1LL)){
			if(o->_brl_textstream_ttextstream__bufcount ==32){
				((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushRead((struct brl_textstream_TTextStream_obj*)o);
			}
			BBINT bbt_hi=((struct brl_textstream_TTextStream_obj*)o)->clas->m__ReadByte((struct brl_textstream_TTextStream_obj*)o);
			BBINT bbt_lo=((struct brl_textstream_TTextStream_obj*)o)->clas->m__ReadByte((struct brl_textstream_TTextStream_obj*)o);
			bbt_hi-=48;
			if(bbt_hi>9){
				bbt_hi-=7;
			}
			bbt_lo-=48;
			if(bbt_lo>9){
				bbt_lo-=7;
			}
			bbt_buf[bbt_i]=((BBBYTE)((unsigned int)((bbt_hi<<4))|(unsigned int)(bbt_lo)));
			o->_brl_textstream_ttextstream__bufcount +=1;
		}
	}
	return bbt_count;
}
BBLONG _brl_textstream_TTextStream_Write_pbl(struct brl_textstream_TTextStream_obj* o,BBBYTE* bbt_buf,BBLONG bbt_count){
	{
		BBLONG bbt_i=0LL;
		BBLONG bbt_=bbt_count;
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1LL)){
			BBINT bbt_hi=((unsigned int)(((BBINT)bbt_buf[bbt_i]))>>(unsigned int)(4));
			BBINT bbt_lo=((unsigned int)(((BBINT)bbt_buf[bbt_i]))&(unsigned int)(15));
			bbt_hi+=48;
			if(bbt_hi>57){
				bbt_hi+=7;
			}
			bbt_lo+=48;
			if(bbt_lo>57){
				bbt_lo+=7;
			}
			((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,bbt_hi);
			((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,bbt_lo);
			o->_brl_textstream_ttextstream__bufcount +=1;
			if(o->_brl_textstream_ttextstream__bufcount ==32){
				((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushWrite((struct brl_textstream_TTextStream_obj*)o);
			}
		}
	}
	return bbt_count;
}
BBINT _brl_textstream_TTextStream_ReadByte(struct brl_textstream_TTextStream_obj* o){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushRead((struct brl_textstream_TTextStream_obj*)o);
	return bbStringToInt(((struct brl_textstream_TTextStream_obj*)o)->clas->m_ReadLine((struct brl_textstream_TTextStream_obj*)o));
}
void _brl_textstream_TTextStream_WriteByte_i(struct brl_textstream_TTextStream_obj* o,BBINT bbt_n){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushWrite((struct brl_textstream_TTextStream_obj*)o);
	((struct brl_textstream_TTextStream_obj*)o)->clas->m_WriteLine_S((struct brl_textstream_TTextStream_obj*)o,bbStringFromInt(bbt_n));
}
BBINT _brl_textstream_TTextStream_ReadShort(struct brl_textstream_TTextStream_obj* o){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushRead((struct brl_textstream_TTextStream_obj*)o);
	return bbStringToInt(((struct brl_textstream_TTextStream_obj*)o)->clas->m_ReadLine((struct brl_textstream_TTextStream_obj*)o));
}
void _brl_textstream_TTextStream_WriteShort_i(struct brl_textstream_TTextStream_obj* o,BBINT bbt_n){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushWrite((struct brl_textstream_TTextStream_obj*)o);
	((struct brl_textstream_TTextStream_obj*)o)->clas->m_WriteLine_S((struct brl_textstream_TTextStream_obj*)o,bbStringFromInt(bbt_n));
}
BBINT _brl_textstream_TTextStream_ReadInt(struct brl_textstream_TTextStream_obj* o){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushRead((struct brl_textstream_TTextStream_obj*)o);
	return bbStringToInt(((struct brl_textstream_TTextStream_obj*)o)->clas->m_ReadLine((struct brl_textstream_TTextStream_obj*)o));
}
void _brl_textstream_TTextStream_WriteInt_i(struct brl_textstream_TTextStream_obj* o,BBINT bbt_n){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushWrite((struct brl_textstream_TTextStream_obj*)o);
	((struct brl_textstream_TTextStream_obj*)o)->clas->m_WriteLine_S((struct brl_textstream_TTextStream_obj*)o,bbStringFromInt(bbt_n));
}
BBLONG _brl_textstream_TTextStream_ReadLong(struct brl_textstream_TTextStream_obj* o){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushRead((struct brl_textstream_TTextStream_obj*)o);
	return bbStringToLong(((struct brl_textstream_TTextStream_obj*)o)->clas->m_ReadLine((struct brl_textstream_TTextStream_obj*)o));
}
void _brl_textstream_TTextStream_WriteLong_l(struct brl_textstream_TTextStream_obj* o,BBLONG bbt_n){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushWrite((struct brl_textstream_TTextStream_obj*)o);
	((struct brl_textstream_TTextStream_obj*)o)->clas->m_WriteLine_S((struct brl_textstream_TTextStream_obj*)o,bbStringFromLong(bbt_n));
}
BBFLOAT _brl_textstream_TTextStream_ReadFloat(struct brl_textstream_TTextStream_obj* o){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushRead((struct brl_textstream_TTextStream_obj*)o);
	return bbStringToFloat(((struct brl_textstream_TTextStream_obj*)o)->clas->m_ReadLine((struct brl_textstream_TTextStream_obj*)o));
}
void _brl_textstream_TTextStream_WriteFloat_f(struct brl_textstream_TTextStream_obj* o,BBFLOAT bbt_n){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushWrite((struct brl_textstream_TTextStream_obj*)o);
	((struct brl_textstream_TTextStream_obj*)o)->clas->m_WriteLine_S((struct brl_textstream_TTextStream_obj*)o,bbStringFromFloat(bbt_n));
}
BBDOUBLE _brl_textstream_TTextStream_ReadDouble(struct brl_textstream_TTextStream_obj* o){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushRead((struct brl_textstream_TTextStream_obj*)o);
	return bbStringToDouble(((struct brl_textstream_TTextStream_obj*)o)->clas->m_ReadLine((struct brl_textstream_TTextStream_obj*)o));
}
void _brl_textstream_TTextStream_WriteDouble_d(struct brl_textstream_TTextStream_obj* o,BBDOUBLE bbt_n){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushWrite((struct brl_textstream_TTextStream_obj*)o);
	((struct brl_textstream_TTextStream_obj*)o)->clas->m_WriteLine_S((struct brl_textstream_TTextStream_obj*)o,bbStringFromDouble(bbt_n));
}
BBSTRING _brl_textstream_TTextStream_ReadLine(struct brl_textstream_TTextStream_obj* o){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushRead((struct brl_textstream_TTextStream_obj*)o);
	BBARRAY bbt_buf=bbArrayNew1D("s", 1024);
	BBINT bbt_i=0;
	while(!(((struct brl_stream_TStreamWrapper_obj*)o)->clas->m_Eof((struct brl_stream_TStreamWrapper_obj*)o)!=0)){
		BBINT bbt_n=((struct brl_textstream_TTextStream_obj*)o)->clas->m_ReadChar((struct brl_textstream_TTextStream_obj*)o);
		if(bbt_n==0){
			break;
		}
		if(bbt_n==10){
			break;
		}
		if(bbt_n==13){
			continue;
		}
		if((bbt_buf->scales[0])==bbt_i){
			bbt_buf=bbArraySlice("s",bbt_buf,0,(bbt_i+1024));
		}
		((BBSHORT*)BBARRAYDATA(bbt_buf,1))[((BBUINT)bbt_i)]=((BBSHORT)bbt_n);
		bbt_i+=1;
	}
	return bbStringFromShorts(((BBSHORT*)BBARRAYDATA(bbt_buf,1)),bbt_i);
}
BBSTRING _brl_textstream_TTextStream_ReadFile(struct brl_textstream_TTextStream_obj* o){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushRead((struct brl_textstream_TTextStream_obj*)o);
	BBARRAY bbt_buf=bbArrayNew1D("s", 1024);
	BBINT bbt_i=0;
	while(!(((struct brl_stream_TStreamWrapper_obj*)o)->clas->m_Eof((struct brl_stream_TStreamWrapper_obj*)o)!=0)){
		BBINT bbt_n=((struct brl_textstream_TTextStream_obj*)o)->clas->m_ReadChar((struct brl_textstream_TTextStream_obj*)o);
		if((bbt_buf->scales[0])==bbt_i){
			bbt_buf=bbArraySlice("s",bbt_buf,0,(bbt_i+1024));
		}
		((BBSHORT*)BBARRAYDATA(bbt_buf,1))[((BBUINT)bbt_i)]=((BBSHORT)bbt_n);
		bbt_i+=1;
	}
	return bbStringFromShorts(((BBSHORT*)BBARRAYDATA(bbt_buf,1)),bbt_i);
}
BBINT _brl_textstream_TTextStream_WriteLine_S(struct brl_textstream_TTextStream_obj* o,BBSTRING bbt_str){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushWrite((struct brl_textstream_TTextStream_obj*)o);
	((struct brl_textstream_TTextStream_obj*)o)->clas->m_WriteString_S((struct brl_textstream_TTextStream_obj*)o,bbt_str);
	((struct brl_textstream_TTextStream_obj*)o)->clas->m_WriteString_S((struct brl_textstream_TTextStream_obj*)o,&_s0);
	return 0;
}
BBSTRING _brl_textstream_TTextStream_ReadString_i(struct brl_textstream_TTextStream_obj* o,BBINT bbt_length){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushRead((struct brl_textstream_TTextStream_obj*)o);
	BBARRAY bbt_buf=bbArrayNew1D("s", bbt_length);
	{
		BBINT bbt_i=0;
		BBINT bbt_=bbt_length;
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			((BBSHORT*)BBARRAYDATA(bbt_buf,1))[((BBUINT)bbt_i)]=((BBSHORT)((struct brl_textstream_TTextStream_obj*)o)->clas->m_ReadChar((struct brl_textstream_TTextStream_obj*)o));
		}
	}
	return bbStringFromShorts(((BBSHORT*)BBARRAYDATA(bbt_buf,1)),bbt_length);
}
void _brl_textstream_TTextStream_WriteString_S(struct brl_textstream_TTextStream_obj* o,BBSTRING bbt_str){
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__FlushWrite((struct brl_textstream_TTextStream_obj*)o);
	{
		BBINT bbt_i=0;
		BBINT bbt_=(bbt_str->length);
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			((struct brl_textstream_TTextStream_obj*)o)->clas->m_WriteChar_i((struct brl_textstream_TTextStream_obj*)o,(bbt_str)->buf[((BBUINT)bbt_i)]);
		}
	}
}
BBINT _brl_textstream_TTextStream_ReadChar(struct brl_textstream_TTextStream_obj* o){
	BBINT bbt_c=0;
	if(o->_brl_textstream_ttextstream__carried !=0){
		bbt_c=o->_brl_textstream_ttextstream__carried ;
		o->_brl_textstream_ttextstream__carried =0;
		return bbt_c;
	}
	bbt_c=((struct brl_textstream_TTextStream_obj*)o)->clas->m__ReadByte((struct brl_textstream_TTextStream_obj*)o);
	BBINT bbt_=o->_brl_textstream_ttextstream__encoding ;
	if(bbt_==0){
		return bbt_c;
	}else{
		if(bbt_==1){
			if(bbt_c<128){
				return bbt_c;
			}
			BBINT bbt_d=((unsigned int)(((struct brl_textstream_TTextStream_obj*)o)->clas->m__ReadByte((struct brl_textstream_TTextStream_obj*)o))&(unsigned int)(63));
			if(bbt_c<224){
				return ((unsigned int)((((unsigned int)(bbt_c)&(unsigned int)(31))<<6))|(unsigned int)(bbt_d));
			}
			BBINT bbt_e=((unsigned int)(((struct brl_textstream_TTextStream_obj*)o)->clas->m__ReadByte((struct brl_textstream_TTextStream_obj*)o))&(unsigned int)(63));
			if(bbt_c<240){
				return ((unsigned int)(((unsigned int)((((unsigned int)(bbt_c)&(unsigned int)(15))<<12))|(unsigned int)((bbt_d<<6))))|(unsigned int)(bbt_e));
			}
			BBINT bbt_f=((unsigned int)(((struct brl_textstream_TTextStream_obj*)o)->clas->m__ReadByte((struct brl_textstream_TTextStream_obj*)o))&(unsigned int)(63));
			BBINT bbt_v=((unsigned int)(((unsigned int)(((unsigned int)((((unsigned int)(bbt_c)&(unsigned int)(7))<<18))|(unsigned int)((bbt_d<<12))))|(unsigned int)((bbt_e<<6))))|(unsigned int)(bbt_f));
			if(((unsigned int)(bbt_v)&(unsigned int)(-65536))!=0){
				bbt_v-=65536;
				bbt_d=(((unsigned int)(((unsigned int)(bbt_v)>>(unsigned int)(10)))&(unsigned int)(524287))+55296);
				bbt_e=(((unsigned int)(bbt_v)&(unsigned int)(1023))+56320);
				o->_brl_textstream_ttextstream__carried =bbt_e;
				return bbt_d;
			}else{
				return bbt_v;
			}
		}else{
			if(bbt_==2){
				BBINT bbt_d2=((struct brl_textstream_TTextStream_obj*)o)->clas->m__ReadByte((struct brl_textstream_TTextStream_obj*)o);
				return ((unsigned int)((bbt_c<<8))|(unsigned int)(bbt_d2));
			}else{
				if(bbt_==3){
					BBINT bbt_d3=((struct brl_textstream_TTextStream_obj*)o)->clas->m__ReadByte((struct brl_textstream_TTextStream_obj*)o);
					return ((unsigned int)((bbt_d3<<8))|(unsigned int)(bbt_c));
				}
			}
		}
	}
	return 0;
}
void _brl_textstream_TTextStream_WriteChar_i(struct brl_textstream_TTextStream_obj* o,BBINT bbt_char){
	if(o->_brl_textstream_ttextstream__carried !=0){
		BBINT bbt_c=((((o->_brl_textstream_ttextstream__carried -55296)<<10)+(bbt_char-56320))+65536);
		((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,((unsigned int)(((unsigned int)(bbt_c)>>(unsigned int)(18)))|(unsigned int)(240)));
		((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,((unsigned int)(((unsigned int)(((unsigned int)(bbt_c)>>(unsigned int)(12)))&(unsigned int)(63)))|(unsigned int)(128)));
		((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,((unsigned int)(((unsigned int)(((unsigned int)(bbt_c)>>(unsigned int)(6)))&(unsigned int)(63)))|(unsigned int)(128)));
		((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,((unsigned int)(((unsigned int)(bbt_c)&(unsigned int)(63)))|(unsigned int)(128)));
		o->_brl_textstream_ttextstream__carried =0;
		return;
	}
	BBINT bbt_=o->_brl_textstream_ttextstream__encoding ;
	if(bbt_==0){
		((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,bbt_char);
	}else{
		if(bbt_==1){
			if(bbt_char<128){
				((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,bbt_char);
			}else{
				if(bbt_char<2048){
					((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,((unsigned int)((bbt_char/64))|(unsigned int)(192)));
					((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,((unsigned int)((bbt_char % 64))|(unsigned int)(128)));
				}else{
					if((bbt_char<55296) || (bbt_char>56319)){
						((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,((unsigned int)((bbt_char/4096))|(unsigned int)(224)));
						((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,((unsigned int)(((bbt_char/64) % 64))|(unsigned int)(128)));
						((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,((unsigned int)((bbt_char % 64))|(unsigned int)(128)));
					}else{
						o->_brl_textstream_ttextstream__carried =bbt_char;
						return;
					}
				}
			}
		}else{
			if(bbt_==2){
				((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,((unsigned int)(bbt_char)>>(unsigned int)(8)));
				((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,bbt_char);
			}else{
				if(bbt_==3){
					((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,bbt_char);
					((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,((unsigned int)(bbt_char)>>(unsigned int)(8)));
				}
			}
		}
	}
}
struct brl_textstream_TTextStream_obj* brl_textstream_TTextStream_Create_TTTextStream_TTStreami(struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_encoding){
	BBINT bbt_enc=0;
	BBINT bbt_=bbt_encoding;
	if(bbt_==1){
		bbt_enc=0;
	}else{
		if(bbt_==2){
			bbt_enc=1;
		}else{
			if(bbt_==3){
				bbt_enc=2;
			}else{
				if(bbt_==4){
					bbt_enc=3;
				}
			}
		}
	}
	return (struct brl_textstream_TTextStream_obj*)brl_textstream_TTextStream_Create_TTTextStream_TTStreameETextStreamFormat((struct brl_stream_TStream_obj*)bbt_stream,bbt_enc);
}
struct brl_textstream_TTextStream_obj* brl_textstream_TTextStream_Create_TTTextStream_TTStreameETextStreamFormat(struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_encoding){
	struct brl_textstream_TTextStream_obj* bbt_t=(struct brl_textstream_TTextStream_obj*)(struct brl_textstream_TTextStream_obj*)bbObjectNew((BBClass *)&brl_textstream_TTextStream);
	bbt_t->_brl_textstream_ttextstream__encoding =bbt_encoding;
	(bbt_t)->clas->m_SetStream_TTStream((struct brl_stream_TStreamWrapper_obj*)bbt_t,(struct brl_stream_TStream_obj*)bbt_stream);
	return (struct brl_textstream_TTextStream_obj*)bbt_t;
}
BBINT _brl_textstream_TTextStream__ReadByte(struct brl_textstream_TTextStream_obj* o){
	return (&brl_textstream_TTextStream)->super->m_ReadByte((struct brl_stream_TStreamWrapper_obj*)o);
}
void _brl_textstream_TTextStream__WriteByte_i(struct brl_textstream_TTextStream_obj* o,BBINT bbt_n){
	(&brl_textstream_TTextStream)->super->m_WriteByte_i((struct brl_stream_TStreamWrapper_obj*)o,bbt_n);
}
void _brl_textstream_TTextStream__FlushRead(struct brl_textstream_TTextStream_obj* o){
	if(!(o->_brl_textstream_ttextstream__bufcount !=0)){
		return;
	}
	BBINT bbt_n=((struct brl_textstream_TTextStream_obj*)o)->clas->m__ReadByte((struct brl_textstream_TTextStream_obj*)o);
	if(bbt_n==13){
		bbt_n=((struct brl_textstream_TTextStream_obj*)o)->clas->m__ReadByte((struct brl_textstream_TTextStream_obj*)o);
	}
	if(bbt_n!=10){
		bbExThrow((BBObject *)&_s1);
	}
	o->_brl_textstream_ttextstream__bufcount =0;
}
void _brl_textstream_TTextStream__FlushWrite(struct brl_textstream_TTextStream_obj* o){
	if(!(o->_brl_textstream_ttextstream__bufcount !=0)){
		return;
	}
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,13);
	((struct brl_textstream_TTextStream_obj*)o)->clas->m__WriteByte_i((struct brl_textstream_TTextStream_obj*)o,10);
	o->_brl_textstream_ttextstream__bufcount =0;
}
struct BBDebugScope_35 brl_textstream_TTextStream_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TTextStream",
	{
		{
			BBDEBUGDECL_CONST,
			"LATIN1",
			"i",
			.const_value=&_s6
		},
		{
			BBDEBUGDECL_CONST,
			"UTF8",
			"i",
			.const_value=&_s7
		},
		{
			BBDEBUGDECL_CONST,
			"UTF16BE",
			"i",
			.const_value=&_s8
		},
		{
			BBDEBUGDECL_CONST,
			"UTF16LE",
			"i",
			.const_value=&_s9
		},
		{
			BBDEBUGDECL_FIELD,
			"_encoding",
			"/ETextStreamFormat",
			.field_offset=offsetof(struct brl_textstream_TTextStream_obj,_brl_textstream_ttextstream__encoding)
		},
		{
			BBDEBUGDECL_FIELD,
			"_bufcount",
			"i",
			.field_offset=offsetof(struct brl_textstream_TTextStream_obj,_brl_textstream_ttextstream__bufcount)
		},
		{
			BBDEBUGDECL_FIELD,
			"_carried",
			"i",
			.field_offset=offsetof(struct brl_textstream_TTextStream_obj,_brl_textstream_ttextstream__carried)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_textstream_TTextStream_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Read",
			"(*b,l)l",
			.var_address=(void*)&_brl_textstream_TTextStream_Read_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Write",
			"(*b,l)l",
			.var_address=(void*)&_brl_textstream_TTextStream_Write_pbl
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadByte",
			"()i",
			.var_address=(void*)&_brl_textstream_TTextStream_ReadByte
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteByte",
			"(i)",
			.var_address=(void*)&_brl_textstream_TTextStream_WriteByte_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadShort",
			"()i",
			.var_address=(void*)&_brl_textstream_TTextStream_ReadShort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteShort",
			"(i)",
			.var_address=(void*)&_brl_textstream_TTextStream_WriteShort_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadInt",
			"()i",
			.var_address=(void*)&_brl_textstream_TTextStream_ReadInt
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteInt",
			"(i)",
			.var_address=(void*)&_brl_textstream_TTextStream_WriteInt_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadLong",
			"()l",
			.var_address=(void*)&_brl_textstream_TTextStream_ReadLong
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteLong",
			"(l)",
			.var_address=(void*)&_brl_textstream_TTextStream_WriteLong_l
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadFloat",
			"()f",
			.var_address=(void*)&_brl_textstream_TTextStream_ReadFloat
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteFloat",
			"(f)",
			.var_address=(void*)&_brl_textstream_TTextStream_WriteFloat_f
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadDouble",
			"()d",
			.var_address=(void*)&_brl_textstream_TTextStream_ReadDouble
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteDouble",
			"(d)",
			.var_address=(void*)&_brl_textstream_TTextStream_WriteDouble_d
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadLine",
			"()$",
			.var_address=(void*)&_brl_textstream_TTextStream_ReadLine
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadFile",
			"()$",
			.var_address=(void*)&_brl_textstream_TTextStream_ReadFile
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteLine",
			"($)i",
			.var_address=(void*)&_brl_textstream_TTextStream_WriteLine_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadString",
			"(i)$",
			.var_address=(void*)&_brl_textstream_TTextStream_ReadString_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteString",
			"($)",
			.var_address=(void*)&_brl_textstream_TTextStream_WriteString_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadChar",
			"()i",
			.var_address=(void*)&_brl_textstream_TTextStream_ReadChar
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"WriteChar",
			"(i)",
			.var_address=(void*)&_brl_textstream_TTextStream_WriteChar_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(:TStream,i):TTextStream",
			.var_address=(void*)&brl_textstream_TTextStream_Create_TTTextStream_TTStreami
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(:TStream,/ETextStreamFormat):TTextStream",
			.var_address=(void*)&brl_textstream_TTextStream_Create_TTTextStream_TTStreameETextStreamFormat
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_ReadByte",
			"()i",
			.var_address=(void*)&_brl_textstream_TTextStream__ReadByte
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_WriteByte",
			"(i)",
			.var_address=(void*)&_brl_textstream_TTextStream__WriteByte_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_FlushRead",
			"()",
			.var_address=(void*)&_brl_textstream_TTextStream__FlushRead
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_FlushWrite",
			"()",
			.var_address=(void*)&_brl_textstream_TTextStream__FlushWrite
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_textstream_TTextStream brl_textstream_TTextStream={
	&brl_stream_TStreamWrapper,
	bbObjectFree,
	(BBDebugScope*)&brl_textstream_TTextStream_scope,
	sizeof(struct brl_textstream_TTextStream_obj),
	(void (*)(BBOBJECT))_brl_textstream_TTextStream_New,
	(void (*)(BBOBJECT))_brl_textstream_TTextStream_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_textstream_TTextStream_obj,_brl_textstream_ttextstream__carried) - sizeof(void*) + sizeof(BBINT)
	,0
	,_brl_stream_TStreamWrapper_Eof
	,_brl_stream_TStreamWrapper_Pos
	,_brl_stream_TStreamWrapper_Size
	,_brl_stream_TStreamWrapper_Seek_li
	,_brl_stream_TStreamWrapper_Flush
	,_brl_stream_TStreamWrapper_Close
	,_brl_textstream_TTextStream_Read_pbl
	,_brl_textstream_TTextStream_Write_pbl
	,_brl_stream_TStreamWrapper_SetSize_l
	,_brl_stream_TStream_ReadBytes_pbl
	,_brl_stream_TStream_WriteBytes_pbl
	,_brl_stream_TStream_SkipBytes_l
	,_brl_textstream_TTextStream_ReadByte
	,_brl_textstream_TTextStream_WriteByte_i
	,_brl_textstream_TTextStream_ReadShort
	,_brl_textstream_TTextStream_WriteShort_i
	,_brl_textstream_TTextStream_ReadInt
	,_brl_textstream_TTextStream_WriteInt_i
	,_brl_textstream_TTextStream_ReadLong
	,_brl_textstream_TTextStream_WriteLong_l
	,_brl_textstream_TTextStream_ReadFloat
	,_brl_textstream_TTextStream_WriteFloat_f
	,_brl_textstream_TTextStream_ReadDouble
	,_brl_textstream_TTextStream_WriteDouble_d
	,_brl_textstream_TTextStream_ReadLine
	,_brl_textstream_TTextStream_WriteLine_S
	,_brl_textstream_TTextStream_ReadString_i
	,_brl_textstream_TTextStream_WriteString_S
	,_brl_stream_TStreamWrapper_ReadObject
	,_brl_stream_TStreamWrapper_WriteObject_TObject
	,_brl_stream_TStreamWrapper_SetStream_TTStream
	,_brl_textstream_TTextStream_ReadFile
	,_brl_textstream_TTextStream_ReadChar
	,_brl_textstream_TTextStream_WriteChar_i
	,brl_textstream_TTextStream_Create_TTTextStream_TTStreami
	,brl_textstream_TTextStream_Create_TTTextStream_TTStreameETextStreamFormat
	,_brl_textstream_TTextStream__ReadByte
	,_brl_textstream_TTextStream__WriteByte_i
	,_brl_textstream_TTextStream__FlushRead
	,_brl_textstream_TTextStream__FlushWrite
};

struct BBEnumbrl_textstream_ETextStreamFormat{
	const char * name;
	char * type;
	char * atype;
	int flags;
	int length;
	void * values;
	BBString * names[4];
};
struct BBDebugScope brl_textstream_ETextStreamFormat_scope ={
	BBDEBUGSCOPE_USERENUM,
	"ETextStreamFormat",
	{
		{
			BBDEBUGDECL_GLOBAL,
			"LATIN1",
			"/ETextStreamFormat",
			.const_value=&_s11
		},
		{
			BBDEBUGDECL_GLOBAL,
			"UTF8",
			"/ETextStreamFormat",
			.const_value=&_s6
		},
		{
			BBDEBUGDECL_GLOBAL,
			"UTF16BE",
			"/ETextStreamFormat",
			.const_value=&_s7
		},
		{
			BBDEBUGDECL_GLOBAL,
			"UTF16LE",
			"/ETextStreamFormat",
			.const_value=&_s8
		},
		BBDEBUGDECL_END
	}
};
BBINT brl_textstream_ETextStreamFormat_values[4] = {0,1,2,3};
struct BBEnumbrl_textstream_ETextStreamFormat brl_textstream_ETextStreamFormat_BBEnum = {
	"ETextStreamFormat",
	"i",
	"/ETextStreamFormat",
	0,
	4,
	&brl_textstream_ETextStreamFormat_values,
	{&_s10,&_s12,&_s13,&_s14}
};
BBEnum * brl_textstream_ETextStreamFormat_BBEnum_impl;
BBSTRING brl_textstream_ETextStreamFormat_ToString(BBINT ordinal) {
	return bbEnumToString_i(brl_textstream_ETextStreamFormat_BBEnum_impl, ordinal);
}
BBINT brl_textstream_ETextStreamFormat_TryConvert(BBINT ordinalValue, BBINT * ordinalResult) {
	return bbEnumTryConvert_i(brl_textstream_ETextStreamFormat_BBEnum_impl, ordinalValue, ordinalResult);
}
BBINT brl_textstream_Decode(BBBYTE* bbt_buf,BBINT bbt_count){
	if(bbt_count<=0){
		return -1;
	}
	if(bbt_count==1){
		if(((BBINT)bbt_buf[0])>=128){
			return -1;
		}else{
			return ((BBINT)bbt_buf[0]);
		}
	}
	BBINT bbt_bits=0;
	BBINT bbt_c=((BBINT)bbt_buf[0]);
	while(((unsigned int)(bbt_c)&(unsigned int)(128))==128){
		bbt_bits+=1;
		bbt_c<<=1;
	}
	if(bbt_bits!=bbt_count){
		return -1;
	}
	BBINT bbt_v=((unsigned int)(((BBINT)bbt_buf[0]))&(unsigned int)(((unsigned int)(255)>>(unsigned int)(bbt_bits))));
	{
		BBINT bbt_i=1;
		BBINT bbt_=bbt_count;
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			if(((unsigned int)(((BBINT)bbt_buf[bbt_i]))&(unsigned int)(192))!=128){
				return -1;
			}
			bbt_v=((unsigned int)((bbt_v<<6))|(unsigned int)(((unsigned int)(((BBINT)bbt_buf[bbt_i]))&(unsigned int)(63))));
		}
	}
	if((bbt_v>=55296) && (bbt_v<=57343)){
		return -1;
	}
	if((bbt_v==65534) || (bbt_v==65535)){
		return -1;
	}
	return bbt_v;
}
BBINT brl_textstream_Encode(BBINT bbt_char,BBBYTE* bbt_buf,BBINT bbt_count){
	if(bbt_char<128){
		bbt_buf[0]=((BBBYTE)bbt_char);
		return 1;
	}else{
		if(bbt_char<2048){
			if(bbt_count!=2){
				return -1;
			}
			bbt_buf[0]=((BBBYTE)((unsigned int)((bbt_char/64))|(unsigned int)(192)));
			bbt_buf[1]=((BBBYTE)((unsigned int)((bbt_char % 64))|(unsigned int)(128)));
			return 2;
		}else{
			if(bbt_char<65536){
				if(bbt_count!=3){
					return -1;
				}
				bbt_buf[0]=((BBBYTE)((unsigned int)((bbt_char/4096))|(unsigned int)(224)));
				bbt_buf[1]=((BBBYTE)((unsigned int)(((bbt_char/64) % 64))|(unsigned int)(128)));
				bbt_buf[2]=((BBBYTE)((unsigned int)((bbt_char % 64))|(unsigned int)(128)));
				return 3;
			}else{
				if(bbt_count!=4){
					return -1;
				}
				bbt_buf[0]=((BBBYTE)((unsigned int)(((unsigned int)(bbt_char)>>(unsigned int)(18)))|(unsigned int)(240)));
				bbt_buf[1]=((BBBYTE)((unsigned int)(((unsigned int)(((unsigned int)(bbt_char)>>(unsigned int)(12)))&(unsigned int)(63)))|(unsigned int)(128)));
				bbt_buf[2]=((BBBYTE)((unsigned int)(((unsigned int)(((unsigned int)(bbt_char)>>(unsigned int)(6)))&(unsigned int)(63)))|(unsigned int)(128)));
				bbt_buf[3]=((BBBYTE)((unsigned int)(((unsigned int)(bbt_char)&(unsigned int)(63)))|(unsigned int)(128)));
				return 4;
			}
		}
	}
}
BBINT brl_textstream_IsProbablyUTF8(BBBYTE* bbt_data,BBINT bbt_size){
	BBINT bbt_count=0;
	BBARRAY bbt_buf=bbArrayNew1D("b", 6);
	BBARRAY bbt_encodeBuf=bbArrayNew1D("b", 6);
	{
		BBINT bbt_i=0;
		BBINT bbt_=bbt_size;
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			BBINT bbt_c=((BBINT)bbt_data[bbt_i]);
			if((bbt_c<128) || (((unsigned int)(bbt_c)&(unsigned int)(192))!=128)){
				if(bbt_count>0){
					BBINT bbt_char=brl_textstream_Decode(((BBBYTE*)BBARRAYDATA(bbt_buf,1)),bbt_count);
					if(bbt_char==-1){
						return 0;
					}
					BBINT bbt_encodedCount=brl_textstream_Encode(bbt_char,((BBBYTE*)BBARRAYDATA(bbt_encodeBuf,1)),bbt_count);
					if(bbt_count!=bbt_encodedCount){
						return 0;
					}
					{
						BBINT bbt_n=0;
						BBINT bbt_2=bbt_count;
						for(;(bbt_n<bbt_2);bbt_n=(bbt_n+1)){
							if(((BBBYTE*)BBARRAYDATA(bbt_buf,1))[((BBUINT)bbt_n)]!=((BBBYTE*)BBARRAYDATA(bbt_encodeBuf,1))[((BBUINT)bbt_n)]){
								return 0;
							}
						}
					}
				}
				bbt_count=0;
				if(bbt_c>=128){
					((BBBYTE*)BBARRAYDATA(bbt_buf,1))[((BBUINT)bbt_count)]=((BBBYTE)bbt_c);
					bbt_count+=1;
				}
			}else{
				if(bbt_count==6){
					return 0;
				}
				((BBBYTE*)BBARRAYDATA(bbt_buf,1))[((BBUINT)bbt_count)]=((BBBYTE)bbt_c);
				bbt_count+=1;
			}
		}
	}
	if(bbt_count!=0){
		return 0;
	}
	return 1;
}
BBSTRING brl_textstream_LoadText(BBOBJECT bbt_url,BBINT bbt_checkForUTF8){
	struct brl_stream_TStream_obj* bbt_stream=(struct brl_stream_TStream_obj*)brl_stream_ReadStream((BBOBJECT)bbt_url);
	if(!(((BBObject*)bbt_stream)!= &bbNullObject)){
		bbExThrow((BBObject *)(struct brl_stream_TStreamReadException_obj*)bbObjectAtomicNew((BBClass *)&brl_stream_TStreamReadException));
	}
	BBINT bbt_format=0;
	BBINT bbt_size=0;
	BBINT bbt_c=0;
	BBINT bbt_d=0;
	BBINT bbt_e=0;
	if(!((bbt_stream)->clas->m_Eof((struct brl_stream_TIO_obj*)bbt_stream)!=0)){
		bbt_c=(bbt_stream)->clas->m_ReadByte((struct brl_stream_TStream_obj*)bbt_stream);
		bbt_size+=1;
		if(!((bbt_stream)->clas->m_Eof((struct brl_stream_TIO_obj*)bbt_stream)!=0)){
			bbt_d=(bbt_stream)->clas->m_ReadByte((struct brl_stream_TStream_obj*)bbt_stream);
			bbt_size+=1;
			if((bbt_c==254) && (bbt_d==255)){
				bbt_format=2;
			}else{
				if((bbt_c==255) && (bbt_d==254)){
					bbt_format=3;
				}else{
					if((bbt_c==239) && (bbt_d==187)){
						if(!((bbt_stream)->clas->m_Eof((struct brl_stream_TIO_obj*)bbt_stream)!=0)){
							bbt_e=(bbt_stream)->clas->m_ReadByte((struct brl_stream_TStream_obj*)bbt_stream);
							bbt_size+=1;
							if(bbt_e==191){
								bbt_format=1;
							}
						}
					}
				}
			}
		}
	}
	if(!(bbt_format!=0)){
		BBARRAY bbt_data=bbArrayNew1D("b", 1024);
		((BBBYTE*)BBARRAYDATA(bbt_data,1))[0U]=((BBBYTE)bbt_c);
		((BBBYTE*)BBARRAYDATA(bbt_data,1))[1U]=((BBBYTE)bbt_d);
		((BBBYTE*)BBARRAYDATA(bbt_data,1))[2U]=((BBBYTE)bbt_e);
		while(!((bbt_stream)->clas->m_Eof((struct brl_stream_TIO_obj*)bbt_stream)!=0)){
			if(bbt_size==(bbt_data->scales[0])){
				bbt_data=bbArraySlice("b",bbt_data,0,(bbt_size*2));
			}
			bbt_size=((BBINT)(((BBLONG)bbt_size)+(bbt_stream)->clas->m_Read_pbl((struct brl_stream_TIO_obj*)bbt_stream,(((BBBYTE*)BBARRAYDATA(bbt_data,1))+bbt_size),((BBLONG)((bbt_data->scales[0])-bbt_size)))));
		}
		(bbt_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_stream);
		if((bbt_checkForUTF8!=0) && (brl_textstream_IsProbablyUTF8(((BBBYTE*)BBARRAYDATA(bbt_data,1)),bbt_size)!=0)){
			return bbStringFromUTF8String((BBBYTE*)BBARRAYDATA(bbt_data,1));
		}else{
			return bbStringFromBytes(((BBBYTE*)BBARRAYDATA(bbt_data,1)),bbt_size);
		}
	}
	struct brl_textstream_TTextStream_obj* bbt_TStream=(struct brl_textstream_TTextStream_obj*)brl_textstream_TTextStream_Create_TTTextStream_TTStreameETextStreamFormat((struct brl_stream_TStream_obj*)bbt_stream,bbt_format);
	BBSTRING bbt_str=(bbt_TStream)->clas->m_ReadFile((struct brl_textstream_TTextStream_obj*)bbt_TStream);
	(bbt_TStream)->clas->m_Close((struct brl_stream_TStreamWrapper_obj*)bbt_TStream);
	(bbt_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_stream);
	return bbt_str;
}
BBINT brl_textstream_SaveText(BBSTRING bbt_str,BBOBJECT bbt_url,BBINT bbt_format,BBINT bbt_withBOM){
	if((bbt_format!=0) && (bbt_format!=1)){
		{
			BBINT bbt_i=0;
			BBINT bbt_=(bbt_str->length);
			for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
				if((bbt_str)->buf[((BBUINT)bbt_i)]>255){
					bbt_format=3;
					break;
				}
			}
		}
	}
	if(bbt_format==0){
		brl_stream_SaveString(bbt_str,(BBOBJECT)bbt_url);
		return 1;
	}
	struct brl_stream_TStream_obj* bbt_stream=(struct brl_stream_TStream_obj*)brl_stream_WriteStream((BBOBJECT)bbt_url);
	if(!(((BBObject*)bbt_stream)!= &bbNullObject)){
		bbExThrow((BBObject *)(struct brl_stream_TStreamWriteException_obj*)bbObjectAtomicNew((BBClass *)&brl_stream_TStreamWriteException));
	}
	if(bbt_withBOM!=0){
		BBINT bbt_2=bbt_format;
		if(bbt_2==1){
			(bbt_stream)->clas->m_WriteByte_i((struct brl_stream_TStream_obj*)bbt_stream,239);
			(bbt_stream)->clas->m_WriteByte_i((struct brl_stream_TStream_obj*)bbt_stream,187);
		}else{
			if(bbt_2==2){
				(bbt_stream)->clas->m_WriteByte_i((struct brl_stream_TStream_obj*)bbt_stream,254);
				(bbt_stream)->clas->m_WriteByte_i((struct brl_stream_TStream_obj*)bbt_stream,255);
			}else{
				if(bbt_2==3){
					(bbt_stream)->clas->m_WriteByte_i((struct brl_stream_TStream_obj*)bbt_stream,255);
					(bbt_stream)->clas->m_WriteByte_i((struct brl_stream_TStream_obj*)bbt_stream,254);
				}
			}
		}
	}
	struct brl_textstream_TTextStream_obj* bbt_TStream=(struct brl_textstream_TTextStream_obj*)brl_textstream_TTextStream_Create_TTTextStream_TTStreameETextStreamFormat((struct brl_stream_TStream_obj*)bbt_stream,bbt_format);
	(bbt_TStream)->clas->m_WriteString_S((struct brl_textstream_TTextStream_obj*)bbt_TStream,bbt_str);
	(bbt_TStream)->clas->m_Close((struct brl_stream_TStreamWrapper_obj*)bbt_TStream);
	(bbt_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_stream);
	return 1;
}
static int __bb_brl_textstream_textstream_inited = 0;
int __bb_brl_textstream_textstream(){
	if (!__bb_brl_textstream_textstream_inited) {
		__bb_brl_textstream_textstream_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_stream_stream();
		brl_textstream_ETextStreamFormat_BBEnum_impl = &brl_textstream_ETextStreamFormat_BBEnum;
		bbObjectRegisterType((BBCLASS)&brl_textstream_TTextStreamFactory);
		bbObjectRegisterType((BBCLASS)&brl_textstream_TTextStream);
		bbEnumRegister((BBEnum *)brl_textstream_ETextStreamFormat_BBEnum_impl, (BBDebugScope *)&brl_textstream_ETextStreamFormat_scope);
		(struct brl_textstream_TTextStreamFactory_obj*)bbObjectNew((BBClass *)&brl_textstream_TTextStreamFactory);
		return 0;
	}
	return 0;
}