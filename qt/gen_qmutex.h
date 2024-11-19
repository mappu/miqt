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

void QBasicMutex_new(QBasicMutex** outptr_QBasicMutex);
void QBasicMutex_Lock(QBasicMutex* self);
void QBasicMutex_Unlock(QBasicMutex* self);
bool QBasicMutex_TryLock(QBasicMutex* self);
bool QBasicMutex_TryLock2(QBasicMutex* self);
bool QBasicMutex_IsRecursive(QBasicMutex* self);
bool QBasicMutex_IsRecursive2(const QBasicMutex* self);
void QBasicMutex_Delete(QBasicMutex* self, bool isSubclass);

void QMutex_new(QMutex** outptr_QMutex, QBasicMutex** outptr_QBasicMutex);
void QMutex_new2(int mode, QMutex** outptr_QMutex, QBasicMutex** outptr_QBasicMutex);
void QMutex_Lock(QMutex* self);
bool QMutex_TryLock(QMutex* self);
void QMutex_Unlock(QMutex* self);
bool QMutex_TryLock2(QMutex* self);
bool QMutex_IsRecursive(const QMutex* self);
bool QMutex_TryLock1(QMutex* self, int timeout);
void QMutex_Delete(QMutex* self, bool isSubclass);

void QRecursiveMutex_new(QRecursiveMutex** outptr_QRecursiveMutex);
void QRecursiveMutex_Delete(QRecursiveMutex* self, bool isSubclass);

void QMutexLocker_new(QBasicMutex* m, QMutexLocker** outptr_QMutexLocker);
void QMutexLocker_new2(QRecursiveMutex* m, QMutexLocker** outptr_QMutexLocker);
void QMutexLocker_Unlock(QMutexLocker* self);
void QMutexLocker_Relock(QMutexLocker* self);
QMutex* QMutexLocker_Mutex(const QMutexLocker* self);
void QMutexLocker_Delete(QMutexLocker* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
