#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERFORTRAN77_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERFORTRAN77_H

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
class QsciLexerFortran77;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerFortran77 QsciLexerFortran77;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerFortran77* QsciLexerFortran77_new();
QsciLexerFortran77* QsciLexerFortran77_new2(QObject* parent);
void QsciLexerFortran77_virtbase(QsciLexerFortran77* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerFortran77_MetaObject(const QsciLexerFortran77* self);
void* QsciLexerFortran77_Metacast(QsciLexerFortran77* self, const char* param1);
struct miqt_string QsciLexerFortran77_Tr(const char* s);
struct miqt_string QsciLexerFortran77_TrUtf8(const char* s);
const char* QsciLexerFortran77_Language(const QsciLexerFortran77* self);
const char* QsciLexerFortran77_Lexer(const QsciLexerFortran77* self);
int QsciLexerFortran77_BraceStyle(const QsciLexerFortran77* self);
QColor* QsciLexerFortran77_DefaultColor(const QsciLexerFortran77* self, int style);
bool QsciLexerFortran77_DefaultEolFill(const QsciLexerFortran77* self, int style);
QFont* QsciLexerFortran77_DefaultFont(const QsciLexerFortran77* self, int style);
QColor* QsciLexerFortran77_DefaultPaper(const QsciLexerFortran77* self, int style);
const char* QsciLexerFortran77_Keywords(const QsciLexerFortran77* self, int set);
struct miqt_string QsciLexerFortran77_Description(const QsciLexerFortran77* self, int style);
void QsciLexerFortran77_RefreshProperties(QsciLexerFortran77* self);
bool QsciLexerFortran77_FoldCompact(const QsciLexerFortran77* self);
void QsciLexerFortran77_SetFoldCompact(QsciLexerFortran77* self, bool fold);
struct miqt_string QsciLexerFortran77_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerFortran77_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerFortran77_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerFortran77_TrUtf83(const char* s, const char* c, int n);
bool QsciLexerFortran77_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_SetFoldCompact(void* self, bool fold);
bool QsciLexerFortran77_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_Language(const void* self);
bool QsciLexerFortran77_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_Lexer(const void* self);
bool QsciLexerFortran77_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerFortran77_virtualbase_LexerId(const void* self);
bool QsciLexerFortran77_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerFortran77_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerFortran77_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerFortran77_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerFortran77_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerFortran77_virtualbase_BlockLookback(const void* self);
bool QsciLexerFortran77_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerFortran77_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerFortran77_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerFortran77_virtualbase_BraceStyle(const void* self);
bool QsciLexerFortran77_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerFortran77_virtualbase_CaseSensitive(const void* self);
bool QsciLexerFortran77_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerFortran77_virtualbase_Color(const void* self, int style);
bool QsciLexerFortran77_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerFortran77_virtualbase_EolFill(const void* self, int style);
bool QsciLexerFortran77_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerFortran77_virtualbase_Font(const void* self, int style);
bool QsciLexerFortran77_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerFortran77_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerFortran77_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_Keywords(const void* self, int set);
bool QsciLexerFortran77_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerFortran77_virtualbase_DefaultStyle(const void* self);
bool QsciLexerFortran77_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerFortran77_virtualbase_Description(const void* self, int style);
bool QsciLexerFortran77_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerFortran77_virtualbase_Paper(const void* self, int style);
bool QsciLexerFortran77_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerFortran77_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerFortran77_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerFortran77_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerFortran77_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerFortran77_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerFortran77_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerFortran77_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerFortran77_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerFortran77_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_RefreshProperties(void* self);
bool QsciLexerFortran77_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerFortran77_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerFortran77_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_WordCharacters(const void* self);
bool QsciLexerFortran77_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerFortran77_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerFortran77_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerFortran77_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerFortran77_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerFortran77_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerFortran77_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerFortran77_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerFortran77_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerFortran77_Delete(QsciLexerFortran77* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
