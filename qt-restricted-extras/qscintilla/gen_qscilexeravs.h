#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERAVS_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERAVS_H

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
class QsciLexerAVS;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerAVS QsciLexerAVS;
#endif

QsciLexerAVS* QsciLexerAVS_new();
QsciLexerAVS* QsciLexerAVS_new2(QObject* parent);
QMetaObject* QsciLexerAVS_MetaObject(const QsciLexerAVS* self);
void* QsciLexerAVS_Metacast(QsciLexerAVS* self, const char* param1);
struct miqt_string QsciLexerAVS_Tr(const char* s);
struct miqt_string QsciLexerAVS_TrUtf8(const char* s);
const char* QsciLexerAVS_Language(const QsciLexerAVS* self);
const char* QsciLexerAVS_Lexer(const QsciLexerAVS* self);
int QsciLexerAVS_BraceStyle(const QsciLexerAVS* self);
const char* QsciLexerAVS_WordCharacters(const QsciLexerAVS* self);
QColor* QsciLexerAVS_DefaultColor(const QsciLexerAVS* self, int style);
QFont* QsciLexerAVS_DefaultFont(const QsciLexerAVS* self, int style);
const char* QsciLexerAVS_Keywords(const QsciLexerAVS* self, int set);
struct miqt_string QsciLexerAVS_Description(const QsciLexerAVS* self, int style);
void QsciLexerAVS_RefreshProperties(QsciLexerAVS* self);
bool QsciLexerAVS_FoldComments(const QsciLexerAVS* self);
bool QsciLexerAVS_FoldCompact(const QsciLexerAVS* self);
void QsciLexerAVS_SetFoldComments(QsciLexerAVS* self, bool fold);
void QsciLexerAVS_SetFoldCompact(QsciLexerAVS* self, bool fold);
struct miqt_string QsciLexerAVS_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerAVS_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerAVS_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerAVS_TrUtf83(const char* s, const char* c, int n);
void QsciLexerAVS_Delete(QsciLexerAVS* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
