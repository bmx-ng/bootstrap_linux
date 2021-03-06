
#include <stdio.h>
#include <dirent.h>

#if _WIN32
#define _USE_32BIT_TIME_T 
#endif
#include <sys/types.h>
#include <sys/stat.h>

#if _WIN32

#include <time.h>
#include <direct.h>

#define WIN32_LEAN_AND_MEAN
#include <winsock2.h>
#include <windows.h>
#include <ws2tcpip.h>

extern int bmx_inet_pton(int af, const char *src, void *dst);
#define inet_pton bmx_inet_pton

extern int _bbusew;

#else

#include <time.h>
#include <unistd.h>
#include <limits.h>	//PATH_MAX
#include <sys/time.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>

#endif

#include <brl.mod/blitz.mod/blitz.h>
 
FILE* stdin_;
FILE* stdout_;
FILE* stderr_;

extern BBObject * pub_stdc_TAddrInfo__Create(struct addrinfo * info, int owner);
extern BBArray * pub_stdc_TAddrInfo__CreateArray(int count);
extern void pub_stdc_TAddrInfo__SetAtIndex(BBArray * arr, BBObject * info, int index);


#if _WIN32

int getchar_(){
	if( _bbusew ) return getwchar();
	return getchar();
}

int puts_( BBString *str ){
	if( _bbusew ) {
		BBChar *p=bbStringToWString( str );
		int res = _putws( p );
		bbMemFree(p);
		return res;
	}
	char *p=bbStringToCString( str );
	int res = puts( p );
	bbMemFree(p);
	return res;
}

int putenv_( BBString *str ){
	if( _bbusew ) {
		BBChar *p=bbStringToWString( str );
		int res = _wputenv( p );
		bbMemFree(p);
		return res;
	}
	char *p=bbStringToCString( str );
	int res = putenv( p );
	bbMemFree(p);
	return res;
}

BBString *getenv_( BBString *str ){
	if( _bbusew ) {
		BBChar *p=bbStringToWString( str );
		BBString * res = bbStringFromWString( _wgetenv( p ) );
		bbMemFree(p);
		return res;
	}
	char *p=bbStringToCString( str );
	BBString * res = bbStringFromCString( getenv( p ) );
	bbMemFree(res);
	return res;
}

int fputs_( BBString *str,FILE* file ){
	if( _bbusew ) {
		BBChar *p=bbStringToWString( str );
		int res = fputws( p,file );
		bbMemFree(p);
		return res;
	}
	char *p=bbStringToCString( str );
	int res = fputs( p,file );
	bbMemFree(p);
	return res;
}

int chdir_( BBString *path ){
	if( _bbusew ) {
		BBChar *p=bbStringToWString( path );
		int res = _wchdir( p );
		bbMemFree(p);
		return res;
	}
	char *p=bbStringToCString( path );
	int res = _chdir( p );
	bbMemFree(p);
	return res;
}

FILE* fopen_( BBString *file,BBString *mode ){
	if( _bbusew ) {
		BBChar *f=bbStringToWString( file );
		BBChar *m=bbStringToWString( mode );
		FILE * res = _wfopen( f, m );
		bbMemFree(m);
		bbMemFree(f);
		return res;
	}
	char *f=bbStringToCString( file );
	char *m=bbStringToCString( mode );
	FILE * res = fopen( f, m );
	bbMemFree(m);
	bbMemFree(f);
	return res;
}

BBString *getcwd_(){
	if( _bbusew ){
		wchar_t buf[MAX_PATH];
		_wgetcwd( buf,MAX_PATH );
		return bbStringFromWString( buf );
	}else{
		char buf[MAX_PATH];
		_getcwd( buf,MAX_PATH );
		return bbStringFromCString( buf );
	}
	return &bbEmptyString;
}

int chmod_( BBString *path,int mode ){
	if( _bbusew ) {
		BBChar *p=bbStringToWString( path );
		int res = _wchmod( p,mode );
		bbMemFree(p);
		return res;
	}
	char *p=bbStringToCString( path );
	int res = _chmod( p,mode );
	bbMemFree(p);
	return res;
}

