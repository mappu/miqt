#include <QChildEvent>
#include <QEvent>
#include <QLocalServer>
#include <QLocalSocket>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qlocalserver.h>
#include "gen_qlocalserver.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLocalServer_newConnection(intptr_t);
bool miqt_exec_callback_QLocalServer_hasPendingConnections(const QLocalServer*, intptr_t);
QLocalSocket* miqt_exec_callback_QLocalServer_nextPendingConnection(QLocalServer*, intptr_t);
void miqt_exec_callback_QLocalServer_incomingConnection(QLocalServer*, intptr_t, uintptr_t);
bool miqt_exec_callback_QLocalServer_event(QLocalServer*, intptr_t, QEvent*);
bool miqt_exec_callback_QLocalServer_eventFilter(QLocalServer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QLocalServer_timerEvent(QLocalServer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QLocalServer_childEvent(QLocalServer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QLocalServer_customEvent(QLocalServer*, intptr_t, QEvent*);
void miqt_exec_callback_QLocalServer_connectNotify(QLocalServer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QLocalServer_disconnectNotify(QLocalServer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLocalServer final : public QLocalServer {
public:

	MiqtVirtualQLocalServer(): QLocalServer() {};
	MiqtVirtualQLocalServer(QObject* parent): QLocalServer(parent) {};

	virtual ~MiqtVirtualQLocalServer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasPendingConnections = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasPendingConnections() const override {
		if (handle__hasPendingConnections == 0) {
			return QLocalServer::hasPendingConnections();
		}
		

		bool callback_return_value = miqt_exec_callback_QLocalServer_hasPendingConnections(this, handle__hasPendingConnections);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasPendingConnections() const {

		return QLocalServer::hasPendingConnections();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextPendingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual QLocalSocket* nextPendingConnection() override {
		if (handle__nextPendingConnection == 0) {
			return QLocalServer::nextPendingConnection();
		}
		

		QLocalSocket* callback_return_value = miqt_exec_callback_QLocalServer_nextPendingConnection(this, handle__nextPendingConnection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLocalSocket* virtualbase_nextPendingConnection() {

		return QLocalServer::nextPendingConnection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__incomingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual void incomingConnection(quintptr socketDescriptor) override {
		if (handle__incomingConnection == 0) {
			QLocalServer::incomingConnection(socketDescriptor);
			return;
		}
		
		quintptr socketDescriptor_ret = socketDescriptor;
		uintptr_t sigval1 = static_cast<uintptr_t>(socketDescriptor_ret);

		miqt_exec_callback_QLocalServer_incomingConnection(this, handle__incomingConnection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_incomingConnection(uintptr_t socketDescriptor) {

		QLocalServer::incomingConnection(static_cast<quintptr>(socketDescriptor));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QLocalServer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QLocalServer_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QLocalServer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QLocalServer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QLocalServer_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QLocalServer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QLocalServer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QLocalServer_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QLocalServer::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QLocalServer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QLocalServer_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QLocalServer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QLocalServer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLocalServer_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QLocalServer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QLocalServer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLocalServer_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QLocalServer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QLocalServer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLocalServer_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QLocalServer::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QLocalServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QLocalServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QLocalServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QLocalServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QLocalServer* QLocalServer_new() {
	return new MiqtVirtualQLocalServer();
}

QLocalServer* QLocalServer_new2(QObject* parent) {
	return new MiqtVirtualQLocalServer(parent);
}

void QLocalServer_virtbase(QLocalServer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QLocalServer_metaObject(const QLocalServer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLocalServer_metacast(QLocalServer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLocalServer_tr(const char* s) {
	QString _ret = QLocalServer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalServer_trUtf8(const char* s) {
	QString _ret = QLocalServer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLocalServer_newConnection(QLocalServer* self) {
	self->newConnection();
}

void QLocalServer_connect_newConnection(QLocalServer* self, intptr_t slot) {
	MiqtVirtualQLocalServer::connect(self, static_cast<void (QLocalServer::*)()>(&QLocalServer::newConnection), self, [=]() {
		miqt_exec_callback_QLocalServer_newConnection(slot);
	});
}

void QLocalServer_close(QLocalServer* self) {
	self->close();
}

struct miqt_string QLocalServer_errorString(const QLocalServer* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLocalServer_hasPendingConnections(const QLocalServer* self) {
	return self->hasPendingConnections();
}

bool QLocalServer_isListening(const QLocalServer* self) {
	return self->isListening();
}

bool QLocalServer_listen(QLocalServer* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->listen(name_QString);
}

bool QLocalServer_listenWithSocketDescriptor(QLocalServer* self, intptr_t socketDescriptor) {
	return self->listen((qintptr)(socketDescriptor));
}

int QLocalServer_maxPendingConnections(const QLocalServer* self) {
	return self->maxPendingConnections();
}

QLocalSocket* QLocalServer_nextPendingConnection(QLocalServer* self) {
	return self->nextPendingConnection();
}

struct miqt_string QLocalServer_serverName(const QLocalServer* self) {
	QString _ret = self->serverName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalServer_fullServerName(const QLocalServer* self) {
	QString _ret = self->fullServerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLocalServer_removeServer(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return QLocalServer::removeServer(name_QString);
}

int QLocalServer_serverError(const QLocalServer* self) {
	QAbstractSocket::SocketError _ret = self->serverError();
	return static_cast<int>(_ret);
}

void QLocalServer_setMaxPendingConnections(QLocalServer* self, int numConnections) {
	self->setMaxPendingConnections(static_cast<int>(numConnections));
}

bool QLocalServer_waitForNewConnection(QLocalServer* self) {
	return self->waitForNewConnection();
}

void QLocalServer_setSocketOptions(QLocalServer* self, int options) {
	self->setSocketOptions(static_cast<QLocalServer::SocketOptions>(options));
}

int QLocalServer_socketOptions(const QLocalServer* self) {
	QLocalServer::SocketOptions _ret = self->socketOptions();
	return static_cast<int>(_ret);
}

intptr_t QLocalServer_socketDescriptor(const QLocalServer* self) {
	qintptr _ret = self->socketDescriptor();
	return (intptr_t)(_ret);
}

struct miqt_string QLocalServer_tr2(const char* s, const char* c) {
	QString _ret = QLocalServer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalServer_tr3(const char* s, const char* c, int n) {
	QString _ret = QLocalServer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalServer_trUtf82(const char* s, const char* c) {
	QString _ret = QLocalServer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalServer_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QLocalServer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLocalServer_waitForNewConnection1(QLocalServer* self, int msec) {
	return self->waitForNewConnection(static_cast<int>(msec));
}

bool QLocalServer_waitForNewConnection2(QLocalServer* self, int msec, bool* timedOut) {
	return self->waitForNewConnection(static_cast<int>(msec), timedOut);
}

bool QLocalServer_override_virtual_hasPendingConnections(void* self, intptr_t slot) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasPendingConnections = slot;
	return true;
}

bool QLocalServer_virtualbase_hasPendingConnections(const void* self) {
	return ( (const MiqtVirtualQLocalServer*)(self) )->virtualbase_hasPendingConnections();
}

bool QLocalServer_override_virtual_nextPendingConnection(void* self, intptr_t slot) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nextPendingConnection = slot;
	return true;
}

QLocalSocket* QLocalServer_virtualbase_nextPendingConnection(void* self) {
	return ( (MiqtVirtualQLocalServer*)(self) )->virtualbase_nextPendingConnection();
}

bool QLocalServer_override_virtual_incomingConnection(void* self, intptr_t slot) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__incomingConnection = slot;
	return true;
}

void QLocalServer_virtualbase_incomingConnection(void* self, uintptr_t socketDescriptor) {
	( (MiqtVirtualQLocalServer*)(self) )->virtualbase_incomingConnection(socketDescriptor);
}

bool QLocalServer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QLocalServer_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQLocalServer*)(self) )->virtualbase_event(event);
}

bool QLocalServer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QLocalServer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQLocalServer*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QLocalServer_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QLocalServer_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQLocalServer*)(self) )->virtualbase_timerEvent(event);
}

bool QLocalServer_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QLocalServer_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQLocalServer*)(self) )->virtualbase_childEvent(event);
}

bool QLocalServer_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QLocalServer_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLocalServer*)(self) )->virtualbase_customEvent(event);
}

bool QLocalServer_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QLocalServer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLocalServer*)(self) )->virtualbase_connectNotify(signal);
}

bool QLocalServer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QLocalServer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLocalServer*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QLocalServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QLocalServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QLocalServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QLocalServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQLocalServer* self_cast = dynamic_cast<MiqtVirtualQLocalServer*>( (QLocalServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QLocalServer_delete(QLocalServer* self) {
	delete self;
}

