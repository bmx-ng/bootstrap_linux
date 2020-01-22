#include "bmk_zap.bmx.release.linux.x64.h"
static BBString _s0={
	&bbStringClass,
	1,
	{46}
};
static BBString _s1={
	&bbStringClass,
	4,
	{46,98,97,107}
};
static BBString _s3={
	&bbStringClass,
	1,
	{47}
};
static BBString _s2={
	&bbStringClass,
	19,
	{69,114,114,111,114,32,122,97,112,112,105,110,103,32,102,105,108
	,101,32}
};
static BBString _s9={
	&bbStringClass,
	22,
	{70,97,105,108,101,100,32,116,111,32,85,110,122,97,112,32,109
	,111,100,117,108,101}
};
static BBString _s5={
	&bbStringClass,
	21,
	{70,97,105,108,101,100,32,116,111,32,102,105,110,100,32,109,111
	,100,117,108,101}
};
static BBString _s7={
	&bbStringClass,
	24,
	{70,97,105,108,101,100,32,116,111,32,112,117,98,108,105,115,104
	,32,109,111,100,117,108,101}
};
static BBString _s6={
	&bbStringClass,
	8,
	{77,111,100,117,108,101,58,32}
};
static BBString _s8={
	&bbStringClass,
	33,
	{85,110,97,98,108,101,32,116,111,32,99,114,101,97,116,101,32
	,109,111,100,117,108,101,32,100,105,114,101,99,116,111,114,121
}
};
static BBString _s4={
	&bbStringClass,
	8,
	{114,101,108,101,97,115,101,46}
};
BBINT _m_bmk_zap_Zap(BBSTRING bbt_path,struct brl_stream_TStream_obj* bbt_stream){
	if(!(bbt_path!= &bbEmptyString)){
		return 0;
	}
	BBSTRING bbt_name=brl_filesystem_StripDir(bbt_path);
	BBINT bbt_skip=0;
	if(bbStringEquals(bbStringSlice(bbt_name,0,1), &_s0)==1){
		bbt_skip=1;
	}else{
		if(bbStringEndsWith((BBSTRING)bbStringToLower((BBSTRING)bbt_name),&_s1)!=0){
			bbt_skip=1;
		}
	}
	if(bbt_skip!=0){
		(bbt_stream)->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)bbt_stream,&bbEmptyString);
		return 1;
	}
	BBINT bbt_Mode=brl_filesystem_FileMode(bbt_path);
	BBINT bbt_=brl_filesystem_FileType(bbt_path);
	if(bbt_==0){
		brl_standardio_Print(bbStringConcat(&_s2,bbt_path));
		return 0;
	}else{
		if(bbt_==1){
			BBINT bbt_size=((BBINT)brl_filesystem_FileSize(bbt_path));
			(bbt_stream)->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)bbt_stream,bbt_name);
			(bbt_stream)->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)bbt_stream,bbStringFromInt(bbt_Mode));
			(bbt_stream)->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)bbt_stream,bbStringFromInt(bbt_size));
			struct brl_stream_TStream_obj* bbt_from_stream=(struct brl_stream_TStream_obj*)brl_stream_ReadStream((BBOBJECT)bbt_path);
			brl_stream_CopyBytes((struct brl_stream_TStream_obj*)bbt_from_stream,(struct brl_stream_TStream_obj*)bbt_stream,bbt_size,4096);
			(bbt_from_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_from_stream);
		}else{
			if(bbt_==2){
				BBARRAY bbt_dir=brl_filesystem_LoadDir(bbt_path,1);
				BBINT bbt_size2=(bbt_dir)->scales[0];
				(bbt_stream)->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)bbt_stream,bbt_name);
				(bbt_stream)->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)bbt_stream,bbStringFromInt(-bbt_Mode));
				(bbt_stream)->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)bbt_stream,bbStringFromInt(bbt_size2));
				BBARRAY bbt_2=bbt_dir;
				BBUINT bbt_3=0U;
				while(bbt_3<((BBUINT)(bbt_2->scales[0]))){
					BBSTRING bbt_t=((BBSTRING*)BBARRAYDATA(bbt_2,1))[bbt_3];
					bbt_3=(bbt_3+1U);
					if(!(_m_bmk_zap_Zap(bbStringConcat(bbStringConcat(bbt_path,&_s3),bbt_t),(struct brl_stream_TStream_obj*)bbt_stream)!=0)){
						return 0;
					}
				}
			}
		}
	}
	return 1;
}
BBINT _m_bmk_zap_Unzap(BBSTRING bbt_dir,struct brl_stream_TStream_obj* bbt_stream){
	BBSTRING bbt_name=(bbt_stream)->clas->m_ReadLine((struct brl_stream_TStream_obj*)bbt_stream);
	if(!(bbt_name!= &bbEmptyString)){
		return 1;
	}
	BBINT bbt_Mode=bbStringToInt((bbt_stream)->clas->m_ReadLine((struct brl_stream_TStream_obj*)bbt_stream));
	BBINT bbt_size=bbStringToInt((bbt_stream)->clas->m_ReadLine((struct brl_stream_TStream_obj*)bbt_stream));
	BBSTRING bbt_path=bbStringConcat(bbStringConcat(bbt_dir,&_s3),bbt_name);
	if(bbt_Mode<0){
		bbt_Mode=-bbt_Mode;
		brl_filesystem_CreateDir(bbt_path,0);
		{
			BBINT bbt_k=0;
			BBINT bbt_=bbt_size;
			for(;(bbt_k<bbt_);bbt_k=(bbt_k+1)){
				if(!(_m_bmk_zap_Unzap(bbt_path,(struct brl_stream_TStream_obj*)bbt_stream)!=0)){
					return 0;
				}
			}
		}
	}else{
		brl_filesystem_DeleteFile(bbt_path);
		struct brl_stream_TStream_obj* bbt_to_stream=(struct brl_stream_TStream_obj*)brl_stream_WriteStream((BBOBJECT)bbt_path);
		brl_stream_CopyBytes((struct brl_stream_TStream_obj*)bbt_stream,(struct brl_stream_TStream_obj*)bbt_to_stream,bbt_size,4096);
		(bbt_to_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_to_stream);
	}
	brl_filesystem_SetFileMode(bbt_path,bbt_Mode);
	return 1;
}
BBINT _m_bmk_zap_ZapMod(BBSTRING bbt_name,struct brl_stream_TStream_obj* bbt_stream){
	BBSTRING bbt_path=brl_maxutil_ModuleInterface(bbt_name,bbStringConcat(bbStringConcat(bbStringConcat(&_s4,_m_bmk_config_opt_target_platform),&_s0),_m_bmk_config_opt_arch));
	if(brl_filesystem_FileType(bbt_path)!=1){
		brl_standardio_Print(&_s5);
		return 0;
	}
	struct _m_bmk_modutil_TSourceFile_obj* bbt_src=(struct _m_bmk_modutil_TSourceFile_obj*)_m_bmk_modutil_ParseSourceFile(bbt_path);
	(bbt_stream)->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)bbt_stream,bbStringConcat(&_s6,bbt_name));
	struct brl_linkedlist_TList_obj* bbt_2;
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(((struct brl_linkedlist_TList_obj*)(bbt_2 = bbt_src->__m_bmk_modutil_tsourcefile_info ))->clas)->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_2);
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		BBSTRING bbt_t=((BBString *)bbObjectStringcast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_)));
		if(bbStringEquals(bbt_t, (&bbEmptyString))==1){
			continue;
		}
		(bbt_stream)->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)bbt_stream,bbt_t);
	}
	(bbt_stream)->clas->m_WriteLine_S((struct brl_stream_TStream_obj*)bbt_stream,&bbEmptyString);
	struct brl_bank_TBank_obj* bbt_bank=(struct brl_bank_TBank_obj*)brl_bank_TBank_Create_TTBank_i(0);
	struct brl_stream_TStream_obj* bbt_bank_stream=(struct brl_stream_TStream_obj*)((struct brl_stream_TStream_obj*)bbObjectDowncast((BBOBJECT)brl_bankstream_TBankStream_Create_TTBankStream_TTBank((struct brl_bank_TBank_obj*)bbt_bank),(BBClass*)&brl_stream_TStream));
	if(!(_m_bmk_zap_Zap(brl_maxutil_ModulePath(bbt_name),(struct brl_stream_TStream_obj*)bbt_bank_stream)!=0)){
		bbExThrow((BBObject *)&_s7);
	}
	(bbt_bank_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_bank_stream);
	bbt_bank=(struct brl_bank_TBank_obj*)_m_bmk_bank_CompressBank((struct brl_bank_TBank_obj*)bbt_bank);
	bbt_bank_stream=(struct brl_stream_TStream_obj*)((struct brl_stream_TStream_obj*)bbObjectDowncast((BBOBJECT)brl_bankstream_TBankStream_Create_TTBankStream_TTBank((struct brl_bank_TBank_obj*)bbt_bank),(BBClass*)&brl_stream_TStream));
	brl_stream_CopyStream((struct brl_stream_TStream_obj*)bbt_bank_stream,(struct brl_stream_TStream_obj*)bbt_stream,4096);
	(bbt_bank_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_bank_stream);
	return 0;
}
BBINT _m_bmk_zap_UnzapMod(struct brl_stream_TStream_obj* bbt_stream){
	struct _m_bmk_modinfo_TModInfo_obj* bbt_modinfo=(struct _m_bmk_modinfo_TModInfo_obj*)_m_bmk_modinfo_TModInfo_CreateFromStream_TTModInfo_TTStream((struct brl_stream_TStream_obj*)bbt_stream);
	BBSTRING bbt_path=brl_maxutil_ModulePath(bbt_modinfo->__m_bmk_modinfo_tmodinfo_name );
	if(!(brl_filesystem_CreateDir(bbt_path,1)!=0)){
		bbExThrow((BBObject *)&_s8);
	}
	brl_filesystem_DeleteDir(bbt_path,1);
	struct brl_bank_TBank_obj* bbt_bank=(struct brl_bank_TBank_obj*)brl_bank_TBank_Create_TTBank_i(0);
	struct brl_stream_TStream_obj* bbt_bank_stream=(struct brl_stream_TStream_obj*)((struct brl_stream_TStream_obj*)bbObjectDowncast((BBOBJECT)brl_bankstream_TBankStream_Create_TTBankStream_TTBank((struct brl_bank_TBank_obj*)bbt_bank),(BBClass*)&brl_stream_TStream));
	brl_stream_CopyStream((struct brl_stream_TStream_obj*)bbt_stream,(struct brl_stream_TStream_obj*)bbt_bank_stream,4096);
	(bbt_bank_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_bank_stream);
	bbt_bank=(struct brl_bank_TBank_obj*)_m_bmk_bank_UncompressBank((struct brl_bank_TBank_obj*)bbt_bank);
	bbt_bank_stream=(struct brl_stream_TStream_obj*)((struct brl_stream_TStream_obj*)bbObjectDowncast((BBOBJECT)brl_bankstream_TBankStream_Create_TTBankStream_TTBank((struct brl_bank_TBank_obj*)bbt_bank),(BBClass*)&brl_stream_TStream));
	if(!(_m_bmk_zap_Unzap(brl_filesystem_ExtractDir(bbt_path),(struct brl_stream_TStream_obj*)bbt_bank_stream)!=0)){
		brl_standardio_Print(&_s9);
		return 0;
	}
	(bbt_bank_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_bank_stream);
	return 1;
}
static int _bb_bmk_bmk_zap_inited = 0;
int _bb_bmk_bmk_zap(){
	if (!_bb_bmk_bmk_zap_inited) {
		_bb_bmk_bmk_zap_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_filesystem_filesystem();
		_bb_bmk_bmk_modutil();
		_bb_bmk_bmk_bank();
		_bb_bmk_bmk_modinfo();
		return 0;
	}
	return 0;
}