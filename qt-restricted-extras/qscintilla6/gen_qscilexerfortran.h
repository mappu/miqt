#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERFORTRAN_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERFORTRAN_H

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
class QsciLexer;
class QsciLexerFortran;
class QsciLexerFortran77;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerFortran QsciLexerFortran;
typedef struct QsciLexerFortran77 QsciLexerFortran77;
#endif

QsciLexerFortran* QsciLexerFortran_new();
QsciLexerFortran* QsciLexerFortran_new2(QObject* parent);
void QsciLexerFortran_virtbase(QsciLexerFortran* src, QsciLexerFortran77** outptr_QsciLexerFortran77);
QMetaObject* QsciLexerFortran_MetaObject(const QsciLexerFortran* self);
void* QsciLexerFortran_Metacast(QsciLexerFortran* self, const char* param1);
struct miqt_string QsciLexerFortran_Tr(const char* s);
const char* QsciLexerFortran_Language(const QsciLexerFortran* self);
const char* QsciLexerFortran_Lexer(const QsciLexerFortran* self);
const char* QsciLexerFortran_Keywords(const QsciLexerFortran* self, int set);
struct miqt_string QsciLexerFortran_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerFortran_Tr3(const char* s, const char* c, int n);
bool QsciLexerFortran_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerFortran_virtualbase_SetFoldCompact(void* self, bool fold);
void QsciLexerFortran_Delete(QsciLexerFortran* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
