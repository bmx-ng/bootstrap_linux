#ifndef BMK_BMK_CONFIG_BMX_RELEASE_LINUX_X64_H
#define BMK_BMK_CONFIG_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.release.linux.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.linux.x64.h>
#include <brl.mod/map.mod/.bmx/map.bmx.release.linux.x64.h>
#include "stringbuffer_core.bmx.release.linux.x64.h"
int _bb_bmk_bmk_config();
extern BBSTRING _m_bmk_config_opt_arch;
extern BBINT _m_bmk_config_opt_arch_set;
extern BBSTRING _m_bmk_config_opt_outfile;
extern BBSTRING _m_bmk_config_opt_infile;
extern BBSTRING _m_bmk_config_opt_framework;
extern BBSTRING _m_bmk_config_opt_apptype;
extern BBINT _m_bmk_config_opt_debug;
extern BBINT _m_bmk_config_opt_threaded;
extern BBINT _m_bmk_config_opt_release;
extern BBSTRING _m_bmk_config_opt_configmung;
extern BBINT _m_bmk_config_opt_kill;
extern BBSTRING _m_bmk_config_opt_modfilter;
extern BBINT _m_bmk_config_opt_all;
extern BBINT _m_bmk_config_opt_quiet;
extern BBINT _m_bmk_config_opt_verbose;
extern BBINT _m_bmk_config_opt_execute;
extern BBSTRING _m_bmk_config_opt_appstub;
extern BBINT _m_bmk_config_opt_universal;
extern BBSTRING _m_bmk_config_opt_target_platform;
extern BBINT _m_bmk_config_opt_target_platform_set;
extern BBINT _m_bmk_config_opt_gdbdebug;
extern BBINT _m_bmk_config_opt_gdbdebug_set;
extern BBINT _m_bmk_config_opt_standalone;
extern BBINT _m_bmk_config_opt_standalone_set;
extern BBINT _m_bmk_config_opt_nolog;
extern BBINT _m_bmk_config_opt_quickscan;
extern BBINT _m_bmk_config_opt_quickscan_set;
extern BBINT _m_bmk_config_opt_nostrictupgrade;
extern BBINT _m_bmk_config_opt_nostrictupgrade_set;
extern BBINT _m_bmk_config_opt_warnover;
extern BBINT _m_bmk_config_opt_warnover_set;
extern BBINT _m_bmk_config_opt_musl;
extern BBINT _m_bmk_config_opt_musl_set;
extern BBINT _m_bmk_config_opt_static;
extern BBINT _m_bmk_config_opt_static_set;
extern BBINT _m_bmk_config_opt_boot;
extern BBINT _m_bmk_config_opt_manifest;
extern BBINT _m_bmk_config_opt_single;
extern BBINT _m_bmk_config_opt_nodef;
extern BBINT _m_bmk_config_opt_nohead;
extern BBINT _m_bmk_config_opt_require_override;
extern BBINT _m_bmk_config_opt_override_error;
extern BBINT _m_bmk_config_opt_nopie;
extern BBINT _m_bmk_config_opt_nopie_set;
extern BBINT _m_bmk_config_opt_upx;
extern BBSTRING _m_bmk_config_opt_userdefs;
extern BBINT _m_bmk_config_opt_gprof;
extern BBINT _m_bmk_config_opt_dumpbuild;
extern BBINT _m_bmk_config_macos_version;
extern BBSTRING _m_bmk_config_app_main;
extern BBSTRING _m_bmk_config_app_type;
BBSTRING _m_bmk_config_Usage(BBINT bbt_fullUsage);
BBINT _m_bmk_config_CmdError(BBSTRING bbt_details,BBINT bbt_fullUsage);
BBINT _m_bmk_config_MissingArg(BBSTRING bbt_arg);
BBINT _m_bmk_config_ValidateArch(BBSTRING bbt_arch);
BBINT _m_bmk_config_ValidatePlatform(BBSTRING bbt_platform);
BBARRAY _m_bmk_config_ParseConfigArgs(BBARRAY bbt_args,BBINT bbt_legacyMax);
BBSTRING _m_bmk_config_CQuote(BBSTRING bbt_t);
BBSTRING _m_bmk_config_ReQuote(BBSTRING bbt_t);
BBINT _m_bmk_config_CharIsDigit(BBINT bbt_ch);
BBINT _m_bmk_config_CharIsAlpha(BBINT bbt_ch);
BBSTRING _m_bmk_config_EscapeSpaces(BBSTRING bbt_path);
BBINT _m_bmk_config_VersionInfo(BBSTRING bbt_gcc,BBINT bbt_cores);
BBINT _m_bmk_config_AsConfigurable(BBSTRING bbt_key,BBSTRING bbt_value);
struct brl_map_TMap_obj* _m_bmk_config_DefaultApplicationSettings();
struct brl_map_TMap_obj* _m_bmk_config_ParseApplicationIniFile();

#endif
