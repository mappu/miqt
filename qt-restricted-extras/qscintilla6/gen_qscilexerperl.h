#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPERL_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPERL_H

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
class QsciLexerPerl;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerPerl QsciLexerPerl;
#endif

QsciLexerPerl* QsciLexerPerl_new();
QsciLexerPerl* QsciLexerPerl_new2(QObject* parent);
QMetaObject* QsciLexerPerl_MetaObject(const QsciLexerPerl* self);
void* QsciLexerPerl_Metacast(QsciLexerPerl* self, const char* param1);
struct miqt_string QsciLexerPerl_Tr(const char* s);
const char* QsciLexerPerl_Language(const QsciLexerPerl* self);
const char* QsciLexerPerl_Lexer(const QsciLexerPerl* self);
struct miqt_array /* of struct miqt_string */  QsciLexerPerl_AutoCompletionWordSeparators(const QsciLexerPerl* self);
const char* QsciLexerPerl_BlockEnd(const QsciLexerPerl* self);
const char* QsciLexerPerl_BlockStart(const QsciLexerPerl* self);
int QsciLexerPerl_BraceStyle(const QsciLexerPerl* self);
const char* QsciLexerPerl_WordCharacters(const QsciLexerPerl* self);
QColor* QsciLexerPerl_DefaultColor(const QsciLexerPerl* self, int style);
bool QsciLexerPerl_DefaultEolFill(const QsciLexerPerl* self, int style);
QFont* QsciLexerPerl_DefaultFont(const QsciLexerPerl* self, int style);
QColor* QsciLexerPerl_DefaultPaper(const QsciLexerPerl* self, int style);
const char* QsciLexerPerl_Keywords(const QsciLexerPerl* self, int set);
struct miqt_string QsciLexerPerl_Description(const QsciLexerPerl* self, int style);
void QsciLexerPerl_RefreshProperties(QsciLexerPerl* self);
void QsciLexerPerl_SetFoldAtElse(QsciLexerPerl* self, bool fold);
bool QsciLexerPerl_FoldAtElse(const QsciLexerPerl* self);
bool QsciLexerPerl_FoldComments(const QsciLexerPerl* self);
bool QsciLexerPerl_FoldCompact(const QsciLexerPerl* self);
void QsciLexerPerl_SetFoldPackages(QsciLexerPerl* self, bool fold);
bool QsciLexerPerl_FoldPackages(const QsciLexerPerl* self);
void QsciLexerPerl_SetFoldPODBlocks(QsciLexerPerl* self, bool fold);
bool QsciLexerPerl_FoldPODBlocks(const QsciLexerPerl* self);
void QsciLexerPerl_SetFoldComments(QsciLexerPerl* self, bool fold);
void QsciLexerPerl_SetFoldCompact(QsciLexerPerl* self, bool fold);
struct miqt_string QsciLexerPerl_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerPerl_Tr3(const char* s, const char* c, int n);
const char* QsciLexerPerl_BlockEnd1(const QsciLexerPerl* self, int* style);
const char* QsciLexerPerl_BlockStart1(const QsciLexerPerl* self, int* style);
void QsciLexerPerl_Delete(QsciLexerPerl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
