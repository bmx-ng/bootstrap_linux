#include "common.bmx.release.linux.x64.h"
static int _bb_brl_stringbuilder_common_inited = 0;
int _bb_brl_stringbuilder_common(){
	if (!_bb_brl_stringbuilder_common_inited) {
		_bb_brl_stringbuilder_common_inited = 1;
		__bb_brl_blitz_blitz();
		return 0;
	}
	return 0;
}