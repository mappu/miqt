#ifndef GEN_QSCILEXERCOFFEESCRIPT_H
#define GEN_QSCILEXERCOFFEESCRIPT_H

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
class QsciLexerCoffeeScript;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerCoffeeScript QsciLexerCoffeeScript;
#endif

QsciLexerCoffeeScript* QsciLexerCoffeeScript_new();
QsciLexerCoffeeScript* QsciLexerCoffeeScript_new2(QObject* parent);
QMetaObject* QsciLexerCoffeeScript_MetaObject(const QsciLexerCoffeeScript* self);
void* QsciLexerCoffeeScript_Metacast(QsciLexerCoffeeScript* self, const char* param1);
struct miqt_string QsciLexerCoffeeScript_Tr(const char* s);
struct miqt_string QsciLexerCoffeeScript_TrUtf8(const char* s);
const char* QsciLexerCoffeeScript_Language(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_Lexer(const QsciLexerCoffeeScript* self);
struct miqt_array QsciLexerCoffeeScript_AutoCompletionWordSeparators(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_BlockEnd(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_BlockStart(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_BlockStartKeyword(const QsciLexerCoffeeScript* self);
int QsciLexerCoffeeScript_BraceStyle(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_WordCharacters(const QsciLexerCoffeeScript* self);
QColor* QsciLexerCoffeeScript_DefaultColor(const QsciLexerCoffeeScript* self, int style);
bool QsciLexerCoffeeScript_DefaultEolFill(const QsciLexerCoffeeScript* self, int style);
QFont* QsciLexerCoffeeScript_DefaultFont(const QsciLexerCoffeeScript* self, int style);
QColor* QsciLexerCoffeeScript_DefaultPaper(const QsciLexerCoffeeScript* self, int style);
const char* QsciLexerCoffeeScript_Keywords(const QsciLexerCoffeeScript* self, int set);
struct miqt_string QsciLexerCoffeeScript_Description(const QsciLexerCoffeeScript* self, int style);
void QsciLexerCoffeeScript_RefreshProperties(QsciLexerCoffeeScript* self);
bool QsciLexerCoffeeScript_DollarsAllowed(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetDollarsAllowed(QsciLexerCoffeeScript* self, bool allowed);
bool QsciLexerCoffeeScript_FoldComments(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetFoldComments(QsciLexerCoffeeScript* self, bool fold);
bool QsciLexerCoffeeScript_FoldCompact(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetFoldCompact(QsciLexerCoffeeScript* self, bool fold);
bool QsciLexerCoffeeScript_StylePreprocessor(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetStylePreprocessor(QsciLexerCoffeeScript* self, bool style);
struct miqt_string QsciLexerCoffeeScript_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerCoffeeScript_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerCoffeeScript_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerCoffeeScript_TrUtf83(const char* s, const char* c, int n);
const char* QsciLexerCoffeeScript_BlockEnd1(const QsciLexerCoffeeScript* self, int* style);
const char* QsciLexerCoffeeScript_BlockStart1(const QsciLexerCoffeeScript* self, int* style);
const char* QsciLexerCoffeeScript_BlockStartKeyword1(const QsciLexerCoffeeScript* self, int* style);
void QsciLexerCoffeeScript_Delete(QsciLexerCoffeeScript* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
