#ifndef GEN_QSCILEXERHTML_H
#define GEN_QSCILEXERHTML_H

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
class QsciLexerHTML;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerHTML QsciLexerHTML;
#endif

QsciLexerHTML* QsciLexerHTML_new();
QsciLexerHTML* QsciLexerHTML_new2(QObject* parent);
QMetaObject* QsciLexerHTML_MetaObject(const QsciLexerHTML* self);
void* QsciLexerHTML_Metacast(QsciLexerHTML* self, const char* param1);
struct miqt_string QsciLexerHTML_Tr(const char* s);
struct miqt_string QsciLexerHTML_TrUtf8(const char* s);
const char* QsciLexerHTML_Language(const QsciLexerHTML* self);
const char* QsciLexerHTML_Lexer(const QsciLexerHTML* self);
const char* QsciLexerHTML_AutoCompletionFillups(const QsciLexerHTML* self);
const char* QsciLexerHTML_WordCharacters(const QsciLexerHTML* self);
QColor* QsciLexerHTML_DefaultColor(const QsciLexerHTML* self, int style);
bool QsciLexerHTML_DefaultEolFill(const QsciLexerHTML* self, int style);
QFont* QsciLexerHTML_DefaultFont(const QsciLexerHTML* self, int style);
QColor* QsciLexerHTML_DefaultPaper(const QsciLexerHTML* self, int style);
const char* QsciLexerHTML_Keywords(const QsciLexerHTML* self, int set);
struct miqt_string QsciLexerHTML_Description(const QsciLexerHTML* self, int style);
void QsciLexerHTML_RefreshProperties(QsciLexerHTML* self);
bool QsciLexerHTML_CaseSensitiveTags(const QsciLexerHTML* self);
void QsciLexerHTML_SetDjangoTemplates(QsciLexerHTML* self, bool enabled);
bool QsciLexerHTML_DjangoTemplates(const QsciLexerHTML* self);
bool QsciLexerHTML_FoldCompact(const QsciLexerHTML* self);
bool QsciLexerHTML_FoldPreprocessor(const QsciLexerHTML* self);
void QsciLexerHTML_SetFoldScriptComments(QsciLexerHTML* self, bool fold);
bool QsciLexerHTML_FoldScriptComments(const QsciLexerHTML* self);
void QsciLexerHTML_SetFoldScriptHeredocs(QsciLexerHTML* self, bool fold);
bool QsciLexerHTML_FoldScriptHeredocs(const QsciLexerHTML* self);
void QsciLexerHTML_SetMakoTemplates(QsciLexerHTML* self, bool enabled);
bool QsciLexerHTML_MakoTemplates(const QsciLexerHTML* self);
void QsciLexerHTML_SetFoldCompact(QsciLexerHTML* self, bool fold);
void QsciLexerHTML_SetFoldPreprocessor(QsciLexerHTML* self, bool fold);
void QsciLexerHTML_SetCaseSensitiveTags(QsciLexerHTML* self, bool sens);
struct miqt_string QsciLexerHTML_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerHTML_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerHTML_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerHTML_TrUtf83(const char* s, const char* c, int n);
void QsciLexerHTML_Delete(QsciLexerHTML* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
