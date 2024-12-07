#include <QAbstractTransition>
#include <QEvent>
#include <QEventTransition>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qeventtransition.h>
#include "gen_qeventtransition.h"
#include "_cgo_export.h"

class MiqtVirtualQEventTransition : public virtual QEventTransition {
public:

	MiqtVirtualQEventTransition(): QEventTransition() {};
	MiqtVirtualQEventTransition(QObject* object, QEvent::Type typeVal): QEventTransition(object, typeVal) {};
	MiqtVirtualQEventTransition(QState* sourceState): QEventTransition(sourceState) {};
	MiqtVirtualQEventTransition(QObject* object, QEvent::Type typeVal, QState* sourceState): QEventTransition(object, typeVal, sourceState) {};

	virtual ~MiqtVirtualQEventTransition() = default;

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

void QEventTransition_override_virtual_EventTest(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) )->handle__EventTest = slot;
}

bool QEventTransition_virtualbase_EventTest(void* self, QEvent* event) {
	return ( (MiqtVirtualQEventTransition*)(self) )->virtualbase_EventTest(event);
}

void QEventTransition_override_virtual_OnTransition(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) )->handle__OnTransition = slot;
}

void QEventTransition_virtualbase_OnTransition(void* self, QEvent* event) {
	( (MiqtVirtualQEventTransition*)(self) )->virtualbase_OnTransition(event);
}

void QEventTransition_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEventTransition*>( (QEventTransition*)(self) )->handle__Event = slot;
}

bool QEventTransition_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQEventTransition*)(self) )->virtualbase_Event(e);
}

void QEventTransition_Delete(QEventTransition* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQEventTransition*>( self );
	} else {
		delete self;
	}
}

