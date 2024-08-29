#include <QEvent>
#include <QEventLoop>
#include <QEventLoopLocker>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include "qeventloop.h"

#include "gen_qeventloop.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QEventLoop* QEventLoop_new() {
	return new QEventLoop();
}

QEventLoop* QEventLoop_new2(QObject* parent) {
	return new QEventLoop(parent);
}

QMetaObject* QEventLoop_MetaObject(QEventLoop* self) {
	return (QMetaObject*) const_cast<const QEventLoop*>(self)->metaObject();
}

void QEventLoop_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QEventLoop::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventLoop_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QEventLoop::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QEventLoop_ProcessEvents(QEventLoop* self) {
	return self->processEvents();
}

void QEventLoop_ProcessEvents2(QEventLoop* self, int flags, int maximumTime) {
	self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags), static_cast<int>(maximumTime));
}

int QEventLoop_Exec(QEventLoop* self) {
	return self->exec();
}

void QEventLoop_Exit(QEventLoop* self) {
	self->exit();
}

bool QEventLoop_IsRunning(QEventLoop* self) {
	return const_cast<const QEventLoop*>(self)->isRunning();
}

void QEventLoop_WakeUp(QEventLoop* self) {
	self->wakeUp();
}

bool QEventLoop_Event(QEventLoop* self, QEvent* event) {
	return self->event(event);
}

void QEventLoop_Quit(QEventLoop* self) {
	self->quit();
}

void QEventLoop_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QEventLoop::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventLoop_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QEventLoop::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventLoop_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QEventLoop::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventLoop_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QEventLoop::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QEventLoop_ProcessEvents1(QEventLoop* self, int flags) {
	return self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

int QEventLoop_Exec1(QEventLoop* self, int flags) {
	return self->exec(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

void QEventLoop_Exit1(QEventLoop* self, int returnCode) {
	self->exit(static_cast<int>(returnCode));
}

void QEventLoop_Delete(QEventLoop* self) {
	delete self;
}

QEventLoopLocker* QEventLoopLocker_new() {
	return new QEventLoopLocker();
}

QEventLoopLocker* QEventLoopLocker_new2(QEventLoop* loop) {
	return new QEventLoopLocker(loop);
}

QEventLoopLocker* QEventLoopLocker_new3(QThread* thread) {
	return new QEventLoopLocker(thread);
}

void QEventLoopLocker_Delete(QEventLoopLocker* self) {
	delete self;
}

