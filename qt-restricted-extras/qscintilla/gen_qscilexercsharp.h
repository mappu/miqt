#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCSHARP_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCSHARP_H

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
class QsciLexerCPP;
class QsciLexerCSharp;
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
typedef struct QsciLexerCPP QsciLexerCPP;
typedef struct QsciLexerCSharp QsciLexerCSharp;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerCSharp* QsciLexerCSharp_new();
QsciLexerCSharp* QsciLexerCSharp_new2(QObject* parent);
void QsciLexerCSharp_virtbase(QsciLexerCSharp* src, QsciLexerCPP** outptr_QsciLexerCPP);
QMetaObject* QsciLexerCSharp_metaObject(const QsciLexerCSharp* self);
void* QsciLexerCSharp_metacast(QsciLexerCSharp* self, const char* param1);
struct miqt_string QsciLexerCSharp_tr(const char* s);
struct miqt_string QsciLexerCSharp_trUtf8(const char* s);
const char* QsciLexerCSharp_language(const QsciLexerCSharp* self);
QColor* QsciLexerCSharp_defaultColor(const QsciLexerCSharp* self, int style);
bool QsciLexerCSharp_defaultEolFill(const QsciLexerCSharp* self, int style);
QFont* QsciLexerCSharp_defaultFont(const QsciLexerCSharp* self, int style);
QColor* QsciLexerCSharp_defaultPaper(const QsciLexerCSharp* self, int style);
const char* QsciLexerCSharp_keywords(const QsciLexerCSharp* self, int set);
struct miqt_string QsciLexerCSharp_description(const QsciLexerCSharp* self, int style);
struct miqt_string QsciLexerCSharp_tr2(const char* s, const char* c);
struct miqt_string QsciLexerCSharp_tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerCSharp_trUtf82(const char* s, const char* c);
struct miqt_string QsciLexerCSharp_trUtf83(const char* s, const char* c, int n);

