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

void miqt_exec_callback_QHistoryState_OnEntry(void*, intptr_t, QEvent*);
void miqt_exec_callback_QHistoryState_OnExit(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QHistoryState_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QHistoryState_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHistoryState_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHistoryState_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHistoryState_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QHistoryState_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHistoryState_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQHistoryState final : public QHistoryState {
public:

	MiqtVirtualQHistoryState(): QHistoryState() {};
	MiqtVirtualQHistoryState(QHistoryState::HistoryType typeVal): QHistoryState(typeVal) {};
	MiqtVirtualQHistoryState(QState* parent): QHistoryState(parent) {};
	MiqtVirtualQHistoryState(QHistoryState::HistoryType typeVal, QState* parent): QHistoryState(typeVal, parent) {};

	virtual ~MiqtVirtualQHistoryState() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void onEntry(QEvent* event) override {
		if (handle__OnEntry == 0) {
			QHistoryState::onEntry(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHistoryState_OnEntry(this, handle__OnEntry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnEntry(QEvent* event) {

		QHistoryState::onEntry(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnExit = 0;

	// Subclass to allow providing a Go implementation
	virtual void onExit(QEvent* event) override {
		if (handle__OnExit == 0) {
			QHistoryState::onExit(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHistoryState_OnExit(this, handle__OnExit, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnExit(QEvent* event) {

		QHistoryState::onExit(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QHistoryState::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QHistoryState_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QHistoryState::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QHistoryState::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QHistoryState_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QHistoryState::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QHistoryState::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QHistoryState_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QHistoryState::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QHistoryState::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QHistoryState_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QHistoryState::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QHistoryState::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHistoryState_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QHistoryState::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QHistoryState::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHistoryState_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QHistoryState::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QHistoryState::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHistoryState_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QHistoryState::disconnectNotify(*signal);

	}

};

QHistoryState* QHistoryState_new() {
	return new MiqtVirtualQHistoryState();
}

QHistoryState* QHistoryState_new2(int typeVal) {
	return new MiqtVirtualQHistoryState(static_cast<QHistoryState::HistoryType>(typeVal));
}

QHistoryState* QHistoryState_new3(QState* parent) {
	return new MiqtVirtualQHistoryState(parent);
}

QHistoryState* QHistoryState_new4(int typeVal, QState* parent) {
	return new MiqtVirtualQHistoryState(static_cast<QHistoryState::HistoryType>(typeVal), parent);
}

void QHistoryState_virtbase(QHistoryState* src, QAbstractState** outptr_QAbstractState) {
	*outptr_QAbstractState = static_cast<QAbstractState*>(src);
}

QMetaObject* QHistoryState_MetaObject(const QHistoryState* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHistoryState_Metacast(QHistoryState* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHistoryState_Tr(const char* s) {
	QString _ret = QHistoryState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHistoryState_TrUtf8(const char* s) {
	QString _ret = QHistoryState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractTransition* QHistoryState_DefaultTransition(const QHistoryState* self) {
	return self->defaultTransition();
}

void QHistoryState_SetDefaultTransition(QHistoryState* self, QAbstractTransition* transition) {
	self->setDefaultTransition(transition);
}

QAbstractState* QHistoryState_DefaultState(const QHistoryState* self) {
	return self->defaultState();
}

void QHistoryState_SetDefaultState(QHistoryState* self, QAbstractState* state) {
	self->setDefaultState(state);
}

int QHistoryState_HistoryType(const QHistoryState* self) {
	QHistoryState::HistoryType _ret = self->historyType();
	return static_cast<int>(_ret);
}

void QHistoryState_SetHistoryType(QHistoryState* self, int typeVal) {
	self->setHistoryType(static_cast<QHistoryState::HistoryType>(typeVal));
}

struct miqt_string QHistoryState_Tr2(const char* s, const char* c) {
	QString _ret = QHistoryState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHistoryState_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHistoryState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHistoryState_TrUtf82(const char* s, const char* c) {
	QString _ret = QHistoryState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHistoryState_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QHistoryState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHistoryState_override_virtual_OnEntry(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OnEntry = slot;
	return true;
}

void QHistoryState_virtualbase_OnEntry(void* self, QEvent* event) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_OnEntry(event);
}

bool QHistoryState_override_virtual_OnExit(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OnExit = slot;
	return true;
}

void QHistoryState_virtualbase_OnExit(void* self, QEvent* event) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_OnExit(event);
}

bool QHistoryState_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QHistoryState_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQHistoryState*)(self) )->virtualbase_Event(e);
}

bool QHistoryState_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QHistoryState_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQHistoryState*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QHistoryState_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QHistoryState_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_TimerEvent(event);
}

bool QHistoryState_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QHistoryState_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_ChildEvent(event);
}

bool QHistoryState_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QHistoryState_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_CustomEvent(event);
}

bool QHistoryState_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QHistoryState_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QHistoryState_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHistoryState* self_cast = dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QHistoryState_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QHistoryState_Delete(QHistoryState* self) {
	delete self;
}

