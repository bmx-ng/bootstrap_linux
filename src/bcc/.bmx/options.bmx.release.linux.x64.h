#ifndef BCC_OPTIONS_BMX_RELEASE_LINUX_X64_H
#define BCC_OPTIONS_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.linux.x64.h>
#include "base.configmap.bmx.release.linux.x64.h"
int _bb_bcc_options();
extern BBINT _m_options_WORD_SIZE;
extern BBINT _m_options_opt_buildtype;
extern BBSTRING _m_options_opt_modulename;
extern BBSTRING _m_options_opt_arch;
extern BBSTRING _m_options_opt_platform;
extern BBSTRING _m_options_opt_framework;
extern BBSTRING _m_options_opt_filename;
extern BBSTRING _m_options_opt_outfile;
extern BBINT _m_options_opt_apptype;
extern BBINT _m_options_opt_debug;
extern BBINT _m_options_opt_threaded;
extern BBINT _m_options_opt_release;
extern BBINT _m_options_opt_quiet;
extern BBINT _m_options_opt_verbose;
extern BBINT _m_options_opt_ismain;
extern BBINT _m_options_opt_issuperstrict;
extern BBINT _m_options_opt_gdbdebug;
extern BBINT _m_options_opt_strictupgrade;
extern BBINT _m_options_opt_warnover;
extern BBINT _m_options_opt_musl;
extern BBINT _m_options_opt_def;
extern BBINT _m_options_opt_nodef;
extern BBINT _m_options_opt_head;
extern BBINT _m_options_opt_nohead;
extern BBINT _m_options_opt_makelib;
extern BBINT _m_options_opt_require_override;
extern BBINT _m_options_opt_override_error;
extern BBSTRING _m_options_opt_userdefs;
extern BBINT _m_options_opt_need_strict;
extern BBSTRING _m_options_opt_filepath;
void _m_options_CmdError(BBSTRING bbt_details,BBINT bbt_fullUsage);
void _m_options_DefaultOptions();
void _m_options_CheckConfig();
BBARRAY _m_options_ParseArgs(BBARRAY bbt_args);

#endif
