#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERRUBY_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERRUBY_H

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
class QsciLexerRuby;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerRuby QsciLexerRuby;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerRuby* QsciLexerRuby_new();
QsciLexerRuby* QsciLexerRuby_new2(QObject* parent);
void QsciLexerRuby_virtbase(QsciLexerRuby* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerRuby_MetaObject(const QsciLexerRuby* self);
void* QsciLexerRuby_Metacast(QsciLexerRuby* self, const char* param1);
struct miqt_string QsciLexerRuby_Tr(const char* s);
struct miqt_string QsciLexerRuby_TrUtf8(const char* s);
const char* QsciLexerRuby_Language(const QsciLexerRuby* self);
const char* QsciLexerRuby_Lexer(const QsciLexerRuby* self);
const char* QsciLexerRuby_BlockEnd(const QsciLexerRuby* self);
const char* QsciLexerRuby_BlockStart(const QsciLexerRuby* self);
const char* QsciLexerRuby_BlockStartKeyword(const QsciLexerRuby* self);
int QsciLexerRuby_BraceStyle(const QsciLexerRuby* self);
QColor* QsciLexerRuby_DefaultColor(const QsciLexerRuby* self, int style);
bool QsciLexerRuby_DefaultEolFill(const QsciLexerRuby* self, int style);
QFont* QsciLexerRuby_DefaultFont(const QsciLexerRuby* self, int style);
QColor* QsciLexerRuby_DefaultPaper(const QsciLexerRuby* self, int style);
const char* QsciLexerRuby_Keywords(const QsciLexerRuby* self, int set);
struct miqt_string QsciLexerRuby_Description(const QsciLexerRuby* self, int style);
void QsciLexerRuby_RefreshProperties(QsciLexerRuby* self);
void QsciLexerRuby_SetFoldComments(QsciLexerRuby* self, bool fold);
bool QsciLexerRuby_FoldComments(const QsciLexerRuby* self);
void QsciLexerRuby_SetFoldCompact(QsciLexerRuby* self, bool fold);
bool QsciLexerRuby_FoldCompact(const QsciLexerRuby* self);
struct miqt_string QsciLexerRuby_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerRuby_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerRuby_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerRuby_TrUtf83(const char* s, const char* c, int n);
const char* QsciLexerRuby_BlockEnd1(const QsciLexerRuby* self, int* style);
const char* QsciLexerRuby_BlockStart1(const QsciLexerRuby* self, int* style);
const char* QsciLexerRuby_BlockStartKeyword1(const QsciLexerRuby* self, int* style);
bool QsciLexerRuby_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_Language(const void* self);
bool QsciLexerRuby_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_Lexer(const void* self);
bool QsciLexerRuby_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerRuby_virtualbase_LexerId(const void* self);
bool QsciLexerRuby_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerRuby_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerRuby_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerRuby_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerRuby_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerRuby_virtualbase_BlockLookback(const void* self);
bool QsciLexerRuby_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerRuby_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerRuby_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerRuby_virtualbase_BraceStyle(const void* self);
bool QsciLexerRuby_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerRuby_virtualbase_CaseSensitive(const void* self);
bool QsciLexerRuby_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerRuby_virtualbase_Color(const void* self, int style);
bool QsciLexerRuby_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerRuby_virtualbase_EolFill(const void* self, int style);
bool QsciLexerRuby_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerRuby_virtualbase_Font(const void* self, int style);
bool QsciLexerRuby_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerRuby_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerRuby_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_Keywords(const void* self, int set);
bool QsciLexerRuby_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerRuby_virtualbase_DefaultStyle(const void* self);
bool QsciLexerRuby_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerRuby_virtualbase_Description(const void* self, int style);
bool QsciLexerRuby_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerRuby_virtualbase_Paper(const void* self, int style);
bool QsciLexerRuby_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerRuby_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerRuby_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerRuby_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerRuby_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerRuby_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerRuby_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerRuby_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerRuby_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerRuby_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_RefreshProperties(void* self);
bool QsciLexerRuby_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerRuby_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerRuby_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_WordCharacters(const void* self);
bool QsciLexerRuby_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerRuby_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerRuby_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerRuby_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerRuby_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerRuby_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerRuby_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerRuby_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerRuby_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerRuby_Delete(QsciLexerRuby* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
