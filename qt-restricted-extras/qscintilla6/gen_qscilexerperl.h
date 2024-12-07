#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPERL_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPERL_H

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
class QsciLexerPerl;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerPerl QsciLexerPerl;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPerl* QsciLexerPerl_new();
QsciLexerPerl* QsciLexerPerl_new2(QObject* parent);
void QsciLexerPerl_virtbase(QsciLexerPerl* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerPerl_MetaObject(const QsciLexerPerl* self);
void* QsciLexerPerl_Metacast(QsciLexerPerl* self, const char* param1);
struct miqt_string QsciLexerPerl_Tr(const char* s);
const char* QsciLexerPerl_Language(const QsciLexerPerl* self);
const char* QsciLexerPerl_Lexer(const QsciLexerPerl* self);
struct miqt_array /* of struct miqt_string */  QsciLexerPerl_AutoCompletionWordSeparators(const QsciLexerPerl* self);
const char* QsciLexerPerl_BlockEnd(const QsciLexerPerl* self);
const char* QsciLexerPerl_BlockStart(const QsciLexerPerl* self);
int QsciLexerPerl_BraceStyle(const QsciLexerPerl* self);
const char* QsciLexerPerl_WordCharacters(const QsciLexerPerl* self);
QColor* QsciLexerPerl_DefaultColor(const QsciLexerPerl* self, int style);
bool QsciLexerPerl_DefaultEolFill(const QsciLexerPerl* self, int style);
QFont* QsciLexerPerl_DefaultFont(const QsciLexerPerl* self, int style);
QColor* QsciLexerPerl_DefaultPaper(const QsciLexerPerl* self, int style);
const char* QsciLexerPerl_Keywords(const QsciLexerPerl* self, int set);
struct miqt_string QsciLexerPerl_Description(const QsciLexerPerl* self, int style);
void QsciLexerPerl_RefreshProperties(QsciLexerPerl* self);
void QsciLexerPerl_SetFoldAtElse(QsciLexerPerl* self, bool fold);
bool QsciLexerPerl_FoldAtElse(const QsciLexerPerl* self);
bool QsciLexerPerl_FoldComments(const QsciLexerPerl* self);
bool QsciLexerPerl_FoldCompact(const QsciLexerPerl* self);
void QsciLexerPerl_SetFoldPackages(QsciLexerPerl* self, bool fold);
bool QsciLexerPerl_FoldPackages(const QsciLexerPerl* self);
void QsciLexerPerl_SetFoldPODBlocks(QsciLexerPerl* self, bool fold);
bool QsciLexerPerl_FoldPODBlocks(const QsciLexerPerl* self);
void QsciLexerPerl_SetFoldComments(QsciLexerPerl* self, bool fold);
void QsciLexerPerl_SetFoldCompact(QsciLexerPerl* self, bool fold);
struct miqt_string QsciLexerPerl_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerPerl_Tr3(const char* s, const char* c, int n);
const char* QsciLexerPerl_BlockEnd1(const QsciLexerPerl* self, int* style);
const char* QsciLexerPerl_BlockStart1(const QsciLexerPerl* self, int* style);
void QsciLexerPerl_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_SetFoldComments(void* self, bool fold);
void QsciLexerPerl_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_SetFoldCompact(void* self, bool fold);
void QsciLexerPerl_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_Language(const void* self);
void QsciLexerPerl_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_Lexer(const void* self);
void QsciLexerPerl_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerPerl_virtualbase_LexerId(const void* self);
void QsciLexerPerl_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerPerl_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerPerl_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerPerl_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerPerl_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerPerl_virtualbase_BlockLookback(const void* self);
void QsciLexerPerl_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerPerl_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerPerl_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerPerl_virtualbase_BraceStyle(const void* self);
void QsciLexerPerl_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerPerl_virtualbase_CaseSensitive(const void* self);
void QsciLexerPerl_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerPerl_virtualbase_Color(const void* self, int style);
void QsciLexerPerl_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerPerl_virtualbase_EolFill(const void* self, int style);
void QsciLexerPerl_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerPerl_virtualbase_Font(const void* self, int style);
void QsciLexerPerl_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerPerl_virtualbase_IndentationGuideView(const void* self);
void QsciLexerPerl_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_Keywords(const void* self, int set);
void QsciLexerPerl_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerPerl_virtualbase_DefaultStyle(const void* self);
void QsciLexerPerl_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerPerl_virtualbase_Description(const void* self, int style);
void QsciLexerPerl_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerPerl_virtualbase_Paper(const void* self, int style);
void QsciLexerPerl_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPerl_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerPerl_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerPerl_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerPerl_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerPerl_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerPerl_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPerl_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerPerl_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerPerl_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_RefreshProperties(void* self);
void QsciLexerPerl_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerPerl_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerPerl_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_WordCharacters(const void* self);
void QsciLexerPerl_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerPerl_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerPerl_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerPerl_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerPerl_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerPerl_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerPerl_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerPerl_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerPerl_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerPerl_Delete(QsciLexerPerl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
