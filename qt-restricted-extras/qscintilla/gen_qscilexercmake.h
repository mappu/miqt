#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCMAKE_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCMAKE_H

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
class QsciLexerCMake;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerCMake QsciLexerCMake;
#endif

QsciLexerCMake* QsciLexerCMake_new();
QsciLexerCMake* QsciLexerCMake_new2(QObject* parent);
QMetaObject* QsciLexerCMake_MetaObject(const QsciLexerCMake* self);
void* QsciLexerCMake_Metacast(QsciLexerCMake* self, const char* param1);
struct miqt_string QsciLexerCMake_Tr(const char* s);
struct miqt_string QsciLexerCMake_TrUtf8(const char* s);
const char* QsciLexerCMake_Language(const QsciLexerCMake* self);
const char* QsciLexerCMake_Lexer(const QsciLexerCMake* self);
QColor* QsciLexerCMake_DefaultColor(const QsciLexerCMake* self, int style);
QFont* QsciLexerCMake_DefaultFont(const QsciLexerCMake* self, int style);
QColor* QsciLexerCMake_DefaultPaper(const QsciLexerCMake* self, int style);
const char* QsciLexerCMake_Keywords(const QsciLexerCMake* self, int set);
struct miqt_string QsciLexerCMake_Description(const QsciLexerCMake* self, int style);
void QsciLexerCMake_RefreshProperties(QsciLexerCMake* self);
bool QsciLexerCMake_FoldAtElse(const QsciLexerCMake* self);
void QsciLexerCMake_SetFoldAtElse(QsciLexerCMake* self, bool fold);
struct miqt_string QsciLexerCMake_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerCMake_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerCMake_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerCMake_TrUtf83(const char* s, const char* c, int n);
void QsciLexerCMake_Delete(QsciLexerCMake* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
