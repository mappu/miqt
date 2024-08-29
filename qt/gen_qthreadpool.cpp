#include <QMetaObject>
#include <QObject>
#include <QRunnable>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QThreadPool>
#include "qthreadpool.h"

#include "gen_qthreadpool.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QThreadPool* QThreadPool_new() {
	return new QThreadPool();
}

QThreadPool* QThreadPool_new2(QObject* parent) {
	return new QThreadPool(parent);
}

QMetaObject* QThreadPool_MetaObject(QThreadPool* self) {
	return (QMetaObject*) const_cast<const QThreadPool*>(self)->metaObject();
}

void QThreadPool_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QThreadPool::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QThreadPool_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QThreadPool::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

int QThreadPool_ExpiryTimeout(QThreadPool* self) {
	return const_cast<const QThreadPool*>(self)->expiryTimeout();
}

void QThreadPool_SetExpiryTimeout(QThreadPool* self, int expiryTimeout) {
	self->setExpiryTimeout(static_cast<int>(expiryTimeout));
}

int QThreadPool_MaxThreadCount(QThreadPool* self) {
	return const_cast<const QThreadPool*>(self)->maxThreadCount();
}

void QThreadPool_SetMaxThreadCount(QThreadPool* self, int maxThreadCount) {
	self->setMaxThreadCount(static_cast<int>(maxThreadCount));
}

int QThreadPool_ActiveThreadCount(QThreadPool* self) {
	return const_cast<const QThreadPool*>(self)->activeThreadCount();
}

void QThreadPool_SetStackSize(QThreadPool* self, unsigned int stackSize) {
	self->setStackSize(static_cast<uint>(stackSize));
}

unsigned int QThreadPool_StackSize(QThreadPool* self) {
	return const_cast<const QThreadPool*>(self)->stackSize();
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

bool QThreadPool_Contains(QThreadPool* self, QThread* thread) {
	return const_cast<const QThreadPool*>(self)->contains(thread);
}

void QThreadPool_Cancel(QThreadPool* self, QRunnable* runnable) {
	self->cancel(runnable);
}

bool QThreadPool_TryTake(QThreadPool* self, QRunnable* runnable) {
	return self->tryTake(runnable);
}

void QThreadPool_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QThreadPool::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QThreadPool_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QThreadPool::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QThreadPool_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QThreadPool::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QThreadPool_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QThreadPool::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

