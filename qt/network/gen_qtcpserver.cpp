#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimerEvent>
#include <qtcpserver.h>
#include "gen_qtcpserver.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTcpServer_NewConnection(intptr_t);
void miqt_exec_callback_QTcpServer_AcceptError(intptr_t, int);
bool miqt_exec_callback_QTcpServer_HasPendingConnections(void*, intptr_t);
QTcpSocket* miqt_exec_callback_QTcpServer_NextPendingConnection(void*, intptr_t);
void miqt_exec_callback_QTcpServer_IncomingConnection(void*, intptr_t, intptr_t);
bool miqt_exec_callback_QTcpServer_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QTcpServer_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTcpServer_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTcpServer_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTcpServer_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTcpServer_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTcpServer_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTcpServer final : public QTcpServer {
public:

	MiqtVirtualQTcpServer(): QTcpServer() {};
	MiqtVirtualQTcpServer(QObject* parent): QTcpServer(parent) {};

	virtual ~MiqtVirtualQTcpServer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasPendingConnections = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasPendingConnections() const override {
		if (handle__HasPendingConnections == 0) {
			return QTcpServer::hasPendingConnections();
		}
		

		bool callback_return_value = miqt_exec_callback_QTcpServer_HasPendingConnections(const_cast<MiqtVirtualQTcpServer*>(this), handle__HasPendingConnections);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasPendingConnections() const {

		return QTcpServer::hasPendingConnections();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextPendingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual QTcpSocket* nextPendingConnection() override {
		if (handle__NextPendingConnection == 0) {
			return QTcpServer::nextPendingConnection();
		}
		

		QTcpSocket* callback_return_value = miqt_exec_callback_QTcpServer_NextPendingConnection(this, handle__NextPendingConnection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTcpSocket* virtualbase_NextPendingConnection() {

		return QTcpServer::nextPendingConnection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IncomingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual void incomingConnection(qintptr handle) override {
		if (handle__IncomingConnection == 0) {
			QTcpServer::incomingConnection(handle);
			return;
		}
		
		qintptr handle_ret = handle;
		intptr_t sigval1 = (intptr_t)(handle_ret);

		miqt_exec_callback_QTcpServer_IncomingConnection(this, handle__IncomingConnection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_IncomingConnection(intptr_t handle) {

		QTcpServer::incomingConnection((qintptr)(handle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QTcpServer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTcpServer_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QTcpServer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QTcpServer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTcpServer_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QTcpServer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTcpServer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTcpServer_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTcpServer::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QTcpServer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTcpServer_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QTcpServer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QTcpServer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTcpServer_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QTcpServer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QTcpServer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTcpServer_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QTcpServer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QTcpServer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTcpServer_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QTcpServer::disconnectNotify(*signal);

	}

};

QTcpServer* QTcpServer_new() {
	return new MiqtVirtualQTcpServer();
}

QTcpServer* QTcpServer_new2(QObject* parent) {
	return new MiqtVirtualQTcpServer(parent);
}

void QTcpServer_virtbase(QTcpServer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QTcpServer_MetaObject(const QTcpServer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTcpServer_Metacast(QTcpServer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTcpServer_Tr(const char* s) {
	QString _ret = QTcpServer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpServer_TrUtf8(const char* s) {
	QString _ret = QTcpServer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTcpServer_Listen(QTcpServer* self) {
	return self->listen();
}

void QTcpServer_Close(QTcpServer* self) {
	self->close();
}

bool QTcpServer_IsListening(const QTcpServer* self) {
	return self->isListening();
}

void QTcpServer_SetMaxPendingConnections(QTcpServer* self, int numConnections) {
	self->setMaxPendingConnections(static_cast<int>(numConnections));
}

int QTcpServer_MaxPendingConnections(const QTcpServer* self) {
	return self->maxPendingConnections();
}

uint16_t QTcpServer_ServerPort(const QTcpServer* self) {
	quint16 _ret = self->serverPort();
	return static_cast<uint16_t>(_ret);
}

QHostAddress* QTcpServer_ServerAddress(const QTcpServer* self) {
	return new QHostAddress(self->serverAddress());
}

intptr_t QTcpServer_SocketDescriptor(const QTcpServer* self) {
	qintptr _ret = self->socketDescriptor();
	return (intptr_t)(_ret);
}

bool QTcpServer_SetSocketDescriptor(QTcpServer* self, intptr_t socketDescriptor) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor));
}

bool QTcpServer_WaitForNewConnection(QTcpServer* self) {
	return self->waitForNewConnection();
}

bool QTcpServer_HasPendingConnections(const QTcpServer* self) {
	return self->hasPendingConnections();
}

QTcpSocket* QTcpServer_NextPendingConnection(QTcpServer* self) {
	return self->nextPendingConnection();
}

int QTcpServer_ServerError(const QTcpServer* self) {
	QAbstractSocket::SocketError _ret = self->serverError();
	return static_cast<int>(_ret);
}

struct miqt_string QTcpServer_ErrorString(const QTcpServer* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTcpServer_PauseAccepting(QTcpServer* self) {
	self->pauseAccepting();
}

void QTcpServer_ResumeAccepting(QTcpServer* self) {
	self->resumeAccepting();
}

void QTcpServer_SetProxy(QTcpServer* self, QNetworkProxy* networkProxy) {
	self->setProxy(*networkProxy);
}

QNetworkProxy* QTcpServer_Proxy(const QTcpServer* self) {
	return new QNetworkProxy(self->proxy());
}

void QTcpServer_NewConnection(QTcpServer* self) {
	self->newConnection();
}

void QTcpServer_connect_NewConnection(QTcpServer* self, intptr_t slot) {
	MiqtVirtualQTcpServer::connect(self, static_cast<void (QTcpServer::*)()>(&QTcpServer::newConnection), self, [=]() {
		miqt_exec_callback_QTcpServer_NewConnection(slot);
	});
}

void QTcpServer_AcceptError(QTcpServer* self, int socketError) {
	self->acceptError(static_cast<QAbstractSocket::SocketError>(socketError));
}

void QTcpServer_connect_AcceptError(QTcpServer* self, intptr_t slot) {
	MiqtVirtualQTcpServer::connect(self, static_cast<void (QTcpServer::*)(QAbstractSocket::SocketError)>(&QTcpServer::acceptError), self, [=](QAbstractSocket::SocketError socketError) {
		QAbstractSocket::SocketError socketError_ret = socketError;
		int sigval1 = static_cast<int>(socketError_ret);
		miqt_exec_callback_QTcpServer_AcceptError(slot, sigval1);
	});
}

struct miqt_string QTcpServer_Tr2(const char* s, const char* c) {
	QString _ret = QTcpServer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpServer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTcpServer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpServer_TrUtf82(const char* s, const char* c) {
	QString _ret = QTcpServer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpServer_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTcpServer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTcpServer_Listen1(QTcpServer* self, QHostAddress* address) {
	return self->listen(*address);
}

bool QTcpServer_Listen2(QTcpServer* self, QHostAddress* address, uint16_t port) {
	return self->listen(*address, static_cast<quint16>(port));
}

bool QTcpServer_WaitForNewConnection1(QTcpServer* self, int msec) {
	return self->waitForNewConnection(static_cast<int>(msec));
}

bool QTcpServer_WaitForNewConnection2(QTcpServer* self, int msec, bool* timedOut) {
	return self->waitForNewConnection(static_cast<int>(msec), timedOut);
}

void QTcpServer_override_virtual_HasPendingConnections(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) )->handle__HasPendingConnections = slot;
}

bool QTcpServer_virtualbase_HasPendingConnections(const void* self) {
	return ( (const MiqtVirtualQTcpServer*)(self) )->virtualbase_HasPendingConnections();
}

void QTcpServer_override_virtual_NextPendingConnection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) )->handle__NextPendingConnection = slot;
}

QTcpSocket* QTcpServer_virtualbase_NextPendingConnection(void* self) {
	return ( (MiqtVirtualQTcpServer*)(self) )->virtualbase_NextPendingConnection();
}

void QTcpServer_override_virtual_IncomingConnection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) )->handle__IncomingConnection = slot;
}

void QTcpServer_virtualbase_IncomingConnection(void* self, intptr_t handle) {
	( (MiqtVirtualQTcpServer*)(self) )->virtualbase_IncomingConnection(handle);
}

void QTcpServer_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) )->handle__Event = slot;
}

bool QTcpServer_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTcpServer*)(self) )->virtualbase_Event(event);
}

void QTcpServer_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) )->handle__EventFilter = slot;
}

bool QTcpServer_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTcpServer*)(self) )->virtualbase_EventFilter(watched, event);
}

void QTcpServer_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) )->handle__TimerEvent = slot;
}

void QTcpServer_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTcpServer*)(self) )->virtualbase_TimerEvent(event);
}

void QTcpServer_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) )->handle__ChildEvent = slot;
}

void QTcpServer_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTcpServer*)(self) )->virtualbase_ChildEvent(event);
}

void QTcpServer_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) )->handle__CustomEvent = slot;
}

void QTcpServer_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTcpServer*)(self) )->virtualbase_CustomEvent(event);
}

void QTcpServer_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) )->handle__ConnectNotify = slot;
}

void QTcpServer_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTcpServer*)(self) )->virtualbase_ConnectNotify(signal);
}

void QTcpServer_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) )->handle__DisconnectNotify = slot;
}

void QTcpServer_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTcpServer*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QTcpServer_Delete(QTcpServer* self) {
	delete self;
}

