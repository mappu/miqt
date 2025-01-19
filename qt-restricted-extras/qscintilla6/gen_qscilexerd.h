#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERD_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERD_H

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
class QsciLexerD;
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
typedef struct QsciLexerD QsciLexerD;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerD* QsciLexerD_new();
QsciLexerD* QsciLexerD_new2(QObject* parent);
void QsciLexerD_virtbase(QsciLexerD* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerD_MetaObject(const QsciLexerD* self);
void* QsciLexerD_Metacast(QsciLexerD* self, const char* param1);
struct miqt_string QsciLexerD_Tr(const char* s);
const char* QsciLexerD_Language(const QsciLexerD* self);
const char* QsciLexerD_Lexer(const QsciLexerD* self);
struct miqt_array /* of struct miqt_string */  QsciLexerD_AutoCompletionWordSeparators(const QsciLexerD* self);
const char* QsciLexerD_BlockEnd(const QsciLexerD* self);
const char* QsciLexerD_BlockStart(const QsciLexerD* self);
const char* QsciLexerD_BlockStartKeyword(const QsciLexerD* self);
int QsciLexerD_BraceStyle(const QsciLexerD* self);
const char* QsciLexerD_WordCharacters(const QsciLexerD* self);
QColor* QsciLexerD_DefaultColor(const QsciLexerD* self, int style);
bool QsciLexerD_DefaultEolFill(const QsciLexerD* self, int style);
QFont* QsciLexerD_DefaultFont(const QsciLexerD* self, int style);
QColor* QsciLexerD_DefaultPaper(const QsciLexerD* self, int style);
const char* QsciLexerD_Keywords(const QsciLexerD* self, int set);
struct miqt_string QsciLexerD_Description(const QsciLexerD* self, int style);
void QsciLexerD_RefreshProperties(QsciLexerD* self);
bool QsciLexerD_FoldAtElse(const QsciLexerD* self);
bool QsciLexerD_FoldComments(const QsciLexerD* self);
bool QsciLexerD_FoldCompact(const QsciLexerD* self);
void QsciLexerD_SetFoldAtElse(QsciLexerD* self, bool fold);
void QsciLexerD_SetFoldComments(QsciLexerD* self, bool fold);
void QsciLexerD_SetFoldCompact(QsciLexerD* self, bool fold);
struct miqt_string QsciLexerD_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerD_Tr3(const char* s, const char* c, int n);
const char* QsciLexerD_BlockEnd1(const QsciLexerD* self, int* style);
const char* QsciLexerD_BlockStart1(const QsciLexerD* self, int* style);
const char* QsciLexerD_BlockStartKeyword1(const QsciLexerD* self, int* style);
bool QsciLexerD_override_virtual_SetFoldAtElse(void* self, intptr_t slot);
void QsciLexerD_virtualbase_SetFoldAtElse(void* self, bool fold);
bool QsciLexerD_override_virtual_SetFoldComments(void* self, intptr_t slot);
void QsciLexerD_virtualbase_SetFoldComments(void* self, bool fold);
bool QsciLexerD_override_virtual_SetFoldCompact(void* self, intptr_t slot);
void QsciLexerD_virtualbase_SetFoldCompact(void* self, bool fold);
bool QsciLexerD_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_Language(const void* self);
bool QsciLexerD_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_Lexer(const void* self);
bool QsciLexerD_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerD_virtualbase_LexerId(const void* self);
bool QsciLexerD_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerD_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerD_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerD_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerD_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerD_virtualbase_BlockLookback(const void* self);
bool QsciLexerD_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerD_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerD_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerD_virtualbase_BraceStyle(const void* self);
bool QsciLexerD_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_CaseSensitive(const void* self);
bool QsciLexerD_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerD_virtualbase_Color(const void* self, int style);
bool QsciLexerD_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_EolFill(const void* self, int style);
bool QsciLexerD_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerD_virtualbase_Font(const void* self, int style);
bool QsciLexerD_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerD_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerD_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_Keywords(const void* self, int set);
bool QsciLexerD_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerD_virtualbase_DefaultStyle(const void* self);
bool QsciLexerD_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerD_virtualbase_Description(const void* self, int style);
bool QsciLexerD_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerD_virtualbase_Paper(const void* self, int style);
bool QsciLexerD_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerD_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerD_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerD_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerD_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerD_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerD_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerD_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerD_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerD_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerD_virtualbase_RefreshProperties(void* self);
bool QsciLexerD_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerD_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerD_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerD_virtualbase_WordCharacters(const void* self);
bool QsciLexerD_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerD_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerD_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerD_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerD_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerD_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerD_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerD_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerD_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerD_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerD_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerD_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerD_override_virtual_Event(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_Event(void* self, QEvent* event);
bool QsciLexerD_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciLexerD_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerD_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciLexerD_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QsciLexerD_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciLexerD_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QsciLexerD_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciLexerD_virtualbase_CustomEvent(void* self, QEvent* event);
bool QsciLexerD_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciLexerD_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerD_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciLexerD_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerD_Delete(QsciLexerD* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
