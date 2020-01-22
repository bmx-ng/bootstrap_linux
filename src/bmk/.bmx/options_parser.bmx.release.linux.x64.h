#ifndef BMK_OPTIONS_PARSER_BMX_RELEASE_LINUX_X64_H
#define BMK_OPTIONS_PARSER_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
#include <brl.mod/map.mod/.bmx/map.bmx.release.linux.x64.h>
#include "stringbuffer_core.bmx.release.linux.x64.h"
int _bb_bmk_options_parser();
struct _m_options_parser_TValues_obj;
struct _m_options_parser_TOptParser_obj;
struct _m_options_parser_TOptToken_obj;
struct _m_options_parser_TOptTokenizer_obj;
struct _m_options_parser_TExpr_obj;
struct _m_options_parser_TNotExpr_obj;
struct _m_options_parser_TBinaryExpr_obj;
struct _m_options_parser_TBinaryCompareExpr_obj;
struct _m_options_parser_TIdentExpr_obj;
struct _m_options_parser_TInt_obj;
void __m_options_parser_TValues_New(struct _m_options_parser_TValues_obj* o);
typedef void (*_m_options_parser_TValues_Add_Si_m)(struct _m_options_parser_TValues_obj*,BBSTRING,BBINT);
void __m_options_parser_TValues_Add_Si(struct _m_options_parser_TValues_obj*,BBSTRING,BBINT);
typedef BBINT (*_m_options_parser_TValues_Value_S_m)(struct _m_options_parser_TValues_obj*,BBSTRING);
BBINT __m_options_parser_TValues_Value_S(struct _m_options_parser_TValues_obj*,BBSTRING);
struct BBClass__m_options_parser_TValues {
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
	_m_options_parser_TValues_Add_Si_m m_Add_Si;
	_m_options_parser_TValues_Value_S_m m_Value_S;
};

struct _m_options_parser_TValues_obj {
	struct BBClass__m_options_parser_TValues* clas;
	struct brl_map_TMap_obj* __m_options_parser_tvalues_values;
};
extern struct BBClass__m_options_parser_TValues _m_options_parser_TValues;
extern struct _m_options_parser_TValues_obj* _m_options_parser_compilerOptions;
void __m_options_parser_TOptParser_New(struct _m_options_parser_TOptParser_obj* o);
typedef struct _m_options_parser_TOptParser_obj* (*_m_options_parser_TOptParser_Create_TTOptTokenizerTTValues_m)(struct _m_options_parser_TOptParser_obj*,struct _m_options_parser_TOptTokenizer_obj*,struct _m_options_parser_TValues_obj*);
struct _m_options_parser_TOptParser_obj* __m_options_parser_TOptParser_Create_TTOptTokenizerTTValues(struct _m_options_parser_TOptParser_obj*,struct _m_options_parser_TOptTokenizer_obj*,struct _m_options_parser_TValues_obj*);
typedef BBINT (*_m_options_parser_TOptParser_Eval_m)(struct _m_options_parser_TOptParser_obj*);
BBINT __m_options_parser_TOptParser_Eval(struct _m_options_parser_TOptParser_obj*);
typedef void (*_m_options_parser_TOptParser_NextToke_m)(struct _m_options_parser_TOptParser_obj*);
void __m_options_parser_TOptParser_NextToke(struct _m_options_parser_TOptParser_obj*);
typedef struct _m_options_parser_TExpr_obj* (*_m_options_parser_TOptParser_Parse_m)(struct _m_options_parser_TOptParser_obj*);
struct _m_options_parser_TExpr_obj* __m_options_parser_TOptParser_Parse(struct _m_options_parser_TOptParser_obj*);
typedef struct _m_options_parser_TExpr_obj* (*_m_options_parser_TOptParser_ParseOrExpr_m)(struct _m_options_parser_TOptParser_obj*);
struct _m_options_parser_TExpr_obj* __m_options_parser_TOptParser_ParseOrExpr(struct _m_options_parser_TOptParser_obj*);
typedef struct _m_options_parser_TExpr_obj* (*_m_options_parser_TOptParser_ParseAndExpr_m)(struct _m_options_parser_TOptParser_obj*);
struct _m_options_parser_TExpr_obj* __m_options_parser_TOptParser_ParseAndExpr(struct _m_options_parser_TOptParser_obj*);
typedef struct _m_options_parser_TExpr_obj* (*_m_options_parser_TOptParser_ParseCompareExpr_m)(struct _m_options_parser_TOptParser_obj*);
struct _m_options_parser_TExpr_obj* __m_options_parser_TOptParser_ParseCompareExpr(struct _m_options_parser_TOptParser_obj*);
typedef struct _m_options_parser_TExpr_obj* (*_m_options_parser_TOptParser_ParseNotExpr_m)(struct _m_options_parser_TOptParser_obj*);
struct _m_options_parser_TExpr_obj* __m_options_parser_TOptParser_ParseNotExpr(struct _m_options_parser_TOptParser_obj*);
typedef struct _m_options_parser_TExpr_obj* (*_m_options_parser_TOptParser_ParsePrimaryExpr_m)(struct _m_options_parser_TOptParser_obj*);
struct _m_options_parser_TExpr_obj* __m_options_parser_TOptParser_ParsePrimaryExpr(struct _m_options_parser_TOptParser_obj*);
struct BBClass__m_options_parser_TOptParser {
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
	_m_options_parser_TOptParser_Create_TTOptTokenizerTTValues_m m_Create_TTOptTokenizerTTValues;
	_m_options_parser_TOptParser_Eval_m m_Eval;
	_m_options_parser_TOptParser_NextToke_m m_NextToke;
	_m_options_parser_TOptParser_Parse_m m_Parse;
	_m_options_parser_TOptParser_ParseOrExpr_m m_ParseOrExpr;
	_m_options_parser_TOptParser_ParseAndExpr_m m_ParseAndExpr;
	_m_options_parser_TOptParser_ParseCompareExpr_m m_ParseCompareExpr;
	_m_options_parser_TOptParser_ParseNotExpr_m m_ParseNotExpr;
	_m_options_parser_TOptParser_ParsePrimaryExpr_m m_ParsePrimaryExpr;
};

