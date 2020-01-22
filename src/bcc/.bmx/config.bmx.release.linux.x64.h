#ifndef BCC_CONFIG_BMX_RELEASE_LINUX_X64_H
#define BCC_CONFIG_BMX_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.linux.x64.h>
#include <brl.mod/linkedlist.mod/.bmx/linkedlist.bmx.release.linux.x64.h>
#include <brl.mod/map.mod/.bmx/map.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
#include <pub.mod/zlib.mod/.bmx/zlib.bmx.release.linux.x64.h>
#include <brl.mod/math.mod/.bmx/math.bmx.release.linux.x64.h>
#include "options.bmx.release.linux.x64.h"
#include "base.stringhelper.bmx.release.linux.x64.h"
#include "base64.bmx.release.linux.x64.h"
int _bb_bcc_config();
struct _m_config_TStack_obj;
struct _m_config_TStringList_obj;
struct _m_config_TKeyValue_obj;
struct _m_config_TUnorderedMap_obj;
struct _m_config_TTemplateRecord_obj;
struct _m_config_TCallback_obj;
extern BBSTRING _m_config_ENV_LANG;
extern BBSTRING _m_config__errInfo;
extern struct brl_linkedlist_TList_obj* _m_config__errStack;
extern BBINT _m_config_OBJECT_BASE_OFFSET;
extern BBINT _m_config_POINTER_SIZE;
extern BBARRAY _m_config__symbols;
extern BBARRAY _m_config__symbols_map;
void __m_config_TStack_New(struct _m_config_TStack_obj* o);
void __m_config_TStack_Delete(struct _m_config_TStack_obj* o);
typedef void (*_m_config_TStack_Push_TObject_m)(struct _m_config_TStack_obj*,BBOBJECT);
void __m_config_TStack_Push_TObject(struct _m_config_TStack_obj*,BBOBJECT);
typedef BBINT (*_m_config_TStack_Length_m)(struct _m_config_TStack_obj*);
BBINT __m_config_TStack_Length(struct _m_config_TStack_obj*);
typedef BBOBJECT (*_m_config_TStack_Get_i_m)(struct _m_config_TStack_obj*,BBINT);
BBOBJECT __m_config_TStack_Get_i(struct _m_config_TStack_obj*,BBINT);
typedef BBOBJECT (*_m_config_TStack_Pop_m)(struct _m_config_TStack_obj*);
BBOBJECT __m_config_TStack_Pop(struct _m_config_TStack_obj*);
struct BBClass__m_config_TStack {
	struct BBClass_brl_linkedlist_TList*  super;
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
	brl_linkedlist_TList__pad_m m__pad;
	brl_linkedlist_TList_Clear_m m_Clear;
	brl_linkedlist_TList_IsEmpty_m m_IsEmpty;
	brl_linkedlist_TList_Contains_TObject_m m_Contains_TObject;
	brl_linkedlist_TList_AddFirst_TObject_m m_AddFirst_TObject;
	brl_linkedlist_TList_AddLast_TObject_m m_AddLast_TObject;
	brl_linkedlist_TList_First_m m_First;
	brl_linkedlist_TList_Last_m m_Last;
	brl_linkedlist_TList_RemoveFirst_m m_RemoveFirst;
	brl_linkedlist_TList_RemoveLast_m m_RemoveLast;
	brl_linkedlist_TList_FirstLink_m m_FirstLink;
	brl_linkedlist_TList_LastLink_m m_LastLink;
	brl_linkedlist_TList_InsertBeforeLink_TObjectTTLink_m m_InsertBeforeLink_TObjectTTLink;
	brl_linkedlist_TList_InsertAfterLink_TObjectTTLink_m m_InsertAfterLink_TObjectTTLink;
	brl_linkedlist_TList_FindLink_TObject_m m_FindLink_TObject;
	brl_linkedlist_TList_ValueAtIndex_i_m m_ValueAtIndex_i;
	brl_linkedlist_TList_Count_m m_Count;
	brl_linkedlist_TList_Remove_TObject_m m_Remove_TObject;
	brl_linkedlist_TList_Swap_TTList_m m_Swap_TTList;
	brl_linkedlist_TList_Copy_m m_Copy;
	brl_linkedlist_TList_Reverse_m m_Reverse;
	brl_linkedlist_TList_Reversed_m m_Reversed;
	brl_linkedlist_TList_Sort_iF_TObjectTObject_i__m m_Sort_iF_TObjectTObject_i_;
	brl_linkedlist_TList_ObjectEnumerator_m m_ObjectEnumerator;
	brl_linkedlist_TList_ToArray_m m_ToArray;
	brl_linkedlist_TList_FromArray_TTList_aTObject_f f_FromArray_TTList_aTObject;
	brl_linkedlist_TList_RemoveLink_TTLink_m m_RemoveLink_TTLink;
	_m_config_TStack_Push_TObject_m m_Push_TObject;
	_m_config_TStack_Length_m m_Length;
	_m_config_TStack_Get_i_m m_Get_i;
	_m_config_TStack_Pop_m m_Pop;
};

