#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERJSON_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERJSON_H

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
class QsciLexerJSON;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerJSON QsciLexerJSON;
#endif

QsciLexerJSON* QsciLexerJSON_new();
QsciLexerJSON* QsciLexerJSON_new2(QObject* parent);
QMetaObject* QsciLexerJSON_MetaObject(const QsciLexerJSON* self);
void* QsciLexerJSON_Metacast(QsciLexerJSON* self, const char* param1);
struct miqt_string QsciLexerJSON_Tr(const char* s);
struct miqt_string QsciLexerJSON_TrUtf8(const char* s);
const char* QsciLexerJSON_Language(const QsciLexerJSON* self);
const char* QsciLexerJSON_Lexer(const QsciLexerJSON* self);
QColor* QsciLexerJSON_DefaultColor(const QsciLexerJSON* self, int style);
bool QsciLexerJSON_DefaultEolFill(const QsciLexerJSON* self, int style);
QFont* QsciLexerJSON_DefaultFont(const QsciLexerJSON* self, int style);
QColor* QsciLexerJSON_DefaultPaper(const QsciLexerJSON* self, int style);
const char* QsciLexerJSON_Keywords(const QsciLexerJSON* self, int set);
struct miqt_string QsciLexerJSON_Description(const QsciLexerJSON* self, int style);
void QsciLexerJSON_RefreshProperties(QsciLexerJSON* self);
void QsciLexerJSON_SetHighlightComments(QsciLexerJSON* self, bool highlight);
bool QsciLexerJSON_HighlightComments(const QsciLexerJSON* self);
void QsciLexerJSON_SetHighlightEscapeSequences(QsciLexerJSON* self, bool highlight);
bool QsciLexerJSON_HighlightEscapeSequences(const QsciLexerJSON* self);
void QsciLexerJSON_SetFoldCompact(QsciLexerJSON* self, bool fold);
bool QsciLexerJSON_FoldCompact(const QsciLexerJSON* self);
struct miqt_string QsciLexerJSON_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerJSON_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerJSON_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerJSON_TrUtf83(const char* s, const char* c, int n);
void QsciLexerJSON_Delete(QsciLexerJSON* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
