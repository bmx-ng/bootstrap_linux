#ifndef BRL_MAXUTIL_MAXUTIL_BMX_RELEASE_LINUX_X64_H
#define BRL_MAXUTIL_MAXUTIL_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/linkedlist.mod/.bmx/linkedlist.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
int __bb_brl_maxutil_maxutil();
BBSTRING brl_maxutil_BlitzMaxPath();
BBSTRING brl_maxutil_ModulePath(BBSTRING bbt_modid);
BBSTRING brl_maxutil_ModuleIdent(BBSTRING bbt_modid);
BBSTRING brl_maxutil_ModuleSource(BBSTRING bbt_modid);
BBSTRING brl_maxutil_ModuleArchive(BBSTRING bbt_modid,BBSTRING bbt_mung);
BBSTRING brl_maxutil_ModuleInterface(BBSTRING bbt_modid,BBSTRING bbt_mung);
struct brl_linkedlist_TList_obj* brl_maxutil_EnumModules(BBSTRING bbt_modid,struct brl_linkedlist_TList_obj* bbt_mods);
BBSTRING brl_maxutil_MinGWPath();

#endif
