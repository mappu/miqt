#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCIMACRO_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCIMACRO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QsciMacro;
class QsciScintilla;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QsciMacro QsciMacro;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciMacro* QsciMacro_new(QsciScintilla* parent);
QsciMacro* QsciMacro_new2(struct miqt_string asc, QsciScintilla* parent);
void QsciMacro_virtbase(QsciMacro* src, QObject** outptr_QObject);
QMetaObject* QsciMacro_MetaObject(const QsciMacro* self);
void* QsciMacro_Metacast(QsciMacro* self, const char* param1);
struct miqt_string QsciMacro_Tr(const char* s);
void QsciMacro_Clear(QsciMacro* self);
bool QsciMacro_Load(QsciMacro* self, struct miqt_string asc);
struct miqt_string QsciMacro_Save(const QsciMacro* self);
void QsciMacro_Play(QsciMacro* self);
void QsciMacro_StartRecording(QsciMacro* self);
void QsciMacro_EndRecording(QsciMacro* self);
struct miqt_string QsciMacro_Tr2(const char* s, const char* c);
struct miqt_string QsciMacro_Tr3(const char* s, const char* c, int n);
void QsciMacro_override_virtual_Play(void* self, intptr_t slot);
void QsciMacro_virtualbase_Play(void* self);
void QsciMacro_override_virtual_StartRecording(void* self, intptr_t slot);
void QsciMacro_virtualbase_StartRecording(void* self);
void QsciMacro_override_virtual_EndRecording(void* self, intptr_t slot);
void QsciMacro_virtualbase_EndRecording(void* self);
void QsciMacro_override_virtual_Event(void* self, intptr_t slot);
bool QsciMacro_virtualbase_Event(void* self, QEvent* event);
void QsciMacro_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciMacro_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QsciMacro_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciMacro_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QsciMacro_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciMacro_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QsciMacro_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciMacro_virtualbase_CustomEvent(void* self, QEvent* event);
void QsciMacro_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciMacro_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QsciMacro_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciMacro_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciMacro_Delete(QsciMacro* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
