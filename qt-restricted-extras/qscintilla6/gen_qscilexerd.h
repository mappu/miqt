#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERD_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERD_H

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
class QsciLexerD;
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
typedef struct QsciLexerD QsciLexerD;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerD* QsciLexerD_new();
QsciLexerD* QsciLexerD_new2(QObject* parent);
void QsciLexerD_virtbase(QsciLexerD* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerD_metaObject(const QsciLexerD* self);
void* QsciLexerD_metacast(QsciLexerD* self, const char* param1);
struct miqt_string QsciLexerD_tr(const char* s);
const char* QsciLexerD_language(const QsciLexerD* self);
const char* QsciLexerD_lexer(const QsciLexerD* self);
struct miqt_array /* of struct miqt_string */  QsciLexerD_autoCompletionWordSeparators(const QsciLexerD* self);
const char* QsciLexerD_blockEnd(const QsciLexerD* self);
const char* QsciLexerD_blockStart(const QsciLexerD* self);
const char* QsciLexerD_blockStartKeyword(const QsciLexerD* self);
int QsciLexerD_braceStyle(const QsciLexerD* self);
const char* QsciLexerD_wordCharacters(const QsciLexerD* self);
QColor* QsciLexerD_defaultColor(const QsciLexerD* self, int style);
bool QsciLexerD_defaultEolFill(const QsciLexerD* self, int style);
QFont* QsciLexerD_defaultFont(const QsciLexerD* self, int style);
QColor* QsciLexerD_defaultPaper(const QsciLexerD* self, int style);
const char* QsciLexerD_keywords(const QsciLexerD* self, int set);
struct miqt_string QsciLexerD_description(const QsciLexerD* self, int style);
void QsciLexerD_refreshProperties(QsciLexerD* self);
bool QsciLexerD_foldAtElse(const QsciLexerD* self);
bool QsciLexerD_foldComments(const QsciLexerD* self);
bool QsciLexerD_foldCompact(const QsciLexerD* self);
void QsciLexerD_setFoldAtElse(QsciLexerD* self, bool fold);
void QsciLexerD_setFoldComments(QsciLexerD* self, bool fold);
void QsciLexerD_setFoldCompact(QsciLexerD* self, bool fold);
struct miqt_string QsciLexerD_tr2(const char* s, const char* c);
struct miqt_string QsciLexerD_tr3(const char* s, const char* c, int n);
const char* QsciLexerD_blockEnd1(const QsciLexerD* self, int* style);
const char* QsciLexerD_blockStart1(const QsciLexerD* self, int* style);
const char* QsciLexerD_blockStartKeyword1(const QsciLexerD* self, int* style);
bool QsciLexerD_override_virtual_setFoldAtElse(void* self, intptr_t slot);
void QsciLexerD_virtualbase_setFoldAtElse(void* self, bool fold);
bool QsciLexerD_override_virtual_setFoldComments(void* self, intptr_t slot);
void QsciLexerD_virtualbase_setFoldComments(void* self, bool fold);
bool QsciLexerD_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerD_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerD_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_language(const void* self);
bool QsciLexerD_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_lexer(const void* self);
bool QsciLexerD_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerD_virtualbase_lexerId(const void* self);
bool QsciLexerD_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerD_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerD_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerD_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerD_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerD_virtualbase_blockLookback(const void* self);
bool QsciLexerD_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerD_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerD_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerD_virtualbase_braceStyle(const void* self);
bool QsciLexerD_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_caseSensitive(const void* self);
bool QsciLexerD_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerD_virtualbase_color(const void* self, int style);
bool QsciLexerD_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_eolFill(const void* self, int style);
bool QsciLexerD_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerD_virtualbase_font(const void* self, int style);
bool QsciLexerD_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerD_virtualbase_indentationGuideView(const void* self);
bool QsciLexerD_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_keywords(const void* self, int set);
bool QsciLexerD_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerD_virtualbase_defaultStyle(const void* self);
bool QsciLexerD_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerD_virtualbase_description(const void* self, int style);
bool QsciLexerD_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerD_virtualbase_paper(const void* self, int style);
bool QsciLexerD_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerD_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerD_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerD_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerD_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerD_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerD_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerD_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerD_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerD_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerD_virtualbase_refreshProperties(void* self);
bool QsciLexerD_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerD_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerD_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_wordCharacters(const void* self);
bool QsciLexerD_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerD_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerD_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerD_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerD_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerD_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerD_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerD_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerD_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerD_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerD_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerD_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerD_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_event(void* self, QEvent* event);
bool QsciLexerD_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerD_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerD_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerD_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerD_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerD_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerD_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerD_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerD_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerD_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerD_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerD_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerD_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerD_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerD_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerD_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerD_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QsciLexerD_delete(QsciLexerD* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
