#include <brl.mod/appstub.mod/.bmx/appstub.bmx.release.linux.x64.h>
static int __bb_brl_appstub_appstub_inited = 0;
int __bb_brl_appstub_appstub(){
	if (!__bb_brl_appstub_appstub_inited) {
		__bb_brl_appstub_appstub_inited = 1;
		__bb_brl_blitz_blitz();
		_bb_main();
		return 0;
	}
	return 0;
}