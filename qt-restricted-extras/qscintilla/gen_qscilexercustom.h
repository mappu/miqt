#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCUSTOM_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERCUSTOM_H

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
QMetaObject* QsciLexerCustom_MetaObject(const QsciLexerCustom* self);
void* QsciLexerCustom_Metacast(QsciLexerCustom* self, const char* param1);
struct miqt_string QsciLexerCustom_Tr(const char* s);
struct miqt_string QsciLexerCustom_TrUtf8(const char* s);
void QsciLexerCustom_SetStyling(QsciLexerCustom* self, int length, int style);
void QsciLexerCustom_SetStyling2(QsciLexerCustom* self, int length, QsciStyle* style);
void QsciLexerCustom_StartStyling(QsciLexerCustom* self, int pos);
void QsciLexerCustom_StyleText(QsciLexerCustom* self, int start, int end);
void QsciLexerCustom_SetEditor(QsciLexerCustom* self, QsciScintilla* editor);
int QsciLexerCustom_StyleBitsNeeded(const QsciLexerCustom* self);
struct miqt_string QsciLexerCustom_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerCustom_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerCustom_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerCustom_TrUtf83(const char* s, const char* c, int n);
void QsciLexerCustom_StartStyling2(QsciLexerCustom* self, int pos, int styleBits);
bool QsciLexerCustom_override_virtual_StyleText(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_StyleText(void* self, int start, int end);
bool QsciLexerCustom_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerCustom_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerCustom_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerCustom_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_Language(const void* self);
bool QsciLexerCustom_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_Lexer(const void* self);
bool QsciLexerCustom_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerCustom_virtualbase_LexerId(const void* self);
bool QsciLexerCustom_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerCustom_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerCustom_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerCustom_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerCustom_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerCustom_virtualbase_BlockLookback(const void* self);
bool QsciLexerCustom_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerCustom_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerCustom_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerCustom_virtualbase_BraceStyle(const void* self);
bool QsciLexerCustom_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_CaseSensitive(const void* self);
bool QsciLexerCustom_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerCustom_virtualbase_Color(const void* self, int style);
bool QsciLexerCustom_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_EolFill(const void* self, int style);
bool QsciLexerCustom_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerCustom_virtualbase_Font(const void* self, int style);
bool QsciLexerCustom_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerCustom_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerCustom_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_Keywords(const void* self, int set);
bool QsciLexerCustom_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerCustom_virtualbase_DefaultStyle(const void* self);
bool QsciLexerCustom_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerCustom_virtualbase_Description(const void* self, int style);
bool QsciLexerCustom_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerCustom_virtualbase_Paper(const void* self, int style);
bool QsciLexerCustom_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCustom_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerCustom_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerCustom_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerCustom_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerCustom_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerCustom_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerCustom_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_RefreshProperties(void* self);
bool QsciLexerCustom_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerCustom_virtualbase_WordCharacters(const void* self);
bool QsciLexerCustom_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerCustom_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerCustom_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerCustom_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerCustom_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerCustom_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCustom_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerCustom_override_virtual_Event(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_Event(void* self, QEvent* event);
bool QsciLexerCustom_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciLexerCustom_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerCustom_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QsciLexerCustom_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QsciLexerCustom_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_CustomEvent(void* self, QEvent* event);
bool QsciLexerCustom_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerCustom_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciLexerCustom_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerCustom_Delete(QsciLexerCustom* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
