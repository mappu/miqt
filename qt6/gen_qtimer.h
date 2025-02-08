#pragma once
#ifndef MIQT_QT6_GEN_QTIMER_H
#define MIQT_QT6_GEN_QTIMER_H

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
class QTimer;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimer QTimer;
typedef struct QTimerEvent QTimerEvent;
#endif

QTimer* QTimer_new();
QTimer* QTimer_new2(QObject* parent);
void QTimer_virtbase(QTimer* src, QObject** outptr_QObject);
QMetaObject* QTimer_metaObject(const QTimer* self);
void* QTimer_metacast(QTimer* self, const char* param1);
struct miqt_string QTimer_tr(const char* s);
bool QTimer_isActive(const QTimer* self);
int QTimer_timerId(const QTimer* self);
void QTimer_setInterval(QTimer* self, int msec);
int QTimer_interval(const QTimer* self);
int QTimer_remainingTime(const QTimer* self);
void QTimer_setTimerType(QTimer* self, int atype);
int QTimer_timerType(const QTimer* self);
void QTimer_setSingleShot(QTimer* self, bool singleShot);
bool QTimer_isSingleShot(const QTimer* self);
void QTimer_start(QTimer* self, int msec);
void QTimer_start2(QTimer* self);
void QTimer_stop(QTimer* self);
void QTimer_timerEvent(QTimer* self, QTimerEvent* param1);
struct miqt_string QTimer_tr2(const char* s, const char* c);
struct miqt_string QTimer_tr3(const char* s, const char* c, int n);
bool QTimer_override_virtual_timerEvent(void* self, intptr_t slot);
void QTimer_virtualbase_timerEvent(void* self, QTimerEvent* param1);
bool QTimer_override_virtual_event(void* self, intptr_t slot);
bool QTimer_virtualbase_event(void* self, QEvent* event);
bool QTimer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QTimer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QTimer_override_virtual_childEvent(void* self, intptr_t slot);
void QTimer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QTimer_override_virtual_customEvent(void* self, intptr_t slot);
void QTimer_virtualbase_customEvent(void* self, QEvent* event);
bool QTimer_override_virtual_connectNotify(void* self, intptr_t slot);
void QTimer_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QTimer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QTimer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QTimer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QTimer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QTimer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QTimer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QTimer_delete(QTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