struct _m_options_parser_TOptParser_obj {
	struct BBClass__m_options_parser_TOptParser* clas;
	struct _m_options_parser_TOptTokenizer_obj* __m_options_parser_toptparser_tokenizer;
	struct _m_options_parser_TOptToken_obj* __m_options_parser_toptparser_token;
	struct _m_options_parser_TValues_obj* __m_options_parser_toptparser_values;
};
extern struct BBClass__m_options_parser_TOptParser _m_options_parser_TOptParser;
void __m_options_parser_TOptToken_New(struct _m_options_parser_TOptToken_obj* o);
typedef struct _m_options_parser_TOptToken_obj* (*_m_options_parser_TOptToken_Create_iS_m)(struct _m_options_parser_TOptToken_obj*,BBINT,BBSTRING);
struct _m_options_parser_TOptToken_obj* __m_options_parser_TOptToken_Create_iS(struct _m_options_parser_TOptToken_obj*,BBINT,BBSTRING);
struct BBClass__m_options_parser_TOptToken {
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
	_m_options_parser_TOptToken_Create_iS_m m_Create_iS;
};

struct _m_options_parser_TOptToken_obj {
	struct BBClass__m_options_parser_TOptToken* clas;
	BBINT __m_options_parser_topttoken_toktype;
	BBSTRING __m_options_parser_topttoken_value;
};
extern struct BBClass__m_options_parser_TOptToken _m_options_parser_TOptToken;
void __m_options_parser_TOptTokenizer_New(struct _m_options_parser_TOptTokenizer_obj* o);
typedef struct _m_options_parser_TOptTokenizer_obj* (*_m_options_parser_TOptTokenizer_Create_S_m)(struct _m_options_parser_TOptTokenizer_obj*,BBSTRING);
struct _m_options_parser_TOptTokenizer_obj* __m_options_parser_TOptTokenizer_Create_S(struct _m_options_parser_TOptTokenizer_obj*,BBSTRING);
typedef struct _m_options_parser_TOptToken_obj* (*_m_options_parser_TOptTokenizer_NextToken_m)(struct _m_options_parser_TOptTokenizer_obj*);
struct _m_options_parser_TOptToken_obj* __m_options_parser_TOptTokenizer_NextToken(struct _m_options_parser_TOptTokenizer_obj*);
typedef struct _m_options_parser_TOptToken_obj* (*_m_options_parser_TOptTokenizer_NextIdentToken_i_m)(struct _m_options_parser_TOptTokenizer_obj*,BBINT);
struct _m_options_parser_TOptToken_obj* __m_options_parser_TOptTokenizer_NextIdentToken_i(struct _m_options_parser_TOptTokenizer_obj*,BBINT);
typedef BBINT (*_m_options_parser_TOptTokenizer_IsAlphaNumeric_i_m)(struct _m_options_parser_TOptTokenizer_obj*,BBINT);
BBINT __m_options_parser_TOptTokenizer_IsAlphaNumeric_i(struct _m_options_parser_TOptTokenizer_obj*,BBINT);
typedef BBINT (*_m_options_parser_TOptTokenizer_IsWhitespace_i_m)(struct _m_options_parser_TOptTokenizer_obj*,BBINT);
BBINT __m_options_parser_TOptTokenizer_IsWhitespace_i(struct _m_options_parser_TOptTokenizer_obj*,BBINT);
typedef BBINT (*_m_options_parser_TOptTokenizer_Peek_m)(struct _m_options_parser_TOptTokenizer_obj*);
BBINT __m_options_parser_TOptTokenizer_Peek(struct _m_options_parser_TOptTokenizer_obj*);
struct BBClass__m_options_parser_TOptTokenizer {
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
	_m_options_parser_TOptTokenizer_Create_S_m m_Create_S;
	_m_options_parser_TOptTokenizer_NextToken_m m_NextToken;
	_m_options_parser_TOptTokenizer_NextIdentToken_i_m m_NextIdentToken_i;
	_m_options_parser_TOptTokenizer_IsAlphaNumeric_i_m m_IsAlphaNumeric_i;
	_m_options_parser_TOptTokenizer_IsWhitespace_i_m m_IsWhitespace_i;
	_m_options_parser_TOptTokenizer_Peek_m m_Peek;
};

