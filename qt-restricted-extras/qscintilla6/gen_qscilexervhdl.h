#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERVHDL_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERVHDL_H

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
class QsciLexerVHDL;
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
typedef struct QsciLexerVHDL QsciLexerVHDL;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerVHDL* QsciLexerVHDL_new();
QsciLexerVHDL* QsciLexerVHDL_new2(QObject* parent);
void QsciLexerVHDL_virtbase(QsciLexerVHDL* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerVHDL_metaObject(const QsciLexerVHDL* self);
void* QsciLexerVHDL_metacast(QsciLexerVHDL* self, const char* param1);
struct miqt_string QsciLexerVHDL_tr(const char* s);
const char* QsciLexerVHDL_language(const QsciLexerVHDL* self);
const char* QsciLexerVHDL_lexer(const QsciLexerVHDL* self);
int QsciLexerVHDL_braceStyle(const QsciLexerVHDL* self);
QColor* QsciLexerVHDL_defaultColor(const QsciLexerVHDL* self, int style);
bool QsciLexerVHDL_defaultEolFill(const QsciLexerVHDL* self, int style);
QFont* QsciLexerVHDL_defaultFont(const QsciLexerVHDL* self, int style);
QColor* QsciLexerVHDL_defaultPaper(const QsciLexerVHDL* self, int style);
const char* QsciLexerVHDL_keywords(const QsciLexerVHDL* self, int set);
struct miqt_string QsciLexerVHDL_description(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_refreshProperties(QsciLexerVHDL* self);
bool QsciLexerVHDL_foldComments(const QsciLexerVHDL* self);
bool QsciLexerVHDL_foldCompact(const QsciLexerVHDL* self);
bool QsciLexerVHDL_foldAtElse(const QsciLexerVHDL* self);
bool QsciLexerVHDL_foldAtBegin(const QsciLexerVHDL* self);
bool QsciLexerVHDL_foldAtParenthesis(const QsciLexerVHDL* self);
void QsciLexerVHDL_setFoldComments(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_setFoldCompact(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_setFoldAtElse(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_setFoldAtBegin(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_setFoldAtParenthesis(QsciLexerVHDL* self, bool fold);
struct miqt_string QsciLexerVHDL_tr2(const char* s, const char* c);
struct miqt_string QsciLexerVHDL_tr3(const char* s, const char* c, int n);
bool QsciLexerVHDL_override_virtual_setFoldComments(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_setFoldComments(void* self, bool fold);
bool QsciLexerVHDL_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerVHDL_override_virtual_setFoldAtElse(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_setFoldAtElse(void* self, bool fold);
bool QsciLexerVHDL_override_virtual_setFoldAtBegin(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_setFoldAtBegin(void* self, bool fold);
bool QsciLexerVHDL_override_virtual_setFoldAtParenthesis(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_setFoldAtParenthesis(void* self, bool fold);
bool QsciLexerVHDL_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_language(const void* self);
bool QsciLexerVHDL_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_lexer(const void* self);
bool QsciLexerVHDL_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerVHDL_virtualbase_lexerId(const void* self);
bool QsciLexerVHDL_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerVHDL_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerVHDL_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerVHDL_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerVHDL_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerVHDL_virtualbase_blockLookback(const void* self);
bool QsciLexerVHDL_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerVHDL_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerVHDL_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerVHDL_virtualbase_braceStyle(const void* self);
bool QsciLexerVHDL_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerVHDL_virtualbase_caseSensitive(const void* self);
bool QsciLexerVHDL_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerVHDL_virtualbase_color(const void* self, int style);
bool QsciLexerVHDL_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerVHDL_virtualbase_eolFill(const void* self, int style);
bool QsciLexerVHDL_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerVHDL_virtualbase_font(const void* self, int style);
bool QsciLexerVHDL_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerVHDL_virtualbase_indentationGuideView(const void* self);
bool QsciLexerVHDL_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_keywords(const void* self, int set);
bool QsciLexerVHDL_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerVHDL_virtualbase_defaultStyle(const void* self);
bool QsciLexerVHDL_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerVHDL_virtualbase_description(const void* self, int style);
bool QsciLexerVHDL_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerVHDL_virtualbase_paper(const void* self, int style);
bool QsciLexerVHDL_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerVHDL_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerVHDL_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerVHDL_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerVHDL_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerVHDL_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerVHDL_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerVHDL_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerVHDL_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerVHDL_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_refreshProperties(void* self);
bool QsciLexerVHDL_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerVHDL_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerVHDL_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerVHDL_virtualbase_wordCharacters(const void* self);
bool QsciLexerVHDL_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerVHDL_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerVHDL_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerVHDL_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerVHDL_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerVHDL_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerVHDL_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerVHDL_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerVHDL_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerVHDL_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerVHDL_virtualbase_event(void* self, QEvent* event);
bool QsciLexerVHDL_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerVHDL_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerVHDL_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerVHDL_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerVHDL_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerVHDL_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerVHDL_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerVHDL_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerVHDL_delete(QsciLexerVHDL* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
