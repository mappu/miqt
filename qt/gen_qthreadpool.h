#ifndef GEN_QTHREADPOOL_H
#define GEN_QTHREADPOOL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QRunnable;
class QThread;
class QThreadPool;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRunnable QRunnable;
typedef struct QThread QThread;
typedef struct QThreadPool QThreadPool;
#endif

QThreadPool* QThreadPool_new();
QThreadPool* QThreadPool_new2(QObject* parent);
QMetaObject* QThreadPool_MetaObject(QThreadPool* self);
void QThreadPool_Tr(const char* s, char** _out, int* _out_Strlen);
void QThreadPool_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QThreadPool* QThreadPool_GlobalInstance();
void QThreadPool_Start(QThreadPool* self, QRunnable* runnable);
bool QThreadPool_TryStart(QThreadPool* self, QRunnable* runnable);
int QThreadPool_ExpiryTimeout(QThreadPool* self);
void QThreadPool_SetExpiryTimeout(QThreadPool* self, int expiryTimeout);
int QThreadPool_MaxThreadCount(QThreadPool* self);
void QThreadPool_SetMaxThreadCount(QThreadPool* self, int maxThreadCount);
int QThreadPool_ActiveThreadCount(QThreadPool* self);
void QThreadPool_SetStackSize(QThreadPool* self, unsigned int stackSize);
unsigned int QThreadPool_StackSize(QThreadPool* self);
void QThreadPool_ReserveThread(QThreadPool* self);
void QThreadPool_ReleaseThread(QThreadPool* self);
bool QThreadPool_WaitForDone(QThreadPool* self);
void QThreadPool_Clear(QThreadPool* self);
bool QThreadPool_Contains(QThreadPool* self, QThread* thread);
void QThreadPool_Cancel(QThreadPool* self, QRunnable* runnable);
bool QThreadPool_TryTake(QThreadPool* self, QRunnable* runnable);
void QThreadPool_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QThreadPool_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QThreadPool_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QThreadPool_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QThreadPool_Start2(QThreadPool* self, QRunnable* runnable, int priority);
bool QThreadPool_WaitForDone1(QThreadPool* self, int msecs);
void QThreadPool_Delete(QThreadPool* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
