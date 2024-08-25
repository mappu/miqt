#ifndef GEN_QTHREAD_H
#define GEN_QTHREAD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QThread_MetaObject(QThread* self);
void QThread_Tr(char* s, char** _out, int* _out_Strlen);
void QThread_TrUtf8(char* s, char** _out, int* _out_Strlen);
QThread* QThread_CurrentThread();
int QThread_IdealThreadCount();
void QThread_YieldCurrentThread();
bool QThread_IsFinished(QThread* self);
bool QThread_IsRunning(QThread* self);
void QThread_RequestInterruption(QThread* self);
bool QThread_IsInterruptionRequested(QThread* self);
void QThread_SetStackSize(QThread* self, unsigned int stackSize);
unsigned int QThread_StackSize(QThread* self);
void QThread_Exit(QThread* self);
QAbstractEventDispatcher* QThread_EventDispatcher(QThread* self);
void QThread_SetEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher);
bool QThread_Event(QThread* self, QEvent* event);
int QThread_LoopLevel(QThread* self);
void QThread_Terminate(QThread* self);
void QThread_Quit(QThread* self);
bool QThread_Wait(QThread* self);
bool QThread_WaitWithTime(QThread* self, unsigned long time);
void QThread_Sleep(unsigned long param1);
void QThread_Msleep(unsigned long param1);
void QThread_Usleep(unsigned long param1);
void QThread_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QThread_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QThread_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QThread_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QThread_Exit1(QThread* self, int retcode);
bool QThread_Wait1(QThread* self, QDeadlineTimer* deadline);
void QThread_Delete(QThread* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
