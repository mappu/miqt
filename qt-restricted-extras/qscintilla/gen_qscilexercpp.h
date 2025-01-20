#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCPP_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCPP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QColor;
class QEvent;
class QFont;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSettings;
class QTimerEvent;
class QsciLexer;
class QsciLexerCPP;
class QsciScintilla;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QTimerEvent QTimerEvent;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerCPP QsciLexerCPP;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerCPP* QsciLexerCPP_new();
QsciLexerCPP* QsciLexerCPP_new2(QObject* parent);
QsciLexerCPP* QsciLexerCPP_new3(QObject* parent, bool caseInsensitiveKeywords);
void QsciLexerCPP_virtbase(QsciLexerCPP* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerCPP_MetaObject(const QsciLexerCPP* self);
void* QsciLexerCPP_Metacast(QsciLexerCPP* self, const char* param1);
struct miqt_string QsciLexerCPP_Tr(const char* s);
struct miqt_string QsciLexerCPP_TrUtf8(const char* s);
const char* QsciLexerCPP_Language(const QsciLexerCPP* self);
const char* QsciLexerCPP_Lexer(const QsciLexerCPP* self);
struct miqt_array /* of struct miqt_string */  QsciLexerCPP_AutoCompletionWordSeparators(const QsciLexerCPP* self);
const char* QsciLexerCPP_BlockEnd(const QsciLexerCPP* self);
const char* QsciLexerCPP_BlockStart(const QsciLexerCPP* self);
const char* QsciLexerCPP_BlockStartKeyword(const QsciLexerCPP* self);
int QsciLexerCPP_BraceStyle(const QsciLexerCPP* self);
const char* QsciLexerCPP_WordCharacters(const QsciLexerCPP* self);
QColor* QsciLexerCPP_DefaultColor(const QsciLexerCPP* self, int style);
bool QsciLexerCPP_DefaultEolFill(const QsciLexerCPP* self, int style);
QFont* QsciLexerCPP_DefaultFont(const QsciLexerCPP* self, int style);
QColor* QsciLexerCPP_DefaultPaper(const QsciLexerCPP* self, int style);
const char* QsciLexerCPP_Keywords(const QsciLexerCPP* self, int set);
struct miqt_string QsciLexerCPP_Description(const QsciLexerCPP* self, int style);
void QsciLexerCPP_RefreshProperties(QsciLexerCPP* self);
bool QsciLexerCPP_FoldAtElse(const QsciLexerCPP* self);
bool QsciLexerCPP_FoldComments(const QsciLexerCPP* self);
bool QsciLexerCPP_FoldCompact(const QsciLexerCPP* self);
bool QsciLexerCPP_FoldPreprocessor(const QsciLexerCPP* self);
bool QsciLexerCPP_StylePreprocessor(const QsciLexerCPP* self);
void QsciLexerCPP_SetDollarsAllowed(QsciLexerCPP* self, bool allowed);
bool QsciLexerCPP_DollarsAllowed(const QsciLexerCPP* self);
void QsciLexerCPP_SetHighlightTripleQuotedStrings(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_HighlightTripleQuotedStrings(const QsciLexerCPP* self);
void QsciLexerCPP_SetHighlightHashQuotedStrings(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_HighlightHashQuotedStrings(const QsciLexerCPP* self);
void QsciLexerCPP_SetHighlightBackQuotedStrings(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_HighlightBackQuotedStrings(const QsciLexerCPP* self);
void QsciLexerCPP_SetHighlightEscapeSequences(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_HighlightEscapeSequences(const QsciLexerCPP* self);
void QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed(QsciLexerCPP* self, bool allowed);
bool QsciLexerCPP_VerbatimStringEscapeSequencesAllowed(const QsciLexerCPP* self);
void QsciLexerCPP_SetFoldAtElse(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_SetFoldComments(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_SetFoldCompact(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_SetFoldPreprocessor(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_SetStylePreprocessor(QsciLexerCPP* self, bool style);
struct miqt_string QsciLexerCPP_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerCPP_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerCPP_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerCPP_TrUtf83(const char* s, const char* c, int n);
const char* QsciLexerCPP_BlockEnd1(const QsciLexerCPP* self, int* style);
const char* QsciLexerCPP_BlockStart1(const QsciLexerCPP* self, int* style);
const char* QsciLexerCPP_BlockStartKeyword1(const QsciLexerCPP* self, int* style);
bool QsciLexerCPP_override_virtual_SetFoldAtElse(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_SetFoldAtElse(void* self, bool fold);
bool QsciLexerCPP_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_SetFoldComments(void* self, bool fold);
bool QsciLexerCPP_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_SetFoldCompact(void* self, bool fold);
bool QsciLexerCPP_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_SetFoldPreprocessor(void* self, bool fold);
bool QsciLexerCPP_override_virtual_SetStylePreprocessor(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_SetStylePreprocessor(void* self, bool style);
bool QsciLexerCPP_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_Language(const void* self);
bool QsciLexerCPP_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_Lexer(const void* self);
bool QsciLexerCPP_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerCPP_virtualbase_LexerId(const void* self);
bool QsciLexerCPP_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerCPP_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerCPP_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerCPP_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerCPP_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerCPP_virtualbase_BlockLookback(const void* self);
bool QsciLexerCPP_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerCPP_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerCPP_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerCPP_virtualbase_BraceStyle(const void* self);
bool QsciLexerCPP_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_CaseSensitive(const void* self);
bool QsciLexerCPP_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerCPP_virtualbase_Color(const void* self, int style);
bool QsciLexerCPP_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_EolFill(const void* self, int style);
bool QsciLexerCPP_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerCPP_virtualbase_Font(const void* self, int style);
bool QsciLexerCPP_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerCPP_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerCPP_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_Keywords(const void* self, int set);
bool QsciLexerCPP_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerCPP_virtualbase_DefaultStyle(const void* self);
bool QsciLexerCPP_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerCPP_virtualbase_Description(const void* self, int style);
bool QsciLexerCPP_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerCPP_virtualbase_Paper(const void* self, int style);
bool QsciLexerCPP_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCPP_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerCPP_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerCPP_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerCPP_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerCPP_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCPP_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerCPP_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerCPP_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_RefreshProperties(void* self);
bool QsciLexerCPP_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerCPP_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerCPP_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_WordCharacters(const void* self);
bool QsciLexerCPP_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerCPP_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerCPP_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerCPP_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerCPP_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerCPP_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCPP_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCPP_override_virtual_Event(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_Event(void* self, QEvent* event);
bool QsciLexerCPP_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerCPP_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QsciLexerCPP_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QsciLexerCPP_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_CustomEvent(void* self, QEvent* event);
bool QsciLexerCPP_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerCPP_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerCPP_Delete(QsciLexerCPP* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
