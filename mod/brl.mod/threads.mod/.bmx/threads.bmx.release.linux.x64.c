#include <brl.mod/threads.mod/.bmx/threads.bmx.release.linux.x64.h>
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
struct brl_threads_TThread_obj* brl_threads__mainThread;
struct brl_threads_TThreadData_obj* brl_threads__curThread;
void _brl_threads_TThread_New(struct brl_threads_TThread_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_threads_TThread;
	o->_brl_threads_tthread__running = 0;
	o->_brl_threads_tthread__handle = 0;
	o->_brl_threads_tthread__result = (BBOBJECT)(&bbNullObject);
	o->_brl_threads_tthread__entry = (&brl_blitz_NullFunctionError);
	o->_brl_threads_tthread__data = (BBOBJECT)(&bbNullObject);
}
void _brl_threads_TThread_Delete(struct brl_threads_TThread_obj* o) {
	if(o->_brl_threads_tthread__handle ){
		threads_DetachThread(o->_brl_threads_tthread__handle );
	}
	bbObjectDtor((BBOBJECT)o);
}
void _brl_threads_TThread_Detach(struct brl_threads_TThread_obj* o){
	if(!(o->_brl_threads_tthread__handle )){
		return;
	}
	threads_DetachThread(o->_brl_threads_tthread__handle );
	o->_brl_threads_tthread__handle =0;
}
BBOBJECT _brl_threads_TThread_Wait(struct brl_threads_TThread_obj* o){
	if(!(o->_brl_threads_tthread__handle )){
		return (BBOBJECT)o->_brl_threads_tthread__result ;
	}
	threads_WaitThread(o->_brl_threads_tthread__handle );
	o->_brl_threads_tthread__handle =0;
	return (BBOBJECT)o->_brl_threads_tthread__result ;
}
BBINT _brl_threads_TThread_Running(struct brl_threads_TThread_obj* o){
	return o->_brl_threads_tthread__running ;
}
struct brl_threads_TThread_obj* brl_threads_TThread_Create_TTThread_F_TObject_TObject_TObject(BBOBJECT(* bbt_entry)(BBOBJECT),BBOBJECT bbt_data){
	struct brl_threads_TThread_obj* bbt_thread=(struct brl_threads_TThread_obj*)(struct brl_threads_TThread_obj*)bbObjectNew((BBClass *)&brl_threads_TThread);
	bbt_thread->_brl_threads_tthread__entry =bbt_entry;
	bbt_thread->_brl_threads_tthread__data =(BBOBJECT)bbt_data;
	bbt_thread->_brl_threads_tthread__running =1;
	bbt_thread->_brl_threads_tthread__handle =threads_CreateThread(brl_threads_TThread__EntryStub_TObject_TObject,(BBOBJECT)bbt_thread);
	return (struct brl_threads_TThread_obj*)bbt_thread;
}
struct brl_threads_TThread_obj* brl_threads_TThread_Main_TTThread(){
	return (struct brl_threads_TThread_obj*)brl_threads__mainThread;
}
struct brl_threads_TThread_obj* brl_threads_TThread_Current_TTThread(){
	return (struct brl_threads_TThread_obj*)((struct brl_threads_TThread_obj*)bbObjectDowncast((BBOBJECT)(brl_threads__curThread)->clas->m_GetValue((struct brl_threads_TThreadData_obj*)brl_threads__curThread),(BBClass*)&brl_threads_TThread));
}
BBOBJECT brl_threads_TThread__EntryStub_TObject_TObject(BBOBJECT bbt_data){
	struct brl_threads_TThread_obj* bbt_thread=(struct brl_threads_TThread_obj*)((struct brl_threads_TThread_obj*)bbObjectDowncast((BBOBJECT)bbt_data,(BBClass*)&brl_threads_TThread));
	(brl_threads__curThread)->clas->m_SetValue_TObject((struct brl_threads_TThreadData_obj*)brl_threads__curThread,(BBOBJECT)bbt_thread);
	bbt_thread->_brl_threads_tthread__result =(BBOBJECT)bbt_thread->_brl_threads_tthread__entry((BBOBJECT)bbt_thread->_brl_threads_tthread__data );
	bbt_thread->_brl_threads_tthread__running =0;
	return (BBOBJECT)(&bbNullObject);
}
struct BBDebugScope_13 brl_threads_TThread_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TThread",
	{
		{
			BBDEBUGDECL_FIELD,
			"_running",
			"i",
			.field_offset=offsetof(struct brl_threads_TThread_obj,_brl_threads_tthread__running)
		},
		{
			BBDEBUGDECL_FIELD,
			"_handle",
			"*b",
			.field_offset=offsetof(struct brl_threads_TThread_obj,_brl_threads_tthread__handle)
		},
		{
			BBDEBUGDECL_FIELD,
			"_result",
			":Object",
			.field_offset=offsetof(struct brl_threads_TThread_obj,_brl_threads_tthread__result)
		},
		{
			BBDEBUGDECL_FIELD,
			"_entry",
			"(:Object):Object",
			.field_offset=offsetof(struct brl_threads_TThread_obj,_brl_threads_tthread__entry)
		},
		{
			BBDEBUGDECL_FIELD,
			"_data",
			":Object",
			.field_offset=offsetof(struct brl_threads_TThread_obj,_brl_threads_tthread__data)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_threads_TThread_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Detach",
			"()",
			.var_address=(void*)&_brl_threads_TThread_Detach
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Wait",
			"():Object",
			.var_address=(void*)&_brl_threads_TThread_Wait
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Running",
			"()i",
			.var_address=(void*)&_brl_threads_TThread_Running
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"((:Object):Object,:Object):TThread",
			.var_address=(void*)&brl_threads_TThread_Create_TTThread_F_TObject_TObject_TObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Main",
			"():TThread",
			.var_address=(void*)&brl_threads_TThread_Main_TTThread
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Current",
			"():TThread",
			.var_address=(void*)&brl_threads_TThread_Current_TTThread
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"_EntryStub",
			"(:Object):Object",
			.var_address=(void*)&brl_threads_TThread__EntryStub_TObject_TObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_threads_TThread brl_threads_TThread={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_threads_TThread_scope,
	sizeof(struct brl_threads_TThread_obj),
	(void (*)(BBOBJECT))_brl_threads_TThread_New,
	(void (*)(BBOBJECT))_brl_threads_TThread_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_threads_TThread_obj,_brl_threads_tthread__data) - sizeof(void*) + sizeof(BBOBJECT)
	,0
	,_brl_threads_TThread_Detach
	,_brl_threads_TThread_Wait
	,_brl_threads_TThread_Running
	,brl_threads_TThread_Create_TTThread_F_TObject_TObject_TObject
	,brl_threads_TThread_Main_TTThread
	,brl_threads_TThread_Current_TTThread
	,brl_threads_TThread__EntryStub_TObject_TObject
};

void _brl_threads_TThreadData_New(struct brl_threads_TThreadData_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_threads_TThreadData;
	o->_brl_threads_tthreaddata__handle = 0;
}
void _brl_threads_TThreadData_SetValue_TObject(struct brl_threads_TThreadData_obj* o,BBOBJECT bbt_value){
	bbThreadSetData(o->_brl_threads_tthreaddata__handle ,(BBOBJECT)bbt_value);
}
BBOBJECT _brl_threads_TThreadData_GetValue(struct brl_threads_TThreadData_obj* o){
	return (BBOBJECT)bbThreadGetData(o->_brl_threads_tthreaddata__handle );
}
struct brl_threads_TThreadData_obj* brl_threads_TThreadData_Create_TTThreadData(){
	BBINT bbt_handle=bbThreadAllocData();
	if(!(bbt_handle!=0)){
		return (struct brl_threads_TThreadData_obj*)&bbNullObject;
	}
	struct brl_threads_TThreadData_obj* bbt_data=(struct brl_threads_TThreadData_obj*)(struct brl_threads_TThreadData_obj*)bbObjectAtomicNew((BBClass *)&brl_threads_TThreadData);
	bbt_data->_brl_threads_tthreaddata__handle =bbt_handle;
	return (struct brl_threads_TThreadData_obj*)bbt_data;
}
struct BBDebugScope_5 brl_threads_TThreadData_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TThreadData",
	{
		{
			BBDEBUGDECL_FIELD,
			"_handle",
			"i",
			.field_offset=offsetof(struct brl_threads_TThreadData_obj,_brl_threads_tthreaddata__handle)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_threads_TThreadData_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetValue",
			"(:Object)",
			.var_address=(void*)&_brl_threads_TThreadData_SetValue_TObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetValue",
			"():Object",
			.var_address=(void*)&_brl_threads_TThreadData_GetValue
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"():TThreadData",
			.var_address=(void*)&brl_threads_TThreadData_Create_TTThreadData
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_threads_TThreadData brl_threads_TThreadData={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_threads_TThreadData_scope,
	sizeof(struct brl_threads_TThreadData_obj),
	(void (*)(BBOBJECT))_brl_threads_TThreadData_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_threads_TThreadData_obj,_brl_threads_tthreaddata__handle) - sizeof(void*) + sizeof(BBINT)
	,0
	,_brl_threads_TThreadData_SetValue_TObject
	,_brl_threads_TThreadData_GetValue
	,brl_threads_TThreadData_Create_TTThreadData
};

void _brl_threads_TMutex_New(struct brl_threads_TMutex_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_threads_TMutex;
	o->_brl_threads_tmutex__handle = 0;
}
void _brl_threads_TMutex_Delete(struct brl_threads_TMutex_obj* o) {
	if(o->_brl_threads_tmutex__handle ){
		threads_CloseMutex(o->_brl_threads_tmutex__handle );
	}
	bbObjectDtor((BBOBJECT)o);
}
void _brl_threads_TMutex_Close(struct brl_threads_TMutex_obj* o){
	if(!(o->_brl_threads_tmutex__handle )){
		return;
	}
	threads_CloseMutex(o->_brl_threads_tmutex__handle );
	o->_brl_threads_tmutex__handle =0;
}
void _brl_threads_TMutex_Lock(struct brl_threads_TMutex_obj* o){
	threads_LockMutex(o->_brl_threads_tmutex__handle );
}
BBINT _brl_threads_TMutex_TryLock(struct brl_threads_TMutex_obj* o){
	return threads_TryLockMutex(o->_brl_threads_tmutex__handle );
}
void _brl_threads_TMutex_Unlock(struct brl_threads_TMutex_obj* o){
	threads_UnlockMutex(o->_brl_threads_tmutex__handle );
}
struct brl_threads_TMutex_obj* brl_threads_TMutex_Create_TTMutex(){
	BBBYTE* bbt_handle=threads_CreateMutex();
	if(!(bbt_handle)){
		return (struct brl_threads_TMutex_obj*)&bbNullObject;
	}
	struct brl_threads_TMutex_obj* bbt_mutex=(struct brl_threads_TMutex_obj*)(struct brl_threads_TMutex_obj*)bbObjectAtomicNew((BBClass *)&brl_threads_TMutex);
	bbt_mutex->_brl_threads_tmutex__handle =bbt_handle;
	return (struct brl_threads_TMutex_obj*)bbt_mutex;
}
struct BBDebugScope_7 brl_threads_TMutex_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TMutex",
	{
		{
			BBDEBUGDECL_FIELD,
			"_handle",
			"*b",
			.field_offset=offsetof(struct brl_threads_TMutex_obj,_brl_threads_tmutex__handle)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_threads_TMutex_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Close",
			"()",
			.var_address=(void*)&_brl_threads_TMutex_Close
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Lock",
			"()",
			.var_address=(void*)&_brl_threads_TMutex_Lock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"TryLock",
			"()i",
			.var_address=(void*)&_brl_threads_TMutex_TryLock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Unlock",
			"()",
			.var_address=(void*)&_brl_threads_TMutex_Unlock
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"():TMutex",
			.var_address=(void*)&brl_threads_TMutex_Create_TTMutex
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_threads_TMutex brl_threads_TMutex={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_threads_TMutex_scope,
	sizeof(struct brl_threads_TMutex_obj),
	(void (*)(BBOBJECT))_brl_threads_TMutex_New,
	(void (*)(BBOBJECT))_brl_threads_TMutex_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_threads_TMutex_obj,_brl_threads_tmutex__handle) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_threads_TMutex_Close
	,_brl_threads_TMutex_Lock
	,_brl_threads_TMutex_TryLock
	,_brl_threads_TMutex_Unlock
	,brl_threads_TMutex_Create_TTMutex
};

void _brl_threads_TSemaphore_New(struct brl_threads_TSemaphore_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_threads_TSemaphore;
	o->_brl_threads_tsemaphore__handle = 0;
}
void _brl_threads_TSemaphore_Delete(struct brl_threads_TSemaphore_obj* o) {
	if(o->_brl_threads_tsemaphore__handle ){
		threads_CloseSemaphore(o->_brl_threads_tsemaphore__handle );
	}
	bbObjectDtor((BBOBJECT)o);
}
void _brl_threads_TSemaphore_Close(struct brl_threads_TSemaphore_obj* o){
	if(!(o->_brl_threads_tsemaphore__handle )){
		return;
	}
	threads_CloseSemaphore(o->_brl_threads_tsemaphore__handle );
	o->_brl_threads_tsemaphore__handle =0;
}
void _brl_threads_TSemaphore_Wait(struct brl_threads_TSemaphore_obj* o){
	threads_WaitSemaphore(o->_brl_threads_tsemaphore__handle );
}
BBINT _brl_threads_TSemaphore_TimedWait_i(struct brl_threads_TSemaphore_obj* o,BBINT bbt_millis){
	return threads_TimedWaitSemaphore(o->_brl_threads_tsemaphore__handle ,bbt_millis);
}
void _brl_threads_TSemaphore_Post(struct brl_threads_TSemaphore_obj* o){
	threads_PostSemaphore(o->_brl_threads_tsemaphore__handle );
}
struct brl_threads_TSemaphore_obj* brl_threads_TSemaphore_Create_TTSemaphore_i(BBINT bbt_count){
	BBBYTE* bbt_handle=threads_CreateSemaphore(bbt_count);
	if(!(bbt_handle)){
		return (struct brl_threads_TSemaphore_obj*)&bbNullObject;
	}
	struct brl_threads_TSemaphore_obj* bbt_semaphore=(struct brl_threads_TSemaphore_obj*)(struct brl_threads_TSemaphore_obj*)bbObjectAtomicNew((BBClass *)&brl_threads_TSemaphore);
	bbt_semaphore->_brl_threads_tsemaphore__handle =bbt_handle;
	return (struct brl_threads_TSemaphore_obj*)bbt_semaphore;
}
struct BBDebugScope_7 brl_threads_TSemaphore_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSemaphore",
	{
		{
			BBDEBUGDECL_FIELD,
			"_handle",
			"*b",
			.field_offset=offsetof(struct brl_threads_TSemaphore_obj,_brl_threads_tsemaphore__handle)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_threads_TSemaphore_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Close",
			"()",
			.var_address=(void*)&_brl_threads_TSemaphore_Close
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Wait",
			"()",
			.var_address=(void*)&_brl_threads_TSemaphore_Wait
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"TimedWait",
			"(i)i",
			.var_address=(void*)&_brl_threads_TSemaphore_TimedWait_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Post",
			"()",
			.var_address=(void*)&_brl_threads_TSemaphore_Post
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i):TSemaphore",
			.var_address=(void*)&brl_threads_TSemaphore_Create_TTSemaphore_i
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_threads_TSemaphore brl_threads_TSemaphore={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_threads_TSemaphore_scope,
	sizeof(struct brl_threads_TSemaphore_obj),
	(void (*)(BBOBJECT))_brl_threads_TSemaphore_New,
	(void (*)(BBOBJECT))_brl_threads_TSemaphore_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_threads_TSemaphore_obj,_brl_threads_tsemaphore__handle) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_threads_TSemaphore_Close
	,_brl_threads_TSemaphore_Wait
	,_brl_threads_TSemaphore_TimedWait_i
	,_brl_threads_TSemaphore_Post
	,brl_threads_TSemaphore_Create_TTSemaphore_i
};

void _brl_threads_TCondVar_New(struct brl_threads_TCondVar_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_threads_TCondVar;
	o->_brl_threads_tcondvar__handle = 0;
}
void _brl_threads_TCondVar_Delete(struct brl_threads_TCondVar_obj* o) {
	if(o->_brl_threads_tcondvar__handle ){
		threads_CloseCond(o->_brl_threads_tcondvar__handle );
	}
	bbObjectDtor((BBOBJECT)o);
}
void _brl_threads_TCondVar_Close(struct brl_threads_TCondVar_obj* o){
	if(!(o->_brl_threads_tcondvar__handle )){
		return;
	}
	threads_CloseCond(o->_brl_threads_tcondvar__handle );
	o->_brl_threads_tcondvar__handle =0;
}
void _brl_threads_TCondVar_Wait_TTMutex(struct brl_threads_TCondVar_obj* o,struct brl_threads_TMutex_obj* bbt_mutex){
	threads_WaitCond(o->_brl_threads_tcondvar__handle ,bbt_mutex->_brl_threads_tmutex__handle );
}
BBINT _brl_threads_TCondVar_TimedWait_TTMutexi(struct brl_threads_TCondVar_obj* o,struct brl_threads_TMutex_obj* bbt_mutex,BBINT bbt_millis){
	return threads_TimedWaitCond(o->_brl_threads_tcondvar__handle ,bbt_mutex->_brl_threads_tmutex__handle ,bbt_millis);
}
void _brl_threads_TCondVar_Signal(struct brl_threads_TCondVar_obj* o){
	threads_SignalCond(o->_brl_threads_tcondvar__handle );
}
void _brl_threads_TCondVar_Broadcast(struct brl_threads_TCondVar_obj* o){
	threads_BroadcastCond(o->_brl_threads_tcondvar__handle );
}
struct brl_threads_TCondVar_obj* brl_threads_TCondVar_Create_TTCondVar(){
	BBBYTE* bbt_handle=threads_CreateCond();
	if(!(bbt_handle)){
		return (struct brl_threads_TCondVar_obj*)&bbNullObject;
	}
	struct brl_threads_TCondVar_obj* bbt_condvar=(struct brl_threads_TCondVar_obj*)(struct brl_threads_TCondVar_obj*)bbObjectAtomicNew((BBClass *)&brl_threads_TCondVar);
	bbt_condvar->_brl_threads_tcondvar__handle =bbt_handle;
	return (struct brl_threads_TCondVar_obj*)bbt_condvar;
}
struct BBDebugScope_8 brl_threads_TCondVar_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TCondVar",
	{
		{
			BBDEBUGDECL_FIELD,
			"_handle",
			"*b",
			.field_offset=offsetof(struct brl_threads_TCondVar_obj,_brl_threads_tcondvar__handle)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_threads_TCondVar_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Close",
			"()",
			.var_address=(void*)&_brl_threads_TCondVar_Close
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Wait",
			"(:TMutex)",
			.var_address=(void*)&_brl_threads_TCondVar_Wait_TTMutex
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"TimedWait",
			"(:TMutex,i)i",
			.var_address=(void*)&_brl_threads_TCondVar_TimedWait_TTMutexi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Signal",
			"()",
			.var_address=(void*)&_brl_threads_TCondVar_Signal
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Broadcast",
			"()",
			.var_address=(void*)&_brl_threads_TCondVar_Broadcast
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"():TCondVar",
			.var_address=(void*)&brl_threads_TCondVar_Create_TTCondVar
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_threads_TCondVar brl_threads_TCondVar={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_threads_TCondVar_scope,
	sizeof(struct brl_threads_TCondVar_obj),
	(void (*)(BBOBJECT))_brl_threads_TCondVar_New,
	(void (*)(BBOBJECT))_brl_threads_TCondVar_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_threads_TCondVar_obj,_brl_threads_tcondvar__handle) - sizeof(void*) + sizeof(BBBYTE*)
	,0
	,_brl_threads_TCondVar_Close
	,_brl_threads_TCondVar_Wait_TTMutex
	,_brl_threads_TCondVar_TimedWait_TTMutexi
	,_brl_threads_TCondVar_Signal
	,_brl_threads_TCondVar_Broadcast
	,brl_threads_TCondVar_Create_TTCondVar
};

void _brl_threads_TCancellationTokenSource_New(struct brl_threads_TCancellationTokenSource_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_threads_TCancellationTokenSource;
}
BBINT _brl_threads_TCancellationTokenSource_IsClosed(struct brl_threads_TCancellationTokenSource_obj* o){
	return 0;
}
BBINT _brl_threads_TCancellationTokenSource_IsCancellationRequested(struct brl_threads_TCancellationTokenSource_obj* o){
	return 0;
}
struct BBDebugScope_3 brl_threads_TCancellationTokenSource_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TCancellationTokenSource",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_threads_TCancellationTokenSource_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsClosed",
			"()i",
			.var_address=(void*)&_brl_threads_TCancellationTokenSource_IsClosed
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsCancellationRequested",
			"()i",
			.var_address=(void*)&_brl_threads_TCancellationTokenSource_IsCancellationRequested
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_threads_TCancellationTokenSource brl_threads_TCancellationTokenSource={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_threads_TCancellationTokenSource_scope,
	sizeof(struct brl_threads_TCancellationTokenSource_obj),
	(void (*)(BBOBJECT))_brl_threads_TCancellationTokenSource_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,_brl_threads_TCancellationTokenSource_IsClosed
	,_brl_threads_TCancellationTokenSource_IsCancellationRequested
};

void _brl_threads_TCancellationToken_New(struct brl_threads_TCancellationToken_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_threads_TCancellationToken;
	o->_brl_threads_tcancellationtoken_source = (struct brl_threads_TCancellationTokenSource_obj*)(&bbNullObject);
}
BBINT _brl_threads_TCancellationToken_CanBeCancelled(struct brl_threads_TCancellationToken_obj* o){
	return (!((o->_brl_threads_tcancellationtoken_source )->clas->m_IsClosed((struct brl_threads_TCancellationTokenSource_obj*)o->_brl_threads_tcancellationtoken_source )!=0));
}
BBINT _brl_threads_TCancellationToken_IsCancellationRequested(struct brl_threads_TCancellationToken_obj* o){
	return (o->_brl_threads_tcancellationtoken_source )->clas->m_IsCancellationRequested((struct brl_threads_TCancellationTokenSource_obj*)o->_brl_threads_tcancellationtoken_source );
}
void _brl_threads_TCancellationToken_ThrowIfCancellationRequested(struct brl_threads_TCancellationToken_obj* o){
	if(((struct brl_threads_TCancellationToken_obj*)o)->clas->m_IsCancellationRequested((struct brl_threads_TCancellationToken_obj*)o)!=0){
		bbExThrow((BBObject *)(struct brl_threads_TCancellationException_obj*)bbObjectAtomicNew((BBClass *)&brl_threads_TCancellationException));
	}
}
struct BBDebugScope_5 brl_threads_TCancellationToken_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TCancellationToken",
	{
		{
			BBDEBUGDECL_FIELD,
			"source",
			":TCancellationTokenSource",
			.field_offset=offsetof(struct brl_threads_TCancellationToken_obj,_brl_threads_tcancellationtoken_source)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_threads_TCancellationToken_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CanBeCancelled",
			"()i",
			.var_address=(void*)&_brl_threads_TCancellationToken_CanBeCancelled
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsCancellationRequested",
			"()i",
			.var_address=(void*)&_brl_threads_TCancellationToken_IsCancellationRequested
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ThrowIfCancellationRequested",
			"()",
			.var_address=(void*)&_brl_threads_TCancellationToken_ThrowIfCancellationRequested
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_threads_TCancellationToken brl_threads_TCancellationToken={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_threads_TCancellationToken_scope,
	sizeof(struct brl_threads_TCancellationToken_obj),
	(void (*)(BBOBJECT))_brl_threads_TCancellationToken_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_threads_TCancellationToken_obj,_brl_threads_tcancellationtoken_source) - sizeof(void*) + sizeof(struct brl_threads_TCancellationTokenSource_obj*)
	,0
	,_brl_threads_TCancellationToken_CanBeCancelled
	,_brl_threads_TCancellationToken_IsCancellationRequested
	,_brl_threads_TCancellationToken_ThrowIfCancellationRequested
};

void _brl_threads_TCancellationException_New(struct brl_threads_TCancellationException_obj* o) {
	_brl_blitz_TBlitzException_New((struct brl_blitz_TBlitzException_obj*)o);
	o->clas = &brl_threads_TCancellationException;
}
struct BBDebugScope_1 brl_threads_TCancellationException_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TCancellationException",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_threads_TCancellationException_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_threads_TCancellationException brl_threads_TCancellationException={
	&brl_blitz_TBlitzException,
	bbObjectFree,
	(BBDebugScope*)&brl_threads_TCancellationException_scope,
	sizeof(struct brl_threads_TCancellationException_obj),
	(void (*)(BBOBJECT))_brl_threads_TCancellationException_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
};

struct brl_threads_TThread_obj* brl_threads_CreateThread(BBOBJECT(* bbt_entry)(BBOBJECT),BBOBJECT bbt_data){
	return (struct brl_threads_TThread_obj*)brl_threads_TThread_Create_TTThread_F_TObject_TObject_TObject(bbt_entry,(BBOBJECT)bbt_data);
}
struct brl_threads_TThread_obj* brl_threads_MainThread(){
	return (struct brl_threads_TThread_obj*)brl_threads__mainThread;
}
struct brl_threads_TThread_obj* brl_threads_CurrentThread(){
	return (struct brl_threads_TThread_obj*)((struct brl_threads_TThread_obj*)bbObjectDowncast((BBOBJECT)(brl_threads__curThread)->clas->m_GetValue((struct brl_threads_TThreadData_obj*)brl_threads__curThread),(BBClass*)&brl_threads_TThread));
}
void brl_threads_DetachThread(struct brl_threads_TThread_obj* bbt_thread){
	(bbt_thread)->clas->m_Detach((struct brl_threads_TThread_obj*)bbt_thread);
}
BBOBJECT brl_threads_WaitThread(struct brl_threads_TThread_obj* bbt_thread){
	return (BBOBJECT)(bbt_thread)->clas->m_Wait((struct brl_threads_TThread_obj*)bbt_thread);
}
BBINT brl_threads_ThreadRunning(struct brl_threads_TThread_obj* bbt_thread){
	return (bbt_thread)->clas->m_Running((struct brl_threads_TThread_obj*)bbt_thread);
}
struct brl_threads_TThreadData_obj* brl_threads_CreateThreadData(){
	return (struct brl_threads_TThreadData_obj*)brl_threads_TThreadData_Create_TTThreadData();
}
void brl_threads_SetThreadDataValue(struct brl_threads_TThreadData_obj* bbt_data,BBOBJECT bbt_value){
	(bbt_data)->clas->m_SetValue_TObject((struct brl_threads_TThreadData_obj*)bbt_data,(BBOBJECT)bbt_value);
}
BBOBJECT brl_threads_GetThreadDataValue(struct brl_threads_TThreadData_obj* bbt_data){
	return (BBOBJECT)(bbt_data)->clas->m_GetValue((struct brl_threads_TThreadData_obj*)bbt_data);
}
struct brl_threads_TMutex_obj* brl_threads_CreateMutex(){
	return (struct brl_threads_TMutex_obj*)brl_threads_TMutex_Create_TTMutex();
}
void brl_threads_CloseMutex(struct brl_threads_TMutex_obj* bbt_mutex){
	(bbt_mutex)->clas->m_Close((struct brl_threads_TMutex_obj*)bbt_mutex);
}
void brl_threads_LockMutex(struct brl_threads_TMutex_obj* bbt_mutex){
	(bbt_mutex)->clas->m_Lock((struct brl_threads_TMutex_obj*)bbt_mutex);
}
BBINT brl_threads_TryLockMutex(struct brl_threads_TMutex_obj* bbt_mutex){
	return (bbt_mutex)->clas->m_TryLock((struct brl_threads_TMutex_obj*)bbt_mutex);
}
void brl_threads_UnlockMutex(struct brl_threads_TMutex_obj* bbt_mutex){
	(bbt_mutex)->clas->m_Unlock((struct brl_threads_TMutex_obj*)bbt_mutex);
}
struct brl_threads_TSemaphore_obj* brl_threads_CreateSemaphore(BBINT bbt_count){
	return (struct brl_threads_TSemaphore_obj*)brl_threads_TSemaphore_Create_TTSemaphore_i(bbt_count);
}
void brl_threads_CloseSemaphore(struct brl_threads_TSemaphore_obj* bbt_semaphore){
	(bbt_semaphore)->clas->m_Close((struct brl_threads_TSemaphore_obj*)bbt_semaphore);
}
void brl_threads_WaitSemaphore(struct brl_threads_TSemaphore_obj* bbt_semaphore){
	(bbt_semaphore)->clas->m_Wait((struct brl_threads_TSemaphore_obj*)bbt_semaphore);
}
void brl_threads_PostSemaphore(struct brl_threads_TSemaphore_obj* bbt_semaphore){
	(bbt_semaphore)->clas->m_Post((struct brl_threads_TSemaphore_obj*)bbt_semaphore);
}
struct brl_threads_TCondVar_obj* brl_threads_CreateCondVar(){
	return (struct brl_threads_TCondVar_obj*)brl_threads_TCondVar_Create_TTCondVar();
}
void brl_threads_CloseCondVar(struct brl_threads_TCondVar_obj* bbt_condvar){
	(bbt_condvar)->clas->m_Close((struct brl_threads_TCondVar_obj*)bbt_condvar);
}
void brl_threads_WaitCondVar(struct brl_threads_TCondVar_obj* bbt_condvar,struct brl_threads_TMutex_obj* bbt_mutex){
	(bbt_condvar)->clas->m_Wait_TTMutex((struct brl_threads_TCondVar_obj*)bbt_condvar,(struct brl_threads_TMutex_obj*)bbt_mutex);
}
void brl_threads_SignalCondVar(struct brl_threads_TCondVar_obj* bbt_condvar){
	(bbt_condvar)->clas->m_Signal((struct brl_threads_TCondVar_obj*)bbt_condvar);
}
void brl_threads_BroadcastCondVar(struct brl_threads_TCondVar_obj* bbt_condvar){
	(bbt_condvar)->clas->m_Broadcast((struct brl_threads_TCondVar_obj*)bbt_condvar);
}
BBINT brl_threads_CompareAndSwap(BBINT* bbt_target,BBINT bbt_oldValue,BBINT bbt_newValue){
	return bbAtomicCAS((int*)&(*bbt_target),(int)bbt_oldValue,(int)bbt_newValue);
}
BBINT brl_threads_AtomicAdd(BBINT* bbt_target,BBINT bbt_value){
	return bbAtomicAdd((int*)&(*bbt_target),(int)bbt_value);
}
BBINT brl_threads_AtomicSwap(BBINT* bbt_target,BBINT bbt_value){
	do{
		BBINT bbt_oldval=*bbt_target;
		if(brl_threads_CompareAndSwap(&(*bbt_target),bbt_oldval,bbt_value)!=0){
			return bbt_oldval;
		}
	}while(!(0));
}
static int __bb_brl_threads_threads_inited = 0;
int __bb_brl_threads_threads(){
	if (!__bb_brl_threads_threads_inited) {
		__bb_brl_threads_threads_inited = 1;
		GC_add_roots(&brl_threads__mainThread, &brl_threads__curThread + 1);
		__bb_brl_blitz_blitz();
		bbObjectRegisterType((BBCLASS)&brl_threads_TThread);
		bbObjectRegisterType((BBCLASS)&brl_threads_TThreadData);
		bbObjectRegisterType((BBCLASS)&brl_threads_TMutex);
		bbObjectRegisterType((BBCLASS)&brl_threads_TSemaphore);
		bbObjectRegisterType((BBCLASS)&brl_threads_TCondVar);
		bbObjectRegisterType((BBCLASS)&brl_threads_TCancellationTokenSource);
		bbObjectRegisterType((BBCLASS)&brl_threads_TCancellationToken);
		bbObjectRegisterType((BBCLASS)&brl_threads_TCancellationException);
		brl_threads__mainThread=(struct brl_threads_TThread_obj*)(struct brl_threads_TThread_obj*)bbObjectNew((BBClass *)&brl_threads_TThread);
		brl_threads__curThread=(struct brl_threads_TThreadData_obj*)brl_threads_TThreadData_Create_TTThreadData();
		(brl_threads__curThread)->clas->m_SetValue_TObject((struct brl_threads_TThreadData_obj*)brl_threads__curThread,(BBOBJECT)brl_threads__mainThread);
		return 0;
	}
	return 0;
}