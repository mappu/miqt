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

void miqt_exec_callback_QTcpServer_newConnection(intptr_t);
void miqt_exec_callback_QTcpServer_acceptError(intptr_t, int);
bool miqt_exec_callback_QTcpServer_hasPendingConnections(const QTcpServer*, intptr_t);
QTcpSocket* miqt_exec_callback_QTcpServer_nextPendingConnection(QTcpServer*, intptr_t);
void miqt_exec_callback_QTcpServer_incomingConnection(QTcpServer*, intptr_t, intptr_t);
bool miqt_exec_callback_QTcpServer_event(QTcpServer*, intptr_t, QEvent*);
bool miqt_exec_callback_QTcpServer_eventFilter(QTcpServer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTcpServer_timerEvent(QTcpServer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTcpServer_childEvent(QTcpServer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTcpServer_customEvent(QTcpServer*, intptr_t, QEvent*);
void miqt_exec_callback_QTcpServer_connectNotify(QTcpServer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTcpServer_disconnectNotify(QTcpServer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTcpServer final : public QTcpServer {
public:

	MiqtVirtualQTcpServer(): QTcpServer() {};
	MiqtVirtualQTcpServer(QObject* parent): QTcpServer(parent) {};

	virtual ~MiqtVirtualQTcpServer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasPendingConnections = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasPendingConnections() const override {
		if (handle__hasPendingConnections == 0) {
			return QTcpServer::hasPendingConnections();
		}
		

		bool callback_return_value = miqt_exec_callback_QTcpServer_hasPendingConnections(this, handle__hasPendingConnections);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasPendingConnections() const {

		return QTcpServer::hasPendingConnections();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextPendingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual QTcpSocket* nextPendingConnection() override {
		if (handle__nextPendingConnection == 0) {
			return QTcpServer::nextPendingConnection();
		}
		

		QTcpSocket* callback_return_value = miqt_exec_callback_QTcpServer_nextPendingConnection(this, handle__nextPendingConnection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTcpSocket* virtualbase_nextPendingConnection() {

		return QTcpServer::nextPendingConnection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__incomingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual void incomingConnection(qintptr handle) override {
		if (handle__incomingConnection == 0) {
			QTcpServer::incomingConnection(handle);
			return;
		}
		
		qintptr handle_ret = handle;
		intptr_t sigval1 = (intptr_t)(handle_ret);

		miqt_exec_callback_QTcpServer_incomingConnection(this, handle__incomingConnection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_incomingConnection(intptr_t handle) {

		QTcpServer::incomingConnection((qintptr)(handle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTcpServer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTcpServer_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QTcpServer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTcpServer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTcpServer_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QTcpServer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTcpServer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTcpServer_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTcpServer::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTcpServer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTcpServer_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTcpServer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTcpServer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTcpServer_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTcpServer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTcpServer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTcpServer_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTcpServer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTcpServer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTcpServer_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTcpServer::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QTcpServer_protectedbase_addPendingConnection(bool* _dynamic_cast_ok, void* self, QTcpSocket* socket);
	friend QObject* QTcpServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTcpServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTcpServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTcpServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QTcpServer_metaObject(const QTcpServer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTcpServer_metacast(QTcpServer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTcpServer_tr(const char* s) {
	QString _ret = QTcpServer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTcpServer_listen(QTcpServer* self) {
	return self->listen();
}

void QTcpServer_close(QTcpServer* self) {
	self->close();
}

bool QTcpServer_isListening(const QTcpServer* self) {
	return self->isListening();
}

void QTcpServer_setMaxPendingConnections(QTcpServer* self, int numConnections) {
	self->setMaxPendingConnections(static_cast<int>(numConnections));
}

int QTcpServer_maxPendingConnections(const QTcpServer* self) {
	return self->maxPendingConnections();
}

void QTcpServer_setListenBacklogSize(QTcpServer* self, int size) {
	self->setListenBacklogSize(static_cast<int>(size));
}

int QTcpServer_listenBacklogSize(const QTcpServer* self) {
	return self->listenBacklogSize();
}

uint16_t QTcpServer_serverPort(const QTcpServer* self) {
	quint16 _ret = self->serverPort();
	return static_cast<uint16_t>(_ret);
}

QHostAddress* QTcpServer_serverAddress(const QTcpServer* self) {
	return new QHostAddress(self->serverAddress());
}

intptr_t QTcpServer_socketDescriptor(const QTcpServer* self) {
	qintptr _ret = self->socketDescriptor();
	return (intptr_t)(_ret);
}

bool QTcpServer_setSocketDescriptor(QTcpServer* self, intptr_t socketDescriptor) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor));
}

bool QTcpServer_waitForNewConnection(QTcpServer* self) {
	return self->waitForNewConnection();
}

bool QTcpServer_hasPendingConnections(const QTcpServer* self) {
	return self->hasPendingConnections();
}

QTcpSocket* QTcpServer_nextPendingConnection(QTcpServer* self) {
	return self->nextPendingConnection();
}

int QTcpServer_serverError(const QTcpServer* self) {
	QAbstractSocket::SocketError _ret = self->serverError();
	return static_cast<int>(_ret);
}

struct miqt_string QTcpServer_errorString(const QTcpServer* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTcpServer_pauseAccepting(QTcpServer* self) {
	self->pauseAccepting();
}

void QTcpServer_resumeAccepting(QTcpServer* self) {
	self->resumeAccepting();
}

void QTcpServer_setProxy(QTcpServer* self, QNetworkProxy* networkProxy) {
	self->setProxy(*networkProxy);
}

QNetworkProxy* QTcpServer_proxy(const QTcpServer* self) {
	return new QNetworkProxy(self->proxy());
}

void QTcpServer_newConnection(QTcpServer* self) {
	self->newConnection();
}

void QTcpServer_connect_newConnection(QTcpServer* self, intptr_t slot) {
	MiqtVirtualQTcpServer::connect(self, static_cast<void (QTcpServer::*)()>(&QTcpServer::newConnection), self, [=]() {
		miqt_exec_callback_QTcpServer_newConnection(slot);
	});
}

void QTcpServer_acceptError(QTcpServer* self, int socketError) {
	self->acceptError(static_cast<QAbstractSocket::SocketError>(socketError));
}

void QTcpServer_connect_acceptError(QTcpServer* self, intptr_t slot) {
	MiqtVirtualQTcpServer::connect(self, static_cast<void (QTcpServer::*)(QAbstractSocket::SocketError)>(&QTcpServer::acceptError), self, [=](QAbstractSocket::SocketError socketError) {
		QAbstractSocket::SocketError socketError_ret = socketError;
		int sigval1 = static_cast<int>(socketError_ret);
		miqt_exec_callback_QTcpServer_acceptError(slot, sigval1);
	});
}

struct miqt_string QTcpServer_tr2(const char* s, const char* c) {
	QString _ret = QTcpServer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpServer_tr3(const char* s, const char* c, int n) {
	QString _ret = QTcpServer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTcpServer_listen1(QTcpServer* self, QHostAddress* address) {
	return self->listen(*address);
}

bool QTcpServer_listen2(QTcpServer* self, QHostAddress* address, uint16_t port) {
	return self->listen(*address, static_cast<quint16>(port));
}

bool QTcpServer_waitForNewConnection1(QTcpServer* self, int msec) {
	return self->waitForNewConnection(static_cast<int>(msec));
}

bool QTcpServer_waitForNewConnection2(QTcpServer* self, int msec, bool* timedOut) {
	return self->waitForNewConnection(static_cast<int>(msec), timedOut);
}

bool QTcpServer_override_virtual_hasPendingConnections(void* self, intptr_t slot) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasPendingConnections = slot;
	return true;
}

bool QTcpServer_virtualbase_hasPendingConnections(const void* self) {
	return ( (const MiqtVirtualQTcpServer*)(self) )->virtualbase_hasPendingConnections();
}

bool QTcpServer_override_virtual_nextPendingConnection(void* self, intptr_t slot) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nextPendingConnection = slot;
	return true;
}

QTcpSocket* QTcpServer_virtualbase_nextPendingConnection(void* self) {
	return ( (MiqtVirtualQTcpServer*)(self) )->virtualbase_nextPendingConnection();
}

bool QTcpServer_override_virtual_incomingConnection(void* self, intptr_t slot) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__incomingConnection = slot;
	return true;
}

void QTcpServer_virtualbase_incomingConnection(void* self, intptr_t handle) {
	( (MiqtVirtualQTcpServer*)(self) )->virtualbase_incomingConnection(handle);
}

bool QTcpServer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTcpServer_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTcpServer*)(self) )->virtualbase_event(event);
}

bool QTcpServer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTcpServer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTcpServer*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QTcpServer_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTcpServer_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTcpServer*)(self) )->virtualbase_timerEvent(event);
}

bool QTcpServer_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTcpServer_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTcpServer*)(self) )->virtualbase_childEvent(event);
}

bool QTcpServer_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTcpServer_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTcpServer*)(self) )->virtualbase_customEvent(event);
}

bool QTcpServer_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTcpServer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTcpServer*)(self) )->virtualbase_connectNotify(signal);
}

bool QTcpServer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTcpServer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTcpServer*)(self) )->virtualbase_disconnectNotify(signal);
}

void QTcpServer_protectedbase_addPendingConnection(bool* _dynamic_cast_ok, void* self, QTcpSocket* socket) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addPendingConnection(socket);

}

QObject* QTcpServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTcpServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTcpServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTcpServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTcpServer* self_cast = dynamic_cast<MiqtVirtualQTcpServer*>( (QTcpServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTcpServer_delete(QTcpServer* self) {
	delete self;
}

