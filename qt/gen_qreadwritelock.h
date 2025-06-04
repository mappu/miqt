#pragma once
#ifndef MIQT_QT_GEN_QREADWRITELOCK_H
#define MIQT_QT_GEN_QREADWRITELOCK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
QReadWriteLock* QReadWriteLock_new2(int recursionMode);
void QReadWriteLock_lockForRead(QReadWriteLock* self);
bool QReadWriteLock_tryLockForRead(QReadWriteLock* self);
bool QReadWriteLock_tryLockForReadWithTimeout(QReadWriteLock* self, int timeout);
void QReadWriteLock_lockForWrite(QReadWriteLock* self);
bool QReadWriteLock_tryLockForWrite(QReadWriteLock* self);
bool QReadWriteLock_tryLockForWriteWithTimeout(QReadWriteLock* self, int timeout);
void QReadWriteLock_unlock(QReadWriteLock* self);

void QReadWriteLock_delete(QReadWriteLock* self);

QReadLocker* QReadLocker_new(QReadWriteLock* readWriteLock);
void QReadLocker_unlock(QReadLocker* self);
void QReadLocker_relock(QReadLocker* self);
QReadWriteLock* QReadLocker_readWriteLock(const QReadLocker* self);

void QReadLocker_delete(QReadLocker* self);

QWriteLocker* QWriteLocker_new(QReadWriteLock* readWriteLock);
void QWriteLocker_unlock(QWriteLocker* self);
void QWriteLocker_relock(QWriteLocker* self);
QReadWriteLock* QWriteLocker_readWriteLock(const QWriteLocker* self);

void QWriteLocker_delete(QWriteLocker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
