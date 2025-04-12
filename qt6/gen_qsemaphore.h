#pragma once
#ifndef MIQT_QT6_GEN_QSEMAPHORE_H
#define MIQT_QT6_GEN_QSEMAPHORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSemaphore;
class QSemaphoreReleaser;
#else
typedef struct QSemaphore QSemaphore;
typedef struct QSemaphoreReleaser QSemaphoreReleaser;
#endif

QSemaphore* QSemaphore_new();
QSemaphore* QSemaphore_new2(int n);
void QSemaphore_acquire(QSemaphore* self);
bool QSemaphore_tryAcquire(QSemaphore* self);
bool QSemaphore_tryAcquire2(QSemaphore* self, int n, int timeout);
void QSemaphore_release(QSemaphore* self);
int QSemaphore_available(const QSemaphore* self);
bool QSemaphore_tryAcquire3(QSemaphore* self);
void QSemaphore_acquireWithInt(QSemaphore* self, int n);
bool QSemaphore_tryAcquireWithInt(QSemaphore* self, int n);
void QSemaphore_releaseWithInt(QSemaphore* self, int n);
void QSemaphore_delete(QSemaphore* self);

QSemaphoreReleaser* QSemaphoreReleaser_new();
QSemaphoreReleaser* QSemaphoreReleaser_new2(QSemaphore* sem);
QSemaphoreReleaser* QSemaphoreReleaser_new3(QSemaphore* sem);
QSemaphoreReleaser* QSemaphoreReleaser_new4(QSemaphore* sem, int n);
QSemaphoreReleaser* QSemaphoreReleaser_new5(QSemaphore* sem, int n);
void QSemaphoreReleaser_swap(QSemaphoreReleaser* self, QSemaphoreReleaser* other);
QSemaphore* QSemaphoreReleaser_semaphore(const QSemaphoreReleaser* self);
QSemaphore* QSemaphoreReleaser_cancel(QSemaphoreReleaser* self);
void QSemaphoreReleaser_delete(QSemaphoreReleaser* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
