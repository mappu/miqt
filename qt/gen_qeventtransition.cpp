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

bool miqt_exec_callback_QEventTransition_eventTest(QEventTransition*, intptr_t, QEvent*);
void miqt_exec_callback_QEventTransition_onTransition(QEventTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QEventTransition_event(QEventTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QEventTransition_eventFilter(QEventTransition*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QEventTransition_timerEvent(QEventTransition*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QEventTransition_childEvent(QEventTransition*, intptr_t, QChildEvent*);
void miqt_exec_callback_QEventTransition_customEvent(QEventTransition*, intptr_t, QEvent*);
void miqt_exec_callback_QEventTransition_connectNotify(QEventTransition*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QEventTransition_disconnectNotify(QEventTransition*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQEventTransition final : public QEventTransition {
public:

	MiqtVirtualQEventTransition(): QEventTransition() {};
	MiqtVirtualQEventTransition(QObject* object, QEvent::Type type): QEventTransition(object, type) {};
	MiqtVirtualQEventTransition(QState* sourceState): QEventTransition(sourceState) {};
	MiqtVirtualQEventTransition(QObject* object, QEvent::Type type, QState* sourceState): QEventTransition(object, type, sourceState) {};

	virtual ~MiqtVirtualQEventTransition() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventTest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventTest(QEvent* event) override {
		if (handle__eventTest == 0) {
			return QEventTransition::eventTest(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QEventTransition_eventTest(this, handle__eventTest, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventTest(QEvent* event) {

		return QEventTransition::eventTest(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onTransition = 0;

	// Subclass to allow providing a Go implementation
	virtual void onTransition(QEvent* event) override {
		if (handle__onTransition == 0) {
			QEventTransition::onTransition(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QEventTransition_onTransition(this, handle__onTransition, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_onTransition(QEvent* event) {

		QEventTransition::onTransition(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QEventTransition::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QEventTransition_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QEventTransition::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QEventTransition::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QEventTransition_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QEventTransition::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QEventTransition::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QEventTransition_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QEventTransition::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QEventTransition::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QEventTransition_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QEventTransition::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QEventTransition::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QEventTransition_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QEventTransition::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QEventTransition::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QEventTransition_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QEventTransition::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QEventTransition::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QEventTransition_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QEventTransition::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QEventTransition_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QEventTransition_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QEventTransition_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QEventTransition_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QEventTransition* QEventTransition_new() {
	return new MiqtVirtualQEventTransition();
}

QEventTransition* QEventTransition_new2(QObject* object, int type) {
	return new MiqtVirtualQEventTransition(object, static_cast<QEvent::Type>(type));
}

QEventTransition* QEventTransition_new3(QState* sourceState) {
	return new MiqtVirtualQEventTransition(sourceState);
}

QEventTransition* QEventTransition_new4(QObject* object, int type, QState* sourceState) {
	return new MiqtVirtualQEventTransition(object, static_cast<QEvent::Type>(type), sourceState);
}

void QEventTransition_virtbase(QEventTransition* src, QAbstractTransition** outptr_QAbstractTransition) {
	*outptr_QAbstractTransition = static_cast<QAbstractTransition*>(src);
}

QMetaObject* QEventTransition_metaObject(const QEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void* QEventTransition_metacast(QEventTransition* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QEventTransition_tr(const char* s) {
	QString _ret = QEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventTransition_trUtf8(const char* s) {
	QString _ret = QEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QEventTransition_eventSource(const QEventTransition* self) {
	return self->eventSource();
}

void QEventTransition_setEventSource(QEventTransition* self, QObject* object) {
	self->setEventSource(object);
}

int QEventTransition_eventType(const QEventTransition* self) {
	QEvent::Type _ret = self->eventType();
	return static_cast<int>(_ret);
}

void QEventTransition_setEventType(QEventTransition* self, int type) {
	self->setEventType(static_cast<QEvent::Type>(type));
}

struct miqt_string QEventTransition_tr2(const char* s, const char* c) {
	QString _ret = QEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventTransition_tr3(const char* s, const char* c, int n) {
	QString _ret = QEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventTransition_trUtf82(const char* s, const char* c) {
	QString _ret = QEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventTransition_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QEventTransition_override_virtual_eventTest(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventTest = slot;
	return true;
}

bool QEventTransition_virtualbase_eventTest(void* self, QEvent* event) {
	return ( (MiqtVirtualQEventTransition*)(self) )->virtualbase_eventTest(event);
}

bool QEventTransition_override_virtual_onTransition(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onTransition = slot;
	return true;
}

void QEventTransition_virtualbase_onTransition(void* self, QEvent* event) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_onTransition(event);
}

bool QEventTransition_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QEventTransition_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQEventTransition*)(self) )->virtualbase_event(e);
}

bool QEventTransition_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QEventTransition_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQEventTransition*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QEventTransition_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QEventTransition_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_timerEvent(event);
}

bool QEventTransition_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QEventTransition_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_childEvent(event);
}

bool QEventTransition_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QEventTransition_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_customEvent(event);
}

bool QEventTransition_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QEventTransition_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_connectNotify(signal);
}

bool QEventTransition_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QEventTransition_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QEventTransition_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QEventTransition_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QEventTransition_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QEventTransition_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQEventTransition* self_cast = dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QEventTransition_delete(QEventTransition* self) {
	delete self;
}

