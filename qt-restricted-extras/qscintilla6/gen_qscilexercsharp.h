#ifndef GEN_QSCILEXERCSHARP_H
#define GEN_QSCILEXERCSHARP_H

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
class QsciLexerCSharp;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerCSharp QsciLexerCSharp;
#endif

QsciLexerCSharp* QsciLexerCSharp_new();
QsciLexerCSharp* QsciLexerCSharp_new2(QObject* parent);
QMetaObject* QsciLexerCSharp_MetaObject(const QsciLexerCSharp* self);
void* QsciLexerCSharp_Metacast(QsciLexerCSharp* self, const char* param1);
struct miqt_string QsciLexerCSharp_Tr(const char* s);
const char* QsciLexerCSharp_Language(const QsciLexerCSharp* self);
QColor* QsciLexerCSharp_DefaultColor(const QsciLexerCSharp* self, int style);
bool QsciLexerCSharp_DefaultEolFill(const QsciLexerCSharp* self, int style);
QFont* QsciLexerCSharp_DefaultFont(const QsciLexerCSharp* self, int style);
QColor* QsciLexerCSharp_DefaultPaper(const QsciLexerCSharp* self, int style);
const char* QsciLexerCSharp_Keywords(const QsciLexerCSharp* self, int set);
struct miqt_string QsciLexerCSharp_Description(const QsciLexerCSharp* self, int style);
struct miqt_string QsciLexerCSharp_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerCSharp_Tr3(const char* s, const char* c, int n);
void QsciLexerCSharp_Delete(QsciLexerCSharp* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
