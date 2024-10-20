#include <QMetaObject>
#include <QObject>
#include <QRunnable>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QThreadPool>
#include <qthreadpool.h>
#include "gen_qthreadpool.h"
#include "_cgo_export.h"

QThreadPool* QThreadPool_new() {
	return new QThreadPool();
}

QThreadPool* QThreadPool_new2(QObject* parent) {
	return new QThreadPool(parent);
}

QMetaObject* QThreadPool_MetaObject(const QThreadPool* self) {
	return (QMetaObject*) self->metaObject();
}

void* QThreadPool_Metacast(QThreadPool* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QThreadPool_Tr(const char* s) {
	QString _ret = QThreadPool::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QThreadPool* QThreadPool_GlobalInstance() {
	return QThreadPool::globalInstance();
}

void QThreadPool_Start(QThreadPool* self, QRunnable* runnable) {
	self->start(runnable);
}

bool QThreadPool_TryStart(QThreadPool* self, QRunnable* runnable) {
	return self->tryStart(runnable);
}

void QThreadPool_StartOnReservedThread(QThreadPool* self, QRunnable* runnable) {
	self->startOnReservedThread(runnable);
}

int QThreadPool_ExpiryTimeout(const QThreadPool* self) {
	return self->expiryTimeout();
}

void QThreadPool_SetExpiryTimeout(QThreadPool* self, int expiryTimeout) {
	self->setExpiryTimeout(static_cast<int>(expiryTimeout));
}

int QThreadPool_MaxThreadCount(const QThreadPool* self) {
	return self->maxThreadCount();
}

void QThreadPool_SetMaxThreadCount(QThreadPool* self, int maxThreadCount) {
	self->setMaxThreadCount(static_cast<int>(maxThreadCount));
}

int QThreadPool_ActiveThreadCount(const QThreadPool* self) {
	return self->activeThreadCount();
}

void QThreadPool_SetStackSize(QThreadPool* self, unsigned int stackSize) {
	self->setStackSize(static_cast<uint>(stackSize));
}

unsigned int QThreadPool_StackSize(const QThreadPool* self) {
	uint _ret = self->stackSize();
	return static_cast<unsigned int>(_ret);
}

void QThreadPool_SetThreadPriority(QThreadPool* self, int priority) {
	self->setThreadPriority(static_cast<QThread::Priority>(priority));
}

int QThreadPool_ThreadPriority(const QThreadPool* self) {
	QThread::Priority _ret = self->threadPriority();
	return static_cast<int>(_ret);
}

void QThreadPool_ReserveThread(QThreadPool* self) {
	self->reserveThread();
}

void QThreadPool_ReleaseThread(QThreadPool* self) {
	self->releaseThread();
}

bool QThreadPool_WaitForDone(QThreadPool* self) {
	return self->waitForDone();
}

void QThreadPool_Clear(QThreadPool* self) {
	self->clear();
}

bool QThreadPool_Contains(const QThreadPool* self, QThread* thread) {
	return self->contains(thread);
}

bool QThreadPool_TryTake(QThreadPool* self, QRunnable* runnable) {
	return self->tryTake(runnable);
}

struct miqt_string QThreadPool_Tr2(const char* s, const char* c) {
	QString _ret = QThreadPool::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThreadPool_Tr3(const char* s, const char* c, int n) {
	QString _ret = QThreadPool::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QThreadPool_Start2(QThreadPool* self, QRunnable* runnable, int priority) {
	self->start(runnable, static_cast<int>(priority));
}

bool QThreadPool_WaitForDone1(QThreadPool* self, int msecs) {
	return self->waitForDone(static_cast<int>(msecs));
}

void QThreadPool_Delete(QThreadPool* self) {
	delete self;
}

