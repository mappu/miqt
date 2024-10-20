#ifndef GEN_QSCILEXERVERILOG_H
#define GEN_QSCILEXERVERILOG_H

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
class QsciLexerVerilog;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerVerilog QsciLexerVerilog;
#endif

QsciLexerVerilog* QsciLexerVerilog_new();
QsciLexerVerilog* QsciLexerVerilog_new2(QObject* parent);
QMetaObject* QsciLexerVerilog_MetaObject(const QsciLexerVerilog* self);
void* QsciLexerVerilog_Metacast(QsciLexerVerilog* self, const char* param1);
struct miqt_string QsciLexerVerilog_Tr(const char* s);
struct miqt_string QsciLexerVerilog_TrUtf8(const char* s);
const char* QsciLexerVerilog_Language(const QsciLexerVerilog* self);
const char* QsciLexerVerilog_Lexer(const QsciLexerVerilog* self);
int QsciLexerVerilog_BraceStyle(const QsciLexerVerilog* self);
const char* QsciLexerVerilog_WordCharacters(const QsciLexerVerilog* self);
QColor* QsciLexerVerilog_DefaultColor(const QsciLexerVerilog* self, int style);
bool QsciLexerVerilog_DefaultEolFill(const QsciLexerVerilog* self, int style);
QFont* QsciLexerVerilog_DefaultFont(const QsciLexerVerilog* self, int style);
QColor* QsciLexerVerilog_DefaultPaper(const QsciLexerVerilog* self, int style);
const char* QsciLexerVerilog_Keywords(const QsciLexerVerilog* self, int set);
struct miqt_string QsciLexerVerilog_Description(const QsciLexerVerilog* self, int style);
void QsciLexerVerilog_RefreshProperties(QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldAtElse(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldAtElse(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldComments(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldComments(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldCompact(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldCompact(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldPreprocessor(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldPreprocessor(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldAtModule(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldAtModule(const QsciLexerVerilog* self);
struct miqt_string QsciLexerVerilog_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerVerilog_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerVerilog_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerVerilog_TrUtf83(const char* s, const char* c, int n);
void QsciLexerVerilog_Delete(QsciLexerVerilog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
