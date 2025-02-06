#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERCPP_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERCPP_H

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
QMetaObject* QsciLexerCPP_metaObject(const QsciLexerCPP* self);
void* QsciLexerCPP_metacast(QsciLexerCPP* self, const char* param1);
struct miqt_string QsciLexerCPP_tr(const char* s);
const char* QsciLexerCPP_language(const QsciLexerCPP* self);
const char* QsciLexerCPP_lexer(const QsciLexerCPP* self);
struct miqt_array /* of struct miqt_string */  QsciLexerCPP_autoCompletionWordSeparators(const QsciLexerCPP* self);
const char* QsciLexerCPP_blockEnd(const QsciLexerCPP* self);
const char* QsciLexerCPP_blockStart(const QsciLexerCPP* self);
const char* QsciLexerCPP_blockStartKeyword(const QsciLexerCPP* self);
int QsciLexerCPP_braceStyle(const QsciLexerCPP* self);
const char* QsciLexerCPP_wordCharacters(const QsciLexerCPP* self);
QColor* QsciLexerCPP_defaultColor(const QsciLexerCPP* self, int style);
bool QsciLexerCPP_defaultEolFill(const QsciLexerCPP* self, int style);
QFont* QsciLexerCPP_defaultFont(const QsciLexerCPP* self, int style);
QColor* QsciLexerCPP_defaultPaper(const QsciLexerCPP* self, int style);
const char* QsciLexerCPP_keywords(const QsciLexerCPP* self, int set);
struct miqt_string QsciLexerCPP_description(const QsciLexerCPP* self, int style);
void QsciLexerCPP_refreshProperties(QsciLexerCPP* self);
bool QsciLexerCPP_foldAtElse(const QsciLexerCPP* self);
bool QsciLexerCPP_foldComments(const QsciLexerCPP* self);
bool QsciLexerCPP_foldCompact(const QsciLexerCPP* self);
bool QsciLexerCPP_foldPreprocessor(const QsciLexerCPP* self);
bool QsciLexerCPP_stylePreprocessor(const QsciLexerCPP* self);
void QsciLexerCPP_setDollarsAllowed(QsciLexerCPP* self, bool allowed);
bool QsciLexerCPP_dollarsAllowed(const QsciLexerCPP* self);
void QsciLexerCPP_setHighlightTripleQuotedStrings(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_highlightTripleQuotedStrings(const QsciLexerCPP* self);
void QsciLexerCPP_setHighlightHashQuotedStrings(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_highlightHashQuotedStrings(const QsciLexerCPP* self);
void QsciLexerCPP_setHighlightBackQuotedStrings(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_highlightBackQuotedStrings(const QsciLexerCPP* self);
void QsciLexerCPP_setHighlightEscapeSequences(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_highlightEscapeSequences(const QsciLexerCPP* self);
void QsciLexerCPP_setVerbatimStringEscapeSequencesAllowed(QsciLexerCPP* self, bool allowed);
bool QsciLexerCPP_verbatimStringEscapeSequencesAllowed(const QsciLexerCPP* self);
void QsciLexerCPP_setFoldAtElse(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_setFoldComments(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_setFoldCompact(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_setFoldPreprocessor(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_setStylePreprocessor(QsciLexerCPP* self, bool style);
struct miqt_string QsciLexerCPP_tr2(const char* s, const char* c);
struct miqt_string QsciLexerCPP_tr3(const char* s, const char* c, int n);
const char* QsciLexerCPP_blockEnd1(const QsciLexerCPP* self, int* style);
const char* QsciLexerCPP_blockStart1(const QsciLexerCPP* self, int* style);
const char* QsciLexerCPP_blockStartKeyword1(const QsciLexerCPP* self, int* style);
bool QsciLexerCPP_override_virtual_setFoldAtElse(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_setFoldAtElse(void* self, bool fold);
bool QsciLexerCPP_override_virtual_setFoldComments(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_setFoldComments(void* self, bool fold);
bool QsciLexerCPP_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerCPP_override_virtual_setFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_setFoldPreprocessor(void* self, bool fold);
bool QsciLexerCPP_override_virtual_setStylePreprocessor(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_setStylePreprocessor(void* self, bool style);
bool QsciLexerCPP_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_language(const void* self);
bool QsciLexerCPP_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_lexer(const void* self);
bool QsciLexerCPP_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerCPP_virtualbase_lexerId(const void* self);
bool QsciLexerCPP_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerCPP_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerCPP_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerCPP_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerCPP_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerCPP_virtualbase_blockLookback(const void* self);
bool QsciLexerCPP_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerCPP_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerCPP_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerCPP_virtualbase_braceStyle(const void* self);
bool QsciLexerCPP_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_caseSensitive(const void* self);
bool QsciLexerCPP_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerCPP_virtualbase_color(const void* self, int style);
bool QsciLexerCPP_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_eolFill(const void* self, int style);
bool QsciLexerCPP_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerCPP_virtualbase_font(const void* self, int style);
bool QsciLexerCPP_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerCPP_virtualbase_indentationGuideView(const void* self);
bool QsciLexerCPP_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_keywords(const void* self, int set);
bool QsciLexerCPP_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerCPP_virtualbase_defaultStyle(const void* self);
bool QsciLexerCPP_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerCPP_virtualbase_description(const void* self, int style);
bool QsciLexerCPP_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerCPP_virtualbase_paper(const void* self, int style);
bool QsciLexerCPP_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCPP_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerCPP_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerCPP_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerCPP_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerCPP_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCPP_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerCPP_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerCPP_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_refreshProperties(void* self);
bool QsciLexerCPP_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerCPP_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerCPP_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerCPP_virtualbase_wordCharacters(const void* self);
bool QsciLexerCPP_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerCPP_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerCPP_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerCPP_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerCPP_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerCPP_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCPP_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCPP_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_event(void* self, QEvent* event);
bool QsciLexerCPP_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerCPP_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerCPP_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerCPP_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerCPP_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerCPP_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerCPP_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerCPP_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerCPP_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCPP_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerCPP_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerCPP_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerCPP_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerCPP_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QsciLexerCPP_delete(QsciLexerCPP* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
