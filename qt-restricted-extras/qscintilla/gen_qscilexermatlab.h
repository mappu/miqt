#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERMATLAB_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERMATLAB_H

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
class QSettings;
class QsciLexer;
class QsciLexerMatlab;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerMatlab QsciLexerMatlab;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerMatlab* QsciLexerMatlab_new();
QsciLexerMatlab* QsciLexerMatlab_new2(QObject* parent);
void QsciLexerMatlab_virtbase(QsciLexerMatlab* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerMatlab_MetaObject(const QsciLexerMatlab* self);
void* QsciLexerMatlab_Metacast(QsciLexerMatlab* self, const char* param1);
struct miqt_string QsciLexerMatlab_Tr(const char* s);
struct miqt_string QsciLexerMatlab_TrUtf8(const char* s);
const char* QsciLexerMatlab_Language(const QsciLexerMatlab* self);
const char* QsciLexerMatlab_Lexer(const QsciLexerMatlab* self);
QColor* QsciLexerMatlab_DefaultColor(const QsciLexerMatlab* self, int style);
QFont* QsciLexerMatlab_DefaultFont(const QsciLexerMatlab* self, int style);
const char* QsciLexerMatlab_Keywords(const QsciLexerMatlab* self, int set);
struct miqt_string QsciLexerMatlab_Description(const QsciLexerMatlab* self, int style);
struct miqt_string QsciLexerMatlab_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerMatlab_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerMatlab_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerMatlab_TrUtf83(const char* s, const char* c, int n);
bool QsciLexerMatlab_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerMatlab_virtualbase_Language(const void* self);
bool QsciLexerMatlab_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerMatlab_virtualbase_Lexer(const void* self);
bool QsciLexerMatlab_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerMatlab_virtualbase_LexerId(const void* self);
bool QsciLexerMatlab_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerMatlab_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerMatlab_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerMatlab_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerMatlab_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerMatlab_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerMatlab_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerMatlab_virtualbase_BlockLookback(const void* self);
bool QsciLexerMatlab_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerMatlab_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerMatlab_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerMatlab_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerMatlab_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerMatlab_virtualbase_BraceStyle(const void* self);
bool QsciLexerMatlab_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerMatlab_virtualbase_CaseSensitive(const void* self);
bool QsciLexerMatlab_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerMatlab_virtualbase_Color(const void* self, int style);
bool QsciLexerMatlab_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerMatlab_virtualbase_EolFill(const void* self, int style);
bool QsciLexerMatlab_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerMatlab_virtualbase_Font(const void* self, int style);
bool QsciLexerMatlab_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerMatlab_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerMatlab_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerMatlab_virtualbase_Keywords(const void* self, int set);
bool QsciLexerMatlab_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerMatlab_virtualbase_DefaultStyle(const void* self);
bool QsciLexerMatlab_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerMatlab_virtualbase_Description(const void* self, int style);
bool QsciLexerMatlab_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerMatlab_virtualbase_Paper(const void* self, int style);
bool QsciLexerMatlab_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerMatlab_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerMatlab_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerMatlab_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerMatlab_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerMatlab_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerMatlab_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerMatlab_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerMatlab_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerMatlab_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerMatlab_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerMatlab_virtualbase_RefreshProperties(void* self);
bool QsciLexerMatlab_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerMatlab_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerMatlab_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerMatlab_virtualbase_WordCharacters(const void* self);
bool QsciLexerMatlab_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerMatlab_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerMatlab_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerMatlab_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerMatlab_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerMatlab_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerMatlab_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerMatlab_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerMatlab_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerMatlab_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerMatlab_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerMatlab_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerMatlab_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerMatlab_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerMatlab_Delete(QsciLexerMatlab* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
