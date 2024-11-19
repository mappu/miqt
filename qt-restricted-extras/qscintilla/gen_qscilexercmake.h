#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCMAKE_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCMAKE_H

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
class QsciLexerCMake;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerCMake QsciLexerCMake;
typedef struct QsciScintilla QsciScintilla;
#endif

void QsciLexerCMake_new(QsciLexerCMake** outptr_QsciLexerCMake, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject);
void QsciLexerCMake_new2(QObject* parent, QsciLexerCMake** outptr_QsciLexerCMake, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject);
QMetaObject* QsciLexerCMake_MetaObject(const QsciLexerCMake* self);
void* QsciLexerCMake_Metacast(QsciLexerCMake* self, const char* param1);
struct miqt_string QsciLexerCMake_Tr(const char* s);
struct miqt_string QsciLexerCMake_TrUtf8(const char* s);
const char* QsciLexerCMake_Language(const QsciLexerCMake* self);
const char* QsciLexerCMake_Lexer(const QsciLexerCMake* self);
QColor* QsciLexerCMake_DefaultColor(const QsciLexerCMake* self, int style);
QFont* QsciLexerCMake_DefaultFont(const QsciLexerCMake* self, int style);
QColor* QsciLexerCMake_DefaultPaper(const QsciLexerCMake* self, int style);
const char* QsciLexerCMake_Keywords(const QsciLexerCMake* self, int set);
struct miqt_string QsciLexerCMake_Description(const QsciLexerCMake* self, int style);
void QsciLexerCMake_RefreshProperties(QsciLexerCMake* self);
bool QsciLexerCMake_FoldAtElse(const QsciLexerCMake* self);
void QsciLexerCMake_SetFoldAtElse(QsciLexerCMake* self, bool fold);
struct miqt_string QsciLexerCMake_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerCMake_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerCMake_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerCMake_TrUtf83(const char* s, const char* c, int n);
void QsciLexerCMake_override_virtual_SetFoldAtElse(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_SetFoldAtElse(void* self, bool fold);
void QsciLexerCMake_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_Language(const void* self);
void QsciLexerCMake_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_Lexer(const void* self);
void QsciLexerCMake_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerCMake_virtualbase_LexerId(const void* self);
void QsciLexerCMake_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerCMake_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerCMake_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerCMake_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerCMake_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerCMake_virtualbase_BlockLookback(const void* self);
void QsciLexerCMake_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerCMake_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerCMake_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerCMake_virtualbase_BraceStyle(const void* self);
void QsciLexerCMake_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerCMake_virtualbase_CaseSensitive(const void* self);
void QsciLexerCMake_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerCMake_virtualbase_Color(const void* self, int style);
void QsciLexerCMake_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerCMake_virtualbase_EolFill(const void* self, int style);
void QsciLexerCMake_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerCMake_virtualbase_Font(const void* self, int style);
void QsciLexerCMake_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerCMake_virtualbase_IndentationGuideView(const void* self);
void QsciLexerCMake_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_Keywords(const void* self, int set);
void QsciLexerCMake_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerCMake_virtualbase_DefaultStyle(const void* self);
void QsciLexerCMake_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerCMake_virtualbase_Description(const void* self, int style);
void QsciLexerCMake_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerCMake_virtualbase_Paper(const void* self, int style);
void QsciLexerCMake_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCMake_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerCMake_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerCMake_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerCMake_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerCMake_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerCMake_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCMake_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerCMake_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerCMake_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_RefreshProperties(void* self);
void QsciLexerCMake_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerCMake_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerCMake_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_WordCharacters(const void* self);
void QsciLexerCMake_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerCMake_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerCMake_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerCMake_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerCMake_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerCMake_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerCMake_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerCMake_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerCMake_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerCMake_Delete(QsciLexerCMake* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
