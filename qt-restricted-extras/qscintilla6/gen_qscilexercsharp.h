#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERCSHARP_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERCSHARP_H

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
class QsciLexerCSharp;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerCPP QsciLexerCPP;
typedef struct QsciLexerCSharp QsciLexerCSharp;
#endif

void QsciLexerCSharp_new(QsciLexerCSharp** outptr_QsciLexerCSharp, QsciLexerCPP** outptr_QsciLexerCPP, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject);
void QsciLexerCSharp_new2(QObject* parent, QsciLexerCSharp** outptr_QsciLexerCSharp, QsciLexerCPP** outptr_QsciLexerCPP, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject);
QMetaObject* QsciLexerCSharp_MetaObject(const QsciLexerCSharp* self);
void* QsciLexerCSharp_Metacast(QsciLexerCSharp* self, const char* param1);
struct miqt_string QsciLexerCSharp_Tr(const char* s);
const char* QsciLexerCSharp_Language(const QsciLexerCSharp* self);
QColor* QsciLexerCSharp_DefaultColor(const QsciLexerCSharp* self, int style);
bool QsciLexerCSharp_DefaultEolFill(const QsciLexerCSharp* self, int style);
QFont* QsciLexerCSharp_DefaultFont(const QsciLexerCSharp* self, int style);
QColor* QsciLexerCSharp_DefaultPaper(const QsciLexerCSharp* self, int style);
const char* QsciLexerCSharp_Keywords(const QsciLexerCSharp* self, int set);
struct miqt_string QsciLexerCSharp_Description(const QsciLexerCSharp* self, int style);
struct miqt_string QsciLexerCSharp_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerCSharp_Tr3(const char* s, const char* c, int n);
void QsciLexerCSharp_override_virtual_SetFoldAtElse(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_SetFoldAtElse(void* self, bool fold);
void QsciLexerCSharp_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_SetFoldComments(void* self, bool fold);
void QsciLexerCSharp_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_SetFoldCompact(void* self, bool fold);
void QsciLexerCSharp_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_SetFoldPreprocessor(void* self, bool fold);
void QsciLexerCSharp_override_virtual_SetStylePreprocessor(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_SetStylePreprocessor(void* self, bool style);
void QsciLexerCSharp_Delete(QsciLexerCSharp* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
