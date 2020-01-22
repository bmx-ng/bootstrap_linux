#include "backtrace/backtrace.h"

#include <windows.h>
#include <signal.h>

struct backtrace_state *state;

static void error_callback(void *data, const char *msg, int errnum) {
	printf("error : %s\n", msg);fflush(stdout);
}

void bbBacktraceInitState(char * filename) {
	state = backtrace_create_state(filename, BACKTRACE_SUPPORTS_THREADS, error_callback, NULL);
}

struct bt_ctx {
	struct backtrace_state *state;
	int error;
};

static void syminfo_callback (void *data, uintptr_t pc, const char *symname, uintptr_t symval, uintptr_t symsize)
{
	//struct bt_ctx *ctx = data;
	if (symname) {
		printf("%lx %s ??:0\n", (unsigned long)pc, symname);
	} else {
		printf("%lx ?? ??:0\n", (unsigned long)pc);
	}
}

static int full_callback(void *data, uintptr_t pc, const char *filename, int lineno, const char *function)
{
	struct bt_ctx *ctx = data;
	if (function) {
		printf("%lx %s %s:%d\n", (unsigned long)pc, function, filename?filename:"??", lineno);
	} else {
		backtrace_syminfo (ctx->state, pc, syminfo_callback, error_callback, data);
	}
	return 0;
}

static int simple_callback(void *data, uintptr_t pc)
{
	struct bt_ctx *ctx = data;
	backtrace_pcinfo(ctx->state, pc, full_callback, error_callback, data);
	return 0;
}


void bbBacktraceDump() {
	//backtrace_print(state, 0, stdout);
	struct bt_ctx ctx = {state, 0};
	backtrace_simple(state, 0, simple_callback, error_callback, &ctx);
}


#if _WIN32
LONG WINAPI handle_exception(EXCEPTION_POINTERS * ExceptionInfo) {
printf("yay!\n");fflush(stdout);
	backtrace_print(state, 0, stdout);
}

void handler(int sig) {
printf("yay2!\n");fflush(stdout);
	backtrace_print(state, 0, stdout);
}

void bbInitExceptionHandler() {
	signal(SIGSEGV, handler);
	//SetUnhandledExceptionFilter(handle_exception);
}
#else

#endif
