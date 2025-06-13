#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCSS_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCSS_H

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
class QsciLexerCSS;
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
typedef struct QsciLexerCSS QsciLexerCSS;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerCSS* QsciLexerCSS_new();
QsciLexerCSS* QsciLexerCSS_new2(QObject* parent);
void QsciLexerCSS_virtbase(QsciLexerCSS* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerCSS_metaObject(const QsciLexerCSS* self);
void* QsciLexerCSS_metacast(QsciLexerCSS* self, const char* param1);
struct miqt_string QsciLexerCSS_tr(const char* s);
struct miqt_string QsciLexerCSS_trUtf8(const char* s);
const char* QsciLexerCSS_language(const QsciLexerCSS* self);
const char* QsciLexerCSS_lexer(const QsciLexerCSS* self);
const char* QsciLexerCSS_blockEnd(const QsciLexerCSS* self);
const char* QsciLexerCSS_blockStart(const QsciLexerCSS* self);
const char* QsciLexerCSS_wordCharacters(const QsciLexerCSS* self);
QColor* QsciLexerCSS_defaultColor(const QsciLexerCSS* self, int style);
QFont* QsciLexerCSS_defaultFont(const QsciLexerCSS* self, int style);
const char* QsciLexerCSS_keywords(const QsciLexerCSS* self, int set);
struct miqt_string QsciLexerCSS_description(const QsciLexerCSS* self, int style);
void QsciLexerCSS_refreshProperties(QsciLexerCSS* self);
bool QsciLexerCSS_foldComments(const QsciLexerCSS* self);
bool QsciLexerCSS_foldCompact(const QsciLexerCSS* self);
void QsciLexerCSS_setHSSLanguage(QsciLexerCSS* self, bool enabled);
bool QsciLexerCSS_HSSLanguage(const QsciLexerCSS* self);
void QsciLexerCSS_setLessLanguage(QsciLexerCSS* self, bool enabled);
bool QsciLexerCSS_LessLanguage(const QsciLexerCSS* self);
void QsciLexerCSS_setSCSSLanguage(QsciLexerCSS* self, bool enabled);
bool QsciLexerCSS_SCSSLanguage(const QsciLexerCSS* self);
void QsciLexerCSS_setFoldComments(QsciLexerCSS* self, bool fold);
void QsciLexerCSS_setFoldCompact(QsciLexerCSS* self, bool fold);
struct miqt_string QsciLexerCSS_tr2(const char* s, const char* c);
struct miqt_string QsciLexerCSS_tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerCSS_trUtf82(const char* s, const char* c);
struct miqt_string QsciLexerCSS_trUtf83(const char* s, const char* c, int n);
const char* QsciLexerCSS_blockEndWithStyle(const QsciLexerCSS* self, int* style);
const char* QsciLexerCSS_blockStartWithStyle(const QsciLexerCSS* self, int* style);

bool QsciLexerCSS_override_virtual_setFoldComments(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_setFoldComments(void* self, bool fold);
bool QsciLexerCSS_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerCSS_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerCSS_virtualbase_language(const void* self);
bool QsciLexerCSS_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerCSS_virtualbase_lexer(const void* self);
bool QsciLexerCSS_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerCSS_virtualbase_lexerId(const void* self);
bool QsciLexerCSS_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerCSS_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerCSS_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerCSS_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerCSS_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerCSS_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerCSS_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerCSS_virtualbase_blockLookback(const void* self);
bool QsciLexerCSS_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerCSS_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerCSS_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerCSS_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerCSS_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerCSS_virtualbase_braceStyle(const void* self);
bool QsciLexerCSS_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerCSS_virtualbase_caseSensitive(const void* self);
bool QsciLexerCSS_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerCSS_virtualbase_color(const void* self, int style);
bool QsciLexerCSS_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerCSS_virtualbase_eolFill(const void* self, int style);
bool QsciLexerCSS_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerCSS_virtualbase_font(const void* self, int style);
bool QsciLexerCSS_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerCSS_virtualbase_indentationGuideView(const void* self);
bool QsciLexerCSS_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerCSS_virtualbase_keywords(const void* self, int set);
bool QsciLexerCSS_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerCSS_virtualbase_defaultStyle(const void* self);
bool QsciLexerCSS_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerCSS_virtualbase_description(const void* self, int style);
bool QsciLexerCSS_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerCSS_virtualbase_paper(const void* self, int style);
bool QsciLexerCSS_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCSS_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerCSS_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerCSS_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerCSS_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerCSS_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerCSS_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCSS_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerCSS_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerCSS_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_refreshProperties(void* self);
bool QsciLexerCSS_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerCSS_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerCSS_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerCSS_virtualbase_wordCharacters(const void* self);
bool QsciLexerCSS_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerCSS_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerCSS_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerCSS_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerCSS_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerCSS_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerCSS_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCSS_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerCSS_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCSS_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerCSS_virtualbase_event(void* self, QEvent* event);
bool QsciLexerCSS_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerCSS_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerCSS_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerCSS_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerCSS_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerCSS_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerCSS_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerCSS_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

bool QsciLexerCSS_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCSS_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerCSS_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerCSS_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerCSS_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerCSS_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QsciLexerCSS_delete(QsciLexerCSS* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
