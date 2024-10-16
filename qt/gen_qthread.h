#ifndef GEN_QTHREAD_H
#define GEN_QTHREAD_H

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
class QDeadlineTimer;
class QEvent;
class QMetaObject;
class QObject;
class QThread;
#else
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QThread QThread;
#endif

QThread* QThread_new();
QThread* QThread_new2(QObject* parent);
QMetaObject* QThread_MetaObject(const QThread* self);
void* QThread_Metacast(QThread* self, const char* param1);
struct miqt_string* QThread_Tr(const char* s);
struct miqt_string* QThread_TrUtf8(const char* s);
void* QThread_CurrentThreadId();
QThread* QThread_CurrentThread();
int QThread_IdealThreadCount();
void QThread_YieldCurrentThread();
void QThread_SetPriority(QThread* self, int priority);
int QThread_Priority(const QThread* self);
bool QThread_IsFinished(const QThread* self);
bool QThread_IsRunning(const QThread* self);
void QThread_RequestInterruption(QThread* self);
bool QThread_IsInterruptionRequested(const QThread* self);
void QThread_SetStackSize(QThread* self, unsigned int stackSize);
unsigned int QThread_StackSize(const QThread* self);
void QThread_Exit(QThread* self);
QAbstractEventDispatcher* QThread_EventDispatcher(const QThread* self);
void QThread_SetEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher);
bool QThread_Event(QThread* self, QEvent* event);
int QThread_LoopLevel(const QThread* self);
void QThread_Start(QThread* self);
void QThread_Terminate(QThread* self);
void QThread_Quit(QThread* self);
bool QThread_Wait(QThread* self);
bool QThread_WaitWithTime(QThread* self, unsigned long time);
void QThread_Sleep(unsigned long param1);
void QThread_Msleep(unsigned long param1);
void QThread_Usleep(unsigned long param1);
struct miqt_string* QThread_Tr2(const char* s, const char* c);
struct miqt_string* QThread_Tr3(const char* s, const char* c, int n);
struct miqt_string* QThread_TrUtf82(const char* s, const char* c);
struct miqt_string* QThread_TrUtf83(const char* s, const char* c, int n);
void QThread_Exit1(QThread* self, int retcode);
void QThread_Start1(QThread* self, int param1);
bool QThread_Wait1(QThread* self, QDeadlineTimer* deadline);
void QThread_Delete(QThread* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
