#include <QBasicMutex>
#include <QMutex>
#include <QMutexLocker>
#include <QRecursiveMutex>
#include <qmutex.h>
#include "gen_qmutex.h"
#include "_cgo_export.h"

void QBasicMutex_new(QBasicMutex** outptr_QBasicMutex) {
	QBasicMutex* ret = new QBasicMutex();
	*outptr_QBasicMutex = ret;
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

void QMutex_new(QMutex** outptr_QMutex, QBasicMutex** outptr_QBasicMutex) {
	QMutex* ret = new QMutex();
	*outptr_QMutex = ret;
	*outptr_QBasicMutex = static_cast<QBasicMutex*>(ret);
}

void QMutex_new2(int mode, QMutex** outptr_QMutex, QBasicMutex** outptr_QBasicMutex) {
	QMutex* ret = new QMutex(static_cast<QMutex::RecursionMode>(mode));
	*outptr_QMutex = ret;
	*outptr_QBasicMutex = static_cast<QBasicMutex*>(ret);
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

void QRecursiveMutex_new(QRecursiveMutex** outptr_QRecursiveMutex) {
	QRecursiveMutex* ret = new QRecursiveMutex();
	*outptr_QRecursiveMutex = ret;
}

void QRecursiveMutex_Delete(QRecursiveMutex* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QRecursiveMutex*>( self );
	} else {
		delete self;
	}
}

void QMutexLocker_new(QBasicMutex* m, QMutexLocker** outptr_QMutexLocker) {
	QMutexLocker* ret = new QMutexLocker(m);
	*outptr_QMutexLocker = ret;
}

void QMutexLocker_new2(QRecursiveMutex* m, QMutexLocker** outptr_QMutexLocker) {
	QMutexLocker* ret = new QMutexLocker(m);
	*outptr_QMutexLocker = ret;
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

