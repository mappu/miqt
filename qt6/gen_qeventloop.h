#pragma once
#ifndef MIQT_QT6_GEN_QEVENTLOOP_H
#define MIQT_QT6_GEN_QEVENTLOOP_H

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

QEventLoop* QEventLoop_new();
QEventLoop* QEventLoop_new2(QObject* parent);
void QEventLoop_virtbase(QEventLoop* src, QObject** outptr_QObject);
QMetaObject* QEventLoop_metaObject(const QEventLoop* self);
void* QEventLoop_metacast(QEventLoop* self, const char* param1);
struct miqt_string QEventLoop_tr(const char* s);
bool QEventLoop_processEvents(QEventLoop* self);
void QEventLoop_processEvents2(QEventLoop* self, int flags, int maximumTime);
int QEventLoop_exec(QEventLoop* self);
bool QEventLoop_isRunning(const QEventLoop* self);
void QEventLoop_wakeUp(QEventLoop* self);
bool QEventLoop_event(QEventLoop* self, QEvent* event);
void QEventLoop_exit(QEventLoop* self);
void QEventLoop_quit(QEventLoop* self);
struct miqt_string QEventLoop_tr2(const char* s, const char* c);
struct miqt_string QEventLoop_tr3(const char* s, const char* c, int n);
bool QEventLoop_processEventsWithFlags(QEventLoop* self, int flags);
int QEventLoop_execWithFlags(QEventLoop* self, int flags);
void QEventLoop_exitWithReturnCode(QEventLoop* self, int returnCode);

bool QEventLoop_override_virtual_event(void* self, intptr_t slot);
bool QEventLoop_virtualbase_event(void* self, QEvent* event);
bool QEventLoop_override_virtual_eventFilter(void* self, intptr_t slot);
bool QEventLoop_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QEventLoop_override_virtual_timerEvent(void* self, intptr_t slot);
void QEventLoop_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QEventLoop_override_virtual_childEvent(void* self, intptr_t slot);
void QEventLoop_virtualbase_childEvent(void* self, QChildEvent* event);
bool QEventLoop_override_virtual_customEvent(void* self, intptr_t slot);
void QEventLoop_virtualbase_customEvent(void* self, QEvent* event);
bool QEventLoop_override_virtual_connectNotify(void* self, intptr_t slot);
void QEventLoop_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QEventLoop_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QEventLoop_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QEventLoop_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QEventLoop_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QEventLoop_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QEventLoop_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QEventLoop_delete(QEventLoop* self);

QEventLoopLocker* QEventLoopLocker_new();
QEventLoopLocker* QEventLoopLocker_new2(QEventLoop* loop);
QEventLoopLocker* QEventLoopLocker_new3(QThread* thread);
void QEventLoopLocker_delete(QEventLoopLocker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
