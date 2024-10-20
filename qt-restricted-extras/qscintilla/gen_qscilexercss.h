#ifndef GEN_QSCILEXERCSS_H
#define GEN_QSCILEXERCSS_H

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
class QsciLexerCSS;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerCSS QsciLexerCSS;
#endif

QsciLexerCSS* QsciLexerCSS_new();
QsciLexerCSS* QsciLexerCSS_new2(QObject* parent);
QMetaObject* QsciLexerCSS_MetaObject(const QsciLexerCSS* self);
void* QsciLexerCSS_Metacast(QsciLexerCSS* self, const char* param1);
struct miqt_string QsciLexerCSS_Tr(const char* s);
struct miqt_string QsciLexerCSS_TrUtf8(const char* s);
const char* QsciLexerCSS_Language(const QsciLexerCSS* self);
const char* QsciLexerCSS_Lexer(const QsciLexerCSS* self);
const char* QsciLexerCSS_BlockEnd(const QsciLexerCSS* self);
const char* QsciLexerCSS_BlockStart(const QsciLexerCSS* self);
const char* QsciLexerCSS_WordCharacters(const QsciLexerCSS* self);
QColor* QsciLexerCSS_DefaultColor(const QsciLexerCSS* self, int style);
QFont* QsciLexerCSS_DefaultFont(const QsciLexerCSS* self, int style);
const char* QsciLexerCSS_Keywords(const QsciLexerCSS* self, int set);
struct miqt_string QsciLexerCSS_Description(const QsciLexerCSS* self, int style);
void QsciLexerCSS_RefreshProperties(QsciLexerCSS* self);
bool QsciLexerCSS_FoldComments(const QsciLexerCSS* self);
bool QsciLexerCSS_FoldCompact(const QsciLexerCSS* self);
void QsciLexerCSS_SetHSSLanguage(QsciLexerCSS* self, bool enabled);
bool QsciLexerCSS_HSSLanguage(const QsciLexerCSS* self);
void QsciLexerCSS_SetLessLanguage(QsciLexerCSS* self, bool enabled);
bool QsciLexerCSS_LessLanguage(const QsciLexerCSS* self);
void QsciLexerCSS_SetSCSSLanguage(QsciLexerCSS* self, bool enabled);
bool QsciLexerCSS_SCSSLanguage(const QsciLexerCSS* self);
void QsciLexerCSS_SetFoldComments(QsciLexerCSS* self, bool fold);
void QsciLexerCSS_SetFoldCompact(QsciLexerCSS* self, bool fold);
struct miqt_string QsciLexerCSS_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerCSS_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciLexerCSS_TrUtf82(const char* s, const char* c);
struct miqt_string QsciLexerCSS_TrUtf83(const char* s, const char* c, int n);
const char* QsciLexerCSS_BlockEnd1(const QsciLexerCSS* self, int* style);
const char* QsciLexerCSS_BlockStart1(const QsciLexerCSS* self, int* style);
void QsciLexerCSS_Delete(QsciLexerCSS* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
