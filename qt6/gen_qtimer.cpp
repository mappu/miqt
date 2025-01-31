#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimer>
#include <QTimerEvent>
#include <qtimer.h>
#include "gen_qtimer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTimer_TimerEvent(QTimer*, intptr_t, QTimerEvent*);
bool miqt_exec_callback_QTimer_Event(QTimer*, intptr_t, QEvent*);
bool miqt_exec_callback_QTimer_EventFilter(QTimer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTimer_ChildEvent(QTimer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTimer_CustomEvent(QTimer*, intptr_t, QEvent*);
void miqt_exec_callback_QTimer_ConnectNotify(QTimer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTimer_DisconnectNotify(QTimer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTimer final : public QTimer {
public:

	MiqtVirtualQTimer(): QTimer() {};
	MiqtVirtualQTimer(QObject* parent): QTimer(parent) {};

	virtual ~MiqtVirtualQTimer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QTimer::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QTimer_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QTimer::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QTimer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTimer_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QTimer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QTimer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTimer_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QTimer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QTimer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTimer_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QTimer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QTimer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTimer_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QTimer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QTimer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTimer_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QTimer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QTimer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTimer_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QTimer::disconnectNotify(*signal);

	}

};

QTimer* QTimer_new() {
	return new MiqtVirtualQTimer();
}

QTimer* QTimer_new2(QObject* parent) {
	return new MiqtVirtualQTimer(parent);
}

void QTimer_virtbase(QTimer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QTimer_MetaObject(const QTimer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTimer_Metacast(QTimer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTimer_Tr(const char* s) {
	QString _ret = QTimer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTimer_IsActive(const QTimer* self) {
	return self->isActive();
}

int QTimer_TimerId(const QTimer* self) {
	return self->timerId();
}

void QTimer_SetInterval(QTimer* self, int msec) {
	self->setInterval(static_cast<int>(msec));
}

int QTimer_Interval(const QTimer* self) {
	return self->interval();
}

int QTimer_RemainingTime(const QTimer* self) {
	return self->remainingTime();
}

void QTimer_SetTimerType(QTimer* self, int atype) {
	self->setTimerType(static_cast<Qt::TimerType>(atype));
}

int QTimer_TimerType(const QTimer* self) {
	Qt::TimerType _ret = self->timerType();
	return static_cast<int>(_ret);
}

void QTimer_SetSingleShot(QTimer* self, bool singleShot) {
	self->setSingleShot(singleShot);
}

bool QTimer_IsSingleShot(const QTimer* self) {
	return self->isSingleShot();
}

void QTimer_Start(QTimer* self, int msec) {
	self->start(static_cast<int>(msec));
}

void QTimer_Start2(QTimer* self) {
	self->start();
}

void QTimer_Stop(QTimer* self) {
	self->stop();
}

struct miqt_string QTimer_Tr2(const char* s, const char* c) {
	QString _ret = QTimer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTimer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTimer_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QTimer_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQTimer*)(self) )->virtualbase_TimerEvent(param1);
}

bool QTimer_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTimer_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTimer*)(self) )->virtualbase_Event(event);
}

bool QTimer_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QTimer_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTimer*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QTimer_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QTimer_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTimer*)(self) )->virtualbase_ChildEvent(event);
}

bool QTimer_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QTimer_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTimer*)(self) )->virtualbase_CustomEvent(event);
}

bool QTimer_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QTimer_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTimer*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QTimer_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QTimer_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTimer*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QTimer_Delete(QTimer* self) {
	delete self;
}

