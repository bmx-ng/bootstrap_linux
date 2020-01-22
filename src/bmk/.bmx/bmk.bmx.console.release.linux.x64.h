#ifndef BMK_BMK_BMX_CONSOLE_RELEASE_LINUX_X64_H
#define BMK_BMK_BMX_CONSOLE_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
#include "bmk_make.bmx.release.linux.x64.h"
#include "bmk_zap.bmx.release.linux.x64.h"
int _bb_main();
BBINT _m_bmk_LoadOptions(BBINT bbt_reload);
BBINT _m_bmk_SetConfigMung();
BBINT _m_bmk_MakeApplication(BBARRAY bbt_args,BBINT bbt_makelib,BBINT bbt_compileOnly);
BBINT _m_bmk_SetModfilter(BBSTRING bbt_t);
BBINT _m_bmk_MakeModules(BBARRAY bbt_args);
BBINT _m_bmk_MakeBootstrap();
BBINT _m_bmk_CleanBmxDirs(BBSTRING bbt_path);
BBINT _m_bmk_CleanModules(BBARRAY bbt_args);
BBINT _m_bmk_ZapModule(BBARRAY bbt_args);
BBINT _m_bmk_UnzapModule(BBARRAY bbt_args);
BBINT _m_bmk_RanlibDir(BBARRAY bbt_args);

#endif
