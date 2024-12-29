#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERTEX_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERTEX_H

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
class QsciLexerTeX;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerTeX QsciLexerTeX;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerTeX* QsciLexerTeX_new();
QsciLexerTeX* QsciLexerTeX_new2(QObject* parent);
void QsciLexerTeX_virtbase(QsciLexerTeX* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerTeX_MetaObject(const QsciLexerTeX* self);
void* QsciLexerTeX_Metacast(QsciLexerTeX* self, const char* param1);
struct miqt_string QsciLexerTeX_Tr(const char* s);
struct miqt_string QsciLexerTeX_TrUtf8(const char* s);
const char* QsciLexerTeX_Language(const QsciLexerTeX* self);
const char* QsciLexerTeX_Lexer(const QsciLexerTeX* self);
const char* QsciLexerTeX_WordCharacters(const QsciLexerTeX* self);
QColor* QsciLexerTeX_DefaultColor(const QsciLexerTeX* self, int style);
const char* QsciLexerTeX_Keywords(const QsciLexerTeX* self, int set);
struct miqt_string QsciLexerTeX_Description(const QsciLexerTeX* self, int style);
void QsciLexerTeX_RefreshProperties(QsciLexerTeX* self);
void QsciLexerTeX_SetFoldComments(QsciLexerTeX* self, bool fold);
bool QsciLexerTeX_FoldComments(const QsciLexerTeX* self);
void QsciLexerTeX_SetFoldCompact(QsciLexerTeX* self, bool fold);
bool QsciLexerTeX_FoldCompact(const QsciLexerTeX* self);
void QsciLexerTeX_SetProcessComments(QsciLexerTeX* self, bool enable);
bool QsciLexerTeX_ProcessComments(const QsciLexerTeX* self);
void QsciLexerTeX_SetProcessIf(QsciLexerTeX* self, bool enable);
bool QsciLexerTeX_ProcessIf(const QsciLexerTeX* self);
struct miqt_string QsciLexerTeX_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerTeX_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerTeX_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerTeX_TrUtf83(const char* s, const char* c, int n);
void QsciLexerTeX_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerTeX_virtualbase_Language(const void* self);
void QsciLexerTeX_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerTeX_virtualbase_Lexer(const void* self);
void QsciLexerTeX_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerTeX_virtualbase_LexerId(const void* self);
void QsciLexerTeX_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerTeX_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerTeX_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerTeX_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerTeX_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerTeX_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerTeX_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerTeX_virtualbase_BlockLookback(const void* self);
void QsciLexerTeX_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerTeX_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerTeX_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerTeX_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerTeX_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerTeX_virtualbase_BraceStyle(const void* self);
void QsciLexerTeX_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerTeX_virtualbase_CaseSensitive(const void* self);
void QsciLexerTeX_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerTeX_virtualbase_Color(const void* self, int style);
void QsciLexerTeX_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerTeX_virtualbase_EolFill(const void* self, int style);
void QsciLexerTeX_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerTeX_virtualbase_Font(const void* self, int style);
void QsciLexerTeX_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerTeX_virtualbase_IndentationGuideView(const void* self);
void QsciLexerTeX_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerTeX_virtualbase_Keywords(const void* self, int set);
void QsciLexerTeX_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerTeX_virtualbase_DefaultStyle(const void* self);
void QsciLexerTeX_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerTeX_virtualbase_Description(const void* self, int style);
void QsciLexerTeX_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerTeX_virtualbase_Paper(const void* self, int style);
void QsciLexerTeX_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerTeX_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerTeX_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerTeX_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerTeX_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerTeX_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerTeX_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerTeX_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerTeX_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerTeX_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerTeX_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerTeX_virtualbase_RefreshProperties(void* self);
void QsciLexerTeX_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerTeX_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerTeX_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerTeX_virtualbase_WordCharacters(const void* self);
void QsciLexerTeX_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerTeX_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerTeX_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerTeX_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerTeX_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerTeX_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerTeX_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerTeX_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerTeX_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerTeX_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerTeX_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerTeX_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerTeX_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerTeX_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerTeX_Delete(QsciLexerTeX* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
