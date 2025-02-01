#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERTCL_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERTCL_H

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
class QsciLexerTCL;
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
typedef struct QsciLexerTCL QsciLexerTCL;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerTCL* QsciLexerTCL_new();
QsciLexerTCL* QsciLexerTCL_new2(QObject* parent);
void QsciLexerTCL_virtbase(QsciLexerTCL* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerTCL_metaObject(const QsciLexerTCL* self);
void* QsciLexerTCL_metacast(QsciLexerTCL* self, const char* param1);
struct miqt_string QsciLexerTCL_tr(const char* s);
struct miqt_string QsciLexerTCL_trUtf8(const char* s);
const char* QsciLexerTCL_language(const QsciLexerTCL* self);
const char* QsciLexerTCL_lexer(const QsciLexerTCL* self);
int QsciLexerTCL_braceStyle(const QsciLexerTCL* self);
QColor* QsciLexerTCL_defaultColor(const QsciLexerTCL* self, int style);
bool QsciLexerTCL_defaultEolFill(const QsciLexerTCL* self, int style);
QFont* QsciLexerTCL_defaultFont(const QsciLexerTCL* self, int style);
QColor* QsciLexerTCL_defaultPaper(const QsciLexerTCL* self, int style);
const char* QsciLexerTCL_keywords(const QsciLexerTCL* self, int set);
struct miqt_string QsciLexerTCL_description(const QsciLexerTCL* self, int style);
void QsciLexerTCL_refreshProperties(QsciLexerTCL* self);
void QsciLexerTCL_setFoldComments(QsciLexerTCL* self, bool fold);
bool QsciLexerTCL_foldComments(const QsciLexerTCL* self);
struct miqt_string QsciLexerTCL_tr2(const char* s, const char* c);
struct miqt_string QsciLexerTCL_tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerTCL_trUtf82(const char* s, const char* c);
struct miqt_string QsciLexerTCL_trUtf83(const char* s, const char* c, int n);
bool QsciLexerTCL_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerTCL_virtualbase_language(const void* self);
bool QsciLexerTCL_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerTCL_virtualbase_lexer(const void* self);
bool QsciLexerTCL_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerTCL_virtualbase_lexerId(const void* self);
bool QsciLexerTCL_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerTCL_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerTCL_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerTCL_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerTCL_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerTCL_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerTCL_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerTCL_virtualbase_blockLookback(const void* self);
bool QsciLexerTCL_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerTCL_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerTCL_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerTCL_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerTCL_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerTCL_virtualbase_braceStyle(const void* self);
bool QsciLexerTCL_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerTCL_virtualbase_caseSensitive(const void* self);
bool QsciLexerTCL_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerTCL_virtualbase_color(const void* self, int style);
bool QsciLexerTCL_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerTCL_virtualbase_eolFill(const void* self, int style);
bool QsciLexerTCL_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerTCL_virtualbase_font(const void* self, int style);
bool QsciLexerTCL_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerTCL_virtualbase_indentationGuideView(const void* self);
bool QsciLexerTCL_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerTCL_virtualbase_keywords(const void* self, int set);
bool QsciLexerTCL_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerTCL_virtualbase_defaultStyle(const void* self);
bool QsciLexerTCL_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerTCL_virtualbase_description(const void* self, int style);
bool QsciLexerTCL_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerTCL_virtualbase_paper(const void* self, int style);
bool QsciLexerTCL_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerTCL_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerTCL_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerTCL_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerTCL_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerTCL_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerTCL_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerTCL_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerTCL_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerTCL_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerTCL_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerTCL_virtualbase_refreshProperties(void* self);
bool QsciLexerTCL_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerTCL_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerTCL_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerTCL_virtualbase_wordCharacters(const void* self);
bool QsciLexerTCL_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerTCL_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerTCL_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerTCL_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerTCL_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerTCL_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerTCL_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerTCL_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerTCL_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerTCL_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerTCL_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerTCL_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerTCL_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerTCL_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerTCL_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerTCL_virtualbase_event(void* self, QEvent* event);
bool QsciLexerTCL_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerTCL_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerTCL_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerTCL_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerTCL_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerTCL_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerTCL_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerTCL_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerTCL_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerTCL_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerTCL_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerTCL_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerTCL_delete(QsciLexerTCL* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
