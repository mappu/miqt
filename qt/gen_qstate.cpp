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

void miqt_exec_callback_QState_OnEntry(QState*, intptr_t, QEvent*);
void miqt_exec_callback_QState_OnExit(QState*, intptr_t, QEvent*);
bool miqt_exec_callback_QState_Event(QState*, intptr_t, QEvent*);
bool miqt_exec_callback_QState_EventFilter(QState*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QState_TimerEvent(QState*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QState_ChildEvent(QState*, intptr_t, QChildEvent*);
void miqt_exec_callback_QState_CustomEvent(QState*, intptr_t, QEvent*);
void miqt_exec_callback_QState_ConnectNotify(QState*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QState_DisconnectNotify(QState*, intptr_t, QMetaMethod*);
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
	intptr_t handle__OnEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void onEntry(QEvent* event) override {
		if (handle__OnEntry == 0) {
			QState::onEntry(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QState_OnEntry(this, handle__OnEntry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnEntry(QEvent* event) {

		QState::onEntry(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnExit = 0;

	// Subclass to allow providing a Go implementation
	virtual void onExit(QEvent* event) override {
		if (handle__OnExit == 0) {
			QState::onExit(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QState_OnExit(this, handle__OnExit, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnExit(QEvent* event) {

		QState::onExit(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QState::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QState_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QState::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QState::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QState_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QState::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QState::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QState_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QState::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QState::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QState_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QState::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QState::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QState_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QState::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QState::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QState_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QState::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QState::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QState_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QState::disconnectNotify(*signal);

	}

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

QMetaObject* QState_MetaObject(const QState* self) {
	return (QMetaObject*) self->metaObject();
}

void* QState_Metacast(QState* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QState_Tr(const char* s) {
	QString _ret = QState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QState_TrUtf8(const char* s) {
	QString _ret = QState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractState* QState_ErrorState(const QState* self) {
	return self->errorState();
}

void QState_SetErrorState(QState* self, QAbstractState* state) {
	self->setErrorState(state);
}

void QState_AddTransition(QState* self, QAbstractTransition* transition) {
	self->addTransition(transition);
}

QSignalTransition* QState_AddTransition2(QState* self, QObject* sender, const char* signal, QAbstractState* target) {
	return self->addTransition(sender, signal, target);
}

QAbstractTransition* QState_AddTransitionWithTarget(QState* self, QAbstractState* target) {
	return self->addTransition(target);
}

void QState_RemoveTransition(QState* self, QAbstractTransition* transition) {
	self->removeTransition(transition);
}

struct miqt_array /* of QAbstractTransition* */  QState_Transitions(const QState* self) {
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

QAbstractState* QState_InitialState(const QState* self) {
	return self->initialState();
}

void QState_SetInitialState(QState* self, QAbstractState* state) {
	self->setInitialState(state);
}

int QState_ChildMode(const QState* self) {
	QState::ChildMode _ret = self->childMode();
	return static_cast<int>(_ret);
}

void QState_SetChildMode(QState* self, int mode) {
	self->setChildMode(static_cast<QState::ChildMode>(mode));
}

void QState_AssignProperty(QState* self, QObject* object, const char* name, QVariant* value) {
	self->assignProperty(object, name, *value);
}

struct miqt_string QState_Tr2(const char* s, const char* c) {
	QString _ret = QState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QState_Tr3(const char* s, const char* c, int n) {
	QString _ret = QState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QState_TrUtf82(const char* s, const char* c) {
	QString _ret = QState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QState_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QState_override_virtual_OnEntry(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OnEntry = slot;
	return true;
}

void QState_virtualbase_OnEntry(void* self, QEvent* event) {
	( (MiqtVirtualQState*)(self) )->virtualbase_OnEntry(event);
}

bool QState_override_virtual_OnExit(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OnExit = slot;
	return true;
}

void QState_virtualbase_OnExit(void* self, QEvent* event) {
	( (MiqtVirtualQState*)(self) )->virtualbase_OnExit(event);
}

bool QState_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QState_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQState*)(self) )->virtualbase_Event(e);
}

bool QState_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QState_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQState*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QState_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QState_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQState*)(self) )->virtualbase_TimerEvent(event);
}

bool QState_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QState_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQState*)(self) )->virtualbase_ChildEvent(event);
}

bool QState_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QState_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQState*)(self) )->virtualbase_CustomEvent(event);
}

bool QState_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QState_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQState*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QState_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQState* self_cast = dynamic_cast<MiqtVirtualQState*>( (QState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QState_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQState*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QState_Delete(QState* self) {
	delete self;
}

