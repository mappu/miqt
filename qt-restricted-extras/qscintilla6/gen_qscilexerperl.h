#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPERL_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPERL_H

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
class QsciLexerPerl;
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
typedef struct QsciLexerPerl QsciLexerPerl;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPerl* QsciLexerPerl_new();
QsciLexerPerl* QsciLexerPerl_new2(QObject* parent);
void QsciLexerPerl_virtbase(QsciLexerPerl* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerPerl_metaObject(const QsciLexerPerl* self);
void* QsciLexerPerl_metacast(QsciLexerPerl* self, const char* param1);
struct miqt_string QsciLexerPerl_tr(const char* s);
const char* QsciLexerPerl_language(const QsciLexerPerl* self);
const char* QsciLexerPerl_lexer(const QsciLexerPerl* self);
struct miqt_array /* of struct miqt_string */  QsciLexerPerl_autoCompletionWordSeparators(const QsciLexerPerl* self);
const char* QsciLexerPerl_blockEnd(const QsciLexerPerl* self);
const char* QsciLexerPerl_blockStart(const QsciLexerPerl* self);
int QsciLexerPerl_braceStyle(const QsciLexerPerl* self);
const char* QsciLexerPerl_wordCharacters(const QsciLexerPerl* self);
QColor* QsciLexerPerl_defaultColor(const QsciLexerPerl* self, int style);
bool QsciLexerPerl_defaultEolFill(const QsciLexerPerl* self, int style);
QFont* QsciLexerPerl_defaultFont(const QsciLexerPerl* self, int style);
QColor* QsciLexerPerl_defaultPaper(const QsciLexerPerl* self, int style);
const char* QsciLexerPerl_keywords(const QsciLexerPerl* self, int set);
struct miqt_string QsciLexerPerl_description(const QsciLexerPerl* self, int style);
void QsciLexerPerl_refreshProperties(QsciLexerPerl* self);
void QsciLexerPerl_setFoldAtElse(QsciLexerPerl* self, bool fold);
bool QsciLexerPerl_foldAtElse(const QsciLexerPerl* self);
bool QsciLexerPerl_foldComments(const QsciLexerPerl* self);
bool QsciLexerPerl_foldCompact(const QsciLexerPerl* self);
void QsciLexerPerl_setFoldPackages(QsciLexerPerl* self, bool fold);
bool QsciLexerPerl_foldPackages(const QsciLexerPerl* self);
void QsciLexerPerl_setFoldPODBlocks(QsciLexerPerl* self, bool fold);
bool QsciLexerPerl_foldPODBlocks(const QsciLexerPerl* self);
void QsciLexerPerl_setFoldComments(QsciLexerPerl* self, bool fold);
void QsciLexerPerl_setFoldCompact(QsciLexerPerl* self, bool fold);
struct miqt_string QsciLexerPerl_tr2(const char* s, const char* c);
struct miqt_string QsciLexerPerl_tr3(const char* s, const char* c, int n);
const char* QsciLexerPerl_blockEnd1(const QsciLexerPerl* self, int* style);
const char* QsciLexerPerl_blockStart1(const QsciLexerPerl* self, int* style);
bool QsciLexerPerl_override_virtual_setFoldComments(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_setFoldComments(void* self, bool fold);
bool QsciLexerPerl_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerPerl_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_language(const void* self);
bool QsciLexerPerl_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_lexer(const void* self);
bool QsciLexerPerl_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerPerl_virtualbase_lexerId(const void* self);
bool QsciLexerPerl_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerPerl_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerPerl_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerPerl_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerPerl_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerPerl_virtualbase_blockLookback(const void* self);
bool QsciLexerPerl_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerPerl_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerPerl_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerPerl_virtualbase_braceStyle(const void* self);
bool QsciLexerPerl_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerPerl_virtualbase_caseSensitive(const void* self);
bool QsciLexerPerl_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerPerl_virtualbase_color(const void* self, int style);
bool QsciLexerPerl_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerPerl_virtualbase_eolFill(const void* self, int style);
bool QsciLexerPerl_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerPerl_virtualbase_font(const void* self, int style);
bool QsciLexerPerl_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerPerl_virtualbase_indentationGuideView(const void* self);
bool QsciLexerPerl_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_keywords(const void* self, int set);
bool QsciLexerPerl_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerPerl_virtualbase_defaultStyle(const void* self);
bool QsciLexerPerl_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerPerl_virtualbase_description(const void* self, int style);
bool QsciLexerPerl_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerPerl_virtualbase_paper(const void* self, int style);
bool QsciLexerPerl_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPerl_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerPerl_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerPerl_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerPerl_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerPerl_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerPerl_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPerl_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerPerl_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerPerl_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_refreshProperties(void* self);
bool QsciLexerPerl_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerPerl_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerPerl_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerPerl_virtualbase_wordCharacters(const void* self);
bool QsciLexerPerl_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerPerl_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerPerl_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerPerl_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerPerl_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerPerl_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerPerl_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPerl_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerPerl_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPerl_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerPerl_virtualbase_event(void* self, QEvent* event);
bool QsciLexerPerl_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerPerl_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerPerl_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerPerl_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerPerl_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerPerl_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerPerl_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerPerl_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerPerl_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPerl_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerPerl_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerPerl_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerPerl_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerPerl_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QsciLexerPerl_delete(QsciLexerPerl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
