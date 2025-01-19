#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPASCAL_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPASCAL_H

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
class QsciLexerPascal;
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
typedef struct QsciLexerPascal QsciLexerPascal;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPascal* QsciLexerPascal_new();
QsciLexerPascal* QsciLexerPascal_new2(QObject* parent);
void QsciLexerPascal_virtbase(QsciLexerPascal* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerPascal_MetaObject(const QsciLexerPascal* self);
void* QsciLexerPascal_Metacast(QsciLexerPascal* self, const char* param1);
struct miqt_string QsciLexerPascal_Tr(const char* s);
const char* QsciLexerPascal_Language(const QsciLexerPascal* self);
const char* QsciLexerPascal_Lexer(const QsciLexerPascal* self);
struct miqt_array /* of struct miqt_string */  QsciLexerPascal_AutoCompletionWordSeparators(const QsciLexerPascal* self);
const char* QsciLexerPascal_BlockEnd(const QsciLexerPascal* self);
const char* QsciLexerPascal_BlockStart(const QsciLexerPascal* self);
const char* QsciLexerPascal_BlockStartKeyword(const QsciLexerPascal* self);
int QsciLexerPascal_BraceStyle(const QsciLexerPascal* self);
QColor* QsciLexerPascal_DefaultColor(const QsciLexerPascal* self, int style);
bool QsciLexerPascal_DefaultEolFill(const QsciLexerPascal* self, int style);
QFont* QsciLexerPascal_DefaultFont(const QsciLexerPascal* self, int style);
QColor* QsciLexerPascal_DefaultPaper(const QsciLexerPascal* self, int style);
const char* QsciLexerPascal_Keywords(const QsciLexerPascal* self, int set);
struct miqt_string QsciLexerPascal_Description(const QsciLexerPascal* self, int style);
void QsciLexerPascal_RefreshProperties(QsciLexerPascal* self);
bool QsciLexerPascal_FoldComments(const QsciLexerPascal* self);
bool QsciLexerPascal_FoldCompact(const QsciLexerPascal* self);
bool QsciLexerPascal_FoldPreprocessor(const QsciLexerPascal* self);
void QsciLexerPascal_SetSmartHighlighting(QsciLexerPascal* self, bool enabled);
bool QsciLexerPascal_SmartHighlighting(const QsciLexerPascal* self);
void QsciLexerPascal_SetFoldComments(QsciLexerPascal* self, bool fold);
void QsciLexerPascal_SetFoldCompact(QsciLexerPascal* self, bool fold);
void QsciLexerPascal_SetFoldPreprocessor(QsciLexerPascal* self, bool fold);
struct miqt_string QsciLexerPascal_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerPascal_Tr3(const char* s, const char* c, int n);
const char* QsciLexerPascal_BlockEnd1(const QsciLexerPascal* self, int* style);
const char* QsciLexerPascal_BlockStart1(const QsciLexerPascal* self, int* style);
const char* QsciLexerPascal_BlockStartKeyword1(const QsciLexerPascal* self, int* style);
bool QsciLexerPascal_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_SetFoldComments(void* self, bool fold);
bool QsciLexerPascal_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_SetFoldCompact(void* self, bool fold);
bool QsciLexerPascal_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_SetFoldPreprocessor(void* self, bool fold);
bool QsciLexerPascal_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_Language(const void* self);
bool QsciLexerPascal_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_Lexer(const void* self);
bool QsciLexerPascal_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerPascal_virtualbase_LexerId(const void* self);
bool QsciLexerPascal_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerPascal_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerPascal_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerPascal_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerPascal_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerPascal_virtualbase_BlockLookback(const void* self);
bool QsciLexerPascal_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerPascal_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerPascal_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerPascal_virtualbase_BraceStyle(const void* self);
bool QsciLexerPascal_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_CaseSensitive(const void* self);
bool QsciLexerPascal_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerPascal_virtualbase_Color(const void* self, int style);
bool QsciLexerPascal_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_EolFill(const void* self, int style);
bool QsciLexerPascal_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerPascal_virtualbase_Font(const void* self, int style);
bool QsciLexerPascal_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerPascal_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerPascal_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_Keywords(const void* self, int set);
bool QsciLexerPascal_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerPascal_virtualbase_DefaultStyle(const void* self);
bool QsciLexerPascal_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerPascal_virtualbase_Description(const void* self, int style);
bool QsciLexerPascal_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerPascal_virtualbase_Paper(const void* self, int style);
bool QsciLexerPascal_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPascal_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerPascal_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerPascal_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerPascal_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerPascal_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPascal_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerPascal_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerPascal_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_RefreshProperties(void* self);
bool QsciLexerPascal_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerPascal_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerPascal_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerPascal_virtualbase_WordCharacters(const void* self);
bool QsciLexerPascal_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerPascal_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerPascal_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerPascal_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerPascal_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerPascal_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPascal_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPascal_override_virtual_Event(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_Event(void* self, QEvent* event);
bool QsciLexerPascal_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciLexerPascal_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerPascal_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QsciLexerPascal_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QsciLexerPascal_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_CustomEvent(void* self, QEvent* event);
bool QsciLexerPascal_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerPascal_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciLexerPascal_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerPascal_Delete(QsciLexerPascal* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
