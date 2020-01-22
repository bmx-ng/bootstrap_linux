#ifndef PUB_ZLIB_ZLIB_BMX_RELEASE_LINUX_X64_H
#define PUB_ZLIB_ZLIB_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
int __bb_pub_zlib_zlib();
extern int compress(void* bbt_dest,unsigned long* bbt_dest_len,const void* bbt_source,unsigned long bbt_source_len);
extern int compress2(void* bbt_dest,unsigned long* bbt_dest_len,const void* bbt_source,unsigned long bbt_source_len,int bbt_level);
extern int uncompress(void* bbt_dest,unsigned long* bbt_dest_len,const void* bbt_source,unsigned long bbt_source_len);

#endif
