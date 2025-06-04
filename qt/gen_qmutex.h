#pragma once
#ifndef MIQT_QT_GEN_QMUTEX_H
#define MIQT_QT_GEN_QMUTEX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
void QBasicMutex_lock(QBasicMutex* self);
void QBasicMutex_unlock(QBasicMutex* self);
bool QBasicMutex_tryLock(QBasicMutex* self);
bool QBasicMutex_tryLock2(QBasicMutex* self);
bool QBasicMutex_isRecursive(QBasicMutex* self);
bool QBasicMutex_isRecursive2(const QBasicMutex* self);

void QBasicMutex_delete(QBasicMutex* self);

QMutex* QMutex_new();
QMutex* QMutex_new2(int mode);
void QMutex_virtbase(QMutex* src, QBasicMutex** outptr_QBasicMutex);
void QMutex_lock(QMutex* self);
bool QMutex_tryLock(QMutex* self);
void QMutex_unlock(QMutex* self);
bool QMutex_tryLock2(QMutex* self);
bool QMutex_isRecursive(const QMutex* self);
bool QMutex_tryLockWithTimeout(QMutex* self, int timeout);

void QMutex_delete(QMutex* self);

QRecursiveMutex* QRecursiveMutex_new();
void QRecursiveMutex_delete(QRecursiveMutex* self);

QMutexLocker* QMutexLocker_new(QBasicMutex* m);
QMutexLocker* QMutexLocker_new2(QRecursiveMutex* m);
void QMutexLocker_unlock(QMutexLocker* self);
void QMutexLocker_relock(QMutexLocker* self);
QMutex* QMutexLocker_mutex(const QMutexLocker* self);

void QMutexLocker_delete(QMutexLocker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