struct _m_config_TStack_obj {
	struct BBClass__m_config_TStack* clas;
	struct brl_linkedlist_TLink_obj* _brl_linkedlist_tlist__head;
	BBINT _brl_linkedlist_tlist__count;
};
extern struct BBClass__m_config_TStack _m_config_TStack;
void __m_config_TStringList_New(struct _m_config_TStringList_obj* o);
void __m_config_TStringList_Delete(struct _m_config_TStringList_obj* o);
typedef BBSTRING (*_m_config_TStringList_Join_S_m)(struct _m_config_TStringList_obj*,BBSTRING);
BBSTRING __m_config_TStringList_Join_S(struct _m_config_TStringList_obj*,BBSTRING);
struct BBClass__m_config_TStringList {
	struct BBClass_brl_linkedlist_TList*  super;
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
	brl_linkedlist_TList__pad_m m__pad;
	brl_linkedlist_TList_Clear_m m_Clear;
	brl_linkedlist_TList_IsEmpty_m m_IsEmpty;
	brl_linkedlist_TList_Contains_TObject_m m_Contains_TObject;
	brl_linkedlist_TList_AddFirst_TObject_m m_AddFirst_TObject;
	brl_linkedlist_TList_AddLast_TObject_m m_AddLast_TObject;
	brl_linkedlist_TList_First_m m_First;
	brl_linkedlist_TList_Last_m m_Last;
	brl_linkedlist_TList_RemoveFirst_m m_RemoveFirst;
	brl_linkedlist_TList_RemoveLast_m m_RemoveLast;
	brl_linkedlist_TList_FirstLink_m m_FirstLink;
	brl_linkedlist_TList_LastLink_m m_LastLink;
	brl_linkedlist_TList_InsertBeforeLink_TObjectTTLink_m m_InsertBeforeLink_TObjectTTLink;
	brl_linkedlist_TList_InsertAfterLink_TObjectTTLink_m m_InsertAfterLink_TObjectTTLink;
	brl_linkedlist_TList_FindLink_TObject_m m_FindLink_TObject;
	brl_linkedlist_TList_ValueAtIndex_i_m m_ValueAtIndex_i;
	brl_linkedlist_TList_Count_m m_Count;
	brl_linkedlist_TList_Remove_TObject_m m_Remove_TObject;
	brl_linkedlist_TList_Swap_TTList_m m_Swap_TTList;
	brl_linkedlist_TList_Copy_m m_Copy;
	brl_linkedlist_TList_Reverse_m m_Reverse;
	brl_linkedlist_TList_Reversed_m m_Reversed;
	brl_linkedlist_TList_Sort_iF_TObjectTObject_i__m m_Sort_iF_TObjectTObject_i_;
	brl_linkedlist_TList_ObjectEnumerator_m m_ObjectEnumerator;
	brl_linkedlist_TList_ToArray_m m_ToArray;
	brl_linkedlist_TList_FromArray_TTList_aTObject_f f_FromArray_TTList_aTObject;
	brl_linkedlist_TList_RemoveLink_TTLink_m m_RemoveLink_TTLink;
	_m_config_TStringList_Join_S_m m_Join_S;
};

