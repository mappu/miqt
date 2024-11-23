#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXER_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXER_H

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
class QsciAbstractAPIs;
class QsciLexer;
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
typedef struct QsciAbstractAPIs QsciAbstractAPIs;
typedef struct QsciLexer QsciLexer;
typedef struct QsciScintilla QsciScintilla;
#endif

void QsciLexer_new(QsciLexer** outptr_QsciLexer, QObject** outptr_QObject);
void QsciLexer_new2(QObject* parent, QsciLexer** outptr_QsciLexer, QObject** outptr_QObject);
QMetaObject* QsciLexer_MetaObject(const QsciLexer* self);
void* QsciLexer_Metacast(QsciLexer* self, const char* param1);
struct miqt_string QsciLexer_Tr(const char* s);
const char* QsciLexer_Language(const QsciLexer* self);
const char* QsciLexer_Lexer(const QsciLexer* self);
int QsciLexer_LexerId(const QsciLexer* self);
QsciAbstractAPIs* QsciLexer_Apis(const QsciLexer* self);
const char* QsciLexer_AutoCompletionFillups(const QsciLexer* self);
struct miqt_array /* of struct miqt_string */  QsciLexer_AutoCompletionWordSeparators(const QsciLexer* self);
int QsciLexer_AutoIndentStyle(QsciLexer* self);
const char* QsciLexer_BlockEnd(const QsciLexer* self, int* style);
int QsciLexer_BlockLookback(const QsciLexer* self);
const char* QsciLexer_BlockStart(const QsciLexer* self, int* style);
const char* QsciLexer_BlockStartKeyword(const QsciLexer* self, int* style);
int QsciLexer_BraceStyle(const QsciLexer* self);
bool QsciLexer_CaseSensitive(const QsciLexer* self);
QColor* QsciLexer_Color(const QsciLexer* self, int style);
bool QsciLexer_EolFill(const QsciLexer* self, int style);
QFont* QsciLexer_Font(const QsciLexer* self, int style);
int QsciLexer_IndentationGuideView(const QsciLexer* self);
const char* QsciLexer_Keywords(const QsciLexer* self, int set);
int QsciLexer_DefaultStyle(const QsciLexer* self);
struct miqt_string QsciLexer_Description(const QsciLexer* self, int style);
QColor* QsciLexer_Paper(const QsciLexer* self, int style);
QColor* QsciLexer_DefaultColor(const QsciLexer* self);
QColor* QsciLexer_DefaultColorWithStyle(const QsciLexer* self, int style);
bool QsciLexer_DefaultEolFill(const QsciLexer* self, int style);
QFont* QsciLexer_DefaultFont(const QsciLexer* self);
QFont* QsciLexer_DefaultFontWithStyle(const QsciLexer* self, int style);
QColor* QsciLexer_DefaultPaper(const QsciLexer* self);
QColor* QsciLexer_DefaultPaperWithStyle(const QsciLexer* self, int style);
QsciScintilla* QsciLexer_Editor(const QsciLexer* self);
void QsciLexer_SetAPIs(QsciLexer* self, QsciAbstractAPIs* apis);
void QsciLexer_SetDefaultColor(QsciLexer* self, QColor* c);
void QsciLexer_SetDefaultFont(QsciLexer* self, QFont* f);
void QsciLexer_SetDefaultPaper(QsciLexer* self, QColor* c);
void QsciLexer_SetEditor(QsciLexer* self, QsciScintilla* editor);
bool QsciLexer_ReadSettings(QsciLexer* self, QSettings* qs);
void QsciLexer_RefreshProperties(QsciLexer* self);
int QsciLexer_StyleBitsNeeded(const QsciLexer* self);
const char* QsciLexer_WordCharacters(const QsciLexer* self);
bool QsciLexer_WriteSettings(const QsciLexer* self, QSettings* qs);
void QsciLexer_SetAutoIndentStyle(QsciLexer* self, int autoindentstyle);
void QsciLexer_SetColor(QsciLexer* self, QColor* c, int style);
void QsciLexer_SetEolFill(QsciLexer* self, bool eoffill, int style);
void QsciLexer_SetFont(QsciLexer* self, QFont* f, int style);
void QsciLexer_SetPaper(QsciLexer* self, QColor* c, int style);
void QsciLexer_ColorChanged(QsciLexer* self, QColor* c, int style);
void QsciLexer_connect_ColorChanged(QsciLexer* self, intptr_t slot);
void QsciLexer_EolFillChanged(QsciLexer* self, bool eolfilled, int style);
void QsciLexer_connect_EolFillChanged(QsciLexer* self, intptr_t slot);
void QsciLexer_FontChanged(QsciLexer* self, QFont* f, int style);
void QsciLexer_connect_FontChanged(QsciLexer* self, intptr_t slot);
void QsciLexer_PaperChanged(QsciLexer* self, QColor* c, int style);
void QsciLexer_connect_PaperChanged(QsciLexer* self, intptr_t slot);
void QsciLexer_PropertyChanged(QsciLexer* self, const char* prop, const char* val);
void QsciLexer_connect_PropertyChanged(QsciLexer* self, intptr_t slot);
bool QsciLexer_ReadProperties(QsciLexer* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexer_WriteProperties(const QsciLexer* self, QSettings* qs, struct miqt_string prefix);
struct miqt_string QsciLexer_Tr2(const char* s, const char* c);
struct miqt_string QsciLexer_Tr3(const char* s, const char* c, int n);
bool QsciLexer_ReadSettings2(QsciLexer* self, QSettings* qs, const char* prefix);
bool QsciLexer_WriteSettings2(const QsciLexer* self, QSettings* qs, const char* prefix);
void QsciLexer_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_Language(const void* self);
void QsciLexer_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_Lexer(const void* self);
void QsciLexer_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexer_virtualbase_LexerId(const void* self);
void QsciLexer_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_AutoCompletionFillups(const void* self);
void QsciLexer_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexer_virtualbase_AutoCompletionWordSeparators(const void* self);
void QsciLexer_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_BlockEnd(const void* self, int* style);
void QsciLexer_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexer_virtualbase_BlockLookback(const void* self);
void QsciLexer_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_BlockStart(const void* self, int* style);
void QsciLexer_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_BlockStartKeyword(const void* self, int* style);
void QsciLexer_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexer_virtualbase_BraceStyle(const void* self);
void QsciLexer_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexer_virtualbase_CaseSensitive(const void* self);
void QsciLexer_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexer_virtualbase_Color(const void* self, int style);
void QsciLexer_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexer_virtualbase_EolFill(const void* self, int style);
void QsciLexer_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexer_virtualbase_Font(const void* self, int style);
void QsciLexer_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexer_virtualbase_IndentationGuideView(const void* self);
void QsciLexer_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_Keywords(const void* self, int set);
void QsciLexer_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexer_virtualbase_DefaultStyle(const void* self);
void QsciLexer_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexer_virtualbase_Description(const void* self, int style);
void QsciLexer_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexer_virtualbase_Paper(const void* self, int style);
void QsciLexer_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexer_virtualbase_DefaultColorWithStyle(const void* self, int style);
void QsciLexer_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexer_virtualbase_DefaultEolFill(const void* self, int style);
void QsciLexer_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexer_virtualbase_DefaultFontWithStyle(const void* self, int style);
void QsciLexer_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexer_virtualbase_DefaultPaperWithStyle(const void* self, int style);
void QsciLexer_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexer_virtualbase_SetEditor(void* self, QsciScintilla* editor);
void QsciLexer_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexer_virtualbase_RefreshProperties(void* self);
void QsciLexer_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexer_virtualbase_StyleBitsNeeded(const void* self);
void QsciLexer_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexer_virtualbase_WordCharacters(const void* self);
void QsciLexer_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexer_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
void QsciLexer_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexer_virtualbase_SetColor(void* self, QColor* c, int style);
void QsciLexer_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexer_virtualbase_SetEolFill(void* self, bool eoffill, int style);
void QsciLexer_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexer_virtualbase_SetFont(void* self, QFont* f, int style);
void QsciLexer_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexer_virtualbase_SetPaper(void* self, QColor* c, int style);
void QsciLexer_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexer_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexer_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexer_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
void QsciLexer_override_virtual_Event(void* self, intptr_t slot);
bool QsciLexer_virtualbase_Event(void* self, QEvent* event);
void QsciLexer_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciLexer_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QsciLexer_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciLexer_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QsciLexer_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciLexer_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QsciLexer_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciLexer_virtualbase_CustomEvent(void* self, QEvent* event);
void QsciLexer_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciLexer_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QsciLexer_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciLexer_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciLexer_Delete(QsciLexer* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
