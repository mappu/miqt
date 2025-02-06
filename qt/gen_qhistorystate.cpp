#include <QAbstractState>
#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QHistoryState>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qhistorystate.h>
#include "gen_qhistorystate.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QHistoryState_onEntry(QHistoryState*, intptr_t, QEvent*);
void miqt_exec_callback_QHistoryState_onExit(QHistoryState*, intptr_t, QEvent*);
bool miqt_exec_callback_QHistoryState_event(QHistoryState*, intptr_t, QEvent*);
bool miqt_exec_callback_QHistoryState_eventFilter(QHistoryState*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHistoryState_timerEvent(QHistoryState*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHistoryState_childEvent(QHistoryState*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHistoryState_customEvent(QHistoryState*, intptr_t, QEvent*);
void miqt_exec_callback_QHistoryState_connectNotify(QHistoryState*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHistoryState_disconnectNotify(QHistoryState*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQHistoryState final : public QHistoryState {
public:

	MiqtVirtualQHistoryState(): QHistoryState() {};
	MiqtVirtualQHistoryState(QHistoryState::HistoryType type): QHistoryState(type) {};
	MiqtVirtualQHistoryState(QState* parent): QHistoryState(parent) {};
	MiqtVirtualQHistoryState(QHistoryState::HistoryType type, QState* parent): QHistoryState(type, parent) {};

	virtual ~MiqtVirtualQHistoryState() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void onEntry(QEvent* event) override {
		if (handle__onEntry == 0) {
			QHistoryState::onEntry(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHistoryState_onEntry(this, handle__onEntry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_onEntry(QEvent* event) {

		QHistoryState::onEntry(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onExit = 0;

	// Subclass to allow providing a Go implementation
	virtual void onExit(QEvent* event) override {
		if (handle__onExit == 0) {
			QHistoryState::onExit(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHistoryState_onExit(this, handle__onExit, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_onExit(QEvent* event) {

		QHistoryState::onExit(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QHistoryState::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QHistoryState_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QHistoryState::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QHistoryState::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QHistoryState_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QHistoryState::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QHistoryState::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QHistoryState_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QHistoryState::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QHistoryState::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QHistoryState_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QHistoryState::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QHistoryState::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHistoryState_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QHistoryState::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QHistoryState::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHistoryState_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QHistoryState::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QHistoryState::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHistoryState_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QHistoryState::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QHistoryState_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QHistoryState_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QHistoryState_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QHistoryState_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QHistoryState* QHistoryState_new() {
	return new MiqtVirtualQHistoryState();
}

QHistoryState* QHistoryState_new2(int type) {
	return new MiqtVirtualQHistoryState(static_cast<QHistoryState::HistoryType>(type));
}

QHistoryState* QHistoryState_new3(QState* parent) {
	return new MiqtVirtualQHistoryState(parent);
}

QHistoryState* QHistoryState_new4(int type, QState* parent) {
	return new MiqtVirtualQHistoryState(static_cast<QHistoryState::HistoryType>(type), parent);
}

void QHistoryState_virtbase(QHistoryState* src, QAbstractState** outptr_QAbstractState) {
	*outptr_QAbstractState = static_cast<QAbstractState*>(src);
}

QMetaObject* QHistoryState_metaObject(const QHistoryState* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHistoryState_metacast(QHistoryState* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHistoryState_tr(const char* s) {
	QString _ret = QHistoryState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHistoryState_trUtf8(const char* s) {
	QString _ret = QHistoryState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractTransition* QHistoryState_defaultTransition(const QHistoryState* self) {
	return self->defaultTransition();
}

void QHistoryState_setDefaultTransition(QHistoryState* self, QAbstractTransition* transition) {
	self->setDefaultTransition(transition);
}

QAbstractState* QHistoryState_defaultState(const QHistoryState* self) {
	return self->defaultState();
}

void QHistoryState_setDefaultState(QHistoryState* self, QAbstractState* state) {
	self->setDefaultState(state);
}

int QHistoryState_historyType(const QHistoryState* self) {
	QHistoryState::HistoryType _ret = self->historyType();
	return static_cast<int>(_ret);
}

void QHistoryState_setHistoryType(QHistoryState* self, int type) {
	self->setHistoryType(static_cast<QHistoryState::HistoryType>(type));
}

struct miqt_string QHistoryState_tr2(const char* s, const char* c) {
	QString _ret = QHistoryState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHistoryState_tr3(const char* s, const char* c, int n) {
	QString _ret = QHistoryState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHistoryState_trUtf82(const char* s, const char* c) {
	QString _ret = QHistoryState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHistoryState_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QHistoryState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHistoryState_override_virtual_onEntry(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onEntry = slot;
	return true;
}

void QHistoryState_virtualbase_onEntry(void* self, QEvent* event) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_onEntry(event);
}

bool QHistoryState_override_virtual_onExit(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onExit = slot;
	return true;
}

void QHistoryState_virtualbase_onExit(void* self, QEvent* event) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_onExit(event);
}

bool QHistoryState_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QHistoryState_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQHistoryState*)(self) )->virtualbase_event(e);
}

bool QHistoryState_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QHistoryState_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQHistoryState*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QHistoryState_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QHistoryState_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_timerEvent(event);
}

bool QHistoryState_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QHistoryState_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_childEvent(event);
}

bool QHistoryState_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QHistoryState_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_customEvent(event);
}

bool QHistoryState_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QHistoryState_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_connectNotify(signal);
}

bool QHistoryState_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QHistoryState_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QHistoryState_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QHistoryState_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QHistoryState_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QHistoryState_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QHistoryState_delete(QHistoryState* self) {
	delete self;
}