int mkdir_( BBString *path,int mode ){
	if( _bbusew ) {
		BBChar *p=bbStringToWString( path );
		int res = _wmkdir( p );
		bbMemFree(p);
		return res;
	}
	char *p=bbStringToCString( path );
	int res = _mkdir( p );
	bbMemFree(p);
	return res;
}

int rmdir_( BBString *path ){
	if( _bbusew ) {
		BBChar *p=bbStringToWString( path );
		int res = _wrmdir( p );
		bbMemFree(p);
		return res;
	}
	char *p=bbStringToCString( path );
	int res = _rmdir( p );
	bbMemFree(p);
	return res;
}

int rename_( BBString *src,BBString *dst ){
	if( _bbusew ) {
		BBChar *s=bbStringToWString( src );
		BBChar *d=bbStringToWString( dst );
		int res = _wrename( s, d );
		bbMemFree(d);
		bbMemFree(s);
		return res;
	}
	char *s=bbStringToCString( src );
	char *d=bbStringToCString( dst );
	int res = rename( s, d );
	bbMemFree(d);
	bbMemFree(s);
	return res;
}

void remove_( BBString *path ){
	chmod_( path,0x1b6 );
	if( _bbusew ){
		BBChar *p=bbStringToWString( path );
		_wremove( p );
		bbMemFree(p);
	}else{
		char *p=bbStringToCString( path );
		remove( p );
		bbMemFree(p);
	}
}

void* opendir_( BBString *path ){
	if( _bbusew ) {
		BBChar *p=bbStringToWString( path );
		void * res = _wopendir( p );
		bbMemFree(p);
		return res;
	}
	char *p=bbStringToCString( path );
	void * res = opendir( p );
	bbMemFree(p);
	return res;
}

int closedir_( void* dir ){
	if( _bbusew ) return _wclosedir( (_WDIR*)dir );
	return closedir( (DIR*)dir );
}

BBString *readdir_( void* dir ){
	if( _bbusew ){
		struct _wdirent *t=_wreaddir( (_WDIR*)dir );
		return t ? bbStringFromWString( t->d_name ) : &bbEmptyString;
	}
	struct dirent *t=readdir( (DIR*)dir );
	return t ? bbStringFromCString( t->d_name ) : &bbEmptyString;
}

int stat_( BBString *path,int *t_mode,BBLONG *t_size,int *t_mtime,int *t_ctime ){
	int i;
	struct _stati64 st;
	
	for( i=0;i<path->length;++i ){
		if( path->buf[i]=='<' || path->buf[i]=='>' ) return -1;
	}
	
	if( _bbusew ){
		BBChar *p = bbStringToWString(path);
		if( _wstati64( p,&st ) ) {
			bbMemFree(p);
			return -1;
		}
		bbMemFree(p);
	}else{
		char *p = bbStringToCString(path);
		if( _stati64( p,&st ) ) {
			bbMemFree(p);
			return -1;
		}
		bbMemFree(p);
	}

	*t_mode=st.st_mode;
	*t_size=st.st_size;
	*t_mtime=st.st_mtime;
	*t_ctime=st.st_ctime;
	return 0;
}

int system_( BBString *cmd ){
	int res;
	PROCESS_INFORMATION pi={0};
	
	if( _bbusew ){
		STARTUPINFOW si={sizeof(si)};
		wchar_t *tmp = bbStringToWString(cmd);
	
		if( CreateProcessW( 0,tmp,0,0,1,CREATE_DEFAULT_ERROR_MODE,0,0,&si,&pi ) ){
			WaitForSingleObject( pi.hProcess,INFINITE );
	
			res=GetExitCodeProcess( pi.hProcess,(DWORD*)&res ) ? res : -1;
	
			CloseHandle( pi.hProcess );
			CloseHandle( pi.hThread );
		}else{
			res=GetLastError();
		}
		bbMemFree(tmp);
		
	} else {
		STARTUPINFO si={sizeof(si)};
		char *tmp = bbStringToCString(cmd);
	
		if( CreateProcessA( 0,tmp,0,0,1,CREATE_DEFAULT_ERROR_MODE,0,0,&si,&pi ) ){
			WaitForSingleObject( pi.hProcess,INFINITE );
	
			res=GetExitCodeProcess( pi.hProcess,(DWORD*)&res ) ? res : -1;
	
			CloseHandle( pi.hProcess );
			CloseHandle( pi.hThread );
		}else{
			res=GetLastError();
		}
		bbMemFree(tmp);
	}
	return res;
}

