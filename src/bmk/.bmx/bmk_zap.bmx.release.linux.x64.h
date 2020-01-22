#ifndef BMK_BMK_ZAP_BMX_RELEASE_LINUX_X64_H
#define BMK_BMK_ZAP_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
#include "bmk_modutil.bmx.release.linux.x64.h"
#include "bmk_bank.bmx.release.linux.x64.h"
#include "bmk_modinfo.bmx.release.linux.x64.h"
int _bb_bmk_bmk_zap();
BBINT _m_bmk_zap_Zap(BBSTRING bbt_path,struct brl_stream_TStream_obj* bbt_stream);
BBINT _m_bmk_zap_Unzap(BBSTRING bbt_dir,struct brl_stream_TStream_obj* bbt_stream);
BBINT _m_bmk_zap_ZapMod(BBSTRING bbt_name,struct brl_stream_TStream_obj* bbt_stream);
BBINT _m_bmk_zap_UnzapMod(struct brl_stream_TStream_obj* bbt_stream);

#endif
