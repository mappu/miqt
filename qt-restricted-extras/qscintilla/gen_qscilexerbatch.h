#ifndef GEN_QSCILEXERBATCH_H
#define GEN_QSCILEXERBATCH_H

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
class QsciLexerBatch;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerBatch QsciLexerBatch;
#endif

QsciLexerBatch* QsciLexerBatch_new();
QsciLexerBatch* QsciLexerBatch_new2(QObject* parent);
QMetaObject* QsciLexerBatch_MetaObject(const QsciLexerBatch* self);
void* QsciLexerBatch_Metacast(QsciLexerBatch* self, const char* param1);
struct miqt_string QsciLexerBatch_Tr(const char* s);
struct miqt_string QsciLexerBatch_TrUtf8(const char* s);
const char* QsciLexerBatch_Language(const QsciLexerBatch* self);
const char* QsciLexerBatch_Lexer(const QsciLexerBatch* self);
const char* QsciLexerBatch_WordCharacters(const QsciLexerBatch* self);
bool QsciLexerBatch_CaseSensitive(const QsciLexerBatch* self);
QColor* QsciLexerBatch_DefaultColor(const QsciLexerBatch* self, int style);
bool QsciLexerBatch_DefaultEolFill(const QsciLexerBatch* self, int style);
QFont* QsciLexerBatch_DefaultFont(const QsciLexerBatch* self, int style);
QColor* QsciLexerBatch_DefaultPaper(const QsciLexerBatch* self, int style);
const char* QsciLexerBatch_Keywords(const QsciLexerBatch* self, int set);
struct miqt_string QsciLexerBatch_Description(const QsciLexerBatch* self, int style);
struct miqt_string QsciLexerBatch_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerBatch_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerBatch_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerBatch_TrUtf83(const char* s, const char* c, int n);
void QsciLexerBatch_Delete(QsciLexerBatch* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
