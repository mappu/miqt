#include <QBasicMutex>
#include <QMutex>
#include <QMutexLocker>
#include <QRecursiveMutex>
#include "qmutex.h"

#include "gen_qmutex.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

bool QBasicMutex_IsRecursive2(QBasicMutex* self) {
	return const_cast<const QBasicMutex*>(self)->isRecursive();
}

void QBasicMutex_Delete(QBasicMutex* self) {
	delete self;
}

QMutex* QMutex_new() {
	return new QMutex();
}

QMutex* QMutex_new2(uintptr_t mode) {
	return new QMutex(static_cast<QMutex::RecursionMode>(mode));
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

bool QMutex_IsRecursive(QMutex* self) {
	return const_cast<const QMutex*>(self)->isRecursive();
}

bool QMutex_TryLock1(QMutex* self, int timeout) {
	return self->tryLock(static_cast<int>(timeout));
}

void QMutex_Delete(QMutex* self) {
	delete self;
}

QRecursiveMutex* QRecursiveMutex_new() {
	return new QRecursiveMutex();
}

void QRecursiveMutex_Delete(QRecursiveMutex* self) {
	delete self;
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

QMutex* QMutexLocker_Mutex(QMutexLocker* self) {
	return const_cast<const QMutexLocker*>(self)->mutex();
}

void QMutexLocker_Delete(QMutexLocker* self) {
	delete self;
}

