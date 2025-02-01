#include <QBasicMutex>
#include <QMutex>
#include <QMutexLocker>
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

bool QBasicMutex_isRecursive(QBasicMutex* self) {
	return self->isRecursive();
}

bool QBasicMutex_isRecursive2(const QBasicMutex* self) {
	return self->isRecursive();
}

void QBasicMutex_delete(QBasicMutex* self) {
	delete self;
}

QMutex* QMutex_new() {
	return new QMutex();
}

QMutex* QMutex_new2(int mode) {
	return new QMutex(static_cast<QMutex::RecursionMode>(mode));
}

void QMutex_virtbase(QMutex* src, QBasicMutex** outptr_QBasicMutex) {
	*outptr_QBasicMutex = static_cast<QBasicMutex*>(src);
}

void QMutex_lock(QMutex* self) {
	self->lock();
}

bool QMutex_tryLock(QMutex* self) {
	return self->tryLock();
}

void QMutex_unlock(QMutex* self) {
	self->unlock();
}

bool QMutex_tryLock2(QMutex* self) {
	return self->try_lock();
}

bool QMutex_isRecursive(const QMutex* self) {
	return self->isRecursive();
}

bool QMutex_tryLock1(QMutex* self, int timeout) {
	return self->tryLock(static_cast<int>(timeout));
}

void QMutex_delete(QMutex* self) {
	delete self;
}

QRecursiveMutex* QRecursiveMutex_new() {
	return new QRecursiveMutex();
}

void QRecursiveMutex_delete(QRecursiveMutex* self) {
	delete self;
}

QMutexLocker* QMutexLocker_new(QBasicMutex* m) {
	return new QMutexLocker(m);
}

QMutexLocker* QMutexLocker_new2(QRecursiveMutex* m) {
	return new QMutexLocker(m);
}

void QMutexLocker_unlock(QMutexLocker* self) {
	self->unlock();
}

void QMutexLocker_relock(QMutexLocker* self) {
	self->relock();
}

QMutex* QMutexLocker_mutex(const QMutexLocker* self) {
	return self->mutex();
}

void QMutexLocker_delete(QMutexLocker* self) {
	delete self;
}

