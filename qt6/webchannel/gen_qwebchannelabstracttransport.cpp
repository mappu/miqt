#include <QChildEvent>
#include <QEvent>
#include <QJsonObject>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWebChannelAbstractTransport>
#include <qwebchannelabstracttransport.h>
#include "gen_qwebchannelabstracttransport.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebChannelAbstractTransport_messageReceived(intptr_t, QJsonObject*, QWebChannelAbstractTransport*);
void miqt_exec_callback_QWebChannelAbstractTransport_sendMessage(QWebChannelAbstractTransport*, intptr_t, QJsonObject*);
bool miqt_exec_callback_QWebChannelAbstractTransport_event(QWebChannelAbstractTransport*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebChannelAbstractTransport_eventFilter(QWebChannelAbstractTransport*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebChannelAbstractTransport_timerEvent(QWebChannelAbstractTransport*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebChannelAbstractTransport_childEvent(QWebChannelAbstractTransport*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebChannelAbstractTransport_customEvent(QWebChannelAbstractTransport*, intptr_t, QEvent*);
void miqt_exec_callback_QWebChannelAbstractTransport_connectNotify(QWebChannelAbstractTransport*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebChannelAbstractTransport_disconnectNotify(QWebChannelAbstractTransport*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebChannelAbstractTransport final : public QWebChannelAbstractTransport {
public:

	MiqtVirtualQWebChannelAbstractTransport(): QWebChannelAbstractTransport() {};
	MiqtVirtualQWebChannelAbstractTransport(QObject* parent): QWebChannelAbstractTransport(parent) {};

	virtual ~MiqtVirtualQWebChannelAbstractTransport() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sendMessage = 0;

	// Subclass to allow providing a Go implementation
	virtual void sendMessage(const QJsonObject& message) override {
		if (handle__sendMessage == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QJsonObject& message_ret = message;
		// Cast returned reference into pointer
		QJsonObject* sigval1 = const_cast<QJsonObject*>(&message_ret);

		miqt_exec_callback_QWebChannelAbstractTransport_sendMessage(this, handle__sendMessage, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWebChannelAbstractTransport::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWebChannelAbstractTransport_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QWebChannelAbstractTransport::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWebChannelAbstractTransport::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebChannelAbstractTransport_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWebChannelAbstractTransport::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWebChannelAbstractTransport::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebChannelAbstractTransport_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWebChannelAbstractTransport::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWebChannelAbstractTransport::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebChannelAbstractTransport_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWebChannelAbstractTransport::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWebChannelAbstractTransport::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebChannelAbstractTransport_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWebChannelAbstractTransport::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWebChannelAbstractTransport::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebChannelAbstractTransport_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWebChannelAbstractTransport::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWebChannelAbstractTransport::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebChannelAbstractTransport_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWebChannelAbstractTransport::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QWebChannelAbstractTransport_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebChannelAbstractTransport_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebChannelAbstractTransport_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebChannelAbstractTransport_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWebChannelAbstractTransport* QWebChannelAbstractTransport_new() {
	return new MiqtVirtualQWebChannelAbstractTransport();
}

QWebChannelAbstractTransport* QWebChannelAbstractTransport_new2(QObject* parent) {
	return new MiqtVirtualQWebChannelAbstractTransport(parent);
}

void QWebChannelAbstractTransport_virtbase(QWebChannelAbstractTransport* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebChannelAbstractTransport_metaObject(const QWebChannelAbstractTransport* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebChannelAbstractTransport_metacast(QWebChannelAbstractTransport* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebChannelAbstractTransport_tr(const char* s) {
	QString _ret = QWebChannelAbstractTransport::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebChannelAbstractTransport_sendMessage(QWebChannelAbstractTransport* self, QJsonObject* message) {
	self->sendMessage(*message);
}

void QWebChannelAbstractTransport_messageReceived(QWebChannelAbstractTransport* self, QJsonObject* message, QWebChannelAbstractTransport* transport) {
	self->messageReceived(*message, transport);
}

void QWebChannelAbstractTransport_connect_messageReceived(QWebChannelAbstractTransport* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport::connect(self, static_cast<void (QWebChannelAbstractTransport::*)(const QJsonObject&, QWebChannelAbstractTransport*)>(&QWebChannelAbstractTransport::messageReceived), self, [=](const QJsonObject& message, QWebChannelAbstractTransport* transport) {
		const QJsonObject& message_ret = message;
		// Cast returned reference into pointer
		QJsonObject* sigval1 = const_cast<QJsonObject*>(&message_ret);
		QWebChannelAbstractTransport* sigval2 = transport;
		miqt_exec_callback_QWebChannelAbstractTransport_messageReceived(slot, sigval1, sigval2);
	});
}

struct miqt_string QWebChannelAbstractTransport_tr2(const char* s, const char* c) {
	QString _ret = QWebChannelAbstractTransport::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebChannelAbstractTransport_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebChannelAbstractTransport::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebChannelAbstractTransport_override_virtual_sendMessage(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sendMessage = slot;
	return true;
}

bool QWebChannelAbstractTransport_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWebChannelAbstractTransport_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_event(event);
}

bool QWebChannelAbstractTransport_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWebChannelAbstractTransport_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWebChannelAbstractTransport_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWebChannelAbstractTransport_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_timerEvent(event);
}

bool QWebChannelAbstractTransport_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWebChannelAbstractTransport_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_childEvent(event);
}

bool QWebChannelAbstractTransport_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWebChannelAbstractTransport_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_customEvent(event);
}

bool QWebChannelAbstractTransport_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWebChannelAbstractTransport_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_connectNotify(signal);
}

bool QWebChannelAbstractTransport_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWebChannelAbstractTransport_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QWebChannelAbstractTransport_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWebChannelAbstractTransport_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWebChannelAbstractTransport_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWebChannelAbstractTransport_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWebChannelAbstractTransport_delete(QWebChannelAbstractTransport* self) {
	delete self;
}