int fseek_( FILE* stream, BBLONG offset, int origin ) {
	// flush stream when using _fileno
	fflush(stream);
	int f = _fileno(stream);
	return (_lseeki64(f, offset, origin) >= 0) ? 0 : 1;
}

BBLONG ftell_( FILE* stream ) {
	// flush stream when using _fileno
	fflush(stream);
	int f = _fileno(stream);
	return _telli64(f);
}

int ftruncate_(FILE* stream, BBLONG size) {
	return _chsize_s(fileno(stream), size);
}

int clock_gettime_(int id, struct timespec * spec) {
	__int64 ftime;
	GetSystemTimeAsFileTime((FILETIME*)&ftime);
	ftime -= 116444736000000000LL;
	spec->tv_sec = ftime / 10000000LL;
	spec->tv_nsec = ftime % 10000000LL *100;
	return 0;
}

#else

int getchar_(){
	return getchar();
}

int puts_( BBString *str ){
	char *p = bbStringToUTF8String( str );
	int res = puts( p );
	bbMemFree(p);
	return res;
}

int putenv_( BBString *str ){
	char *t=bbStringToUTF8String( str );
	char *p=(char*)malloc( strlen(t)+1 );
	strcpy( p,t );
	bbMemFree(t);
	return putenv( p );
}

BBString *getenv_( BBString *str ){
	char *p = bbStringToUTF8String( str );
	BBString * res = bbStringFromUTF8String( getenv( p ) );
	bbMemFree(p);
	return res;
}

FILE* fopen_( BBString *file,BBString *mode ){
	char *f = bbStringToUTF8String( file );
	char *m = bbStringToUTF8String( mode );
	FILE * res = fopen( f, m );
	bbMemFree(m);
	bbMemFree(f);
	return res;
}

int fputs_( BBString *str,FILE* file ){
	char *p = bbStringToUTF8String( str );
	int res = fputs( p,file );
	bbMemFree(p);
	return res;
}

int chdir_( BBString *path ){
	char *p = bbStringToUTF8String( path );
	int res = chdir( p );
	bbMemFree(p);
	return res;
}

BBString *getcwd_(){
	char buf[PATH_MAX];
	getcwd( buf,PATH_MAX );
	return bbStringFromUTF8String( buf );
}

int chmod_( BBString *path,int mode ){
	char *p = bbStringToUTF8String( path );
	int res = chmod( p, mode );
	bbMemFree(p);
	return res;
}

int mkdir_( BBString *path,int mode ){
	char *p = bbStringToUTF8String( path );
	int res = mkdir( p, mode );
	bbMemFree(p);
	return res;
}

int rmdir_( BBString *path ){
	char *p = bbStringToUTF8String( path );
	int res = rmdir( p );
	bbMemFree(p);
	return res;
}

int rename_( BBString *src,BBString *dst ){
	char *s = bbStringToUTF8String( src );
	char *d = bbStringToUTF8String( dst );
	int res = rename( s, d );
	bbMemFree(d);
	bbMemFree(s);
	return res;
}

int remove_( BBString *path ){
	char *p = bbStringToUTF8String( path );
	int res = remove( p );
	bbMemFree(p);
	return res;
}

DIR* opendir_( BBString *path ){
	char *p = bbStringToUTF8String( path );
	DIR * res = opendir( p );
	bbMemFree(p);
	return res;
}

BBString *readdir_( DIR* dir ){
	struct dirent *t=readdir( dir );
	return t ? bbStringFromUTF8String( t->d_name ) : &bbEmptyString;
}

int closedir_( DIR* dir ){
	return closedir( dir );
}

