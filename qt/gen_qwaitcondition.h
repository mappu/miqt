#pragma once
#ifndef MIQT_QT_GEN_QWAITCONDITION_H
#define MIQT_QT_GEN_QWAITCONDITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDeadlineTimer;
class QMutex;
class QReadWriteLock;
class QWaitCondition;
#else
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QMutex QMutex;
typedef struct QReadWriteLock QReadWriteLock;
typedef struct QWaitCondition QWaitCondition;
#endif

QWaitCondition* QWaitCondition_new();
bool QWaitCondition_wait(QWaitCondition* self, QMutex* lockedMutex);
bool QWaitCondition_wait2(QWaitCondition* self, QMutex* lockedMutex, unsigned long time);
bool QWaitCondition_waitWithLockedReadWriteLock(QWaitCondition* self, QReadWriteLock* lockedReadWriteLock);
bool QWaitCondition_wait3(QWaitCondition* self, QReadWriteLock* lockedReadWriteLock, unsigned long time);
void QWaitCondition_wakeOne(QWaitCondition* self);
void QWaitCondition_wakeAll(QWaitCondition* self);
void QWaitCondition_notifyOne(QWaitCondition* self);
void QWaitCondition_notifyAll(QWaitCondition* self);
bool QWaitCondition_wait4(QWaitCondition* self, QMutex* lockedMutex, QDeadlineTimer* deadline);
bool QWaitCondition_wait5(QWaitCondition* self, QReadWriteLock* lockedReadWriteLock, QDeadlineTimer* deadline);

void QWaitCondition_delete(QWaitCondition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
