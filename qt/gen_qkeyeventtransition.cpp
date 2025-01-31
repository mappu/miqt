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

void miqt_exec_callback_QKeyEventTransition_OnTransition(QKeyEventTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QKeyEventTransition_EventTest(QKeyEventTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QKeyEventTransition_Event(QKeyEventTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QKeyEventTransition_EventFilter(QKeyEventTransition*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QKeyEventTransition_TimerEvent(QKeyEventTransition*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QKeyEventTransition_ChildEvent(QKeyEventTransition*, intptr_t, QChildEvent*);
void miqt_exec_callback_QKeyEventTransition_CustomEvent(QKeyEventTransition*, intptr_t, QEvent*);
void miqt_exec_callback_QKeyEventTransition_ConnectNotify(QKeyEventTransition*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QKeyEventTransition_DisconnectNotify(QKeyEventTransition*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQKeyEventTransition final : public QKeyEventTransition {
public:

	MiqtVirtualQKeyEventTransition(): QKeyEventTransition() {};
	MiqtVirtualQKeyEventTransition(QObject* object, QEvent::Type typeVal, int key): QKeyEventTransition(object, typeVal, key) {};
	MiqtVirtualQKeyEventTransition(QState* sourceState): QKeyEventTransition(sourceState) {};
	MiqtVirtualQKeyEventTransition(QObject* object, QEvent::Type typeVal, int key, QState* sourceState): QKeyEventTransition(object, typeVal, key, sourceState) {};

	virtual ~MiqtVirtualQKeyEventTransition() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnTransition = 0;

	// Subclass to allow providing a Go implementation
	virtual void onTransition(QEvent* event) override {
		if (handle__OnTransition == 0) {
			QKeyEventTransition::onTransition(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QKeyEventTransition_OnTransition(this, handle__OnTransition, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnTransition(QEvent* event) {

		QKeyEventTransition::onTransition(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventTest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventTest(QEvent* event) override {
		if (handle__EventTest == 0) {
			return QKeyEventTransition::eventTest(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QKeyEventTransition_EventTest(this, handle__EventTest, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventTest(QEvent* event) {

		return QKeyEventTransition::eventTest(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QKeyEventTransition::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QKeyEventTransition_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QKeyEventTransition::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QKeyEventTransition::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QKeyEventTransition_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QKeyEventTransition::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QKeyEventTransition::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QKeyEventTransition_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QKeyEventTransition::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QKeyEventTransition::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QKeyEventTransition_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QKeyEventTransition::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QKeyEventTransition::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QKeyEventTransition_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QKeyEventTransition::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QKeyEventTransition::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QKeyEventTransition_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QKeyEventTransition::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QKeyEventTransition::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QKeyEventTransition_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QKeyEventTransition::disconnectNotify(*signal);

	}

};

QKeyEventTransition* QKeyEventTransition_new() {
	return new MiqtVirtualQKeyEventTransition();
}

QKeyEventTransition* QKeyEventTransition_new2(QObject* object, int typeVal, int key) {
	return new MiqtVirtualQKeyEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<int>(key));
}

QKeyEventTransition* QKeyEventTransition_new3(QState* sourceState) {
	return new MiqtVirtualQKeyEventTransition(sourceState);
}

QKeyEventTransition* QKeyEventTransition_new4(QObject* object, int typeVal, int key, QState* sourceState) {
	return new MiqtVirtualQKeyEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<int>(key), sourceState);
}

void QKeyEventTransition_virtbase(QKeyEventTransition* src, QEventTransition** outptr_QEventTransition) {
	*outptr_QEventTransition = static_cast<QEventTransition*>(src);
}

QMetaObject* QKeyEventTransition_MetaObject(const QKeyEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void* QKeyEventTransition_Metacast(QKeyEventTransition* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QKeyEventTransition_Tr(const char* s) {
	QString _ret = QKeyEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeyEventTransition_TrUtf8(const char* s) {
	QString _ret = QKeyEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QKeyEventTransition_Key(const QKeyEventTransition* self) {
	return self->key();
}

void QKeyEventTransition_SetKey(QKeyEventTransition* self, int key) {
	self->setKey(static_cast<int>(key));
}

int QKeyEventTransition_ModifierMask(const QKeyEventTransition* self) {
	Qt::KeyboardModifiers _ret = self->modifierMask();
	return static_cast<int>(_ret);
}

void QKeyEventTransition_SetModifierMask(QKeyEventTransition* self, int modifiers) {
	self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

struct miqt_string QKeyEventTransition_Tr2(const char* s, const char* c) {
	QString _ret = QKeyEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeyEventTransition_Tr3(const char* s, const char* c, int n) {
	QString _ret = QKeyEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeyEventTransition_TrUtf82(const char* s, const char* c) {
	QString _ret = QKeyEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeyEventTransition_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QKeyEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QKeyEventTransition_override_virtual_OnTransition(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OnTransition = slot;
	return true;
}

void QKeyEventTransition_virtualbase_OnTransition(void* self, QEvent* event) {
	( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_OnTransition(event);
}

bool QKeyEventTransition_override_virtual_EventTest(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventTest = slot;
	return true;
}

bool QKeyEventTransition_virtualbase_EventTest(void* self, QEvent* event) {
	return ( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_EventTest(event);
}

bool QKeyEventTransition_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QKeyEventTransition_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_Event(e);
}

bool QKeyEventTransition_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QKeyEventTransition_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QKeyEventTransition_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QKeyEventTransition_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_TimerEvent(event);
}

bool QKeyEventTransition_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QKeyEventTransition_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_ChildEvent(event);
}

bool QKeyEventTransition_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QKeyEventTransition_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_CustomEvent(event);
}

bool QKeyEventTransition_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QKeyEventTransition_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QKeyEventTransition_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQKeyEventTransition* self_cast = dynamic_cast<MiqtVirtualQKeyEventTransition*>( (QKeyEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QKeyEventTransition_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQKeyEventTransition*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QKeyEventTransition_Delete(QKeyEventTransition* self) {
	delete self;
}

