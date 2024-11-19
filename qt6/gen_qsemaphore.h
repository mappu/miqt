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

void QSemaphore_new(QSemaphore** outptr_QSemaphore);
void QSemaphore_new2(int n, QSemaphore** outptr_QSemaphore);
void QSemaphore_Acquire(QSemaphore* self);
bool QSemaphore_TryAcquire(QSemaphore* self);
bool QSemaphore_TryAcquire2(QSemaphore* self, int n, int timeout);
void QSemaphore_Release(QSemaphore* self);
int QSemaphore_Available(const QSemaphore* self);
bool QSemaphore_TryAcquire3(QSemaphore* self);
void QSemaphore_Acquire1(QSemaphore* self, int n);
bool QSemaphore_TryAcquire1(QSemaphore* self, int n);
void QSemaphore_Release1(QSemaphore* self, int n);
void QSemaphore_Delete(QSemaphore* self, bool isSubclass);

void QSemaphoreReleaser_new(QSemaphoreReleaser** outptr_QSemaphoreReleaser);
void QSemaphoreReleaser_new2(QSemaphore* sem, QSemaphoreReleaser** outptr_QSemaphoreReleaser);
void QSemaphoreReleaser_new3(QSemaphore* sem, QSemaphoreReleaser** outptr_QSemaphoreReleaser);
void QSemaphoreReleaser_new4(QSemaphore* sem, int n, QSemaphoreReleaser** outptr_QSemaphoreReleaser);
void QSemaphoreReleaser_new5(QSemaphore* sem, int n, QSemaphoreReleaser** outptr_QSemaphoreReleaser);
void QSemaphoreReleaser_Swap(QSemaphoreReleaser* self, QSemaphoreReleaser* other);
QSemaphore* QSemaphoreReleaser_Semaphore(const QSemaphoreReleaser* self);
QSemaphore* QSemaphoreReleaser_Cancel(QSemaphoreReleaser* self);
void QSemaphoreReleaser_Delete(QSemaphoreReleaser* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
