#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERSPICE_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERSPICE_H

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
class QsciLexerSpice;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerSpice QsciLexerSpice;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerSpice* QsciLexerSpice_new();
QsciLexerSpice* QsciLexerSpice_new2(QObject* parent);
void QsciLexerSpice_virtbase(QsciLexerSpice* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerSpice_MetaObject(const QsciLexerSpice* self);
void* QsciLexerSpice_Metacast(QsciLexerSpice* self, const char* param1);
struct miqt_string QsciLexerSpice_Tr(const char* s);
const char* QsciLexerSpice_Language(const QsciLexerSpice* self);
const char* QsciLexerSpice_Lexer(const QsciLexerSpice* self);
int QsciLexerSpice_BraceStyle(const QsciLexerSpice* self);
const char* QsciLexerSpice_Keywords(const QsciLexerSpice* self, int set);
QColor* QsciLexerSpice_DefaultColor(const QsciLexerSpice* self, int style);
QFont* QsciLexerSpice_DefaultFont(const QsciLexerSpice* self, int style);
struct miqt_string QsciLexerSpice_Description(const QsciLexerSpice* self, int style);
struct miqt_string QsciLexerSpice_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerSpice_Tr3(const char* s, const char* c, int n);
bool QsciLexerSpice_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerSpice_virtualbase_Language(const void* self);
bool QsciLexerSpice_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerSpice_virtualbase_Lexer(const void* self);
bool QsciLexerSpice_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerSpice_virtualbase_LexerId(const void* self);
bool QsciLexerSpice_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerSpice_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerSpice_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerSpice_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerSpice_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerSpice_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerSpice_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerSpice_virtualbase_BlockLookback(const void* self);
bool QsciLexerSpice_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerSpice_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerSpice_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerSpice_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerSpice_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerSpice_virtualbase_BraceStyle(const void* self);
bool QsciLexerSpice_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerSpice_virtualbase_CaseSensitive(const void* self);
bool QsciLexerSpice_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerSpice_virtualbase_Color(const void* self, int style);
bool QsciLexerSpice_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerSpice_virtualbase_EolFill(const void* self, int style);
bool QsciLexerSpice_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerSpice_virtualbase_Font(const void* self, int style);
bool QsciLexerSpice_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerSpice_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerSpice_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerSpice_virtualbase_Keywords(const void* self, int set);
bool QsciLexerSpice_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerSpice_virtualbase_DefaultStyle(const void* self);
bool QsciLexerSpice_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerSpice_virtualbase_Description(const void* self, int style);
bool QsciLexerSpice_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerSpice_virtualbase_Paper(const void* self, int style);
bool QsciLexerSpice_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerSpice_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerSpice_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerSpice_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerSpice_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerSpice_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerSpice_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerSpice_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerSpice_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerSpice_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerSpice_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerSpice_virtualbase_RefreshProperties(void* self);
bool QsciLexerSpice_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerSpice_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerSpice_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerSpice_virtualbase_WordCharacters(const void* self);
bool QsciLexerSpice_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerSpice_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerSpice_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerSpice_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerSpice_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerSpice_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerSpice_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerSpice_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerSpice_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerSpice_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerSpice_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerSpice_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerSpice_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerSpice_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerSpice_Delete(QsciLexerSpice* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
