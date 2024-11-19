#include <QBasicMutex>
#include <QMutex>
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

bool QMutex_TryLock(QMutex* self) {
	return self->try_lock();
}

bool QMutex_TryLockWithTimeout(QMutex* self, int timeout) {
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

void QRecursiveMutex_Delete(QRecursiveMutex* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QRecursiveMutex*>( self );
	} else {
		delete self;
	}
}

