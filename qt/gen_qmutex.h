#ifndef GEN_QMUTEX_H
#define GEN_QMUTEX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBasicMutex;
class QMutex;
class QMutexLocker;
class QRecursiveMutex;
#else
typedef struct QBasicMutex QBasicMutex;
typedef struct QMutex QMutex;
typedef struct QMutexLocker QMutexLocker;
typedef struct QRecursiveMutex QRecursiveMutex;
#endif

QBasicMutex* QBasicMutex_new();
void QBasicMutex_Lock(QBasicMutex* self);
void QBasicMutex_Unlock(QBasicMutex* self);
bool QBasicMutex_TryLock(QBasicMutex* self);
bool QBasicMutex_TryLock2(QBasicMutex* self);
bool QBasicMutex_IsRecursive(QBasicMutex* self);
bool QBasicMutex_IsRecursive2(const QBasicMutex* self);
void QBasicMutex_Delete(QBasicMutex* self);

QMutex* QMutex_new();
QMutex* QMutex_new2(uintptr_t mode);
void QMutex_Lock(QMutex* self);
bool QMutex_TryLock(QMutex* self);
void QMutex_Unlock(QMutex* self);
bool QMutex_TryLock2(QMutex* self);
bool QMutex_IsRecursive(const QMutex* self);
bool QMutex_TryLock1(QMutex* self, int timeout);
void QMutex_Delete(QMutex* self);

QRecursiveMutex* QRecursiveMutex_new();
void QRecursiveMutex_Delete(QRecursiveMutex* self);

QMutexLocker* QMutexLocker_new(QBasicMutex* m);
QMutexLocker* QMutexLocker_new2(QRecursiveMutex* m);
void QMutexLocker_Unlock(QMutexLocker* self);
void QMutexLocker_Relock(QMutexLocker* self);
QMutex* QMutexLocker_Mutex(const QMutexLocker* self);
void QMutexLocker_Delete(QMutexLocker* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
