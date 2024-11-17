#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERD_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERD_H

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
class QsciLexerD;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerD QsciLexerD;
#endif

QsciLexerD* QsciLexerD_new();
QsciLexerD* QsciLexerD_new2(QObject* parent);
QMetaObject* QsciLexerD_MetaObject(const QsciLexerD* self);
void* QsciLexerD_Metacast(QsciLexerD* self, const char* param1);
struct miqt_string QsciLexerD_Tr(const char* s);
struct miqt_string QsciLexerD_TrUtf8(const char* s);
const char* QsciLexerD_Language(const QsciLexerD* self);
const char* QsciLexerD_Lexer(const QsciLexerD* self);
struct miqt_array /* of struct miqt_string */  QsciLexerD_AutoCompletionWordSeparators(const QsciLexerD* self);
const char* QsciLexerD_BlockEnd(const QsciLexerD* self);
const char* QsciLexerD_BlockStart(const QsciLexerD* self);
const char* QsciLexerD_BlockStartKeyword(const QsciLexerD* self);
int QsciLexerD_BraceStyle(const QsciLexerD* self);
const char* QsciLexerD_WordCharacters(const QsciLexerD* self);
QColor* QsciLexerD_DefaultColor(const QsciLexerD* self, int style);
bool QsciLexerD_DefaultEolFill(const QsciLexerD* self, int style);
QFont* QsciLexerD_DefaultFont(const QsciLexerD* self, int style);
QColor* QsciLexerD_DefaultPaper(const QsciLexerD* self, int style);
const char* QsciLexerD_Keywords(const QsciLexerD* self, int set);
struct miqt_string QsciLexerD_Description(const QsciLexerD* self, int style);
void QsciLexerD_RefreshProperties(QsciLexerD* self);
bool QsciLexerD_FoldAtElse(const QsciLexerD* self);
bool QsciLexerD_FoldComments(const QsciLexerD* self);
bool QsciLexerD_FoldCompact(const QsciLexerD* self);
void QsciLexerD_SetFoldAtElse(QsciLexerD* self, bool fold);
void QsciLexerD_SetFoldComments(QsciLexerD* self, bool fold);
void QsciLexerD_SetFoldCompact(QsciLexerD* self, bool fold);
struct miqt_string QsciLexerD_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerD_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerD_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerD_TrUtf83(const char* s, const char* c, int n);
const char* QsciLexerD_BlockEnd1(const QsciLexerD* self, int* style);
const char* QsciLexerD_BlockStart1(const QsciLexerD* self, int* style);
const char* QsciLexerD_BlockStartKeyword1(const QsciLexerD* self, int* style);
void QsciLexerD_Delete(QsciLexerD* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
