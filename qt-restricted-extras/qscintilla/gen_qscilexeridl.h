#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERIDL_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERIDL_H

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
class QsciLexer;
class QsciLexerCPP;
class QsciLexerIDL;
#else
typedef struct QColor QColor;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerCPP QsciLexerCPP;
typedef struct QsciLexerIDL QsciLexerIDL;
#endif

QsciLexerIDL* QsciLexerIDL_new();
QsciLexerIDL* QsciLexerIDL_new2(QObject* parent);
void QsciLexerIDL_virtbase(QsciLexerIDL* src, QsciLexerCPP** outptr_QsciLexerCPP);
QMetaObject* QsciLexerIDL_MetaObject(const QsciLexerIDL* self);
void* QsciLexerIDL_Metacast(QsciLexerIDL* self, const char* param1);
struct miqt_string QsciLexerIDL_Tr(const char* s);
struct miqt_string QsciLexerIDL_TrUtf8(const char* s);
const char* QsciLexerIDL_Language(const QsciLexerIDL* self);
QColor* QsciLexerIDL_DefaultColor(const QsciLexerIDL* self, int style);
const char* QsciLexerIDL_Keywords(const QsciLexerIDL* self, int set);
struct miqt_string QsciLexerIDL_Description(const QsciLexerIDL* self, int style);
struct miqt_string QsciLexerIDL_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerIDL_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerIDL_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerIDL_TrUtf83(const char* s, const char* c, int n);
bool QsciLexerIDL_override_virtual_SetFoldAtElse(void* self, intptr_t slot);
void QsciLexerIDL_virtualbase_SetFoldAtElse(void* self, bool fold);
bool QsciLexerIDL_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerIDL_virtualbase_SetFoldComments(void* self, bool fold);
bool QsciLexerIDL_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerIDL_virtualbase_SetFoldCompact(void* self, bool fold);
bool QsciLexerIDL_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerIDL_virtualbase_SetFoldPreprocessor(void* self, bool fold);
bool QsciLexerIDL_override_virtual_SetStylePreprocessor(void* self, intptr_t slot);
void QsciLexerIDL_virtualbase_SetStylePreprocessor(void* self, bool style);
void QsciLexerIDL_Delete(QsciLexerIDL* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
