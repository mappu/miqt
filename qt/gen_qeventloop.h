#ifndef GEN_QEVENTLOOP_H
#define GEN_QEVENTLOOP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
QMetaObject* QEventLoop_MetaObject(const QEventLoop* self);
void* QEventLoop_Metacast(QEventLoop* self, const char* param1);
struct miqt_string* QEventLoop_Tr(const char* s);
struct miqt_string* QEventLoop_TrUtf8(const char* s);
bool QEventLoop_ProcessEvents(QEventLoop* self);
void QEventLoop_ProcessEvents2(QEventLoop* self, int flags, int maximumTime);
int QEventLoop_Exec(QEventLoop* self);
void QEventLoop_Exit(QEventLoop* self);
bool QEventLoop_IsRunning(const QEventLoop* self);
void QEventLoop_WakeUp(QEventLoop* self);
bool QEventLoop_Event(QEventLoop* self, QEvent* event);
void QEventLoop_Quit(QEventLoop* self);
struct miqt_string* QEventLoop_Tr2(const char* s, const char* c);
struct miqt_string* QEventLoop_Tr3(const char* s, const char* c, int n);
struct miqt_string* QEventLoop_TrUtf82(const char* s, const char* c);
struct miqt_string* QEventLoop_TrUtf83(const char* s, const char* c, int n);
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
