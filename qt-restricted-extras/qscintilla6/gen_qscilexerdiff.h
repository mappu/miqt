#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERDIFF_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERDIFF_H

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
class QsciLexerDiff;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerDiff QsciLexerDiff;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerDiff* QsciLexerDiff_new();
QsciLexerDiff* QsciLexerDiff_new2(QObject* parent);
void QsciLexerDiff_virtbase(QsciLexerDiff* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerDiff_MetaObject(const QsciLexerDiff* self);
void* QsciLexerDiff_Metacast(QsciLexerDiff* self, const char* param1);
struct miqt_string QsciLexerDiff_Tr(const char* s);
const char* QsciLexerDiff_Language(const QsciLexerDiff* self);
const char* QsciLexerDiff_Lexer(const QsciLexerDiff* self);
const char* QsciLexerDiff_WordCharacters(const QsciLexerDiff* self);
QColor* QsciLexerDiff_DefaultColor(const QsciLexerDiff* self, int style);
struct miqt_string QsciLexerDiff_Description(const QsciLexerDiff* self, int style);
struct miqt_string QsciLexerDiff_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerDiff_Tr3(const char* s, const char* c, int n);
void QsciLexerDiff_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerDiff_virtualbase_Language(const void* self);
void QsciLexerDiff_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerDiff_virtualbase_Lexer(const void* self);
void QsciLexerDiff_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerDiff_virtualbase_LexerId(const void* self);
void QsciLexerDiff_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerDiff_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerDiff_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerDiff_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerDiff_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerDiff_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerDiff_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerDiff_virtualbase_BlockLookback(const void* self);
void QsciLexerDiff_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerDiff_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerDiff_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerDiff_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerDiff_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerDiff_virtualbase_BraceStyle(const void* self);
void QsciLexerDiff_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerDiff_virtualbase_CaseSensitive(const void* self);
void QsciLexerDiff_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerDiff_virtualbase_Color(const void* self, int style);
void QsciLexerDiff_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerDiff_virtualbase_EolFill(const void* self, int style);
void QsciLexerDiff_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerDiff_virtualbase_Font(const void* self, int style);
void QsciLexerDiff_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerDiff_virtualbase_IndentationGuideView(const void* self);
void QsciLexerDiff_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerDiff_virtualbase_Keywords(const void* self, int set);
void QsciLexerDiff_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerDiff_virtualbase_DefaultStyle(const void* self);
void QsciLexerDiff_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerDiff_virtualbase_Description(const void* self, int style);
void QsciLexerDiff_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerDiff_virtualbase_Paper(const void* self, int style);
void QsciLexerDiff_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerDiff_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerDiff_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerDiff_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerDiff_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerDiff_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerDiff_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerDiff_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerDiff_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerDiff_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerDiff_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerDiff_virtualbase_RefreshProperties(void* self);
void QsciLexerDiff_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerDiff_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerDiff_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerDiff_virtualbase_WordCharacters(const void* self);
void QsciLexerDiff_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerDiff_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerDiff_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerDiff_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerDiff_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerDiff_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerDiff_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerDiff_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerDiff_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerDiff_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerDiff_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerDiff_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerDiff_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerDiff_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerDiff_Delete(QsciLexerDiff* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
