#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERJAVASCRIPT_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERJAVASCRIPT_H

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
class QsciLexerJavaScript;
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
typedef struct QsciLexerJavaScript QsciLexerJavaScript;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerJavaScript* QsciLexerJavaScript_new();
QsciLexerJavaScript* QsciLexerJavaScript_new2(QObject* parent);
void QsciLexerJavaScript_virtbase(QsciLexerJavaScript* src, QsciLexerCPP** outptr_QsciLexerCPP);
QMetaObject* QsciLexerJavaScript_MetaObject(const QsciLexerJavaScript* self);
void* QsciLexerJavaScript_Metacast(QsciLexerJavaScript* self, const char* param1);
struct miqt_string QsciLexerJavaScript_Tr(const char* s);
const char* QsciLexerJavaScript_Language(const QsciLexerJavaScript* self);
QColor* QsciLexerJavaScript_DefaultColor(const QsciLexerJavaScript* self, int style);
bool QsciLexerJavaScript_DefaultEolFill(const QsciLexerJavaScript* self, int style);
QFont* QsciLexerJavaScript_DefaultFont(const QsciLexerJavaScript* self, int style);
QColor* QsciLexerJavaScript_DefaultPaper(const QsciLexerJavaScript* self, int style);
const char* QsciLexerJavaScript_Keywords(const QsciLexerJavaScript* self, int set);
struct miqt_string QsciLexerJavaScript_Description(const QsciLexerJavaScript* self, int style);
struct miqt_string QsciLexerJavaScript_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerJavaScript_Tr3(const char* s, const char* c, int n);
bool QsciLexerJavaScript_override_virtual_SetFoldAtElse(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetFoldAtElse(void* self, bool fold);
bool QsciLexerJavaScript_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetFoldComments(void* self, bool fold);
bool QsciLexerJavaScript_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetFoldCompact(void* self, bool fold);
bool QsciLexerJavaScript_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetFoldPreprocessor(void* self, bool fold);
bool QsciLexerJavaScript_override_virtual_SetStylePreprocessor(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetStylePreprocessor(void* self, bool style);
bool QsciLexerJavaScript_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerJavaScript_virtualbase_Language(const void* self);
bool QsciLexerJavaScript_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerJavaScript_virtualbase_Lexer(const void* self);
bool QsciLexerJavaScript_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerJavaScript_virtualbase_LexerId(const void* self);
bool QsciLexerJavaScript_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerJavaScript_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerJavaScript_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerJavaScript_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerJavaScript_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerJavaScript_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerJavaScript_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerJavaScript_virtualbase_BlockLookback(const void* self);
bool QsciLexerJavaScript_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerJavaScript_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerJavaScript_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerJavaScript_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerJavaScript_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerJavaScript_virtualbase_BraceStyle(const void* self);
bool QsciLexerJavaScript_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerJavaScript_virtualbase_CaseSensitive(const void* self);
bool QsciLexerJavaScript_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerJavaScript_virtualbase_Color(const void* self, int style);
bool QsciLexerJavaScript_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerJavaScript_virtualbase_EolFill(const void* self, int style);
bool QsciLexerJavaScript_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerJavaScript_virtualbase_Font(const void* self, int style);
bool QsciLexerJavaScript_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerJavaScript_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerJavaScript_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerJavaScript_virtualbase_Keywords(const void* self, int set);
bool QsciLexerJavaScript_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerJavaScript_virtualbase_DefaultStyle(const void* self);
bool QsciLexerJavaScript_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerJavaScript_virtualbase_Description(const void* self, int style);
bool QsciLexerJavaScript_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerJavaScript_virtualbase_Paper(const void* self, int style);
bool QsciLexerJavaScript_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerJavaScript_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerJavaScript_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerJavaScript_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerJavaScript_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerJavaScript_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerJavaScript_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerJavaScript_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerJavaScript_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerJavaScript_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_RefreshProperties(void* self);
bool QsciLexerJavaScript_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerJavaScript_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerJavaScript_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerJavaScript_virtualbase_WordCharacters(const void* self);
bool QsciLexerJavaScript_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerJavaScript_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerJavaScript_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerJavaScript_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerJavaScript_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerJavaScript_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerJavaScript_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerJavaScript_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerJavaScript_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerJavaScript_override_virtual_Event(void* self, intptr_t slot);
bool QsciLexerJavaScript_virtualbase_Event(void* self, QEvent* event);
bool QsciLexerJavaScript_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciLexerJavaScript_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerJavaScript_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QsciLexerJavaScript_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QsciLexerJavaScript_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_CustomEvent(void* self, QEvent* event);
bool QsciLexerJavaScript_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerJavaScript_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciLexerJavaScript_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerJavaScript_Delete(QsciLexerJavaScript* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
