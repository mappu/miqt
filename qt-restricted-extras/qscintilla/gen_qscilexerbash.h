#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERBASH_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERBASH_H

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
class QsciLexerBash;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerBash QsciLexerBash;
#endif

QsciLexerBash* QsciLexerBash_new();
QsciLexerBash* QsciLexerBash_new2(QObject* parent);
QMetaObject* QsciLexerBash_MetaObject(const QsciLexerBash* self);
void* QsciLexerBash_Metacast(QsciLexerBash* self, const char* param1);
struct miqt_string QsciLexerBash_Tr(const char* s);
struct miqt_string QsciLexerBash_TrUtf8(const char* s);
const char* QsciLexerBash_Language(const QsciLexerBash* self);
const char* QsciLexerBash_Lexer(const QsciLexerBash* self);
int QsciLexerBash_BraceStyle(const QsciLexerBash* self);
const char* QsciLexerBash_WordCharacters(const QsciLexerBash* self);
QColor* QsciLexerBash_DefaultColor(const QsciLexerBash* self, int style);
bool QsciLexerBash_DefaultEolFill(const QsciLexerBash* self, int style);
QFont* QsciLexerBash_DefaultFont(const QsciLexerBash* self, int style);
QColor* QsciLexerBash_DefaultPaper(const QsciLexerBash* self, int style);
const char* QsciLexerBash_Keywords(const QsciLexerBash* self, int set);
struct miqt_string QsciLexerBash_Description(const QsciLexerBash* self, int style);
void QsciLexerBash_RefreshProperties(QsciLexerBash* self);
bool QsciLexerBash_FoldComments(const QsciLexerBash* self);
bool QsciLexerBash_FoldCompact(const QsciLexerBash* self);
void QsciLexerBash_SetFoldComments(QsciLexerBash* self, bool fold);
void QsciLexerBash_SetFoldCompact(QsciLexerBash* self, bool fold);
struct miqt_string QsciLexerBash_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerBash_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerBash_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerBash_TrUtf83(const char* s, const char* c, int n);
void QsciLexerBash_Delete(QsciLexerBash* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
