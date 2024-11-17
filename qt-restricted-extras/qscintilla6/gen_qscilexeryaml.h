#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERYAML_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERYAML_H

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
class QsciLexerYAML;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerYAML QsciLexerYAML;
#endif

QsciLexerYAML* QsciLexerYAML_new();
QsciLexerYAML* QsciLexerYAML_new2(QObject* parent);
QMetaObject* QsciLexerYAML_MetaObject(const QsciLexerYAML* self);
void* QsciLexerYAML_Metacast(QsciLexerYAML* self, const char* param1);
struct miqt_string QsciLexerYAML_Tr(const char* s);
const char* QsciLexerYAML_Language(const QsciLexerYAML* self);
const char* QsciLexerYAML_Lexer(const QsciLexerYAML* self);
QColor* QsciLexerYAML_DefaultColor(const QsciLexerYAML* self, int style);
bool QsciLexerYAML_DefaultEolFill(const QsciLexerYAML* self, int style);
QFont* QsciLexerYAML_DefaultFont(const QsciLexerYAML* self, int style);
QColor* QsciLexerYAML_DefaultPaper(const QsciLexerYAML* self, int style);
const char* QsciLexerYAML_Keywords(const QsciLexerYAML* self, int set);
struct miqt_string QsciLexerYAML_Description(const QsciLexerYAML* self, int style);
void QsciLexerYAML_RefreshProperties(QsciLexerYAML* self);
bool QsciLexerYAML_FoldComments(const QsciLexerYAML* self);
void QsciLexerYAML_SetFoldComments(QsciLexerYAML* self, bool fold);
struct miqt_string QsciLexerYAML_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerYAML_Tr3(const char* s, const char* c, int n);
void QsciLexerYAML_Delete(QsciLexerYAML* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
