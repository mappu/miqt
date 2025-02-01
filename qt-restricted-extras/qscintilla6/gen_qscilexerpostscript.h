#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPOSTSCRIPT_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPOSTSCRIPT_H

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
class QsciLexerPostScript;
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
typedef struct QsciLexerPostScript QsciLexerPostScript;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPostScript* QsciLexerPostScript_new();
QsciLexerPostScript* QsciLexerPostScript_new2(QObject* parent);
void QsciLexerPostScript_virtbase(QsciLexerPostScript* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerPostScript_metaObject(const QsciLexerPostScript* self);
void* QsciLexerPostScript_metacast(QsciLexerPostScript* self, const char* param1);
struct miqt_string QsciLexerPostScript_tr(const char* s);
const char* QsciLexerPostScript_language(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_lexer(const QsciLexerPostScript* self);
int QsciLexerPostScript_braceStyle(const QsciLexerPostScript* self);
QColor* QsciLexerPostScript_defaultColor(const QsciLexerPostScript* self, int style);
QFont* QsciLexerPostScript_defaultFont(const QsciLexerPostScript* self, int style);
QColor* QsciLexerPostScript_defaultPaper(const QsciLexerPostScript* self, int style);
const char* QsciLexerPostScript_keywords(const QsciLexerPostScript* self, int set);
struct miqt_string QsciLexerPostScript_description(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_refreshProperties(QsciLexerPostScript* self);
bool QsciLexerPostScript_tokenize(const QsciLexerPostScript* self);
int QsciLexerPostScript_level(const QsciLexerPostScript* self);
bool QsciLexerPostScript_foldCompact(const QsciLexerPostScript* self);
bool QsciLexerPostScript_foldAtElse(const QsciLexerPostScript* self);
void QsciLexerPostScript_setTokenize(QsciLexerPostScript* self, bool tokenize);
void QsciLexerPostScript_setLevel(QsciLexerPostScript* self, int level);
void QsciLexerPostScript_setFoldCompact(QsciLexerPostScript* self, bool fold);
void QsciLexerPostScript_setFoldAtElse(QsciLexerPostScript* self, bool fold);
struct miqt_string QsciLexerPostScript_tr2(const char* s, const char* c);
struct miqt_string QsciLexerPostScript_tr3(const char* s, const char* c, int n);
bool QsciLexerPostScript_override_virtual_setTokenize(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_setTokenize(void* self, bool tokenize);
bool QsciLexerPostScript_override_virtual_setLevel(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_setLevel(void* self, int level);
bool QsciLexerPostScript_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerPostScript_override_virtual_setFoldAtElse(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_setFoldAtElse(void* self, bool fold);
bool QsciLexerPostScript_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_language(const void* self);
bool QsciLexerPostScript_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_lexer(const void* self);
bool QsciLexerPostScript_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerPostScript_virtualbase_lexerId(const void* self);
bool QsciLexerPostScript_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerPostScript_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerPostScript_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerPostScript_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerPostScript_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerPostScript_virtualbase_blockLookback(const void* self);
bool QsciLexerPostScript_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerPostScript_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerPostScript_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerPostScript_virtualbase_braceStyle(const void* self);
bool QsciLexerPostScript_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_caseSensitive(const void* self);
bool QsciLexerPostScript_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerPostScript_virtualbase_color(const void* self, int style);
bool QsciLexerPostScript_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_eolFill(const void* self, int style);
bool QsciLexerPostScript_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerPostScript_virtualbase_font(const void* self, int style);
bool QsciLexerPostScript_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerPostScript_virtualbase_indentationGuideView(const void* self);
bool QsciLexerPostScript_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_keywords(const void* self, int set);
bool QsciLexerPostScript_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerPostScript_virtualbase_defaultStyle(const void* self);
bool QsciLexerPostScript_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerPostScript_virtualbase_description(const void* self, int style);
bool QsciLexerPostScript_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerPostScript_virtualbase_paper(const void* self, int style);
bool QsciLexerPostScript_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPostScript_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerPostScript_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerPostScript_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerPostScript_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerPostScript_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPostScript_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerPostScript_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerPostScript_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_refreshProperties(void* self);
bool QsciLexerPostScript_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerPostScript_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerPostScript_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_wordCharacters(const void* self);
bool QsciLexerPostScript_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerPostScript_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerPostScript_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerPostScript_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerPostScript_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerPostScript_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPostScript_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPostScript_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_event(void* self, QEvent* event);
bool QsciLexerPostScript_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerPostScript_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerPostScript_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerPostScript_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerPostScript_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerPostScript_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerPostScript_delete(QsciLexerPostScript* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
