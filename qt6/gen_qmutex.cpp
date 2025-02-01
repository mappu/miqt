#include <QBasicMutex>
#include <QMutex>
#include <QRecursiveMutex>
#include <qmutex.h>
#include "gen_qmutex.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QBasicMutex* QBasicMutex_new() {
	return new QBasicMutex();
}

void QBasicMutex_lock(QBasicMutex* self) {
	self->lock();
}

void QBasicMutex_unlock(QBasicMutex* self) {
	self->unlock();
}

bool QBasicMutex_tryLock(QBasicMutex* self) {
	return self->tryLock();
}

bool QBasicMutex_tryLock2(QBasicMutex* self) {
	return self->try_lock();
}

void QBasicMutex_delete(QBasicMutex* self) {
	delete self;
}

QMutex* QMutex_new() {
	return new QMutex();
}

void QMutex_virtbase(QMutex* src, QBasicMutex** outptr_QBasicMutex) {
	*outptr_QBasicMutex = static_cast<QBasicMutex*>(src);
}

bool QMutex_tryLock(QMutex* self) {
	return self->try_lock();
}

bool QMutex_tryLockWithTimeout(QMutex* self, int timeout) {
	return self->tryLock(static_cast<int>(timeout));
}

void QMutex_delete(QMutex* self) {
	delete self;
}

QRecursiveMutex* QRecursiveMutex_new() {
	return new QRecursiveMutex();
}

void QRecursiveMutex_lock(QRecursiveMutex* self) {
	self->lock();
}

bool QRecursiveMutex_tryLock(QRecursiveMutex* self) {
	return self->tryLock();
}

void QRecursiveMutex_unlock(QRecursiveMutex* self) {
	self->unlock();
}

bool QRecursiveMutex_tryLock2(QRecursiveMutex* self) {
	return self->try_lock();
}

bool QRecursiveMutex_tryLock1(QRecursiveMutex* self, int timeout) {
	return self->tryLock(static_cast<int>(timeout));
}

void QRecursiveMutex_delete(QRecursiveMutex* self) {
	delete self;
}

