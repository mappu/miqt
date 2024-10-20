#ifndef GEN_QSCILEXERPO_H
#define GEN_QSCILEXERPO_H

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
class QsciLexerPO;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerPO QsciLexerPO;
#endif

QsciLexerPO* QsciLexerPO_new();
QsciLexerPO* QsciLexerPO_new2(QObject* parent);
QMetaObject* QsciLexerPO_MetaObject(const QsciLexerPO* self);
void* QsciLexerPO_Metacast(QsciLexerPO* self, const char* param1);
struct miqt_string QsciLexerPO_Tr(const char* s);
struct miqt_string QsciLexerPO_TrUtf8(const char* s);
const char* QsciLexerPO_Language(const QsciLexerPO* self);
const char* QsciLexerPO_Lexer(const QsciLexerPO* self);
QColor* QsciLexerPO_DefaultColor(const QsciLexerPO* self, int style);
QFont* QsciLexerPO_DefaultFont(const QsciLexerPO* self, int style);
struct miqt_string QsciLexerPO_Description(const QsciLexerPO* self, int style);
void QsciLexerPO_RefreshProperties(QsciLexerPO* self);
bool QsciLexerPO_FoldComments(const QsciLexerPO* self);
bool QsciLexerPO_FoldCompact(const QsciLexerPO* self);
void QsciLexerPO_SetFoldComments(QsciLexerPO* self, bool fold);
void QsciLexerPO_SetFoldCompact(QsciLexerPO* self, bool fold);
struct miqt_string QsciLexerPO_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerPO_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerPO_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerPO_TrUtf83(const char* s, const char* c, int n);
void QsciLexerPO_Delete(QsciLexerPO* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
