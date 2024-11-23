#include <QAbstractEventDispatcher>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfo
#include <QAbstractNativeEventFilter>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSocketNotifier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <qabstracteventdispatcher.h>
#include "gen_qabstracteventdispatcher.h"
#include "_cgo_export.h"

class MiqtVirtualQAbstractEventDispatcher : public virtual QAbstractEventDispatcher {
public:

	MiqtVirtualQAbstractEventDispatcher(): QAbstractEventDispatcher() {};
	MiqtVirtualQAbstractEventDispatcher(QObject* parent): QAbstractEventDispatcher(parent) {};

	virtual ~MiqtVirtualQAbstractEventDispatcher() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ProcessEvents = 0;

	// Subclass to allow providing a Go implementation
	virtual bool processEvents(QEventLoop::ProcessEventsFlags flags) override {
		if (handle__ProcessEvents == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		QEventLoop::ProcessEventsFlags flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractEventDispatcher_ProcessEvents(this, handle__ProcessEvents, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasPendingEvents = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasPendingEvents() override {
		if (handle__HasPendingEvents == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractEventDispatcher_HasPendingEvents(this, handle__HasPendingEvents);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RegisterSocketNotifier = 0;

	// Subclass to allow providing a Go implementation
	virtual void registerSocketNotifier(QSocketNotifier* notifier) override {
		if (handle__RegisterSocketNotifier == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QSocketNotifier* sigval1 = notifier;

		miqt_exec_callback_QAbstractEventDispatcher_RegisterSocketNotifier(this, handle__RegisterSocketNotifier, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UnregisterSocketNotifier = 0;

	// Subclass to allow providing a Go implementation
	virtual void unregisterSocketNotifier(QSocketNotifier* notifier) override {
		if (handle__UnregisterSocketNotifier == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QSocketNotifier* sigval1 = notifier;

		miqt_exec_callback_QAbstractEventDispatcher_UnregisterSocketNotifier(this, handle__UnregisterSocketNotifier, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RegisterTimer2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void registerTimer(int timerId, int interval, Qt::TimerType timerType, QObject* object) override {
		if (handle__RegisterTimer2 == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = timerId;
		int sigval2 = interval;
		Qt::TimerType timerType_ret = timerType;
		int sigval3 = static_cast<int>(timerType_ret);
		QObject* sigval4 = object;

		miqt_exec_callback_QAbstractEventDispatcher_RegisterTimer2(this, handle__RegisterTimer2, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UnregisterTimer = 0;

	// Subclass to allow providing a Go implementation
	virtual bool unregisterTimer(int timerId) override {
		if (handle__UnregisterTimer == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = timerId;

		bool callback_return_value = miqt_exec_callback_QAbstractEventDispatcher_UnregisterTimer(this, handle__UnregisterTimer, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UnregisterTimers = 0;

	// Subclass to allow providing a Go implementation
	virtual bool unregisterTimers(QObject* object) override {
		if (handle__UnregisterTimers == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		QObject* sigval1 = object;

		bool callback_return_value = miqt_exec_callback_QAbstractEventDispatcher_UnregisterTimers(this, handle__UnregisterTimers, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RegisteredTimers = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QAbstractEventDispatcher::TimerInfo> registeredTimers(QObject* object) const override {
		if (handle__RegisteredTimers == 0) {
			return QList<QAbstractEventDispatcher::TimerInfo>(); // Pure virtual, there is no base we can call
		}
		
		QObject* sigval1 = object;

		struct miqt_array /* of QAbstractEventDispatcher__TimerInfo* */  callback_return_value = miqt_exec_callback_QAbstractEventDispatcher_RegisteredTimers(const_cast<MiqtVirtualQAbstractEventDispatcher*>(this), handle__RegisteredTimers, sigval1);
		QList<QAbstractEventDispatcher::TimerInfo> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QAbstractEventDispatcher__TimerInfo** callback_return_value_arr = static_cast<QAbstractEventDispatcher__TimerInfo**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemainingTime = 0;

	// Subclass to allow providing a Go implementation
	virtual int remainingTime(int timerId) override {
		if (handle__RemainingTime == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = timerId;

		int callback_return_value = miqt_exec_callback_QAbstractEventDispatcher_RemainingTime(this, handle__RemainingTime, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WakeUp = 0;

	// Subclass to allow providing a Go implementation
	virtual void wakeUp() override {
		if (handle__WakeUp == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_QAbstractEventDispatcher_WakeUp(this, handle__WakeUp);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Interrupt = 0;

	// Subclass to allow providing a Go implementation
	virtual void interrupt() override {
		if (handle__Interrupt == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_QAbstractEventDispatcher_Interrupt(this, handle__Interrupt);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Flush = 0;

	// Subclass to allow providing a Go implementation
	virtual void flush() override {
		if (handle__Flush == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_QAbstractEventDispatcher_Flush(this, handle__Flush);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StartingUp = 0;

	// Subclass to allow providing a Go implementation
	virtual void startingUp() override {
		if (handle__StartingUp == 0) {
			QAbstractEventDispatcher::startingUp();
			return;
		}
		

		miqt_exec_callback_QAbstractEventDispatcher_StartingUp(this, handle__StartingUp);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StartingUp() {

		QAbstractEventDispatcher::startingUp();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ClosingDown = 0;

	// Subclass to allow providing a Go implementation
	virtual void closingDown() override {
		if (handle__ClosingDown == 0) {
			QAbstractEventDispatcher::closingDown();
			return;
		}
		

		miqt_exec_callback_QAbstractEventDispatcher_ClosingDown(this, handle__ClosingDown);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ClosingDown() {

		QAbstractEventDispatcher::closingDown();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAbstractEventDispatcher::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractEventDispatcher_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAbstractEventDispatcher::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAbstractEventDispatcher::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractEventDispatcher_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAbstractEventDispatcher::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAbstractEventDispatcher::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractEventDispatcher_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAbstractEventDispatcher::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAbstractEventDispatcher::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractEventDispatcher_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAbstractEventDispatcher::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAbstractEventDispatcher::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractEventDispatcher_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAbstractEventDispatcher::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAbstractEventDispatcher::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractEventDispatcher_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAbstractEventDispatcher::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAbstractEventDispatcher::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractEventDispatcher_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAbstractEventDispatcher::disconnectNotify(*signal);

	}

};

void QAbstractEventDispatcher_new(QAbstractEventDispatcher** outptr_QAbstractEventDispatcher, QObject** outptr_QObject) {
	MiqtVirtualQAbstractEventDispatcher* ret = new MiqtVirtualQAbstractEventDispatcher();
	*outptr_QAbstractEventDispatcher = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QAbstractEventDispatcher_new2(QObject* parent, QAbstractEventDispatcher** outptr_QAbstractEventDispatcher, QObject** outptr_QObject) {
	MiqtVirtualQAbstractEventDispatcher* ret = new MiqtVirtualQAbstractEventDispatcher(parent);
	*outptr_QAbstractEventDispatcher = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QAbstractEventDispatcher_MetaObject(const QAbstractEventDispatcher* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractEventDispatcher_Metacast(QAbstractEventDispatcher* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractEventDispatcher_Tr(const char* s) {
	QString _ret = QAbstractEventDispatcher::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractEventDispatcher_TrUtf8(const char* s) {
	QString _ret = QAbstractEventDispatcher::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

struct miqt_array /* of QAbstractEventDispatcher__TimerInfo* */  QAbstractEventDispatcher_RegisteredTimers(const QAbstractEventDispatcher* self, QObject* object) {
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

bool QAbstractEventDispatcher_FilterNativeEvent(QAbstractEventDispatcher* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return self->filterNativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

void QAbstractEventDispatcher_AboutToBlock(QAbstractEventDispatcher* self) {
	self->aboutToBlock();
}

void QAbstractEventDispatcher_connect_AboutToBlock(QAbstractEventDispatcher* self, intptr_t slot) {
	MiqtVirtualQAbstractEventDispatcher::connect(self, static_cast<void (QAbstractEventDispatcher::*)()>(&QAbstractEventDispatcher::aboutToBlock), self, [=]() {
		miqt_exec_callback_QAbstractEventDispatcher_AboutToBlock(slot);
	});
}

void QAbstractEventDispatcher_Awake(QAbstractEventDispatcher* self) {
	self->awake();
}

void QAbstractEventDispatcher_connect_Awake(QAbstractEventDispatcher* self, intptr_t slot) {
	MiqtVirtualQAbstractEventDispatcher::connect(self, static_cast<void (QAbstractEventDispatcher::*)()>(&QAbstractEventDispatcher::awake), self, [=]() {
		miqt_exec_callback_QAbstractEventDispatcher_Awake(slot);
	});
}

struct miqt_string QAbstractEventDispatcher_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractEventDispatcher::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractEventDispatcher_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractEventDispatcher::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractEventDispatcher_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractEventDispatcher::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractEventDispatcher_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractEventDispatcher::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractEventDispatcher* QAbstractEventDispatcher_Instance1(QThread* thread) {
	return QAbstractEventDispatcher::instance(thread);
}

void QAbstractEventDispatcher_override_virtual_ProcessEvents(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__ProcessEvents = slot;
}

void QAbstractEventDispatcher_override_virtual_HasPendingEvents(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__HasPendingEvents = slot;
}

void QAbstractEventDispatcher_override_virtual_RegisterSocketNotifier(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__RegisterSocketNotifier = slot;
}

void QAbstractEventDispatcher_override_virtual_UnregisterSocketNotifier(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__UnregisterSocketNotifier = slot;
}

void QAbstractEventDispatcher_override_virtual_RegisterTimer2(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__RegisterTimer2 = slot;
}

void QAbstractEventDispatcher_override_virtual_UnregisterTimer(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__UnregisterTimer = slot;
}

void QAbstractEventDispatcher_override_virtual_UnregisterTimers(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__UnregisterTimers = slot;
}

void QAbstractEventDispatcher_override_virtual_RegisteredTimers(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__RegisteredTimers = slot;
}

void QAbstractEventDispatcher_override_virtual_RemainingTime(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__RemainingTime = slot;
}

void QAbstractEventDispatcher_override_virtual_WakeUp(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__WakeUp = slot;
}

void QAbstractEventDispatcher_override_virtual_Interrupt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__Interrupt = slot;
}

void QAbstractEventDispatcher_override_virtual_Flush(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__Flush = slot;
}

void QAbstractEventDispatcher_override_virtual_StartingUp(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__StartingUp = slot;
}

void QAbstractEventDispatcher_virtualbase_StartingUp(void* self) {
	( (MiqtVirtualQAbstractEventDispatcher*)(self) )->virtualbase_StartingUp();
}

void QAbstractEventDispatcher_override_virtual_ClosingDown(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__ClosingDown = slot;
}

void QAbstractEventDispatcher_virtualbase_ClosingDown(void* self) {
	( (MiqtVirtualQAbstractEventDispatcher*)(self) )->virtualbase_ClosingDown();
}

void QAbstractEventDispatcher_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__Event = slot;
}

bool QAbstractEventDispatcher_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractEventDispatcher*)(self) )->virtualbase_Event(event);
}

void QAbstractEventDispatcher_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__EventFilter = slot;
}

bool QAbstractEventDispatcher_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractEventDispatcher*)(self) )->virtualbase_EventFilter(watched, event);
}

void QAbstractEventDispatcher_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__TimerEvent = slot;
}

void QAbstractEventDispatcher_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractEventDispatcher*)(self) )->virtualbase_TimerEvent(event);
}

void QAbstractEventDispatcher_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__ChildEvent = slot;
}

void QAbstractEventDispatcher_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractEventDispatcher*)(self) )->virtualbase_ChildEvent(event);
}

void QAbstractEventDispatcher_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__CustomEvent = slot;
}

void QAbstractEventDispatcher_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractEventDispatcher*)(self) )->virtualbase_CustomEvent(event);
}

void QAbstractEventDispatcher_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__ConnectNotify = slot;
}

void QAbstractEventDispatcher_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractEventDispatcher*)(self) )->virtualbase_ConnectNotify(signal);
}

void QAbstractEventDispatcher_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( (QAbstractEventDispatcher*)(self) )->handle__DisconnectNotify = slot;
}

void QAbstractEventDispatcher_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractEventDispatcher*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAbstractEventDispatcher_Delete(QAbstractEventDispatcher* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAbstractEventDispatcher*>( self );
	} else {
		delete self;
	}
}

void QAbstractEventDispatcher__TimerInfo_new(int id, int i, int t, QAbstractEventDispatcher__TimerInfo** outptr_QAbstractEventDispatcher__TimerInfo) {
	QAbstractEventDispatcher::TimerInfo* ret = new QAbstractEventDispatcher::TimerInfo(static_cast<int>(id), static_cast<int>(i), static_cast<Qt::TimerType>(t));
	*outptr_QAbstractEventDispatcher__TimerInfo = ret;
}

void QAbstractEventDispatcher__TimerInfo_Delete(QAbstractEventDispatcher__TimerInfo* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAbstractEventDispatcher::TimerInfo*>( self );
	} else {
		delete self;
	}
}

