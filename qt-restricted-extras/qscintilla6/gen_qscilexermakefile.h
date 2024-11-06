#ifndef GEN_QSCILEXERMAKEFILE_H
#define GEN_QSCILEXERMAKEFILE_H

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
class QsciLexerMakefile;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerMakefile QsciLexerMakefile;
#endif

QsciLexerMakefile* QsciLexerMakefile_new();
QsciLexerMakefile* QsciLexerMakefile_new2(QObject* parent);
QMetaObject* QsciLexerMakefile_MetaObject(const QsciLexerMakefile* self);
void* QsciLexerMakefile_Metacast(QsciLexerMakefile* self, const char* param1);
struct miqt_string QsciLexerMakefile_Tr(const char* s);
const char* QsciLexerMakefile_Language(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_Lexer(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_WordCharacters(const QsciLexerMakefile* self);
QColor* QsciLexerMakefile_DefaultColor(const QsciLexerMakefile* self, int style);
bool QsciLexerMakefile_DefaultEolFill(const QsciLexerMakefile* self, int style);
QFont* QsciLexerMakefile_DefaultFont(const QsciLexerMakefile* self, int style);
QColor* QsciLexerMakefile_DefaultPaper(const QsciLexerMakefile* self, int style);
struct miqt_string QsciLexerMakefile_Description(const QsciLexerMakefile* self, int style);
struct miqt_string QsciLexerMakefile_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerMakefile_Tr3(const char* s, const char* c, int n);
void QsciLexerMakefile_Delete(QsciLexerMakefile* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