struct _m_config_TStringList_obj {
	struct BBClass__m_config_TStringList* clas;
	struct brl_linkedlist_TLink_obj* _brl_linkedlist_tlist__head;
	BBINT _brl_linkedlist_tlist__count;
};
extern struct BBClass__m_config_TStringList _m_config_TStringList;
void __m_config_TKeyValue_New(struct _m_config_TKeyValue_obj* o);
BBINT __m_config_TKeyValue_Compare(struct _m_config_TKeyValue_obj* o, BBOBJECT otherObject);
typedef struct _m_config_TKeyValue_obj* (*_m_config_TKeyValue_Create_TObjectTObject_m)(struct _m_config_TKeyValue_obj*,BBOBJECT,BBOBJECT);
struct _m_config_TKeyValue_obj* __m_config_TKeyValue_Create_TObjectTObject(struct _m_config_TKeyValue_obj*,BBOBJECT,BBOBJECT);
struct BBClass__m_config_TKeyValue {
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
	_m_config_TKeyValue_Create_TObjectTObject_m m_Create_TObjectTObject;
};

struct _m_config_TKeyValue_obj {
	struct BBClass__m_config_TKeyValue* clas;
	BBOBJECT __m_config_tkeyvalue_key;
	BBOBJECT __m_config_tkeyvalue_value;
};
extern struct BBClass__m_config_TKeyValue _m_config_TKeyValue;
void __m_config_TUnorderedMap_New(struct _m_config_TUnorderedMap_obj* o);
typedef void (*_m_config_TUnorderedMap_Insert_TObjectTObject_m)(struct _m_config_TUnorderedMap_obj*,BBOBJECT,BBOBJECT);
void __m_config_TUnorderedMap_Insert_TObjectTObject(struct _m_config_TUnorderedMap_obj*,BBOBJECT,BBOBJECT);
typedef struct brl_linkedlist_TList_obj* (*_m_config_TUnorderedMap_Keys_m)(struct _m_config_TUnorderedMap_obj*);
struct brl_linkedlist_TList_obj* __m_config_TUnorderedMap_Keys(struct _m_config_TUnorderedMap_obj*);
typedef struct brl_linkedlist_TList_obj* (*_m_config_TUnorderedMap_Values_m)(struct _m_config_TUnorderedMap_obj*);
struct brl_linkedlist_TList_obj* __m_config_TUnorderedMap_Values(struct _m_config_TUnorderedMap_obj*);
typedef BBINT (*_m_config_TUnorderedMap_Contains_TObject_m)(struct _m_config_TUnorderedMap_obj*,BBOBJECT);
BBINT __m_config_TUnorderedMap_Contains_TObject(struct _m_config_TUnorderedMap_obj*,BBOBJECT);
typedef BBOBJECT (*_m_config_TUnorderedMap_ValueForKey_TObject_m)(struct _m_config_TUnorderedMap_obj*,BBOBJECT);
BBOBJECT __m_config_TUnorderedMap_ValueForKey_TObject(struct _m_config_TUnorderedMap_obj*,BBOBJECT);
struct BBClass__m_config_TUnorderedMap {
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
	_m_config_TUnorderedMap_Insert_TObjectTObject_m m_Insert_TObjectTObject;
	_m_config_TUnorderedMap_Keys_m m_Keys;
	_m_config_TUnorderedMap_Values_m m_Values;
	_m_config_TUnorderedMap_Contains_TObject_m m_Contains_TObject;
	_m_config_TUnorderedMap_ValueForKey_TObject_m m_ValueForKey_TObject;
};

