#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERCMAKE_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERCMAKE_H

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
class QsciLexerCMake;
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
typedef struct QsciLexerCMake QsciLexerCMake;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerCMake* QsciLexerCMake_new();
QsciLexerCMake* QsciLexerCMake_new2(QObject* parent);
void QsciLexerCMake_virtbase(QsciLexerCMake* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerCMake_metaObject(const QsciLexerCMake* self);
void* QsciLexerCMake_metacast(QsciLexerCMake* self, const char* param1);
struct miqt_string QsciLexerCMake_tr(const char* s);
const char* QsciLexerCMake_language(const QsciLexerCMake* self);
const char* QsciLexerCMake_lexer(const QsciLexerCMake* self);
QColor* QsciLexerCMake_defaultColor(const QsciLexerCMake* self, int style);
QFont* QsciLexerCMake_defaultFont(const QsciLexerCMake* self, int style);
QColor* QsciLexerCMake_defaultPaper(const QsciLexerCMake* self, int style);
const char* QsciLexerCMake_keywords(const QsciLexerCMake* self, int set);
struct miqt_string QsciLexerCMake_description(const QsciLexerCMake* self, int style);
void QsciLexerCMake_refreshProperties(QsciLexerCMake* self);
bool QsciLexerCMake_foldAtElse(const QsciLexerCMake* self);
void QsciLexerCMake_setFoldAtElse(QsciLexerCMake* self, bool fold);
struct miqt_string QsciLexerCMake_tr2(const char* s, const char* c);
struct miqt_string QsciLexerCMake_tr3(const char* s, const char* c, int n);

bool QsciLexerCMake_override_virtual_setFoldAtElse(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_setFoldAtElse(void* self, bool fold);
bool QsciLexerCMake_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_language(const void* self);
bool QsciLexerCMake_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_lexer(const void* self);
bool QsciLexerCMake_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerCMake_virtualbase_lexerId(const void* self);
bool QsciLexerCMake_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerCMake_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerCMake_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerCMake_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerCMake_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerCMake_virtualbase_blockLookback(const void* self);
bool QsciLexerCMake_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerCMake_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerCMake_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerCMake_virtualbase_braceStyle(const void* self);
bool QsciLexerCMake_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerCMake_virtualbase_caseSensitive(const void* self);
bool QsciLexerCMake_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerCMake_virtualbase_color(const void* self, int style);
bool QsciLexerCMake_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerCMake_virtualbase_eolFill(const void* self, int style);
bool QsciLexerCMake_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerCMake_virtualbase_font(const void* self, int style);
bool QsciLexerCMake_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerCMake_virtualbase_indentationGuideView(const void* self);
bool QsciLexerCMake_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_keywords(const void* self, int set);
bool QsciLexerCMake_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerCMake_virtualbase_defaultStyle(const void* self);
bool QsciLexerCMake_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerCMake_virtualbase_description(const void* self, int style);
bool QsciLexerCMake_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerCMake_virtualbase_paper(const void* self, int style);
bool QsciLexerCMake_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCMake_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerCMake_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerCMake_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerCMake_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerCMake_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerCMake_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCMake_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerCMake_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerCMake_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_refreshProperties(void* self);
bool QsciLexerCMake_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerCMake_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerCMake_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerCMake_virtualbase_wordCharacters(const void* self);
bool QsciLexerCMake_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerCMake_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerCMake_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerCMake_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerCMake_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerCMake_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerCMake_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCMake_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerCMake_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCMake_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerCMake_virtualbase_event(void* self, QEvent* event);
bool QsciLexerCMake_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerCMake_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerCMake_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerCMake_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerCMake_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerCMake_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerCMake_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerCMake_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

bool QsciLexerCMake_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCMake_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerCMake_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerCMake_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerCMake_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerCMake_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QsciLexerCMake_delete(QsciLexerCMake* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
