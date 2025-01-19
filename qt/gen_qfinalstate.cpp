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

void miqt_exec_callback_QFinalState_OnEntry(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFinalState_OnExit(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QFinalState_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QFinalState_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFinalState_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFinalState_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFinalState_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFinalState_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFinalState_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFinalState final : public QFinalState {
public:

	MiqtVirtualQFinalState(): QFinalState() {};
	MiqtVirtualQFinalState(QState* parent): QFinalState(parent) {};

	virtual ~MiqtVirtualQFinalState() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void onEntry(QEvent* event) override {
		if (handle__OnEntry == 0) {
			QFinalState::onEntry(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFinalState_OnEntry(this, handle__OnEntry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnEntry(QEvent* event) {

		QFinalState::onEntry(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnExit = 0;

	// Subclass to allow providing a Go implementation
	virtual void onExit(QEvent* event) override {
		if (handle__OnExit == 0) {
			QFinalState::onExit(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFinalState_OnExit(this, handle__OnExit, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnExit(QEvent* event) {

		QFinalState::onExit(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QFinalState::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QFinalState_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QFinalState::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QFinalState::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QFinalState_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QFinalState::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QFinalState::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFinalState_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QFinalState::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QFinalState::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFinalState_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QFinalState::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QFinalState::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFinalState_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QFinalState::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QFinalState::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFinalState_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QFinalState::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QFinalState::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFinalState_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QFinalState::disconnectNotify(*signal);

	}

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

QMetaObject* QFinalState_MetaObject(const QFinalState* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFinalState_Metacast(QFinalState* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFinalState_Tr(const char* s) {
	QString _ret = QFinalState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_TrUtf8(const char* s) {
	QString _ret = QFinalState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_Tr2(const char* s, const char* c) {
	QString _ret = QFinalState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFinalState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_TrUtf82(const char* s, const char* c) {
	QString _ret = QFinalState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QFinalState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFinalState_override_virtual_OnEntry(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OnEntry = slot;
	return true;
}

void QFinalState_virtualbase_OnEntry(void* self, QEvent* event) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_OnEntry(event);
}

bool QFinalState_override_virtual_OnExit(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OnExit = slot;
	return true;
}

void QFinalState_virtualbase_OnExit(void* self, QEvent* event) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_OnExit(event);
}

bool QFinalState_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QFinalState_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQFinalState*)(self) )->virtualbase_Event(e);
}

bool QFinalState_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QFinalState_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQFinalState*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QFinalState_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QFinalState_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_TimerEvent(event);
}

bool QFinalState_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QFinalState_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_ChildEvent(event);
}

bool QFinalState_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QFinalState_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_CustomEvent(event);
}

bool QFinalState_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QFinalState_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QFinalState_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFinalState* self_cast = dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QFinalState_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QFinalState_Delete(QFinalState* self) {
	delete self;
}

