#ifndef BRL_BLITZ_BLITZ_BMX_RELEASE_LINUX_X64_H
#define BRL_BLITZ_BLITZ_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/blitz.h>
int __bb_brl_blitz_blitz();
struct brl_blitz_TBlitzException_obj;
struct brl_blitz_TNullObjectException_obj;
struct brl_blitz_TNullMethodException_obj;
struct brl_blitz_TNullFunctionException_obj;
struct brl_blitz_TArrayBoundsException_obj;
struct brl_blitz_TOutOfDataException_obj;
struct brl_blitz_TRuntimeException_obj;
struct brl_blitz_TInvalidEnumException_obj;
struct brl_blitz_IDisposable_obj;
extern const struct BBInterface brl_blitz_IDisposable_ifc;
struct brl_blitz_IIterable_obj;
extern const struct BBInterface brl_blitz_IIterable_ifc;
struct brl_blitz_IIterator_obj;
extern const struct BBInterface brl_blitz_IIterator_ifc;
struct brl_blitz_IComparator_obj;
extern const struct BBInterface brl_blitz_IComparator_ifc;
void(* bbOnDebugStop)();
void(* bbOnDebugLog)(BBSTRING);
extern BBSTRING bbAppDir;
extern BBSTRING bbAppFile;
extern BBSTRING bbAppTitle;
extern BBARRAY bbAppArgs;
extern BBSTRING bbLaunchDir;
extern BBINT bbCountInstances;
void _brl_blitz_TBlitzException_New(struct brl_blitz_TBlitzException_obj* o);
struct BBClass_brl_blitz_TBlitzException {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
};

struct brl_blitz_TBlitzException_obj {
	struct BBClass_brl_blitz_TBlitzException* clas;
};
extern struct BBClass_brl_blitz_TBlitzException brl_blitz_TBlitzException;
void _brl_blitz_TNullObjectException_New(struct brl_blitz_TNullObjectException_obj* o);
BBSTRING _brl_blitz_TNullObjectException_ToString(struct brl_blitz_TNullObjectException_obj* o);
struct BBClass_brl_blitz_TNullObjectException {
	struct BBClass_brl_blitz_TBlitzException*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
};

struct brl_blitz_TNullObjectException_obj {
	struct BBClass_brl_blitz_TNullObjectException* clas;
};
extern struct BBClass_brl_blitz_TNullObjectException brl_blitz_TNullObjectException;
void _brl_blitz_TNullMethodException_New(struct brl_blitz_TNullMethodException_obj* o);
BBSTRING _brl_blitz_TNullMethodException_ToString(struct brl_blitz_TNullMethodException_obj* o);
struct BBClass_brl_blitz_TNullMethodException {
	struct BBClass_brl_blitz_TBlitzException*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
};

struct brl_blitz_TNullMethodException_obj {
	struct BBClass_brl_blitz_TNullMethodException* clas;
};
extern struct BBClass_brl_blitz_TNullMethodException brl_blitz_TNullMethodException;
void _brl_blitz_TNullFunctionException_New(struct brl_blitz_TNullFunctionException_obj* o);
BBSTRING _brl_blitz_TNullFunctionException_ToString(struct brl_blitz_TNullFunctionException_obj* o);
struct BBClass_brl_blitz_TNullFunctionException {
	struct BBClass_brl_blitz_TBlitzException*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
};

struct brl_blitz_TNullFunctionException_obj {
	struct BBClass_brl_blitz_TNullFunctionException* clas;
};
extern struct BBClass_brl_blitz_TNullFunctionException brl_blitz_TNullFunctionException;
void _brl_blitz_TArrayBoundsException_New(struct brl_blitz_TArrayBoundsException_obj* o);
BBSTRING _brl_blitz_TArrayBoundsException_ToString(struct brl_blitz_TArrayBoundsException_obj* o);
struct BBClass_brl_blitz_TArrayBoundsException {
	struct BBClass_brl_blitz_TBlitzException*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
};

struct brl_blitz_TArrayBoundsException_obj {
	struct BBClass_brl_blitz_TArrayBoundsException* clas;
};
extern struct BBClass_brl_blitz_TArrayBoundsException brl_blitz_TArrayBoundsException;
void _brl_blitz_TOutOfDataException_New(struct brl_blitz_TOutOfDataException_obj* o);
BBSTRING _brl_blitz_TOutOfDataException_ToString(struct brl_blitz_TOutOfDataException_obj* o);
struct BBClass_brl_blitz_TOutOfDataException {
	struct BBClass_brl_blitz_TBlitzException*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
};

