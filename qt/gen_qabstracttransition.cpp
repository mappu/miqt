#include <QAbstractAnimation>
#include <QAbstractState>
#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qabstracttransition.h>
#include "gen_qabstracttransition.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QAbstractTransition_eventTest(QAbstractTransition*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractTransition_onTransition(QAbstractTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractTransition_event(QAbstractTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractTransition_eventFilter(QAbstractTransition*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractTransition_timerEvent(QAbstractTransition*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractTransition_childEvent(QAbstractTransition*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractTransition_customEvent(QAbstractTransition*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractTransition_connectNotify(QAbstractTransition*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractTransition_disconnectNotify(QAbstractTransition*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractTransition final : public QAbstractTransition {
public:

	MiqtVirtualQAbstractTransition(): QAbstractTransition() {};
	MiqtVirtualQAbstractTransition(QState* sourceState): QAbstractTransition(sourceState) {};

	virtual ~MiqtVirtualQAbstractTransition() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventTest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventTest(QEvent* event) override {
		if (handle__eventTest == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractTransition_eventTest(this, handle__eventTest, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onTransition = 0;

	// Subclass to allow providing a Go implementation
	virtual void onTransition(QEvent* event) override {
		if (handle__onTransition == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTransition_onTransition(this, handle__onTransition, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QAbstractTransition::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QAbstractTransition_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QAbstractTransition::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractTransition::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractTransition_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractTransition::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractTransition::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTransition_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractTransition::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractTransition::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTransition_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractTransition::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractTransition::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTransition_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractTransition::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractTransition::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractTransition_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractTransition::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractTransition::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractTransition_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractTransition::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAbstractTransition_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractTransition_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractTransition_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractTransition_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractTransition* QAbstractTransition_new() {
	return new MiqtVirtualQAbstractTransition();
}

QAbstractTransition* QAbstractTransition_new2(QState* sourceState) {
	return new MiqtVirtualQAbstractTransition(sourceState);
}

void QAbstractTransition_virtbase(QAbstractTransition* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractTransition_metaObject(const QAbstractTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractTransition_metacast(QAbstractTransition* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractTransition_tr(const char* s) {
	QString _ret = QAbstractTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTransition_trUtf8(const char* s) {
	QString _ret = QAbstractTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QState* QAbstractTransition_sourceState(const QAbstractTransition* self) {
	return self->sourceState();
}

QAbstractState* QAbstractTransition_targetState(const QAbstractTransition* self) {
	return self->targetState();
}

void QAbstractTransition_setTargetState(QAbstractTransition* self, QAbstractState* target) {
	self->setTargetState(target);
}

struct miqt_array /* of QAbstractState* */  QAbstractTransition_targetStates(const QAbstractTransition* self) {
	QList<QAbstractState *> _ret = self->targetStates();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractState** _arr = static_cast<QAbstractState**>(malloc(sizeof(QAbstractState*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QAbstractTransition_setTargetStates(QAbstractTransition* self, struct miqt_array /* of QAbstractState* */  targets) {
	QList<QAbstractState *> targets_QList;
	targets_QList.reserve(targets.len);
	QAbstractState** targets_arr = static_cast<QAbstractState**>(targets.data);
	for(size_t i = 0; i < targets.len; ++i) {
		targets_QList.push_back(targets_arr[i]);
	}
	self->setTargetStates(targets_QList);
}

int QAbstractTransition_transitionType(const QAbstractTransition* self) {
	QAbstractTransition::TransitionType _ret = self->transitionType();
	return static_cast<int>(_ret);
}

void QAbstractTransition_setTransitionType(QAbstractTransition* self, int type) {
	self->setTransitionType(static_cast<QAbstractTransition::TransitionType>(type));
}

QStateMachine* QAbstractTransition_machine(const QAbstractTransition* self) {
	return self->machine();
}

void QAbstractTransition_addAnimation(QAbstractTransition* self, QAbstractAnimation* animation) {
	self->addAnimation(animation);
}

void QAbstractTransition_removeAnimation(QAbstractTransition* self, QAbstractAnimation* animation) {
	self->removeAnimation(animation);
}

struct miqt_array /* of QAbstractAnimation* */  QAbstractTransition_animations(const QAbstractTransition* self) {
	QList<QAbstractAnimation *> _ret = self->animations();
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

struct miqt_string QAbstractTransition_tr2(const char* s, const char* c) {
	QString _ret = QAbstractTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTransition_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTransition_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTransition_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractTransition_override_virtual_eventTest(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventTest = slot;
	return true;
}

bool QAbstractTransition_override_virtual_onTransition(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onTransition = slot;
	return true;
}

bool QAbstractTransition_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractTransition_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQAbstractTransition*)(self) )->virtualbase_event(e);
}

bool QAbstractTransition_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractTransition_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractTransition*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractTransition_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractTransition_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractTransition*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractTransition_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractTransition_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractTransition*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractTransition_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractTransition_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractTransition*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractTransition_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractTransition_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractTransition*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractTransition_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractTransition_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractTransition*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAbstractTransition_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractTransition_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractTransition_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractTransition_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractTransition* self_cast = dynamic_cast<MiqtVirtualQAbstractTransition*>( (QAbstractTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractTransition_delete(QAbstractTransition* self) {
	delete self;
}

