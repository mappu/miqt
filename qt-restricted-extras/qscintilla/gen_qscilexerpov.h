#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERPOV_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERPOV_H

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
class QsciLexerPOV;
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
typedef struct QsciLexerPOV QsciLexerPOV;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPOV* QsciLexerPOV_new();
QsciLexerPOV* QsciLexerPOV_new2(QObject* parent);
void QsciLexerPOV_virtbase(QsciLexerPOV* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerPOV_metaObject(const QsciLexerPOV* self);
void* QsciLexerPOV_metacast(QsciLexerPOV* self, const char* param1);
struct miqt_string QsciLexerPOV_tr(const char* s);
struct miqt_string QsciLexerPOV_trUtf8(const char* s);
const char* QsciLexerPOV_language(const QsciLexerPOV* self);
const char* QsciLexerPOV_lexer(const QsciLexerPOV* self);
int QsciLexerPOV_braceStyle(const QsciLexerPOV* self);
const char* QsciLexerPOV_wordCharacters(const QsciLexerPOV* self);
QColor* QsciLexerPOV_defaultColor(const QsciLexerPOV* self, int style);
bool QsciLexerPOV_defaultEolFill(const QsciLexerPOV* self, int style);
QFont* QsciLexerPOV_defaultFont(const QsciLexerPOV* self, int style);
QColor* QsciLexerPOV_defaultPaper(const QsciLexerPOV* self, int style);
const char* QsciLexerPOV_keywords(const QsciLexerPOV* self, int set);
struct miqt_string QsciLexerPOV_description(const QsciLexerPOV* self, int style);
void QsciLexerPOV_refreshProperties(QsciLexerPOV* self);
bool QsciLexerPOV_foldComments(const QsciLexerPOV* self);
bool QsciLexerPOV_foldCompact(const QsciLexerPOV* self);
bool QsciLexerPOV_foldDirectives(const QsciLexerPOV* self);
void QsciLexerPOV_setFoldComments(QsciLexerPOV* self, bool fold);
void QsciLexerPOV_setFoldCompact(QsciLexerPOV* self, bool fold);
void QsciLexerPOV_setFoldDirectives(QsciLexerPOV* self, bool fold);
struct miqt_string QsciLexerPOV_tr2(const char* s, const char* c);
struct miqt_string QsciLexerPOV_tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerPOV_trUtf82(const char* s, const char* c);
struct miqt_string QsciLexerPOV_trUtf83(const char* s, const char* c, int n);
bool QsciLexerPOV_override_virtual_setFoldComments(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_setFoldComments(void* self, bool fold);
bool QsciLexerPOV_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerPOV_override_virtual_setFoldDirectives(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_setFoldDirectives(void* self, bool fold);
bool QsciLexerPOV_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_language(const void* self);
bool QsciLexerPOV_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_lexer(const void* self);
bool QsciLexerPOV_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerPOV_virtualbase_lexerId(const void* self);
bool QsciLexerPOV_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerPOV_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerPOV_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerPOV_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerPOV_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerPOV_virtualbase_blockLookback(const void* self);
bool QsciLexerPOV_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerPOV_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerPOV_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerPOV_virtualbase_braceStyle(const void* self);
bool QsciLexerPOV_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerPOV_virtualbase_caseSensitive(const void* self);
bool QsciLexerPOV_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerPOV_virtualbase_color(const void* self, int style);
bool QsciLexerPOV_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerPOV_virtualbase_eolFill(const void* self, int style);
bool QsciLexerPOV_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerPOV_virtualbase_font(const void* self, int style);
bool QsciLexerPOV_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerPOV_virtualbase_indentationGuideView(const void* self);
bool QsciLexerPOV_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_keywords(const void* self, int set);
bool QsciLexerPOV_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerPOV_virtualbase_defaultStyle(const void* self);
bool QsciLexerPOV_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerPOV_virtualbase_description(const void* self, int style);
bool QsciLexerPOV_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerPOV_virtualbase_paper(const void* self, int style);
bool QsciLexerPOV_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPOV_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerPOV_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerPOV_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerPOV_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerPOV_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerPOV_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPOV_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerPOV_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerPOV_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_refreshProperties(void* self);
bool QsciLexerPOV_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerPOV_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerPOV_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerPOV_virtualbase_wordCharacters(const void* self);
bool QsciLexerPOV_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerPOV_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerPOV_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerPOV_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerPOV_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerPOV_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerPOV_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPOV_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerPOV_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPOV_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerPOV_virtualbase_event(void* self, QEvent* event);
bool QsciLexerPOV_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerPOV_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerPOV_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerPOV_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerPOV_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerPOV_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerPOV_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerPOV_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerPOV_delete(QsciLexerPOV* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
