#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
static BBString _s2={
	&bbStringClass,
	1,
	{46}
};
static BBString _s3={
	&bbStringClass,
	2,
	{46,46}
};
static BBString _s0={
	&bbStringClass,
	1,
	{47}
};
static BBString _s1={
	&bbStringClass,
	1,
	{92}
};
static BBString _s4={
	&bbStringClass,
	2,
	{119,98}
};
BBSTRING brl_filesystem__RootPath(BBSTRING bbt_path){
	if(bbStringStartsWith((BBSTRING)bbt_path,&_s0)!=0){
		return &_s0;
	}
	return &bbEmptyString;
}
BBINT brl_filesystem__IsRootPath(BBSTRING bbt_path){
	return ((bbt_path!= &bbEmptyString) && bbStringEquals(brl_filesystem__RootPath(bbt_path), bbt_path)==1);
}
BBINT brl_filesystem__IsRealPath(BBSTRING bbt_path){
	return (brl_filesystem__RootPath(bbt_path)!=&bbEmptyString);
}
void brl_filesystem_FixPath(BBSTRING* bbt_path,BBINT bbt_dirPath){
	*bbt_path=bbStringReplace((BBSTRING)*bbt_path,&_s1,&_s0);
	if((bbt_dirPath!=0) && (bbStringEndsWith((BBSTRING)*bbt_path,&_s0)!=0)){
		if(!(brl_filesystem__IsRootPath(*bbt_path)!=0)){
			*bbt_path=bbStringSlice(*bbt_path,0,(((*bbt_path)->length)-1));
		}
	}
}
BBSTRING brl_filesystem_StripDir(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,0);
	BBINT bbt_i=bbStringFindLast((BBSTRING)bbt_path,&_s0,0);
	if(bbt_i!=-1){
		return bbStringSlice(bbt_path,(bbt_i+1),(bbt_path)->length);
	}
	return bbt_path;
}
BBSTRING brl_filesystem_StripExt(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,0);
	BBINT bbt_i=bbStringFindLast((BBSTRING)bbt_path,&_s2,0);
	if((bbt_i!=-1) && (bbStringFind((BBSTRING)bbt_path,&_s0,(bbt_i+1))==-1)){
		return bbStringSlice(bbt_path,0,bbt_i);
	}
	return bbt_path;
}
BBSTRING brl_filesystem_StripAll(BBSTRING bbt_path){
	return brl_filesystem_StripDir(brl_filesystem_StripExt(bbt_path));
}
BBSTRING brl_filesystem_StripSlash(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,0);
	if((bbStringEndsWith((BBSTRING)bbt_path,&_s0)!=0) && !(brl_filesystem__IsRootPath(bbt_path)!=0)){
		bbt_path=bbStringSlice(bbt_path,0,((bbt_path->length)-1));
	}
	return bbt_path;
}
BBSTRING brl_filesystem_ExtractDir(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,0);
	if((bbStringEquals(bbt_path, &_s2)==1 || bbStringEquals(bbt_path, &_s3)==1) || (brl_filesystem__IsRootPath(bbt_path)!=0)){
		return bbt_path;
	}
	BBINT bbt_i=bbStringFindLast((BBSTRING)bbt_path,&_s0,0);
	if(bbt_i==-1){
		return &bbEmptyString;
	}
	if(brl_filesystem__IsRootPath(bbStringSlice(bbt_path,0,(bbt_i+1)))!=0){
		bbt_i+=1;
	}
	return bbStringSlice(bbt_path,0,bbt_i);
}
BBSTRING brl_filesystem_ExtractExt(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,0);
	BBINT bbt_i=bbStringFindLast((BBSTRING)bbt_path,&_s2,0);
	if((bbt_i!=-1) && (bbStringFind((BBSTRING)bbt_path,&_s0,(bbt_i+1))==-1)){
		return bbStringSlice(bbt_path,(bbt_i+1),(bbt_path)->length);
	}
	return &bbEmptyString;
}
BBSTRING brl_filesystem_CurrentDir(){
	BBSTRING bbt_path=getcwd_();
	brl_filesystem_FixPath(&bbt_path,0);
	return bbt_path;
}
BBSTRING brl_filesystem_RealPath(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,0);
	BBSTRING bbt_cd=brl_filesystem__RootPath(bbt_path);
	if(bbt_cd!= &bbEmptyString){
		bbt_path=bbStringSlice(bbt_path,(bbt_cd->length),(bbt_path)->length);
	}else{
		bbt_cd=brl_filesystem_CurrentDir();
	}
	bbt_path=bbStringConcat(bbt_path,&_s0);
	while(bbt_path!= &bbEmptyString){
		BBINT bbt_i=bbStringFind((BBSTRING)bbt_path,&_s0,0);
		BBSTRING bbt_t=bbStringSlice(bbt_path,0,bbt_i);
		bbt_path=bbStringSlice(bbt_path,(bbt_i+1),(bbt_path)->length);
		BBSTRING bbt_=bbt_t;
		if(bbt_==&bbEmptyString){
		}else{
			if(bbStringEquals(bbt_, &_s2)==1){
			}else{
				if(bbStringEquals(bbt_, &_s3)==1){
					if(!(brl_filesystem__IsRootPath(bbt_cd)!=0)){
						bbt_cd=bbStringSlice(bbt_cd,0,bbStringFindLast((BBSTRING)bbt_cd,&_s0,0));
					}
				}else{
					if(!(bbStringEndsWith((BBSTRING)bbt_cd,&_s0)!=0)){
						bbt_cd=bbStringConcat(bbt_cd,&_s0);
					}
					bbt_cd=bbStringConcat(bbt_cd,bbt_t);
				}
			}
		}
	}
	return bbt_cd;
}
BBINT brl_filesystem_FileType(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,0);
	BBINT bbt_Mode=0;
	BBLONG bbt_size=0LL;
	BBINT bbt_mtime=0;
	BBINT bbt_ctime=0;
	if(stat_(bbt_path,(&bbt_Mode),(&bbt_size),(&bbt_mtime),(&bbt_ctime))!=0){
		return 0;
	}
	BBINT bbt_=((unsigned int)(bbt_Mode)&(unsigned int)(61440));
	if(bbt_==32768){
		return 1;
	}else{
		if(bbt_==16384){
			return 2;
		}
	}
	return 0;
}
BBINT brl_filesystem_FileTime(BBSTRING bbt_path,BBINT bbt_timetype){
	brl_filesystem_FixPath(&bbt_path,0);
	BBINT bbt_Mode=0;
	BBLONG bbt_size=0LL;
	BBINT bbt_mtime=0;
	BBINT bbt_ctime=0;
	if(stat_(bbt_path,(&bbt_Mode),(&bbt_size),(&bbt_mtime),(&bbt_ctime))!=0){
		return 0;
	}
	if(bbt_timetype==1){
		return bbt_ctime;
	}else{
		return bbt_mtime;
	}
}
BBLONG brl_filesystem_FileSize(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,0);
	BBINT bbt_Mode=0;
	BBLONG bbt_size=0LL;
	BBINT bbt_mtime=0;
	BBINT bbt_ctime=0;
	if(stat_(bbt_path,(&bbt_Mode),(&bbt_size),(&bbt_mtime),(&bbt_ctime))!=0){
		return -1LL;
	}
	return bbt_size;
}
BBINT brl_filesystem_FileMode(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,0);
	BBINT bbt_Mode=0;
	BBLONG bbt_size=0LL;
	BBINT bbt_mtime=0;
	BBINT bbt_ctime=0;
	if(stat_(bbt_path,(&bbt_Mode),(&bbt_size),(&bbt_mtime),(&bbt_ctime))!=0){
		return -1;
	}
	return ((unsigned int)(bbt_Mode)&(unsigned int)(511));
}
void brl_filesystem_SetFileMode(BBSTRING bbt_path,BBINT bbt_Mode){
	brl_filesystem_FixPath(&bbt_path,0);
	chmod_(bbt_path,bbt_Mode);
}
BBINT brl_filesystem_CreateFile(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,0);
	remove_(bbt_path);
	BBBYTE* bbt_t=fopen_(bbt_path,&_s4);
	if(bbt_t){
		fclose((FILE*)bbt_t);
	}
	if(brl_filesystem_FileType(bbt_path)==1){
		return 1;
	}
	return 0;
}
BBINT brl_filesystem_CreateDir(BBSTRING bbt_path,BBINT bbt_recurse){
	brl_filesystem_FixPath(&bbt_path,1);
	if(!(bbt_recurse!=0)){
		mkdir_(bbt_path,1023);
		return (brl_filesystem_FileType(bbt_path)==2);
	}
	BBSTRING bbt_t=&bbEmptyString;
	bbt_path=bbStringConcat(brl_filesystem_RealPath(bbt_path),&_s0);
	while(bbt_path!= &bbEmptyString){
		BBINT bbt_i=(bbStringFind((BBSTRING)bbt_path,&_s0,0)+1);
		bbt_t=bbStringConcat(bbt_t,bbStringSlice(bbt_path,0,bbt_i));
		bbt_path=bbStringSlice(bbt_path,bbt_i,(bbt_path)->length);
		BBINT bbt_=brl_filesystem_FileType(bbt_t);
		if(bbt_==2){
		}else{
			if(bbt_==0){
				BBSTRING bbt_s=brl_filesystem_StripSlash(bbt_t);
				mkdir_(brl_filesystem_StripSlash(bbt_s),1023);
				if(brl_filesystem_FileType(bbt_s)!=2){
					return 0;
				}
			}else{
				return 0;
			}
		}
	}
	return 1;
}
BBINT brl_filesystem_DeleteFile(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,0);
	remove_(bbt_path);
	return (brl_filesystem_FileType(bbt_path)==0);
}
BBINT brl_filesystem_RenameFile(BBSTRING bbt_oldpath,BBSTRING bbt_newpath){
	brl_filesystem_FixPath(&bbt_oldpath,0);
	brl_filesystem_FixPath(&bbt_newpath,0);
	return (rename_(bbt_oldpath,bbt_newpath)==0);
}
BBINT brl_filesystem_CopyFile(BBSTRING bbt_src,BBSTRING bbt_dst){
	struct brl_stream_TStream_obj* bbt_in=(struct brl_stream_TStream_obj*)brl_stream_ReadStream((BBOBJECT)bbt_src);
	BBINT volatile bbt_ok=0;
	if(((BBObject*)bbt_in)!= &bbNullObject){
		struct brl_stream_TStream_obj* bbt_out=(struct brl_stream_TStream_obj*)brl_stream_WriteStream((BBOBJECT)bbt_dst);
		if(((BBObject*)bbt_out)!= &bbNullObject){
			{
				BBOBJECT ex;
				jmp_buf* buf = bbExEnter();
				switch(setjmp(*buf)) {
					case 0: {
						brl_stream_CopyStream((struct brl_stream_TStream_obj*)bbt_in,(struct brl_stream_TStream_obj*)bbt_out,4096);
						bbt_ok=1;
						bbExLeave();
					}
					break;
					case 1: {
						ex = bbExCatch();
						if (bbObjectDowncast((BBOBJECT)ex,(BBClass*)&brl_stream_TStreamWriteException) != &bbNullObject) {
							struct brl_stream_TStreamWriteException_obj* bbt_ex=(struct brl_stream_TStreamWriteException_obj*)ex;
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
			(bbt_out)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_out);
		}
		(bbt_in)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_in);
	}
	return bbt_ok;
}
BBBYTE* brl_filesystem_ReadDir(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,1);
	return opendir_(bbt_path);
}
BBSTRING brl_filesystem_NextFile(BBBYTE* bbt_dir){
	return readdir_(bbt_dir);
}
void brl_filesystem_CloseDir(BBBYTE* bbt_dir){
	closedir_(bbt_dir);
}
BBARRAY brl_filesystem_LoadDir(BBSTRING bbt_dir,BBINT bbt_skip_dots){
	brl_filesystem_FixPath(&bbt_dir,1);
	BBBYTE* bbt_d=brl_filesystem_ReadDir(bbt_dir);
	if(!(bbt_d)){
		return (&bbEmptyArray);
	}
	BBARRAY bbt_i=bbArrayNew1D("$", 100);
	BBINT bbt_n=0;
	do{
		BBSTRING bbt_f=brl_filesystem_NextFile(bbt_d);
		if(!(bbt_f!= &bbEmptyString)){
			break;
		}
		if((bbt_skip_dots!=0) && (bbStringEquals(bbt_f, &_s2)==1 || bbStringEquals(bbt_f, &_s3)==1)){
			continue;
		}
		if(bbt_n==(bbt_i->scales[0])){
			bbt_i=bbArraySlice("$",bbt_i,0,(bbt_n+100));
		}
		((BBSTRING*)BBARRAYDATA(bbt_i,1))[((BBUINT)bbt_n)]=bbt_f;
		bbt_n=(bbt_n+1);
	}while(!(0));
	brl_filesystem_CloseDir(bbt_d);
	return bbArraySlice("$",bbt_i,0,bbt_n);
}
BBINT brl_filesystem_CopyDir_CopyDir_(BBSTRING bbt_src,BBSTRING bbt_dst);
BBINT brl_filesystem_CopyDir_CopyDir_(BBSTRING bbt_src,BBSTRING bbt_dst){
	if(brl_filesystem_FileType(bbt_dst)==0){
		brl_filesystem_CreateDir(bbt_dst,0);
	}
	if(brl_filesystem_FileType(bbt_dst)!=2){
		return 0;
	}
	BBARRAY bbt_=brl_filesystem_LoadDir(bbt_src,1);
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		BBSTRING bbt_file=((BBSTRING*)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		BBINT bbt_3=brl_filesystem_FileType(bbStringConcat(bbStringConcat(bbt_src,&_s0),bbt_file));
		if(bbt_3==2){
			if(!(brl_filesystem_CopyDir_CopyDir_(bbStringConcat(bbStringConcat(bbt_src,&_s0),bbt_file),bbStringConcat(bbStringConcat(bbt_dst,&_s0),bbt_file))!=0)){
				return 0;
			}
		}else{
			if(bbt_3==1){
				if(!(brl_filesystem_CopyFile(bbStringConcat(bbStringConcat(bbt_src,&_s0),bbt_file),bbStringConcat(bbStringConcat(bbt_dst,&_s0),bbt_file))!=0)){
					return 0;
				}
			}
		}
	}
	return 1;
}
BBINT brl_filesystem_CopyDir(BBSTRING bbt_src,BBSTRING bbt_dst){
	brl_filesystem_FixPath(&bbt_src,0);
	if(brl_filesystem_FileType(bbt_src)!=2){
		return 0;
	}
	brl_filesystem_FixPath(&bbt_dst,0);
	return brl_filesystem_CopyDir_CopyDir_(bbt_src,bbt_dst);
}
BBINT brl_filesystem_DeleteDir(BBSTRING bbt_path,BBINT bbt_recurse){
	brl_filesystem_FixPath(&bbt_path,1);
	if(bbt_recurse!=0){
		BBBYTE* bbt_dir=brl_filesystem_ReadDir(bbt_path);
		if(!(bbt_dir)){
			return 0;
		}
		do{
			BBSTRING bbt_t=brl_filesystem_NextFile(bbt_dir);
			if(bbt_t==&bbEmptyString){
				break;
			}
			if(bbStringEquals(bbt_t, &_s2)==1 || bbStringEquals(bbt_t, &_s3)==1){
				continue;
			}
			BBSTRING bbt_f=bbStringConcat(bbStringConcat(bbt_path,&_s0),bbt_t);
			BBINT bbt_=brl_filesystem_FileType(bbt_f);
			if(bbt_==1){
				brl_filesystem_DeleteFile(bbt_f);
			}else{
				if(bbt_==2){
					brl_filesystem_DeleteDir(bbt_f,1);
				}
			}
		}while(!(0));
		brl_filesystem_CloseDir(bbt_dir);
	}
	rmdir_(bbt_path);
	if(brl_filesystem_FileType(bbt_path)==0){
		return 1;
	}
	return 0;
}
BBINT brl_filesystem_ChangeDir(BBSTRING bbt_path){
	brl_filesystem_FixPath(&bbt_path,1);
	if(chdir_(bbt_path)==0){
		return 1;
	}
	return 0;
}
struct brl_stream_TStream_obj* brl_filesystem_OpenFile(BBOBJECT bbt_url,BBINT bbt_readable,BBINT bbt_writeable){
	struct brl_stream_TStream_obj* bbt_stream=(struct brl_stream_TStream_obj*)brl_stream_OpenStream((BBOBJECT)bbt_url,bbt_readable,bbt_writeable);
	if(!(((BBObject*)bbt_stream)!= &bbNullObject)){
		return (struct brl_stream_TStream_obj*)&bbNullObject;
	}
	if((bbt_stream)->clas->m_Pos((struct brl_stream_TIO_obj*)bbt_stream)==-1LL){
		return (struct brl_stream_TStream_obj*)((struct brl_stream_TStream_obj*)bbObjectDowncast((BBOBJECT)brl_bankstream_TBankStream_Create_TTBankStream_TTBank((struct brl_bank_TBank_obj*)brl_bank_TBank_Load_TTBank_TObject((BBOBJECT)bbt_stream)),(BBClass*)&brl_stream_TStream));
	}
	return (struct brl_stream_TStream_obj*)bbt_stream;
}
struct brl_stream_TStream_obj* brl_filesystem_ReadFile(BBOBJECT bbt_url){
	return (struct brl_stream_TStream_obj*)brl_filesystem_OpenFile((BBOBJECT)bbt_url,1,0);
}
struct brl_stream_TStream_obj* brl_filesystem_WriteFile(BBOBJECT bbt_url){
	return (struct brl_stream_TStream_obj*)brl_filesystem_OpenFile((BBOBJECT)bbt_url,0,1);
}
void brl_filesystem_CloseFile(struct brl_stream_TStream_obj* bbt_stream){
	(bbt_stream)->clas->m_Close((struct brl_stream_TIO_obj*)bbt_stream);
}
static int __bb_brl_filesystem_filesystem_inited = 0;
int __bb_brl_filesystem_filesystem(){
	if (!__bb_brl_filesystem_filesystem_inited) {
		__bb_brl_filesystem_filesystem_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_pub_stdc_stdc();
		__bb_brl_bankstream_bankstream();
		return 0;
	}
	return 0;
}