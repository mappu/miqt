#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERMARKDOWN_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERMARKDOWN_H

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
class QsciLexerMarkdown;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerMarkdown QsciLexerMarkdown;
#endif

QsciLexerMarkdown* QsciLexerMarkdown_new();
QsciLexerMarkdown* QsciLexerMarkdown_new2(QObject* parent);
QMetaObject* QsciLexerMarkdown_MetaObject(const QsciLexerMarkdown* self);
void* QsciLexerMarkdown_Metacast(QsciLexerMarkdown* self, const char* param1);
struct miqt_string QsciLexerMarkdown_Tr(const char* s);
struct miqt_string QsciLexerMarkdown_TrUtf8(const char* s);
const char* QsciLexerMarkdown_Language(const QsciLexerMarkdown* self);
const char* QsciLexerMarkdown_Lexer(const QsciLexerMarkdown* self);
QColor* QsciLexerMarkdown_DefaultColor(const QsciLexerMarkdown* self, int style);
QFont* QsciLexerMarkdown_DefaultFont(const QsciLexerMarkdown* self, int style);
QColor* QsciLexerMarkdown_DefaultPaper(const QsciLexerMarkdown* self, int style);
struct miqt_string QsciLexerMarkdown_Description(const QsciLexerMarkdown* self, int style);
struct miqt_string QsciLexerMarkdown_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerMarkdown_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerMarkdown_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerMarkdown_TrUtf83(const char* s, const char* c, int n);
void QsciLexerMarkdown_Delete(QsciLexerMarkdown* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
