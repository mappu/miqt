#ifndef GEN_QSCILEXERJAVASCRIPT_H
#define GEN_QSCILEXERJAVASCRIPT_H

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
class QsciLexerJavaScript;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerJavaScript QsciLexerJavaScript;
#endif

QsciLexerJavaScript* QsciLexerJavaScript_new();
QsciLexerJavaScript* QsciLexerJavaScript_new2(QObject* parent);
QMetaObject* QsciLexerJavaScript_MetaObject(const QsciLexerJavaScript* self);
void* QsciLexerJavaScript_Metacast(QsciLexerJavaScript* self, const char* param1);
struct miqt_string QsciLexerJavaScript_Tr(const char* s);
struct miqt_string QsciLexerJavaScript_TrUtf8(const char* s);
const char* QsciLexerJavaScript_Language(const QsciLexerJavaScript* self);
QColor* QsciLexerJavaScript_DefaultColor(const QsciLexerJavaScript* self, int style);
bool QsciLexerJavaScript_DefaultEolFill(const QsciLexerJavaScript* self, int style);
QFont* QsciLexerJavaScript_DefaultFont(const QsciLexerJavaScript* self, int style);
QColor* QsciLexerJavaScript_DefaultPaper(const QsciLexerJavaScript* self, int style);
const char* QsciLexerJavaScript_Keywords(const QsciLexerJavaScript* self, int set);
struct miqt_string QsciLexerJavaScript_Description(const QsciLexerJavaScript* self, int style);
struct miqt_string QsciLexerJavaScript_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerJavaScript_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerJavaScript_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerJavaScript_TrUtf83(const char* s, const char* c, int n);
void QsciLexerJavaScript_Delete(QsciLexerJavaScript* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
