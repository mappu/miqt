#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERCOFFEESCRIPT_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERCOFFEESCRIPT_H

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
class QsciLexerCoffeeScript;
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
typedef struct QsciLexerCoffeeScript QsciLexerCoffeeScript;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerCoffeeScript* QsciLexerCoffeeScript_new();
QsciLexerCoffeeScript* QsciLexerCoffeeScript_new2(QObject* parent);
void QsciLexerCoffeeScript_virtbase(QsciLexerCoffeeScript* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerCoffeeScript_metaObject(const QsciLexerCoffeeScript* self);
void* QsciLexerCoffeeScript_metacast(QsciLexerCoffeeScript* self, const char* param1);
struct miqt_string QsciLexerCoffeeScript_tr(const char* s);
const char* QsciLexerCoffeeScript_language(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_lexer(const QsciLexerCoffeeScript* self);
struct miqt_array /* of struct miqt_string */  QsciLexerCoffeeScript_autoCompletionWordSeparators(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_blockEnd(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_blockStart(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_blockStartKeyword(const QsciLexerCoffeeScript* self);
int QsciLexerCoffeeScript_braceStyle(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_wordCharacters(const QsciLexerCoffeeScript* self);
QColor* QsciLexerCoffeeScript_defaultColor(const QsciLexerCoffeeScript* self, int style);
bool QsciLexerCoffeeScript_defaultEolFill(const QsciLexerCoffeeScript* self, int style);
QFont* QsciLexerCoffeeScript_defaultFont(const QsciLexerCoffeeScript* self, int style);
QColor* QsciLexerCoffeeScript_defaultPaper(const QsciLexerCoffeeScript* self, int style);
const char* QsciLexerCoffeeScript_keywords(const QsciLexerCoffeeScript* self, int set);
struct miqt_string QsciLexerCoffeeScript_description(const QsciLexerCoffeeScript* self, int style);
void QsciLexerCoffeeScript_refreshProperties(QsciLexerCoffeeScript* self);
bool QsciLexerCoffeeScript_dollarsAllowed(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_setDollarsAllowed(QsciLexerCoffeeScript* self, bool allowed);
bool QsciLexerCoffeeScript_foldComments(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_setFoldComments(QsciLexerCoffeeScript* self, bool fold);
bool QsciLexerCoffeeScript_foldCompact(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_setFoldCompact(QsciLexerCoffeeScript* self, bool fold);
bool QsciLexerCoffeeScript_stylePreprocessor(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_setStylePreprocessor(QsciLexerCoffeeScript* self, bool style);
struct miqt_string QsciLexerCoffeeScript_tr2(const char* s, const char* c);
struct miqt_string QsciLexerCoffeeScript_tr3(const char* s, const char* c, int n);
const char* QsciLexerCoffeeScript_blockEnd1(const QsciLexerCoffeeScript* self, int* style);
const char* QsciLexerCoffeeScript_blockStart1(const QsciLexerCoffeeScript* self, int* style);
const char* QsciLexerCoffeeScript_blockStartKeyword1(const QsciLexerCoffeeScript* self, int* style);
bool QsciLexerCoffeeScript_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_language(const void* self);
bool QsciLexerCoffeeScript_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_lexer(const void* self);
bool QsciLexerCoffeeScript_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerCoffeeScript_virtualbase_lexerId(const void* self);
bool QsciLexerCoffeeScript_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerCoffeeScript_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerCoffeeScript_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerCoffeeScript_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerCoffeeScript_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerCoffeeScript_virtualbase_blockLookback(const void* self);
bool QsciLexerCoffeeScript_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerCoffeeScript_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerCoffeeScript_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerCoffeeScript_virtualbase_braceStyle(const void* self);
bool QsciLexerCoffeeScript_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerCoffeeScript_virtualbase_caseSensitive(const void* self);
bool QsciLexerCoffeeScript_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerCoffeeScript_virtualbase_color(const void* self, int style);
bool QsciLexerCoffeeScript_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerCoffeeScript_virtualbase_eolFill(const void* self, int style);
bool QsciLexerCoffeeScript_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerCoffeeScript_virtualbase_font(const void* self, int style);
bool QsciLexerCoffeeScript_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerCoffeeScript_virtualbase_indentationGuideView(const void* self);
bool QsciLexerCoffeeScript_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_keywords(const void* self, int set);
bool QsciLexerCoffeeScript_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerCoffeeScript_virtualbase_defaultStyle(const void* self);
bool QsciLexerCoffeeScript_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerCoffeeScript_virtualbase_description(const void* self, int style);
bool QsciLexerCoffeeScript_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerCoffeeScript_virtualbase_paper(const void* self, int style);
bool QsciLexerCoffeeScript_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCoffeeScript_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerCoffeeScript_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerCoffeeScript_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerCoffeeScript_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerCoffeeScript_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerCoffeeScript_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCoffeeScript_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerCoffeeScript_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerCoffeeScript_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_refreshProperties(void* self);
bool QsciLexerCoffeeScript_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerCoffeeScript_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerCoffeeScript_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerCoffeeScript_virtualbase_wordCharacters(const void* self);
bool QsciLexerCoffeeScript_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerCoffeeScript_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerCoffeeScript_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerCoffeeScript_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerCoffeeScript_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerCoffeeScript_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerCoffeeScript_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCoffeeScript_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerCoffeeScript_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCoffeeScript_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerCoffeeScript_virtualbase_event(void* self, QEvent* event);
bool QsciLexerCoffeeScript_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerCoffeeScript_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerCoffeeScript_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerCoffeeScript_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerCoffeeScript_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerCoffeeScript_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerCoffeeScript_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerCoffeeScript_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerCoffeeScript_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCoffeeScript_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerCoffeeScript_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerCoffeeScript_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerCoffeeScript_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerCoffeeScript_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QsciLexerCoffeeScript_delete(QsciLexerCoffeeScript* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