int stat_( BBString *path,int *t_mode,BBLONG *t_size,int *t_mtime,int *t_ctime ){
	struct stat st;
	char *p = bbStringToUTF8String( path );
	if( stat( p,&st ) ) {
		bbMemFree(p);
		return -1;
	}
	bbMemFree(p);
	*t_mode=st.st_mode;
	*t_size=st.st_size;
	*t_mtime=st.st_mtime;
	*t_ctime=st.st_ctime;
	return 0;
}

int system_( BBString *cmd ){
	char *p = bbStringToUTF8String( cmd );
	int res = system( p );
	bbMemFree(p);
	return res;
}

int fseek_( FILE* stream, BBLONG offset, int origin ) {
	return fseeko(stream, offset, origin);
}

BBLONG ftell_( FILE* stream ) {
	return ftello(stream);
}

int ftruncate_(FILE* stream, BBLONG size) {
	return ftruncate(fileno(stream), size);
}
#ifndef __APPLE__
int clock_gettime_(int id, struct timespec * spec) {
	return clock_gettime(id, spec);
}
#endif
#endif

#ifdef __APPLE__
#include <mach/mach_time.h>

BBULONG mach_absolute_time_ns() {
	static mach_timebase_info_data_t s_timebase_info;
	static int inited = 0;
	if (!inited) {
        mach_timebase_info(&s_timebase_info);
    };
	return (mach_absolute_time() * s_timebase_info.numer) / s_timebase_info.denom;
}
#endif

int fclose_( FILE* stream ) {
	return fclose(stream);
}

int feof_(FILE* stream) {
	return feof(stream);
}

int fflush_( FILE* stream ) {
	return fflush(stream);
}

int htons_( int n ){
	return htons( n );
}

int ntohs_( int n ){
	return ntohs( n );
}

int htonl_( int n ){
	return htonl( n );
}

int ntohl_( int n ){
	return ntohl( n );
}

int socket_( int addr_type,int comm_type,int protocol ){
#if _WIN32
	SOCKET s = socket( addr_type,comm_type,protocol );
	return (s != INVALID_SOCKET) ? s :-1;
#else
	return socket( addr_type,comm_type,protocol );
#endif
}

void closesocket_( int s ){
#if _WIN32
	closesocket( s );
#else
	close( s );
#endif
}

int bmx_stdc_convertAFFamily(int family) {
	switch (family) {
		case 2:
			return AF_INET;
		case 10:
			return AF_INET6;
	}
	
	// unmapped
	return family;
}

int bind_( int socket,int addr_type,int port ){
	int r;
	
	//	if ( addr_type!=AF_INET ) return -1;

	switch(addr_type) {
		case AF_INET:
		{
			struct sockaddr_in sa;
			memset( &sa,0,sizeof(sa) );
			sa.sin_family= bmx_stdc_convertAFFamily(addr_type);
			sa.sin_addr.s_addr=htonl(INADDR_ANY);
			sa.sin_port=htons( port );
			return bind( socket,(void*)&sa,sizeof(sa) );
		}
		case AF_INET6:
		{
			struct sockaddr_in6 sa;
			memset( &sa,0,sizeof(sa) );
			sa.sin6_family= bmx_stdc_convertAFFamily(addr_type);
			sa.sin6_addr=in6addr_any;
			sa.sin6_port=htons( port );
			return bind( socket,(void*)&sa,sizeof(sa) );
		}
		default:
			return -1;
	}
	
}

int bmx_stdc_bind_info(int socket, struct addrinfo * info) {
	return bind(socket, info->ai_addr, info->ai_addrlen);
}

char *gethostbyaddr_( void *addr,int addr_len,int addr_type ){
	return NULL;
	//struct hostent *e=gethostbyaddr( addr,addr_len,addr_type );
	//return e ? e->h_name : 0;
}

