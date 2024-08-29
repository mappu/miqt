#include <QAbstractEventDispatcher>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfo
#include <QAbstractNativeEventFilter>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSocketNotifier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include "qabstracteventdispatcher.h"

#include "gen_qabstracteventdispatcher.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAbstractEventDispatcher_MetaObject(QAbstractEventDispatcher* self) {
	return (QMetaObject*) const_cast<const QAbstractEventDispatcher*>(self)->metaObject();
}

void QAbstractEventDispatcher_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractEventDispatcher::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractEventDispatcher_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
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

bool QAbstractEventDispatcher_ProcessEvents(QAbstractEventDispatcher* self, int flags) {
	return self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags));
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

int QAbstractEventDispatcher_RegisterTimer(QAbstractEventDispatcher* self, int interval, uintptr_t timerType, QObject* object) {
	return self->registerTimer(static_cast<int>(interval), static_cast<Qt::TimerType>(timerType), object);
}

void QAbstractEventDispatcher_RegisterTimer2(QAbstractEventDispatcher* self, int timerId, int interval, uintptr_t timerType, QObject* object) {
	self->registerTimer(static_cast<int>(timerId), static_cast<int>(interval), static_cast<Qt::TimerType>(timerType), object);
}

bool QAbstractEventDispatcher_UnregisterTimer(QAbstractEventDispatcher* self, int timerId) {
	return self->unregisterTimer(static_cast<int>(timerId));
}

bool QAbstractEventDispatcher_UnregisterTimers(QAbstractEventDispatcher* self, QObject* object) {
	return self->unregisterTimers(object);
}

void QAbstractEventDispatcher_RegisteredTimers(QAbstractEventDispatcher* self, QObject* object, QAbstractEventDispatcher__TimerInfo*** _out, size_t* _out_len) {
	QList<QAbstractEventDispatcher::TimerInfo> ret = const_cast<const QAbstractEventDispatcher*>(self)->registeredTimers(object);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QAbstractEventDispatcher__TimerInfo** __out = static_cast<QAbstractEventDispatcher__TimerInfo**>(malloc(sizeof(QAbstractEventDispatcher__TimerInfo**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QAbstractEventDispatcher::TimerInfo(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
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

void QAbstractEventDispatcher_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractEventDispatcher::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractEventDispatcher_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractEventDispatcher::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractEventDispatcher_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractEventDispatcher::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractEventDispatcher_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
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

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new(int id, int i, uintptr_t t) {
	return new QAbstractEventDispatcher::TimerInfo(static_cast<int>(id), static_cast<int>(i), static_cast<Qt::TimerType>(t));
}

void QAbstractEventDispatcher__TimerInfo_Delete(QAbstractEventDispatcher__TimerInfo* self) {
	delete self;
}