bool QsciLexerCSharp_override_virtual_setFoldAtElse(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_setFoldAtElse(void* self, bool fold);
bool QsciLexerCSharp_override_virtual_setFoldComments(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_setFoldComments(void* self, bool fold);
bool QsciLexerCSharp_override_virtual_setFoldCompact(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_setFoldCompact(void* self, bool fold);
bool QsciLexerCSharp_override_virtual_setFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_setFoldPreprocessor(void* self, bool fold);
bool QsciLexerCSharp_override_virtual_setStylePreprocessor(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_setStylePreprocessor(void* self, bool style);
bool QsciLexerCSharp_override_virtual_language(void* self, intptr_t slot);
const char* QsciLexerCSharp_virtualbase_language(const void* self);
bool QsciLexerCSharp_override_virtual_lexer(void* self, intptr_t slot);
const char* QsciLexerCSharp_virtualbase_lexer(const void* self);
bool QsciLexerCSharp_override_virtual_lexerId(void* self, intptr_t slot);
int QsciLexerCSharp_virtualbase_lexerId(const void* self);
bool QsciLexerCSharp_override_virtual_autoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerCSharp_virtualbase_autoCompletionFillups(const void* self);
bool QsciLexerCSharp_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerCSharp_virtualbase_autoCompletionWordSeparators(const void* self);
bool QsciLexerCSharp_override_virtual_blockEnd(void* self, intptr_t slot);
const char* QsciLexerCSharp_virtualbase_blockEnd(const void* self, int* style);
bool QsciLexerCSharp_override_virtual_blockLookback(void* self, intptr_t slot);
int QsciLexerCSharp_virtualbase_blockLookback(const void* self);
bool QsciLexerCSharp_override_virtual_blockStart(void* self, intptr_t slot);
const char* QsciLexerCSharp_virtualbase_blockStart(const void* self, int* style);
bool QsciLexerCSharp_override_virtual_blockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerCSharp_virtualbase_blockStartKeyword(const void* self, int* style);
bool QsciLexerCSharp_override_virtual_braceStyle(void* self, intptr_t slot);
int QsciLexerCSharp_virtualbase_braceStyle(const void* self);
bool QsciLexerCSharp_override_virtual_caseSensitive(void* self, intptr_t slot);
bool QsciLexerCSharp_virtualbase_caseSensitive(const void* self);
bool QsciLexerCSharp_override_virtual_color(void* self, intptr_t slot);
QColor* QsciLexerCSharp_virtualbase_color(const void* self, int style);
bool QsciLexerCSharp_override_virtual_eolFill(void* self, intptr_t slot);
bool QsciLexerCSharp_virtualbase_eolFill(const void* self, int style);
bool QsciLexerCSharp_override_virtual_font(void* self, intptr_t slot);
QFont* QsciLexerCSharp_virtualbase_font(const void* self, int style);
bool QsciLexerCSharp_override_virtual_indentationGuideView(void* self, intptr_t slot);
int QsciLexerCSharp_virtualbase_indentationGuideView(const void* self);
bool QsciLexerCSharp_override_virtual_keywords(void* self, intptr_t slot);
const char* QsciLexerCSharp_virtualbase_keywords(const void* self, int set);
bool QsciLexerCSharp_override_virtual_defaultStyle(void* self, intptr_t slot);
int QsciLexerCSharp_virtualbase_defaultStyle(const void* self);
bool QsciLexerCSharp_override_virtual_description(void* self, intptr_t slot);
struct miqt_string QsciLexerCSharp_virtualbase_description(const void* self, int style);
bool QsciLexerCSharp_override_virtual_paper(void* self, intptr_t slot);
QColor* QsciLexerCSharp_virtualbase_paper(const void* self, int style);
bool QsciLexerCSharp_override_virtual_defaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCSharp_virtualbase_defaultColorWithStyle(const void* self, int style);
bool QsciLexerCSharp_override_virtual_defaultEolFill(void* self, intptr_t slot);
bool QsciLexerCSharp_virtualbase_defaultEolFill(const void* self, int style);
bool QsciLexerCSharp_override_virtual_defaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerCSharp_virtualbase_defaultFontWithStyle(const void* self, int style);
bool QsciLexerCSharp_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCSharp_virtualbase_defaultPaperWithStyle(const void* self, int style);
bool QsciLexerCSharp_override_virtual_setEditor(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_setEditor(void* self, QsciScintilla* editor);
bool QsciLexerCSharp_override_virtual_refreshProperties(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_refreshProperties(void* self);
bool QsciLexerCSharp_override_virtual_styleBitsNeeded(void* self, intptr_t slot);
int QsciLexerCSharp_virtualbase_styleBitsNeeded(const void* self);
bool QsciLexerCSharp_override_virtual_wordCharacters(void* self, intptr_t slot);
const char* QsciLexerCSharp_virtualbase_wordCharacters(const void* self);
bool QsciLexerCSharp_override_virtual_setAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerCSharp_override_virtual_setColor(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_setColor(void* self, QColor* c, int style);
bool QsciLexerCSharp_override_virtual_setEolFill(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_setEolFill(void* self, bool eoffill, int style);
bool QsciLexerCSharp_override_virtual_setFont(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_setFont(void* self, QFont* f, int style);
bool QsciLexerCSharp_override_virtual_setPaper(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_setPaper(void* self, QColor* c, int style);
bool QsciLexerCSharp_override_virtual_readProperties(void* self, intptr_t slot);
bool QsciLexerCSharp_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCSharp_override_virtual_writeProperties(void* self, intptr_t slot);
bool QsciLexerCSharp_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCSharp_override_virtual_event(void* self, intptr_t slot);
bool QsciLexerCSharp_virtualbase_event(void* self, QEvent* event);
bool QsciLexerCSharp_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciLexerCSharp_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerCSharp_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciLexerCSharp_override_virtual_childEvent(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciLexerCSharp_override_virtual_customEvent(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_customEvent(void* self, QEvent* event);
bool QsciLexerCSharp_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciLexerCSharp_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciLexerCSharp_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

bool QsciLexerCSharp_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCSharp_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
QObject* QsciLexerCSharp_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciLexerCSharp_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciLexerCSharp_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciLexerCSharp_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QsciLexerCSharp_delete(QsciLexerCSharp* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
