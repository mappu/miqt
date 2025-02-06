#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPYTHON_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPYTHON_H

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
class QsciLexerPython;
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
typedef struct QsciLexerPython QsciLexerPython;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPython* QsciLexerPython_new();
QsciLexerPython* QsciLexerPython_new2(QObject* parent);
void QsciLexerPython_virtbase(QsciLexerPython* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerPython_metaObject(const QsciLexerPython* self);
void* QsciLexerPython_metacast(QsciLexerPython* self, const char* param1);
struct miqt_string QsciLexerPython_tr(const char* s);
const char* QsciLexerPython_language(const QsciLexerPython* self);
const char* QsciLexerPython_lexer(const QsciLexerPython* self);
struct miqt_array /* of struct miqt_string */  QsciLexerPython_autoCompletionWordSeparators(const QsciLexerPython* self);
int QsciLexerPython_blockLookback(const QsciLexerPython* self);
const char* QsciLexerPython_blockStart(const QsciLexerPython* self);
int QsciLexerPython_braceStyle(const QsciLexerPython* self);
QColor* QsciLexerPython_defaultColor(const QsciLexerPython* self, int style);
bool QsciLexerPython_defaultEolFill(const QsciLexerPython* self, int style);
QFont* QsciLexerPython_defaultFont(const QsciLexerPython* self, int style);
QColor* QsciLexerPython_defaultPaper(const QsciLexerPython* self, int style);
int QsciLexerPython_indentationGuideView(const QsciLexerPython* self);
const char* QsciLexerPython_keywords(const QsciLexerPython* self, int set);
struct miqt_string QsciLexerPython_description(const QsciLexerPython* self, int style);
void QsciLexerPython_refreshProperties(QsciLexerPython* self);
bool QsciLexerPython_foldComments(const QsciLexerPython* self);
void QsciLexerPython_setFoldCompact(QsciLexerPython* self, bool fold);
bool QsciLexerPython_foldCompact(const QsciLexerPython* self);
bool QsciLexerPython_foldQuotes(const QsciLexerPython* self);
int QsciLexerPython_indentationWarning(const QsciLexerPython* self);
void QsciLexerPython_setHighlightSubidentifiers(QsciLexerPython* self, bool enabled);
bool QsciLexerPython_highlightSubidentifiers(const QsciLexerPython* self);
void QsciLexerPython_setStringsOverNewlineAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_stringsOverNewlineAllowed(const QsciLexerPython* self);
void QsciLexerPython_setV2UnicodeAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_v2UnicodeAllowed(const QsciLexerPython* self);
void QsciLexerPython_setV3BinaryOctalAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_v3BinaryOctalAllowed(const QsciLexerPython* self);
void QsciLexerPython_setV3BytesAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_v3BytesAllowed(const QsciLexerPython* self);
void QsciLexerPython_setFoldComments(QsciLexerPython* self, bool fold);
void QsciLexerPython_setFoldQuotes(QsciLexerPython* self, bool fold);
void QsciLexerPython_setIndentationWarning(QsciLexerPython* self, int warn);
struct miqt_string QsciLexerPython_tr2(const char* s, const char* c);
struct miqt_string QsciLexerPython_tr3(const char* s, const char* c, int n);
const char* QsciLexerPython_blockStart1(const QsciLexerPython* self, int* style);
bool QsciLexerPython_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerPython_virtualbase_indentationGuideView(const void* self);
bool QsciLexerPython_override_virtual_setFoldComments(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_setFoldComments(void* self, bool fold);
bool QsciLexerPython_override_virtual_setFoldQuotes(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_setFoldQuotes(void* self, bool fold);
bool QsciLexerPython_override_virtual_setIndentationWarning(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_setIndentationWarning(void* self, int warn);
bool QsciLexerPython_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_language(const void* self);
bool QsciLexerPython_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_lexer(const void* self);
bool QsciLexerPython_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerPython_virtualbase_lexerId(const void* self);
bool QsciLexerPython_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerPython_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerPython_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerPython_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerPython_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerPython_virtualbase_blockLookback(const void* self);
bool QsciLexerPython_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerPython_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerPython_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerPython_virtualbase_braceStyle(const void* self);
bool QsciLexerPython_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerPython_virtualbase_caseSensitive(const void* self);
bool QsciLexerPython_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerPython_virtualbase_color(const void* self, int style);
bool QsciLexerPython_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerPython_virtualbase_eolFill(const void* self, int style);
bool QsciLexerPython_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerPython_virtualbase_font(const void* self, int style);
bool QsciLexerPython_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_keywords(const void* self, int set);
bool QsciLexerPython_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerPython_virtualbase_defaultStyle(const void* self);
bool QsciLexerPython_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerPython_virtualbase_description(const void* self, int style);
bool QsciLexerPython_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerPython_virtualbase_paper(const void* self, int style);
bool QsciLexerPython_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPython_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerPython_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerPython_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerPython_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerPython_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerPython_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPython_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerPython_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerPython_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_refreshProperties(void* self);
bool QsciLexerPython_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerPython_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerPython_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerPython_virtualbase_wordCharacters(const void* self);
bool QsciLexerPython_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerPython_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerPython_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerPython_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerPython_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerPython_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerPython_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPython_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerPython_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPython_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerPython_virtualbase_event(void* self, QEvent* event);
bool QsciLexerPython_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerPython_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerPython_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerPython_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerPython_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerPython_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerPython_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerPython_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerPython_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPython_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerPython_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerPython_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerPython_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerPython_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QsciLexerPython_delete(QsciLexerPython* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
