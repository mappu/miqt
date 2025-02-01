#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERHTML_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERHTML_H

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
class QsciLexerHTML;
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
typedef struct QsciLexerHTML QsciLexerHTML;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerHTML* QsciLexerHTML_new();
QsciLexerHTML* QsciLexerHTML_new2(QObject* parent);
void QsciLexerHTML_virtbase(QsciLexerHTML* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerHTML_metaObject(const QsciLexerHTML* self);
void* QsciLexerHTML_metacast(QsciLexerHTML* self, const char* param1);
struct miqt_string QsciLexerHTML_tr(const char* s);
const char* QsciLexerHTML_language(const QsciLexerHTML* self);
const char* QsciLexerHTML_lexer(const QsciLexerHTML* self);
const char* QsciLexerHTML_autoCompletionFillups(const QsciLexerHTML* self);
const char* QsciLexerHTML_wordCharacters(const QsciLexerHTML* self);
QColor* QsciLexerHTML_defaultColor(const QsciLexerHTML* self, int style);
bool QsciLexerHTML_defaultEolFill(const QsciLexerHTML* self, int style);
QFont* QsciLexerHTML_defaultFont(const QsciLexerHTML* self, int style);
QColor* QsciLexerHTML_defaultPaper(const QsciLexerHTML* self, int style);
const char* QsciLexerHTML_keywords(const QsciLexerHTML* self, int set);
struct miqt_string QsciLexerHTML_description(const QsciLexerHTML* self, int style);
void QsciLexerHTML_refreshProperties(QsciLexerHTML* self);
bool QsciLexerHTML_caseSensitiveTags(const QsciLexerHTML* self);
void QsciLexerHTML_setDjangoTemplates(QsciLexerHTML* self, bool enabled);
bool QsciLexerHTML_djangoTemplates(const QsciLexerHTML* self);
bool QsciLexerHTML_foldCompact(const QsciLexerHTML* self);
bool QsciLexerHTML_foldPreprocessor(const QsciLexerHTML* self);
void QsciLexerHTML_setFoldScriptComments(QsciLexerHTML* self, bool fold);
bool QsciLexerHTML_foldScriptComments(const QsciLexerHTML* self);
void QsciLexerHTML_setFoldScriptHeredocs(QsciLexerHTML* self, bool fold);
bool QsciLexerHTML_foldScriptHeredocs(const QsciLexerHTML* self);
void QsciLexerHTML_setMakoTemplates(QsciLexerHTML* self, bool enabled);
bool QsciLexerHTML_makoTemplates(const QsciLexerHTML* self);
void QsciLexerHTML_setFoldCompact(QsciLexerHTML* self, bool fold);
void QsciLexerHTML_setFoldPreprocessor(QsciLexerHTML* self, bool fold);
void QsciLexerHTML_setCaseSensitiveTags(QsciLexerHTML* self, bool sens);
struct miqt_string QsciLexerHTML_tr2(const char* s, const char* c);
struct miqt_string QsciLexerHTML_tr3(const char* s, const char* c, int n);
bool QsciLexerHTML_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerHTML_override_virtual_setFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_setFoldPreprocessor(void* self, bool fold);
bool QsciLexerHTML_override_virtual_setCaseSensitiveTags(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_setCaseSensitiveTags(void* self, bool sens);
bool QsciLexerHTML_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_language(const void* self);
bool QsciLexerHTML_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_lexer(const void* self);
bool QsciLexerHTML_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerHTML_virtualbase_lexerId(const void* self);
bool QsciLexerHTML_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerHTML_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerHTML_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerHTML_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerHTML_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerHTML_virtualbase_blockLookback(const void* self);
bool QsciLexerHTML_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerHTML_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerHTML_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerHTML_virtualbase_braceStyle(const void* self);
bool QsciLexerHTML_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_caseSensitive(const void* self);
bool QsciLexerHTML_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerHTML_virtualbase_color(const void* self, int style);
bool QsciLexerHTML_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_eolFill(const void* self, int style);
bool QsciLexerHTML_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerHTML_virtualbase_font(const void* self, int style);
bool QsciLexerHTML_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerHTML_virtualbase_indentationGuideView(const void* self);
bool QsciLexerHTML_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_keywords(const void* self, int set);
bool QsciLexerHTML_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerHTML_virtualbase_defaultStyle(const void* self);
bool QsciLexerHTML_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerHTML_virtualbase_description(const void* self, int style);
bool QsciLexerHTML_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerHTML_virtualbase_paper(const void* self, int style);
bool QsciLexerHTML_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerHTML_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerHTML_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerHTML_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerHTML_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerHTML_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerHTML_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerHTML_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerHTML_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_refreshProperties(void* self);
bool QsciLexerHTML_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerHTML_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerHTML_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_wordCharacters(const void* self);
bool QsciLexerHTML_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerHTML_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerHTML_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerHTML_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerHTML_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerHTML_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerHTML_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerHTML_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_event(void* self, QEvent* event);
bool QsciLexerHTML_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerHTML_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerHTML_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerHTML_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerHTML_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerHTML_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerHTML_delete(QsciLexerHTML* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
