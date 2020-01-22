#ifndef BMK_BMK_BANK_BMX_RELEASE_LINUX_X64_H
#define BMK_BMK_BANK_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
#include "bmk_config.bmx.release.linux.x64.h"
#include <pub.mod/zlib.mod/.bmx/zlib.bmx.release.linux.x64.h>
#include <brl.mod/socketstream.mod/.bmx/socketstream.bmx.release.linux.x64.h>
int _bb_bmk_bmk_bank();
struct brl_bank_TBank_obj* _m_bmk_bank_CompressBank(struct brl_bank_TBank_obj* bbt_bank);
struct brl_bank_TBank_obj* _m_bmk_bank_UncompressBank(struct brl_bank_TBank_obj* bbt_bank);
BBINT _m_bmk_bank_SplitUrl(BBSTRING bbt_url,BBSTRING* bbt_server,BBSTRING* bbt_file);

#endif
