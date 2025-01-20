#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QEventTransition>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qeventtransition.h>
#include "gen_qeventtransition.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QEventTransition_EventTest(void*, intptr_t, QEvent*);
void miqt_exec_callback_QEventTransition_OnTransition(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QEventTransition_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QEventTransition_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QEventTransition_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QEventTransition_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QEventTransition_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QEventTransition_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QEventTransition_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQEventTransition final : public QEventTransition {
public:

	MiqtVirtualQEventTransition(): QEventTransition() {};
	MiqtVirtualQEventTransition(QObject* object, QEvent::Type typeVal): QEventTransition(object, typeVal) {};
	MiqtVirtualQEventTransition(QState* sourceState): QEventTransition(sourceState) {};
	MiqtVirtualQEventTransition(QObject* object, QEvent::Type typeVal, QState* sourceState): QEventTransition(object, typeVal, sourceState) {};

	virtual ~MiqtVirtualQEventTransition() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventTest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventTest(QEvent* event) override {
		if (handle__EventTest == 0) {
			return QEventTransition::eventTest(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QEventTransition_EventTest(this, handle__EventTest, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventTest(QEvent* event) {

		return QEventTransition::eventTest(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnTransition = 0;

	// Subclass to allow providing a Go implementation
	virtual void onTransition(QEvent* event) override {
		if (handle__OnTransition == 0) {
			QEventTransition::onTransition(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QEventTransition_OnTransition(this, handle__OnTransition, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnTransition(QEvent* event) {

		QEventTransition::onTransition(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QEventTransition::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QEventTransition_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QEventTransition::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QEventTransition::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QEventTransition_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QEventTransition::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QEventTransition::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QEventTransition_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QEventTransition::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QEventTransition::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QEventTransition_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QEventTransition::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QEventTransition::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QEventTransition_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QEventTransition::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QEventTransition::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QEventTransition_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QEventTransition::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QEventTransition::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QEventTransition_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QEventTransition::disconnectNotify(*signal);

	}

};

QEventTransition* QEventTransition_new() {
	return new MiqtVirtualQEventTransition();
}

QEventTransition* QEventTransition_new2(QObject* object, int typeVal) {
	return new MiqtVirtualQEventTransition(object, static_cast<QEvent::Type>(typeVal));
}

QEventTransition* QEventTransition_new3(QState* sourceState) {
	return new MiqtVirtualQEventTransition(sourceState);
}

QEventTransition* QEventTransition_new4(QObject* object, int typeVal, QState* sourceState) {
	return new MiqtVirtualQEventTransition(object, static_cast<QEvent::Type>(typeVal), sourceState);
}

void QEventTransition_virtbase(QEventTransition* src, QAbstractTransition** outptr_QAbstractTransition) {
	*outptr_QAbstractTransition = static_cast<QAbstractTransition*>(src);
}

QMetaObject* QEventTransition_MetaObject(const QEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void* QEventTransition_Metacast(QEventTransition* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QEventTransition_Tr(const char* s) {
	QString _ret = QEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventTransition_TrUtf8(const char* s) {
	QString _ret = QEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QEventTransition_EventSource(const QEventTransition* self) {
	return self->eventSource();
}

void QEventTransition_SetEventSource(QEventTransition* self, QObject* object) {
	self->setEventSource(object);
}

int QEventTransition_EventType(const QEventTransition* self) {
	QEvent::Type _ret = self->eventType();
	return static_cast<int>(_ret);
}

void QEventTransition_SetEventType(QEventTransition* self, int typeVal) {
	self->setEventType(static_cast<QEvent::Type>(typeVal));
}

struct miqt_string QEventTransition_Tr2(const char* s, const char* c) {
	QString _ret = QEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventTransition_Tr3(const char* s, const char* c, int n) {
	QString _ret = QEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventTransition_TrUtf82(const char* s, const char* c) {
	QString _ret = QEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventTransition_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QEventTransition_override_virtual_EventTest(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventTest = slot;
	return true;
}

bool QEventTransition_virtualbase_EventTest(void* self, QEvent* event) {
	return ( (MiqtVirtualQEventTransition*)(self) )->virtualbase_EventTest(event);
}

bool QEventTransition_override_virtual_OnTransition(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OnTransition = slot;
	return true;
}

void QEventTransition_virtualbase_OnTransition(void* self, QEvent* event) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_OnTransition(event);
}

bool QEventTransition_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QEventTransition_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQEventTransition*)(self) )->virtualbase_Event(e);
}

bool QEventTransition_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QEventTransition_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQEventTransition*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QEventTransition_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QEventTransition_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_TimerEvent(event);
}

bool QEventTransition_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QEventTransition_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_ChildEvent(event);
}

bool QEventTransition_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QEventTransition_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_CustomEvent(event);
}

bool QEventTransition_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QEventTransition_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QEventTransition_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QEventTransition_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QEventTransition_Delete(QEventTransition* self) {
	delete self;
}