struct brl_blitz_TOutOfDataException_obj {
	struct BBClass_brl_blitz_TOutOfDataException* clas;
};
extern struct BBClass_brl_blitz_TOutOfDataException brl_blitz_TOutOfDataException;
void _brl_blitz_TRuntimeException_New(struct brl_blitz_TRuntimeException_obj* o);
BBSTRING _brl_blitz_TRuntimeException_ToString(struct brl_blitz_TRuntimeException_obj* o);
typedef struct brl_blitz_TRuntimeException_obj* (*brl_blitz_TRuntimeException_Create_TTRuntimeException_S_f)(BBSTRING);
struct brl_blitz_TRuntimeException_obj* brl_blitz_TRuntimeException_Create_TTRuntimeException_S(BBSTRING);
struct BBClass_brl_blitz_TRuntimeException {
	struct BBClass_brl_blitz_TBlitzException*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	brl_blitz_TRuntimeException_Create_TTRuntimeException_S_f f_Create_TTRuntimeException_S;
};

struct brl_blitz_TRuntimeException_obj {
	struct BBClass_brl_blitz_TRuntimeException* clas;
	BBSTRING _brl_blitz_truntimeexception_error;
};
extern struct BBClass_brl_blitz_TRuntimeException brl_blitz_TRuntimeException;
void _brl_blitz_TInvalidEnumException_New(struct brl_blitz_TInvalidEnumException_obj* o);
BBSTRING _brl_blitz_TInvalidEnumException_ToString(struct brl_blitz_TInvalidEnumException_obj* o);
struct BBClass_brl_blitz_TInvalidEnumException {
	struct BBClass_brl_blitz_TBlitzException*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
};

struct brl_blitz_TInvalidEnumException_obj {
	struct BBClass_brl_blitz_TInvalidEnumException* clas;
};
extern struct BBClass_brl_blitz_TInvalidEnumException brl_blitz_TInvalidEnumException;
void _brl_blitz_IDisposable_New(struct brl_blitz_IDisposable_obj* o);
typedef void (*brl_blitz_IDisposable_Dispose_m)(struct brl_blitz_IDisposable_obj*);
void _brl_blitz_IDisposable_Dispose(struct brl_blitz_IDisposable_obj*);
struct BBClass_brl_blitz_IDisposable {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	brl_blitz_IDisposable_Dispose_m m_Dispose;
};

struct brl_blitz_IDisposable_methods {
	brl_blitz_IDisposable_Dispose_m m_Dispose;
};

