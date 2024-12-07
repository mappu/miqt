#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERVERILOG_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERVERILOG_H

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
class QsciLexerVerilog;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerVerilog QsciLexerVerilog;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerVerilog* QsciLexerVerilog_new();
QsciLexerVerilog* QsciLexerVerilog_new2(QObject* parent);
void QsciLexerVerilog_virtbase(QsciLexerVerilog* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerVerilog_MetaObject(const QsciLexerVerilog* self);
void* QsciLexerVerilog_Metacast(QsciLexerVerilog* self, const char* param1);
struct miqt_string QsciLexerVerilog_Tr(const char* s);
const char* QsciLexerVerilog_Language(const QsciLexerVerilog* self);
const char* QsciLexerVerilog_Lexer(const QsciLexerVerilog* self);
int QsciLexerVerilog_BraceStyle(const QsciLexerVerilog* self);
const char* QsciLexerVerilog_WordCharacters(const QsciLexerVerilog* self);
QColor* QsciLexerVerilog_DefaultColor(const QsciLexerVerilog* self, int style);
bool QsciLexerVerilog_DefaultEolFill(const QsciLexerVerilog* self, int style);
QFont* QsciLexerVerilog_DefaultFont(const QsciLexerVerilog* self, int style);
QColor* QsciLexerVerilog_DefaultPaper(const QsciLexerVerilog* self, int style);
const char* QsciLexerVerilog_Keywords(const QsciLexerVerilog* self, int set);
struct miqt_string QsciLexerVerilog_Description(const QsciLexerVerilog* self, int style);
void QsciLexerVerilog_RefreshProperties(QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldAtElse(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldAtElse(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldComments(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldComments(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldCompact(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldCompact(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldPreprocessor(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldPreprocessor(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldAtModule(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldAtModule(const QsciLexerVerilog* self);
struct miqt_string QsciLexerVerilog_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerVerilog_Tr3(const char* s, const char* c, int n);
void QsciLexerVerilog_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_Language(const void* self);
void QsciLexerVerilog_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_Lexer(const void* self);
void QsciLexerVerilog_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerVerilog_virtualbase_LexerId(const void* self);
void QsciLexerVerilog_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerVerilog_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerVerilog_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerVerilog_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerVerilog_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerVerilog_virtualbase_BlockLookback(const void* self);
void QsciLexerVerilog_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerVerilog_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerVerilog_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerVerilog_virtualbase_BraceStyle(const void* self);
void QsciLexerVerilog_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerVerilog_virtualbase_CaseSensitive(const void* self);
void QsciLexerVerilog_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerVerilog_virtualbase_Color(const void* self, int style);
void QsciLexerVerilog_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerVerilog_virtualbase_EolFill(const void* self, int style);
void QsciLexerVerilog_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerVerilog_virtualbase_Font(const void* self, int style);
void QsciLexerVerilog_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerVerilog_virtualbase_IndentationGuideView(const void* self);
void QsciLexerVerilog_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_Keywords(const void* self, int set);
void QsciLexerVerilog_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerVerilog_virtualbase_DefaultStyle(const void* self);
void QsciLexerVerilog_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerVerilog_virtualbase_Description(const void* self, int style);
void QsciLexerVerilog_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerVerilog_virtualbase_Paper(const void* self, int style);
void QsciLexerVerilog_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerVerilog_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerVerilog_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerVerilog_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerVerilog_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerVerilog_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerVerilog_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerVerilog_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerVerilog_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerVerilog_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_RefreshProperties(void* self);
void QsciLexerVerilog_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerVerilog_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerVerilog_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_WordCharacters(const void* self);
void QsciLexerVerilog_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerVerilog_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerVerilog_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerVerilog_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerVerilog_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerVerilog_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerVerilog_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerVerilog_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerVerilog_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerVerilog_Delete(QsciLexerVerilog* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
