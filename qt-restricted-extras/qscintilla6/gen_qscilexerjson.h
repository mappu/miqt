#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERJSON_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERJSON_H

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
class QsciLexerJSON;
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
typedef struct QsciLexerJSON QsciLexerJSON;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerJSON* QsciLexerJSON_new();
QsciLexerJSON* QsciLexerJSON_new2(QObject* parent);
void QsciLexerJSON_virtbase(QsciLexerJSON* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerJSON_metaObject(const QsciLexerJSON* self);
void* QsciLexerJSON_metacast(QsciLexerJSON* self, const char* param1);
struct miqt_string QsciLexerJSON_tr(const char* s);
const char* QsciLexerJSON_language(const QsciLexerJSON* self);
const char* QsciLexerJSON_lexer(const QsciLexerJSON* self);
QColor* QsciLexerJSON_defaultColor(const QsciLexerJSON* self, int style);
bool QsciLexerJSON_defaultEolFill(const QsciLexerJSON* self, int style);
QFont* QsciLexerJSON_defaultFont(const QsciLexerJSON* self, int style);
QColor* QsciLexerJSON_defaultPaper(const QsciLexerJSON* self, int style);
const char* QsciLexerJSON_keywords(const QsciLexerJSON* self, int set);
struct miqt_string QsciLexerJSON_description(const QsciLexerJSON* self, int style);
void QsciLexerJSON_refreshProperties(QsciLexerJSON* self);
void QsciLexerJSON_setHighlightComments(QsciLexerJSON* self, bool highlight);
bool QsciLexerJSON_highlightComments(const QsciLexerJSON* self);
void QsciLexerJSON_setHighlightEscapeSequences(QsciLexerJSON* self, bool highlight);
bool QsciLexerJSON_highlightEscapeSequences(const QsciLexerJSON* self);
void QsciLexerJSON_setFoldCompact(QsciLexerJSON* self, bool fold);
bool QsciLexerJSON_foldCompact(const QsciLexerJSON* self);
struct miqt_string QsciLexerJSON_tr2(const char* s, const char* c);
struct miqt_string QsciLexerJSON_tr3(const char* s, const char* c, int n);
bool QsciLexerJSON_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerJSON_virtualbase_language(const void* self);
bool QsciLexerJSON_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerJSON_virtualbase_lexer(const void* self);
bool QsciLexerJSON_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerJSON_virtualbase_lexerId(const void* self);
bool QsciLexerJSON_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerJSON_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerJSON_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerJSON_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerJSON_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerJSON_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerJSON_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerJSON_virtualbase_blockLookback(const void* self);
bool QsciLexerJSON_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerJSON_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerJSON_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerJSON_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerJSON_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerJSON_virtualbase_braceStyle(const void* self);
bool QsciLexerJSON_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerJSON_virtualbase_caseSensitive(const void* self);
bool QsciLexerJSON_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerJSON_virtualbase_color(const void* self, int style);
bool QsciLexerJSON_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerJSON_virtualbase_eolFill(const void* self, int style);
bool QsciLexerJSON_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerJSON_virtualbase_font(const void* self, int style);
bool QsciLexerJSON_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerJSON_virtualbase_indentationGuideView(const void* self);
bool QsciLexerJSON_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerJSON_virtualbase_keywords(const void* self, int set);
bool QsciLexerJSON_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerJSON_virtualbase_defaultStyle(const void* self);
bool QsciLexerJSON_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerJSON_virtualbase_description(const void* self, int style);
bool QsciLexerJSON_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerJSON_virtualbase_paper(const void* self, int style);
bool QsciLexerJSON_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerJSON_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerJSON_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerJSON_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerJSON_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerJSON_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerJSON_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerJSON_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerJSON_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerJSON_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerJSON_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerJSON_virtualbase_refreshProperties(void* self);
bool QsciLexerJSON_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerJSON_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerJSON_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerJSON_virtualbase_wordCharacters(const void* self);
bool QsciLexerJSON_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerJSON_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerJSON_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerJSON_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerJSON_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerJSON_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerJSON_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerJSON_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerJSON_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerJSON_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerJSON_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerJSON_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerJSON_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerJSON_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerJSON_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerJSON_virtualbase_event(void* self, QEvent* event);
bool QsciLexerJSON_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerJSON_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerJSON_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerJSON_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerJSON_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerJSON_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerJSON_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerJSON_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerJSON_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerJSON_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerJSON_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerJSON_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerJSON_delete(QsciLexerJSON* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
