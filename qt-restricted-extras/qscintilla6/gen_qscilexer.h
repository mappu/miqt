#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXER_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXER_H

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
class QsciAbstractAPIs;
class QsciLexer;
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
typedef struct QsciAbstractAPIs QsciAbstractAPIs;
typedef struct QsciLexer QsciLexer;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexer* QsciLexer_new();
QsciLexer* QsciLexer_new2(QObject* parent);
void QsciLexer_virtbase(QsciLexer* src, QObject** outptr_QObject);
QMetaObject* QsciLexer_metaObject(const QsciLexer* self);
void* QsciLexer_metacast(QsciLexer* self, const char* param1);
struct miqt_string QsciLexer_tr(const char* s);
const char* QsciLexer_language(const QsciLexer* self);
const char* QsciLexer_lexer(const QsciLexer* self);
int QsciLexer_lexerId(const QsciLexer* self);
QsciAbstractAPIs* QsciLexer_apis(const QsciLexer* self);
const char* QsciLexer_autoCompletionFillups(const QsciLexer* self);
struct miqt_array /* of struct miqt_string */  QsciLexer_autoCompletionWordSeparators(const QsciLexer* self);
int QsciLexer_autoIndentStyle(QsciLexer* self);
const char* QsciLexer_blockEnd(const QsciLexer* self, int* style);
int QsciLexer_blockLookback(const QsciLexer* self);
const char* QsciLexer_blockStart(const QsciLexer* self, int* style);
const char* QsciLexer_blockStartKeyword(const QsciLexer* self, int* style);
int QsciLexer_braceStyle(const QsciLexer* self);
bool QsciLexer_caseSensitive(const QsciLexer* self);
QColor* QsciLexer_color(const QsciLexer* self, int style);
bool QsciLexer_eolFill(const QsciLexer* self, int style);
QFont* QsciLexer_font(const QsciLexer* self, int style);
int QsciLexer_indentationGuideView(const QsciLexer* self);
const char* QsciLexer_keywords(const QsciLexer* self, int set);
int QsciLexer_defaultStyle(const QsciLexer* self);
struct miqt_string QsciLexer_description(const QsciLexer* self, int style);
QColor* QsciLexer_paper(const QsciLexer* self, int style);
QColor* QsciLexer_defaultColor(const QsciLexer* self);
QColor* QsciLexer_defaultColorWithStyle(const QsciLexer* self, int style);
bool QsciLexer_defaultEolFill(const QsciLexer* self, int style);
QFont* QsciLexer_defaultFont(const QsciLexer* self);
QFont* QsciLexer_defaultFontWithStyle(const QsciLexer* self, int style);
QColor* QsciLexer_defaultPaper(const QsciLexer* self);
QColor* QsciLexer_defaultPaperWithStyle(const QsciLexer* self, int style);
QsciScintilla* QsciLexer_editor(const QsciLexer* self);
void QsciLexer_setAPIs(QsciLexer* self, QsciAbstractAPIs* apis);
void QsciLexer_setDefaultColor(QsciLexer* self, QColor* c);
void QsciLexer_setDefaultFont(QsciLexer* self, QFont* f);
void QsciLexer_setDefaultPaper(QsciLexer* self, QColor* c);
void QsciLexer_setEditor(QsciLexer* self, QsciScintilla* editor);
bool QsciLexer_readSettings(QsciLexer* self, QSettings* qs);
void QsciLexer_refreshProperties(QsciLexer* self);
int QsciLexer_styleBitsNeeded(const QsciLexer* self);
const char* QsciLexer_wordCharacters(const QsciLexer* self);
bool QsciLexer_writeSettings(const QsciLexer* self, QSettings* qs);
void QsciLexer_setAutoIndentStyle(QsciLexer* self, int autoindentstyle);
void QsciLexer_setColor(QsciLexer* self, QColor* c, int style);
void QsciLexer_setEolFill(QsciLexer* self, bool eoffill, int style);
void QsciLexer_setFont(QsciLexer* self, QFont* f, int style);
void QsciLexer_setPaper(QsciLexer* self, QColor* c, int style);
void QsciLexer_colorChanged(QsciLexer* self, QColor* c, int style);
void QsciLexer_connect_colorChanged(QsciLexer* self, intptr_t slot);
void QsciLexer_eolFillChanged(QsciLexer* self, bool eolfilled, int style);
void QsciLexer_connect_eolFillChanged(QsciLexer* self, intptr_t slot);
void QsciLexer_fontChanged(QsciLexer* self, QFont* f, int style);
void QsciLexer_connect_fontChanged(QsciLexer* self, intptr_t slot);
void QsciLexer_paperChanged(QsciLexer* self, QColor* c, int style);
void QsciLexer_connect_paperChanged(QsciLexer* self, intptr_t slot);
void QsciLexer_propertyChanged(QsciLexer* self, const char* prop, const char* val);
void QsciLexer_connect_propertyChanged(QsciLexer* self, intptr_t slot);
bool QsciLexer_readProperties(QsciLexer* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexer_writeProperties(const QsciLexer* self, QSettings* qs, struct miqt_string prefix);
struct miqt_string QsciLexer_tr2(const char* s, const char* c);
struct miqt_string QsciLexer_tr3(const char* s, const char* c, int n);
bool QsciLexer_readSettings2(QsciLexer* self, QSettings* qs, const char* prefix);
bool QsciLexer_writeSettings2(const QsciLexer* self, QSettings* qs, const char* prefix);

bool QsciLexer_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_language(const void* self);
bool QsciLexer_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_lexer(const void* self);
bool QsciLexer_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexer_virtualbase_lexerId(const void* self);
bool QsciLexer_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexer_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexer_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexer_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexer_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexer_virtualbase_blockLookback(const void* self);
bool QsciLexer_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_blockStart(const void* self, int* style);
bool QsciLexer_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexer_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexer_virtualbase_braceStyle(const void* self);
bool QsciLexer_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexer_virtualbase_caseSensitive(const void* self);
bool QsciLexer_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexer_virtualbase_color(const void* self, int style);
bool QsciLexer_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexer_virtualbase_eolFill(const void* self, int style);
bool QsciLexer_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexer_virtualbase_font(const void* self, int style);
bool QsciLexer_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexer_virtualbase_indentationGuideView(const void* self);
bool QsciLexer_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_keywords(const void* self, int set);
bool QsciLexer_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexer_virtualbase_defaultStyle(const void* self);
bool QsciLexer_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexer_virtualbase_description(const void* self, int style);
bool QsciLexer_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexer_virtualbase_paper(const void* self, int style);
bool QsciLexer_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexer_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexer_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexer_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexer_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexer_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexer_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexer_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexer_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexer_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexer_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexer_virtualbase_refreshProperties(void* self);
bool QsciLexer_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexer_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexer_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_wordCharacters(const void* self);
bool QsciLexer_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexer_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexer_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexer_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexer_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexer_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexer_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexer_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexer_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexer_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexer_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexer_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexer_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexer_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexer_override_virtual_event(void* self, intptr_t slot);
bool QsciLexer_virtualbase_event(void* self, QEvent* event);
bool QsciLexer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexer_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexer_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexer_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexer_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexer_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexer_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexer_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QsciLexer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QsciLexer_delete(QsciLexer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
