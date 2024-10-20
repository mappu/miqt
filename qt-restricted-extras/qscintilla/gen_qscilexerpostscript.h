#ifndef GEN_QSCILEXERPOSTSCRIPT_H
#define GEN_QSCILEXERPOSTSCRIPT_H

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
class QsciLexerPostScript;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerPostScript QsciLexerPostScript;
#endif

QsciLexerPostScript* QsciLexerPostScript_new();
QsciLexerPostScript* QsciLexerPostScript_new2(QObject* parent);
QMetaObject* QsciLexerPostScript_MetaObject(const QsciLexerPostScript* self);
void* QsciLexerPostScript_Metacast(QsciLexerPostScript* self, const char* param1);
struct miqt_string QsciLexerPostScript_Tr(const char* s);
struct miqt_string QsciLexerPostScript_TrUtf8(const char* s);
const char* QsciLexerPostScript_Language(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_Lexer(const QsciLexerPostScript* self);
int QsciLexerPostScript_BraceStyle(const QsciLexerPostScript* self);
QColor* QsciLexerPostScript_DefaultColor(const QsciLexerPostScript* self, int style);
QFont* QsciLexerPostScript_DefaultFont(const QsciLexerPostScript* self, int style);
QColor* QsciLexerPostScript_DefaultPaper(const QsciLexerPostScript* self, int style);
const char* QsciLexerPostScript_Keywords(const QsciLexerPostScript* self, int set);
struct miqt_string QsciLexerPostScript_Description(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_RefreshProperties(QsciLexerPostScript* self);
bool QsciLexerPostScript_Tokenize(const QsciLexerPostScript* self);
int QsciLexerPostScript_Level(const QsciLexerPostScript* self);
bool QsciLexerPostScript_FoldCompact(const QsciLexerPostScript* self);
bool QsciLexerPostScript_FoldAtElse(const QsciLexerPostScript* self);
void QsciLexerPostScript_SetTokenize(QsciLexerPostScript* self, bool tokenize);
void QsciLexerPostScript_SetLevel(QsciLexerPostScript* self, int level);
void QsciLexerPostScript_SetFoldCompact(QsciLexerPostScript* self, bool fold);
void QsciLexerPostScript_SetFoldAtElse(QsciLexerPostScript* self, bool fold);
struct miqt_string QsciLexerPostScript_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerPostScript_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerPostScript_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerPostScript_TrUtf83(const char* s, const char* c, int n);
void QsciLexerPostScript_Delete(QsciLexerPostScript* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
