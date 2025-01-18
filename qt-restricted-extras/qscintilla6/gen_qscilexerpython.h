#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPYTHON_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPYTHON_H

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
class QsciLexerPython;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerPython QsciLexerPython;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPython* QsciLexerPython_new();
QsciLexerPython* QsciLexerPython_new2(QObject* parent);
void QsciLexerPython_virtbase(QsciLexerPython* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerPython_MetaObject(const QsciLexerPython* self);
void* QsciLexerPython_Metacast(QsciLexerPython* self, const char* param1);
struct miqt_string QsciLexerPython_Tr(const char* s);
const char* QsciLexerPython_Language(const QsciLexerPython* self);
const char* QsciLexerPython_Lexer(const QsciLexerPython* self);
struct miqt_array /* of struct miqt_string */  QsciLexerPython_AutoCompletionWordSeparators(const QsciLexerPython* self);
int QsciLexerPython_BlockLookback(const QsciLexerPython* self);
const char* QsciLexerPython_BlockStart(const QsciLexerPython* self);
int QsciLexerPython_BraceStyle(const QsciLexerPython* self);
QColor* QsciLexerPython_DefaultColor(const QsciLexerPython* self, int style);
bool QsciLexerPython_DefaultEolFill(const QsciLexerPython* self, int style);
QFont* QsciLexerPython_DefaultFont(const QsciLexerPython* self, int style);
QColor* QsciLexerPython_DefaultPaper(const QsciLexerPython* self, int style);
int QsciLexerPython_IndentationGuideView(const QsciLexerPython* self);
const char* QsciLexerPython_Keywords(const QsciLexerPython* self, int set);
struct miqt_string QsciLexerPython_Description(const QsciLexerPython* self, int style);
void QsciLexerPython_RefreshProperties(QsciLexerPython* self);
bool QsciLexerPython_FoldComments(const QsciLexerPython* self);
void QsciLexerPython_SetFoldCompact(QsciLexerPython* self, bool fold);
bool QsciLexerPython_FoldCompact(const QsciLexerPython* self);
bool QsciLexerPython_FoldQuotes(const QsciLexerPython* self);
int QsciLexerPython_IndentationWarning(const QsciLexerPython* self);
void QsciLexerPython_SetHighlightSubidentifiers(QsciLexerPython* self, bool enabled);
bool QsciLexerPython_HighlightSubidentifiers(const QsciLexerPython* self);
void QsciLexerPython_SetStringsOverNewlineAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_StringsOverNewlineAllowed(const QsciLexerPython* self);
void QsciLexerPython_SetV2UnicodeAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_V2UnicodeAllowed(const QsciLexerPython* self);
void QsciLexerPython_SetV3BinaryOctalAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_V3BinaryOctalAllowed(const QsciLexerPython* self);
void QsciLexerPython_SetV3BytesAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_V3BytesAllowed(const QsciLexerPython* self);
void QsciLexerPython_SetFoldComments(QsciLexerPython* self, bool fold);
void QsciLexerPython_SetFoldQuotes(QsciLexerPython* self, bool fold);
void QsciLexerPython_SetIndentationWarning(QsciLexerPython* self, int warn);
struct miqt_string QsciLexerPython_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerPython_Tr3(const char* s, const char* c, int n);
const char* QsciLexerPython_BlockStart1(const QsciLexerPython* self, int* style);
void QsciLexerPython_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerPython_virtualbase_IndentationGuideView(const void* self);
void QsciLexerPython_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_SetFoldComments(void* self, bool fold);
void QsciLexerPython_override_virtual_SetFoldQuotes(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_SetFoldQuotes(void* self, bool fold);
void QsciLexerPython_override_virtual_SetIndentationWarning(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_SetIndentationWarning(void* self, int warn);
void QsciLexerPython_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_Language(const void* self);
void QsciLexerPython_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_Lexer(const void* self);
void QsciLexerPython_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerPython_virtualbase_LexerId(const void* self);
void QsciLexerPython_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerPython_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerPython_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerPython_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerPython_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerPython_virtualbase_BlockLookback(const void* self);
void QsciLexerPython_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerPython_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerPython_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerPython_virtualbase_BraceStyle(const void* self);
void QsciLexerPython_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerPython_virtualbase_CaseSensitive(const void* self);
void QsciLexerPython_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerPython_virtualbase_Color(const void* self, int style);
void QsciLexerPython_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerPython_virtualbase_EolFill(const void* self, int style);
void QsciLexerPython_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerPython_virtualbase_Font(const void* self, int style);
void QsciLexerPython_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_Keywords(const void* self, int set);
void QsciLexerPython_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerPython_virtualbase_DefaultStyle(const void* self);
void QsciLexerPython_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerPython_virtualbase_Description(const void* self, int style);
void QsciLexerPython_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerPython_virtualbase_Paper(const void* self, int style);
void QsciLexerPython_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPython_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerPython_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerPython_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerPython_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerPython_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerPython_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPython_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerPython_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerPython_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_RefreshProperties(void* self);
void QsciLexerPython_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerPython_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerPython_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_WordCharacters(const void* self);
void QsciLexerPython_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerPython_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerPython_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerPython_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerPython_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerPython_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerPython_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerPython_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerPython_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerPython_Delete(QsciLexerPython* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
