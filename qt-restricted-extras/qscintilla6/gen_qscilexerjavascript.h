#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERJAVASCRIPT_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERJAVASCRIPT_H

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
class QsciLexer;
class QsciLexerCPP;
class QsciLexerJavaScript;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerCPP QsciLexerCPP;
typedef struct QsciLexerJavaScript QsciLexerJavaScript;
#endif

QsciLexerJavaScript* QsciLexerJavaScript_new();
QsciLexerJavaScript* QsciLexerJavaScript_new2(QObject* parent);
void QsciLexerJavaScript_virtbase(QsciLexerJavaScript* src, QsciLexerCPP** outptr_QsciLexerCPP);
QMetaObject* QsciLexerJavaScript_MetaObject(const QsciLexerJavaScript* self);
void* QsciLexerJavaScript_Metacast(QsciLexerJavaScript* self, const char* param1);
struct miqt_string QsciLexerJavaScript_Tr(const char* s);
const char* QsciLexerJavaScript_Language(const QsciLexerJavaScript* self);
QColor* QsciLexerJavaScript_DefaultColor(const QsciLexerJavaScript* self, int style);
bool QsciLexerJavaScript_DefaultEolFill(const QsciLexerJavaScript* self, int style);
QFont* QsciLexerJavaScript_DefaultFont(const QsciLexerJavaScript* self, int style);
QColor* QsciLexerJavaScript_DefaultPaper(const QsciLexerJavaScript* self, int style);
const char* QsciLexerJavaScript_Keywords(const QsciLexerJavaScript* self, int set);
struct miqt_string QsciLexerJavaScript_Description(const QsciLexerJavaScript* self, int style);
struct miqt_string QsciLexerJavaScript_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerJavaScript_Tr3(const char* s, const char* c, int n);
bool QsciLexerJavaScript_override_virtual_SetFoldAtElse(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetFoldAtElse(void* self, bool fold);
bool QsciLexerJavaScript_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetFoldComments(void* self, bool fold);
bool QsciLexerJavaScript_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetFoldCompact(void* self, bool fold);
bool QsciLexerJavaScript_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetFoldPreprocessor(void* self, bool fold);
bool QsciLexerJavaScript_override_virtual_SetStylePreprocessor(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetStylePreprocessor(void* self, bool style);
void QsciLexerJavaScript_Delete(QsciLexerJavaScript* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
