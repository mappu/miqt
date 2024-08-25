#ifndef GEN_QABSTRACTEVENTDISPATCHER_H
#define GEN_QABSTRACTEVENTDISPATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractEventDispatcher;
class QAbstractNativeEventFilter;
class QMetaObject;
class QObject;
class QSocketNotifier;
class QThread;
#else
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSocketNotifier QSocketNotifier;
typedef struct QThread QThread;
#endif

QMetaObject* QAbstractEventDispatcher_MetaObject(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_Tr(char* s, char** _out, int* _out_Strlen);
void QAbstractEventDispatcher_TrUtf8(char* s, char** _out, int* _out_Strlen);
QAbstractEventDispatcher* QAbstractEventDispatcher_Instance();
bool QAbstractEventDispatcher_HasPendingEvents(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_RegisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
void QAbstractEventDispatcher_UnregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
bool QAbstractEventDispatcher_UnregisterTimer(QAbstractEventDispatcher* self, int timerId);
bool QAbstractEventDispatcher_UnregisterTimers(QAbstractEventDispatcher* self, QObject* object);
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
void QAbstractEventDispatcher_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractEventDispatcher_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAbstractEventDispatcher_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractEventDispatcher_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QAbstractEventDispatcher* QAbstractEventDispatcher_Instance1(QThread* thread);
void QAbstractEventDispatcher_Delete(QAbstractEventDispatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