struct brl_blitz_IDisposable_obj {
	struct BBClass_brl_blitz_IDisposable* clas;
};
extern struct BBClass_brl_blitz_IDisposable brl_blitz_IDisposable;
inline BBINT brl_blitz_Max(BBINT bbt_a,BBINT bbt_b){
	if(bbt_a<bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBLONG brl_blitz_Max2(BBLONG bbt_a,BBLONG bbt_b){
	if(bbt_a<bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBFLOAT brl_blitz_Max3(BBFLOAT bbt_a,BBFLOAT bbt_b){
	if(bbt_a<bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBDOUBLE brl_blitz_Max4(BBDOUBLE bbt_a,BBDOUBLE bbt_b){
	if(bbt_a<bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBBYTE brl_blitz_Max5(BBBYTE bbt_a,BBBYTE bbt_b){
	if(bbt_a<bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBSHORT brl_blitz_Max6(BBSHORT bbt_a,BBSHORT bbt_b){
	if(bbt_a<bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBUINT brl_blitz_Max7(BBUINT bbt_a,BBUINT bbt_b){
	if(bbt_a<bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBULONG brl_blitz_Max8(BBULONG bbt_a,BBULONG bbt_b){
	if(bbt_a<bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBSIZET brl_blitz_Max9(BBSIZET bbt_a,BBSIZET bbt_b){
	if(bbt_a<bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBINT brl_blitz_Min(BBINT bbt_a,BBINT bbt_b){
	if(bbt_a>bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBLONG brl_blitz_Min2(BBLONG bbt_a,BBLONG bbt_b){
	if(bbt_a>bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBFLOAT brl_blitz_Min3(BBFLOAT bbt_a,BBFLOAT bbt_b){
	if(bbt_a>bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBDOUBLE brl_blitz_Min4(BBDOUBLE bbt_a,BBDOUBLE bbt_b){
	if(bbt_a>bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBBYTE brl_blitz_Min5(BBBYTE bbt_a,BBBYTE bbt_b){
	if(bbt_a>bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBSHORT brl_blitz_Min6(BBSHORT bbt_a,BBSHORT bbt_b){
	if(bbt_a>bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBUINT brl_blitz_Min7(BBUINT bbt_a,BBUINT bbt_b){
	if(bbt_a>bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBULONG brl_blitz_Min8(BBULONG bbt_a,BBULONG bbt_b){
	if(bbt_a>bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBSIZET brl_blitz_Min9(BBSIZET bbt_a,BBSIZET bbt_b){
	if(bbt_a>bbt_b){
		return bbt_b;
	}
	return bbt_a;
}
inline BBINT brl_blitz_Abs(BBINT bbt_a){
	return bbIntAbs((int)bbt_a);
}
inline BBFLOAT brl_blitz_Abs2(BBFLOAT bbt_a){
	return ((BBFLOAT)bbFloatAbs((double)((BBDOUBLE)bbt_a)));
}
inline BBDOUBLE brl_blitz_Abs3(BBDOUBLE bbt_a){
	return bbFloatAbs((double)bbt_a);
}
inline BBLONG brl_blitz_Abs4(BBLONG bbt_a){
	return bbLongAbs((BBInt64)bbt_a);
}
inline BBINT brl_blitz_Sgn(BBINT bbt_a){
	return bbIntSgn((int)bbt_a);
}
inline BBFLOAT brl_blitz_Sgn2(BBFLOAT bbt_a){
	return ((BBFLOAT)bbFloatSgn((double)((BBDOUBLE)bbt_a)));
}
inline BBDOUBLE brl_blitz_Sgn3(BBDOUBLE bbt_a){
	return ((BBDOUBLE)bbFloatSgn((double)bbt_a));
}
inline BBLONG brl_blitz_Sgn4(BBLONG bbt_a){
	return ((BBLONG)bbLongSgn((BBInt64)bbt_a));
}
BBINT brl_blitz_DefaultComparator_Compare(BBBYTE bbt_o1,BBBYTE bbt_o2);
BBINT brl_blitz_DefaultComparator_Compare2(BBSHORT bbt_o1,BBSHORT bbt_o2);
BBINT brl_blitz_DefaultComparator_Compare3(BBINT bbt_o1,BBINT bbt_o2);
BBINT brl_blitz_DefaultComparator_Compare4(BBUINT bbt_o1,BBUINT bbt_o2);
BBINT brl_blitz_DefaultComparator_Compare5(BBLONG bbt_o1,BBLONG bbt_o2);
BBINT brl_blitz_DefaultComparator_Compare6(BBULONG bbt_o1,BBULONG bbt_o2);
BBINT brl_blitz_DefaultComparator_Compare7(BBSIZET bbt_o1,BBSIZET bbt_o2);
BBINT brl_blitz_DefaultComparator_Compare8(BBFLOAT bbt_o1,BBFLOAT bbt_o2);
BBINT brl_blitz_DefaultComparator_Compare9(BBDOUBLE bbt_o1,BBDOUBLE bbt_o2);
BBINT brl_blitz_DefaultComparator_Compare10(BBOBJECT bbt_o1,BBOBJECT bbt_o2);
BBINT brl_blitz_DefaultComparator_Compare11(BBBYTE* bbt_o1,BBBYTE* bbt_o2);
void brl_blitz_NullObjectError();
void brl_blitz_NullMethodError();
void brl_blitz_NullFunctionError();
void brl_blitz_ArrayBoundsError();
void brl_blitz_OutOfDataError();
void brl_blitz_InvalidEnumError();
void brl_blitz_RuntimeError(BBSTRING bbt_message);
void brl_blitz_DebugStop();
void brl_blitz_DebugLog(BBSTRING bbt_message);
extern void bbOnEnd(void(* bbt_fun)());
extern BBSTRING bbReadStdin();
extern void bbWriteStdout(BBSTRING bbt_str);
extern void bbWriteStderr(BBSTRING bbt_str);
extern void bbDelay(BBINT bbt_millis);
extern BBINT bbMilliSecs();
extern void* bbMemAlloc(size_t bbt_size);
extern void bbMemFree(void* bbt_mem);
extern void* bbMemExtend(void* bbt_mem,size_t bbt_size,size_t bbt_new_size);
extern void bbMemClear(void* bbt_mem,size_t bbt_size);
extern void bbMemCopy(void* bbt_dst,const void* bbt_src,size_t bbt_size);
extern void bbMemMove(void* bbt_dst,const void* bbt_src,size_t bbt_size);
extern void bbGCSetMode(BBINT bbt_Mode);
extern void bbGCSuspend();
extern void bbGCResume();
extern BBSIZET bbGCCollect();
extern BBINT bbGCCollectALittle();
extern BBSIZET bbGCMemAlloced();
extern void bbGCEnter();
extern void bbGCLeave();
extern void bbGCRetain(BBOBJECT bbt_obj);
extern BBINT bbGCThreadIsRegistered();
extern BBINT bbGCRegisterMyThread();
extern BBINT bbGCUnregisterMyThread();
extern BBSIZET bbHandleFromObject(BBOBJECT bbt_obj);
extern BBOBJECT bbHandleToObject(BBSIZET bbt_handle);
extern void bbObjectDumpInstanceCounts(BBBYTE* bbt_buffer,BBINT bbt_size,BBINT bbt_includeZeros);

#endif