struct _m_options_parser_TOptTokenizer_obj {
	struct BBClass__m_options_parser_TOptTokenizer* clas;
	BBSTRING __m_options_parser_topttokenizer_line;
	BBINT __m_options_parser_topttokenizer_pos;
};
extern struct BBClass__m_options_parser_TOptTokenizer _m_options_parser_TOptTokenizer;
void __m_options_parser_TExpr_New(struct _m_options_parser_TExpr_obj* o);
typedef BBINT (*_m_options_parser_TExpr_Eval_m)(struct _m_options_parser_TExpr_obj*);
BBINT __m_options_parser_TExpr_Eval(struct _m_options_parser_TExpr_obj*);
struct BBClass__m_options_parser_TExpr {
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
	_m_options_parser_TExpr_Eval_m m_Eval;
};

struct _m_options_parser_TExpr_obj {
	struct BBClass__m_options_parser_TExpr* clas;
};
extern struct BBClass__m_options_parser_TExpr _m_options_parser_TExpr;
void __m_options_parser_TNotExpr_New(struct _m_options_parser_TNotExpr_obj* o);
typedef struct _m_options_parser_TNotExpr_obj* (*_m_options_parser_TNotExpr_Create_TTExpr_m)(struct _m_options_parser_TNotExpr_obj*,struct _m_options_parser_TExpr_obj*);
struct _m_options_parser_TNotExpr_obj* __m_options_parser_TNotExpr_Create_TTExpr(struct _m_options_parser_TNotExpr_obj*,struct _m_options_parser_TExpr_obj*);
typedef BBINT (*_m_options_parser_TNotExpr_Eval_m)(struct _m_options_parser_TNotExpr_obj*);
BBINT __m_options_parser_TNotExpr_Eval(struct _m_options_parser_TNotExpr_obj*);
struct BBClass__m_options_parser_TNotExpr {
	struct BBClass__m_options_parser_TExpr*  super;
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
	_m_options_parser_TNotExpr_Eval_m m_Eval;
	_m_options_parser_TNotExpr_Create_TTExpr_m m_Create_TTExpr;
};

struct _m_options_parser_TNotExpr_obj {
	struct BBClass__m_options_parser_TNotExpr* clas;
	struct _m_options_parser_TExpr_obj* __m_options_parser_tnotexpr_expr;
};
extern struct BBClass__m_options_parser_TNotExpr _m_options_parser_TNotExpr;
void __m_options_parser_TBinaryExpr_New(struct _m_options_parser_TBinaryExpr_obj* o);
typedef struct _m_options_parser_TBinaryExpr_obj* (*_m_options_parser_TBinaryExpr_Create_iTTExprTTExpr_m)(struct _m_options_parser_TBinaryExpr_obj*,BBINT,struct _m_options_parser_TExpr_obj*,struct _m_options_parser_TExpr_obj*);
struct _m_options_parser_TBinaryExpr_obj* __m_options_parser_TBinaryExpr_Create_iTTExprTTExpr(struct _m_options_parser_TBinaryExpr_obj*,BBINT,struct _m_options_parser_TExpr_obj*,struct _m_options_parser_TExpr_obj*);
typedef BBINT (*_m_options_parser_TBinaryExpr_Eval_m)(struct _m_options_parser_TBinaryExpr_obj*);
BBINT __m_options_parser_TBinaryExpr_Eval(struct _m_options_parser_TBinaryExpr_obj*);
struct BBClass__m_options_parser_TBinaryExpr {
	struct BBClass__m_options_parser_TExpr*  super;
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
	_m_options_parser_TBinaryExpr_Eval_m m_Eval;
	_m_options_parser_TBinaryExpr_Create_iTTExprTTExpr_m m_Create_iTTExprTTExpr;
};

