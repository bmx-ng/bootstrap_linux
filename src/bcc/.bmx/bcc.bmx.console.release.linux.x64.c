#include "bcc.bmx.console.release.linux.x64.h"
static BBString _s10={
	&bbStringClass,
	1,
	{10}
};
static BBString _s12={
	&bbStringClass,
	2,
	{10,10}
};
static BBString _s16={
	&bbStringClass,
	9,
	{10,10,35,101,110,100,105,102,10}
};
static BBString _s11={
	&bbStringClass,
	8,
	{35,100,101,102,105,110,101,32}
};
static BBString _s9={
	&bbStringClass,
	8,
	{35,105,102,110,100,101,102,32}
};
static BBString _s14={
	&bbStringClass,
	37,
	{35,105,110,99,108,117,100,101,32,60,98,114,108,46,109,111,100
	,47,98,108,105,116,122,46,109,111,100,47,98,108,105,116,122
	,46,104,62,10}
};
static BBString _s26={
	&bbStringClass,
	4,
	{46,100,101,102}
};
static BBString _s25={
	&bbStringClass,
	1,
	{47}
};
static BBString _s1={
	&bbStringClass,
	18,
	{67,111,109,109,97,110,100,32,108,105,110,101,32,101,114,114,111
	,114}
};
static BBString _s24={
	&bbStringClass,
	17,
	{71,101,110,101,114,97,116,105,110,103,32,100,101,102,46,46,46
}
};
static BBString _s7={
	&bbStringClass,
	20,
	{71,101,110,101,114,97,116,105,110,103,32,104,101,97,100,101,114
	,46,46,46}
};
static BBString _s4={
	&bbStringClass,
	23,
	{71,101,110,101,114,97,116,105,110,103,32,105,110,116,101,114,102
	,97,99,101,46,46,46}
};
static BBString _s17={
	&bbStringClass,
	20,
	{71,101,110,101,114,97,116,105,110,103,32,115,111,117,114,99,101
	,46,46,46}
};
static BBString _s2={
	&bbStringClass,
	10,
	{80,97,114,115,105,110,103,46,46,46}
};
static BBString _s3={
	&bbStringClass,
	12,
	{83,101,109,97,110,116,105,110,103,46,46,46}
};
static BBString _s29={
	&bbStringClass,
	29,
	{98,99,99,91,110,103,93,32,82,101,108,101,97,115,101,32,86
	,101,114,115,105,111,110,32,48,46,49,49,54}
};
static BBString _s13={
	&bbStringClass,
	9,
	{98,114,108,46,98,108,105,116,122}
};
static BBString _s18={
	&bbStringClass,
	1,
	{99}
};
static BBString _s27={
	&bbStringClass,
	3,
	{100,101,102}
};
static BBString _s8={
	&bbStringClass,
	1,
	{104}
};
static BBString _s15={
	&bbStringClass,
	4,
	{104,101,97,100}
};
static BBString _s5={
	&bbStringClass,
	1,
	{105}
};
static BBString _s22={
	&bbStringClass,
	6,
	{105,110,99,98,105,110}
};
static BBString _s21={
	&bbStringClass,
	8,
	{105,110,99,98,105,110,46,99}
};
static BBString _s6={
	&bbStringClass,
	9,
	{105,110,116,101,114,102,97,99,101}
};
static BBString _s19={
	&bbStringClass,
	10,
	{112,114,101,95,115,111,117,114,99,101}
};
static BBString _s20={
	&bbStringClass,
	6,
	{115,111,117,114,99,101}
};
static BBString _s23={
	&bbStringClass,
	5,
	{119,105,110,51,50}
};
void _m_bcc_SaveInterface(BBSTRING bbt_file,struct _m_ctranslator_TCTranslator_obj* bbt_trans,BBSTRING bbt_mung){
	if(_m_options_opt_verbose!=0){
		brl_standardio_Print(&_s4);
	}
	BBSTRING bbt_path=&bbEmptyString;
	if(_m_options_opt_buildtype==1){
		if(_m_options_opt_ismain!=0){
			bbt_path=brl_maxutil_ModuleInterface(_m_options_opt_modulename,bbt_mung);
		}else{
			bbt_path=_m_config_OutputFilePath(bbt_file,bbt_mung,&_s5,0);
		}
	}else{
		bbt_path=_m_config_OutputFilePath(bbt_file,bbt_mung,&_s5,0);
	}
	brl_textstream_SaveText((bbt_trans)->clas->m_JoinLines_S((struct _m_type_TTranslator_obj*)bbt_trans,&_s6),(BBOBJECT)bbt_path,0,1);
}
void _m_bcc_SaveHeader(BBSTRING bbt_file,struct _m_ctranslator_TCTranslator_obj* bbt_trans,BBSTRING bbt_mung){
	if(_m_options_opt_verbose!=0){
		brl_standardio_Print(&_s7);
	}
	BBSTRING bbt_path=_m_config_OutputFilePath(bbt_file,bbt_mung,&_s8,0);
	BBSTRING bbt_header=bbStringToUpper((BBSTRING)_m_config_BuildHeaderName(bbt_path));
	BBSTRING bbt_text=_m_config_HeaderComment();
	bbt_text=bbStringConcat(bbt_text,(bbStringConcat(bbStringConcat(&_s9,bbt_header),&_s10)));
	bbt_text=bbStringConcat(bbt_text,(bbStringConcat(bbStringConcat(&_s11,bbt_header),&_s12)));
	if((_m_options_opt_buildtype==1) && bbStringEquals(_m_options_opt_modulename, &_s13)==1){
		bbt_text=bbStringConcat(bbt_text,&_s14);
	}
	bbt_text=bbStringConcat(bbt_text,(bbt_trans)->clas->m_JoinLines_S((struct _m_type_TTranslator_obj*)bbt_trans,&_s15));
	bbt_text=bbStringConcat(bbt_text,&_s16);
	brl_textstream_SaveText(bbt_text,(BBOBJECT)bbt_path,0,1);
}
void _m_bcc_SaveSource(BBSTRING bbt_file,struct _m_ctranslator_TCTranslator_obj* bbt_trans,BBSTRING bbt_mung){
	if(_m_options_opt_verbose!=0){
		brl_standardio_Print(&_s17);
	}
	BBSTRING bbt_path=_m_config_OutputFilePath(bbt_file,bbt_mung,&_s18,0);
	BBSTRING bbt_pre=(bbt_trans)->clas->m_JoinLines_S((struct _m_type_TTranslator_obj*)bbt_trans,&_s19);
	BBSTRING bbt_src=(bbt_trans)->clas->m_JoinLines_S((struct _m_type_TTranslator_obj*)bbt_trans,&_s20);
	brl_textstream_SaveText(bbStringConcat(bbStringConcat(bbt_pre,&_s10),bbt_src),(BBOBJECT)bbt_path,0,1);
}
void _m_bcc_SaveIncBinHeader(BBSTRING bbt_file,struct _m_ctranslator_TCTranslator_obj* bbt_trans,BBSTRING bbt_mung,struct _m_type_TAppDecl_obj* bbt_app){
	if(bbt_app->__m_type_tappdecl_genincbinheader !=0){
		BBSTRING bbt_path=_m_config_OutputFilePath(bbt_file,bbt_mung,&_s21,0);
		brl_textstream_SaveText((bbt_trans)->clas->m_JoinLines_S((struct _m_type_TTranslator_obj*)bbt_trans,&_s22),(BBOBJECT)bbt_path,0,1);
	}
}
void _m_bcc_SaveDef(BBSTRING bbt_file,struct _m_ctranslator_TCTranslator_obj* bbt_trans,BBSTRING bbt_mung,struct _m_type_TAppDecl_obj* bbt_app){
	if(((_m_options_opt_def!=0) && (_m_options_opt_apptype!=0)) && bbStringEquals(_m_options_opt_platform, &_s23)==1){
		if(_m_options_opt_verbose!=0){
			brl_standardio_Print(&_s24);
		}
		BBSTRING bbt_path=bbStringConcat(bbStringConcat(bbStringConcat(brl_filesystem_ExtractDir(_m_options_opt_filepath),&_s25),brl_filesystem_StripExt(brl_filesystem_StripDir(_m_options_opt_filepath))),&_s26);
		brl_textstream_SaveText((bbt_trans)->clas->m_JoinLines_S((struct _m_type_TTranslator_obj*)bbt_trans,&_s27),(BBOBJECT)bbt_path,0,1);
	}
}
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_standardio_standardio();
		_bb_bcc_ctranslator();
		BBARRAY bbt_args=_m_options_ParseArgs(bbArraySlice("$",bbAppArgs,1,(bbAppArgs)->scales[0]));
		if((bbt_args->scales[0])==0){
			brl_standardio_Print(&_s29);
			bbEnd();
		}
		if((bbt_args->scales[0])!=1){
			_m_options_CmdError(&_s1,0);
		}
		_m_options_opt_filepath=((BBSTRING*)BBARRAYDATA(bbt_args,1))[0U];
		if(_m_options_opt_buildtype==1){
			if(bbStringEquals(bbStringToLower((BBSTRING)_m_options_opt_filepath), bbStringToLower((BBSTRING)brl_maxutil_ModuleSource(_m_options_opt_modulename)))==1){
				_m_options_opt_ismain=1;
			}
		}
		_m_type_TGenProcessor_processor=(struct _m_type_TGenProcessor_obj*)((struct _m_type_TGenProcessor_obj*)bbObjectDowncast((BBOBJECT)(struct _m_parser_TParser_obj*)bbObjectNew((BBClass *)&_m_parser_TParser),(BBClass*)&_m_type_TGenProcessor));
		struct _m_type_TAppDecl_obj* volatile bbt_app=(struct _m_type_TAppDecl_obj*)(&bbNullObject);
		struct _m_ctranslator_TCTranslator_obj* volatile bbt_trans=(struct _m_ctranslator_TCTranslator_obj*)(&bbNullObject);
		{
			BBOBJECT ex;
			jmp_buf* buf = bbExEnter();
			switch(setjmp(*buf)) {
				case 0: {
					if(_m_options_opt_verbose!=0){
						brl_standardio_Print(&_s2);
					}
					bbt_app=(struct _m_type_TAppDecl_obj*)_m_parser_ParseApp(_m_options_opt_filepath);
					if(_m_options_opt_verbose!=0){
						brl_standardio_Print(&_s3);
					}
					(bbt_app)->clas->m_Semant((struct _m_type_TDecl_obj*)bbt_app);
					bbt_trans=(struct _m_ctranslator_TCTranslator_obj*)(struct _m_ctranslator_TCTranslator_obj*)bbObjectNew((BBClass *)&_m_ctranslator_TCTranslator);
					(bbt_trans)->clas->m_TransApp_TTAppDecl((struct _m_ctranslator_TCTranslator_obj*)bbt_trans,(struct _m_type_TAppDecl_obj*)bbt_app);
					bbExLeave();
				}
				break;
				case 1: {
					ex = bbExCatch();
					if (bbObjectStringcast((BBOBJECT)ex) != &bbEmptyString) {
						BBSTRING bbt_error=(BBSTRING)ex;
						bbWriteStderr(bbt_error);
						exit((int)-1);
					} else {
						goto _rethrow;
					}
					goto _endtry;
				}
				break;
				_rethrow:;
				bbExThrow(ex);
			}
		}
		_endtry:;
		BBINT bbt_makeApp=0;
		if(_m_options_opt_apptype!=0){
			bbt_makeApp=1;
		}
		BBSTRING bbt_mung=_m_config_FileMung(bbt_makeApp);
		_m_bcc_SaveInterface(_m_options_opt_filepath,(struct _m_ctranslator_TCTranslator_obj*)bbt_trans,bbt_mung);
		_m_bcc_SaveHeader(_m_options_opt_filepath,(struct _m_ctranslator_TCTranslator_obj*)bbt_trans,bbt_mung);
		_m_bcc_SaveSource(_m_options_opt_filepath,(struct _m_ctranslator_TCTranslator_obj*)bbt_trans,bbt_mung);
		_m_bcc_SaveIncBinHeader(_m_options_opt_filepath,(struct _m_ctranslator_TCTranslator_obj*)bbt_trans,_m_config_FileMung(0),(struct _m_type_TAppDecl_obj*)bbt_app);
		_m_bcc_SaveDef(_m_options_opt_filepath,(struct _m_ctranslator_TCTranslator_obj*)bbt_trans,bbt_mung,(struct _m_type_TAppDecl_obj*)bbt_app);
		return 0;
	}
	return 0;
}