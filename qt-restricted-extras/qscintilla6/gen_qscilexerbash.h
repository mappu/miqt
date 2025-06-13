#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERBASH_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERBASH_H

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
class QsciLexerBash;
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
typedef struct QsciLexerBash QsciLexerBash;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerBash* QsciLexerBash_new();
QsciLexerBash* QsciLexerBash_new2(QObject* parent);
void QsciLexerBash_virtbase(QsciLexerBash* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerBash_metaObject(const QsciLexerBash* self);
void* QsciLexerBash_metacast(QsciLexerBash* self, const char* param1);
struct miqt_string QsciLexerBash_tr(const char* s);
const char* QsciLexerBash_language(const QsciLexerBash* self);
const char* QsciLexerBash_lexer(const QsciLexerBash* self);
int QsciLexerBash_braceStyle(const QsciLexerBash* self);
const char* QsciLexerBash_wordCharacters(const QsciLexerBash* self);
QColor* QsciLexerBash_defaultColor(const QsciLexerBash* self, int style);
bool QsciLexerBash_defaultEolFill(const QsciLexerBash* self, int style);
QFont* QsciLexerBash_defaultFont(const QsciLexerBash* self, int style);
QColor* QsciLexerBash_defaultPaper(const QsciLexerBash* self, int style);
const char* QsciLexerBash_keywords(const QsciLexerBash* self, int set);
struct miqt_string QsciLexerBash_description(const QsciLexerBash* self, int style);
void QsciLexerBash_refreshProperties(QsciLexerBash* self);
bool QsciLexerBash_foldComments(const QsciLexerBash* self);
bool QsciLexerBash_foldCompact(const QsciLexerBash* self);
void QsciLexerBash_setFoldComments(QsciLexerBash* self, bool fold);
void QsciLexerBash_setFoldCompact(QsciLexerBash* self, bool fold);
struct miqt_string QsciLexerBash_tr2(const char* s, const char* c);
struct miqt_string QsciLexerBash_tr3(const char* s, const char* c, int n);

bool QsciLexerBash_override_virtual_setFoldComments(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_setFoldComments(void* self, bool fold);
bool QsciLexerBash_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerBash_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerBash_virtualbase_language(const void* self);
bool QsciLexerBash_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerBash_virtualbase_lexer(const void* self);
bool QsciLexerBash_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerBash_virtualbase_lexerId(const void* self);
bool QsciLexerBash_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerBash_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerBash_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerBash_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerBash_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerBash_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerBash_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerBash_virtualbase_blockLookback(const void* self);
bool QsciLexerBash_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerBash_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerBash_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerBash_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerBash_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerBash_virtualbase_braceStyle(const void* self);
bool QsciLexerBash_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerBash_virtualbase_caseSensitive(const void* self);
bool QsciLexerBash_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerBash_virtualbase_color(const void* self, int style);
bool QsciLexerBash_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerBash_virtualbase_eolFill(const void* self, int style);
bool QsciLexerBash_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerBash_virtualbase_font(const void* self, int style);
bool QsciLexerBash_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerBash_virtualbase_indentationGuideView(const void* self);
bool QsciLexerBash_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerBash_virtualbase_keywords(const void* self, int set);
bool QsciLexerBash_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerBash_virtualbase_defaultStyle(const void* self);
bool QsciLexerBash_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerBash_virtualbase_description(const void* self, int style);
bool QsciLexerBash_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerBash_virtualbase_paper(const void* self, int style);
bool QsciLexerBash_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerBash_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerBash_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerBash_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerBash_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerBash_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerBash_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerBash_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerBash_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerBash_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_refreshProperties(void* self);
bool QsciLexerBash_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerBash_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerBash_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerBash_virtualbase_wordCharacters(const void* self);
bool QsciLexerBash_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerBash_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerBash_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerBash_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerBash_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerBash_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerBash_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerBash_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerBash_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerBash_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerBash_virtualbase_event(void* self, QEvent* event);
bool QsciLexerBash_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerBash_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerBash_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerBash_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerBash_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerBash_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerBash_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerBash_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

bool QsciLexerBash_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerBash_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerBash_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerBash_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerBash_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerBash_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QsciLexerBash_delete(QsciLexerBash* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
