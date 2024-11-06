#ifndef GEN_QSCILEXERTCL_H
#define GEN_QSCILEXERTCL_H

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
class QsciLexerTCL;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerTCL QsciLexerTCL;
#endif

QsciLexerTCL* QsciLexerTCL_new();
QsciLexerTCL* QsciLexerTCL_new2(QObject* parent);
QMetaObject* QsciLexerTCL_MetaObject(const QsciLexerTCL* self);
void* QsciLexerTCL_Metacast(QsciLexerTCL* self, const char* param1);
struct miqt_string QsciLexerTCL_Tr(const char* s);
const char* QsciLexerTCL_Language(const QsciLexerTCL* self);
const char* QsciLexerTCL_Lexer(const QsciLexerTCL* self);
int QsciLexerTCL_BraceStyle(const QsciLexerTCL* self);
QColor* QsciLexerTCL_DefaultColor(const QsciLexerTCL* self, int style);
bool QsciLexerTCL_DefaultEolFill(const QsciLexerTCL* self, int style);
QFont* QsciLexerTCL_DefaultFont(const QsciLexerTCL* self, int style);
QColor* QsciLexerTCL_DefaultPaper(const QsciLexerTCL* self, int style);
const char* QsciLexerTCL_Keywords(const QsciLexerTCL* self, int set);
struct miqt_string QsciLexerTCL_Description(const QsciLexerTCL* self, int style);
void QsciLexerTCL_RefreshProperties(QsciLexerTCL* self);
void QsciLexerTCL_SetFoldComments(QsciLexerTCL* self, bool fold);
bool QsciLexerTCL_FoldComments(const QsciLexerTCL* self);
struct miqt_string QsciLexerTCL_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerTCL_Tr3(const char* s, const char* c, int n);
void QsciLexerTCL_Delete(QsciLexerTCL* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
