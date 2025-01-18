#pragma once
#ifndef MIQT_QT6_GEN_QTHREADPOOL_H
#define MIQT_QT6_GEN_QTHREADPOOL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRunnable;
class QThread;
class QThreadPool;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRunnable QRunnable;
typedef struct QThread QThread;
typedef struct QThreadPool QThreadPool;
typedef struct QTimerEvent QTimerEvent;
#endif

QThreadPool* QThreadPool_new();
QThreadPool* QThreadPool_new2(QObject* parent);
void QThreadPool_virtbase(QThreadPool* src, QObject** outptr_QObject);
QMetaObject* QThreadPool_MetaObject(const QThreadPool* self);
void* QThreadPool_Metacast(QThreadPool* self, const char* param1);
struct miqt_string QThreadPool_Tr(const char* s);
QThreadPool* QThreadPool_GlobalInstance();
void QThreadPool_Start(QThreadPool* self, QRunnable* runnable);
bool QThreadPool_TryStart(QThreadPool* self, QRunnable* runnable);
void QThreadPool_StartOnReservedThread(QThreadPool* self, QRunnable* runnable);
int QThreadPool_ExpiryTimeout(const QThreadPool* self);
void QThreadPool_SetExpiryTimeout(QThreadPool* self, int expiryTimeout);
int QThreadPool_MaxThreadCount(const QThreadPool* self);
void QThreadPool_SetMaxThreadCount(QThreadPool* self, int maxThreadCount);
int QThreadPool_ActiveThreadCount(const QThreadPool* self);
void QThreadPool_SetStackSize(QThreadPool* self, unsigned int stackSize);
unsigned int QThreadPool_StackSize(const QThreadPool* self);
void QThreadPool_SetThreadPriority(QThreadPool* self, int priority);
int QThreadPool_ThreadPriority(const QThreadPool* self);
void QThreadPool_ReserveThread(QThreadPool* self);
void QThreadPool_ReleaseThread(QThreadPool* self);
bool QThreadPool_WaitForDone(QThreadPool* self);
void QThreadPool_Clear(QThreadPool* self);
bool QThreadPool_Contains(const QThreadPool* self, QThread* thread);
bool QThreadPool_TryTake(QThreadPool* self, QRunnable* runnable);
struct miqt_string QThreadPool_Tr2(const char* s, const char* c);
struct miqt_string QThreadPool_Tr3(const char* s, const char* c, int n);
void QThreadPool_Start2(QThreadPool* self, QRunnable* runnable, int priority);
bool QThreadPool_WaitForDone1(QThreadPool* self, int msecs);
void QThreadPool_override_virtual_Event(void* self, intptr_t slot);
bool QThreadPool_virtualbase_Event(void* self, QEvent* event);
void QThreadPool_override_virtual_EventFilter(void* self, intptr_t slot);
bool QThreadPool_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QThreadPool_override_virtual_TimerEvent(void* self, intptr_t slot);
void QThreadPool_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QThreadPool_override_virtual_ChildEvent(void* self, intptr_t slot);
void QThreadPool_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QThreadPool_override_virtual_CustomEvent(void* self, intptr_t slot);
void QThreadPool_virtualbase_CustomEvent(void* self, QEvent* event);
void QThreadPool_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QThreadPool_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QThreadPool_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QThreadPool_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QThreadPool_Delete(QThreadPool* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