BBARRAY getaddrinfo_hints(BBString *name, BBString *service, struct addrinfo * hints) {
	struct addrinfo * info;
	struct addrinfo * ip;
	
	char * n = bbStringToUTF8String(name);
	char * s = 0;
	if (service != &bbEmptyString) {
		s = bbStringToUTF8String(service);
	}
	
	int res = getaddrinfo(n, s, hints, &info);
	
	bbMemFree(s);
	bbMemFree(n);
	
	if (res != 0) {
		return &bbEmptyArray;
	}
	
	int count = 0;
	for (ip = info; ip != NULL; ip = ip->ai_next) {
		count++;
	}
	
	BBArray * arr = pub_stdc_TAddrInfo__CreateArray(count);

	count = 0;
	for (ip = info; ip != NULL; ip = ip->ai_next) {

		BBObject * obj = pub_stdc_TAddrInfo__Create(ip, count == 0);
		
		pub_stdc_TAddrInfo__SetAtIndex(arr, obj, count);

		count++;
	}
	
	return arr; 
}

BBARRAY getaddrinfo_(BBString *name, BBString *service, int family) {
	struct addrinfo hints;
	
	memset(&hints, 0, sizeof(struct addrinfo));
	
	hints.ai_family = bmx_stdc_convertAFFamily(family);
	
	return getaddrinfo_hints(name, service, &hints);
}

struct addrinfo * bmx_stdc_addrinfo_new() {
	return (struct addrinfo *)calloc(1, sizeof(struct addrinfo));
}

void freeaddrinfo_(struct addrinfo * info ) {
	freeaddrinfo(info);
}

int connect_( int socket, struct addrinfo * info ){
	return connect( socket, info->ai_addr, info->ai_addrlen);
}

int listen_( int socket,int backlog ){
	return listen( socket,backlog );
}

int accept_( int socket,const char *addr,unsigned int *addr_len ){
	return accept( socket,(void*)addr,addr_len );
}

int bmx_stdc_accept_(int socket, struct sockaddr_storage * storage) {
	if (storage) {
		int size = sizeof(struct sockaddr_storage );
		return accept(socket, (struct sockaddr *)storage, &size);
	} else {
		return accept(socket, NULL, NULL);
	}
}


int select_( int n_read,int *r_socks,int n_write,int *w_socks,int n_except,int *e_socks,int millis ){

	int i,n,r;
	struct timeval tv,*tvp;
	fd_set r_set,w_set,e_set;
	
	n=-1;
	
	FD_ZERO( &r_set );
	for( i=0;i<n_read;++i ){
		FD_SET( r_socks[i],&r_set );
		if( r_socks[i]>n ) n=r_socks[i];
	}
	FD_ZERO( &w_set );
	for( i=0;i<n_write;++i ){
		FD_SET( w_socks[i],&w_set );
		if( w_socks[i]>n ) n=w_socks[i];
	}
	FD_ZERO( &e_set );
	for( i=0;i<n_except;++i ){
		FD_SET( e_socks[i],&e_set );
		if( e_socks[i]>n ) n=e_socks[i];
	}
	
	if( millis<0 ){
		tvp=0;
	}else{
		tv.tv_sec=millis/1000;
		tv.tv_usec=(millis%1000)*1000;
		tvp=&tv;
	}
	
	r=select( n+1,&r_set,&w_set,&e_set,tvp );
	if( r<0 ) return r;
	
	for( i=0;i<n_read;++i ){
		if( !FD_ISSET(r_socks[i],&r_set) ) r_socks[i]=0;
	}
	for( i=0;i<n_write;++i ){
		if( !FD_ISSET(w_socks[i],&w_set) ) w_socks[i]=0;
	}
	for( i=0;i<n_except;++i ){
		if( !FD_ISSET(e_socks[i],&e_set) ) e_socks[i]=0;
	}
	return r;
}

ssize_t send_( int socket,const char *buf,size_t size,int flags ){
	return send( socket,buf,size,flags );
}

