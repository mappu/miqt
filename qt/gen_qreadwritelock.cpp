#include <QReadLocker>
#include <QReadWriteLock>
#include <QWriteLocker>
#include <qreadwritelock.h>
#include "gen_qreadwritelock.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QReadWriteLock* QReadWriteLock_new() {
	return new QReadWriteLock();
}

QReadWriteLock* QReadWriteLock_new2(int recursionMode) {
	return new QReadWriteLock(static_cast<QReadWriteLock::RecursionMode>(recursionMode));
}

void QReadWriteLock_lockForRead(QReadWriteLock* self) {
	self->lockForRead();
}

bool QReadWriteLock_tryLockForRead(QReadWriteLock* self) {
	return self->tryLockForRead();
}

bool QReadWriteLock_tryLockForReadWithTimeout(QReadWriteLock* self, int timeout) {
	return self->tryLockForRead(static_cast<int>(timeout));
}

void QReadWriteLock_lockForWrite(QReadWriteLock* self) {
	self->lockForWrite();
}

bool QReadWriteLock_tryLockForWrite(QReadWriteLock* self) {
	return self->tryLockForWrite();
}

bool QReadWriteLock_tryLockForWriteWithTimeout(QReadWriteLock* self, int timeout) {
	return self->tryLockForWrite(static_cast<int>(timeout));
}

void QReadWriteLock_unlock(QReadWriteLock* self) {
	self->unlock();
}

void QReadWriteLock_delete(QReadWriteLock* self) {
	delete self;
}

QReadLocker* QReadLocker_new(QReadWriteLock* readWriteLock) {
	return new QReadLocker(readWriteLock);
}

void QReadLocker_unlock(QReadLocker* self) {
	self->unlock();
}

void QReadLocker_relock(QReadLocker* self) {
	self->relock();
}

QReadWriteLock* QReadLocker_readWriteLock(const QReadLocker* self) {
	return self->readWriteLock();
}

void QReadLocker_delete(QReadLocker* self) {
	delete self;
}

QWriteLocker* QWriteLocker_new(QReadWriteLock* readWriteLock) {
	return new QWriteLocker(readWriteLock);
}

void QWriteLocker_unlock(QWriteLocker* self) {
	self->unlock();
}

void QWriteLocker_relock(QWriteLocker* self) {
	self->relock();
}

QReadWriteLock* QWriteLocker_readWriteLock(const QWriteLocker* self) {
	return self->readWriteLock();
}

void QWriteLocker_delete(QWriteLocker* self) {
	delete self;
}

