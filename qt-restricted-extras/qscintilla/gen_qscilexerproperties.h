#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERPROPERTIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERPROPERTIES_H

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
class QsciLexerProperties;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerProperties QsciLexerProperties;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerProperties* QsciLexerProperties_new();
QsciLexerProperties* QsciLexerProperties_new2(QObject* parent);
void QsciLexerProperties_virtbase(QsciLexerProperties* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerProperties_MetaObject(const QsciLexerProperties* self);
void* QsciLexerProperties_Metacast(QsciLexerProperties* self, const char* param1);
struct miqt_string QsciLexerProperties_Tr(const char* s);
struct miqt_string QsciLexerProperties_TrUtf8(const char* s);
const char* QsciLexerProperties_Language(const QsciLexerProperties* self);
const char* QsciLexerProperties_Lexer(const QsciLexerProperties* self);
const char* QsciLexerProperties_WordCharacters(const QsciLexerProperties* self);
QColor* QsciLexerProperties_DefaultColor(const QsciLexerProperties* self, int style);
bool QsciLexerProperties_DefaultEolFill(const QsciLexerProperties* self, int style);
QFont* QsciLexerProperties_DefaultFont(const QsciLexerProperties* self, int style);
QColor* QsciLexerProperties_DefaultPaper(const QsciLexerProperties* self, int style);
struct miqt_string QsciLexerProperties_Description(const QsciLexerProperties* self, int style);
void QsciLexerProperties_RefreshProperties(QsciLexerProperties* self);
bool QsciLexerProperties_FoldCompact(const QsciLexerProperties* self);
void QsciLexerProperties_SetInitialSpaces(QsciLexerProperties* self, bool enable);
bool QsciLexerProperties_InitialSpaces(const QsciLexerProperties* self);
void QsciLexerProperties_SetFoldCompact(QsciLexerProperties* self, bool fold);
struct miqt_string QsciLexerProperties_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerProperties_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerProperties_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerProperties_TrUtf83(const char* s, const char* c, int n);
void QsciLexerProperties_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerProperties_virtualbase_SetFoldCompact(void* self, bool fold);
void QsciLexerProperties_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerProperties_virtualbase_Language(const void* self);
void QsciLexerProperties_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerProperties_virtualbase_Lexer(const void* self);
void QsciLexerProperties_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerProperties_virtualbase_LexerId(const void* self);
void QsciLexerProperties_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerProperties_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerProperties_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerProperties_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerProperties_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerProperties_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerProperties_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerProperties_virtualbase_BlockLookback(const void* self);
void QsciLexerProperties_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerProperties_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerProperties_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerProperties_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerProperties_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerProperties_virtualbase_BraceStyle(const void* self);
void QsciLexerProperties_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerProperties_virtualbase_CaseSensitive(const void* self);
void QsciLexerProperties_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerProperties_virtualbase_Color(const void* self, int style);
void QsciLexerProperties_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerProperties_virtualbase_EolFill(const void* self, int style);
void QsciLexerProperties_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerProperties_virtualbase_Font(const void* self, int style);
void QsciLexerProperties_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerProperties_virtualbase_IndentationGuideView(const void* self);
void QsciLexerProperties_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerProperties_virtualbase_Keywords(const void* self, int set);
void QsciLexerProperties_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerProperties_virtualbase_DefaultStyle(const void* self);
void QsciLexerProperties_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerProperties_virtualbase_Description(const void* self, int style);
void QsciLexerProperties_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerProperties_virtualbase_Paper(const void* self, int style);
void QsciLexerProperties_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerProperties_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerProperties_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerProperties_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerProperties_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerProperties_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerProperties_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerProperties_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerProperties_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerProperties_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerProperties_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerProperties_virtualbase_RefreshProperties(void* self);
void QsciLexerProperties_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerProperties_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerProperties_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerProperties_virtualbase_WordCharacters(const void* self);
void QsciLexerProperties_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerProperties_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerProperties_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerProperties_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerProperties_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerProperties_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerProperties_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerProperties_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerProperties_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerProperties_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerProperties_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerProperties_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerProperties_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerProperties_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerProperties_Delete(QsciLexerProperties* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
