#pragma once
#ifndef MIQT_QT6_GEN_QMUTEX_H
#define MIQT_QT6_GEN_QMUTEX_H

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
class QRecursiveMutex;
#else
typedef struct QBasicMutex QBasicMutex;
typedef struct QMutex QMutex;
typedef struct QRecursiveMutex QRecursiveMutex;
#endif

QBasicMutex* QBasicMutex_new();
void QBasicMutex_lock(QBasicMutex* self);
void QBasicMutex_unlock(QBasicMutex* self);
bool QBasicMutex_tryLock(QBasicMutex* self);
bool QBasicMutex_tryLock2(QBasicMutex* self);
void QBasicMutex_delete(QBasicMutex* self);

QMutex* QMutex_new();
void QMutex_virtbase(QMutex* src, QBasicMutex** outptr_QBasicMutex);
bool QMutex_tryLock(QMutex* self);
bool QMutex_tryLockWithTimeout(QMutex* self, int timeout);
void QMutex_delete(QMutex* self);

QRecursiveMutex* QRecursiveMutex_new();
void QRecursiveMutex_lock(QRecursiveMutex* self);
bool QRecursiveMutex_tryLock(QRecursiveMutex* self);
void QRecursiveMutex_unlock(QRecursiveMutex* self);
bool QRecursiveMutex_tryLock2(QRecursiveMutex* self);
bool QRecursiveMutex_tryLockWithTimeout(QRecursiveMutex* self, int timeout);
void QRecursiveMutex_delete(QRecursiveMutex* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