struct _m_options_parser_TBinaryExpr_obj {
	struct BBClass__m_options_parser_TBinaryExpr* clas;
	BBINT __m_options_parser_tbinaryexpr_op;
	struct _m_options_parser_TExpr_obj* __m_options_parser_tbinaryexpr_lhs;
	struct _m_options_parser_TExpr_obj* __m_options_parser_tbinaryexpr_rhs;
};
extern struct BBClass__m_options_parser_TBinaryExpr _m_options_parser_TBinaryExpr;
void __m_options_parser_TBinaryCompareExpr_New(struct _m_options_parser_TBinaryCompareExpr_obj* o);
typedef BBINT (*_m_options_parser_TBinaryCompareExpr_Eval_m)(struct _m_options_parser_TBinaryCompareExpr_obj*);
BBINT __m_options_parser_TBinaryCompareExpr_Eval(struct _m_options_parser_TBinaryCompareExpr_obj*);
struct BBClass__m_options_parser_TBinaryCompareExpr {
	struct BBClass__m_options_parser_TBinaryExpr*  super;
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
	_m_options_parser_TBinaryCompareExpr_Eval_m m_Eval;
	_m_options_parser_TBinaryExpr_Create_iTTExprTTExpr_m m_Create_iTTExprTTExpr;
};

struct _m_options_parser_TBinaryCompareExpr_obj {
	struct BBClass__m_options_parser_TBinaryCompareExpr* clas;
	BBINT __m_options_parser_tbinaryexpr_op;
	struct _m_options_parser_TExpr_obj* __m_options_parser_tbinaryexpr_lhs;
	struct _m_options_parser_TExpr_obj* __m_options_parser_tbinaryexpr_rhs;
};
extern struct BBClass__m_options_parser_TBinaryCompareExpr _m_options_parser_TBinaryCompareExpr;
void __m_options_parser_TIdentExpr_New(struct _m_options_parser_TIdentExpr_obj* o);
typedef struct _m_options_parser_TIdentExpr_obj* (*_m_options_parser_TIdentExpr_Create_Si_m)(struct _m_options_parser_TIdentExpr_obj*,BBSTRING,BBINT);
struct _m_options_parser_TIdentExpr_obj* __m_options_parser_TIdentExpr_Create_Si(struct _m_options_parser_TIdentExpr_obj*,BBSTRING,BBINT);
typedef BBINT (*_m_options_parser_TIdentExpr_Eval_m)(struct _m_options_parser_TIdentExpr_obj*);
BBINT __m_options_parser_TIdentExpr_Eval(struct _m_options_parser_TIdentExpr_obj*);
struct BBClass__m_options_parser_TIdentExpr {
	struct BBClass__m_options_parser_TExpr*  super;
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
	_m_options_parser_TIdentExpr_Eval_m m_Eval;
	_m_options_parser_TIdentExpr_Create_Si_m m_Create_Si;
};

struct _m_options_parser_TIdentExpr_obj {
	struct BBClass__m_options_parser_TIdentExpr* clas;
	BBSTRING __m_options_parser_tidentexpr_ident;
	BBINT __m_options_parser_tidentexpr_value;
};
extern struct BBClass__m_options_parser_TIdentExpr _m_options_parser_TIdentExpr;
void __m_options_parser_TInt_New(struct _m_options_parser_TInt_obj* o);
typedef struct _m_options_parser_TInt_obj* (*_m_options_parser_TInt_Create_i_m)(struct _m_options_parser_TInt_obj*,BBINT);
struct _m_options_parser_TInt_obj* __m_options_parser_TInt_Create_i(struct _m_options_parser_TInt_obj*,BBINT);
struct BBClass__m_options_parser_TInt {
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
	_m_options_parser_TInt_Create_i_m m_Create_i;
};

struct _m_options_parser_TInt_obj {
	struct BBClass__m_options_parser_TInt* clas;
	BBINT __m_options_parser_tint_value;
};
extern struct BBClass__m_options_parser_TInt _m_options_parser_TInt;
BBINT _m_options_parser_EvalOption(BBSTRING bbt_line);

#endif
