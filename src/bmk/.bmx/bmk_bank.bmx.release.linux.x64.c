#include "bmk_bank.bmx.release.linux.x64.h"
static BBString _s0={
	&bbStringClass,
	1,
	{47}
};
struct brl_bank_TBank_obj* _m_bmk_bank_CompressBank(struct brl_bank_TBank_obj* bbt_bank){
	BBULONG bbt_size=((BBULONG)(bbt_bank)->clas->m_Size((struct brl_bank_TBank_obj*)bbt_bank));
	BBULONG bbt_out_size=((bbt_size+(bbt_size/10ULL))+32ULL);
	struct brl_bank_TBank_obj* bbt_out=(struct brl_bank_TBank_obj*)brl_bank_TBank_Create_TTBank_z((BBSIZET)bbt_out_size);
	compress((void*)((bbt_out)->clas->m_Buf((struct brl_bank_TBank_obj*)bbt_out)+4),(unsigned long*)(&bbt_out_size),(const void*)(bbt_bank)->clas->m_Buf((struct brl_bank_TBank_obj*)bbt_bank),(unsigned long)bbt_size);
	(bbt_out)->clas->m_PokeByte_ii((struct brl_bank_TBank_obj*)bbt_out,0,((BBINT)bbt_size));
	(bbt_out)->clas->m_PokeByte_ii((struct brl_bank_TBank_obj*)bbt_out,1,((BBINT)(bbt_size>>8ULL)));
	(bbt_out)->clas->m_PokeByte_ii((struct brl_bank_TBank_obj*)bbt_out,2,((BBINT)(bbt_size>>16ULL)));
	(bbt_out)->clas->m_PokeByte_ii((struct brl_bank_TBank_obj*)bbt_out,3,((BBINT)(bbt_size>>24ULL)));
	(bbt_out)->clas->m_Resize_z((struct brl_bank_TBank_obj*)bbt_out,((BBSIZET)(bbt_out_size+4ULL)));
	return (struct brl_bank_TBank_obj*)bbt_out;
}
struct brl_bank_TBank_obj* _m_bmk_bank_UncompressBank(struct brl_bank_TBank_obj* bbt_bank){
	BBULONG bbt_out_size=0ULL;
	bbt_out_size=(bbt_out_size|((BBULONG)(bbt_bank)->clas->m_PeekByte_i((struct brl_bank_TBank_obj*)bbt_bank,0)));
	bbt_out_size=(bbt_out_size|((BBULONG)((bbt_bank)->clas->m_PeekByte_i((struct brl_bank_TBank_obj*)bbt_bank,1)<<8)));
	bbt_out_size=(bbt_out_size|((BBULONG)((bbt_bank)->clas->m_PeekByte_i((struct brl_bank_TBank_obj*)bbt_bank,2)<<16)));
	bbt_out_size=(bbt_out_size|((BBULONG)((bbt_bank)->clas->m_PeekByte_i((struct brl_bank_TBank_obj*)bbt_bank,3)<<24)));
	struct brl_bank_TBank_obj* bbt_out=(struct brl_bank_TBank_obj*)brl_bank_TBank_Create_TTBank_z((BBSIZET)bbt_out_size);
	uncompress((void*)(bbt_out)->clas->m_Buf((struct brl_bank_TBank_obj*)bbt_out),(unsigned long*)(&bbt_out_size),(const void*)((bbt_bank)->clas->m_Buf((struct brl_bank_TBank_obj*)bbt_bank)+4),(unsigned long)((BBULONG)((BBUINT)((bbt_bank)->clas->m_Size((struct brl_bank_TBank_obj*)bbt_bank)-4))));
	return (struct brl_bank_TBank_obj*)bbt_out;
}
BBINT _m_bmk_bank_SplitUrl(BBSTRING bbt_url,BBSTRING* bbt_server,BBSTRING* bbt_file){
	BBINT bbt_i=bbStringFind((BBSTRING)bbt_url,&_s0,0);
	if(bbt_i!=-1){
		*bbt_server=bbStringSlice(bbt_url,0,bbt_i);
		*bbt_file=bbStringSlice(bbt_url,bbt_i,(bbt_url)->length);
	}else{
		*bbt_server=bbt_url;
		*bbt_file=(&_s0);
	}
	return 0;
}
static int _bb_bmk_bmk_bank_inited = 0;
int _bb_bmk_bmk_bank(){
	if (!_bb_bmk_bmk_bank_inited) {
		_bb_bmk_bmk_bank_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_filesystem_filesystem();
		_bb_bmk_bmk_config();
		__bb_pub_zlib_zlib();
		__bb_brl_socketstream_socketstream();
		return 0;
	}
	return 0;
}