int sendto_( int socket,const char *buf,int size,int flags,const char * dest_ip,int dest_port, int addr_type ){
	addr_type = bmx_stdc_convertAFFamily(addr_type);
	
	switch (addr_type) {
		case AF_INET:
		{
			struct	sockaddr_in sa;
			memset( &sa,0,sizeof(sa) );
			sa.sin_family=AF_INET;
#ifdef _WIN32
			sa.sin_addr.s_addr=inet_addr( dest_ip );
#else
			inet_pton(AF_INET, dest_ip, &(sa.sin_addr));
#endif
//			memcpy( &sa.sin_addr,dest_ip,4 );
			sa.sin_port=htons( dest_port );
			return sendto( socket,buf,size,flags,(void*)&sa,sizeof(sa));
		}
		case AF_INET6:
		{
			struct sockaddr_in6 sa;
			memset( &sa,0,sizeof(sa) );
			sa.sin6_family=AF_INET6;
			sa.sin6_port=htons( dest_port );
			memcpy( &sa.sin6_addr, dest_ip,16 );
		
			return sendto( socket,buf,size,flags,(void*)&sa,sizeof(sa));
		}
	}
	return 0;
}

ssize_t recv_( int socket,char *buf,size_t size,int flags ){
	return recv( socket,buf,size,flags );
}

int recvfrom_( int socket,char *buf,int size,int flags,int *_ip,int *_port){
	struct	sockaddr_in sa;
	int		sasize;
	int		count;
	memset( &sa,0,sizeof(sa) );
	sasize=sizeof(sa);
	count=recvfrom(socket,buf,size,flags,(void*)&sa,&sasize);
	*_ip=ntohl_(sa.sin_addr.s_addr);
	*_port=ntohs_(sa.sin_port);
	return count;
}

int setsockopt_( int socket,int level,int optname,const void *optval,int count){
	return setsockopt( socket,level,optname,optval,count);
}

int getsockopt_( int socket,int level,int optname,void *optval,int *count){
	return getsockopt( socket,level,optname,optval,count);
}

int shutdown_( int socket,int how ){
	return shutdown( socket,how );
}

int getsockname_( int socket,void *addr,int *len ){
	return getsockname( socket,addr,len );
}

int getpeername_( int socket,void *addr,int *len ){
	return getpeername( socket,addr,len );
}

int time_( void *ttime ){
	return (int)time( (time_t*)ttime );
}

void *localtime_( void *ttime ){
	return localtime( (time_t*)ttime );
}

int strftime_( char *buf,int size,BBString *fmt,void *ttime ){
	char *p = bbStringToCString( fmt );
	int res = strftime( buf,size,p,ttime );
	bbMemFree(p);
	return res;
}

int bmx_stdc_addrinfo_flags(struct addrinfo * info) {
	return info->ai_flags;
}

int bmx_stdc_addrinfo_family(struct addrinfo * info) {
	return info->ai_family;
}

int bmx_stdc_addrinfo_socktype(struct addrinfo * info) {
	return info->ai_socktype;
}

int bmx_stdc_addrinfo_protocol(struct addrinfo * info) {
	return info->ai_protocol;
}

int bmx_stdc_addrinfo_addrlen(struct addrinfo * info) {
	return info->ai_addrlen;
}

struct sockaddr * bmx_stdc_addrinfo_addr(struct addrinfo * info) {
	return info->ai_addr;
}

BBString * bmx_stdc_addrinfo_canonname(struct addrinfo * info) {
	return bbStringFromUTF8String(info->ai_canonname);
}

void bmx_stdc_addrinfo_setflags(struct addrinfo * info, int flags) {
	info->ai_flags = flags;
}

void bmx_stdc_addrinfo_setfamily(struct addrinfo * info, int family) {
	info->ai_family = bmx_stdc_convertAFFamily(family);
}

void bmx_stdc_addrinfo_setsocktype(struct addrinfo * info, int sockType) {
	info->ai_socktype = sockType;
}

void bmx_stdc_addrinfo_setprotocol(struct addrinfo * info, int protocol) {
	info->ai_protocol = protocol;
}

int bmx_stdc_convertNIFlags(int flags) {
	int niFlags = 0;
	
	if (flags & 0x0001) {
		niFlags |= NI_DGRAM;
	}

	if (flags & 0x0002) {
		niFlags |= NI_NAMEREQD;
	}

	if (flags & 0x0004) {
		niFlags |= NI_NOFQDN;
	}

	if (flags & 0x0008) {
		niFlags |= NI_NUMERICHOST;
	}

	if (flags & 0x0010) {
		niFlags |= NI_NUMERICSERV;
	}
	
	return niFlags;
}

