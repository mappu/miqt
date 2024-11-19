#pragma once
#ifndef MIQT_QT_GEN_QEVENTLOOP_H
#define MIQT_QT_GEN_QEVENTLOOP_H

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
class QEventLoop;
class QEventLoopLocker;
class QMetaMethod;
class QMetaObject;
class QObject;
class QThread;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QEventLoop QEventLoop;
typedef struct QEventLoopLocker QEventLoopLocker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
#endif

void QEventLoop_new(QEventLoop** outptr_QEventLoop, QObject** outptr_QObject);
void QEventLoop_new2(QObject* parent, QEventLoop** outptr_QEventLoop, QObject** outptr_QObject);
QMetaObject* QEventLoop_MetaObject(const QEventLoop* self);
void* QEventLoop_Metacast(QEventLoop* self, const char* param1);
struct miqt_string QEventLoop_Tr(const char* s);
struct miqt_string QEventLoop_TrUtf8(const char* s);
bool QEventLoop_ProcessEvents(QEventLoop* self);
void QEventLoop_ProcessEvents2(QEventLoop* self, int flags, int maximumTime);
int QEventLoop_Exec(QEventLoop* self);
void QEventLoop_Exit(QEventLoop* self);
bool QEventLoop_IsRunning(const QEventLoop* self);
void QEventLoop_WakeUp(QEventLoop* self);
bool QEventLoop_Event(QEventLoop* self, QEvent* event);
void QEventLoop_Quit(QEventLoop* self);
struct miqt_string QEventLoop_Tr2(const char* s, const char* c);
struct miqt_string QEventLoop_Tr3(const char* s, const char* c, int n);
struct miqt_string QEventLoop_TrUtf82(const char* s, const char* c);
struct miqt_string QEventLoop_TrUtf83(const char* s, const char* c, int n);
bool QEventLoop_ProcessEvents1(QEventLoop* self, int flags);
int QEventLoop_Exec1(QEventLoop* self, int flags);
void QEventLoop_Exit1(QEventLoop* self, int returnCode);
void QEventLoop_override_virtual_Event(void* self, intptr_t slot);
bool QEventLoop_virtualbase_Event(void* self, QEvent* event);
void QEventLoop_override_virtual_EventFilter(void* self, intptr_t slot);
bool QEventLoop_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QEventLoop_override_virtual_TimerEvent(void* self, intptr_t slot);
void QEventLoop_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QEventLoop_override_virtual_ChildEvent(void* self, intptr_t slot);
void QEventLoop_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QEventLoop_override_virtual_CustomEvent(void* self, intptr_t slot);
void QEventLoop_virtualbase_CustomEvent(void* self, QEvent* event);
void QEventLoop_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QEventLoop_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QEventLoop_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QEventLoop_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QEventLoop_Delete(QEventLoop* self, bool isSubclass);

void QEventLoopLocker_new(QEventLoopLocker** outptr_QEventLoopLocker);
void QEventLoopLocker_new2(QEventLoop* loop, QEventLoopLocker** outptr_QEventLoopLocker);
void QEventLoopLocker_new3(QThread* thread, QEventLoopLocker** outptr_QEventLoopLocker);
void QEventLoopLocker_Delete(QEventLoopLocker* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
