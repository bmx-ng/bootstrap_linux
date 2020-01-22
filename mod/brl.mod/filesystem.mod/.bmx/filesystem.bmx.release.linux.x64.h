#ifndef BRL_FILESYSTEM_FILESYSTEM_BMX_RELEASE_LINUX_X64_H
#define BRL_FILESYSTEM_FILESYSTEM_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <pub.mod/stdc.mod/.bmx/stdc.bmx.release.linux.x64.h>
#include <brl.mod/bankstream.mod/.bmx/bankstream.bmx.release.linux.x64.h>
int __bb_brl_filesystem_filesystem();
BBSTRING brl_filesystem__RootPath(BBSTRING bbt_path);
BBINT brl_filesystem__IsRootPath(BBSTRING bbt_path);
BBINT brl_filesystem__IsRealPath(BBSTRING bbt_path);
void brl_filesystem_FixPath(BBSTRING* bbt_path,BBINT bbt_dirPath);
BBSTRING brl_filesystem_StripDir(BBSTRING bbt_path);
BBSTRING brl_filesystem_StripExt(BBSTRING bbt_path);
BBSTRING brl_filesystem_StripAll(BBSTRING bbt_path);
BBSTRING brl_filesystem_StripSlash(BBSTRING bbt_path);
BBSTRING brl_filesystem_ExtractDir(BBSTRING bbt_path);
BBSTRING brl_filesystem_ExtractExt(BBSTRING bbt_path);
BBSTRING brl_filesystem_CurrentDir();
BBSTRING brl_filesystem_RealPath(BBSTRING bbt_path);
BBINT brl_filesystem_FileType(BBSTRING bbt_path);
BBINT brl_filesystem_FileTime(BBSTRING bbt_path,BBINT bbt_timetype);
BBLONG brl_filesystem_FileSize(BBSTRING bbt_path);
BBINT brl_filesystem_FileMode(BBSTRING bbt_path);
void brl_filesystem_SetFileMode(BBSTRING bbt_path,BBINT bbt_Mode);
BBINT brl_filesystem_CreateFile(BBSTRING bbt_path);
BBINT brl_filesystem_CreateDir(BBSTRING bbt_path,BBINT bbt_recurse);
BBINT brl_filesystem_DeleteFile(BBSTRING bbt_path);
BBINT brl_filesystem_RenameFile(BBSTRING bbt_oldpath,BBSTRING bbt_newpath);
BBINT brl_filesystem_CopyFile(BBSTRING bbt_src,BBSTRING bbt_dst);
BBBYTE* brl_filesystem_ReadDir(BBSTRING bbt_path);
BBSTRING brl_filesystem_NextFile(BBBYTE* bbt_dir);
void brl_filesystem_CloseDir(BBBYTE* bbt_dir);
BBARRAY brl_filesystem_LoadDir(BBSTRING bbt_dir,BBINT bbt_skip_dots);
BBINT brl_filesystem_CopyDir(BBSTRING bbt_src,BBSTRING bbt_dst);
BBINT brl_filesystem_DeleteDir(BBSTRING bbt_path,BBINT bbt_recurse);
BBINT brl_filesystem_ChangeDir(BBSTRING bbt_path);
struct brl_stream_TStream_obj* brl_filesystem_OpenFile(BBOBJECT bbt_url,BBINT bbt_readable,BBINT bbt_writeable);
struct brl_stream_TStream_obj* brl_filesystem_ReadFile(BBOBJECT bbt_url);
struct brl_stream_TStream_obj* brl_filesystem_WriteFile(BBOBJECT bbt_url);
void brl_filesystem_CloseFile(struct brl_stream_TStream_obj* bbt_stream);

#endif
