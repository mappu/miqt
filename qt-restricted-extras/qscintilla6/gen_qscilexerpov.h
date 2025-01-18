#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPOV_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPOV_H

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
class QsciLexerPOV;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerPOV QsciLexerPOV;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPOV* QsciLexerPOV_new();
QsciLexerPOV* QsciLexerPOV_new2(QObject* parent);
void QsciLexerPOV_virtbase(QsciLexerPOV* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerPOV_MetaObject(const QsciLexerPOV* self);
void* QsciLexerPOV_Metacast(QsciLexerPOV* self, const char* param1);
struct miqt_string QsciLexerPOV_Tr(const char* s);
const char* QsciLexerPOV_Language(const QsciLexerPOV* self);
const char* QsciLexerPOV_Lexer(const QsciLexerPOV* self);
int QsciLexerPOV_BraceStyle(const QsciLexerPOV* self);
const char* QsciLexerPOV_WordCharacters(const QsciLexerPOV* self);
QColor* QsciLexerPOV_DefaultColor(const QsciLexerPOV* self, int style);
bool QsciLexerPOV_DefaultEolFill(const QsciLexerPOV* self, int style);
QFont* QsciLexerPOV_DefaultFont(const QsciLexerPOV* self, int style);
QColor* QsciLexerPOV_DefaultPaper(const QsciLexerPOV* self, int style);
const char* QsciLexerPOV_Keywords(const QsciLexerPOV* self, int set);
struct miqt_string QsciLexerPOV_Description(const QsciLexerPOV* self, int style);
void QsciLexerPOV_RefreshProperties(QsciLexerPOV* self);
bool QsciLexerPOV_FoldComments(const QsciLexerPOV* self);
bool QsciLexerPOV_FoldCompact(const QsciLexerPOV* self);
bool QsciLexerPOV_FoldDirectives(const QsciLexerPOV* self);
void QsciLexerPOV_SetFoldComments(QsciLexerPOV* self, bool fold);
void QsciLexerPOV_SetFoldCompact(QsciLexerPOV* self, bool fold);
void QsciLexerPOV_SetFoldDirectives(QsciLexerPOV* self, bool fold);
struct miqt_string QsciLexerPOV_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerPOV_Tr3(const char* s, const char* c, int n);
void QsciLexerPOV_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_SetFoldComments(void* self, bool fold);
void QsciLexerPOV_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_SetFoldCompact(void* self, bool fold);
void QsciLexerPOV_override_virtual_SetFoldDirectives(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_SetFoldDirectives(void* self, bool fold);
void QsciLexerPOV_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_Language(const void* self);
void QsciLexerPOV_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_Lexer(const void* self);
void QsciLexerPOV_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerPOV_virtualbase_LexerId(const void* self);
void QsciLexerPOV_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerPOV_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerPOV_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerPOV_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerPOV_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerPOV_virtualbase_BlockLookback(const void* self);
void QsciLexerPOV_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerPOV_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerPOV_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerPOV_virtualbase_BraceStyle(const void* self);
void QsciLexerPOV_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerPOV_virtualbase_CaseSensitive(const void* self);
void QsciLexerPOV_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerPOV_virtualbase_Color(const void* self, int style);
void QsciLexerPOV_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerPOV_virtualbase_EolFill(const void* self, int style);
void QsciLexerPOV_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerPOV_virtualbase_Font(const void* self, int style);
void QsciLexerPOV_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerPOV_virtualbase_IndentationGuideView(const void* self);
void QsciLexerPOV_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_Keywords(const void* self, int set);
void QsciLexerPOV_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerPOV_virtualbase_DefaultStyle(const void* self);
void QsciLexerPOV_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerPOV_virtualbase_Description(const void* self, int style);
void QsciLexerPOV_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerPOV_virtualbase_Paper(const void* self, int style);
void QsciLexerPOV_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPOV_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerPOV_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerPOV_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerPOV_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerPOV_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerPOV_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPOV_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerPOV_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerPOV_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_RefreshProperties(void* self);
void QsciLexerPOV_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerPOV_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerPOV_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_WordCharacters(const void* self);
void QsciLexerPOV_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerPOV_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerPOV_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerPOV_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerPOV_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerPOV_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerPOV_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerPOV_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerPOV_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerPOV_Delete(QsciLexerPOV* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
