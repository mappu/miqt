#ifndef GEN_QSCILEXERRUBY_H
#define GEN_QSCILEXERRUBY_H

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
class QsciLexerRuby;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerRuby QsciLexerRuby;
#endif

QsciLexerRuby* QsciLexerRuby_new();
QsciLexerRuby* QsciLexerRuby_new2(QObject* parent);
QMetaObject* QsciLexerRuby_MetaObject(const QsciLexerRuby* self);
void* QsciLexerRuby_Metacast(QsciLexerRuby* self, const char* param1);
struct miqt_string QsciLexerRuby_Tr(const char* s);
const char* QsciLexerRuby_Language(const QsciLexerRuby* self);
const char* QsciLexerRuby_Lexer(const QsciLexerRuby* self);
const char* QsciLexerRuby_BlockEnd(const QsciLexerRuby* self);
const char* QsciLexerRuby_BlockStart(const QsciLexerRuby* self);
const char* QsciLexerRuby_BlockStartKeyword(const QsciLexerRuby* self);
int QsciLexerRuby_BraceStyle(const QsciLexerRuby* self);
QColor* QsciLexerRuby_DefaultColor(const QsciLexerRuby* self, int style);
bool QsciLexerRuby_DefaultEolFill(const QsciLexerRuby* self, int style);
QFont* QsciLexerRuby_DefaultFont(const QsciLexerRuby* self, int style);
QColor* QsciLexerRuby_DefaultPaper(const QsciLexerRuby* self, int style);
const char* QsciLexerRuby_Keywords(const QsciLexerRuby* self, int set);
struct miqt_string QsciLexerRuby_Description(const QsciLexerRuby* self, int style);
void QsciLexerRuby_RefreshProperties(QsciLexerRuby* self);
void QsciLexerRuby_SetFoldComments(QsciLexerRuby* self, bool fold);
bool QsciLexerRuby_FoldComments(const QsciLexerRuby* self);
void QsciLexerRuby_SetFoldCompact(QsciLexerRuby* self, bool fold);
bool QsciLexerRuby_FoldCompact(const QsciLexerRuby* self);
struct miqt_string QsciLexerRuby_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerRuby_Tr3(const char* s, const char* c, int n);
const char* QsciLexerRuby_BlockEnd1(const QsciLexerRuby* self, int* style);
const char* QsciLexerRuby_BlockStart1(const QsciLexerRuby* self, int* style);
const char* QsciLexerRuby_BlockStartKeyword1(const QsciLexerRuby* self, int* style);
void QsciLexerRuby_Delete(QsciLexerRuby* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