struct _m_config_TUnorderedMap_obj {
	struct BBClass__m_config_TUnorderedMap* clas;
	struct brl_linkedlist_TList_obj* __m_config_tunorderedmap_list;
	struct brl_map_TMap_obj* __m_config_tunorderedmap_map;
	struct brl_linkedlist_TList_obj* __m_config_tunorderedmap_valueslist;
};
extern struct BBClass__m_config_TUnorderedMap _m_config_TUnorderedMap;
void __m_config_TTemplateRecord_New(struct _m_config_TTemplateRecord_obj* o);
BBSTRING __m_config_TTemplateRecord_ToString(struct _m_config_TTemplateRecord_obj* o);
typedef struct _m_config_TTemplateRecord_obj* (*_m_config_TTemplateRecord_Create_iSS_m)(struct _m_config_TTemplateRecord_obj*,BBINT,BBSTRING,BBSTRING);
struct _m_config_TTemplateRecord_obj* __m_config_TTemplateRecord_Create_iSS(struct _m_config_TTemplateRecord_obj*,BBINT,BBSTRING,BBSTRING);
typedef struct _m_config_TTemplateRecord_obj* (*_m_config_TTemplateRecord_Load_TTTemplateRecord_iSiS_f)(BBINT,BBSTRING,BBINT,BBSTRING);
struct _m_config_TTemplateRecord_obj* _m_config_TTemplateRecord_Load_TTTemplateRecord_iSiS(BBINT,BBSTRING,BBINT,BBSTRING);
struct BBClass__m_config_TTemplateRecord {
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
	_m_config_TTemplateRecord_Create_iSS_m m_Create_iSS;
	_m_config_TTemplateRecord_Load_TTTemplateRecord_iSiS_f f_Load_TTTemplateRecord_iSiS;
};

struct _m_config_TTemplateRecord_obj {
	struct BBClass__m_config_TTemplateRecord* clas;
	BBINT __m_config_ttemplaterecord_start;
	BBSTRING __m_config_ttemplaterecord_file;
	BBSTRING __m_config_ttemplaterecord_source;
};
extern struct BBClass__m_config_TTemplateRecord _m_config_TTemplateRecord;
void __m_config_TCallback_New(struct _m_config_TCallback_obj* o);
typedef void (*_m_config_TCallback_Callback_TObject_m)(struct _m_config_TCallback_obj*,BBOBJECT);
void __m_config_TCallback_Callback_TObject(struct _m_config_TCallback_obj*,BBOBJECT);
struct BBClass__m_config_TCallback {
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
	_m_config_TCallback_Callback_TObject_m m_Callback_TObject;
};

struct _m_config_TCallback_obj {
	struct BBClass__m_config_TCallback* clas;
};
extern struct BBClass__m_config_TCallback _m_config_TCallback;
void _m_config_PushErr(BBSTRING bbt_errInfo);
void _m_config_PopErr();
void _m_config_Err(BBSTRING bbt_err);
void _m_config_Warn(BBSTRING bbt_err);
BBSTRING _m_config_FormatError(BBSTRING bbt_path,BBINT bbt_line,BBINT bbt_char);
void _m_config_InternalErr(BBSTRING bbt_errorLocation);
BBINT _m_config_IsSpace(BBINT bbt_ch);
BBINT _m_config_IsDigit(BBINT bbt_ch);
BBINT _m_config_IsAlpha(BBINT bbt_ch);
BBINT _m_config_IsBinDigit(BBINT bbt_ch);
BBINT _m_config_IsHexDigit(BBINT bbt_ch);
void _m_config_Todo();
BBLONG _m_config_StringToLong(BBSTRING bbt_value);
BBINT _m_config_IsStandardFunc(BBSTRING bbt_func);
BBSTRING _m_config_mapSymbol(BBSTRING bbt_sym);
BBSTRING _m_config_EscapeString(BBSTRING bbt_str);
BBSTRING _m_config_LangEnquote(BBSTRING bbt_str);
BBSTRING _m_config_EscapeLines(BBSTRING bbt_str);
BBSTRING _m_config_BmxEnquote(BBSTRING bbt_str);
BBSTRING _m_config_BmxUnquote(BBSTRING bbt_str);
BBSTRING _m_config_MakeKeywords();
BBSTRING _m_config_FilePath(BBSTRING bbt_path);
BBSTRING _m_config_BuildHeaderName(BBSTRING bbt_path);
BBSTRING _m_config_FileMung(BBINT bbt_makeApp);
BBSTRING _m_config_ModuleHeaderFromIdent(BBSTRING bbt_ident,BBINT bbt_includePath);
BBSTRING _m_config_HeaderFile(BBSTRING bbt_path,BBSTRING bbt_mung);
BBSTRING _m_config_OutputFilePath(BBSTRING bbt_path,BBSTRING bbt_mung,BBSTRING bbt_suffix,BBINT bbt_bmxDir);
BBSTRING _m_config_HeaderComment();
extern void bmx_enum_next_power(BBINT bbt_char,BBLONG* bbt_val,BBLONG* bbt_ret);

#endif
