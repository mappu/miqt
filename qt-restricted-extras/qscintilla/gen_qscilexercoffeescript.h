#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCOFFEESCRIPT_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCOFFEESCRIPT_H

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
class QsciLexerCoffeeScript;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerCoffeeScript QsciLexerCoffeeScript;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerCoffeeScript* QsciLexerCoffeeScript_new();
QsciLexerCoffeeScript* QsciLexerCoffeeScript_new2(QObject* parent);
void QsciLexerCoffeeScript_virtbase(QsciLexerCoffeeScript* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerCoffeeScript_MetaObject(const QsciLexerCoffeeScript* self);
void* QsciLexerCoffeeScript_Metacast(QsciLexerCoffeeScript* self, const char* param1);
struct miqt_string QsciLexerCoffeeScript_Tr(const char* s);
struct miqt_string QsciLexerCoffeeScript_TrUtf8(const char* s);
const char* QsciLexerCoffeeScript_Language(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_Lexer(const QsciLexerCoffeeScript* self);
struct miqt_array /* of struct miqt_string */  QsciLexerCoffeeScript_AutoCompletionWordSeparators(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_BlockEnd(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_BlockStart(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_BlockStartKeyword(const QsciLexerCoffeeScript* self);
int QsciLexerCoffeeScript_BraceStyle(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_WordCharacters(const QsciLexerCoffeeScript* self);
QColor* QsciLexerCoffeeScript_DefaultColor(const QsciLexerCoffeeScript* self, int style);
bool QsciLexerCoffeeScript_DefaultEolFill(const QsciLexerCoffeeScript* self, int style);
QFont* QsciLexerCoffeeScript_DefaultFont(const QsciLexerCoffeeScript* self, int style);
QColor* QsciLexerCoffeeScript_DefaultPaper(const QsciLexerCoffeeScript* self, int style);
const char* QsciLexerCoffeeScript_Keywords(const QsciLexerCoffeeScript* self, int set);
struct miqt_string QsciLexerCoffeeScript_Description(const QsciLexerCoffeeScript* self, int style);
void QsciLexerCoffeeScript_RefreshProperties(QsciLexerCoffeeScript* self);
bool QsciLexerCoffeeScript_DollarsAllowed(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetDollarsAllowed(QsciLexerCoffeeScript* self, bool allowed);
bool QsciLexerCoffeeScript_FoldComments(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetFoldComments(QsciLexerCoffeeScript* self, bool fold);
bool QsciLexerCoffeeScript_FoldCompact(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetFoldCompact(QsciLexerCoffeeScript* self, bool fold);
bool QsciLexerCoffeeScript_StylePreprocessor(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetStylePreprocessor(QsciLexerCoffeeScript* self, bool style);
struct miqt_string QsciLexerCoffeeScript_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerCoffeeScript_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerCoffeeScript_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerCoffeeScript_TrUtf83(const char* s, const char* c, int n);
const char* QsciLexerCoffeeScript_BlockEnd1(const QsciLexerCoffeeScript* self, int* style);
const char* QsciLexerCoffeeScript_BlockStart1(const QsciLexerCoffeeScript* self, int* style);
const char* QsciLexerCoffeeScript_BlockStartKeyword1(const QsciLexerCoffeeScript* self, int* style);
void QsciLexerCoffeeScript_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_Language(const void* self);
void QsciLexerCoffeeScript_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_Lexer(const void* self);
void QsciLexerCoffeeScript_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerCoffeeScript_virtualbase_LexerId(const void* self);
void QsciLexerCoffeeScript_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerCoffeeScript_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerCoffeeScript_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerCoffeeScript_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerCoffeeScript_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerCoffeeScript_virtualbase_BlockLookback(const void* self);
void QsciLexerCoffeeScript_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerCoffeeScript_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerCoffeeScript_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerCoffeeScript_virtualbase_BraceStyle(const void* self);
void QsciLexerCoffeeScript_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerCoffeeScript_virtualbase_CaseSensitive(const void* self);
void QsciLexerCoffeeScript_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerCoffeeScript_virtualbase_Color(const void* self, int style);
void QsciLexerCoffeeScript_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerCoffeeScript_virtualbase_EolFill(const void* self, int style);
void QsciLexerCoffeeScript_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerCoffeeScript_virtualbase_Font(const void* self, int style);
void QsciLexerCoffeeScript_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerCoffeeScript_virtualbase_IndentationGuideView(const void* self);
void QsciLexerCoffeeScript_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_Keywords(const void* self, int set);
void QsciLexerCoffeeScript_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerCoffeeScript_virtualbase_DefaultStyle(const void* self);
void QsciLexerCoffeeScript_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerCoffeeScript_virtualbase_Description(const void* self, int style);
void QsciLexerCoffeeScript_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerCoffeeScript_virtualbase_Paper(const void* self, int style);
void QsciLexerCoffeeScript_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCoffeeScript_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerCoffeeScript_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerCoffeeScript_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerCoffeeScript_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerCoffeeScript_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerCoffeeScript_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCoffeeScript_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerCoffeeScript_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerCoffeeScript_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_RefreshProperties(void* self);
void QsciLexerCoffeeScript_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerCoffeeScript_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerCoffeeScript_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_WordCharacters(const void* self);
void QsciLexerCoffeeScript_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerCoffeeScript_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerCoffeeScript_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerCoffeeScript_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerCoffeeScript_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerCoffeeScript_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerCoffeeScript_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerCoffeeScript_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerCoffeeScript_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerCoffeeScript_Delete(QsciLexerCoffeeScript* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
