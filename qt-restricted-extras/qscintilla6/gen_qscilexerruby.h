#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERRUBY_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERRUBY_H

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
class QsciLexerRuby;
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
typedef struct QsciLexerRuby QsciLexerRuby;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerRuby* QsciLexerRuby_new();
QsciLexerRuby* QsciLexerRuby_new2(QObject* parent);
void QsciLexerRuby_virtbase(QsciLexerRuby* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerRuby_metaObject(const QsciLexerRuby* self);
void* QsciLexerRuby_metacast(QsciLexerRuby* self, const char* param1);
struct miqt_string QsciLexerRuby_tr(const char* s);
const char* QsciLexerRuby_language(const QsciLexerRuby* self);
const char* QsciLexerRuby_lexer(const QsciLexerRuby* self);
const char* QsciLexerRuby_blockEnd(const QsciLexerRuby* self);
const char* QsciLexerRuby_blockStart(const QsciLexerRuby* self);
const char* QsciLexerRuby_blockStartKeyword(const QsciLexerRuby* self);
int QsciLexerRuby_braceStyle(const QsciLexerRuby* self);
QColor* QsciLexerRuby_defaultColor(const QsciLexerRuby* self, int style);
bool QsciLexerRuby_defaultEolFill(const QsciLexerRuby* self, int style);
QFont* QsciLexerRuby_defaultFont(const QsciLexerRuby* self, int style);
QColor* QsciLexerRuby_defaultPaper(const QsciLexerRuby* self, int style);
const char* QsciLexerRuby_keywords(const QsciLexerRuby* self, int set);
struct miqt_string QsciLexerRuby_description(const QsciLexerRuby* self, int style);
void QsciLexerRuby_refreshProperties(QsciLexerRuby* self);
void QsciLexerRuby_setFoldComments(QsciLexerRuby* self, bool fold);
bool QsciLexerRuby_foldComments(const QsciLexerRuby* self);
void QsciLexerRuby_setFoldCompact(QsciLexerRuby* self, bool fold);
bool QsciLexerRuby_foldCompact(const QsciLexerRuby* self);
struct miqt_string QsciLexerRuby_tr2(const char* s, const char* c);
struct miqt_string QsciLexerRuby_tr3(const char* s, const char* c, int n);
const char* QsciLexerRuby_blockEndWithStyle(const QsciLexerRuby* self, int* style);
const char* QsciLexerRuby_blockStartWithStyle(const QsciLexerRuby* self, int* style);
const char* QsciLexerRuby_blockStartKeywordWithStyle(const QsciLexerRuby* self, int* style);
bool QsciLexerRuby_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_language(const void* self);
bool QsciLexerRuby_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_lexer(const void* self);
bool QsciLexerRuby_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerRuby_virtualbase_lexerId(const void* self);
bool QsciLexerRuby_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerRuby_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerRuby_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerRuby_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerRuby_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerRuby_virtualbase_blockLookback(const void* self);
bool QsciLexerRuby_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerRuby_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerRuby_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerRuby_virtualbase_braceStyle(const void* self);
bool QsciLexerRuby_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerRuby_virtualbase_caseSensitive(const void* self);
bool QsciLexerRuby_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerRuby_virtualbase_color(const void* self, int style);
bool QsciLexerRuby_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerRuby_virtualbase_eolFill(const void* self, int style);
bool QsciLexerRuby_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerRuby_virtualbase_font(const void* self, int style);
bool QsciLexerRuby_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerRuby_virtualbase_indentationGuideView(const void* self);
bool QsciLexerRuby_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_keywords(const void* self, int set);
bool QsciLexerRuby_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerRuby_virtualbase_defaultStyle(const void* self);
bool QsciLexerRuby_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerRuby_virtualbase_description(const void* self, int style);
bool QsciLexerRuby_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerRuby_virtualbase_paper(const void* self, int style);
bool QsciLexerRuby_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerRuby_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerRuby_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerRuby_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerRuby_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerRuby_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerRuby_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerRuby_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerRuby_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerRuby_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_refreshProperties(void* self);
bool QsciLexerRuby_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerRuby_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerRuby_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerRuby_virtualbase_wordCharacters(const void* self);
bool QsciLexerRuby_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerRuby_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerRuby_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerRuby_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerRuby_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerRuby_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerRuby_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerRuby_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerRuby_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerRuby_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerRuby_virtualbase_event(void* self, QEvent* event);
bool QsciLexerRuby_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerRuby_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerRuby_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerRuby_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerRuby_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerRuby_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerRuby_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerRuby_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerRuby_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerRuby_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerRuby_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerRuby_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerRuby_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerRuby_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QsciLexerRuby_delete(QsciLexerRuby* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
