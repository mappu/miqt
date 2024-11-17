#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERMATLAB_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERMATLAB_H

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
class QsciLexerMatlab;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerMatlab QsciLexerMatlab;
#endif

QsciLexerMatlab* QsciLexerMatlab_new();
QsciLexerMatlab* QsciLexerMatlab_new2(QObject* parent);
QMetaObject* QsciLexerMatlab_MetaObject(const QsciLexerMatlab* self);
void* QsciLexerMatlab_Metacast(QsciLexerMatlab* self, const char* param1);
struct miqt_string QsciLexerMatlab_Tr(const char* s);
const char* QsciLexerMatlab_Language(const QsciLexerMatlab* self);
const char* QsciLexerMatlab_Lexer(const QsciLexerMatlab* self);
QColor* QsciLexerMatlab_DefaultColor(const QsciLexerMatlab* self, int style);
QFont* QsciLexerMatlab_DefaultFont(const QsciLexerMatlab* self, int style);
const char* QsciLexerMatlab_Keywords(const QsciLexerMatlab* self, int set);
struct miqt_string QsciLexerMatlab_Description(const QsciLexerMatlab* self, int style);
struct miqt_string QsciLexerMatlab_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerMatlab_Tr3(const char* s, const char* c, int n);
void QsciLexerMatlab_Delete(QsciLexerMatlab* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
