#ifndef GEN_QABSTRACTEVENTDISPATCHER_H
#define GEN_QABSTRACTEVENTDISPATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
class QMetaObject;
class QObject;
class QSocketNotifier;
class QThread;
#else
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QAbstractEventDispatcher__TimerInfo QAbstractEventDispatcher__TimerInfo;
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSocketNotifier QSocketNotifier;
typedef struct QThread QThread;
#endif

QMetaObject* QAbstractEventDispatcher_MetaObject(const QAbstractEventDispatcher* self);
struct miqt_string* QAbstractEventDispatcher_Tr(const char* s);
struct miqt_string* QAbstractEventDispatcher_TrUtf8(const char* s);
QAbstractEventDispatcher* QAbstractEventDispatcher_Instance();
bool QAbstractEventDispatcher_ProcessEvents(QAbstractEventDispatcher* self, int flags);
bool QAbstractEventDispatcher_HasPendingEvents(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_RegisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
void QAbstractEventDispatcher_UnregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
int QAbstractEventDispatcher_RegisterTimer(QAbstractEventDispatcher* self, int interval, uintptr_t timerType, QObject* object);
void QAbstractEventDispatcher_RegisterTimer2(QAbstractEventDispatcher* self, int timerId, int interval, uintptr_t timerType, QObject* object);
bool QAbstractEventDispatcher_UnregisterTimer(QAbstractEventDispatcher* self, int timerId);
bool QAbstractEventDispatcher_UnregisterTimers(QAbstractEventDispatcher* self, QObject* object);
struct miqt_array* QAbstractEventDispatcher_RegisteredTimers(const QAbstractEventDispatcher* self, QObject* object);
int QAbstractEventDispatcher_RemainingTime(QAbstractEventDispatcher* self, int timerId);
void QAbstractEventDispatcher_WakeUp(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_Interrupt(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_Flush(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_StartingUp(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_ClosingDown(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_InstallNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj);
void QAbstractEventDispatcher_RemoveNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj);
void QAbstractEventDispatcher_AboutToBlock(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_connect_AboutToBlock(QAbstractEventDispatcher* self, void* slot);
void QAbstractEventDispatcher_Awake(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_connect_Awake(QAbstractEventDispatcher* self, void* slot);
struct miqt_string* QAbstractEventDispatcher_Tr2(const char* s, const char* c);
struct miqt_string* QAbstractEventDispatcher_Tr3(const char* s, const char* c, int n);
struct miqt_string* QAbstractEventDispatcher_TrUtf82(const char* s, const char* c);
struct miqt_string* QAbstractEventDispatcher_TrUtf83(const char* s, const char* c, int n);
QAbstractEventDispatcher* QAbstractEventDispatcher_Instance1(QThread* thread);
void QAbstractEventDispatcher_Delete(QAbstractEventDispatcher* self);

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new(int id, int i, uintptr_t t);
void QAbstractEventDispatcher__TimerInfo_Delete(QAbstractEventDispatcher__TimerInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
