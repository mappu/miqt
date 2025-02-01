#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPASCAL_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPASCAL_H

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
class QsciLexerPascal;
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
typedef struct QsciLexerPascal QsciLexerPascal;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPascal* QsciLexerPascal_new();
QsciLexerPascal* QsciLexerPascal_new2(QObject* parent);
void QsciLexerPascal_virtbase(QsciLexerPascal* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerPascal_metaObject(const QsciLexerPascal* self);
void* QsciLexerPascal_metacast(QsciLexerPascal* self, const char* param1);
struct miqt_string QsciLexerPascal_tr(const char* s);
const char* QsciLexerPascal_language(const QsciLexerPascal* self);
const char* QsciLexerPascal_lexer(const QsciLexerPascal* self);
struct miqt_array /* of struct miqt_string */  QsciLexerPascal_autoCompletionWordSeparators(const QsciLexerPascal* self);
const char* QsciLexerPascal_blockEnd(const QsciLexerPascal* self);
const char* QsciLexerPascal_blockStart(const QsciLexerPascal* self);
const char* QsciLexerPascal_blockStartKeyword(const QsciLexerPascal* self);
int QsciLexerPascal_braceStyle(const QsciLexerPascal* self);
QColor* QsciLexerPascal_defaultColor(const QsciLexerPascal* self, int style);
bool QsciLexerPascal_defaultEolFill(const QsciLexerPascal* self, int style);
QFont* QsciLexerPascal_defaultFont(const QsciLexerPascal* self, int style);
QColor* QsciLexerPascal_defaultPaper(const QsciLexerPascal* self, int style);
const char* QsciLexerPascal_keywords(const QsciLexerPascal* self, int set);
struct miqt_string QsciLexerPascal_description(const QsciLexerPascal* self, int style);
void QsciLexerPascal_refreshProperties(QsciLexerPascal* self);
bool QsciLexerPascal_foldComments(const QsciLexerPascal* self);
bool QsciLexerPascal_foldCompact(const QsciLexerPascal* self);
bool QsciLexerPascal_foldPreprocessor(const QsciLexerPascal* self);
void QsciLexerPascal_setSmartHighlighting(QsciLexerPascal* self, bool enabled);
bool QsciLexerPascal_smartHighlighting(const QsciLexerPascal* self);
void QsciLexerPascal_setFoldComments(QsciLexerPascal* self, bool fold);
void QsciLexerPascal_setFoldCompact(QsciLexerPascal* self, bool fold);
void QsciLexerPascal_setFoldPreprocessor(QsciLexerPascal* self, bool fold);
struct miqt_string QsciLexerPascal_tr2(const char* s, const char* c);
struct miqt_string QsciLexerPascal_tr3(const char* s, const char* c, int n);
const char* QsciLexerPascal_blockEnd1(const QsciLexerPascal* self, int* style);
const char* QsciLexerPascal_blockStart1(const QsciLexerPascal* self, int* style);
const char* QsciLexerPascal_blockStartKeyword1(const QsciLexerPascal* self, int* style);
bool QsciLexerPascal_override_virtual_setFoldComments(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_setFoldComments(void* self, bool fold);
bool QsciLexerPascal_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerPascal_override_virtual_setFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_setFoldPreprocessor(void* self, bool fold);
bool QsciLexerPascal_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_language(const void* self);
bool QsciLexerPascal_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_lexer(const void* self);
bool QsciLexerPascal_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerPascal_virtualbase_lexerId(const void* self);
bool QsciLexerPascal_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerPascal_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerPascal_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerPascal_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerPascal_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerPascal_virtualbase_blockLookback(const void* self);
bool QsciLexerPascal_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerPascal_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerPascal_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerPascal_virtualbase_braceStyle(const void* self);
bool QsciLexerPascal_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_caseSensitive(const void* self);
bool QsciLexerPascal_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerPascal_virtualbase_color(const void* self, int style);
bool QsciLexerPascal_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_eolFill(const void* self, int style);
bool QsciLexerPascal_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerPascal_virtualbase_font(const void* self, int style);
bool QsciLexerPascal_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerPascal_virtualbase_indentationGuideView(const void* self);
bool QsciLexerPascal_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_keywords(const void* self, int set);
bool QsciLexerPascal_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerPascal_virtualbase_defaultStyle(const void* self);
bool QsciLexerPascal_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerPascal_virtualbase_description(const void* self, int style);
bool QsciLexerPascal_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerPascal_virtualbase_paper(const void* self, int style);
bool QsciLexerPascal_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPascal_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerPascal_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerPascal_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerPascal_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerPascal_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPascal_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerPascal_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerPascal_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_refreshProperties(void* self);
bool QsciLexerPascal_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerPascal_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerPascal_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_wordCharacters(const void* self);
bool QsciLexerPascal_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerPascal_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerPascal_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerPascal_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerPascal_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerPascal_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPascal_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPascal_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_event(void* self, QEvent* event);
bool QsciLexerPascal_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerPascal_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerPascal_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerPascal_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerPascal_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerPascal_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerPascal_delete(QsciLexerPascal* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
