#include <brl.mod/math.mod/.bmx/math.bmx.release.linux.x64.h>
static int __bb_brl_math_math_inited = 0;
int __bb_brl_math_math(){
	if (!__bb_brl_math_math_inited) {
		__bb_brl_math_math_inited = 1;
		__bb_brl_blitz_blitz();
		return 0;
	}
	return 0;
}