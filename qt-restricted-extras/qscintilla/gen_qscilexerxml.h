#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERXML_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERXML_H

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
class QsciLexerXML;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerXML QsciLexerXML;
#endif

QsciLexerXML* QsciLexerXML_new();
QsciLexerXML* QsciLexerXML_new2(QObject* parent);
QMetaObject* QsciLexerXML_MetaObject(const QsciLexerXML* self);
void* QsciLexerXML_Metacast(QsciLexerXML* self, const char* param1);
struct miqt_string QsciLexerXML_Tr(const char* s);
struct miqt_string QsciLexerXML_TrUtf8(const char* s);
const char* QsciLexerXML_Language(const QsciLexerXML* self);
const char* QsciLexerXML_Lexer(const QsciLexerXML* self);
QColor* QsciLexerXML_DefaultColor(const QsciLexerXML* self, int style);
bool QsciLexerXML_DefaultEolFill(const QsciLexerXML* self, int style);
QFont* QsciLexerXML_DefaultFont(const QsciLexerXML* self, int style);
QColor* QsciLexerXML_DefaultPaper(const QsciLexerXML* self, int style);
const char* QsciLexerXML_Keywords(const QsciLexerXML* self, int set);
void QsciLexerXML_RefreshProperties(QsciLexerXML* self);
void QsciLexerXML_SetScriptsStyled(QsciLexerXML* self, bool styled);
bool QsciLexerXML_ScriptsStyled(const QsciLexerXML* self);
struct miqt_string QsciLexerXML_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerXML_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerXML_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerXML_TrUtf83(const char* s, const char* c, int n);
void QsciLexerXML_Delete(QsciLexerXML* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
