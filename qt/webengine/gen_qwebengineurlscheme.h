#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEURLSCHEME_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEURLSCHEME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QWebEngineUrlScheme;
#else
typedef struct QWebEngineUrlScheme QWebEngineUrlScheme;
#endif

void QWebEngineUrlScheme_new(QWebEngineUrlScheme** outptr_QWebEngineUrlScheme);
void QWebEngineUrlScheme_new2(struct miqt_string name, QWebEngineUrlScheme** outptr_QWebEngineUrlScheme);
void QWebEngineUrlScheme_new3(QWebEngineUrlScheme* that, QWebEngineUrlScheme** outptr_QWebEngineUrlScheme);
void QWebEngineUrlScheme_OperatorAssign(QWebEngineUrlScheme* self, QWebEngineUrlScheme* that);
bool QWebEngineUrlScheme_OperatorEqual(const QWebEngineUrlScheme* self, QWebEngineUrlScheme* that);
bool QWebEngineUrlScheme_OperatorNotEqual(const QWebEngineUrlScheme* self, QWebEngineUrlScheme* that);
struct miqt_string QWebEngineUrlScheme_Name(const QWebEngineUrlScheme* self);
void QWebEngineUrlScheme_SetName(QWebEngineUrlScheme* self, struct miqt_string newValue);
int QWebEngineUrlScheme_Syntax(const QWebEngineUrlScheme* self);
void QWebEngineUrlScheme_SetSyntax(QWebEngineUrlScheme* self, int newValue);
int QWebEngineUrlScheme_DefaultPort(const QWebEngineUrlScheme* self);
void QWebEngineUrlScheme_SetDefaultPort(QWebEngineUrlScheme* self, int newValue);
int QWebEngineUrlScheme_Flags(const QWebEngineUrlScheme* self);
void QWebEngineUrlScheme_SetFlags(QWebEngineUrlScheme* self, int newValue);
void QWebEngineUrlScheme_RegisterScheme(QWebEngineUrlScheme* scheme);
QWebEngineUrlScheme* QWebEngineUrlScheme_SchemeByName(struct miqt_string name);
void QWebEngineUrlScheme_Delete(QWebEngineUrlScheme* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
