#ifndef GEN_QSCILEXERLUA_H
#define GEN_QSCILEXERLUA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QFont;
class QMetaObject;
class QObject;
class QsciLexerLua;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerLua QsciLexerLua;
#endif

QsciLexerLua* QsciLexerLua_new();
QsciLexerLua* QsciLexerLua_new2(QObject* parent);
QMetaObject* QsciLexerLua_MetaObject(const QsciLexerLua* self);
void* QsciLexerLua_Metacast(QsciLexerLua* self, const char* param1);
struct miqt_string QsciLexerLua_Tr(const char* s);
const char* QsciLexerLua_Language(const QsciLexerLua* self);
const char* QsciLexerLua_Lexer(const QsciLexerLua* self);
struct miqt_array QsciLexerLua_AutoCompletionWordSeparators(const QsciLexerLua* self);
const char* QsciLexerLua_BlockStart(const QsciLexerLua* self);
int QsciLexerLua_BraceStyle(const QsciLexerLua* self);
QColor* QsciLexerLua_DefaultColor(const QsciLexerLua* self, int style);
bool QsciLexerLua_DefaultEolFill(const QsciLexerLua* self, int style);
QFont* QsciLexerLua_DefaultFont(const QsciLexerLua* self, int style);
QColor* QsciLexerLua_DefaultPaper(const QsciLexerLua* self, int style);
const char* QsciLexerLua_Keywords(const QsciLexerLua* self, int set);
struct miqt_string QsciLexerLua_Description(const QsciLexerLua* self, int style);
void QsciLexerLua_RefreshProperties(QsciLexerLua* self);
bool QsciLexerLua_FoldCompact(const QsciLexerLua* self);
void QsciLexerLua_SetFoldCompact(QsciLexerLua* self, bool fold);
struct miqt_string QsciLexerLua_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerLua_Tr3(const char* s, const char* c, int n);
const char* QsciLexerLua_BlockStart1(const QsciLexerLua* self, int* style);
void QsciLexerLua_Delete(QsciLexerLua* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
