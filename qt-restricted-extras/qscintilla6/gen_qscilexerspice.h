#ifndef GEN_QSCILEXERSPICE_H
#define GEN_QSCILEXERSPICE_H

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
class QsciLexerSpice;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerSpice QsciLexerSpice;
#endif

QsciLexerSpice* QsciLexerSpice_new();
QsciLexerSpice* QsciLexerSpice_new2(QObject* parent);
QMetaObject* QsciLexerSpice_MetaObject(const QsciLexerSpice* self);
void* QsciLexerSpice_Metacast(QsciLexerSpice* self, const char* param1);
struct miqt_string QsciLexerSpice_Tr(const char* s);
const char* QsciLexerSpice_Language(const QsciLexerSpice* self);
const char* QsciLexerSpice_Lexer(const QsciLexerSpice* self);
int QsciLexerSpice_BraceStyle(const QsciLexerSpice* self);
const char* QsciLexerSpice_Keywords(const QsciLexerSpice* self, int set);
QColor* QsciLexerSpice_DefaultColor(const QsciLexerSpice* self, int style);
QFont* QsciLexerSpice_DefaultFont(const QsciLexerSpice* self, int style);
struct miqt_string QsciLexerSpice_Description(const QsciLexerSpice* self, int style);
struct miqt_string QsciLexerSpice_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerSpice_Tr3(const char* s, const char* c, int n);
void QsciLexerSpice_Delete(QsciLexerSpice* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
