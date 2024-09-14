#ifndef GEN_QREADWRITELOCK_H
#define GEN_QREADWRITELOCK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QReadLocker;
class QReadWriteLock;
class QWriteLocker;
#else
typedef struct QReadLocker QReadLocker;
typedef struct QReadWriteLock QReadWriteLock;
typedef struct QWriteLocker QWriteLocker;
#endif

QReadWriteLock* QReadWriteLock_new();
QReadWriteLock* QReadWriteLock_new2(uintptr_t recursionMode);
void QReadWriteLock_LockForRead(QReadWriteLock* self);
bool QReadWriteLock_TryLockForRead(QReadWriteLock* self);
bool QReadWriteLock_TryLockForReadWithTimeout(QReadWriteLock* self, int timeout);
void QReadWriteLock_LockForWrite(QReadWriteLock* self);
bool QReadWriteLock_TryLockForWrite(QReadWriteLock* self);
bool QReadWriteLock_TryLockForWriteWithTimeout(QReadWriteLock* self, int timeout);
void QReadWriteLock_Unlock(QReadWriteLock* self);
void QReadWriteLock_Delete(QReadWriteLock* self);

QReadLocker* QReadLocker_new(QReadWriteLock* readWriteLock);
void QReadLocker_Unlock(QReadLocker* self);
void QReadLocker_Relock(QReadLocker* self);
QReadWriteLock* QReadLocker_ReadWriteLock(const QReadLocker* self);
void QReadLocker_Delete(QReadLocker* self);

QWriteLocker* QWriteLocker_new(QReadWriteLock* readWriteLock);
void QWriteLocker_Unlock(QWriteLocker* self);
void QWriteLocker_Relock(QWriteLocker* self);
QReadWriteLock* QWriteLocker_ReadWriteLock(const QWriteLocker* self);
void QWriteLocker_Delete(QWriteLocker* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
