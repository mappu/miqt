#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QEventTransition>
#include <QKeyEventTransition>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qkeyeventtransition.h>
#include "gen_qkeyeventtransition.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QKeyEventTransition_onTransition(QKeyEventTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QKeyEventTransition_eventTest(QKeyEventTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QKeyEventTransition_event(QKeyEventTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QKeyEventTransition_eventFilter(QKeyEventTransition*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QKeyEventTransition_timerEvent(QKeyEventTransition*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QKeyEventTransition_childEvent(QKeyEventTransition*, intptr_t, QChildEvent*);
void miqt_exec_callback_QKeyEventTransition_customEvent(QKeyEventTransition*, intptr_t, QEvent*);
void miqt_exec_callback_QKeyEventTransition_connectNotify(QKeyEventTransition*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QKeyEventTransition_disconnectNotify(QKeyEventTransition*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQKeyEventTransition final : public QKeyEventTransition {
public:

	MiqtVirtualQKeyEventTransition(): QKeyEventTransition() {};
	MiqtVirtualQKeyEventTransition(QObject* object, QEvent::Type type, int key): QKeyEventTransition(object, type, key) {};
	MiqtVirtualQKeyEventTransition(QState* sourceState): QKeyEventTransition(sourceState) {};
	MiqtVirtualQKeyEventTransition(QObject* object, QEvent::Type type, int key, QState* sourceState): QKeyEventTransition(object, type, key, sourceState) {};

	virtual ~MiqtVirtualQKeyEventTransition() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onTransition = 0;

	// Subclass to allow providing a Go implementation
	virtual void onTransition(QEvent* event) override {
		if (handle__onTransition == 0) {
			QKeyEventTransition::onTransition(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QKeyEventTransition_onTransition(this, handle__onTransition, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_onTransition(QEvent* event) {

		QKeyEventTransition::onTransition(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventTest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventTest(QEvent* event) override {
		if (handle__eventTest == 0) {
			return QKeyEventTransition::eventTest(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QKeyEventTransition_eventTest(this, handle__eventTest, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventTest(QEvent* event) {

		return QKeyEventTransition::eventTest(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QKeyEventTransition::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QKeyEventTransition_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QKeyEventTransition::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QKeyEventTransition::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QKeyEventTransition_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QKeyEventTransition::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QKeyEventTransition::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QKeyEventTransition_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QKeyEventTransition::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QKeyEventTransition::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QKeyEventTransition_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QKeyEventTransition::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QKeyEventTransition::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QKeyEventTransition_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QKeyEventTransition::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QKeyEventTransition::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QKeyEventTransition_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QKeyEventTransition::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QKeyEventTransition::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QKeyEventTransition_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QKeyEventTransition::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QKeyEventTransition_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QKeyEventTransition_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QKeyEventTransition_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QKeyEventTransition_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QKeyEventTransition* QKeyEventTransition_new() {
	return new MiqtVirtualQKeyEventTransition();
}

QKeyEventTransition* QKeyEventTransition_new2(QObject* object, int type, int key) {
	return new MiqtVirtualQKeyEventTransition(object, static_cast<QEvent::Type>(type), static_cast<int>(key));
}

QKeyEventTransition* QKeyEventTransition_new3(QState* sourceState) {
	return new MiqtVirtualQKeyEventTransition(sourceState);
}

QKeyEventTransition* QKeyEventTransition_new4(QObject* object, int type, int key, QState* sourceState) {
	return new MiqtVirtualQKeyEventTransition(object, static_cast<QEvent::Type>(type), static_cast<int>(key), sourceState);
}

void QKeyEventTransition_virtbase(QKeyEventTransition* src, QEventTransition** outptr_QEventTransition) {
	*outptr_QEventTransition = static_cast<QEventTransition*>(src);
}

QMetaObject* QKeyEventTransition_metaObject(const QKeyEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void* QKeyEventTransition_metacast(QKeyEventTransition* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QKeyEventTransition_tr(const char* s) {
	QString _ret = QKeyEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeyEventTransition_trUtf8(const char* s) {
	QString _ret = QKeyEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QKeyEventTransition_key(const QKeyEventTransition* self) {
	return self->key();
}

void QKeyEventTransition_setKey(QKeyEventTransition* self, int key) {
	self->setKey(static_cast<int>(key));
}

int QKeyEventTransition_modifierMask(const QKeyEventTransition* self) {
	Qt::KeyboardModifiers _ret = self->modifierMask();
	return static_cast<int>(_ret);
}

void QKeyEventTransition_setModifierMask(QKeyEventTransition* self, int modifiers) {
	self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

struct miqt_string QKeyEventTransition_tr2(const char* s, const char* c) {
	QString _ret = QKeyEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeyEventTransition_tr3(const char* s, const char* c, int n) {
	QString _ret = QKeyEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeyEventTransition_trUtf82(const char* s, const char* c) {
	QString _ret = QKeyEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeyEventTransition_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QKeyEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QKeyEventTransition_override_virtual_onTransition(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onTransition = slot;
	return true;
}

void QKeyEventTransition_virtualbase_onTransition(void* self, QEvent* event) {
	( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_onTransition(event);
}

bool QKeyEventTransition_override_virtual_eventTest(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventTest = slot;
	return true;
}

bool QKeyEventTransition_virtualbase_eventTest(void* self, QEvent* event) {
	return ( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_eventTest(event);
}

bool QKeyEventTransition_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QKeyEventTransition_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_event(e);
}

bool QKeyEventTransition_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QKeyEventTransition_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QKeyEventTransition_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QKeyEventTransition_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_timerEvent(event);
}

bool QKeyEventTransition_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QKeyEventTransition_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_childEvent(event);
}

bool QKeyEventTransition_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QKeyEventTransition_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_customEvent(event);
}

bool QKeyEventTransition_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QKeyEventTransition_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_connectNotify(signal);
}

bool QKeyEventTransition_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QKeyEventTransition_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QKeyEventTransition_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QKeyEventTransition_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QKeyEventTransition_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QKeyEventTransition_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QKeyEventTransition_delete(QKeyEventTransition* self) {
	delete self;
}

