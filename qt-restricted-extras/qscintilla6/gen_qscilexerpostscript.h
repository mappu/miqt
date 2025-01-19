#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPOSTSCRIPT_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPOSTSCRIPT_H

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
class QsciLexerPostScript;
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
typedef struct QsciLexerPostScript QsciLexerPostScript;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPostScript* QsciLexerPostScript_new();
QsciLexerPostScript* QsciLexerPostScript_new2(QObject* parent);
void QsciLexerPostScript_virtbase(QsciLexerPostScript* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerPostScript_MetaObject(const QsciLexerPostScript* self);
void* QsciLexerPostScript_Metacast(QsciLexerPostScript* self, const char* param1);
struct miqt_string QsciLexerPostScript_Tr(const char* s);
const char* QsciLexerPostScript_Language(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_Lexer(const QsciLexerPostScript* self);
int QsciLexerPostScript_BraceStyle(const QsciLexerPostScript* self);
QColor* QsciLexerPostScript_DefaultColor(const QsciLexerPostScript* self, int style);
QFont* QsciLexerPostScript_DefaultFont(const QsciLexerPostScript* self, int style);
QColor* QsciLexerPostScript_DefaultPaper(const QsciLexerPostScript* self, int style);
const char* QsciLexerPostScript_Keywords(const QsciLexerPostScript* self, int set);
struct miqt_string QsciLexerPostScript_Description(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_RefreshProperties(QsciLexerPostScript* self);
bool QsciLexerPostScript_Tokenize(const QsciLexerPostScript* self);
int QsciLexerPostScript_Level(const QsciLexerPostScript* self);
bool QsciLexerPostScript_FoldCompact(const QsciLexerPostScript* self);
bool QsciLexerPostScript_FoldAtElse(const QsciLexerPostScript* self);
void QsciLexerPostScript_SetTokenize(QsciLexerPostScript* self, bool tokenize);
void QsciLexerPostScript_SetLevel(QsciLexerPostScript* self, int level);
void QsciLexerPostScript_SetFoldCompact(QsciLexerPostScript* self, bool fold);
void QsciLexerPostScript_SetFoldAtElse(QsciLexerPostScript* self, bool fold);
struct miqt_string QsciLexerPostScript_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerPostScript_Tr3(const char* s, const char* c, int n);
bool QsciLexerPostScript_override_virtual_SetTokenize(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_SetTokenize(void* self, bool tokenize);
bool QsciLexerPostScript_override_virtual_SetLevel(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_SetLevel(void* self, int level);
bool QsciLexerPostScript_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_SetFoldCompact(void* self, bool fold);
bool QsciLexerPostScript_override_virtual_SetFoldAtElse(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_SetFoldAtElse(void* self, bool fold);
bool QsciLexerPostScript_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_Language(const void* self);
bool QsciLexerPostScript_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_Lexer(const void* self);
bool QsciLexerPostScript_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerPostScript_virtualbase_LexerId(const void* self);
bool QsciLexerPostScript_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerPostScript_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerPostScript_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerPostScript_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerPostScript_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerPostScript_virtualbase_BlockLookback(const void* self);
bool QsciLexerPostScript_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerPostScript_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerPostScript_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerPostScript_virtualbase_BraceStyle(const void* self);
bool QsciLexerPostScript_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_CaseSensitive(const void* self);
bool QsciLexerPostScript_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerPostScript_virtualbase_Color(const void* self, int style);
bool QsciLexerPostScript_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_EolFill(const void* self, int style);
bool QsciLexerPostScript_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerPostScript_virtualbase_Font(const void* self, int style);
bool QsciLexerPostScript_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerPostScript_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerPostScript_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_Keywords(const void* self, int set);
bool QsciLexerPostScript_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerPostScript_virtualbase_DefaultStyle(const void* self);
bool QsciLexerPostScript_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerPostScript_virtualbase_Description(const void* self, int style);
bool QsciLexerPostScript_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerPostScript_virtualbase_Paper(const void* self, int style);
bool QsciLexerPostScript_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPostScript_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerPostScript_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerPostScript_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerPostScript_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerPostScript_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerPostScript_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerPostScript_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerPostScript_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_RefreshProperties(void* self);
bool QsciLexerPostScript_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerPostScript_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerPostScript_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerPostScript_virtualbase_WordCharacters(const void* self);
bool QsciLexerPostScript_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerPostScript_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerPostScript_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerPostScript_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerPostScript_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerPostScript_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPostScript_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerPostScript_override_virtual_Event(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_Event(void* self, QEvent* event);
bool QsciLexerPostScript_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciLexerPostScript_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerPostScript_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QsciLexerPostScript_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QsciLexerPostScript_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_CustomEvent(void* self, QEvent* event);
bool QsciLexerPostScript_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerPostScript_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciLexerPostScript_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerPostScript_Delete(QsciLexerPostScript* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
