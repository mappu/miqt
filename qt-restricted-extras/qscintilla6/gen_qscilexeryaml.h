#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERYAML_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERYAML_H

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
class QsciLexerYAML;
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
typedef struct QsciLexerYAML QsciLexerYAML;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerYAML* QsciLexerYAML_new();
QsciLexerYAML* QsciLexerYAML_new2(QObject* parent);
void QsciLexerYAML_virtbase(QsciLexerYAML* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerYAML_metaObject(const QsciLexerYAML* self);
void* QsciLexerYAML_metacast(QsciLexerYAML* self, const char* param1);
struct miqt_string QsciLexerYAML_tr(const char* s);
const char* QsciLexerYAML_language(const QsciLexerYAML* self);
const char* QsciLexerYAML_lexer(const QsciLexerYAML* self);
QColor* QsciLexerYAML_defaultColor(const QsciLexerYAML* self, int style);
bool QsciLexerYAML_defaultEolFill(const QsciLexerYAML* self, int style);
QFont* QsciLexerYAML_defaultFont(const QsciLexerYAML* self, int style);
QColor* QsciLexerYAML_defaultPaper(const QsciLexerYAML* self, int style);
const char* QsciLexerYAML_keywords(const QsciLexerYAML* self, int set);
struct miqt_string QsciLexerYAML_description(const QsciLexerYAML* self, int style);
void QsciLexerYAML_refreshProperties(QsciLexerYAML* self);
bool QsciLexerYAML_foldComments(const QsciLexerYAML* self);
void QsciLexerYAML_setFoldComments(QsciLexerYAML* self, bool fold);
struct miqt_string QsciLexerYAML_tr2(const char* s, const char* c);
struct miqt_string QsciLexerYAML_tr3(const char* s, const char* c, int n);
bool QsciLexerYAML_override_virtual_setFoldComments(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_setFoldComments(void* self, bool fold);
bool QsciLexerYAML_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerYAML_virtualbase_language(const void* self);
bool QsciLexerYAML_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerYAML_virtualbase_lexer(const void* self);
bool QsciLexerYAML_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerYAML_virtualbase_lexerId(const void* self);
bool QsciLexerYAML_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerYAML_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerYAML_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerYAML_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerYAML_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerYAML_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerYAML_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerYAML_virtualbase_blockLookback(const void* self);
bool QsciLexerYAML_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerYAML_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerYAML_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerYAML_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerYAML_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerYAML_virtualbase_braceStyle(const void* self);
bool QsciLexerYAML_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerYAML_virtualbase_caseSensitive(const void* self);
bool QsciLexerYAML_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerYAML_virtualbase_color(const void* self, int style);
bool QsciLexerYAML_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerYAML_virtualbase_eolFill(const void* self, int style);
bool QsciLexerYAML_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerYAML_virtualbase_font(const void* self, int style);
bool QsciLexerYAML_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerYAML_virtualbase_indentationGuideView(const void* self);
bool QsciLexerYAML_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerYAML_virtualbase_keywords(const void* self, int set);
bool QsciLexerYAML_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerYAML_virtualbase_defaultStyle(const void* self);
bool QsciLexerYAML_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerYAML_virtualbase_description(const void* self, int style);
bool QsciLexerYAML_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerYAML_virtualbase_paper(const void* self, int style);
bool QsciLexerYAML_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerYAML_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerYAML_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerYAML_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerYAML_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerYAML_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerYAML_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerYAML_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerYAML_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerYAML_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_refreshProperties(void* self);
bool QsciLexerYAML_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerYAML_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerYAML_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerYAML_virtualbase_wordCharacters(const void* self);
bool QsciLexerYAML_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerYAML_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerYAML_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerYAML_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerYAML_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerYAML_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerYAML_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerYAML_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerYAML_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerYAML_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerYAML_virtualbase_event(void* self, QEvent* event);
bool QsciLexerYAML_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerYAML_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerYAML_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerYAML_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerYAML_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerYAML_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerYAML_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerYAML_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerYAML_delete(QsciLexerYAML* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
