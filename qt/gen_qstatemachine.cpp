#include <QAbstractAnimation>
#include <QAbstractState>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
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
#include <QTimerEvent>
#include <qstatemachine.h>
#include "gen_qstatemachine.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QStateMachine_runningChanged(intptr_t, bool);
bool miqt_exec_callback_QStateMachine_eventFilter(QStateMachine*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStateMachine_onEntry(QStateMachine*, intptr_t, QEvent*);
void miqt_exec_callback_QStateMachine_onExit(QStateMachine*, intptr_t, QEvent*);
void miqt_exec_callback_QStateMachine_beginSelectTransitions(QStateMachine*, intptr_t, QEvent*);
void miqt_exec_callback_QStateMachine_endSelectTransitions(QStateMachine*, intptr_t, QEvent*);
void miqt_exec_callback_QStateMachine_beginMicrostep(QStateMachine*, intptr_t, QEvent*);
void miqt_exec_callback_QStateMachine_endMicrostep(QStateMachine*, intptr_t, QEvent*);
bool miqt_exec_callback_QStateMachine_event(QStateMachine*, intptr_t, QEvent*);
void miqt_exec_callback_QStateMachine_timerEvent(QStateMachine*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStateMachine_childEvent(QStateMachine*, intptr_t, QChildEvent*);
void miqt_exec_callback_QStateMachine_customEvent(QStateMachine*, intptr_t, QEvent*);
void miqt_exec_callback_QStateMachine_connectNotify(QStateMachine*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStateMachine_disconnectNotify(QStateMachine*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStateMachine final : public QStateMachine {
public:

	MiqtVirtualQStateMachine(): QStateMachine() {};
	MiqtVirtualQStateMachine(QState::ChildMode childMode): QStateMachine(childMode) {};
	MiqtVirtualQStateMachine(QObject* parent): QStateMachine(parent) {};
	MiqtVirtualQStateMachine(QState::ChildMode childMode, QObject* parent): QStateMachine(childMode, parent) {};

	virtual ~MiqtVirtualQStateMachine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QStateMachine::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStateMachine_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QStateMachine::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void onEntry(QEvent* event) override {
		if (handle__onEntry == 0) {
			QStateMachine::onEntry(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_onEntry(this, handle__onEntry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_onEntry(QEvent* event) {

		QStateMachine::onEntry(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onExit = 0;

	// Subclass to allow providing a Go implementation
	virtual void onExit(QEvent* event) override {
		if (handle__onExit == 0) {
			QStateMachine::onExit(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_onExit(this, handle__onExit, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_onExit(QEvent* event) {

		QStateMachine::onExit(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__beginSelectTransitions = 0;

	// Subclass to allow providing a Go implementation
	virtual void beginSelectTransitions(QEvent* event) override {
		if (handle__beginSelectTransitions == 0) {
			QStateMachine::beginSelectTransitions(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_beginSelectTransitions(this, handle__beginSelectTransitions, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_beginSelectTransitions(QEvent* event) {

		QStateMachine::beginSelectTransitions(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__endSelectTransitions = 0;

	// Subclass to allow providing a Go implementation
	virtual void endSelectTransitions(QEvent* event) override {
		if (handle__endSelectTransitions == 0) {
			QStateMachine::endSelectTransitions(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_endSelectTransitions(this, handle__endSelectTransitions, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_endSelectTransitions(QEvent* event) {

		QStateMachine::endSelectTransitions(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__beginMicrostep = 0;

	// Subclass to allow providing a Go implementation
	virtual void beginMicrostep(QEvent* event) override {
		if (handle__beginMicrostep == 0) {
			QStateMachine::beginMicrostep(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_beginMicrostep(this, handle__beginMicrostep, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_beginMicrostep(QEvent* event) {

		QStateMachine::beginMicrostep(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__endMicrostep = 0;

	// Subclass to allow providing a Go implementation
	virtual void endMicrostep(QEvent* event) override {
		if (handle__endMicrostep == 0) {
			QStateMachine::endMicrostep(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_endMicrostep(this, handle__endMicrostep, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_endMicrostep(QEvent* event) {

		QStateMachine::endMicrostep(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QStateMachine::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QStateMachine_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QStateMachine::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QStateMachine::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QStateMachine::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QStateMachine::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QStateMachine::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QStateMachine::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStateMachine_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QStateMachine::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QStateMachine::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStateMachine_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QStateMachine::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QStateMachine::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStateMachine_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QStateMachine::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QStateMachine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QStateMachine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QStateMachine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QStateMachine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QStateMachine_metaObject(const QStateMachine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStateMachine_metacast(QStateMachine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStateMachine_tr(const char* s) {
	QString _ret = QStateMachine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStateMachine_trUtf8(const char* s) {
	QString _ret = QStateMachine::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStateMachine_addState(QStateMachine* self, QAbstractState* state) {
	self->addState(state);
}

void QStateMachine_removeState(QStateMachine* self, QAbstractState* state) {
	self->removeState(state);
}

int QStateMachine_error(const QStateMachine* self) {
	QStateMachine::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QStateMachine_errorString(const QStateMachine* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStateMachine_clearError(QStateMachine* self) {
	self->clearError();
}

bool QStateMachine_isRunning(const QStateMachine* self) {
	return self->isRunning();
}

bool QStateMachine_isAnimated(const QStateMachine* self) {
	return self->isAnimated();
}

void QStateMachine_setAnimated(QStateMachine* self, bool enabled) {
	self->setAnimated(enabled);
}

void QStateMachine_addDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation) {
	self->addDefaultAnimation(animation);
}

struct miqt_array /* of QAbstractAnimation* */  QStateMachine_defaultAnimations(const QStateMachine* self) {
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

void QStateMachine_removeDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation) {
	self->removeDefaultAnimation(animation);
}

int QStateMachine_globalRestorePolicy(const QStateMachine* self) {
	QState::RestorePolicy _ret = self->globalRestorePolicy();
	return static_cast<int>(_ret);
}

void QStateMachine_setGlobalRestorePolicy(QStateMachine* self, int restorePolicy) {
	self->setGlobalRestorePolicy(static_cast<QState::RestorePolicy>(restorePolicy));
}

void QStateMachine_postEvent(QStateMachine* self, QEvent* event) {
	self->postEvent(event);
}

int QStateMachine_postDelayedEvent(QStateMachine* self, QEvent* event, int delay) {
	return self->postDelayedEvent(event, static_cast<int>(delay));
}

bool QStateMachine_cancelDelayedEvent(QStateMachine* self, int id) {
	return self->cancelDelayedEvent(static_cast<int>(id));
}

struct miqt_array /* set of QAbstractState* */  QStateMachine_configuration(const QStateMachine* self) {
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

bool QStateMachine_eventFilter(QStateMachine* self, QObject* watched, QEvent* event) {
	return self->eventFilter(watched, event);
}

void QStateMachine_start(QStateMachine* self) {
	self->start();
}

void QStateMachine_stop(QStateMachine* self) {
	self->stop();
}

void QStateMachine_setRunning(QStateMachine* self, bool running) {
	self->setRunning(running);
}

void QStateMachine_runningChanged(QStateMachine* self, bool running) {
	self->runningChanged(running);
}

void QStateMachine_connect_runningChanged(QStateMachine* self, intptr_t slot) {
	MiqtVirtualQStateMachine::connect(self, static_cast<void (QStateMachine::*)(bool)>(&QStateMachine::runningChanged), self, [=](bool running) {
		bool sigval1 = running;
		miqt_exec_callback_QStateMachine_runningChanged(slot, sigval1);
	});
}

struct miqt_string QStateMachine_tr2(const char* s, const char* c) {
	QString _ret = QStateMachine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStateMachine_tr3(const char* s, const char* c, int n) {
	QString _ret = QStateMachine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStateMachine_trUtf82(const char* s, const char* c) {
	QString _ret = QStateMachine::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStateMachine_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QStateMachine::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStateMachine_postEvent2(QStateMachine* self, QEvent* event, int priority) {
	self->postEvent(event, static_cast<QStateMachine::EventPriority>(priority));
}

bool QStateMachine_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QStateMachine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQStateMachine*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QStateMachine_override_virtual_onEntry(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onEntry = slot;
	return true;
}

void QStateMachine_virtualbase_onEntry(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_onEntry(event);
}

bool QStateMachine_override_virtual_onExit(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onExit = slot;
	return true;
}

void QStateMachine_virtualbase_onExit(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_onExit(event);
}

bool QStateMachine_override_virtual_beginSelectTransitions(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__beginSelectTransitions = slot;
	return true;
}

void QStateMachine_virtualbase_beginSelectTransitions(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_beginSelectTransitions(event);
}

bool QStateMachine_override_virtual_endSelectTransitions(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__endSelectTransitions = slot;
	return true;
}

void QStateMachine_virtualbase_endSelectTransitions(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_endSelectTransitions(event);
}

bool QStateMachine_override_virtual_beginMicrostep(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__beginMicrostep = slot;
	return true;
}

void QStateMachine_virtualbase_beginMicrostep(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_beginMicrostep(event);
}

bool QStateMachine_override_virtual_endMicrostep(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__endMicrostep = slot;
	return true;
}

void QStateMachine_virtualbase_endMicrostep(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_endMicrostep(event);
}

bool QStateMachine_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QStateMachine_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQStateMachine*)(self) )->virtualbase_event(e);
}

bool QStateMachine_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QStateMachine_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_timerEvent(event);
}

bool QStateMachine_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QStateMachine_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_childEvent(event);
}

bool QStateMachine_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QStateMachine_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_customEvent(event);
}

bool QStateMachine_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QStateMachine_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_connectNotify(signal);
}

bool QStateMachine_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QStateMachine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStateMachine*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QStateMachine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QStateMachine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QStateMachine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QStateMachine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQStateMachine* self_cast = dynamic_cast<MiqtVirtualQStateMachine*>( (QStateMachine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QStateMachine_delete(QStateMachine* self) {
	delete self;
}

QStateMachine__SignalEvent* QStateMachine__SignalEvent_new(QStateMachine__SignalEvent* param1) {
	return new QStateMachine::SignalEvent(*param1);
}

void QStateMachine__SignalEvent_virtbase(QStateMachine__SignalEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QObject* QStateMachine__SignalEvent_sender(const QStateMachine__SignalEvent* self) {
	return self->sender();
}

int QStateMachine__SignalEvent_signalIndex(const QStateMachine__SignalEvent* self) {
	return self->signalIndex();
}

void QStateMachine__SignalEvent_delete(QStateMachine__SignalEvent* self) {
	delete self;
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

QObject* QStateMachine__WrappedEvent_object(const QStateMachine__WrappedEvent* self) {
	return self->object();
}

QEvent* QStateMachine__WrappedEvent_event(const QStateMachine__WrappedEvent* self) {
	return self->event();
}

void QStateMachine__WrappedEvent_delete(QStateMachine__WrappedEvent* self) {
	delete self;
}

