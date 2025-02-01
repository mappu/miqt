#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXEREDIFACT_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXEREDIFACT_H

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
class QsciLexerEDIFACT;
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
typedef struct QsciLexerEDIFACT QsciLexerEDIFACT;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerEDIFACT* QsciLexerEDIFACT_new();
QsciLexerEDIFACT* QsciLexerEDIFACT_new2(QObject* parent);
void QsciLexerEDIFACT_virtbase(QsciLexerEDIFACT* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerEDIFACT_metaObject(const QsciLexerEDIFACT* self);
void* QsciLexerEDIFACT_metacast(QsciLexerEDIFACT* self, const char* param1);
struct miqt_string QsciLexerEDIFACT_tr(const char* s);
const char* QsciLexerEDIFACT_language(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_lexer(const QsciLexerEDIFACT* self);
QColor* QsciLexerEDIFACT_defaultColor(const QsciLexerEDIFACT* self, int style);
struct miqt_string QsciLexerEDIFACT_description(const QsciLexerEDIFACT* self, int style);
struct miqt_string QsciLexerEDIFACT_tr2(const char* s, const char* c);
struct miqt_string QsciLexerEDIFACT_tr3(const char* s, const char* c, int n);
bool QsciLexerEDIFACT_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_language(const void* self);
bool QsciLexerEDIFACT_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_lexer(const void* self);
bool QsciLexerEDIFACT_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerEDIFACT_virtualbase_lexerId(const void* self);
bool QsciLexerEDIFACT_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerEDIFACT_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerEDIFACT_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerEDIFACT_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerEDIFACT_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerEDIFACT_virtualbase_blockLookback(const void* self);
bool QsciLexerEDIFACT_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerEDIFACT_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerEDIFACT_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerEDIFACT_virtualbase_braceStyle(const void* self);
bool QsciLexerEDIFACT_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_caseSensitive(const void* self);
bool QsciLexerEDIFACT_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerEDIFACT_virtualbase_color(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_eolFill(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerEDIFACT_virtualbase_font(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerEDIFACT_virtualbase_indentationGuideView(const void* self);
bool QsciLexerEDIFACT_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_keywords(const void* self, int set);
bool QsciLexerEDIFACT_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerEDIFACT_virtualbase_defaultStyle(const void* self);
bool QsciLexerEDIFACT_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerEDIFACT_virtualbase_description(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerEDIFACT_virtualbase_paper(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerEDIFACT_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerEDIFACT_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerEDIFACT_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerEDIFACT_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_refreshProperties(void* self);
bool QsciLexerEDIFACT_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerEDIFACT_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerEDIFACT_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_wordCharacters(const void* self);
bool QsciLexerEDIFACT_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerEDIFACT_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerEDIFACT_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerEDIFACT_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerEDIFACT_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerEDIFACT_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerEDIFACT_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerEDIFACT_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_event(void* self, QEvent* event);
bool QsciLexerEDIFACT_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerEDIFACT_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerEDIFACT_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerEDIFACT_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerEDIFACT_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerEDIFACT_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerEDIFACT_delete(QsciLexerEDIFACT* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
