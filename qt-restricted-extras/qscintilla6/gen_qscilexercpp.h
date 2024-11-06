#ifndef GEN_QSCILEXERCPP_H
#define GEN_QSCILEXERCPP_H

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
class QsciLexerCPP;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerCPP QsciLexerCPP;
#endif

QsciLexerCPP* QsciLexerCPP_new();
QsciLexerCPP* QsciLexerCPP_new2(QObject* parent);
QsciLexerCPP* QsciLexerCPP_new3(QObject* parent, bool caseInsensitiveKeywords);
QMetaObject* QsciLexerCPP_MetaObject(const QsciLexerCPP* self);
void* QsciLexerCPP_Metacast(QsciLexerCPP* self, const char* param1);
struct miqt_string QsciLexerCPP_Tr(const char* s);
const char* QsciLexerCPP_Language(const QsciLexerCPP* self);
const char* QsciLexerCPP_Lexer(const QsciLexerCPP* self);
struct miqt_array QsciLexerCPP_AutoCompletionWordSeparators(const QsciLexerCPP* self);
const char* QsciLexerCPP_BlockEnd(const QsciLexerCPP* self);
const char* QsciLexerCPP_BlockStart(const QsciLexerCPP* self);
const char* QsciLexerCPP_BlockStartKeyword(const QsciLexerCPP* self);
int QsciLexerCPP_BraceStyle(const QsciLexerCPP* self);
const char* QsciLexerCPP_WordCharacters(const QsciLexerCPP* self);
QColor* QsciLexerCPP_DefaultColor(const QsciLexerCPP* self, int style);
bool QsciLexerCPP_DefaultEolFill(const QsciLexerCPP* self, int style);
QFont* QsciLexerCPP_DefaultFont(const QsciLexerCPP* self, int style);
QColor* QsciLexerCPP_DefaultPaper(const QsciLexerCPP* self, int style);
const char* QsciLexerCPP_Keywords(const QsciLexerCPP* self, int set);
struct miqt_string QsciLexerCPP_Description(const QsciLexerCPP* self, int style);
void QsciLexerCPP_RefreshProperties(QsciLexerCPP* self);
bool QsciLexerCPP_FoldAtElse(const QsciLexerCPP* self);
bool QsciLexerCPP_FoldComments(const QsciLexerCPP* self);
bool QsciLexerCPP_FoldCompact(const QsciLexerCPP* self);
bool QsciLexerCPP_FoldPreprocessor(const QsciLexerCPP* self);
bool QsciLexerCPP_StylePreprocessor(const QsciLexerCPP* self);
void QsciLexerCPP_SetDollarsAllowed(QsciLexerCPP* self, bool allowed);
bool QsciLexerCPP_DollarsAllowed(const QsciLexerCPP* self);
void QsciLexerCPP_SetHighlightTripleQuotedStrings(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_HighlightTripleQuotedStrings(const QsciLexerCPP* self);
void QsciLexerCPP_SetHighlightHashQuotedStrings(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_HighlightHashQuotedStrings(const QsciLexerCPP* self);
void QsciLexerCPP_SetHighlightBackQuotedStrings(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_HighlightBackQuotedStrings(const QsciLexerCPP* self);
void QsciLexerCPP_SetHighlightEscapeSequences(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_HighlightEscapeSequences(const QsciLexerCPP* self);
void QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed(QsciLexerCPP* self, bool allowed);
bool QsciLexerCPP_VerbatimStringEscapeSequencesAllowed(const QsciLexerCPP* self);
void QsciLexerCPP_SetFoldAtElse(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_SetFoldComments(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_SetFoldCompact(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_SetFoldPreprocessor(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_SetStylePreprocessor(QsciLexerCPP* self, bool style);
struct miqt_string QsciLexerCPP_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerCPP_Tr3(const char* s, const char* c, int n);
const char* QsciLexerCPP_BlockEnd1(const QsciLexerCPP* self, int* style);
const char* QsciLexerCPP_BlockStart1(const QsciLexerCPP* self, int* style);
const char* QsciLexerCPP_BlockStartKeyword1(const QsciLexerCPP* self, int* style);
void QsciLexerCPP_Delete(QsciLexerCPP* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
