#ifndef BCC_BCC_BMX_CONSOLE_RELEASE_LINUX_X64_H
#define BCC_BCC_BMX_CONSOLE_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.linux.x64.h>
#include "ctranslator.bmx.release.linux.x64.h"
int _bb_main();
void _m_bcc_SaveInterface(BBSTRING bbt_file,struct _m_ctranslator_TCTranslator_obj* bbt_trans,BBSTRING bbt_mung);
void _m_bcc_SaveHeader(BBSTRING bbt_file,struct _m_ctranslator_TCTranslator_obj* bbt_trans,BBSTRING bbt_mung);
void _m_bcc_SaveSource(BBSTRING bbt_file,struct _m_ctranslator_TCTranslator_obj* bbt_trans,BBSTRING bbt_mung);
void _m_bcc_SaveIncBinHeader(BBSTRING bbt_file,struct _m_ctranslator_TCTranslator_obj* bbt_trans,BBSTRING bbt_mung,struct _m_type_TAppDecl_obj* bbt_app);
void _m_bcc_SaveDef(BBSTRING bbt_file,struct _m_ctranslator_TCTranslator_obj* bbt_trans,BBSTRING bbt_mung,struct _m_type_TAppDecl_obj* bbt_app);

#endif
