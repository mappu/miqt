#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERFORTRAN_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERFORTRAN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QsciLexerFortran;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerFortran QsciLexerFortran;
#endif

QsciLexerFortran* QsciLexerFortran_new();
QsciLexerFortran* QsciLexerFortran_new2(QObject* parent);
QMetaObject* QsciLexerFortran_MetaObject(const QsciLexerFortran* self);
void* QsciLexerFortran_Metacast(QsciLexerFortran* self, const char* param1);
struct miqt_string QsciLexerFortran_Tr(const char* s);
struct miqt_string QsciLexerFortran_TrUtf8(const char* s);
const char* QsciLexerFortran_Language(const QsciLexerFortran* self);
const char* QsciLexerFortran_Lexer(const QsciLexerFortran* self);
const char* QsciLexerFortran_Keywords(const QsciLexerFortran* self, int set);
struct miqt_string QsciLexerFortran_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerFortran_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerFortran_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerFortran_TrUtf83(const char* s, const char* c, int n);
void QsciLexerFortran_Delete(QsciLexerFortran* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
