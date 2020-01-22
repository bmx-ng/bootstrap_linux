#include <brl.mod/socket.mod/.bmx/socket.bmx.release.linux.x64.h>
static BBString _s1={
	&bbStringClass,
	1,
	{46}
};
static BBString _s0={
	&bbStringClass,
	21,
	{73,110,116,101,114,110,97,108,32,115,111,99,107,101,116,32,101
	,114,114,111,114}
};
static BBString _s2={
	&bbStringClass,
	4,
	{104,116,116,112}
};
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_30{int kind; const char *name; BBDebugDecl decls[31]; };
void _brl_socket_TSocketException_New(struct brl_socket_TSocketException_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_socket_TSocketException;
}
BBSTRING _brl_socket_TSocketException_ToString(struct brl_socket_TSocketException_obj* o){
	return &_s0;
}
struct BBDebugScope_2 brl_socket_TSocketException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSocketException",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_socket_TSocketException_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&_brl_socket_TSocketException_ToString
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_socket_TSocketException brl_socket_TSocketException={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_socket_TSocketException_scope,
	sizeof(struct brl_socket_TSocketException_obj),
	(void (*)(BBOBJECT))_brl_socket_TSocketException_New,
	bbObjectDtor,
	(BBSTRING (*)(BBOBJECT))_brl_socket_TSocketException_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

void _brl_socket_TSocket_New(struct brl_socket_TSocket_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_socket_TSocket;
	o->_brl_socket_tsocket__socket = 0;
	o->_brl_socket_tsocket__autoclose = 0;
	o->_brl_socket_tsocket__localip = &bbEmptyString;
	o->_brl_socket_tsocket__localport = 0;
	o->_brl_socket_tsocket__remoteip = &bbEmptyString;
	o->_brl_socket_tsocket__remoteport = 0;
}
BBLONG _brl_socket_TSocket_Send_pbzi(struct brl_socket_TSocket_obj* o,BBBYTE* bbt_buf,BBSIZET bbt_count,BBINT bbt_flags){
	BBLONG bbt_n=send_(o->_brl_socket_tsocket__socket ,bbt_buf,bbt_count,bbt_flags);
	return bbt_n;
}
BBLONG _brl_socket_TSocket_Recv_pbzi(struct brl_socket_TSocket_obj* o,BBBYTE* bbt_buf,BBSIZET bbt_count,BBINT bbt_flags){
	BBLONG bbt_n=recv_(o->_brl_socket_tsocket__socket ,bbt_buf,bbt_count,bbt_flags);
	return bbt_n;
}
BBINT _brl_socket_TSocket_Close(struct brl_socket_TSocket_obj* o){
	if(o->_brl_socket_tsocket__socket <0){
		return 0;
	}
	if(o->_brl_socket_tsocket__autoclose !=0){
		closesocket_(o->_brl_socket_tsocket__socket );
	}
	o->_brl_socket_tsocket__socket =-1;
	o->_brl_socket_tsocket__localip =&bbEmptyString;
	o->_brl_socket_tsocket__localport =-1;
	o->_brl_socket_tsocket__remoteip =&bbEmptyString;
	o->_brl_socket_tsocket__remoteport =-1;
	return 0;
}
BBINT _brl_socket_TSocket_Connected(struct brl_socket_TSocket_obj* o){
	if(o->_brl_socket_tsocket__socket <0){
		return 0;
	}
	BBINT bbt_Read=o->_brl_socket_tsocket__socket ;
	if((select_(1,(&bbt_Read),0,0,0,0,0)!=1) || (((struct brl_socket_TSocket_obj*)o)->clas->m_ReadAvail((struct brl_socket_TSocket_obj*)o)!=0)){
		return 1;
	}
	((struct brl_socket_TSocket_obj*)o)->clas->m_Close((struct brl_socket_TSocket_obj*)o);
	return 0;
}
BBINT _brl_socket_TSocket_Bind_ii(struct brl_socket_TSocket_obj* o,BBINT bbt_localPort,BBINT bbt_family){
	if(bind_(o->_brl_socket_tsocket__socket ,bbt_family,bbt_localPort)<0){
		return 0;
	}
	((struct brl_socket_TSocket_obj*)o)->clas->m_UpdateLocalName((struct brl_socket_TSocket_obj*)o);
	return 1;
}
BBINT _brl_socket_TSocket_Bind_TTAddrInfo(struct brl_socket_TSocket_obj* o,struct pub_stdc_TAddrInfo_obj* bbt_info){
	if(bmx_stdc_bind_info(o->_brl_socket_tsocket__socket ,bbt_info->_pub_stdc_taddrinfo_infoptr )<0){
		return 0;
	}
	((struct brl_socket_TSocket_obj*)o)->clas->m_UpdateLocalName((struct brl_socket_TSocket_obj*)o);
	return 1;
}
BBINT _brl_socket_TSocket_Connect_TTAddrInfo(struct brl_socket_TSocket_obj* o,struct pub_stdc_TAddrInfo_obj* bbt_AddrInfo){
	if(connect_(o->_brl_socket_tsocket__socket ,bbt_AddrInfo->_pub_stdc_taddrinfo_infoptr )<0){
		return 0;
	}
	((struct brl_socket_TSocket_obj*)o)->clas->m_UpdateLocalName((struct brl_socket_TSocket_obj*)o);
	((struct brl_socket_TSocket_obj*)o)->clas->m_UpdateRemoteName((struct brl_socket_TSocket_obj*)o);
	return 1;
}
BBINT _brl_socket_TSocket_Listen_i(struct brl_socket_TSocket_obj* o,BBINT bbt_backlog){
	return (listen_(o->_brl_socket_tsocket__socket ,bbt_backlog)>=0);
}
struct brl_socket_TSocket_obj* _brl_socket_TSocket_Accept_iTTSockaddrStorage(struct brl_socket_TSocket_obj* o,BBINT bbt_timeout,struct pub_stdc_TSockaddrStorage_obj* bbt_storage){
	if(bbt_timeout>=0){
		BBINT bbt_Read=o->_brl_socket_tsocket__socket ;
		if(select_(1,(&bbt_Read),0,0,0,0,bbt_timeout)!=1){
			return (struct brl_socket_TSocket_obj*)(&bbNullObject);
		}
	}
	BBINT bbt_client=0;
	if(((BBObject*)bbt_storage)!= &bbNullObject){
		bbt_client=bmx_stdc_accept_(o->_brl_socket_tsocket__socket ,bbt_storage->_pub_stdc_tsockaddrstorage_storageptr );
	}else{
		bbt_client=bmx_stdc_accept_(o->_brl_socket_tsocket__socket ,0);
	}
	if(bbt_client>0){
		return (struct brl_socket_TSocket_obj*)o->clas->f_Create_TTSocket_ii(bbt_client,1);
	}
	return (struct brl_socket_TSocket_obj*)(&bbNullObject);
}
BBINT _brl_socket_TSocket_ReadAvail(struct brl_socket_TSocket_obj* o){
	BBINT bbt_n=0;
	BBINT bbt_t=ioctl(o->_brl_socket_tsocket__socket ,21531,((BBBYTE*)(&bbt_n)));
	if(bbt_t<0){
		return 0;
	}
	return bbt_n;
}
BBINT _brl_socket_TSocket_SetTCPNoDelay_i(struct brl_socket_TSocket_obj* o,BBINT bbt_enable){
	BBINT bbt_flag=bbt_enable;
	setsockopt_(o->_brl_socket_tsocket__socket ,6,1,((BBBYTE*)(&bbt_flag)),4);
	return 0;
}
BBINT _brl_socket_TSocket_SetSockOpt_iii(struct brl_socket_TSocket_obj* o,BBINT bbt_level,BBINT bbt_optname,BBINT bbt_enable){
	BBINT bbt_flag=bbt_enable;
	if(setsockopt_(o->_brl_socket_tsocket__socket ,bbt_level,bbt_optname,((BBBYTE*)(&bbt_flag)),4)<0){
		return 0;
	}
	return 1;
}
BBINT _brl_socket_TSocket_Socket(struct brl_socket_TSocket_obj* o){
	return o->_brl_socket_tsocket__socket ;
}
BBSTRING _brl_socket_TSocket_LocalIp(struct brl_socket_TSocket_obj* o){
	return o->_brl_socket_tsocket__localip ;
}
BBINT _brl_socket_TSocket_LocalPort(struct brl_socket_TSocket_obj* o){
	return o->_brl_socket_tsocket__localport ;
}
BBSTRING _brl_socket_TSocket_RemoteIp(struct brl_socket_TSocket_obj* o){
	return o->_brl_socket_tsocket__remoteip ;
}
BBINT _brl_socket_TSocket_RemotePort(struct brl_socket_TSocket_obj* o){
	return o->_brl_socket_tsocket__remoteport ;
}
BBINT _brl_socket_TSocket_UpdateLocalName(struct brl_socket_TSocket_obj* o){
	if(bmx_stdc_getsockname(o->_brl_socket_tsocket__socket ,(&o->_brl_socket_tsocket__localport ),&o->_brl_socket_tsocket__localip )<0){
		return 0;
	}
	return 1;
}
BBINT _brl_socket_TSocket_UpdateRemoteName(struct brl_socket_TSocket_obj* o){
	if(bmx_stdc_getpeername(o->_brl_socket_tsocket__socket ,(&o->_brl_socket_tsocket__remoteport ),&o->_brl_socket_tsocket__remoteip )<0){
		return 0;
	}
	return 1;
}
struct brl_socket_TSocket_obj* brl_socket_TSocket_Create_TTSocket_ii(BBINT bbt_socket,BBINT bbt_autoClose){
	if(bbt_socket<0){
		return (struct brl_socket_TSocket_obj*)(&bbNullObject);
	}
	BBARRAY bbt_addr=bbArrayNew1D("b", 16);
	BBINT bbt_size=0;
	struct brl_socket_TSocket_obj* bbt_t=(struct brl_socket_TSocket_obj*)(struct brl_socket_TSocket_obj*)bbObjectNew((BBClass *)&brl_socket_TSocket);
	bbt_t->_brl_socket_tsocket__socket =bbt_socket;
	bbt_t->_brl_socket_tsocket__autoclose =bbt_autoClose;
	(bbt_t)->clas->m_UpdateLocalName((struct brl_socket_TSocket_obj*)bbt_t);
	(bbt_t)->clas->m_UpdateRemoteName((struct brl_socket_TSocket_obj*)bbt_t);
	return (struct brl_socket_TSocket_obj*)bbt_t;
}
struct brl_socket_TSocket_obj* brl_socket_TSocket_CreateUDP_TTSocket_i(BBINT bbt_family){
	BBINT bbt_socket=socket_(bbt_family,2,0);
	if(bbt_socket>=0){
		return (struct brl_socket_TSocket_obj*)brl_socket_TSocket_Create_TTSocket_ii(bbt_socket,1);
	}
	return (struct brl_socket_TSocket_obj*)(&bbNullObject);
}
struct brl_socket_TSocket_obj* brl_socket_TSocket_CreateTCP_TTSocket_i(BBINT bbt_family){
	BBINT bbt_socket=socket_(bbt_family,1,0);
	if(bbt_socket>=0){
		return (struct brl_socket_TSocket_obj*)brl_socket_TSocket_Create_TTSocket_ii(bbt_socket,1);
	}
	return (struct brl_socket_TSocket_obj*)(&bbNullObject);
}
struct brl_socket_TSocket_obj* brl_socket_TSocket_Create_TTSocket_TTAddrInfo(struct pub_stdc_TAddrInfo_obj* bbt_info){
	BBINT bbt_socket=socket_((bbt_info)->clas->m_family((struct pub_stdc_TAddrInfo_obj*)bbt_info),(bbt_info)->clas->m_sockType((struct pub_stdc_TAddrInfo_obj*)bbt_info),(bbt_info)->clas->m_protocol((struct pub_stdc_TAddrInfo_obj*)bbt_info));
	if(bbt_socket>=0){
		return (struct brl_socket_TSocket_obj*)brl_socket_TSocket_Create_TTSocket_ii(bbt_socket,1);
	}
	return (struct brl_socket_TSocket_obj*)(&bbNullObject);
}
struct BBDebugScope_30 brl_socket_TSocket_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSocket",
	{
		{
			BBDEBUGDECL_FIELD,
			"_socket",
			"i",
			.field_offset=offsetof(struct brl_socket_TSocket_obj,_brl_socket_tsocket__socket)
		},
		{
			BBDEBUGDECL_FIELD,
			"_autoClose",
			"i",
			.field_offset=offsetof(struct brl_socket_TSocket_obj,_brl_socket_tsocket__autoclose)
		},
		{
			BBDEBUGDECL_FIELD,
			"_localIp",
			"$",
			.field_offset=offsetof(struct brl_socket_TSocket_obj,_brl_socket_tsocket__localip)
		},
		{
			BBDEBUGDECL_FIELD,
			"_localPort",
			"i",
			.field_offset=offsetof(struct brl_socket_TSocket_obj,_brl_socket_tsocket__localport)
		},
		{
			BBDEBUGDECL_FIELD,
			"_remoteIp",
			"$",
			.field_offset=offsetof(struct brl_socket_TSocket_obj,_brl_socket_tsocket__remoteip)
		},
		{
			BBDEBUGDECL_FIELD,
			"_remotePort",
			"i",
			.field_offset=offsetof(struct brl_socket_TSocket_obj,_brl_socket_tsocket__remoteport)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_socket_TSocket_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Send",
			"(*b,t,i)l",
			.var_address=(void*)&_brl_socket_TSocket_Send_pbzi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Recv",
			"(*b,t,i)l",
			.var_address=(void*)&_brl_socket_TSocket_Recv_pbzi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Close",
			"()i",
			.var_address=(void*)&_brl_socket_TSocket_Close
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Connected",
			"()i",
			.var_address=(void*)&_brl_socket_TSocket_Connected
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Bind",
			"(i,i)i",
			.var_address=(void*)&_brl_socket_TSocket_Bind_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Bind",
			"(:TAddrInfo)i",
			.var_address=(void*)&_brl_socket_TSocket_Bind_TTAddrInfo
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Connect",
			"(:TAddrInfo)i",
			.var_address=(void*)&_brl_socket_TSocket_Connect_TTAddrInfo
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Listen",
			"(i)i",
			.var_address=(void*)&_brl_socket_TSocket_Listen_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Accept",
			"(i,:TSockaddrStorage):TSocket",
			.var_address=(void*)&_brl_socket_TSocket_Accept_iTTSockaddrStorage
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReadAvail",
			"()i",
			.var_address=(void*)&_brl_socket_TSocket_ReadAvail
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTCPNoDelay",
			"(i)i",
			.var_address=(void*)&_brl_socket_TSocket_SetTCPNoDelay_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSockOpt",
			"(i,i,i)i",
			.var_address=(void*)&_brl_socket_TSocket_SetSockOpt_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Socket",
			"()i",
			.var_address=(void*)&_brl_socket_TSocket_Socket
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"LocalIp",
			"()$",
			.var_address=(void*)&_brl_socket_TSocket_LocalIp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"LocalPort",
			"()i",
			.var_address=(void*)&_brl_socket_TSocket_LocalPort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoteIp",
			"()$",
			.var_address=(void*)&_brl_socket_TSocket_RemoteIp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemotePort",
			"()i",
			.var_address=(void*)&_brl_socket_TSocket_RemotePort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"UpdateLocalName",
			"()i",
			.var_address=(void*)&_brl_socket_TSocket_UpdateLocalName
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"UpdateRemoteName",
			"()i",
			.var_address=(void*)&_brl_socket_TSocket_UpdateRemoteName
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i):TSocket",
			.var_address=(void*)&brl_socket_TSocket_Create_TTSocket_ii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateUDP",
			"(i):TSocket",
			.var_address=(void*)&brl_socket_TSocket_CreateUDP_TTSocket_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateTCP",
			"(i):TSocket",
			.var_address=(void*)&brl_socket_TSocket_CreateTCP_TTSocket_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(:TAddrInfo):TSocket",
			.var_address=(void*)&brl_socket_TSocket_Create_TTSocket_TTAddrInfo
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_socket_TSocket brl_socket_TSocket={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_socket_TSocket_scope,
	sizeof(struct brl_socket_TSocket_obj),
	(void (*)(BBOBJECT))_brl_socket_TSocket_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_socket_TSocket_obj,_brl_socket_tsocket__remoteport) - sizeof(void*) + sizeof(BBINT)
	,0
	,_brl_socket_TSocket_Send_pbzi
	,_brl_socket_TSocket_Recv_pbzi
	,_brl_socket_TSocket_Close
	,_brl_socket_TSocket_Connected
	,_brl_socket_TSocket_Bind_ii
	,_brl_socket_TSocket_Bind_TTAddrInfo
	,_brl_socket_TSocket_Connect_TTAddrInfo
	,_brl_socket_TSocket_Listen_i
	,_brl_socket_TSocket_Accept_iTTSockaddrStorage
	,_brl_socket_TSocket_ReadAvail
	,_brl_socket_TSocket_SetTCPNoDelay_i
	,_brl_socket_TSocket_SetSockOpt_iii
	,_brl_socket_TSocket_Socket
	,_brl_socket_TSocket_LocalIp
	,_brl_socket_TSocket_LocalPort
	,_brl_socket_TSocket_RemoteIp
	,_brl_socket_TSocket_RemotePort
	,_brl_socket_TSocket_UpdateLocalName
	,_brl_socket_TSocket_UpdateRemoteName
	,brl_socket_TSocket_Create_TTSocket_ii
	,brl_socket_TSocket_CreateUDP_TTSocket_i
	,brl_socket_TSocket_CreateTCP_TTSocket_i
	,brl_socket_TSocket_Create_TTSocket_TTAddrInfo
};

struct brl_socket_TSocket_obj* brl_socket_CreateUDPSocket(){
	return (struct brl_socket_TSocket_obj*)brl_socket_TSocket_CreateUDP_TTSocket_i(2);
}
struct brl_socket_TSocket_obj* brl_socket_CreateTCPSocket(){
	return (struct brl_socket_TSocket_obj*)brl_socket_TSocket_CreateTCP_TTSocket_i(2);
}
BBINT brl_socket_CloseSocket(struct brl_socket_TSocket_obj* bbt_socket){
	(bbt_socket)->clas->m_Close((struct brl_socket_TSocket_obj*)bbt_socket);
	return 0;
}
BBINT brl_socket_BindSocket(struct brl_socket_TSocket_obj* bbt_socket,BBINT bbt_localPort,BBINT bbt_family){
	return (bbt_socket)->clas->m_Bind_ii((struct brl_socket_TSocket_obj*)bbt_socket,bbt_localPort,bbt_family);
}
BBINT brl_socket_ConnectSocket(struct brl_socket_TSocket_obj* bbt_socket,struct pub_stdc_TAddrInfo_obj* bbt_AddrInfo){
	return (bbt_socket)->clas->m_Connect_TTAddrInfo((struct brl_socket_TSocket_obj*)bbt_socket,(struct pub_stdc_TAddrInfo_obj*)bbt_AddrInfo);
}
BBINT brl_socket_SocketListen(struct brl_socket_TSocket_obj* bbt_socket,BBINT bbt_backlog){
	return (bbt_socket)->clas->m_Listen_i((struct brl_socket_TSocket_obj*)bbt_socket,bbt_backlog);
}
struct brl_socket_TSocket_obj* brl_socket_SocketAccept(struct brl_socket_TSocket_obj* bbt_socket,BBINT bbt_timeout){
	return (struct brl_socket_TSocket_obj*)(bbt_socket)->clas->m_Accept_iTTSockaddrStorage((struct brl_socket_TSocket_obj*)bbt_socket,bbt_timeout,(struct pub_stdc_TSockaddrStorage_obj*)&bbNullObject);
}
BBINT brl_socket_SocketConnected(struct brl_socket_TSocket_obj* bbt_socket){
	return (bbt_socket)->clas->m_Connected((struct brl_socket_TSocket_obj*)bbt_socket);
}
BBINT brl_socket_SocketReadAvail(struct brl_socket_TSocket_obj* bbt_socket){
	return (bbt_socket)->clas->m_ReadAvail((struct brl_socket_TSocket_obj*)bbt_socket);
}
BBSTRING brl_socket_SocketLocalIP(struct brl_socket_TSocket_obj* bbt_socket){
	return (bbt_socket)->clas->m_LocalIp((struct brl_socket_TSocket_obj*)bbt_socket);
}
BBINT brl_socket_SocketLocalPort(struct brl_socket_TSocket_obj* bbt_socket){
	return (bbt_socket)->clas->m_LocalPort((struct brl_socket_TSocket_obj*)bbt_socket);
}
BBSTRING brl_socket_SocketRemoteIP(struct brl_socket_TSocket_obj* bbt_socket){
	return (bbt_socket)->clas->m_RemoteIp((struct brl_socket_TSocket_obj*)bbt_socket);
}
BBINT brl_socket_SocketRemotePort(struct brl_socket_TSocket_obj* bbt_socket){
	return (bbt_socket)->clas->m_RemotePort((struct brl_socket_TSocket_obj*)bbt_socket);
}
BBSTRING brl_socket_DottedIP(BBINT bbt_ip){
	return bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt((unsigned int)(bbt_ip)>>(unsigned int)(24)),&_s1),bbStringFromInt((unsigned int)(((unsigned int)(bbt_ip)>>(unsigned int)(16)))&(unsigned int)(255))),&_s1),bbStringFromInt((unsigned int)(((unsigned int)(bbt_ip)>>(unsigned int)(8)))&(unsigned int)(255))),&_s1),bbStringFromInt((unsigned int)(bbt_ip)&(unsigned int)(255)));
}
BBINT brl_socket_DottedIPToInt(BBSTRING bbt_addr){
	BBARRAY bbt_parts=bbStringSplit((BBSTRING)bbt_addr,&_s1);
	BBLONG bbt_num=0LL;
	{
		BBINT bbt_i=0;
		BBINT bbt_=(bbt_parts->scales[0]);
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			BBINT bbt_power=(3-bbt_i);
			bbt_num+=(((BBLONG)(bbStringToInt((BBSTRING)((BBSTRING*)BBARRAYDATA(bbt_parts,1))[((BBUINT)bbt_i)]) % 256))*bbLongPow(256LL, ((BBLONG)bbt_power)));
		}
	}
	return ((BBINT)bbt_num);
}
BBINT brl_socket_InetPton(BBINT bbt_family,BBSTRING bbt_src,BBBYTE* bbt_dst){
	return inet_pton_(bbt_family,bbt_src,bbt_dst);
}
BBARRAY brl_socket_AddrInfo(BBSTRING bbt_host,BBSTRING bbt_service,BBINT bbt_family){
	return getaddrinfo_(bbt_host,bbt_service,bbt_family);
}
BBARRAY brl_socket_AddrInfo2(BBSTRING bbt_host,BBSTRING bbt_service,struct pub_stdc_TAddrInfo_obj* bbt_hints){
	return getaddrinfo_hints(bbt_host,bbt_service,bbt_hints->_pub_stdc_taddrinfo_infoptr );
}
BBARRAY brl_socket_HostIps(BBSTRING bbt_HostName,BBINT bbt_family){
	BBARRAY bbt_addr=brl_socket_AddrInfo(bbt_HostName,&_s2,bbt_family);
	BBARRAY bbt_ips=bbArrayNew1D("$", (bbt_addr->scales[0]));
	{
		BBINT bbt_i=0;
		BBINT bbt_=(bbt_addr->scales[0]);
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			struct pub_stdc_TAddrInfo_obj* bbt_2;
			((BBSTRING*)BBARRAYDATA(bbt_ips,1))[((BBUINT)bbt_i)]=((bbt_2 = ((struct pub_stdc_TAddrInfo_obj**)BBARRAYDATA(bbt_addr,1))[((BBUINT)bbt_i)])->clas)->m_HostIp((struct pub_stdc_TAddrInfo_obj*)bbt_2);
		}
	}
	return bbt_ips;
}
BBSTRING brl_socket_HostIp(BBSTRING bbt_HostName,BBINT bbt_index,BBINT bbt_family){
	if(bbt_index<0){
		return &bbEmptyString;
	}
	BBARRAY bbt_ips=brl_socket_HostIps(bbt_HostName,bbt_family);
	if(bbt_index<(bbt_ips->scales[0])){
		return ((BBSTRING*)BBARRAYDATA(bbt_ips,1))[((BBUINT)bbt_index)];
	}
	return &bbEmptyString;
}
BBSTRING brl_socket_HostName(BBSTRING bbt_HostIp,BBINT bbt_family){
	BBARRAY bbt_addr=brl_socket_AddrInfo(bbt_HostIp,&_s2,bbt_family);
	if(bbt_addr!= &bbEmptyArray){
		struct pub_stdc_TAddrInfo_obj* bbt_;
		return ((bbt_ = ((struct pub_stdc_TAddrInfo_obj**)BBARRAYDATA(bbt_addr,1))[0U])->clas)->m_HostName((struct pub_stdc_TAddrInfo_obj*)bbt_);
	}
	return &bbEmptyString;
}
static int __bb_brl_socket_socket_inited = 0;
int __bb_brl_socket_socket(){
	if (!__bb_brl_socket_socket_inited) {
		__bb_brl_socket_socket_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_pub_stdc_stdc();
		bbObjectRegisterType((BBCLASS)&brl_socket_TSocketException);
		bbObjectRegisterType((BBCLASS)&brl_socket_TSocket);
		return 0;
	}
	return 0;
}