#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERTEX_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERTEX_H

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
class QMetaObject;
class QObject;
class QsciLexerTeX;
#else
typedef struct QColor QColor;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerTeX QsciLexerTeX;
#endif

QsciLexerTeX* QsciLexerTeX_new();
QsciLexerTeX* QsciLexerTeX_new2(QObject* parent);
QMetaObject* QsciLexerTeX_MetaObject(const QsciLexerTeX* self);
void* QsciLexerTeX_Metacast(QsciLexerTeX* self, const char* param1);
struct miqt_string QsciLexerTeX_Tr(const char* s);
const char* QsciLexerTeX_Language(const QsciLexerTeX* self);
const char* QsciLexerTeX_Lexer(const QsciLexerTeX* self);
const char* QsciLexerTeX_WordCharacters(const QsciLexerTeX* self);
QColor* QsciLexerTeX_DefaultColor(const QsciLexerTeX* self, int style);
const char* QsciLexerTeX_Keywords(const QsciLexerTeX* self, int set);
struct miqt_string QsciLexerTeX_Description(const QsciLexerTeX* self, int style);
void QsciLexerTeX_RefreshProperties(QsciLexerTeX* self);
void QsciLexerTeX_SetFoldComments(QsciLexerTeX* self, bool fold);
bool QsciLexerTeX_FoldComments(const QsciLexerTeX* self);
void QsciLexerTeX_SetFoldCompact(QsciLexerTeX* self, bool fold);
bool QsciLexerTeX_FoldCompact(const QsciLexerTeX* self);
void QsciLexerTeX_SetProcessComments(QsciLexerTeX* self, bool enable);
bool QsciLexerTeX_ProcessComments(const QsciLexerTeX* self);
void QsciLexerTeX_SetProcessIf(QsciLexerTeX* self, bool enable);
bool QsciLexerTeX_ProcessIf(const QsciLexerTeX* self);
struct miqt_string QsciLexerTeX_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerTeX_Tr3(const char* s, const char* c, int n);
void QsciLexerTeX_Delete(QsciLexerTeX* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
