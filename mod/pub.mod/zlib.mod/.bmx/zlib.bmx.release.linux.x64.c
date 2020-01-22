#include <pub.mod/zlib.mod/.bmx/zlib.bmx.release.linux.x64.h>
static int __bb_pub_zlib_zlib_inited = 0;
int __bb_pub_zlib_zlib(){
	if (!__bb_pub_zlib_zlib_inited) {
		__bb_pub_zlib_zlib_inited = 1;
		__bb_brl_blitz_blitz();
		return 0;
	}
	return 0;
}