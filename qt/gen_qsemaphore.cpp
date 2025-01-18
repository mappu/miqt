#include <QSemaphore>
#include <QSemaphoreReleaser>
#include <qsemaphore.h>
#include "gen_qsemaphore.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSemaphore* QSemaphore_new() {
	return new QSemaphore();
}

QSemaphore* QSemaphore_new2(int n) {
	return new QSemaphore(static_cast<int>(n));
}

void QSemaphore_Acquire(QSemaphore* self) {
	self->acquire();
}

bool QSemaphore_TryAcquire(QSemaphore* self) {
	return self->tryAcquire();
}

bool QSemaphore_TryAcquire2(QSemaphore* self, int n, int timeout) {
	return self->tryAcquire(static_cast<int>(n), static_cast<int>(timeout));
}

void QSemaphore_Release(QSemaphore* self) {
	self->release();
}

int QSemaphore_Available(const QSemaphore* self) {
	return self->available();
}

void QSemaphore_Acquire1(QSemaphore* self, int n) {
	self->acquire(static_cast<int>(n));
}

bool QSemaphore_TryAcquire1(QSemaphore* self, int n) {
	return self->tryAcquire(static_cast<int>(n));
}

void QSemaphore_Release1(QSemaphore* self, int n) {
	self->release(static_cast<int>(n));
}

void QSemaphore_Delete(QSemaphore* self) {
	delete self;
}

QSemaphoreReleaser* QSemaphoreReleaser_new() {
	return new QSemaphoreReleaser();
}

QSemaphoreReleaser* QSemaphoreReleaser_new2(QSemaphore* sem) {
	return new QSemaphoreReleaser(*sem);
}

QSemaphoreReleaser* QSemaphoreReleaser_new3(QSemaphore* sem) {
	return new QSemaphoreReleaser(sem);
}

QSemaphoreReleaser* QSemaphoreReleaser_new4(QSemaphore* sem, int n) {
	return new QSemaphoreReleaser(*sem, static_cast<int>(n));
}

QSemaphoreReleaser* QSemaphoreReleaser_new5(QSemaphore* sem, int n) {
	return new QSemaphoreReleaser(sem, static_cast<int>(n));
}

void QSemaphoreReleaser_Swap(QSemaphoreReleaser* self, QSemaphoreReleaser* other) {
	self->swap(*other);
}

QSemaphore* QSemaphoreReleaser_Semaphore(const QSemaphoreReleaser* self) {
	return self->semaphore();
}

QSemaphore* QSemaphoreReleaser_Cancel(QSemaphoreReleaser* self) {
	return self->cancel();
}

void QSemaphoreReleaser_Delete(QSemaphoreReleaser* self) {
	delete self;
}

