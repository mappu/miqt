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

bool QBasicMutex_IsRecursive(QBasicMutex* self) {
	return self->isRecursive();
}

bool QBasicMutex_IsRecursive2(const QBasicMutex* self) {
	return self->isRecursive();
}

void QBasicMutex_Delete(QBasicMutex* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QBasicMutex*>( self );
	} else {
		delete self;
	}
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

void QMutex_Lock(QMutex* self) {
	self->lock();
}

bool QMutex_TryLock(QMutex* self) {
	return self->tryLock();
}

void QMutex_Unlock(QMutex* self) {
	self->unlock();
}

bool QMutex_TryLock2(QMutex* self) {
	return self->try_lock();
}

bool QMutex_IsRecursive(const QMutex* self) {
	return self->isRecursive();
}

bool QMutex_TryLock1(QMutex* self, int timeout) {
	return self->tryLock(static_cast<int>(timeout));
}

void QMutex_Delete(QMutex* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMutex*>( self );
	} else {
		delete self;
	}
}

QRecursiveMutex* QRecursiveMutex_new() {
	return new QRecursiveMutex();
}

void QRecursiveMutex_Delete(QRecursiveMutex* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QRecursiveMutex*>( self );
	} else {
		delete self;
	}
}

QMutexLocker* QMutexLocker_new(QBasicMutex* m) {
	return new QMutexLocker(m);
}

QMutexLocker* QMutexLocker_new2(QRecursiveMutex* m) {
	return new QMutexLocker(m);
}

void QMutexLocker_Unlock(QMutexLocker* self) {
	self->unlock();
}

void QMutexLocker_Relock(QMutexLocker* self) {
	self->relock();
}

QMutex* QMutexLocker_Mutex(const QMutexLocker* self) {
	return self->mutex();
}

void QMutexLocker_Delete(QMutexLocker* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMutexLocker*>( self );
	} else {
		delete self;
	}
}

