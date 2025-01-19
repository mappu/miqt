#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERJAVA_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERJAVA_H

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
class QsciLexerJava;
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
typedef struct QsciLexerJava QsciLexerJava;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerJava* QsciLexerJava_new();
QsciLexerJava* QsciLexerJava_new2(QObject* parent);
void QsciLexerJava_virtbase(QsciLexerJava* src, QsciLexerCPP** outptr_QsciLexerCPP);
QMetaObject* QsciLexerJava_MetaObject(const QsciLexerJava* self);
void* QsciLexerJava_Metacast(QsciLexerJava* self, const char* param1);
struct miqt_string QsciLexerJava_Tr(const char* s);
const char* QsciLexerJava_Language(const QsciLexerJava* self);
const char* QsciLexerJava_Keywords(const QsciLexerJava* self, int set);
struct miqt_string QsciLexerJava_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerJava_Tr3(const char* s, const char* c, int n);
bool QsciLexerJava_override_virtual_SetFoldAtElse(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetFoldAtElse(void* self, bool fold);
bool QsciLexerJava_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetFoldComments(void* self, bool fold);
bool QsciLexerJava_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetFoldCompact(void* self, bool fold);
bool QsciLexerJava_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetFoldPreprocessor(void* self, bool fold);
bool QsciLexerJava_override_virtual_SetStylePreprocessor(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetStylePreprocessor(void* self, bool style);
bool QsciLexerJava_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerJava_virtualbase_Language(const void* self);
bool QsciLexerJava_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerJava_virtualbase_Lexer(const void* self);
bool QsciLexerJava_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerJava_virtualbase_LexerId(const void* self);
bool QsciLexerJava_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerJava_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerJava_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerJava_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerJava_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerJava_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerJava_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerJava_virtualbase_BlockLookback(const void* self);
bool QsciLexerJava_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerJava_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerJava_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerJava_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerJava_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerJava_virtualbase_BraceStyle(const void* self);
bool QsciLexerJava_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerJava_virtualbase_CaseSensitive(const void* self);
bool QsciLexerJava_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerJava_virtualbase_Color(const void* self, int style);
bool QsciLexerJava_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerJava_virtualbase_EolFill(const void* self, int style);
bool QsciLexerJava_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerJava_virtualbase_Font(const void* self, int style);
bool QsciLexerJava_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerJava_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerJava_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerJava_virtualbase_Keywords(const void* self, int set);
bool QsciLexerJava_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerJava_virtualbase_DefaultStyle(const void* self);
bool QsciLexerJava_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerJava_virtualbase_Description(const void* self, int style);
bool QsciLexerJava_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerJava_virtualbase_Paper(const void* self, int style);
bool QsciLexerJava_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerJava_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerJava_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerJava_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerJava_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerJava_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerJava_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerJava_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerJava_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerJava_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_RefreshProperties(void* self);
bool QsciLexerJava_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerJava_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerJava_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerJava_virtualbase_WordCharacters(const void* self);
bool QsciLexerJava_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerJava_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerJava_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerJava_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerJava_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerJava_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerJava_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerJava_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerJava_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerJava_override_virtual_Event(void* self, intptr_t slot);
bool QsciLexerJava_virtualbase_Event(void* self, QEvent* event);
bool QsciLexerJava_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciLexerJava_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerJava_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QsciLexerJava_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QsciLexerJava_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_CustomEvent(void* self, QEvent* event);
bool QsciLexerJava_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerJava_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciLexerJava_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerJava_Delete(QsciLexerJava* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
