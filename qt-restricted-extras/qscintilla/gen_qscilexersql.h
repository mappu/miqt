#ifndef GEN_QSCILEXERSQL_H
#define GEN_QSCILEXERSQL_H

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
class QsciLexerSQL;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerSQL QsciLexerSQL;
#endif

QsciLexerSQL* QsciLexerSQL_new();
QsciLexerSQL* QsciLexerSQL_new2(QObject* parent);
QMetaObject* QsciLexerSQL_MetaObject(const QsciLexerSQL* self);
void* QsciLexerSQL_Metacast(QsciLexerSQL* self, const char* param1);
struct miqt_string QsciLexerSQL_Tr(const char* s);
struct miqt_string QsciLexerSQL_TrUtf8(const char* s);
const char* QsciLexerSQL_Language(const QsciLexerSQL* self);
const char* QsciLexerSQL_Lexer(const QsciLexerSQL* self);
int QsciLexerSQL_BraceStyle(const QsciLexerSQL* self);
QColor* QsciLexerSQL_DefaultColor(const QsciLexerSQL* self, int style);
bool QsciLexerSQL_DefaultEolFill(const QsciLexerSQL* self, int style);
QFont* QsciLexerSQL_DefaultFont(const QsciLexerSQL* self, int style);
QColor* QsciLexerSQL_DefaultPaper(const QsciLexerSQL* self, int style);
const char* QsciLexerSQL_Keywords(const QsciLexerSQL* self, int set);
struct miqt_string QsciLexerSQL_Description(const QsciLexerSQL* self, int style);
void QsciLexerSQL_RefreshProperties(QsciLexerSQL* self);
bool QsciLexerSQL_BackslashEscapes(const QsciLexerSQL* self);
void QsciLexerSQL_SetDottedWords(QsciLexerSQL* self, bool enable);
bool QsciLexerSQL_DottedWords(const QsciLexerSQL* self);
void QsciLexerSQL_SetFoldAtElse(QsciLexerSQL* self, bool fold);
bool QsciLexerSQL_FoldAtElse(const QsciLexerSQL* self);
bool QsciLexerSQL_FoldComments(const QsciLexerSQL* self);
bool QsciLexerSQL_FoldCompact(const QsciLexerSQL* self);
void QsciLexerSQL_SetFoldOnlyBegin(QsciLexerSQL* self, bool fold);
bool QsciLexerSQL_FoldOnlyBegin(const QsciLexerSQL* self);
void QsciLexerSQL_SetHashComments(QsciLexerSQL* self, bool enable);
bool QsciLexerSQL_HashComments(const QsciLexerSQL* self);
void QsciLexerSQL_SetQuotedIdentifiers(QsciLexerSQL* self, bool enable);
bool QsciLexerSQL_QuotedIdentifiers(const QsciLexerSQL* self);
void QsciLexerSQL_SetBackslashEscapes(QsciLexerSQL* self, bool enable);
void QsciLexerSQL_SetFoldComments(QsciLexerSQL* self, bool fold);
void QsciLexerSQL_SetFoldCompact(QsciLexerSQL* self, bool fold);
struct miqt_string QsciLexerSQL_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerSQL_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerSQL_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerSQL_TrUtf83(const char* s, const char* c, int n);
void QsciLexerSQL_Delete(QsciLexerSQL* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
