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
QMetaObject* QsciLexerXML_MetaObject(const QsciLexerXML* self);
void* QsciLexerXML_Metacast(QsciLexerXML* self, const char* param1);
struct miqt_string QsciLexerXML_Tr(const char* s);
const char* QsciLexerXML_Language(const QsciLexerXML* self);
const char* QsciLexerXML_Lexer(const QsciLexerXML* self);
QColor* QsciLexerXML_DefaultColor(const QsciLexerXML* self, int style);
bool QsciLexerXML_DefaultEolFill(const QsciLexerXML* self, int style);
QFont* QsciLexerXML_DefaultFont(const QsciLexerXML* self, int style);
QColor* QsciLexerXML_DefaultPaper(const QsciLexerXML* self, int style);
const char* QsciLexerXML_Keywords(const QsciLexerXML* self, int set);
void QsciLexerXML_RefreshProperties(QsciLexerXML* self);
void QsciLexerXML_SetScriptsStyled(QsciLexerXML* self, bool styled);
bool QsciLexerXML_ScriptsStyled(const QsciLexerXML* self);
struct miqt_string QsciLexerXML_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerXML_Tr3(const char* s, const char* c, int n);
bool QsciLexerXML_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_SetFoldCompact(void* self, bool fold);
bool QsciLexerXML_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_SetFoldPreprocessor(void* self, bool fold);
bool QsciLexerXML_override_virtual_SetCaseSensitiveTags(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_SetCaseSensitiveTags(void* self, bool sens);
bool QsciLexerXML_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_Language(const void* self);
bool QsciLexerXML_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_Lexer(const void* self);
bool QsciLexerXML_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerXML_virtualbase_LexerId(const void* self);
bool QsciLexerXML_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerXML_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerXML_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerXML_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerXML_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerXML_virtualbase_BlockLookback(const void* self);
bool QsciLexerXML_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerXML_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerXML_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerXML_virtualbase_BraceStyle(const void* self);
bool QsciLexerXML_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_CaseSensitive(const void* self);
bool QsciLexerXML_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerXML_virtualbase_Color(const void* self, int style);
bool QsciLexerXML_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_EolFill(const void* self, int style);
bool QsciLexerXML_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerXML_virtualbase_Font(const void* self, int style);
bool QsciLexerXML_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerXML_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerXML_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_Keywords(const void* self, int set);
bool QsciLexerXML_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerXML_virtualbase_DefaultStyle(const void* self);
bool QsciLexerXML_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerXML_virtualbase_Description(const void* self, int style);
bool QsciLexerXML_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerXML_virtualbase_Paper(const void* self, int style);
bool QsciLexerXML_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerXML_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerXML_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerXML_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerXML_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerXML_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerXML_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerXML_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerXML_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_RefreshProperties(void* self);
bool QsciLexerXML_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerXML_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerXML_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerXML_virtualbase_WordCharacters(const void* self);
bool QsciLexerXML_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerXML_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerXML_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerXML_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerXML_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerXML_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerXML_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerXML_override_virtual_Event(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_Event(void* self, QEvent* event);
bool QsciLexerXML_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciLexerXML_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerXML_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QsciLexerXML_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QsciLexerXML_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_CustomEvent(void* self, QEvent* event);
bool QsciLexerXML_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerXML_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciLexerXML_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerXML_Delete(QsciLexerXML* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
