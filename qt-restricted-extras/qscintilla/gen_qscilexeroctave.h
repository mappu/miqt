#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXEROCTAVE_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXEROCTAVE_H

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
class QsciLexerOctave;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerOctave QsciLexerOctave;
#endif

QsciLexerOctave* QsciLexerOctave_new();
QsciLexerOctave* QsciLexerOctave_new2(QObject* parent);
QMetaObject* QsciLexerOctave_MetaObject(const QsciLexerOctave* self);
void* QsciLexerOctave_Metacast(QsciLexerOctave* self, const char* param1);
struct miqt_string QsciLexerOctave_Tr(const char* s);
struct miqt_string QsciLexerOctave_TrUtf8(const char* s);
const char* QsciLexerOctave_Language(const QsciLexerOctave* self);
const char* QsciLexerOctave_Lexer(const QsciLexerOctave* self);
const char* QsciLexerOctave_Keywords(const QsciLexerOctave* self, int set);
struct miqt_string QsciLexerOctave_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerOctave_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerOctave_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerOctave_TrUtf83(const char* s, const char* c, int n);
void QsciLexerOctave_Delete(QsciLexerOctave* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
