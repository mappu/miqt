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

void QBasicMutex_Lock(QBasicMutex* self) {
	self->lock();
}

void QBasicMutex_Unlock(QBasicMutex* self) {
	self->unlock();
}

bool QBasicMutex_TryLock(QBasicMutex* self) {
	return self->tryLock();
}

bool QBasicMutex_TryLock2(QBasicMutex* self) {
	return self->try_lock();
}

void QBasicMutex_Delete(QBasicMutex* self) {
	delete self;
}

QMutex* QMutex_new() {
	return new QMutex();
}

void QMutex_virtbase(QMutex* src, QBasicMutex** outptr_QBasicMutex) {
	*outptr_QBasicMutex = static_cast<QBasicMutex*>(src);
}

bool QMutex_TryLock(QMutex* self) {
	return self->try_lock();
}

bool QMutex_TryLockWithTimeout(QMutex* self, int timeout) {
	return self->tryLock(static_cast<int>(timeout));
}

void QMutex_Delete(QMutex* self) {
	delete self;
}

QRecursiveMutex* QRecursiveMutex_new() {
	return new QRecursiveMutex();
}

void QRecursiveMutex_Lock(QRecursiveMutex* self) {
	self->lock();
}

bool QRecursiveMutex_TryLock(QRecursiveMutex* self) {
	return self->tryLock();
}

void QRecursiveMutex_Unlock(QRecursiveMutex* self) {
	self->unlock();
}

bool QRecursiveMutex_TryLock2(QRecursiveMutex* self) {
	return self->try_lock();
}

bool QRecursiveMutex_TryLock1(QRecursiveMutex* self, int timeout) {
	return self->tryLock(static_cast<int>(timeout));
}

void QRecursiveMutex_Delete(QRecursiveMutex* self) {
	delete self;
}

