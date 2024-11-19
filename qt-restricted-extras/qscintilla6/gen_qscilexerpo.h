#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPO_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPO_H

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
class QsciLexerPO;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerPO QsciLexerPO;
typedef struct QsciScintilla QsciScintilla;
#endif

void QsciLexerPO_new(QsciLexerPO** outptr_QsciLexerPO, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject);
void QsciLexerPO_new2(QObject* parent, QsciLexerPO** outptr_QsciLexerPO, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject);
QMetaObject* QsciLexerPO_MetaObject(const QsciLexerPO* self);
void* QsciLexerPO_Metacast(QsciLexerPO* self, const char* param1);
struct miqt_string QsciLexerPO_Tr(const char* s);
const char* QsciLexerPO_Language(const QsciLexerPO* self);
const char* QsciLexerPO_Lexer(const QsciLexerPO* self);
QColor* QsciLexerPO_DefaultColor(const QsciLexerPO* self, int style);
QFont* QsciLexerPO_DefaultFont(const QsciLexerPO* self, int style);
struct miqt_string QsciLexerPO_Description(const QsciLexerPO* self, int style);
void QsciLexerPO_RefreshProperties(QsciLexerPO* self);
bool QsciLexerPO_FoldComments(const QsciLexerPO* self);
bool QsciLexerPO_FoldCompact(const QsciLexerPO* self);
void QsciLexerPO_SetFoldComments(QsciLexerPO* self, bool fold);
void QsciLexerPO_SetFoldCompact(QsciLexerPO* self, bool fold);
struct miqt_string QsciLexerPO_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerPO_Tr3(const char* s, const char* c, int n);
void QsciLexerPO_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerPO_virtualbase_SetFoldComments(void* self, bool fold);
void QsciLexerPO_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerPO_virtualbase_SetFoldCompact(void* self, bool fold);
void QsciLexerPO_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerPO_virtualbase_Language(const void* self);
void QsciLexerPO_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerPO_virtualbase_Lexer(const void* self);
void QsciLexerPO_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerPO_virtualbase_LexerId(const void* self);
void QsciLexerPO_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerPO_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerPO_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerPO_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerPO_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerPO_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerPO_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerPO_virtualbase_BlockLookback(const void* self);
void QsciLexerPO_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerPO_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerPO_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerPO_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerPO_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerPO_virtualbase_BraceStyle(const void* self);
void QsciLexerPO_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerPO_virtualbase_CaseSensitive(const void* self);
void QsciLexerPO_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerPO_virtualbase_Color(const void* self, int style);
void QsciLexerPO_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerPO_virtualbase_EolFill(const void* self, int style);
void QsciLexerPO_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerPO_virtualbase_Font(const void* self, int style);
void QsciLexerPO_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerPO_virtualbase_IndentationGuideView(const void* self);
void QsciLexerPO_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerPO_virtualbase_Keywords(const void* self, int set);
void QsciLexerPO_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerPO_virtualbase_DefaultStyle(const void* self);
void QsciLexerPO_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerPO_virtualbase_Description(const void* self, int style);
void QsciLexerPO_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerPO_virtualbase_Paper(const void* self, int style);
void QsciLexerPO_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPO_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerPO_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerPO_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerPO_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerPO_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerPO_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPO_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerPO_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerPO_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerPO_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerPO_virtualbase_RefreshProperties(void* self);
void QsciLexerPO_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerPO_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerPO_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerPO_virtualbase_WordCharacters(const void* self);
void QsciLexerPO_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerPO_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerPO_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerPO_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerPO_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerPO_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerPO_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerPO_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerPO_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerPO_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerPO_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerPO_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerPO_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerPO_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerPO_Delete(QsciLexerPO* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
