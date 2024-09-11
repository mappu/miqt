#include <QAbstractEventDispatcher>
#include <QDeadlineTimer>
#include <QEvent>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include "qthread.h"

#include "gen_qthread.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QThread* QThread_new() {
	return new QThread();
}

QThread* QThread_new2(QObject* parent) {
	return new QThread(parent);
}

QMetaObject* QThread_MetaObject(const QThread* self) {
	return (QMetaObject*) self->metaObject();
}

void QThread_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QThread::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QThread_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QThread::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QThread* QThread_CurrentThread() {
	return QThread::currentThread();
}

int QThread_IdealThreadCount() {
	return QThread::idealThreadCount();
}

void QThread_YieldCurrentThread() {
	QThread::yieldCurrentThread();
}

void QThread_SetPriority(QThread* self, uintptr_t priority) {
	self->setPriority(static_cast<QThread::Priority>(priority));
}

uintptr_t QThread_Priority(const QThread* self) {
	QThread::Priority ret = self->priority();
	return static_cast<uintptr_t>(ret);
}

bool QThread_IsFinished(const QThread* self) {
	return self->isFinished();
}

bool QThread_IsRunning(const QThread* self) {
	return self->isRunning();
}

void QThread_RequestInterruption(QThread* self) {
	self->requestInterruption();
}

bool QThread_IsInterruptionRequested(const QThread* self) {
	return self->isInterruptionRequested();
}

void QThread_SetStackSize(QThread* self, unsigned int stackSize) {
	self->setStackSize(static_cast<uint>(stackSize));
}

unsigned int QThread_StackSize(const QThread* self) {
	return self->stackSize();
}

void QThread_Exit(QThread* self) {
	self->exit();
}

QAbstractEventDispatcher* QThread_EventDispatcher(const QThread* self) {
	return self->eventDispatcher();
}

void QThread_SetEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher) {
	self->setEventDispatcher(eventDispatcher);
}

bool QThread_Event(QThread* self, QEvent* event) {
	return self->event(event);
}

int QThread_LoopLevel(const QThread* self) {
	return self->loopLevel();
}

void QThread_Start(QThread* self) {
	self->start();
}

void QThread_Terminate(QThread* self) {
	self->terminate();
}

void QThread_Quit(QThread* self) {
	self->quit();
}

bool QThread_Wait(QThread* self) {
	return self->wait();
}

bool QThread_WaitWithTime(QThread* self, unsigned long time) {
	return self->wait(static_cast<unsigned long>(time));
}

void QThread_Sleep(unsigned long param1) {
	QThread::sleep(static_cast<unsigned long>(param1));
}

void QThread_Msleep(unsigned long param1) {
	QThread::msleep(static_cast<unsigned long>(param1));
}

void QThread_Usleep(unsigned long param1) {
	QThread::usleep(static_cast<unsigned long>(param1));
}

void QThread_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QThread::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QThread_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QThread::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QThread_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QThread::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QThread_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QThread::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QThread_Exit1(QThread* self, int retcode) {
	self->exit(static_cast<int>(retcode));
}

void QThread_Start1(QThread* self, uintptr_t param1) {
	self->start(static_cast<QThread::Priority>(param1));
}

bool QThread_Wait1(QThread* self, QDeadlineTimer* deadline) {
	return self->wait(*deadline);
}

void QThread_Delete(QThread* self) {
	delete self;
}

