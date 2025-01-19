#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXEROCTAVE_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXEROCTAVE_H

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
class QsciLexerMatlab;
class QsciLexerOctave;
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
typedef struct QsciLexerMatlab QsciLexerMatlab;
typedef struct QsciLexerOctave QsciLexerOctave;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerOctave* QsciLexerOctave_new();
QsciLexerOctave* QsciLexerOctave_new2(QObject* parent);
void QsciLexerOctave_virtbase(QsciLexerOctave* src, QsciLexerMatlab** outptr_QsciLexerMatlab);
QMetaObject* QsciLexerOctave_MetaObject(const QsciLexerOctave* self);
void* QsciLexerOctave_Metacast(QsciLexerOctave* self, const char* param1);
struct miqt_string QsciLexerOctave_Tr(const char* s);
const char* QsciLexerOctave_Language(const QsciLexerOctave* self);
const char* QsciLexerOctave_Lexer(const QsciLexerOctave* self);
const char* QsciLexerOctave_Keywords(const QsciLexerOctave* self, int set);
struct miqt_string QsciLexerOctave_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerOctave_Tr3(const char* s, const char* c, int n);
bool QsciLexerOctave_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerOctave_virtualbase_Language(const void* self);
bool QsciLexerOctave_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerOctave_virtualbase_Lexer(const void* self);
bool QsciLexerOctave_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerOctave_virtualbase_LexerId(const void* self);
bool QsciLexerOctave_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerOctave_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerOctave_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerOctave_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerOctave_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerOctave_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerOctave_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerOctave_virtualbase_BlockLookback(const void* self);
bool QsciLexerOctave_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerOctave_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerOctave_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerOctave_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerOctave_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerOctave_virtualbase_BraceStyle(const void* self);
bool QsciLexerOctave_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerOctave_virtualbase_CaseSensitive(const void* self);
bool QsciLexerOctave_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerOctave_virtualbase_Color(const void* self, int style);
bool QsciLexerOctave_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerOctave_virtualbase_EolFill(const void* self, int style);
bool QsciLexerOctave_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerOctave_virtualbase_Font(const void* self, int style);
bool QsciLexerOctave_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerOctave_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerOctave_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerOctave_virtualbase_Keywords(const void* self, int set);
bool QsciLexerOctave_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerOctave_virtualbase_DefaultStyle(const void* self);
bool QsciLexerOctave_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerOctave_virtualbase_Description(const void* self, int style);
bool QsciLexerOctave_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerOctave_virtualbase_Paper(const void* self, int style);
bool QsciLexerOctave_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerOctave_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerOctave_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerOctave_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerOctave_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerOctave_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerOctave_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerOctave_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerOctave_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerOctave_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerOctave_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerOctave_virtualbase_RefreshProperties(void* self);
bool QsciLexerOctave_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerOctave_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerOctave_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerOctave_virtualbase_WordCharacters(const void* self);
bool QsciLexerOctave_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerOctave_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerOctave_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerOctave_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerOctave_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerOctave_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerOctave_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerOctave_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerOctave_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerOctave_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerOctave_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerOctave_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerOctave_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerOctave_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerOctave_override_virtual_Event(void* self, intptr_t slot);
bool QsciLexerOctave_virtualbase_Event(void* self, QEvent* event);
bool QsciLexerOctave_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciLexerOctave_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerOctave_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciLexerOctave_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QsciLexerOctave_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciLexerOctave_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QsciLexerOctave_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciLexerOctave_virtualbase_CustomEvent(void* self, QEvent* event);
bool QsciLexerOctave_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciLexerOctave_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerOctave_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciLexerOctave_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerOctave_Delete(QsciLexerOctave* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
