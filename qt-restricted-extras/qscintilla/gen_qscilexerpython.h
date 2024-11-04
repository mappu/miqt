#ifndef GEN_QSCILEXERPYTHON_H
#define GEN_QSCILEXERPYTHON_H

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
class QObject;
class QsciLexerPython;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerPython QsciLexerPython;
#endif

QsciLexerPython* QsciLexerPython_new();
QsciLexerPython* QsciLexerPython_new2(QObject* parent);
QMetaObject* QsciLexerPython_MetaObject(const QsciLexerPython* self);
void* QsciLexerPython_Metacast(QsciLexerPython* self, const char* param1);
struct miqt_string QsciLexerPython_Tr(const char* s);
struct miqt_string QsciLexerPython_TrUtf8(const char* s);
const char* QsciLexerPython_Language(const QsciLexerPython* self);
const char* QsciLexerPython_Lexer(const QsciLexerPython* self);
struct miqt_array QsciLexerPython_AutoCompletionWordSeparators(const QsciLexerPython* self);
int QsciLexerPython_BlockLookback(const QsciLexerPython* self);
const char* QsciLexerPython_BlockStart(const QsciLexerPython* self);
int QsciLexerPython_BraceStyle(const QsciLexerPython* self);
QColor* QsciLexerPython_DefaultColor(const QsciLexerPython* self, int style);
bool QsciLexerPython_DefaultEolFill(const QsciLexerPython* self, int style);
QFont* QsciLexerPython_DefaultFont(const QsciLexerPython* self, int style);
QColor* QsciLexerPython_DefaultPaper(const QsciLexerPython* self, int style);
int QsciLexerPython_IndentationGuideView(const QsciLexerPython* self);
const char* QsciLexerPython_Keywords(const QsciLexerPython* self, int set);
struct miqt_string QsciLexerPython_Description(const QsciLexerPython* self, int style);
void QsciLexerPython_RefreshProperties(QsciLexerPython* self);
bool QsciLexerPython_FoldComments(const QsciLexerPython* self);
void QsciLexerPython_SetFoldCompact(QsciLexerPython* self, bool fold);
bool QsciLexerPython_FoldCompact(const QsciLexerPython* self);
bool QsciLexerPython_FoldQuotes(const QsciLexerPython* self);
int QsciLexerPython_IndentationWarning(const QsciLexerPython* self);
void QsciLexerPython_SetHighlightSubidentifiers(QsciLexerPython* self, bool enabled);
bool QsciLexerPython_HighlightSubidentifiers(const QsciLexerPython* self);
void QsciLexerPython_SetStringsOverNewlineAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_StringsOverNewlineAllowed(const QsciLexerPython* self);
void QsciLexerPython_SetV2UnicodeAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_V2UnicodeAllowed(const QsciLexerPython* self);
void QsciLexerPython_SetV3BinaryOctalAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_V3BinaryOctalAllowed(const QsciLexerPython* self);
void QsciLexerPython_SetV3BytesAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_V3BytesAllowed(const QsciLexerPython* self);
void QsciLexerPython_SetFoldComments(QsciLexerPython* self, bool fold);
void QsciLexerPython_SetFoldQuotes(QsciLexerPython* self, bool fold);
void QsciLexerPython_SetIndentationWarning(QsciLexerPython* self, int warn);
struct miqt_string QsciLexerPython_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerPython_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerPython_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerPython_TrUtf83(const char* s, const char* c, int n);
const char* QsciLexerPython_BlockStart1(const QsciLexerPython* self, int* style);
void QsciLexerPython_Delete(QsciLexerPython* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
