#pragma once
#ifndef MIQT_QT_GEN_QABSTRACTEVENTDISPATCHER_H
#define MIQT_QT_GEN_QABSTRACTEVENTDISPATCHER_H

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
class QByteArray;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSocketNotifier;
class QThread;
class QTimerEvent;
#else
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QAbstractEventDispatcher__TimerInfo QAbstractEventDispatcher__TimerInfo;
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct QByteArray QByteArray;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSocketNotifier QSocketNotifier;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
#endif

void QAbstractEventDispatcher_new(QAbstractEventDispatcher** outptr_QAbstractEventDispatcher, QObject** outptr_QObject);
void QAbstractEventDispatcher_new2(QObject* parent, QAbstractEventDispatcher** outptr_QAbstractEventDispatcher, QObject** outptr_QObject);
QMetaObject* QAbstractEventDispatcher_MetaObject(const QAbstractEventDispatcher* self);
void* QAbstractEventDispatcher_Metacast(QAbstractEventDispatcher* self, const char* param1);
struct miqt_string QAbstractEventDispatcher_Tr(const char* s);
struct miqt_string QAbstractEventDispatcher_TrUtf8(const char* s);
QAbstractEventDispatcher* QAbstractEventDispatcher_Instance();
bool QAbstractEventDispatcher_ProcessEvents(QAbstractEventDispatcher* self, int flags);
bool QAbstractEventDispatcher_HasPendingEvents(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_RegisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
void QAbstractEventDispatcher_UnregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
int QAbstractEventDispatcher_RegisterTimer(QAbstractEventDispatcher* self, int interval, int timerType, QObject* object);
void QAbstractEventDispatcher_RegisterTimer2(QAbstractEventDispatcher* self, int timerId, int interval, int timerType, QObject* object);
bool QAbstractEventDispatcher_UnregisterTimer(QAbstractEventDispatcher* self, int timerId);
bool QAbstractEventDispatcher_UnregisterTimers(QAbstractEventDispatcher* self, QObject* object);
struct miqt_array /* of QAbstractEventDispatcher__TimerInfo* */  QAbstractEventDispatcher_RegisteredTimers(const QAbstractEventDispatcher* self, QObject* object);
int QAbstractEventDispatcher_RemainingTime(QAbstractEventDispatcher* self, int timerId);
void QAbstractEventDispatcher_WakeUp(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_Interrupt(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_Flush(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_StartingUp(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_ClosingDown(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_InstallNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj);
void QAbstractEventDispatcher_RemoveNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj);
bool QAbstractEventDispatcher_FilterNativeEvent(QAbstractEventDispatcher* self, struct miqt_string eventType, void* message, long* result);
void QAbstractEventDispatcher_AboutToBlock(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_connect_AboutToBlock(QAbstractEventDispatcher* self, intptr_t slot);
void QAbstractEventDispatcher_Awake(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_connect_Awake(QAbstractEventDispatcher* self, intptr_t slot);
struct miqt_string QAbstractEventDispatcher_Tr2(const char* s, const char* c);
struct miqt_string QAbstractEventDispatcher_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractEventDispatcher_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractEventDispatcher_TrUtf83(const char* s, const char* c, int n);
QAbstractEventDispatcher* QAbstractEventDispatcher_Instance1(QThread* thread);
void QAbstractEventDispatcher_override_virtual_ProcessEvents(void* self, intptr_t slot);
bool QAbstractEventDispatcher_virtualbase_ProcessEvents(void* self, int flags);
void QAbstractEventDispatcher_override_virtual_HasPendingEvents(void* self, intptr_t slot);
bool QAbstractEventDispatcher_virtualbase_HasPendingEvents(void* self);
void QAbstractEventDispatcher_override_virtual_RegisterSocketNotifier(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_RegisterSocketNotifier(void* self, QSocketNotifier* notifier);
void QAbstractEventDispatcher_override_virtual_UnregisterSocketNotifier(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_UnregisterSocketNotifier(void* self, QSocketNotifier* notifier);
void QAbstractEventDispatcher_override_virtual_RegisterTimer2(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_RegisterTimer2(void* self, int timerId, int interval, int timerType, QObject* object);
void QAbstractEventDispatcher_override_virtual_UnregisterTimer(void* self, intptr_t slot);
bool QAbstractEventDispatcher_virtualbase_UnregisterTimer(void* self, int timerId);
void QAbstractEventDispatcher_override_virtual_UnregisterTimers(void* self, intptr_t slot);
bool QAbstractEventDispatcher_virtualbase_UnregisterTimers(void* self, QObject* object);
void QAbstractEventDispatcher_override_virtual_RegisteredTimers(void* self, intptr_t slot);
struct miqt_array /* of QAbstractEventDispatcher__TimerInfo* */  QAbstractEventDispatcher_virtualbase_RegisteredTimers(const void* self, QObject* object);
void QAbstractEventDispatcher_override_virtual_RemainingTime(void* self, intptr_t slot);
int QAbstractEventDispatcher_virtualbase_RemainingTime(void* self, int timerId);
void QAbstractEventDispatcher_override_virtual_WakeUp(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_WakeUp(void* self);
void QAbstractEventDispatcher_override_virtual_Interrupt(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_Interrupt(void* self);
void QAbstractEventDispatcher_override_virtual_Flush(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_Flush(void* self);
void QAbstractEventDispatcher_override_virtual_StartingUp(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_StartingUp(void* self);
void QAbstractEventDispatcher_override_virtual_ClosingDown(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_ClosingDown(void* self);
void QAbstractEventDispatcher_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractEventDispatcher_virtualbase_Event(void* self, QEvent* event);
void QAbstractEventDispatcher_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractEventDispatcher_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAbstractEventDispatcher_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAbstractEventDispatcher_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAbstractEventDispatcher_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_CustomEvent(void* self, QEvent* event);
void QAbstractEventDispatcher_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAbstractEventDispatcher_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAbstractEventDispatcher_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAbstractEventDispatcher_Delete(QAbstractEventDispatcher* self, bool isSubclass);

void QAbstractEventDispatcher__TimerInfo_new(int id, int i, int t, QAbstractEventDispatcher__TimerInfo** outptr_QAbstractEventDispatcher__TimerInfo);
void QAbstractEventDispatcher__TimerInfo_Delete(QAbstractEventDispatcher__TimerInfo* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
