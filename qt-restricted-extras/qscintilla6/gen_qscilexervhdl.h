#ifndef GEN_QSCILEXERVHDL_H
#define GEN_QSCILEXERVHDL_H

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
class QsciLexerVHDL;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerVHDL QsciLexerVHDL;
#endif

QsciLexerVHDL* QsciLexerVHDL_new();
QsciLexerVHDL* QsciLexerVHDL_new2(QObject* parent);
QMetaObject* QsciLexerVHDL_MetaObject(const QsciLexerVHDL* self);
void* QsciLexerVHDL_Metacast(QsciLexerVHDL* self, const char* param1);
struct miqt_string QsciLexerVHDL_Tr(const char* s);
const char* QsciLexerVHDL_Language(const QsciLexerVHDL* self);
const char* QsciLexerVHDL_Lexer(const QsciLexerVHDL* self);
int QsciLexerVHDL_BraceStyle(const QsciLexerVHDL* self);
QColor* QsciLexerVHDL_DefaultColor(const QsciLexerVHDL* self, int style);
bool QsciLexerVHDL_DefaultEolFill(const QsciLexerVHDL* self, int style);
QFont* QsciLexerVHDL_DefaultFont(const QsciLexerVHDL* self, int style);
QColor* QsciLexerVHDL_DefaultPaper(const QsciLexerVHDL* self, int style);
const char* QsciLexerVHDL_Keywords(const QsciLexerVHDL* self, int set);
struct miqt_string QsciLexerVHDL_Description(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_RefreshProperties(QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldComments(const QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldCompact(const QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldAtElse(const QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldAtBegin(const QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldAtParenthesis(const QsciLexerVHDL* self);
void QsciLexerVHDL_SetFoldComments(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_SetFoldCompact(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_SetFoldAtElse(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_SetFoldAtBegin(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_SetFoldAtParenthesis(QsciLexerVHDL* self, bool fold);
struct miqt_string QsciLexerVHDL_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerVHDL_Tr3(const char* s, const char* c, int n);
void QsciLexerVHDL_Delete(QsciLexerVHDL* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
