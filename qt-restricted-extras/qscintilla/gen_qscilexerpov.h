#ifndef GEN_QSCILEXERPOV_H
#define GEN_QSCILEXERPOV_H

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
class QsciLexerPOV;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerPOV QsciLexerPOV;
#endif

QsciLexerPOV* QsciLexerPOV_new();
QsciLexerPOV* QsciLexerPOV_new2(QObject* parent);
QMetaObject* QsciLexerPOV_MetaObject(const QsciLexerPOV* self);
void* QsciLexerPOV_Metacast(QsciLexerPOV* self, const char* param1);
struct miqt_string QsciLexerPOV_Tr(const char* s);
struct miqt_string QsciLexerPOV_TrUtf8(const char* s);
const char* QsciLexerPOV_Language(const QsciLexerPOV* self);
const char* QsciLexerPOV_Lexer(const QsciLexerPOV* self);
int QsciLexerPOV_BraceStyle(const QsciLexerPOV* self);
const char* QsciLexerPOV_WordCharacters(const QsciLexerPOV* self);
QColor* QsciLexerPOV_DefaultColor(const QsciLexerPOV* self, int style);
bool QsciLexerPOV_DefaultEolFill(const QsciLexerPOV* self, int style);
QFont* QsciLexerPOV_DefaultFont(const QsciLexerPOV* self, int style);
QColor* QsciLexerPOV_DefaultPaper(const QsciLexerPOV* self, int style);
const char* QsciLexerPOV_Keywords(const QsciLexerPOV* self, int set);
struct miqt_string QsciLexerPOV_Description(const QsciLexerPOV* self, int style);
void QsciLexerPOV_RefreshProperties(QsciLexerPOV* self);
bool QsciLexerPOV_FoldComments(const QsciLexerPOV* self);
bool QsciLexerPOV_FoldCompact(const QsciLexerPOV* self);
bool QsciLexerPOV_FoldDirectives(const QsciLexerPOV* self);
void QsciLexerPOV_SetFoldComments(QsciLexerPOV* self, bool fold);
void QsciLexerPOV_SetFoldCompact(QsciLexerPOV* self, bool fold);
void QsciLexerPOV_SetFoldDirectives(QsciLexerPOV* self, bool fold);
struct miqt_string QsciLexerPOV_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerPOV_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerPOV_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerPOV_TrUtf83(const char* s, const char* c, int n);
void QsciLexerPOV_Delete(QsciLexerPOV* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