BBString * bmx_stdc_addrinfo_hostname(struct addrinfo * info, int flags) {
	char host[256];
	int res = getnameinfo(info->ai_addr, info->ai_addrlen, host, 256, 0, 0, bmx_stdc_convertNIFlags(flags));
	if (res != 0) {
		return &bbEmptyString;
	}
	return bbStringFromUTF8String(host);
}

int inet_pton_(int family, BBString * src, void * dst) {
	char * s = bbStringToCString(src);
	int res = inet_pton(bmx_stdc_convertAFFamily(family), s, dst);
	bbMemFree(s);
	return res;
}

struct sockaddr_storage * bmx_stdc_sockaddrestorage_new() {
	return calloc(1, sizeof(struct sockaddr_storage));
}

BBString * bmx_stdc_sockaddrestorage_address(struct sockaddr_storage * storage) {

	BBString * address = &bbEmptyString;
	
#if _WIN32

	TCHAR add[256];
	typedef LPTSTR (__stdcall RTLIPV6ADDRESSTOSTRING)(const IN6_ADDR*, PTSTR);
	typedef LPTSTR (__stdcall RTLIPV4ADDRESSTOSTRING)(const IN_ADDR*, PTSTR);
	
	HMODULE ntdll = GetModuleHandle("NTDLL.DLL");

	if (storage->ss_family == AF_INET) {
		RTLIPV4ADDRESSTOSTRING* RtlIpv4AddressToStringFunc = (RTLIPV4ADDRESSTOSTRING*)GetProcAddress(ntdll, "RtlIpv4AddressToStringW");

		RtlIpv4AddressToStringFunc(&((struct sockaddr_in*)storage)->sin_addr, add);
	} else {
		RTLIPV6ADDRESSTOSTRING* RtlIpv6AddressToStringFunc = (RTLIPV6ADDRESSTOSTRING*)GetProcAddress(ntdll, "RtlIpv6AddressToStringW");

		RtlIpv6AddressToStringFunc(&((struct sockaddr_in6*)storage)->sin6_addr, add);
	}
	
	address = bbStringFromWString((BBChar*)add);

#else

	char add[256];

	if (storage->ss_family == AF_INET) {
		inet_ntop(storage->ss_family, &((struct sockaddr_in*)storage)->sin_addr, add, sizeof(add));
	} else {
		inet_ntop(storage->ss_family, &((struct sockaddr_in6*)storage)->sin6_addr, add, sizeof(add));
	}
	
	address = bbStringFromCString(add);

#endif

	return address;
}

int bmx_stdc_getsockname(int socket, int * port, BBSTRING * address) {
	struct sockaddr_storage storage;
	int len = sizeof(struct sockaddr_storage);
	
	int res = getsockname(socket, (struct sockaddr *)&storage, &len);
	
	if (res >= 0) {
		if (storage.ss_family == AF_INET) {
			*port = ntohs(((struct sockaddr_in*)&storage)->sin_port);
		} else {
			*port = ntohs(((struct sockaddr_in6*)&storage)->sin6_port);
		}
		
		*address = bmx_stdc_sockaddrestorage_address(&storage);
	}
	
	return res;
}

int bmx_stdc_getpeername(int socket, int * port, BBSTRING * address) {
	struct sockaddr_storage storage;
	int len = sizeof(struct sockaddr_storage);
	
	int res = getpeername(socket, (struct sockaddr *)&storage, &len);
	
	if (res >= 0) {
		if (storage.ss_family == AF_INET) {
			*port = ntohs(((struct sockaddr_in*)&storage)->sin_port);
		} else {
			*port = ntohs(((struct sockaddr_in6*)&storage)->sin6_port);
		}
		
		*address = bmx_stdc_sockaddrestorage_address(&storage);
	}
	
	return res;
}

#if _WIN32

static void CleanupWSA(){
	WSACleanup();
}

#endif

void bb_stdc_Startup(){

#if _WIN32

	WSADATA ws;
	
	WSAStartup( MAKEWORD(2, 2),&ws );
	atexit( CleanupWSA );

#endif

	stdin_=stdin;
	stdout_=stdout;
	stderr_=stderr;
	
}
