#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXER_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCILEXER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QFont;
class QMetaObject;
class QSettings;
class QsciAbstractAPIs;
class QsciLexer;
class QsciScintilla;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QSettings QSettings;
typedef struct QsciAbstractAPIs QsciAbstractAPIs;
typedef struct QsciLexer QsciLexer;
typedef struct QsciScintilla QsciScintilla;
#endif

QMetaObject* QsciLexer_MetaObject(const QsciLexer* self);
void* QsciLexer_Metacast(QsciLexer* self, const char* param1);
struct miqt_string QsciLexer_Tr(const char* s);
struct miqt_string QsciLexer_TrUtf8(const char* s);
const char* QsciLexer_Language(const QsciLexer* self);
const char* QsciLexer_Lexer(const QsciLexer* self);
int QsciLexer_LexerId(const QsciLexer* self);
QsciAbstractAPIs* QsciLexer_Apis(const QsciLexer* self);
const char* QsciLexer_AutoCompletionFillups(const QsciLexer* self);
struct miqt_array /* of struct miqt_string */  QsciLexer_AutoCompletionWordSeparators(const QsciLexer* self);
int QsciLexer_AutoIndentStyle(QsciLexer* self);
const char* QsciLexer_BlockEnd(const QsciLexer* self);
int QsciLexer_BlockLookback(const QsciLexer* self);
const char* QsciLexer_BlockStart(const QsciLexer* self);
const char* QsciLexer_BlockStartKeyword(const QsciLexer* self);
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
void QsciLexer_SetColor(QsciLexer* self, QColor* c);
void QsciLexer_SetEolFill(QsciLexer* self, bool eoffill);
void QsciLexer_SetFont(QsciLexer* self, QFont* f);
void QsciLexer_SetPaper(QsciLexer* self, QColor* c);
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
struct miqt_string QsciLexer_Tr2(const char* s, const char* c);
struct miqt_string QsciLexer_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexer_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexer_TrUtf83(const char* s, const char* c, int n);
const char* QsciLexer_BlockEnd1(const QsciLexer* self, int* style);
const char* QsciLexer_BlockStart1(const QsciLexer* self, int* style);
const char* QsciLexer_BlockStartKeyword1(const QsciLexer* self, int* style);
bool QsciLexer_ReadSettings2(QsciLexer* self, QSettings* qs, const char* prefix);
bool QsciLexer_WriteSettings2(const QsciLexer* self, QSettings* qs, const char* prefix);
void QsciLexer_SetColor2(QsciLexer* self, QColor* c, int style);
void QsciLexer_SetEolFill2(QsciLexer* self, bool eoffill, int style);
void QsciLexer_SetFont2(QsciLexer* self, QFont* f, int style);
void QsciLexer_SetPaper2(QsciLexer* self, QColor* c, int style);
void QsciLexer_Delete(QsciLexer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
