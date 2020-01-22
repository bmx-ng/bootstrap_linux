#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.release.linux.x64.h>
static BBString _s6={
	&bbStringClass,
	1,
	{46}
};
static BBString _s10={
	&bbStringClass,
	2,
	{46,97}
};
static BBString _s9={
	&bbStringClass,
	4,
	{46,98,109,120}
};
static BBString _s11={
	&bbStringClass,
	2,
	{46,105}
};
static BBString _s8={
	&bbStringClass,
	4,
	{46,109,111,100}
};
static BBString _s7={
	&bbStringClass,
	5,
	{46,109,111,100,47}
};
static BBString _s5={
	&bbStringClass,
	1,
	{47}
};
static BBString _s1={
	&bbStringClass,
	8,
	{47,98,105,110,47,98,109,107}
};
static BBString _s4={
	&bbStringClass,
	4,
	{47,109,111,100}
};
static BBString _s0={
	&bbStringClass,
	7,
	{66,77,88,80,65,84,72}
};
static BBString _s2={
	&bbStringClass,
	8,
	{66,77,88,80,65,84,72,61}
};
static BBString _s3={
	&bbStringClass,
	30,
	{85,110,97,98,108,101,32,116,111,32,108,111,99,97,116,101,32
	,66,108,105,116,122,77,97,120,32,112,97,116,104}
};
static BBSTRING brl_maxutil_BlitzMaxPath_bmxpath;
BBSTRING brl_maxutil_BlitzMaxPath(){
	static int _brl_maxutil_BlitzMaxPath_bmxpath_inited = 0;
	if (!_brl_maxutil_BlitzMaxPath_bmxpath_inited) {
		_brl_maxutil_BlitzMaxPath_bmxpath_inited = 1;
		brl_maxutil_BlitzMaxPath_bmxpath = &bbEmptyString;
	};
	if((brl_maxutil_BlitzMaxPath_bmxpath!= &bbEmptyString) && (brl_filesystem_FileType(brl_maxutil_BlitzMaxPath_bmxpath)==2)){
		return brl_maxutil_BlitzMaxPath_bmxpath;
	}
	BBSTRING bbt_p=getenv_(&_s0);
	if((bbt_p!= &bbEmptyString) && (brl_filesystem_FileType(bbt_p)==2)){
		brl_maxutil_BlitzMaxPath_bmxpath=bbt_p;
		return bbt_p;
	}
	bbt_p=bbAppDir;
	do{
		BBSTRING bbt_t=bbStringConcat(bbt_p,&_s1);
		if(brl_filesystem_FileType(bbt_t)==1){
			putenv_(bbStringConcat(&_s2,bbt_p));
			brl_maxutil_BlitzMaxPath_bmxpath=bbt_p;
			return bbt_p;
		}
		BBSTRING bbt_q=brl_filesystem_ExtractDir(bbt_p);
		if(bbStringEquals(bbt_q, bbt_p)==1){
			bbExThrow((BBObject *)&_s3);
		}
		bbt_p=bbt_q;
	}while(!(0));
}
BBSTRING brl_maxutil_ModulePath(BBSTRING bbt_modid){
	BBSTRING bbt_p=bbStringConcat(brl_maxutil_BlitzMaxPath(),&_s4);
	if(bbt_modid!= &bbEmptyString){
		bbt_p=bbStringConcat(bbt_p,(bbStringConcat(bbStringConcat(&_s5,bbStringReplace((BBSTRING)bbt_modid,&_s6,&_s7)),&_s8)));
	}
	return bbt_p;
}
BBSTRING brl_maxutil_ModuleIdent(BBSTRING bbt_modid){
	return bbStringSlice(bbt_modid,(bbStringFindLast((BBSTRING)bbt_modid,&_s6,0)+1),(bbt_modid)->length);
}
BBSTRING brl_maxutil_ModuleSource(BBSTRING bbt_modid){
	return bbStringConcat(bbStringConcat(bbStringConcat(brl_maxutil_ModulePath(bbt_modid),&_s5),brl_maxutil_ModuleIdent(bbt_modid)),&_s9);
}
BBSTRING brl_maxutil_ModuleArchive(BBSTRING bbt_modid,BBSTRING bbt_mung){
	if((bbt_mung!= &bbEmptyString) && ((bbt_mung)->buf[0U]!=46)){
		bbt_mung=bbStringConcat(&_s6,bbt_mung);
	}
	return bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(brl_maxutil_ModulePath(bbt_modid),&_s5),brl_maxutil_ModuleIdent(bbt_modid)),bbt_mung),&_s10);
}
BBSTRING brl_maxutil_ModuleInterface(BBSTRING bbt_modid,BBSTRING bbt_mung){
	if((bbt_mung!= &bbEmptyString) && ((bbt_mung)->buf[0U]!=46)){
		bbt_mung=bbStringConcat(&_s6,bbt_mung);
	}
	return bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(brl_maxutil_ModulePath(bbt_modid),&_s5),brl_maxutil_ModuleIdent(bbt_modid)),bbt_mung),&_s11);
}
struct brl_linkedlist_TList_obj* brl_maxutil_EnumModules(BBSTRING bbt_modid,struct brl_linkedlist_TList_obj* bbt_mods){
	if(!(((BBObject*)bbt_mods)!= &bbNullObject)){
		bbt_mods=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	}
	BBSTRING bbt_dir=brl_maxutil_ModulePath(bbt_modid);
	BBARRAY bbt_files=brl_filesystem_LoadDir(bbt_dir,1);
	BBARRAY bbt_=bbt_files;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		BBSTRING bbt_file=((BBSTRING*)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		BBSTRING bbt_path=bbStringConcat(bbStringConcat(bbt_dir,&_s5),bbt_file);
		if(bbStringEquals(bbStringSlice(bbt_file,((bbt_file->length)-4),(bbt_file)->length), &_s8)!=1 || (brl_filesystem_FileType(bbt_path)!=2)){
			continue;
		}
		BBSTRING bbt_t=bbStringSlice(bbt_file,0,((bbt_file->length)-4));
		if(bbt_modid!= &bbEmptyString){
			bbt_t=bbStringConcat(bbStringConcat(bbt_modid,&_s6),bbt_t);
		}
		BBINT bbt_i=bbStringFind((BBSTRING)bbt_t,&_s6,0);
		if((bbt_i!=-1) && (bbStringFind((BBSTRING)bbt_t,&_s6,(bbt_i+1))==-1)){
			(bbt_mods)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_mods,(BBOBJECT)bbt_t);
		}
		bbt_mods=(struct brl_linkedlist_TList_obj*)brl_maxutil_EnumModules(bbt_t,(struct brl_linkedlist_TList_obj*)bbt_mods);
	}
	return (struct brl_linkedlist_TList_obj*)bbt_mods;
}
BBSTRING brl_maxutil_MinGWPath(){
	return &bbEmptyString;
}
static int __bb_brl_maxutil_maxutil_inited = 0;
int __bb_brl_maxutil_maxutil(){
	if (!__bb_brl_maxutil_maxutil_inited) {
		__bb_brl_maxutil_maxutil_inited = 1;
		GC_add_roots(&brl_maxutil_BlitzMaxPath_bmxpath, &brl_maxutil_BlitzMaxPath_bmxpath + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_linkedlist_linkedlist();
		__bb_brl_filesystem_filesystem();
		return 0;
	}
	return 0;
}