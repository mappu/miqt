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

void miqt_exec_callback_QTimer_timerEvent(QTimer*, intptr_t, QTimerEvent*);
bool miqt_exec_callback_QTimer_event(QTimer*, intptr_t, QEvent*);
bool miqt_exec_callback_QTimer_eventFilter(QTimer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTimer_childEvent(QTimer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTimer_customEvent(QTimer*, intptr_t, QEvent*);
void miqt_exec_callback_QTimer_connectNotify(QTimer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTimer_disconnectNotify(QTimer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTimer final : public QTimer {
public:

	MiqtVirtualQTimer(): QTimer() {};
	MiqtVirtualQTimer(QObject* parent): QTimer(parent) {};

	virtual ~MiqtVirtualQTimer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__timerEvent == 0) {
			QTimer::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QTimer_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* param1) {

		QTimer::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTimer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTimer_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QTimer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTimer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTimer_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QTimer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTimer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTimer_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTimer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTimer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTimer_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTimer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTimer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTimer_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTimer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTimer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTimer_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTimer::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QTimer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTimer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTimer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTimer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QTimer_metaObject(const QTimer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTimer_metacast(QTimer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTimer_tr(const char* s) {
	QString _ret = QTimer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTimer_isActive(const QTimer* self) {
	return self->isActive();
}

int QTimer_timerId(const QTimer* self) {
	return self->timerId();
}

void QTimer_setInterval(QTimer* self, int msec) {
	self->setInterval(static_cast<int>(msec));
}

int QTimer_interval(const QTimer* self) {
	return self->interval();
}

int QTimer_remainingTime(const QTimer* self) {
	return self->remainingTime();
}

void QTimer_setTimerType(QTimer* self, int atype) {
	self->setTimerType(static_cast<Qt::TimerType>(atype));
}

int QTimer_timerType(const QTimer* self) {
	Qt::TimerType _ret = self->timerType();
	return static_cast<int>(_ret);
}

void QTimer_setSingleShot(QTimer* self, bool singleShot) {
	self->setSingleShot(singleShot);
}

bool QTimer_isSingleShot(const QTimer* self) {
	return self->isSingleShot();
}

void QTimer_start(QTimer* self, int msec) {
	self->start(static_cast<int>(msec));
}

void QTimer_start2(QTimer* self) {
	self->start();
}

void QTimer_stop(QTimer* self) {
	self->stop();
}

struct miqt_string QTimer_tr2(const char* s, const char* c) {
	QString _ret = QTimer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimer_tr3(const char* s, const char* c, int n) {
	QString _ret = QTimer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTimer_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTimer_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQTimer*)(self) )->virtualbase_timerEvent(param1);
}

bool QTimer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTimer_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTimer*)(self) )->virtualbase_event(event);
}

bool QTimer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTimer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTimer*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QTimer_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTimer_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTimer*)(self) )->virtualbase_childEvent(event);
}

bool QTimer_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTimer_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTimer*)(self) )->virtualbase_customEvent(event);
}

bool QTimer_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTimer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTimer*)(self) )->virtualbase_connectNotify(signal);
}

bool QTimer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTimer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTimer*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QTimer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTimer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTimer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTimer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTimer* self_cast = dynamic_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTimer_delete(QTimer* self) {
	delete self;
}

