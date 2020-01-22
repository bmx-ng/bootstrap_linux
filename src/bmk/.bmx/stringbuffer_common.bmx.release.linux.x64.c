#include "stringbuffer_common.bmx.release.linux.x64.h"
static int _bb_bmk_stringbuffer_common_inited = 0;
int _bb_bmk_stringbuffer_common(){
	if (!_bb_bmk_stringbuffer_common_inited) {
		_bb_bmk_stringbuffer_common_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_filesystem_filesystem();
		return 0;
	}
	return 0;
}