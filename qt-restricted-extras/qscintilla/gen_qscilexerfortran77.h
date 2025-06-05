#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERFORTRAN77_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERFORTRAN77_H

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
class QsciLexerFortran77;
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
typedef struct QsciLexerFortran77 QsciLexerFortran77;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerFortran77* QsciLexerFortran77_new();
QsciLexerFortran77* QsciLexerFortran77_new2(QObject* parent);
void QsciLexerFortran77_virtbase(QsciLexerFortran77* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerFortran77_metaObject(const QsciLexerFortran77* self);
void* QsciLexerFortran77_metacast(QsciLexerFortran77* self, const char* param1);
struct miqt_string QsciLexerFortran77_tr(const char* s);
struct miqt_string QsciLexerFortran77_trUtf8(const char* s);
const char* QsciLexerFortran77_language(const QsciLexerFortran77* self);
const char* QsciLexerFortran77_lexer(const QsciLexerFortran77* self);
int QsciLexerFortran77_braceStyle(const QsciLexerFortran77* self);
QColor* QsciLexerFortran77_defaultColor(const QsciLexerFortran77* self, int style);
bool QsciLexerFortran77_defaultEolFill(const QsciLexerFortran77* self, int style);
QFont* QsciLexerFortran77_defaultFont(const QsciLexerFortran77* self, int style);
QColor* QsciLexerFortran77_defaultPaper(const QsciLexerFortran77* self, int style);
const char* QsciLexerFortran77_keywords(const QsciLexerFortran77* self, int set);
struct miqt_string QsciLexerFortran77_description(const QsciLexerFortran77* self, int style);
void QsciLexerFortran77_refreshProperties(QsciLexerFortran77* self);
bool QsciLexerFortran77_foldCompact(const QsciLexerFortran77* self);
void QsciLexerFortran77_setFoldCompact(QsciLexerFortran77* self, bool fold);
struct miqt_string QsciLexerFortran77_tr2(const char* s, const char* c);
struct miqt_string QsciLexerFortran77_tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerFortran77_trUtf82(const char* s, const char* c);
struct miqt_string QsciLexerFortran77_trUtf83(const char* s, const char* c, int n);

bool QsciLexerFortran77_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerFortran77_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_language(const void* self);
bool QsciLexerFortran77_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_lexer(const void* self);
bool QsciLexerFortran77_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerFortran77_virtualbase_lexerId(const void* self);
bool QsciLexerFortran77_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerFortran77_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerFortran77_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerFortran77_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerFortran77_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerFortran77_virtualbase_blockLookback(const void* self);
bool QsciLexerFortran77_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerFortran77_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerFortran77_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerFortran77_virtualbase_braceStyle(const void* self);
bool QsciLexerFortran77_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerFortran77_virtualbase_caseSensitive(const void* self);
bool QsciLexerFortran77_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerFortran77_virtualbase_color(const void* self, int style);
bool QsciLexerFortran77_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerFortran77_virtualbase_eolFill(const void* self, int style);
bool QsciLexerFortran77_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerFortran77_virtualbase_font(const void* self, int style);
bool QsciLexerFortran77_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerFortran77_virtualbase_indentationGuideView(const void* self);
bool QsciLexerFortran77_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_keywords(const void* self, int set);
bool QsciLexerFortran77_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerFortran77_virtualbase_defaultStyle(const void* self);
bool QsciLexerFortran77_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerFortran77_virtualbase_description(const void* self, int style);
bool QsciLexerFortran77_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerFortran77_virtualbase_paper(const void* self, int style);
bool QsciLexerFortran77_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerFortran77_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerFortran77_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerFortran77_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerFortran77_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerFortran77_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerFortran77_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerFortran77_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerFortran77_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerFortran77_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_refreshProperties(void* self);
bool QsciLexerFortran77_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerFortran77_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerFortran77_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerFortran77_virtualbase_wordCharacters(const void* self);
bool QsciLexerFortran77_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerFortran77_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerFortran77_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerFortran77_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerFortran77_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerFortran77_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerFortran77_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerFortran77_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerFortran77_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerFortran77_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerFortran77_virtualbase_event(void* self, QEvent* event);
bool QsciLexerFortran77_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerFortran77_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerFortran77_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerFortran77_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerFortran77_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerFortran77_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerFortran77_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerFortran77_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

bool QsciLexerFortran77_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerFortran77_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerFortran77_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerFortran77_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerFortran77_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerFortran77_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QsciLexerFortran77_delete(QsciLexerFortran77* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
