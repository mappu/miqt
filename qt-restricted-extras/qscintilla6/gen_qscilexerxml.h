#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERXML_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERXML_H

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
class QsciLexerHTML;
class QsciLexerXML;
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
typedef struct QsciLexerHTML QsciLexerHTML;
typedef struct QsciLexerXML QsciLexerXML;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerXML* QsciLexerXML_new();
QsciLexerXML* QsciLexerXML_new2(QObject* parent);
void QsciLexerXML_virtbase(QsciLexerXML* src, QsciLexerHTML** outptr_QsciLexerHTML);
QMetaObject* QsciLexerXML_metaObject(const QsciLexerXML* self);
void* QsciLexerXML_metacast(QsciLexerXML* self, const char* param1);
struct miqt_string QsciLexerXML_tr(const char* s);
const char* QsciLexerXML_language(const QsciLexerXML* self);
const char* QsciLexerXML_lexer(const QsciLexerXML* self);
QColor* QsciLexerXML_defaultColor(const QsciLexerXML* self, int style);
bool QsciLexerXML_defaultEolFill(const QsciLexerXML* self, int style);
QFont* QsciLexerXML_defaultFont(const QsciLexerXML* self, int style);
QColor* QsciLexerXML_defaultPaper(const QsciLexerXML* self, int style);
const char* QsciLexerXML_keywords(const QsciLexerXML* self, int set);
void QsciLexerXML_refreshProperties(QsciLexerXML* self);
void QsciLexerXML_setScriptsStyled(QsciLexerXML* self, bool styled);
bool QsciLexerXML_scriptsStyled(const QsciLexerXML* self);
struct miqt_string QsciLexerXML_tr2(const char* s, const char* c);
struct miqt_string QsciLexerXML_tr3(const char* s, const char* c, int n);

bool QsciLexerXML_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerXML_override_virtual_setFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_setFoldPreprocessor(void* self, bool fold);
bool QsciLexerXML_override_virtual_setCaseSensitiveTags(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_setCaseSensitiveTags(void* self, bool sens);
bool QsciLexerXML_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_language(const void* self);
bool QsciLexerXML_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_lexer(const void* self);
bool QsciLexerXML_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerXML_virtualbase_lexerId(const void* self);
bool QsciLexerXML_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerXML_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerXML_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerXML_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerXML_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerXML_virtualbase_blockLookback(const void* self);
bool QsciLexerXML_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerXML_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerXML_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerXML_virtualbase_braceStyle(const void* self);
bool QsciLexerXML_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_caseSensitive(const void* self);
bool QsciLexerXML_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerXML_virtualbase_color(const void* self, int style);
bool QsciLexerXML_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_eolFill(const void* self, int style);
bool QsciLexerXML_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerXML_virtualbase_font(const void* self, int style);
bool QsciLexerXML_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerXML_virtualbase_indentationGuideView(const void* self);
bool QsciLexerXML_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_keywords(const void* self, int set);
bool QsciLexerXML_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerXML_virtualbase_defaultStyle(const void* self);
bool QsciLexerXML_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerXML_virtualbase_description(const void* self, int style);
bool QsciLexerXML_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerXML_virtualbase_paper(const void* self, int style);
bool QsciLexerXML_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerXML_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerXML_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerXML_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerXML_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerXML_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerXML_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerXML_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerXML_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_refreshProperties(void* self);
bool QsciLexerXML_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerXML_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerXML_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_wordCharacters(const void* self);
bool QsciLexerXML_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerXML_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerXML_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerXML_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerXML_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerXML_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerXML_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerXML_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_event(void* self, QEvent* event);
bool QsciLexerXML_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerXML_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerXML_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerXML_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerXML_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerXML_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

bool QsciLexerXML_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerXML_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerXML_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerXML_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerXML_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerXML_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QsciLexerXML_delete(QsciLexerXML* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
