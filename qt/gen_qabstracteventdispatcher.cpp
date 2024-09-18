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
#include "_cgo_export.h"

QMetaObject* QAbstractEventDispatcher_MetaObject(const QAbstractEventDispatcher* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QAbstractEventDispatcher_Tr(const char* s) {
	QString _ret = QAbstractEventDispatcher::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractEventDispatcher_TrUtf8(const char* s) {
	QString _ret = QAbstractEventDispatcher::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

int QAbstractEventDispatcher_RegisterTimer(QAbstractEventDispatcher* self, int interval, int timerType, QObject* object) {
	return self->registerTimer(static_cast<int>(interval), static_cast<Qt::TimerType>(timerType), object);
}

void QAbstractEventDispatcher_RegisterTimer2(QAbstractEventDispatcher* self, int timerId, int interval, int timerType, QObject* object) {
	self->registerTimer(static_cast<int>(timerId), static_cast<int>(interval), static_cast<Qt::TimerType>(timerType), object);
}

bool QAbstractEventDispatcher_UnregisterTimer(QAbstractEventDispatcher* self, int timerId) {
	return self->unregisterTimer(static_cast<int>(timerId));
}

bool QAbstractEventDispatcher_UnregisterTimers(QAbstractEventDispatcher* self, QObject* object) {
	return self->unregisterTimers(object);
}

struct miqt_array* QAbstractEventDispatcher_RegisteredTimers(const QAbstractEventDispatcher* self, QObject* object) {
	QList<QAbstractEventDispatcher::TimerInfo> _ret = self->registeredTimers(object);
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractEventDispatcher__TimerInfo** _arr = static_cast<QAbstractEventDispatcher__TimerInfo**>(malloc(sizeof(QAbstractEventDispatcher__TimerInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QAbstractEventDispatcher::TimerInfo(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
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
		miqt_exec_callback_QAbstractEventDispatcher_AboutToBlock(slot);
	});
}

void QAbstractEventDispatcher_Awake(QAbstractEventDispatcher* self) {
	self->awake();
}

void QAbstractEventDispatcher_connect_Awake(QAbstractEventDispatcher* self, void* slot) {
	QAbstractEventDispatcher::connect(self, static_cast<void (QAbstractEventDispatcher::*)()>(&QAbstractEventDispatcher::awake), self, [=]() {
		miqt_exec_callback_QAbstractEventDispatcher_Awake(slot);
	});
}

struct miqt_string* QAbstractEventDispatcher_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractEventDispatcher::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractEventDispatcher_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractEventDispatcher::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractEventDispatcher_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractEventDispatcher::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractEventDispatcher_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractEventDispatcher::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QAbstractEventDispatcher* QAbstractEventDispatcher_Instance1(QThread* thread) {
	return QAbstractEventDispatcher::instance(thread);
}

void QAbstractEventDispatcher_Delete(QAbstractEventDispatcher* self) {
	delete self;
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new(int id, int i, int t) {
	return new QAbstractEventDispatcher::TimerInfo(static_cast<int>(id), static_cast<int>(i), static_cast<Qt::TimerType>(t));
}

void QAbstractEventDispatcher__TimerInfo_Delete(QAbstractEventDispatcher__TimerInfo* self) {
	delete self;
}

