#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERBATCH_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERBATCH_H

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
class QsciLexerBatch;
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
typedef struct QsciLexerBatch QsciLexerBatch;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerBatch* QsciLexerBatch_new();
QsciLexerBatch* QsciLexerBatch_new2(QObject* parent);
void QsciLexerBatch_virtbase(QsciLexerBatch* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerBatch_metaObject(const QsciLexerBatch* self);
void* QsciLexerBatch_metacast(QsciLexerBatch* self, const char* param1);
struct miqt_string QsciLexerBatch_tr(const char* s);
const char* QsciLexerBatch_language(const QsciLexerBatch* self);
const char* QsciLexerBatch_lexer(const QsciLexerBatch* self);
const char* QsciLexerBatch_wordCharacters(const QsciLexerBatch* self);
bool QsciLexerBatch_caseSensitive(const QsciLexerBatch* self);
QColor* QsciLexerBatch_defaultColor(const QsciLexerBatch* self, int style);
bool QsciLexerBatch_defaultEolFill(const QsciLexerBatch* self, int style);
QFont* QsciLexerBatch_defaultFont(const QsciLexerBatch* self, int style);
QColor* QsciLexerBatch_defaultPaper(const QsciLexerBatch* self, int style);
const char* QsciLexerBatch_keywords(const QsciLexerBatch* self, int set);
struct miqt_string QsciLexerBatch_description(const QsciLexerBatch* self, int style);
struct miqt_string QsciLexerBatch_tr2(const char* s, const char* c);
struct miqt_string QsciLexerBatch_tr3(const char* s, const char* c, int n);

bool QsciLexerBatch_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerBatch_virtualbase_language(const void* self);
bool QsciLexerBatch_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerBatch_virtualbase_lexer(const void* self);
bool QsciLexerBatch_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerBatch_virtualbase_lexerId(const void* self);
bool QsciLexerBatch_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerBatch_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerBatch_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerBatch_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerBatch_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerBatch_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerBatch_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerBatch_virtualbase_blockLookback(const void* self);
bool QsciLexerBatch_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerBatch_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerBatch_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerBatch_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerBatch_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerBatch_virtualbase_braceStyle(const void* self);
bool QsciLexerBatch_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerBatch_virtualbase_caseSensitive(const void* self);
bool QsciLexerBatch_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerBatch_virtualbase_color(const void* self, int style);
bool QsciLexerBatch_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerBatch_virtualbase_eolFill(const void* self, int style);
bool QsciLexerBatch_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerBatch_virtualbase_font(const void* self, int style);
bool QsciLexerBatch_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerBatch_virtualbase_indentationGuideView(const void* self);
bool QsciLexerBatch_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerBatch_virtualbase_keywords(const void* self, int set);
bool QsciLexerBatch_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerBatch_virtualbase_defaultStyle(const void* self);
bool QsciLexerBatch_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerBatch_virtualbase_description(const void* self, int style);
bool QsciLexerBatch_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerBatch_virtualbase_paper(const void* self, int style);
bool QsciLexerBatch_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerBatch_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerBatch_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerBatch_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerBatch_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerBatch_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerBatch_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerBatch_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerBatch_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerBatch_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerBatch_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerBatch_virtualbase_refreshProperties(void* self);
bool QsciLexerBatch_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerBatch_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerBatch_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerBatch_virtualbase_wordCharacters(const void* self);
bool QsciLexerBatch_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerBatch_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerBatch_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerBatch_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerBatch_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerBatch_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerBatch_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerBatch_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerBatch_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerBatch_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerBatch_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerBatch_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerBatch_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerBatch_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerBatch_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerBatch_virtualbase_event(void* self, QEvent* event);
bool QsciLexerBatch_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerBatch_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerBatch_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerBatch_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerBatch_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerBatch_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerBatch_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerBatch_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerBatch_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerBatch_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerBatch_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerBatch_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QsciLexerBatch_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerBatch_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerBatch_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerBatch_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QsciLexerBatch_delete(QsciLexerBatch* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
