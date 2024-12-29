#include <QAbstractAnimation>
#include <QAbstractState>
#include <QEvent>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSet>
#include <QState>
#include <QStateMachine>
#define WORKAROUND_INNER_CLASS_DEFINITION_QStateMachine__SignalEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_QStateMachine__WrappedEvent
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qstatemachine.h>
#include "gen_qstatemachine.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQStateMachine : public virtual QStateMachine {
public:

	MiqtVirtualQStateMachine(): QStateMachine() {};
	MiqtVirtualQStateMachine(QState::ChildMode childMode): QStateMachine(childMode) {};
	MiqtVirtualQStateMachine(QObject* parent): QStateMachine(parent) {};
	MiqtVirtualQStateMachine(QState::ChildMode childMode, QObject* parent): QStateMachine(childMode, parent) {};

	virtual ~MiqtVirtualQStateMachine() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QStateMachine::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStateMachine_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QStateMachine::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void onEntry(QEvent* event) override {
		if (handle__OnEntry == 0) {
			QStateMachine::onEntry(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_OnEntry(this, handle__OnEntry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnEntry(QEvent* event) {

		QStateMachine::onEntry(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnExit = 0;

	// Subclass to allow providing a Go implementation
	virtual void onExit(QEvent* event) override {
		if (handle__OnExit == 0) {
			QStateMachine::onExit(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_OnExit(this, handle__OnExit, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnExit(QEvent* event) {

		QStateMachine::onExit(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BeginSelectTransitions = 0;

	// Subclass to allow providing a Go implementation
	virtual void beginSelectTransitions(QEvent* event) override {
		if (handle__BeginSelectTransitions == 0) {
			QStateMachine::beginSelectTransitions(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_BeginSelectTransitions(this, handle__BeginSelectTransitions, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_BeginSelectTransitions(QEvent* event) {

		QStateMachine::beginSelectTransitions(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EndSelectTransitions = 0;

	// Subclass to allow providing a Go implementation
	virtual void endSelectTransitions(QEvent* event) override {
		if (handle__EndSelectTransitions == 0) {
			QStateMachine::endSelectTransitions(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_EndSelectTransitions(this, handle__EndSelectTransitions, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EndSelectTransitions(QEvent* event) {

		QStateMachine::endSelectTransitions(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BeginMicrostep = 0;

	// Subclass to allow providing a Go implementation
	virtual void beginMicrostep(QEvent* event) override {
		if (handle__BeginMicrostep == 0) {
			QStateMachine::beginMicrostep(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_BeginMicrostep(this, handle__BeginMicrostep, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_BeginMicrostep(QEvent* event) {

		QStateMachine::beginMicrostep(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EndMicrostep = 0;

	// Subclass to allow providing a Go implementation
	virtual void endMicrostep(QEvent* event) override {
		if (handle__EndMicrostep == 0) {
			QStateMachine::endMicrostep(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_EndMicrostep(this, handle__EndMicrostep, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EndMicrostep(QEvent* event) {

		QStateMachine::endMicrostep(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QStateMachine::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QStateMachine_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QStateMachine::event(e);

	}

};

QStateMachine* QStateMachine_new() {
	return new MiqtVirtualQStateMachine();
}

QStateMachine* QStateMachine_new2(int childMode) {
	return new MiqtVirtualQStateMachine(static_cast<QState::ChildMode>(childMode));
}

QStateMachine* QStateMachine_new3(QObject* parent) {
	return new MiqtVirtualQStateMachine(parent);
}

QStateMachine* QStateMachine_new4(int childMode, QObject* parent) {
	return new MiqtVirtualQStateMachine(static_cast<QState::ChildMode>(childMode), parent);
}

void QStateMachine_virtbase(QStateMachine* src, QState** outptr_QState) {
	*outptr_QState = static_cast<QState*>(src);
}

QMetaObject* QStateMachine_MetaObject(const QStateMachine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStateMachine_Metacast(QStateMachine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStateMachine_Tr(const char* s) {
	QString _ret = QStateMachine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStateMachine_TrUtf8(const char* s) {
	QString _ret = QStateMachine::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStateMachine_AddState(QStateMachine* self, QAbstractState* state) {
	self->addState(state);
}

void QStateMachine_RemoveState(QStateMachine* self, QAbstractState* state) {
	self->removeState(state);
}

int QStateMachine_Error(const QStateMachine* self) {
	QStateMachine::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QStateMachine_ErrorString(const QStateMachine* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStateMachine_ClearError(QStateMachine* self) {
	self->clearError();
}

bool QStateMachine_IsRunning(const QStateMachine* self) {
	return self->isRunning();
}

bool QStateMachine_IsAnimated(const QStateMachine* self) {
	return self->isAnimated();
}

void QStateMachine_SetAnimated(QStateMachine* self, bool enabled) {
	self->setAnimated(enabled);
}

void QStateMachine_AddDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation) {
	self->addDefaultAnimation(animation);
}

struct miqt_array /* of QAbstractAnimation* */  QStateMachine_DefaultAnimations(const QStateMachine* self) {
	QList<QAbstractAnimation *> _ret = self->defaultAnimations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAnimation** _arr = static_cast<QAbstractAnimation**>(malloc(sizeof(QAbstractAnimation*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QStateMachine_RemoveDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation) {
	self->removeDefaultAnimation(animation);
}

int QStateMachine_GlobalRestorePolicy(const QStateMachine* self) {
	QState::RestorePolicy _ret = self->globalRestorePolicy();
	return static_cast<int>(_ret);
}

void QStateMachine_SetGlobalRestorePolicy(QStateMachine* self, int restorePolicy) {
	self->setGlobalRestorePolicy(static_cast<QState::RestorePolicy>(restorePolicy));
}

void QStateMachine_PostEvent(QStateMachine* self, QEvent* event) {
	self->postEvent(event);
}

int QStateMachine_PostDelayedEvent(QStateMachine* self, QEvent* event, int delay) {
	return self->postDelayedEvent(event, static_cast<int>(delay));
}

bool QStateMachine_CancelDelayedEvent(QStateMachine* self, int id) {
	return self->cancelDelayedEvent(static_cast<int>(id));
}

struct miqt_array /* set of QAbstractState* */  QStateMachine_Configuration(const QStateMachine* self) {
	QSet<QAbstractState *> _ret = self->configuration();
	// Convert QSet<> from C++ memory to manually-managed C memory
	QAbstractState** _arr = static_cast<QAbstractState**>(malloc(sizeof(QAbstractState*) * _ret.size()));
	int _ctr = 0;
	QSetIterator<QAbstractState*> _itr(_ret);
	while (_itr.hasNext()) {
		_arr[_ctr++] = _itr.next();
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QStateMachine_EventFilter(QStateMachine* self, QObject* watched, QEvent* event) {
	return self->eventFilter(watched, event);
}

void QStateMachine_Start(QStateMachine* self) {
	self->start();
}

void QStateMachine_Stop(QStateMachine* self) {
	self->stop();
}

void QStateMachine_SetRunning(QStateMachine* self, bool running) {
	self->setRunning(running);
}

void QStateMachine_RunningChanged(QStateMachine* self, bool running) {
	self->runningChanged(running);
}

void QStateMachine_connect_RunningChanged(QStateMachine* self, intptr_t slot) {
	MiqtVirtualQStateMachine::connect(self, static_cast<void (QStateMachine::*)(bool)>(&QStateMachine::runningChanged), self, [=](bool running) {
		bool sigval1 = running;
		miqt_exec_callback_QStateMachine_RunningChanged(slot, sigval1);
	});
}

struct miqt_string QStateMachine_Tr2(const char* s, const char* c) {
	QString _ret = QStateMachine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStateMachine_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStateMachine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStateMachine_TrUtf82(const char* s, const char* c) {
	QString _ret = QStateMachine::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStateMachine_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QStateMachine::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStateMachine_PostEvent2(QStateMachine* self, QEvent* event, int priority) {
	self->postEvent(event, static_cast<QStateMachine::EventPriority>(priority));
}

void QStateMachine_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) )->handle__EventFilter = slot;
}

bool QStateMachine_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQStateMachine*)(self) )->virtualbase_EventFilter(watched, event);
}

void QStateMachine_override_virtual_OnEntry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) )->handle__OnEntry = slot;
}

void QStateMachine_virtualbase_OnEntry(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_OnEntry(event);
}

void QStateMachine_override_virtual_OnExit(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) )->handle__OnExit = slot;
}

void QStateMachine_virtualbase_OnExit(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_OnExit(event);
}

void QStateMachine_override_virtual_BeginSelectTransitions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) )->handle__BeginSelectTransitions = slot;
}

void QStateMachine_virtualbase_BeginSelectTransitions(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_BeginSelectTransitions(event);
}

void QStateMachine_override_virtual_EndSelectTransitions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) )->handle__EndSelectTransitions = slot;
}

void QStateMachine_virtualbase_EndSelectTransitions(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_EndSelectTransitions(event);
}

void QStateMachine_override_virtual_BeginMicrostep(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) )->handle__BeginMicrostep = slot;
}

void QStateMachine_virtualbase_BeginMicrostep(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_BeginMicrostep(event);
}

void QStateMachine_override_virtual_EndMicrostep(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) )->handle__EndMicrostep = slot;
}

void QStateMachine_virtualbase_EndMicrostep(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_EndMicrostep(event);
}

void QStateMachine_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) )->handle__Event = slot;
}

bool QStateMachine_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQStateMachine*)(self) )->virtualbase_Event(e);
}

void QStateMachine_Delete(QStateMachine* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQStateMachine*>( self );
	} else {
		delete self;
	}
}

QStateMachine__SignalEvent* QStateMachine__SignalEvent_new(QStateMachine__SignalEvent* param1) {
	return new QStateMachine::SignalEvent(*param1);
}

void QStateMachine__SignalEvent_virtbase(QStateMachine__SignalEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QObject* QStateMachine__SignalEvent_Sender(const QStateMachine__SignalEvent* self) {
	return self->sender();
}

int QStateMachine__SignalEvent_SignalIndex(const QStateMachine__SignalEvent* self) {
	return self->signalIndex();
}

void QStateMachine__SignalEvent_Delete(QStateMachine__SignalEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStateMachine::SignalEvent*>( self );
	} else {
		delete self;
	}
}

QStateMachine__WrappedEvent* QStateMachine__WrappedEvent_new(QObject* object, QEvent* event) {
	return new QStateMachine::WrappedEvent(object, event);
}

QStateMachine__WrappedEvent* QStateMachine__WrappedEvent_new2(QStateMachine__WrappedEvent* param1) {
	return new QStateMachine::WrappedEvent(*param1);
}

void QStateMachine__WrappedEvent_virtbase(QStateMachine__WrappedEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QObject* QStateMachine__WrappedEvent_Object(const QStateMachine__WrappedEvent* self) {
	return self->object();
}

QEvent* QStateMachine__WrappedEvent_Event(const QStateMachine__WrappedEvent* self) {
	return self->event();
}

void QStateMachine__WrappedEvent_Delete(QStateMachine__WrappedEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStateMachine::WrappedEvent*>( self );
	} else {
		delete self;
	}
}

