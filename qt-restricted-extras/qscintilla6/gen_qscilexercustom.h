#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERCUSTOM_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERCUSTOM_H

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
class QsciLexerCustom;
class QsciScintilla;
class QsciStyle;
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
typedef struct QsciLexerCustom QsciLexerCustom;
typedef struct QsciScintilla QsciScintilla;
typedef struct QsciStyle QsciStyle;
#endif

QsciLexerCustom* QsciLexerCustom_new();
QsciLexerCustom* QsciLexerCustom_new2(QObject* parent);
void QsciLexerCustom_virtbase(QsciLexerCustom* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerCustom_metaObject(const QsciLexerCustom* self);
void* QsciLexerCustom_metacast(QsciLexerCustom* self, const char* param1);
struct miqt_string QsciLexerCustom_tr(const char* s);
void QsciLexerCustom_setStyling(QsciLexerCustom* self, int length, int style);
void QsciLexerCustom_setStyling2(QsciLexerCustom* self, int length, QsciStyle* style);
void QsciLexerCustom_startStyling(QsciLexerCustom* self, int pos);
void QsciLexerCustom_styleText(QsciLexerCustom* self, int start, int end);
void QsciLexerCustom_setEditor(QsciLexerCustom* self, QsciScintilla* editor);
int QsciLexerCustom_styleBitsNeeded(const QsciLexerCustom* self);
struct miqt_string QsciLexerCustom_tr2(const char* s, const char* c);
struct miqt_string QsciLexerCustom_tr3(const char* s, const char* c, int n);
void QsciLexerCustom_startStyling2(QsciLexerCustom* self, int pos, int styleBits);
bool QsciLexerCustom_override_virtual_styleText(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_styleText(void* self, int start, int end);
bool QsciLexerCustom_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerCustom_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerCustom_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerCustom_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_language(const void* self);
bool QsciLexerCustom_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_lexer(const void* self);
bool QsciLexerCustom_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerCustom_virtualbase_lexerId(const void* self);
bool QsciLexerCustom_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerCustom_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerCustom_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerCustom_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerCustom_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerCustom_virtualbase_blockLookback(const void* self);
bool QsciLexerCustom_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerCustom_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerCustom_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerCustom_virtualbase_braceStyle(const void* self);
bool QsciLexerCustom_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_caseSensitive(const void* self);
bool QsciLexerCustom_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerCustom_virtualbase_color(const void* self, int style);
bool QsciLexerCustom_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_eolFill(const void* self, int style);
bool QsciLexerCustom_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerCustom_virtualbase_font(const void* self, int style);
bool QsciLexerCustom_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerCustom_virtualbase_indentationGuideView(const void* self);
bool QsciLexerCustom_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_keywords(const void* self, int set);
bool QsciLexerCustom_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerCustom_virtualbase_defaultStyle(const void* self);
bool QsciLexerCustom_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerCustom_virtualbase_description(const void* self, int style);
bool QsciLexerCustom_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerCustom_virtualbase_paper(const void* self, int style);
bool QsciLexerCustom_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCustom_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerCustom_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerCustom_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerCustom_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerCustom_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCustom_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerCustom_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_refreshProperties(void* self);
bool QsciLexerCustom_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_wordCharacters(const void* self);
bool QsciLexerCustom_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerCustom_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerCustom_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerCustom_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerCustom_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerCustom_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCustom_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCustom_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_event(void* self, QEvent* event);
bool QsciLexerCustom_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerCustom_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerCustom_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerCustom_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerCustom_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerCustom_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QsciLexerCustom_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerCustom_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerCustom_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerCustom_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QsciLexerCustom_delete(QsciLexerCustom* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
