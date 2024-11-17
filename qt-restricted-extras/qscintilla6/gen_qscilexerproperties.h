#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPROPERTIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXERPROPERTIES_H

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
class QsciLexerProperties;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerProperties QsciLexerProperties;
#endif

QsciLexerProperties* QsciLexerProperties_new();
QsciLexerProperties* QsciLexerProperties_new2(QObject* parent);
QMetaObject* QsciLexerProperties_MetaObject(const QsciLexerProperties* self);
void* QsciLexerProperties_Metacast(QsciLexerProperties* self, const char* param1);
struct miqt_string QsciLexerProperties_Tr(const char* s);
const char* QsciLexerProperties_Language(const QsciLexerProperties* self);
const char* QsciLexerProperties_Lexer(const QsciLexerProperties* self);
const char* QsciLexerProperties_WordCharacters(const QsciLexerProperties* self);
QColor* QsciLexerProperties_DefaultColor(const QsciLexerProperties* self, int style);
bool QsciLexerProperties_DefaultEolFill(const QsciLexerProperties* self, int style);
QFont* QsciLexerProperties_DefaultFont(const QsciLexerProperties* self, int style);
QColor* QsciLexerProperties_DefaultPaper(const QsciLexerProperties* self, int style);
struct miqt_string QsciLexerProperties_Description(const QsciLexerProperties* self, int style);
void QsciLexerProperties_RefreshProperties(QsciLexerProperties* self);
bool QsciLexerProperties_FoldCompact(const QsciLexerProperties* self);
void QsciLexerProperties_SetInitialSpaces(QsciLexerProperties* self, bool enable);
bool QsciLexerProperties_InitialSpaces(const QsciLexerProperties* self);
void QsciLexerProperties_SetFoldCompact(QsciLexerProperties* self, bool fold);
struct miqt_string QsciLexerProperties_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerProperties_Tr3(const char* s, const char* c, int n);
void QsciLexerProperties_Delete(QsciLexerProperties* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
