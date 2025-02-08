#include <QAbstractState>
#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSignalTransition>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qstate.h>
#include "gen_qstate.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QState_onEntry(QState*, intptr_t, QEvent*);
void miqt_exec_callback_QState_onExit(QState*, intptr_t, QEvent*);
bool miqt_exec_callback_QState_event(QState*, intptr_t, QEvent*);
bool miqt_exec_callback_QState_eventFilter(QState*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QState_timerEvent(QState*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QState_childEvent(QState*, intptr_t, QChildEvent*);
void miqt_exec_callback_QState_customEvent(QState*, intptr_t, QEvent*);
void miqt_exec_callback_QState_connectNotify(QState*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QState_disconnectNotify(QState*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQState final : public QState {
public:

	MiqtVirtualQState(): QState() {};
	MiqtVirtualQState(QState::ChildMode childMode): QState(childMode) {};
	MiqtVirtualQState(QState* parent): QState(parent) {};
	MiqtVirtualQState(QState::ChildMode childMode, QState* parent): QState(childMode, parent) {};

	virtual ~MiqtVirtualQState() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void onEntry(QEvent* event) override {
		if (handle__onEntry == 0) {
			QState::onEntry(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QState_onEntry(this, handle__onEntry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_onEntry(QEvent* event) {

		QState::onEntry(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onExit = 0;

	// Subclass to allow providing a Go implementation
	virtual void onExit(QEvent* event) override {
		if (handle__onExit == 0) {
			QState::onExit(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QState_onExit(this, handle__onExit, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_onExit(QEvent* event) {

		QState::onExit(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QState::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QState_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QState::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QState::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QState_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QState::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QState::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QState_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QState::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QState::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QState_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QState::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QState::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QState_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QState::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QState::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QState_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QState::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QState::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QState_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QState::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QState_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QState_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QState_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QState_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QState* QState_new() {
	return new MiqtVirtualQState();
}

QState* QState_new2(int childMode) {
	return new MiqtVirtualQState(static_cast<QState::ChildMode>(childMode));
}

QState* QState_new3(QState* parent) {
	return new MiqtVirtualQState(parent);
}

QState* QState_new4(int childMode, QState* parent) {
	return new MiqtVirtualQState(static_cast<QState::ChildMode>(childMode), parent);
}

void QState_virtbase(QState* src, QAbstractState** outptr_QAbstractState) {
	*outptr_QAbstractState = static_cast<QAbstractState*>(src);
}

QMetaObject* QState_metaObject(const QState* self) {
	return (QMetaObject*) self->metaObject();
}

void* QState_metacast(QState* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QState_tr(const char* s) {
	QString _ret = QState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QState_trUtf8(const char* s) {
	QString _ret = QState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractState* QState_errorState(const QState* self) {
	return self->errorState();
}

void QState_setErrorState(QState* self, QAbstractState* state) {
	self->setErrorState(state);
}

void QState_addTransition(QState* self, QAbstractTransition* transition) {
	self->addTransition(transition);
}

QSignalTransition* QState_addTransition2(QState* self, QObject* sender, const char* signal, QAbstractState* target) {
	return self->addTransition(sender, signal, target);
}

QAbstractTransition* QState_addTransitionWithTarget(QState* self, QAbstractState* target) {
	return self->addTransition(target);
}

void QState_removeTransition(QState* self, QAbstractTransition* transition) {
	self->removeTransition(transition);
}

struct miqt_array /* of QAbstractTransition* */  QState_transitions(const QState* self) {
	QList<QAbstractTransition *> _ret = self->transitions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractTransition** _arr = static_cast<QAbstractTransition**>(malloc(sizeof(QAbstractTransition*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAbstractState* QState_initialState(const QState* self) {
	return self->initialState();
}

void QState_setInitialState(QState* self, QAbstractState* state) {
	self->setInitialState(state);
}

int QState_childMode(const QState* self) {
	QState::ChildMode _ret = self->childMode();
	return static_cast<int>(_ret);
}

void QState_setChildMode(QState* self, int mode) {
	self->setChildMode(static_cast<QState::ChildMode>(mode));
}

void QState_assignProperty(QState* self, QObject* object, const char* name, QVariant* value) {
	self->assignProperty(object, name, *value);
}

struct miqt_string QState_tr2(const char* s, const char* c) {
	QString _ret = QState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QState_tr3(const char* s, const char* c, int n) {
	QString _ret = QState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QState_trUtf82(const char* s, const char* c) {
	QString _ret = QState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QState_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QState_override_virtual_onEntry(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onEntry = slot;
	return true;
}

void QState_virtualbase_onEntry(void* self, QEvent* event) {
	( (MiqtVirtualQState*)(self) )->virtualbase_onEntry(event);
}

bool QState_override_virtual_onExit(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onExit = slot;
	return true;
}

void QState_virtualbase_onExit(void* self, QEvent* event) {
	( (MiqtVirtualQState*)(self) )->virtualbase_onExit(event);
}

bool QState_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QState_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQState*)(self) )->virtualbase_event(e);
}

bool QState_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QState_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQState*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QState_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QState_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQState*)(self) )->virtualbase_timerEvent(event);
}

bool QState_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QState_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQState*)(self) )->virtualbase_childEvent(event);
}

bool QState_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QState_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQState*)(self) )->virtualbase_customEvent(event);
}

bool QState_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QState_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQState*)(self) )->virtualbase_connectNotify(signal);
}

bool QState_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QState_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQState*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QState_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QState_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QState_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QState_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QState_delete(QState* self) {
	delete self;
}

