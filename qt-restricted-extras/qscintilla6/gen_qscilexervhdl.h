#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERVHDL_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERVHDL_H

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
class QsciLexerVHDL;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerVHDL QsciLexerVHDL;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerVHDL* QsciLexerVHDL_new();
QsciLexerVHDL* QsciLexerVHDL_new2(QObject* parent);
void QsciLexerVHDL_virtbase(QsciLexerVHDL* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerVHDL_MetaObject(const QsciLexerVHDL* self);
void* QsciLexerVHDL_Metacast(QsciLexerVHDL* self, const char* param1);
struct miqt_string QsciLexerVHDL_Tr(const char* s);
const char* QsciLexerVHDL_Language(const QsciLexerVHDL* self);
const char* QsciLexerVHDL_Lexer(const QsciLexerVHDL* self);
int QsciLexerVHDL_BraceStyle(const QsciLexerVHDL* self);
QColor* QsciLexerVHDL_DefaultColor(const QsciLexerVHDL* self, int style);
bool QsciLexerVHDL_DefaultEolFill(const QsciLexerVHDL* self, int style);
QFont* QsciLexerVHDL_DefaultFont(const QsciLexerVHDL* self, int style);
QColor* QsciLexerVHDL_DefaultPaper(const QsciLexerVHDL* self, int style);
const char* QsciLexerVHDL_Keywords(const QsciLexerVHDL* self, int set);
struct miqt_string QsciLexerVHDL_Description(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_RefreshProperties(QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldComments(const QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldCompact(const QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldAtElse(const QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldAtBegin(const QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldAtParenthesis(const QsciLexerVHDL* self);
void QsciLexerVHDL_SetFoldComments(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_SetFoldCompact(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_SetFoldAtElse(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_SetFoldAtBegin(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_SetFoldAtParenthesis(QsciLexerVHDL* self, bool fold);
struct miqt_string QsciLexerVHDL_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerVHDL_Tr3(const char* s, const char* c, int n);
void QsciLexerVHDL_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_SetFoldComments(void* self, bool fold);
void QsciLexerVHDL_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_SetFoldCompact(void* self, bool fold);
void QsciLexerVHDL_override_virtual_SetFoldAtElse(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_SetFoldAtElse(void* self, bool fold);
void QsciLexerVHDL_override_virtual_SetFoldAtBegin(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_SetFoldAtBegin(void* self, bool fold);
void QsciLexerVHDL_override_virtual_SetFoldAtParenthesis(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_SetFoldAtParenthesis(void* self, bool fold);
void QsciLexerVHDL_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_Language(const void* self);
void QsciLexerVHDL_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_Lexer(const void* self);
void QsciLexerVHDL_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerVHDL_virtualbase_LexerId(const void* self);
void QsciLexerVHDL_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerVHDL_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerVHDL_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerVHDL_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerVHDL_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerVHDL_virtualbase_BlockLookback(const void* self);
void QsciLexerVHDL_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerVHDL_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerVHDL_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerVHDL_virtualbase_BraceStyle(const void* self);
void QsciLexerVHDL_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerVHDL_virtualbase_CaseSensitive(const void* self);
void QsciLexerVHDL_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerVHDL_virtualbase_Color(const void* self, int style);
void QsciLexerVHDL_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerVHDL_virtualbase_EolFill(const void* self, int style);
void QsciLexerVHDL_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerVHDL_virtualbase_Font(const void* self, int style);
void QsciLexerVHDL_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerVHDL_virtualbase_IndentationGuideView(const void* self);
void QsciLexerVHDL_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_Keywords(const void* self, int set);
void QsciLexerVHDL_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerVHDL_virtualbase_DefaultStyle(const void* self);
void QsciLexerVHDL_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerVHDL_virtualbase_Description(const void* self, int style);
void QsciLexerVHDL_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerVHDL_virtualbase_Paper(const void* self, int style);
void QsciLexerVHDL_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerVHDL_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerVHDL_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerVHDL_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerVHDL_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerVHDL_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerVHDL_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerVHDL_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerVHDL_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerVHDL_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_RefreshProperties(void* self);
void QsciLexerVHDL_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerVHDL_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerVHDL_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_WordCharacters(const void* self);
void QsciLexerVHDL_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerVHDL_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerVHDL_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerVHDL_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerVHDL_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerVHDL_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerVHDL_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerVHDL_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerVHDL_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerVHDL_Delete(QsciLexerVHDL* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
