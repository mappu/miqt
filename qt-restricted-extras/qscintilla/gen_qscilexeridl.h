#ifndef GEN_QSCILEXERIDL_H
#define GEN_QSCILEXERIDL_H

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
class QMetaObject;
class QObject;
class QsciLexerIDL;
#else
typedef struct QColor QColor;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerIDL QsciLexerIDL;
#endif

QsciLexerIDL* QsciLexerIDL_new();
QsciLexerIDL* QsciLexerIDL_new2(QObject* parent);
QMetaObject* QsciLexerIDL_MetaObject(const QsciLexerIDL* self);
void* QsciLexerIDL_Metacast(QsciLexerIDL* self, const char* param1);
struct miqt_string QsciLexerIDL_Tr(const char* s);
struct miqt_string QsciLexerIDL_TrUtf8(const char* s);
const char* QsciLexerIDL_Language(const QsciLexerIDL* self);
QColor* QsciLexerIDL_DefaultColor(const QsciLexerIDL* self, int style);
const char* QsciLexerIDL_Keywords(const QsciLexerIDL* self, int set);
struct miqt_string QsciLexerIDL_Description(const QsciLexerIDL* self, int style);
struct miqt_string QsciLexerIDL_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerIDL_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerIDL_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerIDL_TrUtf83(const char* s, const char* c, int n);
void QsciLexerIDL_Delete(QsciLexerIDL* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
