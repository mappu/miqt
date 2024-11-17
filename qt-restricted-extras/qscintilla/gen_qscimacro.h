#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCIMACRO_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCIMACRO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QsciMacro;
class QsciScintilla;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QsciMacro QsciMacro;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciMacro* QsciMacro_new(QsciScintilla* parent);
QsciMacro* QsciMacro_new2(struct miqt_string asc, QsciScintilla* parent);
QMetaObject* QsciMacro_MetaObject(const QsciMacro* self);
void* QsciMacro_Metacast(QsciMacro* self, const char* param1);
struct miqt_string QsciMacro_Tr(const char* s);
struct miqt_string QsciMacro_TrUtf8(const char* s);
void QsciMacro_Clear(QsciMacro* self);
bool QsciMacro_Load(QsciMacro* self, struct miqt_string asc);
struct miqt_string QsciMacro_Save(const QsciMacro* self);
void QsciMacro_Play(QsciMacro* self);
void QsciMacro_StartRecording(QsciMacro* self);
void QsciMacro_EndRecording(QsciMacro* self);
struct miqt_string QsciMacro_Tr2(const char* s, const char* c);
struct miqt_string QsciMacro_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciMacro_TrUtf82(const char* s, const char* c);
struct miqt_string QsciMacro_TrUtf83(const char* s, const char* c, int n);
void QsciMacro_Delete(QsciMacro* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
