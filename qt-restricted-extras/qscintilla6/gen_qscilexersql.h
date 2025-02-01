#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERSQL_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERSQL_H

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
class QsciLexerSQL;
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
typedef struct QsciLexerSQL QsciLexerSQL;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerSQL* QsciLexerSQL_new();
QsciLexerSQL* QsciLexerSQL_new2(QObject* parent);
void QsciLexerSQL_virtbase(QsciLexerSQL* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerSQL_metaObject(const QsciLexerSQL* self);
void* QsciLexerSQL_metacast(QsciLexerSQL* self, const char* param1);
struct miqt_string QsciLexerSQL_tr(const char* s);
const char* QsciLexerSQL_language(const QsciLexerSQL* self);
const char* QsciLexerSQL_lexer(const QsciLexerSQL* self);
int QsciLexerSQL_braceStyle(const QsciLexerSQL* self);
QColor* QsciLexerSQL_defaultColor(const QsciLexerSQL* self, int style);
bool QsciLexerSQL_defaultEolFill(const QsciLexerSQL* self, int style);
QFont* QsciLexerSQL_defaultFont(const QsciLexerSQL* self, int style);
QColor* QsciLexerSQL_defaultPaper(const QsciLexerSQL* self, int style);
const char* QsciLexerSQL_keywords(const QsciLexerSQL* self, int set);
struct miqt_string QsciLexerSQL_description(const QsciLexerSQL* self, int style);
void QsciLexerSQL_refreshProperties(QsciLexerSQL* self);
bool QsciLexerSQL_backslashEscapes(const QsciLexerSQL* self);
void QsciLexerSQL_setDottedWords(QsciLexerSQL* self, bool enable);
bool QsciLexerSQL_dottedWords(const QsciLexerSQL* self);
void QsciLexerSQL_setFoldAtElse(QsciLexerSQL* self, bool fold);
bool QsciLexerSQL_foldAtElse(const QsciLexerSQL* self);
bool QsciLexerSQL_foldComments(const QsciLexerSQL* self);
bool QsciLexerSQL_foldCompact(const QsciLexerSQL* self);
void QsciLexerSQL_setFoldOnlyBegin(QsciLexerSQL* self, bool fold);
bool QsciLexerSQL_foldOnlyBegin(const QsciLexerSQL* self);
void QsciLexerSQL_setHashComments(QsciLexerSQL* self, bool enable);
bool QsciLexerSQL_hashComments(const QsciLexerSQL* self);
void QsciLexerSQL_setQuotedIdentifiers(QsciLexerSQL* self, bool enable);
bool QsciLexerSQL_quotedIdentifiers(const QsciLexerSQL* self);
void QsciLexerSQL_setBackslashEscapes(QsciLexerSQL* self, bool enable);
void QsciLexerSQL_setFoldComments(QsciLexerSQL* self, bool fold);
void QsciLexerSQL_setFoldCompact(QsciLexerSQL* self, bool fold);
struct miqt_string QsciLexerSQL_tr2(const char* s, const char* c);
struct miqt_string QsciLexerSQL_tr3(const char* s, const char* c, int n);
bool QsciLexerSQL_override_virtual_setBackslashEscapes(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_setBackslashEscapes(void* self, bool enable);
bool QsciLexerSQL_override_virtual_setFoldComments(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_setFoldComments(void* self, bool fold);
bool QsciLexerSQL_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerSQL_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_language(const void* self);
bool QsciLexerSQL_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_lexer(const void* self);
bool QsciLexerSQL_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerSQL_virtualbase_lexerId(const void* self);
bool QsciLexerSQL_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerSQL_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerSQL_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerSQL_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerSQL_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerSQL_virtualbase_blockLookback(const void* self);
bool QsciLexerSQL_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerSQL_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerSQL_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerSQL_virtualbase_braceStyle(const void* self);
bool QsciLexerSQL_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerSQL_virtualbase_caseSensitive(const void* self);
bool QsciLexerSQL_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerSQL_virtualbase_color(const void* self, int style);
bool QsciLexerSQL_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerSQL_virtualbase_eolFill(const void* self, int style);
bool QsciLexerSQL_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerSQL_virtualbase_font(const void* self, int style);
bool QsciLexerSQL_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerSQL_virtualbase_indentationGuideView(const void* self);
bool QsciLexerSQL_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_keywords(const void* self, int set);
bool QsciLexerSQL_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerSQL_virtualbase_defaultStyle(const void* self);
bool QsciLexerSQL_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerSQL_virtualbase_description(const void* self, int style);
bool QsciLexerSQL_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerSQL_virtualbase_paper(const void* self, int style);
bool QsciLexerSQL_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerSQL_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerSQL_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerSQL_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerSQL_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerSQL_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerSQL_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerSQL_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerSQL_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerSQL_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_refreshProperties(void* self);
bool QsciLexerSQL_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerSQL_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerSQL_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerSQL_virtualbase_wordCharacters(const void* self);
bool QsciLexerSQL_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerSQL_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerSQL_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerSQL_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerSQL_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerSQL_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerSQL_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerSQL_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerSQL_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerSQL_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerSQL_virtualbase_event(void* self, QEvent* event);
bool QsciLexerSQL_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerSQL_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerSQL_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerSQL_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerSQL_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerSQL_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerSQL_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerSQL_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerSQL_delete(QsciLexerSQL* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
