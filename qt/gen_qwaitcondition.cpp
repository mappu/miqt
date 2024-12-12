#include <QDeadlineTimer>
#include <QMutex>
#include <QReadWriteLock>
#include <QWaitCondition>
#include <qwaitcondition.h>
#include "gen_qwaitcondition.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QWaitCondition* QWaitCondition_new() {
	return new QWaitCondition();
}

bool QWaitCondition_Wait(QWaitCondition* self, QMutex* lockedMutex) {
	return self->wait(lockedMutex);
}

bool QWaitCondition_Wait2(QWaitCondition* self, QMutex* lockedMutex, unsigned long time) {
	return self->wait(lockedMutex, static_cast<unsigned long>(time));
}

bool QWaitCondition_WaitWithLockedReadWriteLock(QWaitCondition* self, QReadWriteLock* lockedReadWriteLock) {
	return self->wait(lockedReadWriteLock);
}

bool QWaitCondition_Wait3(QWaitCondition* self, QReadWriteLock* lockedReadWriteLock, unsigned long time) {
	return self->wait(lockedReadWriteLock, static_cast<unsigned long>(time));
}

void QWaitCondition_WakeOne(QWaitCondition* self) {
	self->wakeOne();
}

void QWaitCondition_WakeAll(QWaitCondition* self) {
	self->wakeAll();
}

void QWaitCondition_NotifyOne(QWaitCondition* self) {
	self->notify_one();
}

void QWaitCondition_NotifyAll(QWaitCondition* self) {
	self->notify_all();
}

bool QWaitCondition_Wait22(QWaitCondition* self, QMutex* lockedMutex, QDeadlineTimer* deadline) {
	return self->wait(lockedMutex, *deadline);
}

bool QWaitCondition_Wait23(QWaitCondition* self, QReadWriteLock* lockedReadWriteLock, QDeadlineTimer* deadline) {
	return self->wait(lockedReadWriteLock, *deadline);
}

void QWaitCondition_Delete(QWaitCondition* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWaitCondition*>( self );
	} else {
		delete self;
	}
}

