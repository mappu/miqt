#ifndef GEN_QEVENTLOOP_H
#define GEN_QEVENTLOOP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QEventLoop;
class QEventLoopLocker;
class QMetaObject;
class QObject;
class QThread;
#else
typedef struct QEvent QEvent;
typedef struct QEventLoop QEventLoop;
typedef struct QEventLoopLocker QEventLoopLocker;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QThread QThread;
#endif

QEventLoop* QEventLoop_new();
QEventLoop* QEventLoop_new2(QObject* parent);
QMetaObject* QEventLoop_MetaObject(QEventLoop* self);
void QEventLoop_Tr(const char* s, char** _out, int* _out_Strlen);
void QEventLoop_TrUtf8(const char* s, char** _out, int* _out_Strlen);
bool QEventLoop_ProcessEvents(QEventLoop* self);
void QEventLoop_ProcessEvents2(QEventLoop* self, int flags, int maximumTime);
int QEventLoop_Exec(QEventLoop* self);
void QEventLoop_Exit(QEventLoop* self);
bool QEventLoop_IsRunning(QEventLoop* self);
void QEventLoop_WakeUp(QEventLoop* self);
bool QEventLoop_Event(QEventLoop* self, QEvent* event);
void QEventLoop_Quit(QEventLoop* self);
void QEventLoop_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QEventLoop_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QEventLoop_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QEventLoop_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
bool QEventLoop_ProcessEvents1(QEventLoop* self, int flags);
int QEventLoop_Exec1(QEventLoop* self, int flags);
void QEventLoop_Exit1(QEventLoop* self, int returnCode);
void QEventLoop_Delete(QEventLoop* self);

QEventLoopLocker* QEventLoopLocker_new();
QEventLoopLocker* QEventLoopLocker_new2(QEventLoop* loop);
QEventLoopLocker* QEventLoopLocker_new3(QThread* thread);
void QEventLoopLocker_Delete(QEventLoopLocker* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
