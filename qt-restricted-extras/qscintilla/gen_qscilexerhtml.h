#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERHTML_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXERHTML_H

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
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerHTML* QsciLexerHTML_new();
QsciLexerHTML* QsciLexerHTML_new2(QObject* parent);
void QsciLexerHTML_virtbase(QsciLexerHTML* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerHTML_MetaObject(const QsciLexerHTML* self);
void* QsciLexerHTML_Metacast(QsciLexerHTML* self, const char* param1);
struct miqt_string QsciLexerHTML_Tr(const char* s);
struct miqt_string QsciLexerHTML_TrUtf8(const char* s);
const char* QsciLexerHTML_Language(const QsciLexerHTML* self);
const char* QsciLexerHTML_Lexer(const QsciLexerHTML* self);
const char* QsciLexerHTML_AutoCompletionFillups(const QsciLexerHTML* self);
const char* QsciLexerHTML_WordCharacters(const QsciLexerHTML* self);
QColor* QsciLexerHTML_DefaultColor(const QsciLexerHTML* self, int style);
bool QsciLexerHTML_DefaultEolFill(const QsciLexerHTML* self, int style);
QFont* QsciLexerHTML_DefaultFont(const QsciLexerHTML* self, int style);
QColor* QsciLexerHTML_DefaultPaper(const QsciLexerHTML* self, int style);
const char* QsciLexerHTML_Keywords(const QsciLexerHTML* self, int set);
struct miqt_string QsciLexerHTML_Description(const QsciLexerHTML* self, int style);
void QsciLexerHTML_RefreshProperties(QsciLexerHTML* self);
bool QsciLexerHTML_CaseSensitiveTags(const QsciLexerHTML* self);
void QsciLexerHTML_SetDjangoTemplates(QsciLexerHTML* self, bool enabled);
bool QsciLexerHTML_DjangoTemplates(const QsciLexerHTML* self);
bool QsciLexerHTML_FoldCompact(const QsciLexerHTML* self);
bool QsciLexerHTML_FoldPreprocessor(const QsciLexerHTML* self);
void QsciLexerHTML_SetFoldScriptComments(QsciLexerHTML* self, bool fold);
bool QsciLexerHTML_FoldScriptComments(const QsciLexerHTML* self);
void QsciLexerHTML_SetFoldScriptHeredocs(QsciLexerHTML* self, bool fold);
bool QsciLexerHTML_FoldScriptHeredocs(const QsciLexerHTML* self);
void QsciLexerHTML_SetMakoTemplates(QsciLexerHTML* self, bool enabled);
bool QsciLexerHTML_MakoTemplates(const QsciLexerHTML* self);
void QsciLexerHTML_SetFoldCompact(QsciLexerHTML* self, bool fold);
void QsciLexerHTML_SetFoldPreprocessor(QsciLexerHTML* self, bool fold);
void QsciLexerHTML_SetCaseSensitiveTags(QsciLexerHTML* self, bool sens);
struct miqt_string QsciLexerHTML_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerHTML_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerHTML_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerHTML_TrUtf83(const char* s, const char* c, int n);
bool QsciLexerHTML_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_SetFoldCompact(void* self, bool fold);
bool QsciLexerHTML_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_SetFoldPreprocessor(void* self, bool fold);
bool QsciLexerHTML_override_virtual_SetCaseSensitiveTags(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_SetCaseSensitiveTags(void* self, bool sens);
bool QsciLexerHTML_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_Language(const void* self);
bool QsciLexerHTML_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_Lexer(const void* self);
bool QsciLexerHTML_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerHTML_virtualbase_LexerId(const void* self);
bool QsciLexerHTML_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerHTML_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerHTML_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerHTML_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerHTML_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerHTML_virtualbase_BlockLookback(const void* self);
bool QsciLexerHTML_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerHTML_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerHTML_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerHTML_virtualbase_BraceStyle(const void* self);
bool QsciLexerHTML_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_CaseSensitive(const void* self);
bool QsciLexerHTML_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerHTML_virtualbase_Color(const void* self, int style);
bool QsciLexerHTML_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_EolFill(const void* self, int style);
bool QsciLexerHTML_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerHTML_virtualbase_Font(const void* self, int style);
bool QsciLexerHTML_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerHTML_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerHTML_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_Keywords(const void* self, int set);
bool QsciLexerHTML_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerHTML_virtualbase_DefaultStyle(const void* self);
bool QsciLexerHTML_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerHTML_virtualbase_Description(const void* self, int style);
bool QsciLexerHTML_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerHTML_virtualbase_Paper(const void* self, int style);
bool QsciLexerHTML_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerHTML_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerHTML_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerHTML_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerHTML_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerHTML_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerHTML_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerHTML_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerHTML_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_RefreshProperties(void* self);
bool QsciLexerHTML_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerHTML_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerHTML_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerHTML_virtualbase_WordCharacters(const void* self);
bool QsciLexerHTML_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerHTML_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerHTML_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerHTML_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerHTML_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerHTML_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerHTML_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerHTML_override_virtual_Event(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_Event(void* self, QEvent* event);
bool QsciLexerHTML_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciLexerHTML_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerHTML_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QsciLexerHTML_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QsciLexerHTML_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_CustomEvent(void* self, QEvent* event);
bool QsciLexerHTML_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerHTML_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciLexerHTML_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerHTML_Delete(QsciLexerHTML* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
