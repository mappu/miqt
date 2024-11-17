#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXEREDIFACT_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXEREDIFACT_H

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
class QsciLexerEDIFACT;
#else
typedef struct QColor QColor;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerEDIFACT QsciLexerEDIFACT;
#endif

QsciLexerEDIFACT* QsciLexerEDIFACT_new();
QsciLexerEDIFACT* QsciLexerEDIFACT_new2(QObject* parent);
QMetaObject* QsciLexerEDIFACT_MetaObject(const QsciLexerEDIFACT* self);
void* QsciLexerEDIFACT_Metacast(QsciLexerEDIFACT* self, const char* param1);
struct miqt_string QsciLexerEDIFACT_Tr(const char* s);
struct miqt_string QsciLexerEDIFACT_TrUtf8(const char* s);
const char* QsciLexerEDIFACT_Language(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_Lexer(const QsciLexerEDIFACT* self);
QColor* QsciLexerEDIFACT_DefaultColor(const QsciLexerEDIFACT* self, int style);
struct miqt_string QsciLexerEDIFACT_Description(const QsciLexerEDIFACT* self, int style);
struct miqt_string QsciLexerEDIFACT_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerEDIFACT_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerEDIFACT_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerEDIFACT_TrUtf83(const char* s, const char* c, int n);
void QsciLexerEDIFACT_Delete(QsciLexerEDIFACT* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
