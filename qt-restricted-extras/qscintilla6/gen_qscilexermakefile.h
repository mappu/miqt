#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERMAKEFILE_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERMAKEFILE_H

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
class QsciLexerMakefile;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerMakefile QsciLexerMakefile;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerMakefile* QsciLexerMakefile_new();
QsciLexerMakefile* QsciLexerMakefile_new2(QObject* parent);
void QsciLexerMakefile_virtbase(QsciLexerMakefile* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerMakefile_MetaObject(const QsciLexerMakefile* self);
void* QsciLexerMakefile_Metacast(QsciLexerMakefile* self, const char* param1);
struct miqt_string QsciLexerMakefile_Tr(const char* s);
const char* QsciLexerMakefile_Language(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_Lexer(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_WordCharacters(const QsciLexerMakefile* self);
QColor* QsciLexerMakefile_DefaultColor(const QsciLexerMakefile* self, int style);
bool QsciLexerMakefile_DefaultEolFill(const QsciLexerMakefile* self, int style);
QFont* QsciLexerMakefile_DefaultFont(const QsciLexerMakefile* self, int style);
QColor* QsciLexerMakefile_DefaultPaper(const QsciLexerMakefile* self, int style);
struct miqt_string QsciLexerMakefile_Description(const QsciLexerMakefile* self, int style);
struct miqt_string QsciLexerMakefile_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerMakefile_Tr3(const char* s, const char* c, int n);
bool QsciLexerMakefile_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerMakefile_virtualbase_Language(const void* self);
bool QsciLexerMakefile_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerMakefile_virtualbase_Lexer(const void* self);
bool QsciLexerMakefile_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerMakefile_virtualbase_LexerId(const void* self);
bool QsciLexerMakefile_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerMakefile_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerMakefile_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerMakefile_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerMakefile_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerMakefile_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerMakefile_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerMakefile_virtualbase_BlockLookback(const void* self);
bool QsciLexerMakefile_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerMakefile_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerMakefile_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerMakefile_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerMakefile_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerMakefile_virtualbase_BraceStyle(const void* self);
bool QsciLexerMakefile_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerMakefile_virtualbase_CaseSensitive(const void* self);
bool QsciLexerMakefile_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerMakefile_virtualbase_Color(const void* self, int style);
bool QsciLexerMakefile_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerMakefile_virtualbase_EolFill(const void* self, int style);
bool QsciLexerMakefile_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerMakefile_virtualbase_Font(const void* self, int style);
bool QsciLexerMakefile_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerMakefile_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerMakefile_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerMakefile_virtualbase_Keywords(const void* self, int set);
bool QsciLexerMakefile_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerMakefile_virtualbase_DefaultStyle(const void* self);
bool QsciLexerMakefile_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerMakefile_virtualbase_Description(const void* self, int style);
bool QsciLexerMakefile_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerMakefile_virtualbase_Paper(const void* self, int style);
bool QsciLexerMakefile_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerMakefile_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerMakefile_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerMakefile_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerMakefile_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerMakefile_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerMakefile_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerMakefile_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerMakefile_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerMakefile_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerMakefile_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerMakefile_virtualbase_RefreshProperties(void* self);
bool QsciLexerMakefile_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerMakefile_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerMakefile_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerMakefile_virtualbase_WordCharacters(const void* self);
bool QsciLexerMakefile_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerMakefile_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerMakefile_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerMakefile_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerMakefile_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerMakefile_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerMakefile_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerMakefile_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerMakefile_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerMakefile_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerMakefile_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerMakefile_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerMakefile_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerMakefile_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerMakefile_Delete(QsciLexerMakefile* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
