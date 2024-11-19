#include <QSemaphore>
#include <QSemaphoreReleaser>
#include <qsemaphore.h>
#include "gen_qsemaphore.h"
#include "_cgo_export.h"

void QSemaphore_new(QSemaphore** outptr_QSemaphore) {
	QSemaphore* ret = new QSemaphore();
	*outptr_QSemaphore = ret;
}

void QSemaphore_new2(int n, QSemaphore** outptr_QSemaphore) {
	QSemaphore* ret = new QSemaphore(static_cast<int>(n));
	*outptr_QSemaphore = ret;
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

void QSemaphore_Delete(QSemaphore* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSemaphore*>( self );
	} else {
		delete self;
	}
}

void QSemaphoreReleaser_new(QSemaphoreReleaser** outptr_QSemaphoreReleaser) {
	QSemaphoreReleaser* ret = new QSemaphoreReleaser();
	*outptr_QSemaphoreReleaser = ret;
}

void QSemaphoreReleaser_new2(QSemaphore* sem, QSemaphoreReleaser** outptr_QSemaphoreReleaser) {
	QSemaphoreReleaser* ret = new QSemaphoreReleaser(*sem);
	*outptr_QSemaphoreReleaser = ret;
}

void QSemaphoreReleaser_new3(QSemaphore* sem, QSemaphoreReleaser** outptr_QSemaphoreReleaser) {
	QSemaphoreReleaser* ret = new QSemaphoreReleaser(sem);
	*outptr_QSemaphoreReleaser = ret;
}

void QSemaphoreReleaser_new4(QSemaphore* sem, int n, QSemaphoreReleaser** outptr_QSemaphoreReleaser) {
	QSemaphoreReleaser* ret = new QSemaphoreReleaser(*sem, static_cast<int>(n));
	*outptr_QSemaphoreReleaser = ret;
}

void QSemaphoreReleaser_new5(QSemaphore* sem, int n, QSemaphoreReleaser** outptr_QSemaphoreReleaser) {
	QSemaphoreReleaser* ret = new QSemaphoreReleaser(sem, static_cast<int>(n));
	*outptr_QSemaphoreReleaser = ret;
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

void QSemaphoreReleaser_Delete(QSemaphoreReleaser* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSemaphoreReleaser*>( self );
	} else {
		delete self;
	}
}

