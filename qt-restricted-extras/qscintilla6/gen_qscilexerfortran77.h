#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERFORTRAN77_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERFORTRAN77_H

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
class QsciLexerFortran77;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerFortran77 QsciLexerFortran77;
#endif

QsciLexerFortran77* QsciLexerFortran77_new();
QsciLexerFortran77* QsciLexerFortran77_new2(QObject* parent);
QMetaObject* QsciLexerFortran77_MetaObject(const QsciLexerFortran77* self);
void* QsciLexerFortran77_Metacast(QsciLexerFortran77* self, const char* param1);
struct miqt_string QsciLexerFortran77_Tr(const char* s);
const char* QsciLexerFortran77_Language(const QsciLexerFortran77* self);
const char* QsciLexerFortran77_Lexer(const QsciLexerFortran77* self);
int QsciLexerFortran77_BraceStyle(const QsciLexerFortran77* self);
QColor* QsciLexerFortran77_DefaultColor(const QsciLexerFortran77* self, int style);
bool QsciLexerFortran77_DefaultEolFill(const QsciLexerFortran77* self, int style);
QFont* QsciLexerFortran77_DefaultFont(const QsciLexerFortran77* self, int style);
QColor* QsciLexerFortran77_DefaultPaper(const QsciLexerFortran77* self, int style);
const char* QsciLexerFortran77_Keywords(const QsciLexerFortran77* self, int set);
struct miqt_string QsciLexerFortran77_Description(const QsciLexerFortran77* self, int style);
void QsciLexerFortran77_RefreshProperties(QsciLexerFortran77* self);
bool QsciLexerFortran77_FoldCompact(const QsciLexerFortran77* self);
void QsciLexerFortran77_SetFoldCompact(QsciLexerFortran77* self, bool fold);
struct miqt_string QsciLexerFortran77_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerFortran77_Tr3(const char* s, const char* c, int n);
void QsciLexerFortran77_Delete(QsciLexerFortran77* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
