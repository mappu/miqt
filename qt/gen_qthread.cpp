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
#include "_cgo_export.h"

QThread* QThread_new() {
	return new QThread();
}

QThread* QThread_new2(QObject* parent) {
	return new QThread(parent);
}

QMetaObject* QThread_MetaObject(const QThread* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QThread_Tr(const char* s) {
	QString _ret = QThread::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QThread_TrUtf8(const char* s) {
	QString _ret = QThread::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

void QThread_SetPriority(QThread* self, int priority) {
	self->setPriority(static_cast<QThread::Priority>(priority));
}

int QThread_Priority(const QThread* self) {
	QThread::Priority _ret = self->priority();
	return static_cast<int>(_ret);
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
	uint _ret = self->stackSize();
	return static_cast<unsigned int>(_ret);
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

struct miqt_string* QThread_Tr2(const char* s, const char* c) {
	QString _ret = QThread::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QThread_Tr3(const char* s, const char* c, int n) {
	QString _ret = QThread::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QThread_TrUtf82(const char* s, const char* c) {
	QString _ret = QThread::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QThread_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QThread::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QThread_Exit1(QThread* self, int retcode) {
	self->exit(static_cast<int>(retcode));
}

void QThread_Start1(QThread* self, int param1) {
	self->start(static_cast<QThread::Priority>(param1));
}

bool QThread_Wait1(QThread* self, QDeadlineTimer* deadline) {
	return self->wait(*deadline);
}

void QThread_Delete(QThread* self) {
	delete self;
}

