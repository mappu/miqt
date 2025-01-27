#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWebEngineUrlRequestJob>
#include <QWebEngineUrlSchemeHandler>
#include <qwebengineurlschemehandler.h>
#include "gen_qwebengineurlschemehandler.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebEngineUrlSchemeHandler_RequestStarted(QWebEngineUrlSchemeHandler*, intptr_t, QWebEngineUrlRequestJob*);
bool miqt_exec_callback_QWebEngineUrlSchemeHandler_Event(QWebEngineUrlSchemeHandler*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebEngineUrlSchemeHandler_EventFilter(QWebEngineUrlSchemeHandler*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_TimerEvent(QWebEngineUrlSchemeHandler*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_ChildEvent(QWebEngineUrlSchemeHandler*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_CustomEvent(QWebEngineUrlSchemeHandler*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_ConnectNotify(QWebEngineUrlSchemeHandler*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_DisconnectNotify(QWebEngineUrlSchemeHandler*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebEngineUrlSchemeHandler final : public QWebEngineUrlSchemeHandler {
public:

	MiqtVirtualQWebEngineUrlSchemeHandler(): QWebEngineUrlSchemeHandler() {};
	MiqtVirtualQWebEngineUrlSchemeHandler(QObject* parent): QWebEngineUrlSchemeHandler(parent) {};

	virtual ~MiqtVirtualQWebEngineUrlSchemeHandler() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RequestStarted = 0;

	// Subclass to allow providing a Go implementation
	virtual void requestStarted(QWebEngineUrlRequestJob* param1) override {
		if (handle__RequestStarted == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QWebEngineUrlRequestJob* sigval1 = param1;

		miqt_exec_callback_QWebEngineUrlSchemeHandler_RequestStarted(this, handle__RequestStarted, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QWebEngineUrlSchemeHandler::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWebEngineUrlSchemeHandler_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QWebEngineUrlSchemeHandler::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWebEngineUrlSchemeHandler::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebEngineUrlSchemeHandler_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWebEngineUrlSchemeHandler::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWebEngineUrlSchemeHandler::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineUrlSchemeHandler_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWebEngineUrlSchemeHandler::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWebEngineUrlSchemeHandler::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineUrlSchemeHandler_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWebEngineUrlSchemeHandler::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWebEngineUrlSchemeHandler::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineUrlSchemeHandler_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWebEngineUrlSchemeHandler::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWebEngineUrlSchemeHandler::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEngineUrlSchemeHandler_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWebEngineUrlSchemeHandler::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWebEngineUrlSchemeHandler::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEngineUrlSchemeHandler_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWebEngineUrlSchemeHandler::disconnectNotify(*signal);

	}

};

QWebEngineUrlSchemeHandler* QWebEngineUrlSchemeHandler_new() {
	return new MiqtVirtualQWebEngineUrlSchemeHandler();
}

QWebEngineUrlSchemeHandler* QWebEngineUrlSchemeHandler_new2(QObject* parent) {
	return new MiqtVirtualQWebEngineUrlSchemeHandler(parent);
}

void QWebEngineUrlSchemeHandler_virtbase(QWebEngineUrlSchemeHandler* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineUrlSchemeHandler_MetaObject(const QWebEngineUrlSchemeHandler* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineUrlSchemeHandler_Metacast(QWebEngineUrlSchemeHandler* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineUrlSchemeHandler_Tr(const char* s) {
	QString _ret = QWebEngineUrlSchemeHandler::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineUrlSchemeHandler_RequestStarted(QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1) {
	self->requestStarted(param1);
}

struct miqt_string QWebEngineUrlSchemeHandler_Tr2(const char* s, const char* c) {
	QString _ret = QWebEngineUrlSchemeHandler::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlSchemeHandler_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineUrlSchemeHandler::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineUrlSchemeHandler_override_virtual_RequestStarted(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RequestStarted = slot;
	return true;
}

bool QWebEngineUrlSchemeHandler_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QWebEngineUrlSchemeHandler_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_Event(event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QWebEngineUrlSchemeHandler_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_TimerEvent(event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_ChildEvent(event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_CustomEvent(event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QWebEngineUrlSchemeHandler_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWebEngineUrlSchemeHandler_Delete(QWebEngineUrlSchemeHandler* self) {
	delete self;
}

