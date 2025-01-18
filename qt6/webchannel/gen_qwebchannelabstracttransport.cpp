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

void miqt_exec_callback_QWebChannelAbstractTransport_MessageReceived(intptr_t, QJsonObject*, QWebChannelAbstractTransport*);
void miqt_exec_callback_QWebChannelAbstractTransport_SendMessage(void*, intptr_t, QJsonObject*);
bool miqt_exec_callback_QWebChannelAbstractTransport_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebChannelAbstractTransport_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebChannelAbstractTransport_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebChannelAbstractTransport_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebChannelAbstractTransport_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QWebChannelAbstractTransport_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebChannelAbstractTransport_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebChannelAbstractTransport final : public QWebChannelAbstractTransport {
public:

	MiqtVirtualQWebChannelAbstractTransport(): QWebChannelAbstractTransport() {};
	MiqtVirtualQWebChannelAbstractTransport(QObject* parent): QWebChannelAbstractTransport(parent) {};

	virtual ~MiqtVirtualQWebChannelAbstractTransport() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SendMessage = 0;

	// Subclass to allow providing a Go implementation
	virtual void sendMessage(const QJsonObject& message) override {
		if (handle__SendMessage == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QJsonObject& message_ret = message;
		// Cast returned reference into pointer
		QJsonObject* sigval1 = const_cast<QJsonObject*>(&message_ret);

		miqt_exec_callback_QWebChannelAbstractTransport_SendMessage(this, handle__SendMessage, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QWebChannelAbstractTransport::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWebChannelAbstractTransport_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QWebChannelAbstractTransport::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWebChannelAbstractTransport::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebChannelAbstractTransport_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWebChannelAbstractTransport::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWebChannelAbstractTransport::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebChannelAbstractTransport_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWebChannelAbstractTransport::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWebChannelAbstractTransport::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebChannelAbstractTransport_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWebChannelAbstractTransport::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWebChannelAbstractTransport::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebChannelAbstractTransport_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWebChannelAbstractTransport::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWebChannelAbstractTransport::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebChannelAbstractTransport_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWebChannelAbstractTransport::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWebChannelAbstractTransport::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebChannelAbstractTransport_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWebChannelAbstractTransport::disconnectNotify(*signal);

	}

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

QMetaObject* QWebChannelAbstractTransport_MetaObject(const QWebChannelAbstractTransport* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebChannelAbstractTransport_Metacast(QWebChannelAbstractTransport* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebChannelAbstractTransport_Tr(const char* s) {
	QString _ret = QWebChannelAbstractTransport::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebChannelAbstractTransport_SendMessage(QWebChannelAbstractTransport* self, QJsonObject* message) {
	self->sendMessage(*message);
}

void QWebChannelAbstractTransport_MessageReceived(QWebChannelAbstractTransport* self, QJsonObject* message, QWebChannelAbstractTransport* transport) {
	self->messageReceived(*message, transport);
}

void QWebChannelAbstractTransport_connect_MessageReceived(QWebChannelAbstractTransport* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport::connect(self, static_cast<void (QWebChannelAbstractTransport::*)(const QJsonObject&, QWebChannelAbstractTransport*)>(&QWebChannelAbstractTransport::messageReceived), self, [=](const QJsonObject& message, QWebChannelAbstractTransport* transport) {
		const QJsonObject& message_ret = message;
		// Cast returned reference into pointer
		QJsonObject* sigval1 = const_cast<QJsonObject*>(&message_ret);
		QWebChannelAbstractTransport* sigval2 = transport;
		miqt_exec_callback_QWebChannelAbstractTransport_MessageReceived(slot, sigval1, sigval2);
	});
}

struct miqt_string QWebChannelAbstractTransport_Tr2(const char* s, const char* c) {
	QString _ret = QWebChannelAbstractTransport::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebChannelAbstractTransport_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebChannelAbstractTransport::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebChannelAbstractTransport_override_virtual_SendMessage(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SendMessage = slot;
	return true;
}

bool QWebChannelAbstractTransport_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QWebChannelAbstractTransport_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_Event(event);
}

bool QWebChannelAbstractTransport_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QWebChannelAbstractTransport_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QWebChannelAbstractTransport_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QWebChannelAbstractTransport_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_TimerEvent(event);
}

bool QWebChannelAbstractTransport_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QWebChannelAbstractTransport_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_ChildEvent(event);
}

bool QWebChannelAbstractTransport_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QWebChannelAbstractTransport_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_CustomEvent(event);
}

bool QWebChannelAbstractTransport_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QWebChannelAbstractTransport_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QWebChannelAbstractTransport_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebChannelAbstractTransport* self_cast = dynamic_cast<MiqtVirtualQWebChannelAbstractTransport*>( (QWebChannelAbstractTransport*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QWebChannelAbstractTransport_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebChannelAbstractTransport*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWebChannelAbstractTransport_Delete(QWebChannelAbstractTransport* self) {
	delete self;
}

