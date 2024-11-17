#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERDIFF_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERDIFF_H

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
class QsciLexerDiff;
#else
typedef struct QColor QColor;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerDiff QsciLexerDiff;
#endif

QsciLexerDiff* QsciLexerDiff_new();
QsciLexerDiff* QsciLexerDiff_new2(QObject* parent);
QMetaObject* QsciLexerDiff_MetaObject(const QsciLexerDiff* self);
void* QsciLexerDiff_Metacast(QsciLexerDiff* self, const char* param1);
struct miqt_string QsciLexerDiff_Tr(const char* s);
struct miqt_string QsciLexerDiff_TrUtf8(const char* s);
const char* QsciLexerDiff_Language(const QsciLexerDiff* self);
const char* QsciLexerDiff_Lexer(const QsciLexerDiff* self);
const char* QsciLexerDiff_WordCharacters(const QsciLexerDiff* self);
QColor* QsciLexerDiff_DefaultColor(const QsciLexerDiff* self, int style);
struct miqt_string QsciLexerDiff_Description(const QsciLexerDiff* self, int style);
struct miqt_string QsciLexerDiff_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerDiff_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerDiff_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerDiff_TrUtf83(const char* s, const char* c, int n);
void QsciLexerDiff_Delete(QsciLexerDiff* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
