#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTEVENTDISPATCHER_H
#define MIQT_QT6_GEN_QABSTRACTEVENTDISPATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractEventDispatcher;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfo)
typedef QAbstractEventDispatcher::TimerInfo QAbstractEventDispatcher__TimerInfo;
#else
class QAbstractEventDispatcher__TimerInfo;
#endif
class QAbstractNativeEventFilter;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSocketNotifier;
class QThread;
#else
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QAbstractEventDispatcher__TimerInfo QAbstractEventDispatcher__TimerInfo;
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSocketNotifier QSocketNotifier;
typedef struct QThread QThread;
#endif

void QAbstractEventDispatcher_virtbase(QAbstractEventDispatcher* src, QObject** outptr_QObject);
QMetaObject* QAbstractEventDispatcher_metaObject(const QAbstractEventDispatcher* self);
void* QAbstractEventDispatcher_metacast(QAbstractEventDispatcher* self, const char* param1);
struct miqt_string QAbstractEventDispatcher_tr(const char* s);
QAbstractEventDispatcher* QAbstractEventDispatcher_instance();
bool QAbstractEventDispatcher_processEvents(QAbstractEventDispatcher* self, int flags);
void QAbstractEventDispatcher_registerSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
void QAbstractEventDispatcher_unregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
int QAbstractEventDispatcher_registerTimer(QAbstractEventDispatcher* self, long long interval, int timerType, QObject* object);
void QAbstractEventDispatcher_registerTimer2(QAbstractEventDispatcher* self, int timerId, long long interval, int timerType, QObject* object);
bool QAbstractEventDispatcher_unregisterTimer(QAbstractEventDispatcher* self, int timerId);
bool QAbstractEventDispatcher_unregisterTimers(QAbstractEventDispatcher* self, QObject* object);
struct miqt_array /* of QAbstractEventDispatcher__TimerInfo* */  QAbstractEventDispatcher_registeredTimers(const QAbstractEventDispatcher* self, QObject* object);
int QAbstractEventDispatcher_remainingTime(QAbstractEventDispatcher* self, int timerId);
void QAbstractEventDispatcher_wakeUp(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_interrupt(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_startingUp(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_closingDown(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_installNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj);
void QAbstractEventDispatcher_removeNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj);
bool QAbstractEventDispatcher_filterNativeEvent(QAbstractEventDispatcher* self, struct miqt_string eventType, void* message, intptr_t* result);
void QAbstractEventDispatcher_aboutToBlock(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_connect_aboutToBlock(QAbstractEventDispatcher* self, intptr_t slot);
void QAbstractEventDispatcher_awake(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_connect_awake(QAbstractEventDispatcher* self, intptr_t slot);
struct miqt_string QAbstractEventDispatcher_tr2(const char* s, const char* c);
struct miqt_string QAbstractEventDispatcher_tr3(const char* s, const char* c, int n);
QAbstractEventDispatcher* QAbstractEventDispatcher_instance1(QThread* thread);
void QAbstractEventDispatcher_delete(QAbstractEventDispatcher* self);

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new(int id, int i, int t);
void QAbstractEventDispatcher__TimerInfo_delete(QAbstractEventDispatcher__TimerInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
