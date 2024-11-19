#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERAVS_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERAVS_H

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
class QsciLexerAVS;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerAVS QsciLexerAVS;
typedef struct QsciScintilla QsciScintilla;
#endif

void QsciLexerAVS_new(QsciLexerAVS** outptr_QsciLexerAVS, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject);
void QsciLexerAVS_new2(QObject* parent, QsciLexerAVS** outptr_QsciLexerAVS, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject);
QMetaObject* QsciLexerAVS_MetaObject(const QsciLexerAVS* self);
void* QsciLexerAVS_Metacast(QsciLexerAVS* self, const char* param1);
struct miqt_string QsciLexerAVS_Tr(const char* s);
struct miqt_string QsciLexerAVS_TrUtf8(const char* s);
const char* QsciLexerAVS_Language(const QsciLexerAVS* self);
const char* QsciLexerAVS_Lexer(const QsciLexerAVS* self);
int QsciLexerAVS_BraceStyle(const QsciLexerAVS* self);
const char* QsciLexerAVS_WordCharacters(const QsciLexerAVS* self);
QColor* QsciLexerAVS_DefaultColor(const QsciLexerAVS* self, int style);
QFont* QsciLexerAVS_DefaultFont(const QsciLexerAVS* self, int style);
const char* QsciLexerAVS_Keywords(const QsciLexerAVS* self, int set);
struct miqt_string QsciLexerAVS_Description(const QsciLexerAVS* self, int style);
void QsciLexerAVS_RefreshProperties(QsciLexerAVS* self);
bool QsciLexerAVS_FoldComments(const QsciLexerAVS* self);
bool QsciLexerAVS_FoldCompact(const QsciLexerAVS* self);
void QsciLexerAVS_SetFoldComments(QsciLexerAVS* self, bool fold);
void QsciLexerAVS_SetFoldCompact(QsciLexerAVS* self, bool fold);
struct miqt_string QsciLexerAVS_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerAVS_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerAVS_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerAVS_TrUtf83(const char* s, const char* c, int n);
void QsciLexerAVS_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerAVS_virtualbase_SetFoldComments(void* self, bool fold);
void QsciLexerAVS_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerAVS_virtualbase_SetFoldCompact(void* self, bool fold);
void QsciLexerAVS_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerAVS_virtualbase_Language(const void* self);
void QsciLexerAVS_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerAVS_virtualbase_Lexer(const void* self);
void QsciLexerAVS_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerAVS_virtualbase_LexerId(const void* self);
void QsciLexerAVS_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerAVS_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexerAVS_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerAVS_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexerAVS_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerAVS_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexerAVS_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerAVS_virtualbase_BlockLookback(const void* self);
void QsciLexerAVS_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerAVS_virtualbase_BlockStart(const void* self, int* style);
void QsciLexerAVS_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerAVS_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexerAVS_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerAVS_virtualbase_BraceStyle(const void* self);
void QsciLexerAVS_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerAVS_virtualbase_CaseSensitive(const void* self);
void QsciLexerAVS_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerAVS_virtualbase_Color(const void* self, int style);
void QsciLexerAVS_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerAVS_virtualbase_EolFill(const void* self, int style);
void QsciLexerAVS_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerAVS_virtualbase_Font(const void* self, int style);
void QsciLexerAVS_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerAVS_virtualbase_IndentationGuideView(const void* self);
void QsciLexerAVS_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerAVS_virtualbase_Keywords(const void* self, int set);
void QsciLexerAVS_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerAVS_virtualbase_DefaultStyle(const void* self);
void QsciLexerAVS_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerAVS_virtualbase_Description(const void* self, int style);
void QsciLexerAVS_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerAVS_virtualbase_Paper(const void* self, int style);
void QsciLexerAVS_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerAVS_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexerAVS_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerAVS_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexerAVS_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerAVS_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexerAVS_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerAVS_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexerAVS_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerAVS_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexerAVS_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerAVS_virtualbase_RefreshProperties(void* self);
void QsciLexerAVS_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerAVS_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexerAVS_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerAVS_virtualbase_WordCharacters(const void* self);
void QsciLexerAVS_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerAVS_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexerAVS_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerAVS_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexerAVS_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerAVS_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexerAVS_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerAVS_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexerAVS_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerAVS_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexerAVS_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerAVS_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerAVS_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerAVS_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexerAVS_Delete(QsciLexerAVS* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
