#include <QDeadlineTimer>
#include <QMutex>
#include <QReadWriteLock>
#include <QWaitCondition>
#include <qwaitcondition.h>
#include "gen_qwaitcondition.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWaitCondition* QWaitCondition_new() {
	return new QWaitCondition();
}

bool QWaitCondition_wait(QWaitCondition* self, QMutex* lockedMutex) {
	return self->wait(lockedMutex);
}

bool QWaitCondition_wait2(QWaitCondition* self, QMutex* lockedMutex, unsigned long time) {
	return self->wait(lockedMutex, static_cast<unsigned long>(time));
}

bool QWaitCondition_waitWithLockedReadWriteLock(QWaitCondition* self, QReadWriteLock* lockedReadWriteLock) {
	return self->wait(lockedReadWriteLock);
}

bool QWaitCondition_wait3(QWaitCondition* self, QReadWriteLock* lockedReadWriteLock, unsigned long time) {
	return self->wait(lockedReadWriteLock, static_cast<unsigned long>(time));
}

void QWaitCondition_wakeOne(QWaitCondition* self) {
	self->wakeOne();
}

void QWaitCondition_wakeAll(QWaitCondition* self) {
	self->wakeAll();
}

void QWaitCondition_notifyOne(QWaitCondition* self) {
	self->notify_one();
}

void QWaitCondition_notifyAll(QWaitCondition* self) {
	self->notify_all();
}

bool QWaitCondition_wait22(QWaitCondition* self, QMutex* lockedMutex, QDeadlineTimer* deadline) {
	return self->wait(lockedMutex, *deadline);
}

bool QWaitCondition_wait23(QWaitCondition* self, QReadWriteLock* lockedReadWriteLock, QDeadlineTimer* deadline) {
	return self->wait(lockedReadWriteLock, *deadline);
}

void QWaitCondition_delete(QWaitCondition* self) {
	delete self;
}

