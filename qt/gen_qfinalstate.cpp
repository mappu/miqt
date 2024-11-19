#include <QAbstractState>
#include <QEvent>
#include <QFinalState>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfinalstate.h>
#include "gen_qfinalstate.h"
#include "_cgo_export.h"

class MiqtVirtualQFinalState : public virtual QFinalState {
public:

	MiqtVirtualQFinalState(): QFinalState() {};
	MiqtVirtualQFinalState(QState* parent): QFinalState(parent) {};

	virtual ~MiqtVirtualQFinalState() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void onEntry(QEvent* event) override {
		if (handle__OnEntry == 0) {
			QFinalState::onEntry(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFinalState_OnEntry(this, handle__OnEntry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnEntry(QEvent* event) {

		QFinalState::onEntry(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnExit = 0;

	// Subclass to allow providing a Go implementation
	virtual void onExit(QEvent* event) override {
		if (handle__OnExit == 0) {
			QFinalState::onExit(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFinalState_OnExit(this, handle__OnExit, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnExit(QEvent* event) {

		QFinalState::onExit(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QFinalState::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QFinalState_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QFinalState::event(e);

	}

};

void QFinalState_new(QFinalState** outptr_QFinalState, QAbstractState** outptr_QAbstractState, QObject** outptr_QObject) {
	MiqtVirtualQFinalState* ret = new MiqtVirtualQFinalState();
	*outptr_QFinalState = ret;
	*outptr_QAbstractState = static_cast<QAbstractState*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QFinalState_new2(QState* parent, QFinalState** outptr_QFinalState, QAbstractState** outptr_QAbstractState, QObject** outptr_QObject) {
	MiqtVirtualQFinalState* ret = new MiqtVirtualQFinalState(parent);
	*outptr_QFinalState = ret;
	*outptr_QAbstractState = static_cast<QAbstractState*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QFinalState_MetaObject(const QFinalState* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFinalState_Metacast(QFinalState* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFinalState_Tr(const char* s) {
	QString _ret = QFinalState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_TrUtf8(const char* s) {
	QString _ret = QFinalState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_Tr2(const char* s, const char* c) {
	QString _ret = QFinalState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFinalState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_TrUtf82(const char* s, const char* c) {
	QString _ret = QFinalState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFinalState_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QFinalState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFinalState_override_virtual_OnEntry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) )->handle__OnEntry = slot;
}

void QFinalState_virtualbase_OnEntry(void* self, QEvent* event) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_OnEntry(event);
}

void QFinalState_override_virtual_OnExit(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) )->handle__OnExit = slot;
}

void QFinalState_virtualbase_OnExit(void* self, QEvent* event) {
	( (MiqtVirtualQFinalState*)(self) )->virtualbase_OnExit(event);
}

void QFinalState_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFinalState*>( (QFinalState*)(self) )->handle__Event = slot;
}

bool QFinalState_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQFinalState*)(self) )->virtualbase_Event(e);
}

void QFinalState_Delete(QFinalState* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQFinalState*>( self );
	} else {
		delete self;
	}
}

