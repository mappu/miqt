#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERSQL_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERSQL_H

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
class QsciLexerSQL;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerSQL QsciLexerSQL;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerSQL* QsciLexerSQL_new();
QsciLexerSQL* QsciLexerSQL_new2(QObject* parent);
void QsciLexerSQL_virtbase(QsciLexerSQL* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerSQL_MetaObject(const QsciLexerSQL* self);
void* QsciLexerSQL_Metacast(QsciLexerSQL* self, const char* param1);
struct miqt_string QsciLexerSQL_Tr(const char* s);
struct miqt_string QsciLexerSQL_TrUtf8(const char* s);
const char* QsciLexerSQL_Language(const QsciLexerSQL* self);
const char* QsciLexerSQL_Lexer(const QsciLexerSQL* self);
int QsciLexerSQL_BraceStyle(const QsciLexerSQL* self);
QColor* QsciLexerSQL_DefaultColor(const QsciLexerSQL* self, int style);
bool QsciLexerSQL_DefaultEolFill(const QsciLexerSQL* self, int style);
QFont* QsciLexerSQL_DefaultFont(const QsciLexerSQL* self, int style);
QColor* QsciLexerSQL_DefaultPaper(const QsciLexerSQL* self, int style);
const char* QsciLexerSQL_Keywords(const QsciLexerSQL* self, int set);
struct miqt_string QsciLexerSQL_Description(const QsciLexerSQL* self, int style);
void QsciLexerSQL_RefreshProperties(QsciLexerSQL* self);
bool QsciLexerSQL_BackslashEscapes(const QsciLexerSQL* self);
void QsciLexerSQL_SetDottedWords(QsciLexerSQL* self, bool enable);
bool QsciLexerSQL_DottedWords(const QsciLexerSQL* self);
void QsciLexerSQL_SetFoldAtElse(QsciLexerSQL* self, bool fold);
bool QsciLexerSQL_FoldAtElse(const QsciLexerSQL* self);
bool QsciLexerSQL_FoldComments(const QsciLexerSQL* self);
bool QsciLexerSQL_FoldCompact(const QsciLexerSQL* self);
void QsciLexerSQL_SetFoldOnlyBegin(QsciLexerSQL* self, bool fold);
bool QsciLexerSQL_FoldOnlyBegin(const QsciLexerSQL* self);
void QsciLexerSQL_SetHashComments(QsciLexerSQL* self, bool enable);
bool QsciLexerSQL_HashComments(const QsciLexerSQL* self);
void QsciLexerSQL_SetQuotedIdentifiers(QsciLexerSQL* self, bool enable);
bool QsciLexerSQL_QuotedIdentifiers(const QsciLexerSQL* self);
void QsciLexerSQL_SetBackslashEscapes(QsciLexerSQL* self, bool enable);
void QsciLexerSQL_SetFoldComments(QsciLexerSQL* self, bool fold);
void QsciLexerSQL_SetFoldCompact(QsciLexerSQL* self, bool fold);
struct miqt_string QsciLexerSQL_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerSQL_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerSQL_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerSQL_TrUtf83(const char* s, const char* c, int n);
void QsciLexerSQL_override_virtual_SetBackslashEscapes(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_SetBackslashEscapes(void* self, bool enable);
void QsciLexerSQL_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_SetFoldComments(void* self, bool fold);
void QsciLexerSQL_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_SetFoldCompact(void* self, bool fold);
void QsciLexerSQL_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_Language(const void* self);
void QsciLexerSQL_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_Lexer(const void* self);
void QsciLexerSQL_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerSQL_virtualbase_LexerId(const void* self);
void QsciLexerSQL_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerSQL_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerSQL_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerSQL_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerSQL_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerSQL_virtualbase_BlockLookback(const void* self);
void QsciLexerSQL_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerSQL_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerSQL_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerSQL_virtualbase_BraceStyle(const void* self);
void QsciLexerSQL_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerSQL_virtualbase_CaseSensitive(const void* self);
void QsciLexerSQL_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerSQL_virtualbase_Color(const void* self, int style);
void QsciLexerSQL_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerSQL_virtualbase_EolFill(const void* self, int style);
void QsciLexerSQL_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerSQL_virtualbase_Font(const void* self, int style);
void QsciLexerSQL_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerSQL_virtualbase_IndentationGuideView(const void* self);
void QsciLexerSQL_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_Keywords(const void* self, int set);
void QsciLexerSQL_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerSQL_virtualbase_DefaultStyle(const void* self);
void QsciLexerSQL_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerSQL_virtualbase_Description(const void* self, int style);
void QsciLexerSQL_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerSQL_virtualbase_Paper(const void* self, int style);
void QsciLexerSQL_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerSQL_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerSQL_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerSQL_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerSQL_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerSQL_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerSQL_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerSQL_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerSQL_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerSQL_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_RefreshProperties(void* self);
void QsciLexerSQL_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerSQL_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerSQL_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_WordCharacters(const void* self);
void QsciLexerSQL_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerSQL_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerSQL_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerSQL_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerSQL_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerSQL_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerSQL_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerSQL_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerSQL_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerSQL_Delete(QsciLexerSQL* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
