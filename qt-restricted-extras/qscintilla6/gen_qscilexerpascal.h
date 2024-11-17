#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPASCAL_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPASCAL_H

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
class QsciLexerPascal;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerPascal QsciLexerPascal;
#endif

QsciLexerPascal* QsciLexerPascal_new();
QsciLexerPascal* QsciLexerPascal_new2(QObject* parent);
QMetaObject* QsciLexerPascal_MetaObject(const QsciLexerPascal* self);
void* QsciLexerPascal_Metacast(QsciLexerPascal* self, const char* param1);
struct miqt_string QsciLexerPascal_Tr(const char* s);
const char* QsciLexerPascal_Language(const QsciLexerPascal* self);
const char* QsciLexerPascal_Lexer(const QsciLexerPascal* self);
struct miqt_array /* of struct miqt_string */  QsciLexerPascal_AutoCompletionWordSeparators(const QsciLexerPascal* self);
const char* QsciLexerPascal_BlockEnd(const QsciLexerPascal* self);
const char* QsciLexerPascal_BlockStart(const QsciLexerPascal* self);
const char* QsciLexerPascal_BlockStartKeyword(const QsciLexerPascal* self);
int QsciLexerPascal_BraceStyle(const QsciLexerPascal* self);
QColor* QsciLexerPascal_DefaultColor(const QsciLexerPascal* self, int style);
bool QsciLexerPascal_DefaultEolFill(const QsciLexerPascal* self, int style);
QFont* QsciLexerPascal_DefaultFont(const QsciLexerPascal* self, int style);
QColor* QsciLexerPascal_DefaultPaper(const QsciLexerPascal* self, int style);
const char* QsciLexerPascal_Keywords(const QsciLexerPascal* self, int set);
struct miqt_string QsciLexerPascal_Description(const QsciLexerPascal* self, int style);
void QsciLexerPascal_RefreshProperties(QsciLexerPascal* self);
bool QsciLexerPascal_FoldComments(const QsciLexerPascal* self);
bool QsciLexerPascal_FoldCompact(const QsciLexerPascal* self);
bool QsciLexerPascal_FoldPreprocessor(const QsciLexerPascal* self);
void QsciLexerPascal_SetSmartHighlighting(QsciLexerPascal* self, bool enabled);
bool QsciLexerPascal_SmartHighlighting(const QsciLexerPascal* self);
void QsciLexerPascal_SetFoldComments(QsciLexerPascal* self, bool fold);
void QsciLexerPascal_SetFoldCompact(QsciLexerPascal* self, bool fold);
void QsciLexerPascal_SetFoldPreprocessor(QsciLexerPascal* self, bool fold);
struct miqt_string QsciLexerPascal_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerPascal_Tr3(const char* s, const char* c, int n);
const char* QsciLexerPascal_BlockEnd1(const QsciLexerPascal* self, int* style);
const char* QsciLexerPascal_BlockStart1(const QsciLexerPascal* self, int* style);
const char* QsciLexerPascal_BlockStartKeyword1(const QsciLexerPascal* self, int* style);
void QsciLexerPascal_Delete(QsciLexerPascal* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
