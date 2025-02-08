#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERVERILOG_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERVERILOG_H

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
class QsciLexerVerilog;
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
typedef struct QsciLexerVerilog QsciLexerVerilog;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerVerilog* QsciLexerVerilog_new();
QsciLexerVerilog* QsciLexerVerilog_new2(QObject* parent);
void QsciLexerVerilog_virtbase(QsciLexerVerilog* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerVerilog_metaObject(const QsciLexerVerilog* self);
void* QsciLexerVerilog_metacast(QsciLexerVerilog* self, const char* param1);
struct miqt_string QsciLexerVerilog_tr(const char* s);
const char* QsciLexerVerilog_language(const QsciLexerVerilog* self);
const char* QsciLexerVerilog_lexer(const QsciLexerVerilog* self);
int QsciLexerVerilog_braceStyle(const QsciLexerVerilog* self);
const char* QsciLexerVerilog_wordCharacters(const QsciLexerVerilog* self);
QColor* QsciLexerVerilog_defaultColor(const QsciLexerVerilog* self, int style);
bool QsciLexerVerilog_defaultEolFill(const QsciLexerVerilog* self, int style);
QFont* QsciLexerVerilog_defaultFont(const QsciLexerVerilog* self, int style);
QColor* QsciLexerVerilog_defaultPaper(const QsciLexerVerilog* self, int style);
const char* QsciLexerVerilog_keywords(const QsciLexerVerilog* self, int set);
struct miqt_string QsciLexerVerilog_description(const QsciLexerVerilog* self, int style);
void QsciLexerVerilog_refreshProperties(QsciLexerVerilog* self);
void QsciLexerVerilog_setFoldAtElse(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_foldAtElse(const QsciLexerVerilog* self);
void QsciLexerVerilog_setFoldComments(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_foldComments(const QsciLexerVerilog* self);
void QsciLexerVerilog_setFoldCompact(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_foldCompact(const QsciLexerVerilog* self);
void QsciLexerVerilog_setFoldPreprocessor(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_foldPreprocessor(const QsciLexerVerilog* self);
void QsciLexerVerilog_setFoldAtModule(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_foldAtModule(const QsciLexerVerilog* self);
struct miqt_string QsciLexerVerilog_tr2(const char* s, const char* c);
struct miqt_string QsciLexerVerilog_tr3(const char* s, const char* c, int n);
bool QsciLexerVerilog_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_language(const void* self);
bool QsciLexerVerilog_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_lexer(const void* self);
bool QsciLexerVerilog_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerVerilog_virtualbase_lexerId(const void* self);
bool QsciLexerVerilog_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerVerilog_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerVerilog_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerVerilog_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerVerilog_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerVerilog_virtualbase_blockLookback(const void* self);
bool QsciLexerVerilog_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerVerilog_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerVerilog_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerVerilog_virtualbase_braceStyle(const void* self);
bool QsciLexerVerilog_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerVerilog_virtualbase_caseSensitive(const void* self);
bool QsciLexerVerilog_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerVerilog_virtualbase_color(const void* self, int style);
bool QsciLexerVerilog_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerVerilog_virtualbase_eolFill(const void* self, int style);
bool QsciLexerVerilog_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerVerilog_virtualbase_font(const void* self, int style);
bool QsciLexerVerilog_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerVerilog_virtualbase_indentationGuideView(const void* self);
bool QsciLexerVerilog_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_keywords(const void* self, int set);
bool QsciLexerVerilog_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerVerilog_virtualbase_defaultStyle(const void* self);
bool QsciLexerVerilog_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerVerilog_virtualbase_description(const void* self, int style);
bool QsciLexerVerilog_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerVerilog_virtualbase_paper(const void* self, int style);
bool QsciLexerVerilog_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerVerilog_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerVerilog_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerVerilog_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerVerilog_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerVerilog_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerVerilog_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerVerilog_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerVerilog_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerVerilog_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_refreshProperties(void* self);
bool QsciLexerVerilog_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerVerilog_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerVerilog_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerVerilog_virtualbase_wordCharacters(const void* self);
bool QsciLexerVerilog_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerVerilog_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerVerilog_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerVerilog_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerVerilog_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerVerilog_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerVerilog_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerVerilog_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerVerilog_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerVerilog_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerVerilog_virtualbase_event(void* self, QEvent* event);
bool QsciLexerVerilog_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerVerilog_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerVerilog_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerVerilog_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerVerilog_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerVerilog_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerVerilog_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerVerilog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerVerilog_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerVerilog_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerVerilog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerVerilog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerVerilog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerVerilog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QsciLexerVerilog_delete(QsciLexerVerilog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
