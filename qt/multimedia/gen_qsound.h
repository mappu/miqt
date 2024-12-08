#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QSOUND_H
#define MIQT_QT_MULTIMEDIA_GEN_QSOUND_H

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
class QSound;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSound QSound;
typedef struct QTimerEvent QTimerEvent;
#endif

QSound* QSound_new(struct miqt_string filename);
QSound* QSound_new2(struct miqt_string filename, QObject* parent);
void QSound_virtbase(QSound* src, QObject** outptr_QObject);
QMetaObject* QSound_MetaObject(const QSound* self);
void* QSound_Metacast(QSound* self, const char* param1);
struct miqt_string QSound_Tr(const char* s);
struct miqt_string QSound_TrUtf8(const char* s);
void QSound_Play(struct miqt_string filename);
int QSound_Loops(const QSound* self);
int QSound_LoopsRemaining(const QSound* self);
void QSound_SetLoops(QSound* self, int loops);
struct miqt_string QSound_FileName(const QSound* self);
bool QSound_IsFinished(const QSound* self);
void QSound_Play2(QSound* self);
void QSound_Stop(QSound* self);
struct miqt_string QSound_Tr2(const char* s, const char* c);
struct miqt_string QSound_Tr3(const char* s, const char* c, int n);
struct miqt_string QSound_TrUtf82(const char* s, const char* c);
struct miqt_string QSound_TrUtf83(const char* s, const char* c, int n);
void QSound_override_virtual_Event(void* self, intptr_t slot);
bool QSound_virtualbase_Event(void* self, QEvent* event);
void QSound_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSound_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QSound_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSound_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QSound_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSound_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QSound_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSound_virtualbase_CustomEvent(void* self, QEvent* event);
void QSound_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSound_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QSound_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSound_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSound_Delete(QSound* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
