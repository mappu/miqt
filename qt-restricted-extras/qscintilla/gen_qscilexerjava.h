#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERJAVA_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERJAVA_H

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
class QsciLexerCPP;
class QsciLexerJava;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerCPP QsciLexerCPP;
typedef struct QsciLexerJava QsciLexerJava;
#endif

QsciLexerJava* QsciLexerJava_new();
QsciLexerJava* QsciLexerJava_new2(QObject* parent);
void QsciLexerJava_virtbase(QsciLexerJava* src, QsciLexerCPP** outptr_QsciLexerCPP);
QMetaObject* QsciLexerJava_MetaObject(const QsciLexerJava* self);
void* QsciLexerJava_Metacast(QsciLexerJava* self, const char* param1);
struct miqt_string QsciLexerJava_Tr(const char* s);
struct miqt_string QsciLexerJava_TrUtf8(const char* s);
const char* QsciLexerJava_Language(const QsciLexerJava* self);
const char* QsciLexerJava_Keywords(const QsciLexerJava* self, int set);
struct miqt_string QsciLexerJava_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerJava_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerJava_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerJava_TrUtf83(const char* s, const char* c, int n);
void QsciLexerJava_override_virtual_SetFoldAtElse(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetFoldAtElse(void* self, bool fold);
void QsciLexerJava_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetFoldComments(void* self, bool fold);
void QsciLexerJava_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetFoldCompact(void* self, bool fold);
void QsciLexerJava_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetFoldPreprocessor(void* self, bool fold);
void QsciLexerJava_override_virtual_SetStylePreprocessor(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetStylePreprocessor(void* self, bool style);
void QsciLexerJava_Delete(QsciLexerJava* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
