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

void miqt_exec_callback_QWebEngineUrlSchemeHandler_requestStarted(QWebEngineUrlSchemeHandler*, intptr_t, QWebEngineUrlRequestJob*);
bool miqt_exec_callback_QWebEngineUrlSchemeHandler_event(QWebEngineUrlSchemeHandler*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebEngineUrlSchemeHandler_eventFilter(QWebEngineUrlSchemeHandler*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_timerEvent(QWebEngineUrlSchemeHandler*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_childEvent(QWebEngineUrlSchemeHandler*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_customEvent(QWebEngineUrlSchemeHandler*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_connectNotify(QWebEngineUrlSchemeHandler*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_disconnectNotify(QWebEngineUrlSchemeHandler*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebEngineUrlSchemeHandler final : public QWebEngineUrlSchemeHandler {
public:

	MiqtVirtualQWebEngineUrlSchemeHandler(): QWebEngineUrlSchemeHandler() {};
	MiqtVirtualQWebEngineUrlSchemeHandler(QObject* parent): QWebEngineUrlSchemeHandler(parent) {};

	virtual ~MiqtVirtualQWebEngineUrlSchemeHandler() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__requestStarted = 0;

	// Subclass to allow providing a Go implementation
	virtual void requestStarted(QWebEngineUrlRequestJob* param1) override {
		if (handle__requestStarted == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QWebEngineUrlRequestJob* sigval1 = param1;

		miqt_exec_callback_QWebEngineUrlSchemeHandler_requestStarted(this, handle__requestStarted, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWebEngineUrlSchemeHandler::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWebEngineUrlSchemeHandler_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QWebEngineUrlSchemeHandler::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWebEngineUrlSchemeHandler::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebEngineUrlSchemeHandler_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWebEngineUrlSchemeHandler::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWebEngineUrlSchemeHandler::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineUrlSchemeHandler_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWebEngineUrlSchemeHandler::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWebEngineUrlSchemeHandler::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineUrlSchemeHandler_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWebEngineUrlSchemeHandler::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWebEngineUrlSchemeHandler::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineUrlSchemeHandler_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWebEngineUrlSchemeHandler::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWebEngineUrlSchemeHandler::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEngineUrlSchemeHandler_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWebEngineUrlSchemeHandler::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWebEngineUrlSchemeHandler::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEngineUrlSchemeHandler_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWebEngineUrlSchemeHandler::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QWebEngineUrlSchemeHandler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEngineUrlSchemeHandler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEngineUrlSchemeHandler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebEngineUrlSchemeHandler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QWebEngineUrlSchemeHandler_metaObject(const QWebEngineUrlSchemeHandler* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineUrlSchemeHandler_metacast(QWebEngineUrlSchemeHandler* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineUrlSchemeHandler_tr(const char* s) {
	QString _ret = QWebEngineUrlSchemeHandler::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineUrlSchemeHandler_requestStarted(QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1) {
	self->requestStarted(param1);
}

struct miqt_string QWebEngineUrlSchemeHandler_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineUrlSchemeHandler::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlSchemeHandler_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineUrlSchemeHandler::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineUrlSchemeHandler_override_virtual_requestStarted(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__requestStarted = slot;
	return true;
}

bool QWebEngineUrlSchemeHandler_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWebEngineUrlSchemeHandler_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_event(event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWebEngineUrlSchemeHandler_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_timerEvent(event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_childEvent(event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_customEvent(event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_connectNotify(signal);
}

bool QWebEngineUrlSchemeHandler_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEngineUrlSchemeHandler*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QWebEngineUrlSchemeHandler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWebEngineUrlSchemeHandler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWebEngineUrlSchemeHandler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWebEngineUrlSchemeHandler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWebEngineUrlSchemeHandler_delete(QWebEngineUrlSchemeHandler* self) {
	delete self;
}

