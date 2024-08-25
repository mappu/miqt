#include "gen_qabstracteventdispatcher.h"
#include "qabstracteventdispatcher.h"

#include <QAbstractEventDispatcher>
#include <QAbstractNativeEventFilter>
#include <QMetaObject>
#include <QObject>
#include <QSocketNotifier>
#include <QString>
#include <QThread>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAbstractEventDispatcher_MetaObject(QAbstractEventDispatcher* self) {
	return (QMetaObject*) self->metaObject();
}

void QAbstractEventDispatcher_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractEventDispatcher::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractEventDispatcher_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractEventDispatcher::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAbstractEventDispatcher* QAbstractEventDispatcher_Instance() {
	return QAbstractEventDispatcher::instance();
}

bool QAbstractEventDispatcher_HasPendingEvents(QAbstractEventDispatcher* self) {
	return self->hasPendingEvents();
}

void QAbstractEventDispatcher_RegisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier) {
	self->registerSocketNotifier(notifier);
}

void QAbstractEventDispatcher_UnregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier) {
	self->unregisterSocketNotifier(notifier);
}

bool QAbstractEventDispatcher_UnregisterTimer(QAbstractEventDispatcher* self, int timerId) {
	return self->unregisterTimer(static_cast<int>(timerId));
}

bool QAbstractEventDispatcher_UnregisterTimers(QAbstractEventDispatcher* self, QObject* object) {
	return self->unregisterTimers(object);
}

int QAbstractEventDispatcher_RemainingTime(QAbstractEventDispatcher* self, int timerId) {
	return self->remainingTime(static_cast<int>(timerId));
}

void QAbstractEventDispatcher_WakeUp(QAbstractEventDispatcher* self) {
	self->wakeUp();
}

void QAbstractEventDispatcher_Interrupt(QAbstractEventDispatcher* self) {
	self->interrupt();
}

void QAbstractEventDispatcher_Flush(QAbstractEventDispatcher* self) {
	self->flush();
}

void QAbstractEventDispatcher_StartingUp(QAbstractEventDispatcher* self) {
	self->startingUp();
}

void QAbstractEventDispatcher_ClosingDown(QAbstractEventDispatcher* self) {
	self->closingDown();
}

void QAbstractEventDispatcher_InstallNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj) {
	self->installNativeEventFilter(filterObj);
}

void QAbstractEventDispatcher_RemoveNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj) {
	self->removeNativeEventFilter(filterObj);
}

void QAbstractEventDispatcher_AboutToBlock(QAbstractEventDispatcher* self) {
	self->aboutToBlock();
}

void QAbstractEventDispatcher_connect_AboutToBlock(QAbstractEventDispatcher* self, void* slot) {
	QAbstractEventDispatcher::connect(self, static_cast<void (QAbstractEventDispatcher::*)()>(&QAbstractEventDispatcher::aboutToBlock), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractEventDispatcher_Awake(QAbstractEventDispatcher* self) {
	self->awake();
}

void QAbstractEventDispatcher_connect_Awake(QAbstractEventDispatcher* self, void* slot) {
	QAbstractEventDispatcher::connect(self, static_cast<void (QAbstractEventDispatcher::*)()>(&QAbstractEventDispatcher::awake), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractEventDispatcher_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractEventDispatcher::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractEventDispatcher_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractEventDispatcher::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractEventDispatcher_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractEventDispatcher::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractEventDispatcher_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractEventDispatcher::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAbstractEventDispatcher* QAbstractEventDispatcher_Instance1(QThread* thread) {
	return QAbstractEventDispatcher::instance(thread);
}

void QAbstractEventDispatcher_Delete(QAbstractEventDispatcher* self) {
	delete self;
}

