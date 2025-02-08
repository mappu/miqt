#include <QAbstractState>
#include <QChildEvent>
#include <QEvent>
#include <QFinalState>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qfinalstate.h>
#include "gen_qfinalstate.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QFinalState_onEntry(QFinalState*, intptr_t, QEvent*);
void miqt_exec_callback_QFinalState_onExit(QFinalState*, intptr_t, QEvent*);
bool miqt_exec_callback_QFinalState_event(QFinalState*, intptr_t, QEvent*);
bool miqt_exec_callback_QFinalState_eventFilter(QFinalState*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFinalState_timerEvent(QFinalState*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFinalState_childEvent(QFinalState*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFinalState_customEvent(QFinalState*, intptr_t, QEvent*);
void miqt_exec_callback_QFinalState_connectNotify(QFinalState*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFinalState_disconnectNotify(QFinalState*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFinalState final : public QFinalState {
public:

	MiqtVirtualQFinalState(): QFinalState() {};
	MiqtVirtualQFinalState(QState* parent): QFinalState(parent) {};

	virtual ~MiqtVirtualQFinalState() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void onEntry(QEvent* event) override {
		if (handle__onEntry == 0) {
			QFinalState::onEntry(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFinalState_onEntry(this, handle__onEntry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_onEntry(QEvent* event) {

		QFinalState::onEntry(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onExit = 0;

	// Subclass to allow providing a Go implementation
	virtual void onExit(QEvent* event) override {
		if (handle__onExit == 0) {
			QFinalState::onExit(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFinalState_onExit(this, handle__onExit, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_onExit(QEvent* event) {

		QFinalState::onExit(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QFinalState::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QFinalState_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QFinalState::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QFinalState::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QFinalState_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QFinalState::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QFinalState::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFinalState_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QFinalState::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QFinalState::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFinalState_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QFinalState::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QFinalState::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFinalState_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QFinalState::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QFinalState::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFinalState_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QFinalState::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QFinalState::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFinalState_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QFinalState::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QFinalState_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFinalState_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFinalState_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFinalState_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QFinalState* QFinalState_new() {
	return new MiqtVirtualQFinalState();
}

QFinalState* QFinalState_new2(QState* parent) {
	return new MiqtVirtualQFinalState(parent);
}

void QFinalState_virtbase(QFinalState* src, QAbstractState** outptr_QAbstractState) {
	*outptr_QAbstractState = static_cast<QAbstractState*>(src);
}

QMetaObject* QFinalState_metaObject(const QFinalState* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFinalState_metacast(QFinalState* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFinalState_tr(const char* s) {
	QString _ret = QFinalState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_trUtf8(const char* s) {
	QString _ret = QFinalState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_tr2(const char* s, const char* c) {
	QString _ret = QFinalState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_tr3(const char* s, const char* c, int n) {
	QString _ret = QFinalState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_trUtf82(const char* s, const char* c) {
	QString _ret = QFinalState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QFinalState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFinalState_override_virtual_onEntry(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onEntry = slot;
	return true;
}

void QFinalState_virtualbase_onEntry(void* self, QEvent* event) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_onEntry(event);
}

bool QFinalState_override_virtual_onExit(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onExit = slot;
	return true;
}

void QFinalState_virtualbase_onExit(void* self, QEvent* event) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_onExit(event);
}

bool QFinalState_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QFinalState_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQFinalState*)(self) )->virtualbase_event(e);
}

bool QFinalState_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QFinalState_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQFinalState*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QFinalState_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QFinalState_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_timerEvent(event);
}

bool QFinalState_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QFinalState_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_childEvent(event);
}

bool QFinalState_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QFinalState_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_customEvent(event);
}

bool QFinalState_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QFinalState_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_connectNotify(signal);
}

bool QFinalState_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QFinalState_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QFinalState_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QFinalState_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QFinalState_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QFinalState_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QFinalState_delete(QFinalState* self) {
	delete self;
}

