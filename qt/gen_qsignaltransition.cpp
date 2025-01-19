#include <QAbstractTransition>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSignalTransition>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsignaltransition.h>
#include "gen_qsignaltransition.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QSignalTransition_EventTest(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSignalTransition_OnTransition(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QSignalTransition_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QSignalTransition_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSignalTransition_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSignalTransition_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSignalTransition_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSignalTransition_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSignalTransition_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSignalTransition final : public QSignalTransition {
public:

	MiqtVirtualQSignalTransition(): QSignalTransition() {};
	MiqtVirtualQSignalTransition(const QObject* sender, const char* signal): QSignalTransition(sender, signal) {};
	MiqtVirtualQSignalTransition(QState* sourceState): QSignalTransition(sourceState) {};
	MiqtVirtualQSignalTransition(const QObject* sender, const char* signal, QState* sourceState): QSignalTransition(sender, signal, sourceState) {};

	virtual ~MiqtVirtualQSignalTransition() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventTest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventTest(QEvent* event) override {
		if (handle__EventTest == 0) {
			return QSignalTransition::eventTest(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSignalTransition_EventTest(this, handle__EventTest, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventTest(QEvent* event) {

		return QSignalTransition::eventTest(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnTransition = 0;

	// Subclass to allow providing a Go implementation
	virtual void onTransition(QEvent* event) override {
		if (handle__OnTransition == 0) {
			QSignalTransition::onTransition(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSignalTransition_OnTransition(this, handle__OnTransition, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnTransition(QEvent* event) {

		QSignalTransition::onTransition(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QSignalTransition::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QSignalTransition_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QSignalTransition::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSignalTransition::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSignalTransition_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSignalTransition::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSignalTransition::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSignalTransition_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSignalTransition::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSignalTransition::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSignalTransition_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSignalTransition::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSignalTransition::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSignalTransition_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSignalTransition::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSignalTransition::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSignalTransition_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSignalTransition::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSignalTransition::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSignalTransition_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSignalTransition::disconnectNotify(*signal);

	}

};

QSignalTransition* QSignalTransition_new() {
	return new MiqtVirtualQSignalTransition();
}

QSignalTransition* QSignalTransition_new2(QObject* sender, const char* signal) {
	return new MiqtVirtualQSignalTransition(sender, signal);
}

QSignalTransition* QSignalTransition_new3(QState* sourceState) {
	return new MiqtVirtualQSignalTransition(sourceState);
}

QSignalTransition* QSignalTransition_new4(QObject* sender, const char* signal, QState* sourceState) {
	return new MiqtVirtualQSignalTransition(sender, signal, sourceState);
}

void QSignalTransition_virtbase(QSignalTransition* src, QAbstractTransition** outptr_QAbstractTransition) {
	*outptr_QAbstractTransition = static_cast<QAbstractTransition*>(src);
}

QMetaObject* QSignalTransition_MetaObject(const QSignalTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSignalTransition_Metacast(QSignalTransition* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSignalTransition_Tr(const char* s) {
	QString _ret = QSignalTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSignalTransition_TrUtf8(const char* s) {
	QString _ret = QSignalTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QSignalTransition_SenderObject(const QSignalTransition* self) {
	return self->senderObject();
}

void QSignalTransition_SetSenderObject(QSignalTransition* self, QObject* sender) {
	self->setSenderObject(sender);
}

struct miqt_string QSignalTransition_Signal(const QSignalTransition* self) {
	QByteArray _qb = self->signal();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QSignalTransition_SetSignal(QSignalTransition* self, struct miqt_string signal) {
	QByteArray signal_QByteArray(signal.data, signal.len);
	self->setSignal(signal_QByteArray);
}

struct miqt_string QSignalTransition_Tr2(const char* s, const char* c) {
	QString _ret = QSignalTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSignalTransition_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSignalTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSignalTransition_TrUtf82(const char* s, const char* c) {
	QString _ret = QSignalTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSignalTransition_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSignalTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSignalTransition_override_virtual_EventTest(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventTest = slot;
	return true;
}

bool QSignalTransition_virtualbase_EventTest(void* self, QEvent* event) {
	return ( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_EventTest(event);
}

bool QSignalTransition_override_virtual_OnTransition(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OnTransition = slot;
	return true;
}

void QSignalTransition_virtualbase_OnTransition(void* self, QEvent* event) {
	( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_OnTransition(event);
}

bool QSignalTransition_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSignalTransition_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_Event(e);
}

bool QSignalTransition_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSignalTransition_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSignalTransition_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSignalTransition_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_TimerEvent(event);
}

bool QSignalTransition_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSignalTransition_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_ChildEvent(event);
}

bool QSignalTransition_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSignalTransition_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_CustomEvent(event);
}

bool QSignalTransition_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSignalTransition_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSignalTransition_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSignalTransition_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSignalTransition_Delete(QSignalTransition* self) {
	delete self;
}

