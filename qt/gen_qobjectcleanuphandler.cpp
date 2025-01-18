#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QObjectCleanupHandler>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qobjectcleanuphandler.h>
#include "gen_qobjectcleanuphandler.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QObjectCleanupHandler_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QObjectCleanupHandler_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QObjectCleanupHandler_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QObjectCleanupHandler_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QObjectCleanupHandler_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QObjectCleanupHandler_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QObjectCleanupHandler_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQObjectCleanupHandler final : public QObjectCleanupHandler {
public:

	MiqtVirtualQObjectCleanupHandler(): QObjectCleanupHandler() {};

	virtual ~MiqtVirtualQObjectCleanupHandler() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QObjectCleanupHandler::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QObjectCleanupHandler_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QObjectCleanupHandler::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QObjectCleanupHandler::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QObjectCleanupHandler_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QObjectCleanupHandler::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QObjectCleanupHandler::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QObjectCleanupHandler_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QObjectCleanupHandler::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QObjectCleanupHandler::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QObjectCleanupHandler_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QObjectCleanupHandler::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QObjectCleanupHandler::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QObjectCleanupHandler_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QObjectCleanupHandler::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QObjectCleanupHandler::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QObjectCleanupHandler_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QObjectCleanupHandler::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QObjectCleanupHandler::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QObjectCleanupHandler_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QObjectCleanupHandler::disconnectNotify(*signal);

	}

};

QObjectCleanupHandler* QObjectCleanupHandler_new() {
	return new MiqtVirtualQObjectCleanupHandler();
}

void QObjectCleanupHandler_virtbase(QObjectCleanupHandler* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QObjectCleanupHandler_MetaObject(const QObjectCleanupHandler* self) {
	return (QMetaObject*) self->metaObject();
}

void* QObjectCleanupHandler_Metacast(QObjectCleanupHandler* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QObjectCleanupHandler_Tr(const char* s) {
	QString _ret = QObjectCleanupHandler::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObjectCleanupHandler_TrUtf8(const char* s) {
	QString _ret = QObjectCleanupHandler::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QObjectCleanupHandler_Add(QObjectCleanupHandler* self, QObject* object) {
	return self->add(object);
}

void QObjectCleanupHandler_Remove(QObjectCleanupHandler* self, QObject* object) {
	self->remove(object);
}

bool QObjectCleanupHandler_IsEmpty(const QObjectCleanupHandler* self) {
	return self->isEmpty();
}

void QObjectCleanupHandler_Clear(QObjectCleanupHandler* self) {
	self->clear();
}

struct miqt_string QObjectCleanupHandler_Tr2(const char* s, const char* c) {
	QString _ret = QObjectCleanupHandler::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObjectCleanupHandler_Tr3(const char* s, const char* c, int n) {
	QString _ret = QObjectCleanupHandler::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObjectCleanupHandler_TrUtf82(const char* s, const char* c) {
	QString _ret = QObjectCleanupHandler::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObjectCleanupHandler_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QObjectCleanupHandler::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QObjectCleanupHandler_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QObjectCleanupHandler_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_Event(event);
}

bool QObjectCleanupHandler_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QObjectCleanupHandler_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QObjectCleanupHandler_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QObjectCleanupHandler_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_TimerEvent(event);
}

bool QObjectCleanupHandler_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QObjectCleanupHandler_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_ChildEvent(event);
}

bool QObjectCleanupHandler_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QObjectCleanupHandler_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_CustomEvent(event);
}

bool QObjectCleanupHandler_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QObjectCleanupHandler_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QObjectCleanupHandler_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QObjectCleanupHandler_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QObjectCleanupHandler_Delete(QObjectCleanupHandler* self) {
	delete self;
}

