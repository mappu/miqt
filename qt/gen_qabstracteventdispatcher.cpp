#include <QAbstractEventDispatcher>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfo
#include <QAbstractNativeEventFilter>
#include <QByteArray>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSocketNotifier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <qabstracteventdispatcher.h>
#include "gen_qabstracteventdispatcher.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractEventDispatcher_aboutToBlock(intptr_t);
void miqt_exec_callback_QAbstractEventDispatcher_awake(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QAbstractEventDispatcher_virtbase(QAbstractEventDispatcher* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractEventDispatcher_metaObject(const QAbstractEventDispatcher* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractEventDispatcher_metacast(QAbstractEventDispatcher* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractEventDispatcher_tr(const char* s) {
	QString _ret = QAbstractEventDispatcher::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractEventDispatcher_trUtf8(const char* s) {
	QString _ret = QAbstractEventDispatcher::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractEventDispatcher* QAbstractEventDispatcher_instance() {
	return QAbstractEventDispatcher::instance();
}

bool QAbstractEventDispatcher_processEvents(QAbstractEventDispatcher* self, int flags) {
	return self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

bool QAbstractEventDispatcher_hasPendingEvents(QAbstractEventDispatcher* self) {
	return self->hasPendingEvents();
}

void QAbstractEventDispatcher_registerSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier) {
	self->registerSocketNotifier(notifier);
}

void QAbstractEventDispatcher_unregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier) {
	self->unregisterSocketNotifier(notifier);
}

int QAbstractEventDispatcher_registerTimer(QAbstractEventDispatcher* self, int interval, int timerType, QObject* object) {
	return self->registerTimer(static_cast<int>(interval), static_cast<Qt::TimerType>(timerType), object);
}

void QAbstractEventDispatcher_registerTimer2(QAbstractEventDispatcher* self, int timerId, int interval, int timerType, QObject* object) {
	self->registerTimer(static_cast<int>(timerId), static_cast<int>(interval), static_cast<Qt::TimerType>(timerType), object);
}

bool QAbstractEventDispatcher_unregisterTimer(QAbstractEventDispatcher* self, int timerId) {
	return self->unregisterTimer(static_cast<int>(timerId));
}

bool QAbstractEventDispatcher_unregisterTimers(QAbstractEventDispatcher* self, QObject* object) {
	return self->unregisterTimers(object);
}

struct miqt_array /* of QAbstractEventDispatcher__TimerInfo* */  QAbstractEventDispatcher_registeredTimers(const QAbstractEventDispatcher* self, QObject* object) {
	QList<QAbstractEventDispatcher::TimerInfo> _ret = self->registeredTimers(object);
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractEventDispatcher__TimerInfo** _arr = static_cast<QAbstractEventDispatcher__TimerInfo**>(malloc(sizeof(QAbstractEventDispatcher__TimerInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QAbstractEventDispatcher::TimerInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QAbstractEventDispatcher_remainingTime(QAbstractEventDispatcher* self, int timerId) {
	return self->remainingTime(static_cast<int>(timerId));
}

void QAbstractEventDispatcher_wakeUp(QAbstractEventDispatcher* self) {
	self->wakeUp();
}

void QAbstractEventDispatcher_interrupt(QAbstractEventDispatcher* self) {
	self->interrupt();
}

void QAbstractEventDispatcher_flush(QAbstractEventDispatcher* self) {
	self->flush();
}

void QAbstractEventDispatcher_startingUp(QAbstractEventDispatcher* self) {
	self->startingUp();
}

void QAbstractEventDispatcher_closingDown(QAbstractEventDispatcher* self) {
	self->closingDown();
}

void QAbstractEventDispatcher_installNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj) {
	self->installNativeEventFilter(filterObj);
}

void QAbstractEventDispatcher_removeNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj) {
	self->removeNativeEventFilter(filterObj);
}

bool QAbstractEventDispatcher_filterNativeEvent(QAbstractEventDispatcher* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return self->filterNativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

void QAbstractEventDispatcher_aboutToBlock(QAbstractEventDispatcher* self) {
	self->aboutToBlock();
}

void QAbstractEventDispatcher_connect_aboutToBlock(QAbstractEventDispatcher* self, intptr_t slot) {
	QAbstractEventDispatcher::connect(self, static_cast<void (QAbstractEventDispatcher::*)()>(&QAbstractEventDispatcher::aboutToBlock), self, [=]() {
		miqt_exec_callback_QAbstractEventDispatcher_aboutToBlock(slot);
	});
}

void QAbstractEventDispatcher_awake(QAbstractEventDispatcher* self) {
	self->awake();
}

void QAbstractEventDispatcher_connect_awake(QAbstractEventDispatcher* self, intptr_t slot) {
	QAbstractEventDispatcher::connect(self, static_cast<void (QAbstractEventDispatcher::*)()>(&QAbstractEventDispatcher::awake), self, [=]() {
		miqt_exec_callback_QAbstractEventDispatcher_awake(slot);
	});
}

struct miqt_string QAbstractEventDispatcher_tr2(const char* s, const char* c) {
	QString _ret = QAbstractEventDispatcher::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractEventDispatcher_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractEventDispatcher::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractEventDispatcher_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractEventDispatcher::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractEventDispatcher_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractEventDispatcher::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractEventDispatcher* QAbstractEventDispatcher_instance1(QThread* thread) {
	return QAbstractEventDispatcher::instance(thread);
}

void QAbstractEventDispatcher_delete(QAbstractEventDispatcher* self) {
	delete self;
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new(int id, int i, int t) {
	return new QAbstractEventDispatcher::TimerInfo(static_cast<int>(id), static_cast<int>(i), static_cast<Qt::TimerType>(t));
}

void QAbstractEventDispatcher__TimerInfo_delete(QAbstractEventDispatcher__TimerInfo* self) {
	delete self;
}

