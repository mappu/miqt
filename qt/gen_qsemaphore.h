#ifndef GEN_QSEMAPHORE_H
#define GEN_QSEMAPHORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
void QSemaphore_Acquire(QSemaphore* self);
bool QSemaphore_TryAcquire(QSemaphore* self);
bool QSemaphore_TryAcquire2(QSemaphore* self, int n, int timeout);
void QSemaphore_Release(QSemaphore* self);
int QSemaphore_Available(QSemaphore* self);
void QSemaphore_Acquire1(QSemaphore* self, int n);
bool QSemaphore_TryAcquire1(QSemaphore* self, int n);
void QSemaphore_Release1(QSemaphore* self, int n);
void QSemaphore_Delete(QSemaphore* self);

QSemaphoreReleaser* QSemaphoreReleaser_new();
QSemaphoreReleaser* QSemaphoreReleaser_new2(QSemaphore* sem);
QSemaphoreReleaser* QSemaphoreReleaser_new3(QSemaphore* sem);
QSemaphoreReleaser* QSemaphoreReleaser_new4(QSemaphore* sem, int n);
QSemaphoreReleaser* QSemaphoreReleaser_new5(QSemaphore* sem, int n);
void QSemaphoreReleaser_Swap(QSemaphoreReleaser* self, QSemaphoreReleaser* other);
QSemaphore* QSemaphoreReleaser_Semaphore(QSemaphoreReleaser* self);
QSemaphore* QSemaphoreReleaser_Cancel(QSemaphoreReleaser* self);
void QSemaphoreReleaser_Delete(QSemaphoreReleaser* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
